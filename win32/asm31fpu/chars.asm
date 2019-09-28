	.386p
	.387

	include	chars.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	chars.equ
ini_chr	proc	near
	ret
ini_chr	endp
_TEXT	ends
	end
