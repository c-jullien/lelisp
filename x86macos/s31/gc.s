	.file	"gc.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	bstack
	.globl	fcons
	.globl	bvar
	.globl	mstack
	.globl	estack
	.globl	bstrg
	.globl	fstrg
	.globl	bcode
	.globl	ccode
	.globl	ecode
	.globl	bvect
	.globl	fvect
	.globl	bheap
	.globl	cheap
	.globl	eheap
	.globl	bnumb
	.globl	fnumb
	.globl	cnumb
	.globl	bfloat
	.globl	ffloat
	.globl	fsymb
	.globl	hashtab
	.globl	zvoid
	.globl	zt
	.globl	zundef
	.globl	zitsoft
	.globl	zllsystem
	.globl	cstsyste
	.globl	itstate
	.globl	zsyserror
	.globl	curprmpt
	.globl	tabchan
	.globl	cntrlc
	.globl	bufch
	.globl	rubstrg
	.globl	asymb
	.globl	impld
	.globl	ringur
	.globl	tabch
	.globl	cachch
	.globl	bufat
	.globl	curread
	.globl	cpkgc
	.globl	impli
	.globl	tabctyp
	.globl	tabccod
	.globl	bufpn
	.globl	iexpld
	.globl	lexpld
	.globl	llink
	.globl	evalst
	.globl	forme
	.globl	funct
	.globl	savea1
	.globl	savea2
	.globl	savea3
	.globl	savea4
	.globl	errname
	.globl	intret
	.globl	intllink
	.globl	tabtypfn
	.globl	tabcodfn
	.globl	zllcons
	.globl	zllnull
	.globl	zllfloat
	.globl	zllfix
	.globl	fzero
	.globl	fltun
	.globl	fltmun
	.globl	fltimax
	.globl	fltimin
	.globl	zstring000
	.globl	zvector
	.globl	zffsymbol
	.globl	bufstrg
ngccons:
	.long	0
ngcsymb:
	.long	0
ngcstrg:
	.long	0
ngcvect:
	.long	0
ngcfloat:
	.long	0
ngcnumb:
	.long	0
ngch:
	.long	0
ngcuser:
	.long	0
freenu:
	.long	0
freenm:
	.long	0
freefu:
	.long	0
freefm:
	.long	0
freevu:
	.long	0
freevm:
	.long	0
freesu:
	.long	0
freesm:
	.long	0
freeyu:
	.long	0
freeym:
	.long	0
freelu:
	.long	0
freelm:
	.long	0
swheap:
	.long	0
cpheap:
	.long	0
oswheap:
	.long	0
pnmac261:
	.string	"gc"
	.even
pnmac262:
	.string	"gcalarm"
	.even
pnmac263:
	.string	"gc-before-alarm"
	.even
pnmac264:
	.string	"gcinfo"
	.even
zsizecd:
	.long	0
pnmac265:
	.string	"code"
	.even
zsizehp:
	.long	0
pnmac266:
	.string	"heap"
	.even
pnmac267:
	.string	"tconscl"
	.even
pnmac268:
	.string	"tconsmk"
	.even
pnmac269:
	.string	"tcons"
	.even
pnmac270:
	.string	"tconsp"
	.even
pnmac271:
	.string	"freecons"
	.even
pnmac272:
	.string	"freetree"
	.even
pnmac273:
	.string	"type-of"
	.even
pnmac274:
	.string	"subtypep"
	.even
pnmac275:
	.string	"typep"
	.even
pnmac276:
	.string	"send"
	.even
pnmac277:
	.string	"send-super"
	.even
pnmac278:
	.string	"csend"
	.even
pnmac279:
	.string	"send2"
	.even
pnmac280:
	.string	"send-error"
	.even
pnmac281:
	.string	"structaccess"
	.even
zbigtype:
	.long	0
pnmac282:
	.string	"bignum-type"
	.even
pnmac283:
	.string	"mapallvector"
	.even
pnmac284:
	.string	"mapallstring"
	.even
zfnalzeff:
	.long	0
pnmac285:
	.string	"finalize-flag"
	.even
pnmac286:
	.string	"finalize-function"
	.even
	.globl	btbgc
lab_m__1:
	.string	"* HEAP-OVNI *"
	.even
	.globl	delta_cons
	.globl	_bsymb
	.globl	_bcons
zgcuser:
	.long	0
zgcalarb:
	.long	0
zgcalarm:
	.long	0
zfnalzefn:
	.long	0
lab_m__4:
	.string	"Calling #:system:finalize-function"
	.even
zgcinfo:
	.long	0
ztcons:
	.long	0
	.globl	btbin
ztconsmk:
	.long	0
ztconscl:
	.long	0
ztconsp:
	.long	0
zfrcons:
	.long	0
zfrtree:
	.long	0
zgettype:
	.long	0
ztypep:
	.long	0
zsubtypep:
	.long	0
zllsend:
	.long	0
zsenderro:
	.long	0
zcsend:
	.long	0
zsupsend:
	.long	0
zsendbi:
	.long	0
zstrctacc:
	.long	0
zsmpvect:
	.long	0
zsmpstrg:
	.long	0
	.globl	cfloat
	.globl	cvect
	.globl	cstrg
	.globl	csymb
	.globl	ccons
	.globl	econs
	.globl	crwork
	.text
	.align	4
	.globl	itsoft
	.globl	errfs
	.globl	errfsgc
	.globl	errfm
	.globl	errfr
	.globl	errff
	.globl	errfn
	.globl	errfv
	.globl	errato
	.globl	errnla
	.globl	errwna
	.globl	errnaa
	.globl	errstc
	.globl	errsym
	.globl	errudf
	.globl	errudm
	.globl	erroob
	.globl	errvec
	.globl	inisymb
	.globl	inicst
	.globl	probjt
	.globl	funcall
	.globl	ffuncall
	.globl	sysprot
	.globl	getfns
	.globl	getbi
	.globl	list
	.globl	gcinfo
	.globl	gettype
	.globl	gccons
	.globl	gcsymb
	.globl	gcstrg
	.globl	gcvect
	.globl	gcfloat
	.globl	gcnumb
	.globl	hgc
	.globl	ini_gc
	.globl	llsend
	.globl	gcstmrk
	.globl	smpvect
	.globl	smpstrg
	.globl	_ttyout
	.globl	_llovni
	.globl	gcswcons
	.globl	_ttycrlf

	# FENTRY ini_gc
	.align	4
ini_gc:
	movl	$2,%eax
	movl	$pnmac261,%ebx
	movl	$gcuser,%ecx
	movl	$zgcuser,%edx
	pushl	$5
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac262,%ebx
	movl	$gcalarm,%ecx
	movl	$zgcalarm,%edx
	pushl	$1
	calll	inisymb
	movl	$15,%eax
	movl	$pnmac263,%ebx
	movl	$gcalarb,%ecx
	movl	$zgcalarb,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac264,%ebx
	movl	$gcinfo,%ecx
	movl	$zgcinfo,%edx
	pushl	$5
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac265,%ebx
	movl	$zsizecd,%ecx
	calll	inicst
	movl	$4,%eax
	movl	$pnmac266,%ebx
	movl	$zsizehp,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac267,%ebx
	movl	$tconscl,%ecx
	movl	$ztconscl,%edx
	pushl	$2
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac268,%ebx
	movl	$tconsmk,%ecx
	movl	$ztconsmk,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac269,%ebx
	movl	$tcons,%ecx
	movl	$ztcons,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac270,%ebx
	movl	$tconsp,%ecx
	movl	$ztconsp,%edx
	pushl	$2
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac271,%ebx
	movl	$frcons,%ecx
	movl	$zfrcons,%edx
	pushl	$2
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac272,%ebx
	movl	$frtree,%ecx
	movl	$zfrtree,%edx
	pushl	$2
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac273,%ebx
	movl	$gettype,%ecx
	movl	$zgettype,%edx
	pushl	$2
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac274,%ebx
	movl	$subtypep,%ecx
	movl	$zsubtypep,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac275,%ebx
	movl	$typep,%ecx
	movl	$ztypep,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac276,%ebx
	movl	$llsend,%ecx
	movl	$zllsend,%edx
	pushl	$5
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac277,%ebx
	movl	$supsend,%ecx
	movl	$zsupsend,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac278,%ebx
	movl	$csend,%ecx
	movl	$zcsend,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac279,%ebx
	movl	$sendbi,%ecx
	movl	$zsendbi,%edx
	pushl	$5
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac280,%ebx
	movl	$senderro,%ecx
	movl	$zsenderro,%edx
	pushl	$3
	calll	inisymb
	movl	zllsystem,%ebp
	movl	%ebp,cpkgc
	movl	$12,%eax
	movl	$pnmac281,%ebx
	movl	$strctacc,%ecx
	movl	$zstrctacc,%edx
	pushl	$5
	calll	inisymb
	movl	$11,%eax
	movl	$pnmac282,%ebx
	movl	$zbigtype,%ecx
	calll	inicst
	movl	$12,%eax
	movl	$pnmac283,%ebx
	movl	$smpvect,%ecx
	movl	$zsmpvect,%edx
	pushl	$2
	calll	inisymb
	movl	$12,%eax
	movl	$pnmac284,%ebx
	movl	$smpstrg,%ecx
	movl	$zsmpstrg,%edx
	pushl	$2
	calll	inisymb
	movl	$13,%eax
	movl	$pnmac285,%ebx
	movl	$zfnalzeff,%ecx
	calll	inicst
	movl	%esi,(%eax)
	movl	$17,%eax
	movl	$pnmac286,%ebx
	movl	$fnalzefn,%ecx
	movl	$zfnalzefn,%edx
	pushl	$2
	calll	inisymb
	movl	%esi,cpkgc
	movl	$0,ngccons
	movl	$0,ngcsymb
	movl	$0,ngcstrg
	movl	$0,ngcvect
	movl	$0,ngcfloat
	movl	$0,ngcnumb
	movl	$0,ngcuser
	movl	$0,ngch
	ret	
hgc:
	incw	ngch
	jmp	gcgo
gccons:
	incw	ngccons
	calll	gcgo
	cmpw	$0,freelm
	jg	gcret
	cmpw	$400,freelu
	jge	gcret
	jmp	errfm
gcsymb:
	incw	ngcsymb
	calll	gcgo
	cmpl	$0,fsymb
	jne	gcret
	jmp	errato
gcstrg:
	incw	ngcstrg
	calll	gcgo
	cmpl	%esi,fstrg
	jne	gcret
	jmp	errfr
gcvect:
	incw	ngcvect
	calll	gcgo
	cmpl	%esi,fvect
	jne	gcret
	jmp	errfv
gcfloat:
	incw	ngcfloat
	calll	gcgo
	cmpw	$0,freefm
	jg	gcret
	cmpw	$0,freefu
	jg	gcret
	jmp	errff
gcnumb:
	incw	ngcnumb
	calll	gcgo
	cmpw	$0,freenm
	jg	gcret
	cmpw	$0,freenu
	jg	gcret
	jmp	errfn
gcret:
	ret	
gcgo:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	llink
	pushl	evalst
	pushl	forme
	pushl	funct
	pushl	savea1
	pushl	savea2
	pushl	savea3
	pushl	savea4
	pushl	errname
	pushl	intret
	pushl	intllink
	pushl	iexpld
	pushl	impli
	pushl	ringur
	pushl	curread
	pushl	impld
	pushl	lexpld
	movl	%esp,%edx
	pushl	asymb
	pushl	tabch
	pushl	cachch
	pushl	bufat
	pushl	cpkgc
	pushl	tabtypfn
	pushl	tabcodfn
	pushl	tabctyp
	pushl	tabccod
	pushl	bufpn
	pushl	bufstrg
	pushl	curprmpt
	pushl	tabchan
	pushl	cntrlc
	pushl	bufch
	pushl	rubstrg
	pushl	cstsyste
	pushl	fzero
	pushl	fltun
	pushl	fltmun
	pushl	fltimax
	pushl	fltimin
	pushl	%edx
	movl	%esi,iexpld
	movl	%esi,impli
	movl	%esi,llink
	movl	zgcalarb,%eax
	movl	%esi,%ebx
	calll	itsoft
	calll	gcnoit
	movl	zgcalarm,%eax
	movl	%esi,%ebx
	calll	itsoft
	popl	%edx
	movl	%edx,%esp
	popl	lexpld
	popl	impld
	popl	curread
	popl	ringur
	popl	impli
	popl	iexpld
	popl	intllink
	popl	intret
	popl	errname
	popl	savea4
	popl	savea3
	popl	savea2
	popl	savea1
	popl	funct
	popl	forme
	popl	evalst
	popl	llink
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
gcend:
gcpopj:
	ret	
gcnoit:
	cmpl	$0,itstate
	je	gcst0
	movl	$gcst00,%ecx
	calll	sysprot
	popl	%eax
	movl	$1,itstate
	jmp	*%ecx
gcst00:
	movl	$0,itstate
gcst0:
gcstmrk:
	movl	%esp,%edx
	movl	bstack,%ecx
gcst1:
	movl	(%edx),%eax
	addl	$4,%edx
	calll	mark
	cmpl	%ecx,%edx
	jne	gcst1
	movl	hashtab,%eax
	movl	%eax,%ebp
	subl	bnumb,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbgc,%eax
	btsl	%ebp,(%eax)
	popl	%eax
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%edx
	decw	%dx
gcat0:
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%edx,4),%edx
	jmp	gcat8
gcat1:
	movl	%edx,%ecx
	movl	28(%edx),%ebp
	cmpl	%ebp,bstrg
	ja	lmac287
	cmpl	%ebp,%esi
	ja	gcat5
lmac287:
gcat2:
	movl	28(%edx),%edx
gcat5:
	movl	(%edx),%eax
	cmpl	zundef,%eax
	je	gcatm1
	calll	mark
gcatm1:
	movl	4(%edx),%eax
	cmpl	%esi,%eax
	je	gcatm2
	calll	mark
gcatm2:
	movl	8(%edx),%eax
	orl	%eax,%eax
	je	gcatm3
	calll	mark
gcatm3:
	movl	12(%edx),%eax
	cmpl	%esi,%eax
	je	gcatm4
	calll	mark
gcatm4:
	movl	16(%edx),%eax
	cmpl	%esi,%eax
	je	gcatm5
	calll	mark
gcatm5:
	movl	20(%edx),%eax
	cmpl	%eax,bstrg
	ja	lmac288
	cmpl	%esi,%eax
	jb	gcatm9
lmac288:
	movl	28(%edx),%eax
	cmpl	%eax,bstrg
	ja	lmac289
	cmpl	%esi,%eax
	jb	gcatm9
lmac289:
	movl	20(%eax),%eax
gcatm9:
	calll	mark
	cmpl	%ecx,%edx
	jne	gcat2
gcat6:
	movl	20(%edx),%edx
gcat8:
	cmpl	%esi,%edx
	jb	lmac290
	cmpl	%edi,%edx
	jb	gcat1
lmac290:
	decw	%dx
	jge	gcat0
gcat9:
	jmp	gcfnlz
mark:
	cmpl	%eax,bfloat
	ja	markr
	cmpl	%eax,econs
	jbe	markr
	movl	%eax,%ebp
	subl	bnumb,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbgc,%eax
	btl	%ebp,(%eax)
	jnc	mac290
	popl	%eax
	ret	
mac290:
	btsl	%ebp,(%eax)
	popl	%eax
	cmpl	%edi,%eax
	jge	markl
	cmpl	%eax,bvect
	ja	mac291
	cmpl	%eax,bstrg
	ja	markv
mac291:
	cmpl	%eax,bstrg
	ja	mac292
	cmpl	%eax,%esi
	ja	markt
mac292:
markr:
	ret	
markl:
	cmpl	%esp,estack
	ja	errfsgc
	pushl	4(%eax)
	movl	(%eax),%eax
	calll	mark
	popl	%eax
	jmp	mark
markv:
	pushl	%ecx
	movl	(%eax),%ebp
	movl	4(%ebp),%ecx
	pushl	%eax
	cmpl	%esp,estack
	ja	errfsgc
	jmp	markv4
markv2:
	movl	(%esp),%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%ecx,4),%eax
	pushl	%ecx
	calll	mark
	popl	%ecx
markv4:
	decw	%cx
	jge	markv2
	popl	%eax
	popl	%ecx
markt:
	movl	4(%eax),%eax
	jmp	mark
	ret	
gcfnlz:
	movl	zfnalzeff,%ebx
	movl	(%ebx),%ebx
	cmpl	%esi,%ebx
	je	gcfnlz9
	movl	zfnalzefn,%ebx
	movzwl	24(%ebx),%ecx
	cmpl	$2,%ecx
	jne	gcfnlz9
	movl	8(%ebx),%ecx
	movl	bvect,%eax
gcfnlz2:
	movl	%eax,%ebp
	subl	bnumb,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbgc,%eax
	btl	%ebp,(%eax)
	popl	%eax
	jc	gcfnlz8
	movl	(%eax),%ebx
	cmpl	%esi,%ebx
	je	gcfnlz8
	cmpl	%ebx,bvect
	ja	lmac294
	cmpl	%ebx,bstrg
	ja	gcfnlz8
lmac294:
	pushl	%eax
	pushl	%ecx
	pushl	$gcfnlz6
	jmp	*%ecx
gcfnlz6:
	popl	%ecx
	popl	%eax
gcfnlz8:
	addl	$8,%eax
	cmpl	%eax,bstrg
	ja	gcfnlz2
gcfnlz9:
	jmp	gcompact
gcompact:
	movl	bheap,%ecx
	movl	bheap,%edx
	jmp	hsweep8
hsweep2:
	movl	(%ecx),%eax
	cmpl	%eax,bstrg
	ja	lmac295
	cmpl	%esi,%eax
	jb	hsweep4
lmac295:
	cmpl	%eax,bvect
	ja	lmac296
	cmpl	%eax,bstrg
	ja	hsweep5
lmac296:
	orl	%eax,%eax
	js	hsweep6
	cmpl	%esi,%eax
	jb	lmac297
	cmpl	%edi,%eax
	jb	hsweep7
lmac297:
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	$lab_m__1
	pushl	$13
	calll	_ttyout
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	# Prepare a C function call with 4 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	movl	oswheap,%ebp
	pushl	%ebp
	movl	eheap,%ebp
	pushl	%ebp
	movl	cheap,%ebp
	pushl	%ebp
	movl	bheap,%ebp
	pushl	%ebp
	calll	_llovni
	addl	$16,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	jmp	hsweep9
hsweep4:
	movl	%ecx,oswheap
	movl	4(%ecx),%ebx
	leal	10(%ecx,%ebx),%ecx
	testl	$1,%ecx
	jz	l__2
	incl	%ecx
l__2:
	movl	%eax,%ebp
	subl	bnumb,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbgc,%eax
	btl	%ebp,(%eax)
	popl	%eax
	jnc	hsweep8
	cmpl	%edx,oswheap
	jne	hsweep41
	movl	%ecx,%edx
	jmp	hsweep8
hsweep41:
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	oswheap,%esi
	movl	%edx,%edi
	subl	%esi,%ecx
	movl	%ecx,%ebp
	shrl	$2,%ecx
	rep
	movsl
	movl	%ebp,%ecx
	andl	$3,%ecx
	rep
	movsb
	popl	%esi
	popl	%edi
	popl	%ecx
	movl	%edx,(%eax)
	leal	10(%edx,%ebx),%edx
	testl	$1,%edx
	jz	l__3
	incl	%edx
l__3:
	jmp	hsweep8
hsweep5:
	movl	%ecx,oswheap
	movl	4(%ecx),%ebx
	leal	8(%ecx,%ebx,4),%ecx
	movl	%eax,%ebp
	subl	bnumb,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbgc,%eax
	btl	%ebp,(%eax)
	popl	%eax
	jnc	hsweep8
	cmpl	%edx,oswheap
	jne	hsweep51
	movl	%ecx,%edx
	jmp	hsweep8
hsweep51:
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	oswheap,%esi
	movl	%edx,%edi
	subl	%esi,%ecx
	movl	%ecx,%ebp
	shrl	$2,%ecx
	rep
	movsl
	movl	%ebp,%ecx
	andl	$3,%ecx
	rep
	movsb
	popl	%esi
	popl	%edi
	popl	%ecx
	movl	%edx,(%eax)
	leal	8(%edx,%ebx,4),%edx
	jmp	hsweep8
hsweep6:
	movl	%ecx,oswheap
	movl	%eax,%ebp
	subl	bnumb,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbgc,%eax
	btl	%ebp,(%eax)
	popl	%eax
	jnc	hsweep8
	cmpl	%edx,oswheap
	jne	hsweep61
	movl	%ecx,%edx
	jmp	hsweep8
hsweep61:
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	oswheap,%esi
	movl	%edx,%edi
	movl	swheap,%ecx
	subl	%esi,%ecx
	movl	%ecx,%ebp
	shrl	$2,%ecx
	rep
	movsl
	movl	%ebp,%ecx
	andl	$3,%ecx
	rep
	movsb
	popl	%esi
	popl	%edi
	popl	%ecx
	movl	%edx,(%eax)
	jmp	hsweep8
hsweep7:
	movl	%ecx,oswheap
	movl	%eax,%ebp
	subl	bnumb,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbgc,%eax
	btl	%ebp,(%eax)
	popl	%eax
	jnc	hsweep8
	cmpl	%edx,oswheap
	jne	hsweep71
	movl	%ecx,%edx
	jmp	hsweep8
hsweep71:
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	oswheap,%esi
	movl	%edx,%edi
	subl	%esi,%ecx
	movl	%ecx,%ebp
	shrl	$2,%ecx
	rep
	movsl
	movl	%ebp,%ecx
	andl	$3,%ecx
	rep
	movsb
	popl	%esi
	popl	%edi
	popl	%ecx
	movl	%edx,(%eax)
hsweep8:
	cmpl	cheap,%ecx
	jb	hsweep2
	movl	%edx,cheap
hsweep9:
	jmp	gcsweep
gcsweep:
	xorl	%eax,%eax
	xorl	%ebx,%ebx
	xorl	%ecx,%ecx
	movl	cnumb,%edx
	jmp	gcswn4
gcswn1:
	movl	%edx,%ebp
	subl	bnumb,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbgc,%eax
	btrl	%ebp,(%eax)
	popl	%eax
	jc	gcswn3
	movl	%eax,(%edx)
	movl	%edx,%eax
	incl	%ebx
	cmpl	$1024,%ebx
	jl	mac298
	xorl	%ebx,%ebx
	incl	%ecx
mac298:
gcswn3:
gcswn4:
	movl	%eax,fnumb
	movl	%ebx,freenu
	movl	%ecx,freenm
	xorl	%eax,%eax
	xorl	%ebx,%ebx
	xorl	%ecx,%ecx
	movl	bfloat,%edx
	orl	%edx,%edx
	jns	gcswf4
gcswf1:
	movl	%edx,%ebp
	subl	bnumb,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbgc,%eax
	btrl	%ebp,(%eax)
	popl	%eax
	jc	gcswf3
	movl	%eax,(%edx)
	movl	%edx,%eax
	incl	%ebx
	cmpl	$1024,%ebx
	jl	mac299
	xorl	%ebx,%ebx
	incl	%ecx
mac299:
gcswf3:
gcswf4:
	movl	%eax,ffloat
	movl	%ebx,freefu
	movl	%ecx,freefm
	movl	%esi,%eax
	xorl	%ebx,%ebx
	xorl	%ecx,%ecx
	movl	bvect,%edx
gcswv1:
	movl	%edx,%ebp
	subl	bnumb,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbgc,%eax
	btrl	%ebp,(%eax)
	popl	%eax
	jc	gcswv2
	movl	%eax,(%edx)
	movl	%edx,%eax
	incl	%ebx
	cmpl	$1024,%ebx
	jl	mac300
	xorl	%ebx,%ebx
	incl	%ecx
mac300:
gcswv2:
	addl	$8,%edx
	cmpl	%edx,bstrg
	ja	gcswv1
	movl	%eax,fvect
	movl	%ebx,freevu
	movl	%ecx,freevm
	movl	%esi,%eax
	xorl	%ebx,%ebx
	xorl	%ecx,%ecx
	movl	bstrg,%edx
gcsws1:
	movl	%edx,%ebp
	subl	bnumb,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbgc,%eax
	btrl	%ebp,(%eax)
	popl	%eax
	jc	gcsws2
	movl	%eax,(%edx)
	movl	%edx,%eax
	incl	%ebx
	cmpl	$1024,%ebx
	jl	mac301
	xorl	%ebx,%ebx
	incl	%ecx
mac301:
gcsws2:
	addl	$8,%edx
	cmpl	%edx,%esi
	ja	gcsws1
	movl	%eax,fstrg
	movl	%ebx,freesu
	movl	%ecx,freesm
	xorl	%ebx,%ebx
	xorl	%ecx,%ecx
	movl	fsymb,%eax
	jmp	gcswyc3
gcswyc2:
	movl	20(%eax),%eax
	incl	%ebx
	cmpl	$1024,%ebx
	jl	mac302
	xorl	%ebx,%ebx
	incl	%ecx
mac302:
gcswyc3:
	cmpl	%esi,%eax
	jb	lmac303
	cmpl	%edi,%eax
	jb	gcswyc2
lmac303:
	movl	%ebx,freeyu
	movl	%ecx,freeym
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%eax
	jmp	gcswy9
gcswy2:
	movl	%eax,%ebx
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%eax,4),%eax
	jmp	gcswy8
gcswy3:
	movl	%eax,%ecx
	movl	%eax,%edx
gcswy4:
	movl	%eax,%ebp
	subl	bnumb,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbgc,%eax
	btrl	%ebp,(%eax)
	popl	%eax
	jc	gcswy5
	cmpl	%eax,bvar
	ja	gcswy5
	cmpl	%edi,%eax
	jae	gcswy5
	movl	zundef,%ebp
	cmpl	%ebp,(%eax)
	jne	gcswy5
	cmpl	%esi,4(%eax)
	jne	gcswy5
	cmpl	%esi,16(%eax)
	jne	gcswy5
	pushl	%ebx
	movzwl	24(%eax),%ebx
	orw	%bx,%bx
	je	gcswys
	popl	%ebx
gcswy5:
	movl	28(%eax),%ebp
	cmpl	%ebp,bstrg
	ja	lmac304
	cmpl	%ebp,%esi
	ja	gcswy6
lmac304:
gcswy50:
	movl	%eax,%edx
	movl	28(%eax),%eax
	cmpl	%ecx,%eax
	jne	gcswy4
gcswy6:
	movl	%ecx,%ebx
	movl	20(%ecx),%eax
gcswy8:
	cmpl	%esi,%eax
	jb	lmac305
	cmpl	%edi,%eax
	jb	gcswy3
lmac305:
gcswy9:
	decw	%ax
	jge	gcswy2
	jmp	gcswcons
gcswys:
	popl	%ebx
	movl	28(%eax),%ebp
	cmpl	%ebp,bstrg
	ja	lmac306
	cmpl	%ebp,%esi
	ja	gcswys1
lmac306:
	cmpl	%ecx,%eax
	jne	gcswys2
	jmp	gcswys3
gcswys1:
	movl	20(%eax),%edx
	cmpl	%ebx,bfloat
	ja	gcswys12
	movl	%edx,20(%ebx)
	jmp	gcswys14
gcswys12:
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	%edx,8(%ebp,%ebx,4)
gcswys14:
	movl	fsymb,%ebp
	movl	%ebp,20(%eax)
	movl	%eax,fsymb
	incl	freeyu
	cmpl	$1024,freeyu
	jl	mac307
	movl	$0,freeyu
	incl	freeym
mac307:
	movl	%edx,%eax
	jmp	gcswy8
gcswys2:
	movl	28(%eax),%ebp
	movl	%ebp,28(%edx)
	cmpl	28(%ecx),%ecx
	je	gcswys20
	movl	fsymb,%ebp
	movl	%ebp,20(%eax)
	movl	%eax,fsymb
	incl	freeyu
	cmpl	$1024,freeyu
	jl	mac308
	movl	$0,freeyu
	incl	freeym
mac308:
	movl	%edx,%eax
	jmp	gcswy50
gcswys20:
	movl	20(%eax),%ebp
	movl	%ebp,28(%ecx)
	movl	fsymb,%ebp
	movl	%ebp,20(%eax)
	movl	%eax,fsymb
	incl	freeyu
	cmpl	$1024,freeyu
	jl	mac309
	movl	$0,freeyu
	incl	freeym
mac309:
	jmp	gcswy6
gcswys3:
	cmpl	%ebx,bfloat
	ja	gcswys30
	movl	28(%ecx),%ebp
	movl	%ebp,20(%ebx)
	jmp	gcswys31
gcswys30:
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	pushl	28(%ecx)
	popl	8(%ebp,%ebx,4)
gcswys31:
	movl	%ecx,%edx
gcswys32:
	movl	28(%edx),%edx
	cmpl	%ecx,28(%edx)
	jne	gcswys32
	movl	28(%ecx),%ebp
	movl	%ebp,28(%edx)
	movl	28(%ecx),%ecx
	cmpl	28(%ecx),%ecx
	jne	gcswys33
	movl	20(%ecx),%ebp
	movl	%ebp,28(%ecx)
	movl	20(%eax),%ebp
	movl	%ebp,20(%ecx)
	jmp	gcswys34
gcswys33:
	movl	20(%eax),%ebp
	movl	%ebp,20(%ecx)
gcswys34:
	movl	fsymb,%ebp
	movl	%ebp,20(%eax)
	movl	%eax,fsymb
	incl	freeyu
	cmpl	$1024,freeyu
	jl	mac310
	movl	$0,freeyu
	incl	freeym
mac310:
	movl	%ecx,%eax
	jmp	gcswy3
gcswcons:
	movl	%esi,%eax
	xorl	%ebx,%ebx
	xorl	%ecx,%ecx
	movl	%edi,%edx
	#
	# new SWPCONS macro
	#
swpcons_macro:
	.globl	swpcons_macro
	pushl	%edi
	pushl	btbin
	movl	_bsymb,%ebx
	movl	btbgc,%ebp
	movl	_bcons,%esi
	subl	bnumb,%esi
	shrl	$6,%esi
	addl	%esi,%ebp
	xorl	%esi,%esi
nextw:
	movl	%ebx,delta_cons
	movl	(%esp),%edi
	movl	(%ebp),%ebx
	addl	$4,(%esp)
	andl	%ebx,(%edi)
	xorl	%edi,%edi
	movl	delta_cons,%ebx
nextb:
	btl	%edi,(%ebp)
	jc	marked
	movl	%ebx,(%edx)
	movl	%eax,4(%edx)
	incl	%esi
	movl	%edx,%eax
marked:
	incl	%edi
	addl	$8,%edx
	cmpl	$32,%edi
	jne	nextb
	movl	$0,(%ebp)
	addl	$4,%ebp
	cmpl	%edx,econs
	ja	nextw
	movl	%esi,%ebx
	andl	$1023,%ebx
	movl	%esi,%ecx
	shrl	$10,%ecx
	popl	%ebp
	popl	%edi
	movl	_bsymb,%esi
	#
	# end SWPCONS macro
	#
	movl	%eax,fcons
	movl	%ebx,freelu
	movl	%ecx,freelm
	jmp	gcswend
gcswend:
	ret	

	# FENTRY gcuser
	.align	4
gcuser:
	cmpw	$1,%dx
	je	gcuser5
	orw	%dx,%dx
	je	gcuser4
	movl	$1,%eax
	movl	zgcuser,%ebx
	jmp	errwna
gcuser4:
	movl	%esi,%eax
	pushl	%eax
gcuser5:
	incw	ngcuser
	calll	gcgo
	popl	%eax
	cmpl	%esi,%eax
	jne	gcinfo0
	movl	zt,%eax
	ret	

	# FENTRY gcalarb
	.align	4
gcalarb:
	movl	%esi,%eax
	ret	

	# FENTRY gcalarm
	.align	4
gcalarm:
	movl	%esi,%eax
	ret	

	# FENTRY fnalzefn
	.align	4
fnalzefn:
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	$lab_m__4
	pushl	$34
	calll	_ttyout
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	# Prepare a C function call with 0 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	calll	_ttycrlf
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	ret	

	# FENTRY gcinfo
	.align	4
gcinfo:
	orl	%edx,%edx
	je	gcinfo0
	cmpl	$1,%edx
	je	gcinfo1
	movl	$1,%eax
	movl	zgcinfo,%ebx
	jmp	errwna
gcinfo0:
	movl	%esi,%edx
gcinfou:
	pushl	zgcuser
	pushl	ngccons
	pushl	ngcsymb
	pushl	ngcstrg
	pushl	ngcvect
	pushl	ngcfloat
	pushl	ngcnumb
	pushl	ngch
	pushl	ngcuser
	pushl	zllcons
	movl	freelu,%eax
	movl	freelm,%ebx
	calll	gcinfz
	pushl	%eax
	pushl	zffsymbol
	movl	freeyu,%eax
	movl	freeym,%ebx
	calll	gcinfz
	pushl	%eax
	pushl	zstring000
	movl	freesu,%eax
	movl	freesm,%ebx
	calll	gcinfz
	pushl	%eax
	pushl	zvector
	movl	freevu,%eax
	movl	freevm,%ebx
	calll	gcinfz
	pushl	%eax
	pushl	zllfloat
	movl	freefu,%eax
	movl	freefm,%ebx
	calll	gcinfz
	pushl	%eax
	pushl	zllfix
	movl	freenu,%eax
	movl	freenm,%ebx
	calll	gcinfz
	pushl	%eax
	pushl	zsizehp
	cmpl	%esi,%edx
	je	gcinfou2
	movl	eheap,%ebp
	subl	bheap,%ebp
	pushl	%ebp
	andl	$1023,%ebp
	movl	%ebp,%eax
	popl	%ebp
	shrl	$10,%ebp
	movl	%ebp,%ebx
	jmp	gcinfou3
gcinfou2:
	movl	eheap,%ebp
	subl	cheap,%ebp
	pushl	%ebp
	andl	$1023,%ebp
	movl	%ebp,%eax
	popl	%ebp
	shrl	$10,%ebp
	movl	%ebp,%ebx
gcinfou3:
	cmpl	%edi,fcons
	jb	l__5
l1__5:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%eax,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	movl	%ebx,%eax
	pushl	%eax
	pushl	zsizecd
	cmpl	%esi,%edx
	je	gcinfou4
	movl	ecode,%ebp
	subl	bcode,%ebp
	pushl	%ebp
	andl	$1023,%ebp
	movl	%ebp,%eax
	popl	%ebp
	shrl	$10,%ebp
	movl	%ebp,%ebx
	jmp	gcinfou5
gcinfou4:
	movl	ecode,%ebp
	subl	ccode,%ebp
	pushl	%ebp
	andl	$1023,%ebp
	movl	%ebp,%eax
	popl	%ebp
	shrl	$10,%ebp
	movl	%ebp,%ebx
gcinfou5:
	cmpl	%edi,fcons
	jb	l__6
l1__6:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%eax,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	movl	%ebx,%eax
	pushl	%eax
	movl	$25,%edx
	jmp	list
gcinfo1:
	popl	%eax
	xorl	%ebx,%ebx
	xorl	%ecx,%ecx
	movl	bnumb,%edx
	jmp	gcinfon9
gcinfon1:
	incl	%ebx
	cmpl	$1024,%ebx
	jl	mac311
	xorl	%ebx,%ebx
	incl	%ecx
mac311:
gcinfon9:
	movl	%ebx,freenu
	movl	%ecx,freenm
	xorl	%ebx,%ebx
	xorl	%ecx,%ecx
	movl	bfloat,%edx
	orl	%edx,%edx
	jns	gcinfof9
gcinfof1:
	incl	%ebx
	cmpl	$1024,%ebx
	jl	mac312
	xorl	%ebx,%ebx
	incl	%ecx
mac312:
gcinfof9:
	movl	%ebx,freefu
	movl	%ecx,freefm
	xorl	%ebx,%ebx
	xorl	%ecx,%ecx
	movl	bvect,%edx
gcinfov1:
	incl	%ebx
	cmpl	$1024,%ebx
	jl	mac313
	xorl	%ebx,%ebx
	incl	%ecx
mac313:
	addl	$8,%edx
	cmpl	%edx,bstrg
	ja	gcinfov1
	movl	%ebx,freevu
	movl	%ecx,freevm
	xorl	%ebx,%ebx
	xorl	%ecx,%ecx
	movl	bstrg,%edx
gcinfos1:
	incl	%ebx
	cmpl	$1024,%ebx
	jl	mac314
	xorl	%ebx,%ebx
	incl	%ecx
mac314:
	addl	$8,%edx
	cmpl	%edx,%esi
	ja	gcinfos1
	movl	%ebx,freesu
	movl	%ecx,freesm
	xorl	%ebx,%ebx
	xorl	%ecx,%ecx
	movl	%esi,%edx
gcinfoy1:
	incl	%ebx
	cmpl	$1024,%ebx
	jl	mac315
	xorl	%ebx,%ebx
	incl	%ecx
mac315:
	addl	$32,%edx
	cmpl	%edx,%edi
	ja	gcinfoy1
	movl	%ebx,freeyu
	movl	%ecx,freeym
	xorl	%ebx,%ebx
	xorl	%ecx,%ecx
	movl	%edi,%edx
gcinfol1:
	incl	%ebx
	cmpl	$1024,%ebx
	jl	mac316
	xorl	%ebx,%ebx
	incl	%ecx
mac316:
	addl	$8,%edx
	cmpl	%edx,econs
	ja	gcinfol1
	movl	%ebx,freelu
	movl	%ecx,freelm
	xorl	%edx,%edx
	jmp	gcinfou
gcinfz:
	orw	%bx,%bx
	je	gcinfz9
	cmpw	$32,%bx
	jge	gcinfz1
	imulw	$1024,%bx,%bx
	addw	%bx,%ax
	jmp	gcinfz9
gcinfz1:
	cmpl	%edi,fcons
	jb	l__7
l1__7:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%eax,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	movl	%ebx,%eax
gcinfz9:
	ret	

	# FENTRY tcons
	.align	4
tcons:
	cmpl	%edi,fcons
	jb	l__8
l1__8:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%ebx,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	movl	%eax,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btsl	%ebp,(%eax)
	popl	%eax
	ret	

	# FENTRY tconsmk
	.align	4
tconsmk:
	cmpl	%edi,%eax
	jl	tcmker
	movl	%eax,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btsl	%ebp,(%eax)
	popl	%eax
	ret	
tcmker:
	movl	ztconsmk,%ebx
	jmp	errnla

	# FENTRY tconscl
	.align	4
tconscl:
	cmpl	%edi,%eax
	jl	tccler
	movl	%eax,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btrl	%ebp,(%eax)
	popl	%eax
	ret	
tccler:
	movl	ztconscl,%ebx
	jmp	errnla

	# FENTRY tconsp
	.align	4
tconsp:
	cmpl	%edi,%eax
	jl	tconsp1
	movl	%eax,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btl	%ebp,(%eax)
	popl	%eax
	jc	tconsp2
tconsp1:
	movl	%esi,%eax
tconsp2:
	ret	

	# FENTRY frcons
	.align	4
frcons:
	cmpl	$0,itstate
	je	frcs1
	movl	$frcs0,%ecx
	calll	sysprot
	popl	%eax
	movl	$1,itstate
	jmp	*%ecx
frcs0:
	movl	$0,itstate
frcs1:
	movl	fcons,%ebx
	cmpl	%edi,%eax
	jl	frcser
	movl	%esi,(%eax)
	movl	%ebx,4(%eax)
	movl	%eax,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btrl	%ebp,(%eax)
	popl	%eax
	movl	%eax,fcons
	movl	%esi,%ebx
	movl	%esi,%eax
	ret	
frcser:
	movl	zfrcons,%ebx
	jmp	errnla

	# FENTRY frtree
	.align	4
frtree:
	cmpl	$0,itstate
	je	frtr1
	movl	$frtr0,%ecx
	calll	sysprot
	popl	%eax
	movl	$1,itstate
	jmp	*%ecx
frtr0:
	movl	$0,itstate
frtr1:
	movl	fcons,%edx
	calll	frtr3
	movl	%edx,fcons
	movl	%esi,%edx
	movl	%esi,%ecx
	movl	%esi,%ebx
	movl	%esi,%eax
frtret:
	ret	
frtr2:
	movl	%ecx,%eax
frtr3:
	cmpl	%edi,%eax
	jl	frtret
frtr4:
	movl	(%eax),%ebx
	movl	4(%eax),%ecx
	movl	%edx,4(%eax)
	movl	%esi,(%eax)
	movl	%eax,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btrl	%ebp,(%eax)
	popl	%eax
	movl	%eax,%edx
	cmpl	%edi,%ebx
	jl	frtr2
	pushl	%ecx
	movl	%ebx,%eax
	calll	frtr4
	popl	%eax
	jmp	frtr3

	# FENTRY gettype
	.align	4
gettype:
	cmpl	%edi,%eax
	jl	gettype0
	movl	%eax,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btl	%ebp,(%eax)
	popl	%eax
	jnc	gettype2
	movl	(%eax),%eax
	cmpl	%esi,%eax
	jb	lmac317
	cmpl	%edi,%eax
	jb	gettyper
lmac317:
	cmpl	%eax,bfloat
	ja	gettypfx
	cmpl	%edi,%eax
	jl	gettyper
	cmpl	%esi,(%eax)
	jb	gettypfx
	cmpl	%edi,(%eax)
	jae	gettypfx
gettyper:
	ret	
gettype0:
	cmpl	%eax,bvect
	ja	lmac318
	cmpl	%eax,bstrg
	ja	gettype1
lmac318:
	cmpl	%eax,bfloat
	ja	gettype6
	orl	%eax,%eax
	js	gettype5
	cmpl	%eax,bstrg
	ja	lmac319
	cmpl	%esi,%eax
	jb	gettype1
lmac319:
	cmpl	%esi,%eax
	je	gettype3
	cmpl	%esi,%eax
	jb	lmac320
	cmpl	%edi,%eax
	jb	gettype4
lmac320:
gettype6:
	movl	zllfix,%eax
	ret	
gettype1:
	movl	4(%eax),%eax
	ret	
gettype2:
	movl	zllcons,%eax
	ret	
gettype3:
	movl	zllnull,%eax
	ret	
gettype4:
	movl	zffsymbol,%eax
	ret	
gettype5:
	movl	zllfloat,%eax
	ret	
gettypfx:
	movl	zbigtype,%eax
	movl	(%eax),%eax
	ret	

	# FENTRY typep
	.align	4
typep:
	pushl	$subtypep
	jmp	gettype

	# FENTRY subtypep
	.align	4
subtypep:
	cmpl	%esi,%eax
	jb	subtypr1
	cmpl	%edi,%eax
	jae	subtypr1
	cmpl	%esi,%ebx
	jb	subtypr2
	cmpl	%edi,%ebx
	jae	subtypr2
	jmp	subtyp1
subtyp0:
	movl	12(%eax),%eax
subtyp1:
	cmpl	%ebx,%eax
	je	subtyp3
	cmpl	%edi,%eax
	jge	subtyp5
	cmpl	%esi,%eax
	jb	subtyp2
	cmpl	%edi,%eax
	jae	subtyp2
	cmpl	%esi,%eax
	jne	subtyp0
subtyp2:
	ret	
subtyp3:
	movl	zt,%eax
	ret	
subtyp4:
	popl	%eax
	cmpl	%edi,%eax
	jl	subtyp7
subtyp5:
	pushl	4(%eax)
	movl	(%eax),%eax
	calll	subtyp7
	cmpl	%esi,%eax
	je	subtyp4
	addl	$4,%esp
	ret	
subtyp6:
	movl	12(%eax),%eax
subtyp7:
	cmpl	%ebx,%eax
	je	subtyp9
	cmpl	%edi,%eax
	jge	subtyp5
	cmpl	%esi,%eax
	jb	subtyp8
	cmpl	%edi,%eax
	jae	subtyp8
	cmpl	%esi,%eax
	jne	subtyp6
subtyp8:
	ret	
subtyp9:
	movl	zt,%eax
	ret	
subtypr2:
	movl	%ebx,%eax
subtypr1:
	movl	zsubtypep,%ebx
	jmp	errsym

	# FENTRY llsend
	.align	4
llsend:
	cmpw	$1,%dx
	jle	sender
	decw	%dx
	decw	%dx
	movl	(%esp,%edx,4),%eax
	incw	%dx
	cmpl	%eax,bvect
	ja	send2
	cmpl	%eax,bstrg
	jbe	send2
	movl	4(%eax),%eax
send1:
	movl	(%esp,%edx,4),%ebx
	movl	zvoid,%ecx
	pushl	%edx
	calll	getfns
	popl	%edx
	cmpl	%esi,%eax
	je	send3
	movl	$gcpopj,(%esp,%edx,4)
	jmp	ffuncall
send2:
	calll	gettype
	jmp	send1
send3:
	movl	%edx,%ecx
	jmp	send5
send4:
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__9
l1__9:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
send5:
	decw	%cx
	jge	send4
	pushl	%eax
	movl	$2,%edx
	movl	zsenderro,%eax
	jmp	ffuncall
sender:
	movl	$2,%eax
	movl	zllsend,%ebx
	jmp	errwna

	# FENTRY senderro
	.align	4
senderro:
	cmpl	%edi,fcons
	jb	l__10
l1__10:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%ebx,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	movl	zllsend,%ebx
	jmp	errudm

	# FENTRY csend
	.align	4
csend:
	cmpw	$2,%dx
	jle	csender
	pushl	$csend1
	decw	%dx
	decw	%dx
	movl	(%esp,%edx,4),%eax
	jmp	gettype
csend1:
	movl	(%esp,%edx,4),%ebx
	movl	zvoid,%ecx
	pushl	%edx
	calll	getfns
	popl	%edx
	cmpl	%esi,%eax
	je	csend3
	movl	$gcpopj,(%esp,%edx,4)
	incw	%dx
	movl	$gcpopj,(%esp,%edx,4)
	decw	%dx
	jmp	ffuncall
csend3:
	addw	$2,%dx
	jmp	funcall
csender:
	movl	$3,%eax
	movl	zcsend,%ebx
	jmp	errwna

	# FENTRY supsend
	.align	4
supsend:
	cmpw	$2,%dx
	jle	supsenr1
	pushl	%edx
	movl	(%esp,%edx,4),%ebx
	subw	$2,%dx
	movl	(%esp,%edx,4),%eax
	calll	typep
	cmpl	%esi,%eax
	je	supsenr3
	popl	%edx
	decw	%dx
	movl	(%esp,%edx,4),%eax
	cmpl	%esi,%eax
	jb	supsenr2
	cmpl	%edi,%eax
	jae	supsenr2
	movl	12(%eax),%eax
	movl	$gcpopj,(%esp,%edx,4)
	decw	%dx
	jmp	send1
supsenr1:
	movl	$3,%eax
	movl	zsupsend,%ebx
	jmp	errwna
supsenr2:
	movl	zsupsend,%ebx
	jmp	errsym
supsenr3:
	movl	zsupsend,%ebx
	popl	%edx
	decw	%dx
	movl	(%esp,%edx,4),%eax
	subw	$2,%dx
	movl	(%esp,%edx,4),%ecx
	cmpl	%edi,fcons
	jb	l__11
l1__11:
	movl	fcons,%ebp
	movl	%ecx,(%ebp)
	movl	%esi,%ecx
	xchgl	%ecx,4(%ebp)
	xchgl	%ecx,fcons
	cmpl	%edi,fcons
	jb	l__12
l1__12:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%ecx,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	jmp	erroob

	# FENTRY sendbi
	.align	4
sendbi:
	cmpw	$2,%dx
	jle	sendbier
	pushl	%edx
	decw	%dx
	movl	(%esp,%edx,4),%eax
	calll	gettype
	pushl	%eax
	movl	(%esp,%edx,4),%eax
	calll	gettype
	movl	%eax,%ebx
	popl	%eax
	popl	%edx
	decw	%dx
	movl	(%esp,%edx,4),%ecx
	pushl	%edx
	calll	getbi
	popl	%edx
	cmpl	%esi,%eax
	je	sendbi3
	movl	$gcpopj,(%esp,%edx,4)
	jmp	ffuncall
sendbi2:
	popl	%ecx
	cmpl	%edi,fcons
	jb	l__13
l1__13:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
sendbi3:
	decw	%dx
	jge	sendbi2
	movl	zsendbi,%ebx
	jmp	errudm
sendbier:
	movl	$3,%eax
	movl	zsendbi,%ebx
	jmp	errwna

	# FENTRY strctacc
	.align	4
strctacc:
	cmpw	$5,%dx
	jne	fieldr1
	movl	8(%esp),%eax
	cmpl	%eax,bvect
	ja	fieldr2
	cmpl	%eax,bstrg
	jbe	fieldr2
	movl	16(%esp),%ebx
	cmpl	%esi,%ebx
	jb	fieldr3
	cmpl	%edi,%ebx
	jae	fieldr3
	movl	12(%ebx),%ebx
	pushl	%eax
	pushl	%edx
	calll	typep
	popl	%edx
	popl	%ebx
	cmpl	%esi,%eax
	je	fieldr4
	movl	12(%esp),%ecx
	orw	%cx,%cx
	jl	fieldr5
	movl	(%ebx),%ebp
	movl	4(%ebp),%edx
	cmpw	%dx,%cx
	jge	fieldr4
	movl	(%esp),%edx
fieldn:
	cmpw	$1,%dx
	je	fieldget
	cmpw	$2,%dx
	je	fieldset
	movl	$1,%eax
	movl	16(%esp),%ebx
	jmp	errwna
fieldget:
	movl	(%ebx),%ebp
	movl	8(%ebp,%ecx,4),%eax
	addl	$20,%esp
	ret	
fieldset:
	movl	4(%esp),%eax
	movl	(%ebx),%ebp
	movl	%eax,8(%ebp,%ecx,4)
	addl	$20,%esp
	ret	
fieldr1:
	movl	$5,%eax
	movl	zstrctacc,%ebx
	jmp	errwna
fieldr4:
	movl	%ebx,%eax
fieldr2:
	movl	16(%esp),%ebx
	jmp	errstc
fieldr3:
	movl	%ebx,%eax
	movl	16(%esp),%ebx
	jmp	errnaa
fieldr5:
	movl	%ecx,%eax
	movl	zstrctacc,%ebx
	jmp	erroob

	# FENTRY smpvect
	.align	4
smpvect:
	movl	bvect,%ebx
smpvect2:
	movl	(%ebx),%ebp
	cmpl	%ebp,bvect
	ja	lmac321
	cmpl	%ebp,bstrg
	ja	smpvect4
lmac321:
	cmpl	%esi,(%ebx)
	je	smpvect4
	pushl	%ebx
	pushl	%eax
	pushl	$smpvect3
	pushl	%eax
	pushl	%ebx
	movl	$2,%edx
	jmp	funcall
smpvect3:
	popl	%eax
	popl	%ebx
smpvect4:
	addl	$8,%ebx
	cmpl	%ebx,bstrg
	ja	smpvect2
	movl	%esi,%eax
	ret	

	# FENTRY smpstrg
	.align	4
smpstrg:
	movl	bstrg,%ebx
smpstrg2:
	movl	(%ebx),%ebp
	cmpl	%ebp,bstrg
	ja	lmac322
	cmpl	%ebp,%esi
	ja	smpstrg4
lmac322:
	cmpl	%esi,(%ebx)
	je	smpstrg4
	pushl	%ebx
	pushl	%eax
	pushl	$smpstrg3
	pushl	%eax
	pushl	%ebx
	movl	$2,%edx
	jmp	funcall
smpstrg3:
	popl	%eax
	popl	%ebx
smpstrg4:
	addl	$8,%ebx
	cmpl	%ebx,%esi
	ja	smpstrg2
	movl	%esi,%eax
	ret	
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
