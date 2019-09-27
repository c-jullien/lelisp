@echo off

rem
rem	Call this script if you want to compile the Lisp part of wlook
rem

rem	System may be msdos, nt386, os2 or win95

set SYSTEM=msdos

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

:msdos
	set	SYSTEM=msdos
	goto	build

:win95
	set	SYSTEM=win95
	goto	build

:build

rem les flags de compilation LL

set FLAGS=-parano nil -w t -p "./"

rem le path de complice
set COMPLICE=%LELISP%\%SYSTEM%\complice

echo compile using %COMPLICE% ..

echo %FLAGS% > makemod.tmp
echo -e "(synonymq getglobal identity)"     >> makemod.tmp
echo -e "(synonymq getinlib identity)"      >> makemod.tmp
rem echo -e "(defvar #:system:getinlibp 1)" >> makemod.tmp
%COMPLICE% -config makemod.tmp extrnlib
del makemod.tmp > nul

set SYSTEM=
set COMPLICE=
set FLAGS=
