@echo	off
rem
rem this shell-script must be called from lelisp\$machine\recette :
rem

for /F "tokens=1,2,3 delims=- " %%i in ('date /t') do set LLDATE=%%i-%%j-%%k

cd ..

echo Automatical tests of BV on Windows.
echo Please wait.

echo -stack 10 -code 750 -heap 300 -number 0 -vector 4 -string 8 > recette.cfg
echo -symbol 7 -cons 24 -float 0 ../llib/startup.ll >> recette.cfg

rem Construit un config.tmp

echo ;;; This file was created by the command %0 > config.tmp
echo (defun herald ()>> config.tmp
echo    (print "; Le-Lisp (by INRIA) version 15.26  (18/Aug/2017)  [win32]")>> config.tmp
echo    ())>> config.tmp
echo (with ((outchan (openo "%LELISP%/win32/recette/log/bv.%LLDATE%")))>> config.tmp
echo       (load-cpl () t t t t t) >> config.tmp
echo       (initty)                >> config.tmp
echo       (inibitmap 'windows)    >> config.tmp
echo       (bitprologue)           >> config.tmp
echo       (libload "testbv.ll")   >> config.tmp
echo       (print ";;")            >> config.tmp
echo       (print ";; Test done")  >> config.tmp
echo       (print ";;")            >> config.tmp
echo       (sleep 3)               >> config.tmp
echo       (close (outchan)))      >> config.tmp
echo (end) ; very important...     >> config.tmp

echo Test done with %LELISP%\win32\lelisp31binw

%LELISP%\win32\lelisp31binw -config %LELISP%\win32\recette.cfg

del recette.cfg > nul
cd recette
