	.file	"print.asm"
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
	.globl	zitsoft
	.globl	mstack
	.globl	maxchan
	.globl	ostream
	.globl	curoutch
	.globl	cpkgc
	.globl	tabch
	.globl	zsyscol
	.globl	dlink
	.globl	savea4
	.globl	savea1
	.globl	zquote
	.globl	zvector
	.globl	zstring000
bufout:
	.long	0
bufpn:
	.long	0
obase:
	.long	0
prmdp:
	.long	0
prcdp:
	.long	0
prmlp:
	.long	0
prclp:
	.long	0
prmln:
	.long	0
prcln:
	.long	0
prmpk:
	.long	0
prcpk:
	.long	0
pocour:
	.long	0
nbleft:
	.long	0
nbrig:
	.long	0
maxpocou:
	.long	0
iexpld:
	.long	0
lexpld:
	.long	0
pnmac552:
	.string	"eol"
	.even
pnmac553:
	.string	"flush"
	.even
pnmac554:
	.string	"pratom"
	.even
pnmac555:
	.string	"prin"
	.even
pnmac556:
	.string	"print"
	.even
pnmac557:
	.string	"prinflush"
	.even
pnmac558:
	.string	"terpri"
	.even
pnmac559:
	.string	"princh"
	.even
pnmac560:
	.string	"princn"
	.even
pnmac561:
	.string	"ptype"
	.even
pnmac562:
	.string	"printline"
	.even
pnmac563:
	.string	"printlevel"
	.even
pnmac564:
	.string	"printlength"
	.even
pnmac565:
	.string	"obase"
	.even
pnmac566:
	.string	"lmargin"
	.even
pnmac567:
	.string	"rmargin"
	.even
pnmac568:
	.string	"outpos"
	.even
pnmac569:
	.string	"outbuf"
	.even
pnmac570:
	.string	"explode"
	.even
pnmac571:
	.string	"explodech"
	.even
zstatpr:
	.long	0
pnmac572:
	.string	"print-for-read"
	.even
zstatpc:
	.long	0
pnmac573:
	.string	"print-case-flag"
	.even
zstatpk:
	.long	0
pnmac574:
	.string	"print-package-flag"
	.even
zudprs:
	.long	0
pnmac575:
	.string	"#<>"
	.even
zeol:
	.long	0
zllfflush:
	.long	0
zupratom:
	.long	0
	.globl	accusingle1
	.globl	accudouble1
	.globl	itstate
	.globl	itcount
	.globl	btbin
zprin:
	.long	0
zprint000:
	.long	0
zprinflush:
	.long	0
zterpri:
	.long	0
zprinch:
	.long	0
zprincod:
	.long	0
zexplode:
	.long	0
zexplodech:
	.long	0
zfptype:
	.long	0
zfobase:
	.long	0
zprline:
	.long	0
zprlevel:
	.long	0
zprlength:
	.long	0
zlmargin:
	.long	0
zrmargin:
	.long	0
zoutpos:
	.long	0
zoutbuf:
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
	.globl	itsoft
	.globl	errfsp
	.globl	errsym
	.globl	errnia
	.globl	errnla
	.globl	errnva
	.globl	erroob
	.globl	errvec
	.globl	errwna
	.globl	getsetn
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	gettype
	.globl	tystrg
	.globl	tynewln
	.globl	inisymb
	.globl	inicst
	.globl	fascii
	.globl	ffuncall
	.globl	sysprot
	.globl	findtag
	.globl	unbind3
	.globl	getfns
	.globl	list
	.globl	getnumi
	.globl	stringa1
	.globl	makestrg
	.globl	strgsymb
	.globl	ini_print
	.globl	outch
	.globl	flulin
	.globl	bufout
	.globl	pocour
	.globl	maxpocou
	.globl	bufpn
	.globl	probj
	.globl	probjt
	.globl	nbleft
	.globl	nbrig
	.globl	obase
	.globl	iexpld
	.globl	lexpld
	.globl	u_print
	.globl	outfl
	.globl	outf
	.globl	llrt_cvftoa
	.globl	ithard

	# FENTRY ini_print
	.align	4
ini_print:
	movl	%esi,iexpld
	movl	$10,obase
	movl	$100,prmdp
	movl	$2000,prmlp
	movl	$2000,prmln
	movl	$50,prmpk
	movl	$0,nbleft
	movl	$78,nbrig
	movl	nbrig,%ebp
	movl	%ebp,maxpocou
	movl	$256,%eax
	xorl	%ebx,%ebx
	calll	makestrg
	movl	%eax,bufpn
	movl	$3,%eax
	movl	$pnmac552,%ebx
	movl	$eol,%ecx
	movl	$zeol,%edx
	pushl	$1
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac553,%ebx
	movl	$llfflush,%ecx
	movl	$zllfflush,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac554,%ebx
	movl	$upratom,%ecx
	movl	$zupratom,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac555,%ebx
	movl	$prin,%ecx
	movl	$zprin,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac556,%ebx
	movl	$print000,%ecx
	movl	$zprint000,%edx
	pushl	$5
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac557,%ebx
	movl	$prinflush,%ecx
	movl	$zprinflush,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac558,%ebx
	movl	$terpri,%ecx
	movl	$zterpri,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac559,%ebx
	movl	$princh,%ecx
	movl	$zprinch,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac560,%ebx
	movl	$princod,%ecx
	movl	$zprincod,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac561,%ebx
	movl	$fptype,%ecx
	movl	$zfptype,%edx
	pushl	$5
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac562,%ebx
	movl	$prline,%ecx
	movl	$zprline,%edx
	pushl	$5
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac563,%ebx
	movl	$prlevel,%ecx
	movl	$zprlevel,%edx
	pushl	$5
	calll	inisymb
	movl	$11,%eax
	movl	$pnmac564,%ebx
	movl	$prlength,%ecx
	movl	$zprlength,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac565,%ebx
	movl	$fobase,%ecx
	movl	$zfobase,%edx
	pushl	$5
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac566,%ebx
	movl	$lmargin,%ecx
	movl	$zlmargin,%edx
	pushl	$5
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac567,%ebx
	movl	$rmargin,%ecx
	movl	$zrmargin,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac568,%ebx
	movl	$outpos,%ecx
	movl	$zoutpos,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac569,%ebx
	movl	$outbuf,%ecx
	movl	$zoutbuf,%edx
	pushl	$5
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac570,%ebx
	movl	$explode,%ecx
	movl	$zexplode,%edx
	pushl	$2
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac571,%ebx
	movl	$explodech,%ecx
	movl	$zexplodech,%edx
	pushl	$2
	calll	inisymb
	movl	zllsystem,%ebp
	movl	%ebp,cpkgc
	movl	$14,%eax
	movl	$pnmac572,%ebx
	movl	$zstatpr,%ecx
	calll	inicst
	movl	%esi,(%eax)
	movl	$15,%eax
	movl	$pnmac573,%ebx
	movl	$zstatpc,%ecx
	calll	inicst
	movl	%esi,(%eax)
	movl	$18,%eax
	movl	$pnmac574,%ebx
	movl	$zstatpk,%ecx
	calll	inicst
	movl	zt,%ebp
	movl	%ebp,(%eax)
	movl	%esi,cpkgc
	movl	$3,%eax
	movl	$pnmac575,%ebx
	movl	$zudprs,%ecx
	calll	inicst
	ret	
prpopj:
	ret	
prtrue:
	movl	zt,%eax
	ret	
u_print:
	calll	probj
	calll	fullin
	ret	
flulin:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	movl	zllfflush,%eax
	movl	%esi,%ebx
	calll	itsoft
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	ret	
fullin:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	movl	zeol,%eax
	movl	%esi,%ebx
	calll	itsoft
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	ret	

	# FENTRY eol
	.align	4
eol:
	calll	outlin
	movl	%esi,%eax
	ret	

	# FENTRY llfflush
	.align	4
llfflush:
	cmpl	%esi,iexpld
	jne	prtrue
	movl	pocour,%ebx
	orw	%bx,%bx
	je	prtrue
	movw	maxchan,%bp
	cmpw	%bp,ostream
	jl	fflush1
fflush0:
	movl	bufout,%eax
	pushl	%ebx
	movl	$0,pocour
	calll	tystrg
	popl	pocour
	jmp	fflush3
fflush1:
	movl	pocour,%eax
	movl	curoutch,%ebp
	movl	(%ebp),%ebp
	movl	12(%ebp),%ecx
	cmpw	$2,%cx
	je	fflush2
	pushl	%ebp
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	addl	$8,%ebp
	movl	%ebp,crwork
	popl	%ebp
	# Prepare a C function call with 3 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	crwork
	pushl	%eax
	pushl	ostream
	calll	outfl
	movl	%eax,crwork
	addl	$12,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ebp
	movl	%ebp,%ebx
	jmp	fflush3
fflush2:
	pushl	%ebp
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	addl	$8,%ebp
	movl	%ebp,crwork
	popl	%ebp
	# Prepare a C function call with 3 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	crwork
	pushl	%eax
	pushl	ostream
	calll	outfl
	movl	%eax,crwork
	addl	$12,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ebp
	movl	%ebp,%ebx
fflush3:
	calll	outli2
	movl	$0,pocour
	ret	
outlin:
	cmpl	%esi,iexpld
	jne	expls
	movw	maxchan,%bp
	cmpw	%bp,ostream
	jl	outli1
	movl	bufout,%eax
	movl	pocour,%ebx
	pushl	%ebx
	movl	$0,pocour
	calll	tystrg
	calll	tynewln
	popl	pocour
	jmp	outli2
outli1:
	movl	curoutch,%ebp
	movl	(%ebp),%ebp
	movl	12(%ebp),%ecx
	cmpw	$2,%cx
	je	outli11
	pushl	%ebp
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	addl	$8,%ebp
	movl	%ebp,crwork
	popl	%ebp
	# Prepare a C function call with 3 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	crwork
	pushl	pocour
	pushl	ostream
	calll	outfl
	movl	%eax,crwork
	addl	$12,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ebp
	movl	%ebp,%ebx
	jmp	outli2
outli11:
	pushl	%ebp
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	addl	$8,%ebp
	movl	%ebp,crwork
	popl	%ebp
	# Prepare a C function call with 3 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	crwork
	pushl	pocour
	pushl	ostream
	calll	outf
	movl	%eax,crwork
	addl	$12,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ebp
	movl	%ebp,%ebx
outli2:
	movl	pocour,%ebx
	movl	bufout,%eax
	jmp	outli4
outli3:
	movl	(%eax),%ebp
	movb	$32,8(%ebp,%ebx)
outli4:
	decw	%bx
	jge	outli3
	movl	nbleft,%ebp
	movl	%ebp,pocour
outlret:
	ret	
chklp:
	movw	nbrig,%bp
	cmpw	%bp,maxpocou
	jne	flulin
	cmpw	$1,prclp
	jne	chklp1
	movl	pocour,%eax
	subw	$3,%ax
	movl	$46,%ebx
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	movb	%bl,8(%ebp,%eax)
	incw	%ax
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	movb	%bl,8(%ebp,%eax)
	incw	%ax
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	movb	%bl,8(%ebp,%eax)
	jmp	probjend
chklp1:
	decw	prclp
	jmp	fullin
outch:
	cmpl	%esi,iexpld
	jne	explch
	pushl	%eax
	movl	pocour,%eax
	cmpw	maxpocou,%ax
	jl	outch1
	calll	chklp
	movl	pocour,%eax
outch1:
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	movb	%dl,8(%ebp,%eax)
	incw	pocour
	popl	%eax
	ret	
outsp:
	cmpl	%esi,iexpld
	jne	expls
	pushl	%eax
	movl	pocour,%eax
	cmpw	maxpocou,%ax
	jge	outsp1
outsp0:
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	movb	$32,8(%ebp,%eax)
	incw	pocour
	popl	%eax
	ret	
outsp1:
	movw	nbrig,%bp
	cmpw	%bp,maxpocou
	jne	outsp2
	calll	chklp
	popl	%eax
	ret	
outsp2:
	calll	chklp
	movl	pocour,%eax
	jmp	outsp0
outshrp:
	cmpl	%esi,iexpld
	jne	explsh
	pushl	%eax
	movl	pocour,%eax
	incw	%ax
	cmpw	maxpocou,%ax
	jl	outshrp1
	calll	chklp
	movl	pocour,%eax
	incw	%ax
outshrp1:
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	movb	%dl,8(%ebp,%eax)
	decw	%ax
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	movb	$35,8(%ebp,%eax)
	addw	$2,pocour
	popl	%eax
	ret	
outet:
	movl	prcln,%ebx
	orw	%bx,%bx
	jl	outet1
	cmpw	$1,%bx
	je	outddd
outet1:
	decw	prcln
	movl	$38,%edx
	jmp	outch
outddd:
	movl	$46,%edx
	calll	outch
	calll	outch
	calll	outch
	jmp	probjend
pratom:
	movl	prcln,%ebx
	orw	%bx,%bx
	jl	pratom1
	cmpw	$1,%bx
	je	outddd
	decw	prcln
pratom1:
	pushl	%eax
	calll	gettype
	cmpl	%esi,%eax
	jb	pratom2
	cmpl	%edi,%eax
	jae	pratom2
	movl	zprin,%ebx
	movl	%esi,%ecx
	calll	getfns
	cmpl	%esi,%eax
	je	pratom2
	cmpl	zprin,%eax
	je	pratom2
	movl	$1,%edx
	jmp	ffuncall
pratom2:
	popl	%eax
	jmp	upratom

	# FENTRY upratom
	.align	4
upratom:
	cmpl	%esi,%eax
	jb	lmac576
	cmpl	%edi,%eax
	jb	prsympk
lmac576:
	cmpl	%eax,bfloat
	ja	prfix
	orl	%eax,%eax
	js	prfloat
	cmpl	%eax,bstrg
	ja	lmac577
	cmpl	%esi,%eax
	jb	prstrg
lmac577:
	jmp	prvect
prsympk:
	cmpl	%esi,%eax
	je	pratnil
	movl	$0,prcpk
	movl	zstatpk,%ecx
	cmpl	%esi,(%ecx)
	je	prsymb
prsympk0:
	movl	12(%eax),%ecx
	cmpl	%esi,%ecx
	je	prsymb
prsympk1:
	pushl	%eax
	movl	12(%eax),%eax
	calll	prpkg
	popl	%eax
	jmp	prsymb
prpkg:
	pushl	prcpk
	movl	$prpkg0,%ecx
	calll	sysprot
	popl	%eax
	popl	prcpk
	jmp	*%ecx
prpkg0:
	movl	zstatpk,%edx
	cmpl	$0,(%edx)
	jne	prpkg1
	movl	zsyscol,%edx
	cmpl	(%edx),%eax
	jne	prpkg1
	movl	$58,%edx
	jmp	outch
prpkg1:
	incw	prcpk
	cmpw	$0,prmpk
	je	prpkg2
	movw	prmpk,%bp
	cmpw	%bp,prcpk
	jle	prpkg2
	jmp	outddd
prpkg2:
	cmpl	%esi,%eax
	jb	lmac578
	cmpl	%edi,%eax
	jb	prpkgsym
lmac578:
	movl	$58,%edx
	calll	outshrp
	calll	probj0
	movl	$58,%edx
	jmp	outch
prpkgsym:
	cmpl	%esi,12(%eax)
	jne	prsympk1
	movl	$58,%edx
	pushl	$prsymb
	jmp	outshrp
prsymb:
	movl	zstatpr,%ebx
	movl	(%ebx),%ebx
	cmpl	%esi,%ebx
	je	prat2
	calll	chksymb
	cmpl	%esi,%ebx
	je	prat2
	addw	$2,%bx
	cmpw	$0,prcpk
	je	prat0
	incw	%bx
prat0:
	addw	pocour,%bx
	cmpw	maxpocou,%bx
	jle	prat1
	calll	chklp
prat1:
	movl	$124,%edx
	calll	outch
	calll	strgsymb
	movl	%eax,savea1
	movl	(%eax),%ebp
	movl	4(%ebp),%ebx
	xorl	%ecx,%ecx
	jmp	prat12
prat10:
	movl	savea1,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%ecx),%edx
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%edx),%eax
	cmpw	$13,%ax
	jne	prat11
	calll	outch
prat11:
	calll	outch
	incw	%cx
prat12:
	cmpw	%bx,%cx
	jne	prat10
	movl	$124,%edx
	cmpw	$0,prcpk
	je	outch
	calll	outch
	movl	$58,%edx
	jmp	outch
prat2:
	calll	strgsymb
	movl	(%eax),%ebp
	movl	4(%ebp),%ecx
	movl	%ecx,%ebx
	cmpw	$0,prcpk
	je	prat21
	incw	%bx
prat21:
	addw	pocour,%bx
	cmpw	maxpocou,%bx
	jle	prat3
	calll	chklp
prat3:
	xorl	%ebx,%ebx
	movl	zstatpc,%edx
	movl	(%edx),%edx
	cmpl	%esi,%edx
	jne	prat8
	jmp	prathb
prat5:
	movl	(%eax),%ebp
	movzbl	8(%ebp,%ebx),%edx
	cmpw	$97,%dx
	jl	prat6
	cmpw	$122,%dx
	jg	prat6
	subl	$32,%edx
prat6:
	calll	outch
	incw	%bx
prat8:
	decw	%cx
	jge	prat5
	cmpw	$0,prcpk
	je	prpopj
	movl	$58,%edx
	jmp	outch
pratnil:
	movl	$40,%edx
	calll	outch
	movl	$41,%edx
	jmp	outch
chksymb:
	pushl	%eax
	calll	strgsymb
	movl	(%eax),%ebp
	movl	4(%ebp),%ebx
	orw	%bx,%bx
	je	chksymb9
	pushl	%ebx
	movl	%esi,%ecx
	jmp	chksymb3
chksymb0:
	movl	(%eax),%ebp
	movzbl	8(%ebp,%ebx),%edx
	cmpw	$43,%dx
	je	chksymb2
	cmpw	$45,%dx
	je	chksymb2
	cmpw	$101,%dx
	je	chksymb2
	cmpw	$69,%dx
	je	chksymb2
	cmpw	$48,%dx
	jl	chksymb1
	cmpw	$57,%dx
	jle	chksymb2
chksymb1:
	incw	%cx
chksymb2:
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%edx),%edx
	cmpw	$12,%dx
	jne	chksymb5
chksymb3:
	decw	%bx
	jge	chksymb0
	cmpl	%esi,%ecx
	je	chksymb4
	addl	$4,%esp
	movl	%esi,%ebx
	popl	%eax
	ret	
chksymb4:
	popl	%ebx
	popl	%eax
	ret	
chksymb5:
	movl	%ebx,%ecx
	popl	%ebx
	jmp	chksymb7
chksymb6:
	movl	(%eax),%ebp
	movzbl	8(%ebp,%ecx),%edx
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%edx),%edx
chksymb7:
	cmpw	$13,%dx
	jne	chksymb8
	incw	%bx
chksymb8:
	decw	%cx
	jge	chksymb6
chksymb9:
	popl	%eax
	ret	
chkstrg:
	movl	(%eax),%ebp
	movl	4(%ebp),%ecx
	movl	%ecx,%ebx
	orw	%cx,%cx
	je	chkstrg3
	jmp	chkstrg2
chkstrg1:
	movl	(%eax),%ebp
	movzbl	8(%ebp,%ecx),%edx
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%edx),%edx
	cmpw	$11,%dx
	jne	chkstrg2
	incw	%bx
chkstrg2:
	decw	%cx
	jge	chkstrg1
chkstrg3:
	ret	
prtypvec:
	movl	zvector,%ebp
	cmpl	%ebp,4(%eax)
	je	prpopj
	movl	zstring000,%ebp
	cmpl	%ebp,4(%eax)
	je	prpopj
	pushl	%eax
	movl	4(%eax),%eax
	calll	prpkg
	popl	%eax
	ret	
prstrg:
	calll	prtypvec
	movl	zstatpr,%ebx
	movl	(%ebx),%ebx
	cmpl	%esi,%ebx
	jne	prstr5
	movl	(%eax),%ebp
	movl	4(%ebp),%ecx
	movl	%ecx,%ebx
	addw	pocour,%bx
	cmpw	maxpocou,%bx
	jle	prathb
	cmpl	%esi,iexpld
	jne	prathb
	calll	chklp
prathb:
	xorl	%ebx,%ebx
	jmp	prathb4
prathb2:
	movl	(%eax),%ebp
	movzbl	8(%ebp,%ebx),%edx
	calll	outch
	incw	%bx
prathb4:
	decw	%cx
	jge	prathb2
	cmpw	$0,prcpk
	je	prpopj
	movl	$58,%edx
	jmp	outch
prstr5:
	calll	chkstrg
	addw	$2,%bx
	addw	pocour,%bx
	addw	$2,%bx
	cmpw	maxpocou,%bx
	jle	prstr6
	cmpl	%esi,iexpld
	jne	prstrg
	calll	chklp
prstr6:
	movl	$34,%edx
	calll	outch
	movl	%eax,savea1
	movl	(%eax),%ebp
	movl	4(%ebp),%eax
	xorl	%ecx,%ecx
prstr60:
	cmpw	%ax,%cx
	je	prstr63
	movl	savea1,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%ecx),%edx
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%edx),%ebx
	cmpw	$11,%bx
	jne	prstr61
	calll	outch
prstr61:
	calll	outch
	incw	%cx
	jmp	prstr60
prstr63:
	movl	$34,%edx
	jmp	outch
prvect:
	movl	prcdp,%ebx
	orw	%bx,%bx
	jle	prvect11
	cmpw	$1,%bx
	jne	prvect1
	jmp	outet
prvect1:
	decw	prcdp
prvect11:
	calll	prtypvec
prvectv:
	movl	$91,%edx
	calll	outshrp
	calll	prvectin
	movl	$93,%edx
	jmp	outch
prvectin:
	movl	(%eax),%ebp
	movl	4(%ebp),%ebx
	xorl	%ecx,%ecx
	jmp	prvect6
prvect2:
	pushl	%eax
	pushl	%ecx
	pushl	%ebx
	movl	(%eax),%ebp
	movl	8(%ebp,%ecx,4),%eax
	calll	probj0
	movl	(%esp),%edx
	orw	%dx,%dx
	je	prvect4
	calll	outsp
prvect4:
	popl	%ebx
	popl	%ecx
	incw	%cx
	popl	%eax
prvect6:
	decw	%bx
	jge	prvect2
prvect9:
	cmpw	$0,prcdp
	jle	prvect91
	incw	prcdp
prvect91:
	ret	
prfloat:
	pushl	%eax
	movl	bufpn,%ecx
	pushl	%ebp
	movl	(%ecx),%ebp
	addl	$8,%ebp
	movl	%ebp,crwork
	popl	%ebp
	# Prepare a C function call with 1 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	crwork
	shll	$1,%eax
	movl	%eax,accusingle1
	flds	accusingle1
	fstpl	accudouble1
	pushl	accudouble1+4
	pushl	accudouble1
	calll	llrt_cvftoa
	movl	%eax,crwork
	addl	$12,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ebx
	jmp	prnum0
prfix:
	pushl	%eax
	movl	bufpn,%ecx
	xorl	%ebx,%ebx
	pushl	%edx
	calll	getnumi
	popl	%edx
prnum0:
	movl	%ebx,%ecx
	addw	pocour,%cx
	cmpw	maxpocou,%cx
	jle	prnum1
	calll	chklp
prnum1:
	xorl	%eax,%eax
	jmp	prnum4
prnum3:
	movl	bufpn,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%eax),%edx
	calll	outch
	incw	%ax
prnum4:
	decw	%bx
	jge	prnum3
	popl	%eax
	ret	
probj:
	pushl	%eax
	pushl	$probje
	pushl	zprin
	pushl	dlink
	pushl	$unbind3
	movl	%esp,dlink
	jmp	probj01
probje:
	popl	%eax
	ret	
probjend:
	movl	zprin,%ebx
	jmp	findtag
probj01:
	movl	prmlp,%ebp
	movl	%ebp,prclp
	movl	prmln,%ebx
	orw	%bx,%bx
	je	probj02
	incw	%bx
probj02:
	movl	%ebx,prcln
	movl	prmdp,%ebx
	orw	%bx,%bx
	je	probj03
	incw	%bx
probj03:
	movl	%ebx,prcdp
probj0:
	cmpw	$0,itcount
	je	l__1
	cmpw	$0,itstate
	je	l__1
	calll	ithard
l__1:
	cmpl	%eax,bfloat
	ja	pratom
	orl	%eax,%eax
	js	pratom
	cmpl	%eax,bfloat
	ja	lmac579
	cmpl	%eax,econs
	ja	probj0t
lmac579:
	movl	zudprs,%eax
	jmp	prsymb
probj0t:
	cmpl	%edi,%eax
	jl	pratom
	movl	prcdp,%ebx
	orw	%bx,%bx
	jle	probj11
	cmpw	$1,%bx
	jne	probj1
	jmp	outet
probj1:
	decw	prcdp
probj11:
	movl	%eax,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btl	%ebp,(%eax)
	popl	%eax
	jnc	probj3
	pushl	%eax
	calll	gettype
	cmpl	%esi,%eax
	jb	probj12
	cmpl	%edi,%eax
	jae	probj12
	movl	zprin,%ebx
	movl	%esi,%ecx
	calll	getfns
	cmpl	zprin,%eax
	je	probj12
	cmpl	%esi,%eax
	je	probj12
	movl	$1,%edx
	jmp	ffuncall
probj12:
	popl	%eax
probj2:
	movl	$40,%edx
	calll	outshrp
	jmp	probj7
probj3:
	movl	(%eax),%ebx
	cmpl	zquote,%ebx
	jne	probj5
	movl	4(%eax),%ebx
	cmpl	%edi,%ebx
	jl	probj5
	cmpl	%esi,4(%ebx)
	jne	probj5
	movl	$39,%edx
	calll	outch
	movl	(%ebx),%eax
	cmpw	$0,prcdp
	jle	probj4
	incw	prcdp
probj4:
	jmp	probj0
probj5:
	movl	$40,%edx
	calll	outch
	jmp	probj7
probjd:
	movl	$46,%edx
	jmp	outch
probj6:
	calll	outsp
probj7:
probj8:
	cmpl	%esp,mstack
	ja	errfsp
	pushl	4(%eax)
	movl	(%eax),%eax
	calll	probj0
	popl	%eax
	cmpl	%esi,%eax
	je	probj9
	cmpl	%edi,%eax
	jl	probjk
	movl	%eax,%ebp
	subl	%edi,%ebp
	shrl	$3,%ebp
	pushl	%eax
	movl	btbin,%eax
	btl	%ebp,(%eax)
	popl	%eax
	jnc	probj6
probjk:
	calll	outsp
	calll	probjd
	calll	outsp
	calll	probj0
probj9:
	movl	$41,%edx
	cmpw	$0,prcdp
	jle	probj91
	incw	prcdp
probj91:
	jmp	outch
probjt:
	pushl	$chklp
	jmp	probj

	# FENTRY prin
	.align	4
prin:
	calll	prinn
	ret	
prinn:
	orw	%dx,%dx
	je	prinnr
	incw	%dx
	pushl	%edx
	jmp	prinn1
prinn0:
	movl	zstatpr,%eax
	movl	(%eax),%eax
	cmpl	%esi,%eax
	je	prinn1
	pushl	%edx
	pushl	$prinn2
	pushl	zprin
	pushl	dlink
	pushl	$unbind3
	movl	%esp,dlink
	jmp	outsp
prinn2:
	popl	%edx
prinn1:
	movl	(%esp,%edx,4),%eax
	pushl	%edx
	calll	probj
	popl	%edx
	decw	%dx
	cmpw	$1,%dx
	jg	prinn0
	movl	(%esp,%edx,4),%ecx
	popl	%edx
	leal	(%esp,%edx,4),%esp
	jmp	*%ecx
prinnr:
	movl	%esi,%eax
	ret	

	# FENTRY print000
	.align	4
print000:
	calll	prinn
	jmp	fullin

	# FENTRY prinflush
	.align	4
prinflush:
	calll	prinn
	jmp	flulin

	# FENTRY terpri
	.align	4
terpri:
	movl	zterpri,%ebx
	cmpw	$1,%dx
	je	terpr2
	movl	$1,%eax
	orw	%dx,%dx
	je	terpr6
	jmp	errwna
terpr2:
	popl	%eax
	cmpl	%eax,bfloat
	ja	terpr6
	jmp	errnia
terpr5:
	calll	fullin
terpr6:
	decw	%ax
	jge	terpr5
	jmp	prtrue

	# FENTRY princh
	.align	4
princh:
	movl	$1,%ebx
	cmpw	$1,%dx
	je	princh1
	cmpw	$2,%dx
	je	princh2
	movl	$2,%eax
	movl	zprinch,%ebx
	jmp	errwna
princh2:
	popl	%ebx
princh1:
	cmpl	%ebx,bfloat
	ja	princh3
	movl	%ebx,%eax
	movl	zprinch,%ebx
	jmp	errnia
princh3:
	movl	(%esp),%eax
	movl	zprinch,%ebp
	movl	%ebp,savea4
	calll	stringa1
	movl	(%eax),%ebp
	movzbl	8(%ebp),%edx
	calll	princr1
	popl	%eax
	ret	
princr1:
	movl	prmlp,%ebp
	movl	%ebp,prclp
	pushl	zprin
	pushl	dlink
	pushl	$unbind3
	movl	%esp,dlink
	jmp	princr3
princr2:
	pushl	%ebx
	calll	outch
	popl	%ebx
princr3:
	decw	%bx
	jge	princr2
	ret	

	# FENTRY princod
	.align	4
princod:
	movl	$1,%ebx
	cmpw	$1,%dx
	je	princd1
	cmpw	$2,%dx
	je	princd0
	movl	$2,%eax
	movl	zprincod,%ebx
	jmp	errwna
princd0:
	popl	%ebx
	cmpl	%ebx,bfloat
	ja	princd1
	movl	%ebx,%eax
	movl	zprincod,%ebx
	jmp	errnia
princd1:
	movl	(%esp),%edx
	cmpl	%edx,bfloat
	ja	princd2
	movl	%edx,%eax
	movl	zprincod,%ebx
	jmp	errnia
princd2:
	calll	princr1
	popl	%eax
	ret	

	# FENTRY explode
	.align	4
explode:
	pushl	lexpld
	pushl	iexpld
	movl	$explode1,%ecx
	calll	sysprot
	popl	%eax
	popl	iexpld
	popl	lexpld
	jmp	*%ecx
explode1:
	movl	%esi,%ebx
	cmpl	%edi,fcons
	jb	l__2
l1__2:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	pushl	%ebx
	movl	%ebx,lexpld
	movl	zt,%ebp
	movl	%ebp,iexpld
	calll	probj
	popl	%eax
	movl	4(%eax),%eax
	ret	

	# FENTRY explodech
	.align	4
explodech:
	calll	explode
	movl	%eax,%ebx
	pushl	%eax
	pushl	%eax
expldech1:
	cmpl	%edi,%ebx
	jl	expldech2
	movl	(%ebx),%eax
	movl	%ebx,(%esp)
	calll	fascii
	movl	(%esp),%ebx
	movl	%eax,(%ebx)
	movl	4(%ebx),%ebx
	jmp	expldech1
expldech2:
	addl	$4,%esp
	popl	%eax
	ret	
expls:
	pushl	%edx
	movl	$32,%edx
	jmp	explch1
explsh:
	pushl	%edx
	movl	$35,%edx
	calll	explch
	movl	(%esp),%edx
	jmp	explch1
explch:
	pushl	%edx
explch1:
	pushl	%ebx
	cmpl	%edi,fcons
	jb	l__3
l1__3:
	movl	fcons,%ebp
	movl	%edx,(%ebp)
	movl	%esi,%edx
	xchgl	%edx,4(%ebp)
	xchgl	%edx,fcons
	movl	lexpld,%ebx
	movl	%edx,4(%ebx)
	movl	%edx,lexpld
	popl	%ebx
	popl	%edx
	ret	

	# FENTRY fptype
	.align	4
fptype:
	movl	zfptype,%ebx
	cmpw	$1,%dx
	je	ptyp1
	cmpw	$2,%dx
	je	ptyp2
	movl	$2,%eax
	jmp	errwna
ptyp1:
	popl	%eax
	cmpl	%esi,%eax
	jb	ptyper1
	cmpl	%edi,%eax
	jae	ptyper1
	movzwl	26(%eax),%eax
	ret	
ptyp2:
	popl	%eax
	popl	%ecx
	cmpl	%esi,%ecx
	jb	ptyper1
	cmpl	%edi,%ecx
	jae	ptyper1
	movw	%ax,26(%ecx)
	ret	
ptyper1:
	jmp	errsym
ptyper2:
	movl	%ecx,%eax
	jmp	errnia

	# FENTRY fobase
	.align	4
fobase:
	movl	zfobase,%ebx
	movl	obase,%ecx
	pushl	$2
	pushl	$36
	calll	getsetn
	movl	%eax,obase
	ret	

	# FENTRY prline
	.align	4
prline:
	movl	zprline,%ebx
	movl	prmlp,%ecx
	pushl	$0
	pushl	$32767
	calll	getsetn
	movl	%eax,prmlp
	ret	

	# FENTRY prlevel
	.align	4
prlevel:
	movl	zprlevel,%ebx
	movl	prmdp,%ecx
	pushl	$0
	pushl	$32767
	calll	getsetn
	movl	%eax,prmdp
	ret	

	# FENTRY prlength
	.align	4
prlength:
	movl	zprlength,%ebx
	movl	prmln,%ecx
	pushl	$0
	pushl	$32767
	calll	getsetn
	movl	%eax,prmln
	ret	
tespos:
	cmpl	%eax,bfloat
	jbe	poser2
	orw	%ax,%ax
	jl	poser
	cmpw	maxpocou,%ax
	jle	prpopj
poser:
	movl	%edx,%ebx
	jmp	erroob
poser2:
	movl	%edx,%ebx
	jmp	errnia

	# FENTRY lmargin
	.align	4
lmargin:
	movl	zlmargin,%ebx
	movl	nbleft,%ecx
	pushl	$0
	pushl	nbrig
	calll	getsetn
	movl	%eax,nbleft
	ret	

	# FENTRY rmargin
	.align	4
rmargin:
	pushl	$1
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%ebx
	incw	%bx
	pushl	%ebx
	movl	zrmargin,%ebx
	movl	nbrig,%ecx
	calll	getsetn
	movl	%eax,nbrig
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%ebx
	cmpw	%bx,%ax
	jle	rmargin1
	movl	%ebx,%eax
rmargin1:
	movl	%eax,maxpocou
	movl	nbrig,%eax
rmargin2:
	ret	

	# FENTRY outpos
	.align	4
outpos:
	movl	zoutpos,%ebx
	movl	pocour,%ecx
	pushl	$0
	pushl	maxpocou
	calll	getsetn
	movl	%eax,pocour
	ret	

	# FENTRY outbuf
	.align	4
outbuf:
	orw	%dx,%dx
	je	outbu1
	movl	%esi,%ebx
	cmpw	$1,%dx
	je	outbu5
	cmpw	$2,%dx
	je	outbu4
	movl	$1,%eax
	movl	zoutbuf,%ebx
	jmp	errwna
outbu1:
	movl	bufout,%eax
	ret	
outbu4:
	popl	%ebx
outbu5:
	popl	%eax
	movl	zoutbuf,%edx
	calll	tespos
	cmpl	%esi,%ebx
	je	outbu6
	cmpl	%ebx,bfloat
	jbe	outbuer
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	movb	%bl,8(%ebp,%eax)
outbu6:
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%eax),%eax
	ret	
outbuer:
	movl	%ebx,%eax
	movl	%edx,%ebx
	jmp	errnia
l__3:
	calll	gccons
	jmp	l1__3
l__2:
	calll	gccons
	jmp	l1__2
