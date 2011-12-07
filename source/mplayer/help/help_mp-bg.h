// Sync'ed with help_mp-en.h 1.167
//
// Преведено от �?. Димитров, plazmus@gmail.com
// В�?ички предложени�? �?а добре дошли.

// ========================= MPlayer help ===========================

static const char help_text[]=
"Употреба:   mplayer [опции] [url|път/]име_на_файл\n"
"\n"
"О�?новни опции:   (пълни�?т �?пи�?ък е в ръковод�?твото - 'man mplayer')\n"
" -vo <дрв[:у�?тр]>  избор на видео драйвер & у�?трой�?тво ('-vo help' дава �?пи�?ък)\n"
" -ao <дрв[:у�?тр]>  избор на звуков драйвер & у�?трой�?тво ('-ao help' дава �?пи�?ък)\n"
#ifdef CONFIG_VCD
" vcd://<пътечка>   пу�?ка (S)VCD (Super Video CD) пътечка (без монтиране!)\n"
#endif
#ifdef CONFIG_DVDREAD
" dvd://<номер>     пу�?ка DVD заглавие от у�?трой�?тво, вме�?то от файл\n"
" -alang/-slang     избор на език за DVD аудиo/�?убтитри (чрез 2-буквен код)\n"
#endif
" -ss <позици�?>     превъртане до дадена (в �?екунди или чч:мм:�?�?) позици�?\n"
" -nosound          изключване на звука\n"
" -fs               пълноекранно възпроизвеждане (или -vm, -zoom, вж. manpage)\n"
" -x <x> -y <y>     избор на резолюци�? (използва �?е �? -vm или -zoom)\n"
" -sub <файл>       задава файла �?ъ�? �?убтитри (вижте �?ъщо -subfps и -subdelay)\n"
" -playlist <файл>  отвар�? playlist файл\n"
" -vid x -aid y     избор на видео (x) и аудио (y) поток за възпроизвеждане\n"
" -fps x -srate y   �?м�?на на видео (x кадри в �?екунда) и аудио (y Hz) че�?тотата\n"
" -pp <каче�?тво>    включва филтър за допълнителна обработка на образа\n"
"                   вижте ръковод�?твото и документаци�?та за подробно�?ти\n"
" -framedrop        разрешава пре�?качането на кадри (при бавни машини)\n"
"\n"
"О�?новни клавиши:   (пълен �?пи�?ък има в ръковод�?твото, проверете �?ъщо input.conf)\n"
" <-  или  ->       превърта назад/напред �? 10 �?екунди\n"
" up или down       превърта назад/напред �? 1 минута\n"
" pgup или pgdown   превърта назад/напред �? 10 минути\n"
" < или >           �?тъпка назад/напред в playlist �?пи�?ъка\n"
" p или SPACE       пауза (нати�?нете произволен клавиш за продължение)\n"
" q или ESC         �?пиране на възпроизвеждането и изход от програмата\n"
" + или -           пром�?на закъ�?нението на звука �? +/- 0.1 �?екунда\n"
" o                 превключва OSD режима: без/лента за превъртане/лента и таймер\n"
" * или /           увеличава или намал�?ва �?илата на звука (PCM)\n"
" z или x           промен�? закъ�?нението на �?убтитрите �? +/- 0.1 �?екунда\n"
" r или t           преме�?тва �?убтитрите нагоре/надолу, вижте и -vf expand\n"
"\n"
" * * * З�? ПОДРОБ�?ОСТИ, ДОПЪЛ�?ИТЕЛ�?И ОПЦИИ И КЛ�?ВИШИ, ВИЖТЕ РЪКОВОДСТВОТО! * * *\n"
"\n";

#define MSGTR_SamplesWanted "Мо�?три от този формат �?а нужни за подобр�?ване на поддръжката. Свържете �?е �? на�?!\n"

// ========================= MPlayer messages ===========================

// mplayer.c:

#define MSGTR_Exiting "\nИзлизане от програмата...\n"
#define MSGTR_ExitingHow "\nИзлизане от програмата... (%s)\n"
#define MSGTR_Exit_quit "Изход"
#define MSGTR_Exit_eof "Край на файла"
#define MSGTR_Exit_error "Фатална грешка"
#define MSGTR_IntBySignal "\nMPlayer е прекъ�?нат от �?игнал %d в модул: %s\n"
#define MSGTR_NoHomeDir "HOME директори�?та не може да бъде открита.\n"
#define MSGTR_GetpathProblem "Проблем �? функци�? get_path(\"config\") \n"
#define MSGTR_CreatingCfgFile "Създава �?е конфигурационен файл: %s\n"
#define MSGTR_CantLoadFont "�?е може да �?е зареди шрифт: %s\n"
#define MSGTR_CantLoadSub "�?е могат да бъдат заредени �?убтитри: %s\n"
#define MSGTR_DumpSelectedStreamMissing "dump: Ф�?Т�?Л�?О: Избрани�?т поток лип�?ва!\n"
#define MSGTR_CantOpenDumpfile "�?е може да �?е отвори файл за извличане.\n"
#define MSGTR_CoreDumped "Данните извлечени ;)\n"
#define MSGTR_FPSnotspecified "Бро�? кадри в �?екунда не е указан или е невалиден, ползвайте опци�?та -fps .\n"
#define MSGTR_TryForceAudioFmtStr "Опит за ползване на фамили�? аудио кодеци %s...\n"
#define MSGTR_CantFindAudioCodec "�?е може да бъде намерен кодек за този аудио формат 0x%X.\n"
#define MSGTR_TryForceVideoFmtStr "Опит за ползване на фамили�? видео кодеци %s...\n"
#define MSGTR_CantFindVideoCodec "�?�?ма подход�?щ кодек за указаните -vo и видео формат 0x%X.\n"
#define MSGTR_CannotInitVO "Ф�?Т�?Л�?О: Видео драйвера не може да бъде инициализиран.\n"
#define MSGTR_CannotInitAO "�?удио у�?трой�?твото не може да бъде отворено/инициализирано -> н�?ма звук.\n"
#define MSGTR_StartPlaying "Започва възпроизвеждането...\n"

#define MSGTR_SystemTooSlow "\n\n"\
"           ************************************************\n"\
"           **** Вашата �?и�?тема е твърде Б�?В�?�? за това!  ****\n"\
"           ************************************************\n\n"\
"Възможни причини, проблеми, решени�?:\n"\
"- �?ай-веро�?тно: неработещ/бъгав _аудио_ драйвер\n"\
"  - Опитайте -ao sdl или ползвайте OSS емулаци�?та на ALSA.\n"\
"  - Ек�?периментирайте �? различни �?тойно�?ти на -autosync, 30 е добро начало.\n"\
"- Бавно видео извеждане\n"\
"  - Опитайте друг -vo драйвер (-vo help за �?пи�?ък) или пробвайте -framedrop!\n"\
"- Бавен проце�?ор\n"\
"  - �?е пу�?кайте гол�?м DVD/DivX филм на бавен проце�?ор! Пробвайте -hardframedrop.\n"\
"- Повреден файл\n"\
"  - Опитайте различни комбинации от  -nobps -ni -forceidx -mc 0.\n"\
"- Бавен източник (NFS/SMB, DVD, VCD и т.н.)\n"\
"  - Опитайте -cache 8192.\n"\
"- Използвате -cache за non-interleaved AVI файл?\n"\
"  - Опитайте -nocache.\n"\
"Прочетете DOCS/HTML/en/video.html за �?ъвети отно�?но на�?тройките.\n"\
"�?ко нищо не помага, прочетете DOCS/HTML/en/bugreports.html.\n\n"

#define MSGTR_NoGui "MPlayer е компилиран без графичен интерфей�?.\n"
#define MSGTR_GuiNeedsX "Графични�? интерфей�? на MPlayer изи�?ква X11.\n"
#define MSGTR_Playing "Възпроизвеждане на %s.\n"
#define MSGTR_NoSound "�?удио: н�?ма звук\n"
#define MSGTR_FPSforced "�?аложени �?а %5.3f кадъра в �?екунда (ftime: %5.3f).\n"
#define MSGTR_AvailableVideoOutputDrivers "До�?тъпни видео драйвери:\n"
#define MSGTR_AvailableAudioOutputDrivers "До�?тъпни аудио драйвери:\n"
#define MSGTR_AvailableAudioCodecs "До�?тъпни аудио кодеци:\n"
#define MSGTR_AvailableVideoCodecs "До�?тъпни видео кодеци:\n"
#define MSGTR_AvailableAudioFm "До�?тъпни (вградени) фамилии аудио кодеци/драйвери:\n"
#define MSGTR_AvailableVideoFm "До�?тъпни (вградени) фамилии видео кодеци/драйвери:\n"
#define MSGTR_AvailableFsType "До�?тъпни пълноекранни режими:\n"
#define MSGTR_CannotReadVideoProperties "Видео: Параметрите не могат да бъдат прочетени.\n"
#define MSGTR_NoStreamFound "�?е е открит поток.\n"
#define MSGTR_ErrorInitializingVODevice "Грешка при отвар�?не/инициализиране на избраното видео у�?трой�?тво (-vo).\n"
#define MSGTR_ForcedVideoCodec "�?аложен видео кодек: %s\n"
#define MSGTR_ForcedAudioCodec "�?аложен аудио кодек: %s\n"
#define MSGTR_Video_NoVideo "Видео: н�?ма видео\n"
#define MSGTR_NotInitializeVOPorVO "\nФ�?Т�?Л�?О: Видео филтъра (-vf) или изхода (-vo) не могат да бъдат инициализирани.\n"
#define MSGTR_Paused "  =====  П�?УЗ�?  =====" // no more than 23 characters (status line for audio files)
#define MSGTR_PlaylistLoadUnable "\nPlaylist-ът не може да бъде зареден %s.\n"
#define MSGTR_Exit_SIGILL_RTCpuSel \
"- MPlayer ката�?трофира заради '�?евалидна ин�?трукци�?'.\n"\
"  Може да е бъг в кода за динамично у�?танов�?ване на проце�?ора...\n"\
"  Мол�? прочетете DOCS/HTML/en/bugreports.html.\n"
#define MSGTR_Exit_SIGILL \
"- MPlayer ката�?трофира заради '�?евалидна ин�?трукци�?'.\n"\
"  Това обикновено �?е �?лучва когато бъде пу�?нат на проце�?ор, различен от този\n"\
"  за който е компилиран/оптимизиран.\n"\
"  Проверете това!\n"
#define MSGTR_Exit_SIGSEGV_SIGFPE \
"- MPlayer ката�?трофира заради лоша употреба на проце�?ора/копроце�?ора/паметта.\n"\
"  рекомпилирайте MPlayer �? --enable-debug и направете  backtrace и\n"\
"  диза�?емблиране �? 'gdb'.\nЗа подробно�?ти - DOCS/HTML/en/bugreports_what.html#bugreports_crash.\n"
#define MSGTR_Exit_SIGCRASH \
"- MPlayer ката�?трофира. Tова не тр�?бва да �?е �?лучва.\n"\
"  Може да е бъг в кода на MPlayer _или_ във драйверите ви _или_ във\n"\
"  вер�?и�?та на gcc. �?ко �?м�?тате, че е по вина на MPlayer, прочетете\n"\
"  DOCS/HTML/en/bugreports.html и �?ледвайте ин�?трукциите там. �?ие не можем\n"\
"  и н�?ма да помогнем, ако не о�?игурите тази информаци�?, когато �?ъобщавате за бъг.\n"
#define MSGTR_LoadingConfig "Зарежда �?е конфигурационен файл '%s'\n"
#define MSGTR_AddedSubtitleFile "SUB: добавен е файл �?ъ�? �?убтитри (%d): %s\n"
#define MSGTR_ErrorOpeningOutputFile "Грешка при отвар�?не на файла [%s] за запи�?!\n"
#define MSGTR_RTCDeviceNotOpenable "Грешка при отвар�?не на %s: %s (необходими �?а права за четене).\n"
#define MSGTR_LinuxRTCInitErrorIrqpSet "Linux RTC грешка при инициализаци�? в ioctl (rtc_irqp_set кд%lu): %s\n"
#define MSGTR_IncreaseRTCMaxUserFreq "Добавете \"echo %lu > /proc/sys/dev/rtc/max-user-freq\" към �?и�?темните �?тартови �?криптове.\n"
#define MSGTR_LinuxRTCInitErrorPieOn "Linux RTC init грешка в ioctl (rtc_pie_on): %s\n"
#define MSGTR_UsingTimingType "използва �?е  %s таймер.\n"
#define MSGTR_Getch2InitializedTwice "Внимание: Функци�?та getch2_init е извикана двукратно!\n"
#define MSGTR_CantOpenLibmenuFilterWithThisRootMenu "Видео филтъра libmenu не може да бъде отворен без root меню %s.\n"
#define MSGTR_AudioFilterChainPreinitError "Грешка при предварителна инициализаци�? на аудио филтрите!\n"
#define MSGTR_LinuxRTCReadError "Linux RTC грешка при четене: %s\n"
#define MSGTR_SoftsleepUnderflow "Внимание! Softsleep underflow!\n"
#define MSGTR_DvdnavNullEvent "DVDNAV Събитие NULL?!\n"
#define MSGTR_DvdnavHighlightEventBroken "DVDNAV Събитие: Highlight event broken\n"
#define MSGTR_DvdnavEvent "DVDNAV Събитие: %s\n"
#define MSGTR_DvdnavHighlightHide "DVDNAV Събитие: Highlight Hide\n"
#define MSGTR_DvdnavStillFrame "###################################### DVDNAV Събитие: �?еподвижен кадър: %d �?ек\n"
#define MSGTR_DvdnavNavStop "DVDNAV Събитие: Nav Стоп\n"
#define MSGTR_DvdnavNavNOP "DVDNAV Събитие: Nav NOP\n"
#define MSGTR_DvdnavNavSpuStreamChangeVerbose "DVDNAV Събитие: Nav См�?на на SPU Поток: физ: %d/%d/%d лог: %d\n"
#define MSGTR_DvdnavNavSpuStreamChange "DVDNAV Събитие: Nav См�?на на SPU Поток: физ: %d лог: %d\n"
#define MSGTR_DvdnavNavAudioStreamChange "DVDNAV Събитие: Nav См�?на на �?удио Поток: физ: %d лог: %d\n"
#define MSGTR_DvdnavNavVTSChange "DVDNAV Събитие: Nav См�?на на VTS\n"
#define MSGTR_DvdnavNavCellChange "DVDNAV Събитие: Nav См�?на на Клетка\n"
#define MSGTR_DvdnavNavSpuClutChange "DVDNAV Събитие: Nav См�?на на SPU CLUT\n"
#define MSGTR_DvdnavNavSeekDone "DVDNAV Събитие: Nav Превъртането Приключено\n"
#define MSGTR_MenuCall "Menu call\n"

#define MSGTR_EdlOutOfMem "�?е може да �?е задели до�?татъчно памет за EDL данните.\n"
#define MSGTR_EdlRecordsNo "Прочетени �?а %d EDL дей�?тви�?.\n"
#define MSGTR_EdlQueueEmpty "�?�?ма EDL дей�?тви�?, които да бъдат извършени.\n"
#define MSGTR_EdlCantOpenForWrite "EDL файла [%s] не може да бъде отворен за запи�?.\n"
#define MSGTR_EdlCantOpenForRead "EDL файла [%s] не може да бъде отворен за четене.\n"
#define MSGTR_EdlNOsh_video "EDL не може да �?е ползва без видео, изключва �?е.\n"
#define MSGTR_EdlNOValidLine "�?евалиден ред в EDL: %s\n"
#define MSGTR_EdlBadlyFormattedLine "Зле форматиран EDL ред [%d] Отхвърл�? �?е.\n"
#define MSGTR_EdlBadLineOverlap "По�?ледната позици�? за �?пиране беше [%f]; �?ледващата за пу�?кане е "\
"[%f]. Елементите в �?пи�?ъка тр�?бва да �?а в хронологичен ред, не могат да �?е препокриват.\n"
#define MSGTR_EdlBadLineBadStop "Времето за �?пиране тр�?бва да е �?лед времето за пу�?кане.\n"

// mencoder.c:

#define MSGTR_UsingPass3ControlFile "Използва �?е файл за контрол на pass3: %s\n"
#define MSGTR_MissingFilename "\nЛип�?ва име на файл.\n\n"
#define MSGTR_CannotOpenFile_Device "Файла/у�?трой�?твото не може да бъде отворен.\n"
#define MSGTR_CannotOpenDemuxer "�?е може да бъде отворен разпределител.\n"
#define MSGTR_NoAudioEncoderSelected "\n�?е е избран аудио енкодер (-oac). Изберете или енкодер (вижте -oac help) или опци�?та -nosound.\n"
#define MSGTR_NoVideoEncoderSelected "\n�?е е избран видео енкодер (-ovc). Изберете �?и (вижте -ovc help).\n"
#define MSGTR_CannotOpenOutputFile "Изходни�? файл '%s'не може да бъде отворен.\n"
#define MSGTR_EncoderOpenFailed "Енкодерът не може да бъде отворен.\n"
#define MSGTR_ForcingOutputFourcc "�?алагане на изходни�? fourcc код да бъде %x [%.4s]\n"
#define MSGTR_DuplicateFrames "\n%d дублиращи �?е кадъра!\n"
#define MSGTR_SkipFrame "\nПре�?кочен кадър!\n"
#define MSGTR_ResolutionDoesntMatch "\n�?ови�?т видео файл има различна резолюци�? или цветови формат от предишни�?.\n"
#define MSGTR_FrameCopyFileMismatch "\nВ�?ички видео файлове тр�?бва да имат идентични резолюции, кадрови че�?тоти и кодеци за -ovc copy.\n"
#define MSGTR_AudioCopyFileMismatch "\nВ�?ички файлове тр�?бва да имат идентични аудио кодеци и формати за -oac copy.\n"
#define MSGTR_NoSpeedWithFrameCopy "ПРЕДУПРЕЖДЕ�?ИЕ: -speed не работи гарантирано правилно �? -oac copy!\n"\
"Кодирането ви може да �?е окаже повредено!\n"
#define MSGTR_ErrorWritingFile "%s: Грешка при запи�? на файла.\n"
#define MSGTR_RecommendedVideoBitrate "Препоръчителен битрейт за %s CD: %d\n"
#define MSGTR_VideoStreamResult "\nВидео поток: %8.3f Кбита/�?  (%d B/s)  размер: %"PRIu64" байта  %5.3f �?ек.  %d кадъра\n"
#define MSGTR_AudioStreamResult "\n�?удио поток: %8.3f Кбита/�?  (%d B/s)  размер: %"PRIu64" байта  %5.3f �?ек.\n"
#define MSGTR_OpenedStream "у�?пех: формат: %d  данни: 0x%X - 0x%x\n"
#define MSGTR_VCodecFramecopy "videocodec: framecopy (%dx%d %dbpp fourcc=%x)\n"
#define MSGTR_ACodecFramecopy "audiocodec: framecopy (format=%x chans=%d rate=%d bits=%d B/s=%d sample-%d)\n"
#define MSGTR_CBRPCMAudioSelected "Избрано е CBR (по�?то�?нен битрейт) PCM аудио\n"
#define MSGTR_MP3AudioSelected "Избрано е MP3 аудио\n"
#define MSGTR_CannotAllocateBytes "�?е може да �?е задел�?т %d байта\n"
#define MSGTR_SettingAudioDelay "�?УДИО З�?КЪС�?Е�?ИЕТО е на�?троено на %5.3f\n"
#define MSGTR_LimitingAudioPreload "Предварителното аудио зареждане е ограничено на 0.4�?\n"
#define MSGTR_IncreasingAudioDensity "Гъ�?тотата на звука е увеличена на 4\n"
#define MSGTR_ZeroingAudioPreloadAndMaxPtsCorrection "�?алагане на нулево предварително аудио зареждане, max pts correction to 0\n"
#define MSGTR_LameVersion "LAME вер�?и�? %s (%s)\n\n"
#define MSGTR_InvalidBitrateForLamePreset "Грешка: Указани�?т битрейт е извън допу�?тимите граници за този профил\n"\
"\n"\
"Когато използвате този режим тр�?бва да въведете �?тойно�?т между \"8\" и \"320\"\n"\
"\n"\
"Допълнителна информаци�? може да получите �?: \"-lameopts preset=help\"\n"
#define MSGTR_InvalidLamePresetOptions "Грешка: �?е �?те въвели валиден профил и/или опции �? preset\n"\
"\n"\
"До�?тъпните профили �?а:\n"\
"\n"\
"   <fast>        standard\n"\
"   <fast>        extreme\n"\
"                 insane\n"\
"   <cbr> (ABR Режим) - �?е е нужно изрично да указвате ABR режима.\n"\
"                      За да го ползвате, про�?то укажете битрейт. �?апример:\n"\
"                      \"preset=185\" активира този\n"\
"                      профил и ползва �?редно 185 килобита в �?екунда.\n"\
"\n"\
"    �?�?колко примера:\n"\
"\n"\
"    \"-lameopts fast:preset=standard  \"\n"\
" или \"-lameopts  cbr:preset=192       \"\n"\
" или \"-lameopts      preset=172       \"\n"\
" или \"-lameopts      preset=extreme   \"\n"\
"\n"\
"Допълнителна информаци�? можете да получите �?: \"-lameopts preset=help\"\n"
#define MSGTR_LamePresetsLongInfo "\n"\
"Профилите �?а �?ъздадени за да о�?игур�?ват най-доброто възможно каче�?тво.\n"\
"\n"\
"В по-гол�?мата �?и ча�?т те �?а били предмет на �?ериозни те�?тове\n"\
"за да �?е о�?игури и потвърди това каче�?тво.\n"\
"\n"\
"�?епрекъ�?нато �?е обнов�?ват, �?ъгла�?но най-новите разработки\n"\
"и получени�?т резултат би тр�?бвало да ви о�?игури най-доброто\n"\
"каче�?тво по�?тижимо �? LAME.\n"\
"\n"\
"За да активирате тези профили:\n"\
"\n"\
"   За VBR режими (най-ви�?око каче�?тво):\n"\
"\n"\
"     \"preset=standard\" Tози профил е подход�?щ за повеето хора и повечето\n"\
"                             видове музика и притежава до�?та ви�?око каче�?тво.\n"\
"\n"\
"     \"preset=extreme\" �?ко имате изключително добър �?лух и оборудване от\n"\
"                             ви�?око ниво, този профил ще о�?игури\n"\
"                             малко по-добро каче�?тво от \"standard\"\n"\
"                             режима.\n"\
"\n"\
"   За CBR 320Кбита/�? (профил �? най-ви�?окото възможно каче�?тво):\n"\
"\n"\
"     \"preset=insane\"  �?а�?тройките в този профил �?а прекалени за повечето\n"\
"                             хора и �?итуации, но ако �?е налага\n"\
"                             да по�?тигнете аб�?олютно мак�?имално каче�?тво\n"\
"                             без значение от размера на файла, това е начина.\n"\
"\n"\
"   За ABR режим (ви�?око каче�?тво при зададем битрейт, но не колкото при VBR):\n"\
"\n"\
"     \"preset=<кбита/�?>\"  Този профил обикновено дава добро каче�?тво за\n"\
"                             зададени�? битрейт. В зави�?имо�?т от указани�?\n"\
"                             битрейт, профилът ще определи оптималните за\n"\
"                             �?луча�? на�?тройки.\n"\
"                             Въпреки че този метод върши работа, той не е\n"\
"                             толкова гъвкав, колкото VBR, и обикновено не\n"\
"                             до�?тига каче�?твото на VBR при ви�?оки битрейтове.\n"\
"\n"\
"Следните опции �?а до�?тъпни за �?ъответните профили:\n"\
"\n"\
"   <fast>        standard\n"\
"   <fast>        extreme\n"\
"                 insane\n"\
"   <cbr> (ABR Режим) - �?е е нужно изрично да указвате ABR режима.\n"\
"                      За да го ползвате, про�?то укажете битрейт. �?апример:\n"\
"                      \"preset=185\" активира този\n"\
"                      профил и ползва �?редно 185 килобита в �?екунда.\n"\
"\n"\
"   \"fast\" - Разрешава нови�?, бърз VBR за определен профил. �?едо�?таък на това\n"\
"            е, че за �?метка на �?коро�?тта че�?то получени�?т битрейт е по-ви�?ок,\n"\
"            а каче�?твото дори по-ни�?ко в �?ранение �? нормални�? режим на работа.\n"\
"   Внимание: С на�?то�?щата вер�?и�?, получени�?т �? бързи�? режим битрейт, може да �?е\n"\
"            окаже твърде ви�?ок, в �?равнение �? нормалните профили.\n"\
"\n"\
"   \"cbr\"  - �?ко ползвате ABR режим (прочетете по-горе) �?ъ�? значителен\n"\
"            битрейт като 80, 96, 112, 128, 160, 192, 224, 256, 320,\n"\
"            може да ползвате опци�?та \"cbr\" за да наложите кодиране в CBR\n"\
"            режим, вме�?то �?тандартни�? abr mode. ABR о�?игур�?ва по-ви�?око\n"\
"            каче�?тво, но CBR може да е по-подход�?щ в �?итуации, като\n"\
"            предаването на mp3 през интернет поток.\n"\
"\n"\
"    �?апример:\n"\
"\n"\
"    \"-lameopts fast:preset=standard  \"\n"\
" или \"-lameopts  cbr:preset=192       \"\n"\
" или \"-lameopts      preset=172       \"\n"\
" или \"-lameopts      preset=extreme   \"\n"\
"\n"\
"\n"\
"До�?тъпни �?а н�?кои п�?евдоними за ABR режим:\n"\
"phone => 16kbps/моно        phon+/lw/mw-eu/sw => 24kbps/моно\n"\
"mw-us => 40kbps/моно        voice => 56kbps/моно\n"\
"fm/radio/tape => 112kbps    hifi => 160kbps\n"\
"cd => 192kbps               studio => 256kbps"
#define MSGTR_LameCantInit "�?е могат да �?е зададат LAME опциите, проверете битрейтовете/че�?тотите на ди�?кретите,"\
"н�?кои много ни�?ки битрейтове (<32) изи�?кват ни�?ки че�?тоти на ди�?кретите (напр. -srate 8000)."\
"�?ко нищо друго не помага пробвайте н�?кой preset."
#define MSGTR_ConfigFileError "грешка в конфигурационни�? файл"
#define MSGTR_ErrorParsingCommandLine "грешка при обработката на командни�? ред"
#define MSGTR_VideoStreamRequired "Задължително е да има видео поток!\n"
#define MSGTR_ForcingInputFPS "Вход�?щите кадри в �?екунда ще �?е интерпретират като %5.3f\n"
#define MSGTR_RawvideoDoesNotSupportAudio "Изходни�? формат RAWVIDEO не поддържа аудио - звука �?е премахва\n"
#define MSGTR_DemuxerDoesntSupportNosound "Tози разпределител в�?е още не поддържа -nosound .\n"
#define MSGTR_MemAllocFailed "не може да задели памет"
#define MSGTR_NoMatchingFilter "�?е може да бъде намерен подход�?щ филтър/изходен аудио формат!\n"
#define MSGTR_MP3WaveFormatSizeNot30 "sizeof(MPEGLAYER3WAVEFORMAT)==%d!=30, може би заради C компилатора?\n"
#define MSGTR_NoLavcAudioCodecName "LAVC аудио, Лип�?ва име на кодек!\n"
#define MSGTR_LavcAudioCodecNotFound "Aудио LAVC, не може да �?е намери енкодер за кодека %s\n"
#define MSGTR_CouldntAllocateLavcContext "Aудио LAVC, не може да задели контек�?т!\n"
#define MSGTR_CouldntOpenCodec "�?е може да отвори кодек %s, br=%d\n"

// cfg-mencoder.h:

#define MSGTR_MEncoderMP3LameHelp "\n\n"\
" vbr=<0-4>     променлив битрейт метод\n"\
"                0: cbr\n"\
"                1: mt\n"\
"                2: rh(подразбира �?е)\n"\
"                3: abr\n"\
"                4: mtrh\n"\
"\n"\
" abr           �?реден битрейт\n"\
"\n"\
" cbr           по�?то�?нен bitrate\n"\
"               Също така налага CBR кодиране за по�?ледователни ABR режими.\n"\
"\n"\
" br=<0-1024>   указва битрейта в КБита (�?амо за CBR и ABR)\n"\
"\n"\
" q=<0-9>       каче�?тво (0-мак�?имално, 9-минимално) (�?амо за VBR)\n"\
"\n"\
" aq=<0-9>      каче�?тво на алгоритъма (0-най-добро/бавно, 9-най-лошо/бързо)\n"\
"\n"\
" ratio=<1-100> коефициент на компре�?и�?\n"\
"\n"\
" vol=<0-10>    у�?илване на входни�? звук\n"\
"\n"\
" mode=<0-3>    (по-подразбиране: автоматичен)\n"\
"                0: stereo\n"\
"                1: joint-�?терео\n"\
"                2: двуканален\n"\
"                3: моно\n"\
"\n"\
" padding=<0-2>\n"\
"                0: без\n"\
"                1: в�?ички\n"\
"                2: регулирано\n"\
"\n"\
" fast          По-бързо кодиране на по�?ледователни VBR режими,\n"\
"               малко по-ни�?ко каче�?тво и по-ви�?оки битрейтове.\n"\
"\n"\
" preset=<value> О�?игур�?ва най-ви�?окото възможно каче�?тво при зададени на�?тройки.\n"\
"                 medium: VBR  кодиране,  добро каче�?тво\n"\
"                 (150-180 КБита/�? битрейт)\n"\
"                 standard:  VBR кодиране, ви�?око каче�?тво\n"\
"                 (170-210 Кбита/�? битрейт)\n"\
"                 extreme: VBR кодиране, много-ви�?око каче�?тво\n"\
"                 (200-240 КБита/�? битрейт)\n"\
"                 insane:  CBR  кодиране, най-ви�?око каче�?тво\n"\
"                 (320 Кбита/�? битрейт)\n"\
"                 <8-320>: ABR кодиране �?ъ�? зададен �?реден битрейт.\n\n"

//codec-cfg.c:
#define MSGTR_DuplicateFourcc "дублиран FourCC код"
#define MSGTR_TooManyFourccs "твърде много FourCC кодoве/формати..."
#define MSGTR_ParseError "грешка при разчитане"
#define MSGTR_ParseErrorFIDNotNumber "грешка при разчитане (ID на формата не е чи�?ло?)"
#define MSGTR_ParseErrorFIDAliasNotNumber "грешка при разчитане (ID п�?евдонима на формата не е чи�?ло?)"
#define MSGTR_DuplicateFID "дублирано ID на формата"
#define MSGTR_TooManyOut "твърде много изходни формати..."
#define MSGTR_InvalidCodecName "\nкодекът(%s) има невалидно име!\n"
#define MSGTR_CodecLacksFourcc "\nкодекът(%s) н�?ма FourCC код/формат!\n"
#define MSGTR_CodecLacksDriver "\nкодекът(%s) н�?ма драйвер!\n"
#define MSGTR_CodecNeedsDLL "\nкодекът(%s) �?е нуждае от 'dll'!\n"
#define MSGTR_CodecNeedsOutfmt "\nкодекът(%s) �?е нуждае от 'outfmt'!\n"
#define MSGTR_CantAllocateComment "�?е може да �?е задели памет за коментар. "
#define MSGTR_GetTokenMaxNotLessThanMAX_NR_TOKEN "get_token(): max >= MAX_MR_TOKEN!"
#define MSGTR_CantGetMemoryForLine "�?�?ма до�?татъчно памет за 'line': %s\n"
#define MSGTR_CantReallocCodecsp "�?е може да презадели памет за '*codecsp': %s\n"
#define MSGTR_CodecNameNotUnique "Името на кодека '%s' не е уникално."
#define MSGTR_CantStrdupName "�?е може да �?е изпълни strdup -> 'name': %s\n"
#define MSGTR_CantStrdupInfo "�?е може да �?е изпълни strdup -> 'info': %s\n"
#define MSGTR_CantStrdupDriver "�?е може да �?е изпълни strdup -> 'driver': %s\n"
#define MSGTR_CantStrdupDLL "�?е може да �?е изпълни strdup -> 'dll': %s"
#define MSGTR_AudioVideoCodecTotals "%d аудио & %d видео кодека\n"
#define MSGTR_CodecDefinitionIncorrect "Кодекът не е дефиниран коректно."
#define MSGTR_OutdatedCodecsConf "Tози codecs.conf е твърде �?тар и не�?ъвме�?тим �? тази вер�?и�? на MPlayer!"

// fifo.c
#define MSGTR_CannotMakePipe "�?е може да �?е �?ъздаде програмен канал (PIPE)!\n"

// m_config.c
#define MSGTR_SaveSlotTooOld "Твърде �?тар save slot е открит в lvl %d: %d !!!\n"
#define MSGTR_InvalidCfgfileOption "Опци�?та %s не може да �?е използва в конфигурационен файл.\n"
#define MSGTR_InvalidCmdlineOption "Опци�?та %s не може да �?е ползва от командни�? ред.\n"
#define MSGTR_InvalidSuboption "Грешка: опци�?та '%s' н�?ма подопци�? '%s'.\n"
#define MSGTR_MissingSuboptionParameter "Грешка: подопци�?та '%s' на '%s' изи�?ква параметър!\n"
#define MSGTR_MissingOptionParameter "Грешка: опци�?та '%s' изи�?ква параметър!\n"
#define MSGTR_OptionListHeader "\n Име                 Вид            Мин        Mак�?      Global  CL    Конф\n\n"
#define MSGTR_TotalOptions "\nОбщо: %d опции\n"

// open.c, stream.c:
#define MSGTR_CdDevNotfound "CD-ROM у�?трой�?тво '%s' не е открито.\n"
#define MSGTR_ErrTrackSelect "Грешка при избор на VCD пътечка."
#define MSGTR_ReadSTDIN "Четене от �?тандартни�? вход (stdin)...\n"
#define MSGTR_UnableOpenURL "URL адре�?а не може да бъде отворен: %s\n"
#define MSGTR_ConnToServer "У�?тановена е връзка �?ъ�? �?ървъра: %s\n"
#define MSGTR_FileNotFound "Файла не е намерен: '%s'\n"

#define MSGTR_SMBInitError "Библиотеката libsmbclient не може да бъде инициализирана: %d\n"
#define MSGTR_SMBFileNotFound "'%s' не може да бъде отворен през LAN\n"
#define MSGTR_SMBNotCompiled "MPlayer не е компилиран �?ъ�? поддръжка на четене от SMB.\n"

#define MSGTR_CantOpenDVD "�?е може да бъде отворено DVD у�?трой�?тво: %s (%s)\n"
#define MSGTR_DVDnumTitles "Има %d заглави�? на това DVD.\n"
#define MSGTR_DVDinvalidTitle "�?евалиден номер на DVD заглавие: %d\n"
#define MSGTR_DVDnumChapters "Има %d раздела в това DVD заглавие.\n"
#define MSGTR_DVDinvalidChapter "�?евалиден номер на DVD раздел: %d\n"
#define MSGTR_DVDnumAngles "Има %d гледни точки в това DVD заглавие..\n"
#define MSGTR_DVDinvalidAngle "�?евалиден номер на гледна точка: %d\n"
#define MSGTR_DVDnoIFO "�?е може да бъде отворен IFO файла на това DVD заглавие %d.\n"
#define MSGTR_DVDnoVOBs "Заглавието не може да бъде отворено (VTS_%02d_1.VOB).\n"

// demuxer.c, demux_*.c:
#define MSGTR_AudioStreamRedefined "ПРЕДУПРЕЖДЕ�?ИЕ: Заглавната ча�?т на аудио потока %d е редефинирана.\n"
#define MSGTR_VideoStreamRedefined "ПРЕДУПРЕЖДЕ�?ИЕ: Заглавната ча�?т на видео потока %d е редефинирана.\n"
#define MSGTR_TooManyAudioInBuffer "\nTвърде много аудио пакети в буфера: (%d в %d байта).\n"
#define MSGTR_TooManyVideoInBuffer "\nТвърде много видео пакети в буфера: (%d в %d байта).\n"
#define MSGTR_MaybeNI "Може би възпроизвеждате non-interleaved поток/файл или кодекът не �?е е �?правил?\n" \
                      "За AVI файлове, опитайте да наложите non-interleaved режим �?ъ�? опци�?та -ni.\n"
#define MSGTR_SwitchToNi "\nЗле �?труктуриран AVI файл - превключване към -ni режим...\n"
#define MSGTR_Detected_XXX_FileFormat "%s формат.\n"
#define MSGTR_DetectedAudiofile "�?удио файл.\n"
#define MSGTR_InvalidMPEGES "�?евалиден MPEG-ES поток??? Свържете �?е �? автора, може да е бъг :(\n"
#define MSGTR_FormatNotRecognized "============ За �?ъжаление, този формат не �?е разпознава/поддържа =============\n"\
                                  "=== �?ко този файл е AVI, ASF или MPEG поток, мол�? уведомете автора! ===\n"
#define MSGTR_MissingVideoStream "�?е е открит видео поток.\n"
#define MSGTR_MissingAudioStream "�?е е открит аудио поток -> н�?ма звук.\n"
#define MSGTR_MissingVideoStreamBug "Лип�?ва видео поток!? Свържете �?е �? автора, може да е бъг :(\n"

#define MSGTR_DoesntContainSelectedStream "разпределител: Файлът не �?ъдържа избрани�? аудио или видео поток.\n"

#define MSGTR_NI_Forced "�?аложен"
#define MSGTR_NI_Detected "Определен"
#define MSGTR_NI_Message "%s NON-INTERLEAVED AVI файл.\n"

#define MSGTR_UsingNINI "Използва �?е NON-INTERLEAVED AVI формат.\n"
#define MSGTR_CouldntDetFNo "�?е може да �?е определи бро�? на кадрите (за превъртане).\n"
#define MSGTR_CantSeekRawAVI "�?е могат да �?е превъртат �?урови AVI потоци. (Изи�?ква �?е индек�?, опитайте �? -idx .)\n"
#define MSGTR_CantSeekFile "Този файл не може да �?е превърта.\n"

#define MSGTR_MOVcomprhdr "MOV: Поддръжката на компре�?ирани хедъри изи�?ква ZLIB!\n"
#define MSGTR_MOVvariableFourCC "MOV: В�?ИМ�?�?ИЕ: Открит е променлив FOURCC код!?\n"
#define MSGTR_MOVtooManyTrk "MOV: В�?ИМ�?�?ИЕ: твърде много пътечки"
#define MSGTR_DetectedTV "Открита е телевизи�?! ;-)\n"
#define MSGTR_ErrorOpeningOGGDemuxer "�?е може да бъде отворен ogg разпределител.\n"
#define MSGTR_CannotOpenAudioStream "�?е може да �?е отвори звуков поток: %s\n"
#define MSGTR_CannotOpenSubtitlesStream "�?е могат да бъдат отворени �?убтитри: %s\n"
#define MSGTR_OpeningAudioDemuxerFailed "�?е може да бъде отворен аудио разпределител: %s\n"
#define MSGTR_OpeningSubtitlesDemuxerFailed "�?е може да бъде отворен разпределител на �?убтитри: %s\n"
#define MSGTR_TVInputNotSeekable "Телевизи�?та не може да �?е превърта! (Могат да �?е превключват евентуално каналите ;)\n"
#define MSGTR_ClipInfo "Информаци�? за клипа:\n"

#define MSGTR_LeaveTelecineMode "\ndemux_mpg: 30000/1001fps NTSC �?ъдържание, превключване на кадровата че�?тота.\n"
#define MSGTR_EnterTelecineMode "\ndemux_mpg: 24000/1001fps прогре�?ивен NTSC, превключване на кадровата че�?тота.\n"

// dec_video.c & dec_audio.c:
#define MSGTR_CantOpenCodec "�?е може да бъде отворен кодек.\n"
#define MSGTR_CantCloseCodec "�?е може да бъде затворен кодек.\n"

#define MSGTR_MissingDLLcodec "ГРЕШК�?: необходими�?т DirectShow кодек %s не може да бъде отворен.\n"
#define MSGTR_ACMiniterror "�?е може да �?е зареди/инициализира Win32/ACM �?УДИО кодек (лип�?ващ DLL файл?).\n"
#define MSGTR_MissingLAVCcodec "�?е може да бъде открит кодек '%s' в libavcodec...\n"

#define MSGTR_MpegNoSequHdr "MPEG: Ф�?Т�?Л�?О: До�?тигнат е кра�? на файла, по-време на тър�?ене за sequence header.\n"
#define MSGTR_CannotReadMpegSequHdr "Ф�?Т�?Л�?О: �?е може да бъде прочетен sequence header.\n"
#define MSGTR_CannotReadMpegSequHdrEx "FATAL: �?е може да бъде прочетено разширението на sequence header.\n"
#define MSGTR_BadMpegSequHdr "MPEG: лош sequence header\n"
#define MSGTR_BadMpegSequHdrEx "MPEG: лошо разширение на sequence header\n"

#define MSGTR_ShMemAllocFail "�?е може да �?е задели �?поделена памет.\n"
#define MSGTR_CantAllocAudioBuf "�?е може да �?е задели аудио буфер.\n"

#define MSGTR_UnknownAudio "�?еизве�?тен/лип�?ващ аудио формат -> н�?ма звук\n"

#define MSGTR_UsingExternalPP "[PP] Използване на външен филтър за допълнителна обработка, max q = %d.\n"
#define MSGTR_UsingCodecPP "[PP] Използване на допълнителна обработка от �?трана на кодека, max q = %d.\n"
#define MSGTR_VideoCodecFamilyNotAvailableStr "За�?вената фамили�? видео кодеци [%s] (vfm=%s) не е до�?тъпна.\nРазрешете �? по време на компилаци�?.\n"
#define MSGTR_AudioCodecFamilyNotAvailableStr "За�?вената фамили�? аудио кодеци [%s] (afm=%s) не е до�?тъпна.\nРазрешете �? по време на компилаци�?.\n"
#define MSGTR_OpeningVideoDecoder "Отвар�?не на видео декодер: [%s] %s\n"
#define MSGTR_OpeningAudioDecoder "Отвар�?не на аудио декодер: [%s] %s\n"
#define MSGTR_VDecoderInitFailed "Инициализаци�?та на VDecoder �?е провали :(\n"
#define MSGTR_ADecoderInitFailed "Инициализаци�?та на ADecoder �?е провали :(\n"
#define MSGTR_ADecoderPreinitFailed "Предварителната инициализаци�? на ADecoder �?е провали :(\n"

// LIRC:
#define MSGTR_LIRCopenfailed "�?�?ма да има LIRC поддръжка.\n"
#define MSGTR_LIRCcfgerr "Конфигурационни�?т файл за LIRC %s не може да бъде прочетен.\n"

// vf.c
#define MSGTR_CouldNotFindVideoFilter "�?е може да бъде открит видео филтър '%s'.\n"
#define MSGTR_CouldNotOpenVideoFilter "�?е може да бъде отворен видео филтър '%s'.\n"
#define MSGTR_OpeningVideoFilter "Отвар�?не на видео филтър: "
#define MSGTR_CannotFindColorspace "�?е може да бъде открит �?ъответ�?тващ цветови формат, дори �? вмъкване на 'scale':(\n"

// vd.c
#define MSGTR_CodecDidNotSet "VDec: Кодекът не е указал sh->disp_w и sh->disp_h, опит за решение.\n"
#define MSGTR_CouldNotFindColorspace "�?е е открит подход�?щ цветови формат - повторен опит �? -vf scale...\n"
#define MSGTR_MovieAspectIsSet "Пропорциите на филма �?а %.2f:1 - мащабиране до правилните пропорции .\n"
#define MSGTR_MovieAspectUndefined "�?е �?а дефинирани пропорции - без предварително мащабиране.\n"

// vd_dshow.c, vd_dmo.c
#define MSGTR_DownloadCodecPackage "Тр�?бва да обновите/ин�?талирате пакета �? двоичните кодеци.\nОтидете на http://www.mplayerhq.hu/dload.html\n"

// x11_common.c
#define MSGTR_EwmhFullscreenStateFailed "\nX11: �?е може да прати EWMH fullscreen Event!\n"

#define MSGTR_InsertingAfVolume "[Сме�?ител] �?�?ма хардуерно �?ме�?ване, вмъкване на филтър за �?илата на звука.\n"
#define MSGTR_NoVolume "[Сме�?ител] �?е е до�?тъпна на�?тройка на звука.\n"

// ====================== GUI messages/buttons ========================

#ifdef CONFIG_GUI

// --- labels ---
#define MSGTR_About "Информаци�?"
#define MSGTR_FileSelect "Избор на файл..."
#define MSGTR_SubtitleSelect "Избор на �?убтитри..."
#define MSGTR_OtherSelect "Избор..."
#define MSGTR_AudioFileSelect "Избор на външен аудио канал..."
#define MSGTR_FontSelect "Избор на шрифт..."
#define MSGTR_PlayList "Спи�?ък за възпроизвеждане"
#define MSGTR_Equalizer "Еквалайзер"
#define MSGTR_SkinBrowser "Избор на Skin"
#define MSGTR_Network "Поток от мрежата..."
#define MSGTR_Preferences "Предпочитани�?"
#define MSGTR_AudioPreferences "Конфигуриране на аудио драйвера"
#define MSGTR_NoMediaOpened "�?�?ма отворени елементи."
#define MSGTR_NoChapter "�?�?ма раздели"
#define MSGTR_Chapter "Раздел %d"
#define MSGTR_NoFileLoaded "�?е е зареден файл."

// --- buttons ---
#define MSGTR_Ok "OK"
#define MSGTR_Cancel "Отказ"
#define MSGTR_Add "Добав�?не"
#define MSGTR_Remove "Премахване"
#define MSGTR_Clear "Изчи�?тване"
#define MSGTR_Config "Конфигураци�?"
#define MSGTR_ConfigDriver "Конфигуриране на драйвера"
#define MSGTR_Browse "Избор"

// --- error messages ---
#define MSGTR_NEMDB "За �?ъжаление, н�?ма до�?татъчно памет за draw buffer."
#define MSGTR_NEMFMR "За �?ъжаление, н�?ма до�?татъчно памет за менюто."
#define MSGTR_IDFGCVD "За �?ъжаление, н�?ма �?ъвме�?тим �? GUI видео драйвер."
#define MSGTR_NEEDLAVC "За �?ъжаление, не можете да възпроизвеждате различни от MPEG\nфайлове �? вашето DXR3/H+ у�?трой�?тво без прекодиране.\nМол�? разрешете lavc в полето за конфигураци�? на DXR3/H+ ."

// --- skin loader error messages
#define MSGTR_SKIN_ERRORMESSAGE "[skin] грешка в конфигурационни�? файл на skin-а на ред %d: %s"
#define MSGTR_SKIN_SkinFileNotFound "[skin] файлът ( %s ) не е намерен.\n"
#define MSGTR_SKIN_BITMAP_16bit  "Bitmap �? 16 и по-малко бита за цв�?т не �?е поддържа (%s).\n"
#define MSGTR_SKIN_BITMAP_FileNotFound  "файлът не е намерен (%s)\n"
#define MSGTR_SKIN_BITMAP_PNGReadError "грешка при четене на PNG (%s)\n"
#define MSGTR_SKIN_BITMAP_ConversionError "Грешка при преобразуване от 24 към 32 бита (%s)\n"
#define MSGTR_SKIN_UnknownMessage "неизве�?тно �?ъобщение: %s\n"
#define MSGTR_SKIN_NotEnoughMemory "недо�?татъчно памет\n"
#define MSGTR_SKIN_FONT_TooManyFontsDeclared "Декларирани �?а твърде много шрифтове.\n"
#define MSGTR_SKIN_FONT_FontFileNotFound "Файлът �?ъ�? шрифта не е намерен.\n"
#define MSGTR_SKIN_FONT_FontImageNotFound "Файл �? изображението на шрифта не е намерен.\n"
#define MSGTR_SKIN_FONT_NonExistentFont "не�?ъще�?твуващ идентификатор на шрифт (%s)\n"
#define MSGTR_SKIN_UnknownParameter "неизве�?тен параметър (%s)\n"
#define MSGTR_SKIN_SKINCFG_SkinNotFound "Скинът не е намерен (%s).\n"
#define MSGTR_SKIN_SKINCFG_SelectedSkinNotFound "Избрани�?т �?кин ( %s ) не е намерен, ще �?е ползва 'default'...\n"
#define MSGTR_SKIN_LABEL "Скинове:"

// --- gtk menus
#define MSGTR_MENU_AboutMPlayer "Отно�?но MPlayer"
#define MSGTR_MENU_Open "Oтвар�?не..."
#define MSGTR_MENU_PlayFile "Пу�?кане на файл..."
#define MSGTR_MENU_PlayVCD "Пу�?кане на VCD..."
#define MSGTR_MENU_PlayDVD "Пу�?кане на DVD..."
#define MSGTR_MENU_PlayURL "Пу�?кане от URL..."
#define MSGTR_MENU_LoadSubtitle "Зареждане на �?убтитри..."
#define MSGTR_MENU_DropSubtitle "Премахване на �?убтитри..."
#define MSGTR_MENU_LoadExternAudioFile "Зареждане на външен звуков файл..."
#define MSGTR_MENU_Playing "Playing"
#define MSGTR_MENU_Play "Старт"
#define MSGTR_MENU_Pause "Пауза"
#define MSGTR_MENU_Stop "Стоп"
#define MSGTR_MENU_NextStream "Следващ"
#define MSGTR_MENU_PrevStream "Предишен"
#define MSGTR_MENU_Size "Размер"
#define MSGTR_MENU_HalfSize   "Половин размер"
#define MSGTR_MENU_NormalSize "�?ормален размер"
#define MSGTR_MENU_DoubleSize "Двоен размер"
#define MSGTR_MENU_FullScreen "�?а ц�?л екран"
#define MSGTR_MENU_DVD "DVD"
#define MSGTR_MENU_VCD "VCD"
#define MSGTR_MENU_PlayDisc "Oтвар�?не на ди�?к..."
#define MSGTR_MENU_ShowDVDMenu "Показване на DVD меню"
#define MSGTR_MENU_Titles "Заглави�?"
#define MSGTR_MENU_Title "Заглавие %2d"
#define MSGTR_MENU_None "(н�?ма)"
#define MSGTR_MENU_Chapters "Раздели"
#define MSGTR_MENU_Chapter "Раздел %2d"
#define MSGTR_MENU_AudioLanguages "Език за аудио"
#define MSGTR_MENU_SubtitleLanguages "Език на �?убтитрите"
// TODO: Why is this different from MSGTR_PlayList?
#define MSGTR_MENU_PlayList "Playlist"
#define MSGTR_MENU_SkinBrowser "Избор на Skin"
// TODO: Why is this different from MSGTR_Preferences?
#define MSGTR_MENU_Preferences "�?а�?тройки"
#define MSGTR_MENU_Exit "Изход"
#define MSGTR_MENU_Mute "Без звук"
#define MSGTR_MENU_Original "Без пром�?на"
#define MSGTR_MENU_AspectRatio "Съотношение"
#define MSGTR_MENU_AudioTrack "�?удио пи�?та"
#define MSGTR_MENU_Track "Пи�?та %d"
#define MSGTR_MENU_VideoTrack "видео пи�?та"

// --- equalizer
#define MSGTR_EQU_Audio "�?удио"
#define MSGTR_EQU_Video "Видео"
#define MSGTR_EQU_Contrast "Контра�?т: "
#define MSGTR_EQU_Brightness "Светло�?т: "
#define MSGTR_EQU_Hue "Тон: "
#define MSGTR_EQU_Saturation "�?а�?итено�?т: "
#define MSGTR_EQU_Front_Left "Преден Л�?в"
#define MSGTR_EQU_Front_Right "Преден Де�?ен"
#define MSGTR_EQU_Back_Left "Заден Л�?в"
#define MSGTR_EQU_Back_Right "Заден Де�?ен"
#define MSGTR_EQU_Center "Централен"
#define MSGTR_EQU_Bass "Ба�?"
#define MSGTR_EQU_All "В�?ички"
#define MSGTR_EQU_Channel1 "Канал 1:"
#define MSGTR_EQU_Channel2 "Канал 2:"
#define MSGTR_EQU_Channel3 "Канал 3:"
#define MSGTR_EQU_Channel4 "Канал 4:"
#define MSGTR_EQU_Channel5 "Канал 5:"
#define MSGTR_EQU_Channel6 "Канал 6:"

// --- playlist
#define MSGTR_PLAYLIST_Path "Път"
#define MSGTR_PLAYLIST_Selected "Избрани файлове"
#define MSGTR_PLAYLIST_Files "Файлове"
#define MSGTR_PLAYLIST_DirectoryTree "Директории"

// --- preferences
#define MSGTR_PREFERENCES_SubtitleOSD "Субтитри и OSD"
#define MSGTR_PREFERENCES_Codecs "Кодеци & demuxer"
#define MSGTR_PREFERENCES_Misc "Разни"

#define MSGTR_PREFERENCES_None "Без"
#define MSGTR_PREFERENCES_DriverDefault "Подразбиращи �?е за драйвера"
#define MSGTR_PREFERENCES_AvailableDrivers "До�?тъпни драйвери:"
#define MSGTR_PREFERENCES_DoNotPlaySound "Без звук"
#define MSGTR_PREFERENCES_NormalizeSound "Изравн�?ване на звука"
#define MSGTR_PREFERENCES_EnableEqualizer "Включване на еквалайзера"
#define MSGTR_PREFERENCES_SoftwareMixer "Включва Софтуерен Сме�?ител"
#define MSGTR_PREFERENCES_ExtraStereo "Включване на допълнително �?терео"
#define MSGTR_PREFERENCES_Coefficient "Коефициент:"
#define MSGTR_PREFERENCES_AudioDelay "Закъ�?нение на звука"
#define MSGTR_PREFERENCES_DoubleBuffer "Двойно буфериране"
#define MSGTR_PREFERENCES_DirectRender "Включване на direct rendering"
#define MSGTR_PREFERENCES_FrameDrop "Разрешаване на пре�?качането на кадри"
#define MSGTR_PREFERENCES_HFrameDrop "Разрешаване на И�?ТЕ�?ЗИВ�?О пре�?качане на кадри (опа�?но)"
#define MSGTR_PREFERENCES_Flip "Преобръщане на образа"
#define MSGTR_PREFERENCES_Panscan "Panscan: "
#define MSGTR_PREFERENCES_Subtitle "Субтитри:"
#define MSGTR_PREFERENCES_SUB_Delay "Закъ�?нение: "
#define MSGTR_PREFERENCES_SUB_FPS "FPS:"
#define MSGTR_PREFERENCES_SUB_POS "Ме�?тоположение: "
#define MSGTR_PREFERENCES_SUB_AutoLoad "Изключване на автоматичното зареждане на �?убтитри"
#define MSGTR_PREFERENCES_SUB_Unicode "Субтитри �? Unicode кодиране"
#define MSGTR_PREFERENCES_SUB_MPSUB "Преобразуване на �?убтитрите в формата на MPlayer"
#define MSGTR_PREFERENCES_SUB_SRT "Преобразуване на �?убтитрите в SubViewer (SRT) формат"
#define MSGTR_PREFERENCES_SUB_Overlap "Препокриване на �?убтитрите"
#define MSGTR_PREFERENCES_Font "Шрифт:"
#define MSGTR_PREFERENCES_FontFactor "Дебелина на �?�?нката на шрифта:"
#define MSGTR_PREFERENCES_PostProcess "Разрешаване на допълнителна обработка"
#define MSGTR_PREFERENCES_AutoQuality "�?втоматичен контрол на каче�?твото: "
#define MSGTR_PREFERENCES_NI "Разчитане на non-interleaved AVI формат"
#define MSGTR_PREFERENCES_IDX "По�?тро�?ване на индек�?ната таблица наново, при необходимо�?т"
#define MSGTR_PREFERENCES_VideoCodecFamily "Фамили�? видео кодеци:"
#define MSGTR_PREFERENCES_AudioCodecFamily "Фамили�? аудио кодеци:"
#define MSGTR_PREFERENCES_FRAME_OSD_Level "OSD �?тепен"
#define MSGTR_PREFERENCES_FRAME_Subtitle "Субтитри"
#define MSGTR_PREFERENCES_FRAME_Font "Шрифт"
#define MSGTR_PREFERENCES_FRAME_PostProcess "Допълнителна обработка"
#define MSGTR_PREFERENCES_FRAME_CodecDemuxer "Кодек & разпределител"
#define MSGTR_PREFERENCES_FRAME_Cache "Кеширане"
#define MSGTR_PREFERENCES_Audio_Device "У�?трой�?тво:"
#define MSGTR_PREFERENCES_Audio_Mixer "Сме�?ител:"
#define MSGTR_PREFERENCES_Audio_MixerChannel "Канал на �?ме�?ител�?:"
#define MSGTR_PREFERENCES_Message "�?е забрав�?йте, да ре�?тартирате възпроизвеждането за да вл�?зат в �?ила н�?кои опции!"
#define MSGTR_PREFERENCES_DXR3_VENC "Видео енкодер:"
#define MSGTR_PREFERENCES_DXR3_LAVC "Използване на LAVC (FFmpeg)"
#define MSGTR_PREFERENCES_FontEncoding1 "Unicode"
#define MSGTR_PREFERENCES_FontEncoding2 "Западноевропей�?ки Езици (ISO-8859-1)"
#define MSGTR_PREFERENCES_FontEncoding3 "Западноевропей�?ки Езици �?ъ�? Euro (ISO-8859-15)"
#define MSGTR_PREFERENCES_FontEncoding4 "Слав�?н�?ки/Централноевропей�?ки Езици (ISO-8859-2)"
#define MSGTR_PREFERENCES_FontEncoding5 "Е�?перанто, Гал�?ки, Малтий�?ки, Тур�?ки (ISO-8859-3)"
#define MSGTR_PREFERENCES_FontEncoding6 "Стар Балтий�?ки (ISO-8859-4)"
#define MSGTR_PREFERENCES_FontEncoding7 "Кирилица (ISO-8859-5)"
#define MSGTR_PREFERENCES_FontEncoding8 "�?раб�?ки (ISO-8859-6)"
#define MSGTR_PREFERENCES_FontEncoding9 "Съвременен Гръцки (ISO-8859-7)"
#define MSGTR_PREFERENCES_FontEncoding10 "Тур�?ки (ISO-8859-9)"
#define MSGTR_PREFERENCES_FontEncoding11 "Балтий�?ки (ISO-8859-13)"
#define MSGTR_PREFERENCES_FontEncoding12 "Келт�?ки (ISO-8859-14)"
#define MSGTR_PREFERENCES_FontEncoding13 "Hebrew charsets (ISO-8859-8)"
#define MSGTR_PREFERENCES_FontEncoding14 "Ру�?ки (KOI8-R)"
#define MSGTR_PREFERENCES_FontEncoding15 "Украин�?ки, Белару�?ки (KOI8-U/RU)"
#define MSGTR_PREFERENCES_FontEncoding16 "Опро�?тен Китай�?ки (CP936)"
#define MSGTR_PREFERENCES_FontEncoding17 "Традиционен Китай�?ки (BIG5)"
#define MSGTR_PREFERENCES_FontEncoding18 "Япон�?ки (SHIFT-JIS)"
#define MSGTR_PREFERENCES_FontEncoding19 "Kорей�?ки (CP949)"
#define MSGTR_PREFERENCES_FontEncoding20 "Thai charset (CP874)"
#define MSGTR_PREFERENCES_FontEncoding21 "Кирилица Windows (CP1251)"
#define MSGTR_PREFERENCES_FontEncoding22 "Слав�?н�?ки/Централноевропей�?ки Windows (CP1250)"
#define MSGTR_PREFERENCES_FontNoAutoScale "Без автоматично мащабиране"
#define MSGTR_PREFERENCES_FontPropWidth "Пропорционално на широчината на филма"
#define MSGTR_PREFERENCES_FontPropHeight "Пропорционално на ви�?очината на филма"
#define MSGTR_PREFERENCES_FontPropDiagonal "Пропорционално на дължината на диагонала"
#define MSGTR_PREFERENCES_FontEncoding "Кодировка:"
#define MSGTR_PREFERENCES_FontBlur "Размазване:"
#define MSGTR_PREFERENCES_FontOutLine "Удебел�?ване:"
#define MSGTR_PREFERENCES_FontTextScale "Мащаб на тек�?та:"
#define MSGTR_PREFERENCES_FontOSDScale "Мащаб на OSD:"
#define MSGTR_PREFERENCES_Cache "Кеширане"
#define MSGTR_PREFERENCES_CacheSize "Размер на кеша: "
#define MSGTR_PREFERENCES_LoadFullscreen "Стартиране на ц�?л екран"
#define MSGTR_PREFERENCES_SaveWinPos "Запамет�?ване на ме�?тоположението на прозореца"
#define MSGTR_PREFERENCES_XSCREENSAVER "Изключване на XScreenSaver"
#define MSGTR_PREFERENCES_PlayBar "Лента за превъртане"
#define MSGTR_PREFERENCES_AutoSync "�?втоматична �?инхронизаци�?"
#define MSGTR_PREFERENCES_AutoSyncValue "Степен на �?инхронизаци�?та: "
#define MSGTR_PREFERENCES_CDROMDevice "CD-ROM у�?трой�?тво:"
#define MSGTR_PREFERENCES_DVDDevice "DVD у�?трой�?тво:"
#define MSGTR_PREFERENCES_FPS "Кадри в �?екунда:"
#define MSGTR_PREFERENCES_ShowVideoWindow "Показване на видео прозореца при неактивно�?т"

#define MSGTR_ABOUT_UHU "Разработката на графични�? интерфей�? �?е �?пон�?орира от UHU Linux\n"

// --- messagebox
#define MSGTR_MSGBOX_LABEL_FatalError "Фатална грешка!"
#define MSGTR_MSGBOX_LABEL_Error "Грешка!"
#define MSGTR_MSGBOX_LABEL_Warning "Внимание!"

// cfg.c

#define MSGTR_UnableToSaveOption "�?е може да �?е запамети опци�?та '%s'.\n"

// interface.c

#define MSGTR_DeletingSubtitles "[GUI] Изтриване на �?убтитрите.\n"
#define MSGTR_LoadingSubtitles "[GUI] Зареждане на �?убтитрите: %s\n"
#define MSGTR_AddingVideoFilter "[GUI] Добав�?не на видео филтър: %s\n"

// mw.c

#define MSGTR_NotAFile "Това не прилича на файл: %s !\n"

// ws.c

#define MSGTR_WS_RemoteDisplay "[ws] Отдалечен ди�?плей, изключване на  XMITSHM.\n"
#define MSGTR_WS_NoXshm "[ws] За �?ъжаление вашата �?и�?тема не поддържа разширението на X за �?поделена памет.\n"
#define MSGTR_WS_NoXshape "[ws] За �?ъжаление вашата �?и�?тема не поддържа разширението XShape.\n"
#define MSGTR_WS_ColorDepthTooLow "[ws] Твърде ни�?ка дълбочина на цветовете.\n"
#define MSGTR_WS_TooManyOpenWindows "[ws] Твърде много отворени прозорци.\n"
#define MSGTR_WS_ShmError "[ws] грешка в разширението за �?поделена памет\n"
#define MSGTR_WS_NotEnoughMemoryDrawBuffer "[ws] �?�?ма до�?татъчно памет за draw buffer.\n"
#define MSGTR_WS_DpmsUnavailable "DPMS не е до�?тъпен?\n"
#define MSGTR_WS_DpmsNotEnabled "DPMS не може да бъде включен.\n"

// wsxdnd.c

#define MSGTR_WS_NotAFile "Това не прилича на файл...\n"
#define MSGTR_WS_DDNothing "D&D: �?е е върнат резултат!\n"

#endif

// ======================= VO Video Output drivers ========================

#define MSGTR_VOincompCodec "Избраното изходно видео у�?трой�?тво е не�?ъвме�?тимо �? този кодек.\n"
#define MSGTR_VO_GenericError "Tази грешка е възникнала"
#define MSGTR_VO_UnableToAccess "До�?тъпът е невъзможен"
#define MSGTR_VO_ExistsButNoDirectory "вече �?ъще�?твува, но не е директори�?."
#define MSGTR_VO_DirExistsButNotWritable "Директори�?та �?ъще�?твува, но не е разрешен запи�?."
#define MSGTR_VO_DirExistsAndIsWritable "Директори�?та �?ъще�?твува и е разрешена за запи�?."
#define MSGTR_VO_CantCreateDirectory "Директори�?та не може да бъде �?ъздадена."
#define MSGTR_VO_CantCreateFile "Файлът не може да бъде �?ъздаден."
#define MSGTR_VO_DirectoryCreateSuccess "Директори�?та е у�?пешно �?ъздадена."
#define MSGTR_VO_ValueOutOfRange "Стойно�?тта е извън допу�?тимите граници"
#define MSGTR_VO_NoValueSpecified "�?е е указана �?тойно�?т."
#define MSGTR_VO_UnknownSuboptions "�?еизве�?тна подопци�?(и)"

// vo_aa.c

#define MSGTR_VO_AA_HelpHeader "\n\nТова �?а подопциите на aalib vo_aa:\n"
#define MSGTR_VO_AA_AdditionalOptions "Допълнителни опции предвидени от vo_aa:\n" \
"  help        показва това �?ъобщение\n" \
"  osdcolor    задава цв�?т за osd\n  subcolor    задава цвета на �?убтитрите\n" \
"        параметрите за цв�?т �?а:\n           0 : нормален\n" \
"           1 : dim\n           2 : удебелен\n           3 : удебелен шрифт\n" \
"           4 : обърнат\n           5 : �?пециален\n\n\n"


// vo_jpeg.c
#define MSGTR_VO_JPEG_ProgressiveJPEG "Включен е progressive JPEG формат."
#define MSGTR_VO_JPEG_NoProgressiveJPEG "Progressive JPEG форматът е изключен."
#define MSGTR_VO_JPEG_BaselineJPEG "Включен е baseline JPEG формат."
#define MSGTR_VO_JPEG_NoBaselineJPEG "Baseline JPEG форматът е изключен."

// vo_pnm.c
#define MSGTR_VO_PNM_ASCIIMode "Включен е ASCII режим."
#define MSGTR_VO_PNM_RawMode "Включен е \"�?уров\" режим."
#define MSGTR_VO_PNM_PPMType "Ще запи�?ва в PPM файлове."
#define MSGTR_VO_PNM_PGMType "Ще запи�?ва в PGM файлове."
#define MSGTR_VO_PNM_PGMYUVType "Ще запи�?ва в PGMYUV файлове."

// vo_yuv4mpeg.c
#define MSGTR_VO_YUV4MPEG_InterlacedHeightDivisibleBy4 "Режимът interlaced изи�?ква ви�?очината на образа да е кратна на  4."
#define MSGTR_VO_YUV4MPEG_InterlacedLineBufAllocFail "�?е може да �?е задели буфер за редовете за interlaced режим."
#define MSGTR_VO_YUV4MPEG_WidthDivisibleBy2 "Широчината на образа тр�?бва да е кратна на 2."
#define MSGTR_VO_YUV4MPEG_OutFileOpenError "�?е е получена памет или файлов манипулатор за запи�? \"%s\"!"
#define MSGTR_VO_YUV4MPEG_OutFileWriteError "Грешка при извеждане на изображението!"
#define MSGTR_VO_YUV4MPEG_UnknownSubDev "�?еизве�?тно поду�?трой�?тво: %s"
#define MSGTR_VO_YUV4MPEG_InterlacedTFFMode "Използване на interlaced изходен режим, от горе на долу."
#define MSGTR_VO_YUV4MPEG_InterlacedBFFMode "Използване на interlaced изходен режим, от долу на горе."
#define MSGTR_VO_YUV4MPEG_ProgressiveMode "Използва �?е (подразбиращ �?е) прогре�?ивен режим"

// Old vo drivers that have been replaced

#define MSGTR_VO_PGM_HasBeenReplaced "pgm видео драйвера е заменен от -vo pnm:pgmyuv.\n"
#define MSGTR_VO_MD5_HasBeenReplaced "md5 видео драйвера е заменен от -vo md5sum.\n"

// ======================= AO Audio Output drivers ========================

// libao2

// audio_out.c
#define MSGTR_AO_ALSA9_1x_Removed "audio_out: модулите alsa9 и alsa1x �?а от�?транени, използвайте -ao alsa .\n"

// ao_oss.c
#define MSGTR_AO_OSS_CantOpenMixer "[AO OSS] audio_setup: �?е може да отвори у�?трой�?тво �?ме�?ител %s: %s\n"
#define MSGTR_AO_OSS_ChanNotFound "[AO OSS] audio_setup:\nСме�?ител�?т на звуковата карта н�?ма канал '%s', използва �?е подразбиращ �?е.\n"
#define MSGTR_AO_OSS_CantOpenDev "[AO OSS] audio_setup: �?удио у�?трой�?тво %s не може да бъде отворено: %s\n"
#define MSGTR_AO_OSS_CantMakeFd "[AO OSS] audio_setup: �?е може да бъде �?ъздаден файлов де�?криптор: %s\n"
//#define MSGTR_AO_OSS_CantSetAC3 "[AO OSS] �?е може да �?е зададе за у�?трой�?тво %s формат AC3, опит �? S16...\n"
#define MSGTR_AO_OSS_CantSet "[AO OSS] �?удио у�?трой�?тво %s не може да бъде на�?троено за %s извеждане, проба �? %s...\n"
#define MSGTR_AO_OSS_CantSetChans "[AO OSS] audio_setup: �?е може да на�?трои звуковата карта за %d канала.\n"
#define MSGTR_AO_OSS_CantUseGetospace "[AO OSS] audio_setup: драйверът не поддържа SNDCTL_DSP_GETOSPACE :-(\n"
#define MSGTR_AO_OSS_CantUseSelect "[AO OSS]\n   ***  Ваши�?т аудио драйвер �?Е поддържа функци�?та select()  ***\n Рекомпилирайте MPlayer �? #undef HAVE_AUDIO_SELECT в config.h !\n\n"
#define MSGTR_AO_OSS_CantReopen "[AO OSS] Фатална грешка:\n *** �?Е МОЖЕ Д�? ПРЕ-ОТВОРИ/РЕСТ�?РТИР�? �?УДИО УСТРОЙСТВОТО *** %s\n"

// ao_arts.c
#define MSGTR_AO_ARTS_CantInit "[AO ARTS] %s\n"
#define MSGTR_AO_ARTS_ServerConnect "[AO ARTS] У�?тановена е връзка �?ъ�? аудио �?ървъра.\n"
#define MSGTR_AO_ARTS_CantOpenStream "[AO ARTS] Потокът не може да бъде отворен.\n"
#define MSGTR_AO_ARTS_StreamOpen "[AO ARTS] Потокът е отворен.\n"
#define MSGTR_AO_ARTS_BufferSize "[AO ARTS] размер на буфера: %d\n"

// ao_dxr2.c
#define MSGTR_AO_DXR2_SetVolFailed "[AO DXR2] Силата на звука не може да бъде �?менена на %d.\n"
#define MSGTR_AO_DXR2_UnsupSamplerate "[AO DXR2] dxr2: %d Hz не �?е поддържат, опитайте \"-aop list=resample\"\n"

// ao_esd.c
#define MSGTR_AO_ESD_CantOpenSound "[AO ESD] esd_open_sound �?е провали: %s\n"
#define MSGTR_AO_ESD_LatencyInfo "[AO ESD] закъ�?нение: [�?ървър: %0.2f�?, мрежа: %0.2f�?] (на�?тройка %0.2f�?)\n"
#define MSGTR_AO_ESD_CantOpenPBStream "[AO ESD] �?е може да бъде отворен esd поток за възпроизвеждане: %s\n"

// ao_mpegpes.c
#define MSGTR_AO_MPEGPES_CantSetMixer "[AO MPEGPES] DVB audio set mixer �?е провали: %s\n"
#define MSGTR_AO_MPEGPES_UnsupSamplerate "[AO MPEGPES] %d Hz не �?е поддържат, опитайте �? resample...\n"

// ao_null.c
// This one desn't even  have any mp_msg nor printf's?? [CHECK]

// ao_pcm.c
#define MSGTR_AO_PCM_FileInfo "[AO PCM] File: %s (%s)\nPCM: Че�?тота: %iHz Канали: %s Формат %s\n"
#define MSGTR_AO_PCM_HintInfo "[AO PCM] Info: най-бързо извличане �?е по�?тига �? -vc null -vo null\nPCM: Info: за да запишете WAVE файлове ползвайте -ao pcm:waveheader (подразбира �?е).\n"
#define MSGTR_AO_PCM_CantOpenOutputFile "[AO PCM] %s не може да �?е отвори за запи�?!\n"

// ao_sdl.c
#define MSGTR_AO_SDL_INFO "[AO SDL] Че�?тота: %iHz Канали: %s Формат %s\n"
#define MSGTR_AO_SDL_DriverInfo "[AO SDL] използва �?е %s аудио драйвер.\n"
#define MSGTR_AO_SDL_UnsupportedAudioFmt "[AO SDL] �?еподдържан аудио формат: 0x%x.\n"
#define MSGTR_AO_SDL_CantInit "[AO SDL] Инициализаци�?та на SDL �?удио �?е провали: %s\n"
#define MSGTR_AO_SDL_CantOpenAudio "[AO SDL] �?удиото не може да �?е отвори: %s\n"

// ao_sgi.c
#define MSGTR_AO_SGI_INFO "[AO SGI] контрол.\n"
#define MSGTR_AO_SGI_InitInfo "[AO SGI] init: Че�?тота: %iHz Канали: %s Формат %s\n"
#define MSGTR_AO_SGI_InvalidDevice "[AO SGI] play: невалидно у�?трой�?тво.\n"
#define MSGTR_AO_SGI_CantSetParms_Samplerate "[AO SGI] init: setparams �?е провали: %s\n�?е може да �?е зададе разчитаната че�?тота.\n"
#define MSGTR_AO_SGI_CantSetAlRate "[AO SGI] init: AL_RATE не �?е възприема от по�?оченото у�?трой�?тво.\n"
#define MSGTR_AO_SGI_CantGetParms "[AO SGI] init: getparams �?е провали: %s\n"
#define MSGTR_AO_SGI_SampleRateInfo "[AO SGI] init: че�?тотата на ди�?кретизаци�? е %f (разчитаната че�?тота е %f)\n"
#define MSGTR_AO_SGI_InitConfigError "[AO SGI] init: %s\n"
#define MSGTR_AO_SGI_InitOpenAudioFailed "[AO SGI] init: �?е може да бъде отворен аудио канал: %s\n"
#define MSGTR_AO_SGI_Uninit "[AO SGI] uninit: ...\n"
#define MSGTR_AO_SGI_Reset "[AO SGI] reset: ...\n"
#define MSGTR_AO_SGI_PauseInfo "[AO SGI] audio_pause: ...\n"
#define MSGTR_AO_SGI_ResumeInfo "[AO SGI] audio_resume: ...\n"

// ao_sun.c
#define MSGTR_AO_SUN_RtscSetinfoFailed "[AO SUN] rtsc: SETINFO �?е провали.\n"
#define MSGTR_AO_SUN_CantOpenAudioDev "[AO SUN] �?е може да бъде отворено у�?трой�?тво %s, %s  -> без звук.\n"
#define MSGTR_AO_SUN_UnsupSampleRate "[AO SUN] audio_setup: вашата звукова карта не поддържа %d канал, %s, %d Hz че�?тота.\n"
#define MSGTR_AO_SUN_CantUseSelect "[AO SUN]\n   ***  Ваши�?т аудио драйвер �?Е поддържа функци�?та select()  ***\nРекомпилирайте MPlayer �? #undef HAVE_AUDIO_SELECT в config.h !\n\n"
#define MSGTR_AO_SUN_CantReopenReset "[AO SUN]Фатална грешка:\n *** �?УДИО УСТРОЙСТВОТО (%s) �?Е МОЖЕ Д�? БЪДЕ ПРЕ-ОТВОРЕ�?О/РЕСТ�?РТИР�?�?О ***\n"

// ao_plugin.c

#define MSGTR_AO_PLUGIN_InvalidPlugin "[AO PLUGIN] невалиден плъгин: %s\n"

// ======================= AF Audio Filters ================================

// af_ladspa.c

#define MSGTR_AF_LADSPA_AvailableLabels "до�?тъпни етикети в"
#define MSGTR_AF_LADSPA_WarnNoInputs "В�?ИМ�?�?ИЕ! Този LADSPA плъгин не приема аудио.\n  При�?тигащи�?т аудио �?игнал ще бъде загубен."
#define MSGTR_AF_LADSPA_ErrMultiChannel "Многоканални (>2) плъгини не �?е поддържат (в�?е още).\n  Използвайте �?амо моно и �?терео плъгини."
#define MSGTR_AF_LADSPA_ErrNoOutputs "Този LADSPA плъгин не извежда звук."
#define MSGTR_AF_LADSPA_ErrInOutDiff "Бро�? на аудио входовете на този LADSPA плъгин �?е различава от бро�? на аудио изходите."
#define MSGTR_AF_LADSPA_ErrFailedToLoad "не може да �?е зареди"
#define MSGTR_AF_LADSPA_ErrNoDescriptor "Функци�?та ladspa_descriptor() не може да бъде открита в указани�? библиотечен файл."
#define MSGTR_AF_LADSPA_ErrLabelNotFound "Етикета не може да бъде намерен в библиотеката."
#define MSGTR_AF_LADSPA_ErrNoSuboptions "�?е �?а указани подопции"
#define MSGTR_AF_LADSPA_ErrNoLibFile "�?е е указан файл �? библиотека"
#define MSGTR_AF_LADSPA_ErrNoLabel "�?е е указан етикет на филтър"
#define MSGTR_AF_LADSPA_ErrNotEnoughControls "�?е �?а указани до�?татъчно контроли от командни�? ред"
#define MSGTR_AF_LADSPA_ErrControlBelow "%s: Input control #%d е под долната граница от %0.4f.\n"
#define MSGTR_AF_LADSPA_ErrControlAbove "%s: Input control #%d е над горната граница от %0.4f.\n"
