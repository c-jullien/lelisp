@echo	off

rem Recette officielle de Le-Lisp interpre'te' sur win32

for /F "tokens=1,2,3 delims=- " %%i in ('date /t') do set LLDATE=%%i-%%j-%%k

cd ..

echo -stack 6 -code 1 -heap 400 -number 0 -vector 4 -string 8 > recette.cfg
echo -symbol 7 -cons 24 -float 0 ../llib/startup.ll >> recette.cfg

echo (df compile l)			>  recette.tmp
echo (defun compiler l)			>> recette.tmp
echo (defun compile-all-in-core ())	>> recette.tmp
echo (defun loader l)			>> recette.tmp
echo (load-std  () t t t () ())		>> recette.tmp
echo (debug ())				>> recette.tmp
echo (libload "recette")		>> recette.tmp

lelispextbin -config recette.cfg < recette.tmp > recette\log\lli.%LLDATE%
if exist recette.cfg del recette.cfg > nul
if exist recette.tmp del recette.tmp > nul

cd recette

