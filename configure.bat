@echo off
rem $Source: /usr/cvs/lelisp/configure.bat,v $
rem $Date: 2017/08/17 05:01:08 $
rem $Revision: 1.5 $

rem
rem Boostrap Le-Lisp win32 from source
rem

set LELISP=%CD%

cl 2>&1 | find "C/C++"
if errorlevel 1 goto nocl

cl 2>&1 | find " x86"
if errorlevel 1 goto nox86

:build
 cd win32
 call newdir
 rem boostrap from already generated .asm files
 nmake -f Makeport bootstrap
 rem boostrap from LLM3 using lelisp just generated
 nmake -f Makeport world
 exit /b 0

:nocl
 echo Microsoft (R) C/C++ cl.exe is not found.
 popd
 exit /b 1

:nox86
 echo Microsoft (R) C/C++ is installed but cl.exe 32bit is not the default.
 popd
 exit /b 1
