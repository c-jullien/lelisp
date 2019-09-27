@echo off
rem	$Id: cleancor.bat,v 1.3 2017/06/29 17:13:14 jullien Exp $
rem
rem	To clean cores and bat files.
rem	(c) 1992 - 2017 Eligis
rem

for %%i in (lelisp cmplc cmplc++ lelisps ceyx lelisp31 lelisp64) do if exist %%i.bat del %%i.bat > nul
for %%i in (lelispw cmplcw cmplc++w lelispsw ceyxw lelisp31w lelisp64w) do if exist %%i.bat del %%i.bat > nul
if exist llcore\?*.cor del llcore\?*.cor > nul
if exist conf\?*.lcf del conf\?*.lcf > nul

