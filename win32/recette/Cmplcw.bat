@echo off

rem Recette officielle de Le-Lisp avec complice sous Windows.

for /F "tokens=1,2,3 delims=- " %%i in ('date /t') do set LLDATE=%%i-%%j-%%k

cd ..

nmake -nologo lelispextbinw.exe>make.log
if errorlevel 1 goto err
del make.log > nul

echo -stack 10 -code 750 -heap 300 -number 0 -vector 4 -string 8 > recette.cfg
echo -symbol 7 -cons 24 -float 0 ../llib/startup.ll >> recette.cfg

rem
rem Pour e^tre le moins possible de^pendant de l'environnement, on cre'e
rem des XXX.ini tre`s spe'ciaux :

rem Construit un config.tmp

echo ;;; This file was created by the command %0 > config.tmp
echo (defun herald ()>> config.tmp
echo    (print "; Le-Lisp (by INRIA) version 15.26  (14/Feb/2007)  [win32]")>> config.tmp
echo    ())>> config.tmp
echo (with ((outchan (openo "%LELISP%/win32/recette/log/cmplcw.%LLDATE%")))>> config.tmp
echo       (load-cpl () t t t t t)           >> config.tmp
echo       (setq #:complice:parano-flag t)   >> config.tmp
echo       (setq #:complice:warning-flag ()) >> config.tmp
echo       (libloadfile "recette" t)         >> config.tmp
echo       (print ";;")                      >> config.tmp
echo       (print ";; Test done")            >> config.tmp
echo       (print ";;")                      >> config.tmp
echo       (flush)                           >> config.tmp
echo       (close (outchan)))                >> config.tmp

echo Test done with %LELISP%\win32\lelispextbinw, DISPLAY=windows

%LELISP%\win32\lelispextbinw -config %LELISP%\win32\recette.cfg

goto end

:err
type make.log
del make.log > nul

:end
cd recette
