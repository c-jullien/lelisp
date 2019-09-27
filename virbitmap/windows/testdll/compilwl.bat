@echo off

rem
rem	Call this script if you want to compile the Lisp part of dll
rem

rem compilation flags

set FLAGS=-parano nil -w t -p "./"

set COMPLICE=%LELISP%\msdos\complice

echo %FLAGS% > makemod.tmp
echo -e "(synonymq getglobal identity)" >> makemod.tmp
echo -e "(synonymq getinlib identity)" >> makemod.tmp
rem echo -e "(defvar #:system:getinlibp 1)" >> makemod.tmp
%COMPLICE% -config makemod.tmp testdll
del makemod.tmp > nul

set COMPLICE=
set FLAGS=
