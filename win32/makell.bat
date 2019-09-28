@echo off
setlocal
rem	$Id: makell.bat,v 1.10 2017/07/10 04:52:26 jullien Exp $
rem
rem	Build the standard cores for Le-Lisp in 31 or 64 bit floats.
rem	(c) 1992 - 2017 Eligis
rem

set	FLT=0

if [%1]	     == [31] set  LLBIN=31
if [%1]      == [64] set  LLBIN=64
if [%LLBIN%] == []   goto usage
if [%LLBIN%] == [64] set  FLT=16

copy	lelisp%LLBIN%bin.exe  lelispbin.exe	> nul
copy	lelisp%LLBIN%binw.exe lelispbinw.exe	> nul

set	LLBIN=

if exist config.tmp goto conftmp

shift

if [%1] == [w]  goto win
if [%1] == [c]  goto cmplc
if [%1] == [l]  goto cll2lm

rem
rem	Standard zones
rem

echo 1/4] Making lelisp.bat (for Windows 32bits) ...
echo -stack 6 -code 600 -heap 256 -number 0 -vector 4 > conf\lelisp.lcf
echo -string 5 -symbol 5 -cons 4 -float %FLT% >> conf\lelisp.lcf
config -t lelisp lelispbin.exe lelisp.cnf

if [%1] == [t] goto done

:cmplc

echo 2/3] Making cmplc++.bat (for Windows 32bits) ...
echo -stack 8 -code 2000 -heap 1024 -number 0 -vector 10 > conf\cmplc++.lcf
echo -string 20 -symbol 18 -cons 20 -float %FLT% >> conf\cmplc++.lcf
config -t cmplc++ lelispbin.exe cmplc.cnf

if [%1] == [c] goto done

:cll2lm

ver | find "95"   > nul
if not errorlevel 1 goto NotOnWin9x
ver | find "98"   > nul
if not errorlevel 1 goto NotOnWin9x

rem
rem	Standard zones for ll2llm
rem

echo 3/4] Making cll2lm.bat (for Windows 32bits) ...
echo -stack 8 -code 2000 -heap 1024 -number 0 -vector 10 > conf\cll2lm.lcf
echo -string 20 -symbol 18 -cons 20 -float %FLT% >> conf\cll2lm.lcf
config -t cll2lm lelispbin.exe cll2lm.cnf

:NotOnWin9x
if [%1] == [l] goto done

goto win

shift

:win

rem
rem	Standard zones for Windows 32bits
rem

echo 4/4] Making lelispw.bat (for Windows 32bits) ...
echo -stack  6 -code 600 -heap 256 -number 0 -vector 4 > conf\lelispw.lcf
echo -string 6 -symbol 6 -cons 4 -float %FLT% >> conf\lelispw.lcf
config -t lelispw lelispbinw.exe lelispw.cnf

goto done

:conftmp
	echo "Error: CONFIG.TMP exist on directory, please delete before !"
	goto done

:usage
	echo	USAGE: %0 31 / 64
	echo	  You must specify a float option (31 or 64), ex :
	echo.
	echo		makell 31
	echo		makell 64

:done
endlocal
