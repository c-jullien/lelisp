@echo	off
setlocal
set LLSYSTEM=Windows

ver | find "NT"    > nul
if not errorlevel 1 set LLSYSTEM=NT
ver | find "95"    > nul
if not errorlevel 1 set LLSYSTEM=Windows 95
ver | find "98"    > nul
if not errorlevel 1 set LLSYSTEM=Windows 98
ver | find "DOS"   > nul
if not errorlevel 1 set LLSYSTEM=MS-DOS
ver | find "/2"    > nul
if not errorlevel 1 set LLSYSTEM=OS/2
ver | find "2000 " > nul
if not errorlevel 1 set LLSYSTEM=Windows 2000
ver | find "XP " | find "5.1" > nul
if not errorlevel 1 set LLSYSTEM=Windows XP
ver | find "XP " | find "6.0" > nul
if not errorlevel 1 set LLSYSTEM=Windows Vista
ver | find "Windows " | find "5.2" > nul
if not errorlevel 1 set LLSYSTEM=Windows XP
ver | find "Windows " | find "6.1" > nul
if not errorlevel 1 set LLSYSTEM=Windows 7
ver | find "Windows " | find "10." > nul
if not errorlevel 1 set LLSYSTEM=Windows 10

if "%PROCESSOR_IDENTIFIER%" == "" set PROCESSOR_IDENTIFIER=Intel Compatible
echo These benches are done on:
echo %LLSYSTEM% using %PROCESSOR_IDENTIFIER%
echo.	> return
date < return | find "199"
date < return | find "200"
time < return | find "."
time < return | find ","
del return
endlocal
