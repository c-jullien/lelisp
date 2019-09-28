	.file	"carcdr.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	fcons
	.globl	bvar
pnmac864:
	.string	"car"
	.even
pnmac865:
	.string	"cdr"
	.even
pnmac866:
	.string	"caar"
	.even
pnmac867:
	.string	"cadr"
	.even
pnmac868:
	.string	"cdar"
	.even
pnmac869:
	.string	"cddr"
	.even
pnmac870:
	.string	"caaar"
	.even
pnmac871:
	.string	"caadr"
	.even
pnmac872:
	.string	"cadar"
	.even
pnmac873:
	.string	"caddr"
	.even
pnmac874:
	.string	"cdaar"
	.even
pnmac875:
	.string	"cdadr"
	.even
pnmac876:
	.string	"cddar"
	.even
pnmac877:
	.string	"cdddr"
	.even
pnmac878:
	.string	"caaaar"
	.even
pnmac879:
	.string	"caaadr"
	.even
pnmac880:
	.string	"caadar"
	.even
pnmac881:
	.string	"caaddr"
	.even
pnmac882:
	.string	"cadaar"
	.even
pnmac883:
	.string	"cadadr"
	.even
pnmac884:
	.string	"caddar"
	.even
pnmac885:
	.string	"cadddr"
	.even
pnmac886:
	.string	"cdaaar"
	.even
pnmac887:
	.string	"cdaadr"
	.even
pnmac888:
	.string	"cdadar"
	.even
pnmac889:
	.string	"cdaddr"
	.even
pnmac890:
	.string	"cddaar"
	.even
pnmac891:
	.string	"cddadr"
	.even
pnmac892:
	.string	"cdddar"
	.even
pnmac893:
	.string	"cddddr"
	.even
zfcar:
	.long	0
zfcdr:
	.long	0
zca2r:
	.long	0
zcadr:
	.long	0
zcdar:
	.long	0
zcddr:
	.long	0
zcaaar:
	.long	0
zcaadr:
	.long	0
zcadar:
	.long	0
zcaddr:
	.long	0
zcdaar:
	.long	0
zcdadr:
	.long	0
zcddar:
	.long	0
zcdddr:
	.long	0
zcaaaar:
	.long	0
zcaaadr:
	.long	0
zcaadar:
	.long	0
zcaaddr:
	.long	0
zcadaar:
	.long	0
zcadadr:
	.long	0
zcaddar:
	.long	0
zcadddr:
	.long	0
zcdaaar:
	.long	0
zcdaadr:
	.long	0
zcdadar:
	.long	0
zcdaddr:
	.long	0
zcddaar:
	.long	0
zcddadr:
	.long	0
zcdddar:
	.long	0
zcddddr:
	.long	0
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
	.globl	mstack
	.globl	crwork
	.text
	.align	4
	.globl	inisymb
	.globl	errnla
	.globl	ini_cad

	# FENTRY ini_cad
	.align	4
ini_cad:
	movl	$3,%eax
	movl	$pnmac864,%ebx
	movl	$fcar,%ecx
	movl	$zfcar,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac865,%ebx
	movl	$fcdr,%ecx
	movl	$zfcdr,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac866,%ebx
	movl	$ca2r,%ecx
	movl	$zca2r,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac867,%ebx
	movl	$cadr,%ecx
	movl	$zcadr,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac868,%ebx
	movl	$cdar,%ecx
	movl	$zcdar,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac869,%ebx
	movl	$cddr,%ecx
	movl	$zcddr,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac870,%ebx
	movl	$caaar,%ecx
	movl	$zcaaar,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac871,%ebx
	movl	$caadr,%ecx
	movl	$zcaadr,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac872,%ebx
	movl	$cadar,%ecx
	movl	$zcadar,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac873,%ebx
	movl	$caddr,%ecx
	movl	$zcaddr,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac874,%ebx
	movl	$cdaar,%ecx
	movl	$zcdaar,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac875,%ebx
	movl	$cdadr,%ecx
	movl	$zcdadr,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac876,%ebx
	movl	$cddar,%ecx
	movl	$zcddar,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac877,%ebx
	movl	$cdddr,%ecx
	movl	$zcdddr,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac878,%ebx
	movl	$caaaar,%ecx
	movl	$zcaaaar,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac879,%ebx
	movl	$caaadr,%ecx
	movl	$zcaaadr,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac880,%ebx
	movl	$caadar,%ecx
	movl	$zcaadar,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac881,%ebx
	movl	$caaddr,%ecx
	movl	$zcaaddr,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac882,%ebx
	movl	$cadaar,%ecx
	movl	$zcadaar,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac883,%ebx
	movl	$cadadr,%ecx
	movl	$zcadadr,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac884,%ebx
	movl	$caddar,%ecx
	movl	$zcaddar,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac885,%ebx
	movl	$cadddr,%ecx
	movl	$zcadddr,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac886,%ebx
	movl	$cdaaar,%ecx
	movl	$zcdaaar,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac887,%ebx
	movl	$cdaadr,%ecx
	movl	$zcdaadr,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac888,%ebx
	movl	$cdadar,%ecx
	movl	$zcdadar,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac889,%ebx
	movl	$cdaddr,%ecx
	movl	$zcdaddr,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac890,%ebx
	movl	$cddaar,%ecx
	movl	$zcddaar,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac891,%ebx
	movl	$cddadr,%ecx
	movl	$zcddadr,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac892,%ebx
	movl	$cdddar,%ecx
	movl	$zcdddar,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac893,%ebx
	movl	$cddddr,%ecx
	movl	$zcddddr,%edx
	pushl	$2
	calll	inisymb
	ret	
carerr:
	cmpl	%esi,%eax
	je	careret
	movl	%ecx,%eax
	jmp	errnla
careret:
	ret	

	# FENTRY fcar
	.align	4
fcar:
	movl	zfcar,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	ret	

	# FENTRY fcdr
	.align	4
fcdr:
	movl	zfcdr,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	ret	

	# FENTRY ca2r
	.align	4
ca2r:
	movl	zca2r,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	ret	

	# FENTRY cadr
	.align	4
cadr:
	movl	zcadr,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	ret	

	# FENTRY cdar
	.align	4
cdar:
	movl	zcdar,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	ret	

	# FENTRY cddr
	.align	4
cddr:
	movl	zcddr,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	ret	

	# FENTRY caaar
	.align	4
caaar:
	movl	zcaaar,%ebx
	movl	%eax,%ecx
caaar1:
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	ret	

	# FENTRY caadr
	.align	4
caadr:
	movl	zcaadr,%ebx
	movl	%eax,%ecx
caadr1:
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	ret	

	# FENTRY cadar
	.align	4
cadar:
	movl	zcadar,%ebx
	movl	%eax,%ecx
cadar1:
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	ret	

	# FENTRY caddr
	.align	4
caddr:
	movl	zcaddr,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	ret	

	# FENTRY cdaar
	.align	4
cdaar:
	movl	zcdaar,%ebx
	movl	%eax,%ecx
cdaar1:
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	ret	

	# FENTRY cdadr
	.align	4
cdadr:
	movl	zcdadr,%ebx
	movl	%eax,%ecx
cdadr1:
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	ret	

	# FENTRY cddar
	.align	4
cddar:
	movl	zcddar,%ebx
	movl	%eax,%ecx
cddar1:
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	ret	

	# FENTRY cdddr
	.align	4
cdddr:
	movl	zcdddr,%ebx
	movl	%eax,%ecx
cdddr1:
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	ret	

	# FENTRY caaaar
	.align	4
caaaar:
	movl	zcaaaar,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	jmp	caaar1

	# FENTRY caaadr
	.align	4
caaadr:
	movl	zcaaadr,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	jmp	caaar1

	# FENTRY caadar
	.align	4
caadar:
	movl	zcaadar,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	jmp	caadr1

	# FENTRY caaddr
	.align	4
caaddr:
	movl	zcaaddr,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	jmp	caadr1

	# FENTRY cadaar
	.align	4
cadaar:
	movl	zcadaar,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	jmp	cadar1

	# FENTRY cadadr
	.align	4
cadadr:
	movl	zcadadr,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	jmp	cadar1

	# FENTRY caddar
	.align	4
caddar:
	movl	zcaddar,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	ret	

	# FENTRY cadddr
	.align	4
cadddr:
	movl	zcadddr,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	ret	

	# FENTRY cdaaar
	.align	4
cdaaar:
	movl	zcdaaar,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	jmp	cdaar1

	# FENTRY cdaadr
	.align	4
cdaadr:
	movl	zcdaadr,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	jmp	cdaar1

	# FENTRY cdadar
	.align	4
cdadar:
	movl	zcdadar,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	jmp	cdadr1

	# FENTRY cdaddr
	.align	4
cdaddr:
	movl	zcdaddr,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	jmp	cdadr1

	# FENTRY cddaar
	.align	4
cddaar:
	movl	zcddaar,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	jmp	cddar1

	# FENTRY cddadr
	.align	4
cddadr:
	movl	zcddadr,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	jmp	cddar1

	# FENTRY cdddar
	.align	4
cdddar:
	movl	zcdddar,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	(%eax),%eax
	jmp	cdddr1

	# FENTRY cddddr
	.align	4
cddddr:
	movl	zcddddr,%ebx
	movl	%eax,%ecx
	cmpl	%edi,%eax
	jb	carerr
	movl	4(%eax),%eax
	jmp	cdddr1
