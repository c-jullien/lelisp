@echo	off

if [%1] == [31fpu] goto ok
if [%1] == [64fpu] goto ok

echo	Please, choose 31fpu or 64fpu option
goto	done

:ok
cd asm%1
for %%i in (*.asm) do %LELISP%\win95\ml -c -nologo -coff -Cp -Zm %%i

echo	 Objects are in %LELISP%\win95\o%1
xcopy *.obj %LELISP%\win95\o%1
cd ..

:done
