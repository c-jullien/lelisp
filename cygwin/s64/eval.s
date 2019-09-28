	.file	"eval.asm"
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
	.globl	zitsoft
	.globl	zsyspkgc
	.globl	mstack
	.globl	cpkgc
	.globl	zlambda
	.globl	zflambda
	.globl	zmlambda
llink:
	.long	0
evalst:
	.long	0
forme:
	.long	0
funct:
	.long	0
savea1:
	.long	0
savea2:
	.long	0
savea3:
	.long	0
savea4:
	.long	0
errname:
	.long	0
intret:
	.long	0
intllink:
	.long	0
dlink:
	.long	0
rvbser:
	.long	0
zsysits:
	.long	0
pnmac946:
	.string	"itsoft"
	.even
pnmac947:
	.string	"eval"
	.even
pnmac948:
	.string	"eval-when"
	.even
pnmac949:
	.string	"symeval"
	.even
pnmac950:
	.string	"arg"
	.even
znobind:
	.long	0
pnmac951:
	.string	"&nobind"
	.even
pnmac952:
	.string	"traceval"
	.even
pnmac953:
	.string	"stepeval"
	.even
pnmac954:
	.string	"apply"
	.even
pnmac955:
	.string	"funcall"
	.even
pnmac956:
	.string	"tag"
	.even
pnmac957:
	.string	"evtag"
	.even
pnmac958:
	.string	"untilexit"
	.even
pnmac959:
	.string	"exit"
	.even
pnmac960:
	.string	"evexit"
	.even
pnmac961:
	.string	"unwind"
	.even
pnmac962:
	.string	"unexit"
	.even
pnmac963:
	.string	"lock"
	.even
pnmac964:
	.string	"protect"
	.even
pnmac965:
	.string	"let"
	.even
pnmac966:
	.string	"lets"
	.even
pnmac967:
	.string	"letv"
	.even
pnmac968:
	.string	"letvq"
	.even
pnmac969:
	.string	"flet"
	.even
pnmac970:
	.string	"function"
	.even
zclosure:
	.long	0
pnmac971:
	.string	"_closure_"
	.even
zrarrow:
	.long	0
pnmac972:
	.string	"-> "
	.even
zlarrow:
	.long	0
pnmac973:
	.string	"<- "
	.even
zeval000:
	.long	0
zevalwhen:
	.long	0
	.globl	itstate
	.globl	itcount
zsymeval:
	.long	0
zllarg:
	.long	0
ztraceval:
	.long	0
zstepeval:
	.long	0
	.globl	btbin
zfuncall:
	.long	0
zuapply:
	.long	0
lab_m__18:
	.string	" error UNBINP "
	.even
zlet:
	.long	0
zletseq:
	.long	0
zletv:
	.long	0
zletvq:
	.long	0
zflet:
	.long	0
ztag:
	.long	0
zevtag:
	.long	0
zevexit:
	.long	0
zuntlxit:
	.long	0
zffexit:
	.long	0
zunexit:
	.long	0
zunwind:
	.long	0
zllock:
	.long	0
zprotect:
	.long	0
zfunction:
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
	.globl	ini_eval
	.globl	unbind0
	.globl	unbind1
	.globl	unbinp1
	.globl	unbind2
	.globl	unbind3
	.globl	unbind4
	.globl	unbind5
	.globl	unbind6
	.globl	unbind7
	.globl	unbind8
	.globl	unbind9
	.globl	unbind10
	.globl	evalcar
	.globl	evala1
	.globl	evalan
	.globl	evalt
	.globl	llitsoft
	.globl	llsupit
	.globl	sysprot
	.globl	findtag
	.globl	dlink
	.globl	llink
	.globl	evalst
	.globl	forme
	.globl	funct
	.globl	savea1
	.globl	savea2
	.globl	savea3
	.globl	savea4
	.globl	intret
	.globl	intllink
	.globl	errname
	.globl	eval000
	.globl	evalc
	.globl	apply
	.globl	ffuncall
	.globl	funcall
	.globl	evexpg
	.globl	unbinp
	.globl	evprogn
	.globl	evprognr
	.globl	evbndext
	.globl	evbser
	.globl	unbise
	.globl	bndtrbex
	.globl	evbale
	.globl	zfunction
	.globl	zeval000
	.globl	errfs
	.globl	erres
	.globl	errsym
	.globl	errnia
	.globl	errnla
	.globl	errnva
	.globl	errudv
	.globl	errudf
	.globl	errudt
	.globl	errwna
	.globl	erroob
	.globl	errbpa
	.globl	errbal
	.globl	errilb
	.globl	errnab
	.globl	errxia
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	inisymb
	.globl	inicst
	.globl	probj
	.globl	probjt
	.globl	getfn1
	.globl	getfns
	.globl	findfn
	.globl	nreverse
	.globl	evlis
	.globl	displace
	.globl	lllength
	.globl	gettype
	.globl	ithard
	.globl	_ttyout

	# FENTRY ini_eval
	.align	4
ini_eval:
	movl	zsyspkgc,%ebp
	movl	%ebp,cpkgc
	movl	$6,%eax
	movl	$pnmac946,%ebx
	movl	$zsysits,%ecx
	calll	inicst
	movl	%esi,cpkgc
	movl	$4,%eax
	movl	$pnmac947,%ebx
	movl	$eval000,%ecx
	movl	$zeval000,%edx
	pushl	$5
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac948,%ebx
	movl	$evalwhen,%ecx
	movl	$zevalwhen,%edx
	pushl	$6
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac949,%ebx
	movl	$symeval,%ecx
	movl	$zsymeval,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac950,%ebx
	movl	$llarg,%ecx
	movl	$zllarg,%edx
	pushl	$5
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac951,%ebx
	movl	$znobind,%ecx
	calll	inicst
	movl	$8,%eax
	movl	$pnmac952,%ebx
	movl	$traceval,%ecx
	movl	$ztraceval,%edx
	pushl	$5
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac953,%ebx
	movl	$stepeval,%ecx
	movl	$zstepeval,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac954,%ebx
	movl	$uapply,%ecx
	movl	$zuapply,%edx
	pushl	$5
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac955,%ebx
	movl	$funcall,%ecx
	movl	$zfuncall,%edx
	pushl	$5
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac956,%ebx
	movl	$tag,%ecx
	movl	$ztag,%edx
	pushl	$6
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac957,%ebx
	movl	$evtag,%ecx
	movl	$zevtag,%edx
	pushl	$6
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac958,%ebx
	movl	$untlxit,%ecx
	movl	$zuntlxit,%edx
	pushl	$6
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac959,%ebx
	movl	$ffexit,%ecx
	movl	$zffexit,%edx
	pushl	$6
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac960,%ebx
	movl	$evexit,%ecx
	movl	$zevexit,%edx
	pushl	$6
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac961,%ebx
	movl	$unwind,%ecx
	movl	$zunwind,%edx
	pushl	$6
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac962,%ebx
	movl	$unexit,%ecx
	movl	$zunexit,%edx
	pushl	$6
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac963,%ebx
	movl	$llock,%ecx
	movl	$zllock,%edx
	pushl	$6
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac964,%ebx
	movl	$protect,%ecx
	movl	$zprotect,%edx
	pushl	$6
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac965,%ebx
	movl	$let,%ecx
	movl	$zlet,%edx
	pushl	$12
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac966,%ebx
	movl	$letseq,%ecx
	movl	$zletseq,%edx
	pushl	$6
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac967,%ebx
	movl	$letv,%ecx
	movl	$zletv,%edx
	pushl	$6
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac968,%ebx
	movl	$letvq,%ecx
	movl	$zletvq,%edx
	pushl	$6
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac969,%ebx
	movl	$flet,%ecx
	movl	$zflet,%edx
	pushl	$6
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac970,%ebx
	movl	$function,%ecx
	movl	$zfunction,%edx
	pushl	$6
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac971,%ebx
	movl	$zclosure,%ecx
	calll	inicst
	movl	$3,%eax
	movl	$pnmac972,%ebx
	movl	$zrarrow,%ecx
	calll	inicst
	movl	$3,%eax
	movl	$pnmac973,%ebx
	movl	$zlarrow,%ecx
	calll	inicst
	movl	%esi,evalst
	movl	%esi,llink
	ret	

	# FENTRY eval000
	.align	4
eval000:
	cmpw	$1,%dx
	je	evalu2
	cmpw	$2,%dx
	je	evalu1
	movl	$1,%eax
	movl	zeval000,%ebx
	jmp	errwna
evalu1:
	popl	%ebx
	popl	%eax
	pushl	llink
	movl	%ebx,llink
	jmp	evalu3
evalu2:
	popl	%eax
	pushl	llink
	movl	%esi,llink
evalu3:
	movl	$evala1,%ecx
	calll	sysprot
	popl	%eax
	popl	llink
	jmp	*%ecx
evalc:
	movl	(%eax),%eax
	pushl	%eax
	movl	$1,%edx
	jmp	eval000

	# FENTRY evalwhen
	.align	4
evalwhen:
	cmpl	%edi,%eax
	jb	evwhen3
	movl	4(%eax),%edx
	movl	(%eax),%eax
	movl	zeval000,%ecx
	jmp	evwhen2
evwhen1:
	movl	(%eax),%ebx
	cmpl	%ecx,%ebx
	je	evwhen4
	movl	4(%eax),%eax
evwhen2:
	cmpl	%edi,%eax
	jae	evwhen1
evwhen3:
	movl	%esi,%eax
	ret	
evwhen4:
	movl	%edx,%eax
	movl	zevalwhen,%ebp
	movl	%ebp,errname
	cmpw	$0,itcount
	je	l__1
	cmpw	$0,itstate
	je	l__1
	calll	ithard
l__1:
	jmp	evprogn

	# FENTRY symeval
	.align	4
symeval:
	cmpl	%esi,%eax
	jb	symeval1
	cmpl	%edi,%eax
	jae	symeval1
	movl	%eax,%ebx
	movl	(%eax),%eax
	cmpl	zundef,%eax
	je	symeval2
	ret	
symeval1:
	movl	zsymeval,%ebx
	jmp	errsym
symeval2:
	movl	%ebx,%eax
	movl	zsymeval,%ebx
	jmp	errudv

	# FENTRY llarg
	.align	4
llarg:
	orl	%edx,%edx
	je	llarget
	cmpl	$1,%edx
	je	llarg1
	movl	$1,%eax
	movl	zllarg,%ebx
	jmp	errwna
llarg1:
	calll	llarget
	popl	%ebx
	subw	%bx,%ax
	leal	(%edx,%eax,4),%edx
	movl	(%edx),%eax
	ret	
llarget:
	movl	dlink,%edx
	movl	(%edx),%eax
	addl	$4,%edx
	cmpl	$unbind1,%eax
	jne	llarger
	addl	$12,%edx
	movl	(%edx),%eax
	addl	$4,%edx
	cmpl	znobind,%eax
	jne	llarger
	movl	(%edx),%eax
	ret	
llarger:
	movl	zllarg,%ebx
	movl	%esi,%eax
	jmp	errnab

	# FENTRY traceval
	.align	4
traceval:
	cmpw	$1,%dx
	je	tracev1
	cmpw	$2,%dx
	je	tracev2
	movl	$1,%eax
	movl	ztraceval,%ebx
	jmp	errwna
tracev1:
	popl	%eax
	movl	%esi,%ebx
	jmp	tracev3
tracev2:
	popl	%ebx
	popl	%eax
tracev3:
	pushl	%esi
	pushl	savea4
	pushl	savea3
	pushl	savea2
	pushl	savea1
	pushl	funct
	pushl	forme
	pushl	evalst
	movl	zt,%ebp
	movl	%ebp,evalst
	pushl	zstepeval
	pushl	llink
	movl	%ebx,llink
	pushl	dlink
	pushl	$unbind4
	movl	%esp,dlink
	jmp	evalan

	# FENTRY stepeval
	.align	4
stepeval:
	cmpl	$1,%edx
	je	stepev1
	cmpl	$2,%edx
	je	stepev2
	movl	$1,%eax
	movl	zstepeval,%ebx
	jmp	errwna
stepev1:
	popl	%eax
	pushl	$stepevr
	pushl	%eax
	pushl	%esi
	jmp	stepev3
stepev2:
	popl	%ebx
	popl	%eax
	pushl	$stepevr
	pushl	%eax
	pushl	%ebx
stepev3:
	movl	zrarrow,%eax
	calll	probj
	movl	4(%esp),%eax
	calll	probjt
	movl	$2,%edx
	jmp	traceval
stepevr:
	pushl	%eax
	movl	zlarrow,%eax
	calll	probj
	movl	(%esp),%eax
	calll	probjt
	popl	%eax
	ret	
evalt:
	movl	llink,%ebx
	cmpl	%edi,fcons
	jb	l__2
l1__2:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	cmpl	%edi,fcons
	jb	l__3
l1__3:
	xchgl	%edi,fcons
	movl	%eax,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	movl	zstepeval,%eax
	calll	llitsoft
	movl	zt,%ebp
	movl	%ebp,evalst
	ret	
popj:
	ret	
evalcar:
	movl	(%eax),%eax
	cmpl	%esi,evalst
	jne	evalt
	jmp	evalan
evala1:
	cmpl	%esi,evalst
	jne	evalt
	jmp	evalan
evalan:
	cmpl	%edi,%eax
	jae	evalis
	cmpl	%eax,bfloat
	jbe	evalat
	ret	
evalis:
	cmpw	$0,itcount
	je	l__4
	cmpw	$0,itstate
	je	l__4
	calll	ithard
l__4:
	cmpl	%esp,mstack
	ja	errfs
	movl	%eax,forme
	movl	(%eax),%ebx
	movl	4(%eax),%eax
	cmpl	%esi,%ebx
	jb	evalfv
	cmpl	%edi,%ebx
	jae	evalfv
	movl	8(%ebx),%ecx
	movzwl	24(%ebx),%edx
	jmp	*%cs:teval(,%edx,4)
teval:
	.long	udfer
	.long	eval0
	.long	eval1
	.long	eval2
	.long	eval3
	.long	evaln
	.long	evalf
	.long	evexp
	.long	evfexp
	.long	evmac
	.long	evdmac
	.long	evalm
	.long	evaldm
evalat:
	cmpl	%esi,%eax
	jb	evothat
	cmpl	%edi,%eax
	jae	evothat
	movl	%eax,%ebx
	movl	(%eax),%eax
	cmpl	zundef,%eax
	je	evalera8
	ret	
evalera8:
	movl	%ebx,%eax
	movl	zeval000,%ebx
	jmp	errudv
evothat:
	cmpl	%eax,bstrg
	ja	lmac974
	cmpl	%esi,%eax
	jb	evextyp
lmac974:
	cmpl	%eax,bvect
	ja	lmac975
	cmpl	%eax,bstrg
	ja	evextyp
lmac975:
	ret	
evextyp:
	pushl	%eax
	movl	4(%eax),%eax
	cmpl	%esi,%eax
	jb	evextypr
	cmpl	%edi,%eax
	jae	evextypr
	movl	zeval000,%ebx
	movl	%esi,%ecx
	calll	getfns
	cmpl	%esi,%eax
	je	evextypr
	movl	$1,%edx
	jmp	ffuncall
evextypr:
	popl	%eax
	ret	
eval0:
	cmpl	%esi,%eax
	jne	wnaer0
	jmp	*%ecx
eval1:
	pushl	%ecx
	cmpl	%edi,%eax
	jb	wnaer1
	cmpl	%esi,4(%eax)
	jne	wnaer1d
	jmp	evalcar
eval2:
	pushl	%ecx
	cmpl	%edi,%eax
	jb	wnaer2
	movl	4(%eax),%ecx
	cmpl	%edi,%ecx
	jb	wnaer23
	pushl	(%ecx)
	cmpl	%esi,4(%ecx)
	jne	wnaer23d
	calll	evalcar
	xchgl	%eax,(%esp)
	calll	evala1
	movl	%eax,%ebx
	popl	%eax
	ret	
eval3:
	pushl	%ecx
	cmpl	%edi,%eax
	jb	wnaer3
	pushl	4(%eax)
	pushl	%ebx
	calll	evalcar
	popl	%ebx
	xchgl	%eax,(%esp)
	cmpl	%edi,%eax
	jb	wnaer3
	pushl	4(%eax)
	pushl	%ebx
	calll	evalcar
	popl	%ebx
	xchgl	%eax,(%esp)
	cmpl	%edi,%eax
	jb	wnaer3
	cmpl	%esi,4(%eax)
	jne	wnaer3d
	calll	evalcar
	movl	%eax,%ecx
	popl	%ebx
	popl	%eax
	ret	
evaln:
	cmpl	%edi,%eax
	jae	evalns0
	cmpl	%esi,%eax
	jne	evbal
	xorl	%edx,%edx
	jmp	*%ecx
evalns0:
	movl	4(%eax),%ebx
	cmpl	%edi,%ebx
	jae	evalns1
	cmpl	%esi,%ebx
	jne	evbal2
	pushl	%ecx
	calll	evalcar
	xchgl	%eax,(%esp)
	movl	$1,%edx
	jmp	*%eax
evalns1:
	pushl	%ebx
	pushl	%ecx
	calll	evalcar
	popl	%ecx
	xchgl	%eax,(%esp)
	movl	4(%eax),%ebx
	cmpl	%edi,%ebx
	jae	evalnsn
	cmpl	%esi,%ebx
	jne	evbal2
	pushl	%ecx
	calll	evalcar
	xchgl	%eax,(%esp)
	movl	$2,%edx
	jmp	*%eax
evalnsn:
	movl	$1,%edx
evaln1:
	pushl	4(%eax)
	pushl	%edx
	pushl	%ecx
	calll	evalcar
	popl	%ecx
	popl	%edx
	xchgl	%eax,(%esp)
	incw	%dx
	cmpl	%edi,%eax
	jae	evaln1
	cmpl	%esi,%eax
	jne	evbal
	jmp	*%ecx
evbal2:
	pushl	%ebx
	jmp	evbal1
evbal:
	pushl	%eax
evbal1:
	movl	%ecx,%eax
evbale:
	calll	findfn
	movl	%eax,%ebx
	popl	%eax
	jmp	errbal
evalf:
	jmp	*%ecx
evalm:
	pushl	$evala1
	movl	forme,%eax
	jmp	*%ecx
evaldm:
	movl	forme,%eax
	pushl	%eax
	pushl	$evaldmr
	movl	4(%eax),%eax
	jmp	*%ecx
evaldmr:
	movl	%eax,%ebx
	popl	%eax
	calll	displace
	jmp	evala1
evexp:
	xorl	%edx,%edx
	cmpl	%edi,%eax
	jae	evexp1
	jmp	evexp2
evexp1:
	pushl	4(%eax)
	pushl	%edx
	pushl	%ecx
	pushl	%ebx
	calll	evalcar
	popl	%ebx
	popl	%ecx
	popl	%edx
	xchgl	%eax,(%esp)
	incw	%dx
	cmpl	%edi,%eax
	jae	evexp1
evexp2:
	cmpl	%esi,%eax
	jne	everrbal
	movl	%ebx,errname
	movl	%esi,intllink
evbnd:
	movl	$evexpg,intret
	movl	%edx,savea4
	movl	%ecx,savea1
	movl	(%ecx),%ecx
	movl	%ecx,savea2
	cmpl	%edi,%ecx
	jb	evbnd6
evbnd2:
	orl	%edx,%edx
	je	evbnr32
	decw	%dx
	movl	(%ecx),%ebx
	cmpl	%edi,%ebx
	jae	evbdst
	movl	(%ebx),%eax
	movl	(%esp,%edx,4),%ebp
	movl	%ebp,(%ebx)
	movl	%eax,(%esp,%edx,4)
	movl	4(%ecx),%ecx
	cmpl	%edi,%ecx
	jae	evbnd2
	jmp	evbnd6
evbndext:
	nop	
	cmpl	%edi,%ecx
	jae	evbnd2
evbnd6:
	cmpl	%esi,%ecx
	je	evbnd9
	cmpl	znobind,%ecx
	je	evbnd91
	decw	%dx
	subw	%dx,savea4
	incw	%dx
	incw	%dx
	movl	%esi,%eax
	jmp	evbnd8
evbnd7:
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__5
l1__5:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
evbnd8:
	decw	%dx
	jg	evbnd7
	pushl	(%ecx)
	movl	%eax,(%ecx)
evbnd9:
	orl	%edx,%edx
	jne	evbnr1
evbnd91:
	movl	savea4,%edx
evbnd92:
	movl	savea1,%eax
	movl	(%esp,%edx,4),%ebx
	cmpl	$unbind1,%ebx
	jne	evbnd94
	movl	%edx,%ecx
	addw	$3,%cx
	movl	(%esp,%ecx,4),%ebx
	cmpl	%eax,%ebx
	jne	evbnd94
	addw	$1,%cx
	movl	(%esp,%ecx,4),%ebx
	cmpl	znobind,%ebx
	je	evbnd94
	leal	(%esp,%edx,4),%esp
	jmp	*intret
evbnd94:
	pushl	%edx
	pushl	savea2
	pushl	%eax
evexpn:
	pushl	llink
	pushl	dlink
	pushl	$unbind1
	movl	%esp,dlink
	movl	intllink,%ebp
	movl	%ebp,llink
	jmp	*intret
evbnr1:
	movl	%esi,%eax
	subw	%dx,savea4
	movl	savea4,%eax
evbnr2:
	popl	%ecx
	decw	%dx
	jg	evbnr2
	movl	savea4,%edx
evbnr31:
	movl	%eax,savea1
	movl	savea2,%ecx
	movl	$errbner,savea3
	jmp	unbise
evbnr32:
	movl	savea4,%edx
evbnr33:
	movl	savea2,%eax
	calll	lllength
	jmp	evbnr31
errbner:
	movl	savea1,%eax
	calll	ferrnam
	jmp	errwna
evbser:
	movl	rvbser,%esp
	cmpl	%edi,fcons
	jb	l__6
l1__6:
	movl	fcons,%ebp
	movl	%ecx,(%ebp)
	movl	%esi,%ecx
	xchgl	%ecx,4(%ebp)
	xchgl	%ecx,fcons
	cmpl	%edi,fcons
	jb	l__7
l1__7:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%ecx,4(%edi)
	xchgl	%edi,%ecx
	xchgl	%edi,fcons
	movl	%ecx,savea1
	subw	%dx,savea4
	leal	(%esp,%edx,4),%esp
	movl	%esi,%ebx
	cmpl	%edi,%eax
	jb	evbser5
evbser4:
	movl	4(%eax),%ecx
	movl	%ebx,4(%eax)
	movl	%eax,%ebx
	movl	%ecx,%eax
	cmpl	%edi,%eax
	jae	evbser4
evbser5:
	xchgl	%ebx,(%esp)
	movl	savea4,%edx
	movl	savea2,%ecx
	movl	$evbser9,savea3
	jmp	unbise
evbser9:
	movl	savea1,%eax
	calll	ferrnam
	jmp	errilb
evbdst:
	movl	%ecx,savea3
	movl	(%esp,%edx,4),%ecx
	movl	%esi,%eax
	movl	%esp,rvbser
	calll	evbdst1
	movl	%esi,%ebx
	cmpl	%edi,%eax
	jb	evbdst6
evbdst4:
	movl	4(%eax),%ecx
	movl	%ebx,4(%eax)
	movl	%eax,%ebx
	movl	%ecx,%eax
	cmpl	%edi,%eax
	jae	evbdst4
	movl	%ebx,%eax
evbdst6:
	movl	savea3,%ecx
	movl	%eax,(%esp,%edx,4)
	movl	4(%ecx),%ecx
	cmpl	%edi,%ecx
	jae	evbnd2
	jmp	evbnd6
evbdst1:
	cmpl	%esi,%ecx
	je	evbdst11
	cmpl	%edi,%ecx
	jb	evbser
evbdst11:
	pushl	4(%ebx)
	movl	(%ebx),%ebx
	cmpl	%edi,%ebx
	jae	evbdst8
	cmpl	%edi,fcons
	jb	l__8
l1__8:
	xchgl	%edi,fcons
	movl	(%ebx),%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	(%ecx),%ebp
	movl	%ebp,(%ebx)
evbdst2:
	movl	4(%ecx),%ecx
	popl	%ebx
	cmpl	%edi,%ebx
	jae	evbdst1
	cmpl	%esi,%ebx
	je	evbdst3
	cmpl	%edi,fcons
	jb	l__9
l1__9:
	xchgl	%edi,fcons
	movl	(%ebx),%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	%ecx,(%ebx)
evbdst3:
	ret	
evbdst8:
	pushl	%ecx
	movl	(%ecx),%ecx
	calll	evbdst1
	popl	%ecx
	jmp	evbdst2
evexpg:
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jb	evprogn7
	movl	4(%eax),%ebx
	cmpl	%edi,%ebx
	jae	evprogn2
	cmpl	%esi,%ebx
	jne	evprogn5
	jmp	evalcar
evprogn:
	cmpl	%edi,%eax
	jb	evprogn7
	movl	4(%eax),%ebx
	cmpl	%edi,%ebx
	jae	evprogn2
	cmpl	%esi,%ebx
	jne	evprogn5
	jmp	evalcar
evprogn2:
	pushl	%eax
	pushl	$evprognr
	jmp	evalcar
evprognr:
	popl	%eax
	movl	4(%eax),%eax
	movl	4(%eax),%ebx
	cmpl	%edi,%ebx
	jae	evprogn2
	cmpl	%esi,%ebx
	jne	evprogn5
	jmp	evalcar
evprogn5:
	movl	%ebx,%eax
evprogn6:
	calll	ferrnam
everrbal:
	jmp	errbal
evprogn7:
	cmpl	%esi,%eax
	je	popj
	jmp	evprogn6
evmac:
	pushl	$evala1
	movl	forme,%eax
	jmp	evfexp
evdmac:
	movl	forme,%eax
	pushl	%eax
	pushl	$evaldmr
	movl	4(%eax),%eax
evfexp:
	movl	%ebx,errname
bndtrb:
	movl	$evexpg,intret
	movl	%ecx,savea1
	movl	(%ecx),%ecx
	movl	%ecx,savea2
bndtrbex:
	xorl	%edx,%edx
	jmp	bndtrb2
bndtrb1:
	cmpl	%edi,%eax
	jb	evbnr33
	incw	%dx
	movl	(%ecx),%ebx
	cmpl	%edi,%ebx
	jae	bndtrb7
	pushl	(%ebx)
	movl	(%eax),%ebp
	movl	%ebp,(%ebx)
	movl	4(%eax),%eax
	movl	4(%ecx),%ecx
bndtrb2:
	cmpl	%edi,%ecx
	jae	bndtrb1
	cmpl	%esi,%ecx
	je	bndtrb3
	cmpl	znobind,%ecx
	je	bndtrb5
	incw	%dx
	pushl	(%ecx)
	movl	%eax,(%ecx)
	jmp	bndtrb6
bndtrb3:
	cmpl	%esi,%eax
	je	bndtrb6
	jmp	evbnr33
bndtrb4:
	pushl	(%eax)
	movl	4(%eax),%eax
	cmpl	%esp,mstack
	ja	errfs
	incw	%dx
bndtrb5:
	cmpl	%edi,%eax
	jae	bndtrb4
	cmpl	%esi,%eax
	je	bndtrb6
	calll	ferrnam
	jmp	errbal
bndtrb6:
	movl	savea1,%eax
	movl	(%esp,%edx,4),%ebx
	cmpl	$unbind1,%ebx
	jne	evbnd94
	movl	%edx,%ecx
	addw	$3,%cx
	movl	(%esp,%ecx,4),%ebx
	cmpl	%eax,%ebx
	jne	evbnd94
	addw	$1,%cx
	movl	(%esp,%ecx,4),%ebx
	cmpl	znobind,%ebx
	je	evbnd94
	leal	(%esp,%edx,4),%esp
	jmp	*intret
bndtrb7:
	pushl	%esi
	movl	%esp,rvbser
	pushl	4(%eax)
	pushl	4(%ecx)
	movl	(%eax),%ecx
	movl	%esi,%eax
	movl	%edx,savea4
	xorl	%edx,%edx
	calll	evbdst1
	movl	savea4,%edx
	movl	%esi,%ebx
	cmpl	%edi,%eax
	jb	bndtrb9
bndtrb8:
	movl	4(%eax),%ecx
	movl	%ebx,4(%eax)
	movl	%eax,%ebx
	movl	%ecx,%eax
	cmpl	%edi,%eax
	jae	bndtrb8
bndtrbz:
	popl	%ecx
	popl	%eax
	addl	$4,%esp
	pushl	%ebx
	jmp	bndtrb2
bndtrb9:
	movl	%esi,%ebx
	jmp	bndtrbz
evalfv:
	cmpl	%edi,%ebx
	jb	udfer
	movl	(%ebx),%ecx
	cmpl	zlambda,%ecx
	je	evalll
	cmpl	zflambda,%ecx
	je	evallf
	cmpl	zmlambda,%ecx
	je	evallm
	cmpl	zclosure,%ecx
	je	evallc
	jmp	udfer
evalll:
	movl	4(%ebx),%ecx
	movl	zlambda,%ebp
	movl	%ebp,errname
	calll	verlpar
	movl	zlambda,%ebx
	xorl	%edx,%edx
	jmp	evalll2
evalll1:
	pushl	4(%eax)
	pushl	%edx
	pushl	%ecx
	pushl	%ebx
	calll	evalcar
	popl	%ebx
	popl	%ecx
	popl	%edx
	xchgl	%eax,(%esp)
	incw	%dx
evalll2:
	cmpl	%edi,%eax
	jae	evalll1
	cmpl	%esi,%eax
	jne	everrbal
	movl	%ebx,errname
	movl	llink,%ebp
	movl	%ebp,intllink
	jmp	evbnd
evallf:
	movl	4(%ebx),%ecx
	movl	zflambda,%ebp
	movl	%ebp,errname
	movl	llink,%ebp
	movl	%ebp,intllink
	calll	verlpar
	jmp	bndtrb
evallm:
	movl	forme,%eax
	movl	4(%ebx),%ecx
	pushl	$evala1
	movl	zmlambda,%ebp
	movl	%ebp,errname
	movl	llink,%ebp
	movl	%ebp,intllink
	calll	verlpar
	jmp	bndtrb
evallc:
	movl	4(%ebx),%ebx
	movl	4(%ebx),%ecx
	movl	zclosure,%ebp
	movl	%ebp,errname
	movl	(%ebx),%ebp
	movl	%ebp,intllink
	jmp	evexp
udfer:
	movl	forme,%edx
	movl	%edx,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btl	%ebp,(%eax)
	popl	%eax
	jnc	udfer8
	movl	%edx,%eax
	calll	gettype
	cmpl	%esi,%eax
	jb	udfer8
	cmpl	%edi,%eax
	jae	udfer8
	cmpl	%esi,%eax
	je	udfer8
	pushl	%ebx
	movl	zeval000,%ebx
	movl	%esi,%ecx
	calll	getfns
	popl	%ebx
	cmpl	%esi,%eax
	je	udfer8
	pushl	forme
	movl	$1,%edx
	jmp	ffuncall
udfer8:
	pushl	%eax
	movl	%ebx,%eax
	movl	zeval000,%ebx
	calll	errudf
	movl	%eax,%ebx
	popl	%eax
	cmpl	%edi,fcons
	jb	l__10
l1__10:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	jmp	evalan
xwnaer0:
	movl	%eax,%ebx
	jmp	wnaer00
wnaer0:
	cmpl	%esi,%eax
	je	wnaer00
	cmpl	%edi,%eax
	jb	balr1
wnaer00:
	xorl	%eax,%eax
	jmp	wnaer
xwnaer1:
	movl	%eax,%ebx
	jmp	wnaer10
wnaer1d:
	movl	4(%eax),%eax
wnaer1:
	cmpl	%esi,%eax
	je	wnaer10
	cmpl	%edi,%eax
	jb	balr1
wnaer10:
	movl	$1,%eax
	jmp	wnaer
xwnaer2:
	movl	%eax,%ebx
	jmp	wnaer20
wnaer23d:
	movl	4(%ecx),%ecx
wnaer23:
	movl	%ecx,%eax
wnaer2:
	cmpl	%esi,%eax
	je	wnaer20
	cmpl	%edi,%eax
	jb	balr1
wnaer20:
	movl	$2,%eax
	jmp	wnaer
xwnaer3:
	movl	%eax,%ebx
	jmp	wnaer30
wnaer3d:
	movl	4(%eax),%eax
wnaer3:
	cmpl	%esi,%eax
	je	wnaer30
	cmpl	%edi,%eax
	jb	balr1
wnaer30:
	movl	$3,%eax
wnaer:
	jmp	errwna
balr1:
	jmp	errbal

	# FENTRY funcall
	.align	4
funcall:
	movl	zfuncall,%ebp
	movl	%ebp,errname
	orw	%dx,%dx
	je	funcerwn
funcall0:
	decw	%dx
	movl	(%esp,%edx,4),%eax
	movl	$popj,(%esp,%edx,4)
ffuncall:
	movl	%esi,intllink
	cmpl	%esi,%eax
	jb	applys
	cmpl	%edi,%eax
	jae	applys
	movzwl	24(%eax),%ecx
	jmp	*%cs:tfuncall(,%ecx,4)
tfuncall:
	.long	fncludf
	.long	fncal0
	.long	fncal1
	.long	fncal2
	.long	fncal3
	.long	fncaln
	.long	fncalf
	.long	fncalex
	.long	fncalex
	.long	fncalmc
	.long	fncalmd
	.long	fncalm
	.long	fncaldm
funcerwn:
	movl	%edx,%eax
	calll	ferrnam
	jmp	errwna
fncludf:
	pushl	%edx
	calll	ferrnam
	calll	errudf
	popl	%edx
	jmp	ffuncall
fncal0:
	orw	%dx,%dx
	jne	xwnaer0
	jmp	*8(%eax)
fncal1:
	cmpw	$1,%dx
	jne	xwnaer1
	movl	8(%eax),%edx
	popl	%eax
	jmp	*%edx
fncal2:
	cmpw	$2,%dx
	jne	xwnaer2
	popl	%ebx
	movl	8(%eax),%edx
	popl	%eax
	jmp	*%edx
fncal3:
	cmpw	$3,%dx
	jne	xwnaer3
	popl	%ecx
	popl	%ebx
	movl	8(%eax),%edx
	popl	%eax
	jmp	*%edx
fncaln:
	jmp	*8(%eax)
fncalf:
	movl	8(%eax),%ebx
	movl	%esi,%eax
	jmp	fncalf2
fncalf1:
	popl	%ecx
	cmpl	%edi,fcons
	jb	l__11
l1__11:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
fncalf2:
	decw	%dx
	jge	fncalf1
	jmp	*%ebx
fncalm:
	movl	8(%eax),%ebx
	movl	%esi,%eax
	jmp	fncalm2
fncalm1:
	popl	%ecx
	cmpl	%edi,fcons
	jb	l__12
l1__12:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
fncalm2:
	decw	%dx
	jge	fncalm1
	cmpl	%edi,fcons
	jb	l__13
l1__13:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	pushl	$evala1
	jmp	*%ebx
fncaldm:
	movl	8(%eax),%ebx
	movl	%esi,%eax
	jmp	fncaldm2
fncaldm1:
	popl	%ecx
	cmpl	%edi,fcons
	jb	l__14
l1__14:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
fncaldm2:
	decw	%dx
	jge	fncaldm1
	pushl	%eax
	pushl	$evaldmr
	jmp	*%ebx
fncalex:
	movl	8(%eax),%ecx
	movl	%eax,errname
	jmp	evbnd
fncalmc:
	movl	8(%eax),%ecx
	movl	%eax,errname
	movl	%esi,%eax
	jmp	fncalmc2
fncalmc1:
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__15
l1__15:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
fncalmc2:
	decw	%dx
	jge	fncalmc1
	cmpl	%edi,fcons
	jb	l__16
l1__16:
	xchgl	%edi,fcons
	movl	errname,%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	pushl	$evala1
	jmp	bndtrb
fncalmd:
	movl	8(%eax),%ecx
	movl	%eax,errname
	movl	%esi,%eax
	jmp	fncalmd2
fncalmd1:
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__17
l1__17:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
fncalmd2:
	decw	%dx
	jge	fncalmd1
	pushl	%eax
	pushl	$evaldmr
	jmp	bndtrb
applys:
	cmpl	%edi,%eax
	jb	fncludf
	movl	(%eax),%ecx
	cmpl	zlambda,%ecx
	je	applyll
	cmpl	zflambda,%ecx
	je	applylf
	cmpl	zclosure,%ecx
	je	applylc
	jmp	fncludf
applyll:
	movl	zlambda,%ebp
	movl	%ebp,errname
	jmp	applylf1
applylf:
	movl	zflambda,%ebp
	movl	%ebp,errname
applylf1:
	movl	4(%eax),%ecx
	calll	verlpar
	jmp	evbnd
applylc:
	movl	zclosure,%ebp
	movl	%ebp,errname
	movl	4(%eax),%eax
	movl	(%eax),%ebp
	movl	%ebp,intllink
	movl	4(%eax),%ecx
	jmp	evbnd

	# FENTRY uapply
	.align	4
uapply:
	movl	zuapply,%ebp
	movl	%ebp,errname
	cmpw	$2,%dx
	jl	uapplyer
	popl	%ebx
	decw	%dx
	jmp	uapply3
uapply2:
	pushl	(%ebx)
	cmpl	%esp,mstack
	ja	errfs
	movl	4(%ebx),%ebx
	incw	%dx
uapply3:
	cmpl	%edi,%ebx
	jae	uapply2
	cmpl	%esi,%ebx
	je	funcall0
	movl	%ebx,%eax
	decw	%dx
	movl	(%esp,%edx,4),%ebx
	jmp	errbal
uapplyer:
	movl	$2,%eax
	movl	zuapply,%ebx
	jmp	errwna
apply:
	pushl	%eax
	pushl	%ebx
	movl	$2,%edx
	jmp	uapply
unbinp:
	popl	%edx
	cmpl	$unbind1,%edx
	je	unbinp1
	cmpl	$unbind2,%edx
	je	unbinp2
	cmpl	$unbind3,%edx
	je	unbinp3
	cmpl	$unbind4,%edx
	je	unbinp4
	cmpl	$unbind5,%edx
	je	unbinp5
	cmpl	$unbind6,%edx
	je	unbinp6
	cmpl	$unbind7,%edx
	je	unbinp7
	cmpl	$unbind8,%edx
	je	unbinp8
	cmpl	$unbind9,%edx
	je	unbinp9
	cmpl	$unbind10,%edx
	je	unbinp10
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	$lab_m__18
	pushl	$14
	calll	_ttyout
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
unbind0:
	nop	
unbinp0:
	jmp	erres
unbind1:
	movl	$popj,%ecx
unbinp1:
	movl	%ecx,savea3
	popl	dlink
	popl	llink
	addl	$4,%esp
	popl	%ecx
	popl	%edx
unbise:
	cmpl	$1,%edx
	jne	unbis19
	cmpl	%edi,%ecx
	jb	unbis14
	cmpl	%edi,(%ecx)
	jae	unbis19
	movl	(%ecx),%ecx
	popl	(%ecx)
	jmp	*savea3
unbis14:
	cmpl	znobind,%ecx
	je	unbis15
	popl	(%ecx)
	jmp	*savea3
unbis15:
	addl	$4,%esp
	jmp	*savea3
unbis19:
	movl	%edx,savea4
	movl	%ebx,savea2
	jmp	unbid15
unbid12:
	orw	%dx,%dx
	je	unbid18
	movl	(%ecx),%ebx
	movl	4(%ecx),%ecx
	cmpl	%edi,%ebx
	jae	unbid19
	decw	%dx
	movl	(%esp,%edx,4),%ebp
	movl	%ebp,(%ebx)
unbid15:
	cmpl	%edi,%ecx
	jae	unbid12
	cmpl	%esi,%ecx
	je	unbid18
	cmpl	znobind,%ecx
	je	unbid18
	orw	%dx,%dx
	je	unbid18
	decw	%dx
	movl	(%esp,%edx,4),%ebp
	movl	%ebp,(%ecx)
unbid18:
	movl	savea2,%ebx
	movl	savea4,%ebp
	leal	(%esp,%ebp,4),%esp
	jmp	*savea3
unbid19:
	pushl	%ecx
	movl	(%esp,%edx,4),%ecx
	calll	unbides1
	popl	%ecx
	decw	%dx
	jmp	unbid15
unbides0:
	pushl	$unbides2
unbides1:
	cmpl	%esi,%ecx
	je	unbides3
	pushl	4(%ebx)
	movl	(%ebx),%ebx
	cmpl	%edi,%ebx
	jae	unbides0
	movl	(%ecx),%ebp
	movl	%ebp,(%ebx)
	movl	4(%ecx),%ecx
unbides2:
	popl	%ebx
	cmpl	%edi,%ebx
	jae	unbides1
	cmpl	%esi,%ebx
	je	unbides3
	movl	(%ecx),%ebp
	movl	%ebp,(%ebx)
	movl	4(%ecx),%ecx
unbides3:
	ret	
unbind2:
	movl	$popj,%ecx
unbinp2:
	popl	dlink
	movl	%ecx,savea3
	jmp	unbdw7
unbdw6:
	popl	%ecx
	movw	%cx,24(%edx)
	popl	8(%edx)
unbdw7:
	popl	%edx
	orl	%edx,%edx
	jne	unbdw6
	jmp	*savea3
unbind3:
	popl	dlink
	popl	%edx
	ret	
unbinp3:
	popl	dlink
	popl	%edx
	jmp	*%ecx
unbind4:
	movl	$popj,%ecx
unbinp4:
	popl	dlink
	popl	llink
	addl	$4,%esp
	popl	evalst
	popl	forme
	popl	funct
	popl	savea1
	popl	savea2
	popl	savea3
	popl	savea4
	addl	$4,%esp
	jmp	*%ecx
unbind5:
	movl	$popj,%ecx
unbinp5:
	popl	dlink
	popl	%edx
	pushl	%ecx
	pushl	%ebx
	cmpl	%edi,fcons
	jb	l__19
l1__19:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	movl	%esi,%ebx
	cmpl	%edi,fcons
	jb	l__20
l1__20:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	%eax,%ebx
	movl	%edx,%eax
	calll	apply
	popl	%ebx
	ret	
unbind6:
	movl	$popj,%ecx
unbinp6:
	popl	dlink
	xchgl	%ecx,(%esp)
	pushl	%ebx
	pushl	%eax
	movl	%ecx,%eax
	calll	evprogn
	popl	%eax
	popl	%ebx
	ret	
unbind7:
	movl	$popj,%ecx
unbinp7:
	popl	dlink
	xchgl	%eax,(%esp)
	jmp	*%eax
unbind8:
	movl	(%esp),%ebp
	movl	%ebp,dlink
	addl	$8,%esp
	ret	
unbinp8:
	movl	(%esp),%ebp
	movl	%ebp,dlink
	addl	$8,%esp
	jmp	*%ecx
unbind9:
	movl	$popj,%ecx
unbinp9:
	movl	(%esp),%ebp
	movl	%ebp,dlink
	movl	llink,%edx
	movl	4(%edx),%ebp
	movl	%ebp,llink
	movl	(%edx),%edx
	movl	%esi,4(%edx)
	addl	$8,%esp
	popl	%edx
	addw	%dx,%dx
	leal	(%esp,%edx,4),%esp
	jmp	*%ecx
unbind10:
	movl	$popj,%ecx
unbinp10:
	movl	(%esp),%ebp
	movl	%ebp,dlink
	movl	llink,%edx
	movl	4(%edx),%ebp
	movl	%ebp,llink
	movl	(%edx),%edx
	movl	4(%edx),%edx
	movl	%esi,4(%edx)
	addl	$8,%esp
	jmp	*%ecx

	# FENTRY let
	.align	4
let:
	pushl	4(%eax)
	movl	(%eax),%eax
	movl	%esi,%ebx
	cmpl	%edi,fcons
	jb	l__21
l1__21:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	pushl	%ebx
	movl	%esi,%ecx
	cmpl	%edi,fcons
	jb	l__22
l1__22:
	movl	fcons,%ebp
	movl	%ecx,(%ebp)
	movl	%esi,%ecx
	xchgl	%ecx,4(%ebp)
	xchgl	%ecx,fcons
	pushl	%ecx
let2:
	cmpl	%edi,%eax
	jb	let8
	movl	(%eax),%edx
	pushl	4(%eax)
	cmpl	%edi,%edx
	jae	let3
	movl	%edx,%eax
	movl	%esi,%edx
	jmp	let4
let3:
	movl	(%edx),%eax
	movl	4(%edx),%edx
let4:
	cmpl	%edi,fcons
	jb	l__23
l1__23:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	movl	%eax,4(%ebx)
	movl	%eax,%ebx
	cmpl	%esi,%edx
	je	let5
	cmpl	%edi,%edx
	jb	letwla1
	cmpl	%esi,4(%edx)
	jne	letwla1
let5:
	movl	(%edx),%eax
	cmpl	%edi,fcons
	jb	l__24
l1__24:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	movl	%eax,4(%ecx)
	movl	%eax,%ecx
	popl	%eax
	jmp	let2
let8:
	popl	%eax
	movl	4(%eax),%eax
	popl	%ebx
	movl	4(%ebx),%ebx
	popl	%edx
	cmpl	%edi,fcons
	jb	l__25
l1__25:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%edx,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	cmpl	%edi,fcons
	jb	l__26
l1__26:
	xchgl	%edi,fcons
	movl	zlambda,%ebp
	movl	%ebp,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	cmpl	%edi,fcons
	jb	l__27
l1__27:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	ret	
letwla1:
	movl	%edx,%eax
letwla2:
	movl	zlet,%ebx
	jmp	errwna

	# FENTRY letseq
	.align	4
letseq:
	movl	zletseq,%eax
	movl	zeval000,%ebx
	jmp	errudf

	# FENTRY letv
	.align	4
letv:
	pushl	4(%eax)
	calll	evalcar
	xchgl	%eax,(%esp)
	pushl	4(%eax)
	calll	evalcar
	movl	zletv,%ebp
	movl	%ebp,errname
letvq2:
	popl	%ecx
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__28
l1__28:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%ecx,4(%edi)
	xchgl	%edi,%ecx
	xchgl	%edi,fcons
	movl	llink,%ebp
	movl	%ebp,intllink
	calll	verlpar
	jmp	bndtrb

	# FENTRY letvq
	.align	4
letvq:
	pushl	(%eax)
	movl	4(%eax),%eax
	pushl	4(%eax)
	calll	evalcar
	movl	zletvq,%ebp
	movl	%ebp,errname
	jmp	letvq2

	# FENTRY flet
	.align	4
flet:
	cmpl	%edi,%eax
	jb	fleterr1
	movl	(%eax),%ebx
	movl	4(%eax),%ebp
	movl	%ebp,savea1
	pushl	$0
	jmp	flet3
flet2:
	movl	(%ebx),%eax
	cmpl	%edi,%eax
	jb	fleterr1
	movl	(%eax),%ecx
	cmpl	%ecx,bvar
	ja	fleterr2
	cmpl	%edi,%ecx
	jae	fleterr2
	pushl	8(%ecx)
	movl	4(%eax),%ebp
	movl	%ebp,8(%ecx)
	movzwl	24(%ecx),%edx
	pushl	%edx
	movw	$7,24(%ecx)
	pushl	%ecx
	movl	4(%ebx),%ebx
flet3:
	cmpl	%edi,%ebx
	jae	flet2
	pushl	dlink
	pushl	$unbind2
	movl	%esp,dlink
	movl	savea1,%eax
	movl	zflet,%ebp
	movl	%ebp,errname
	jmp	evprogn
fleterr1:
	movl	zflet,%ebx
	jmp	errnla
fleterr2:
	movl	%ecx,%eax
	movl	zflet,%ebx
	jmp	errnva

	# FENTRY tag
	.align	4
tag:
	pushl	(%eax)
tag3:
	pushl	dlink
	pushl	$unbind3
	movl	%esp,dlink
	movl	ztag,%ebp
	movl	%ebp,errname
	jmp	evexpg

	# FENTRY evtag
	.align	4
evtag:
	pushl	%eax
	calll	evalcar
	cmpl	%esi,%eax
	jb	evtagerr
	cmpl	%edi,%eax
	jae	evtagerr
	xchgl	%eax,(%esp)
	jmp	tag3
evtagerr:
	popl	%ebx
	movl	zevtag,%ebx
	jmp	errsym

	# FENTRY evexit
	.align	4
evexit:
	pushl	4(%eax)
	calll	evalcar
	xchgl	%eax,(%esp)
	movl	zevexit,%ebp
	movl	%ebp,errname
	jmp	exit1

	# FENTRY untlxit
	.align	4
untlxit:
	pushl	(%eax)
	pushl	dlink
	pushl	$unbind3
	movl	%esp,dlink
	pushl	4(%eax)
untlxit1:
	movl	(%esp),%eax
	movl	zuntlxit,%ebp
	movl	%ebp,errname
	calll	evprogn
	jmp	untlxit1

	# FENTRY ffexit
	.align	4
ffexit:
	pushl	(%eax)
	movl	4(%eax),%eax
	movl	zffexit,%ebp
	movl	%ebp,errname
exit1:
	calll	evprogn
	popl	%ebx
findtag:
	movl	dlink,%esp
	movl	(%esp),%ecx
	cmpl	$unbind3,%ecx
	je	evesc3
	cmpl	$unbind5,%ecx
	je	evesc4
	movl	$findtag,%ecx
	jmp	unbinp
evesc3:
	addl	$4,%esp
	popl	dlink
	popl	%ecx
	cmpl	%ecx,%ebx
	jne	findtag
	ret	
evesc4:
	addl	$4,%esp
	popl	dlink
	pushl	%ebx
	pushl	%eax
	movl	$3,%edx
	jmp	funcall

	# FENTRY unexit
	.align	4
unexit:
	movl	(%eax),%ebx
	movl	4(%eax),%eax
uvesc1:
	movl	dlink,%esp
	movl	(%esp),%ecx
	cmpl	$unbind3,%ecx
	je	uvesc3
	cmpl	$unbind5,%ecx
	je	uvesc4
	movl	$uvesc1,%ecx
	jmp	unbinp
uvesc3:
	addl	$4,%esp
	popl	dlink
	popl	%ecx
	cmpl	%ecx,%ebx
	jne	uvesc1
	movl	zunexit,%ebp
	movl	%ebp,errname
	jmp	evprogn
uvesc4:
	addl	$4,%esp
	cmpl	%edi,fcons
	jb	l__29
l1__29:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	cmpl	%edi,fcons
	jb	l__30
l1__30:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	%eax,%ebx
	popl	dlink
	popl	%eax
	jmp	apply

	# FENTRY unwind
	.align	4
unwind:
	pushl	4(%eax)
	calll	evalcar
	popl	%ebx
	cmpl	%eax,bfloat
	ja	unwind4
	movl	zunwind,%ebx
	jmp	errnia
unwind3:
	movl	dlink,%esp
	movl	$unwind4,%ecx
	jmp	unbinp
unwind4:
	decw	%ax
	jge	unwind3
	movl	%ebx,%eax
	movl	zunwind,%ebp
	movl	%ebp,errname
	jmp	evprogn
llitsoft:
	movl	zsysits,%ecx
	movl	(%ecx),%ecx
	jmp	llitsofi
llsupit:
	movl	zsysits,%edx
	movl	(%edx),%edx
	jmp	llsupit1
llsupit0:
	cmpl	%esi,(%edx)
	jb	llitster
	cmpl	%edi,(%edx)
	jae	llitster
	cmpl	(%edx),%eax
	je	llsupit3
	movl	4(%edx),%edx
llsupit1:
	cmpl	%edi,%edx
	jae	llsupit0
	cmpl	%esi,%edx
	jb	llitster
	cmpl	%edi,%edx
	jae	llitster
llsupit2:
	cmpl	%edx,%eax
	je	llsupit4
	cmpl	%esi,%edx
	je	llitster
	movl	12(%edx),%edx
	jmp	llsupit2
llsupit3:
	movl	%ebx,%eax
	movl	%ecx,%ebx
	movl	4(%edx),%ecx
	jmp	llitsofi
llsupit4:
	movl	%ebx,%eax
	movl	%ecx,%ebx
	movl	12(%edx),%ecx
	jmp	llitsofi
llitsofi:
	pushl	%ebx
	pushl	savea4
	pushl	savea3
	pushl	savea2
	pushl	savea1
	pushl	funct
	pushl	forme
	pushl	evalst
	pushl	%eax
	pushl	llink
	pushl	dlink
	pushl	$unbind4
	movl	%esp,dlink
	movl	%esi,llink
	movl	%esi,evalst
	pushl	%ebx
	movl	%eax,%ebx
	movl	%ecx,%eax
	calll	findits
	cmpl	%esi,%eax
	je	llitster
	popl	%ebx
	jmp	apply
llitster:
	movl	%ebx,%eax
	movl	zitsoft,%ebx
	movl	zsysits,%ecx
	movl	%esi,(%ecx)
	jmp	errudf
findits0:
	popl	%eax
findits:
	cmpl	%edi,%eax
	jae	findits1
	cmpl	%esi,%eax
	jb	llitster
	cmpl	%edi,%eax
	jae	llitster
	xorl	%ecx,%ecx
	pushl	%ebx
	calll	getfns
	popl	%ebx
	ret	
findits1:
	pushl	4(%eax)
	movl	(%eax),%eax
	cmpl	%esi,%eax
	jb	llitster
	cmpl	%edi,%eax
	jae	llitster
	pushl	%ebx
	calll	getfn1
	popl	%ebx
	cmpl	%esi,%eax
	je	findits0
	addl	$4,%esp
	ret	

	# FENTRY llock
	.align	4
llock:
	pushl	%eax
	calll	evalcar
	xchgl	%eax,(%esp)
	pushl	dlink
	pushl	$unbind5
	movl	%esp,dlink
	movl	zllock,%ebp
	movl	%ebp,errname
	jmp	evexpg

	# FENTRY protect
	.align	4
protect:
	pushl	4(%eax)
	pushl	dlink
	pushl	$unbind6
	movl	%esp,dlink
	jmp	evalcar
sysprot:
	pushl	dlink
	pushl	$unbind7
	movl	%esp,dlink
	jmp	*%ecx

	# FENTRY function
	.align	4
function:
	cmpl	%edi,%eax
	jb	funcret
	movl	(%eax),%eax
	cmpl	%edi,%eax
	jb	funcret
	cmpl	%esi,llink
	je	funcret
	movl	zlambda,%ebp
	cmpl	%ebp,(%eax)
	jne	funcret
	movl	4(%eax),%eax
	cmpl	%edi,fcons
	jb	l__31
l1__31:
	xchgl	%edi,fcons
	movl	llink,%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	cmpl	%edi,fcons
	jb	l__32
l1__32:
	xchgl	%edi,fcons
	movl	zclosure,%ebp
	movl	%ebp,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
funcret:
	ret	
verlpar:
	cmpl	%edi,%ecx
	jb	vererr
	pushl	%ecx
	movl	(%ecx),%ecx
	calll	verlpar4
	popl	%ecx
	ret	
verlpar3:
	pushl	4(%ecx)
	movl	(%ecx),%ecx
	calll	verlpar5
	popl	%ecx
verlpar4:
	cmpl	%esi,%ecx
	je	verlpar9
verlpar5:
	cmpl	%edi,%ecx
	jae	verlpar3
	cmpl	%ecx,bvar
	ja	lmac976
	cmpl	%edi,%ecx
	jb	verlpar9
lmac976:
vererr:
	movl	%ecx,%eax
	calll	ferrnam
	jmp	errbpa
verlpar9:
	ret	
ferrnam:
	movl	errname,%ebx
	cmpl	%ebx,bfloat
	jbe	ferrname
	pushl	%eax
	pushl	%ebx
	movl	%ebx,%eax
	calll	findfn
	cmpl	%esi,%eax
	je	ferrnam1
	popl	%ebx
	movl	%eax,%ebx
	popl	%eax
	ret	
ferrnam1:
	popl	%ebx
	popl	%eax
ferrname:
	ret	
l__32:
	calll	gccons
	jmp	l1__32
l__31:
	calll	gccons
	jmp	l1__31
l__30:
	calll	gccons
	jmp	l1__30
l__29:
	calll	gccons
	jmp	l1__29
l__28:
	calll	gccons
	jmp	l1__28
l__27:
	calll	gccons
	jmp	l1__27
l__26:
	calll	gccons
	jmp	l1__26
l__25:
	calll	gccons
	jmp	l1__25
l__24:
	calll	gccons
	jmp	l1__24
l__23:
	calll	gccons
	jmp	l1__23
l__22:
	calll	gccons
	jmp	l1__22
l__21:
	calll	gccons
	jmp	l1__21
l__20:
	calll	gccons
	jmp	l1__20
l__19:
	calll	gccons
	jmp	l1__19
l__17:
	calll	gccons
	jmp	l1__17
l__16:
	calll	gccons
	jmp	l1__16
l__15:
	calll	gccons
	jmp	l1__15
l__14:
	calll	gccons
	jmp	l1__14
l__13:
	calll	gccons
	jmp	l1__13
l__12:
	calll	gccons
	jmp	l1__12
l__11:
	calll	gccons
	jmp	l1__11
l__10:
	calll	gccons
	jmp	l1__10
l__9:
	calll	gccons
	jmp	l1__9
l__8:
	calll	gccons
	jmp	l1__8
l__7:
	calll	gccons
	jmp	l1__7
l__6:
	calll	gccons
	jmp	l1__6
l__5:
	calll	gccons
	jmp	l1__5
l__3:
	calll	gccons
	jmp	l1__3
l__2:
	calll	gccons
	jmp	l1__2
