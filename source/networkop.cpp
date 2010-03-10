/****************************************************************************
 * WiiMC
 * Tantric 2009
 *
 * networkop.cpp
 * Network and SMB support routines
 ****************************************************************************/

#include <network.h>
#include <smb.h>
#include <unistd.h>
#include <mxml.h>

#include "wiimc.h"
#include "fileop.h"
#include "filebrowser.h"
#include "menu.h"
#include "networkop.h"
#include "settings.h"
#include "utils/ftp_devoptab.h"
#include "utils/http.h"
#include "utils/unzip/unzip.h"
#include "utils/unzip/miniunz.h"

bool inNetworkInit = false;
static bool networkInit = false;
static bool autoNetworkInit = true;
static bool networkShareInit[5] = { false, false, false, false, false };
static bool ftpInit[5] = { false, false, false, false, false };

static bool updateChecked = false; // true if checked for app update
static char updateURL[128]; // URL of app update
bool updateFound = false; // true if an app update was found

/****************************************************************************
 * UpdateCheck
 * Checks for an update for the application
 ***************************************************************************/

void UpdateCheck()
{
	// we can only check for the update if we have internet + SD or USB
	if(!updateChecked && networkInit && (isInserted[DEVICE_SD] || isInserted[DEVICE_USB]))
	{
		static char url[128];
		int retval;

		updateChecked = true;

		snprintf(url, 128, "http://wiimc.googlecode.com/svn/trunk/update.xml");

		u8 * tmpbuffer = (u8 *)memalign(32,32768);
		memset(tmpbuffer, 0, 32768);
		retval = http_request(url, NULL, tmpbuffer, 32768);
		memset(url, 0, 128);

		if (retval)
		{
			mxml_node_t *xml;
			mxml_node_t *item;

			xml = mxmlLoadString(NULL, (char *)tmpbuffer, MXML_TEXT_CALLBACK);

			if(xml)
			{
				// check settings version
				item = mxmlFindElement(xml, xml, "app", "version", NULL, MXML_DESCEND);
				if(item) // a version entry exists
				{
					const char * version = mxmlElementGetAttr(item, "version");

					if(version && strlen(version) == 5)
					{
						int verMajor = version[0] - '0';
						int verMinor = version[2] - '0';
						int verPoint = version[4] - '0';
						int curMajor = APPVERSION[0] - '0';
						int curMinor = APPVERSION[2] - '0';
						int curPoint = APPVERSION[4] - '0';

						// check that the versioning is valid and is a newer version
						if((verMajor >= 0 && verMajor <= 9 &&
							verMinor >= 0 && verMinor <= 9 &&
							verPoint >= 0 && verPoint <= 9) &&
							(verMajor > curMajor ||
							(verMajor == curMajor && verMinor > curMinor) ||
							(verMajor == curMajor && verMinor == curMinor && verPoint > curPoint)))
						{
							item = mxmlFindElement(xml, xml, "file", NULL, NULL, MXML_DESCEND);
							if(item)
							{
								const char * tmp = mxmlElementGetAttr(item, "url");
								if(tmp)
								{
									snprintf(updateURL, 128, "%s", tmp);
									updateFound = true;
								}
							}
						}
					}
				}
				mxmlDelete(xml);
			}
		}
		free(tmpbuffer);
	}
}

static bool unzipArchive(char * zipfilepath, char * unzipfolderpath)
{
	unzFile uf = unzOpen(zipfilepath);
	if (uf==NULL)
		return false;

	if(chdir(unzipfolderpath)) // can't access dir
	{
		makedir(unzipfolderpath); // attempt to make dir
		if(chdir(unzipfolderpath)) // still can't access dir
			return false;
	}

	extractZip(uf,0,1,0);

	unzCloseCurrentFile(uf);
	return true;
}

bool DownloadUpdate()
{
	bool result = false;

	if(strlen(updateURL) == 0 || strlen(appPath) == 0)
		goto done;

	if(!ChangeInterface(appPath, NOTSILENT))
		goto done;

	// stop checking if devices were removed/inserted
	// since we're saving a file
	SuspendDeviceThread();

	// find devoptab name
	char dev[10];
	int i;
	for(i=0; i < 8; i++)
	{
		dev[i] = appPath[i];
		if(appPath[i] == '/') break;
	}
	dev[i+1] = 0;

	FILE * hfile;
	char updateFile[50];
	sprintf(updateFile, "%s%s Update.zip", dev, APPNAME);
	hfile = fopen (updateFile, "wb");

	if (hfile > 0)
	{
		int retval;
		retval = http_request(updateURL, hfile, NULL, (1024*1024*5));
		fclose (hfile);
	}

	result = unzipArchive(updateFile, dev);
	remove(updateFile); // delete update file

	// go back to checking if devices were inserted/removed
	ResumeDeviceThread();
	
done:	
	if(result)
		InfoPrompt("Update successful!");
	else
		ErrorPrompt("Update failed!");

	updateFound = false; // updating is finished (successful or not!)
	return result;
}

/****************************************************************************
 * InitializeNetwork
 * Initializes the Wii/GameCube network interface
 ***************************************************************************/

void InitializeNetwork(bool silent)
{
	// stop if we're already initialized, or if auto-init has failed before
	// in which case, manual initialization is required
	if(networkInit || (silent && !autoNetworkInit))
		return;

	int retry = 1;
	char ip[16];
	char msg[150];
	s32 initResult;

	if(!silent)
		ShowAction ("Initializing network...");

	while(inNetworkInit) // a network init is already in progress!
		usleep(50);

	if(!networkInit) // check again if the network was inited
	{
		inNetworkInit = true;

		while(retry)
		{
			if(!silent)
				ShowAction ("Initializing network...");

			initResult = if_config(ip, NULL, NULL, true);

			if(initResult == 0)
				networkInit = true;

			if(networkInit || silent)
				break;

			sprintf(msg, "Unable to initialize network (Error #: %i)", initResult);
			retry = ErrorPromptRetry(msg);
		}

		// do not automatically attempt a reconnection
		autoNetworkInit = false;
		inNetworkInit = false;
	}
	if(!silent)
		CancelAction();
}

void CloseShare(int num)
{
	char devName[10];
	sprintf(devName, "smb%d", num);

	if(networkShareInit[num-1])
		smbClose(devName);
	networkShareInit[num-1] = false;
}

/****************************************************************************
 * Mount SMB Share
 ****************************************************************************/

bool
ConnectShare (int num, bool silent)
{
	char mountpoint[6];
	sprintf(mountpoint, "smb%d", num);
	int retry = 1;
	int chkS = (strlen(WiiSettings.smbConf[num-1].share) > 0) ? 0:1;
	int chkI = (strlen(WiiSettings.smbConf[num-1].ip) > 0) ? 0:1;

	if(networkShareInit[num-1])
		return true;

	// check that all parameters have been set
	if(chkS + chkI > 0)
	{
		if(!silent)
		{
			char msg[50];
			char msg2[100];
			if(chkS + chkI > 1) // more than one thing is wrong
				sprintf(msg, "Check settings file.");
			else if(chkS)
				sprintf(msg, "Share name is blank.");
			else if(chkI)
				sprintf(msg, "Share IP is blank.");

			sprintf(msg2, "Invalid network share settings - %s", msg);
			ErrorPrompt(msg2);
		}
		return false;
	}

	if(!networkInit)
		InitializeNetwork(silent);

	if(!networkInit)
		return false;

	while(retry)
	{
		if(!silent)
			ShowAction ("Connecting to network share...");
		
		if(smbInitDevice(mountpoint, WiiSettings.smbConf[num-1].user, WiiSettings.smbConf[num-1].pwd,
					WiiSettings.smbConf[num-1].share, WiiSettings.smbConf[num-1].ip))
			networkShareInit[num-1] = true;

		if(networkShareInit[num-1] || silent)
			break;

		retry = ErrorPromptRetry("Failed to connect to network share.");
	}

	if(!silent)
		CancelAction();

	return networkShareInit[num-1];
}

void CloseFTP(int num)
{
	char devName[10];
	sprintf(devName, "ftp%d", num);

	if(ftpInit[num-1])
		ftpClose(devName);
	ftpInit[num-1] = false;
}

/****************************************************************************
 * Mount FTP site
 ****************************************************************************/

bool
ConnectFTP (int num, bool silent)
{
	char mountpoint[6];
	sprintf(mountpoint, "ftp%d", num);

	int chkI = (strlen(WiiSettings.ftpConf[num-1].ip) > 0) ? 0:1;
	int chkU = (strlen(WiiSettings.ftpConf[num-1].user) > 0) ? 0:1;
	int chkP = (strlen(WiiSettings.ftpConf[num-1].pwd) > 0) ? 0:1;

	// check that all parameters have been set
	if(chkI + chkU + chkP > 0)
	{
		if(!silent)
		{
			char msg[50];
			char msg2[100];
			if(chkI + chkU + chkP > 1) // more than one thing is wrong
				sprintf(msg, "Check settings file.");
			else if(chkI)
				sprintf(msg, "IP is blank.");
			else if(chkU)
				sprintf(msg, "Username is blank.");
			else if(chkP)
				sprintf(msg, "Password is blank.");

			sprintf(msg2, "Invalid FTP site settings - %s", msg);
			ErrorPrompt(msg2);
		}
		return false;
	}

	if(!networkInit)
		InitializeNetwork(silent);

	if(networkInit)
	{
		if(!ftpInit[num-1])
		{
			if(!silent)
				ShowAction ("Connecting to FTP site...");

			if(ftpInitDevice(mountpoint, WiiSettings.ftpConf[num-1].user, 
				WiiSettings.ftpConf[num-1].pwd, WiiSettings.ftpConf[num-1].folder, 
				WiiSettings.ftpConf[num-1].ip, 21, WiiSettings.ftpConf[num-1].passive))
			{
				ftpInit[num-1] = true;
			}
			if(!silent)
				CancelAction();
		}

		if(!ftpInit[num-1] && !silent)
			ErrorPrompt("Failed to connect to FTP site.");
	}

	return ftpInit[num-1];
}
