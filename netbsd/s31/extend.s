	.file	"extend.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	mstack
	.globl	fcons
	.globl	bvar
	.globl	hashtab
	.globl	zundef
	.globl	zt
	.globl	zvoid
	.globl	zquote
	.globl	tabtypfn
	.globl	bfloat
	.globl	cfloat
	.globl	ffloat
	.globl	bvect
	.globl	cvect
	.globl	fvect
	.globl	bstrg
	.globl	cstrg
	.globl	fstrg
	.globl	csymb
	.globl	fsymb
	.globl	ccons
	.globl	econs
	.globl	bheap
	.globl	cheap
	.globl	eheap
	.globl	bnumb
	.globl	cnumb
	.globl	bstack
	.globl	estack
	.globl	crwork
	.text
	.align	4
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

	# FENTRY ini_ext
	.align	4
ini_ext:
	ret	
