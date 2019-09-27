	.file	"bllsht.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	zundef
	.globl	fcons
	.globl	bvar
	.globl	zt
	.globl	zvoid
	.globl	zllsystem
	.globl	ccode
	.globl	ecode
	.globl	mstack
pnmac850:
	.string	"loc"
	.even
pnmac851:
	.string	"locint"
	.even
pnmac852:
	.string	"vag"
	.even
pnmac853:
	.string	"memory"
	.even
pnmac854:
	.string	"bltmemory"
	.even
pnmac855:
	.string	"addadr"
	.even
pnmac856:
	.string	"incradr"
	.even
pnmac857:
	.string	"subadr"
	.even
pnmac858:
	.string	"gtadr"
	.even
pnmac859:
	.string	"ccode"
	.even
pnmac860:
	.string	"ecode"
	.even
pnmac861:
	.string	"precompile"
	.even
pnmac862:
	.string	"call"
	.even
pnmac863:
	.string	"calln"
	.even
zloc:
	.long	0
zlocint:
	.long	0
zvag:
	.long	0
zaddadr:
	.long	0
zincradr:
	.long	0
zsubadr:
	.long	0
zgtadr:
	.long	0
zaccode:
	.long	0
zaecode:
	.long	0
zmemory:
	.long	0
zbltmemory:
	.long	0
zprecomp:
	.long	0
zllcall:
	.long	0
zllcaln:
	.long	0
adrtmp:
	.long	0
eimpur:
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
	.globl	crwork
	.text
	.align	4
	.globl	reenter
	.globl	theend
	.globl	errnda
	.globl	errwna
	.globl	errnia
	.globl	errnva
	.globl	errvec
	.globl	errfs
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	inisymb
	.globl	inicst
	.globl	apply
	.globl	evalcar
	.globl	ini_bll
	.globl	eimpur
	.globl	epur
	.globl	loc
	.globl	vag
	.globl	vaga1

	# FENTRY ini_bll
	.align	4
ini_bll:
	movl	$3,%eax
	movl	$pnmac850,%ebx
	movl	$loc,%ecx
	movl	$zloc,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac851,%ebx
	movl	$locint,%ecx
	movl	$zlocint,%edx
	pushl	$2
	calll	inisymb
	movl	zllsystem,%ebp
	movl	%ebp,12(%eax)
	movl	$3,%eax
	movl	$pnmac852,%ebx
	movl	$vag,%ecx
	movl	$zvag,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac853,%ebx
	movl	$memory,%ecx
	movl	$zmemory,%edx
	pushl	$5
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac854,%ebx
	movl	$bltmemory,%ecx
	movl	$zbltmemory,%edx
	pushl	$4
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac855,%ebx
	movl	$addadr,%ecx
	movl	$zaddadr,%edx
	pushl	$3
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac856,%ebx
	movl	$incradr,%ecx
	movl	$zincradr,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac857,%ebx
	movl	$subadr,%ecx
	movl	$zsubadr,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac858,%ebx
	movl	$gtadr,%ecx
	movl	$zgtadr,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac859,%ebx
	movl	$accode,%ecx
	movl	$zaccode,%edx
	pushl	$5
	calll	inisymb
	movl	zllsystem,%ebp
	movl	%ebp,12(%eax)
	movl	$5,%eax
	movl	$pnmac860,%ebx
	movl	$aecode,%ecx
	movl	$zaecode,%edx
	pushl	$1
	calll	inisymb
	movl	zllsystem,%ebp
	movl	%ebp,12(%eax)
	movl	$10,%eax
	movl	$pnmac861,%ebx
	movl	$precomp,%ecx
	movl	$zprecomp,%edx
	pushl	$6
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac862,%ebx
	movl	$llcall,%ecx
	movl	$zllcall,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac863,%ebx
	movl	$llcaln,%ecx
	movl	$zllcaln,%edx
	pushl	$3
	calll	inisymb
	ret	

	# FENTRY loc
	.align	4
loc:
	movl	%eax,%ebx
	shrl	$16,%ebx
	movzwl	%ax,%eax
	orw	%bx,%bx
	je	loc9
	cmpl	%edi,fcons
	jb	l__1
l1__1:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
loc9:
	ret	

	# FENTRY locint
	.align	4
locint:
	movl	%eax,%ebx
	shrl	$16,%ebx
	movzwl	%ax,%eax
	addw	%bx,%ax
	andw	$32767,%ax
	ret	

	# FENTRY vag
	.align	4
vag:
	movl	zvag,%ebx
vaga1:
	cmpl	%edi,%eax
	jb	vagc
	movl	(%eax),%ebp
	cmpl	%ebp,bfloat
	jbe	vagerr
	movl	4(%eax),%ebp
	cmpl	%ebp,bfloat
	jbe	vagerr
	movl	(%eax),%ebx
	movl	4(%eax),%eax
	movl	%ebx,%ebp
	shll	$16,%ebp
	orl	%ebp,%eax
vagret:
	ret	
vagc:
	cmpl	%eax,bfloat
	jbe	vagerr
	jmp	vagret
	movl	(%eax),%eax
	ret	
vagerr3:
	movl	%ecx,%eax
vagerr:
	jmp	errnda
vaga3:
	cmpl	%edi,%ecx
	jb	vaga3c
	movl	(%ecx),%ebp
	cmpl	%ebp,bfloat
	jbe	vagerr3
	movl	4(%ecx),%ebp
	cmpl	%ebp,bfloat
	jbe	vagerr3
	movl	(%ecx),%ebx
	movl	4(%ecx),%ecx
	movl	%ebx,%ebp
	shll	$16,%ebp
	orl	%ebp,%ecx
vaga3ret:
	ret	
vaga3c:
	cmpl	%ecx,bfloat
	jbe	vagerr3
	jmp	vaga3ret
	movl	(%ecx),%ecx
	ret	

	# FENTRY addadr
	.align	4
addadr:
	movl	zaddadr,%ebp
	movl	%ebp,adrtmp
	calll	adrverif
	addw	%bx,%ax
	adcw	%dx,%cx
	jmp	adrcreat

	# FENTRY incradr
	.align	4
incradr:
	pushl	%eax
	movl	zincradr,%ebp
	movl	%ebp,adrtmp
	calll	adrverif
	addw	%bx,%ax
	adcw	%dx,%cx
	popl	%edx
	orw	%cx,%cx
	jne	incadr2
	orw	%ax,%ax
	jge	incadr3
incadr2:
	cmpw	$65536+-1,%cx
	je	incadr3
	cmpl	%edi,%edx
	jb	incadr1
	movl	%ecx,(%edx)
	movl	%eax,4(%edx)
	movl	%edx,%eax
	ret	
incadr1:
	cmpl	%edi,fcons
	jb	l__2
l1__2:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
incadr3:
	ret	

	# FENTRY subadr
	.align	4
subadr:
	movl	zsubadr,%ebp
	movl	%ebp,adrtmp
	calll	adrverif
	subw	%bx,%ax
	sbbw	%dx,%cx
	jmp	adrcreat

	# FENTRY gtadr
	.align	4
gtadr:
	movl	zgtadr,%ebp
	movl	%ebp,adrtmp
	calll	adrverif
	cmpl	%edx,%ecx
	jb	gtadr0
	je	gtadr1
	ja	gtadr2
gtadr1:
	cmpl	%ebx,%eax
	jb	gtadr0
	je	gtadr0
	ja	gtadr2
gtadr2:
	movl	zt,%eax
	ret	
gtadr0:
	movl	%esi,%eax
	ret	
adrverif:
	cmpl	%edi,%eax
	jae	adrver1
	cmpl	%eax,bfloat
	jbe	adrerr1
	xorl	%ecx,%ecx
	orw	%ax,%ax
	jge	adrver4
	movl	$65536+-1,%ecx
adrver4:
	cmpl	%edi,%ebx
	jae	adrver2
	cmpl	%ebx,bfloat
	jbe	adrerr2
	xorl	%edx,%edx
	orw	%bx,%bx
	jge	adrver5
	movl	$65536+-1,%edx
adrver5:
	ret	
adrver2:
	movl	(%ebx),%edx
	cmpl	%edx,bfloat
	jbe	adrerr2
	movl	4(%ebx),%ebp
	cmpl	%ebp,bfloat
	jbe	adrerr2
	movl	4(%ebx),%ebx
	ret	
adrver1:
	cmpl	%edi,%ebx
	jae	adrver3
	cmpl	%ebx,bfloat
	jbe	adrerr2
	movl	(%eax),%ecx
	cmpl	%ecx,bfloat
	jbe	adrerr1
	xorl	%edx,%edx
	orw	%bx,%bx
	jge	adrver6
	movl	$65536+-1,%edx
adrver6:
	movl	4(%eax),%ebp
	cmpl	%ebp,bfloat
	jbe	adrerr1
	movl	4(%eax),%eax
	ret	
adrver3:
	movl	(%eax),%ecx
	cmpl	%ecx,bfloat
	jbe	adrerr1
	movl	(%ebx),%edx
	cmpl	%edx,bfloat
	jbe	adrerr2
	movl	4(%eax),%ebp
	cmpl	%ebp,bfloat
	jbe	adrerr1
	movl	4(%eax),%eax
	movl	4(%ebx),%ebp
	cmpl	%ebp,bfloat
	jbe	adrerr2
	movl	4(%ebx),%ebx
	ret	
adrerr2:
	movl	%ebx,%eax
adrerr1:
	movl	adrtmp,%ebx
	jmp	errnda
adrcreat:
	orw	%cx,%cx
	jne	adrcrea1
	orw	%ax,%ax
	jl	adrcrea2
	ret	
adrcrea1:
	cmpw	$65536+-1,%cx
	jne	adrcrea2
	orw	%ax,%ax
	jl	adrcrear
adrcrea2:
	cmpl	%edi,fcons
	jb	l__3
l1__3:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
adrcrear:
	ret	

	# FENTRY accode
	.align	4
accode:
	movl	zaccode,%ebx
	orw	%dx,%dx
	je	accodeg
	cmpw	$1,%dx
	je	accodes
	movl	$1,%eax
	jmp	errwna
accodes:
	popl	%eax
	calll	vaga1
	movl	%eax,ccode
accodeg:
	movl	ccode,%eax
	jmp	loc

	# FENTRY aecode
	.align	4
aecode:
	movl	ecode,%eax
	jmp	loc

	# FENTRY memory
	.align	4
memory:
	movl	zmemory,%ebx
	cmpw	$2,%dx
	jne	memor2
	popl	%eax
	popl	%ecx
	calll	vaga3
	movb	%al,(%ecx)
	ret	
memor2:
	cmpw	$1,%dx
	jne	memor3
	popl	%eax
	calll	vaga1
	movzbl	(%eax),%eax
	ret	
memor3:
	movl	$2,%eax
	jmp	errwna

	# FENTRY bltmemory
	.align	4
bltmemory:
	pushl	%ebx
	movl	zbltmemory,%ebx
	calll	vaga1
	calll	vaga3
	movl	%eax,%edx
	movl	(%esp),%eax
	calll	vaga1
	movl	%edx,%ebx
	popl	%eax
	ret	

	# FENTRY precomp
	.align	4
precomp:
	jmp	evalcar

	# FENTRY llcall
	.align	4
llcall:
	cmpw	$4,%dx
	jne	callerr1
	popl	%ecx
	popl	%ebx
	popl	%edx
	popl	%eax
	pushl	%ebx
	calll	vaga1
	xchgl	%eax,(%esp)
	movl	%eax,%ebx
	movl	%edx,%eax
	ret	
callerr1:
	movl	zllcall,%ebx
	movl	$4,%eax
	jmp	errwna

	# FENTRY llcaln
	.align	4
llcaln:
	movl	%ebx,%ecx
	movl	zllcaln,%ebx
	calll	vaga1
	xorl	%edx,%edx
	jmp	calln3
calln2:
	pushl	(%ecx)
	cmpl	%esp,mstack
	ja	errfs
	movl	4(%ecx),%ecx
	incw	%dx
calln3:
	cmpl	%edi,%ecx
	jae	calln2
	jmp	*%eax
epur:
l__3:
	calll	gccons
	jmp	l1__3
l__2:
	calll	gccons
	jmp	l1__2
l__1:
	calll	gccons
	jmp	l1__1
