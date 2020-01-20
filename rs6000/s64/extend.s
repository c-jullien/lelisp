	.csect	lelisp_txt[PR]
	.globl	inisymb
	.globl	inicst
	.globl	errfs
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	probj
	.globl	probjt
	.globl	errnia
	.globl	errnla
	.globl	errnva
	.globl	errwna
	.globl	evalcar
	.globl	apply
	.globl	loc
	.globl	ini_ext
	.globl	C.ini_ext
C.ini_ext:	mflr	0
	stu	0,-4(1)
ini_ext:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
