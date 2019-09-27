@echo	off

for /F "tokens=1,2,3 delims=- " %%i in ('date /t') do set LLDATE=%%i-%%j-%%k

cd ..
nmake -nologo lelisp31bin.exe>make.log
if errorlevel 1 goto err
del make.log > nul

echo **** cannot test testend on this system : win32 > recette\log\llend.%LLDATE%
rem ..\lltest\testend.sh
goto end

:err
type make.log
del make.log > nul

:end
cd recette
