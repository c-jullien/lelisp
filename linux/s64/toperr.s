	.file	"toperr.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	fcons
	.globl	bvar
	.globl	zt
	.globl	zitsoft
	.globl	zllsystem
	.globl	itstate
	.globl	bstack
	.globl	mstack
	.globl	mstack1
	.globl	mstack2
	.globl	cpkgc
	.globl	bufat
	.globl	dlink
	.globl	savea4
	.globl	zeval000
zlsubr0:
	.long	0
pnmac1666:
	.string	"subr0"
	.even
zlsubr1:
	.long	0
pnmac1667:
	.string	"subr1"
	.even
zlsubr2:
	.long	0
pnmac1668:
	.string	"subr2"
	.even
zlsubr3:
	.long	0
pnmac1669:
	.string	"subr3"
	.even
znlsubr:
	.long	0
pnmac1670:
	.string	"nsubr"
	.even
zflsubr:
	.long	0
pnmac1671:
	.string	"fsubr"
	.even
zllexpr:
	.long	0
pnmac1672:
	.string	"expr"
	.even
zllfexpr:
	.long	0
pnmac1673:
	.string	"fexpr"
	.even
zllmacro:
	.long	0
pnmac1674:
	.string	"macro"
	.even
zlldmacro:
	.long	0
pnmac1675:
	.string	"dmacro"
	.even
zllmsubr:
	.long	0
pnmac1676:
	.string	"msubr"
	.even
zlldmsubr:
	.long	0
pnmac1677:
	.string	"dmsubr"
	.even
pnmac1678:
	.string	"toplevel"
	.even
zstatoplevel:
	.long	0
pnmac1679:
	.string	"toplevel-flag"
	.even
zprtmsgs:
	.long	0
pnmac1680:
	.string	"print-msgs"
	.even
zprtfltl:
	.long	0
pnmac1681:
	.string	"length-float"
	.even
zfatalerror:
	.long	0
pnmac1682:
	.string	"error-tag"
	.even
pnmac1683:
	.string	"runtime"
	.even
pnmac1684:
	.string	"sleep"
	.even
pnmac1685:
	.string	"date"
	.even
pnmac1686:
	.string	"clockalarm"
	.even
pnmac1687:
	.string	"with-interrupts"
	.even
pnmac1688:
	.string	"without-interrupts"
	.even
pnmac1689:
	.string	"time"
	.even
pnmac1690:
	.string	"stack-info"
	.even
pnmac1691:
	.string	"comline"
	.even
pnmac1692:
	.string	"getenv"
	.even
pnmac1693:
	.string	"getglobal"
	.even
pnmac1694:
	.string	"callextern"
	.even
pnmac1695:
	.string	"cstack"
	.even
pnmac1696:
	.string	"syserror"
	.even
pnmac1697:
	.string	"error"
	.even
pnmac1698:
	.string	"sysdebug"
	.even
zmserror:
	.long	0
pnmac1699:
	.string	"** "
	.even
zcolon:
	.long	0
pnmac1700:
	.string	" : "
	.even
zerrfstk:
	.long	0
pnmac1701:
	.string	"errfstk"
	.even
zerrfsgc:
	.long	0
pnmac1702:
	.string	"errfsgc"
	.even
zerrfsud:
	.long	0
pnmac1703:
	.string	"errfsud"
	.even
zerrfpgc:
	.long	0
pnmac1704:
	.string	"errfpgc"
	.even
zerrfsym:
	.long	0
pnmac1705:
	.string	"errfsym"
	.even
zerrfcns:
	.long	0
pnmac1706:
	.string	"errfcns"
	.even
zerrfflt:
	.long	0
pnmac1707:
	.string	"errfflt"
	.even
zerrffix:
	.long	0
pnmac1708:
	.string	"errffix"
	.even
zerrfhep:
	.long	0
pnmac1709:
	.string	"errfhep"
	.even
zerrfstr:
	.long	0
pnmac1710:
	.string	"errfstr"
	.even
zerrfvec:
	.long	0
pnmac1711:
	.string	"errfvec"
	.even
zerrmac:
	.long	0
pnmac1712:
	.string	"errmac"
	.even
zerrudv:
	.long	0
pnmac1713:
	.string	"errudv"
	.even
zerrudf:
	.long	0
pnmac1714:
	.string	"errudf"
	.even
zerrudm:
	.long	0
pnmac1715:
	.string	"errudm"
	.even
zerrudt:
	.long	0
pnmac1716:
	.string	"errudt"
	.even
zerrbdf:
	.long	0
pnmac1717:
	.string	"errbdf"
	.even
zerrwna:
	.long	0
pnmac1718:
	.string	"errwna"
	.even
zerrbpa:
	.long	0
pnmac1719:
	.string	"errbpa"
	.even
zerrbal:
	.long	0
pnmac1720:
	.string	"errbal"
	.even
zerrilb:
	.long	0
pnmac1721:
	.string	"errilb"
	.even
zerrsxt:
	.long	0
pnmac1722:
	.string	"errsxt"
	.even
zerrios:
	.long	0
pnmac1723:
	.string	"errios"
	.even
zerr0dv:
	.long	0
pnmac1724:
	.string	"err0dv"
	.even
zerrnna:
	.long	0
pnmac1725:
	.string	"errnna"
	.even
zerrnia:
	.long	0
pnmac1726:
	.string	"errnia"
	.even
zerrnfa:
	.long	0
pnmac1727:
	.string	"errnfa"
	.even
zerrnsa:
	.long	0
pnmac1728:
	.string	"errnsa"
	.even
zerrnaa:
	.long	0
pnmac1729:
	.string	"errnaa"
	.even
zerrnla:
	.long	0
pnmac1730:
	.string	"errnla"
	.even
zerrnva:
	.long	0
pnmac1731:
	.string	"errnva"
	.even
zerroob:
	.long	0
pnmac1732:
	.string	"erroob"
	.even
zerrstl:
	.long	0
pnmac1733:
	.string	"errstl"
	.even
zerrvec:
	.long	0
pnmac1734:
	.string	"errvec"
	.even
zerrnda:
	.long	0
pnmac1735:
	.string	"errnda"
	.even
zerrstc:
	.long	0
pnmac1736:
	.string	"errstc"
	.even
zerrsym:
	.long	0
pnmac1737:
	.string	"errsym"
	.even
zerrgen:
	.long	0
pnmac1738:
	.string	"errgen"
	.even
zerrnab:
	.long	0
pnmac1739:
	.string	"errnab"
	.even
zerrxia:
	.long	0
pnmac1740:
	.string	"errxia"
	.even
zbreak:
	.long	0
pnmac1741:
	.string	"break"
	.even
pnmac1742:
	.string	"user-interrupt"
	.even
pnmac1743:
	.string	"mouse"
	.even
pnmac1744:
	.string	"clock"
	.even
ztoplevel:
	.long	0
lab_m__1:
	.string	"= "
	.even
zcstack:
	.long	0
lab_m__5:
	.string	" error EVSTKF "
	.even
zllcline:
	.long	0
zllgetenv:
	.long	0
zllgetadr:
	.long	0
zllcallx:
	.long	0
zrunt:
	.long	0
	.globl	accusingle2
zllsleep:
	.long	0
	.globl	accusingle1
zlldate:
	.long	0
zclkalarm:
	.long	0
zwithit:
	.long	0
zwithnoit:
	.long	0
zlltime:
	.long	0
zllshwstk:
	.long	0
zlerror:
	.long	0
zsyserror:
	.long	0
zsysdebug:
	.long	0
zuserit:
	.long	0
zmouse:
	.long	0
zlltclock:
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
	.globl	estack
	.globl	crwork
	.text
	.align	4
	.globl	llsystem
	.globl	itsoft
	.globl	reenter
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	inisymb
	.globl	inicst
	.globl	tryatom
	.globl	lread
	.globl	probj
	.globl	probjt
	.globl	u_print
	.globl	findtag
	.globl	eval000
	.globl	evala1
	.globl	sysprot
	.globl	unbind0
	.globl	unbind1
	.globl	unbind2
	.globl	unbind3
	.globl	unbind4
	.globl	unbind5
	.globl	unbind6
	.globl	unbind7
	.globl	unbind8
	.globl	unbind9
	.globl	unbind10
	.globl	evprogn
	.globl	evprognr
	.globl	nreverse
	.globl	fldiff
	.globl	stringa1
	.globl	makevect
	.globl	loc
	.globl	vaga1
	.globl	ini_top
	.globl	systop
	.globl	zsyserror
	.globl	zprtmsgs
	.globl	zprtfltl
	.globl	errfs
	.globl	errfn
	.globl	errfsgc
	.globl	erres
	.globl	errff
	.globl	errfsp
	.globl	errfr
	.globl	errfv
	.globl	errfh
	.globl	err0dv
	.globl	errato
	.globl	errfm
	.globl	errudv
	.globl	errudf
	.globl	errudm
	.globl	errudt
	.globl	errbpa
	.globl	errbal
	.globl	errwna
	.globl	errilb
	.globl	errnaa
	.globl	errnna
	.globl	errnia
	.globl	errnfa
	.globl	errnsa
	.globl	errnla
	.globl	errvec
	.globl	errsym
	.globl	errnva
	.globl	errnda
	.globl	errstc
	.globl	errstl
	.globl	errbdf
	.globl	erroob
	.globl	errios
	.globl	errsxt
	.globl	errgen
	.globl	errnab
	.globl	errxia
	.globl	zsysdebug
	.globl	zlsubr0
	.globl	zlsubr1
	.globl	zlsubr2
	.globl	zlsubr3
	.globl	znlsubr
	.globl	zflsubr
	.globl	zllexpr
	.globl	zllfexpr
	.globl	zllmacro
	.globl	zlldmacro
	.globl	zllmsubr
	.globl	zlldmsubr
	.globl	zmouse
	.globl	llbreak
	.globl	llpanic
	.globl	llmerro
	.globl	llmouse
	.globl	llclock
	.globl	getsetn
	.globl	ttyout
	.globl	cline
	.globl	getenvrn
	.globl	getgloba
	.globl	ll_callg
	.globl	runtime
	.globl	cdleep
	.globl	cdate
	.globl	setalarm
	.globl	ttycrlf

	# FENTRY ini_top
	.align	4
ini_top:
	movl	$5,%eax
	movl	$pnmac1666,%ebx
	movl	$zlsubr0,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1667,%ebx
	movl	$zlsubr1,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1668,%ebx
	movl	$zlsubr2,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1669,%ebx
	movl	$zlsubr3,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1670,%ebx
	movl	$znlsubr,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1671,%ebx
	movl	$zflsubr,%ecx
	calll	inicst
	movl	$4,%eax
	movl	$pnmac1672,%ebx
	movl	$zllexpr,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1673,%ebx
	movl	$zllfexpr,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1674,%ebx
	movl	$zllmacro,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1675,%ebx
	movl	$zlldmacro,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1676,%ebx
	movl	$zllmsubr,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1677,%ebx
	movl	$zlldmsubr,%ecx
	calll	inicst
	movl	$8,%eax
	movl	$pnmac1678,%ebx
	movl	$toplevel,%ecx
	movl	$ztoplevel,%edx
	pushl	$1
	calll	inisymb
	movl	zllsystem,%ebp
	movl	%ebp,cpkgc
	movl	$13,%eax
	movl	$pnmac1679,%ebx
	movl	$zstatoplevel,%ecx
	calll	inicst
	movl	zt,%ebp
	movl	%ebp,(%eax)
	movl	$10,%eax
	movl	$pnmac1680,%ebx
	movl	$zprtmsgs,%ecx
	calll	inicst
	movl	$1,(%eax)
	movl	$12,%eax
	movl	$pnmac1681,%ebx
	movl	$zprtfltl,%ecx
	calll	inicst
	movl	$3,(%eax)
	movl	$9,%eax
	movl	$pnmac1682,%ebx
	movl	$zfatalerror,%ecx
	calll	inicst
	movl	%esi,cpkgc
	movl	$7,%eax
	movl	$pnmac1683,%ebx
	movl	$runt,%ecx
	movl	$zrunt,%edx
	pushl	$1
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1684,%ebx
	movl	$llsleep,%ecx
	movl	$zllsleep,%edx
	pushl	$2
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1685,%ebx
	movl	$lldate,%ecx
	movl	$zlldate,%edx
	pushl	$1
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac1686,%ebx
	movl	$clkalarm,%ecx
	movl	$zclkalarm,%edx
	pushl	$2
	calll	inisymb
	movl	$15,%eax
	movl	$pnmac1687,%ebx
	movl	$withit,%ecx
	movl	$zwithit,%edx
	pushl	$6
	calll	inisymb
	movl	$18,%eax
	movl	$pnmac1688,%ebx
	movl	$withnoit,%ecx
	movl	$zwithnoit,%edx
	pushl	$6
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac1689,%ebx
	movl	$lltime,%ecx
	movl	$zlltime,%edx
	pushl	$2
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac1690,%ebx
	movl	$llshwstk,%ecx
	movl	$zllshwstk,%edx
	pushl	$2
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac1691,%ebx
	movl	$llcline,%ecx
	movl	$zllcline,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1692,%ebx
	movl	$llgetenv,%ecx
	movl	$zllgetenv,%edx
	pushl	$2
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac1693,%ebx
	movl	$llgetadr,%ecx
	movl	$zllgetadr,%edx
	pushl	$2
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac1694,%ebx
	movl	$llcallx,%ecx
	movl	$zllcallx,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac1695,%ebx
	movl	$cstack,%ecx
	movl	$zcstack,%edx
	pushl	$1
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac1696,%ebx
	movl	$syserror,%ecx
	movl	$zsyserror,%edx
	pushl	$4
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1697,%ebx
	movl	$lerror,%ecx
	movl	$zlerror,%edx
	pushl	$4
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac1698,%ebx
	movl	$sysdebug,%ecx
	movl	$zsysdebug,%edx
	pushl	$1
	calll	inisymb
	movl	%esi,(%eax)
	movl	$3,%eax
	movl	$pnmac1699,%ebx
	movl	$zmserror,%ecx
	calll	inicst
	movl	$3,%eax
	movl	$pnmac1700,%ebx
	movl	$zcolon,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1701,%ebx
	movl	$zerrfstk,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1702,%ebx
	movl	$zerrfsgc,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1703,%ebx
	movl	$zerrfsud,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1704,%ebx
	movl	$zerrfpgc,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1705,%ebx
	movl	$zerrfsym,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1706,%ebx
	movl	$zerrfcns,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1707,%ebx
	movl	$zerrfflt,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1708,%ebx
	movl	$zerrffix,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1709,%ebx
	movl	$zerrfhep,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1710,%ebx
	movl	$zerrfstr,%ecx
	calll	inicst
	movl	$7,%eax
	movl	$pnmac1711,%ebx
	movl	$zerrfvec,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1712,%ebx
	movl	$zerrmac,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1713,%ebx
	movl	$zerrudv,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1714,%ebx
	movl	$zerrudf,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1715,%ebx
	movl	$zerrudm,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1716,%ebx
	movl	$zerrudt,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1717,%ebx
	movl	$zerrbdf,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1718,%ebx
	movl	$zerrwna,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1719,%ebx
	movl	$zerrbpa,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1720,%ebx
	movl	$zerrbal,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1721,%ebx
	movl	$zerrilb,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1722,%ebx
	movl	$zerrsxt,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1723,%ebx
	movl	$zerrios,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1724,%ebx
	movl	$zerr0dv,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1725,%ebx
	movl	$zerrnna,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1726,%ebx
	movl	$zerrnia,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1727,%ebx
	movl	$zerrnfa,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1728,%ebx
	movl	$zerrnsa,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1729,%ebx
	movl	$zerrnaa,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1730,%ebx
	movl	$zerrnla,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1731,%ebx
	movl	$zerrnva,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1732,%ebx
	movl	$zerroob,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1733,%ebx
	movl	$zerrstl,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1734,%ebx
	movl	$zerrvec,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1735,%ebx
	movl	$zerrnda,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1736,%ebx
	movl	$zerrstc,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1737,%ebx
	movl	$zerrsym,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1738,%ebx
	movl	$zerrgen,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1739,%ebx
	movl	$zerrnab,%ecx
	calll	inicst
	movl	$6,%eax
	movl	$pnmac1740,%ebx
	movl	$zerrxia,%ecx
	calll	inicst
	movl	$5,%eax
	movl	$pnmac1741,%ebx
	movl	$zbreak,%ecx
	calll	inicst
	movl	$14,%eax
	movl	$pnmac1742,%ebx
	movl	$userit,%ecx
	movl	$zuserit,%edx
	pushl	$1
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1743,%ebx
	movl	$mouse,%ecx
	movl	$zmouse,%edx
	pushl	$1
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac1744,%ebx
	movl	$lltclock,%ecx
	movl	$zlltclock,%edx
	pushl	$1
	calll	inisymb
	ret	
systop:
	movl	%esi,dlink
	pushl	dlink
	pushl	$unbind0
	movl	%esp,dlink
systop2:
	movl	ztoplevel,%eax
	movl	%esi,%ebx
	calll	itsoft
	jmp	systop2

	# FENTRY toplevel
	.align	4
toplevel:
	calll	lread
	pushl	$toplevr
	pushl	%eax
	pushl	%esi
	movl	$2,%edx
	jmp	eval000
toplevr:
	movl	zstatoplevel,%ebx
	movl	(%ebx),%ebx
	cmpl	%esi,%ebx
	je	toplend
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	$lab_m__1
	pushl	$2
	calll	ttyout
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	calll	u_print
toplend:
	ret	

	# FENTRY cstack
	.align	4
cstack:
	movl	%esi,%eax
	pushl	%eax
	movl	%esp,%ebx
	movl	dlink,%edx
evstck0:
	cmpl	%edx,%ebx
	je	evstck1
	movl	(%ebx),%eax
	addl	$4,%ebx
	cmpl	$evprognr,%eax
	jne	evstck0
	movl	(%ebx),%eax
	addl	$4,%ebx
	cmpl	%edi,fcons
	jb	l__2
l1__2:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%esi,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	cmpl	%edi,fcons
	jb	l__3
l1__3:
	xchgl	%edi,fcons
	movl	$11,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	cmpl	%edi,fcons
	jb	l__4
l1__4:
	xchgl	%edi,fcons
	movl	%eax,(%edi)
	movl	(%esp),%ebp
	xchgl	%ebp,4(%edi)
	xchgl	%ebp,%edi
	movl	%ebp,(%esp)
	xchgl	%edi,fcons
	jmp	evstck0
evstck1:
	movl	%esi,%eax
	movl	(%edx),%ecx
	addl	$4,%edx
	cmpl	$unbind0,%ecx
	je	evstkf
	cmpl	$unbind1,%ecx
	je	evstkl
	cmpl	$unbind2,%ecx
	je	evstka
	cmpl	$unbind3,%ecx
	je	evstke
	cmpl	$unbind4,%ecx
	je	evstks
	cmpl	$unbind5,%ecx
	je	evstkb
	cmpl	$unbind6,%ecx
	je	evstku
	cmpl	$unbind7,%ecx
	je	evstky
	cmpl	$unbind8,%ecx
	je	evstkh
	cmpl	$unbind9,%ecx
	je	evstkt
	cmpl	$unbind10,%ecx
	je	evstkk
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	$lab_m__5
	pushl	$14
	calll	ttyout
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
evstkf:
	popl	%eax
	jmp	nreverse
evstck2:
	pushl	%edx
	pushl	savea4
	calll	nreverse
	popl	%edx
	popl	%ebx
	cmpl	%edi,fcons
	jb	l__6
l1__6:
	xchgl	%edi,fcons
	movl	%eax,(%edi)
	movl	(%esp),%ebp
	xchgl	%ebp,4(%edi)
	xchgl	%ebp,%edi
	movl	%ebp,(%esp)
	xchgl	%edi,fcons
	jmp	evstck0
evstkl:
	cmpl	%edi,fcons
	jb	l__7
l1__7:
	xchgl	%edi,fcons
	movl	$1,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	(%edx),%ebp
	movl	%ebp,savea4
	addl	$4,%edx
	movl	(%edx),%ecx
	addl	$4,%edx
	cmpl	%edi,fcons
	jb	l__8
l1__8:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	(%edx),%ecx
	addl	$4,%edx
	cmpl	%edi,fcons
	jb	l__9
l1__9:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	(%edx),%ecx
	addl	$4,%edx
	cmpl	%edi,fcons
	jb	l__10
l1__10:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	(%edx),%ebx
	addl	$4,%edx
	jmp	evstkl2
evstkl1:
	movl	(%edx),%ecx
	addl	$4,%edx
	cmpl	%edi,fcons
	jb	l__11
l1__11:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
evstkl2:
	decw	%bx
	jge	evstkl1
	jmp	evstck2
evstka:
	cmpl	%edi,fcons
	jb	l__12
l1__12:
	xchgl	%edi,fcons
	movl	$2,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	(%edx),%ebx
	addl	$4,%edx
	jmp	evstka4
evstka3:
	cmpl	%edi,fcons
	jb	l__13
l1__13:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	(%edx),%ecx
	addl	$4,%edx
	cmpl	%edi,fcons
	jb	l__14
l1__14:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	(%edx),%ecx
	addl	$4,%edx
	cmpl	%edi,fcons
	jb	l__15
l1__15:
	xchgl	%edi,fcons
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
evstka4:
	movl	(%edx),%ecx
	addl	$4,%edx
	orw	%cx,%cx
	jne	evstka3
	movl	%ebx,savea4
	jmp	evstck2
evstke:
	movl	$3,%ebx
	jmp	evstkb1
evstks:
	cmpl	%edi,fcons
	jb	l__16
l1__16:
	xchgl	%edi,fcons
	movl	$4,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	(%edx),%ebp
	movl	%ebp,savea4
	addl	$4,%edx
	movl	$10,%ebx
	jmp	evstkl2
evstkb:
	movl	$5,%ebx
evstkb1:
	cmpl	%edi,fcons
	jb	l__17
l1__17:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	(%edx),%ebp
	movl	%ebp,savea4
	addl	$4,%edx
evstkb2:
	movl	$1,%ebx
	jmp	evstkl2
evstku:
	movl	$6,%ebx
	jmp	evstkb1
evstky:
	cmpl	%edi,fcons
	jb	l__18
l1__18:
	xchgl	%edi,fcons
	movl	$7,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	(%edx),%ebp
	movl	%ebp,savea4
	addl	$4,%edx
	jmp	evstck2
evstkh:
	movl	$8,%ebx
	jmp	evstkb1
evstkt:
	cmpl	%edi,fcons
	jb	l__19
l1__19:
	xchgl	%edi,fcons
	movl	$9,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	movl	(%edx),%ebp
	movl	%ebp,savea4
	addl	$4,%edx
	addl	$4,%edx
	movl	(%edx),%ebx
	addl	$4,%edx
	jmp	evstkl2
evstkk:
	movl	$10,%ebx
	jmp	evstkb1

	# FENTRY llcline
	.align	4
llcline:
	movl	zllcline,%ebp
	movl	%ebp,savea4
	calll	stringa1
	cmpl	$0,itstate
	je	llclin2
	movl	$llclin1,%ecx
	calll	sysprot
	popl	%eax
	movl	$1,itstate
	jmp	*%ecx
llclin1:
	movl	$0,itstate
llclin2:
	pushl	%ebp
	movl	(%eax),%ebp
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
	calll	cline
	addl	$4,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	zt,%eax
	ret	

	# FENTRY llgetenv
	.align	4
llgetenv:
	movl	zllgetenv,%ebp
	movl	%ebp,savea4
	calll	stringa1
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	%ebp
	movl	bufat,%ebp
	movl	(%ebp),%ebp
	addl	$8,%ebp
	movl	%ebp,crwork
	popl	%ebp
	pushl	crwork
	pushl	%ebp
	movl	(%eax),%ebp
	addl	$8,%ebp
	movl	%ebp,crwork
	popl	%ebp
	pushl	crwork
	calll	getenvrn
	movl	%eax,crwork
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ebp
	movl	%ebp,%eax
	orw	%ax,%ax
	jne	gtenv8
	movl	%esi,%eax
	ret	
gtenv8:
	movl	bufat,%ebx
	jmp	tryatom

	# FENTRY llgetadr
	.align	4
llgetadr:
	movl	zllgetadr,%ebp
	movl	%ebp,savea4
	calll	stringa1
	pushl	%ebp
	movl	(%eax),%ebp
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
	calll	getgloba
	movl	%eax,crwork
	addl	$4,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ebp
	movl	%ebp,%eax
	jmp	loc

	# FENTRY llcallx
	.align	4
llcallx:
	decw	%dx
	movl	(%esp,%edx,4),%eax
	movl	zllcallx,%ebx
	calll	vaga1
	movl	%eax,(%esp,%edx,4)
	incw	%dx
	pushl	%edx
	calll	ll_callg
	movl	%ebp,%eax
	leal	(%esp,%edx,4),%esp
	ret	

	# FENTRY runt
	.align	4
runt:
	# Prepare a C function call with 0 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	calll	runtime
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	cmpl	$0,ffloat
	jne	laf__20
	calll	gcfloat
laf__20:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
	ret	

	# FENTRY llsleep
	.align	4
llsleep:
	cmpl	%eax,bfloat
	ja	lmac1745
	cmpl	%eax,bvect
	ja	llsleep1
lmac1745:
	cmpl	%eax,bfloat
	jbe	llsleep2
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__21
	calll	gcfloat
laf__21:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
llsleep1:
	# Prepare a C function call with 0 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	4(%eax)
	pushl	(%eax)
	calll	cdleep
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	ret	
llsleep2:
	movl	zllsleep,%ebx
	jmp	errnna

	# FENTRY lldate
	.align	4
lldate:
	movl	$8,%eax
	movl	%esi,%ebx
	calll	makevect
	movl	zlldate,%ebp
	movl	%ebp,4(%eax)
	pushl	%ebp
	movl	(%eax),%ebp
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
	calll	cdate
	addl	$4,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	ret	

	# FENTRY clkalarm
	.align	4
clkalarm:
	cmpl	%eax,bfloat
	ja	lmac1746
	cmpl	%eax,bvect
	ja	alrms1
lmac1746:
	cmpl	%eax,bfloat
	jbe	alrmer2
	movl	%eax,accusingle1
	fild	accusingle1
	cmpl	$0,ffloat
	jne	laf__22
	calll	gcfloat
laf__22:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%eax
	fstpl	(%ebp)
	fwait
alrms1:
	# Prepare a C function call with 0 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	4(%eax)
	pushl	(%eax)
	calll	setalarm
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	fstp	%st(0)
	ret	
alrmer2:
	movl	zclkalarm,%ebx
	jmp	errnna

	# FENTRY withit
	.align	4
withit:
	cmpl	$0,itstate
	jne	withit2
	movl	$withit1,%ecx
	calll	sysprot
	popl	%eax
	movl	$0,itstate
	jmp	*%ecx
withit1:
	movl	$1,itstate
withit2:
	jmp	evprogn

	# FENTRY withnoit
	.align	4
withnoit:
	cmpl	$0,itstate
	je	withno2
	movl	$withno1,%ecx
	calll	sysprot
	popl	%eax
	movl	$1,itstate
	jmp	*%ecx
withno1:
	movl	$0,itstate
withno2:
	jmp	evprogn

	# FENTRY lltime
	.align	4
lltime:
	# Prepare a C function call with 0 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	calll	runtime
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	cmpl	$0,ffloat
	jne	laf__23
	calll	gcfloat
laf__23:
	movl	ffloat,%ebp
	movl	(%ebp),%ebp
	xchgl	ffloat,%ebp
	movl	%ebp,%ebx
	fstpl	(%ebp)
	fwait
	pushl	%ebx
	calll	evala1
	# Prepare a C function call with 0 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	calll	runtime
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
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
	xchgl	%eax,(%esp)
	pushl	%eax
	movl	$2,%edx
	jmp	fldiff

	# FENTRY llshwstk
	.align	4
llshwstk:
	movl	%esp,%edx
	movl	bstack,%ebx
	movl	mstack,%ecx
llshwstk1:
	cmpl	%esp,%ecx
	ja	llshwstk2
	pushl	%ebx
	jmp	llshwstk1
llshwstk2:
	movl	%edx,%esp
	calll	evala1
	movl	%esp,%ecx
	xorl	%eax,%eax
	xorl	%ebx,%ebx
llshwstk3:
	addl	$-4,%esp
	movl	(%esp),%edx
	cmpl	%edx,bstack
	je	llshwstk4
	incl	%eax
	cmpl	$1024,%eax
	jl	mac1747
	xorl	%eax,%eax
	incl	%ebx
mac1747:
	jmp	llshwstk3
llshwstk4:
	movl	%ecx,%esp
	orw	%bx,%bx
	je	llshwstk5
	cmpl	%edi,fcons
	jb	l__25
l1__25:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
llshwstk5:
	ret	

	# FENTRY lerror
	.align	4
lerror:
	cmpl	%edi,fcons
	jb	l__26
l1__26:
	movl	fcons,%ebp
	movl	%ecx,(%ebp)
	movl	%esi,%ecx
	xchgl	%ecx,4(%ebp)
	xchgl	%ecx,fcons
	cmpl	%edi,fcons
	jb	l__27
l1__27:
	xchgl	%edi,fcons
	movl	%ebx,(%edi)
	xchgl	%ecx,4(%edi)
	xchgl	%edi,%ecx
	xchgl	%edi,fcons
	cmpl	%edi,fcons
	jb	l__28
l1__28:
	xchgl	%edi,fcons
	movl	%eax,(%edi)
	xchgl	%ecx,4(%edi)
	xchgl	%edi,%ecx
	xchgl	%edi,fcons
	movl	%ecx,%ebx
	movl	zsyserror,%eax
	jmp	itsoft
serror:
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
	movl	%ecx,(%edi)
	xchgl	%eax,4(%edi)
	xchgl	%edi,%eax
	xchgl	%edi,fcons
	cmpl	%edi,fcons
	jb	l__31
l1__31:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%eax,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	movl	zsyserror,%eax
	jmp	itsoft
ferror:
	pushl	%eax
	movl	(%eax),%ebx
	cmpl	%ebx,bstrg
	ja	lmac1748
	cmpl	%esi,%ebx
	jb	ferror1
lmac1748:
	calll	stringa1
	movl	%eax,%ebx
ferror1:
	movl	(%ebx),%ebp
	movl	4(%ebp),%eax
	# Entering TTYSTRG
	pushl	%ebp
	movl	(%ebx),%ebp
	addl	$8,%ebp
	movl	%ebp,crwork
	popl	%ebp
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	crwork
	pushl	%eax
	calll	ttyout
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	# Leaving TTYSTRG
	# Prepare a C function call with 0 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	calll	ttycrlf
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	popl	%eax
ferror2:
	movl	%esi,%eax
	movl	zfatalerror,%ebx
	movl	%esi,%ecx
	movl	%esi,%edx
	jmp	findtag

	# FENTRY syserror
	.align	4
syserror:
	pushl	%ecx
	pushl	%ebx
	pushl	%eax
	movl	zmserror,%eax
	calll	probj
	popl	%eax
	calll	probj
	movl	zcolon,%eax
	calll	probj
	popl	%eax
	calll	probj
	movl	zcolon,%eax
	calll	probj
	popl	%eax
	calll	probjt
	jmp	reenter

	# FENTRY sysdebug
	.align	4
sysdebug:
	ret	
errfs:
	movl	zerrfstk,%eax
	cmpl	%esp,mstack2
	ja	ferror
	movl	$errfs0,%ecx
	calll	sysprot
	popl	%eax
	movl	mstack1,%ebp
	movl	%ebp,mstack
	jmp	*%ecx
errfs0:
	movl	mstack2,%ebp
	movl	%ebp,mstack
	movl	%eax,%ecx
	movl	zeval000,%ebx
	movl	%esi,%eax
	jmp	serror
errfsgc:
	movl	zerrfsgc,%eax
	jmp	ferror
erres:
	movl	zerrfsud,%eax
	movl	(%eax),%ebx
	cmpl	%ebx,bstrg
	ja	lmac1749
	cmpl	%esi,%ebx
	jb	erres2
lmac1749:
	calll	stringa1
	movl	%eax,%ebx
erres2:
	movl	(%ebx),%ebp
	movl	4(%ebp),%eax
	# Entering TTYSTRG
	pushl	%ebp
	movl	(%ebx),%ebp
	addl	$8,%ebp
	movl	%ebp,crwork
	popl	%ebp
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	crwork
	pushl	%eax
	calll	ttyout
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	# Leaving TTYSTRG
	# Prepare a C function call with 0 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	calll	ttycrlf
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	jmp	reenter
errfsp:
	movl	zerrfpgc,%eax
	jmp	ferror
errato:
	movl	zerrfsym,%eax
	jmp	ferror
errfm:
	movl	zerrfcns,%eax
	jmp	ferror
errff:
	movl	zerrfflt,%eax
	jmp	ferror
errfn:
	movl	zerrffix,%eax
	jmp	ferror
errfh:
	movl	zerrfhep,%eax
	jmp	ferror
errfr:
	movl	zerrfstr,%eax
	jmp	ferror
errfv:
	movl	zerrfvec,%eax
	jmp	ferror
errudv:
	movl	zerrudv,%ecx
	jmp	serror
errudf:
	movl	zerrudf,%ecx
	jmp	serror
errudm:
	movl	zerrudm,%ecx
	jmp	serror
errudt:
	movl	zerrudt,%ecx
	jmp	serror
errbdf:
	movl	zerrbdf,%ecx
	jmp	serror
errwna:
	movl	zerrwna,%ecx
	jmp	serror
errbpa:
	movl	zerrbpa,%ecx
	jmp	serror
errbal:
	movl	zerrbal,%ecx
	jmp	serror
errilb:
	movl	zerrilb,%ecx
	jmp	serror
errsxt:
	movl	zerrsxt,%ecx
	jmp	serror
errios:
	movl	zerrios,%ecx
	jmp	serror
err0dv:
	movl	zerr0dv,%ecx
	jmp	serror
errnaa:
	movl	zerrnaa,%ecx
	jmp	serror
errnna:
	movl	zerrnna,%ecx
	jmp	serror
errnia:
	movl	zerrnia,%ecx
	jmp	serror
errnfa:
	movl	zerrnfa,%ecx
	jmp	serror
errnsa:
	movl	zerrnsa,%ecx
	jmp	serror
errnla:
	movl	zerrnla,%ecx
	jmp	serror
errnva:
	movl	zerrnva,%ecx
	jmp	serror
errstl:
	movl	zerrstl,%ecx
	jmp	serror
erroob:
	movl	zerroob,%ecx
	jmp	serror
errvec:
	movl	zerrvec,%ecx
	jmp	serror
errnda:
	movl	zerrnda,%ecx
	jmp	serror
errstc:
	movl	zerrstc,%ecx
	jmp	serror
errsym:
	movl	zerrsym,%ecx
	jmp	serror
errgen:
	movl	zerrgen,%ecx
	jmp	serror
errnab:
	movl	zerrnab,%ecx
	jmp	serror
errxia:
	movl	zerrxia,%ecx
	jmp	serror
llmerro:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	calll	llsystem
	cmpl	%edi,fcons
	jb	l__32
l1__32:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	cmpl	%edi,fcons
	jb	l__33
l1__33:
	xchgl	%edi,fcons
	movl	zerrmac,%ebp
	movl	%ebp,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	cmpl	%edi,fcons
	jb	l__34
l1__34:
	xchgl	%edi,fcons
	movl	%eax,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	movl	zsyserror,%eax
	calll	itsoft
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	ret	
llbreak:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	movl	zuserit,%eax
	movl	%esi,%ebx
	calll	itsoft
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	ret	
llpanic:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	movl	%esi,%ebx
	cmpl	%edi,fcons
	jb	l__35
l1__35:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	cmpl	%edi,fcons
	jb	l__36
l1__36:
	xchgl	%edi,fcons
	movl	zbreak,%ebp
	movl	%ebp,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	cmpl	%edi,fcons
	jb	l__37
l1__37:
	xchgl	%edi,fcons
	movl	zbreak,%ebp
	movl	%ebp,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	movl	zsyserror,%eax
	calll	itsoft
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	ret	
llmouse:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	movl	%esi,%ebx
	movl	zmouse,%eax
	calll	itsoft
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	ret	
llclock:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	movl	zlltclock,%eax
	movl	%esi,%ebx
	calll	itsoft
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	ret	

	# FENTRY userit
	.align	4
userit:
	cmpl	$1,itstate
	je	userit2
	movl	$userit1,%ecx
	calll	sysprot
	popl	%eax
	movl	$0,itstate
	jmp	*%ecx
userit1:
	movl	$1,itstate
userit2:
	movl	%esi,%ebx
	cmpl	%edi,fcons
	jb	l__38
l1__38:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	cmpl	%edi,fcons
	jb	l__39
l1__39:
	xchgl	%edi,fcons
	movl	zbreak,%ebp
	movl	%ebp,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	cmpl	%edi,fcons
	jb	l__40
l1__40:
	xchgl	%edi,fcons
	movl	zbreak,%ebp
	movl	%ebp,(%edi)
	xchgl	%ebx,4(%edi)
	xchgl	%edi,%ebx
	xchgl	%edi,fcons
	movl	zsyserror,%eax
	jmp	itsoft

	# FENTRY mouse
	.align	4
mouse:
	movl	%esi,%eax
	ret	

	# FENTRY lltclock
	.align	4
lltclock:
	movl	%esi,%eax
	ret	
getsetn:
	orw	%dx,%dx
	je	getsetn1
	cmpw	$1,%dx
	je	getsetn2
	movl	$1,%eax
	jmp	errwna
getsetn1:
	popl	%edx
	movl	%ecx,%eax
	addl	$8,%esp
	jmp	*%edx
getsetn2:
	popl	%edx
	popl	%ecx
	movl	4(%esp),%eax
	cmpl	%eax,bfloat
	jbe	errnia
	cmpw	%cx,%ax
	jg	erroob
	popl	%ecx
	cmpw	%cx,%ax
	jl	erroob
	popl	%eax
	jmp	*%edx
l__40:
	calll	gccons
	jmp	l1__40
l__39:
	calll	gccons
	jmp	l1__39
l__38:
	calll	gccons
	jmp	l1__38
l__37:
	calll	gccons
	jmp	l1__37
l__36:
	calll	gccons
	jmp	l1__36
l__35:
	calll	gccons
	jmp	l1__35
l__34:
	calll	gccons
	jmp	l1__34
l__33:
	calll	gccons
	jmp	l1__33
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
l__19:
	calll	gccons
	jmp	l1__19
l__18:
	calll	gccons
	jmp	l1__18
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
l__4:
	calll	gccons
	jmp	l1__4
l__3:
	calll	gccons
	jmp	l1__3
l__2:
	calll	gccons
	jmp	l1__2
