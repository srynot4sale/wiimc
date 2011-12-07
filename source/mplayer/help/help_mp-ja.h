// Translated to Japanese.
// Translated by smoker <http://smokerz.net/~smoker/>

// This translation is not complete yet.

// ========================= MPlayer help ===========================

static const char help_text[]=
"使�?�方:   mplayer [オプション] [url|パス/]ファイル�??\n"
"\n"
"基本的�?�オプション: (man page �?�全�?�網羅�?�れ�?��?��?��?�)\n"
" -vo <drv[:dev]>  映�?出力ドライ�?�?��?�デ�?イスを�?�択�?��?��?� ('-vo help'�?�一覧表示�?�れ�?��?�)\n"
" -ao <drv[:dev]>  音声出力ドライ�?�?��?�デ�?イスを�?�択�?��?��?� ('-ao help'�?�一覧表示�?�れ�?��?�)\n"
#ifdef CONFIG_VCD
" vcd://<trackno>   play VCD (Video CD) track from device instead of plain file\n"
#endif
#ifdef CONFIG_DVDREAD
" dvd://<titleno>   play DVD title from device instead of plain file\n"
" -alang/-slang    DVD�?� 音声/サブタイトル 言語設定 (2文字�?�カントリーコード�?�指定)\n"
#endif
" -ss <timepos>    timepos�?�与�?�られ�?�場所�?�ら�?生�?��?��?�(seconds or hh:mm:ss)\n"
" -nosound         音声出力を抑止�?��?��?�\n"
" -fs              フルスクリーン表示�?��?��?�(も�?��??�?� -vm, -zoom, 詳細�?�man�?��?�り�?��?�)\n"
" -x <x> -y <y>    表示サイズを指定�?��?��?� (一緒�?�次�?�オプションを利用下�?��?� -vm or -zoom)\n"
" -sub <file>      利用�?�る subtitle ファイルを�?�択�?�る(-subfps, -subdelay も御覧下�?��?�)\n"
" -playlist <file> playlistファイルを�?�択�?�る\n"
" -vid x -aid y    select video (x) and audio (y) stream to play\n"
" -fps x -srate y  change video (x fps) and audio (y Hz) rate\n"
" -pp <quality>    postprocessing filterを有効�?��?�る (詳細�?� man page �?��?�り�?��?�)\n"
" -framedrop       frame droppingを有効�?��?�る (低速�?�マシン�?��??�?��?�)\n"
"\n"
"基本的�?�コマンド: (man page�?�全�?�網羅�?�れ�?��?��?��?�。事�?�?�input.confも確�?�?��?�下�?��?�)\n"
" <-  or  ->       10秒�?��?�?��?後�?�シーク�?��?��?�\n"
" up or down       1分�?��?�?��?後�?�シーク�?��?��?�\n"
" pgup or pgdown   10分�?��?�?��?後�?�シーク�?��?��?�\n"
" < or >           プレイリストを元�?��?後�?�ファイル�?��?�移�?��?��?�\n"
" p or SPACE       �?生を�?�止�?��?��?�(何�?�ボタンを押下�?�る�?��?生を開始�?��?��?�)\n"
" q or ESC         �?生を�?�止�?��?プログラムを�?�止�?��?��?�\n"
" + or -           音声を 0.1 秒�?��?�?�早�?�?�り�?�れ�?��?��?�り調整�?�る\n"
" o                cycle OSD mode:  none / seekbar / seekbar + timer\n"
" * or /           PCM 音�?を上�?��?�り下�?��?�り�?�る\n"
" z or x           subtitleを 0.1 秒�?��?�?�早�?�?�り�?�れ�?��?��?�り調整�?�る\n"
" r or t           subtitle�?��?置を上�?��?�り下�?��?�り調整�?�る, -vfオプションも確�?�?��?�下�?��?�\n"
"\n"
" * * * man page�?�詳細�?��?�り�?��?��?��?��?確�?�?��?�下�?��?�。�?�ら�?�高度�?�進ん�?�オプションやキーも記載�?��?��?��?� * * *\n"
"\n";

// ========================= MPlayer messages ===========================

// mplayer.c:

#define MSGTR_Exiting "\n終了�?��?��?��?��?�\n"
#define MSGTR_ExitingHow "\n終了�?��?��?��?��?�... (%s)\n"
#define MSGTR_Exit_quit "終了"
#define MSGTR_Exit_eof "ファイル�?�末端�?��?�"
#define MSGTR_Exit_error "致命的エラー"
#define MSGTR_IntBySignal "\nMPlayer �?�シグナル %d �?�よ�?��?�中断�?��?��?��?�．次�?�モジュール�?�ら�?��?�: %s\n"
#define MSGTR_NoHomeDir "ホームディレクトリを見付�?�る�?��?��?�出�?��?��?�ん�?��?��?�.\n"
#define MSGTR_GetpathProblem "get_path(\"config\") �?��?題�?�起�??�?��?��?�\n"
#define MSGTR_CreatingCfgFile "config fileを作�?�?��?��?��?�: %s\n"
#define MSGTR_CantLoadFont "フォントをロード出�?��?��?�ん: %s\n"
#define MSGTR_CantLoadSub "サブタイトルをロード出�?��?��?�ん: %s\n"
#define MSGTR_CantOpenDumpfile "dump fileを開�?��?��?�ん\n"
#define MSGTR_CoreDumped "コアダンプ ;)\n"
#define MSGTR_FPSnotspecified "FPS �?�ヘッダ�?�指定�?�れ�?��?��?��?��?��?正�?��?�. -fps オプションを利用�?��?�下�?��?�.\n"
#define MSGTR_CantFindAudioCodec "audio format 0x%X �?��?��?�コーデックを見付�?�る事�?�出�?��?��?�ん�?��?��?�.\n"
#define MSGTR_VOincompCodec "�?�択�?�れ�?�映�?出力デ�?イス�?�コーデック�?�互�?�性�?��?�り�?��?�ん\n"
#define MSGTR_CannotInitVO "FATAL: 映�?出力ドライ�?�?��?期化�?�失敗�?��?��?��?�.\n"
#define MSGTR_CannotInitAO "音声デ�?イス�?��?期化�?�失敗�?��?��?��?� -> 無音声�?��?�り�?��?�.\n"
#define MSGTR_StartPlaying "�?生開始...\n"

#define MSGTR_SystemTooSlow "\n\n"\
"           ************************************************\n"\
"           ***  貴方�?�システム�?��?�れを�?生�?�る�?��?��?��?�  ***\n"\
"           ************************************************\n\n"\
"予想�?�れる�?題や環境�?�:\n"\
"- Most common: 壊れ�?�る�?��?�?ギー�?� 音声ドライ�?ー\n"\
"  - -ao を使�?� sdl �?� ALSA 0.5 も�?��??�?�ALSA 0.9�?�OSSエミュレーションを試�?�る.\n"\
"  - Experiment with different values for -autosync, 30 is a good start.\n"\
"- 映�?出力�?��?��?�\n"\
"  - �?��?� -vo ドライ�?を利用�?�る�?�(-vo help�?�リスト�?�得られ�?��?�) -framedropを試�?�る\n"\
"- CPU�?��?��?�\n"\
"  - 巨大�?�DVDやDivXを�?��?�CPU�?��?生�?�よ�?��?�試�?��?��?� ;-) -hardframedropを試�?�る\n"\
"- ファイル�?�壊れ�?�る\n"\
"  - 次�?�オプション�?�様々�?�組�?��?�を試�?��?�下�?��?�: -nobps -ni -forceidx -mc 0.\n"\
"- �?��?�メディア(NFS/SMB �?��?��?�り, DVD, VCD �?��?��?�ドライブ�?��?��?��?��?�り)\n"\
"  -次�?�オプションを試�?�る -cache 8192.\n"\
"- non-interleaved AVI ファイル�?� -cacheオプションを使�?��?��?��?�ん�?�?\n"\
"  - 次�?�オプションを試�?�る -nocache.\n"\
"�?ューニング�?スピードアップ�?�為�?� DOCS/HTML/en/video.html を御覧下�?��?�.\n"\
"も�?��?�?�れらを試�?��?�も何も�?��?�化�?�得られ�?��?�場�?��?��?DOCS/HTML/en/bugreports.html を御覧下�?��?�.\n\n"

#define MSGTR_NoGui "MPlayer �?�GUIサ�?ートを無効�?��?��?�コンパイル�?�れ�?��?��?�.\n"
#define MSGTR_GuiNeedsX "MPlayer�?�GUI�?�X11を必�?�?��?��?��?�.\n"
#define MSGTR_Playing "%s を�?生中\n"
#define MSGTR_NoSound "音声: 無�?�\n"
#define MSGTR_FPSforced "FPS forced to be %5.3f  (ftime: %5.3f)\n"
#define MSGTR_AvailableVideoOutputDrivers "有効�?�映�?出力ドライ�?:\n"
#define MSGTR_AvailableAudioOutputDrivers "有効�?�音声出力ドライ�?:\n"
#define MSGTR_AvailableAudioCodecs "有効�?�音声コーデック:\n"
#define MSGTR_AvailableVideoCodecs "有効�?�映�?コーデック:\n"
#define MSGTR_AvailableAudioFm "\n有効�?�(組�?�込�?�れ�?�)音声コーデック families/drivers:\n"
#define MSGTR_AvailableVideoFm "\n有効�?�(組�?�込�?�れ�?�)映�?コーデック families/drivers:\n"
#define MSGTR_AvailableFsType "全画�?�表示モード�?��?�切替�?��?��?�能�?��?�:\n"
#define MSGTR_CannotReadVideoProperties "Video: プロパティーを読�?��?�れ�?��?�ん.\n"
#define MSGTR_NoStreamFound "ストリームを見付�?�る�?��?��?�出�?��?��?�ん�?��?��?�.\n"
#define MSGTR_ErrorInitializingVODevice "�?�択�?�れ�?�映�?出力(-vo)デ�?イスを開�??事�?�出�?��?��?�ん�?��?��?�.\n"
#define MSGTR_ForcedVideoCodec "指定�?�れ�?�映�?コーデック: %s\n"
#define MSGTR_ForcedAudioCodec "指定�?�れ�?�音声コーデック: %s\n"
#define MSGTR_Video_NoVideo "Video: 映�?�?��?�り�?��?�ん\n"
#define MSGTR_NotInitializeVOPorVO "\nFATAL: 画�?フィルター(-vf)�?�画�?出力(-vo)�?��?期化�?�失敗�?��?��?��?�.\n"
#define MSGTR_Paused "  =====  �?�止  =====" // no more than 23 characters (status line for audio files)
#define MSGTR_PlaylistLoadUnable "\nプレイリスト�?�読�?�込�?��?�出�?��?��?�ん %s.\n"
#define MSGTR_Exit_SIGILL_RTCpuSel \
"- MPlayer�?��?正�?�命令(Illegal Instruction)�?�よりクラッシュ�?��?��?��?�\n"\
"  �??ら�??�?�れ�?� �?��?�ら�?��?�CPU-Detection code�?��?グ�?��?�り�?��?�\n"\
"  DOCS/HTML/en/bugreports.html を�?�読�?�下�?��?�.\n"
#define MSGTR_Exit_SIGILL \
"- MPlayer�?��?正�?�命令(Illegal Instruction)�?�よりクラッシュ�?��?��?��?�\n"\
"  It usually happens when you run it on a CPU different than the one it was\n"\
"  compiled/optimized for.\n"\
"  Verify this!\n"
#define MSGTR_Exit_SIGSEGV_SIGFPE \
"- MPlayer�?��?良�?� CPU/FPU/RAM �?�よ�?��?�クラッシュ�?��?��?��?�.\n"\
"  Recompile MPlayer with --enable-debug and make a 'gdb' backtrace and\n"\
"  --enable-debugを�?��?��?�MPlyaerをコンパイル�?��?��?��?��?gdb�?�調査�?��?��?�ょ�?�\n"\
"  詳細�?� DOCS/HTML/en/bugreports.html#bugreports_crash �?��?�り�?��?�\n"
#define MSGTR_Exit_SIGCRASH \
"- MPlayer �?�想定�?�れ�?��?��?��?�クラッシュを起�?��?��?��?��?�.\n"\
"  It can be a bug in the MPlayer code _or_ in your drivers _or_ in your\n"\
"  gcc version. If you think it's MPlayer's fault, please read\n"\
"  DOCS/HTML/en/bugreports.html and follow the instructions there. We can't and\n"\
"  won't help unless you provide this information when reporting a possible bug.\n"


// mencoder.c:

#define MSGTR_CannotOpenFile_Device "ファイル�?��?�デ�?イス�?�開�?��?��?�ん.\n"
#define MSGTR_CannotOpenDemuxer "demuxerを開�??�?��?��?�出�?��?��?�ん.\n"
#define MSGTR_NoAudioEncoderSelected "\n音声エンコーダ(-oac)�?�指定�?�れ�?��?��?��?�ん�? 何�?�指定�?�る�?��?無指定(-nosound)を与�?��?�下�?��?�。詳細�?� '-oac help'\n"
#define MSGTR_NoVideoEncoderSelected "\n映�?エンコーダ(-ovc)�?�指定�?�れ�?��?��?��?�ん�? 何�?�指定�?��?�下�?��?�。 詳細�?� '-ovc help'\n"
#define MSGTR_CannotOpenOutputFile "出力ファイル'%s'を開�??事�?�出�?��?��?�ん.\n"
#define MSGTR_EncoderOpenFailed "エンコーダを開�??�?��?��?�失敗�?��?��?��?�.\n"
#define MSGTR_ForcingOutputFourcc "fourccを %x [%.4s] �?�指定�?��?��?�\n"
#define MSGTR_DuplicateFrames "\n%d �?複�?��?�フレーム\n"
#define MSGTR_SkipFrame "\nフレームをスキップ�?��?��?��?��?�\n"
#define MSGTR_ErrorWritingFile "%s: ファイル書�??込�?�エラー.\n"
#define MSGTR_VideoStreamResult "\n映�?ストリーム: %8.3f kbit/s  (%d B/s)  サイズ: %"PRIu64" bytes  %5.3f secs  %d フレーム\n"
#define MSGTR_AudioStreamResult "\n音声ストリーム: %8.3f kbit/s  (%d B/s)  サイズ: %"PRIu64" bytes  %5.3f secs\n"

// cfg-mencoder.h:

// open.c, stream.c:
#define MSGTR_CdDevNotfound "CD-ROM デ�?イス '%s' �?�存在�?��?��?�ん.\n"
#define MSGTR_ReadSTDIN "標準入力�?�ら読�?�込ん�?��?��?��?�...\n"
#define MSGTR_UnableOpenURL "指定�?�れ�?�URLを読�?�込�?�?��?�ん: %s\n"
#define MSGTR_ConnToServer "サー�?�?�接続中: %s\n"
#define MSGTR_FileNotFound "ファイル�?�存在�?��?��?�ん: '%s'\n"

#define MSGTR_SMBInitError "libsmbclient �?��?期化失敗: %d\n"
#define MSGTR_SMBFileNotFound "ローカルエリア�?ットワーク�?�ら開�??�?��?��?�出�?��?��?�ん�?��?��?�: '%s'\n"
#define MSGTR_SMBNotCompiled "MPlayer �?�SMB reading support を無効�?��?��?�コンパイル�?�れ�?��?��?��?�\n"

#define MSGTR_CantOpenDVD "DVDデ�?イスを開�??�?��?��?�出�?��?��?�ん�?��?��?�: %s (%s)\n"
#define MSGTR_DVDnumTitles "�?��?�DVD�?��?� %d タイトル記録�?�れ�?��?��?��?�.\n"
#define MSGTR_DVDinvalidTitle "�?正�?� DVD タイトル番�?��?��?�: %d\n"
#define MSGTR_DVDnumChapters "�?��?�DVD�?� %d キャプター�?�り�?��?�.\n"
#define MSGTR_DVDinvalidChapter "�?正�?�DVDキャプター番�?��?��?�r: %d\n"
#define MSGTR_DVDnumAngles "�?��?�DVD�?��?� %d アングル�?�り�?��?�.\n"
#define MSGTR_DVDinvalidAngle "�?正�?�DVDアングル番�?��?��?�: %d\n"
#define MSGTR_DVDnoIFO "Cannot open the IFO file for DVD title %d.\n"
#define MSGTR_DVDnoVOBs "Cannot open title VOBS (VTS_%02d_1.VOB).\n"

// muxer_*.c:
#define MSGTR_TooManyStreams "ストリーム�?�多�?��?�る!"
#define MSGTR_RawMuxerOnlyOneStream "Rawaudio muxer�?�一�?��?��?��?�音声ストリームをサ�?ート�?��?��?�!\n"
#define MSGTR_IgnoringVideoStream "映�?ストリームを差�?�置�??�?��?�!\n"
#define MSGTR_UnknownStreamType "警告: 未知�?�ストリームタイプ: %d\n"
#define MSGTR_WarningLenIsntDivisible "警告: samplesize�?�len�?�整除�?��??�?��?�!\n"

// demuxer.c, demux_*.c:
#define MSGTR_AudioStreamRedefined "警告: Audio stream header %d redefined.\n"
#define MSGTR_VideoStreamRedefined "警告: Video stream header %d redefined.\n"
#define MSGTR_TooManyAudioInBuffer "\n�?ッファ�?�多�?��?�る音声パケット�?�与�?�られ�?��?��?�: (%d in %d bytes).\n"
#define MSGTR_TooManyVideoInBuffer "\n�?ッファ�?�多�?��?�る映�?パケット�?�与�?�られ�?��?��?�: (%d in %d bytes).\n"
#define MSGTR_Detected_XXX_FileFormat "%s ファイルフォーマット�?�判断.\n"
#define MSGTR_DetectedAudiofile "音声ファイル�?�判断.\n"
#define MSGTR_FormatNotRecognized "============ �?��?�ファイルフォーマット�?� サ�?ート�?��?��?��?��?�ん =============\n"\
                                  "======= も�?��?��?�ファイル�?� AVI�?ASF�?MPEG�?�ら作�?者�?�連絡�?��?�下�?��?� ======\n"
#define MSGTR_MissingVideoStream "映�?ストリーム�?�存在�?��?��?�ん.\n"
#define MSGTR_MissingAudioStream "音声ストリーム�?�存在�?��?��?�ん -> 無音声�?��?�り�?��?�\n"
#define MSGTR_MissingVideoStreamBug "Missing video stream!? 作�?者�?�連絡�?��?�下�?��?��?�??ら�??�?�れ�?��?グ�?��?� :(\n"

#define MSGTR_DoesntContainSelectedStream "demux: �?�択�?�れ�?� 映�?�?�音声を格�?�?�る�?��?��?�出�?��?��?�ん.\n"

#define MSGTR_NI_Forced "Forced"
#define MSGTR_NI_Detected "Detected"
#define MSGTR_NI_Message "%s NON-INTERLEAVED AVI ファイル フォーマット.\n"

#define MSGTR_CantSeekRawAVI "Cannot seek in raw AVI streams. (Index�?�必�?�?��?�, -idx を試�?��?�下�?��?�.)\n"
#define MSGTR_CantSeekFile "�?��?�ファイル�?�シーク�?�る�?��?��?�出�?��?��?�ん.\n"

#define MSGTR_MOVcomprhdr "MOV: 圧縮�?�れ�?�ヘッダ(Compressed headers)をサ�?ート�?�る�?��?� ZLIB �?�必�?�?��?�\n"
#define MSGTR_MOVvariableFourCC "MOV: 警告: Variable FOURCC detected!?\n"
#define MSGTR_MOVtooManyTrk "MOV: 警告: too many tracks"
#define MSGTR_DetectedTV "TV detected! ;-)\n"
#define MSGTR_ErrorOpeningOGGDemuxer "ogg demuxer を開�??�?��?��?�出�?��?��?�ん.\n"
#define MSGTR_CannotOpenAudioStream "音声ストリームを開�??�?��?��?�出�?��?��?�ん: %s\n"
#define MSGTR_CannotOpenSubtitlesStream "サブタイトルストリームを開�??�?��?��?�出�?��?��?�ん: %s\n"
#define MSGTR_OpeningAudioDemuxerFailed "audio demuxerを開�??�?��?�開�??�?��?��?�出�?��?��?�ん: %s\n"
#define MSGTR_OpeningSubtitlesDemuxerFailed "subtitle demuxerを開�??�?��?��?�出�?��?��?�ん: %s\n"
#define MSGTR_TVInputNotSeekable "TV入力�?�シーク�?�る�?��?��?�出�?��?��?�ん(シーク�?��??ら�??�?ャン�?ル�?�択�?�相当�?�る�?��?��?�? ;)\n"
#define MSGTR_ClipInfo "クリップ情報:\n"

#define MSGTR_LeaveTelecineMode "\ndemux_mpg: 30fps NTSC コンテンツ検出, フレームレート変更中.\n"
#define MSGTR_EnterTelecineMode "\ndemux_mpg: 24fps プログレッシブ NTSC コンテンツ検出, フレームレート変更中.\n"


// dec_video.c & dec_audio.c:
#define MSGTR_CantOpenCodec "コーデックを開�??�?��?��?�出�?��?��?�ん.\n"
#define MSGTR_CantCloseCodec "コーデックを閉�?�る�?��?��?�出�?��?��?�ん.\n"

#define MSGTR_MissingDLLcodec "エラー: �?求�?�れ�?� DirectShow コーデック %s を開�??�?��?��?�出�?��?��?�ん.\n"
#define MSGTR_ACMiniterror "Win32/ACM音声コーデック�?�読�?�込�?��?��?��?期化を�?�る�?��?��?�出�?��?��?�ん (DLLファイル�?�大丈夫�?��?��?�?).\n"
#define MSGTR_MissingLAVCcodec "'%s' を libavcodec�?�ら見付�?�る�?��?��?�出�?��?��?�ん ...\n"

#define MSGTR_CannotReadMpegSequHdr "FATAL: シーケンスヘッダ(sequence header)を読�?�込�?�?��?�ん.\n"
#define MSGTR_CannotReadMpegSequHdrEx "FATAL: 拡張シーケンスヘッダ(sequence header extension)を読�?�込�?�?��?�ん.\n"
#define MSGTR_BadMpegSequHdr "MPEG: �?正�?�シーケンスヘッダ(sequence header)\n"
#define MSGTR_BadMpegSequHdrEx "MPEG: �?正�?�拡張シーケンスヘッダ(sequence header)\n"

#define MSGTR_ShMemAllocFail "共有メモリ�?�確�?�?�失敗\n"
#define MSGTR_CantAllocAudioBuf "音声出力�?ッファー�?�確�?�?�失敗\n"

#define MSGTR_UnknownAudio "未知�?��?も�?��??�?�壊れ�?�音声フォーマット�?��?� -> 無音声�?��?�り�?��?�\n"

#define MSGTR_VideoCodecFamilyNotAvailableStr "�?求�?�れ�?�映�?コーデック [%s] (vfm=%s) �?�無効�?��?� (有効�?��?�る�?��?�コンパイル時�?�指定�?��?��?�)\n"
#define MSGTR_AudioCodecFamilyNotAvailableStr "�?求�?�れ�?�音声コーデック [%s] (afm=%s) �?�無効�?��?� (有効�?��?�る�?��?�コンパイル時�?�指定�?��?��?�)\n"
#define MSGTR_OpeningVideoDecoder "映�?コーデックを開�?��?��?��?��?�: [%s] %s\n"
#define MSGTR_OpeningAudioDecoder "音声コーデックを開�?��?��?��?��?�: [%s] %s\n"
#define MSGTR_VDecoderInitFailed "映�?デコーダ�?��?期化�?�失敗�?��?��?��?� :(\n"
#define MSGTR_ADecoderInitFailed "音声デコーダ�?��?期化�?�失敗�?��?��?��?� :(\n"
#define MSGTR_ADecoderPreinitFailed "音声デコーダ�?��?処�?��?�失敗 :(\n"

// LIRC:
#define MSGTR_LIRCopenfailed "LIRC サ�?ートを開�??事�?�失敗.\n"
#define MSGTR_LIRCcfgerr "LIRC 設定ファイル %s を開�??�?��?��?�失敗�?��?��?��?�.\n"

// vf.c
#define MSGTR_CouldNotFindVideoFilter "映�?フィルタ '%s' �?�見付�?�り�?��?�ん\n"
#define MSGTR_CouldNotOpenVideoFilter "音声フィルタ '%s' �?�見付�?�り�?��?�ん\n"
#define MSGTR_OpeningVideoFilter "映�?フィルタを開�?��?��?��?��?�: "
#define MSGTR_CannotFindColorspace "common colorspace�?�見付�?�り�?��?�ん, even by inserting 'scale' :(\n"

// vd.c

// ====================== GUI messages/buttons ========================

#ifdef CONFIG_GUI

// --- labels ---
#define MSGTR_About "ア�?ウト"
#define MSGTR_FileSelect "ファイル�?�択 ..."
#define MSGTR_SubtitleSelect "サブタイトル�?�択 ..."
#define MSGTR_OtherSelect "�?�択 ..."
#define MSGTR_FontSelect "フォント�?�択 ..."
#define MSGTR_PlayList "プレイリスト"
#define MSGTR_Equalizer "エコライザー"
#define MSGTR_SkinBrowser "スキンブラウザ"
#define MSGTR_Preferences "設定"
#define MSGTR_NoMediaOpened "メディア�?�開�?�れ�?��?��?��?�ん."
#define MSGTR_NoChapter "キャプター�?��?�り�?��?�ん"
#define MSGTR_Chapter "キャプター %d"
#define MSGTR_NoFileLoaded "ファイル�?�読�?�込�?�れ�?��?��?��?�ん."

// --- buttons ---
#define MSGTR_Ok "OK"
#define MSGTR_Cancel "キャンセル"
#define MSGTR_Add "追加"
#define MSGTR_Remove "削除"
#define MSGTR_Clear "クリア"
#define MSGTR_Config "設定"
#define MSGTR_ConfigDriver "ドライ�?設定"
#define MSGTR_Browse "ブラウズ"

// --- error messages ---
#define MSGTR_NEMDB "�??画�?�必�?�?��?ッファを確�?�?�る�?��?�?�メモリ�?�足り�?��?�ん."
#define MSGTR_NEMFMR "メニューを�??画�?�必�?�?�メモリ�?�足り�?��?�ん."

// --- skin loader error messages
#define MSGTR_SKIN_ERRORMESSAGE "[skin] エラー: スキン設定ファイル %d 行: %s"
#define MSGTR_SKIN_BITMAP_16bit  "16 ビット以下�?�解消度�?�サ�?ート�?�れ�?��?��?��?�ん (%s).\n"
#define MSGTR_SKIN_BITMAP_FileNotFound  "ファイル�?�存在�?��?��?�ん (%s)\n"
#define MSGTR_SKIN_BITMAP_PNGReadError "png 読�?�込�?�エラー (%s)\n"
#define MSGTR_SKIN_BITMAP_ConversionError "24bit�?�ら32bit�?��?�変�?�エラー (%s)\n"
#define MSGTR_SKIN_UnknownMessage "未知�?�メッセージ: %s\n"
#define MSGTR_SKIN_NotEnoughMemory "メモリ�?��?足�?��?��?��?��?�\n"
#define MSGTR_SKIN_FONT_FontFileNotFound "フォントファイル�?�存在�?��?��?�ん\n"
#define MSGTR_SKIN_FONT_FontImageNotFound "フォントイメージファイル�?�存在�?��?��?�ん\n"
#define MSGTR_SKIN_UnknownParameter "未知�?�パラメータ(%s)\n"
#define MSGTR_SKIN_SKINCFG_SkinNotFound "スキン�?�存在�?��?��?�ん( %s ).\n"
#define MSGTR_SKIN_LABEL "スキン:"

// --- gtk menus
#define MSGTR_MENU_AboutMPlayer "MPlayer�?��?��?��?�"
#define MSGTR_MENU_Open "開�?? ..."
#define MSGTR_MENU_PlayFile "ファイル�?生 ..."
#define MSGTR_MENU_PlayVCD "VCD �?生 ..."
#define MSGTR_MENU_PlayDVD "DVD �?生 ..."
#define MSGTR_MENU_PlayURL "URL �?生 ..."
#define MSGTR_MENU_LoadSubtitle "サブタイトル読�?�込�?� ..."
#define MSGTR_MENU_DropSubtitle "サブタイトル破棄 ..."
#define MSGTR_MENU_Playing "�?�在�?�ファイル"
#define MSGTR_MENU_Play "�?生"
#define MSGTR_MENU_Pause "一時�?�止"
#define MSGTR_MENU_Stop "�?�止"
#define MSGTR_MENU_NextStream "次�?�ストリーム"
#define MSGTR_MENU_PrevStream "�?�?�ストリーム"
#define MSGTR_MENU_Size "サイズ"
#define MSGTR_MENU_NormalSize "通常サイズ"
#define MSGTR_MENU_DoubleSize "2�?サイズ"
#define MSGTR_MENU_FullScreen "フルスクリーン"
#define MSGTR_MENU_DVD "DVD"
#define MSGTR_MENU_VCD "VCD"
#define MSGTR_MENU_PlayDisc "ディスク�?生 ..."
#define MSGTR_MENU_ShowDVDMenu "DVD メニュー�?�表示"
#define MSGTR_MENU_Titles "タイトル"
#define MSGTR_MENU_Title "タイトル %2d"
#define MSGTR_MENU_None "(無�?�)"
#define MSGTR_MENU_AudioLanguages "音声言語"
#define MSGTR_MENU_SubtitleLanguages "サブタイトル言語"
#define MSGTR_MENU_SkinBrowser "スキンブラウザ"
#define MSGTR_MENU_Exit "終了 "
#define MSGTR_MENU_Mute "消音"
#define MSGTR_MENU_Original "オリジナル"
#define MSGTR_MENU_Track "トラック %d"
#define MSGTR_MENU_VideoTrack "映�?トラック"

// --- equalizer
#define MSGTR_EQU_Audio "音声"
#define MSGTR_EQU_Video "映�?"
#define MSGTR_EQU_Contrast "明暗: "
#define MSGTR_EQU_Brightness "光度: "
#define MSGTR_EQU_Front_Left "�?方 左"
#define MSGTR_EQU_Front_Right "�?方 �?�"
#define MSGTR_EQU_Back_Left "後方 左"
#define MSGTR_EQU_Back_Right "後方 �?�"
#define MSGTR_EQU_Center "中央"
#define MSGTR_EQU_Bass "�?ス"
#define MSGTR_EQU_All "All"
#define MSGTR_EQU_Channel1 "�?ャン�?ル 1:"
#define MSGTR_EQU_Channel2 "�?ャン�?ル 2:"
#define MSGTR_EQU_Channel3 "�?ャン�?ル 3:"
#define MSGTR_EQU_Channel4 "�?ャン�?ル 4:"
#define MSGTR_EQU_Channel5 "�?ャン�?ル 5:"
#define MSGTR_EQU_Channel6 "�?ャン�?ル 6:"

// --- playlist
#define MSGTR_PLAYLIST_Path "パス"
#define MSGTR_PLAYLIST_Selected "�?�択�?�れ�?�ファイル"
#define MSGTR_PLAYLIST_Files "ファイル"
#define MSGTR_PLAYLIST_DirectoryTree "ディレクトリツリー"

// --- preferences
#define MSGTR_PREFERENCES_SubtitleOSD "サブタイトル & OSD"
#define MSGTR_PREFERENCES_Codecs "コーデック & demuxer"
#define MSGTR_PREFERENCES_Misc "Misc"

#define MSGTR_PREFERENCES_None "無�?�"
#define MSGTR_PREFERENCES_AvailableDrivers "有効�?�ドライ�?:"
#define MSGTR_PREFERENCES_EnableEqualizer "イコライザー�?�有効"
#define MSGTR_PREFERENCES_DoubleBuffer "double buffering 有効"
#define MSGTR_PREFERENCES_DirectRender "direct rendering 有効"
#define MSGTR_PREFERENCES_FrameDrop "frame dropping 有効"
#define MSGTR_PREFERENCES_HFrameDrop "HARD frame dropping (�?�険�?��?�) 有効"
#define MSGTR_PREFERENCES_Subtitle "サブタイトル:"
#define MSGTR_PREFERENCES_SUB_Delay "Delay: "
#define MSGTR_PREFERENCES_SUB_FPS "FPS:"
#define MSGTR_PREFERENCES_SUB_POS "�?置: "
#define MSGTR_PREFERENCES_SUB_AutoLoad "subtitle 自動読�?�込�?�無効"
#define MSGTR_PREFERENCES_SUB_Unicode "Unicode サブタイトル"
#define MSGTR_PREFERENCES_SUB_MPSUB "与�?�られ�?�サブタイトルをMPLayer�?�サブタイトルフォーマット�?�変�?�"
#define MSGTR_PREFERENCES_Font "フォント:"
#define MSGTR_PREFERENCES_PostProcess "postprocessing 有効"
#define MSGTR_PREFERENCES_NI "non-interleaved AVI パーサ使用"
#define MSGTR_PREFERENCES_IDX "必�?�?�らindex table�?��?構築"
#define MSGTR_PREFERENCES_VideoCodecFamily "映�?コーデック:"
#define MSGTR_PREFERENCES_AudioCodecFamily "音声コーデック:"
#define MSGTR_PREFERENCES_FRAME_OSD_Level "OSD レベル"
#define MSGTR_PREFERENCES_FRAME_Subtitle "サブタイトル"
#define MSGTR_PREFERENCES_FRAME_Font "フォント"
#define MSGTR_PREFERENCES_FRAME_CodecDemuxer "コーデック& demuxer"
#define MSGTR_PREFERENCES_FRAME_Cache "キャッシュ"
#define MSGTR_PREFERENCES_DXR3_VENC "Video エンコーダ:"
#define MSGTR_PREFERENCES_DXR3_LAVC "LAVC (FFmpeg)使用"
#define MSGTR_PREFERENCES_FontEncoding1 "ユニコード"
#define MSGTR_PREFERENCES_FontEncoding "エンコーディング:"
#define MSGTR_PREFERENCES_Cache "キャッシュ on/off"
#define MSGTR_PREFERENCES_CacheSize "キャッシュサイズ: "
#define MSGTR_PREFERENCES_LoadFullscreen "開始時�?�フルスクリーン"
#define MSGTR_PREFERENCES_SaveWinPos "ウィンドウ�?置を�?�?"
#define MSGTR_PREFERENCES_XSCREENSAVER "XScreenSaverをストップ"
#define MSGTR_PREFERENCES_PlayBar "プレイ�?ー有効"
#define MSGTR_PREFERENCES_CDROMDevice "CD-ROM デ�?イス:"
#define MSGTR_PREFERENCES_DVDDevice "DVD デ�?イス:"
#define MSGTR_PREFERENCES_FPS "Movie FPS:"

// --- messagebox
#define MSGTR_MSGBOX_LABEL_FatalError "致命的エラー!"
#define MSGTR_MSGBOX_LABEL_Error "エラー"
#define MSGTR_MSGBOX_LABEL_Warning "警告"

#endif
