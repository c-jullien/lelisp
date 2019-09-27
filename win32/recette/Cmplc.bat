@echo	off

rem Recette officielle de Le-Lisp avec complice.

for /F "tokens=1,2,3 delims=- " %%i in ('date /t') do set LLDATE=%%i-%%j-%%k

cd ..
if exist lelispextbin.exe del lelispextbin.exe > nul

nmake -nologo lelispextbin.exe>make.log
if errorlevel 1 goto err
del make.log > nul

echo -stack 6 -code 750 -heap 300 -number 0 -vector 4 -string 8 > recette.cfg
echo -symbol 7 -cons 24 -float 0 ../llib/startup.ll >> recette.cfg

echo (load-cpl () t t t t t)		>  recette.tmp
echo (setq #:complice:parano-flag t)	>> recette.tmp
echo (setq #:complice:warning-flag ())	>> recette.tmp
echo (libloadfile "recette" t)		>> recette.tmp

lelispextbin -config recette.cfg < recette.tmp > recette\log\cmplc.%LLDATE% 2> recette\log\cmplc.err
del recette.cfg > nul
del recette.tmp > nul
goto end

:err
type make.log
del make.log > nul

:end
cd recette
