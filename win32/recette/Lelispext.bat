@echo	off

rem Recette du CLOAD + defextern

for /F "tokens=1,2,3 delims=- " %%i in ('date /t') do set LLDATE=%%i-%%j-%%k

echo **** CLOAD : not yet implemented on this system : win32 > log\llext.%LLDATE%

