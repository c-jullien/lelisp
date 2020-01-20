	.csect	lelisp_txt[PR]
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
	.globl	gaeqn
	.globl	gaplus2i
	.globl	gadiff2i
	.globl	gatim2i
	.globl	gadinv
	.globl	gadiv
	.globl	llfix
	.globl	llfloat
	.globl	lltrunc
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
	.globl	gaabs
	.globl	gadrev
	.globl	intgerp
	.globl	numberp
	.globl	gamod
	.globl	bangen1
	.globl	C.ini_nbs
C.ini_nbs:	mflr	0
	stu	0,-4(1)
ini_nbs:	lil	14,8
	cal	15,8409(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	st	21,0(14)
	cal	3,128(21)
	st	3,12(14)
	lil	14,7
	cal	15,8417(13)
	l	16,2704(13)
	cal	17,164(13)
	lil	3,._numberp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,8424(13)
	l	16,2700(13)
	cal	17,164(13)
	lil	3,._intgerp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,8432(13)
	l	16,2696(13)
	cal	17,164(13)
	lil	3,._rationalp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8441(13)
	l	16,2692(13)
	cal	17,164(13)
	lil	3,._llfloat
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8446(13)
	l	16,2684(13)
	cal	17,164(13)
	lil	3,._llfix
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,8449(13)
	l	16,2688(13)
	cal	17,164(13)
	lil	3,._lltrunc
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8457(13)
	l	16,2680(13)
	cal	17,164(13)
	lil	3,._gaadd1
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8459(13)
	l	16,2676(13)
	cal	17,164(13)
	lil	3,._gasub1
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8461(13)
	l	16,2672(13)
	cal	17,164(13)
	lil	3,._gaabs
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,8464(13)
	l	16,2668(13)
	cal	17,164(13)
	lil	3,._gaplus
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8465(13)
	l	16,2660(13)
	cal	17,164(13)
	lil	3,._gadinv
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,8467(13)
	l	16,2656(13)
	cal	17,164(13)
	lil	3,._gadiff
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,8468(13)
	l	16,2664(13)
	cal	17,164(13)
	lil	3,._gatimes
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8469(13)
	l	16,2648(13)
	cal	17,164(13)
	lil	3,._gadrev
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8471(13)
	l	16,2644(13)
	cal	17,164(13)
	lil	3,._gadiv
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,8473(13)
	l	16,2644(13)
	cal	17,164(13)
	lil	3,._gadiv
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8474(13)
	l	16,2636(13)
	cal	17,164(13)
	lil	3,._gaquomod
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,8477(13)
	l	16,2636(13)
	cal	17,164(13)
	lil	3,._gaquomod
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8485(13)
	l	16,2636(13)
	cal	17,164(13)
	lil	3,._gaquomod
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8491(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,3
	cal	15,8493(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	3,0
	st	3,0(14)
	cal	3,19200(21)
	st	3,12(14)
	lil	14,6
	cal	15,8496(13)
	l	16,2632(13)
	cal	17,164(13)
	lil	3,._gamod
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8502(13)
	l	16,2620(13)
	cal	17,164(13)
	lil	3,._gacomp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,8505(13)
	l	16,2600(13)
	cal	17,164(13)
	lil	3,._gaeqen
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8506(13)
	l	16,2596(13)
	cal	17,164(13)
	lil	3,._ganeqn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8508(13)
	l	16,2596(13)
	cal	17,164(13)
	lil	3,._ganeqn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8510(13)
	l	16,2588(13)
	cal	17,164(13)
	lil	3,._gage
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,8512(13)
	l	16,2592(13)
	cal	17,164(13)
	lil	3,._gagt
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8513(13)
	l	16,2580(13)
	cal	17,164(13)
	lil	3,._gale
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,8515(13)
	l	16,2584(13)
	cal	17,164(13)
	lil	3,._galt
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8516(13)
	l	16,2616(13)
	cal	17,164(13)
	lil	3,._zerop
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8521(13)
	l	16,2608(13)
	cal	17,164(13)
	lil	3,._plusp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8526(13)
	l	16,2612(13)
	cal	17,164(13)
	lil	3,._minusp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8532(13)
	l	16,2576(13)
	cal	17,164(13)
	lil	3,._min
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8535(13)
	l	16,2572(13)
	cal	17,164(13)
	lil	3,._max
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8538(13)
	l	16,2568(13)
	cal	17,164(13)
	lil	3,._llsin
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8541(13)
	l	16,2564(13)
	cal	17,164(13)
	lil	3,._llcos
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8544(13)
	l	16,2560(13)
	cal	17,164(13)
	lil	3,._llasin
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8548(13)
	l	16,2556(13)
	cal	17,164(13)
	lil	3,._llacos
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8552(13)
	l	16,2552(13)
	cal	17,164(13)
	lil	3,._llatan
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8556(13)
	l	16,2548(13)
	cal	17,164(13)
	lil	3,._llexp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8559(13)
	l	16,2544(13)
	cal	17,164(13)
	lil	3,._lllog
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8562(13)
	l	16,2540(13)
	cal	17,164(13)
	lil	3,._lllog10
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8567(13)
	l	16,2536(13)
	cal	17,164(13)
	lil	3,._llpower
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8572(13)
	l	16,2532(13)
	cal	17,164(13)
	lil	3,._llsqrt
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,20
	cal	15,8576(13)
	l	16,2528(13)
	cal	17,164(13)
	lil	3,._llfixmax
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,20
	cal	15,8596(13)
	l	16,2524(13)
	cal	17,164(13)
	lil	3,._llfixmin
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,14
	cal	15,8616(13)
	l	16,2520(13)
	cal	17,164(13)
	lil	3,._llminus0
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	xor	14,14,14
	oril	14,14,0xFFFF
	st	14,1932(13)
	lil	14,0
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
	st	14,1936(13)
	lil	14,1
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
	st	14,1940(13)
	xor	14,14,14
	oril	14,14,0xFFFF
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
	st	14,1944(13)
	lil	14,32767
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
	st	14,1948(13)
	xor	14,14,14
	oril	14,14,0x8001
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
	st	14,1952(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.bangen
C.bangen:	mflr	0
	stu	0,-4(1)
bangen:	stu	16,-4(1)
	.globl	C.gettype
	bl	C.gettype
	stu	14,-4(1)
	cmpl	0,14,21
	blt	bangerr
	cmpl	0,14,22
	bge	bangerr
	oril	15,16,0
	oril	16,21,0
	.globl	C.getfns
	bl	C.getfns
	cmpl	0,14,21
	bne	bangencal
	l	15,0(1)
	cal	14,18560(21)
	l	14,0(14)
	cmpl	0,14,21
	beq	bangerr
	cmpl	0,14,21
	blt	bangerr
	cmpl	0,14,22
	bge	bangerr
	.globl	C.ffsymbol
	bl	C.ffsymbol
	l	15,4(1)
	oril	16,21,0
	.globl	C.getfns
	bl	C.getfns
	cmpl	0,14,21
	beq	bangerr
bangencal:	ai	1,1,12
	l	17,0(1)
	ai	1,1,4
	b	ffuncall
bangerr:	l	17,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
bangen1:	stu	14,-4(1)
	lil	3,1
	stu	3,-4(1)
	.globl	C.bangen
	bl	C.bangen
	l	17,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	b	errgen
	.globl	C.bangen2
C.bangen2:	mflr	0
	stu	0,-4(1)
bangen2:	stu	14,-4(1)
	stu	15,-4(1)
	lil	3,2
	stu	3,-4(1)
	.globl	C.bangen
	bl	C.bangen
	l	17,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.num.1
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.num.1:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	16,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.num.2
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.num.2:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
	b	errgen
	.set	._numberp,2
	.globl	C.numberp
C.numberp:	mflr	0
	stu	0,-4(1)
	.globl	numberp
numberp:	cmpl	0,14,18
	blt	nbpt
	cmpi	0,14,0
	blt	nbpt
	cal	15,18592(21)
nbpgen:	stu	14,-4(1)
	.globl	C.gettype
	bl	C.gettype
	cmpl	0,14,21
	blt	nbpn
	cmpl	0,14,22
	bge	nbpn
	oril	16,21,0
	.globl	C.getfns
	bl	C.getfns
	cmpl	0,14,21
	beq	nbpn
	lil	17,1
	b	ffuncall
nbpn:	ai	1,1,4
nbpnil:	oril	14,21,0
nbpt:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._intgerp,2
	.globl	C.intgerp
C.intgerp:	mflr	0
	stu	0,-4(1)
	.globl	intgerp
intgerp:	cmpl	0,14,18
	blt	nbpt
	cmpi	0,14,0
	blt	nbpnil
	cal	15,18624(21)
	b	nbpgen
	.set	._rationalp,2
	.globl	C.rationalp
C.rationalp:	mflr	0
	stu	0,-4(1)
	.globl	rationalp
rationalp:	cmpl	0,14,18
	blt	nbpt
	cmpi	0,14,0
	blt	nbpnil
	cal	15,18656(21)
	b	nbpgen
	.set	._llfloat,2
	.globl	C.llfloat
C.llfloat:	mflr	0
	stu	0,-4(1)
	.globl	llfloat
llfloat:	cmpl	0,14,18
	bge	llfloatf
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
llfloatr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
llfloatf:	cmpi	0,14,0
	blt	llfloatr
	cal	16,18688(21)
	b	bangen1
	.set	._lltrunc,2
	.globl	C.lltrunc
C.lltrunc:	mflr	0
	stu	0,-4(1)
	.globl	lltrunc
lltrunc:lltrunc1:	cal	16,18752(21)
	cmpl	0,14,18
	blt	lltrcret
	cmpi	0,14,0
	bge	bangen1
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	l	3,1952(13)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	blt	bangen1
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	l	3,1948(13)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	bgt	bangen1
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.fixc
	bl	.fixc
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	andil.	14,3,0xFFFF
lltrcret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llfix,2
	.globl	C.llfix
C.llfix:	mflr	0
	stu	0,-4(1)
	.globl	llfix
llfix:	b	lltrunc1
	.set	._gaadd1,2
	.globl	C.gaadd1
C.gaadd1:	mflr	0
	stu	0,-4(1)
	.globl	gaadd1
gaadd1:	oril	15,14,0
	cmpl	0,14,18
	bge	gaadd2
	exts	4,14
	ai	4,4,1
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	gaadd3
	cmpli	0,14,0x8000
	beq	gaadd3
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gaadd2:	cmpi	0,14,0
	bge	gaadd3
	l	3,1940(13)
	a	3,3,3
	st	3,0(13)
	lfs	1,0(13)
	a	3,14,14
	st	3,0(13)
	lfs	2,0(13)
	fa	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	14,3,0x8000
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gaadd3:	oril	14,15,0
	lil	15,1
	cal	16,18880(21)
	b	bangen2
	.set	._gasub1,2
	.globl	C.gasub1
C.gasub1:	mflr	0
	stu	0,-4(1)
	.globl	gasub1
gasub1:	oril	15,14,0
	cmpl	0,14,18
	bge	gasub2
	exts	4,14
	si	4,4,1
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	gasub3
	cmpli	0,14,0x8000
	beq	gasub3
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gasub2:	cmpi	0,14,0
	bge	gasub3
	l	3,1940(13)
	a	3,3,3
	st	3,0(13)
	lfs	1,0(13)
	a	3,14,14
	st	3,0(13)
	lfs	2,0(13)
	fs	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	14,3,0x8000
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gasub3:	oril	14,15,0
	lil	15,1
	cal	16,18944(21)
	b	bangen2
	.set	._gaabs,2
	.globl	C.gaabs
C.gaabs:	mflr	0
	stu	0,-4(1)
	.globl	gaabs
gaabs:	lil	15,0
	cmpl	0,14,18
	bge	gaabs2
	cmpli	0,14,0x8000
	beq	gaabs3
	exts	3,14
	exts	4,15
	cmp	0,3,4
	bge	gaabsret
	exts	3,14
	exts	4,15
	sf	4,3,4
	andil.	15,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	gaabs3
	oril	14,15,0
gaabsret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gaabs2:	cmpi	0,14,0
	bge	gaabs3
	l	15,1936(13)
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	bge	gaabsret
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fs	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	15,3,0x8000
	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gaabs3:	cal	16,18848(21)
	b	bangen1
	.set	._gaplus,5
	.globl	C.gaplus
C.gaplus:	mflr	0
	stu	0,-4(1)
	.globl	gaplus
gaplus:	cmpli	0,17,2
	bne	gapplus
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	b	gaplus2i
	.globl	C.gaplus2i
C.gaplus2i:	mflr	0
	stu	0,-4(1)
gaplus2i:	oril	16,14,0
	cmpl	0,14,18
	bge	gapplus0
	cmpl	0,15,18
	bge	gapplus1
	exts	3,15
	exts	4,14
	a	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	gapplus1
	cmpli	0,14,0x8000
	beq	gapplus1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gapplus0:	cmpi	0,14,0
	bge	gapplus1
	cmpi	0,15,0
	bge	gapplus1
	a	3,15,15
	st	3,0(13)
	lfs	1,0(13)
	a	3,14,14
	st	3,0(13)
	lfs	2,0(13)
	fa	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	14,3,0x8000
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gapplus1:	stu	16,-4(1)
	stu	15,-4(1)
gapplus:	cmpli	0,17,0
	beq	gaprt0
	cmpli	0,17,1
	bne	gaplus0
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	blt	gaprret
	cmpi	0,14,0
	blt	gaprret
	lil	15,0
	cal	16,18880(21)
	b	bangen2
gaprt0:	oril	14,17,0
gaprret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gaplus0:	stu	17,-4(1)
	sli	3,17,2
	lx	14,1,3
gaplus1:	cmpl	0,14,18
	blt	gaplfx1
	cmpi	0,14,0
	blt	gaplfl3
	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	gaplgn0
	lil	17,0
gaplus2:	l	17,0(1)
	ai	1,1,4
	exts	3,17
	sli	3,3,2
	a	1,1,3
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gaplfx0:	sli	3,17,2
	lx	15,1,3
	cmpi	0,15,0
	blt	gaplfl0
	cmpl	0,15,18
	bge	gaplgn1
	exts	3,14
	exts	4,15
	a	4,3,4
	andil.	15,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	gaplgn0
	cmpli	0,15,0x8000
	beq	gaplgn0
	oril	14,15,0
gaplfx1:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	gaplfx0
	lil	17,0
	b	gaplus2
gaplfl0:	exts	3,14
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
	b	gaplfl2
gaplfl1:	sli	3,17,2
	lx	15,1,3
	cmpi	0,15,0
	blt	gaplfl2
	cmpl	0,15,18
	bge	gaplgn1
	exts	3,15
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
	oriu	15,3,0x8000
gaplfl2:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fa	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	15,3,0x8000
	oril	14,15,0
gaplfl3:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	gaplfl1
	lil	17,0
	b	gaplus2
gaplgn0:	sli	3,17,2
	lx	15,1,3
gaplgn1:	stu	17,-4(1)
	cal	16,18880(21)
	.globl	C.bangen2
	bl	C.bangen2
	l	17,0(1)
	ai	1,1,4
	b	gaplus1
	.set	._gatimes,5
	.globl	C.gatimes
C.gatimes:	mflr	0
	stu	0,-4(1)
	.globl	gatimes
gatimes:	cmpli	0,17,2
	bne	gattimes
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	b	gatim2i
	.globl	C.gatim2i
C.gatim2i:	mflr	0
	stu	0,-4(1)
gatim2i:	oril	16,14,0
	cmpl	0,14,18
	bge	gattimes0
	cmpl	0,15,18
	bge	gattimes1
	exts	3,15
	exts	4,14
	muls	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	gattimes1
	cmpli	0,14,0x8000
	beq	gattimes1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gattimes0:	cmpi	0,14,0
	bge	gattimes1
	cmpi	0,15,0
	bge	gattimes1
	a	3,15,15
	st	3,0(13)
	lfs	1,0(13)
	a	3,14,14
	st	3,0(13)
	lfs	2,0(13)
	fm	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	14,3,0x8000
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gattimes1:	stu	16,-4(1)
	stu	15,-4(1)
gattimes:	cmpli	0,17,0
	beq	gatrt0
	cmpli	0,17,1
	bne	gatime0
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	blt	gatrret
	cmpi	0,14,0
	blt	gatrret
	lil	15,1
	cal	16,18976(21)
	b	bangen2
gatrret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gatrt0:	lil	14,1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gatime0:	stu	17,-4(1)
	sli	3,17,2
	lx	14,1,3
gatime1:	cmpl	0,14,18
	blt	gatifx1
	cmpi	0,14,0
	blt	gatifl3
	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	gatign0
	lil	17,0
gatime2:	l	17,0(1)
	ai	1,1,4
	exts	3,17
	sli	3,3,2
	a	1,1,3
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gatifx0:	sli	3,17,2
	lx	15,1,3
	cmpi	0,15,0
	blt	gatifl0
	cmpl	0,15,18
	bge	gatign1
	exts	3,14
	exts	4,15
	muls	4,3,4
	andil.	15,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	gatign0
	cmpli	0,15,0x8000
	beq	gatign0
	oril	14,15,0
gatifx1:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	gatifx0
	lil	17,0
	b	gatime2
gatifl0:	exts	3,14
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
	b	gatifl2
gatifl1:	sli	3,17,2
	lx	15,1,3
	cmpi	0,15,0
	blt	gatifl2
	cmpl	0,15,18
	bge	gatign1
	exts	3,15
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
	oriu	15,3,0x8000
gatifl2:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fm	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	15,3,0x8000
	oril	14,15,0
gatifl3:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	gatifl1
	lil	17,0
	b	gatime2
gatign0:	sli	3,17,2
	lx	15,1,3
gatign1:	stu	17,-4(1)
	cal	16,18976(21)
	.globl	C.bangen2
	bl	C.bangen2
	l	17,0(1)
	ai	1,1,4
	b	gatime1
	.set	._gadinv,2
	.globl	C.gadinv
C.gadinv:	mflr	0
	stu	0,-4(1)
	.globl	gadinv
gadinv:	oril	15,14,0
	b	gadneg
	.set	._gadiff,5
	.globl	C.gadiff
C.gadiff:	mflr	0
	stu	0,-4(1)
	.globl	gadiff
gadiff:	cmpli	0,17,2
	beq	gadiff2
	cmpli	0,17,1
	beq	gadiff1
	cmpli	0,17,0
	bne	gadiff3
	oril	14,17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gadiff1:	l	15,0(1)
	ai	1,1,4
gadneg:	lil	14,0
	cmpl	0,15,18
	blt	gadneg2
	cmpi	0,15,0
	blt	gadneg3
gadneg1:	cal	16,18912(21)
	oril	14,15,0
	b	bangen1
gadneg2:	exts	3,15
	exts	4,14
	sf	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	gadneg1
	cmpli	0,14,0x8000
	beq	gadneg1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gadneg3:	exts	3,14
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
	a	3,15,15
	st	3,0(13)
	lfs	1,0(13)
	a	3,14,14
	st	3,0(13)
	lfs	2,0(13)
	fs	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	14,3,0x8000
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gadiff2:	l	14,0(1)
	ai	1,1,4
	.globl	gadiffp
gadiffp:	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	b	gadiff2i
	.globl	C.gadiff2i
C.gadiff2i:	mflr	0
	stu	0,-4(1)
gadiff2i:	oril	16,14,0
	cmpl	0,14,18
	blt	gadiffp1
	cmpi	0,14,0
	blt	gadiffp3
gadiffp0:	oril	14,16,0
	cal	16,18944(21)
	b	bangen2
gadiffp1:	cmpl	0,15,18
	bge	gadiffp2
	exts	3,15
	exts	4,14
	sf	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	gadiffp0
	cmpli	0,14,0x8000
	beq	gadiffp0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gadiffp2:	cmpi	0,15,0
	bge	gadiffp0
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
	b	gadiffp5
gadiffp3:	cmpl	0,15,18
	bge	gadiffp4
	exts	3,15
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
	oriu	15,3,0x8000
	b	gadiffp5
gadiffp4:	cmpi	0,15,0
	bge	gadiffp0
gadiffp5:	a	3,15,15
	st	3,0(13)
	lfs	1,0(13)
	a	3,14,14
	st	3,0(13)
	lfs	2,0(13)
	fs	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	14,3,0x8000
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gadiff3:	si	4,17,1
	andil.	17,4,0xFFFF
	si	4,17,1
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	14,1,3
	sli	5,17,2
	l	4,2652(13)
	stx	4,1,5
	stu	17,-4(1)
	ai	4,17,1
	andil.	17,4,0xFFFF
	b	gaplus1
	.set	._gadrev,2
	.globl	C.gadrev
C.gadrev:	mflr	0
	stu	0,-4(1)
	.globl	gadrev
gadrev:	oril	15,14,0
	b	garev
	.set	._gadiv,5
	.globl	C.gadiv
C.gadiv:	mflr	0
	stu	0,-4(1)
	.globl	gadiv
gadiv:	cmpli	0,17,2
	beq	gadiv2
	cmpli	0,17,1
	beq	gadiv1
	cmpli	0,17,0
	bne	gadiv3
garevret:	lil	14,1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gadiv1:	l	15,0(1)
	ai	1,1,4
garev:	cmpli	0,15,1
	beq	garevret
	cmpl	0,15,18
	blt	garev1
	cmpi	0,15,0
	blt	garev2
garev1:	cal	16,19008(21)
	oril	14,15,0
	b	bangen1
garev2:	lil	14,1
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
	a	3,15,15
	st	3,0(13)
	lfs	1,0(13)
	a	3,14,14
	st	3,0(13)
	lfs	2,0(13)
	fd	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	14,3,0x8000
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gadiv2:	l	14,0(1)
	ai	1,1,4
	.globl	gadivt
gadivt:	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	oril	16,14,0
	cmpl	0,14,18
	blt	gadivt1
	cmpi	0,14,0
	blt	gadivt3
gadivt0:	oril	14,16,0
	cal	16,19072(21)
	b	bangen2
gadivt1:	cmpl	0,15,18
	bge	gadivt2
	cmpli	0,15,0
	beq	gadivt0
gadivt11:	exts	3,15
	exts	4,14
	divs	3,4,3
	mfmq	3
	andil.	14,3,0xFFFF
	cmpli	0,14,0
	bne	gadivt0
	oril	14,16,0
	exts	3,15
	exts	4,14
	divs	3,4,3
	andil.	14,3,0xFFFF
	cmpli	0,14,0x8000
	beq	gadivt0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gadivt2:	cmpi	0,15,0
	bge	gadivt0
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
	b	gadivt5
gadivt3:	cmpl	0,15,18
	bge	gadivt4
	exts	3,15
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
	oriu	15,3,0x8000
	b	gadivt5
gadivt4:	cmpi	0,15,0
	bge	gadivt0
gadivt5:	a	3,15,15
	st	3,0(13)
	lfs	1,0(13)
	a	3,14,14
	st	3,0(13)
	lfs	2,0(13)
	fd	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	14,3,0x8000
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gadiv3:	si	4,17,1
	andil.	17,4,0xFFFF
	si	4,17,1
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	14,1,3
	sli	5,17,2
	l	4,2640(13)
	stx	4,1,5
	stu	17,-4(1)
	ai	4,17,1
	andil.	17,4,0xFFFF
	b	gatime1
	.set	._gaquomod,3
	.globl	C.gaquomod
C.gaquomod:	mflr	0
	stu	0,-4(1)
	.globl	gaquomod
gaquomod:	cal	16,19168(21)
	cmpi	0,14,0
	blt	bangen2
	cmpi	0,15,0
	blt	bangen2
	cmpl	0,14,18
	bge	bangen2
	cmpl	0,15,18
	bge	bangen2
	cmpli	0,15,0
	beq	bangen2
gaquomod1:	oril	16,14,0
	exts	3,15
	exts	4,14
	divs	3,4,3
	andil.	14,3,0xFFFF
	cmpli	0,14,0x8000
	beq	gaquomodg
	oril	17,16,0
	exts	3,15
	exts	4,17
	divs	3,4,3
	mfmq	3
	andil.	17,3,0xFFFF
	exts	3,17
	cmpi	0,3,0
	bge	gamodret
	exts	3,14
	cmpi	0,3,0
	bgt	gaquomod3
	exts	3,14
	cmpi	0,3,0
	blt	gaquomod2
	exts	3,15
	cmpi	0,3,0
	ble	gaquomod3
gaquomod2:	exts	4,14
	si	4,4,1
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	gaquomodg
	b	gaquoret
gaquomod3:	exts	4,14
	ai	4,4,1
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	gaquomodg
gaquoret:	exts	3,15
	cmpi	0,3,0
	bge	gamodr3
	exts	3,15
	neg	3,3
	andil.	15,3,0xFFFF
gamodr3:	exts	3,15
	exts	4,17
	a	4,3,4
	andil.	17,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	gaquomodg
gamodret:	cal	15,19232(21)
	st	17,0(15)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gaquomodg:	oril	14,16,0
	cal	16,19168(21)
	b	bangen2
gaquo2:	cmpi	0,15,0
	blt	gaquo4
	cmpl	0,15,18
	bge	bangen2
	exts	3,15
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
	oriu	15,3,0x8000
	b	gaquo4
gaquo3:	cmpl	0,14,18
	bge	bangen2
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
gaquo4:	oril	16,14,0
	a	3,15,15
	st	3,0(13)
	lfs	1,0(13)
	a	3,14,14
	st	3,0(13)
	lfs	2,0(13)
	fd	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	14,3,0x8000
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._gamod,3
	.globl	C.gamod
C.gamod:	mflr	0
	stu	0,-4(1)
	.globl	gamod
gamod:	.globl	C.gaquomod
	bl	C.gaquomod
	cal	14,19232(21)
	l	14,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gacom:	exts	3,17
	cmpi	0,3,2
	bge	gacom0
	lil	14,2
	l	15,1956(13)
	b	errwna
gacom0:	stu	17,-4(1)
	sli	3,17,2
	lx	14,1,3
gacom1:	cmpl	0,14,18
	blt	gacomfx1
	cmpi	0,14,0
	blt	gacomfl3
	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	gacomgn0
	lil	17,0
gacom2:	l	17,0(1)
	ai	1,1,4
	si	4,17,1
	andil.	17,4,0xFFFF
	exts	3,17
	sli	3,3,2
	a	1,1,3
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gacom3:	oril	14,21,0
	l	17,0(1)
	ai	1,1,4
	exts	3,17
	sli	3,3,2
	a	1,1,3
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gacomfx0:	sli	3,17,2
	lx	15,1,3
	cmpi	0,15,0
	blt	gacomfl0
	cmpl	0,15,18
	bge	gacomgn1
	cmpl	0,14,15
	beq	gacomfx2
	exts	3,14
	exts	4,15
	cmp	0,3,4
	bgt	gacomfx3
	lil	14,4
	b	gacomfx4
gacomfx2:	lil	14,2
	b	gacomfx4
gacomfx3:	lil	14,1
gacomfx4:	and	14,16,14
	cmpli	0,14,0
	beq	gacom3
	oril	14,15,0
gacomfx1:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	gacomfx0
	lil	17,0
	b	gacom2
gacomfl0:	exts	3,14
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
	b	gacomfl2
gacomfl1:	sli	3,17,2
	lx	15,1,3
	cmpi	0,15,0
	blt	gacomfl2
	cmpl	0,15,18
	bge	gacomgn1
	exts	3,15
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
	oriu	15,3,0x8000
gacomfl2:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	beq	gacomfl4
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	bgt	gacomfl5
	lil	14,4
	b	gacomfl6
gacomfl4:	lil	14,2
	b	gacomfl6
gacomfl5:	lil	14,1
gacomfl6:	and	14,16,14
	cmpli	0,14,0
	beq	gacom3
	oril	14,15,0
gacomfl3:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	gacomfl1
	lil	17,0
	b	gacom2
gacomgn0:	sli	3,17,2
	lx	15,1,3
gacomgn1:	stu	17,-4(1)
	stu	16,-4(1)
	stu	15,-4(1)
	cal	16,19296(21)
	.globl	C.bangensp2
	bl	C.bangensp2
	l	15,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	gacom3
	cmpli	0,14,0
	beq	gacomgn2
	cmpli	0,14,1
	beq	gacomgn3
	l	4,1932(13)
	cmpl	0,14,4
	bne	gacom3
	lil	14,4
	b	gacomgn4
gacomgn2:	lil	14,2
	b	gacomgn4
gacomgn3:	lil	14,1
gacomgn4:	and	14,16,14
	cmpli	0,14,0
	beq	gacom3
	oril	14,15,0
	b	gacom1
	.globl	C.bangensp2
C.bangensp2:	mflr	0
	stu	0,-4(1)
bangensp2:	l	3,2628(13)
	stu	3,-4(1)
	stu	14,-4(1)
	stu	15,-4(1)
	lil	3,2
	stu	3,-4(1)
	.globl	C.bangen
	bl	C.bangen
	l	14,8(1)
	l	16,1956(13)
	l	3,2624(13)
	st	3,12(1)
	.globl	C.bangen
	bl	C.bangen
	l	17,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.num.3
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.num.3:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	16,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.num.4
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.num.4:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
	b	errgen
	.globl	oneret
oneret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	tworet
tworet:	l	17,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	gacom3
	oril	14,15,0
	b	gacom1
	.set	._gacomp,3
	.globl	C.gacomp
C.gacomp:	mflr	0
	stu	0,-4(1)
	.globl	gacomp
gacomp:	cal	16,19296(21)
	cmpl	0,14,18
	blt	gacomp5
	cmpi	0,14,0
	bge	bangen2
	cmpi	0,15,0
	blt	gacomp1
	cmpl	0,15,18
	bge	bangen2
	exts	3,15
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
	oriu	15,3,0x8000
gacomp1:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	beq	gacomp3
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	bgt	gacomp4
gacomp2:	l	14,1932(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gacomp3:	lil	14,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gacomp4:	lil	14,1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gacomp5:	cmpl	0,15,18
	blt	gacomp6
	cmpi	0,15,0
	bge	bangen2
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
	b	gacomp1
gacomp6:	cmpl	0,14,15
	beq	gacomp3
	exts	3,14
	exts	4,15
	cmp	0,3,4
	bgt	gacomp4
	b	gacomp2
	.set	._zerop,2
	.globl	C.zerop
C.zerop:	mflr	0
	stu	0,-4(1)
	.globl	zerop
zerop:	cal	3,19552(21)
	st	3,1956(13)
	stu	14,-4(1)
	lil	3,0
	stu	3,-4(1)
	lil	17,2
	lil	16,2
	b	gacom
	.set	._minusp,2
	.globl	C.minusp
C.minusp:	mflr	0
	stu	0,-4(1)
	.globl	minusp
minusp:	cal	3,19616(21)
	st	3,1956(13)
	stu	14,-4(1)
	lil	3,0
	stu	3,-4(1)
	lil	17,2
	lil	16,4
	b	gacom
	.set	._plusp,2
	.globl	C.plusp
C.plusp:	mflr	0
	stu	0,-4(1)
	.globl	plusp
plusp:	cal	3,19584(21)
	st	3,1956(13)
	stu	14,-4(1)
	lil	3,0
	stu	3,-4(1)
	lil	17,2
	lil	16,3
	b	gacom
gaeqn:	stu	16,-4(1)
	l	3,2604(13)
	stu	3,-4(1)
	stu	14,-4(1)
	stu	15,-4(1)
	cal	3,19328(21)
	st	3,1956(13)
	lil	17,2
	lil	16,2
	b	gacom
	.globl	gaeqnret
gaeqnret:	l	16,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._gaeqen,5
	.globl	C.gaeqen
C.gaeqen:	mflr	0
	stu	0,-4(1)
	.globl	gaeqen
gaeqen:	cmpli	0,17,2
	bne	gaeqen2
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	gaeqen1
	cmpl	0,15,18
	bge	gaeqen1
	cmpl	0,14,15
	beq	gaeqqn0
	oril	14,21,0
gaeqqn0:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gaeqen1:	stu	14,-4(1)
	stu	15,-4(1)
gaeqen2:	cal	3,19328(21)
	st	3,1956(13)
	lil	16,2
	b	gacom
	.set	._ganeqn,3
	.globl	C.ganeqn
C.ganeqn:	mflr	0
	stu	0,-4(1)
	.globl	ganeqn
ganeqn:	cmpl	0,14,18
	bge	ganen1
	cmpl	0,15,18
	bge	ganen1
	cmpl	0,14,15
	bne	ganen0
	oril	14,21,0
ganen0:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ganen1:	stu	14,-4(1)
	stu	15,-4(1)
	cal	3,19392(21)
	st	3,1956(13)
	lil	16,5
	lil	17,2
	b	gacom
	.set	._gagt,5
	.globl	C.gagt
C.gagt:	mflr	0
	stu	0,-4(1)
	.globl	gagt
gagt:	cal	3,19456(21)
	st	3,1956(13)
	lil	16,1
	b	gacom
	.set	._gage,5
	.globl	C.gage
C.gage:	mflr	0
	stu	0,-4(1)
	.globl	gage
gage:	cal	3,19424(21)
	st	3,1956(13)
	lil	16,3
	b	gacom
	.set	._galt,5
	.globl	C.galt
C.galt:	mflr	0
	stu	0,-4(1)
	.globl	galt
galt:	cal	3,19520(21)
	st	3,1956(13)
	lil	16,4
	b	gacom
	.set	._gale,5
	.globl	C.gale
C.gale:	mflr	0
	stu	0,-4(1)
	.globl	gale
gale:	cal	3,19488(21)
	st	3,1956(13)
	lil	16,6
	b	gacom
	.set	._min,5
	.globl	C.min
C.min:	mflr	0
	stu	0,-4(1)
	.globl	min
min:	cmpli	0,17,0
	beq	minerr
	l	14,0(1)
	ai	1,1,4
	b	min3
min1:	l	15,0(1)
	stu	17,-4(1)
	.globl	C.mintwo
	bl	C.mintwo
	l	17,0(1)
	ai	1,1,4
	cmpl	0,14,21
	bne	min2
	l	14,0(1)
	ai	1,1,4
	b	min3
min2:	ai	1,1,4
min3:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	min1
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
minerr:	lil	14,1
	cal	15,19648(21)
	b	errwna
	.globl	C.mintwo
C.mintwo:	mflr	0
	stu	0,-4(1)
mintwo:	stu	14,-4(1)
	stu	15,-4(1)
	lil	17,2
	b	galt
	.set	._max,5
	.globl	C.max
C.max:	mflr	0
	stu	0,-4(1)
	.globl	max
max:	cmpli	0,17,0
	beq	maxerr
	l	14,0(1)
	ai	1,1,4
	b	max3
max1:	l	15,0(1)
	stu	17,-4(1)
	.globl	C.maxtwo
	bl	C.maxtwo
	l	17,0(1)
	ai	1,1,4
	cmpl	0,14,21
	bne	max2
	l	14,0(1)
	ai	1,1,4
	b	max3
max2:	ai	1,1,4
max3:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	max1
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
maxerr:	lil	14,1
	cal	15,19680(21)
	b	errwna
	.globl	C.maxtwo
C.maxtwo:	mflr	0
	stu	0,-4(1)
maxtwo:	stu	14,-4(1)
	stu	15,-4(1)
	lil	17,2
	b	gagt
	.set	._llsin,2
	.globl	C.llsin
C.llsin:	mflr	0
	stu	0,-4(1)
	.globl	llsin
llsin:	cal	16,19712(21)
	cmpi	0,14,0
	blt	sin2
	cmpl	0,14,18
	bge	bangen1
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
sin2:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.sin
	bl	.sin
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
	.set	._llcos,2
	.globl	C.llcos
C.llcos:	mflr	0
	stu	0,-4(1)
	.globl	llcos
llcos:	cal	16,19744(21)
	cmpi	0,14,0
	blt	cos2
	cmpl	0,14,18
	bge	bangen1
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
cos2:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.cos
	bl	.cos
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
	.set	._llasin,2
	.globl	C.llasin
C.llasin:	mflr	0
	stu	0,-4(1)
	.globl	llasin
llasin:	cal	16,19776(21)
	cmpi	0,14,0
	blt	asin2
	cmpl	0,14,18
	bge	bangen1
	exts	3,14
	cmpi	0,3,1
	bgt	bangen1
	exts	3,14
	l	4,1932(13)
	exts	4,4
	cmp	0,3,4
	blt	bangen1
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
	b	asin3
asin2:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	l	3,1940(13)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	bgt	bangen1
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	l	3,1944(13)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	blt	bangen1
asin3:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.asin
	bl	.asin
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
	.set	._llacos,2
	.globl	C.llacos
C.llacos:	mflr	0
	stu	0,-4(1)
	.globl	llacos
llacos:	cal	16,19808(21)
	cmpi	0,14,0
	blt	acos2
	cmpl	0,14,18
	bge	bangen1
	exts	3,14
	cmpi	0,3,1
	bgt	bangen1
	exts	3,14
	l	4,1932(13)
	exts	4,4
	cmp	0,3,4
	blt	bangen1
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
	b	acos3
acos2:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	l	3,1940(13)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	bgt	bangen1
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	l	3,1944(13)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	blt	bangen1
acos3:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.acos
	bl	.acos
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
	.set	._llatan,2
	.globl	C.llatan
C.llatan:	mflr	0
	stu	0,-4(1)
	.globl	llatan
llatan:	cal	16,19840(21)
	cmpi	0,14,0
	blt	atan2
	cmpl	0,14,18
	bge	bangen1
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
atan2:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.atan
	bl	.atan
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
	.set	._llexp,2
	.globl	C.llexp
C.llexp:	mflr	0
	stu	0,-4(1)
	.globl	llexp
llexp:	cal	16,19872(21)
	cmpi	0,14,0
	blt	exp2
	cmpl	0,14,18
	bge	bangen1
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
exp2:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.exp
	bl	.exp
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
	.set	._lllog,2
	.globl	C.lllog
C.lllog:	mflr	0
	stu	0,-4(1)
	.globl	lllog
lllog:	cal	16,19904(21)
	cmpi	0,14,0
	blt	log2
	cmpl	0,14,18
	bge	bangen1
	exts	3,14
	cmpi	0,3,0
	ble	bangen1
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
	b	log3
log2:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	l	3,1936(13)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	ble	bangen1
log3:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.log
	bl	.log
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
	.set	._lllog10,2
	.globl	C.lllog10
C.lllog10:	mflr	0
	stu	0,-4(1)
	.globl	lllog10
lllog10:	cal	16,19936(21)
	cmpi	0,14,0
	blt	log102
	cmpl	0,14,18
	bge	bangen1
	exts	3,14
	cmpi	0,3,0
	ble	bangen1
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
	b	log103
log102:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	l	3,1936(13)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	ble	bangen1
log103:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.log10
	bl	.log10
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
	.set	._llpower,3
	.globl	C.llpower
C.llpower:	mflr	0
	stu	0,-4(1)
	.globl	llpower
llpower:	cal	16,19968(21)
	cmpi	0,14,0
	blt	power2
	cmpl	0,14,18
	bge	bangen2
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
power2:	cmpi	0,15,0
	blt	power3
	cmpl	0,15,18
	bge	bangen2
	exts	3,15
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
	oriu	15,3,0x8000
power3:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.llrt_power
	bl	.llrt_power
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
	.set	._llsqrt,2
	.globl	C.llsqrt
C.llsqrt:	mflr	0
	stu	0,-4(1)
	.globl	llsqrt
llsqrt:	cal	16,20000(21)
	cmpi	0,14,0
	blt	sqrt2
	cmpl	0,14,18
	bge	bangen1
	exts	3,14
	cmpi	0,3,0
	blt	bangen1
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
	b	sqrt3
sqrt2:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	l	3,1936(13)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	blt	bangen1
sqrt3:	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.sqrt
	bl	.sqrt
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
	.set	._llfixmax,1
	.globl	C.llfixmax
C.llfixmax:	mflr	0
	stu	0,-4(1)
	.globl	llfixmax
llfixmax:	lil	14,32767
	ai	4,14,0
	andil.	14,4,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llfixmin,1
	.globl	C.llfixmin
C.llfixmin:	mflr	0
	stu	0,-4(1)
	.globl	llfixmin
llfixmin:	xor	14,14,14
	oril	14,14,0x8001
	ai	4,14,0
	andil.	14,4,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llminus0,1
	.globl	C.llminus0
C.llminus0:	mflr	0
	stu	0,-4(1)
	.globl	llminus0
llminus0:	xor	14,14,14
	oril	14,14,0x8000
	ai	4,14,0
	andil.	14,4,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
