@echo off
setlocal
set CMPLC=..\win32\cmplc++
echo (defvar #:complice:parano-flag nil)>complice.tmp
echo (defvar #:complice:warning-flag t)>>complice.tmp
echo (setq #:system:path (append '("m/" "l/") #:system:path))>>complice.tmp
echo (defun #:complice:declareglobalvar (s)>>complice.tmp
echo    (putprop s 't '#:complice:globalvar) )>>complice.tmp
echo (defun compilemoduleext (m)>>complice.tmp
echo    (mapc>>complice.tmp
echo       (lambda (f)>>complice.tmp
echo          (unless (eq f 'compiler)>>complice.tmp
echo             (packagecell f 'dont-touch-me) ))>>complice.tmp
echo       (getdefmodule (readdefmodule m) 'export) )>>complice.tmp
echo    (compilemodule m))>>complice.tmp
echo (de user-interrupt () (end 2))>>complice.tmp
echo (de syserror (f m b)>>complice.tmp
echo    (print " ** " f " : " m " : " b) (end 1))>>complice.tmp
echo (compilemoduleext '%1%)>>complice.tmp
echo (end ())>>complice.tmp

call %CMPLC%
del complice.tmp
move %1%.lo o
