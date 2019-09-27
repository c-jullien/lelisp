sed -f sedfile eval.as > eval.asm
sed -f sedfile eval.eq > eval.equ
sed -f sedfile eval.da > eval.dat
ml64 -c -Cp eval.asm
