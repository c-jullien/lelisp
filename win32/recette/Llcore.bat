@echo off
setlocal
rem Recette officielle de Le-Lisp standard modulaire avec core.

for /F "tokens=1,2,3 delims=- " %%i in ('date /t') do set LLDATE=%%i-%%j-%%k

cd ..
rem pour ne pas charger son .lelisp
set HOME=qwerty

if exist \tmp\savecore del \tmp\savecore > nul
if exist \tmp\restcore del \tmp\restcore > nul

if exist lelispextbin.exe  del lelispextbin.exe > nul

nmake -nologo lelispextbin.exe > nul

rem creation du fichier de reponse.

echo (load-stm () t t t t t) > recette.tmp
echo (setq testcore (catenate #:system:core-directory >> recette.tmp
echo	                        "testcore" >> recette.tmp
echo	                       #:system:core-extension)) >> recette.tmp
echo (progn >> recette.tmp
echo   (if (setq flag (save-core testcore)) >> recette.tmp
echo       (with ((outchan (openo "/tmp/restcore"))) >> recette.tmp
echo         (print "*" "* restauration anormale de l'image me'moire")) >> recette.tmp
echo       (with ((outchan (openo "/tmp/savecore"))) >> recette.tmp
echo         (print "*" "* sauvegarde anormale de l'image me'moire")) >> recette.tmp
echo   ) >> recette.tmp
echo   flag) >> recette.tmp
echo (end) >> recette.tmp

echo -stack 6 -code 750 -heap 300 -number 0 -vector 4 -string 8 > recette.cfg
echo -symbol 7 -cons 24 -float 0 ../llib/startup.ll >> recette.cfg
lelispextbin -config recette.cfg < recette.tmp > recette\log\llcore.%LLDATE% 2> recette\log\llcore.err

if exist recette.tmp del recette.tmp > nul

if exist \tmp\savecore goto saverr

if exist \tmp\restcore del \tmp\restcore > nul

echo (setq testcore (catenate #:system:core-directory > recette.tmp
echo 	                        "testcore" >> recette.tmp
echo 	                       #:system:core-extension)) >> recette.tmp
echo (restore-core testcore) >> recette.tmp
echo (libload "recette") >> recette.tmp
lelispextbin -config recette.cfg < recette.tmp >> recette\log\llcore.%LLDATE% 2>> recette\log\llcore.err

if exist recette.tmp del recette.tmp > nul

if exist \tmp\restcore goto corerr
if exist \tmp\savecore del \tmp\savecore
goto end

:saverr
	type \tmp\savecore
	echo "** SAVE-CORE: mauvais re'sultat rendu: NIL"
goto end

:corerr
	type \tmp\restcore
	echo "** RESTORE-CORE: mauvais re'sultat rendu: T"
goto end

:end
if exist llcore\testcore.core del llcore\testcore.core > nul
if exist recette.cfg del recette.cfg > nul

cd recette
endlocal
