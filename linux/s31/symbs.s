	.file	"symbs.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	mstack
	.globl	fcons
	.globl	bvar
	.globl	zundef
	.globl	hashtab
	.globl	cpkgc
	.globl	tabcodfn
	.globl	tabtypfn
pnmac731:
	.string	"makunbound"
	.even
pnmac732:
	.string	"plist"
	.even
pnmac733:
	.string	"packagecell"
	.even
pnmac734:
	.string	"3d-root-symbol"
	.even
pnmac735:
	.string	"objval"
	.even
pnmac736:
	.string	"valfn"
	.even
pnmac737:
	.string	"typefn"
	.even
pnmac738:
	.string	"setfn"
	.even
pnmac739:
	.string	"remfn"
	.even
pnmac740:
	.string	"findfn"
	.even
pnmac741:
	.string	"getfn1"
	.even
pnmac742:
	.string	"getfn"
	.even
pnmac743:
	.string	"getsymb1"
	.even
pnmac744:
	.string	"getsymb"
	.even
pnmac745:
	.string	"getfn2"
	.even
pnmac746:
	.string	"synonym"
	.even
pnmac747:
	.string	"synonymq"
	.even
pnmac748:
	.string	"remob"
	.even
pnmac749:
	.string	"get"
	.even
pnmac750:
	.string	"getprop"
	.even
pnmac751:
	.string	"getl"
	.even
pnmac752:
	.string	"addprop"
	.even
pnmac753:
	.string	"putprop"
	.even
pnmac754:
	.string	"defprop"
	.even
pnmac755:
	.string	"remprop"
	.even
pnmac756:
	.string	"incr"
	.even
pnmac757:
	.string	"decr"
	.even
zmakunbound:
	.long	0
zfplist:
	.long	0
zpckgcell:
	.long	0
zd3root:
	.long	0
zobjval:
	.long	0
zvalfn:
	.long	0
ztypefn:
	.long	0
zsetfn:
	.long	0
zgetfn1:
	.long	0
zgetfn:
	.long	0
zgetbi:
	.long	0
zremfn:
	.long	0
zfindfn:
	.long	0
zsynonym:
	.long	0
zsynqnym:
	.long	0
zremob:
	.long	0
zgetsymb:
	.long	0
zgetsym1:
	.long	0
	.globl	itstate
	.globl	itcount
zgetprop:
	.long	0
zgetl:
	.long	0
zaddprop:
	.long	0
zputprop:
	.long	0
zdefprop:
	.long	0
zremprop:
	.long	0
zfincr:
	.long	0
zfdecr:
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
	.globl	errnva
	.globl	errsym
	.globl	erroob
	.globl	errudf
	.globl	errwna
	.globl	errnla
	.globl	gccons
	.globl	inisymb
	.globl	inicst
	.globl	istdsym
	.globl	evalcar
	.globl	gaplus2i
	.globl	gadiff2i
	.globl	loc
	.globl	vag
	.globl	ini_sym
	.globl	getfn1
	.globl	getbi
	.globl	getfns
	.globl	setfn
	.globl	findfn
	.globl	getprop
	.globl	putprop
	.globl	addprop
	.globl	remprop
	.globl	ithard

	# FENTRY ini_sym
	.align	4
ini_sym:
	movl	$10,%eax
	movl	$pnmac731,%ebx
	movl	$makunbound,%ecx
	movl	$zmakunbound,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac732,%ebx
	movl	$fplist,%ecx
	movl	$zfplist,%edx
	pushl	$5
	calll	inisymb
	movl	$11,%eax
	movl	$pnmac733,%ebx
	movl	$pckgcell,%ecx
	movl	$zpckgcell,%edx
	pushl	$5
	calll	inisymb
	movl	$14,%eax
	movl	$pnmac734,%ebx
	movl	$d3root,%ecx
	movl	$zd3root,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac735,%ebx
	movl	$objval,%ecx
	movl	$zobjval,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac736,%ebx
	movl	$valfn,%ecx
	movl	$zvalfn,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac737,%ebx
	movl	$typefn,%ecx
	movl	$ztypefn,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac738,%ebx
	movl	$setfn,%ecx
	movl	$zsetfn,%edx
	pushl	$4
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac739,%ebx
	movl	$remfn,%ecx
	movl	$zremfn,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac740,%ebx
	movl	$findfn,%ecx
	movl	$zfindfn,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac741,%ebx
	movl	$getfn1,%ecx
	movl	$zgetfn1,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac742,%ebx
	movl	$getfn,%ecx
	movl	$zgetfn,%edx
	pushl	$5
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac743,%ebx
	movl	$getsym1,%ecx
	movl	$zgetsym1,%edx
	pushl	$3
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac744,%ebx
	movl	$getsymb,%ecx
	movl	$zgetsymb,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac745,%ebx
	movl	$getbi,%ecx
	movl	$zgetbi,%edx
	pushl	$4
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac746,%ebx
	movl	$synonym,%ecx
	movl	$zsynonym,%edx
	pushl	$3
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac747,%ebx
	movl	$synqnym,%ecx
	movl	$zsynqnym,%edx
	pushl	$6
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac748,%ebx
	movl	$remob,%ecx
	movl	$zremob,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac749,%ebx
	movl	$getprop,%ecx
	movl	$zgetprop,%edx
	pushl	$3
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac750,%ebx
	movl	$getprop,%ecx
	movl	$zgetprop,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac751,%ebx
	movl	$getl,%ecx
	movl	$zgetl,%edx
	pushl	$3
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac752,%ebx
	movl	$addprop,%ecx
	movl	$zaddprop,%edx
	pushl	$4
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac753,%ebx
	movl	$putprop,%ecx
	movl	$zputprop,%edx
	pushl	$4
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac754,%ebx
	movl	$defprop,%ecx
	movl	$zdefprop,%edx
	pushl	$6
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac755,%ebx
	movl	$remprop,%ecx
	movl	$zremprop,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac756,%ebx
	movl	$fincr,%ecx
	movl	$zfincr,%edx
	pushl	$6
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac757,%ebx
	movl	$fdecr,%ecx
	movl	$zfdecr,%edx
	pushl	$6
	calll	inisymb
	ret	
sybfalse:
	movl	%esi,%eax
	ret	
sybret:
	ret	

	# FENTRY makunbound
	.align	4
makunbound:
	cmpl	%eax,bvar
	ja	makuerr
	cmpl	%edi,%eax
	jae	makuerr
	movl	zundef,%ebp
	movl	%ebp,(%eax)
	ret	
makuerr:
	movl	zmakunbound,%ebx
	jmp	errnva

	# FENTRY fplist
	.align	4
fplist:
	movl	zfplist,%ebx
	movl	$setplist,%ecx
	calll	getset12
	movl	4(%eax),%eax
	ret	
setplist:
	movl	%eax,4(%ecx)
	ret	

	# FENTRY pckgcell
	.align	4
pckgcell:
	movl	zpckgcell,%ebx
	movl	$pckgset,%ecx
	calll	getset12
	movl	12(%eax),%eax
	ret	
pckgset:
	movl	%eax,12(%ecx)
	ret	

	# FENTRY d3root
	.align	4
d3root:
	cmpl	%esi,28(%eax)
	jb	d3rootn
	cmpl	%edi,28(%eax)
	jae	d3rootn
	movl	%eax,%edx
d3roota:
	cmpl	%esi,12(%eax)
	je	d3rootr
	movl	28(%eax),%eax
	cmpl	%edx,%eax
	jne	d3roota
d3rootn:
	movl	%esi,%eax
d3rootr:
	ret	

	# FENTRY objval
	.align	4
objval:
	movl	zobjval,%ebx
	movl	$objvset,%ecx
	calll	getset12
	movl	16(%eax),%eax
	ret	
objvset:
	movl	%eax,16(%ecx)
	ret	

	# FENTRY valfn
	.align	4
valfn:
	cmpl	%esi,%eax
	jb	valferr
	cmpl	%edi,%eax
	jae	valferr
	movl	8(%eax),%eax
	cmpl	%eax,bfloat
	ja	lmac758
	cmpl	%eax,econs
	ja	valfnr
lmac758:
	jmp	loc
valferr:
	movl	zvalfn,%ebx
	jmp	errsym
valfnr:
	ret	

	# FENTRY typefn
	.align	4
typefn:
	cmpl	%esi,%eax
	jb	typefer1
	cmpl	%edi,%eax
	jae	typefer1
	movzwl	24(%eax),%eax
	movl	tabcodfn,%ebx
	movl	(%ebx),%ebp
	movl	4(%ebp),%ecx
	decw	%cx
typefn1:
	movl	(%ebx),%ebp
	movl	8(%ebp,%ecx,4),%edx
	cmpl	%eax,%edx
	je	typefn2
	decw	%cx
	jg	typefn1
typefn2:
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%ecx,4),%eax
	ret	
typefer1:
	movl	ztypefn,%ebx
	jmp	errsym
typefer2:
	movl	ztypefn,%ebx
	jmp	erroob

	# FENTRY setfn
	.align	4
setfn:
	cmpl	%eax,bvar
	ja	setfner2
	cmpl	%edi,%eax
	jae	setfner2
	cmpl	%esi,%ebx
	jb	setfner1
	cmpl	%edi,%ebx
	jae	setfner1
	pushl	%ecx
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%edx
	jmp	setfn3
setfner1:
	movl	%ebx,%eax
	movl	zsetfn,%ebx
	jmp	errsym
setfner2:
	movl	zsetfn,%ebx
	jmp	errnva
setfner3:
	movl	zsetfn,%ebx
	movl	%ecx,%eax
	jmp	erroob
setfn2:
	movl	tabtypfn,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%edx,4),%ecx
	cmpl	%ebx,%ecx
	je	setfn4
setfn3:
	decw	%dx
	jge	setfn2
	jmp	setfner3
setfn4:
	movl	tabcodfn,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%edx,4),%edx
	movw	%dx,24(%eax)
	xchgl	%eax,(%esp)
	cmpl	%edi,%eax
	jl	setfn5
	movl	(%eax),%ebp
	cmpl	%ebp,bfloat
	jbe	setfn6
setfn5:
	calll	vag
setfn6:
	movl	%eax,%ebx
	popl	%eax
	movl	%ebx,8(%eax)
	ret	

	# FENTRY getfn1
	.align	4
getfn1:
	cmpl	%esi,%eax
	jb	getfn1r2
	cmpl	%edi,%eax
	jae	getfn1r2
	cmpl	%esi,%ebx
	jb	getfn1r1
	cmpl	%edi,%ebx
	jae	getfn1r1
	cmpl	%esi,12(%ebx)
	jne	sybfalse
getfn1i:
	calll	getsym1i
	movzwl	24(%eax),%ebx
	orw	%bx,%bx
	je	sybfalse
	ret	
getfn1r1:
	movl	%ebx,%eax
getfn1r2:
	movl	zgetfn1,%ebx
	jmp	errsym

	# FENTRY getfn
	.align	4
getfn:
	movl	zgetfn,%ebx
	xorl	%ecx,%ecx
	cmpw	$2,%dx
	je	getfn2
	cmpw	$3,%dx
	je	getfn3
	movl	$3,%eax
	jmp	errwna
getfn3:
	popl	%ecx
	cmpl	%esi,%ecx
	jb	getfner3
	cmpl	%edi,%ecx
	jae	getfner3
getfn2:
	popl	%ebx
	popl	%eax
	jmp	getfns
getfner1:
	movl	%ebx,%eax
getfner2:
	movl	zgetfn,%ebx
	jmp	errsym
getfner3:
	movl	%ecx,%eax
	jmp	errsym
getfns:
	cmpl	%esi,%ebx
	jb	getfner1
	cmpl	%edi,%ebx
	jae	getfner1
	cmpl	%esi,%eax
	jb	lmac759
	cmpl	%edi,%eax
	jb	getfn5
lmac759:
	cmpl	%edi,%eax
	jl	getfner2
	movl	%eax,%edx
	cmpl	%edi,%edx
	jge	getfnm1
	movl	%esi,%eax
	ret	
getfnm1:
	movl	(%edx),%eax
	cmpl	%esi,%eax
	jb	getfner2
	cmpl	%edi,%eax
	jae	getfner2
	pushl	4(%edx)
	calll	getfn5
	cmpl	%esi,%eax
	je	getfnm2
	addl	$4,%esp
	ret	
getfnm2:
	popl	%edx
	cmpl	%edi,%edx
	jge	getfnm1
	movl	%esi,%eax
	ret	
getfn5:
	movl	28(%ebx),%ebp
	cmpl	%ebp,bstrg
	ja	lmac760
	cmpl	%ebp,%esi
	ja	getfnone
lmac760:
	cmpl	%edi,%eax
	jl	getfn8
getfn7:
	movl	4(%eax),%edx
	movl	(%eax),%eax
	cmpl	%esi,%edx
	je	getfn8
	pushl	%edx
	calll	getfn8
	popl	%edx
	cmpl	%esi,%eax
	jne	getfnrt
	movl	%edx,%eax
	cmpl	%edi,%eax
	jl	getfn8
	jmp	getfn7
getfnrt:
	ret	
getfn8:
getfn80:
	movl	%ebx,%edx
getfn81:
	cmpl	%eax,12(%ebx)
	je	getfn9
	movl	28(%ebx),%ebx
	cmpl	%edx,%ebx
	jne	getfn81
getfn82:
	cmpl	%esi,%eax
	je	getfn83
	movl	12(%eax),%eax
	cmpl	%ecx,%eax
	jne	getfn84
getfn83:
	movl	%esi,%eax
	ret	
getfn84:
	cmpl	%edi,%eax
	jl	getfn80
	jmp	getfn7
getfn9:
	pushl	%ecx
	movzwl	24(%ebx),%ecx
	orw	%cx,%cx
	je	getfn91
	popl	%ecx
	movl	%ebx,%eax
	ret	
getfn91:
	popl	%ecx
	jmp	getfn82
getfnone:
	movzwl	24(%ebx),%edx
	orw	%dx,%dx
	je	sybfalse
	movl	12(%ebx),%edx
getfno1:
	cmpl	%edi,%eax
	jl	getfno3
getfno2:
	movl	4(%eax),%edx
	movl	(%eax),%eax
	cmpl	%esi,%edx
	je	getfno3
	pushl	%edx
	movl	12(%ebx),%edx
	calll	getfno3
	popl	%edx
	cmpl	%esi,%eax
	jne	getfnor
	movl	%edx,%eax
	jmp	getfno2
getfnor:
	ret	
getfno3:
	cmpl	%edx,%eax
	je	getfno9
	cmpl	%esi,%eax
	je	sybfalse
	movl	12(%eax),%eax
	cmpl	%ecx,%eax
	jne	getfno1
getfnof:
	movl	%esi,%eax
	ret	
getfno9:
	movl	%ebx,%eax
	ret	

	# FENTRY getbi
	.align	4
getbi:
	cmpl	%esi,%eax
	jb	getbier1
	cmpl	%edi,%eax
	jae	getbier1
	cmpl	%esi,%ebx
	jb	getbier2
	cmpl	%edi,%ebx
	jae	getbier2
	cmpl	%esi,%ecx
	jb	getbier3
	cmpl	%edi,%ecx
	jae	getbier3
	cmpl	%esi,12(%ecx)
	jne	sybfalse
getbi1:
	pushl	%ebx
getbi2:
	pushl	%eax
	calll	getbi1i
	cmpl	%esi,%eax
	jne	getbi9
	popl	%eax
	movl	12(%ebx),%ebx
	cmpl	%esi,%ebx
	jne	getbi2
	popl	%ebx
	movl	12(%eax),%eax
	cmpl	%esi,%eax
	jne	getbi1
	ret	
getbi9:
	addl	$8,%esp
	ret	
getbier3:
	movl	%ecx,%eax
	jmp	getbier1
getbier2:
	movl	%ebx,%eax
getbier1:
	movl	zgetbi,%ebx
	jmp	errsym
getbi1i:
	movl	12(%ecx),%edx
	cmpl	%edi,%edx
	jl	getbi1i1
	cmpl	%eax,(%edx)
	jne	getbi1i1
	cmpl	%ebx,4(%edx)
	jne	getbi1i1
	movzwl	24(%ecx),%edx
	orw	%dx,%dx
	jne	getbi1i9
getbi1i1:
	movl	28(%ecx),%ebp
	cmpl	%ebp,bstrg
	ja	lmac761
	cmpl	%ebp,%esi
	ja	sybfalse
lmac761:
	pushl	%ecx
getbi1i2:
	movl	28(%ecx),%ecx
	movl	12(%ecx),%edx
	cmpl	%edi,%edx
	jl	getbi1i3
	cmpl	%eax,(%edx)
	jne	getbi1i3
	cmpl	%ebx,4(%edx)
	jne	getbi1i3
	movzwl	24(%ecx),%edx
	orw	%dx,%dx
	jne	getbi1i8
getbi1i3:
	cmpl	(%esp),%ecx
	jne	getbi1i2
	addl	$4,%esp
	jmp	sybfalse
getbi1i8:
	addl	$4,%esp
getbi1i9:
	movl	%ecx,%eax
	ret	

	# FENTRY remfn
	.align	4
remfn:
	cmpl	%esi,%eax
	jb	makunfner
	cmpl	%edi,%eax
	jae	makunfner
	movl	$0,8(%eax)
	movw	$0,24(%eax)
	ret	
makunfner:
	movl	zremfn,%ebx
	jmp	errsym

	# FENTRY findfn
	.align	4
findfn:
	movl	%eax,%ebx
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%eax
	decw	%ax
findfn1:
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%eax,4),%eax
	jmp	findfn8
findfn2:
	movl	%eax,%ecx
	movl	28(%eax),%ebp
	cmpl	%ebp,bstrg
	ja	lmac762
	cmpl	%ebp,%esi
	ja	findfn4
lmac762:
findfn3:
	movl	28(%eax),%eax
findfn4:
	cmpl	%ebx,8(%eax)
	je	findfn9
	cmpl	%ecx,%eax
	jne	findfn3
	movl	20(%eax),%eax
findfn8:
	cmpl	%esi,%eax
	jb	lmac763
	cmpl	%edi,%eax
	jb	findfn2
lmac763:
	decw	%ax
	jge	findfn1
	movl	%esi,%eax
findfn9:
	ret	

	# FENTRY synonym
	.align	4
synonym:
	cmpl	%esi,%eax
	jb	synmerr2
	cmpl	%edi,%eax
	jae	synmerr2
	cmpl	%esi,%eax
	je	synmerr2
	cmpl	%esi,%ebx
	jb	lmac764
	cmpl	%edi,%ebx
	jb	synom
lmac764:
	movl	%ebx,%eax
synmerr2:
	movl	zsynonym,%ebx
	jmp	errsym
synom:
	movzwl	24(%ebx),%ecx
	orw	%cx,%cx
	je	synmerr3
	movw	%cx,24(%eax)
	movl	8(%ebx),%ebp
	movl	%ebp,8(%eax)
	ret	
synmerr3:
	pushl	%eax
	movl	%ebx,%eax
	movl	zsynonym,%ebx
	calll	errudf
	popl	%eax
	jmp	synonym

	# FENTRY synqnym
	.align	4
synqnym:
	movl	4(%eax),%ebx
	movl	(%eax),%eax
	movl	(%ebx),%ebx
	cmpl	%esi,%eax
	jb	synmerq2
	cmpl	%edi,%eax
	jae	synmerq2
	cmpl	%esi,%eax
	je	synmerq2
	cmpl	%esi,%ebx
	jb	synmerq1
	cmpl	%edi,%ebx
	jae	synmerq1
	jmp	synom
synmerq1:
	movl	%ebx,%eax
synmerq2:
	movl	zsynqnym,%ebx
	jmp	errsym

	# FENTRY remob
	.align	4
remob:
	cmpl	%eax,bvar
	ja	remoberr
	cmpl	%edi,%eax
	jae	remoberr
	jmp	istdsym
remoberr:
	movl	zremob,%ebx
	jmp	errsym

	# FENTRY getsymb
	.align	4
getsymb:
	cmpw	$3,%dx
	je	getsymb0
	cmpw	$2,%dx
	je	getsymb1
	movl	zgetsymb,%ebx
	movl	$3,%eax
	jmp	errwna
getsymb0:
	popl	%ecx
	cmpl	%esi,%ecx
	jb	lmac765
	cmpl	%edi,%ecx
	jb	getsymb2
lmac765:
	movl	%ecx,%eax
	movl	zgetsymb,%ebx
	jmp	errsym
getsymb1:
	xorl	%ecx,%ecx
getsymb2:
	popl	%ebx
	popl	%eax
	jmp	getsymi
getsymi:
	cmpl	%esi,%ebx
	jb	getsymer
	cmpl	%edi,%ebx
	jae	getsymer
getsymi1:
	cmpl	%esi,%eax
	jb	lmac766
	cmpl	%edi,%eax
	jb	getsymi3
lmac766:
	movl	%esi,%eax
	ret	
getsymi3:
	cmpl	%ecx,%eax
	je	sybfalse
	pushl	%eax
	calll	getsym1i
	cmpl	%esi,%eax
	jne	getsymi5
	popl	%eax
	cmpl	%esi,%eax
	je	sybfalse
	movl	12(%eax),%eax
	jmp	getsymi1
getsymi5:
	addl	$4,%esp
	ret	
getsymer:
	movl	zgetsymb,%eax
	jmp	errsym

	# FENTRY getsym1
	.align	4
getsym1:
	cmpl	%esi,%eax
	jb	getsy1r1
	cmpl	%edi,%eax
	jae	getsy1r1
	cmpl	%esi,%ebx
	jb	getsy1r2
	cmpl	%edi,%ebx
	jae	getsy1r2
	cmpl	%esi,12(%ebx)
	jne	sybfalse
getsym1i:
	cmpl	%eax,12(%ebx)
	je	getsym12
	movl	28(%ebx),%ebp
	cmpl	%ebp,bstrg
	ja	lmac767
	cmpl	%ebp,%esi
	ja	sybfalse
lmac767:
	movl	%ebx,%edx
getsym11:
	movl	28(%ebx),%ebx
	cmpl	%eax,12(%ebx)
	je	getsym12
	cmpl	%edx,%ebx
	jne	getsym11
	jmp	sybfalse
getsym12:
	movl	%ebx,%eax
	ret	
getsy1r2:
	movl	%ebx,%eax
getsy1r1:
	movl	zgetsym1,%ebx
	jmp	errsym
geti:
	movl	4(%eax),%edx
	movl	%esi,%ecx
	jmp	geti3
geti2:
	cmpl	(%edx),%ebx
	je	getiret
	movl	4(%edx),%edx
	cmpl	%edi,%edx
	jl	geti4
	movl	%edx,%ecx
	movl	4(%edx),%edx
	cmpw	$0,itcount
	je	l__1
	cmpw	$0,itstate
	je	l__1
	calll	ithard
l__1:
geti3:
	cmpl	%edi,%edx
	jge	geti2
geti4:
	movl	%esi,%edx
getiret:
	ret	

	# FENTRY getprop
	.align	4
getprop:
	cmpl	%esi,%eax
	je	getpr4
	cmpl	%esi,%eax
	jb	geterr
	cmpl	%edi,%eax
	jae	geterr
	movl	4(%eax),%edx
	cmpl	%edi,%edx
	jl	getpr4
getpr2:
	cmpl	(%edx),%ebx
	je	getpr5
	movl	4(%edx),%edx
	cmpl	%edi,%edx
	jl	getpr4
	movl	4(%edx),%edx
	cmpw	$0,itcount
	je	l__2
	cmpw	$0,itstate
	je	l__2
	calll	ithard
l__2:
	cmpl	%edi,%edx
	jge	getpr2
getpr4:
	movl	%esi,%eax
	ret	
getpr5:
	movl	4(%edx),%edx
	cmpl	%edi,%edx
	jl	getpr4
	movl	(%edx),%eax
	ret	
geterr:
	movl	zgetprop,%ebx
	jmp	errsym

	# FENTRY getl
	.align	4
getl:
	cmpl	%esi,%eax
	je	sybfalse
	cmpl	%esi,%eax
	jb	getlerr
	cmpl	%edi,%eax
	jae	getlerr
	cmpl	%esi,%ebx
	je	sybfalse
	cmpl	%edi,%ebx
	jl	getlerr2
	movl	4(%eax),%eax
	jmp	getl7
getl1:
	movl	(%eax),%ecx
	pushl	%ebx
getl2:
	movl	(%ebx),%edx
	cmpl	%edx,%ecx
	je	getl8
	movl	4(%ebx),%ebx
	cmpl	%edi,%ebx
	jge	getl2
	popl	%ebx
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jl	getl7
	movl	4(%eax),%eax
getl7:
	cmpl	%edi,%eax
	jge	getl1
	ret	
getl8:
	popl	%ebx
	ret	
getlerr:
	movl	zgetl,%ebx
	jmp	errsym
getlerr2:
	movl	%ebx,%eax
	movl	zgetl,%ebx
	jmp	errnla

	# FENTRY addprop
	.align	4
addprop:
	cmpl	%esi,%eax
	jb	addpret
	cmpl	%edi,%eax
	jae	addpret
	cmpl	%esi,%eax
	je	addpret
	movl	4(%eax),%edx
	cmpl	%edi,fcons
	jb	l__3
l1__3:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%edx,4(%edi)
	xchgl	%edi,%edx
	xchgl	%edi,fcons
	cmpl	%edi,fcons
	jb	l__4
l1__4:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%edx,4(%edi)
	xchgl	%edi,%edx
	xchgl	%edi,fcons
	movl	%edx,4(%eax)
	movl	%ebx,%eax
	ret	
addpret:
	movl	zaddprop,%ebx
	jmp	errnva

	# FENTRY putprop
	.align	4
putprop:
	cmpl	%esi,%eax
	jb	putperr
	cmpl	%edi,%eax
	jae	putperr
	cmpl	%esi,%eax
	je	putperr
	pushl	%ebx
	movl	%ecx,%ebx
	calll	geti
	movl	%ebx,%ecx
	popl	%ebx
	cmpl	%edi,%edx
	jl	addprop
	movl	4(%edx),%edx
	cmpl	%edi,%edx
	jl	sybfalse
	movl	%ebx,(%edx)
	movl	%ebx,%eax
	ret	
putperr:
	movl	zputprop,%ebx
	jmp	errnva

	# FENTRY defprop
	.align	4
defprop:
	cmpl	%edi,%eax
	jl	defperr
	movl	4(%eax),%edx
	movl	(%eax),%eax
	cmpl	%edi,%edx
	jl	defperr
	movl	(%edx),%ebx
	movl	4(%edx),%ecx
	cmpl	%edi,%ecx
	jl	defperr
	movl	(%ecx),%ecx
	jmp	putprop
defperr:
	movl	zdefprop,%ebx
	jmp	errnva

	# FENTRY remprop
	.align	4
remprop:
	cmpl	%esi,%eax
	jb	remperr
	cmpl	%edi,%eax
	jae	remperr
	calll	geti
	cmpl	%edi,%edx
	jl	sybfalse
	pushl	%edx
	movl	4(%edx),%ebx
	cmpl	%edi,%ebx
	jl	rempr2
	movl	4(%ebx),%ebx
rempr2:
	cmpl	%edi,%ecx
	jl	rempr4
	movl	%ebx,4(%ecx)
	popl	%eax
	ret	
rempr4:
	movl	%ebx,4(%eax)
	popl	%eax
	ret	
remperr:
	movl	zremprop,%ebx
	jmp	errnva
getset12:
	cmpw	$1,%dx
	je	getseta
	cmpw	$2,%dx
	je	getsetb
	movl	$2,%eax
	jmp	errwna
getseta:
	popl	%ecx
	popl	%eax
	cmpl	%esi,%eax
	jb	getsetc
	cmpl	%edi,%eax
	jae	getsetc
	jmp	*%ecx
getsetb:
	popl	%edx
	popl	%eax
	xchgl	%ecx,(%esp)
	cmpl	%esi,%ecx
	jb	getsetd
	cmpl	%edi,%ecx
	jae	getsetd
	cmpl	%esi,%ecx
	je	getsetd
	ret	
getsetd:
	movl	%ecx,%eax
getsetc:
	jmp	errsym

	# FENTRY fincr
	.align	4
fincr:
	pushl	(%eax)
	movl	4(%eax),%eax
	cmpl	%esi,%eax
	jne	incr2
	movl	$1,%eax
	jmp	incr3
incr2:
	calll	evalcar
incr3:
	movl	%eax,%ebx
	movl	(%esp),%eax
	cmpl	%eax,bvar
	ja	increrr1
	cmpl	%edi,%eax
	jae	increrr1
	movl	(%eax),%eax
	movl	$2,%edx
	calll	gaplus2i
	popl	%ebx
	movl	%eax,(%ebx)
	ret	
increrr1:
	movl	zfincr,%ebx
	jmp	errnva

	# FENTRY fdecr
	.align	4
fdecr:
	pushl	(%eax)
	movl	4(%eax),%eax
	cmpl	%esi,%eax
	jne	decr2
	movl	$1,%eax
	jmp	decr3
decr2:
	calll	evalcar
decr3:
	movl	%eax,%ebx
	movl	(%esp),%eax
	cmpl	%eax,bvar
	ja	decrerr1
	cmpl	%edi,%eax
	jae	decrerr1
	movl	(%eax),%eax
	calll	gadiff2i
	popl	%ebx
	movl	%eax,(%ebx)
	ret	
decrerr1:
	movl	zfdecr,%ebx
	jmp	errnva
l__4:
	calll	gccons
	jmp	l1__4
l__3:
	calll	gccons
	jmp	l1__3
