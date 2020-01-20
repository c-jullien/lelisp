	.csect	lelisp_txt[PR]
	.globl	gccons
	.globl	inisymb
	.globl	inicst
	.globl	ini_chr
	.globl	C.ini_chr
C.ini_chr:	mflr	0
	stu	0,-4(1)
ini_chr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
