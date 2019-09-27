	.file	"number.asm"
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
	.globl	zsyspkgc
	.globl	mstack
	.globl	zquote
moinsun:
	.long	0
fzero:
	.long	0
fltun:
	.long	0
fltmun:
	.long	0
fltimax:
	.long	0
fltimin:
	.long	0
cpfnt:
	.long	0
zsysgen:
	.long	0
pnmac445:
	.string	"genarith"
	.even
pnmac446:
	.string	"numberp"
	.even
pnmac447:
	.string	"integerp"
	.even
pnmac448:
	.string	"rationalp"
	.even
pnmac449:
	.string	"float"
	.even
pnmac450:
	.string	"fix"
	.even
pnmac451:
	.string	"truncate"
	.even
pnmac452:
	.string	"1+"
	.even
pnmac453:
	.string	"1-"
	.even
pnmac454:
	.string	"abs"
	.even
pnmac455:
	.string	"+"
	.even
pnmac456:
	.string	"0-"
	.even
pnmac457:
	.string	"-"
	.even
pnmac458:
	.string	"*"
	.even
pnmac459:
	.string	"1/"
	.even
pnmac460:
	.string	"//"
	.even
pnmac461:
	.string	"/"
	.even
pnmac462:
	.string	"quo"
	.even
pnmac463:
	.string	"quotient"
	.even
pnmac464:
	.string	"quomod"
	.even
zex:
	.long	0
pnmac465:
	.string	"ex"
	.even
zexmod:
	.long	0
pnmac466:
	.string	"mod"
	.even
pnmac467:
	.string	"modulo"
	.even
pnmac468:
	.string	"<?>"
	.even
pnmac469:
	.string	"="
	.even
pnmac470:
	.string	"<>"
	.even
pnmac471:
	.string	"/="
	.even
pnmac472:
	.string	">="
	.even
pnmac473:
	.string	">"
	.even
pnmac474:
	.string	"<="
	.even
pnmac475:
	.string	"<"
	.even
pnmac476:
	.string	"zerop"
	.even
pnmac477:
	.string	"plusp"
	.even
pnmac478:
	.string	"minusp"
	.even
pnmac479:
	.string	"min"
	.even
pnmac480:
	.string	"max"
	.even
pnmac481:
	.string	"sin"
	.even
pnmac482:
	.string	"cos"
	.even
pnmac483:
	.string	"asin"
	.even
pnmac484:
	.string	"acos"
	.even
pnmac485:
	.string	"atan"
	.even
pnmac486:
	.string	"exp"
	.even
pnmac487:
	.string	"log"
	.even
pnmac488:
	.string	"log10"
	.even
pnmac489:
	.string	"power"
	.even
pnmac490:
	.string	"sqrt"
	.even
pnmac491:
	.string	"most-positive-fixnum"
	.even
pnmac492:
	.string	"most-negative-fixnum"
	.even
pnmac493:
	.string	"minus-0-fixnum"
	.even
	.globl	_accusingle1
	.globl	_accusingle2
znumberp:
	.long	0
zintgerp:
	.long	0
zrationalp:
	.long	0
zllfloat:
	.long	0
zlltrunc:
	.long	0
	.globl	aux1
zllfix:
	.long	0
zgaadd1:
	.long	0
zgasub1:
	.long	0
zgaabs:
	.long	0
zgaplus:
	.long	0
zgatimes:
	.long	0
zgadinv:
	.long	0
zgadiff:
	.long	0
zgadrev:
	.long	0
zgadiv:
	.long	0
zgaquomod:
	.long	0
zgamod:
	.long	0
zgacomp:
	.long	0
zzerop:
	.long	0
zminusp:
	.long	0
zplusp:
	.long	0
zgaeqen:
	.long	0
zganeqn:
	.long	0
zgagt:
	.long	0
zgage:
	.long	0
zgalt:
	.long	0
zgale:
	.long	0
zmin:
	.long	0
zmax:
	.long	0
zllsin:
	.long	0
zllcos:
	.long	0
zllasin:
	.long	0
zllacos:
	.long	0
zllatan:
	.long	0
zllexp:
	.long	0
zlllog:
	.long	0
zlllog10:
	.long	0
zllpower:
	.long	0
zllsqrt:
	.long	0
zllfixmax:
	.long	0
zllfixmin:
	.long	0
zllminus0:
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
	.globl	errfs
	.globl	errgen
	.globl	errnna
	.globl	errnia
	.globl	errnfa
	.globl	errnsa
	.globl	errnla
	.globl	errnva
	.globl	errwna
	.globl	errstl
	.globl	err0dv
	.globl	gettype
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	inisymb
	.globl	inicst
	.globl	evalcar
	.globl	evala1
	.globl	apply
	.globl	ffuncall
	.globl	getfns
	.globl	nreverse
	.globl	ffsymbol
	.globl	ini_nbs
	.globl	zex
	.globl	gaeqn
	.globl	gaplus2i
	.globl	gadiff2i
	.globl	gatim2i
	.globl	gadinv
	.globl	gadiv
	.globl	llfix
	.globl	llfloat
	.globl	lltrunc
	.globl	zlltrunc
	.globl	llsin
	.globl	llcos
	.globl	llasin
	.globl	llacos
	.globl	llatan
	.globl	llexp
	.globl	lllog
	.globl	llpower
	.globl	llsqrt
	.globl	gacomp
	.globl	gaeqen
	.globl	galt
	.globl	gagt
	.globl	gaadd1
	.globl	gasub1
	.globl	gaquomod
	.globl	zgaquomod
	.globl	gaabs
	.globl	gadrev
	.globl	intgerp
	.globl	numberp
	.globl	gamod
	.globl	bangen1
	.globl	zexmod
	.globl	zllfloat
	.globl	zllfix
	.globl	fzero
	.globl	fltun
	.globl	fltmun
	.globl	fltimax
	.globl	fltimin

	# FENTRY ini_nbs
	.align	4
ini_nbs:
	movl	$8,%eax
	movl	$pnmac445,%ebx
	movl	$zsysgen,%ecx
	calll	inicst
	movl	%esi,(%eax)
	movl	zsyspkgc,%ebp
	movl	%ebp,12(%eax)
	movl	$7,%eax
	movl	$pnmac446,%ebx
	movl	$numberp,%ecx
	movl	$znumberp,%edx
	pushl	$2
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac447,%ebx
	movl	$intgerp,%ecx
	movl	$zintgerp,%edx
	pushl	$2
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac448,%ebx
	movl	$rationalp,%ecx
	movl	$zrationalp,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac449,%ebx
	movl	$llfloat,%ecx
	movl	$zllfloat,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac450,%ebx
	movl	$llfix,%ecx
	movl	$zllfix,%edx
	pushl	$2
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac451,%ebx
	movl	$lltrunc,%ecx
	movl	$zlltrunc,%edx
	pushl	$2
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac452,%ebx
	movl	$gaadd1,%ecx
	movl	$zgaadd1,%edx
	pushl	$2
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac453,%ebx
	movl	$gasub1,%ecx
	movl	$zgasub1,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac454,%ebx
	movl	$gaabs,%ecx
	movl	$zgaabs,%edx
	pushl	$2
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac455,%ebx
	movl	$gaplus,%ecx
	movl	$zgaplus,%edx
	pushl	$5
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac456,%ebx
	movl	$gadinv,%ecx
	movl	$zgadinv,%edx
	pushl	$2
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac457,%ebx
	movl	$gadiff,%ecx
	movl	$zgadiff,%edx
	pushl	$5
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac458,%ebx
	movl	$gatimes,%ecx
	movl	$zgatimes,%edx
	pushl	$5
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac459,%ebx
	movl	$gadrev,%ecx
	movl	$zgadrev,%edx
	pushl	$2
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac460,%ebx
	movl	$gadiv,%ecx
	movl	$zgadiv,%edx
	pushl	$5
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac461,%ebx
	movl	$gadiv,%ecx
	movl	$zgadiv,%edx
	pushl	$5
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac462,%ebx
	movl	$gaquomod,%ecx
	movl	$zgaquomod,%edx
	pushl	$3
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac463,%ebx
	movl	$gaquomod,%ecx
	movl	$zgaquomod,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac464,%ebx
	movl	$gaquomod,%ecx
	movl	$zgaquomod,%edx
	pushl	$3
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac465,%ebx
	movl	$zex,%ecx
	calll	inicst
	movl	$3,%eax
	movl	$pnmac466,%ebx
	movl	$zexmod,%ecx
	calll	inicst
	movl	$0,(%eax)
	movl	zex,%ebp
	movl	%ebp,12(%eax)
	movl	$6,%eax
	movl	$pnmac467,%ebx
	movl	$gamod,%ecx
	movl	$zgamod,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac468,%ebx
	movl	$gacomp,%ecx
	movl	$zgacomp,%edx
	pushl	$3
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac469,%ebx
	movl	$gaeqen,%ecx
	movl	$zgaeqen,%edx
	pushl	$5
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac470,%ebx
	movl	$ganeqn,%ecx
	movl	$zganeqn,%edx
	pushl	$3
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac471,%ebx
	movl	$ganeqn,%ecx
	movl	$zganeqn,%edx
	pushl	$3
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac472,%ebx
	movl	$gage,%ecx
	movl	$zgage,%edx
	pushl	$5
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac473,%ebx
	movl	$gagt,%ecx
	movl	$zgagt,%edx
	pushl	$5
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac474,%ebx
	movl	$gale,%ecx
	movl	$zgale,%edx
	pushl	$5
	calll	inisymb
	movl	$1,%eax
	movl	$pnmac475,%ebx
	movl	$galt,%ecx
	movl	$zgalt,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac476,%ebx
	movl	$zerop,%ecx
	movl	$zzerop,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac477,%ebx
	movl	$plusp,%ecx
	movl	$zplusp,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac478,%ebx
	movl	$minusp,%ecx
	movl	$zminusp,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac479,%ebx
	movl	$min,%ecx
	movl	$zmin,%edx
	pushl	$5
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac480,%ebx
	movl	$max,%ecx
	movl	$zmax,%edx
	pushl	$5
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac481,%ebx
	movl	$llsin,%ecx
	movl	$zllsin,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac482,%ebx
	movl	$llcos,%ecx
	movl	$zllcos,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac483,%ebx
	movl	$llasin,%ecx
	movl	$zllasin,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac484,%ebx
	movl	$llacos,%ecx
	movl	$zllacos,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac485,%ebx
	movl	$llatan,%ecx
	movl	$zllatan,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac486,%ebx
	movl	$llexp,%ecx
	movl	$zllexp,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac487,%ebx
	movl	$lllog,%ecx
	movl	$zlllog,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac488,%ebx
	movl	$lllog10,%ecx
	movl	$zlllog10,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac489,%ebx
	movl	$llpower,%ecx
	movl	$zllpower,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac490,%ebx
	movl	$llsqrt,%ecx
	movl	$zllsqrt,%edx
	pushl	$2
	calll	inisymb
	movl	$20,%eax
	movl	$pnmac491,%ebx
	movl	$llfixmax,%ecx
	movl	$zllfixmax,%edx
	pushl	$1
	calll	inisymb
	movl	$20,%eax
	movl	$pnmac492,%ebx
	movl	$llfixmin,%ecx
	movl	$zllfixmin,%edx
	pushl	$1
	calll	inisymb
	movl	$14,%eax
	movl	$pnmac493,%ebx
	movl	$llminus0,%ecx
	movl	$zllminus0,%edx
	pushl	$1
	calll	inisymb
	movl	$65536+-1,%eax
	movl	%eax,moinsun
	xorl	%eax,%eax
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	movl	%eax,fzero
	movl	$1,%eax
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	movl	%eax,fltun
	movl	$65536+-1,%eax
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	movl	%eax,fltmun
	movl	$32767,%eax
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	movl	%eax,fltimax
	movl	$65536+-32767,%eax
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	movl	%eax,fltimin
	ret	
bangen:
	pushl	%ecx
	calll	gettype
	pushl	%eax
	cmpl	%esi,%eax
	jb	bangerr
	cmpl	%edi,%eax
	jae	bangerr
	movl	%ecx,%ebx
	movl	%esi,%ecx
	calll	getfns
	cmpl	%esi,%eax
	jne	bangencal
	movl	(%esp),%ebx
	movl	zsysgen,%eax
	movl	(%eax),%eax
	cmpl	%esi,%eax
	je	bangerr
	cmpl	%esi,%eax
	jb	bangerr
	cmpl	%edi,%eax
	jae	bangerr
	calll	ffsymbol
	movl	4(%esp),%ebx
	movl	%esi,%ecx
	calll	getfns
	cmpl	%esi,%eax
	je	bangerr
bangencal:
	addl	$12,%esp
	popl	%edx
	jmp	ffuncall
bangerr:
	popl	%edx
	popl	%ebx
	ret	
bangen1:
	pushl	%eax
	pushl	$1
	calll	bangen
	popl	%edx
	popl	%eax
	jmp	errgen
bangen2:
	pushl	%eax
	pushl	%ebx
	pushl	$2
	calll	bangen
	popl	%edx
	popl	%eax
	cmpl	%edi,fcons
	jb	l__1
l1__1:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	popl	%ecx
	cmpl	%edi,fcons
	jb	l__2
l1__2:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	jmp	errgen

	# FENTRY numberp
	.align	4
numberp:
	cmpl	%eax,bfloat
	ja	nbpt
	orl	%eax,%eax
	js	nbpt
	movl	znumberp,%ebx
nbpgen:
	pushl	%eax
	calll	gettype
	cmpl	%esi,%eax
	jb	nbpn
	cmpl	%edi,%eax
	jae	nbpn
	movl	%esi,%ecx
	calll	getfns
	cmpl	%esi,%eax
	je	nbpn
	movl	$1,%edx
	jmp	ffuncall
nbpn:
	addl	$4,%esp
nbpnil:
	movl	%esi,%eax
nbpt:
	ret	

	# FENTRY intgerp
	.align	4
intgerp:
	cmpl	%eax,bfloat
	ja	nbpt
	orl	%eax,%eax
	js	nbpnil
	movl	zintgerp,%ebx
	jmp	nbpgen

	# FENTRY rationalp
	.align	4
rationalp:
	cmpl	%eax,bfloat
	ja	nbpt
	orl	%eax,%eax
	js	nbpnil
	movl	zrationalp,%ebx
	jmp	nbpgen

	# FENTRY llfloat
	.align	4
llfloat:
	cmpl	%eax,bfloat
	jbe	llfloatf
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
llfloatr:
	ret	
llfloatf:
	orl	%eax,%eax
	js	llfloatr
	movl	zllfloat,%ecx
	jmp	bangen1

	# FENTRY lltrunc
	.align	4
lltrunc:
lltrunc1:
	movl	zlltrunc,%ecx
	cmpl	%eax,bfloat
	ja	lltrcret
	orl	%eax,%eax
	jns	bangen1
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	fltimin,%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
	fstsw	%ax
	sahf
	popl	%eax
	jb	bangen1
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	fltimax,%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
	fstsw	%ax
	sahf
	popl	%eax
	ja	bangen1
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	fstcw	aux1
	fstcw	aux1+2
	fwait
	orw	$0x0c00,aux1
	fldcw	aux1
	fistp	_accusingle1
	fldcw	aux1+2
	fwait
	movzwl	_accusingle1,%eax
lltrcret:
	ret	

	# FENTRY llfix
	.align	4
llfix:
	jmp	lltrunc1

	# FENTRY gaadd1
	.align	4
gaadd1:
	movl	%eax,%ebx
	cmpl	%eax,bfloat
	jbe	gaadd2
	addw	$1,%ax
	jo	gaadd3
	cmpw	$0x8000,%ax
	je	gaadd3
	ret	
gaadd2:
	orl	%eax,%eax
	jns	gaadd3
	movl	fltun,%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	fadds	_accusingle2
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	ret	
gaadd3:
	movl	%ebx,%eax
	movl	$1,%ebx
	movl	zgaplus,%ecx
	jmp	bangen2

	# FENTRY gasub1
	.align	4
gasub1:
	movl	%eax,%ebx
	cmpl	%eax,bfloat
	jbe	gasub2
	subw	$1,%ax
	jo	gasub3
	cmpw	$0x8000,%ax
	je	gasub3
	ret	
gasub2:
	orl	%eax,%eax
	jns	gasub3
	movl	fltun,%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	fsubrs	_accusingle2
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	ret	
gasub3:
	movl	%ebx,%eax
	movl	$1,%ebx
	movl	zgadiff,%ecx
	jmp	bangen2

	# FENTRY gaabs
	.align	4
gaabs:
	xorl	%ebx,%ebx
	cmpl	%eax,bfloat
	jbe	gaabs2
	cmpw	$0x8000,%ax
	je	gaabs3
	cmpw	%bx,%ax
	jge	gaabsret
	subw	%ax,%bx
	jo	gaabs3
	movl	%ebx,%eax
gaabsret:
	ret	
gaabs2:
	orl	%eax,%eax
	jns	gaabs3
	movl	fzero,%ebx
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
	fstsw	%ax
	sahf
	popl	%eax
	jae	gaabsret
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	fsubrs	_accusingle2
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
	movl	%ebx,%eax
	ret	
gaabs3:
	movl	zgaabs,%ecx
	jmp	bangen1

	# FENTRY gaplus
	.align	4
gaplus:
	cmpw	$2,%dx
	jne	gapplus
	popl	%ebx
	popl	%eax
gaplus2i:
	movl	%eax,%ecx
	cmpl	%eax,bfloat
	jbe	gapplus0
	cmpl	%ebx,bfloat
	jbe	gapplus1
	addw	%bx,%ax
	jo	gapplus1
	cmpw	$0x8000,%ax
	je	gapplus1
	ret	
gapplus0:
	orl	%eax,%eax
	jns	gapplus1
	orl	%ebx,%ebx
	jns	gapplus1
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	fadds	_accusingle2
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	ret	
gapplus1:
	pushl	%ecx
	pushl	%ebx
gapplus:
	orw	%dx,%dx
	je	gaprt0
	cmpw	$1,%dx
	jne	gaplus0
	popl	%eax
	cmpl	%eax,bfloat
	ja	gaprret
	orl	%eax,%eax
	js	gaprret
	xorl	%ebx,%ebx
	movl	zgaplus,%ecx
	jmp	bangen2
gaprt0:
	movl	%edx,%eax
gaprret:
	ret	
gaplus0:
	pushl	%edx
	movl	(%esp,%edx,4),%eax
gaplus1:
	cmpl	%eax,bfloat
	ja	gaplfx1
	orl	%eax,%eax
	js	gaplfl3
	decw	%dx
	jg	gaplgn0
gaplus2:
	popl	%edx
	leal	(%esp,%edx,4),%esp
	ret	
gaplfx0:
	movl	(%esp,%edx,4),%ebx
	orl	%ebx,%ebx
	js	gaplfl0
	cmpl	%ebx,bfloat
	jbe	gaplgn1
	addw	%ax,%bx
	jo	gaplgn0
	cmpw	$0x8000,%bx
	je	gaplgn0
	movl	%ebx,%eax
gaplfx1:
	decw	%dx
	jg	gaplfx0
	jmp	gaplus2
gaplfl0:
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	jmp	gaplfl2
gaplfl1:
	movl	(%esp,%edx,4),%ebx
	orl	%ebx,%ebx
	js	gaplfl2
	cmpl	%ebx,bfloat
	jbe	gaplgn1
	movl	%ebx,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
gaplfl2:
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	fadds	_accusingle2
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
	movl	%ebx,%eax
gaplfl3:
	decw	%dx
	jg	gaplfl1
	jmp	gaplus2
gaplgn0:
	movl	(%esp,%edx,4),%ebx
gaplgn1:
	pushl	%edx
	movl	zgaplus,%ecx
	calll	bangen2
	popl	%edx
	jmp	gaplus1

	# FENTRY gatimes
	.align	4
gatimes:
	cmpw	$2,%dx
	jne	gattimes
	popl	%ebx
	popl	%eax
gatim2i:
	movl	%eax,%ecx
	cmpl	%eax,bfloat
	jbe	gattimes0
	cmpl	%ebx,bfloat
	jbe	gattimes1
	imulw	%bx,%ax
	jo	gattimes1
	cmpw	$0x8000,%ax
	je	gattimes1
	ret	
gattimes0:
	orl	%eax,%eax
	jns	gattimes1
	orl	%ebx,%ebx
	jns	gattimes1
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	fmuls	_accusingle2
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	ret	
gattimes1:
	pushl	%ecx
	pushl	%ebx
gattimes:
	orw	%dx,%dx
	je	gatrt0
	cmpw	$1,%dx
	jne	gatime0
	popl	%eax
	cmpl	%eax,bfloat
	ja	gatrret
	orl	%eax,%eax
	js	gatrret
	movl	$1,%ebx
	movl	zgatimes,%ecx
	jmp	bangen2
gatrret:
	ret	
gatrt0:
	movl	$1,%eax
	ret	
gatime0:
	pushl	%edx
	movl	(%esp,%edx,4),%eax
gatime1:
	cmpl	%eax,bfloat
	ja	gatifx1
	orl	%eax,%eax
	js	gatifl3
	decw	%dx
	jg	gatign0
gatime2:
	popl	%edx
	leal	(%esp,%edx,4),%esp
	ret	
gatifx0:
	movl	(%esp,%edx,4),%ebx
	orl	%ebx,%ebx
	js	gatifl0
	cmpl	%ebx,bfloat
	jbe	gatign1
	imulw	%ax,%bx
	jo	gatign0
	cmpw	$0x8000,%bx
	je	gatign0
	movl	%ebx,%eax
gatifx1:
	decw	%dx
	jg	gatifx0
	jmp	gatime2
gatifl0:
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	jmp	gatifl2
gatifl1:
	movl	(%esp,%edx,4),%ebx
	orl	%ebx,%ebx
	js	gatifl2
	cmpl	%ebx,bfloat
	jbe	gatign1
	movl	%ebx,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
gatifl2:
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	fmuls	_accusingle2
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
	movl	%ebx,%eax
gatifl3:
	decw	%dx
	jg	gatifl1
	jmp	gatime2
gatign0:
	movl	(%esp,%edx,4),%ebx
gatign1:
	pushl	%edx
	movl	zgatimes,%ecx
	calll	bangen2
	popl	%edx
	jmp	gatime1

	# FENTRY gadinv
	.align	4
gadinv:
	movl	%eax,%ebx
	jmp	gadneg

	# FENTRY gadiff
	.align	4
gadiff:
	cmpw	$2,%dx
	je	gadiff2
	cmpw	$1,%dx
	je	gadiff1
	orw	%dx,%dx
	jne	gadiff3
	movl	%edx,%eax
	ret	
gadiff1:
	popl	%ebx
gadneg:
	xorl	%eax,%eax
	cmpl	%ebx,bfloat
	ja	gadneg2
	orl	%ebx,%ebx
	js	gadneg3
gadneg1:
	movl	zgadinv,%ecx
	movl	%ebx,%eax
	jmp	bangen1
gadneg2:
	subw	%bx,%ax
	jo	gadneg1
	cmpw	$0x8000,%ax
	je	gadneg1
	ret	
gadneg3:
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	fsubrs	_accusingle2
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	ret	
gadiff2:
	popl	%eax
gadiffp:
	movl	%eax,%ebx
	popl	%eax
gadiff2i:
	movl	%eax,%ecx
	cmpl	%eax,bfloat
	ja	gadiffp1
	orl	%eax,%eax
	js	gadiffp3
gadiffp0:
	movl	%ecx,%eax
	movl	zgadiff,%ecx
	jmp	bangen2
gadiffp1:
	cmpl	%ebx,bfloat
	jbe	gadiffp2
	subw	%bx,%ax
	jo	gadiffp0
	cmpw	$0x8000,%ax
	je	gadiffp0
	ret	
gadiffp2:
	orl	%ebx,%ebx
	jns	gadiffp0
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	jmp	gadiffp5
gadiffp3:
	cmpl	%ebx,bfloat
	jbe	gadiffp4
	movl	%ebx,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
	jmp	gadiffp5
gadiffp4:
	orl	%ebx,%ebx
	jns	gadiffp0
gadiffp5:
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	fsubrs	_accusingle2
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	ret	
gadiff3:
	decw	%dx
	decw	%dx
	movl	(%esp,%edx,4),%eax
	movl	$gadiffp,(%esp,%edx,4)
	pushl	%edx
	incw	%dx
	jmp	gaplus1

	# FENTRY gadrev
	.align	4
gadrev:
	movl	%eax,%ebx
	jmp	garev

	# FENTRY gadiv
	.align	4
gadiv:
	cmpw	$2,%dx
	je	gadiv2
	cmpw	$1,%dx
	je	gadiv1
	orw	%dx,%dx
	jne	gadiv3
garevret:
	movl	$1,%eax
	ret	
gadiv1:
	popl	%ebx
garev:
	cmpl	$1,%ebx
	je	garevret
	cmpl	%ebx,bfloat
	ja	garev1
	orl	%ebx,%ebx
	js	garev2
garev1:
	movl	zgadrev,%ecx
	movl	%ebx,%eax
	jmp	bangen1
garev2:
	movl	$1,%eax
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	fdivrs	_accusingle2
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	ret	
gadiv2:
	popl	%eax
gadivt:
	movl	%eax,%ebx
	popl	%eax
	movl	%eax,%ecx
	cmpl	%eax,bfloat
	ja	gadivt1
	orl	%eax,%eax
	js	gadivt3
gadivt0:
	movl	%ecx,%eax
	movl	zgadiv,%ecx
	jmp	bangen2
gadivt1:
	cmpl	%ebx,bfloat
	jbe	gadivt2
	orw	%bx,%bx
	je	gadivt0
	cmpw	$0x8000,%ax
	jne	gadivt11
	cmpw	$65536+-1,%bx
	je	gadivt0
gadivt11:
	orl	%ebx,%ebx
	jz	l9__3
	pushl	%edx
	cwtd
	idivw	%bx
	movzwl	%dx,%eax
	popl	%edx
l9__3:
	orw	%ax,%ax
	jne	gadivt0
	movl	%ecx,%eax
	orl	%ebx,%ebx
	jz	gadivt0
	pushl	%edx
	cwtd
	idivw	%bx
	movzwl	%ax,%eax
	popl	%edx
l9__4:
	cmpw	$0x8000,%ax
	je	gadivt0
	ret	
gadivt2:
	orl	%ebx,%ebx
	jns	gadivt0
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	jmp	gadivt5
gadivt3:
	cmpl	%ebx,bfloat
	jbe	gadivt4
	movl	%ebx,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
	jmp	gadivt5
gadivt4:
	orl	%ebx,%ebx
	jns	gadivt0
gadivt5:
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	fdivrs	_accusingle2
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	ret	
gadiv3:
	decw	%dx
	decw	%dx
	movl	(%esp,%edx,4),%eax
	movl	$gadivt,(%esp,%edx,4)
	pushl	%edx
	incw	%dx
	jmp	gatime1

	# FENTRY gaquomod
	.align	4
gaquomod:
	movl	zgaquomod,%ecx
	orl	%eax,%eax
	js	bangen2
	orl	%ebx,%ebx
	js	bangen2
	cmpl	%eax,bfloat
	jbe	bangen2
	cmpl	%ebx,bfloat
	jbe	bangen2
	orw	%bx,%bx
	je	bangen2
	cmpw	$0x8000,%ax
	jne	gaquomod1
	cmpw	$65536+-1,%bx
	je	bangen2
gaquomod1:
	movl	%eax,%ecx
	orl	%ebx,%ebx
	jz	gaquomodg
	pushl	%edx
	cwtd
	idivw	%bx
	movzwl	%ax,%eax
	popl	%edx
l9__5:
	cmpw	$0x8000,%ax
	je	gaquomodg
	movl	%ecx,%edx
	orl	%ebx,%ebx
	jz	l9__6
	pushl	%eax
	movl	%edx,%eax
	cwtd
	idivw	%bx
	movzwl	%dx,%edx
	popl	%eax
l9__6:
	orw	%dx,%dx
	jge	gamodret
	orw	%ax,%ax
	jg	gaquomod3
	orw	%ax,%ax
	jl	gaquomod2
	orw	%bx,%bx
	jle	gaquomod3
gaquomod2:
	decw	%ax
	jmp	gaquoret
gaquomod3:
	incw	%ax
gaquoret:
	orw	%bx,%bx
	jge	gamodr3
	negw	%bx
gamodr3:
	addw	%bx,%dx
	jo	gaquomodg
gamodret:
	movl	zexmod,%ebx
	movl	%edx,(%ebx)
	ret	
gaquomodg:
	movl	%ecx,%eax
	movl	zgaquomod,%ecx
	jmp	bangen2
gaquo2:
	orl	%ebx,%ebx
	js	gaquo4
	cmpl	%ebx,bfloat
	jbe	bangen2
	movl	%ebx,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
	jmp	gaquo4
gaquo3:
	cmpl	%eax,bfloat
	jbe	bangen2
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
gaquo4:
	movl	%eax,%ecx
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	fdivrs	_accusingle2
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	ret	

	# FENTRY gamod
	.align	4
gamod:
	calll	gaquomod
	movl	zexmod,%eax
	movl	(%eax),%eax
	ret	
gacom:
	cmpw	$2,%dx
	jge	gacom0
	movl	$2,%eax
	movl	cpfnt,%ebx
	jmp	errwna
gacom0:
	pushl	%edx
	movl	(%esp,%edx,4),%eax
gacom1:
	cmpl	%eax,bfloat
	ja	gacomfx1
	orl	%eax,%eax
	js	gacomfl3
	decw	%dx
	jg	gacomgn0
gacom2:
	popl	%edx
	decw	%dx
	leal	(%esp,%edx,4),%esp
	popl	%eax
	ret	
gacom3:
	movl	%esi,%eax
	popl	%edx
	leal	(%esp,%edx,4),%esp
	ret	
gacomfx0:
	movl	(%esp,%edx,4),%ebx
	orl	%ebx,%ebx
	js	gacomfl0
	cmpl	%ebx,bfloat
	jbe	gacomgn1
	cmpw	%bx,%ax
	je	gacomfx2
	cmpw	%bx,%ax
	jg	gacomfx3
	movl	$4,%eax
	jmp	gacomfx4
gacomfx2:
	movl	$2,%eax
	jmp	gacomfx4
gacomfx3:
	movl	$1,%eax
gacomfx4:
	andw	%cx,%ax
	orw	%ax,%ax
	je	gacom3
	movl	%ebx,%eax
gacomfx1:
	decw	%dx
	jg	gacomfx0
	jmp	gacom2
gacomfl0:
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	jmp	gacomfl2
gacomfl1:
	movl	(%esp,%edx,4),%ebx
	orl	%ebx,%ebx
	js	gacomfl2
	cmpl	%ebx,bfloat
	jbe	gacomgn1
	movl	%ebx,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
gacomfl2:
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
	fstsw	%ax
	sahf
	popl	%eax
	je	gacomfl4
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
	fstsw	%ax
	sahf
	popl	%eax
	ja	gacomfl5
	movl	$4,%eax
	jmp	gacomfl6
gacomfl4:
	movl	$2,%eax
	jmp	gacomfl6
gacomfl5:
	movl	$1,%eax
gacomfl6:
	andw	%cx,%ax
	orw	%ax,%ax
	je	gacom3
	movl	%ebx,%eax
gacomfl3:
	decw	%dx
	jg	gacomfl1
	jmp	gacom2
gacomgn0:
	movl	(%esp,%edx,4),%ebx
gacomgn1:
	pushl	%edx
	pushl	%ecx
	pushl	%ebx
	movl	zgacomp,%ecx
	calll	bangensp2
	popl	%ebx
	popl	%ecx
	popl	%edx
	cmpl	%eax,bfloat
	jbe	gacom3
	orw	%ax,%ax
	je	gacomgn2
	cmpw	$1,%ax
	je	gacomgn3
	cmpw	moinsun,%ax
	jne	gacom3
	movl	$4,%eax
	jmp	gacomgn4
gacomgn2:
	movl	$2,%eax
	jmp	gacomgn4
gacomgn3:
	movl	$1,%eax
gacomgn4:
	andw	%cx,%ax
	orw	%ax,%ax
	je	gacom3
	movl	%ebx,%eax
	jmp	gacom1
bangensp2:
	pushl	$oneret
	pushl	%eax
	pushl	%ebx
	pushl	$2
	calll	bangen
	movl	8(%esp),%eax
	movl	cpfnt,%ecx
	movl	$tworet,12(%esp)
	calll	bangen
	popl	%edx
	popl	%eax
	cmpl	%edi,fcons
	jb	l__7
l1__7:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	popl	%ecx
	cmpl	%edi,fcons
	jb	l__8
l1__8:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	jmp	errgen
oneret:
	ret	
tworet:
	popl	%edx
	popl	%ebx
	popl	%ecx
	popl	%edx
	cmpl	%esi,%eax
	je	gacom3
	movl	%ebx,%eax
	jmp	gacom1

	# FENTRY gacomp
	.align	4
gacomp:
	movl	zgacomp,%ecx
	cmpl	%eax,bfloat
	ja	gacomp5
	orl	%eax,%eax
	jns	bangen2
	orl	%ebx,%ebx
	js	gacomp1
	cmpl	%ebx,bfloat
	jbe	bangen2
	movl	%ebx,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
gacomp1:
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
	fstsw	%ax
	sahf
	popl	%eax
	je	gacomp3
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
	fstsw	%ax
	sahf
	popl	%eax
	ja	gacomp4
gacomp2:
	movl	moinsun,%eax
	ret	
gacomp3:
	xorl	%eax,%eax
	ret	
gacomp4:
	movl	$1,%eax
	ret	
gacomp5:
	cmpl	%ebx,bfloat
	ja	gacomp6
	orl	%ebx,%ebx
	jns	bangen2
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	jmp	gacomp1
gacomp6:
	cmpw	%bx,%ax
	je	gacomp3
	cmpw	%bx,%ax
	jg	gacomp4
	jmp	gacomp2

	# FENTRY zerop
	.align	4
zerop:
	movl	zzerop,%ebp
	movl	%ebp,cpfnt
	pushl	%eax
	pushl	$0
	movl	$2,%edx
	movl	$2,%ecx
	jmp	gacom

	# FENTRY minusp
	.align	4
minusp:
	movl	zminusp,%ebp
	movl	%ebp,cpfnt
	pushl	%eax
	pushl	$0
	movl	$2,%edx
	movl	$4,%ecx
	jmp	gacom

	# FENTRY plusp
	.align	4
plusp:
	movl	zplusp,%ebp
	movl	%ebp,cpfnt
	pushl	%eax
	pushl	$0
	movl	$2,%edx
	movl	$3,%ecx
	jmp	gacom
gaeqn:
	pushl	%ecx
	pushl	$gaeqnret
	pushl	%eax
	pushl	%ebx
	movl	zgaeqen,%ebp
	movl	%ebp,cpfnt
	movl	$2,%edx
	movl	$2,%ecx
	jmp	gacom
gaeqnret:
	popl	%ecx
	ret	

	# FENTRY gaeqen
	.align	4
gaeqen:
	cmpl	$2,%edx
	jne	gaeqen2
	popl	%ebx
	popl	%eax
	cmpl	%eax,bfloat
	jbe	gaeqen1
	cmpl	%ebx,bfloat
	jbe	gaeqen1
	cmpw	%bx,%ax
	je	gaeqqn0
	movl	%esi,%eax
gaeqqn0:
	ret	
gaeqen1:
	pushl	%eax
	pushl	%ebx
gaeqen2:
	movl	zgaeqen,%ebp
	movl	%ebp,cpfnt
	movl	$2,%ecx
	jmp	gacom

	# FENTRY ganeqn
	.align	4
ganeqn:
	cmpl	%eax,bfloat
	jbe	ganen1
	cmpl	%ebx,bfloat
	jbe	ganen1
	cmpw	%bx,%ax
	jne	ganen0
	movl	%esi,%eax
ganen0:
	ret	
ganen1:
	pushl	%eax
	pushl	%ebx
	movl	zganeqn,%ebp
	movl	%ebp,cpfnt
	movl	$5,%ecx
	movl	$2,%edx
	jmp	gacom

	# FENTRY gagt
	.align	4
gagt:
	movl	zgagt,%ebp
	movl	%ebp,cpfnt
	movl	$1,%ecx
	jmp	gacom

	# FENTRY gage
	.align	4
gage:
	movl	zgage,%ebp
	movl	%ebp,cpfnt
	movl	$3,%ecx
	jmp	gacom

	# FENTRY galt
	.align	4
galt:
	movl	zgalt,%ebp
	movl	%ebp,cpfnt
	movl	$4,%ecx
	jmp	gacom

	# FENTRY gale
	.align	4
gale:
	movl	zgale,%ebp
	movl	%ebp,cpfnt
	movl	$6,%ecx
	jmp	gacom

	# FENTRY min
	.align	4
min:
	orw	%dx,%dx
	je	minerr
	popl	%eax
	jmp	min3
min1:
	movl	(%esp),%ebx
	pushl	%edx
	calll	mintwo
	popl	%edx
	cmpl	%esi,%eax
	jne	min2
	popl	%eax
	jmp	min3
min2:
	addl	$4,%esp
min3:
	decw	%dx
	jg	min1
	ret	
minerr:
	movl	$1,%eax
	movl	zmin,%ebx
	jmp	errwna
mintwo:
	pushl	%eax
	pushl	%ebx
	movl	$2,%edx
	jmp	galt

	# FENTRY max
	.align	4
max:
	orw	%dx,%dx
	je	maxerr
	popl	%eax
	jmp	max3
max1:
	movl	(%esp),%ebx
	pushl	%edx
	calll	maxtwo
	popl	%edx
	cmpl	%esi,%eax
	jne	max2
	popl	%eax
	jmp	max3
max2:
	addl	$4,%esp
max3:
	decw	%dx
	jg	max1
	ret	
maxerr:
	movl	$1,%eax
	movl	zmax,%ebx
	jmp	errwna
maxtwo:
	pushl	%eax
	pushl	%ebx
	movl	$2,%edx
	jmp	gagt

	# FENTRY llsin
	.align	4
llsin:
	movl	zllsin,%ecx
	orl	%eax,%eax
	js	sin2
	cmpl	%eax,bfloat
	jbe	bangen1
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
sin2:
	# Calling intrinsic fsin
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	fsin
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	# Done with fsin
	ret	

	# FENTRY llcos
	.align	4
llcos:
	movl	zllcos,%ecx
	orl	%eax,%eax
	js	cos2
	cmpl	%eax,bfloat
	jbe	bangen1
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
cos2:
	# Calling intrinsic fcos
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	fcos
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	# Done with fcos
	ret	

	# FENTRY llasin
	.align	4
llasin:
	movl	zllasin,%ecx
	orl	%eax,%eax
	js	asin2
	cmpl	%eax,bfloat
	jbe	bangen1
	cmpw	$1,%ax
	jg	bangen1
	cmpw	moinsun,%ax
	jl	bangen1
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	jmp	asin3
asin2:
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	fltun,%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
	fstsw	%ax
	sahf
	popl	%eax
	ja	bangen1
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	fltmun,%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
	fstsw	%ax
	sahf
	popl	%eax
	jb	bangen1
asin3:
	# Calling intrinsic asin
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	fst	%st(1)
	fmul	%st(0),%st
	fld1
	fsubp	
	fsqrt
	fpatan
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	# Done with asin
	ret	

	# FENTRY llacos
	.align	4
llacos:
	movl	zllacos,%ecx
	orl	%eax,%eax
	js	acos2
	cmpl	%eax,bfloat
	jbe	bangen1
	cmpw	$1,%ax
	jg	bangen1
	cmpw	moinsun,%ax
	jl	bangen1
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	jmp	acos3
acos2:
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	fltun,%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
	fstsw	%ax
	sahf
	popl	%eax
	ja	bangen1
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	fltmun,%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
	fstsw	%ax
	sahf
	popl	%eax
	jb	bangen1
acos3:
	# Calling intrinsic acos
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	fst	%st(1)
	fmul	%st(0),%st
	fld1
	fsubp	
	fsqrt
	fxch	
	fpatan
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	# Done with acos
	ret	

	# FENTRY llatan
	.align	4
llatan:
	movl	zllatan,%ecx
	orl	%eax,%eax
	js	atan2
	cmpl	%eax,bfloat
	jbe	bangen1
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
atan2:
	# Calling intrinsic atan
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	fld1
	fpatan
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	# Done with atan
	ret	

	# FENTRY llexp
	.align	4
llexp:
	movl	zllexp,%ecx
	orl	%eax,%eax
	js	exp2
	cmpl	%eax,bfloat
	jbe	bangen1
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
exp2:
	# Calling intrinsic exp
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	fldl2e
	fmulp	
	fld	%st(0)
	frndint
	fxch	%st(1)
	fsub	%st(1),%st(0)
	f2xm1
	fld1
	faddp	%st(0),%st(1)
	fscale
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	fstp	%st(0)
	# Done with exp
	ret	

	# FENTRY lllog
	.align	4
lllog:
	movl	zlllog,%ecx
	orl	%eax,%eax
	js	log2
	cmpl	%eax,bfloat
	jbe	bangen1
	orw	%ax,%ax
	jle	bangen1
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	jmp	log3
log2:
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	fzero,%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
	fstsw	%ax
	sahf
	popl	%eax
	jbe	bangen1
log3:
	# Calling intrinsic log
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	fldln2
	fxch	%st(1)
	fyl2x
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	# Done with log
	ret	

	# FENTRY lllog10
	.align	4
lllog10:
	movl	zlllog10,%ecx
	orl	%eax,%eax
	js	log102
	cmpl	%eax,bfloat
	jbe	bangen1
	orw	%ax,%ax
	jle	bangen1
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	jmp	log103
log102:
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	fzero,%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
	fstsw	%ax
	sahf
	popl	%eax
	jbe	bangen1
log103:
	# Calling intrinsic log10
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	fldlg2
	fxch	%st(1)
	fyl2x
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	# Done with log10
	ret	

	# FENTRY llpower
	.align	4
llpower:
	movl	zllpower,%ecx
	orl	%eax,%eax
	js	power2
	cmpl	%eax,bfloat
	jbe	bangen2
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
power2:
	orl	%ebx,%ebx
	js	power3
	cmpl	%ebx,bfloat
	jbe	bangen2
	movl	%ebx,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
power3:
	# Calling intrinsic power
	movl	%ebx,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	fyl2x
	fld1
	fld	%st(1)
	frndint
	fxch	%st(2)
	fsub	%st(2),%st
	f2xm1
	faddp	
	fscale
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	fstp	%st(0)
	# Done with power
	ret	

	# FENTRY llsqrt
	.align	4
llsqrt:
	movl	zllsqrt,%ecx
	orl	%eax,%eax
	js	sqrt2
	cmpl	%eax,bfloat
	jbe	bangen1
	orw	%ax,%ax
	jl	bangen1
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	jmp	sqrt3
sqrt2:
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	fzero,%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
	fstsw	%ax
	sahf
	popl	%eax
	jb	bangen1
sqrt3:
	# Calling intrinsic fsqrt
	movl	%eax,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	fsqrt
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	# Done with fsqrt
	ret	

	# FENTRY llfixmax
	.align	4
llfixmax:
	movl	$32767,%eax
	ret	

	# FENTRY llfixmin
	.align	4
llfixmin:
	movl	$65536+-32767,%eax
	ret	

	# FENTRY llminus0
	.align	4
llminus0:
	movl	$0x8000,%eax
	ret	
l__8:
	calll	gccons
	jmp	l1__8
l__7:
	calll	gccons
	jmp	l1__7
l__2:
	calll	gccons
	jmp	l1__2
l__1:
	calll	gccons
	jmp	l1__1
