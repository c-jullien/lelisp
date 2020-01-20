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
	.globl	ini_snb
	.globl	fldiff
	.globl	C.ini_snb
C.ini_snb:	mflr	0
	stu	0,-4(1)
ini_snb:	lil	14,5
	cal	15,8630(13)
	l	16,2448(13)
	cal	17,164(13)
	lil	3,._scale
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8635(13)
	l	16,2436(13)
	cal	17,164(13)
	lil	3,._lognot
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8641(13)
	l	16,2432(13)
	cal	17,164(13)
	lil	3,._logand
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8647(13)
	l	16,2428(13)
	cal	17,164(13)
	lil	3,._logor
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8652(13)
	l	16,2424(13)
	cal	17,164(13)
	lil	3,._logxor
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,8881(13)
	l	16,2420(13)
	cal	17,164(13)
	lil	3,._logshift
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8666(13)
	l	16,2416(13)
	cal	17,164(13)
	lil	3,._dpn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,8669(13)
	l	16,2412(13)
	cal	17,164(13)
	lil	3,._mskfield
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,8679(13)
	l	16,2408(13)
	cal	17,164(13)
	lil	3,._ldbyte
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,12
	cal	15,8688(13)
	l	16,2400(13)
	cal	17,164(13)
	lil	3,._dpbyte
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,13
	cal	15,8700(13)
	l	16,2396(13)
	cal	17,164(13)
	lil	3,._dpfield
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,14
	cal	15,8713(13)
	l	16,2404(13)
	cal	17,164(13)
	lil	3,._ldbt
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8727(13)
	l	16,2516(13)
	cal	17,164(13)
	lil	3,._oddp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8731(13)
	l	16,2512(13)
	cal	17,164(13)
	lil	3,._evenp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8736(13)
	l	16,2440(13)
	cal	17,164(13)
	lil	3,._llrandom
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,8742(13)
	l	16,2444(13)
	cal	17,164(13)
	lil	3,._llsrandom
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8749(13)
	l	16,2288(13)
	cal	17,164(13)
	lil	3,._floatp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8755(13)
	l	16,2284(13)
	cal	17,164(13)
	lil	3,._fixp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8759(13)
	l	16,2280(13)
	cal	17,164(13)
	lil	3,._flplus
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,8763(13)
	l	16,2276(13)
	cal	17,164(13)
	lil	3,._fldiff
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8773(13)
	l	16,2276(13)
	cal	17,164(13)
	lil	3,._fldiff
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8779(13)
	l	16,2272(13)
	cal	17,164(13)
	lil	3,._fltimes
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8784(13)
	l	16,2268(13)
	cal	17,164(13)
	lil	3,._flquo
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8790(13)
	l	16,2476(13)
	cal	17,164(13)
	lil	3,._lladd1
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8794(13)
	l	16,2472(13)
	cal	17,164(13)
	lil	3,._llsub1
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8798(13)
	l	16,2468(13)
	cal	17,164(13)
	lil	3,._lladd
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8801(13)
	l	16,2464(13)
	cal	17,164(13)
	lil	3,._llsub
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8889(13)
	l	16,2460(13)
	cal	17,164(13)
	lil	3,._llmul
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8892(13)
	l	16,2456(13)
	cal	17,164(13)
	lil	3,._ll_div
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8895(13)
	l	16,2452(13)
	cal	17,164(13)
	lil	3,._llrem
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8813(13)
	l	16,2508(13)
	cal	17,164(13)
	lil	3,._lleqn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8816(13)
	l	16,2504(13)
	cal	17,164(13)
	lil	3,._llneqn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8820(13)
	l	16,2496(13)
	cal	17,164(13)
	lil	3,._llge
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8822(13)
	l	16,2500(13)
	cal	17,164(13)
	lil	3,._llgt
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8824(13)
	l	16,2488(13)
	cal	17,164(13)
	lil	3,._llle
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8826(13)
	l	16,2492(13)
	cal	17,164(13)
	lil	3,._lllt
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8828(13)
	l	16,2484(13)
	cal	17,164(13)
	lil	3,._llimin
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8832(13)
	l	16,2480(13)
	cal	17,164(13)
	lil	3,._llimax
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8898(13)
	l	16,2360(13)
	cal	17,164(13)
	lil	3,._llfadd
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8902(13)
	l	16,2356(13)
	cal	17,164(13)
	lil	3,._llfsub
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8906(13)
	l	16,2352(13)
	cal	17,164(13)
	lil	3,._llfmul
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8910(13)
	l	16,2348(13)
	cal	17,164(13)
	lil	3,._llfdiv
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8914(13)
	l	16,2392(13)
	cal	17,164(13)
	lil	3,._llfeqn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8918(13)
	l	16,2388(13)
	cal	17,164(13)
	lil	3,._llfneqn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8923(13)
	l	16,2380(13)
	cal	17,164(13)
	lil	3,._llfge
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8926(13)
	l	16,2384(13)
	cal	17,164(13)
	lil	3,._llfgt
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8929(13)
	l	16,2372(13)
	cal	17,164(13)
	lil	3,._llfle
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8932(13)
	l	16,2376(13)
	cal	17,164(13)
	lil	3,._llflt
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8873(13)
	l	16,2368(13)
	cal	17,164(13)
	lil	3,._llfmin
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8877(13)
	l	16,2364(13)
	cal	17,164(13)
	lil	3,._llfmax
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	cal	3,11744(21)
	st	3,1452(13)
	lil	14,8
	cal	15,8881(13)
	l	16,2344(13)
	cal	17,164(13)
	lil	3,._clllsht
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8889(13)
	l	16,2340(13)
	cal	17,164(13)
	lil	3,._cllmul
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8892(13)
	l	16,2336(13)
	cal	17,164(13)
	lil	3,._clldiv
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8895(13)
	l	16,2332(13)
	cal	17,164(13)
	lil	3,._cllrem
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8898(13)
	l	16,2328(13)
	cal	17,164(13)
	lil	3,._cllfadd
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8902(13)
	l	16,2324(13)
	cal	17,164(13)
	lil	3,._cllfsub
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8906(13)
	l	16,2320(13)
	cal	17,164(13)
	lil	3,._cllfmul
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8910(13)
	l	16,2316(13)
	cal	17,164(13)
	lil	3,._cllfdiv
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8914(13)
	l	16,2312(13)
	cal	17,164(13)
	lil	3,._cllfeqn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8918(13)
	l	16,2308(13)
	cal	17,164(13)
	lil	3,._cllfneqn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8923(13)
	l	16,2300(13)
	cal	17,164(13)
	lil	3,._cllfge
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8926(13)
	l	16,2304(13)
	cal	17,164(13)
	lil	3,._cllfgt
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8929(13)
	l	16,2292(13)
	cal	17,164(13)
	lil	3,._cllfle
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8932(13)
	l	16,2296(13)
	cal	17,164(13)
	lil	3,._cllflt
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	st	21,1452(13)
	lil	14,6
	cal	15,8935(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	3,0
	st	3,0(14)
	cal	3,19200(21)
	st	3,12(14)
	lil	14,3
	cal	15,8941(13)
	l	16,2264(13)
	cal	17,164(13)
	lil	3,._exadd
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8944(13)
	l	16,2260(13)
	cal	17,164(13)
	lil	3,._exincr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8948(13)
	l	16,2256(13)
	cal	17,164(13)
	lil	3,._exinv
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8951(13)
	l	16,2252(13)
	cal	17,164(13)
	lil	3,._exmul
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8954(13)
	l	16,2248(13)
	cal	17,164(13)
	lil	3,._exdiv
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8957(13)
	l	16,2244(13)
	cal	17,164(13)
	lil	3,._excomp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
nfalse:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rzero:	lil	14,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rone:	lil	14,1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
banfix3:	oril	15,16,0
banfix2:	oril	14,15,0
banfix1:	oril	15,17,0
	b	errnia
banflt2:	oril	14,15,0
banflt1:	oril	15,17,0
	b	errnfa
banmix2:	oril	14,15,0
banmix1:	oril	15,17,0
	b	errnna
ban0dv:	oril	15,17,0
	lil	14,0
	b	err0dv
banwna:	oril	14,16,0
	oril	15,17,0
	b	errwna
	.set	._oddp,2
	.globl	C.oddp
C.oddp:	mflr	0
	stu	0,-4(1)
	.globl	oddp
oddp:	cal	17,20512(21)
	cmpl	0,14,18
	bge	banfix1
	oril	15,14,0
	andil.	15,15,1
	cmpli	0,15,0
	beq	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._evenp,2
	.globl	C.evenp
C.evenp:	mflr	0
	stu	0,-4(1)
	.globl	evenp
evenp:	cal	17,20544(21)
	cmpl	0,14,18
	bge	banfix1
	oril	15,14,0
	andil.	15,15,1
	cmpli	0,15,0
	bne	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._lleqn,3
	.globl	C.lleqn
C.lleqn:	mflr	0
	stu	0,-4(1)
	.globl	lleqn
lleqn:	cal	17,21088(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	cmpl	0,14,15
	bne	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llneqn,3
	.globl	C.llneqn
C.llneqn:	mflr	0
	stu	0,-4(1)
	.globl	llneqn
llneqn:	cal	17,21120(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	cmpl	0,14,15
	beq	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llgt,3
	.globl	C.llgt
C.llgt:	mflr	0
	stu	0,-4(1)
	.globl	llgt
llgt:	cal	17,21184(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	exts	3,14
	exts	4,15
	cmp	0,3,4
	ble	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llge,3
	.globl	C.llge
C.llge:	mflr	0
	stu	0,-4(1)
	.globl	llge
llge:	cal	17,21152(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	exts	3,14
	exts	4,15
	cmp	0,3,4
	blt	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._lllt,3
	.globl	C.lllt
C.lllt:	mflr	0
	stu	0,-4(1)
	.globl	lllt
lllt:	cal	17,21248(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	exts	3,14
	exts	4,15
	cmp	0,3,4
	bge	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llle,3
	.globl	C.llle
C.llle:	mflr	0
	stu	0,-4(1)
	.globl	llle
llle:	cal	17,21216(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	exts	3,14
	exts	4,15
	cmp	0,3,4
	bgt	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llimin,3
	.globl	C.llimin
C.llimin:	mflr	0
	stu	0,-4(1)
	.globl	llimin
llimin:	cal	17,21280(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	exts	3,14
	exts	4,15
	cmp	0,3,4
	ble	lliminr
	oril	14,15,0
lliminr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llimax,3
	.globl	C.llimax
C.llimax:	mflr	0
	stu	0,-4(1)
	.globl	llimax
llimax:	cal	17,21312(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	exts	3,14
	exts	4,15
	cmp	0,3,4
	bgt	llimaxr
	oril	14,15,0
llimaxr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._lladd1,2
	.globl	C.lladd1
C.lladd1:	mflr	0
	stu	0,-4(1)
	.globl	lladd1
lladd1:	cal	17,20864(21)
	cmpl	0,14,18
	bge	banfix1
	exts	4,14
	ai	4,4,1
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	lla1ret
lla1ret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llsub1,2
	.globl	C.llsub1
C.llsub1:	mflr	0
	stu	0,-4(1)
	.globl	llsub1
llsub1:	cal	17,20896(21)
	cmpl	0,14,18
	bge	banfix1
	exts	4,14
	si	4,4,1
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	lls1ret
lls1ret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._lladd,3
	.globl	C.lladd
C.lladd:	mflr	0
	stu	0,-4(1)
	.globl	lladd
lladd:	cal	17,20928(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	exts	3,15
	exts	4,14
	a	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	lladdret
lladdret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llsub,3
	.globl	C.llsub
C.llsub:	mflr	0
	stu	0,-4(1)
	.globl	llsub
llsub:	cal	17,20960(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	exts	3,15
	exts	4,14
	sf	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	llsubret
llsubret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llmul,3
	.globl	C.llmul
C.llmul:	mflr	0
	stu	0,-4(1)
	.globl	llmul
llmul:	cal	17,20992(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	exts	3,15
	exts	4,14
	muls	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	llmulret
llmulret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._ll_div,3
	.globl	C.ll_div
C.ll_div:	mflr	0
	stu	0,-4(1)
	.globl	ll_div
ll_div:	cal	17,21024(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	cmpli	0,15,0
	beq	ban0dv
	exts	3,15
	exts	4,14
	divs	3,4,3
	andil.	14,3,0xFFFF
lldivret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llrem,3
	.globl	C.llrem
C.llrem:	mflr	0
	stu	0,-4(1)
	.globl	llrem
llrem:	cal	17,21056(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	cmpli	0,15,0
	beq	ban0dv
	exts	3,15
	exts	4,14
	divs	3,4,3
	mfmq	3
	andil.	14,3,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._scale,4
	.globl	C.scale
C.scale:	mflr	0
	stu	0,-4(1)
	.globl	scale
scale:	cal	17,20128(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	cmpl	0,16,18
	bge	banfix3
	cmpli	0,16,0
	beq	ban0dv
	lil	17,0
	exts	3,14
	cmpi	0,3,0
	bge	scale1
	exts	3,14
	neg	3,3
	andil.	14,3,0xFFFF
	ai	4,17,1
	andil.	17,4,0xFFFF
scale1:	exts	3,15
	cmpi	0,3,0
	bge	scale2
	exts	3,15
	neg	3,3
	andil.	15,3,0xFFFF
	ai	4,17,1
	andil.	17,4,0xFFFF
scale2:	exts	3,16
	cmpi	0,3,0
	bge	scale3
	exts	3,16
	neg	3,3
	andil.	16,3,0xFFFF
	ai	4,17,1
	andil.	17,4,0xFFFF
scale3:	muls	3,14,15
	lil	4,0
	a	3,3,4
	lil	4,0
	a	3,3,4
	sri	14,3,16
	andil.	15,3,0xFFFF
	sli	3,14,16
	or	3,3,15
	mtmq	3
	lil	0,0
	div	14,0,16
	mfmq	15
	cmpli	0,17,0
	beq	scale4
	cmpli	0,17,2
	beq	scale4
	exts	3,14
	neg	3,3
	andil.	14,3,0xFFFF
scale4:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llsrandom,5
	.globl	C.llsrandom
C.llsrandom:	mflr	0
	stu	0,-4(1)
	.globl	llsrandom
llsrandom:	oril	16,17,0
	cal	17,20608(21)
	cmpli	0,16,0
	beq	srand1
	cmpli	0,16,1
	beq	srand0
	b	banwna
srand0:	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	banfix1
	lil	3,31213
	exts	3,3
	exts	4,14
	divs	3,4,3
	mfmq	3
	andil.	14,3,0xFFFF
	st	14,1960(13)
srand1:	l	14,1960(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llrandom,3
	.globl	C.llrandom
C.llrandom:	mflr	0
	stu	0,-4(1)
	.globl	llrandom
llrandom:	cal	17,20576(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	cmpl	0,14,15
	beq	random1
	exts	3,14
	exts	4,15
	cmp	0,3,4
	blt	random2
	oril	16,14,0
	oril	14,15,0
	oril	15,16,0
random2:	sf	4,14,15
	andil.	15,4,0xFFFF
random3:	l	16,1960(13)
	lil	4,92
	muls	3,16,4
	lil	4,2731
	a	3,3,4
	lil	4,0
	a	3,3,4
	sri	16,3,16
	andil.	17,3,0xFFFF
	sli	3,16,16
	or	3,3,17
	mtmq	3
	lil	0,0
	lil	4,31213
	div	16,0,4
	mfmq	17
	st	17,1960(13)
	muls	3,17,15
	lil	4,0
	a	3,3,4
	lil	4,0
	a	3,3,4
	sri	16,3,16
	andil.	17,3,0xFFFF
	sli	3,16,16
	or	3,3,17
	mtmq	3
	lil	0,0
	lil	4,31213
	div	16,0,4
	mfmq	17
	exts	3,16
	exts	4,15
	cmp	0,3,4
	bgt	random3
	a	4,16,14
	andil.	14,4,0xFFFF
random1:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._lognot,2
	.globl	C.lognot
C.lognot:	mflr	0
	stu	0,-4(1)
	.globl	lognot
lognot:	cal	17,20160(21)
	cmpl	0,14,18
	bge	banfix1
	xoril	14,14,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._logand,3
	.globl	C.logand
C.logand:	mflr	0
	stu	0,-4(1)
	.globl	logand
logand:	cal	17,20192(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	and	14,15,14
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._logor,3
	.globl	C.logor
C.logor:	mflr	0
	stu	0,-4(1)
	.globl	logor
logor:	cal	17,20224(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	or	14,15,14
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._logxor,3
	.globl	C.logxor
C.logxor:	mflr	0
	stu	0,-4(1)
	.globl	logxor
logxor:	cal	17,20256(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	xor	14,15,14
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._logshift,3
	.globl	C.logshift
C.logshift:	mflr	0
	stu	0,-4(1)
	.globl	logshift
logshift:	cal	17,20288(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	andil.	3,15,31
	rlnm	14,14,3,16,31
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._dpn,2
	.globl	C.dpn
C.dpn:	mflr	0
	stu	0,-4(1)
	.globl	dpn
dpn:	cal	17,20320(21)
	cmpl	0,14,18
	bge	banfix1
	oril	15,14,0
	lil	14,1
	andil.	3,15,31
	rlnm	14,14,3,16,31
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._mskfield,4
	.globl	C.mskfield
C.mskfield:	mflr	0
	stu	0,-4(1)
	.globl	mskfield
mskfield:	cal	17,20352(21)
	b	mskf0
	.globl	C.mskf0
C.mskf0:	mflr	0
	stu	0,-4(1)
mskf0:	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	cmpl	0,16,18
	bge	banfix3
	lil	17,1
	andil.	3,16,31
	rlnm	17,17,3,16,31
	exts	4,17
	si	4,4,1
	andil.	17,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	mskf1
mskf1:	andil.	3,15,31
	rlnm	17,17,3,16,31
	and	14,17,14
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._ldbyte,4
	.globl	C.ldbyte
C.ldbyte:	mflr	0
	stu	0,-4(1)
	.globl	ldbyte
ldbyte:	cal	17,20384(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	cmpl	0,16,18
	bge	banfix3
	lil	17,1
	andil.	3,16,31
	rlnm	17,17,3,16,31
	exts	4,17
	si	4,4,1
	andil.	17,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	ldby1
ldby1:	exts	3,15
	neg	3,3
	andil.	15,3,0xFFFF
	andil.	3,15,31
	rlnm	14,14,3,16,31
	and	14,17,14
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._ldbt,4
	.globl	C.ldbt
C.ldbt:	mflr	0
	stu	0,-4(1)
	.globl	ldbt
ldbt:	cal	17,20480(21)
	cmpl	0,14,18
	bge	banfix1
	cmpl	0,15,18
	bge	banfix2
	cmpl	0,16,18
	bge	banfix3
	lil	17,1
	andil.	3,16,31
	rlnm	17,17,3,16,31
	exts	4,17
	si	4,4,1
	andil.	17,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	ldbt1
ldbt1:	exts	3,15
	neg	3,3
	andil.	15,3,0xFFFF
	andil.	3,15,31
	rlnm	14,14,3,16,31
	and	14,17,14
	cmpli	0,14,0
	beq	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._dpbyte,5
	.globl	C.dpbyte
C.dpbyte:	mflr	0
	stu	0,-4(1)
	.globl	dpbyte
dpbyte:	oril	16,17,0
	cal	17,20416(21)
	b	dpfi0
	.set	._dpfield,5
	.globl	C.dpfield
C.dpfield:	mflr	0
	stu	0,-4(1)
	.globl	dpfield
dpfield:	oril	16,17,0
	cal	17,20448(21)
dpfi0:	cmpli	0,16,4
	bne	banwna
	l	14,12(1)
	cmpl	0,14,18
	bge	banfix1
	l	14,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	cal	4,20448(21)
	cmpl	0,17,4
	beq	dpfi1
	andil.	3,15,31
	rlnm	14,14,3,16,31
dpfi1:	.globl	C.mskf0
	bl	C.mskf0
	l	15,0(1)
	ai	1,1,4
	xoril	17,17,0xFFFF
	and	15,17,15
	or	14,15,14
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llfeqn,3
	.globl	C.llfeqn
C.llfeqn:	mflr	0
	stu	0,-4(1)
	.globl	llfeqn
llfeqn:	cal	17,21472(21)
	cmpi	0,14,0
	bge	banflt1
	cmpi	0,15,0
	bge	banflt2
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	bne	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llfneqn,3
	.globl	C.llfneqn
C.llfneqn:	mflr	0
	stu	0,-4(1)
	.globl	llfneqn
llfneqn:	cal	17,21504(21)
	cmpi	0,14,0
	bge	banflt1
	cmpi	0,15,0
	bge	banflt2
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	beq	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llfgt,3
	.globl	C.llfgt
C.llfgt:	mflr	0
	stu	0,-4(1)
	.globl	llfgt
llfgt:	cal	17,21568(21)
	cmpi	0,14,0
	bge	banflt1
	cmpi	0,15,0
	bge	banflt2
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	ble	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llfge,3
	.globl	C.llfge
C.llfge:	mflr	0
	stu	0,-4(1)
	.globl	llfge
llfge:	cal	17,21536(21)
	cmpi	0,14,0
	bge	banflt1
	cmpi	0,15,0
	bge	banflt2
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	blt	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llflt,3
	.globl	C.llflt
C.llflt:	mflr	0
	stu	0,-4(1)
	.globl	llflt
llflt:	cal	17,21632(21)
	cmpi	0,14,0
	bge	banflt1
	cmpi	0,15,0
	bge	banflt2
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	bge	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llfle,3
	.globl	C.llfle
C.llfle:	mflr	0
	stu	0,-4(1)
	.globl	llfle
llfle:	cal	17,21600(21)
	cmpi	0,14,0
	bge	banflt1
	cmpi	0,15,0
	bge	banflt2
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	bgt	nfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llfmin,3
	.globl	C.llfmin
C.llfmin:	mflr	0
	stu	0,-4(1)
	.globl	llfmin
llfmin:	cal	17,21664(21)
	cmpi	0,14,0
	bge	banflt1
	cmpi	0,15,0
	bge	banflt2
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	ble	llfminr
	oril	14,15,0
llfminr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llfmax,3
	.globl	C.llfmax
C.llfmax:	mflr	0
	stu	0,-4(1)
	.globl	llfmax
llfmax:	cal	17,21696(21)
	cmpi	0,14,0
	bge	banflt1
	cmpi	0,15,0
	bge	banflt2
	a	3,14,14
	st	3,0(13)
	lfs	1,0(13)
	a	3,15,15
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	bgt	llfmaxr
	oril	14,15,0
llfmaxr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llfadd,3
	.globl	C.llfadd
C.llfadd:	mflr	0
	stu	0,-4(1)
	.globl	llfadd
llfadd:	cal	17,21344(21)
	cmpi	0,14,0
	bge	banflt1
	cmpi	0,15,0
	bge	banflt2
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
	.set	._llfsub,3
	.globl	C.llfsub
C.llfsub:	mflr	0
	stu	0,-4(1)
	.globl	llfsub
llfsub:	cal	17,21376(21)
	cmpi	0,14,0
	bge	banflt1
	cmpi	0,15,0
	bge	banflt2
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
	.set	._llfmul,3
	.globl	C.llfmul
C.llfmul:	mflr	0
	stu	0,-4(1)
	.globl	llfmul
llfmul:	cal	17,21408(21)
	cmpi	0,14,0
	bge	banflt1
	cmpi	0,15,0
	bge	banflt2
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
	.set	._llfdiv,3
	.globl	C.llfdiv
C.llfdiv:	mflr	0
	stu	0,-4(1)
	.globl	llfdiv
llfdiv:	cal	17,21440(21)
	cmpi	0,14,0
	bge	banflt1
	cmpi	0,15,0
	bge	banflt2
	a	3,15,15
	st	3,0(13)
	lfs	1,0(13)
	l	3,1936(13)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	beq	ban0dv
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
	.set	._clllsht,1
	.globl	C.clllsht
C.clllsht:	mflr	0
	stu	0,-4(1)
	.globl	clllsht
clllsht:	l	3,0(1)
	andil.	3,3,31
	l	4,8(1)
	rlnm	4,4,3,16,31
	st	4,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cllmul,1
	.globl	C.cllmul
C.cllmul:	mflr	0
	stu	0,-4(1)
	.globl	cllmul
cllmul:	l	3,0(1)
	exts	3,3
	l	4,8(1)
	exts	4,4
	muls	4,3,4
	andil.	3,4,0xFFFF
	st	3,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._clldiv,1
	.globl	C.clldiv
C.clldiv:	mflr	0
	stu	0,-4(1)
	.globl	clldiv
clldiv:	l	3,0(1)
	exts	3,3
	l	4,8(1)
	exts	4,4
	divs	3,4,3
	andil.	3,3,0xFFFF
	st	3,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cllrem,1
	.globl	C.cllrem
C.cllrem:	mflr	0
	stu	0,-4(1)
	.globl	cllrem
cllrem:	l	3,0(1)
	exts	3,3
	l	4,8(1)
	exts	4,4
	divs	3,4,3
	mfmq	3
	andil.	3,3,0xFFFF
	st	3,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cllfadd,1
	.globl	C.cllfadd
C.cllfadd:	mflr	0
	stu	0,-4(1)
	.globl	cllfadd
cllfadd:	l	3,0(1)
	a	3,3,3
	st	3,0(13)
	lfs	1,0(13)
	l	3,8(1)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fa	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	3,3,0x8000
	st	3,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cllfsub,1
	.globl	C.cllfsub
C.cllfsub:	mflr	0
	stu	0,-4(1)
	.globl	cllfsub
cllfsub:	l	3,0(1)
	a	3,3,3
	st	3,0(13)
	lfs	1,0(13)
	l	3,8(1)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fs	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	3,3,0x8000
	st	3,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cllfmul,1
	.globl	C.cllfmul
C.cllfmul:	mflr	0
	stu	0,-4(1)
	.globl	cllfmul
cllfmul:	l	3,0(1)
	a	3,3,3
	st	3,0(13)
	lfs	1,0(13)
	l	3,8(1)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fm	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	3,3,0x8000
	st	3,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cllfdiv,1
	.globl	C.cllfdiv
C.cllfdiv:	mflr	0
	stu	0,-4(1)
	.globl	cllfdiv
cllfdiv:	l	3,0(1)
	a	3,3,3
	st	3,0(13)
	lfs	1,0(13)
	l	3,8(1)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fd	1,2,1
	frsp	1,1
	stfs	1,0(13)
	l	3,0(13)
	rlinm	3,3,31,1,31
	oriu	3,3,0x8000
	st	3,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
cllret1:	lil	3,1
	st	3,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cllfeqn,1
	.globl	C.cllfeqn
C.cllfeqn:	mflr	0
	stu	0,-4(1)
	.globl	cllfeqn
cllfeqn:	l	3,0(1)
	a	3,3,3
	st	3,0(13)
	lfs	1,0(13)
	l	3,8(1)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	beq	cllret1
	lil	3,0
	st	3,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cllfneqn,1
	.globl	C.cllfneqn
C.cllfneqn:	mflr	0
	stu	0,-4(1)
	.globl	cllfneqn
cllfneqn:	l	3,0(1)
	a	3,3,3
	st	3,0(13)
	lfs	1,0(13)
	l	3,8(1)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	bne	cllret1
	lil	3,0
	st	3,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cllfgt,1
	.globl	C.cllfgt
C.cllfgt:	mflr	0
	stu	0,-4(1)
	.globl	cllfgt
cllfgt:	l	3,0(1)
	a	3,3,3
	st	3,0(13)
	lfs	1,0(13)
	l	3,8(1)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	bgt	cllret1
	lil	3,0
	st	3,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cllfge,1
	.globl	C.cllfge
C.cllfge:	mflr	0
	stu	0,-4(1)
	.globl	cllfge
cllfge:	l	3,0(1)
	a	3,3,3
	st	3,0(13)
	lfs	1,0(13)
	l	3,8(1)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	bge	cllret1
	lil	3,0
	st	3,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cllflt,1
	.globl	C.cllflt
C.cllflt:	mflr	0
	stu	0,-4(1)
	.globl	cllflt
cllflt:	l	3,0(1)
	a	3,3,3
	st	3,0(13)
	lfs	1,0(13)
	l	3,8(1)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	blt	cllret1
	lil	3,0
	st	3,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cllfle,1
	.globl	C.cllfle
C.cllfle:	mflr	0
	stu	0,-4(1)
	.globl	cllfle
cllfle:	l	3,0(1)
	a	3,3,3
	st	3,0(13)
	lfs	1,0(13)
	l	3,8(1)
	a	3,3,3
	st	3,0(13)
	lfs	2,0(13)
	fcmpu	0,1,2
	ble	cllret1
	lil	3,0
	st	3,8(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._floatp,2
	.globl	C.floatp
C.floatp:	mflr	0
	stu	0,-4(1)
	.globl	floatp
floatp:	cmpi	0,14,0
	blt	floatp2
	oril	14,21,0
floatp2:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._fixp,2
	.globl	C.fixp
C.fixp:	mflr	0
	stu	0,-4(1)
	.globl	fixp
fixp:	cmpl	0,14,18
	blt	fixp2
	oril	14,21,0
fixp2:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._flplus,5
	.globl	C.flplus
C.flplus:	mflr	0
	stu	0,-4(1)
	.globl	flplus
flplus:	lil	14,0
	b	fplus2
fplus1:	l	15,0(1)
	ai	1,1,4
	cmpi	0,15,0
	blt	fplus5
	cmpl	0,15,18
	bge	fpluser1
	oril	16,14,0
	exts	3,15
	exts	4,14
	a	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	fplus4
fplus2:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	fplus1
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fplus4:	oril	14,16,0
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
	b	fplus7
fplus5:	exts	3,14
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
	b	fplus8
fplus6:	l	15,0(1)
	ai	1,1,4
fplus7:	cmpi	0,15,0
	blt	fplus8
	cmpl	0,15,18
	bge	fpluser1
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
fplus8:	a	3,15,15
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
	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	fplus6
	lil	17,0
fplus9:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fpluser1:	oril	14,15,0
fpluser2:	cal	15,20704(21)
	b	errnna
	.set	._fldiff,5
	.globl	C.fldiff
C.fldiff:	mflr	0
	stu	0,-4(1)
	.globl	fldiff
fldiff:	cmpli	0,17,0
	beq	rzero
	cmpli	0,17,1
	bne	fdif1
	lil	14,0
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	stu	14,-4(1)
	ai	4,17,1
	andil.	17,4,0xFFFF
fdif1:	lil	15,0
	b	fdif3
fdif2:	l	14,0(1)
	ai	1,1,4
	cmpi	0,14,0
	blt	fdif5
	cmpl	0,14,18
	bge	fdiferr2
	oril	16,15,0
	exts	3,14
	exts	4,15
	a	4,3,4
	andil.	15,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	fdif4
fdif3:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	fdif2
	lil	17,0
	l	14,0(1)
	ai	1,1,4
	cmpi	0,14,0
	blt	fdif10
	cmpl	0,14,18
	bge	fdiferr2
	oril	16,14,0
	exts	3,15
	exts	4,14
	sf	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	fdif91
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fdif4:	oril	15,16,0
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
fdif5:	exts	3,15
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
	b	fdif7
fdif6:	l	14,0(1)
	ai	1,1,4
	cmpi	0,14,0
	blt	fdif7
	cmpl	0,14,18
	bge	fdiferr2
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
fdif7:	a	3,14,14
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
fdif8:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	fdif6
	lil	17,0
	l	14,0(1)
	ai	1,1,4
	cmpi	0,14,0
	blt	fdif9
	cmpl	0,14,18
	bge	fdiferr2
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
fdif9:	a	3,15,15
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
fdif91:	oril	14,16,0
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
fdif10:	exts	3,15
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
	b	fdif9
fdiferr1:	oril	14,15,0
fdiferr2:	cal	15,20768(21)
	b	errnna
	.set	._fltimes,5
	.globl	C.fltimes
C.fltimes:	mflr	0
	stu	0,-4(1)
	.globl	fltimes
fltimes:	lil	14,1
	b	ftime2
ftime1:	l	15,0(1)
	ai	1,1,4
	cmpi	0,15,0
	blt	ftime5
	cmpl	0,15,18
	bge	ftimerr1
	oril	16,14,0
	exts	3,15
	exts	4,14
	muls	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	ftime4
ftime2:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	ftime1
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ftime4:	oril	14,16,0
ftime5:	exts	3,14
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
	b	ftime7
ftime6:	l	15,0(1)
	ai	1,1,4
ftime7:	cmpi	0,15,0
	blt	ftime8
	cmpl	0,15,18
	bge	ftimerr1
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
ftime8:	a	3,15,15
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
	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	ftime6
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ftimerr1:	oril	14,15,0
ftimerr2:	cal	15,20800(21)
	b	errnna
	.set	._flquo,3
	.globl	C.flquo
C.flquo:	mflr	0
	stu	0,-4(1)
	.globl	flquo
flquo:	cal	17,20832(21)
	cmpi	0,14,0
	blt	fquo2
	cmpi	0,15,0
	blt	fquo3
	cmpl	0,14,18
	bge	banmix1
	cmpl	0,15,18
	bge	banmix2
	cmpli	0,15,0
	beq	fquoovf
	oril	16,14,0
	exts	3,15
	exts	4,14
	divs	3,4,3
	mfmq	3
	andil.	14,3,0xFFFF
	cmpli	0,14,0
	bne	fquo1
	oril	14,16,0
	exts	3,15
	exts	4,14
	divs	3,4,3
	andil.	14,3,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fquo1:	oril	14,16,0
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
	b	fquo3
fquo2:	cmpi	0,15,0
	blt	fquo4
	cmpl	0,15,18
	bge	banmix2
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
	b	fquo4
fquo3:	cmpl	0,14,18
	bge	banmix1
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
fquo4:	a	3,15,15
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
fquoovf:	lil	14,0
	cal	15,20832(21)
	b	err0dv
	.set	._exadd,3
	.globl	C.exadd
C.exadd:	mflr	0
	stu	0,-4(1)
	.globl	exadd
exadd:	cal	16,22176(21)
	a	3,14,15
	l	4,0(16)
	a	3,3,4
	sri	5,3,16
	st	5,0(16)
	andil.	14,3,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._exincr,2
	.globl	C.exincr
C.exincr:	mflr	0
	stu	0,-4(1)
	.globl	exincr
exincr:	cal	15,22176(21)
	lil	4,1
	a	3,14,4
	l	4,0(15)
	a	3,3,4
	sri	5,3,16
	st	5,0(15)
	andil.	14,3,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._exinv,2
	.globl	C.exinv
C.exinv:	mflr	0
	stu	0,-4(1)
	.globl	exinv
exinv:	exts	3,14
	neg	3,3
	andil.	14,3,0xFFFF
	exts	4,14
	si	4,4,1
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	exinvret
exinvret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._exmul,4
	.globl	C.exmul
C.exmul:	mflr	0
	stu	0,-4(1)
	.globl	exmul
exmul:	cal	17,22176(21)
	muls	3,14,15
	a	3,3,16
	l	4,0(17)
	a	3,3,4
	sri	5,3,16
	st	5,0(17)
	andil.	14,3,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._exdiv,3
	.globl	C.exdiv
C.exdiv:	mflr	0
	stu	0,-4(1)
	.globl	exdiv
exdiv:	cal	16,22176(21)
	l	3,0(16)
	sli	3,3,16
	or	3,3,14
	mtmq	3
	lil	0,0
	div	14,0,15
	mfmq	0
	st	0,0(16)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._excomp,3
	.globl	C.excomp
C.excomp:	mflr	0
	stu	0,-4(1)
	.globl	excomp
excomp:	cmpl	0,14,15
	blt	excomp1
	beq	excomp2
	b	excomp3
excomp1:	xor	14,14,14
	oril	14,14,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
excomp2:	lil	14,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
excomp3:	lil	14,1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
