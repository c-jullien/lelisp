	.file	"physio.asm"
	.version	"02.01"
	.text	
	.align	4
	.data
	.align	4
	.globl	zundef
	.globl	fcons
	.globl	bvar
	.globl	zt
	.globl	zitsoft
	.globl	maxchan
	.globl	zllsystem
	.globl	zsyspkgc
	.globl	zstinread
	.globl	ringur
	.globl	curread
	.globl	cpkgc
	.globl	bufout
	.globl	pocour
	.globl	nbleft
	.globl	nbrig
	.globl	maxpocou
	.globl	savea4
pnmac494:
	.string	"tyi"
	.even
pnmac495:
	.string	"tys"
	.even
pnmac496:
	.string	"tyinstring"
	.even
pnmac497:
	.string	"tyo"
	.even
pnmac498:
	.string	"tyflush"
	.even
pnmac499:
	.string	"tyback"
	.even
pnmac500:
	.string	"tynewline"
	.even
pnmac501:
	.string	"tycn"
	.even
pnmac502:
	.string	"tystring"
	.even
pnmac503:
	.string	"tycursor"
	.even
pnmac504:
	.string	"tycls"
	.even
pnmac505:
	.string	"redisplayscreen"
	.even
ztty:
	.long	0
pnmac506:
	.string	"tty"
	.even
pnmac507:
	.string	"tyi"
	.even
pnmac508:
	.string	"tys"
	.even
pnmac509:
	.string	"tyinstring"
	.even
pnmac510:
	.string	"tyo"
	.even
pnmac511:
	.string	"tyflush"
	.even
pnmac512:
	.string	"tyback"
	.even
pnmac513:
	.string	"tynewline"
	.even
pnmac514:
	.string	"tycn"
	.even
pnmac515:
	.string	"tystring"
	.even
pnmac516:
	.string	"tycursor"
	.even
pnmac517:
	.string	"tycls"
	.even
pnmac518:
	.string	"redisplayscreen"
	.even
zsyspktty:
	.long	0
pnmac519:
	.string	"tty"
	.even
ztyco:
	.long	0
pnmac520:
	.string	"tyco"
	.even
pnmac521:
	.string	"bol"
	.even
pnmac522:
	.string	"inmax"
	.even
pnmac523:
	.string	"inpos"
	.even
pnmac524:
	.string	"inbuf"
	.even
pnmac525:
	.string	"eof"
	.even
pnmac526:
	.string	"prompt"
	.even
zstdprmpt:
	.long	0
pnmac527:
	.string	"? "
	.even
zrealterm:
	.long	0
pnmac528:
	.string	"real-terminal-flag"
	.even
zlinemode:
	.long	0
pnmac529:
	.string	"line-mode-flag"
	.even
pnmac530:
	.string	"openi"
	.even
pnmac531:
	.string	"openo"
	.even
pnmac532:
	.string	"opena"
	.even
pnmac533:
	.string	"openib"
	.even
pnmac534:
	.string	"openob"
	.even
pnmac535:
	.string	"openab"
	.even
pnmac536:
	.string	"input"
	.even
pnmac537:
	.string	"inchan"
	.even
pnmac538:
	.string	"outchan"
	.even
pnmac539:
	.string	"channel"
	.even
pnmac540:
	.string	"output"
	.even
pnmac541:
	.string	"close"
	.even
pnmac542:
	.string	"deletefile"
	.even
pnmac543:
	.string	"renamefile"
	.even
pnmac544:
	.string	"copyfile"
	.even
pnmac545:
	.string	"probefile"
	.even
pnmac546:
	.string	"save-core"
	.even
pnmac547:
	.string	"restore-core"
	.even
pnmac548:
	.string	"coerce-namestring"
	.even
pnmac549:
	.string	"create-directory"
	.even
pnmac550:
	.string	"delete-directory"
	.even
ztyi:
	.long	0
ztys:
	.long	0
ztyinstrg:
	.long	0
ztyflush:
	.long	0
ztyo:
	.long	0
ztyback:
	.long	0
ztynewln:
	.long	0
ztycn:
	.long	0
ztystrg:
	.long	0
ztycursor:
	.long	0
ztycls:
	.long	0
ztyrdspl:
	.long	0
zttytyi:
	.long	0
	.globl	itstate
	.globl	itcount
zttytys:
	.long	0
	.globl	dux1
zttytyist:
	.long	0
zttytyo:
	.long	0
zttytyflu:
	.long	0
zttytybac:
	.long	0
zttytynew:
	.long	0
zttytycn:
	.long	0
zttytystr:
	.long	0
zttytycur:
	.long	0
zttytycls:
	.long	0
zttytyrds:
	.long	0
zbol:
	.long	0
zfinmax:
	.long	0
zfinpos:
	.long	0
zfinbuf:
	.long	0
zlleof:
	.long	0
zprompt:
	.long	0
zcoercns:
	.long	0
zopeni:
	.long	0
zopeno:
	.long	0
zopena:
	.long	0
zopenib:
	.long	0
zopenob:
	.long	0
zopenab:
	.long	0
zinput:
	.long	0
zoutput:
	.long	0
zinchan:
	.long	0
zoutchan:
	.long	0
zfchannel:
	.long	0
zlclose:
	.long	0
zdeletfi:
	.long	0
zrenamfi:
	.long	0
zcopyfi:
	.long	0
zmakdir:
	.long	0
zremdir:
	.long	0
zprobefi:
	.long	0
zsavecor:
	.long	0
zrestcor:
	.long	0
	.globl	filiz
istream:
	.long	0
ostream:
	.long	0
tabchan:
	.long	0
curinch:
	.long	0
curoutch:
	.long	0
lgbuffer:
	.long	0
cntrlc:
	.long	0
bufch:
	.long	0
rubstrg:
	.long	0
curprmpt:
	.long	0
ligne:
	.long	0
polig:
	.long	0
inmax:
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
	.globl	mstack
	.globl	crwork
	.text
	.align	4
	.globl	itsoft
	.globl	errnia
	.globl	errnaa
	.globl	errios
	.globl	errwna
	.globl	errudf
	.globl	errnsa
	.globl	getsetn
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	inisymb
	.globl	inicst
	.globl	erlec11
	.globl	outch
	.globl	flulin
	.globl	findtag
	.globl	sysprot
	.globl	ffuncall
	.globl	getfns
	.globl	copy
	.globl	stringa1
	.globl	stringa2
	.globl	makestrg
	.globl	makevect
	.globl	strgallc
	.globl	rdpscrn
	.globl	ini_pio
	.globl	polig
	.globl	inmax
	.globl	tabchan
	.globl	bufch
	.globl	rubstrg
	.globl	cntrlc
	.globl	istream
	.globl	ostream
	.globl	inphy
	.globl	curprmpt
	.globl	input
	.globl	restcori
	.globl	tyo
	.globl	tycursor
	.globl	tystrg
	.globl	tynewln
	.globl	curoutch
	.globl	ztyrdspl
	.globl	zoutchan
	.globl	lgbuffer
	.globl	phytrue
	.globl	ithard
	.globl	ttyin
	.globl	ttys
	.globl	ttyinstr
	.globl	ttycrlf
	.globl	ttyout
	.globl	inbfb
	.globl	inbf
	.globl	fclos
	.globl	infile
	.globl	oufile
	.globl	apfile
	.globl	fdele
	.globl	frena
	.globl	fcopy
	.globl	llmkdir
	.globl	llrmdir
	.globl	fprobe
	.globl	hgc
	.globl	ll_corsav
	.globl	ll_corest

	# FENTRY ini_pio
	.align	4
ini_pio:
	movl	maxchan,%eax
	movl	%esi,%ebx
	calll	makevect
	movl	%eax,tabchan
	subw	$3,maxchan
	movl	maxchan,%ebx
	addw	$1,%bx
	movl	%esi,%eax
	movl	$1,%ecx
	movl	$1024,lgbuffer
	calll	inchini
	movl	%esi,%eax
	calll	inopen
	movl	maxchan,%ebx
	movl	%esi,%eax
	movl	$2,%ecx
	calll	outchini
	movl	maxchan,%eax
	calll	outopen
	movl	maxchan,%ebx
	addw	$2,%bx
	movl	%esi,%eax
	movl	$2,%ecx
	calll	outchini
	movl	maxchan,%eax
	addw	$2,%ax
	calll	outchani
	movl	bufout,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%eax
	movl	%eax,maxpocou
	incw	%ax
	movl	%eax,nbrig
	movl	maxchan,%eax
	calll	outchani
	movl	$1,%eax
	xorl	%ebx,%ebx
	calll	makestrg
	movl	%eax,bufch
	movl	$2,%eax
	movl	$94,%ebx
	calll	makestrg
	movl	%eax,cntrlc
	movl	$3,%eax
	movl	$8,%ebx
	calll	makestrg
	movl	%eax,rubstrg
	movl	rubstrg,%ebp
	movl	(%ebp),%ebp
	movb	$32,9(%ebp)
	movl	$3,%eax
	movl	$pnmac494,%ebx
	movl	$tyi,%ecx
	movl	$ztyi,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac495,%ebx
	movl	$tys,%ecx
	movl	$ztys,%edx
	pushl	$1
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac496,%ebx
	movl	$tyinstrg,%ecx
	movl	$ztyinstrg,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac497,%ebx
	movl	$tyo,%ecx
	movl	$ztyo,%edx
	pushl	$5
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac498,%ebx
	movl	$tyflush,%ecx
	movl	$ztyflush,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac499,%ebx
	movl	$tyback,%ecx
	movl	$ztyback,%edx
	pushl	$2
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac500,%ebx
	movl	$tynewln,%ecx
	movl	$ztynewln,%edx
	pushl	$1
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac501,%ebx
	movl	$tycn,%ecx
	movl	$ztycn,%edx
	pushl	$2
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac502,%ebx
	movl	$tystrg,%ecx
	movl	$ztystrg,%edx
	pushl	$3
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac503,%ebx
	movl	$tycursor,%ecx
	movl	$ztycursor,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac504,%ebx
	movl	$tycls,%ecx
	movl	$ztycls,%edx
	pushl	$1
	calll	inisymb
	movl	$15,%eax
	movl	$pnmac505,%ebx
	movl	$tyrdspl,%ecx
	movl	$ztyrdspl,%edx
	pushl	$5
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac506,%ebx
	movl	$ztty,%ecx
	calll	inicst
	movl	ztty,%ebp
	movl	%ebp,cpkgc
	movl	$3,%eax
	movl	$pnmac507,%ebx
	movl	$ttytyi,%ecx
	movl	$zttytyi,%edx
	pushl	$1
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac508,%ebx
	movl	$ttytys,%ecx
	movl	$zttytys,%edx
	pushl	$1
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac509,%ebx
	movl	$ttytyist,%ecx
	movl	$zttytyist,%edx
	pushl	$2
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac510,%ebx
	movl	$ttytyo,%ecx
	movl	$zttytyo,%edx
	pushl	$5
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac511,%ebx
	movl	$ttytyflu,%ecx
	movl	$zttytyflu,%edx
	pushl	$1
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac512,%ebx
	movl	$ttytybac,%ecx
	movl	$zttytybac,%edx
	pushl	$2
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac513,%ebx
	movl	$ttytynew,%ecx
	movl	$zttytynew,%edx
	pushl	$1
	calll	inisymb
	movl	$4,%eax
	movl	$pnmac514,%ebx
	movl	$ttytycn,%ecx
	movl	$zttytycn,%edx
	pushl	$2
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac515,%ebx
	movl	$ttytystr,%ecx
	movl	$zttytystr,%edx
	pushl	$3
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac516,%ebx
	movl	$ttytycur,%ecx
	movl	$zttytycur,%edx
	pushl	$3
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac517,%ebx
	movl	$ttytycls,%ecx
	movl	$zttytycls,%edx
	pushl	$1
	calll	inisymb
	movl	$15,%eax
	movl	$pnmac518,%ebx
	movl	$ttytyrds,%ecx
	movl	$zttytyrds,%edx
	pushl	$5
	calll	inisymb
	movl	zsyspkgc,%ebp
	movl	%ebp,cpkgc
	movl	$3,%eax
	movl	$pnmac519,%ebx
	movl	$zsyspktty,%ecx
	calll	inicst
	movl	ztty,%ebp
	movl	%ebp,(%eax)
	movl	%esi,cpkgc
	movl	$4,%eax
	movl	$pnmac520,%ebx
	movl	$ztyco,%ecx
	calll	inicst
	movl	$3,%eax
	movl	$pnmac521,%ebx
	movl	$bol,%ecx
	movl	$zbol,%edx
	pushl	$1
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac522,%ebx
	movl	$finmax,%ecx
	movl	$zfinmax,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac523,%ebx
	movl	$finpos,%ecx
	movl	$zfinpos,%edx
	pushl	$5
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac524,%ebx
	movl	$finbuf,%ecx
	movl	$zfinbuf,%edx
	pushl	$5
	calll	inisymb
	movl	$3,%eax
	movl	$pnmac525,%ebx
	movl	$lleof,%ecx
	movl	$zlleof,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac526,%ebx
	movl	$prompt,%ecx
	movl	$zprompt,%edx
	pushl	$5
	calll	inisymb
	movl	$2,%eax
	movl	$pnmac527,%ebx
	movl	$zstdprmpt,%ecx
	calll	inicst
	movl	28(%eax),%ebp
	movl	%ebp,curprmpt
	movl	zllsystem,%ebp
	movl	%ebp,cpkgc
	movl	$18,%eax
	movl	$pnmac528,%ebx
	movl	$zrealterm,%ecx
	calll	inicst
	movl	zt,%ebp
	movl	%ebp,(%eax)
	movl	$14,%eax
	movl	$pnmac529,%ebx
	movl	$zlinemode,%ecx
	calll	inicst
	movl	%esi,(%eax)
	movl	%esi,cpkgc
	movl	$5,%eax
	movl	$pnmac530,%ebx
	movl	$openi,%ecx
	movl	$zopeni,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac531,%ebx
	movl	$openo,%ecx
	movl	$zopeno,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac532,%ebx
	movl	$opena,%ecx
	movl	$zopena,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac533,%ebx
	movl	$openib,%ecx
	movl	$zopenib,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac534,%ebx
	movl	$openob,%ecx
	movl	$zopenob,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac535,%ebx
	movl	$openab,%ecx
	movl	$zopenab,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac536,%ebx
	movl	$input,%ecx
	movl	$zinput,%edx
	pushl	$2
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac537,%ebx
	movl	$inchan,%ecx
	movl	$zinchan,%edx
	pushl	$5
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac538,%ebx
	movl	$outchan,%ecx
	movl	$zoutchan,%edx
	pushl	$5
	calll	inisymb
	movl	$7,%eax
	movl	$pnmac539,%ebx
	movl	$fchannel,%ecx
	movl	$zfchannel,%edx
	pushl	$5
	calll	inisymb
	movl	$6,%eax
	movl	$pnmac540,%ebx
	movl	$output,%ecx
	movl	$zoutput,%edx
	pushl	$2
	calll	inisymb
	movl	$5,%eax
	movl	$pnmac541,%ebx
	movl	$lclose,%ecx
	movl	$zlclose,%edx
	pushl	$5
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac542,%ebx
	movl	$deletfi,%ecx
	movl	$zdeletfi,%edx
	pushl	$2
	calll	inisymb
	movl	$10,%eax
	movl	$pnmac543,%ebx
	movl	$renamfi,%ecx
	movl	$zrenamfi,%edx
	pushl	$3
	calll	inisymb
	movl	$8,%eax
	movl	$pnmac544,%ebx
	movl	$copyfi,%ecx
	movl	$zcopyfi,%edx
	pushl	$3
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac545,%ebx
	movl	$probefi,%ecx
	movl	$zprobefi,%edx
	pushl	$2
	calll	inisymb
	movl	$9,%eax
	movl	$pnmac546,%ebx
	movl	$savecor,%ecx
	movl	$zsavecor,%edx
	pushl	$2
	calll	inisymb
	movl	$12,%eax
	movl	$pnmac547,%ebx
	movl	$restcor,%ecx
	movl	$zrestcor,%edx
	pushl	$2
	calll	inisymb
	movl	$17,%eax
	movl	$pnmac548,%ebx
	movl	$coercns,%ecx
	movl	$zcoercns,%edx
	pushl	$2
	calll	inisymb
	movl	$16,%eax
	movl	$pnmac549,%ebx
	movl	$makdir,%ecx
	movl	$zmakdir,%edx
	pushl	$2
	calll	inisymb
	movl	$16,%eax
	movl	$pnmac550,%ebx
	movl	$remdir,%ecx
	movl	$zremdir,%edx
	pushl	$2
	calll	inisymb
	ret	
phytrue:
	movl	zt,%eax
	ret	

	# FENTRY tyi
	.align	4
tyi:
	movl	ztyi,%eax
	jmp	totty0

	# FENTRY tys
	.align	4
tys:
	movl	ztys,%eax
	jmp	totty0

	# FENTRY tyinstrg
	.align	4
tyinstrg:
	pushl	%eax
	movl	$1,%edx
	movl	ztyinstrg,%eax
	jmp	totty

	# FENTRY tyflush
	.align	4
tyflush:
	movl	ztyflush,%eax
	jmp	totty0

	# FENTRY tyo
	.align	4
tyo:
	movl	ztyo,%eax
	jmp	totty

	# FENTRY tyback
	.align	4
tyback:
	pushl	%eax
	movl	$1,%edx
	movl	ztyback,%eax
	jmp	totty

	# FENTRY tynewln
	.align	4
tynewln:
	movl	ztynewln,%eax
	jmp	totty0

	# FENTRY tycn
	.align	4
tycn:
	pushl	%eax
	movl	$1,%edx
	movl	ztycn,%eax
	jmp	totty

	# FENTRY tystrg
	.align	4
tystrg:
	pushl	%eax
	pushl	%ebx
	movl	$2,%edx
	movl	ztystrg,%eax
	jmp	totty

	# FENTRY tycursor
	.align	4
tycursor:
	pushl	%eax
	pushl	%ebx
	movl	$2,%edx
	movl	ztycursor,%eax
	jmp	totty

	# FENTRY tycls
	.align	4
tycls:
	movl	ztycls,%eax
	jmp	totty0

	# FENTRY tyrdspl
	.align	4
tyrdspl:
	movl	ztyrdspl,%eax
	jmp	totty
totty0:
	xorl	%edx,%edx
totty:
	pushl	%edx
	movl	%eax,%ebx
	movl	zsyspktty,%eax
	movl	(%eax),%eax
	movl	%esi,%ecx
	pushl	%ebx
	calll	getfns
	popl	%ebx
	cmpl	%esi,%eax
	je	tottyer
	popl	%edx
	jmp	ffuncall
tottyer:
	movl	zsyspktty,%eax
	movl	(%eax),%eax
	jmp	errudf

	# FENTRY ttytyi
	.align	4
ttytyi:
	calll	tyflush
l__1:
	cmpw	$0,itcount
	je	ll__1
	cmpw	$0,itstate
	je	ll__1
	calll	ithard
ll__1:
	# Prepare a C function call with 0 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	calll	ttyin
	movl	%eax,crwork
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	cmpl	$0x0ff,crwork
	je	l__1
	movl	crwork,%ebp
	movl	%ebp,%eax
	ret	

	# FENTRY ttytys
	.align	4
ttytys:
	calll	tyflush
	# Prepare a C function call
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	$dux1
	calll	ttys
	addl	$4,%esp
	cmpl	$-1,%eax
	je	tys__2
	xorl	%eax,%eax
	movb	dux1,%al
tys__2:
	movl	%eax,crwork
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ebp
	movzwl	%bp,%eax
	shrl	$16,%ebp
	movl	%ebp,%ebx
	orw	%bx,%bx
	je	tys9
	movl	%esi,%eax
tys9:
	ret	

	# FENTRY ttytyist
	.align	4
ttytyist:
	cmpl	%eax,bstrg
	ja	ttyinr
	cmpl	%esi,%eax
	jae	ttyinr
	pushl	%eax
	calll	tyflush
	popl	%eax
	# Entering TTYINSTR
	pushl	%ebp
	movl	(%eax),%ebp
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
	pushl	crwork+4
	pushl	crwork
	calll	ttyinstr
	movl	%eax,crwork
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%eax
	# Leaving TTYINSTR
	ret	
ttyinr:
	movl	zttytyist,%ebx
	jmp	errnsa

	# FENTRY ttytyo
	.align	4
ttytyo:
	orw	%dx,%dx
	je	ttytyo9
	pushl	%edx
	incw	%dx
	jmp	ttytyo2
ttytyo1:
	movl	(%esp,%edx,4),%eax
	cmpl	%esi,%eax
	je	ttytyo2
	pushl	%edx
	calll	ttytyoi
	popl	%edx
ttytyo2:
	decw	%dx
	jg	ttytyo1
	popl	%edx
	leal	(%esp,%edx,4),%esp
	ret	
ttytyo9:
	movl	%esi,%eax
	ret	
ttytyoi:
	pushl	ostream
	pushl	%eax
	movl	maxchan,%eax
	addw	$2,%ax
	calll	outchani
	popl	%eax
	movl	$ttytyoi1,%ecx
ttytyoi0:
	calll	sysprot
	popl	%eax
	xchgl	%eax,(%esp)
	pushl	%ecx
	pushl	%ebx
	calll	outchani
	popl	%ebx
	popl	%ecx
	popl	%eax
	jmp	*%ecx
ttytyoi1:
	cmpl	%eax,bfloat
	ja	ttytyof
	cmpl	%edi,%eax
	jge	ttytyoc
	cmpl	%eax,bstrg
	ja	lmac551
	cmpl	%esi,%eax
	jb	ttytyos
lmac551:
ttytyoer:
	movl	zttytyo,%ebx
	jmp	errnia
ttytyof:
	movl	%eax,%edx
	pushl	%eax
	calll	outch
	popl	%eax
	ret	
ttytyoc:
	pushl	%eax
ttytyoc1:
	pushl	4(%eax)
	movl	(%eax),%edx
	calll	outch
	popl	%eax
	cmpl	%edi,%eax
	jge	ttytyoc1
	cmpl	%esi,%eax
	jne	ttytyoer
	popl	%eax
	ret	
ttytyos:
	movl	(%eax),%ebp
	movl	4(%ebp),%ebx
	addw	pocour,%bx
	cmpw	maxpocou,%bx
	jl	ttytyos1
	calll	flulin
ttytyos1:
	movl	(%eax),%ebp
	movl	4(%ebp),%ebx
	cld
	pushl	%ecx
	pushl	%edi
	pushl	%esi
	movl	(%eax),%esi
	addl	$8,%esi
	movl	bufout,%ebp
	movl	(%ebp),%edi
	movl	pocour,%ebp
	leal	8(%edi,%ebp),%edi
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
	addw	%bx,pocour
	ret	

	# FENTRY ttytyflu
	.align	4
ttytyflu:
	movl	maxchan,%eax
	addw	$2,%ax
	movl	tabchan,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%eax,4),%eax
	movl	(%eax),%ebp
	movl	20(%ebp),%eax
	orw	%ax,%ax
	jne	ttytyfl1
	ret	
ttytyfl1:
	pushl	ostream
	movl	maxchan,%eax
	addw	$2,%ax
	calll	outchani
	movl	$flulin,%ecx
	jmp	ttytyoi0

	# FENTRY ttytybac
	.align	4
ttytybac:
	movl	rubstrg,%eax
	movl	$3,%ebx
	jmp	ttytystr

	# FENTRY ttytynew
	.align	4
ttytynew:
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
	ret	

	# FENTRY ttytycn
	.align	4
ttytycn:
	movl	bufch,%ebx
	movl	(%ebx),%ebp
	movb	%al,8(%ebp)
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
	pushl	$1
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
	ret	

	# FENTRY ttytystr
	.align	4
ttytystr:
	cmpl	%eax,bstrg
	ja	tystrers
	cmpl	%esi,%eax
	jae	tystrers
	cmpl	%ebx,bfloat
	jbe	tystrern
	movl	(%eax),%ebp
	movl	4(%ebp),%ecx
	orw	%bx,%bx
	jl	ttytyst0
	cmpw	%cx,%bx
	jl	ttytyst1
ttytyst0:
	movl	%ecx,%ebx
ttytyst1:
	# Entering TTYSTRG
	pushl	%ebp
	movl	(%eax),%ebp
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
	pushl	%ebx
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
	ret	
tystrers:
	movl	ztystrg,%ebx
	jmp	errnsa
tystrern:
	movl	%ebx,%eax
	movl	ztystrg,%ebx
	jmp	errnia

	# FENTRY ttytycur
	.align	4
ttytycur:
	ret	

	# FENTRY ttytycls
	.align	4
ttytycls:
	ret	

	# FENTRY ttytyrds
	.align	4
ttytyrds:
	jmp	rdpscrn

	# FENTRY bol
	.align	4
bol:
	calll	inphyl
	movl	%esi,%eax
	ret	

	# FENTRY finmax
	.align	4
finmax:
	pushl	$0
	movl	ligne,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%ebx
	pushl	%ebx
	movl	zfinmax,%ebx
	movl	inmax,%ecx
	calll	getsetn
	movl	%eax,inmax
	ret	

	# FENTRY finpos
	.align	4
finpos:
	pushl	$0
	movl	ligne,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%ebx
	pushl	%ebx
	movl	zfinpos,%ebx
	movl	polig,%ecx
	calll	getsetn
	movl	%eax,polig
	ret	

	# FENTRY finbuf
	.align	4
finbuf:
	orw	%dx,%dx
	jne	inbu1
	movl	ligne,%eax
	ret	
inbu1:
	movl	zfinbuf,%ebx
	cmpw	$1,%dx
	je	inbu2
	cmpw	$2,%dx
	je	inbu5
	movl	$2,%eax
	movl	zfinbuf,%ebx
	jmp	errwna
inbu2:
	popl	%eax
	cmpl	%eax,bfloat
	ja	inbu3
	jmp	errnia
inbu3:
	movl	ligne,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%eax),%eax
	ret	
inbu5:
	popl	%ebx
	popl	%eax
	cmpl	%eax,bfloat
	ja	inbu6
	jmp	errnia
inbu6:
	movl	ligne,%ebp
	movl	(%ebp),%ebp
	movb	%bl,8(%ebp,%eax)
	movl	%ebx,%eax
	ret	
inphy:
	movw	inmax,%bp
	cmpw	%bp,polig
	jge	inph2
	movl	ligne,%ebp
	movl	(%ebp),%ebp
	pushl	%edi
	movl	%ebp,%edi
	movl	polig,%ebp
	leal	8(%edi,%ebp,1),%ebp
	popl	%edi
	movzbl	(%ebp),%edx
	incw	polig
	ret	
inph2:
	cmpw	$0,itcount
	je	l__4
	cmpw	$0,itstate
	je	l__4
	calll	ithard
l__4:
	pushl	%eax
	pushl	%ebx
	pushl	%edx
	movl	zbol,%eax
	movl	%esi,%ebx
	calll	itsoft
	popl	%edx
	popl	%ebx
	popl	%eax
	movl	$0,polig
	jmp	inphy
inphyl:
	pushl	%ebx
	pushl	%edx
	pushl	%eax
	pushl	$0
	pushl	$0
inphyl0:
	movl	istream,%ebp
	cmpl	%ebp,bfloat
	ja	inchf
inphy1:
	movl	curprmpt,%eax
	movl	(%eax),%ebp
	movl	4(%ebp),%ebx
	calll	tystrg
	xorl	%edx,%edx
	movl	zlinemode,%ecx
	cmpl	%esi,(%ecx)
	jne	inphln
	movl	zrealterm,%ecx
	movl	(%ecx),%ecx
	cmpl	%esi,%ecx
	je	inphp3
inphy3:
	calll	tyi
	movl	%eax,4(%esp)
	cmpw	$8,%ax
	je	inphy6
	cmpw	$127,%ax
	je	inphy6
	cmpw	$24,%ax
	je	inphy8
	cmpw	$21,%ax
	je	inphy8
	cmpw	$13,%ax
	je	inphy9
	cmpw	$10,%ax
	je	inphy9
	cmpw	$32,%ax
	jl	inphy5
	calll	tycn
inphy4:
	movl	4(%esp),%eax
	movl	(%esp),%edx
	movl	ligne,%ebp
	movl	(%ebp),%ebp
	movb	%al,8(%ebp,%edx)
	incw	%dx
	movl	%edx,(%esp)
	movl	ligne,%ebp
	movl	(%ebp),%ebp
	movl	4(%ebp),%eax
	cmpw	%ax,%dx
	jl	inphy3
	jmp	inphyd
inphy5:
	addw	$64,%ax
	movl	cntrlc,%ebp
	movl	(%ebp),%ebp
	movb	%al,9(%ebp)
	movl	cntrlc,%eax
	movl	$2,%ebx
	calll	tystrg
	jmp	inphy4
inphy6:
	movl	(%esp),%edx
	orw	%dx,%dx
	je	inphy3
	decw	%dx
	movl	%edx,(%esp)
	calll	inphy60
	jmp	inphy3
inphy60:
	movl	ligne,%ebp
	movl	(%ebp),%ebp
	movzbl	8(%ebp,%edx),%eax
	cmpw	$32,%ax
	jge	inphy61
	addw	$64,%ax
	calll	tyback
	movl	$94,%eax
inphy61:
	jmp	tyback
inphy8:
	movl	(%esp),%edx
	orw	%dx,%dx
	je	inphy3
	jmp	inphy81
inphy80:
	movl	%edx,(%esp)
	calll	inphy60
	movl	(%esp),%edx
inphy81:
	decw	%dx
	jge	inphy80
	movl	$0,(%esp)
	jmp	inphy3
inphy9:
	calll	tynewln
inphyc:
	movl	(%esp),%edx
	movl	ligne,%ebp
	movl	(%ebp),%ebp
	movb	$13,8(%ebp,%edx)
	incw	%dx
	movl	ligne,%ebp
	movl	(%ebp),%ebp
	movb	$10,8(%ebp,%edx)
	incw	%dx
inphyd:
	movl	%edx,inmax
	addl	$8,%esp
	popl	%eax
	popl	%edx
	popl	%ebx
	ret	
inphp2:
	movl	(%esp),%edx
	movl	ligne,%ebp
	movl	(%ebp),%ebp
	movb	%al,8(%ebp,%edx)
	incw	%dx
	movl	%edx,(%esp)
inphp3:
	calll	tyi
	cmpw	$10,%ax
	je	inphyc
	cmpw	$13,%ax
	jne	inphp2
	jmp	inphyc
inphln:
	movl	ligne,%eax
	calll	tyinstrg
	movl	%eax,(%esp)
	jmp	inphyc
inchf:
	movl	curinch,%ebp
	movl	(%ebp),%ebp
	movl	12(%ebp),%ecx
	cmpw	$1,%cx
	je	inchf00
	cmpw	$3,%cx
	jne	inchf0
	pushl	%ebp
	movl	ligne,%ebp
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
	pushl	$dux1
	pushl	crwork
	pushl	istream
	calll	inbfb
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
	movl	dux1,%edx
	movl	%ebp,%ecx
	movl	%edx,(%esp)
	orw	%cx,%cx
	jl	inchf1
	cmpw	$1,%cx
	je	inchf3
	jmp	inphyd
inchf00:
	pushl	%ebp
	movl	ligne,%ebp
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
	pushl	$dux1
	pushl	crwork
	pushl	istream
	calll	inbf
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
	movl	dux1,%edx
	movl	%ebp,%ecx
	movl	%edx,(%esp)
	orw	%cx,%cx
	jl	inchf1
	orw	%cx,%cx
	je	inphyc
	cmpw	$1,%cx
	je	inchf3
	jmp	inphyd
inchf0:
	movl	%esi,%eax
	calll	inchani
	movl	$65536+-4,%eax
	movl	zinchan,%ebx
	jmp	errios
inchf1:
	movl	%esi,%eax
	calll	inchani
	movl	%ecx,%eax
	movl	zinchan,%ebx
	jmp	errios
inchf3:
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	movl	zlleof,%eax
	movl	istream,%ebx
	cmpl	%edi,fcons
	jb	l__5
l1__5:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	calll	itsoft
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	jmp	inphyl0

	# FENTRY lleof
	.align	4
lleof:
	cmpl	%esi,%eax
	je	lleof1
	pushl	%eax
	# Prepare a C function call with 1 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	%eax
	calll	fclos
	movl	%eax,crwork
	addl	$4,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ebx
	movl	%esi,%ebx
	movl	tabchan,%ebp
	movl	(%ebp),%ebp
	movl	%ebx,8(%ebp,%eax,4)
	movl	%esi,%eax
	calll	inchani
	popl	%eax
lleof1:
	movl	zstinread,%ebx
	cmpl	%esi,(%ebx)
	je	lleof2
	jmp	erlec11
lleof2:
	movl	zlleof,%ebx
	jmp	findtag

	# FENTRY prompt
	.align	4
prompt:
	orw	%dx,%dx
	je	prompt2
	cmpw	$1,%dx
	je	prompt1
	movl	$2,%eax
	movl	zprompt,%ebx
	jmp	errwna
prompt1:
	popl	%eax
	movl	zprompt,%ebp
	movl	%ebp,savea4
	calll	stringa1
	movl	%eax,curprmpt
prompt2:
	movl	curprmpt,%eax
	ret	
prompter:
	movl	zprompt,%ebx
	jmp	errnaa

	# FENTRY coercns
	.align	4
coercns:
	ret	
coerci:
	pushl	%eax
	movl	zcoercns,%eax
	movl	$1,%edx
	jmp	ffuncall
chanalloc:
	movl	maxchan,%ebx
	jmp	chanal4
chanal3:
	movl	tabchan,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%ebx,4),%ecx
	cmpl	%esi,%ecx
	je	chanal9
chanal4:
	decw	%bx
	jge	chanal3
	movl	$65536+-2,%ebx
chanal9:
	ret	
inchini:
	pushl	%ebx
	pushl	%eax
	pushl	%ecx
	movl	$7,%eax
	movl	%esi,%ebx
	calll	makevect
	pushl	%eax
	movl	lgbuffer,%eax
	xorl	%ebx,%ebx
	calll	makestrg
	popl	%ebx
	movl	(%ebx),%ebp
	movl	%eax,16(%ebp)
	popl	%ecx
	movl	(%ebx),%ebp
	movl	%ecx,12(%ebp)
	popl	%eax
	movl	(%ebx),%ebp
	movl	%eax,8(%ebp)
	movl	(%ebx),%ebp
	movl	$0,20(%ebp)
	movl	(%ebx),%ebp
	movl	$0,24(%ebp)
	movl	%esi,%eax
	movl	(%ebx),%ebp
	movl	%eax,28(%ebp)
	movl	(%ebx),%ebp
	movl	%eax,32(%ebp)
	popl	%eax
	movl	tabchan,%ebp
	movl	(%ebp),%ebp
	movl	%ebx,8(%ebp,%eax,4)
	ret	
outchini:
	pushl	%ebx
	pushl	%eax
	pushl	%ecx
	movl	$7,%eax
	movl	%esi,%ebx
	calll	makevect
	pushl	%eax
	movl	lgbuffer,%eax
	movl	$32,%ebx
	calll	makestrg
	popl	%ebx
	movl	(%ebx),%ebp
	movl	%eax,16(%ebp)
	popl	%ecx
	movl	(%ebx),%ebp
	movl	%ecx,12(%ebp)
	popl	%ecx
	movl	(%ebx),%ebp
	movl	%ecx,8(%ebp)
	movl	(%ebx),%ebp
	movl	$0,20(%ebp)
	movl	(%ebx),%ebp
	pushl	nbleft
	popl	24(%ebp)
	movl	(%ebx),%ebp
	pushl	nbrig
	popl	28(%ebp)
	movl	(%ebx),%ebp
	pushl	maxpocou
	popl	32(%ebp)
	popl	%eax
	movl	tabchan,%ebp
	movl	(%ebp),%ebp
	movl	%ebx,8(%ebp,%eax,4)
	ret	
openr1:
	movl	%ebx,%eax
openr2:
	movl	savea4,%ebx
	jmp	errios

	# FENTRY openi
	.align	4
openi:
	calll	coerci
	movl	zopeni,%ebp
	movl	%ebp,savea4
	calll	stringa1
	calll	chanalloc
	cmpw	$65536+-2,%bx
	je	openr1
	pushl	%ebp
	movl	(%eax),%ebp
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
	pushl	%ebx
	calll	infile
	movl	%eax,crwork
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ecx
	orw	%cx,%cx
	jne	openr2
	movl	$1,%ecx
	jmp	inchini

	# FENTRY openo
	.align	4
openo:
	calll	coerci
	movl	zopeno,%ebp
	movl	%ebp,savea4
	calll	stringa1
	calll	chanalloc
	cmpw	$65536+-2,%bx
	je	openr1
	pushl	%ebp
	movl	(%eax),%ebp
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
	pushl	%ebx
	calll	oufile
	movl	%eax,crwork
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%edx
	orw	%dx,%dx
	jne	openr2
	movl	$2,%ecx
	jmp	outchini

	# FENTRY opena
	.align	4
opena:
	calll	coerci
	movl	zopena,%ebp
	movl	%ebp,savea4
	calll	stringa1
	calll	chanalloc
	cmpw	$65536+-2,%bx
	je	openr1
	pushl	%ebp
	movl	(%eax),%ebp
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
	pushl	%ebx
	calll	apfile
	movl	%eax,crwork
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%edx
	orw	%dx,%dx
	jne	openr2
	movl	$2,%ecx
	jmp	outchini

	# FENTRY openib
	.align	4
openib:
	calll	coerci
	movl	zopenib,%ebp
	movl	%ebp,savea4
	calll	stringa1
	calll	chanalloc
	cmpw	$65536+-2,%bx
	je	openr1
	pushl	%ebp
	movl	(%eax),%ebp
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
	pushl	%ebx
	calll	infile
	movl	%eax,crwork
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ecx
	orw	%cx,%cx
	jne	openr2
	movl	$3,%ecx
	jmp	inchini

	# FENTRY openob
	.align	4
openob:
	calll	coerci
	movl	zopenob,%ebp
	movl	%ebp,savea4
	calll	stringa1
	calll	chanalloc
	cmpw	$65536+-2,%bx
	je	openr1
	pushl	%ebp
	movl	(%eax),%ebp
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
	pushl	%ebx
	calll	oufile
	movl	%eax,crwork
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ecx
	orw	%cx,%cx
	jne	openr2
	movl	$4,%ecx
	jmp	outchini

	# FENTRY openab
	.align	4
openab:
	calll	coerci
	movl	zopenab,%ebp
	movl	%ebp,savea4
	calll	stringa1
	calll	chanalloc
	cmpw	$65536+-2,%bx
	je	openr1
	pushl	%ebp
	movl	(%eax),%ebp
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
	pushl	%ebx
	calll	apfile
	movl	%eax,crwork
	addl	$8,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ecx
	orw	%cx,%cx
	jne	openr2
	movl	$4,%ecx
	jmp	outchini

	# FENTRY input
	.align	4
input:
	cmpl	%esi,istream
	je	inputi
	pushl	%eax
	movl	istream,%eax
	calll	closeint
	popl	%eax
inputi:
	cmpl	%esi,%eax
	je	input2
	calll	openi
input2:
	calll	inchani
	jmp	phytrue

	# FENTRY output
	.align	4
output:
	movw	maxchan,%bp
	cmpw	%bp,ostream
	jge	ouput1
	pushl	%eax
	movl	ostream,%eax
	calll	closeint
	popl	%eax
ouput1:
	cmpl	%esi,%eax
	je	ouput2
	cmpl	zt,%eax
	jne	ouput3
	movl	maxchan,%eax
	addw	$2,%ax
	jmp	ouput4
ouput2:
	movl	maxchan,%eax
	jmp	ouput4
ouput3:
	calll	openo
ouput4:
	calll	outchani
	jmp	phytrue

	# FENTRY inchan
	.align	4
inchan:
	orw	%dx,%dx
	je	inchget
	cmpw	$1,%dx
	je	inchset
	movl	$1,%eax
	movl	zinchan,%ebx
	jmp	errwna
inchget:
	movl	istream,%eax
	ret	
inchset:
	popl	%eax
	cmpl	%eax,bfloat
	ja	inchst2
	cmpl	%esi,%eax
	je	inchst3
incherr1:
	movl	$65536+-3,%eax
incherr2:
	movl	zinchan,%ebx
	jmp	errios
inchst2:
	orw	%ax,%ax
	jl	incherr1
	cmpw	maxchan,%ax
	jge	incherr1
	movl	tabchan,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%eax,4),%ebx
	cmpl	%esi,%ebx
	je	incherr3
	movl	(%ebx),%ebp
	movl	12(%ebp),%ebx
	cmpw	$1,%bx
	je	inchani
	cmpw	$3,%bx
	jne	incherr3
inchst3:
	jmp	inchani
incherr3:
	movl	$65536+-4,%eax
	jmp	incherr2
inchani:
	pushl	%eax
	calll	inclose
	popl	%eax
inopen:
	movl	%eax,istream
	cmpl	%esi,%eax
	jne	inchani3
	movl	maxchan,%ebx
	incw	%bx
	jmp	inchani4
inchani3:
	movl	%eax,%ebx
inchani4:
	movl	tabchan,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%ebx,4),%ebx
	movl	(%ebx),%ebp
	movl	16(%ebp),%ebp
	movl	%ebp,ligne
	movl	(%ebx),%ebp
	movl	20(%ebp),%ebp
	movl	%ebp,polig
	movl	(%ebx),%ebp
	movl	24(%ebp),%ebp
	movl	%ebp,inmax
	movl	(%ebx),%ebp
	movl	28(%ebp),%ebp
	movl	%ebp,curread
	movl	(%ebx),%ebp
	movl	32(%ebp),%ebp
	movl	%ebp,ringur
	movl	%ebx,curinch
	ret	
inclose:
	movl	istream,%ebx
	cmpl	%esi,%ebx
	jne	inchani1
	movl	maxchan,%ebx
	incw	%bx
inchani1:
	movl	tabchan,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%ebx,4),%ebx
	cmpl	%esi,%ebx
	je	inchani2
	movl	(%ebx),%ebp
	pushl	ligne
	popl	16(%ebp)
	movl	(%ebx),%ebp
	pushl	polig
	popl	20(%ebp)
	movl	(%ebx),%ebp
	pushl	inmax
	popl	24(%ebp)
	movl	(%ebx),%ebp
	pushl	curread
	popl	28(%ebp)
	movl	(%ebx),%ebp
	pushl	ringur
	popl	32(%ebp)
inchani2:
	ret	

	# FENTRY outchan
	.align	4
outchan:
	orw	%dx,%dx
	je	ouchget
	cmpw	$1,%dx
	je	ouchset
	movl	$1,%eax
	movl	zoutchan,%ebx
	jmp	errwna
ouchget:
	movl	ostream,%eax
	movl	maxchan,%ebx
	cmpw	%bx,%ax
	jl	ouchget2
	cmpw	%bx,%ax
	je	ouchget1
	movl	zt,%eax
	ret	
ouchget1:
	movl	%esi,%eax
ouchget2:
	ret	
ouchset:
	movl	(%esp),%eax
	cmpl	%eax,bfloat
	ja	ouchst2
	cmpl	%esi,%eax
	je	ouchst1
	cmpl	zt,%eax
	jne	oucherr1
	movl	maxchan,%eax
	addw	$2,%ax
	jmp	ouchst3
ouchst1:
	movl	maxchan,%eax
	jmp	ouchst3
ouchst2:
	orw	%ax,%ax
	jl	oucherr1
	cmpw	maxchan,%ax
	jge	oucherr1
	movl	tabchan,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%eax,4),%ebx
	cmpl	%esi,%ebx
	je	oucherr3
	movl	(%ebx),%ebp
	movl	12(%ebp),%ebx
	cmpw	$4,%bx
	je	ouchst3
	cmpw	$2,%bx
	jne	oucherr3
ouchst3:
	calll	outchani
	popl	%eax
	ret	
oucherr3:
	movl	$65536+-4,%eax
	jmp	oucherr2
oucherr1:
	movl	$65536+-3,%eax
oucherr2:
	movl	zoutchan,%ebx
	jmp	errios
outchani:
	calll	outclose
outopen:
	movl	%eax,ostream
outchai3:
	movl	%eax,%ebx
outchai4:
	movl	tabchan,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%ebx,4),%ebx
	movl	(%ebx),%ebp
	movl	16(%ebp),%ebp
	movl	%ebp,bufout
	movl	(%ebx),%ebp
	movl	20(%ebp),%ebp
	movl	%ebp,pocour
	movl	(%ebx),%ebp
	movl	24(%ebp),%ebp
	movl	%ebp,nbleft
	movl	(%ebx),%ebp
	movl	28(%ebp),%ebp
	movl	%ebp,nbrig
	movl	(%ebx),%ebp
	movl	32(%ebp),%ebp
	movl	%ebp,maxpocou
	movl	%ebx,curoutch
	ret	
outclose:
	movl	ostream,%ebx
outchai1:
	movl	tabchan,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%ebx,4),%ebx
	cmpl	%esi,%ebx
	je	outchai2
	movl	(%ebx),%ebp
	pushl	bufout
	popl	16(%ebp)
	movl	(%ebx),%ebp
	pushl	pocour
	popl	20(%ebp)
	movl	(%ebx),%ebp
	pushl	nbleft
	popl	24(%ebp)
	movl	(%ebx),%ebp
	pushl	nbrig
	popl	28(%ebp)
	movl	(%ebx),%ebp
	pushl	maxpocou
	popl	32(%ebp)
outchai2:
	ret	

	# FENTRY fchannel
	.align	4
fchannel:
	orw	%dx,%dx
	je	fchan5
	cmpw	$1,%dx
	je	fchan1
	movl	$1,%eax
	movl	zfchannel,%ebx
	jmp	errwna
fchan1:
	popl	%eax
	cmpl	%eax,bfloat
	ja	fchan2
	cmpl	zt,%eax
	je	fchan8
	movl	zfchannel,%ebx
	jmp	errnia
fchan2:
	orw	%ax,%ax
	jl	fchan4
	cmpw	maxchan,%ax
	jge	fchan4
fchan21:
	movl	tabchan,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%eax,4),%eax
	cmpl	%esi,%eax
	je	fchan3
	movl	(%eax),%ebp
	movl	8(%ebp),%ebx
	cmpl	%edi,fcons
	jb	l__6
l1__6:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	movl	(%eax),%ebp
	movl	12(%ebp),%eax
	cmpl	%edi,fcons
	jb	l__7
l1__7:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%ebx,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	ret	
fchan3:
	movl	%esi,%ebx
	cmpl	%edi,fcons
	jb	l__8
l1__8:
	movl	fcons,%ebp
	movl	%ebx,(%ebp)
	movl	%esi,%ebx
	xchgl	%ebx,4(%ebp)
	xchgl	%ebx,fcons
	xorl	%eax,%eax
	cmpl	%edi,fcons
	jb	l__9
l1__9:
	movl	fcons,%ebp
	movl	%eax,(%ebp)
	movl	%ebx,%eax
	xchgl	%eax,4(%ebp)
	xchgl	%eax,fcons
	ret	
fchan4:
	movl	$65536+-3,%eax
	movl	zfchannel,%ebx
	jmp	errios
fchan5:
	movl	%esi,%ecx
	movl	maxchan,%edx
	jmp	fchan7
fchan6:
	movl	%edx,%eax
	calll	fchan21
	cmpl	%edi,fcons
	jb	l__10
l1__10:
	xchgl	%edi,fcons
	movl	%eax,(%edi)
	xchgl	%ecx,4(%edi)
	xchgl	%edi,%ecx
	xchgl	%edi,fcons
fchan7:
	decw	%dx
	jge	fchan6
	movl	maxchan,%edx
	movl	%ecx,%eax
	ret	
fchan8:
	movl	tabchan,%eax
	jmp	copy

	# FENTRY lclose
	.align	4
lclose:
	cmpw	$1,%dx
	je	lclose8
	orw	%dx,%dx
	jne	closer1
	movl	%esi,%edx
	movl	maxchan,%eax
	movl	tabchan,%ebx
	decw	%ax
lclose1:
	movl	(%ebx),%ebp
	movl	8(%ebp,%eax,4),%ecx
	cmpl	%esi,%ecx
	je	lclose2
	movl	(%ebx),%ebp
	movl	%edx,8(%ebp,%eax,4)
	# Prepare a C function call with 1 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	%eax
	calll	fclos
	movl	%eax,crwork
	addl	$4,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ecx
	orw	%cx,%cx
	jne	closer0
lclose2:
	decw	%ax
	jge	lclose1
	movl	maxchan,%eax
	calll	outchani
	jmp	phytrue
lclose8:
	popl	%eax
	cmpl	%eax,bfloat
	jbe	closer4
	orw	%ax,%ax
	jl	closer2
	cmpw	maxchan,%ax
	jge	closer2
	movl	tabchan,%ebp
	movl	(%ebp),%ebp
	movl	8(%ebp,%eax,4),%ebx
	cmpl	%esi,%ebx
	jne	closeint
closer0:
	movl	$65536+-4,%eax
	jmp	closer3
closer1:
	movl	zlclose,%ebx
	movl	$1,%eax
	jmp	errwna
closer2:
	movl	$65536+-3,%eax
closer3:
	movl	zlclose,%ebx
	jmp	errios
closer4:
	movl	zlclose,%ebx
	jmp	errnia
closeint:
	movl	%esi,%ebx
	movl	tabchan,%ebp
	movl	(%ebp),%ebp
	movl	%ebx,8(%ebp,%eax,4)
	# Prepare a C function call with 1 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	%eax
	calll	fclos
	movl	%eax,crwork
	addl	$4,%esp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	# We are back to Lisp!
	movl	crwork,%ebx
	orw	%bx,%bx
	je	phytrue
	movl	zlclose,%ebx
	jmp	errios

	# FENTRY deletfi
	.align	4
deletfi:
	calll	coerci
	movl	zdeletfi,%ebp
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
	calll	fdele
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
	orw	%ax,%ax
	je	phytrue
	movl	zdeletfi,%ebx
	jmp	errios

	# FENTRY renamfi
	.align	4
renamfi:
	pushl	%ebx
	calll	coerci
	xchgl	%eax,(%esp)
	calll	coerci
	movl	%eax,%ebx
	popl	%eax
	movl	zrenamfi,%ebp
	movl	%ebp,savea4
	calll	stringa1
	calll	stringa2
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	%ebp
	movl	(%ebx),%ebp
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
	calll	frena
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
	je	phytrue
	movl	zrenamfi,%ebx
	jmp	errios

	# FENTRY copyfi
	.align	4
copyfi:
	pushl	%ebx
	calll	coerci
	xchgl	%eax,(%esp)
	calll	coerci
	movl	%eax,%ebx
	popl	%eax
	movl	zcopyfi,%ebp
	movl	%ebp,savea4
	calll	stringa1
	calll	stringa2
	# Prepare a C function call with 2 arguments.
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	%ebp
	movl	(%ebx),%ebp
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
	calll	fcopy
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
	je	phytrue
	movl	zcopyfi,%ebx
	jmp	errios

	# FENTRY makdir
	.align	4
makdir:
	calll	coerci
	movl	zmakdir,%ebp
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
	calll	llmkdir
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
	orw	%ax,%ax
	je	phytrue
	movl	zmakdir,%ebx
	jmp	errios

	# FENTRY remdir
	.align	4
remdir:
	calll	coerci
	movl	zremdir,%ebp
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
	calll	llrmdir
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
	orw	%ax,%ax
	je	phytrue
	movl	zremdir,%ebx
	jmp	errios

	# FENTRY probefi
	.align	4
probefi:
	calll	coerci
	movl	zprobefi,%ebp
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
	calll	fprobe
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
	orw	%ax,%ax
	je	phytrue
	movl	%esi,%eax
	ret	

	# FENTRY savecor
	.align	4
savecor:
	calll	coerci
	movl	zsavecor,%ebp
	movl	%ebp,savea4
	calll	stringa1
	pushl	zt
	pushl	%eax
	calll	hgc
	popl	%eax
	pushl	%ebp
	movl	(%eax),%ebp
	addl	$8,%ebp
	movl	%ebp,crwork
	popl	%ebp
	movl	crwork,%ebp
	calll	ll_corsav
	movl	%ebp,%eax
	orw	%ax,%ax
	je	corres
	movl	zsavecor,%ebx
	jmp	errios
corres:
	popl	%eax
	ret	

	# FENTRY restcor
	.align	4
restcor:
	calll	coerci
	movl	zrestcor,%ebp
	movl	%ebp,savea4
	calll	stringa1
restcori:
	pushl	%ebp
	movl	(%eax),%ebp
	addl	$8,%ebp
	movl	%ebp,crwork
	popl	%ebp
	movl	crwork,%ebp
	cmpb	$0,filiz
	jne	cor__11
cor__11:
	movb	$0,filiz
	calll	ll_corest
	movl	%ebp,%eax
	orw	%ax,%ax
	je	restres
	movl	zrestcor,%ebx
	jmp	errios
restres:
	popl	%eax
	movl	%esi,%eax
	ret	
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
