@echo off

rem	System may be msdos, os2, nt386, win32, win64, win95

set SYSTEM=win95

ver | find "XP"   > nul
if not errorlevel 1 set SYSTEM=win95
ver | find "NT"   > nul
if not errorlevel 1 set SYSTEM=win95
ver | find "95"   > nul
if not errorlevel 1 set SYSTEM=win95
ver | find "DOS"  > nul
if not errorlevel 1 set SYSTEM=msdos
ver | find "/2"   > nul
if not errorlevel 1 set SYSTEM=os2

goto %SYSTEM%

:win95
:msdos
:os2

set LELISPSAV=%LELISP%
set SYSDIR=%LELISP%\%SYSTEM%

if not exist %SYSTEM%\llexpand.cor goto nocore
if exist %SYSTEM%\llexpand.lcf goto core

:nocore
%SYSDIR%\complice < faire.exp

:core
if "%1" == "" goto exec

set EXPFILE=c:\tmp\expand
set FILES= 
set ALL=()
if exist %EXPFILE% del %EXPFILE%

:go
if "%1" == "-as"	goto as
if "%1" == "-masm"	goto masm
if "%1" == "-31"	goto f31
if "%1" == "-64"	goto f64
if "%1" == "-387"	goto fpu
if "%1" == "-no387"	goto nofpu
if "%1" == "-ret"	goto ret
if "%1" == "-retn"	goto retn
if "%1" == "-flag"	goto flag
if "%1" == "-all"	goto all
if "%1" == "-msdos"	goto msdos
if "%1" == "-os2"	goto os2
if "%1" == "-nt386"	goto nt386
if "%1" == "-cygwin"	goto cygwin
if "%1" == "-linux"	goto unix
if "%1" == "-x86macos"	goto unix
if "%1" == "-aix386"	goto unix
if "%1" == "-ix386"	goto unix
if "%1" == "-sco386"	goto unix
if "%1" == "-sun386i"	goto unix
if "%1" == "-svr4i386"	goto unix
if "%1" == "-end"	goto end

set FILES=%FILES% %1

:suite
shift
if "%1" == "" goto  common
goto go

:as
echo (setq unix-as-flag   t) >> %EXPFILE%
goto suite

:masm
echo (setq unix-as-flag  ()) >> %EXPFILE%
goto suite

:f31
echo (setq 31BITFLOATS    t) >> %EXPFILE%
goto suite

:f64
echo (setq 31BITFLOATS   ()) >> %EXPFILE%
goto suite

:fpu
echo (redefvalue math387  1) >> %EXPFILE%
goto suite

:nofpu
echo (redefvalue math387  0) >> %EXPFILE%
goto suite

:ret
echo (redefvalue RETN     0) >> %EXPFILE%
goto suite

:retn
echo (redefvalue RETN     1) >> %EXPFILE%
goto suite

:msdos
echo (setq syst 'msdos)           >> %EXPFILE%
echo (setq       expunix      ()) >> %EXPFILE%
echo (setq       unix-as-flag ()) >> %EXPFILE%
echo (redefvalue FLOATSTACK    1) >> %EXPFILE%
echo (redefvalue RETN          0) >> %EXPFILE%
echo (redefvalue UNDERSCORED   1) >> %EXPFILE%
echo (redefvalue SAVEDSTACK    0) >> %EXPFILE%
echo (redefvalue IT_LOOP       1) >> %EXPFILE%
echo (redefvalue MATH387       1) >> %EXPFILE%
goto suite

rem	IBM CC Version

:os2
echo (setq syst 'os2)             >> %EXPFILE%
echo (setq       expunix      ()) >> %EXPFILE%
echo (setq       unix-as-flag ()) >> %EXPFILE%
echo (redefvalue FLOATSTACK    0) >> %EXPFILE%
echo (redefvalue RETN          0) >> %EXPFILE%
echo (redefvalue UNDERSCORED   1) >> %EXPFILE%
echo (redefvalue SAVEDSTACK    1) >> %EXPFILE%
echo (redefvalue IT_LOOP       1) >> %EXPFILE%
echo (redefvalue MATH387       1) >> %EXPFILE%
goto suite

rem	Borland Version

:os2-borland
echo (setq syst 'os2)             >> %EXPFILE%
echo (setq       expunix      ()) >> %EXPFILE%
echo (setq       unix-as-flag ()) >> %EXPFILE%
echo (redefvalue FLOATSTACK    1) >> %EXPFILE%
echo (redefvalue RETN          1) >> %EXPFILE%
echo (redefvalue UNDERSCORED   1) >> %EXPFILE%
echo (redefvalue SAVEDSTACK    1) >> %EXPFILE%
echo (redefvalue IT_LOOP       1) >> %EXPFILE%
echo (redefvalue MATH387       1) >> %EXPFILE%
goto suite

:nt386
echo (setq syst 'nt386)           >> %EXPFILE%
echo (setq       expunix      ()) >> %EXPFILE%
echo (setq       unix-as-flag ()) >> %EXPFILE%
echo (redefvalue FLOATSTACK    0) >> %EXPFILE%
echo (redefvalue RETN          0) >> %EXPFILE%
echo (redefvalue UNDERSCORED   0) >> %EXPFILE%
echo (redefvalue SAVEDSTACK    1) >> %EXPFILE%
echo (redefvalue IT_LOOP       1) >> %EXPFILE%
echo (redefvalue MATH387       1) >> %EXPFILE%
goto suite

:unix
echo (setq syst 'unix)            >> %EXPFILE%
echo (setq       expunix       t) >> %EXPFILE%
echo (setq       unix-as-flag ()) >> %EXPFILE%
echo (redefvalue FLOATSTACK    0) >> %EXPFILE%
echo (redefvalue RETN          0) >> %EXPFILE%
echo (redefvalue UNDERSCORED   1) >> %EXPFILE%
echo (redefvalue SAVEDSTACK    0) >> %EXPFILE%
echo (redefvalue IT_LOOP       0) >> %EXPFILE%
echo (redefvalue MATH387       1) >> %EXPFILE%
goto suite

:cygwin
echo (setq syst 'unix)            >> %EXPFILE%
echo (setq       expunix       t) >> %EXPFILE%
echo (setq       unix-as-flag ()) >> %EXPFILE%
echo (redefvalue FLOATSTACK    0) >> %EXPFILE%
echo (redefvalue RETN          0) >> %EXPFILE%
echo (redefvalue UNDERSCORED   0) >> %EXPFILE%
echo (redefvalue SAVEDSTACK    0) >> %EXPFILE%
echo (redefvalue IT_LOOP       0) >> %EXPFILE%
echo (redefvalue MATH387       1) >> %EXPFILE%
goto suite

:flag
echo (defvar  %2   %3 ) >> %EXPFILE%
shift
shift
goto suite

:all
set all=t
goto suite

:common
echo (de user-interrupt () (end -2)) >> %EXPFILE%

echo (de syserror (f m b) >> %EXPFILE%
echo     (print " ** " f " : " m " : " b) (end -1)) >> %EXPFILE%

echo (defvar expand-all %ALL%) >> %EXPFILE%

echo (setq expand-file-list (quote ( >> %EXPFILE%
for %%i in ( %FILES% ) do echo       %%i >> %EXPFILE%
echo ))) >> %EXPFILE%

:exec
if     "%EXPANDSYSTEM%" == "cygwin" %SYSDIR%\llbin.exe -r unix\llexpand.cor
if not "%EXPANDSYSTEM%" == "cygwin" %SYSDIR%\llbin.exe -r %SYSTEM%\llexpand.cor

if not "%EXPFILE%" == "" del %EXPFILE%

:end
set EXPFILE=
set FILES=
set ALL=
set SYSDIR=
set LELISP=%LELISPSAV%
set LELISPSAV=
set SYSTEM=
