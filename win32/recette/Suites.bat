@echo	off
setlocal
rem Suites is use to throw all recettes on a type of machine
rem
rem usage: Suites
rem

echo.
echo ********  Validation of Le-Lisp WIN32 (x86 compatible)
echo.
echo.	> return
time < return | find "." > tstart
time < return | find "," >> tstart
del return
call Echoconfig
echo.
echo Suiting Le-Lisp, wait a moment, please
echo And don't touch your machine during the last test [about BV]
echo.
echo lelisp testing
call .\Lelisp
echo complice testing
call .\Cmplc
echo lelisps testing
call .\Lelisps
echo lelisp interpreted testing
call .\Lelispi
echo save/restore core testing
call .\Llcore
echo external calls testing
call .\Lelispext
echo END function testing
call .\Lelispend
echo complice testing on Windows
call .\Cmplcw
echo Generiques Makefile's entries testing
call .\Llgen
echo Virtual Bitmap testing
call .\Bv
echo OK, Suites are ended.
echo Consult Log-files.
echo.
echo Suites started at :
type tstart
del  tstart
echo Suites ended at :
echo.	> return
time < return | find "."
time < return | find ","
del return
if exist ..\myllbin*.*  del ..\myllbin*.*
if exist ..\lfextbin*.* del ..\lfextbin*.*
if exist ..\recette.cfg del ..\recette.cfg
endlocal
