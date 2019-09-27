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
pnmac610:
	.string	"scale"
	.even
pnmac611:
	.string	"lognot"
	.even
pnmac612:
	.string	"logand"
	.even
pnmac613:
	.string	"logor"
	.even
pnmac614:
	.string	"logxor"
	.even
pnmac615:
	.string	"logshift"
	.even
pnmac616:
	.string	"2**"
	.even
pnmac617:
	.string	"mask-field"
	.even
pnmac618:
	.string	"load-byte"
	.even
pnmac619:
	.string	"deposit-byte"
	.even
pnmac620:
	.string	"deposit-field"
	.even
pnmac621:
	.string	"load-byte-test"
	.even
pnmac622:
	.string	"oddp"
	.even
pnmac623:
	.string	"evenp"
	.even
pnmac624:
	.string	"random"
	.even
pnmac625:
	.string	"srandom"
	.even
pnmac626:
	.string	"floatp"
	.even
pnmac627:
	.string	"fixp"
	.even
pnmac628:
	.string	"plus"
	.even
pnmac629:
	.string	"difference"
	.even
pnmac630:
	.string	"differ"
	.even
pnmac631:
	.string	"times"
	.even
pnmac632:
	.string	"divide"
	.even
pnmac633:
	.string	"add1"
	.even
pnmac634:
	.string	"sub1"
	.even
pnmac635:
	.string	"add"
	.even
pnmac636:
	.string	"sub"
	.even
pnmac637:
	.string	"mul"
	.even
pnmac638:
	.string	"div"
	.even
pnmac639:
	.string	"rem"
	.even
pnmac640:
	.string	"eqn"
	.even
pnmac641:
	.string	"neqn"
	.even
pnmac642:
	.string	"ge"
	.even
pnmac643:
	.string	"gt"
	.even
pnmac644:
	.string	"le"
	.even
pnmac645:
	.string	"lt"
	.even
pnmac646:
	.string	"imin"
	.even
pnmac647:
	.string	"imax"
	.even
pnmac648:
	.string	"fadd"
	.even
pnmac649:
	.string	"fsub"
	.even
pnmac650:
	.string	"fmul"
	.even
pnmac651:
	.string	"fdiv"
	.even
pnmac652:
	.string	"feqn"
	.even
pnmac653:
	.string	"fneqn"
	.even
pnmac654:
	.string	"fge"
	.even
pnmac655:
	.string	"fgt"
	.even
pnmac656:
	.string	"fle"
	.even
pnmac657:
	.string	"flt"
	.even
pnmac658:
	.string	"fmin"
	.even
pnmac659:
	.string	"fmax"
	.even
pnmac660:
	.string	"logshift"
	.even
pnmac661:
	.string	"mul"
	.even
pnmac662:
	.string	"div"
	.even
pnmac663:
	.string	"rem"
	.even
pnmac664:
	.string	"fadd"
	.even
pnmac665:
	.string	"fsub"
	.even
pnmac666:
	.string	"fmul"
	.even
pnmac667:
	.string	"fdiv"
	.even
pnmac668:
	.string	"feqn"
	.even
pnmac669:
	.string	"fneqn"
	.even
pnmac670:
	.string	"fge"
	.even
pnmac671:
	.string	"fgt"
	.even
pnmac672:
	.string	"fle"
	.even
pnmac673:
	.string	"flt"
	.even
zexcarry:
	.long	0
pnmac674:
	.string	"regret"
	.even
pnmac675:
	.string	"ex+"
	.even
pnmac676:
	.string	"ex1+"
	.even
pnmac677:
	.string	"ex-"
	.even
pnmac678:
	.string	"ex*"
	.even
pnmac679:
	.string	"ex/"
	.even
pnmac680:
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
	.globl	_accusingle2
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
	movl	$pnmac610,%ebx
	movl	$scale,%ecx
	movl	$zscale,%edx
	pushl	$4
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac611,%ebx
	movl	$lognot,%ecx
	movl	$zlognot,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac612,%ebx
	movl	$logand,%ecx
	movl	$zlogand,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac613,%ebx
	movl	$logor,%ecx
	movl	$zlogor,%edx
	pushl	$3
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac614,%ebx
	movl	$logxor,%ecx
	movl	$zlogxor,%edx
	pushl	$3
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac615,%ebx
	movl	$logshift,%ecx
	movl	$zlogshift,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac616,%ebx
	movl	$dpn,%ecx
	movl	$zdpn,%edx
	pushl	$2
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac617,%ebx
	movl	$mskfield,%ecx
	movl	$zmskfield,%edx
	pushl	$4
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac618,%ebx
	movl	$ldbyte,%ecx
	movl	$zldbyte,%edx
	pushl	$4
	calll	inisymb
	movl	$12,%eax
	movl	$pnmac619,%ebx
	movl	$dpbyte,%ecx
	movl	$zdpbyte,%edx
	pushl	$5
	calll	inisymb
	movl	$13,%eax
	movl	$pnmac620,%ebx
	movl	$dpfield,%ecx
	movl	$zdpfield,%edx
	pushl	$5
	calll	inisymb
	movl	$14,%eax
	movl	$pnmac621,%ebx
	movl	$ldbt,%ecx
	movl	$zldbt,%edx
	pushl	$4
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac622,%ebx
	movl	$oddp,%ecx
	movl	$zoddp,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac623,%ebx
	movl	$evenp,%ecx
	movl	$zevenp,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac624,%ebx
	movl	$llrandom,%ecx
	movl	$zllrandom,%edx
	pushl	$3
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac625,%ebx
	movl	$llsrandom,%ecx
	movl	$zllsrandom,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac626,%ebx
	movl	$floatp,%ecx
	movl	$zfloatp,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac627,%ebx
	movl	$fixp,%ecx
	movl	$zfixp,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac628,%ebx
	movl	$flplus,%ecx
	movl	$zflplus,%edx
	pushl	$5
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac629,%ebx
	movl	$fldiff,%ecx
	movl	$zfldiff,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac630,%ebx
	movl	$fldiff,%ecx
	movl	$zfldiff,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac631,%ebx
	movl	$fltimes,%ecx
	movl	$zfltimes,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac632,%ebx
	movl	$flquo,%ecx
	movl	$zflquo,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac633,%ebx
	movl	$lladd1,%ecx
	movl	$zlladd1,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac634,%ebx
	movl	$llsub1,%ecx
	movl	$zllsub1,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac635,%ebx
	movl	$lladd,%ecx
	movl	$zlladd,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac636,%ebx
	movl	$llsub,%ecx
	movl	$zllsub,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac637,%ebx
	movl	$llmul,%ecx
	movl	$zllmul,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac638,%ebx
	movl	$ll_div,%ecx
	movl	$zll_div,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac639,%ebx
	movl	$llrem,%ecx
	movl	$zllrem,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac640,%ebx
	movl	$lleqn,%ecx
	movl	$zlleqn,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac641,%ebx
	movl	$llneqn,%ecx
	movl	$zllneqn,%edx
	pushl	$3
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac642,%ebx
	movl	$llge,%ecx
	movl	$zllge,%edx
	pushl	$3
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac643,%ebx
	movl	$llgt,%ecx
	movl	$zllgt,%edx
	pushl	$3
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac644,%ebx
	movl	$llle,%ecx
	movl	$zllle,%edx
	pushl	$3
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac645,%ebx
	movl	$lllt,%ecx
	movl	$zlllt,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac646,%ebx
	movl	$llimin,%ecx
	movl	$zllimin,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac647,%ebx
	movl	$llimax,%ecx
	movl	$zllimax,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac648,%ebx
	movl	$llfadd,%ecx
	movl	$zllfadd,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac649,%ebx
	movl	$llfsub,%ecx
	movl	$zllfsub,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac650,%ebx
	movl	$llfmul,%ecx
	movl	$zllfmul,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac651,%ebx
	movl	$llfdiv,%ecx
	movl	$zllfdiv,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac652,%ebx
	movl	$llfeqn,%ecx
	movl	$zllfeqn,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac653,%ebx
	movl	$llfneqn,%ecx
	movl	$zllfneqn,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac654,%ebx
	movl	$llfge,%ecx
	movl	$zllfge,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac655,%ebx
	movl	$llfgt,%ecx
	movl	$zllfgt,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac656,%ebx
	movl	$llfle,%ecx
	movl	$zllfle,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac657,%ebx
	movl	$llflt,%ecx
	movl	$zllflt,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac658,%ebx
	movl	$llfmin,%ecx
	movl	$zllfmin,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac659,%ebx
	movl	$llfmax,%ecx
	movl	$zllfmax,%edx
	pushl	$3
	calll	inisymb
	movl	zkllcp,%ebp
	movl	%ebp,cpkgc
	movl	$8,%eax
	movl	$pnmac660,%ebx
	movl	$clllsht,%ecx
	movl	$zclllsht,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac661,%ebx
	movl	$cllmul,%ecx
	movl	$zcllmul,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac662,%ebx
	movl	$clldiv,%ecx
	movl	$zclldiv,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac663,%ebx
	movl	$cllrem,%ecx
	movl	$zcllrem,%edx
	pushl	$1
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac664,%ebx
	movl	$cllfadd,%ecx
	movl	$zcllfadd,%edx
	pushl	$1
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac665,%ebx
	movl	$cllfsub,%ecx
	movl	$zcllfsub,%edx
	pushl	$1
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac666,%ebx
	movl	$cllfmul,%ecx
	movl	$zcllfmul,%edx
	pushl	$1
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac667,%ebx
	movl	$cllfdiv,%ecx
	movl	$zcllfdiv,%edx
	pushl	$1
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac668,%ebx
	movl	$cllfeqn,%ecx
	movl	$zcllfeqn,%edx
	pushl	$1
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac669,%ebx
	movl	$cllfneqn,%ecx
	movl	$zcllfneqn,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac670,%ebx
	movl	$cllfge,%ecx
	movl	$zcllfge,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac671,%ebx
	movl	$cllfgt,%ecx
	movl	$zcllfgt,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac672,%ebx
	movl	$cllfle,%ecx
	movl	$zcllfle,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac673,%ebx
	movl	$cllflt,%ecx
	movl	$zcllflt,%edx
	pushl	$1
	calll	inisymb
	movl	%esi,cpkgc
	movl	$6,%eax
	movl	$pnmac674,%ebx
	movl	$zexcarry,%ecx
	calll	inicst
	movl	$0,(%eax)
	movl	zex,%ebp
	movl	%ebp,12(%eax)
	movl	$3,%eax
	movl	$pnmac675,%ebx
	movl	$exadd,%ecx
	movl	$zexadd,%edx
	pushl	$3
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac676,%ebx
	movl	$exincr,%ecx
	movl	$zexincr,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac677,%ebx
	movl	$exinv,%ecx
	movl	$zexinv,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac678,%ebx
	movl	$exmul,%ecx
	movl	$zexmul,%edx
	pushl	$4
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac679,%ebx
	movl	$exdiv,%ecx
	movl	$zexdiv,%edx
	pushl	$3
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac680,%ebx
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
	orl	%eax,%eax
	jns	banflt1
	orl	%ebx,%ebx
	jns	banflt2
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
	jne	nfalse
	ret	

	# FENTRY llfneqn
	.align	4
llfneqn:
	movl	zllfneqn,%edx
	orl	%eax,%eax
	jns	banflt1
	orl	%ebx,%ebx
	jns	banflt2
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
	je	nfalse
	ret	

	# FENTRY llfgt
	.align	4
llfgt:
	movl	zllfgt,%edx
	orl	%eax,%eax
	jns	banflt1
	orl	%ebx,%ebx
	jns	banflt2
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
	jbe	nfalse
	ret	

	# FENTRY llfge
	.align	4
llfge:
	movl	zllfge,%edx
	orl	%eax,%eax
	jns	banflt1
	orl	%ebx,%ebx
	jns	banflt2
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
	jb	nfalse
	ret	

	# FENTRY llflt
	.align	4
llflt:
	movl	zllflt,%edx
	orl	%eax,%eax
	jns	banflt1
	orl	%ebx,%ebx
	jns	banflt2
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
	jae	nfalse
	ret	

	# FENTRY llfle
	.align	4
llfle:
	movl	zllfle,%edx
	orl	%eax,%eax
	jns	banflt1
	orl	%ebx,%ebx
	jns	banflt2
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
	ja	nfalse
	ret	

	# FENTRY llfmin
	.align	4
llfmin:
	movl	zllfmin,%edx
	orl	%eax,%eax
	jns	banflt1
	orl	%ebx,%ebx
	jns	banflt2
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
	jbe	llfminr
	movl	%ebx,%eax
llfminr:
	ret	

	# FENTRY llfmax
	.align	4
llfmax:
	movl	zllfmax,%edx
	orl	%eax,%eax
	jns	banflt1
	orl	%ebx,%ebx
	jns	banflt2
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
	ja	llfmaxr
	movl	%ebx,%eax
llfmaxr:
	ret	

	# FENTRY llfadd
	.align	4
llfadd:
	movl	zllfadd,%edx
	orl	%eax,%eax
	jns	banflt1
	orl	%ebx,%ebx
	jns	banflt2
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

	# FENTRY llfsub
	.align	4
llfsub:
	movl	zllfsub,%edx
	orl	%eax,%eax
	jns	banflt1
	orl	%ebx,%ebx
	jns	banflt2
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

	# FENTRY llfmul
	.align	4
llfmul:
	movl	zllfmul,%edx
	orl	%eax,%eax
	jns	banflt1
	orl	%ebx,%ebx
	jns	banflt2
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

	# FENTRY llfdiv
	.align	4
llfdiv:
	movl	zllfdiv,%edx
	orl	%eax,%eax
	jns	banflt1
	orl	%ebx,%ebx
	jns	banflt2
	movl	%ebx,_accusingle2
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
	je	ban0dv
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

	# FENTRY clllsht
	.align	4
clllsht:
	xchgl	%ecx,(%esp)
	orb	%cl,%cl
	jl	l1__13
	shlw	%cl,8(%esp)
	jmp	l2__13
l1__13:
	negb	%cl
	shrw	%cl,8(%esp)
l2__13:
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
	jz	l9__14
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
l9__14:
	addl	$4,%esp
	ret	

	# FENTRY cllrem
	.align	4
cllrem:
# Patch on DIV/REM used
	movl	%esp,%ebp
	cmpl	$0,(%esp)
	jz	l9__15
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
l9__15:
	addl	$4,%esp
	ret	

	# FENTRY cllfadd
	.align	4
cllfadd:
	movl	(%esp),%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	8(%esp),%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fadds	_accusingle2
	fstps	8(%esp)
	fwait
	shrl	$1,8(%esp)
	orl	$0x80000000,8(%esp)
	addl	$4,%esp
	ret	

	# FENTRY cllfsub
	.align	4
cllfsub:
	movl	(%esp),%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	8(%esp),%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fsubrs	_accusingle2
	fstps	8(%esp)
	fwait
	shrl	$1,8(%esp)
	orl	$0x80000000,8(%esp)
	addl	$4,%esp
	ret	

	# FENTRY cllfmul
	.align	4
cllfmul:
	movl	(%esp),%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	8(%esp),%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fmuls	_accusingle2
	fstps	8(%esp)
	fwait
	shrl	$1,8(%esp)
	orl	$0x80000000,8(%esp)
	addl	$4,%esp
	ret	

	# FENTRY cllfdiv
	.align	4
cllfdiv:
	movl	(%esp),%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	movl	8(%esp),%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fdivrs	_accusingle2
	fstps	8(%esp)
	fwait
	shrl	$1,8(%esp)
	orl	$0x80000000,8(%esp)
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
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	8(%ebp),%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
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
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	8(%ebp),%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
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
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	8(%ebp),%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
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
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	8(%ebp),%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
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
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	8(%ebp),%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
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
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	flds	_accusingle2
	pushl	%eax
	movl	8(%ebp),%ebp
	movl	%ebp,_accusingle2
	shll	$1,_accusingle2
	fcomps	_accusingle2
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
	orl	%eax,%eax
	js	floatp2
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
	orl	%ebx,%ebx
	js	fplus5
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
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	jmp	fplus7
fplus5:
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	jmp	fplus8
fplus6:
	popl	%ebx
fplus7:
	orl	%ebx,%ebx
	js	fplus8
	cmpl	%ebx,bfloat
	jbe	fpluser1
	movl	%ebx,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
fplus8:
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
	orl	%eax,%eax
	js	fdif5
	cmpl	%eax,bfloat
	jbe	fdiferr2
	movl	%ebx,%ecx
	addw	%ax,%bx
	jo	fdif4
fdif3:
	decw	%dx
	jg	fdif2
	popl	%eax
	orl	%eax,%eax
	js	fdif10
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
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
fdif5:
	movl	%ebx,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
	jmp	fdif7
fdif6:
	popl	%eax
	orl	%eax,%eax
	js	fdif7
	cmpl	%eax,bfloat
	jbe	fdiferr2
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
fdif7:
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
fdif8:
	decw	%dx
	jg	fdif6
	popl	%eax
	orl	%eax,%eax
	js	fdif9
	cmpl	%eax,bfloat
	jbe	fdiferr2
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
fdif9:
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
fdif91:
	movl	%ecx,%eax
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
fdif10:
	movl	%ebx,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
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
	orl	%ebx,%ebx
	js	ftime5
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
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
	jmp	ftime7
ftime6:
	popl	%ebx
ftime7:
	orl	%ebx,%ebx
	js	ftime8
	cmpl	%ebx,bfloat
	jbe	ftimerr1
	movl	%ebx,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
ftime8:
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
	orl	%eax,%eax
	js	fquo2
	orl	%ebx,%ebx
	js	fquo3
	cmpl	%eax,bfloat
	jbe	banmix1
	cmpl	%ebx,bfloat
	jbe	banmix2
	orw	%bx,%bx
	je	fquoovf
	movl	%eax,%ecx
	orl	%ebx,%ebx
	jz	l9__16
	pushl	%edx
	cwtd
	idivw	%bx
	movzwl	%dx,%eax
	popl	%edx
l9__16:
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
l9__17:
	ret	
fquo1:
	movl	%ecx,%eax
	movl	%ebx,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
	jmp	fquo3
fquo2:
	orl	%ebx,%ebx
	js	fquo4
	cmpl	%ebx,bfloat
	jbe	banmix2
	movl	%ebx,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%ebx
	shrl	$1,%ebx
	orl	$0x80000000,%ebx
	jmp	fquo4
fquo3:
	cmpl	%eax,bfloat
	jbe	banmix1
	movl	%eax,_accusingle1
	fild	_accusingle1
	fstps	_accusingle2
	fwait
	movl	_accusingle2,%eax
	shrl	$1,%eax
	orl	$0x80000000,%eax
fquo4:
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
