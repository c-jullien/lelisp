@echo	off

rem Recette officielle de Le-Lisp standard.

for /F "tokens=1,2,3 delims=- " %%i in ('date /t') do set LLDATE=%%i-%%j-%%k

cd ..
if exist lelispextbin.exe del lelispextbin.exe > nul
nmake -nologo lelispextbin.exe>make.log
if errorlevel 1 goto err
del make.log > nul

echo -stack 6 -code 750 -heap 300 -number 0 -vector 4 -string 8 > recette.cfg
echo -symbol 7 -cons 24 -float 0 ../llib/startup.ll >> recette.cfg

echo (load-std  () t t t t t)		>  recette.tmp
echo (debug t)				>> recette.tmp
echo (llcp-std ())			>> recette.tmp
echo (debug ())				>> recette.tmp
echo (libload "recette")		>> recette.tmp

lelispextbin -config recette.cfg < recette.tmp > recette\log\lls.%LLDATE% 2> recette\log\lls.err
del recette.cfg > nul
del recette.tmp > nul
goto end

:err
type make.log
del make.log > nul

:end
cd recette
