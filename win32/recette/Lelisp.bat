@echo	off

rem Recette officielle de Le-Lisp standard modulaire.

for /F "tokens=1,2,3 delims=- " %%i in ('date /t') do set LLDATE=%%i-%%j-%%k

cd ..
call cleancor

if exist lelispextbin.exe del lelispextbin.exe > nul
nmake -nologo lelispextbin.exe FLT=31>make.log
if errorlevel 1 goto err
del make.log >nul

echo -stack 6 -code 750 -heap 300 -number 0 -vector 4 -string 8 > recette.cfg
echo -symbol 7 -cons 24 -float 0 ../llib/startup.ll >> recette.cfg

echo (load-stm () t t t t t) > recette.tmp
echo (libload "recette") >> recette.tmp

lelispextbin -config recette.cfg < .\recette.tmp > recette\log\llm.%LLDATE% 2> recette\log\llm.err
del recette.cfg > nul

if exist lelispextbin.exe del lelispextbin.exe > nul
nmake -nologo lelispextbin.exe FLT=64>make.log
if errorlevel 1 goto err
del make.log >nul

echo -stack 6 -code 750 -heap 300 -number 0 -vector 4 -string 8 > recette.cfg
echo -symbol 7 -cons 24 -float 16 ../llib/startup.ll >> recette.cfg
lelispextbin -config recette.cfg < .\recette.tmp >> recette\log\llm.%LLDATE% 2>> recette\log\llm.err
del recette.cfg > nul
del recette.tmp > nul

rem if not exist o\testfortran.obj goto end
if exist lfextbin.exe del lfextbin.exe > nul
nmake -nologo lfextbin.exe >make.log

if exist lfextbin.exe goto testfort
echo **** impossible to test with FORTRAN on this machine: Windows>> recette\log\llm.%LLDATE%
goto end

:testfort
echo -stack 6 -code 750 -heap 300 -number 0 -vector 4 -string 8 > recette.cfg
echo -symbol 7 -cons 24 -float 16 ../llib/startup.ll >> recette.cfg
echo (load-stm () () () '(callext) t) > recette.tmp
echo (libload "../lltest/testfortran.ll" t) >> recette.tmp
echo (end) >> recette.tmp
lfextbin -config recette.cfg < .\recette.tmp >> recette\log\llm.%LLDATE% 2>> recette\log\llm.err
del recette.cfg > nul
del recette.tmp > nul
goto end

:err
type make.log
del make.log >nul

:end
cd recette
