@echo off
rem	@(#)	compilbv.bat	(c) by Christian Jullien - 2002/03/20
rem
rem	Call this script if you want to compile the Lisp part of the BV
rem	without the C development KIT
rem

rem	System may be msdos, nt386, os2 or win95

set SYSTEM=msdos

ver | find " XP" | find "5.1" > nul
if not errorlevel 1 set SYSTEM=win95
ver | find "2000" > nul
if not errorlevel 1 set SYSTEM=win95
ver | find "NT"   > nul
if not errorlevel 1 set SYSTEM=win95
ver | find "95"   > nul
if not errorlevel 1 set SYSTEM=win95
ver | find "98"   > nul
if not errorlevel 1 set SYSTEM=win95
ver | find "DOS"  > nul
if not errorlevel 1 set SYSTEM=msdos
ver | find "/2"   > nul
if not errorlevel 1 set SYSTEM=os2

rem	Build the configuration file

echo -parano nil -w t -p \"../../llib/\" -p \"../../llmod/\" > cmplcflg.ccf
echo -p \"../../llobj/\" -p \"./\"  >> cmplcflg.ccf
echo -e "(de getglobal (s) 1)" >> cmplcflg.ccf
echo -e "(de defextern-cache (s))" >> cmplcflg.ccf

if [%1]==[] goto all

echo	%1
%LELISP%\%SYSTEM%\complice %1 -config cmplcflg.ccf
goto end

rem	Compile all the files

:all

echo	** You can also compile using 'nmake'.
echo	Compile all the BV-lisp files for %SYSTEM% ? (CTRL-C to exit)
pause > nul

echo	win_def
%LELISP%\%SYSTEM%\complice win_def  -config cmplcflg.ccf

echo	winstruc
%LELISP%\%SYSTEM%\complice winstruc -config cmplcflg.ccf

echo	winmenu
%LELISP%\%SYSTEM%\complice winmenu  -config cmplcflg.ccf

echo	wincolor
%LELISP%\%SYSTEM%\complice wincolor -config cmplcflg.ccf

echo	winbitma
%LELISP%\%SYSTEM%\complice winbitma -config cmplcflg.ccf

echo	winevent
%LELISP%\%SYSTEM%\complice winevent -config cmplcflg.ccf

echo	windraw
%LELISP%\%SYSTEM%\complice windraw  -config cmplcflg.ccf

echo	wingraph
%LELISP%\%SYSTEM%\complice wingraph -config cmplcflg.ccf

echo	winwindo
%LELISP%\%SYSTEM%\complice winwindo -config cmplcflg.ccf

echo	wininit
%LELISP%\%SYSTEM%\complice wininit  -config cmplcflg.ccf

echo	win
%LELISP%\%SYSTEM%\complice win      -config cmplcflg.ccf

:end
set	SYSTEM=

echo	Done.
