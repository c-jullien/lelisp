	.file	"read.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	fsymb
	.globl	fcons
	.globl	bvar
	.globl	zvoid
	.globl	zundef
	.globl	zt
	.globl	zllsystem
	.globl	zsyspkgc
	.globl	hashtab
	.globl	fstrg
	.globl	zllexpr
	.globl	istream
	.globl	inmax
	.globl	polig
	.globl	zsyscol
	.globl	savea4
	.globl	zquote
	.globl	zllcons
	.globl	zmcons
tsymb000:
	.long	0
asymb:
	.long	0
ksymb:
	.long	0
hsymb:
	.long	0
count:
	.long	0
tabch:
	.long	0
cachch:
	.long	0
ibase:
	.long	0
all09:
	.long	0
negatif:
	.long	0
quotes:
	.long	0
getchfl:
	.long	0
ringur:
	.long	0
curread:
	.long	0
rdprd:
	.long	0
impli:
	.long	0
impld:
	.long	0
bufat:
	.long	0
lgbufat:
	.long	0
cpkgc:
	.long	0
zstatrc:
	.long	0
pnmac1466:
	.string	"read-case-flag"
	.even
zstinread:
	.long	0
pnmac1467:
	.string	"in-read-flag"
	.even
pnmac1468:
	.string	"read"
	.even
pnmac1469:
	.string	"implode"
	.even
pnmac1470:
	.string	"implodech"
	.even
pnmac1471:
	.string	"readch"
	.even
pnmac1472:
	.string	"readcn"
	.even
pnmac1473:
	.string	"curread"
	.even
pnmac1474:
	.string	"teread"
	.even
pnmac1475:
	.string	"reread"
	.even
pnmac1476:
	.string	"readline"
	.even
pnmac1477:
	.string	"readstring"
	.even
pnmac1478:
	.string	"stratom"
	.even
pnmac1479:
	.string	"read-delimited-list"
	.even
pnmac1480:
	.string	"peekch"
	.even
pnmac1481:
	.string	"peekcn"
	.even
pnmac1482:
	.string	"concatpkgc"
	.even
pnmac1483:
	.string	"ascii"
	.even
pnmac1484:
	.string	"cascii"
	.even
pnmac1485:
	.string	"uppercase"
	.even
pnmac1486:
	.string	"lowercase"
	.even
pnmac1487:
	.string	"asciip"
	.even
pnmac1488:
	.string	"digitp"
	.even
pnmac1489:
	.string	"letterp"
	.even
pnmac1490:
	.string	"ibase"
	.even
zlread:
	.long	0
zimplode:
	.long	0
zimplodech:
	.long	0
zreadch:
	.long	0
zreadcod:
	.long	0
zlcuread:
	.long	0
zteread:
	.long	0
zreread:
	.long	0
zpeekch:
	.long	0
zpeekcn:
	.long	0
zreadline:
	.long	0
zstratom:
	.long	0
zreadstrg:
	.long	0
zreaddltd:
	.long	0
zfascii:
	.long	0
zcascii:
	.long	0
zconcatpk:
	.long	0
zuppercase:
	.long	0
zlowercase:
	.long	0
zasciip:
	.long	0
zdigitp:
	.long	0
zletterp:
	.long	0
zfibase:
	.long	0
	.globl	bfloat
	.globl	cfloat
	.globl	ffloat
	.globl	bvect
	.globl	cvect
	.globl	fvect
	.globl	bstrg
	.globl	cstrg
	.globl	csymb
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
	.globl	errnia
	.globl	errnla
	.globl	errnsa
	.globl	errsxt
	.globl	errsym
	.globl	erroob
	.globl	errudf
	.globl	errudv
	.globl	getsetn
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	gcsymb
	.globl	hgc
	.globl	inphy
	.globl	sysprot
	.globl	evala1
	.globl	apply
	.globl	ffuncall
	.globl	llde
	.globl	getfns
	.globl	setfn
	.globl	getprop
	.globl	nreverse
	.globl	lllength
	.globl	equal
	.globl	gaplus2i
	.globl	gatim2i
	.globl	gadinv
	.globl	gadiv
	.globl	stringa1
	.globl	strgallc
	.globl	makestrg
	.globl	makevect
	.globl	fascii
	.globl	ini_read
	.globl	istdsym
	.globl	hashint
	.globl	inisymb
	.globl	inicst
	.globl	inasymb
	.globl	inacst
	.globl	tryatom
	.globl	trysymp
	.globl	trysymb
	.globl	trysympk
	.globl	crastrg
	.globl	erlec11
	.globl	readdltd
	.globl	lread
	.globl	readi
	.globl	getch
	.globl	asciii
	.globl	rereada4
	.globl	getcv
	.globl	read2
	.globl	rdpkgc2
	.globl	base10p
	.globl	erlec6
	.globl	zlread
	.globl	zstinread
	.globl	zstatrc
	.globl	tsymb000
	.globl	asymb
	.globl	ksymb
	.globl	hsymb
	.globl	count
	.globl	tabch
	.globl	cachch
	.globl	ibase
	.globl	all09
	.globl	negatif
	.globl	quotes
	.globl	getchfl
	.globl	ringur
	.globl	curread
	.globl	rdprd
	.globl	impli
	.globl	impld
	.globl	bufat
	.globl	lgbufat
	.globl	cpkgc
	.globl	_llrt_cvatof

	# FENTRY ini_read
	.align	4
ini_read:
	movl	%esi,ringur
	movl	%esi,curread
	movl	%esi,impli
	movl	%esi,impld
	movl	zllsystem,%ebp
	movl	%ebp,cpkgc
	movl	$14,%eax
	movl	$pnmac1466,%ebx
	movl	$zstatrc,%ecx
	calll	inicst
	movl	%esi,(%eax)
	movl	$12,%eax
	movl	$pnmac1467,%ebx
	movl	$zstinread,%ecx
	calll	inicst
	movl	%esi,(%eax)
	movl	%esi,cpkgc
	movl	$4,%eax
	movl	$pnmac1468,%ebx
	movl	$lread,%ecx
	movl	$zlread,%edx
	pushl	$1
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac1469,%ebx
	movl	$implode,%ecx
	movl	$zimplode,%edx
	pushl	$2
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac1470,%ebx
	movl	$implodech,%ecx
	movl	$zimplodech,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1471,%ebx
	movl	$readch,%ecx
	movl	$zreadch,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1472,%ebx
	movl	$readcod,%ecx
	movl	$zreadcod,%edx
	pushl	$1
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac1473,%ebx
	movl	$lcuread,%ecx
	movl	$zlcuread,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1474,%ebx
	movl	$teread,%ecx
	movl	$zteread,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1475,%ebx
	movl	$reread,%ecx
	movl	$zreread,%edx
	pushl	$2
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac1476,%ebx
	movl	$readline,%ecx
	movl	$zreadline,%edx
	pushl	$1
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac1477,%ebx
	movl	$readstrg,%ecx
	movl	$zreadstrg,%edx
	pushl	$1
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac1478,%ebx
	movl	$stratom,%ecx
	movl	$zstratom,%edx
	pushl	$4
	calll	inisymb
	movl	$19,%eax
	movl	$pnmac1479,%ebx
	movl	$readdltd,%ecx
	movl	$zreaddltd,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1480,%ebx
	movl	$peekch,%ecx
	movl	$zpeekch,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1481,%ebx
	movl	$peekcn,%ecx
	movl	$zpeekcn,%edx
	pushl	$1
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac1482,%ebx
	movl	$concatpk,%ecx
	movl	$zconcatpk,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1483,%ebx
	movl	$fascii,%ecx
	movl	$zfascii,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1484,%ebx
	movl	$cascii,%ecx
	movl	$zcascii,%edx
	pushl	$2
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac1485,%ebx
	movl	$uppercase,%ecx
	movl	$zuppercase,%edx
	pushl	$2
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac1486,%ebx
	movl	$lowercase,%ecx
	movl	$zlowercase,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1487,%ebx
	movl	$asciip,%ecx
	movl	$zasciip,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1488,%ebx
	movl	$digitp,%ecx
	movl	$zdigitp,%edx
	pushl	$2
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac1489,%ebx
	movl	$letterp,%ecx
	movl	$zletterp,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1490,%ebx
	movl	$fibase,%ecx
	movl	$zfibase,%edx
	pushl	$5
	calll	inisymb
	movl	$10,ibase
	movl	$256,%eax
	movl	$12,%ebx
	calll	makestrg
	movl	%eax,tabch
	movl	(%eax),%ebp
	movb	$0,8(%ebp)
	movl	(%eax),%ebp
	movb	$7,16(%ebp)
	movl	(%eax),%ebp
	movb	$7,17(%ebp)
	movl	(%eax),%ebp
	movb	$2,18(%ebp)
	movl	(%eax),%ebp
	movb	$7,19(%ebp)
	movl	(%eax),%ebp
	movb	$7,20(%ebp)
	movl	(%eax),%ebp
	movb	$2,21(%ebp)
	movl	(%eax),%ebp
	movb	$7,40(%ebp)
	movl	(%eax),%ebp
	movb	$11,42(%ebp)
	movl	(%eax),%ebp
	movb	$9,43(%ebp)
	movl	(%eax),%ebp
	movb	$10,47(%ebp)
	movl	(%eax),%ebp
	movb	$4,48(%ebp)
	movl	(%eax),%ebp
	movb	$5,49(%ebp)
	movl	(%eax),%ebp
	movb	$10,52(%ebp)
	movl	(%eax),%ebp
	movb	$6,54(%ebp)
	movl	(%eax),%ebp
	movb	$10,66(%ebp)
	movl	(%eax),%ebp
	movb	$1,67(%ebp)
	movl	(%eax),%ebp
	movb	$10,99(%ebp)
	movl	(%eax),%ebp
	movb	$10,101(%ebp)
	movl	(%eax),%ebp
	movb	$10,102(%ebp)
	movl	(%eax),%ebp
	movb	$10,104(%ebp)
	movl	(%eax),%ebp
	movb	$13,132(%ebp)
	movl	(%eax),%ebp
	movb	$0,135(%ebp)
	movl	$1024,lgbufat
	movl	lgbufat,%eax
	xorl	%ebx,%ebx
	calll	makestrg
	movl	%eax,bufat
	movl	$128,%eax
	xorl	%ebx,%ebx
	calll	makevect
	movl	%eax,cachch
	ret	
rdpopj:
	ret	
hashint:
	movl	%eax,%ebx
	movl	(%ebx),%ebp
	movl	4(%ebp),%eax
hashfast:
	movl	%eax,%ecx
	cmpw	$6,%ax
	jle	hashcour
	pushl	%ecx
	movl	$5,%ecx
hashf1:
	movl	(%ebx),%ebp
	movzbl	8(%ebp,%ecx),%edx
	addw	%ax,%ax
	addw	%dx,%ax
	decw	%cx
	jge	hashf1
	movl	$5,%ecx
hashf5:
	xchgl	%ecx,(%esp)
	decw	%cx
	movl	(%ebx),%ebp
	movzbl	8(%ebp,%ecx),%edx
	addw	%ax,%ax
	addw	%dx,%ax
	xchgl	%ecx,(%esp)
	decw	%cx
	jge	hashf5
	popl	%ecx
	jmp	hashend
hashcour:
	orw	%ax,%ax
	je	hashret
	jmp	hashcou3
hashcou1:
	movl	(%ebx),%ebp
	movzbl	8(%ebp,%ecx),%edx
	addw	%ax,%ax
	addw	%dx,%ax
hashcou3:
	decw	%cx
	jge	hashcou1
hashend:
	andw	$32767,%ax
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%edx
	orl	%edx,%edx
	jz	l9__1
	movl	%edx,%ebp
	cwtd
	idivw	%bp
	movzwl	%dx,%eax
	movl	%ebp,%edx
l9__1:
hashret:
	ret	
inisymb:
	pushl	%edx
	pushl	%ecx
	calll	crastrg
	movl	%eax,%ebx
	calll	crasymb
	popl	%edx
	movl	%edx,8(%eax)
	popl	%edx
	cmpl	%esi,%edx
	je	inisymr
	movl	%eax,(%edx)
inisymr:
	popl	%ecx
	popl	%edx
	movw	%dx,24(%eax)
	jmp	*%ecx
inicst:
	pushl	%ecx
	calll	crastrg
	movl	%eax,%ebx
	calll	crasymb
	movl	%eax,(%eax)
	popl	%ecx
	cmpl	%esi,%ecx
	je	inicstr
	movl	%eax,(%ecx)
inicstr:
	ret	
crasymb:
	calll	symballc
	pushl	%eax
	movl	cpkgc,%ebp
	movl	%ebp,12(%eax)
	movl	%ebx,28(%eax)
	movl	(%ebx),%ebp
	movl	4(%ebp),%eax
	calll	trysymb0
	popl	%eax
	cmpw	$1,%bx
	je	plac2d
	cmpw	$2,%bx
	je	plac3d12
	jmp	plac3d2n
inasymb:
	movl	zundef,%ebp
	movl	%ebp,(%eax)
inasymb2:
	movl	%esi,4(%eax)
	movw	$0,26(%eax)
	movl	cpkgc,%ebp
	movl	%ebp,12(%eax)
	movl	%esi,16(%eax)
	pushl	%eax
	movl	28(%eax),%ebx
	movl	(%ebx),%ebp
	movl	4(%ebp),%eax
	calll	trysymb0
	popl	%eax
	cmpw	$1,%bx
	je	plac2d
	cmpw	$2,%bx
	je	plac3d12
	jmp	plac3d2n
inacst:
	movl	%eax,(%eax)
	movl	$0,8(%eax)
	movw	$0,24(%eax)
	jmp	inasymb2
makefix:
	movl	%esi,negatif
	xorl	%ecx,%ecx
makefix0:
	xorl	%eax,%eax
	movl	(%ebx),%ebp
	movzbl	8(%ebp,%ecx),%edx
	cmpw	$43,%dx
	je	makefix8
	cmpw	$45,%dx
	jne	makefix1
	movl	%edx,negatif
	jmp	makefix8
makefix1:
	movl	(%ebx),%ebp
	movzbl	8(%ebp,%ecx),%edx
	cmpw	$47,%dx
	je	makefxr1
	cmpw	$48,%dx
	jl	makefxd1
	cmpw	$57,%dx
	jg	makefxd1
	subw	$48,%dx
	jmp	makefix2
makefxd1:
	cmpw	$65,%dx
	jl	makefxd2
	cmpw	$90,%dx
	jg	makefxd2
	subw	$65,%dx
	addw	$10,%dx
	jmp	makefix2
makefxd2:
	cmpw	$97,%dx
	jl	makefix2
	cmpw	$122,%dx
	jg	makefix2
	subw	$97,%dx
	addw	$10,%dx
makefix2:
	cmpw	$10,ibase
	je	makefix6
	imulw	ibase,%ax
	jo	makefix3
makefix3:
	addw	%dx,%ax
	jo	makefix4
makefix4:
	jmp	makefix8
makefix6:
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	movl	ibase,%ebx
	movl	$2,%edx
	calll	gatim2i
	popl	%ebx
	movl	$2,%edx
	calll	gaplus2i
	popl	%ecx
	popl	%ebx
makefix8:
	incw	%cx
	cmpw	tsymb000,%cx
	jne	makefix1
	cmpl	%esi,negatif
	je	makefixr
	jmp	gadinv
makefixr:
	ret	
makefxr1:
	cmpl	%esi,negatif
	je	makefixr2
	pushl	%ebx
	pushl	%ecx
	calll	gadinv
	popl	%ecx
	popl	%ebx
makefixr2:
	pushl	%eax
	incw	%cx
	movl	%esi,negatif
	calll	makefix0
	pushl	%eax
	movl	$2,%edx
	jmp	gadiv
makeflo:
	# CVATOF
	pushl	%ebp
	movl	(%ebx),%ebp
	addl	$8,%ebp
	movl	%ebp,crwork
	popl	%ebp
	movl	crwork,%ebp
	movl	tsymb000,%eax
	movb	$0,(%ebp,%eax)
	# Prepare a C function call with 1 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	crwork
	calll	_llrt_cvatof
	addl	$4,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	cmpl	$0,ffloat
	jne	laf__2
	calll	gcfloat
laf__2:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	# CVATOF
	ret	
nextfix:
	cmpw	tsymb000,%cx
	jne	nextxxx
	addl	$4,%esp
	jmp	makefix
nextflo:
	cmpw	tsymb000,%cx
	jne	nextxxx
	addl	$4,%esp
	jmp	makeflo
nextsym:
	cmpw	tsymb000,%cx
	jne	nextxxx
	addl	$4,%esp
	jmp	trysymi
nextxxx:
	movl	(%ebx),%ebp
	movzbl	8(%ebp,%ecx),%edx
	incw	%cx
	ret	
digitpi:
	movl	%edx,%eax
	cmpw	$48,%dx
	jl	digitpi1
	cmpw	$57,%dx
	jg	digitpi1
	subw	$48,%ax
	jmp	digitpi9
digitpi1:
	cmpw	$65,%dx
	jl	digitpi2
	cmpw	$90,%dx
	jg	digitpi2
	subw	$65,%ax
	jmp	digitpi8
digitpi2:
	cmpw	$97,%dx
	jl	digitpif
	cmpw	$122,%dx
	jg	digitpif
	subw	$97,%ax
digitpi8:
	addw	$10,%ax
digitpi9:
	cmpw	ibase,%ax
	jge	digitpif
	cmpw	$57,%ax
	jle	digitpt
	movl	%esi,all09
digitpit:
	ret	
digitpif:
	movl	%esi,%eax
	ret	
base10p:
	cmpw	$48,%dx
	jl	digitpif
	cmpw	$57,%dx
	jg	digitpif
	movl	%edx,%eax
	ret	
tryatom:
	orw	%ax,%ax
	jne	trynum
	cmpl	%esi,cpkgc
	jne	trynum
	movl	%esi,%eax
	ret	
trynum:
	movl	%eax,tsymb000
	movl	%ebx,asymb
	cmpl	%esi,quotes
	jne	trysymi
	xorl	%ecx,%ecx
	movl	%ecx,all09
	calll	nextsym
	cmpw	$46,%dx
	je	tryflo0
	cmpw	$45,%dx
	je	tryfix0
	cmpw	$43,%dx
	je	tryfix0
	calll	digitpi
	cmpl	%esi,%eax
	jne	tryfix1
	jmp	trysymi
tryfix0:
	calll	nextsym
	cmpw	$46,%dx
	je	tryflo0
	calll	digitpi
	cmpl	%esi,%eax
	je	trysymi
tryfix1:
	calll	nextfix
	calll	digitpi
	cmpl	%esi,%eax
	jne	tryfix1
	cmpw	$46,%dx
	je	tryflo2
	cmpw	$69,%dx
	je	tryflo3
	cmpw	$101,%dx
	je	tryflo3
	cmpw	$47,%dx
	je	tryfix2
	jmp	trysymi
tryfix2:
	calll	nextsym
	cmpw	$43,%dx
	je	tryfix3
	cmpw	$45,%dx
	je	tryfix3
	calll	digitpi
	cmpl	%esi,%eax
	je	trysymi
	jmp	tryfix4
tryfix3:
	calll	nextsym
	calll	digitpi
	cmpl	%esi,%eax
	je	trysymi
tryfix4:
	calll	nextfix
	calll	digitpi
	cmpl	%esi,%eax
	jne	tryfix4
	jmp	trysymi
tryflo0:
	calll	nextsym
	calll	base10p
	cmpl	%esi,%eax
	je	trysymi
tryflo1:
	calll	nextflo
	calll	base10p
	cmpl	%esi,%eax
	jne	tryflo1
	cmpw	$69,%dx
	je	tryflo4
	cmpw	$101,%dx
	je	tryflo4
	jmp	trysymi
tryflo2:
	cmpl	%esi,all09
	jne	tryflo1
	jmp	trysymi
tryflo3:
	cmpl	%esi,all09
	je	trysymi
tryflo4:
	calll	nextsym
	calll	base10p
	cmpl	%esi,%eax
	jne	tryflo6
	cmpw	$45,%dx
	je	tryflo5
	cmpw	$43,%dx
	jne	trysymi
tryflo5:
	calll	nextsym
	calll	base10p
	cmpl	%esi,%eax
	je	trysymi
tryflo6:
	calll	nextflo
	calll	base10p
	cmpl	%esi,%eax
	jne	tryflo6
	jmp	trysymi
trysymi:
	movl	tsymb000,%eax
trysymb:
	calll	trysymb0
trysymbx:
	orw	%bx,%bx
	je	trysymre
	cmpw	$1,%bx
	je	mak2d
	cmpw	$2,%bx
	je	mak3d12
mak3d2n:
	calll	symballc
plac3d2n:
	movl	28(%edx),%ecx
	movl	%ecx,28(%eax)
	movl	%eax,28(%edx)
	movl	20(%ecx),%ebp
	movl	%ebp,20(%eax)
trysymre:
	ret	
mak3d12:
	calll	symballc
plac3d12:
	movl	28(%edx),%ebp
	movl	%ebp,20(%eax)
	movl	%eax,28(%edx)
	movl	%edx,28(%eax)
	ret	
mak2d:
	movl	tsymb000,%ebx
	calll	strgallc
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	asymb,%ebp
	movl	(%ebp),%esi
	addl	$8,%esi
	movl	(%eax),%edi
	addl	$8,%edi
	movl	%ebx,%ecx
	jecxz	l__3
	cmpl	%edi,%esi
	jae	l__3
	decl	%ecx
	addl	%ecx,%esi
	addl	%ecx,%edi
	std
	movsb
l__3:
	rep
	movsb
	cld
	popl	%esi
	popl	%edi
	popl	%ecx
	movl	%eax,%ebx
	calll	symballc
	movl	%ebx,28(%eax)
	movl	ksymb,%edx
plac2d:
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%edx,4),%ebp
	movl	%ebp,20(%eax)
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	%eax,8(%ebp,%edx,4)
	ret	
trysymb0:
	movl	%eax,tsymb000
	movl	%ebx,asymb
	calll	hashfast
	movl	%eax,ksymb
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%eax,4),%ecx
	movl	%ecx,hsymb
	movl	tsymb000,%eax
	jmp	trysymb6
trysymb1:
	movl	28(%ecx),%edx
	cmpl	%edx,bstrg
	ja	lmac1491
	cmpl	%esi,%edx
	jb	trysymb2
lmac1491:
	movl	20(%edx),%edx
trysymb2:
	movl	(%edx),%ebp
	movl	4(%ebp),%ebx
	cmpw	%bx,%ax
	jne	trysymb5
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	asymb,%ebp
	movl	(%ebp),%esi
	addl	$8,%esi
	movl	(%edx),%edi
	addl	$8,%edi
	movl	%eax,%ecx
	orl	%ecx,%ecx
	repz
	cmpsb
	popl	%esi
	popl	%edi
	popl	%ecx
	jz	trysymb8
trysymb5:
	movl	%ecx,hsymb
	movl	20(%ecx),%ecx
trysymb6:
	cmpl	%ecx,bfloat
	jbe	trysymb1
	movl	$1,%ebx
	movl	ksymb,%edx
	ret	
trysymb8:
	movl	%ecx,%eax
	movl	hsymb,%ebx
	cmpl	%ebx,%eax
	je	trysy3d
	movl	20(%eax),%ebp
	movl	%ebp,20(%ebx)
	movl	ksymb,%ecx
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%ecx,4),%ebp
	movl	%ebp,20(%eax)
	movl	hashtab,%ebp
	movl	(%ebp),%ebp
	movl	%eax,8(%ebp,%ecx,4)
	jmp	trysy3d
trysymp:
	pushl	cpkgc
	movl	%eax,cpkgc
	movl	(%ebx),%ebp
	movl	4(%ebp),%eax
	movl	$trysymb,%ecx
	calll	sysprot
	popl	%eax
	popl	cpkgc
	jmp	*%ecx
trysympk:
	pushl	cpkgc
	movl	%eax,cpkgc
	movl	%ebx,%eax
	movl	$trysymp1,%ecx
	calll	sysprot
	popl	%eax
	popl	cpkgc
	jmp	*%ecx
trysymp1:
	pushl	$trysymbx
	jmp	trysy3d
pkgcequ:
	pushl	%eax
	movl	12(%eax),%eax
	movl	cpkgc,%ebx
	calll	equal
	movl	%eax,%ebx
	popl	%eax
	ret	
trysy3d:
	movl	cpkgc,%edx
	cmpl	%esi,%edx
	jb	lmac1492
	cmpl	%edi,%edx
	jb	trysy3s
lmac1492:
trysy3c:
	calll	pkgcequ
	cmpl	%esi,%ebx
	jne	trysyr4
	movl	28(%eax),%ebp
	cmpl	%ebp,bstrg
	ja	trysy3c0
	cmpl	%ebp,%esi
	jbe	trysy3c0
trysyr1:
	movl	$2,%ebx
	movl	%eax,%edx
	ret	
trysy3c0:
	pushl	%eax
	pushl	%eax
trysy3c1:
	movl	28(%eax),%eax
	calll	pkgcequ
	cmpl	%esi,%ebx
	jne	trysyr3
	movl	20(%eax),%ebp
	cmpl	%ebp,bstrg
	ja	lmac1493
	cmpl	%ebp,%esi
	ja	trysy3c2
lmac1493:
	movl	%eax,4(%esp)
trysy3c2:
	cmpl	(%esp),%eax
	jne	trysy3c1
	addl	$4,%esp
	popl	%edx
trysyr2:
	movl	$3,%ebx
	ret	
trysyr3:
	addl	$8,%esp
trysyr4:
	xorl	%ebx,%ebx
	ret	
trysy3s:
	cmpl	12(%eax),%edx
	je	trysyr4
	movl	28(%eax),%ebp
	cmpl	%ebp,bstrg
	ja	lmac1494
	cmpl	%ebp,%esi
	ja	trysyr1
lmac1494:
	movl	%eax,%ebx
	movl	%eax,%ecx
trysy31:
	movl	28(%eax),%eax
	cmpl	12(%eax),%edx
	je	trysyr4
	movl	20(%eax),%ebp
	cmpl	%ebp,bstrg
	ja	lmac1495
	cmpl	%ebp,%esi
	ja	trysy32
lmac1495:
	movl	%eax,%ebx
trysy32:
	cmpl	%ecx,%eax
	jne	trysy31
	movl	%ebx,%edx
	jmp	trysyr2
istdsym:
	movl	zundef,%ebp
	movl	%ebp,(%eax)
	movl	%esi,4(%eax)
	movl	$0,8(%eax)
	movw	$0,24(%eax)
	movw	$0,26(%eax)
	movl	%esi,16(%eax)
	ret	
symballc:
	movl	fsymb,%eax
	orl	%eax,%eax
	jne	symball1
	calll	gcsymb
	movl	fsymb,%eax
symball1:
	movl	20(%eax),%ebp
	movl	%ebp,fsymb
	calll	istdsym
	movl	cpkgc,%ebp
	movl	%ebp,12(%eax)
	ret	
crastrg:
	pushl	%ebx
	movl	%eax,%ebx
	calll	strgallc
	popl	%ecx
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	%ecx,%esi
	movl	(%eax),%edi
	addl	$8,%edi
	movl	%ebx,%ecx
	rep
	movsb
	popl	%esi
	popl	%edi
	popl	%ecx
	ret	
getch:
	cmpl	%esi,ringur
	je	getch1
	movl	$1,getchfl
	movl	ringur,%edx
	movl	4(%edx),%ebp
	movl	%ebp,ringur
	movl	(%edx),%edx
	jmp	getch2
getch1:
	cmpl	%esi,impli
	jne	getch3
	movl	$0,getchfl
	calll	inphy
getch2:
	movl	$12,%ecx
	cmpw	$255,%dx
	jg	getch21
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%edx),%ecx
getch21:
	ret	
getch3:
	movl	impld,%edx
	movl	$2,getchfl
	cmpl	%esi,%edx
	je	getch4
	cmpl	%edi,%edx
	jb	erlec1
	movl	4(%edx),%ebp
	movl	%ebp,impld
	movl	(%edx),%edx
	cmpl	%edx,bfloat
	jbe	erlec9
	jmp	getch2
getch4:
	movl	$0,impld
	movl	$32,%edx
	jmp	getch2
getcv:
	calll	getch
	jmp	*%cs:tgetcv(,%ecx,4)
tgetcv:
	.long	getcv
	.long	getcvc
	.long	getcvs
	.long	getcv1
	.long	getcvr
	.long	getcvr
	.long	getcvr
	.long	getcvr
	.long	getcvr
	.long	getcvr
	.long	getcvr
	.long	getcvr
	.long	getcv2
	.long	getcvr
	.long	getcvr
getcvr:
	ret	
getcv1:
	movl	%edx,quotes
	calll	getch
	movl	$12,%ecx
	ret	
getcv2:
	movl	zstatrc,%ecx
	cmpl	%esi,(%ecx)
	jne	getcv3
	cmpw	$65,%dx
	jl	getcv3
	cmpw	$90,%dx
	jg	getcv3
	addl	$32,%edx
getcv3:
	movl	$12,%ecx
	ret	
getcvc:
	calll	getch
	cmpw	$2,%cx
	jne	getcvc
getcvs:
	movl	$7,%ecx
	ret	
rd1:
	movl	%esi,quotes
	xorl	%ebx,%ebx
rdsep:
	calll	getcv
	jmp	*%cs:rdtb1(,%ecx,4)
rdtb1:
	.long	erlec1
	.long	erlec1
	.long	erlec1
	.long	erlec1
	.long	rdparo
	.long	rdparf
	.long	rddot
	.long	rdsep
	.long	rdpkgc
	.long	rdsplic
	.long	rdmac
	.long	rdstr
	.long	rdpname
	.long	rdsymb
	.long	rdmsymb
rdparo:
	incw	rdprd
	xorl	%ecx,%ecx
	ret	
rdparf:
	decw	rdprd
	jge	rdparfr
	movl	$0,rdprd
rdparfr:
	movl	$1,%ecx
	ret	
rddot:
	cmpw	$46,%dx
	jne	rddot1
	calll	getcv
	cmpw	$12,%cx
	je	rddot2
	movl	$2,%ecx
	jmp	rereada4
rddot1:
	movl	$2,%ecx
	ret	
rddot2:
	movl	bufat,%ebp
	movl	(%ebp),%ebp
	movb	$46,8(%ebp)
	movl	$1,%ebx
	jmp	rdpname
rdpkgc:
	movl	zsyscol,%eax
	movl	(%eax),%eax
	jmp	rdpkgc2
rdpkgc1:
	movl	%ebx,%eax
	movl	bufat,%ebx
	calll	tryatom
	cmpl	%esi,%eax
	jb	erlec6
	cmpl	%edi,%eax
	jae	erlec6
rdpkgc2:
	pushl	cpkgc
	movl	%eax,cpkgc
	movl	$readi,%ecx
	calll	sysprot
	popl	%eax
	popl	cpkgc
	pushl	%ecx
	movl	$3,%ecx
	ret	
rdsplic:
	calll	asciii
	movl	%esi,%ebx
	calll	apply
	cmpl	%esi,%eax
	je	rdsplic1
	cmpl	%edi,%eax
	jae	rdsplic1
	jmp	erlec10
rdsplic1:
	movl	$4,%ecx
	ret	
rdmac:
	calll	asciii
	movl	%esi,%ebx
	calll	apply
rdretobj:
	movl	$3,%ecx
	ret	
rdstr0:
	movl	bufat,%ebp
	movl	(%ebp),%ebp
	movb	%dl,8(%ebp,%ebx)
	incw	%bx
	cmpw	lgbufat,%bx
	jge	erlec2
rdstr:
	calll	getch
	cmpw	$11,%cx
	jne	rdstr0
	calll	getch
	cmpw	$11,%cx
	je	rdstr0
	calll	rereada4
	calll	strgallc
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	bufat,%ebp
	movl	(%ebp),%esi
	addl	$8,%esi
	movl	(%eax),%edi
	addl	$8,%edi
	movl	%ebx,%ecx
	jecxz	l__4
	cmpl	%edi,%esi
	jae	l__4
	decl	%ecx
	addl	%ecx,%esi
	addl	%ecx,%edi
	std
	movsb
l__4:
	rep
	movsb
	cld
	popl	%esi
	popl	%edi
	popl	%ecx
	cmpl	%esi,cpkgc
	je	rdretobj
	movl	cpkgc,%ebp
	movl	%ebp,4(%eax)
	jmp	rdretobj
rdpname:
	movl	bufat,%ebp
	movl	(%ebp),%ebp
	movb	%dl,8(%ebp,%ebx)
	incw	%bx
	cmpw	$128,%bx
	jge	erlec3
	calll	getcv
	cmpw	$12,%cx
	je	rdpname
	cmpw	$6,%cx
	je	rdpname
rdfinsym:
	cmpw	$8,%cx
	je	rdpkgc1
	calll	rereada4
	movl	%ebx,%eax
	movl	bufat,%ebx
	calll	tryatom
	jmp	rdretobj
rdsymb:
	movl	%edx,quotes
	jmp	rdsymb1
rdsymb0:
	movl	bufat,%ebp
	movl	(%ebp),%ebp
	movb	%dl,8(%ebp,%ebx)
	incw	%bx
	cmpw	$256,%bx
	jge	erlec5
rdsymb1:
	calll	getch
	cmpw	$13,%cx
	jne	rdsymb0
	calll	getch
	cmpw	$13,%cx
	je	rdsymb0
	jmp	rdfinsym
rdmsymb:
	movl	%edx,quotes
	movl	bufat,%ebp
	movl	(%ebp),%ebp
	movb	%dl,8(%ebp)
	movl	$1,%ebx
	calll	getcv
	jmp	rdfinsym
readi:
	calll	rd1
read0:
	jmp	*%cs:readt1(,%ecx,4)
readt1:
	.long	read2
	.long	erlec4
	.long	erlec4
	.long	rdpopj
	.long	read1
read1:
	cmpl	%esi,4(%eax)
	jne	erlec10
	movl	(%eax),%eax
	ret	
read2:
	pushl	curread
	movl	zlcuread,%eax
	cmpl	%edi,fcons
	jb	l__5
l1__5:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	pushl	%eax
	movl	%eax,curread
read3:
	pushl	%eax
	calll	rd1
read31:
	jmp	*%cs:readt2(,%ecx,4)
readt2:
	.long	read6
	.long	read7
	.long	read9
	.long	read4
	.long	read5
read4:
	cmpl	%edi,fcons
	jb	l__6
l1__6:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	popl	%ebx
	movl	%eax,4(%ebx)
	jmp	read3
read5:
	cmpl	%edi,%eax
	jae	read51
	popl	%eax
	jmp	read3
read51:
	popl	%ebx
	movl	%eax,4(%ebx)
read52:
	cmpl	%edi,4(%eax)
	jb	read3
	movl	4(%eax),%eax
	jmp	read52
read6:
	pushl	$read4
	jmp	read2
read7:
	popl	%eax
read71:
	popl	%eax
	movl	4(%eax),%eax
	popl	curread
	ret	
read9:
	calll	readi
	pushl	%eax
	calll	rd1
	popl	%eax
	popl	%ebx
	jmp	*%cs:readt3(,%ecx,4)
readt3:
	.long	erlec7
	.long	read91
	.long	erlec7
	.long	erlec7
	.long	erlec7
read91:
	movl	%eax,4(%ebx)
	jmp	read71
erlec1:
	movl	$1,%eax
	jmp	erlec
erlec2:
	movl	$2,%eax
	jmp	erlec
erlec3:
	movl	$3,%eax
	jmp	erlec
erlec4:
	movl	$4,%eax
	jmp	erlec
erlec5:
	movl	$5,%eax
	jmp	erlec
erlec6:
	movl	$6,%eax
	jmp	erlec
erlec7:
	movl	$7,%eax
	jmp	erlec
erlec8:
	movl	$8,%eax
	jmp	erlec
erlec9:
	movl	$9,%eax
	jmp	erlec
erlec10:
	movl	$10,%eax
	jmp	erlec
erlec11:
	movl	$11,%eax
	jmp	erlec
erlec:
	cmpl	%esi,impli
	jne	erlecc1
	movl	zlread,%ebx
	jmp	errsxt
erlecc1:
	movl	zimplode,%ebx
	movl	%esi,impli
	movl	%esi,impld
	jmp	errsxt

	# FENTRY lread
	.align	4
lread:
	calll	getcv
	cmpw	$5,%cx
	je	lread
	cmpw	$7,%cx
	je	lread
	calll	rereada4
	movl	zstinread,%eax
	pushl	(%eax)
	movl	zt,%ebp
	movl	%ebp,(%eax)
	movl	$readi,%ecx
	calll	sysprot
lreadend:
	popl	%eax
	movl	zstinread,%edx
	popl	(%edx)
	jmp	*%ecx

	# FENTRY implode
	.align	4
implode:
	pushl	impld
	pushl	impli
	pushl	ringur
	movl	%eax,impld
	movl	zt,%ebp
	movl	%ebp,impli
	movl	%esi,ringur
	movl	$readi,%ecx
	calll	sysprot
	popl	%eax
	popl	ringur
	popl	impli
	popl	impld
	jmp	*%ecx

	# FENTRY implodech
	.align	4
implodech:
	movl	%eax,%ebx
	movl	%esi,%ecx
impldech1:
	cmpl	%edi,%ebx
	jb	impldech2
	movl	(%ebx),%eax
	calll	cascii
	cmpl	%edi,fcons
	jb	l__7
l1__7:
	xchgl	%edi,fcons
	movl	%eax,(%edi)
	xchgl	%ecx,4(%edi)
	xchgl	%edi,%ecx
	xchgl	%edi,fcons
	movl	4(%ebx),%ebx
	jmp	impldech1
impldech2:
	movl	%ecx,%eax
	calll	nreverse
	jmp	implode
	ret	

	# FENTRY readch
	.align	4
readch:
	pushl	$asciii
	jmp	getch

	# FENTRY readcod
	.align	4
readcod:
	calll	getch
	movl	%edx,%eax
	ret	

	# FENTRY lcuread
	.align	4
lcuread:
	movl	curread,%eax
	ret	

	# FENTRY teread
	.align	4
teread:
	movl	%esi,ringur
	movl	$0,inmax
	ret	

	# FENTRY reread
	.align	4
reread:
	cmpl	%esi,%eax
	je	reread9
	cmpl	%edi,%eax
	jb	rereade
	movl	%esi,%ebx
	cmpl	%edi,fcons
	jb	l__8
l1__8:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	pushl	%ebx
reread4:
	movl	(%eax),%ecx
	cmpl	%edi,fcons
	jb	l__9
l1__9:
	movl	fcons,%ebp
	movl	%ecx,(%ebp)
	movl	%esi,%ecx
	xchgl	%ecx,4(%ebp)
	xchgl	%ecx,fcons
	movl	%ecx,4(%ebx)
	movl	%ecx,%ebx
	movl	4(%eax),%eax
	cmpl	%edi,%eax
	jae	reread4
	movl	ringur,%ebp
	movl	%ebp,4(%ebx)
	popl	%eax
	movl	4(%eax),%eax
	movl	%eax,ringur
reread9:
	movl	ringur,%eax
	ret	
rereade:
	movl	zreread,%ebx
	jmp	errnla
rereada4:
	cmpw	$0,getchfl
	jne	rrda41
	decw	polig
	ret	
rrda41:
	cmpl	%edi,fcons
	jb	l__10
l1__10:
	movl	fcons,%ebp
	movl	%edx,(%ebp)
	movl	ringur,%edx
	xchgl	%edx,4(%ebp)
	xchgl	%edx,fcons
	movl	%edx,ringur
	ret	

	# FENTRY peekch
	.align	4
peekch:
	calll	getch
	pushl	%edx
	calll	rereada4
	popl	%edx
	jmp	asciii

	# FENTRY peekcn
	.align	4
peekcn:
	calll	getch
	movl	%edx,%eax
	jmp	rereada4

	# FENTRY readline
	.align	4
readline:
	calll	getch
	movl	%esi,%eax
	cmpw	$13,%dx
	jne	readl2
	calll	getch
	movl	%esi,%eax
	cmpw	$10,%dx
	jne	readl2
	ret	
readl2:
	cmpw	$10,%dx
	je	readl4
readl3:
	cmpw	$10,%dx
	je	readl5
	cmpl	%edi,fcons
	jb	l__11
l1__11:
	xchgl	%edi,fcons
	movl	%edx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
readl4:
	pushl	%eax
	calll	getch
	popl	%eax
	cmpw	$13,%dx
	jne	readl3
readl5:
	jmp	nreverse

	# FENTRY stratom
	.align	4
stratom:
	cmpl	%eax,bfloat
	jbe	erstrat1
	cmpl	%ebx,bstrg
	ja	erstrat2
	cmpl	%esi,%ebx
	jae	erstrat2
	movl	%ecx,quotes
	jmp	tryatom
erstrat1:
	movl	zstratom,%ebx
	jmp	errnia
erstrat2:
	movl	%ebx,%eax
	movl	zstratom,%ebx
	jmp	errnsa

	# FENTRY readstrg
	.align	4
readstrg:
	calll	getch
	xorl	%ebx,%ebx
	cmpw	$10,%dx
	je	reads4
	cmpw	$13,%dx
	jne	reads3
	calll	getch
	xorl	%ebx,%ebx
reads3:
	cmpw	$10,%dx
	je	reads5
	movl	bufat,%ebp
	movl	(%ebp),%ebp
	movb	%dl,8(%ebp,%ebx)
	cmpw	lgbufat,%bx
	je	reads5
	incw	%bx
reads4:
	pushl	%ebx
	calll	getch
	popl	%ebx
	cmpw	$13,%dx
	jne	reads3
reads5:
	calll	strgallc
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	bufat,%ebp
	movl	(%ebp),%esi
	addl	$8,%esi
	movl	(%eax),%edi
	addl	$8,%edi
	movl	%ebx,%ecx
	jecxz	l__12
	cmpl	%edi,%esi
	jae	l__12
	decl	%ecx
	addl	%ecx,%esi
	addl	%ecx,%edi
	std
	movsb
l__12:
	rep
	movsb
	cld
	popl	%esi
	popl	%edi
	popl	%ecx
	ret	

	# FENTRY readdltd
	.align	4
readdltd:
	cmpl	%eax,bfloat
	jbe	readdltr
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%eax),%ebx
	pushl	%eax
	pushl	%ebx
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movb	$5,8(%ebp,%eax)
	movl	$read2,%ecx
	calll	sysprot
	popl	%eax
	popl	%ebx
	popl	%edx
	movl	tabch,%ebp
	movl	(%ebp),%ebp
	movb	%bl,8(%ebp,%edx)
	jmp	*%ecx
readdltr:
	movl	zreaddltd,%ebx
	jmp	errnia
asciii:
	movl	%edx,%eax
	cmpl	%eax,bfloat
	jbe	ascierr
	orw	%ax,%ax
	jl	fascii3
	cmpw	$128,%ax
	jge	fascii3
	movl	cachch,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%eax,4),%ebx
	cmpl	%esi,%ebx
	jb	fascii3
	cmpl	%edi,%ebx
	jae	fascii3
	movl	%ebx,%eax
	ret	
fascii3:
	pushl	%eax
	xorl	%ebx,%ebx
	movl	bufat,%ebp
	movl	(%ebp),%ebp
	movb	%al,8(%ebp,%ebx)
	incw	%bx
	movl	%ebx,%eax
	movl	bufat,%ebx
	pushl	cpkgc
	movl	$fascii8,%ecx
	calll	sysprot
	popl	%eax
	popl	cpkgc
	popl	%ebx
	cmpl	%esi,%eax
	jb	fascii7
	cmpl	%edi,%eax
	jae	fascii7
	orw	%bx,%bx
	jl	fascii7
	cmpw	$128,%bx
	jge	fascii7
	movl	cachch,%ebp
	movl	(%ebp),%ebp
	movl	%eax,8(%ebp,%ebx,4)
fascii7:
	jmp	*%ecx
fascii8:
	movl	%esi,cpkgc
	jmp	tryatom
ascierr:
	movl	zfascii,%ebx
	jmp	errnia

	# FENTRY fascii
	.align	4
fascii:
	movl	%eax,%edx
	jmp	asciii

	# FENTRY cascii
	.align	4
cascii:
	movl	zcascii,%ebp
	movl	%ebp,savea4
	calll	stringa1
	movl	(%eax),%ebp
	movzbl	8(%ebp),%eax
	ret	

	# FENTRY concatpk
	.align	4
concatpk:
	cmpl	%esi,%eax
	jb	concpkr1
	cmpl	%edi,%eax
	jae	concpkr1
	cmpl	%esi,%ebx
	jb	concpkr2
	cmpl	%edi,%ebx
	jae	concpkr2
concpk0:
	cmpl	%esi,%ebx
	je	concpkr
	pushl	%ebx
	movl	12(%ebx),%ebx
	calll	concpk0
	popl	%ebx
	jmp	trysympk
concpkr:
	ret	
concpkr2:
	movl	%ebx,%eax
concpkr1:
	movl	zconcatpk,%ebx
	jmp	errsym

	# FENTRY uppercase
	.align	4
uppercase:
	cmpl	%eax,bfloat
	jbe	upper9
	cmpw	$97,%ax
	jl	upper8
	cmpw	$122,%ax
	jg	upper8
	subl	$32,%eax
upper8:
	ret	
upper9:
	movl	zuppercase,%ebx
	jmp	errnia

	# FENTRY lowercase
	.align	4
lowercase:
	cmpl	%eax,bfloat
	jbe	lower9
	cmpw	$65,%ax
	jl	lower8
	cmpw	$90,%ax
	jg	lower8
	addl	$32,%eax
lower8:
	ret	
lower9:
	movl	zlowercase,%ebx
	jmp	errnia

	# FENTRY asciip
	.align	4
asciip:
	cmpl	%eax,bfloat
	jbe	asciipn
	orw	%ax,%ax
	jl	asciipn
	cmpw	$255,%ax
	jle	asciipt
asciipn:
	movl	%esi,%eax
asciipt:
	ret	

	# FENTRY digitp
	.align	4
digitp:
	cmpl	%eax,bfloat
	jbe	digitpn
	cmpw	$48,%ax
	jl	digitpn
	cmpw	$57,%ax
	jle	digitpt
digitpn:
	movl	%esi,%eax
digitpt:
	ret	

	# FENTRY letterp
	.align	4
letterp:
	cmpl	%eax,bfloat
	jbe	lettern
	cmpw	$65,%ax
	jl	lettere
	cmpw	$90,%ax
	jle	lettert
lettere:
	cmpw	$97,%ax
	jl	lettern
	cmpw	$122,%ax
	jle	lettert
lettern:
	movl	%esi,%eax
lettert:
	ret	

	# FENTRY fibase
	.align	4
fibase:
	movl	zfibase,%ebx
	movl	ibase,%ecx
	pushl	$2
	pushl	$36
	calll	getsetn
	movl	%eax,ibase
	ret	
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
