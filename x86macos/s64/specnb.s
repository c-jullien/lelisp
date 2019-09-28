	.file	"specnb.asm"
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
	.globl	cpkgc
	.globl	zkllcp
	.globl	zquote
	.globl	fzero
	.globl	zex
pnmac1496:
	.string	"scale"
	.even
pnmac1497:
	.string	"lognot"
	.even
pnmac1498:
	.string	"logand"
	.even
pnmac1499:
	.string	"logor"
	.even
pnmac1500:
	.string	"logxor"
	.even
pnmac1501:
	.string	"logshift"
	.even
pnmac1502:
	.string	"2**"
	.even
pnmac1503:
	.string	"mask-field"
	.even
pnmac1504:
	.string	"load-byte"
	.even
pnmac1505:
	.string	"deposit-byte"
	.even
pnmac1506:
	.string	"deposit-field"
	.even
pnmac1507:
	.string	"load-byte-test"
	.even
pnmac1508:
	.string	"oddp"
	.even
pnmac1509:
	.string	"evenp"
	.even
pnmac1510:
	.string	"random"
	.even
pnmac1511:
	.string	"srandom"
	.even
pnmac1512:
	.string	"floatp"
	.even
pnmac1513:
	.string	"fixp"
	.even
pnmac1514:
	.string	"plus"
	.even
pnmac1515:
	.string	"difference"
	.even
pnmac1516:
	.string	"differ"
	.even
pnmac1517:
	.string	"times"
	.even
pnmac1518:
	.string	"divide"
	.even
pnmac1519:
	.string	"add1"
	.even
pnmac1520:
	.string	"sub1"
	.even
pnmac1521:
	.string	"add"
	.even
pnmac1522:
	.string	"sub"
	.even
pnmac1523:
	.string	"mul"
	.even
pnmac1524:
	.string	"div"
	.even
pnmac1525:
	.string	"rem"
	.even
pnmac1526:
	.string	"eqn"
	.even
pnmac1527:
	.string	"neqn"
	.even
pnmac1528:
	.string	"ge"
	.even
pnmac1529:
	.string	"gt"
	.even
pnmac1530:
	.string	"le"
	.even
pnmac1531:
	.string	"lt"
	.even
pnmac1532:
	.string	"imin"
	.even
pnmac1533:
	.string	"imax"
	.even
pnmac1534:
	.string	"fadd"
	.even
pnmac1535:
	.string	"fsub"
	.even
pnmac1536:
	.string	"fmul"
	.even
pnmac1537:
	.string	"fdiv"
	.even
pnmac1538:
	.string	"feqn"
	.even
pnmac1539:
	.string	"fneqn"
	.even
pnmac1540:
	.string	"fge"
	.even
pnmac1541:
	.string	"fgt"
	.even
pnmac1542:
	.string	"fle"
	.even
pnmac1543:
	.string	"flt"
	.even
pnmac1544:
	.string	"fmin"
	.even
pnmac1545:
	.string	"fmax"
	.even
pnmac1546:
	.string	"logshift"
	.even
pnmac1547:
	.string	"mul"
	.even
pnmac1548:
	.string	"div"
	.even
pnmac1549:
	.string	"rem"
	.even
pnmac1550:
	.string	"fadd"
	.even
pnmac1551:
	.string	"fsub"
	.even
pnmac1552:
	.string	"fmul"
	.even
pnmac1553:
	.string	"fdiv"
	.even
pnmac1554:
	.string	"feqn"
	.even
pnmac1555:
	.string	"fneqn"
	.even
pnmac1556:
	.string	"fge"
	.even
pnmac1557:
	.string	"fgt"
	.even
pnmac1558:
	.string	"fle"
	.even
pnmac1559:
	.string	"flt"
	.even
zexcarry:
	.long	0
pnmac1560:
	.string	"regret"
	.even
pnmac1561:
	.string	"ex+"
	.even
pnmac1562:
	.string	"ex1+"
	.even
pnmac1563:
	.string	"ex-"
	.even
pnmac1564:
	.string	"ex*"
	.even
pnmac1565:
	.string	"ex/"
	.even
pnmac1566:
	.string	"ex?"
	.even
zoddp:
	.long	0
zevenp:
	.long	0
zlleqn:
	.long	0
zllneqn:
	.long	0
zllgt:
	.long	0
zllge:
	.long	0
zlllt:
	.long	0
zllle:
	.long	0
zllimin:
	.long	0
zllimax:
	.long	0
zlladd1:
	.long	0
zllsub1:
	.long	0
zlladd:
	.long	0
zllsub:
	.long	0
zllmul:
	.long	0
zll_div:
	.long	0
zllrem:
	.long	0
zscale:
	.long	0
randseed:
	.long	0
zllsrandom:
	.long	0
zllrandom:
	.long	0
zlognot:
	.long	0
zlogand:
	.long	0
zlogor:
	.long	0
zlogxor:
	.long	0
zlogshift:
	.long	0
zdpn:
	.long	0
zmskfield:
	.long	0
zldbyte:
	.long	0
zldbt:
	.long	0
zdpbyte:
	.long	0
zdpfield:
	.long	0
zllfeqn:
	.long	0
zllfneqn:
	.long	0
zllfgt:
	.long	0
zllfge:
	.long	0
zllflt:
	.long	0
zllfle:
	.long	0
zllfmin:
	.long	0
zllfmax:
	.long	0
zllfadd:
	.long	0
zllfsub:
	.long	0
zllfmul:
	.long	0
zllfdiv:
	.long	0
zclllsht:
	.long	0
zcllmul:
	.long	0
zclldiv:
	.long	0
zcllrem:
	.long	0
zcllfadd:
	.long	0
zcllfsub:
	.long	0
zcllfmul:
	.long	0
zcllfdiv:
	.long	0
zcllfeqn:
	.long	0
zcllfneqn:
	.long	0
zcllfgt:
	.long	0
zcllfge:
	.long	0
zcllflt:
	.long	0
zcllfle:
	.long	0
zfloatp:
	.long	0
zfixp:
	.long	0
zflplus:
	.long	0
	.globl	_accusingle1
zfldiff:
	.long	0
zfltimes:
	.long	0
zflquo:
	.long	0
zexadd:
	.long	0
zexincr:
	.long	0
zexinv:
	.long	0
zexmul:
	.long	0
zexdiv:
	.long	0
zexcomp:
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
	.globl	ini_snb
	.globl	fldiff

	# FENTRY ini_snb
	.align	4
ini_snb:
	movl	$5,%eax
	movl	$pnmac1496,%ebx
	movl	$scale,%ecx
	movl	$zscale,%edx
	pushl	$4
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1497,%ebx
	movl	$lognot,%ecx
	movl	$zlognot,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1498,%ebx
	movl	$logand,%ecx
	movl	$zlogand,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1499,%ebx
	movl	$logor,%ecx
	movl	$zlogor,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1500,%ebx
	movl	$logxor,%ecx
	movl	$zlogxor,%edx
	pushl	$3
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac1501,%ebx
	movl	$logshift,%ecx
	movl	$zlogshift,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1502,%ebx
	movl	$dpn,%ecx
	movl	$zdpn,%edx
	pushl	$2
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac1503,%ebx
	movl	$mskfield,%ecx
	movl	$zmskfield,%edx
	pushl	$4
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac1504,%ebx
	movl	$ldbyte,%ecx
	movl	$zldbyte,%edx
	pushl	$4
	calll	inisymb
	movl	$12,%eax
	movl	$pnmac1505,%ebx
	movl	$dpbyte,%ecx
	movl	$zdpbyte,%edx
	pushl	$5
	calll	inisymb
	movl	$13,%eax
	movl	$pnmac1506,%ebx
	movl	$dpfield,%ecx
	movl	$zdpfield,%edx
	pushl	$5
	calll	inisymb
	movl	$14,%eax
	movl	$pnmac1507,%ebx
	movl	$ldbt,%ecx
	movl	$zldbt,%edx
	pushl	$4
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1508,%ebx
	movl	$oddp,%ecx
	movl	$zoddp,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1509,%ebx
	movl	$evenp,%ecx
	movl	$zevenp,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1510,%ebx
	movl	$llrandom,%ecx
	movl	$zllrandom,%edx
	pushl	$3
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac1511,%ebx
	movl	$llsrandom,%ecx
	movl	$zllsrandom,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1512,%ebx
	movl	$floatp,%ecx
	movl	$zfloatp,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1513,%ebx
	movl	$fixp,%ecx
	movl	$zfixp,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1514,%ebx
	movl	$flplus,%ecx
	movl	$zflplus,%edx
	pushl	$5
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac1515,%ebx
	movl	$fldiff,%ecx
	movl	$zfldiff,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1516,%ebx
	movl	$fldiff,%ecx
	movl	$zfldiff,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1517,%ebx
	movl	$fltimes,%ecx
	movl	$zfltimes,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1518,%ebx
	movl	$flquo,%ecx
	movl	$zflquo,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1519,%ebx
	movl	$lladd1,%ecx
	movl	$zlladd1,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1520,%ebx
	movl	$llsub1,%ecx
	movl	$zllsub1,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1521,%ebx
	movl	$lladd,%ecx
	movl	$zlladd,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1522,%ebx
	movl	$llsub,%ecx
	movl	$zllsub,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1523,%ebx
	movl	$llmul,%ecx
	movl	$zllmul,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1524,%ebx
	movl	$ll_div,%ecx
	movl	$zll_div,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1525,%ebx
	movl	$llrem,%ecx
	movl	$zllrem,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1526,%ebx
	movl	$lleqn,%ecx
	movl	$zlleqn,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1527,%ebx
	movl	$llneqn,%ecx
	movl	$zllneqn,%edx
	pushl	$3
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac1528,%ebx
	movl	$llge,%ecx
	movl	$zllge,%edx
	pushl	$3
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac1529,%ebx
	movl	$llgt,%ecx
	movl	$zllgt,%edx
	pushl	$3
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac1530,%ebx
	movl	$llle,%ecx
	movl	$zllle,%edx
	pushl	$3
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac1531,%ebx
	movl	$lllt,%ecx
	movl	$zlllt,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1532,%ebx
	movl	$llimin,%ecx
	movl	$zllimin,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1533,%ebx
	movl	$llimax,%ecx
	movl	$zllimax,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1534,%ebx
	movl	$llfadd,%ecx
	movl	$zllfadd,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1535,%ebx
	movl	$llfsub,%ecx
	movl	$zllfsub,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1536,%ebx
	movl	$llfmul,%ecx
	movl	$zllfmul,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1537,%ebx
	movl	$llfdiv,%ecx
	movl	$zllfdiv,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1538,%ebx
	movl	$llfeqn,%ecx
	movl	$zllfeqn,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1539,%ebx
	movl	$llfneqn,%ecx
	movl	$zllfneqn,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1540,%ebx
	movl	$llfge,%ecx
	movl	$zllfge,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1541,%ebx
	movl	$llfgt,%ecx
	movl	$zllfgt,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1542,%ebx
	movl	$llfle,%ecx
	movl	$zllfle,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1543,%ebx
	movl	$llflt,%ecx
	movl	$zllflt,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1544,%ebx
	movl	$llfmin,%ecx
	movl	$zllfmin,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1545,%ebx
	movl	$llfmax,%ecx
	movl	$zllfmax,%edx
	pushl	$3
	calll	inisymb
	movl	zkllcp,%ebp
	movl	%ebp,cpkgc
	movl	$8,%eax
	movl	$pnmac1546,%ebx
	movl	$clllsht,%ecx
	movl	$zclllsht,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1547,%ebx
	movl	$cllmul,%ecx
	movl	$zcllmul,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1548,%ebx
	movl	$clldiv,%ecx
	movl	$zclldiv,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1549,%ebx
	movl	$cllrem,%ecx
	movl	$zcllrem,%edx
	pushl	$1
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1550,%ebx
	movl	$cllfadd,%ecx
	movl	$zcllfadd,%edx
	pushl	$1
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1551,%ebx
	movl	$cllfsub,%ecx
	movl	$zcllfsub,%edx
	pushl	$1
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1552,%ebx
	movl	$cllfmul,%ecx
	movl	$zcllfmul,%edx
	pushl	$1
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1553,%ebx
	movl	$cllfdiv,%ecx
	movl	$zcllfdiv,%edx
	pushl	$1
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1554,%ebx
	movl	$cllfeqn,%ecx
	movl	$zcllfeqn,%edx
	pushl	$1
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1555,%ebx
	movl	$cllfneqn,%ecx
	movl	$zcllfneqn,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1556,%ebx
	movl	$cllfge,%ecx
	movl	$zcllfge,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1557,%ebx
	movl	$cllfgt,%ecx
	movl	$zcllfgt,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1558,%ebx
	movl	$cllfle,%ecx
	movl	$zcllfle,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1559,%ebx
	movl	$cllflt,%ecx
	movl	$zcllflt,%edx
	pushl	$1
	calll	inisymb
	movl	%esi,cpkgc
	movl	$6,%eax
	movl	$pnmac1560,%ebx
	movl	$zexcarry,%ecx
	calll	inicst
	movl	$0,(%eax)
	movl	zex,%ebp
	movl	%ebp,12(%eax)
	movl	$3,%eax
	movl	$pnmac1561,%ebx
	movl	$exadd,%ecx
	movl	$zexadd,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1562,%ebx
	movl	$exincr,%ecx
	movl	$zexincr,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1563,%ebx
	movl	$exinv,%ecx
	movl	$zexinv,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1564,%ebx
	movl	$exmul,%ecx
	movl	$zexmul,%edx
	pushl	$4
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1565,%ebx
	movl	$exdiv,%ecx
	movl	$zexdiv,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac1566,%ebx
	movl	$excomp,%ecx
	movl	$zexcomp,%edx
	pushl	$3
	calll	inisymb
	ret	
nfalse:
	movl	%esi,%eax
	ret	
rzero:
	xorl	%eax,%eax
	ret	
rone:
	movl	$1,%eax
	ret	
banfix3:
	movl	%ecx,%ebx
banfix2:
	movl	%ebx,%eax
banfix1:
	movl	%edx,%ebx
	jmp	errnia
banflt2:
	movl	%ebx,%eax
banflt1:
	movl	%edx,%ebx
	jmp	errnfa
banmix2:
	movl	%ebx,%eax
banmix1:
	movl	%edx,%ebx
	jmp	errnna
ban0dv:
	movl	%edx,%ebx
	xorl	%eax,%eax
	jmp	err0dv
banwna:
	movl	%ecx,%eax
	movl	%edx,%ebx
	jmp	errwna

	# FENTRY oddp
	.align	4
oddp:
	movl	zoddp,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	movl	%eax,%ebx
	andw	$1,%bx
	orw	%bx,%bx
	je	nfalse
	ret	

	# FENTRY evenp
	.align	4
evenp:
	movl	zevenp,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	movl	%eax,%ebx
	andw	$1,%bx
	orw	%bx,%bx
	jne	nfalse
	ret	

	# FENTRY lleqn
	.align	4
lleqn:
	movl	zlleqn,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	cmpw	%bx,%ax
	jne	nfalse
	ret	

	# FENTRY llneqn
	.align	4
llneqn:
	movl	zllneqn,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	cmpw	%bx,%ax
	je	nfalse
	ret	

	# FENTRY llgt
	.align	4
llgt:
	movl	zllgt,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	cmpw	%bx,%ax
	jle	nfalse
	ret	

	# FENTRY llge
	.align	4
llge:
	movl	zllge,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	cmpw	%bx,%ax
	jl	nfalse
	ret	

	# FENTRY lllt
	.align	4
lllt:
	movl	zlllt,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	cmpw	%bx,%ax
	jge	nfalse
	ret	

	# FENTRY llle
	.align	4
llle:
	movl	zllle,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	cmpw	%bx,%ax
	jg	nfalse
	ret	

	# FENTRY llimin
	.align	4
llimin:
	movl	zllimin,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	cmpw	%bx,%ax
	jle	lliminr
	movl	%ebx,%eax
lliminr:
	ret	

	# FENTRY llimax
	.align	4
llimax:
	movl	zllimax,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	cmpw	%bx,%ax
	jg	llimaxr
	movl	%ebx,%eax
llimaxr:
	ret	

	# FENTRY lladd1
	.align	4
lladd1:
	movl	zlladd1,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	incw	%ax
lla1ret:
	ret	

	# FENTRY llsub1
	.align	4
llsub1:
	movl	zllsub1,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	decw	%ax
lls1ret:
	ret	

	# FENTRY lladd
	.align	4
lladd:
	movl	zlladd,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	addw	%bx,%ax
	jo	lladdret
lladdret:
	ret	

	# FENTRY llsub
	.align	4
llsub:
	movl	zllsub,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	subw	%bx,%ax
	jo	llsubret
llsubret:
	ret	

	# FENTRY llmul
	.align	4
llmul:
	movl	zllmul,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	imulw	%bx,%ax
	jo	llmulret
llmulret:
	ret	

	# FENTRY ll_div
	.align	4
ll_div:
	movl	zll_div,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	orw	%bx,%bx
	je	ban0dv
	orl	%ebx,%ebx
	jz	lldivret
	pushl	%edx
	cwtd
	idivw	%bx
	movzwl	%ax,%eax
	popl	%edx
l9__1:
lldivret:
	ret	

	# FENTRY llrem
	.align	4
llrem:
	movl	zllrem,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	orw	%bx,%bx
	je	ban0dv
	orl	%ebx,%ebx
	jz	l9__2
	pushl	%edx
	cwtd
	idivw	%bx
	movzwl	%dx,%eax
	popl	%edx
l9__2:
	ret	

	# FENTRY scale
	.align	4
scale:
	movl	zscale,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	cmpl	%ecx,bfloat
	jbe	banfix3
	orw	%cx,%cx
	je	ban0dv
	xorl	%edx,%edx
	orw	%ax,%ax
	jge	scale1
	negw	%ax
	incw	%dx
scale1:
	orw	%bx,%bx
	jge	scale2
	negw	%bx
	incw	%dx
scale2:
	orw	%cx,%cx
	jge	scale3
	negw	%cx
	incw	%dx
scale3:
	movl	%eax,%ebp
	imull	%ebx,%ebp
	movzwl	%bp,%ebx
	shrl	$16,%ebp
	movl	%ebp,%eax
	xchgl	%edx,%eax
	xchgl	%eax,%ebx
	shll	$16,%edx
	addl	%edx,%eax
	xorl	%edx,%edx
	divl	%ecx
	xchgl	%edx,%ebx
	orw	%dx,%dx
	je	scale4
	cmpw	$2,%dx
	je	scale4
	negw	%ax
scale4:
	ret	

	# FENTRY llsrandom
	.align	4
llsrandom:
	movl	%edx,%ecx
	movl	zllsrandom,%edx
	orw	%cx,%cx
	je	srand1
	cmpw	$1,%cx
	je	srand0
	jmp	banwna
srand0:
	popl	%eax
	cmpl	%eax,bfloat
	jbe	banfix1
	pushl	%edx
	cwtd
	movl	$31213,%ebp
	idivw	%bp
	movzwl	%dx,%eax
	popl	%edx
l9__3:
	movl	%eax,randseed
srand1:
	movl	randseed,%eax
	ret	

	# FENTRY llrandom
	.align	4
llrandom:
	movl	zllrandom,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	cmpw	%bx,%ax
	je	random1
	cmpw	%bx,%ax
	jl	random2
	movl	%eax,%ecx
	movl	%ebx,%eax
	movl	%ecx,%ebx
random2:
	subw	%ax,%bx
random3:
	movl	randseed,%ecx
	movl	%ecx,%ebp
	imull	$92,%ebp,%ebp
	addl	$2731,%ebp
	movzwl	%bp,%edx
	shrl	$16,%ebp
	movl	%ebp,%ecx
	xchgl	%eax,%edx
	xchgl	%edx,%ecx
	movl	$31213,%ebp
	divw	%bp
	xchgl	%eax,%ecx
	movl	%edx,randseed
	movl	%edx,%ebp
	imull	%ebx,%ebp
	movzwl	%bp,%edx
	shrl	$16,%ebp
	movl	%ebp,%ecx
	xchgl	%eax,%edx
	xchgl	%edx,%ecx
	movl	$31213,%ebp
	divw	%bp
	xchgl	%eax,%ecx
	cmpw	%bx,%cx
	jg	random3
	addw	%cx,%ax
random1:
	ret	

	# FENTRY lognot
	.align	4
lognot:
	movl	zlognot,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	xorw	$65536+-1,%ax
	ret	

	# FENTRY logand
	.align	4
logand:
	movl	zlogand,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	andw	%bx,%ax
	ret	

	# FENTRY logor
	.align	4
logor:
	movl	zlogor,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	orw	%bx,%ax
	ret	

	# FENTRY logxor
	.align	4
logxor:
	movl	zlogxor,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	xorw	%bx,%ax
	ret	

	# FENTRY logshift
	.align	4
logshift:
	movl	zlogshift,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	xchgl	%ecx,%ebx
	orb	%cl,%cl
	jl	l1__4
	shlw	%cl,%ax
	jmp	l2__4
l1__4:
	negb	%cl
	shrw	%cl,%ax
l2__4:
	xchgl	%ecx,%ebx
	ret	

	# FENTRY dpn
	.align	4
dpn:
	movl	zdpn,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	movl	%eax,%ebx
	movl	$1,%eax
	xchgl	%ecx,%ebx
	orb	%cl,%cl
	jl	l1__5
	shlw	%cl,%ax
	jmp	l2__5
l1__5:
	negb	%cl
	shrw	%cl,%ax
l2__5:
	xchgl	%ecx,%ebx
	ret	

	# FENTRY mskfield
	.align	4
mskfield:
	movl	zmskfield,%edx
mskf0:
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	cmpl	%ecx,bfloat
	jbe	banfix3
	movl	$1,%edx
	orb	%cl,%cl
	jl	l1__6
	shlw	%cl,%dx
	jmp	l2__6
l1__6:
	negb	%cl
	shrw	%cl,%dx
l2__6:
	decw	%dx
mskf1:
	xchgl	%ecx,%ebx
	orb	%cl,%cl
	jl	l1__7
	shlw	%cl,%dx
	jmp	l2__7
l1__7:
	negb	%cl
	shrw	%cl,%dx
l2__7:
	xchgl	%ecx,%ebx
	andw	%dx,%ax
	ret	

	# FENTRY ldbyte
	.align	4
ldbyte:
	movl	zldbyte,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	cmpl	%ecx,bfloat
	jbe	banfix3
	movl	$1,%edx
	orb	%cl,%cl
	jl	l1__8
	shlw	%cl,%dx
	jmp	l2__8
l1__8:
	negb	%cl
	shrw	%cl,%dx
l2__8:
	decw	%dx
ldby1:
	negw	%bx
	xchgl	%ecx,%ebx
	orb	%cl,%cl
	jl	l1__9
	shlw	%cl,%ax
	jmp	l2__9
l1__9:
	negb	%cl
	shrw	%cl,%ax
l2__9:
	xchgl	%ecx,%ebx
	andw	%dx,%ax
	ret	

	# FENTRY ldbt
	.align	4
ldbt:
	movl	zldbt,%edx
	cmpl	%eax,bfloat
	jbe	banfix1
	cmpl	%ebx,bfloat
	jbe	banfix2
	cmpl	%ecx,bfloat
	jbe	banfix3
	movl	$1,%edx
	orb	%cl,%cl
	jl	l1__10
	shlw	%cl,%dx
	jmp	l2__10
l1__10:
	negb	%cl
	shrw	%cl,%dx
l2__10:
	decw	%dx
ldbt1:
	negw	%bx
	xchgl	%ecx,%ebx
	orb	%cl,%cl
	jl	l1__11
	shlw	%cl,%ax
	jmp	l2__11
l1__11:
	negb	%cl
	shrw	%cl,%ax
l2__11:
	xchgl	%ecx,%ebx
	andw	%dx,%ax
	orw	%ax,%ax
	je	nfalse
	ret	

	# FENTRY dpbyte
	.align	4
dpbyte:
	movl	%edx,%ecx
	movl	zdpbyte,%edx
	jmp	dpfi0

	# FENTRY dpfield
	.align	4
dpfield:
	movl	%edx,%ecx
	movl	zdpfield,%edx
dpfi0:
	cmpw	$4,%cx
	jne	banwna
	movl	12(%esp),%eax
	cmpl	%eax,bfloat
	jbe	banfix1
	popl	%eax
	popl	%ecx
	popl	%ebx
	cmpl	zdpfield,%edx
	je	dpfi1
	xchgl	%ecx,%ebx
	orb	%cl,%cl
	jl	l1__12
	shlw	%cl,%ax
	jmp	l2__12
l1__12:
	negb	%cl
	shrw	%cl,%ax
l2__12:
	xchgl	%ecx,%ebx
dpfi1:
	calll	mskf0
	popl	%ebx
	xorw	$65536+-1,%dx
	andw	%dx,%bx
	orw	%bx,%ax
	ret	

	# FENTRY llfeqn
	.align	4
llfeqn:
	movl	zllfeqn,%edx
	cmpl	%eax,bfloat
	ja	banflt1
	cmpl	%eax,bvect
	jbe	banflt1
	cmpl	%ebx,bfloat
	ja	banflt2
	cmpl	%ebx,bvect
	jbe	banflt2
	fldl	(%eax)
	pushl	%eax
	fcompl	(%ebx)
	fstsw	%ax
	sahf
	popl	%eax
	jne	nfalse
	ret	

	# FENTRY llfneqn
	.align	4
llfneqn:
	movl	zllfneqn,%edx
	cmpl	%eax,bfloat
	ja	banflt1
	cmpl	%eax,bvect
	jbe	banflt1
	cmpl	%ebx,bfloat
	ja	banflt2
	cmpl	%ebx,bvect
	jbe	banflt2
	fldl	(%eax)
	pushl	%eax
	fcompl	(%ebx)
	fstsw	%ax
	sahf
	popl	%eax
	je	nfalse
	ret	

	# FENTRY llfgt
	.align	4
llfgt:
	movl	zllfgt,%edx
	cmpl	%eax,bfloat
	ja	banflt1
	cmpl	%eax,bvect
	jbe	banflt1
	cmpl	%ebx,bfloat
	ja	banflt2
	cmpl	%ebx,bvect
	jbe	banflt2
	fldl	(%eax)
	pushl	%eax
	fcompl	(%ebx)
	fstsw	%ax
	sahf
	popl	%eax
	jbe	nfalse
	ret	

	# FENTRY llfge
	.align	4
llfge:
	movl	zllfge,%edx
	cmpl	%eax,bfloat
	ja	banflt1
	cmpl	%eax,bvect
	jbe	banflt1
	cmpl	%ebx,bfloat
	ja	banflt2
	cmpl	%ebx,bvect
	jbe	banflt2
	fldl	(%eax)
	pushl	%eax
	fcompl	(%ebx)
	fstsw	%ax
	sahf
	popl	%eax
	jb	nfalse
	ret	

	# FENTRY llflt
	.align	4
llflt:
	movl	zllflt,%edx
	cmpl	%eax,bfloat
	ja	banflt1
	cmpl	%eax,bvect
	jbe	banflt1
	cmpl	%ebx,bfloat
	ja	banflt2
	cmpl	%ebx,bvect
	jbe	banflt2
	fldl	(%eax)
	pushl	%eax
	fcompl	(%ebx)
	fstsw	%ax
	sahf
	popl	%eax
	jae	nfalse
	ret	

	# FENTRY llfle
	.align	4
llfle:
	movl	zllfle,%edx
	cmpl	%eax,bfloat
	ja	banflt1
	cmpl	%eax,bvect
	jbe	banflt1
	cmpl	%ebx,bfloat
	ja	banflt2
	cmpl	%ebx,bvect
	jbe	banflt2
	fldl	(%eax)
	pushl	%eax
	fcompl	(%ebx)
	fstsw	%ax
	sahf
	popl	%eax
	ja	nfalse
	ret	

	# FENTRY llfmin
	.align	4
llfmin:
	movl	zllfmin,%edx
	cmpl	%eax,bfloat
	ja	banflt1
	cmpl	%eax,bvect
	jbe	banflt1
	cmpl	%ebx,bfloat
	ja	banflt2
	cmpl	%ebx,bvect
	jbe	banflt2
	fldl	(%eax)
	pushl	%eax
	fcompl	(%ebx)
	fstsw	%ax
	sahf
	popl	%eax
	jbe	llfminr
	movl	%ebx,%eax
llfminr:
	ret	

	# FENTRY llfmax
	.align	4
llfmax:
	movl	zllfmax,%edx
	cmpl	%eax,bfloat
	ja	banflt1
	cmpl	%eax,bvect
	jbe	banflt1
	cmpl	%ebx,bfloat
	ja	banflt2
	cmpl	%ebx,bvect
	jbe	banflt2
	fldl	(%eax)
	pushl	%eax
	fcompl	(%ebx)
	fstsw	%ax
	sahf
	popl	%eax
	ja	llfmaxr
	movl	%ebx,%eax
llfmaxr:
	ret	

	# FENTRY llfadd
	.align	4
llfadd:
	movl	zllfadd,%edx
	cmpl	%eax,bfloat
	ja	banflt1
	cmpl	%eax,bvect
	jbe	banflt1
	cmpl	%ebx,bfloat
	ja	banflt2
	cmpl	%ebx,bvect
	jbe	banflt2
	fldl	(%ebx)
	faddl	(%eax)
	cmpl	$0,ffloat
	jne	laf__13
	calll	gcfloat
laf__13:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	

	# FENTRY llfsub
	.align	4
llfsub:
	movl	zllfsub,%edx
	cmpl	%eax,bfloat
	ja	banflt1
	cmpl	%eax,bvect
	jbe	banflt1
	cmpl	%ebx,bfloat
	ja	banflt2
	cmpl	%ebx,bvect
	jbe	banflt2
	fldl	(%ebx)
	fsubrl	(%eax)
	cmpl	$0,ffloat
	jne	laf__14
	calll	gcfloat
laf__14:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	

	# FENTRY llfmul
	.align	4
llfmul:
	movl	zllfmul,%edx
	cmpl	%eax,bfloat
	ja	banflt1
	cmpl	%eax,bvect
	jbe	banflt1
	cmpl	%ebx,bfloat
	ja	banflt2
	cmpl	%ebx,bvect
	jbe	banflt2
	fldl	(%ebx)
	fmull	(%eax)
	cmpl	$0,ffloat
	jne	laf__15
	calll	gcfloat
laf__15:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	

	# FENTRY llfdiv
	.align	4
llfdiv:
	movl	zllfdiv,%edx
	cmpl	%eax,bfloat
	ja	banflt1
	cmpl	%eax,bvect
	jbe	banflt1
	cmpl	%ebx,bfloat
	ja	banflt2
	cmpl	%ebx,bvect
	jbe	banflt2
	fldl	(%ebx)
	pushl	%eax
	movl	fzero,%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	je	ban0dv
	fldl	(%ebx)
	fdivrl	(%eax)
	cmpl	$0,ffloat
	jne	laf__16
	calll	gcfloat
laf__16:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	

	# FENTRY clllsht
	.align	4
clllsht:
	xchgl	%ecx,(%esp)
	orb	%cl,%cl
	jl	l1__17
	shlw	%cl,8(%esp)
	jmp	l2__17
l1__17:
	negb	%cl
	shrw	%cl,8(%esp)
l2__17:
	xchgl	%ecx,(%esp)
	addl	$4,%esp
	ret	

	# FENTRY cllmul
	.align	4
cllmul:
	movl	8(%esp),%ebp
	imulw	(%esp),%bp
	movl	%ebp,8(%esp)
	addl	$4,%esp
	ret	

	# FENTRY clldiv
	.align	4
clldiv:
# Patch on DIV/REM used
	movl	%esp,%ebp
	cmpl	$0,(%esp)
	jz	l9__18
	pushl	%eax
	pushl	%edx
	movl	8(%esp),%eax
	cwtd
	idivw	(%esp)
	pushl	%edi
	movl	8(%esp),%edi
	movzwl	%ax,%edi
	movl	%edi,8(%esp)
	popl	%edi
	popl	%edx
	popl	%eax
l9__18:
	addl	$4,%esp
	ret	

	# FENTRY cllrem
	.align	4
cllrem:
# Patch on DIV/REM used
	movl	%esp,%ebp
	cmpl	$0,(%esp)
	jz	l9__19
	pushl	%eax
	pushl	%edx
	movl	8(%esp),%eax
	cwtd
	idivw	(%esp)
	pushl	%edi
	movl	8(%esp),%edi
	movzwl	%dx,%edi
	movl	%edi,8(%esp)
	popl	%edi
	popl	%edx
	popl	%eax
l9__19:
	addl	$4,%esp
	ret	

	# FENTRY cllfadd
	.align	4
cllfadd:
	movl	(%esp),%ebp
	fldl	(%ebp)
	movl	8(%esp),%ebp
	faddl	(%ebp)
	cmpl	$0,ffloat
	jne	laf__20
	calll	gcfloat
laf__20:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,8(%esp)
	fstpl	(%ebp)
	fwait
	addl	$4,%esp
	ret	

	# FENTRY cllfsub
	.align	4
cllfsub:
	movl	(%esp),%ebp
	fldl	(%ebp)
	movl	8(%esp),%ebp
	fsubrl	(%ebp)
	cmpl	$0,ffloat
	jne	laf__21
	calll	gcfloat
laf__21:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,8(%esp)
	fstpl	(%ebp)
	fwait
	addl	$4,%esp
	ret	

	# FENTRY cllfmul
	.align	4
cllfmul:
	movl	(%esp),%ebp
	fldl	(%ebp)
	movl	8(%esp),%ebp
	fmull	(%ebp)
	cmpl	$0,ffloat
	jne	laf__22
	calll	gcfloat
laf__22:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,8(%esp)
	fstpl	(%ebp)
	fwait
	addl	$4,%esp
	ret	

	# FENTRY cllfdiv
	.align	4
cllfdiv:
	movl	(%esp),%ebp
	fldl	(%ebp)
	movl	8(%esp),%ebp
	fdivrl	(%ebp)
	cmpl	$0,ffloat
	jne	laf__23
	calll	gcfloat
laf__23:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,8(%esp)
	fstpl	(%ebp)
	fwait
	addl	$4,%esp
	ret	
cllret1:
	movl	$1,8(%esp)
	addl	$4,%esp
	ret	

	# FENTRY cllfeqn
	.align	4
cllfeqn:
	movl	%esp,%ebp
	movl	(%ebp),%ebp
	fldl	(%ebp)
	pushl	%eax
	movl	8(%ebp),%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	je	cllret1
	movl	$0,8(%esp)
	addl	$4,%esp
	ret	

	# FENTRY cllfneqn
	.align	4
cllfneqn:
	movl	%esp,%ebp
	movl	(%ebp),%ebp
	fldl	(%ebp)
	pushl	%eax
	movl	8(%ebp),%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	jne	cllret1
	movl	$0,8(%esp)
	addl	$4,%esp
	ret	

	# FENTRY cllfgt
	.align	4
cllfgt:
	movl	%esp,%ebp
	movl	(%ebp),%ebp
	fldl	(%ebp)
	pushl	%eax
	movl	8(%ebp),%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	ja	cllret1
	movl	$0,8(%esp)
	addl	$4,%esp
	ret	

	# FENTRY cllfge
	.align	4
cllfge:
	movl	%esp,%ebp
	movl	(%ebp),%ebp
	fldl	(%ebp)
	pushl	%eax
	movl	8(%ebp),%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	jae	cllret1
	movl	$0,8(%esp)
	addl	$4,%esp
	ret	

	# FENTRY cllflt
	.align	4
cllflt:
	movl	%esp,%ebp
	movl	(%ebp),%ebp
	fldl	(%ebp)
	pushl	%eax
	movl	8(%ebp),%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	jb	cllret1
	movl	$0,8(%esp)
	addl	$4,%esp
	ret	

	# FENTRY cllfle
	.align	4
cllfle:
	movl	%esp,%ebp
	movl	(%ebp),%ebp
	fldl	(%ebp)
	pushl	%eax
	movl	8(%ebp),%ebp
	fcompl	(%ebp)
	fstsw	%ax
	sahf
	popl	%eax
	jbe	cllret1
	movl	$0,8(%esp)
	addl	$4,%esp
	ret	

	# FENTRY floatp
	.align	4
floatp:
	cmpl	%eax,bfloat
	ja	lmac1567
	cmpl	%eax,bvect
	ja	floatp2
lmac1567:
	movl	%esi,%eax
floatp2:
	ret	

	# FENTRY fixp
	.align	4
fixp:
	cmpl	%eax,bfloat
	ja	fixp2
	movl	%esi,%eax
fixp2:
	ret	

	# FENTRY flplus
	.align	4
flplus:
	xorl	%eax,%eax
	jmp	fplus2
fplus1:
	popl	%ebx
	cmpl	%ebx,bfloat
	ja	lmac1568
	cmpl	%ebx,bvect
	ja	fplus5
lmac1568:
	cmpl	%ebx,bfloat
	jbe	fpluser1
	movl	%eax,%ecx
	addw	%bx,%ax
	jo	fplus4
fplus2:
	decw	%dx
	jge	fplus1
	ret	
fplus4:
	movl	%ecx,%eax
	movl	%eax,_accusingle1
	fild	_accusingle1
	cmpl	$0,ffloat
	jne	laf__24
	calll	gcfloat
laf__24:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	jmp	fplus7
fplus5:
	movl	%eax,_accusingle1
	fild	_accusingle1
	cmpl	$0,ffloat
	jne	laf__25
	calll	gcfloat
laf__25:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	jmp	fplus8
fplus6:
	popl	%ebx
fplus7:
	cmpl	%ebx,bfloat
	ja	lmac1569
	cmpl	%ebx,bvect
	ja	fplus8
lmac1569:
	cmpl	%ebx,bfloat
	jbe	fpluser1
	movl	%ebx,_accusingle1
	fild	_accusingle1
	cmpl	$0,ffloat
	jne	laf__26
	calll	gcfloat
laf__26:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
fplus8:
	fldl	(%ebx)
	faddl	(%eax)
	cmpl	$0,ffloat
	jne	laf__27
	calll	gcfloat
laf__27:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	decw	%dx
	jge	fplus6
fplus9:
	ret	
fpluser1:
	movl	%ebx,%eax
fpluser2:
	movl	zflplus,%ebx
	jmp	errnna

	# FENTRY fldiff
	.align	4
fldiff:
	orw	%dx,%dx
	je	rzero
	cmpw	$1,%dx
	jne	fdif1
	xorl	%eax,%eax
	xchgl	%eax,(%esp)
	pushl	%eax
	incw	%dx
fdif1:
	xorl	%ebx,%ebx
	jmp	fdif3
fdif2:
	popl	%eax
	cmpl	%eax,bfloat
	ja	lmac1570
	cmpl	%eax,bvect
	ja	fdif5
lmac1570:
	cmpl	%eax,bfloat
	jbe	fdiferr2
	movl	%ebx,%ecx
	addw	%ax,%bx
	jo	fdif4
fdif3:
	decw	%dx
	jg	fdif2
	popl	%eax
	cmpl	%eax,bfloat
	ja	lmac1571
	cmpl	%eax,bvect
	ja	fdif10
lmac1571:
	cmpl	%eax,bfloat
	jbe	fdiferr2
	movl	%eax,%ecx
	subw	%bx,%ax
	jo	fdif91
	ret	
fdif4:
	movl	%ecx,%ebx
	movl	%eax,_accusingle1
	fild	_accusingle1
	cmpl	$0,ffloat
	jne	laf__28
	calll	gcfloat
laf__28:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
fdif5:
	movl	%ebx,_accusingle1
	fild	_accusingle1
	cmpl	$0,ffloat
	jne	laf__29
	calll	gcfloat
laf__29:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
	jmp	fdif7
fdif6:
	popl	%eax
	cmpl	%eax,bfloat
	ja	lmac1572
	cmpl	%eax,bvect
	ja	fdif7
lmac1572:
	cmpl	%eax,bfloat
	jbe	fdiferr2
	movl	%eax,_accusingle1
	fild	_accusingle1
	cmpl	$0,ffloat
	jne	laf__30
	calll	gcfloat
laf__30:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
fdif7:
	fldl	(%eax)
	faddl	(%ebx)
	cmpl	$0,ffloat
	jne	laf__31
	calll	gcfloat
laf__31:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
fdif8:
	decw	%dx
	jg	fdif6
	popl	%eax
	cmpl	%eax,bfloat
	ja	lmac1573
	cmpl	%eax,bvect
	ja	fdif9
lmac1573:
	cmpl	%eax,bfloat
	jbe	fdiferr2
	movl	%eax,_accusingle1
	fild	_accusingle1
	cmpl	$0,ffloat
	jne	laf__32
	calll	gcfloat
laf__32:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
fdif9:
	fldl	(%ebx)
	fsubrl	(%eax)
	cmpl	$0,ffloat
	jne	laf__33
	calll	gcfloat
laf__33:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	
fdif91:
	movl	%ecx,%eax
	movl	%eax,_accusingle1
	fild	_accusingle1
	cmpl	$0,ffloat
	jne	laf__34
	calll	gcfloat
laf__34:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
fdif10:
	movl	%ebx,_accusingle1
	fild	_accusingle1
	cmpl	$0,ffloat
	jne	laf__35
	calll	gcfloat
laf__35:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
	jmp	fdif9
fdiferr1:
	movl	%ebx,%eax
fdiferr2:
	movl	zfldiff,%ebx
	jmp	errnna

	# FENTRY fltimes
	.align	4
fltimes:
	movl	$1,%eax
	jmp	ftime2
ftime1:
	popl	%ebx
	cmpl	%ebx,bfloat
	ja	lmac1574
	cmpl	%ebx,bvect
	ja	ftime5
lmac1574:
	cmpl	%ebx,bfloat
	jbe	ftimerr1
	movl	%eax,%ecx
	imulw	%bx,%ax
	jo	ftime4
ftime2:
	decw	%dx
	jge	ftime1
	ret	
ftime4:
	movl	%ecx,%eax
ftime5:
	movl	%eax,_accusingle1
	fild	_accusingle1
	cmpl	$0,ffloat
	jne	laf__36
	calll	gcfloat
laf__36:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	jmp	ftime7
ftime6:
	popl	%ebx
ftime7:
	cmpl	%ebx,bfloat
	ja	lmac1575
	cmpl	%ebx,bvect
	ja	ftime8
lmac1575:
	cmpl	%ebx,bfloat
	jbe	ftimerr1
	movl	%ebx,_accusingle1
	fild	_accusingle1
	cmpl	$0,ffloat
	jne	laf__37
	calll	gcfloat
laf__37:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
ftime8:
	fldl	(%ebx)
	fmull	(%eax)
	cmpl	$0,ffloat
	jne	laf__38
	calll	gcfloat
laf__38:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	decw	%dx
	jge	ftime6
	ret	
ftimerr1:
	movl	%ebx,%eax
ftimerr2:
	movl	zfltimes,%ebx
	jmp	errnna

	# FENTRY flquo
	.align	4
flquo:
	movl	zflquo,%edx
	cmpl	%eax,bfloat
	ja	lmac1576
	cmpl	%eax,bvect
	ja	fquo2
lmac1576:
	cmpl	%ebx,bfloat
	ja	lmac1577
	cmpl	%ebx,bvect
	ja	fquo3
lmac1577:
	cmpl	%eax,bfloat
	jbe	banmix1
	cmpl	%ebx,bfloat
	jbe	banmix2
	orw	%bx,%bx
	je	fquoovf
	movl	%eax,%ecx
	orl	%ebx,%ebx
	jz	l9__39
	pushl	%edx
	cwtd
	idivw	%bx
	movzwl	%dx,%eax
	popl	%edx
l9__39:
	orw	%ax,%ax
	jne	fquo1
	movl	%ecx,%eax
	orl	%ebx,%ebx
	jz	fquoovf
	pushl	%edx
	cwtd
	idivw	%bx
	movzwl	%ax,%eax
	popl	%edx
l9__40:
	ret	
fquo1:
	movl	%ecx,%eax
	movl	%ebx,_accusingle1
	fild	_accusingle1
	cmpl	$0,ffloat
	jne	laf__41
	calll	gcfloat
laf__41:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
	jmp	fquo3
fquo2:
	cmpl	%ebx,bfloat
	ja	lmac1578
	cmpl	%ebx,bvect
	ja	fquo4
lmac1578:
	cmpl	%ebx,bfloat
	jbe	banmix2
	movl	%ebx,_accusingle1
	fild	_accusingle1
	cmpl	$0,ffloat
	jne	laf__42
	calll	gcfloat
laf__42:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
	jmp	fquo4
fquo3:
	cmpl	%eax,bfloat
	jbe	banmix1
	movl	%eax,_accusingle1
	fild	_accusingle1
	cmpl	$0,ffloat
	jne	laf__43
	calll	gcfloat
laf__43:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
fquo4:
	fldl	(%ebx)
	fdivrl	(%eax)
	cmpl	$0,ffloat
	jne	laf__44
	calll	gcfloat
laf__44:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	
fquoovf:
	xorl	%eax,%eax
	movl	zflquo,%ebx
	jmp	err0dv

	# FENTRY exadd
	.align	4
exadd:
	movl	zexcarry,%ecx
	addl	%ebx,%eax
	addl	(%ecx),%eax
	movl	%eax,(%ecx)
	shrl	$16,(%ecx)
	movzwl	%ax,%eax
	ret	

	# FENTRY exincr
	.align	4
exincr:
	movl	zexcarry,%ebx
	addl	$1,%eax
	addl	(%ebx),%eax
	movl	%eax,(%ebx)
	shrl	$16,(%ebx)
	movzwl	%ax,%eax
	ret	

	# FENTRY exinv
	.align	4
exinv:
	negw	%ax
	decw	%ax
exinvret:
	ret	

	# FENTRY exmul
	.align	4
exmul:
	movl	zexcarry,%edx
	movl	%eax,%ebp
	imull	%ebx,%ebp
	addl	%ecx,%ebp
	addl	(%edx),%ebp
	movzwl	%bp,%eax
	shrl	$16,%ebp
	movl	%ebp,(%edx)
	ret	

	# FENTRY exdiv
	.align	4
exdiv:
	movl	zexcarry,%ecx
	xchgl	%edx,(%ecx)
	shll	$16,%edx
	addl	%edx,%eax
	xorl	%edx,%edx
	divl	%ebx
	xchgl	%edx,(%ecx)
	ret	

	# FENTRY excomp
	.align	4
excomp:
	cmpl	%ebx,%eax
	jb	excomp1
	je	excomp2
	ja	excomp3
excomp1:
	movl	$65536+-1,%eax
	ret	
excomp2:
	xorl	%eax,%eax
	ret	
excomp3:
	movl	$1,%eax
	ret	
