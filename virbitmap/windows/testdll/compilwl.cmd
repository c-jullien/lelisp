@echo off

rem
rem	Call this script if you want to compile the Lisp part of wlook
rem

rem les flags de compilation LL
set FLAGS=-v t -parano nil -w t -p "./"

rem le path de complice
set COMPLICE=%LELISP%\nt386\complice

echo %FLAGS% > makemod.tmp
echo -e "(synonymq getglobal identity)" >> makemod.tmp
echo -e "(synonymq getinlib identity)" >> makemod.tmp
rem echo -e "(defvar #:system:getinlibp 1)" >> makemod.tmp
%COMPLICE% -config makemod.tmp extrnlib
del makemod.tmp > nul

set COMPLICE=
set FLAGS=
