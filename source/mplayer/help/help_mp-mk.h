// translated to Macedonian by: MIsTeRIoZ "Zoran Dimovski"<zoki@email.com>
// Last sync with help_mp-en.h 1.113


// ========================= MPlayer Помош ===========================

static const char help_text[]=
"Употреба: mplayer [опции] [url|патека/]Име�?аДатотеката\n"
"\n"
"О�?новни Опции: (комплетна ли�?та на man �?траницата)\n"
" -vo <drv[:dev]>  избира излезен видео драјвер и уред ('-vo help' за ли�?та)\n"
" -ao <drv[:dev]>  избира излезен аудио драјвер и уред ('-ao help' за ли�?та)\n"
#ifdef CONFIG_VCD
" vcd://<trackno>   пушта VCD (Video CD) од уред наме�?то од датотека\n"
#endif
#ifdef CONFIG_DVDREAD
" dvd://<titleno>   пушта DVD на�?лови од уред наме�?то од датотека\n"
" -alang/-slang    избира јазик на DVD аудио/превод (од 2-char код на државата)\n"
#endif
" -ss <timepos>    бара до дадената (�?екунди или hh:mm:ss) позиција\n"
" -nosound         не го пушта звукот\n"
" -fs              плејбек на цел екран (или -vm, -zoom, подетално во man �?траната)\n"
" -x <x> -y <y>    поде�?ување на резолуцијата на прикажувањето (�?е употребува �?о -vm или -zoom)\n"
" -sub <file>      одредува датотека �?о превод за употреба (видете и�?то -subfps, -subdelay)\n"
" -playlist <file> одредува датотека �?о плејли�?та\n"
" -vid x -aid y    избира видео (x) и аудио (y) проток за пуштање\n"
" -fps x -srate y  �?е менува видео (x fps) и аудио (y Hz) ратата\n"
" -pp <quality>    овозможува филтер за по�?тпроце�?ирање (подетално во man �?траната)\n"
" -framedrop       овозможува отфрлање на фрејмови (за �?лаби машини)\n"
"\n"
"О�?новни копчиња: (комплетна ли�?та во man �?траната, проверете го и�?то така и input.conf)\n"
" <-  или  ->       бара назад/напред за 10 �?екунди\n"
" up или down       бара назад/напред за 1 минута\n"
" pgup или pgdown   бара назад/напред за 10 минути\n"
" < или >           чекор назад/напред во плејли�?тата\n"
" p или SPACE       го паузира филмот (прити�?нете на било кое копче да продолжи)\n"
" q или ESC         го �?топира пуштањето и излегува од програмата\n"
" + или -           при�?по�?убување на аудио задоцнувањето �?о +/- 0.1 �?екунда\n"
" o                цикличен OSD мод: ниеден / барот за барање / барот за барање + тајмер\n"
" * или /           зголемување или намалување на PCM тонот\n"
" z или x           прилагодување на задоцнувањето на преводот �?о +/- 0.1 �?екунда\n"
" r или t           прилагодување на позицијата за преводот нагоре/надолу, и�?то така видете и -vf expand\n"
"\n"
" * * * ВИДЕТЕ Ј�? MAN СТР�?�?�?Т�? З�? ДЕТ�?ЛИ, ПОВЕЌЕ (�?�?ПРЕД�?И) ОПЦИИ И КОПЧИЊ�?* * *\n"
"\n";

// ========================= MPlayer ПОР�?КИ ===========================

// mplayer.c:

#define MSGTR_Exiting "\nИзлегу...\n"
#define MSGTR_ExitingHow "\nИзлегува... (%s)\n"
#define MSGTR_Exit_quit "Откажи"
#define MSGTR_Exit_eof "Крај на датотеката"
#define MSGTR_Exit_error "Фатална грешка"
#define MSGTR_IntBySignal "\nMPlayer е прекинат од �?игналот %d во модулот: %s\n"
#define MSGTR_NoHomeDir "�?е може да го пронајде HOME директориумот.\n"
#define MSGTR_GetpathProblem "get_path(\"конфигурирај\") проблем"
#define MSGTR_CreatingCfgFile "Создавање на конфигурациона датотека: %s\n"
#define MSGTR_CantLoadFont "�?е може да �?е вчита фонтот: %s\n"
#define MSGTR_CantLoadSub "�?е може да �?е вчитаат преводите: %s\n"
#define MSGTR_DumpSelectedStreamMissing "отпадок: Ф�?Т�?Л�?О: недо�?тига избраниот проток!\n"
#define MSGTR_CantOpenDumpfile "�?е може да �?е отвори датотеката за отпадоци.\n"
#define MSGTR_CoreDumped "Јадрото е отфрлено ;)\n"
#define MSGTR_FPSnotspecified "FPS(Frames Per Second) не �?е �?пецифицирани во хедерот или �?е невалидни, кори�?тете ја -fps опцијата.\n"
#define MSGTR_TryForceAudioFmtStr "Проба да го при�?или драјверот на аудио кодекот %s ...\n"
#define MSGTR_CantFindAudioCodec "�?е може да го пронајде кодекот за аудио форматот 0x%X.\n"
#define MSGTR_TryForceVideoFmtStr "Пробува да го при�?или драјверот на видео кодекот %s ...\n"
#define MSGTR_CantFindVideoCodec "�?е може да го пронајде кодекот кој одговара избран �?о -vo и видео форматот 0x%X.\n"
#define MSGTR_VOincompCodec "Избраниот излезен видео уред не е �?оодветен �?о овој кодек.\n"
#define MSGTR_CannotInitVO "Ф�?Т�?Л�?О: �?е може да го иницијализира видео драјверот.\n"
#define MSGTR_CannotInitAO "�?е може да го отвори/иницијализира аудио уредот -> нема звук.\n"
#define MSGTR_StartPlaying "Почнува плејбекот...\n"

#define MSGTR_SystemTooSlow "\n\n"\
"           *********************************************************\n"\
"           ******** Вашиот �?и�?тем е премногу СЛ�?Б да го пушта ова! *********\n"\
"           *********************************************************\n\n"\
"Можни причини, проблеми, работа:\n"\
"- �?ај заедничко: �?кршен/лажен _аудио_ драјвер\n"\
"  - Обиди �?е �?о -ao sdl или кори�?ти ALSA 0.5 или OSS емулаторот на ALSA 0.9.\n"\
"  - Ек�?периментирајте �?о различни вредно�?ти за -autosync, 30 е добар почеток.\n"\
"- СЛ�?Б видео излез\n"\
"  - Пробајте �?о друг -vo драјвер (-vo help за ли�?та) или обидете �?е �?о -framedrop!\n"\
"- СЛ�?Б Проце�?ор\n"\
"  - �?е �?е обидувајте да пуштате голем DVD/DivX филм на СЛ�?Б проце�?ор! Обидете �?е �?о -hardframedrop.\n"\
"- Ра�?ипана датотека\n"\
"  - Пробајте различни комбинации на -nobps -ni -forceidx -mc 0.\n"\
"- СЛ�?Б медиум (NFS/SMB монтирања, DVD, VCD итн.)\n"\
"  - Пробајте �?о -cache 8192.\n"\
"- Дали кори�?тите -cache за пуштање на непреклопувачка AVI датотека?\n"\
"  - Пробајте �?о -nocache.\n"\
"Прочитајте го DOCS/HTML/en/video.html за пораки за подобрување/забрзување.\n"\
"�?ко ништо од ова не ви помага, прочитајте го DOCS/HTML/en/bugreports.html.\n\n"

#define MSGTR_NoGui "MPlayer е компајлиран БЕЗ GUI подршка.\n"
#define MSGTR_GuiNeedsX "�?а MPlayer GUI е потребно X11.\n"
#define MSGTR_Playing "Пуштено %s\n"
#define MSGTR_NoSound "�?удио: нема звук\n"
#define MSGTR_FPSforced "FPS при�?илени да бидат %5.3f  (ftime: %5.3f)\n"
#define MSGTR_AvailableVideoOutputDrivers "До�?тапни излезни видео драјвери:\n"
#define MSGTR_AvailableAudioOutputDrivers "До�?тапни излезни аудио драјвери:\n"
#define MSGTR_AvailableAudioCodecs "До�?тапни аудио кодеци:\n"
#define MSGTR_AvailableVideoCodecs "До�?тапни видео кодеци:\n"
#define MSGTR_AvailableAudioFm "\nДо�?тапни (внатрешно-компајлирани) фамилија/дајвери на аудио кодекот:\n"
#define MSGTR_AvailableVideoFm "\nДо�?тапни (внатрешно-компајлирани) фамилија/дајвери на видео кодекот:\n"
#define MSGTR_AvailableFsType "До�?тапни модови за менување на �?лојот за цел екран:\n"
#define MSGTR_CannotReadVideoProperties "Видео: �?е може да ги прочита �?вој�?твата.\n"
#define MSGTR_NoStreamFound "�?е е пронајден проток.\n"
#define MSGTR_ErrorInitializingVODevice "Грешка при отварањето/иницијализирањето на избраниот излезен видео (-vo) уред.\n"
#define MSGTR_ForcedVideoCodec "При�?илен видео кодек: %s\n"
#define MSGTR_ForcedAudioCodec "При�?илен аудио кодек: %s\n"
#define MSGTR_Video_NoVideo "Видео: нема �?лика\n"
#define MSGTR_NotInitializeVOPorVO "\nФ�?Т�?Л�?О: �?е може да ги иницијализира видео филтерите (-vf) или видео излезот (-vo).\n"
#define MSGTR_Paused "  =====  П�?УЗ�? =====" // не повеќе од 23 карактери (�?тату�? линија за аудио датотеките)
#define MSGTR_PlaylistLoadUnable "\n�?е може да ја вчита плејли�?тата %s.\n"
#define MSGTR_Exit_SIGILL_RTCpuSel \
"- MPlayer падна од '�?елегална Ин�?трукција'.\n"\
"  Можеби е баг во нашиот нов код за детекција на проце�?орот при извршувањето..\n"\
"  Ве молиме прочитајте го DOCS/HTML/en/bugreports.html.\n"
#define MSGTR_Exit_SIGILL \
"- MPlayer падна од '�?елегална Ин�?трукција'.\n"\
"  Ова обично �?е �?лучува кога работи на проце�?ор кој е различен од оној за кој е\n"\
"  компајлиран/оптимизиран.\n"\
"  Потврдете го ова!\n"
#define MSGTR_Exit_SIGSEGV_SIGFPE \
"- MPlayer падна поради лоша употреба на CPU/FPU/RAM.\n"\
"  Рекомпалирајте го MPlayer �?о --enable-debug и направете 'gdb' �?ледењеВОпозадина и\n"\
"  ди�?а�?емблирање. Подетално во DOCS/HTML/en/bugreports_what.html#bugreports_crash.\n"
#define MSGTR_Exit_SIGCRASH \
"- MPlayer падна. Ова не треба да �?е �?лучува..\n"\
"  Може да е баг во кодот на MPlayer или_ во вашите драјвери _или_ во вашата\n"\
"  gcc верзија. �?ко ми�?лете дека тоа е грешка од MPlayer, ве молиме прочитајте\n"\
"  DOCS/HTML/en/bugreports.html и �?ледете ги ин�?трукциите. �?е можеме и нема\n"\
"  да ви помогнеме доколку не ни ја обезбедите оваа информација кога пријавувате можен баг.\n"


// mencoder.c:

#define MSGTR_UsingPass3ControlFile "Кори�?ти pass3 контролна датотека: %s\n"
#define MSGTR_MissingFilename "\n�?едо�?та�?ува името на датотеката.\n\n"
#define MSGTR_CannotOpenFile_Device "�?е може да ја/го отвори датотеката/уредот.\n"
#define MSGTR_CannotOpenDemuxer "�?е може да го отвори демук�?ерот.\n"
#define MSGTR_NoAudioEncoderSelected "\n�?ема избрано аудио енкодер (-oac). Изберете еден (видете -oac help) или кори�?тете -nosound.\n"
#define MSGTR_NoVideoEncoderSelected "\n�?ема избрано видео енкодер (-ovc). Изберете еден (видете -ovc help).\n"
#define MSGTR_CannotOpenOutputFile "�?е може да ја отвори излезната датотека '%s'.\n"
#define MSGTR_EncoderOpenFailed "�?е у�?пеа да �?е отвори енкодерот.\n"
#define MSGTR_ForcingOutputFourcc "При�?илување на излезното fourcc на %x [%.4s]\n"
#define MSGTR_DuplicateFrames "\n%d дуплирање на фрејмо(ви)т!\n"
#define MSGTR_SkipFrame "\nПре�?кокнување на фрејмот!\n"
#define MSGTR_ErrorWritingFile "%s: Грешка при запишување на датотеката.\n"
#define MSGTR_RecommendedVideoBitrate "Препорачана видео битрата за %s CD: %d\n"
#define MSGTR_VideoStreamResult "\nВидео проток: %8.3f kbit/s  (%d B/s)  големина: %"PRIu64" бајти %5.3f �?ек %d фрејма\n"
#define MSGTR_AudioStreamResult "\n�?удио проток: %8.3f kbit/s (%d B/s) големина: %"PRIu64" бајти %5.3f �?ек\n"

// cfg-mencoder.h:

#define MSGTR_MEncoderMP3LameHelp "\n\n"\
" vbr=<0-4>     метод на променлива битрата\n"\
"                0: cbr\n"\
"                1: mt\n"\
"                2: rh(�?тандардно)\n"\
"                3: abr\n"\
"                4: mtrh\n"\
"\n"\
" abr           про�?ечна битрата\n"\
"\n"\
" cbr           кон�?тантна битрата\n"\
"               И�?то така го принудува CBR модот на енкодирање на по�?ледователните претходно дефинирани ABR модови\n"\
"\n"\
" br=<0-1024>   одредете битрата во kBit (�?амо за CBR и ABR)\n"\
"\n"\
" q=<0-9>       квалитет (0-најголем, 9-најмал) (�?амо за VBR)\n"\
"\n"\
" aq=<0-9>      алгоритам�?ки квалитет (0-најдобар/нај�?пор, 9-најлош/најбрз)\n"\
"\n"\
" ratio=<1-100> коефициент на компре�?ијата\n"\
"\n"\
" vol=<0-10>    поде�?и го влезното аудио и�?кори�?тување\n"\
"\n"\
" mode=<0-3>    (�?тандардно: auto)\n"\
"                0: �?терео\n"\
"                1: joint-�?терео\n"\
"                2: дво-канално\n"\
"                3: моно\n"\
"\n"\
" padding=<0-2>\n"\
"                0: не\n"\
"                1: �?ите\n"\
"                2: прилагоди\n"\
"\n"\
" fast          �?е префрла на побрзо енкодирање на по�?ледователните предходно дефинирани VBR модови,\n"\
"               незабележително по�?лаб квалитет и поголема битрата.\n"\
"\n"\
" preset=<value> ги обезбедува најдобрите можни поде�?увања за квалитет.\n"\
"                 �?редно(medium): VBR  енкодирање,  добар квалитет\n"\
"                 (150-180 kbps оп�?ег на битратата)\n"\
"                 �?тандардно(standard):  VBR енкодирање, ви�?ок квалитет\n"\
"                 (170-210 kbps оп�?ег на битратата)\n"\
"                 ек�?тремно(extreme): VBR енкодирање, многу ви�?ок квалитет\n"\
"                 (200-240 kbps оп�?ег на битратата)\n"\
"                 лудо(insane):  CBR  енкодирање, најви�?ок предходно дефиниран квалитет\n"\
"                 (320 kbps битрата)\n"\
"                 <8-320>: ABR енкодирање на про�?ечно дадени kbps битрата.\n\n"

// open.c, stream.c:
#define MSGTR_CdDevNotfound "CD-ROM Уредот '%s' не е пронајден.\n"
#define MSGTR_ErrTrackSelect "Грешка во избирањето на VCD датотеката."
#define MSGTR_ReadSTDIN "Читање од stdin...\n"
#define MSGTR_UnableOpenURL "�?е може да �?е отвори URL: %s\n"
#define MSGTR_ConnToServer "Поврзан �?о �?ерверот: %s\n"
#define MSGTR_FileNotFound "Датотеката не е пронајдена: '%s'\n"

#define MSGTR_SMBInitError "�?е може да ја иницијализира libsmbclient библиотеката: %d\n"
#define MSGTR_SMBFileNotFound "�?е може да отвори од локалната мрежа: '%s'\n"
#define MSGTR_SMBNotCompiled "MPlayer не е компајлиран �?о подршка за SMB читање\n"

#define MSGTR_CantOpenDVD "�?е можеше да �?е отвори DVD уредот: %s (%s)\n"
#define MSGTR_DVDnumTitles "Има %d на�?лови на ова DVD.\n"
#define MSGTR_DVDinvalidTitle "�?евалиден DVD број на на�?ловот: %d\n"
#define MSGTR_DVDnumChapters "Има %d поглавја на овој DVD на�?лов.\n"
#define MSGTR_DVDinvalidChapter "�?евалиден DVD број на поглавјето: %d\n"
#define MSGTR_DVDnumAngles "Има %d агли на овој DVD на�?лов.\n"
#define MSGTR_DVDinvalidAngle "�?евалиден DVD број на аголот: %d\n"
#define MSGTR_DVDnoIFO "�?е може да ја отвори IFO датотеката за DVD на�?ловот %d.\n"
#define MSGTR_DVDnoVOBs "�?е може да ги отвори на�?ловите на VOB датотеките (VTS_%02d_1.VOB).\n"

// demuxer.c, demux_*.c:
#define MSGTR_AudioStreamRedefined "ПРЕДУПРЕДУВ�?ЊЕ: Предефиниран е хедерот на аудио протокот %d.\n"
#define MSGTR_VideoStreamRedefined "ПРЕДУПРЕДУВ�?ЊЕ: Предефиниран е хедерот на видео протокот %d.\n"
#define MSGTR_TooManyAudioInBuffer "\nПремногу аудио пакети во баферот: (%d во %d бајти).\n"
#define MSGTR_TooManyVideoInBuffer "\nПремногу видео пакети во баферот: (%d во %d бајти).\n"
#define MSGTR_MaybeNI "Можеби вие пуштате непреклопувачки �?трим/датотека или кодекот не работи?\n" \
                      "За AVI датотеки, обиди �?е да го при�?илиш непреклопувачкиот мод �?о опцијата -ni.\n"
#define MSGTR_SwitchToNi "\nОткриена е лошо преклопена AVI датотека - �?е префрла на модот -ni...\n"
#define MSGTR_Detected_XXX_FileFormat "Пронајден е %s формат на датотеката.\n"
#define MSGTR_DetectedAudiofile "Пронајдена е аудио датотека.\n"
#define MSGTR_InvalidMPEGES "�?евалиден MPEG-ES проток??? Контактирајте �?о авторот, можеби е баг :(\n"
#define MSGTR_FormatNotRecognized "============ Извинете, овој формат на датотеката не е пропознат/подржан =============\n"\
                                  "=== �?ко оваа датотека е AVI, ASF или MPEG проток, ве молиме контактирајте �?о авторот! ===\n"
#define MSGTR_MissingVideoStream "�?е е пронајден видео проток.\n"
#define MSGTR_MissingAudioStream "�?е е пронајден аудио проток -> нема звук.\n"
#define MSGTR_MissingVideoStreamBug "�?едо�?тига видео проток!? Контактирајте �?о авторот, можеби е баг :(\n"

#define MSGTR_DoesntContainSelectedStream "demux: Датотеката не го �?одржи избраниот аудио или видео проток.\n"

#define MSGTR_NI_Forced "При�?илено"
#define MSGTR_NI_Detected "Пронајдено"
#define MSGTR_NI_Message "%s �?ЕПРЕКЛОПУВ�?ЧКИ формат на AVI датотеката.\n"

#define MSGTR_UsingNINI "Се кори�?ти �?ЕПРЕКЛОПУВ�?ЧКИ неи�?правен формат на AVI датотеката.\n"
#define MSGTR_CouldntDetFNo "�?е може да го одреди бројот на фрејмови (за аб�?олутно барање)\n"
#define MSGTR_CantSeekRawAVI "�?е може да бара во редовите на AVI �?тримовите. (Потребен е индек�?, обидете �?е �?о -idx префрлување.)\n"
#define MSGTR_CantSeekFile "�?е може да бара во оваа датотека.\n"

#define MSGTR_MOVcomprhdr "MOV: За подршка на компре�?ирани хедери потребно е ZLIB!\n"
#define MSGTR_MOVvariableFourCC "MOV: ПРЕДУПРЕДУВ�?ЊЕ: Откриено е променливо FOURCC!?\n"
#define MSGTR_MOVtooManyTrk "MOV: ПРЕДУПРЕДУВ�?ЊЕ: премногу траки"
#define MSGTR_DetectedTV "Пронајден е ТВ! ;-)\n"
#define MSGTR_ErrorOpeningOGGDemuxer "�?е може да �?е отвори ogg демук�?ерот.\n"
#define MSGTR_CannotOpenAudioStream "�?е може да �?е отвори аудио протокот: %s\n"
#define MSGTR_CannotOpenSubtitlesStream "�?е може да �?е отвори протокот за преводи: %s\n"
#define MSGTR_OpeningAudioDemuxerFailed "�?е у�?пеа да �?е отвори аудио демук�?ерот: %s\n"
#define MSGTR_OpeningSubtitlesDemuxerFailed "�?е у�?пеа да �?е отвори демук�?ерот за преводи: %s\n"
#define MSGTR_TVInputNotSeekable "Влезот за ТВ не е за барање! (Барањето веројатно е за менување на канали ;)\n"
#define MSGTR_ClipInfo "Информации за клипот:\n"

#define MSGTR_LeaveTelecineMode "\ndemux_mpg: Пронајдена е NTSC �?одржина од 30fps, �?е менува фрејмратата.\n"
#define MSGTR_EnterTelecineMode "\ndemux_mpg: Пронајдена е прогре�?ивна NTSC �?одржина од 24fps, �?е менува фрејмратата  \n"

// dec_video.c и dec_audio.c:
#define MSGTR_CantOpenCodec "�?е може да �?е отвори кодекот.\n"
#define MSGTR_CantCloseCodec "�?е може да �?е затвори кодекот.\n"

#define MSGTR_MissingDLLcodec "ГРЕШК�?: �?е може да �?е отвори потребниот DirectShow кодек %s.\n"
#define MSGTR_ACMiniterror "�?е може да �?е вчита/иницијализира Win32/ACM AUDIO кодекот (недо�?та�?ува DLL датотека?).\n"
#define MSGTR_MissingLAVCcodec "�?е може да го пронајде кодекот '%s' во libavcodec...\n"

#define MSGTR_MpegNoSequHdr "MPEG: Ф�?Т�?Л�?О: EOF додека �?е бараше хедерот на �?еквенцата.\n"
#define MSGTR_CannotReadMpegSequHdr "Ф�?Т�?Л�?О: �?е може да �?е прочита хедерот на �?еквенцата.\n"
#define MSGTR_CannotReadMpegSequHdrEx "Ф�?Т�?Л�?О: �?е може да �?е прочита продолжетокот од хедерот на �?еквенцата.\n"
#define MSGTR_BadMpegSequHdr "MPEG: лош хедер на �?еквенцата\n"
#define MSGTR_BadMpegSequHdrEx "MPEG: лош продолжеток од хедерот на �?еквенцата\n"

#define MSGTR_ShMemAllocFail "�?е може да �?е рапореди заедничката меморија\n"
#define MSGTR_CantAllocAudioBuf "�?е може да �?е ра�?пореди баферот на аудио излезот\n"

#define MSGTR_UnknownAudio "�?епознат/недо�?та�?ува аудио формат-> нема звук\n"

#define MSGTR_UsingExternalPP "[PP] Се кори�?ти надворешен по�?тпроце�?ор�?ки филтер, max q = %d.\n"
#define MSGTR_UsingCodecPP "[PP] Се кори�?ти по�?тпроце�?ирањето на кодекот, max q = %d.\n"
#define MSGTR_VideoCodecFamilyNotAvailableStr "Бараната фамилија на видео кодекот [%s] (vfm=%s) не е до�?тапна.\nОвозможете ја при компајлирањето.\n"
#define MSGTR_AudioCodecFamilyNotAvailableStr "Бараната фамилија на видео кодекот [%s] (afm=%s) не е до�?тапна.\nОвозможете ја при компајлирањето.\n"
#define MSGTR_OpeningVideoDecoder "Се отвара видео декодерот: [%s] %s\n"
#define MSGTR_OpeningAudioDecoder "Се отвара аудио декодерот: [%s] %s\n"
#define MSGTR_VDecoderInitFailed "Иницијализирањето на Видео Декодерот не у�?пеа :(\n"
#define MSGTR_ADecoderInitFailed "Иницијализирањето на �?удио Декодерот не у�?пеа :(\n"
#define MSGTR_ADecoderPreinitFailed "Преиницијализирањето на �?удио Декодерот не у�?пеа :(\n"

// LIRC:
#define MSGTR_LIRCopenfailed "�?е у�?пеа да �?е отвори LIRC подршката.\n"
#define MSGTR_LIRCcfgerr "�?е у�?пеа да �?е прочита LIRC конфигурационата датотека %s.\n"

// vf.c
#define MSGTR_CouldNotFindVideoFilter "�?е може да �?е пронајде видео филтерот '%s'\n"
#define MSGTR_CouldNotOpenVideoFilter "�?е може да �?е отвори видео филтерот '%s'\n"
#define MSGTR_OpeningVideoFilter "Се отвара видео филтерот: "
#define MSGTR_CannotFindColorspace "�?е може да �?е пронајде заеднички про�?тор за боја, дури ни �?о вне�?ување на 'нијан�?а' :(\n"

// vd.c
#define MSGTR_CodecDidNotSet "VDec: Кодекот не ги поде�?и sh->disp_w и sh->disp_h, �?е обидува да заобиколи.\n"
#define MSGTR_CouldNotFindColorspace "�?е може да �?е пронајде �?оодветен про�?тор за боја - �?е обидува повторно �?о -vf scale...\n"
#define MSGTR_MovieAspectIsSet "�?�?пектот на Филмот е %.2f:1 - �?е преме�?тува на точниот а�?пект на филмот.\n"
#define MSGTR_MovieAspectUndefined "�?�?пектот на филмот не е дефиниран - не е применето преме�?тување.\n"

// ====================== GUI пораки/копчиња ========================

#ifdef CONFIG_GUI

// --- лабели ---
#define MSGTR_About "За"
#define MSGTR_FileSelect "Изберете датотека ..."
#define MSGTR_SubtitleSelect "Изберете превод ..."
#define MSGTR_OtherSelect "Изберете ..."
#define MSGTR_AudioFileSelect "Изберете надворешен аудио канал ..."
#define MSGTR_FontSelect "Изберете фонт ..."
#define MSGTR_PlayList "Плејли�?та"
#define MSGTR_Equalizer "Еквилајзер"
#define MSGTR_SkinBrowser "Разгледувач на Скинови"
#define MSGTR_Network "Мрежен проток ..."
#define MSGTR_Preferences "Поде�?увања"
#define MSGTR_NoMediaOpened "�?е е отворен медиум."
#define MSGTR_NoChapter "�?ема поглавје"
#define MSGTR_Chapter "Поглавје %d"
#define MSGTR_NoFileLoaded "�?е е вчитана датотека."

// --- копчиња ---
#define MSGTR_Ok "Во Ред"
#define MSGTR_Cancel "Откажи"
#define MSGTR_Add "Додади"
#define MSGTR_Remove "От�?трани"
#define MSGTR_Clear "И�?чи�?ти"
#define MSGTR_Config "Конфигурирај"
#define MSGTR_ConfigDriver "Конфигурирај Драјвер"
#define MSGTR_Browse "Разгледај"

// --- пораки �?о грешки ---
#define MSGTR_NEMDB "Се извинуваме, немате доволно меморија за графичкиот бафер."
#define MSGTR_NEMFMR "Се извинуваме, немате доволно меморија за обојување на менито."
#define MSGTR_IDFGCVD "Се извинуваме, не е пронајден компитабилен драјвер на излезното видео за графички интерфеј�?."
#define MSGTR_NEEDLAVC "Се извинуваме, не можете да пуштате датотеки кои што не �?е MPEG �?о вашиот DXR3/H+ уред без реенкодирање.\nВе молиме овозможете lavc во DXR3/H+ кутијата за конфигурирање."

// --- пораки �?о грешка при вчитување на �?кинови
#define MSGTR_SKIN_ERRORMESSAGE "[�?кин] грешка во конфигурационата датотека за �?кинови, линија %d: %s"
#define MSGTR_SKIN_BITMAP_16bit  "�?е е подржана 16 битна или помала длабочина на битмапата ( %s ).\n"
#define MSGTR_SKIN_BITMAP_FileNotFound  "датотеката не е пронајдена ( %s )\n"
#define MSGTR_SKIN_BITMAP_PNGReadError "PNG грешка во читањето ( %s )\n"
#define MSGTR_SKIN_BITMAP_ConversionError "грешка при конвертирање од 24 бита во 32 бита ( %s )\n"
#define MSGTR_SKIN_UnknownMessage "непозната порака: %s\n"
#define MSGTR_SKIN_NotEnoughMemory "нема доволно меморија\n"
#define MSGTR_SKIN_FONT_TooManyFontsDeclared "премногу означени фонтови\n"
#define MSGTR_SKIN_FONT_FontFileNotFound "фонт датотеката не е пронајдена\n"
#define MSGTR_SKIN_FONT_FontImageNotFound "датотеката �?о фонт �?ликата не е пронајдена\n"
#define MSGTR_SKIN_FONT_NonExistentFont "непо�?тоечки фонт идентификувач ( %s )\n"
#define MSGTR_SKIN_UnknownParameter "непознат параметар ( %s )\n"
#define MSGTR_SKIN_SKINCFG_SkinNotFound "�?е е пронајден �?кин ( %s ).\n"
#define MSGTR_SKIN_LABEL "Скинови:"

// --- gtk менија
#define MSGTR_MENU_AboutMPlayer "За MPlayer"
#define MSGTR_MENU_Open "Отвори ..."
#define MSGTR_MENU_PlayFile "Пушти датотека ..."
#define MSGTR_MENU_PlayVCD "Пушти VCD ..."
#define MSGTR_MENU_PlayDVD "Пушти DVD ..."
#define MSGTR_MENU_PlayURL "Пушти URL ..."
#define MSGTR_MENU_LoadSubtitle "Вчитај превод ..."
#define MSGTR_MENU_DropSubtitle "И�?клучи го преводот ..."
#define MSGTR_MENU_LoadExternAudioFile "Вчитај надворешена аудио датотека ..."
#define MSGTR_MENU_Playing "Пуштено"
#define MSGTR_MENU_Play "Плеј"
#define MSGTR_MENU_Pause "Пауза"
#define MSGTR_MENU_Stop "Стоп"
#define MSGTR_MENU_NextStream "�?ареден �?трим"
#define MSGTR_MENU_PrevStream "Претходен �?трим"
#define MSGTR_MENU_Size "Големина"
#define MSGTR_MENU_NormalSize "�?ормална големина"
#define MSGTR_MENU_DoubleSize "Двојна големина"
#define MSGTR_MENU_FullScreen "�?а Цел Екран"
#define MSGTR_MENU_DVD "DVD"
#define MSGTR_MENU_VCD "VCD"
#define MSGTR_MENU_PlayDisc "Отвори ди�?к ..."
#define MSGTR_MENU_ShowDVDMenu "Прикажи го DVD менито"
#define MSGTR_MENU_Titles "�?а�?лови"
#define MSGTR_MENU_Title "�?а�?лов %2d"
#define MSGTR_MENU_None "(ниеден)"
#define MSGTR_MENU_Chapters "Поглавја"
#define MSGTR_MENU_Chapter "Поглавје %2d"
#define MSGTR_MENU_AudioLanguages "�?удио јазици"
#define MSGTR_MENU_SubtitleLanguages "Јазици на преводите"
#define MSGTR_MENU_SkinBrowser "Разгледувач на �?кинови"
#define MSGTR_MENU_Exit "Излези "
#define MSGTR_MENU_Mute "Мутирај"
#define MSGTR_MENU_Original "Оригинал"
#define MSGTR_MENU_AspectRatio "Пропорционално�?т"
#define MSGTR_MENU_AudioTrack "�?удио трака"
#define MSGTR_MENU_Track "Трака %d"
#define MSGTR_MENU_VideoTrack "Видео трака"

// --- еквилајзер
#define MSGTR_EQU_Audio "�?удио"
#define MSGTR_EQU_Video "Видео"
#define MSGTR_EQU_Contrast "Контра�?т: "
#define MSGTR_EQU_Brightness "Светлина: "
#define MSGTR_EQU_Hue "�?ијан�?и: "
#define MSGTR_EQU_Saturation "За�?итување: "
#define MSGTR_EQU_Front_Left "Преден Лев"
#define MSGTR_EQU_Front_Right "Преден Де�?ен"
#define MSGTR_EQU_Back_Left "Заден Лев"
#define MSGTR_EQU_Back_Right "Заден Дене�?"
#define MSGTR_EQU_Center "Центар"
#define MSGTR_EQU_Bass "Ба�?"
#define MSGTR_EQU_All "Сите"
#define MSGTR_EQU_Channel1 "Канал 1:"
#define MSGTR_EQU_Channel2 "Канал 2:"
#define MSGTR_EQU_Channel3 "Канал 3:"
#define MSGTR_EQU_Channel4 "Канал 4:"
#define MSGTR_EQU_Channel5 "Канал 5:"
#define MSGTR_EQU_Channel6 "Канал 6:"

// --- ПлејЛи�?та
#define MSGTR_PLAYLIST_Path "Патека"
#define MSGTR_PLAYLIST_Selected "Избрани датотеки"
#define MSGTR_PLAYLIST_Files "Датотеки"
#define MSGTR_PLAYLIST_DirectoryTree "Дрво на директориумите"

// --- �?вој�?тва
#define MSGTR_PREFERENCES_SubtitleOSD "Преводи и OSD"
#define MSGTR_PREFERENCES_Codecs "Кодеци и демук�?ер"
#define MSGTR_PREFERENCES_Misc "Разно"

#define MSGTR_PREFERENCES_None "�?иеден"
#define MSGTR_PREFERENCES_AvailableDrivers "До�?тапни драјвери:"
#define MSGTR_PREFERENCES_DoNotPlaySound "�?е го пуштај звукот"
#define MSGTR_PREFERENCES_NormalizeSound "�?ормализирај го звукот"
#define MSGTR_PREFERENCES_EnableEqualizer "Овозможи еквилајзер"
#define MSGTR_PREFERENCES_ExtraStereo "Овозможи ек�?тра �?терео"
#define MSGTR_PREFERENCES_Coefficient "Коефициент:"
#define MSGTR_PREFERENCES_AudioDelay "�?удио задоцнување"
#define MSGTR_PREFERENCES_DoubleBuffer "Овозможи дупло бафирање"
#define MSGTR_PREFERENCES_DirectRender "Овозможи директно бафирање"
#define MSGTR_PREFERENCES_FrameDrop "Овозможи изо�?тавување на фрејмови"
#define MSGTR_PREFERENCES_HFrameDrop "Овозможи ТЕШКО изо�?тавување на фрејмови (опа�?но)"
#define MSGTR_PREFERENCES_Flip "Преврти ја �?ликата наопаку"
#define MSGTR_PREFERENCES_Panscan "Panscan: "
#define MSGTR_PREFERENCES_Subtitle "Превод:"
#define MSGTR_PREFERENCES_SUB_Delay "Задоцнување: "
#define MSGTR_PREFERENCES_SUB_FPS "FPS (Фрејмови Во Секунда):"
#define MSGTR_PREFERENCES_SUB_POS "Позиција: "
#define MSGTR_PREFERENCES_SUB_AutoLoad "Оневозможи го автомат�?кото вчитување на преводот"
#define MSGTR_PREFERENCES_SUB_Unicode "Повеќе-коден превод"
#define MSGTR_PREFERENCES_SUB_MPSUB "Конвертирај ги дадените преводи во форматот за преводи на MPlayer"
#define MSGTR_PREFERENCES_SUB_SRT "Конвертирај ги дадените преводи во форматот базиран на време SubViewer (SRT)"
#define MSGTR_PREFERENCES_SUB_Overlap "Преме�?тувај го преклопувањето на преводот"
#define MSGTR_PREFERENCES_Font "Фонт:"
#define MSGTR_PREFERENCES_FontFactor "Фонт фактор:"
#define MSGTR_PREFERENCES_PostProcess "Овозможи По�?тПроце�?ирање"
#define MSGTR_PREFERENCES_AutoQuality "�?вто квалитет: "
#define MSGTR_PREFERENCES_NI "Кори�?ти не-преклопувачки AVI ра�?членувач"
#define MSGTR_PREFERENCES_IDX "Повторно ја направи индек�? табелата, ако е потребно"
#define MSGTR_PREFERENCES_VideoCodecFamily "Фамилија на видео кодекот:"
#define MSGTR_PREFERENCES_AudioCodecFamily "Фамилија на аудио кодекот:"
#define MSGTR_PREFERENCES_FRAME_OSD_Level "�?иво на OSD"
#define MSGTR_PREFERENCES_FRAME_Subtitle "Превод"
#define MSGTR_PREFERENCES_FRAME_Font "Фонт"
#define MSGTR_PREFERENCES_FRAME_PostProcess "По�?тПроце�?ирање"
#define MSGTR_PREFERENCES_FRAME_CodecDemuxer "Кодек и демук�?ер"
#define MSGTR_PREFERENCES_FRAME_Cache "Кеш"
#define MSGTR_PREFERENCES_Message "Ве молиме запомтете дека треба да го ре�?тартирате плејбекот за да можат некои опции да проработат!"
#define MSGTR_PREFERENCES_DXR3_VENC "Видео енкодер:"
#define MSGTR_PREFERENCES_DXR3_LAVC "Кори�?ти LAVC (ffmpeg)"
#define MSGTR_PREFERENCES_FontEncoding1 "Повеќе-коден"
#define MSGTR_PREFERENCES_FontEncoding2 "Западно-европ�?ки јазици (ISO-8859-1)"
#define MSGTR_PREFERENCES_FontEncoding3 "Западно-европ�?ки јазици �?о Евро (ISO-8859-15)"
#define MSGTR_PREFERENCES_FontEncoding4 "Словенечки/Централно европ�?ки јазици (ISO-8859-2)"
#define MSGTR_PREFERENCES_FontEncoding5 "Е�?перанто, Galician, Maltese, Тур�?ки (ISO-8859-3)"
#define MSGTR_PREFERENCES_FontEncoding6 "Стара Балтичка кодна �?трана (ISO-8859-4)"
#define MSGTR_PREFERENCES_FontEncoding7 "Кириличен (ISO-8859-5)"
#define MSGTR_PREFERENCES_FontEncoding8 "�?рап�?ки (ISO-8859-6)"
#define MSGTR_PREFERENCES_FontEncoding9 "Модерен Грчки (ISO-8859-7)"
#define MSGTR_PREFERENCES_FontEncoding10 "Тур�?ки (ISO-8859-9)"
#define MSGTR_PREFERENCES_FontEncoding11 "Балтички (ISO-8859-13)"
#define MSGTR_PREFERENCES_FontEncoding12 "Celtic (ISO-8859-14)"
#define MSGTR_PREFERENCES_FontEncoding13 "Евреј�?ка кодна �?трана (ISO-8859-8)"
#define MSGTR_PREFERENCES_FontEncoding14 "Ру�?ки (KOI8-R)"
#define MSGTR_PREFERENCES_FontEncoding15 "Украин�?ки, Белору�?ки (KOI8-U/RU)"
#define MSGTR_PREFERENCES_FontEncoding16 "Поедно�?тавена Кине�?ка кодна �?трана (CP936)"
#define MSGTR_PREFERENCES_FontEncoding17 "Традиционална Кине�?ка кодна �?трана (BIG5)"
#define MSGTR_PREFERENCES_FontEncoding18 "Јапон�?ка кодна �?трана (SHIFT-JIS)"
#define MSGTR_PREFERENCES_FontEncoding19 "Кореј�?ка кодна �?трана (CP949)"
#define MSGTR_PREFERENCES_FontEncoding20 "Thai charset (CP874)"
#define MSGTR_PREFERENCES_FontEncoding21 "Кириличен Windows (CP1251)"
#define MSGTR_PREFERENCES_FontEncoding22 "Словенечки/Централно европ�?ки Windows (CP1250)"
#define MSGTR_PREFERENCES_FontNoAutoScale "Без авто-големина"
#define MSGTR_PREFERENCES_FontPropWidth "Пропорционално �?о ширината на филмот"
#define MSGTR_PREFERENCES_FontPropHeight "Пропорционално �?о ви�?ината на филмот"
#define MSGTR_PREFERENCES_FontPropDiagonal "Пропорционално �?о дијагоналата на филмот"
#define MSGTR_PREFERENCES_FontEncoding "Енкодирање:"
#define MSGTR_PREFERENCES_FontBlur "Замаглување:"
#define MSGTR_PREFERENCES_FontOutLine "�?адворешна линија:"
#define MSGTR_PREFERENCES_FontTextScale "Големина на тек�?тот:"
#define MSGTR_PREFERENCES_FontOSDScale "Големина на OSD:"
#define MSGTR_PREFERENCES_Cache "Кеш вклучи/и�?клучи"
#define MSGTR_PREFERENCES_CacheSize "Големина на кешот: "
#define MSGTR_PREFERENCES_LoadFullscreen "Почни �?о цел екран"
#define MSGTR_PREFERENCES_SaveWinPos "Зачувај ја позицијата на прозорецот"
#define MSGTR_PREFERENCES_XSCREENSAVER "Стопирај ја заштитата на екранот"
#define MSGTR_PREFERENCES_PlayBar "Овозможи го плејбарот"
#define MSGTR_PREFERENCES_AutoSync "�?вто-�?инхронизација вклучи/и�?клучи"
#define MSGTR_PREFERENCES_AutoSyncValue "�?вто-�?инхронизација: "
#define MSGTR_PREFERENCES_CDROMDevice "CD-ROM уред:"
#define MSGTR_PREFERENCES_DVDDevice "DVD уред:"
#define MSGTR_PREFERENCES_FPS "FPS на филмот:"
#define MSGTR_PREFERENCES_ShowVideoWindow "Прикажи го видео прозорецот кога не е активен"

#define MSGTR_ABOUT_UHU "GUI развивањето �?понзорирано од UHU Linux\n"

// --- messagebox
#define MSGTR_MSGBOX_LABEL_FatalError "Фатална Грешка!"
#define MSGTR_MSGBOX_LABEL_Error "Грешка!"
#define MSGTR_MSGBOX_LABEL_Warning "Предупредување!"

#endif
