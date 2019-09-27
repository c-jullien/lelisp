@echo	off
setlocal
rem Run the gabriel benchmarks in a cmplc on win32
rem usage: cd recette; Bench

for /F "tokens=1,2,3 delims=- " %%i in ('date /t') do set LLDATE=%%i-%%j-%%k

cd ..
cd

set	LOG=recette\log\bench.%LLDATE%
set	ERR=recette\log\bench.err
set	CMD=recette.bat
set	CFG=recette.cfg

echo Results in %LOG%
echo (load-cpl () t () () t t) > %CMD%
echo (loadfile "../benchmarks/benchmarks.ll" t) >> %CMD%
echo (do-test) >> %CMD%
echo (end) >> %CMD%

call recette\Echoconfig.bat > %LOG% 2> %ERR%

rem nmake llbin.exe > make.log
rem if errorlevel 1 goto err
rem del make.log > nul

echo -stack 6 -code 750 -heap 300 -number 0 -vector 4 -string 8 > %CFG%
echo -symbol 7 -cons 24 -float 0 ../llib/startup.ll >> %CFG%
llbin -config %CFG% >> %LOG% < %CMD%
goto end

:err
type make.log
del make.log > nul

:end
del	%CFG% > nul
del	%CMD% > nul
cd	recette
endlocal
