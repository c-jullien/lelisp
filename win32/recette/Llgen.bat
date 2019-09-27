@echo	off
echo [Generiques Makefile's entries Test]
cd ..

for /F "tokens=1,2,3 delims=- " %%i in ('date /t') do set LLDATE=%%i-%%j-%%k

nmake -nologo myllbinw.exe USERO=o\testext.obj > make.log
if errorlevel 1 goto err
del make.log > nul

echo (end) > config.tmp

echo Test done with %LELISP%\win32\myllbinw, DISPLAY=windows

if exist %LELISP%\win32\myllbinw.exe echo "File myllbinw.exe Ok." > recette\log\llgen.%LLDATE%
if not exist %LELISP%\win32\myllbinw.exe echo "File myllbinw.exe fails." > recette\log\llgen.%LLDATE%

%LELISP%\win32\myllbinw

goto end

:err
type make.log
del make.log > nul

:end
cd recette
