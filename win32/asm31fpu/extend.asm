	.386p
	.387

	include	extend.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	extend.equ
ini_ext	proc	near
	ret
ini_ext	endp
_TEXT	ends
	end
