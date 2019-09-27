@echo off
rem $Source: /usr/cvs/lelisp/win32/newdir.bat,v $
rem $Date: 2017/08/15 16:41:16 $
rem $Revision: 1.7 $
rem Change les paths absolus du directory d'installation de Le_Lisp
rem
rem Exemple: newdir c:\usr\local\lelisp

setlocal

if not "%1"=="" goto check

pushd %CD%\..
set DIR=%CD%
echo %DIR%
popd
goto update

:check
 pushd %1
 if errorlevel 1 goto usage
 set DIR=%CD%
 popd

:update
 rem replace \ by / for lisp string: "c:\foo\bar" => "c:/foo/bar"
 set DIR=%DIR:\=/%

 rem Update startup.ll
 set OLD="defvar #:system:directory \".:.*\""
 set NEW="defvar #:system:directory \"%DIR%/\""

 rem   echo Using: %NEW%

 powershell -Command "(Get-Content -path ../llib/startup.ll.in) -replace '%OLD%', '%NEW%' -replace '@SOURCES@', '/usr/ilog/lelisp/' | Set-Content startup.new"

 dos2unix < startup.new > startup.linux 2>&1
 if errorlevel 1 move startup.new startup.linux

 move startup.linux ..\llib\startup.ll>nul
 del startup.new startup.linux > nul

 call cleancor
 goto end

:usage
 echo %0 [complete_path_of_machine_s_directory]

:end
 endlocal
