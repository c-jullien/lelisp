	.csect	lelisp_txt[PR]
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
	.globl	eval
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
	.globl	llbreak
	.globl	llpanic
	.globl	llmerro
	.globl	llmouse
	.globl	llclock
	.globl	getsetn
	.globl	C.ini_top
C.ini_top:	mflr	0
	stu	0,-4(1)
ini_top:	lil	14,5
	cal	15,5193(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,5198(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,5203(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,5208(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,5213(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,5218(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,4
	cal	15,5223(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,5227(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,5232(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5237(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,5243(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5248(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,8
	cal	15,5254(13)
	l	16,4628(13)
	cal	17,164(13)
	lil	3,._toplevel
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	cal	3,224(21)
	st	3,1452(13)
	lil	14,13
	cal	15,5262(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	3,96(21)
	st	3,0(14)
	lil	14,10
	cal	15,5275(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	3,1
	st	3,0(14)
	lil	14,12
	cal	15,5285(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	3,3
	st	3,0(14)
	lil	14,9
	cal	15,5297(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	st	21,1452(13)
	lil	14,7
	cal	15,5306(13)
	l	16,4552(13)
	cal	17,164(13)
	lil	3,._runt
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,5313(13)
	l	16,4548(13)
	cal	17,164(13)
	lil	3,._llsleep
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,5318(13)
	l	16,4544(13)
	cal	17,164(13)
	lil	3,._lldate
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,5322(13)
	l	16,4540(13)
	cal	17,164(13)
	lil	3,._clkalarm
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,15
	cal	15,7270(13)
	l	16,4536(13)
	cal	17,164(13)
	lil	3,._withit
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,18
	cal	15,7285(13)
	l	16,4528(13)
	cal	17,164(13)
	lil	3,._withnoit
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,5365(13)
	l	16,4520(13)
	cal	17,164(13)
	lil	3,._lltime
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,5369(13)
	l	16,4516(13)
	cal	17,164(13)
	lil	3,._llshwstk
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,5379(13)
	l	16,4572(13)
	cal	17,164(13)
	lil	3,._llcline
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,5386(13)
	l	16,4564(13)
	cal	17,164(13)
	lil	3,._llgetenv
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,5392(13)
	l	16,4560(13)
	cal	17,164(13)
	lil	3,._llgetadr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,5401(13)
	l	16,4556(13)
	cal	17,164(13)
	lil	3,._llcallx
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,5411(13)
	l	16,4620(13)
	cal	17,164(13)
	lil	3,._cstack
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,5417(13)
	l	16,4508(13)
	cal	17,164(13)
	lil	3,._syserror
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,5425(13)
	l	16,4512(13)
	cal	17,164(13)
	lil	3,._lerror
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,5430(13)
	l	16,4504(13)
	cal	17,164(13)
	lil	3,._sysdebug
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	st	21,0(14)
	lil	14,3
	cal	15,5438(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,3
	cal	15,5441(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,5444(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,5451(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,5458(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,5465(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,5472(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,5479(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,5486(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,5493(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,5500(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,5507(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,5514(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5521(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5527(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5533(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5539(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5545(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5551(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,7308(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5563(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5569(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5575(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5581(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5587(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5593(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5599(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5605(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5611(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5617(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5623(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5629(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5635(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5641(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5647(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5653(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5659(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5665(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5671(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5677(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5683(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,5689(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,5695(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,14
	cal	15,5700(13)
	l	16,4496(13)
	cal	17,164(13)
	lil	3,._userit
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,5714(13)
	l	16,4488(13)
	cal	17,164(13)
	lil	3,._mouse
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,5719(13)
	l	16,4484(13)
	cal	17,164(13)
	lil	3,._lltclock
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
systop:	st	21,1756(13)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4632(13)
	stu	3,-4(1)
	st	1,1756(13)
systop2:	cal	14,2592(21)
	oril	15,21,0
	.globl	C.itsoft
	bl	C.itsoft
	b	systop2
	.set	._toplevel,1
	.globl	C.toplevel
C.toplevel:	mflr	0
	stu	0,-4(1)
	.globl	toplevel
toplevel:	.globl	C.lread
	bl	C.lread
	l	3,4624(13)
	stu	3,-4(1)
	stu	14,-4(1)
	stu	21,-4(1)
	lil	17,2
	b	eval
	.globl	toplevr
toplevr:	cal	15,2624(21)
	l	15,0(15)
	cmpl	0,15,21
	beq	toplend
	lil	3,2
	cal	4,5724(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.ttyout
	bl	.ttyout
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	.globl	C.u_print
	bl	C.u_print
toplend:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cstack,1
	.globl	C.cstack
C.cstack:	mflr	0
	stu	0,-4(1)
	.globl	cstack
cstack:	oril	14,21,0
	stu	14,-4(1)
	oril	15,1,0
	l	17,1756(13)
evstck0:	cmpl	0,15,17
	beq	evstck1
	l	14,0(15)
	ai	15,15,4
	l	4,4616(13)
	cmpl	0,14,4
	bne	evstck0
	l	14,0(15)
	ai	15,15,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.1
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.1:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.2
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.2:	l	3,4(6)
	st	3,1184(13)
	lil	3,11
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.3
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.3:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	l	3,0(1)
	st	3,4(6)
	st	6,0(1)
	b	evstck0
evstck1:	oril	14,21,0
	l	16,0(17)
	ai	17,17,4
	l	4,4632(13)
	cmpl	0,16,4
	beq	evstkf
	l	4,4612(13)
	cmpl	0,16,4
	beq	evstkl
	l	4,4608(13)
	cmpl	0,16,4
	beq	evstka
	l	4,4604(13)
	cmpl	0,16,4
	beq	evstke
	l	4,4600(13)
	cmpl	0,16,4
	beq	evstks
	l	4,4596(13)
	cmpl	0,16,4
	beq	evstkb
	l	4,4592(13)
	cmpl	0,16,4
	beq	evstku
	l	4,4588(13)
	cmpl	0,16,4
	beq	evstky
	l	4,4584(13)
	cmpl	0,16,4
	beq	evstkh
	l	4,4580(13)
	cmpl	0,16,4
	beq	evstkt
	l	4,4576(13)
	cmpl	0,16,4
	beq	evstkk
	lil	3,14
	cal	4,5726(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.ttyout
	bl	.ttyout
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
evstkf:	l	14,0(1)
	ai	1,1,4
	b	nreverse
evstck2:	stu	17,-4(1)
	l	3,1740(13)
	stu	3,-4(1)
	.globl	C.nreverse
	bl	C.nreverse
	l	17,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.4
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.4:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	l	3,0(1)
	st	3,4(6)
	st	6,0(1)
	b	evstck0
evstkl:	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.5
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.5:	l	3,4(6)
	st	3,1184(13)
	lil	3,1
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	3,0(17)
	st	3,1740(13)
	ai	17,17,4
	l	16,0(17)
	ai	17,17,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.6
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.6:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
	l	16,0(17)
	ai	17,17,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.7
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.7:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
	l	16,0(17)
	ai	17,17,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.8
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.8:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
	l	15,0(17)
	ai	17,17,4
	b	evstkl2
evstkl1:	l	16,0(17)
	ai	17,17,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.9
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.9:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
evstkl2:	exts	15,15
	si	15,15,1
	cmpi	0,15,0
	bge	evstkl1
	lil	15,0
	b	evstck2
evstka:	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.10
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.10:	l	3,4(6)
	st	3,1184(13)
	lil	3,2
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	15,0(17)
	ai	17,17,4
	b	evstka4
evstka3:	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.11
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.11:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
	l	16,0(17)
	ai	17,17,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.12
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.12:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
	l	16,0(17)
	ai	17,17,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.13
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.13:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
evstka4:	l	16,0(17)
	ai	17,17,4
	cmpli	0,16,0
	bne	evstka3
	st	15,1740(13)
	b	evstck2
evstke:	lil	15,3
	b	evstkb1
evstks:	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.14
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.14:	l	3,4(6)
	st	3,1184(13)
	lil	3,4
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	3,0(17)
	st	3,1740(13)
	ai	17,17,4
	lil	15,10
	b	evstkl2
evstkb:	lil	15,5
evstkb1:	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.15
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.15:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	l	3,0(17)
	st	3,1740(13)
	ai	17,17,4
evstkb2:	lil	15,1
	b	evstkl2
evstku:	lil	15,6
	b	evstkb1
evstky:	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.16
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.16:	l	3,4(6)
	st	3,1184(13)
	lil	3,7
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	3,0(17)
	st	3,1740(13)
	ai	17,17,4
	b	evstck2
evstkh:	lil	15,8
	b	evstkb1
evstkt:	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.17
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.17:	l	3,4(6)
	st	3,1184(13)
	lil	3,9
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	3,0(17)
	st	3,1740(13)
	ai	17,17,4
	ai	17,17,4
	l	15,0(17)
	ai	17,17,4
	b	evstkl2
evstkk:	lil	15,10
	b	evstkb1
	.set	._llcline,2
	.globl	C.llcline
C.llcline:	mflr	0
	stu	0,-4(1)
	.globl	llcline
llcline:	cal	3,3008(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	l	3,1212(13)
	cmpli	0,3,0
	beq	llclin2
	l	16,4568(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	lil	3,1
	st	3,1212(13)
	mtlr	16
	br	
	.globl	llclin1
llclin1:	lil	3,0
	st	3,1212(13)
llclin2:	l	3,0(14)
	ai	3,3,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.cline
	bl	.cline
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llgetenv,2
	.globl	C.llgetenv
C.llgetenv:	mflr	0
	stu	0,-4(1)
	.globl	llgetenv
llgetenv:	cal	3,3040(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	l	3,0(14)
	ai	3,3,8
	l	4,1444(13)
	l	4,0(4)
	ai	4,4,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.getenvrn
	bl	.getenvrn
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	14,3,0
	cmpli	0,14,0
	bne	gtenv8
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gtenv8:	l	15,1444(13)
	b	tryatom
	.set	._llgetadr,2
	.globl	C.llgetadr
C.llgetadr:	mflr	0
	stu	0,-4(1)
	.globl	llgetadr
llgetadr:	cal	3,3072(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	l	3,0(14)
	ai	3,3,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.getgloba
	bl	.getgloba
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	14,3,0
	b	loc
	.set	._llcallx,5
	.globl	C.llcallx
C.llcallx:	mflr	0
	stu	0,-4(1)
	.globl	llcallx
llcallx:	si	4,17,1
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	14,1,3
	cal	15,3104(21)
	.globl	C.vaga1
	bl	C.vaga1
	sli	5,17,2
	stx	14,1,5
	ai	4,17,1
	andil.	17,4,0xFFFF
	si	1,1,4
	st	17,0(1)
	.globl	C.ll_callg
	bl	C.ll_callg
	l	14,224(13)
	exts	3,17
	sli	3,3,2
	a	1,1,3
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._runt,1
	.globl	C.runt
C.runt:	mflr	0
	stu	0,-4(1)
	.globl	runt
runt:	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.runtime
	bl	.runtime
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	14,3,0x8000
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llsleep,2
	.globl	C.llsleep
C.llsleep:	mflr	0
	stu	0,-4(1)
	.globl	llsleep
llsleep:	cmpi	0,14,0
	blt	llsleep1
	cmpl	0,14,18
	bge	llsleep2
	exts	3,14
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.floatc
	bl	.floatc
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	14,3,0x8000
llsleep1:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.cdleep
	bl	.cdleep
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
llsleep2:	cal	15,2784(21)
	b	errnna
	.set	._lldate,1
	.globl	C.lldate
C.lldate:	mflr	0
	stu	0,-4(1)
	.globl	lldate
lldate:	lil	14,8
	oril	15,21,0
	.globl	C.makevect
	bl	C.makevect
	cal	3,2816(21)
	st	3,4(14)
	l	3,0(14)
	ai	3,3,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.cdate
	bl	.cdate
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._clkalarm,2
	.globl	C.clkalarm
C.clkalarm:	mflr	0
	stu	0,-4(1)
	.globl	clkalarm
clkalarm:	cmpi	0,14,0
	blt	alrms1
	cmpl	0,14,18
	bge	alrmer2
	exts	3,14
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.floatc
	bl	.floatc
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	14,3,0x8000
alrms1:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.setalarm
	bl	.setalarm
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
alrmer2:	cal	15,2848(21)
	b	errnna
	.set	._withit,6
	.globl	C.withit
C.withit:	mflr	0
	stu	0,-4(1)
	.globl	withit
withit:	l	3,1212(13)
	cmpli	0,3,0
	bne	withit2
	l	16,4532(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	lil	3,0
	st	3,1212(13)
	mtlr	16
	br	
	.globl	withit1
withit1:	lil	3,1
	st	3,1212(13)
withit2:	b	evprogn
	.set	._withnoit,6
	.globl	C.withnoit
C.withnoit:	mflr	0
	stu	0,-4(1)
	.globl	withnoit
withnoit:	l	3,1212(13)
	cmpli	0,3,0
	beq	withno2
	l	16,4524(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	lil	3,1
	st	3,1212(13)
	mtlr	16
	br	
	.globl	withno1
withno1:	lil	3,0
	st	3,1212(13)
withno2:	b	evprogn
	.set	._lltime,2
	.globl	C.lltime
C.lltime:	mflr	0
	stu	0,-4(1)
	.globl	lltime
lltime:	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.runtime
	bl	.runtime
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	15,3,0x8000
	stu	15,-4(1)
	.globl	C.evala1
	bl	C.evala1
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.runtime
	bl	.runtime
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	14,3,0x8000
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	stu	14,-4(1)
	lil	17,2
	b	fldiff
	.set	._llshwstk,2
	.globl	C.llshwstk
C.llshwstk:	mflr	0
	stu	0,-4(1)
	.globl	llshwstk
llshwstk:	oril	17,1,0
	l	15,1060(13)
	l	16,1068(13)
llshwstk1:	cmpl	0,1,16
	bge	.top.18
	b	llshwstk2
.top.18:	stu	15,-4(1)
	b	llshwstk1
llshwstk2:	oril	1,17,0
	.globl	C.evala1
	bl	C.evala1
	oril	16,1,0
	lil	14,0
	lil	15,0
llshwstk3:	ai	1,1,-4
	l	17,0(1)
	l	3,1060(13)
	cmpl	0,3,17
	beq	llshwstk4
	ai	4,14,1
	andil.	14,4,0xFFFF
	exts	3,14
	cmpi	0,3,1024
	blt	lab101
	lil	14,0
	ai	4,15,1
	andil.	15,4,0xFFFF
lab101:	cror	15,15,15
	b	llshwstk3
llshwstk4:	oril	1,16,0
	cmpli	0,15,0
	beq	llshwstk5
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.19
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.19:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
llshwstk5:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._lerror,4
	.globl	C.lerror
C.lerror:	mflr	0
	stu	0,-4(1)
	.globl	lerror
lerror:	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.20
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.20:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	21,4(6)
	oril	16,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.21
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.21:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	16,4(6)
	oril	16,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.22
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.22:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	16,4(6)
	oril	16,6,0
	oril	15,16,0
	cal	14,3168(21)
	b	itsoft
serror:	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.23
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.23:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.24
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.24:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.25
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.25:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	15,6,0
	cal	14,3168(21)
	b	itsoft
ferror:	stu	14,-4(1)
	l	15,0(14)
	cmpl	0,15,20
	blt	.top.26
	cmpl	0,15,21
	blt	ferror1
.top.26:	.globl	C.stringa1
	bl	C.stringa1
	oril	15,14,0
ferror1:	l	3,0(15)
	l	14,4(3)
	oril	3,14,0
	l	4,0(15)
	ai	4,4,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.ttyout
	bl	.ttyout
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.ttycrlf
	bl	.ttycrlf
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	l	14,0(1)
	ai	1,1,4
ferror2:	oril	14,21,0
	cal	15,2720(21)
	oril	16,21,0
	oril	17,21,0
	b	findtag
	.set	._syserror,4
	.globl	C.syserror
C.syserror:	mflr	0
	stu	0,-4(1)
	.globl	syserror
syserror:	stu	16,-4(1)
	stu	15,-4(1)
	stu	14,-4(1)
	cal	14,3264(21)
	.globl	C.probj
	bl	C.probj
	l	14,0(1)
	ai	1,1,4
	.globl	C.probj
	bl	C.probj
	cal	14,3296(21)
	.globl	C.probj
	bl	C.probj
	l	14,0(1)
	ai	1,1,4
	.globl	C.probj
	bl	C.probj
	cal	14,3296(21)
	.globl	C.probj
	bl	C.probj
	l	14,0(1)
	ai	1,1,4
	.globl	C.probjt
	bl	C.probjt
	b	reenter
	.set	._sysdebug,1
	.globl	C.sysdebug
C.sysdebug:	mflr	0
	stu	0,-4(1)
	.globl	sysdebug
sysdebug:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
errfs:	cal	14,3328(21)
	l	3,1076(13)
	cmpl	0,1,3
	bge	.top.27
	b	ferror
.top.27:	l	16,4500(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,1072(13)
	st	3,1068(13)
	mtlr	16
	br	
	.globl	errfs0
errfs0:	l	3,1076(13)
	st	3,1068(13)
	oril	16,14,0
	cal	15,10624(21)
	oril	14,21,0
	b	serror
errfsgc:	cal	14,3360(21)
	b	ferror
erres:	cal	14,3392(21)
	l	15,0(14)
	cmpl	0,15,20
	blt	.top.28
	cmpl	0,15,21
	blt	erres2
.top.28:	.globl	C.stringa1
	bl	C.stringa1
	oril	15,14,0
erres2:	l	3,0(15)
	l	14,4(3)
	oril	3,14,0
	l	4,0(15)
	ai	4,4,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.ttyout
	bl	.ttyout
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.ttycrlf
	bl	.ttycrlf
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	b	reenter
errfsp:	cal	14,3424(21)
	b	ferror
errato:	cal	14,3456(21)
	b	ferror
errfm:	cal	14,3488(21)
	b	ferror
errff:	cal	14,3520(21)
	b	ferror
errfn:	cal	14,3552(21)
	b	ferror
errfh:	cal	14,3584(21)
	b	ferror
errfr:	cal	14,3616(21)
	b	ferror
errfv:	cal	14,3648(21)
	b	ferror
errudv:	cal	16,3712(21)
	b	serror
	.globl	C.errudf
C.errudf:	mflr	0
	stu	0,-4(1)
errudf:	cal	16,3744(21)
	b	serror
errudm:	cal	16,3776(21)
	b	serror
errudt:	cal	16,3808(21)
	b	serror
errbdf:	cal	16,3840(21)
	b	serror
errwna:	cal	16,3872(21)
	b	serror
errbpa:	cal	16,3904(21)
	b	serror
errbal:	cal	16,3936(21)
	b	serror
errilb:	cal	16,3968(21)
	b	serror
errsxt:	cal	16,4000(21)
	b	serror
errios:	cal	16,4032(21)
	b	serror
err0dv:	cal	16,4064(21)
	b	serror
errnaa:	cal	16,4224(21)
	b	serror
errnna:	cal	16,4096(21)
	b	serror
errnia:	cal	16,4128(21)
	b	serror
errnfa:	cal	16,4160(21)
	b	serror
errnsa:	cal	16,4192(21)
	b	serror
errnla:	cal	16,4256(21)
	b	serror
errnva:	cal	16,4288(21)
	b	serror
errstl:	cal	16,4352(21)
	b	serror
erroob:	cal	16,4320(21)
	b	serror
errvec:	cal	16,4384(21)
	b	serror
errnda:	cal	16,4416(21)
	b	serror
errstc:	cal	16,4448(21)
	b	serror
errsym:	cal	16,4480(21)
	b	serror
errgen:	cal	16,4512(21)
	b	serror
errnab:	cal	16,4544(21)
	b	serror
errxia:	cal	16,4576(21)
	b	serror
	.globl	C.llmerro
C.llmerro:	mflr	0
	stu	0,-4(1)
llmerro:	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	.globl	C.llsystem
	bl	C.llsystem
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.29
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.29:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.30
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.30:	l	3,4(6)
	st	3,1184(13)
	cal	3,3680(21)
	st	3,0(6)
	st	15,4(6)
	oril	15,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.31
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.31:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	15,4(6)
	oril	15,6,0
	cal	14,3168(21)
	.globl	C.itsoft
	bl	C.itsoft
	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.llbreak
C.llbreak:	mflr	0
	stu	0,-4(1)
llbreak:	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	cal	14,4640(21)
	oril	15,21,0
	.globl	C.itsoft
	bl	C.itsoft
	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
llpanic:	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	oril	15,21,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.32
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.32:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.33
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.33:	l	3,4(6)
	st	3,1184(13)
	cal	3,4608(21)
	st	3,0(6)
	st	15,4(6)
	oril	15,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.34
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.34:	l	3,4(6)
	st	3,1184(13)
	cal	3,4608(21)
	st	3,0(6)
	st	15,4(6)
	oril	15,6,0
	cal	14,3168(21)
	.globl	C.itsoft
	bl	C.itsoft
	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.llmouse
C.llmouse:	mflr	0
	stu	0,-4(1)
llmouse:	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	oril	15,21,0
	cal	14,4672(21)
	.globl	C.itsoft
	bl	C.itsoft
	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.llclock
C.llclock:	mflr	0
	stu	0,-4(1)
llclock:	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	cal	14,4704(21)
	oril	15,21,0
	.globl	C.itsoft
	bl	C.itsoft
	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._userit,1
	.globl	C.userit
C.userit:	mflr	0
	stu	0,-4(1)
	.globl	userit
userit:	l	3,1212(13)
	cmpli	0,3,1
	beq	userit2
	l	16,4492(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	lil	3,0
	st	3,1212(13)
	mtlr	16
	br	
	.globl	userit1
userit1:	lil	3,1
	st	3,1212(13)
userit2:	oril	15,21,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.35
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.35:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.36
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.36:	l	3,4(6)
	st	3,1184(13)
	cal	3,4608(21)
	st	3,0(6)
	st	15,4(6)
	oril	15,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.top.37
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.top.37:	l	3,4(6)
	st	3,1184(13)
	cal	3,4608(21)
	st	3,0(6)
	st	15,4(6)
	oril	15,6,0
	cal	14,3168(21)
	b	itsoft
	.set	._mouse,1
	.globl	C.mouse
C.mouse:	mflr	0
	stu	0,-4(1)
	.globl	mouse
mouse:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._lltclock,1
	.globl	C.lltclock
C.lltclock:	mflr	0
	stu	0,-4(1)
	.globl	lltclock
lltclock:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.getsetn
C.getsetn:	mflr	0
	stu	0,-4(1)
getsetn:	cmpli	0,17,0
	beq	getsetn1
	cmpli	0,17,1
	beq	getsetn2
	lil	14,1
	b	errwna
getsetn1:	l	17,0(1)
	ai	1,1,4
	oril	14,16,0
	ai	1,1,8
	mtlr	17
	br	
getsetn2:	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	14,4(1)
	cmpl	0,14,18
	bge	errnia
	exts	3,14
	exts	4,16
	cmp	0,3,4
	bgt	erroob
	l	16,0(1)
	ai	1,1,4
	exts	3,14
	exts	4,16
	cmp	0,3,4
	blt	erroob
	l	14,0(1)
	ai	1,1,4
	mtlr	17
	br	
