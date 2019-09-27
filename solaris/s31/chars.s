!
!	File chars.s expansion for sparc arch=v8plus.
!	This file is part of Le-Lisp kernel.
!	Generated on Sat Oct   7 17 21:25:27 
!
	.file	"chars.s"
	.align	8 
	.global	mstack
	.global	bvar
	.global	gccons
	.global	inisymb
	.global	inicst
	.global	ini_chr
	.seg	"text"
ini_chr:
	ld	[%l7+0],%o7
	jmp	%o7+8
	inc  	4,%l7
	.align	4
! end
