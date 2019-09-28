	.file	"string.asm"
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
	.globl	eheap
	.globl	cheap
	.globl	fvect
	.globl	fstrg
	.globl	zllsystem
	.globl	ztyrdspl
	.globl	cpkgc
	.globl	bufpn
	.globl	obase
	.globl	savea1
	.globl	savea2
	.globl	savea3
	.globl	savea4
ocheap:
	.long	0
bufstrg:
	.long	0
pnmac681:
	.string	"string"
	.even
pnmac682:
	.string	"plength"
	.even
pnmac683:
	.string	"slength"
	.even
pnmac684:
	.string	"slen"
	.even
pnmac685:
	.string	"sref"
	.even
pnmac686:
	.string	"sset"
	.even
pnmac687:
	.string	"typestring"
	.even
pnmac688:
	.string	"exchstring"
	.even
pnmac689:
	.string	"catenate"
	.even
pnmac690:
	.string	"eqstring"
	.even
pnmac691:
	.string	"substring-equal"
	.even
pnmac692:
	.string	"substring"
	.even
pnmac693:
	.string	"makestring"
	.even
pnmac694:
	.string	"duplstring"
	.even
pnmac695:
	.string	"bltstring"
	.even
pnmac696:
	.string	"fillstring"
	.even
pnmac697:
	.string	"scanstring"
	.even
pnmac698:
	.string	"spanstring"
	.even
pnmac699:
	.string	"chrpos"
	.even
pnmac700:
	.string	"chrnth"
	.even
pnmac701:
	.string	"chrset"
	.even
pnmac702:
	.string	"index"
	.even
pnmac703:
	.string	"hash"
	.even
pnmac704:
	.string	"symbol"
	.even
pnmac705:
	.string	"pname"
	.even
pnmac706:
	.string	"concat"
	.even
pnmac707:
	.string	"gensym"
	.even
pnmac708:
	.string	"alphalessp"
	.even
pnmac709:
	.string	"bltscreen"
	.even
pnmac710:
	.string	"typevector"
	.even
pnmac711:
	.string	"exchvector"
	.even
pnmac712:
	.string	"makevector"
	.even
pnmac713:
	.string	"vlength"
	.even
pnmac714:
	.string	"eqvector"
	.even
pnmac715:
	.string	"vref"
	.even
pnmac716:
	.string	"vset"
	.even
pnmac717:
	.string	"bltvector"
	.even
pnmac718:
	.string	"vector"
	.even
pnmac719:
	.string	"fillvector"
	.even
zgenstrg:
	.long	0
pnmac720:
	.string	"gensym-string"
	.even
zgenscpt:
	.long	0
pnmac721:
	.string	"gensym-counter"
	.even
zstring000:
	.long	0
	.globl	accusingle1
	.globl	accudouble1
zplength:
	.long	0
zslength:
	.long	0
zslen:
	.long	0
zcaten:
	.long	0
zsubsequal:
	.long	0
zeqstring:
	.long	0
zsubstring:
	.long	0
zmakestrg:
	.long	0
zduplstrg:
	.long	0
zbltstrg:
	.long	0
zfillstrg:
	.long	0
zscanstrg:
	.long	0
zspanstrg:
	.long	0
zchrpos:
	.long	0
zsref:
	.long	0
zchrnth:
	.long	0
zsset:
	.long	0
zchrset:
	.long	0
ztypestrg:
	.long	0
zexchstrg:
	.long	0
zffindex:
	.long	0
zalphales:
	.long	0
zffsymbol:
	.long	0
zconcat:
	.long	0
zhash:
	.long	0
zfpnam:
	.long	0
zgensym:
	.long	0
wd:
	.long	0
ws:
	.long	0
dlx:
	.long	0
dly:
	.long	0
oldid:
	.long	0
oldx:
	.long	0
llid:
	.long	0
llis:
	.long	0
xr:
	.long	0
yr:
	.long	0
ys:
	.long	0
zbltscrn:
	.long	0
ztypevect:
	.long	0
zmakevect:
	.long	0
zvlength:
	.long	0
zeqvector:
	.long	0
zvref:
	.long	0
zvset:
	.long	0
zbltvect:
	.long	0
zvector:
	.long	0
zexchvect:
	.long	0
zfillvect:
	.long	0
	.globl	bfloat
	.globl	cfloat
	.globl	ffloat
	.globl	bvect
	.globl	cvect
	.globl	bstrg
	.globl	cstrg
	.globl	csymb
	.globl	fsymb
	.globl	ccons
	.globl	econs
	.globl	bheap
	.globl	bnumb
	.globl	cnumb
	.globl	bstack
	.globl	estack
	.globl	mstack
	.globl	crwork
	.text
	.align	4
	.globl	errfs
	.globl	errwna
	.globl	errnia
	.globl	errnaa
	.globl	errsym
	.globl	errvec
	.globl	erroob
	.globl	errfh
	.globl	errnsa
	.globl	errstl
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	gcstrg
	.globl	gcvect
	.globl	hgc
	.globl	tyo
	.globl	tycursor
	.globl	inisymb
	.globl	inicst
	.globl	trysymp
	.globl	trysympk
	.globl	hashint
	.globl	ffuncall
	.globl	nreverse
	.globl	equal
	.globl	ini_str
	.globl	zstring000
	.globl	zffsymbol
	.globl	zvector
	.globl	ffsymbol
	.globl	strgallc
	.globl	getnumi
	.globl	strgsymb
	.globl	stringa1
	.globl	stringa2
	.globl	eqstrgi
	.globl	makestrg
	.globl	makevect
	.globl	eqvectri
	.globl	rdpscrn
	.globl	ffindex
	.globl	bufstrg
	.globl	llrt_cvftoa

	# FENTRY ini_str
	.align	4
ini_str:
	movl	$6,%eax
	movl	$pnmac681,%ebx
	movl	$string000,%ecx
	movl	$zstring000,%edx
	pushl	$2
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac682,%ebx
	movl	$plength,%ecx
	movl	$zplength,%edx
	pushl	$2
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac683,%ebx
	movl	$slength,%ecx
	movl	$zslength,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac684,%ebx
	movl	$slen,%ecx
	movl	$zslen,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac685,%ebx
	movl	$sref,%ecx
	movl	$zsref,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac686,%ebx
	movl	$sset,%ecx
	movl	$zsset,%edx
	pushl	$4
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac687,%ebx
	movl	$typestrg,%ecx
	movl	$ztypestrg,%edx
	pushl	$5
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac688,%ebx
	movl	$exchstrg,%ecx
	movl	$zexchstrg,%edx
	pushl	$3
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac689,%ebx
	movl	$caten,%ecx
	movl	$zcaten,%edx
	pushl	$5
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac690,%ebx
	movl	$eqstring,%ecx
	movl	$zeqstring,%edx
	pushl	$3
	calll	inisymb
	movl	$15,%eax
	movl	$pnmac691,%ebx
	movl	$subsequal,%ecx
	movl	$zsubsequal,%edx
	pushl	$5
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac692,%ebx
	movl	$substring,%ecx
	movl	$zsubstring,%edx
	pushl	$5
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac693,%ebx
	movl	$makestrg,%ecx
	movl	$zmakestrg,%edx
	pushl	$3
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac694,%ebx
	movl	$duplstrg,%ecx
	movl	$zduplstrg,%edx
	pushl	$3
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac695,%ebx
	movl	$bltstrg,%ecx
	movl	$zbltstrg,%edx
	pushl	$5
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac696,%ebx
	movl	$fillstrg,%ecx
	movl	$zfillstrg,%edx
	pushl	$5
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac697,%ebx
	movl	$scanstrg,%ecx
	movl	$zscanstrg,%edx
	pushl	$5
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac698,%ebx
	movl	$spanstrg,%ecx
	movl	$zspanstrg,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac699,%ebx
	movl	$chrpos,%ecx
	movl	$zchrpos,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac700,%ebx
	movl	$chrnth,%ecx
	movl	$zchrnth,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac701,%ebx
	movl	$chrset,%ecx
	movl	$zchrset,%edx
	pushl	$4
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac702,%ebx
	movl	$ffindex,%ecx
	movl	$zffindex,%edx
	pushl	$5
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac703,%ebx
	movl	$hash,%ecx
	movl	$zhash,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac704,%ebx
	movl	$ffsymbol,%ecx
	movl	$zffsymbol,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac705,%ebx
	movl	$fpnam,%ecx
	movl	$zfpnam,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac706,%ebx
	movl	$concat,%ecx
	movl	$zconcat,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac707,%ebx
	movl	$gensym,%ecx
	movl	$zgensym,%edx
	pushl	$1
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac708,%ebx
	movl	$alphales,%ecx
	movl	$zalphales,%edx
	pushl	$3
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac709,%ebx
	movl	$bltscrn,%ecx
	movl	$zbltscrn,%edx
	pushl	$5
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac710,%ebx
	movl	$typevect,%ecx
	movl	$ztypevect,%edx
	pushl	$5
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac711,%ebx
	movl	$exchvect,%ecx
	movl	$zexchvect,%edx
	pushl	$3
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac712,%ebx
	movl	$makevect,%ecx
	movl	$zmakevect,%edx
	pushl	$3
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac713,%ebx
	movl	$vlength,%ecx
	movl	$zvlength,%edx
	pushl	$2
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac714,%ebx
	movl	$eqvector,%ecx
	movl	$zeqvector,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac715,%ebx
	movl	$vref,%ecx
	movl	$zvref,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac716,%ebx
	movl	$vset,%ecx
	movl	$zvset,%edx
	pushl	$4
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac717,%ebx
	movl	$bltvect,%ecx
	movl	$zbltvect,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac718,%ebx
	movl	$vector,%ecx
	movl	$zvector,%edx
	pushl	$5
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac719,%ebx
	movl	$fillvect,%ecx
	movl	$zfillvect,%edx
	pushl	$5
	calll	inisymb
	movl	$13,%eax
	movl	$pnmac720,%ebx
	movl	$zgenstrg,%ecx
	calll	inicst
	movl	zllsystem,%ebp
	movl	%ebp,12(%eax)
	pushl	%eax
	movl	$1,%eax
	movl	$103,%ebx
	calll	makestrg
	popl	%ecx
	movl	%eax,(%ecx)
	movl	$14,%eax
	movl	$pnmac721,%ebx
	movl	$zgenscpt,%ecx
	calll	inicst
	movl	zllsystem,%ebp
	movl	%ebp,12(%eax)
	movl	$100,(%eax)
	movl	$1024,%eax
	xorl	%ebx,%ebx
	calll	makestrg
	movl	%eax,bufstrg
	ret	
strgallc:
	orw	%bx,%bx
	jge	strgall0
	xorl	%ebx,%ebx
strgall0:
	movl	fstrg,%eax
	cmpl	%esi,%eax
	je	strgall3
	movl	cheap,%ebp
	movl	%ebp,ocheap
	movl	cheap,%ebp
	leal	10(%ebp,%ebx),%ebp
	testw	$1,%bp
	jz	l__1
	incl	%ebp
l__1:
	movl	%ebp,cheap
	movl	cheap,%ebp
	cmpl	%ebp,eheap
	jb	strgall4
strgall2:
	movl	(%eax),%ebp
	movl	%ebp,fstrg
	movl	ocheap,%ebp
	movl	%ebp,(%eax)
	movl	ocheap,%ebp
	movl	%ebx,4(%ebp)
	movl	ocheap,%ebp
	movl	%eax,(%ebp)
	movl	(%eax),%ebp
	movb	$0,8(%ebp,%ebx)
	movl	zstring000,%ebp
	movl	%ebp,4(%eax)
	ret	
strgall3:
	calll	gcstrg
	jmp	strgallc
strgall4:
	movl	%esi,%eax
	movl	ocheap,%ebp
	movl	%ebp,cheap
	calll	hgc
	movl	fstrg,%eax
	movl	cheap,%ebp
	movl	%ebp,ocheap
	movl	cheap,%ebp
	leal	10(%ebp,%ebx),%ebp
	testw	$1,%bp
	jz	l__2
	incl	%ebp
l__2:
	movl	%ebp,cheap
	movl	eheap,%ebp
	cmpl	%ebp,cheap
	jb	strgall2
	movl	ocheap,%ebp
	movl	%ebp,cheap
	movl	%esi,%eax
	jmp	errfh
getnumi:
	cmpw	$0x8000,%ax
	je	getmin
	orw	%ax,%ax
	jge	getpos
	movl	$45,%edx
	calll	getnumch
	negw	%ax
getpos:
	movl	%eax,%edx
	cmpl	$0,obase
	jz	l9__3
	pushl	%eax
	movl	%edx,%eax
	cwtd
	idivw	obase
	movzwl	%dx,%edx
	popl	%eax
l9__3:
	addw	$48,%dx
	cmpw	$57,%dx
	jle	getpos2
	addw	$7,%dx
getpos2:
	cmpl	$0,obase
	jz	l9__4
	pushl	%edx
	cwtd
	idivw	obase
	movzwl	%ax,%eax
	popl	%edx
l9__4:
	orw	%ax,%ax
	je	getnumch
	pushl	%edx
	calll	getpos
	popl	%edx
	jmp	getnumch
getmin:
	movl	$35,%edx
	calll	getnumch
	movl	$36,%edx
	calll	getnumch
	movl	$56,%edx
	calll	getnumch
	movl	$48,%edx
	calll	getnumch
	calll	getnumch
getnumch:
	movl	(%ecx),%ebp
	movb	%dl,8(%ebp,%ebx)
	incw	%bx
	ret	
badstr2:
	movl	%ebx,%eax
badstr1:
	movl	savea4,%ebx
	jmp	errnsa
badvec2:
	movl	%ebx,%eax
badvec1:
	movl	savea4,%ebx
	jmp	errvec
badnbar5:
	movl	$5,%eax
	jmp	badnba31
badnbar3:
	movl	$3,%eax
badnba31:
	movl	savea4,%ebx
	jmp	errwna
badnbar4:
	movl	$4,%eax
	jmp	badnba31
badoob1:
	movl	savea4,%ebx
	jmp	erroob
badfix2:
	movl	%ebx,%eax
badfix1:
	movl	savea4,%ebx
	jmp	errnia
badfix3:
	movl	%ecx,%eax
	jmp	badfix1
badfix4:
	movl	%edx,%eax
	jmp	badfix1
badind2:
	movl	%ebx,%eax
badind1:
	movl	savea4,%ebx
	jmp	erroob
badind3:
	movl	%ecx,%eax
	jmp	badind1
badind4:
	movl	%edx,%eax
	jmp	badind1
mina1a2:
	cmpw	%ax,%bx
	jg	mina1a2x
	ret	
mina1a2x:
	movl	%eax,%ebx
	ret	
mina1a3:
	cmpw	%ax,%cx
	jg	mina1a3x
	ret	
mina1a3x:
	movl	%eax,%ecx
	ret	
mina1a4:
	cmpw	%ax,%dx
	jg	mina1a4x
	ret	
mina1a4x:
	movl	%eax,%edx
	ret	
mina3a1:
	cmpw	%cx,%ax
	jg	mina3a1x
	ret	
mina3a1x:
	movl	%ecx,%eax
	ret	
mina3a4:
	cmpw	%cx,%dx
	jg	mina3a4x
	ret	
mina3a4x:
	movl	%ecx,%edx
	ret	
mina4a1:
	cmpw	%dx,%ax
	jg	mina4a1x
	ret	
mina4a1x:
	movl	%edx,%eax
	ret	
mina4a3:
	cmpw	%dx,%cx
	jg	mina4a3x
	ret	
mina4a3x:
	movl	%edx,%ecx
	ret	
strfalse:
	movl	%esi,%eax
	ret	

	# FENTRY string000
	.align	4
string000:
	cmpl	%eax,bstrg
	ja	lmac722
	cmpl	%esi,%eax
	jb	stringr
lmac722:
	cmpl	%esi,%eax
	jb	stringc
	cmpl	%edi,%eax
	jae	stringc
	movl	20(%eax),%ebx
	cmpl	%ebx,bstrg
	ja	lmac723
	cmpl	%esi,%ebx
	jb	stringr2
lmac723:
	movl	28(%eax),%ebx
	cmpl	%ebx,bstrg
	ja	lmac724
	cmpl	%esi,%ebx
	jb	stringr2
lmac724:
	movl	20(%ebx),%ebx
stringr2:
	movl	%ebx,%eax
stringr:
	ret	
stringc:
	movl	zstring000,%ebp
	movl	%ebp,savea4
	jmp	strgrest
stringa1:
	cmpl	%eax,bstrg
	ja	strgrest
	cmpl	%esi,%eax
	jae	strgrest
	ret	
strgsymb:
	pushl	%ebx
	movl	20(%eax),%ebx
	cmpl	%ebx,bstrg
	ja	lmac725
	cmpl	%esi,%ebx
	jb	strgsyre
lmac725:
	movl	28(%eax),%ebx
	cmpl	%ebx,bstrg
	ja	lmac726
	cmpl	%esi,%ebx
	jb	strgsyre
lmac726:
	movl	20(%ebx),%ebx
strgsyre:
	movl	%ebx,%eax
	popl	%ebx
	ret	
strgrest:
	cmpl	%esi,%eax
	jb	lmac727
	cmpl	%edi,%eax
	jb	strgsymb
lmac727:
	cmpl	%eax,bvect
	ja	lmac728
	cmpl	%eax,bstrg
	ja	badstr1
lmac728:
	pushl	%ebx
	pushl	%ecx
	movl	bufstrg,%ecx
	orl	%eax,%eax
	jns	strgnf
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
	jmp	strgfol
strgnf:
	xorl	%ebx,%ebx
	pushl	%edx
	cmpl	%eax,bfloat
	jbe	strgnn
	calll	getnumi
	jmp	strgfol4
strgnn:
	cmpl	%esi,%eax
	je	strgfol4
	cmpl	%edi,%eax
	jl	badstr1
	movl	(%eax),%edx
	cmpl	%edx,bfloat
	jbe	badstr1
	calll	getnumch
	cmpw	$1024,%bx
	jge	badstr1
	movl	4(%eax),%eax
	jmp	strgnn
strgfol4:
	popl	%edx
strgfol:
	calll	strgallc
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	(%ecx),%esi
	addl	$8,%esi
	movl	(%eax),%edi
	addl	$8,%edi
	movl	%ebx,%ecx
	jecxz	l__5
	cmpl	%edi,%esi
	jae	l__5
	decl	%ecx
	addl	%ecx,%esi
	addl	%ecx,%edi
	std
	movsb
l__5:
	rep
	movsb
	cld
	popl	%esi
	popl	%edi
	popl	%ecx
	popl	%ecx
	popl	%ebx
	ret	
stringa2:
	cmpl	%ebx,bstrg
	ja	stra2c
	cmpl	%esi,%ebx
	jae	stra2c
	ret	
stra2c:
	pushl	%eax
	movl	%ebx,%eax
	calll	strgrest
	movl	%eax,%ebx
	popl	%eax
	ret	
stringa3:
	cmpl	%ecx,bstrg
	ja	stra3c
	cmpl	%esi,%ecx
	jae	stra3c
	ret	
stra3c:
	pushl	%eax
	movl	%ecx,%eax
	calll	strgrest
	movl	%eax,%ecx
	popl	%eax
	ret	

	# FENTRY plength
	.align	4
plength:
	movl	zplength,%ebp
	movl	%ebp,savea4
	calll	stringa1
	movl	(%eax),%ebp
	movl	4(%ebp),%eax
	ret	

	# FENTRY slength
	.align	4
slength:
	movl	zslength,%ebp
	movl	%ebp,savea4
	calll	stringa1
	movl	(%eax),%ebp
	movl	4(%ebp),%eax
	ret	

	# FENTRY slen
	.align	4
slen:
	movl	zslen,%ebp
	movl	%ebp,savea4
	cmpl	%eax,bstrg
	ja	badstr1
	cmpl	%esi,%eax
	jae	badstr1
	movl	(%eax),%ebp
	movl	4(%ebp),%eax
	ret	

	# FENTRY caten
	.align	4
caten:
	movl	zcaten,%ebp
	movl	%ebp,savea4
caten0:
	movl	%edx,%ecx
	xorl	%ebx,%ebx
	jmp	caten2
caten1:
	movl	(%esp,%edx,4),%eax
	calll	stringa1
	movl	%eax,(%esp,%edx,4)
	movl	(%eax),%ebp
	movl	4(%ebp),%eax
	addw	%ax,%bx
	jo	catenstl
caten2:
	decw	%dx
	jge	caten1
	pushl	%ecx
	calll	strgallc
	popl	%edx
	jmp	caten4
caten3:
	popl	%ecx
	movl	(%ecx),%ebp
	movl	4(%ebp),%ebp
	movl	%ebp,savea1
	subw	savea1,%bx
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	(%ecx),%esi
	addl	$8,%esi
	movl	(%eax),%edi
	leal	8(%edi,%ebx),%edi
	movl	savea1,%ecx
	jecxz	l__6
	cmpl	%edi,%esi
	jae	l__6
	decl	%ecx
	addl	%ecx,%esi
	addl	%ecx,%edi
	std
	movsb
l__6:
	rep
	movsb
	cld
	popl	%esi
	popl	%edi
	popl	%ecx
caten4:
	decw	%dx
	jge	caten3
	ret	
catenstl:
	movl	$32767,%eax
	movl	zcaten,%ebx
	jmp	errstl

	# FENTRY subsequal
	.align	4
subsequal:
	movl	zsubsequal,%ebp
	movl	%ebp,savea4
	cmpw	$5,%dx
	jne	badnbar5
	movl	12(%esp),%eax
	cmpl	%eax,bstrg
	ja	badstr1
	cmpl	%esi,%eax
	jae	badstr1
	movl	4(%esp),%ebx
	cmpl	%ebx,bstrg
	ja	badstr2
	cmpl	%esi,%ebx
	jae	badstr2
	movl	8(%esp),%ecx
	cmpl	%ecx,bfloat
	jbe	badfix3
	orw	%cx,%cx
	jl	badind3
	movl	(%esp),%edx
	cmpl	%edx,bfloat
	jbe	badfix4
	orw	%dx,%dx
	jl	badind4
	movl	%eax,savea1
	movl	%ebx,savea2
	movl	16(%esp),%eax
	cmpl	%eax,bfloat
	jbe	badfix1
	orw	%ax,%ax
	jl	badind1
	movl	%eax,%ebx
	addw	%cx,%bx
	movl	savea1,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%ebp
	movl	%ebp,savea3
	cmpw	savea3,%bx
	jg	badind1
	movl	%eax,%ebx
	addw	%dx,%bx
	movl	savea2,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%ebp
	movl	%ebp,savea3
	cmpw	savea3,%bx
	jg	badind1
	addl	$20,%esp
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	savea1,%ebp
	movl	(%ebp),%esi
	leal	8(%esi,%ecx),%esi
	movl	savea2,%ebp
	movl	(%ebp),%edi
	leal	8(%edi,%edx),%edi
	movl	%eax,%ecx
	orl	%ecx,%ecx
	repz
	cmpsb
	popl	%esi
	popl	%edi
	popl	%ecx
	jz	subseqr
	movl	%esi,%eax
subseqr:
	ret	

	# FENTRY eqstring
	.align	4
eqstring:
	movl	zeqstring,%ebp
	movl	%ebp,savea4
	calll	stringa1
	calll	stringa2
eqstrgi:
	cmpl	%ebx,%eax
	je	sret
	movl	(%eax),%ebp
	movl	4(%ebp),%ecx
	movl	(%ebx),%ebp
	movl	4(%ebp),%edx
	cmpw	%dx,%cx
	jne	sfalse
	movl	4(%eax),%edx
	cmpl	%esi,%edx
	jb	eqstrg2
	cmpl	%edi,%edx
	jae	eqstrg2
	cmpl	4(%ebx),%edx
	jne	sfalse
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	(%eax),%esi
	addl	$8,%esi
	movl	(%ebx),%edi
	addl	$8,%edi
	movl	%ecx,%ecx
	orl	%ecx,%ecx
	repz
	cmpsb
	popl	%esi
	popl	%edi
	popl	%ecx
	jz	sret
sfalse:
	movl	%esi,%eax
sret:
	ret	
eqstrg2:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	movl	%edx,%eax
	movl	4(%ebx),%ebx
	calll	equal
	movl	%eax,%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	cmpl	%esi,%edx
	je	sfalse2
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	(%eax),%esi
	addl	$8,%esi
	movl	(%ebx),%edi
	addl	$8,%edi
	movl	%ecx,%ecx
	orl	%ecx,%ecx
	repz
	cmpsb
	popl	%esi
	popl	%edi
	popl	%ecx
	jz	sret2
sfalse2:
	movl	%esi,%eax
sret2:
	ret	

	# FENTRY substring
	.align	4
substring:
	movl	zsubstring,%ebp
	movl	%ebp,savea4
	movl	$32767,%eax
	cmpw	$2,%dx
	je	substr1
	cmpw	$3,%dx
	jne	badnbar3
	popl	%eax
	cmpl	%eax,bfloat
	jbe	badfix1
substr1:
	popl	%edx
	cmpl	%edx,bfloat
	jbe	badfix4
	orw	%dx,%dx
	jl	badind4
	popl	%ecx
	calll	stringa3
	movl	(%ecx),%ebp
	movl	4(%ebp),%ebx
	subw	%dx,%bx
	jo	substr2
substr2:
	calll	mina1a2
	calll	strgallc
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	(%ecx),%esi
	leal	8(%esi,%edx),%esi
	movl	(%eax),%edi
	addl	$8,%edi
	movl	%ebx,%ecx
	jecxz	l__7
	cmpl	%edi,%esi
	jae	l__7
	decl	%ecx
	addl	%ecx,%esi
	addl	%ecx,%edi
	std
	movsb
l__7:
	rep
	movsb
	cld
	popl	%esi
	popl	%edi
	popl	%ecx
	ret	

	# FENTRY makestrg
	.align	4
makestrg:
	movl	zmakestrg,%ebp
	movl	%ebp,savea4
	cmpl	%eax,bfloat
	jbe	badfix1
	orw	%ax,%ax
	jge	makstrg0
	xorl	%eax,%eax
makstrg0:
	cmpl	%ebx,bfloat
	jbe	badfix2
	pushl	%ebx
	movl	%eax,%ebx
	calll	strgallc
	popl	%ecx
	jmp	makstrg2
makstrg1:
	movl	(%eax),%ebp
	movb	%cl,8(%ebp,%ebx)
makstrg2:
	decw	%bx
	jge	makstrg1
	ret	

	# FENTRY duplstrg
	.align	4
duplstrg:
	movl	zduplstrg,%ebp
	movl	%ebp,savea4
	cmpl	%eax,bfloat
	jbe	badfix1
	orw	%ax,%ax
	jl	dupserr
	calll	stringa2
	movl	%ebx,%ecx
	movl	(%ebx),%ebp
	movl	4(%ebp),%edx
	movl	%edx,%ebx
	imulw	%ax,%bx
	jo	dupsstl
	movl	%eax,savea1
	calll	strgallc
	xorl	%ebx,%ebx
	jmp	dupstrg2
dupstrg1:
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	(%ecx),%esi
	addl	$8,%esi
	movl	(%eax),%edi
	leal	8(%edi,%ebx),%edi
	movl	%edx,%ecx
	jecxz	l__8
	cmpl	%edi,%esi
	jae	l__8
	decl	%ecx
	addl	%ecx,%esi
	addl	%ecx,%edi
	std
	movsb
l__8:
	rep
	movsb
	cld
	popl	%esi
	popl	%edi
	popl	%ecx
	addw	%dx,%bx
dupstrg2:
	decw	savea1
	jge	dupstrg1
	ret	
dupserr:
	movl	zduplstrg,%ebx
	jmp	erroob
dupsstl:
	movl	zduplstrg,%ebx
	jmp	errstl

	# FENTRY bltstrg
	.align	4
bltstrg:
	movl	zbltstrg,%ebp
	movl	%ebp,savea4
	cmpw	$5,%dx
	je	bltstrg0
	movl	$32767,%ecx
	cmpw	$4,%dx
	je	bltstrg1
	xorl	%ebx,%ebx
	cmpw	$3,%dx
	jne	badnbar3
	jmp	bltstrg2
bltstrg0:
	popl	%ecx
	cmpl	%ecx,bfloat
	jbe	badfix3
bltstrg1:
	popl	%ebx
	cmpl	%ebx,bfloat
	jbe	badfix2
	orw	%bx,%bx
	jl	badind2
bltstrg2:
	movl	%ebx,savea2
	popl	%ebx
	calll	stringa2
	popl	%eax
	cmpl	%eax,bfloat
	jbe	badfix1
	orw	%ax,%ax
	jl	badind1
	movl	%eax,savea1
	movl	(%esp),%eax
	cmpl	%eax,bstrg
	ja	badstr1
	cmpl	%esi,%eax
	jae	badstr1
	movl	(%eax),%ebp
	movl	4(%ebp),%eax
	subw	savea1,%ax
	jo	bltstr3
bltstr3:
	calll	mina1a3
	movl	(%ebx),%ebp
	movl	4(%ebp),%edx
	subw	savea2,%dx
	jo	bltstr4
bltstr4:
	calll	mina4a3
	popl	%eax
	orw	%cx,%cx
	jle	bltstrg6
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	(%ebx),%esi
	movl	savea2,%ebp
	leal	8(%esi,%ebp),%esi
	movl	(%eax),%edi
	movl	savea1,%ebp
	leal	8(%edi,%ebp),%edi
	movl	%ecx,%ecx
	jecxz	l__9
	cmpl	%edi,%esi
	jae	l__9
	decl	%ecx
	addl	%ecx,%esi
	addl	%ecx,%edi
	std
	movsb
l__9:
	rep
	movsb
	cld
	popl	%esi
	popl	%edi
	popl	%ecx
bltstrg6:
	ret	

	# FENTRY fillstrg
	.align	4
fillstrg:
	movl	zfillstrg,%ebp
	movl	%ebp,savea4
	movl	$32767,%eax
	cmpw	$3,%dx
	je	fillstr0
	cmpw	$4,%dx
	jne	badnbar4
	popl	%eax
	cmpl	%eax,bfloat
	jbe	badfix1
fillstr0:
	popl	%ecx
	cmpl	%ecx,bfloat
	jbe	badfix3
	popl	%ebx
	cmpl	%ebx,bfloat
	jbe	badfix2
	orw	%bx,%bx
	jl	badind2
	movl	%eax,%edx
	movl	(%esp),%eax
	cmpl	%eax,bstrg
	ja	badstr1
	cmpl	%esi,%eax
	jae	badstr1
	movl	(%eax),%ebp
	movl	4(%ebp),%eax
	subw	%bx,%ax
	jo	fillstr6
fillstr6:
	calll	mina1a4
	popl	%eax
	jmp	fillstr8
fillstr7:
	movl	(%eax),%ebp
	movb	%cl,8(%ebp,%ebx)
	incw	%bx
fillstr8:
	decw	%dx
	jge	fillstr7
	ret	

	# FENTRY scanstrg
	.align	4
scanstrg:
	movl	zscanstrg,%ebp
	movl	%ebp,savea4
sanstrg1:
	xorl	%ecx,%ecx
	cmpw	$2,%dx
	je	sanstrg2
	cmpw	$3,%dx
	jne	badnbar3
	popl	%ecx
	cmpl	%ecx,bfloat
	jbe	badfix3
	orw	%cx,%cx
	jl	badind3
sanstrg2:
	popl	%ebx
	calll	stringa2
	popl	%eax
	calll	stringa1
	movl	(%eax),%ebp
	movl	4(%ebp),%edx
	subw	%cx,%dx
	jo	sanstrg4
	jmp	sanstrg4
sanstrg3:
	pushl	%eax
	pushl	%ecx
	pushl	%edx
	movl	(%eax),%ebp
	movzbl	8(%ebp,%ecx),%edx
	movl	(%ebx),%ebp
	movl	4(%ebp),%ecx
	jmp	sanpos6
sanpos5:
	movl	(%ebx),%ebp
	movzbl	8(%ebp,%ecx),%eax
	cmpl	%eax,%edx
	je	sanpos9
sanpos6:
	decw	%cx
	jge	sanpos5
	movl	savea4,%ebp
	cmpl	%ebp,zscanstrg
	jne	sanstrg6
	jmp	sanposf
sanpos9:
	movl	savea4,%ebp
	cmpl	%ebp,zspanstrg
	jne	sanstrg6
sanposf:
	popl	%edx
	popl	%ecx
	popl	%eax
	incw	%cx
sanstrg4:
	decw	%dx
	jge	sanstrg3
	jmp	strfalse
sanstrg6:
	popl	%edx
	popl	%eax
	popl	%edx
	ret	

	# FENTRY spanstrg
	.align	4
spanstrg:
	movl	zspanstrg,%ebp
	movl	%ebp,savea4
	jmp	sanstrg1

	# FENTRY chrpos
	.align	4
chrpos:
	movl	zchrpos,%ebp
	movl	%ebp,savea4
	xorl	%ecx,%ecx
	cmpw	$2,%dx
	je	chrpos1
	cmpw	$3,%dx
	jne	badnbar3
	popl	%ecx
	cmpl	%ecx,bfloat
	jbe	badfix3
	orw	%cx,%cx
	jl	badind3
chrpos1:
	popl	%ebx
	calll	stringa2
	popl	%eax
	cmpl	%eax,bfloat
	jbe	badfix1
	andw	$255,%ax
	movl	(%ebx),%ebp
	movl	4(%ebp),%edx
	subw	%cx,%dx
	jo	chrpos3
	jmp	chrpos3
chrpos2:
	movl	(%ebx),%ebp
	movzbl	8(%ebp,%ecx),%ebp
	movl	%ebp,savea1
	cmpl	%eax,savea1
	je	chrpos5
	incw	%cx
chrpos3:
	decw	%dx
	jge	chrpos2
	movl	%esi,%eax
	ret	
chrpos5:
	movl	%ecx,%eax
	ret	

	# FENTRY sref
	.align	4
sref:
	movl	zsref,%ebp
	movl	%ebp,savea4
	cmpl	%eax,bstrg
	ja	badstr1
	cmpl	%esi,%eax
	jae	badstr1
	cmpl	%ebx,bfloat
	jbe	badfix2
	orw	%bx,%bx
	jl	badind2
	movl	(%eax),%ebp
	movl	4(%ebp),%ecx
	cmpw	%cx,%bx
	jge	badind2
	movl	(%eax),%ebp
	movzbl	8(%ebp,%ebx),%eax
	ret	

	# FENTRY chrnth
	.align	4
chrnth:
	movl	zchrnth,%ebp
	movl	%ebp,savea4
	calll	stringa2
	cmpl	%eax,bfloat
	jbe	badfix1
	orw	%ax,%ax
	jl	strfalse
	movl	(%ebx),%ebp
	movl	4(%ebp),%ecx
	cmpw	%cx,%ax
	jge	strfalse
	movl	(%ebx),%ebp
	movzbl	8(%ebp,%eax),%eax
	ret	

	# FENTRY sset
	.align	4
sset:
	movl	zsset,%ebp
	movl	%ebp,savea4
	movl	%eax,%edx
	movl	%ebx,%eax
	movl	%edx,%ebx
	cmpl	%ebx,bstrg
	ja	badstr2
	cmpl	%esi,%ebx
	jae	badstr2
	pushl	%ecx
	calll	chrset5
	popl	%eax
	ret	

	# FENTRY chrset
	.align	4
chrset:
	movl	zchrset,%ebp
	movl	%ebp,savea4
	calll	stringa2
chrset5:
	cmpl	%eax,bfloat
	jbe	badfix1
	orw	%ax,%ax
	jl	badind1
	cmpl	%ecx,bfloat
	jbe	badfix3
	movl	(%ebx),%ebp
	movl	4(%ebp),%edx
	cmpw	%dx,%ax
	jge	badind1
	movl	(%ebx),%ebp
	movb	%cl,8(%ebp,%eax)
	movl	%ecx,%eax
	ret	

	# FENTRY typestrg
	.align	4
typestrg:
	movl	ztypestrg,%ebx
	cmpw	$1,%dx
	je	typesg
	cmpw	$2,%dx
	je	typess
	movl	$1,%eax
	jmp	errwna
typesg:
	popl	%eax
	cmpl	%eax,bstrg
	ja	typeser3
	cmpl	%esi,%eax
	jae	typeser3
typesg2:
	movl	4(%eax),%eax
	ret	
typess:
	popl	%eax
	cmpl	%esi,%eax
	jb	lmac729
	cmpl	%edi,%eax
	jb	types2
lmac729:
	cmpl	%edi,%eax
	jl	typeser2
types2:
	cmpl	%esi,%eax
	je	typeser2
	popl	%ecx
	cmpl	%ecx,bstrg
	ja	typeser1
	cmpl	%esi,%ecx
	jae	typeser1
	movl	%eax,4(%ecx)
	ret	
typeser1:
	movl	%ecx,%eax
typeser3:
	jmp	errnsa
typeser2:
	jmp	errsym

	# FENTRY exchstrg
	.align	4
exchstrg:
	movl	zexchstrg,%ebp
	movl	%ebp,savea4
	cmpl	%eax,bstrg
	ja	badstr1
	cmpl	%esi,%eax
	jae	badstr1
	cmpl	%ebx,bstrg
	ja	badstr2
	cmpl	%esi,%ebx
	jae	badstr2
	pushl	4(%eax)
	pushl	4(%ebx)
	movl	(%eax),%ebp
	movl	%ebp,ocheap
	movl	(%ebx),%ebp
	movl	%ebp,(%eax)
	movl	ocheap,%ebp
	movl	%ebp,(%ebx)
	movl	(%eax),%ebp
	movl	%eax,(%ebp)
	movl	(%ebx),%ebp
	movl	%ebx,(%ebp)
	popl	4(%eax)
	popl	4(%ebx)
	ret	

	# FENTRY ffindex
	.align	4
ffindex:
	movl	zffindex,%ebp
	movl	%ebp,savea4
	xorl	%ecx,%ecx
	cmpw	$2,%dx
	je	ffindg3
	cmpw	$3,%dx
	jne	badnbar3
	popl	%ecx
	cmpl	%ecx,bfloat
	jbe	badfix3
	orw	%cx,%cx
	jl	badind3
ffindg3:
	popl	%ebx
	calll	stringa2
	popl	%eax
	calll	stringa1
	movl	(%ebx),%ebp
	movl	4(%ebp),%edx
	movl	(%eax),%ebp
	movl	4(%ebp),%ebp
	movl	%ebp,savea1
	subw	savea1,%dx
	subw	%cx,%dx
	incw	%dx
	jmp	ffindex4
ffindex3:
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	(%ebx),%esi
	leal	8(%esi,%ecx),%esi
	movl	(%eax),%edi
	addl	$8,%edi
	movl	savea1,%ecx
	orl	%ecx,%ecx
	repz
	cmpsb
	popl	%esi
	popl	%edi
	popl	%ecx
	jz	ffindex6
	incw	%cx
ffindex4:
	decw	%dx
	jge	ffindex3
	movl	%esi,%eax
	ret	
ffindex6:
	movl	%ecx,%eax
	ret	

	# FENTRY alphales
	.align	4
alphales:
	movl	zalphales,%ebp
	movl	%ebp,savea4
	calll	stringa1
	calll	stringa2
	movl	(%eax),%ebp
	movl	4(%ebp),%ecx
	movl	(%ebx),%ebp
	movl	4(%ebp),%edx
	calll	mina3a4
	xorl	%ecx,%ecx
	jmp	alpha2
alpha1:
	movl	(%eax),%ebp
	movzbl	8(%ebp,%ecx),%ebp
	movl	%ebp,savea1
	movl	(%ebx),%ebp
	movzbl	8(%ebp,%ecx),%ebp
	movl	%ebp,savea2
	movw	savea2,%bp
	cmpw	%bp,savea1
	jl	strue
	movw	savea2,%bp
	cmpw	%bp,savea1
	jne	strfalse
	incw	%cx
alpha2:
	decw	%dx
	jge	alpha1
	movl	(%eax),%ebp
	movl	4(%ebp),%edx
	cmpw	%cx,%dx
	jne	strfalse
strue:
	movl	zt,%eax
	ret	

	# FENTRY ffsymbol
	.align	4
ffsymbol:
	cmpl	%esi,%ebx
	jb	ffsymb1
	cmpl	%edi,%ebx
	jae	ffsymb1
	jmp	trysympk
ffsymb1:
	movl	zffsymbol,%ebp
	movl	%ebp,savea4
	calll	stringa2
	cmpl	%esi,%eax
	jb	ffsymbr2
	cmpl	%edi,%eax
	jae	ffsymbr2
	jmp	trysymp
ffsymbr2:
	movl	zffsymbol,%ebx
	jmp	errsym

	# FENTRY concat
	.align	4
concat:
	movl	(%esp,%edx,4),%ebp
	movl	%ebp,savea2
	movl	$concat9,(%esp,%edx,4)
	movl	zconcat,%ebp
	movl	%ebp,savea4
	jmp	caten0
concat9:
	movl	%eax,%ebx
	movl	%esi,%eax
	pushl	savea2
	jmp	trysymp

	# FENTRY hash
	.align	4
hash:
	movl	zhash,%ebp
	movl	%ebp,savea4
	calll	stringa1
	jmp	hashint

	# FENTRY fpnam
	.align	4
fpnam:
	movl	zfpnam,%ebp
	movl	%ebp,savea4
	calll	stringa1
	movl	(%eax),%ebp
	movl	4(%ebp),%ebx
	movl	%eax,%ecx
	movl	%esi,%eax
	jmp	fpnam2
fpnam1:
	movl	(%ecx),%ebp
	movzbl	8(%ebp,%ebx),%edx
	cmpl	%edi,fcons
	jb	l__10
l1__10:
	xchgl	%edi,fcons
	movl	%edx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
fpnam2:
	decw	%bx
	jge	fpnam1
	ret	

	# FENTRY gensym
	.align	4
gensym:
	movl	zgenstrg,%eax
	pushl	(%eax)
	movl	zgenscpt,%ebx
	movl	(%ebx),%eax
	incw	%ax
gennerr:
	movl	%eax,(%ebx)
	pushl	%eax
	movl	$2,%edx
	jmp	concat
rdpscrn:
	movl	ztyrdspl,%ebp
	movl	%ebp,savea4
	jmp	bltscrn0
rdpscrn1:
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	savea1,%ebp
	movl	(%ebp),%esi
	leal	8(%esi,%ecx),%esi
	movl	savea2,%ebp
	movl	(%ebp),%edi
	leal	8(%edi,%ecx),%edi
	movl	dlx,%ecx
	orl	%ecx,%ecx
	repz
	cmpsb
	popl	%esi
	popl	%edi
	popl	%ecx
	jz	rdpscrn5
	pushl	%ecx
	pushl	%edx
	movl	dlx,%edx
	movl	%ecx,oldid
	addw	%dx,oldid
	movl	xr,%ebp
	movl	%ebp,oldx
	addw	%dx,oldx
rdpscrn3:
	movl	savea1,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%ecx),%eax
	movl	savea2,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%ecx),%ebx
	movl	savea2,%ebp
	movl	(%ebp),%ebp
	movb	%al,8(%ebp,%ecx)
	cmpw	%bx,%ax
	jne	scrnaff
rdpscrn4:
	incw	%cx
	decw	%dx
	jg	rdpscrn3
	popl	%edx
	popl	%ecx
rdpscrn5:
	addw	wd,%cx
	incw	yr
	decw	%dx
	jg	rdpscrn1
	ret	
scrnaff:
	pushl	savea1
	pushl	savea2
	pushl	%edx
	pushl	%ecx
	cmpw	$32,%ax
	jge	scrnaff0
	movl	$46,%eax
scrnaff0:
	subw	oldid,%cx
	addw	%cx,oldid
	addw	%cx,oldx
	movl	%ecx,%edx
	pushl	$scrnaff3
	cmpw	$1,%cx
	jne	scrnaff4
scrnaff1:
	pushl	%eax
scrnaff2:
	jmp	tyo
scrnaff3:
	popl	%ecx
	popl	%edx
	popl	savea2
	popl	savea1
	jmp	rdpscrn4
scrnaff4:
	movl	4(%esp),%ebx
	decw	%bx
	cmpw	$3,%cx
	jne	scrnaff7
	decw	%bx
	movl	savea1,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%ebx),%ecx
	pushl	%ecx
	incw	%bx
scrnaff6:
	movl	savea1,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%ebx),%ecx
	pushl	%ecx
	jmp	scrnaff1
scrnaff7:
	cmpw	$2,%cx
	je	scrnaff6
	pushl	%eax
	movl	oldx,%eax
	movl	yr,%ebx
	calll	tycursor
	movl	$1,%edx
	jmp	scrnaff2
clipscrn:
	cmpl	%eax,bfloat
	jbe	badfix1
	xorl	%edx,%edx
	orw	%ax,%ax
	jl	clipscr3
	movl	%eax,%ecx
clipscr1:
	cmpl	%ebx,bfloat
	jbe	badfix2
	orw	%bx,%bx
	jl	clipscr4
	addw	%bx,%dx
	ret	
clipscr3:
	xorl	%ecx,%ecx
	subw	%ax,%dx
	jmp	clipscr1
clipscr4:
	subw	%bx,%cx
	ret	
mina1dlx:
	cmpw	%ax,dlx
	jg	minx1
	ret	
minx1:
	movl	%eax,dlx
	ret	
mina1dly:
	cmpw	%ax,dly
	jg	miny1
	ret	
miny1:
	movl	%eax,dly
	ret	

	# FENTRY bltscrn
	.align	4
bltscrn:
	movl	zbltscrn,%ebp
	movl	%ebp,savea4
bltscrn0:
	popl	%eax
	cmpw	$12,%dx
	je	bltscrna
	cmpw	$4,%dx
	jne	badnbar4
	cmpl	%eax,bfloat
	jbe	badfix1
	popl	%ebx
	cmpl	%ebx,bfloat
	jbe	badfix2
	movl	%ebx,dlx
	movl	%eax,dly
	movl	%ebx,ws
	movl	%ebx,wd
	movl	$0,llid
	movl	$0,xr
	movl	$0,yr
	movl	$0,llis
	xorl	%ecx,%ecx
	xorl	%edx,%edx
	jmp	bltscrnb
bltscrna:
	cmpl	%eax,bfloat
	jbe	badfix1
	movl	%eax,dly
	popl	%eax
	cmpl	%eax,bfloat
	jbe	badfix1
	movl	%eax,dlx
	popl	ys
	popl	%ebx
	popl	yr
	popl	%eax
	calll	clipscrn
	movl	%ecx,xr
	movl	%ecx,llid
	movl	%edx,llis
	movl	ys,%ebx
	movl	yr,%eax
	calll	clipscrn
	movl	%ecx,yr
	popl	%eax
	cmpl	%eax,bfloat
	jbe	badfix1
	subw	%dx,%ax
	calll	mina1dly
	popl	%eax
	cmpl	%eax,bfloat
	jbe	badfix1
	movl	%eax,ws
	subw	llis,%ax
	calll	mina1dlx
	popl	%eax
	cmpl	%eax,bfloat
	jbe	badfix1
	subw	%cx,%ax
	calll	mina1dly
	popl	%eax
	cmpl	%eax,bfloat
	jbe	badfix1
	movl	%eax,wd
	subw	llid,%ax
	calll	mina1dlx
bltscrnb:
	popl	savea2
	movl	savea2,%ebp
	cmpl	%ebp,bstrg
	ja	bltscrn8
	cmpl	%ebp,%esi
	jbe	bltscrn8
	popl	savea1
	movl	savea1,%ebp
	cmpl	%ebp,bstrg
	ja	bltscrn9
	cmpl	%ebp,%esi
	jbe	bltscrn9
	cmpw	$0,dlx
	jle	bltscrn7
	cmpw	$0,dly
	jle	bltscrn7
	imulw	ws,%dx
	addw	%dx,llis
	movl	dly,%edx
	imulw	wd,%cx
	addw	llid,%cx
	movl	savea4,%ebp
	cmpl	%ebp,ztyrdspl
	je	rdpscrn1
	movl	dlx,%eax
	movl	llis,%ebx
bltscrn6:
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	savea2,%ebp
	movl	(%ebp),%esi
	leal	8(%esi,%ebx),%esi
	movl	savea1,%ebp
	movl	(%ebp),%edi
	leal	8(%edi,%ecx),%edi
	movl	%eax,%ecx
	jecxz	l__11
	cmpl	%edi,%esi
	jae	l__11
	decl	%ecx
	addl	%ecx,%esi
	addl	%ecx,%edi
	std
	movsb
l__11:
	rep
	movsb
	cld
	popl	%esi
	popl	%edi
	popl	%ecx
	addw	wd,%cx
	addw	ws,%bx
	decw	%dx
	jg	bltscrn6
bltscrn7:
	ret	
bltscrn8:
	movl	savea2,%eax
	jmp	badstr1
bltscrn9:
	movl	savea1,%eax
	jmp	badstr1

	# FENTRY typevect
	.align	4
typevect:
	movl	ztypevect,%ebx
	cmpw	$1,%dx
	je	typevg
	cmpw	$2,%dx
	je	typevs
	movl	$1,%eax
	jmp	errwna
typevg:
	popl	%eax
	cmpl	%eax,bvect
	ja	typever3
	cmpl	%eax,bstrg
	jbe	typever3
	movl	4(%eax),%eax
	ret	
typevs:
	popl	%eax
	cmpl	%esi,%eax
	jb	lmac730
	cmpl	%edi,%eax
	jb	typevs2
lmac730:
	cmpl	%edi,%eax
	jl	typever2
typevs2:
	cmpl	%esi,%eax
	je	typever2
	popl	%ecx
	cmpl	%ecx,bvect
	ja	typever1
	cmpl	%ecx,bstrg
	jbe	typever1
	movl	%eax,4(%ecx)
	ret	
typever1:
	movl	%ecx,%eax
typever3:
	jmp	errvec
typever2:
	jmp	errsym

	# FENTRY makevect
	.align	4
makevect:
	movl	zmakevect,%ebp
	movl	%ebp,savea4
	cmpl	%eax,bfloat
	jbe	badfix1
	orw	%ax,%ax
	jl	badind1
	movl	%eax,%ecx
makvect0:
	movl	fvect,%eax
	cmpl	%esi,%eax
	je	makvect3
	movl	cheap,%ebp
	movl	%ebp,ocheap
	movl	cheap,%ebp
	leal	8(%ebp,%ecx,4),%ebp
	movl	%ebp,cheap
	movl	cheap,%ebp
	cmpl	%ebp,eheap
	jb	makvect4
makvect2:
	movl	(%eax),%ebp
	movl	%ebp,fvect
	movl	ocheap,%ebp
	movl	%ebp,(%eax)
	movl	ocheap,%ebp
	movl	%ecx,4(%ebp)
	movl	ocheap,%ebp
	movl	%eax,(%ebp)
	jmp	vectfil4
vectfil1:
	movl	(%eax),%ebp
	movl	%ebx,8(%ebp,%ecx,4)
vectfil4:
	decw	%cx
	jge	vectfil1
	movl	zvector,%ebp
	movl	%ebp,4(%eax)
	ret	
makvect3:
	calll	gcvect
	jmp	makvect0
makvect4:
	movl	%esi,%eax
	movl	ocheap,%ebp
	movl	%ebp,cheap
	calll	hgc
	movl	fvect,%eax
	movl	cheap,%ebp
	movl	%ebp,ocheap
	movl	cheap,%ebp
	leal	8(%ebp,%ecx,4),%ebp
	movl	%ebp,cheap
	movl	eheap,%ebp
	cmpl	%ebp,cheap
	jb	makvect2
	movl	%esi,%eax
	movl	ocheap,%ebp
	movl	%ebp,cheap
	jmp	errfh

	# FENTRY vlength
	.align	4
vlength:
	movl	zvlength,%ebp
	movl	%ebp,savea4
	cmpl	%eax,bvect
	ja	badvec1
	cmpl	%eax,bstrg
	jbe	badvec1
	movl	(%eax),%ebp
	movl	4(%ebp),%eax
	ret	

	# FENTRY eqvector
	.align	4
eqvector:
	movl	zeqvector,%ebp
	movl	%ebp,savea4
	cmpl	%eax,bvect
	ja	badvec1
	cmpl	%eax,bstrg
	jbe	badvec1
	cmpl	%ebx,bvect
	ja	badvec2
	cmpl	%ebx,bstrg
	jbe	badvec2
eqvectri:
	movl	(%eax),%ebp
	movl	4(%ebp),%ecx
	movl	(%ebx),%ebp
	movl	4(%ebp),%edx
	cmpw	%dx,%cx
	jne	strfalse
	movl	4(%eax),%edx
	cmpl	%esi,%edx
	jb	eqvect6
	cmpl	%edi,%edx
	jae	eqvect6
	cmpl	4(%ebx),%edx
	jne	strfalse
	jmp	eqvect5
eqvect4:
	pushl	%eax
	pushl	%ebx
	movl	(%eax),%ebp
	movl	8(%ebp,%ecx,4),%eax
	movl	(%ebx),%ebp
	movl	8(%ebp,%ecx,4),%ebx
	pushl	%ecx
	calll	equal
	movl	%eax,%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	cmpl	%esi,%edx
	je	strfalse
eqvect5:
	decw	%cx
	jge	eqvect4
	ret	
eqvect6:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	movl	%edx,%eax
	movl	4(%ebx),%ebx
	calll	equal
	movl	%eax,%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	cmpl	%esi,%edx
	jne	eqvect5
	movl	%esi,%eax
	ret	

	# FENTRY vref
	.align	4
vref:
	movl	zvref,%ebp
	movl	%ebp,savea4
	cmpl	%ebx,bfloat
	jbe	badfix2
	orw	%bx,%bx
	jl	badind2
	cmpl	%eax,bvect
	ja	badvec1
	cmpl	%eax,bstrg
	jbe	badvec1
	movl	(%eax),%ebp
	movl	4(%ebp),%ecx
	cmpw	%cx,%bx
	jge	badind2
	movl	(%eax),%ebp
	movl	8(%ebp,%ebx,4),%eax
	ret	

	# FENTRY vset
	.align	4
vset:
	movl	zvset,%ebp
	movl	%ebp,savea4
	cmpl	%ebx,bfloat
	jbe	badfix2
	orw	%bx,%bx
	jl	badind2
	cmpl	%eax,bvect
	ja	badvec1
	cmpl	%eax,bstrg
	jbe	badvec1
	movl	(%eax),%ebp
	movl	4(%ebp),%edx
	cmpw	%dx,%bx
	jge	badind2
	movl	(%eax),%ebp
	movl	%ecx,8(%ebp,%ebx,4)
	movl	%ecx,%eax
	ret	

	# FENTRY bltvect
	.align	4
bltvect:
	movl	zbltvect,%ebp
	movl	%ebp,savea4
	cmpw	$5,%dx
	je	bltvect0
	movl	$32767,%ecx
	cmpw	$4,%dx
	je	bltvect1
	xorl	%ebx,%ebx
	cmpw	$3,%dx
	jne	badnbar3
	jmp	bltvect2
bltvect0:
	popl	%ecx
	cmpl	%ecx,bfloat
	jbe	badfix3
bltvect1:
	popl	%ebx
	cmpl	%ebx,bfloat
	jbe	badfix2
	orw	%bx,%bx
	jl	badind2
bltvect2:
	movl	%ebx,savea2
	popl	%ebx
	cmpl	%ebx,bvect
	ja	badvec2
	cmpl	%ebx,bstrg
	jbe	badvec2
	popl	%eax
	cmpl	%eax,bfloat
	jbe	badfix1
	orw	%ax,%ax
	jl	badind1
	movl	%eax,savea1
	movl	(%esp),%eax
	cmpl	%eax,bvect
	ja	badvec1
	cmpl	%eax,bstrg
	jbe	badvec1
	movl	(%eax),%ebp
	movl	4(%ebp),%eax
	subw	savea1,%ax
	calll	mina1a3
	movl	(%ebx),%ebp
	movl	4(%ebp),%edx
	subw	savea2,%dx
	calll	mina4a3
	popl	%eax
	orw	%cx,%cx
	jle	bltvect6
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	(%ebx),%esi
	movl	savea2,%ebp
	leal	8(%esi,%ebp,4),%esi
	movl	(%eax),%edi
	movl	savea1,%ebp
	leal	8(%edi,%ebp,4),%edi
	jecxz	l__12
	cmpl	%edi,%esi
	jae	l__12
	decl	%ecx
	shll	$2,%ecx
	addl	%ecx,%esi
	addl	%ecx,%edi
	shrl	$2,%ecx
	std
	movsl
l__12:
	rep
	movsl
	cld
	popl	%esi
	popl	%edi
	popl	%ecx
bltvect6:
	ret	

	# FENTRY vector
	.align	4
vector:
	movl	%edx,%eax
	pushl	%eax
	movl	%esi,%ebx
	calll	makevect
	popl	%edx
	jmp	vector2
vector1:
	popl	%ebx
	movl	(%eax),%ebp
	movl	%ebx,8(%ebp,%edx,4)
vector2:
	decw	%dx
	jge	vector1
	ret	

	# FENTRY exchvect
	.align	4
exchvect:
	movl	zexchvect,%ebp
	movl	%ebp,savea4
	cmpl	%eax,bvect
	ja	badvec1
	cmpl	%eax,bstrg
	jbe	badvec1
	cmpl	%ebx,bvect
	ja	badvec2
	cmpl	%ebx,bstrg
	jbe	badvec2
	pushl	4(%eax)
	pushl	4(%ebx)
	movl	(%eax),%ebp
	movl	%ebp,ocheap
	movl	(%ebx),%ebp
	movl	%ebp,(%eax)
	movl	ocheap,%ebp
	movl	%ebp,(%ebx)
	movl	(%eax),%ebp
	movl	%eax,(%ebp)
	movl	(%ebx),%ebp
	movl	%ebx,(%ebp)
	popl	4(%eax)
	popl	4(%ebx)
	ret	

	# FENTRY fillvect
	.align	4
fillvect:
	movl	zfillvect,%ebp
	movl	%ebp,savea4
	movl	$32767,%eax
	cmpw	$3,%dx
	je	fillvec0
	cmpw	$4,%dx
	jne	badnbar4
	popl	%eax
	cmpl	%eax,bfloat
	jbe	badfix1
fillvec0:
	popl	%ecx
	popl	%ebx
	cmpl	%ebx,bfloat
	jbe	badfix2
	orw	%bx,%bx
	jl	badind2
	movl	%eax,%edx
	movl	(%esp),%eax
	cmpl	%eax,bvect
	ja	badvec1
	cmpl	%eax,bstrg
	jbe	badvec1
	movl	(%eax),%ebp
	movl	4(%ebp),%eax
	subw	%bx,%ax
	jo	fillvec6
fillvec6:
	calll	mina1a4
	popl	%eax
	jmp	fillvec8
fillvec7:
	movl	(%eax),%ebp
	movl	%ecx,8(%ebp,%ebx,4)
	incw	%bx
fillvec8:
	decw	%dx
	jge	fillvec7
	ret	
l__10:
	calll	gccons
	jmp	l1__10
