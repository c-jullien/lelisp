	.csect	lelisp_txt[PR]
	.globl	errfs
	.globl	errsym
	.globl	errnia
	.globl	errnla
	.globl	errnva
	.globl	errwna
	.globl	errudf
	.globl	errudv
	.globl	erroob
	.globl	errilb
	.globl	errbpa
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	inisymb
	.globl	inicst
	.globl	istdsym
	.globl	evalcar
	.globl	evala1
	.globl	apply
	.globl	gaeqn
	.globl	stringa2
	.globl	strgallc
	.globl	makevect
	.globl	eqstrgi
	.globl	eqvectri
	.globl	ffindex
	.globl	loc
	.globl	vag
	.globl	ini_std
	.globl	member
	.globl	memq
	.globl	list
	.globl	equal
	.globl	nreverse
	.globl	deset
	.globl	lllength
	.globl	displace
	.globl	evlis
	.globl	nreconc
	.globl	kwote
	.globl	copy
	.globl	C.ini_std
C.ini_std:	mflr	0
	stu	0,-4(1)
ini_std:	lil	14,4
	cal	15,7983(13)
	l	16,3024(13)
	cal	17,164(13)
	lil	3,._true
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7987(13)
	l	16,3020(13)
	cal	17,164(13)
	lil	3,._false
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,7992(13)
	l	16,3012(13)
	cal	17,164(13)
	lil	3,._llnot
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7995(13)
	l	16,3016(13)
	cal	17,164(13)
	lil	3,._llnull
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7999(13)
	l	16,3008(13)
	cal	17,164(13)
	lil	3,._atom
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8003(13)
	l	16,3004(13)
	cal	17,164(13)
	lil	3,._atomp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,8008(13)
	l	16,3000(13)
	cal	17,164(13)
	lil	3,._symbolp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,8015(13)
	l	16,2996(13)
	cal	17,164(13)
	lil	3,._variablep
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,8024(13)
	l	16,2992(13)
	cal	17,164(13)
	lil	3,._constantp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,8033(13)
	l	16,2988(13)
	cal	17,164(13)
	lil	3,._vectorp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,8040(13)
	l	16,2984(13)
	cal	17,164(13)
	lil	3,._stringp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8047(13)
	l	16,2980(13)
	cal	17,164(13)
	lil	3,._listp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8052(13)
	l	16,2976(13)
	cal	17,164(13)
	lil	3,._nlistp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8058(13)
	l	16,2972(13)
	cal	17,164(13)
	lil	3,._consp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8063(13)
	l	16,2968(13)
	cal	17,164(13)
	lil	3,._boundp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,8069(13)
	l	16,2964(13)
	cal	17,164(13)
	lil	3,._lleq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8071(13)
	l	16,2960(13)
	cal	17,164(13)
	lil	3,._neq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8074(13)
	l	16,2952(13)
	cal	17,164(13)
	lil	3,._equal
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8079(13)
	l	16,2956(13)
	cal	17,164(13)
	lil	3,._nequal
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8085(13)
	l	16,2944(13)
	cal	17,164(13)
	lil	3,._memq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8089(13)
	l	16,2940(13)
	cal	17,164(13)
	lil	3,._member
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8095(13)
	l	16,2936(13)
	cal	17,164(13)
	lil	3,._tailp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8100(13)
	l	16,2932(13)
	cal	17,164(13)
	lil	3,._last
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8104(13)
	l	16,2924(13)
	cal	17,164(13)
	lil	3,._nthcdr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8110(13)
	l	16,2928(13)
	cal	17,164(13)
	lil	3,._nth
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8113(13)
	l	16,2920(13)
	cal	17,164(13)
	lil	3,._lllength
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8119(13)
	l	16,2916(13)
	cal	17,164(13)
	lil	3,._llcons
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8123(13)
	l	16,2912(13)
	cal	17,164(13)
	lil	3,._fxcons
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8128(13)
	l	16,2908(13)
	cal	17,164(13)
	lil	3,._fncons
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8133(13)
	l	16,2904(13)
	cal	17,164(13)
	lil	3,._mcons
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8138(13)
	l	16,2900(13)
	cal	17,164(13)
	lil	3,._list
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8142(13)
	l	16,2896(13)
	cal	17,164(13)
	lil	3,._evlis
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8147(13)
	l	16,2892(13)
	cal	17,164(13)
	lil	3,._kwote
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,8152(13)
	l	16,2888(13)
	cal	17,164(13)
	lil	3,._makelist
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,8160(13)
	l	16,2884(13)
	cal	17,164(13)
	lil	3,._reverse
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8167(13)
	l	16,2876(13)
	cal	17,164(13)
	lil	3,._append
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,8173(13)
	l	16,2880(13)
	cal	17,164(13)
	lil	3,._appnd1
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8180(13)
	l	16,2872(13)
	cal	17,164(13)
	lil	3,._remq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8184(13)
	l	16,2868(13)
	cal	17,164(13)
	lil	3,._llremove
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8190(13)
	l	16,2860(13)
	cal	17,164(13)
	lil	3,._copy
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,8194(13)
	l	16,2864(13)
	cal	17,164(13)
	lil	3,._copylist
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8202(13)
	l	16,2856(13)
	cal	17,164(13)
	lil	3,._firstn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8208(13)
	l	16,2852(13)
	cal	17,164(13)
	lil	3,._lastn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8213(13)
	l	16,2848(13)
	cal	17,164(13)
	lil	3,._subst
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8218(13)
	l	16,2844(13)
	cal	17,164(13)
	lil	3,._oblist
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,8224(13)
	l	16,2840(13)
	cal	17,164(13)
	lil	3,._boblist
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,8231(13)
	l	16,2836(13)
	cal	17,164(13)
	lil	3,._lhoblist
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8239(13)
	l	16,2828(13)
	cal	17,164(13)
	lil	3,._rplaca
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8245(13)
	l	16,2824(13)
	cal	17,164(13)
	lil	3,._rplacd
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8251(13)
	l	16,2820(13)
	cal	17,164(13)
	lil	3,._rplac
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8256(13)
	l	16,2812(13)
	cal	17,164(13)
	lil	3,._placdl
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,8262(13)
	l	16,2816(13)
	cal	17,164(13)
	lil	3,._displace
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8270(13)
	l	16,2808(13)
	cal	17,164(13)
	lil	3,._setq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,8274(13)
	l	16,2804(13)
	cal	17,164(13)
	lil	3,._fset
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8277(13)
	l	16,2800(13)
	cal	17,164(13)
	lil	3,._setqq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8282(13)
	l	16,2796(13)
	cal	17,164(13)
	lil	3,._psetq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8287(13)
	l	16,2792(13)
	cal	17,164(13)
	lil	3,._deset
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8292(13)
	l	16,2788(13)
	cal	17,164(13)
	lil	3,._desetq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,8298(13)
	l	16,2784(13)
	cal	17,164(13)
	lil	3,._cirlist
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,8305(13)
	l	16,2764(13)
	cal	17,164(13)
	lil	3,._nreverse
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8313(13)
	l	16,2776(13)
	cal	17,164(13)
	lil	3,._nsubst
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8319(13)
	l	16,2772(13)
	cal	17,164(13)
	lil	3,._delq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8323(13)
	l	16,2768(13)
	cal	17,164(13)
	lil	3,._lldelete
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,8329(13)
	l	16,2780(13)
	cal	17,164(13)
	lil	3,._nreconc
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8336(13)
	l	16,2760(13)
	cal	17,164(13)
	lil	3,._nextl
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8341(13)
	l	16,2756(13)
	cal	17,164(13)
	lil	3,._newl
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8345(13)
	l	16,2752(13)
	cal	17,164(13)
	lil	3,._newr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8349(13)
	l	16,2744(13)
	cal	17,164(13)
	lil	3,._nconc
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8354(13)
	l	16,2748(13)
	cal	17,164(13)
	lil	3,._nconc1
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8360(13)
	l	16,2740(13)
	cal	17,164(13)
	lil	3,._acons
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,8365(13)
	l	16,2736(13)
	cal	17,164(13)
	lil	3,._pairlis
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8372(13)
	l	16,2732(13)
	cal	17,164(13)
	lil	3,._assq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8376(13)
	l	16,2728(13)
	cal	17,164(13)
	lil	3,._assoc
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8381(13)
	l	16,2724(13)
	cal	17,164(13)
	lil	3,._cassq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8386(13)
	l	16,2720(13)
	cal	17,164(13)
	lil	3,._cassoc
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,8392(13)
	l	16,2716(13)
	cal	17,164(13)
	lil	3,._rassq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8397(13)
	l	16,2712(13)
	cal	17,164(13)
	lil	3,._rassoc
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,8403(13)
	l	16,2708(13)
	cal	17,164(13)
	lil	3,._sublis
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fntret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._true,5
	.globl	C.true
C.true:	mflr	0
	stu	0,-4(1)
	.globl	true
true:	exts	3,17
	sli	3,3,2
	a	1,1,3
	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._false,5
	.globl	C.false
C.false:	mflr	0
	stu	0,-4(1)
	.globl	false
false:	exts	3,17
	sli	3,3,2
	a	1,1,3
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llnull,2
	.globl	C.llnull
C.llnull:	mflr	0
	stu	0,-4(1)
	.globl	llnull
llnull:	cmpl	0,14,21
	beq	llnullt
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
llnullt:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llnot,2
	.globl	C.llnot
C.llnot:	mflr	0
	stu	0,-4(1)
	.globl	llnot
llnot:	cmpl	0,14,21
	beq	llnott
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
llnott:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._atom,2
	.globl	C.atom
C.atom:	mflr	0
	stu	0,-4(1)
	.globl	atom
atom:	cmp	0,14,22
	blt	atomt
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
atomt:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._atomp,2
	.globl	C.atomp
C.atomp:	mflr	0
	stu	0,-4(1)
	.globl	atomp
atomp:	cmp	0,14,22
	blt	atompt
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
atompt:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._symbolp,2
	.globl	C.symbolp
C.symbolp:	mflr	0
	stu	0,-4(1)
	.globl	symbolp
symbolp:	cmpl	0,14,21
	blt	.fnt.1
	cmpl	0,14,22
	blt	symbolpt
.fnt.1:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
symbolpt:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._variablep,2
	.globl	C.variablep
C.variablep:	mflr	0
	stu	0,-4(1)
	.globl	variablep
variablep:	cmpl	0,14,23
	blt	.fnt.2
	cmpl	0,14,22
	blt	varpret
.fnt.2:	oril	14,21,0
varpret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._constantp,2
	.globl	C.constantp
C.constantp:	mflr	0
	stu	0,-4(1)
	.globl	constantp
constantp:	cmpl	0,14,18
	blt	conpt
	cmpl	0,14,18
	blt	.fnt.3
	cmpl	0,14,19
	blt	conpt
.fnt.3:	cmpl	0,14,20
	blt	.fnt.4
	cmpl	0,14,21
	blt	conpt
.fnt.4:	cmpl	0,14,19
	blt	.fnt.5
	cmpl	0,14,20
	blt	conpt
.fnt.5:	cmp	0,14,22
	bge	conpret
	cmpl	0,14,23
	blt	conpt
	cmpl	0,14,22
	bge	conpt
conpret:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
conpt:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._vectorp,2
	.globl	C.vectorp
C.vectorp:	mflr	0
	stu	0,-4(1)
	.globl	vectorp
vectorp:	cmpl	0,14,19
	blt	.fnt.6
	cmpl	0,14,20
	blt	vectret
.fnt.6:	oril	14,21,0
vectret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._stringp,2
	.globl	C.stringp
C.stringp:	mflr	0
	stu	0,-4(1)
	.globl	stringp
stringp:	cmpl	0,14,20
	blt	.fnt.7
	cmpl	0,14,21
	blt	strgret
.fnt.7:	oril	14,21,0
strgret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._listp,2
	.globl	C.listp
C.listp:	mflr	0
	stu	0,-4(1)
	.globl	listp
listp:	cmpl	0,14,21
	beq	listpt
	cmp	0,14,22
	bge	listpt
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
listpt:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._nlistp,2
	.globl	C.nlistp
C.nlistp:	mflr	0
	stu	0,-4(1)
	.globl	nlistp
nlistp:	cmp	0,14,22
	blt	nlistpr
	oril	14,21,0
nlistpr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._consp,2
	.globl	C.consp
C.consp:	mflr	0
	stu	0,-4(1)
	.globl	consp
consp:	cmp	0,14,22
	bge	conspr
	oril	14,21,0
conspr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._boundp,2
	.globl	C.boundp
C.boundp:	mflr	0
	stu	0,-4(1)
	.globl	boundp
boundp:	cmpl	0,14,21
	blt	boundp1
	cmpl	0,14,22
	bge	boundp1
	l	15,0(14)
	cal	4,32(21)
	cmpl	0,15,4
	bne	boundpt
boundp1:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
boundpt:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._lleq,3
	.globl	C.lleq
C.lleq:	mflr	0
	stu	0,-4(1)
	.globl	lleq
lleq:	cmpl	0,14,15
	beq	lleqt
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
lleqt:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._neq,3
	.globl	C.neq
C.neq:	mflr	0
	stu	0,-4(1)
	.globl	neq
neq:	cmpl	0,14,15
	bne	neqt
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
neqt:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._nequal,3
	.globl	C.nequal
C.nequal:	mflr	0
	stu	0,-4(1)
	.globl	nequal
nequal:	l	3,3012(13)
	stu	3,-4(1)
	b	equal
	cror	15,15,15
	.set	._equal,3
	b	equal
	.globl	C.equal
C.equal:	mflr	0
	stu	0,-4(1)
	.globl	equal
equal:	oril	16,1,0
	.globl	C.equal2
	bl	C.equal2
	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
equaln:	oril	1,16,0
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	equalnt
equalnt:	l	16,0(1)
	ai	1,1,4
	cmpl	0,14,21
	bne	equalntr
	oril	1,16,0
equalntr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
equal1:	cmp	0,15,22
	blt	equaln
	l	3,4(14)
	stu	3,-4(1)
	l	14,0(14)
	l	3,4(15)
	stu	3,-4(1)
	l	15,0(15)
	l	3,1216(13)
	cmpli	0,3,0
	beq	.fnt.8
	.globl	C.ithard
	bl	C.ithard
.fnt.8:	cmpl	0,14,15
	bne	equal11
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	cmp	0,14,22
	bge	equal1
	b	equal2
equal11:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fnt.9
	b	errfs
.fnt.9:	.globl	C.equal2
	bl	C.equal2
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	b	equal2
	.globl	C.equal2
C.equal2:	mflr	0
	stu	0,-4(1)
equal2:	cmpl	0,14,15
	bne	equal3
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
equal3:	cmp	0,14,22
	bge	equal1
	cmpl	0,14,21
	blt	.fnt.10
	cmpl	0,14,22
	blt	equaln
.fnt.10:	cmpl	0,14,19
	blt	.fnt.11
	cmpl	0,14,20
	blt	equal7
.fnt.11:	cmpl	0,14,20
	blt	.fnt.12
	cmpl	0,14,21
	blt	equal8
.fnt.12:	cmpl	0,15,18
	bge	equal4
	cmpl	0,14,18
	blt	equaln
	b	equal5
equal4:	cmpl	0,15,18
	blt	equaln
	cmpl	0,15,19
	bge	equaln
equal5:	stu	16,-4(1)
	l	3,2948(13)
	stu	3,-4(1)
	b	gaeqn
equal7:	cmpl	0,15,19
	blt	equaln
	cmpl	0,15,20
	bge	equaln
	stu	16,-4(1)
	l	3,2948(13)
	stu	3,-4(1)
	b	eqvectri
equal8:	cmpl	0,15,20
	blt	equaln
	cmpl	0,15,21
	bge	equaln
	stu	16,-4(1)
	l	3,2948(13)
	stu	3,-4(1)
	b	eqstrgi
	.globl	C.savequal
C.savequal:	mflr	0
	stu	0,-4(1)
savequal:	stu	15,-4(1)
	stu	16,-4(1)
	.globl	C.equal
	bl	C.equal
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._memq,3
	.globl	C.memq
C.memq:	mflr	0
	stu	0,-4(1)
	.globl	memq
memq:	cmp	0,15,22
	blt	memq2
memq1:	l	16,0(15)
	cmpl	0,16,14
	beq	memq3
	l	15,4(15)
	cmp	0,15,22
	bge	memq1
memq2:	oril	15,21,0
memq3:	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._member,3
	.globl	C.member
C.member:	mflr	0
	stu	0,-4(1)
	.globl	member
member:	cmp	0,15,22
	bge	memb1
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
memb1:	stu	15,-4(1)
	stu	14,-4(1)
	l	15,0(15)
	.globl	C.equal
	bl	C.equal
	cmpl	0,14,21
	bne	memb3
	l	14,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	15,4(15)
	cmp	0,15,22
	bge	memb1
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
memb3:	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._tailp,3
	.globl	C.tailp
C.tailp:	mflr	0
	stu	0,-4(1)
	.globl	tailp
tailp:	b	tailp3
tailp2:	cmpl	0,14,15
	beq	tailp9
	l	15,4(15)
	l	3,1216(13)
	cmpli	0,3,0
	beq	.fnt.13
	.globl	C.ithard
	bl	C.ithard
.fnt.13:tailp3:	cmp	0,15,22
	bge	tailp2
	oril	14,21,0
tailp9:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._last,2
	.globl	C.last
C.last:	mflr	0
	stu	0,-4(1)
	.globl	last
last:	cmp	0,14,22
	blt	lastret
last1:	l	15,4(14)
	cmp	0,15,22
	blt	lastret
	l	14,4(15)
	cmp	0,14,22
	bge	last1
	oril	14,15,0
lastret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._nth,3
	.globl	C.nth
C.nth:	mflr	0
	stu	0,-4(1)
	.globl	nth
nth:	cmpl	0,14,18
	bge	ntherr
	b	nth2
nth1:	l	15,4(15)
nth2:	cmp	0,15,22
	blt	nthf
	exts	14,14
	si	14,14,1
	cmpi	0,14,0
	bge	nth1
	lil	14,0
	l	14,0(15)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
nthf:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ntherr:	cal	15,16832(21)
	b	errnia
	.set	._nthcdr,3
	.globl	C.nthcdr
C.nthcdr:	mflr	0
	stu	0,-4(1)
	.globl	nthcdr
nthcdr:	cmpl	0,14,18
	bge	nthcerr
	b	nthc2
nthc1:	l	15,4(15)
nthc2:	cmp	0,15,22
	blt	nthcf
	exts	14,14
	si	14,14,1
	cmpi	0,14,0
	bge	nthc1
	lil	14,0
	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
nthcf:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
nthcerr:	cal	15,16800(21)
	b	errnia
	.set	._lllength,2
	.globl	C.lllength
C.lllength:	mflr	0
	stu	0,-4(1)
	.globl	lllength
lllength:	lil	15,0
	cmp	0,14,22
	blt	lengt2
lengt1:	l	14,4(14)
	ai	4,15,1
	andil.	15,4,0xFFFF
	cmp	0,14,22
	bge	lengt1
lengt2:	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llcons,3
	.globl	C.llcons
C.llcons:	mflr	0
	stu	0,-4(1)
	.globl	llcons
llcons:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.14
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.14:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	15,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._fxcons,3
	.globl	C.fxcons
C.fxcons:	mflr	0
	stu	0,-4(1)
	.globl	fxcons
fxcons:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.15
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.15:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._fncons,2
	.globl	C.fncons
C.fncons:	mflr	0
	stu	0,-4(1)
	.globl	fncons
fncons:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.16
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.16:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._mcons,5
	.globl	C.mcons
C.mcons:	mflr	0
	stu	0,-4(1)
	.globl	mcons
mcons:	cmpli	0,17,0
	beq	mconsf
	l	14,0(1)
	ai	1,1,4
	b	mcons2
mcons1:	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.17
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.17:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
mcons2:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	mcons1
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
mconsf:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._list,5
	.globl	C.list
C.list:	mflr	0
	stu	0,-4(1)
	.globl	list
list:	oril	14,21,0
	b	lists2
lists1:	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.18
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.18:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
lists2:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	lists1
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._evlis,2
	.globl	C.evlis
C.evlis:	mflr	0
	stu	0,-4(1)
	.globl	evlis
evlis:	cmp	0,14,22
	blt	fntret
	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	16,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.19
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.19:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	stu	14,-4(1)
list1:	cmp	0,16,22
	blt	list2
	stu	14,-4(1)
	l	3,4(16)
	stu	3,-4(1)
	l	14,0(16)
	.globl	C.evala1
	bl	C.evala1
	l	16,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.20
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.20:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	15,0(1)
	ai	1,1,4
	st	14,4(15)
	b	list1
list2:	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._kwote,2
	.globl	C.kwote
C.kwote:	mflr	0
	stu	0,-4(1)
	.globl	kwote
kwote:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.21
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.21:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.22
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.22:	l	3,4(6)
	st	3,1184(13)
	cal	3,13888(21)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._makelist,3
	.globl	C.makelist
C.makelist:	mflr	0
	stu	0,-4(1)
	.globl	makelist
makelist:	cmpl	0,14,18
	bge	makeler
	oril	16,21,0
	b	makel3
makel2:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.23
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.23:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	16,4(6)
	oril	16,6,0
makel3:	exts	14,14
	si	14,14,1
	cmpi	0,14,0
	bge	makel2
	lil	14,0
	oril	14,16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
makeler:	cal	15,17120(21)
	b	errnia
	.set	._reverse,2
	.globl	C.reverse
C.reverse:	mflr	0
	stu	0,-4(1)
	.globl	reverse
reverse:	oril	15,21,0
	b	rev2
rev1:	l	16,0(14)
	l	14,4(14)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.24
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.24:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	15,4(6)
	oril	15,6,0
rev2:	cmp	0,14,22
	bge	rev1
	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._appnd1,3
	.globl	C.appnd1
C.appnd1:	mflr	0
	stu	0,-4(1)
	.globl	appnd1
appnd1:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.25
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.25:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	stu	14,-4(1)
	stu	15,-4(1)
	lil	17,2
	b	append
	.set	._append,5
	.globl	C.append
C.append:	mflr	0
	stu	0,-4(1)
	.globl	append
append:	cmpli	0,17,0
	beq	appendf
	l	14,0(1)
	ai	1,1,4
	b	append4
append1:	l	15,0(1)
	ai	1,1,4
	cmp	0,15,22
	blt	append4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.26
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.26:	l	3,4(6)
	st	3,1184(13)
	l	3,0(15)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	stu	14,-4(1)
	b	append3
append2:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.27
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.27:	l	3,4(6)
	st	3,1184(13)
	l	3,0(15)
	st	3,0(6)
	l	3,4(14)
	st	3,4(6)
	st	6,4(14)
	l	14,4(14)
append3:	l	15,4(15)
	l	3,1216(13)
	cmpli	0,3,0
	beq	.fnt.28
	.globl	C.ithard
	bl	C.ithard
.fnt.28:	cmp	0,15,22
	bge	append2
	l	14,0(1)
	ai	1,1,4
append4:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	append1
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
appendf:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._remq,3
	.globl	C.remq
C.remq:	mflr	0
	stu	0,-4(1)
	.globl	remq
remq:	cmp	0,15,22
	bge	remq6
	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
remq6:	l	16,0(15)
	l	15,4(15)
	cmpl	0,16,14
	beq	remq
	l	3,1216(13)
	cmpli	0,3,0
	beq	.fnt.29
	.globl	C.ithard
	bl	C.ithard
.fnt.29:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fnt.30
	b	errfs
.fnt.30:	stu	16,-4(1)
	.globl	C.remq
	bl	C.remq
	l	16,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.31
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.31:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llremove,3
	.globl	C.llremove
C.llremove:	mflr	0
	stu	0,-4(1)
	.globl	llremove
llremove:	oril	16,15,0
	b	remv1
	.globl	C.remv1
C.remv1:	mflr	0
	stu	0,-4(1)
remv1:	cmp	0,16,22
	bge	remv4
	oril	14,16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
remv4:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fnt.32
	b	errfs
.fnt.32:	stu	14,-4(1)
	l	15,0(16)
	.globl	C.savequal
	bl	C.savequal
	oril	17,14,0
	l	14,0(1)
	ai	1,1,4
	l	16,4(16)
	cmpl	0,17,21
	bne	remv1
	stu	15,-4(1)
	.globl	C.remv1
	bl	C.remv1
	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.33
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.33:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._copylist,2
	.globl	C.copylist
C.copylist:	mflr	0
	stu	0,-4(1)
	.globl	copylist
copylist:	cmp	0,14,22
	blt	fntret
	l	3,1216(13)
	cmpli	0,3,0
	beq	.fnt.34
	.globl	C.ithard
	bl	C.ithard
.fnt.34:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fnt.35
	b	errfs
.fnt.35:	l	3,4(14)
	stu	3,-4(1)
	l	14,0(14)
	.globl	C.copylist
	bl	C.copylist
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	.globl	C.copylist
	bl	C.copylist
	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.36
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.36:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._copy,2
	.globl	C.copy
C.copy:	mflr	0
	stu	0,-4(1)
	.globl	copy
copy:	l	3,1216(13)
	cmpli	0,3,0
	beq	.fnt.37
	.globl	C.ithard
	bl	C.ithard
.fnt.37:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fnt.38
	b	errfs
.fnt.38:	cmp	0,14,22
	blt	copy3
	l	3,4(14)
	stu	3,-4(1)
	sf	5,22,14
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,180(13)
	a	3,3,5
	l	5,0(3)
	and	5,5,4
	cmpli	0,5,0
	bne	copy2
	l	14,0(14)
	.globl	C.copy
	bl	C.copy
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	.globl	C.copy
	bl	C.copy
	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.39
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.39:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
copy2:	l	14,0(14)
	.globl	C.copy
	bl	C.copy
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	.globl	C.copy
	bl	C.copy
	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.40
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.40:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	sf	5,22,14
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,180(13)
	a	3,3,5
	l	5,0(3)
	or	5,5,4
	st	5,0(3)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
copy3:	cmpl	0,14,20
	blt	copy4
	cmpl	0,14,21
	bge	copy4
	stu	14,-4(1)
	l	3,0(14)
	l	15,4(3)
	.globl	C.strgallc
	bl	C.strgallc
	l	16,0(1)
	ai	1,1,4
	l	3,4(16)
	st	3,4(14)
	l	4,0(16)
	cal	4,8(4)
	l	5,0(14)
	cal	5,8(5)
	oril	3,15,0
	cmp	0,5,4
	ble	.fnt.44
	a	4,4,3
	a	5,5,3
	b	.fnt.42
.fnt.41:	lbz	6,0(4)
	stb	6,0(5)
.fnt.42:	si	4,4,1
	si	5,5,1
	si	3,3,1
	cmpi	0,3,0
	bge	.fnt.41
	b	.fnt.45
.fnt.43:	lbz	6,0(4)
	stb	6,0(5)
	ai	4,4,1
	ai	5,5,1
.fnt.44:	si	3,3,1
	cmpi	0,3,0
	bge	.fnt.43
.fnt.45:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
copy4:	cmpl	0,14,19
	blt	fntret
	cmpl	0,14,20
	bge	fntret
	stu	14,-4(1)
	l	3,0(14)
	l	14,4(3)
	stu	14,-4(1)
	oril	15,21,0
	.globl	C.makevect
	bl	C.makevect
	oril	15,14,0
	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	3,4(16)
	st	3,4(14)
	b	copy6
copy5:	stu	17,-4(1)
	stu	16,-4(1)
	stu	15,-4(1)
	l	3,0(16)
	ai	4,17,2
	sli	4,4,2
	lx	14,3,4
	.globl	C.copy
	bl	C.copy
	l	15,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	l	3,0(15)
	ai	4,17,2
	sli	4,4,2
	stx	14,3,4
copy6:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	copy5
	lil	17,0
	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._firstn,3
	.globl	C.firstn
C.firstn:	mflr	0
	stu	0,-4(1)
	.globl	firstn
firstn:	cal	17,17376(21)
	cmpl	0,14,18
	bge	firserr1
	cmp	0,15,22
	blt	firserr2
	exts	3,14
	cmpi	0,3,0
	ble	firsf
	l	16,0(15)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.46
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.46:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	21,4(6)
	oril	16,6,0
	stu	16,-4(1)
	b	firs1
firs0:	l	15,4(15)
	cmp	0,15,22
	blt	firs3
	l	16,0(15)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.47
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.47:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	21,4(6)
	oril	16,6,0
	st	16,4(17)
firs1:	oril	17,16,0
	exts	14,14
	si	14,14,1
	cmpi	0,14,0
	bgt	firs0
	lil	14,0
firs3:	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
firsf:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
firserr1:	oril	15,17,0
	b	errnia
firserr2:	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._lastn,3
	.globl	C.lastn
C.lastn:	mflr	0
	stu	0,-4(1)
	.globl	lastn
lastn:	cal	17,17408(21)
	cmpl	0,14,18
	bge	firserr1
	cmp	0,15,22
	blt	firserr2
	exts	3,14
	cmpi	0,3,0
	ble	lastnf
	oril	16,15,0
lastn0:	l	15,4(15)
	cmpli	0,14,0
	beq	lastn1
	si	4,14,1
	andil.	14,4,0xFFFF
	b	lastn2
lastn1:	l	16,4(16)
lastn2:	cmp	0,15,22
	bge	lastn0
	stu	16,-4(1)
	oril	14,21,0
	stu	14,-4(1)
	lil	17,2
	b	append
lastnf:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._subst,4
	.globl	C.subst
C.subst:	mflr	0
	stu	0,-4(1)
	.globl	subst
subst:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fnt.48
	b	errfs
.fnt.48:	stu	14,-4(1)
	oril	14,16,0
	l	16,0(1)
	ai	1,1,4
	b	substt2
	.globl	C.substt2
C.substt2:	mflr	0
	stu	0,-4(1)
substt2:	stu	14,-4(1)
	.globl	C.savequal
	bl	C.savequal
	cmpl	0,14,21
	beq	substt4
	l	14,0(1)
	ai	1,1,4
	oril	14,16,0
substt3:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
substt4:	l	14,0(1)
	ai	1,1,4
	cmp	0,14,22
	blt	substt3
	stu	14,-4(1)
	l	3,4(14)
	stu	3,-4(1)
	l	14,0(14)
	.globl	C.substt2
	bl	C.substt2
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	.globl	C.substt2
	bl	C.substt2
	l	17,0(1)
	ai	1,1,4
	l	4,0(1)
	st	15,0(1)
	oril	15,4,0
	l	3,0(15)
	cmpl	0,3,17
	bne	substt8
	l	3,4(15)
	cmpl	0,3,14
	bne	substt8
	oril	14,15,0
	l	15,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
substt8:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.49
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.49:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	st	14,4(6)
	oril	14,6,0
	l	15,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._oblist,5
	.globl	C.oblist
C.oblist:	mflr	0
	stu	0,-4(1)
	.globl	oblist
oblist:	oril	14,21,0
	oril	15,21,0
	cmpli	0,17,0
	beq	oblist0
	l	15,0(1)
	ai	1,1,4
	cmpli	0,17,1
	beq	oblist0
	l	16,0(1)
	ai	1,1,4
	cmpli	0,17,2
	beq	oblisp0
	lil	14,2
	cal	15,17472(21)
	b	errwna
oblist0:	cmpl	0,15,21
	blt	obliser1
	cmpl	0,15,22
	bge	obliser1
	l	3,1220(13)
	l	3,0(3)
	l	17,4(3)
	si	4,17,1
	andil.	17,4,0xFFFF
oblist1:	l	3,1220(13)
	l	3,0(3)
	ai	4,17,2
	sli	4,4,2
	lx	17,3,4
	b	oblist8
oblist2:	oril	16,17,0
	l	5,28(17)
	cmpl	0,5,20
	blt	.fnt.50
	cmpl	0,5,21
	blt	oblist4
.fnt.50:oblist3:	l	17,28(17)
oblist4:oblist5:	cmpl	0,15,21
	beq	oblist6
	l	3,12(17)
	cmpl	0,3,15
	bne	oblist7
oblist6:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.51
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.51:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	st	14,4(6)
	oril	14,6,0
oblist7:	cmpl	0,17,16
	bne	oblist3
	l	17,20(17)
oblist8:	cmpl	0,17,21
	blt	.fnt.52
	cmpl	0,17,22
	blt	oblist2
.fnt.52:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	oblist1
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
oblisp0:	cmpl	0,15,21
	blt	obliser1
	cmpl	0,15,22
	bge	obliser1
	cmpl	0,16,21
	blt	obliser2
	cmpl	0,16,22
	bge	obliser2
	oril	17,15,0
	l	5,28(17)
	cmpl	0,5,20
	blt	.fnt.53
	cmpl	0,5,21
	blt	oblisp3
.fnt.53:oblisp2:	l	17,28(17)
oblisp3:	cmpl	0,16,21
	beq	oblisp4
	l	3,12(17)
	cmpl	0,3,16
	bne	oblisp5
oblisp4:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.54
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.54:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	st	14,4(6)
	oril	14,6,0
oblisp5:	cmpl	0,17,15
	bne	oblisp2
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
obliser1:	oril	14,15,0
	b	obliser3
obliser2:	oril	14,16,0
obliser3:	cal	15,17472(21)
	b	errsym
	.set	._boblist,5
	.globl	C.boblist
C.boblist:	mflr	0
	stu	0,-4(1)
	.globl	boblist
boblist:	cmpli	0,17,1
	beq	boblon
	cmpli	0,17,0
	beq	boblis1
	lil	14,1
	cal	15,17504(21)
	b	errwna
boblis1:	oril	17,21,0
	l	3,1220(13)
	l	3,0(3)
	l	14,4(3)
	b	boblis9
boblis2:	stu	14,-4(1)
	.globl	C.boblon2
	bl	C.boblon2
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.55
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.55:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	17,4(6)
	oril	17,6,0
	l	14,0(1)
	ai	1,1,4
boblis9:	exts	14,14
	si	14,14,1
	cmpi	0,14,0
	bge	boblis2
	lil	14,0
	oril	14,17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
boblon:	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	blt	boblon1
bobloer:	cal	15,17504(21)
	b	errnia
bobloer2:	cal	15,17504(21)
	b	erroob
boblon1:	exts	3,14
	cmpi	0,3,0
	blt	bobloer2
	l	3,1220(13)
	l	3,0(3)
	l	15,4(3)
	exts	3,14
	exts	4,15
	cmp	0,3,4
	bge	bobloer2
	b	boblon2
	.globl	C.boblon2
C.boblon2:	mflr	0
	stu	0,-4(1)
boblon2:	l	3,1220(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	lx	15,3,4
	oril	14,21,0
	b	boblon8
boblon3:	cal	4,32(21)
	cmpl	0,15,4
	beq	boblon7
	l	5,28(15)
	cmpl	0,5,20
	blt	.fnt.56
	cmpl	0,5,21
	blt	boblon6
.fnt.56:	stu	17,-4(1)
	oril	17,21,0
	oril	16,15,0
boblon4:	l	16,28(16)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.57
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.57:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	17,4(6)
	oril	17,6,0
	cmpl	0,16,15
	bne	boblon4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.58
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.58:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	st	14,4(6)
	oril	14,6,0
	l	17,0(1)
	ai	1,1,4
	b	boblon7
boblon6:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.59
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.59:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
boblon7:	l	15,20(15)
boblon8:	cmpl	0,15,21
	blt	.fnt.60
	cmpl	0,15,22
	blt	boblon3
.fnt.60:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._lhoblist,2
	.globl	C.lhoblist
C.lhoblist:	mflr	0
	stu	0,-4(1)
	.globl	lhoblist
lhoblist:	oril	15,14,0
	cal	3,17536(21)
	st	3,1740(13)
	.globl	C.stringa2
	bl	C.stringa2
	oril	14,21,0
	l	3,1220(13)
	l	3,0(3)
	l	17,4(3)
	si	4,17,1
	andil.	17,4,0xFFFF
lhoblist1:	l	3,1220(13)
	l	3,0(3)
	ai	4,17,2
	sli	4,4,2
	lx	17,3,4
	b	lhoblist8
lhoblist2:	oril	16,17,0
	l	5,28(17)
	cmpl	0,5,20
	blt	.fnt.61
	cmpl	0,5,21
	blt	lhoblist4
.fnt.61:lhoblist3:	l	17,28(17)
lhoblist4:	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	l	3,2832(13)
	stu	3,-4(1)
	stu	15,-4(1)
	stu	17,-4(1)
	lil	17,2
	b	ffindex
	.globl	lhoblist5
lhoblist5:	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	cmpl	0,14,21
	bne	lhoblist6
	l	14,0(1)
	ai	1,1,4
	b	lhoblist7
lhoblist6:	l	14,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.62
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.62:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	st	14,4(6)
	oril	14,6,0
lhoblist7:	cmpl	0,17,16
	bne	lhoblist3
	l	17,20(17)
lhoblist8:	cmpl	0,17,21
	blt	.fnt.63
	cmpl	0,17,22
	blt	lhoblist2
.fnt.63:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	lhoblist1
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._rplaca,3
	.globl	C.rplaca
C.rplaca:	mflr	0
	stu	0,-4(1)
	.globl	rplaca
rplaca:	cmp	0,14,22
	blt	rplaca1
	st	15,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rplaca1:	cal	15,17568(21)
	b	errnla
	.set	._rplacd,3
	.globl	C.rplacd
C.rplacd:	mflr	0
	stu	0,-4(1)
	.globl	rplacd
rplacd:	cmp	0,14,22
	blt	rplacd1
	st	15,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rplacd1:	cal	15,17600(21)
	b	errnla
	.set	._rplac,4
	.globl	C.rplac
C.rplac:	mflr	0
	stu	0,-4(1)
	.globl	rplac
rplac:	cmp	0,14,22
	blt	rplac1
	st	15,0(14)
	st	16,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rplac1:	cal	15,17632(21)
	b	errnla
	.set	._displace,3
	.globl	C.displace
C.displace:	mflr	0
	stu	0,-4(1)
	.globl	displace
displace:	cmp	0,14,22
	blt	displ2
	cmp	0,15,22
	bge	displ1
	cal	3,14080(21)
	st	3,0(14)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.64
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.64:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	st	15,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
displ1:	l	3,0(15)
	st	3,0(14)
	l	3,4(15)
	st	3,4(14)
	sf	5,22,15
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,180(13)
	a	3,3,5
	l	5,0(3)
	and	5,5,4
	cmpli	0,5,0
	beq	displret
	sf	5,22,14
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,180(13)
	a	3,3,5
	l	5,0(3)
	or	5,5,4
	st	5,0(3)
displret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
displ2:	cal	15,17696(21)
	b	errnla
	.set	._placdl,3
	.globl	C.placdl
C.placdl:	mflr	0
	stu	0,-4(1)
	.globl	placdl
placdl:	cmp	0,14,22
	blt	placd1
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.65
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.65:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	st	15,4(14)
	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
placd1:	cal	15,17664(21)
	b	errnla
	.set	._setq,6
	.globl	C.setq
C.setq:	mflr	0
	stu	0,-4(1)
	.globl	setq
setq:	oril	15,14,0
	cmp	0,15,22
	bge	setq1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
setq1:	oril	14,15,0
	l	3,0(14)
	stu	3,-4(1)
	l	14,4(14)
	cmp	0,14,22
	blt	setqer2
	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	15,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	cmpl	0,16,23
	blt	setqer1
	cmpl	0,16,22
	bge	setqer1
	st	14,0(16)
	cmp	0,15,22
	bge	setq1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
setqer1:	oril	14,16,0
	cal	15,17728(21)
	b	errnva
setqer2:	lil	14,2
	cal	15,17728(21)
	b	errwna
	.set	._fset,3
	.globl	C.fset
C.fset:	mflr	0
	stu	0,-4(1)
	.globl	fset
fset:	cmpl	0,14,23
	blt	seterr
	cmpl	0,14,22
	bge	seterr
	st	15,0(14)
	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
seterr:	cal	15,17760(21)
	b	errnva
	.set	._setqq,6
	.globl	C.setqq
C.setqq:	mflr	0
	stu	0,-4(1)
	.globl	setqq
setqq:	oril	16,21,0
	b	setqq3
setqq1:	l	15,0(14)
	cmpl	0,15,23
	blt	setqqer1
	cmpl	0,15,22
	bge	setqqer1
	l	14,4(14)
	cmp	0,14,22
	blt	setqqer2
	l	16,0(14)
	st	16,0(15)
	l	14,4(14)
setqq3:	cmp	0,14,22
	bge	setqq1
	oril	14,16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
setqqer1:	oril	14,15,0
	cal	15,17792(21)
	b	errnva
setqqer2:	lil	14,2
	cal	15,17792(21)
	b	errwna
	.set	._psetq,6
	.globl	C.psetq
C.psetq:	mflr	0
	stu	0,-4(1)
	.globl	psetq
psetq:	lil	17,0
	b	psetq5
psetq2:	l	15,0(14)
	cmpl	0,15,23
	blt	psetqerr
	cmpl	0,15,22
	bge	psetqerr
	stu	15,-4(1)
	l	14,4(14)
	stu	14,-4(1)
	stu	17,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	17,0(1)
	ai	1,1,4
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	l	14,4(14)
	ai	4,17,1
	andil.	17,4,0xFFFF
psetq5:	cmp	0,14,22
	bge	psetq2
	b	psetq4
psetq3:	l	14,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	st	14,0(15)
psetq4:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	psetq3
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
psetqerr:	oril	14,15,0
	cal	15,17824(21)
	b	errnva
	.set	._deset,3
	.globl	C.deset
C.deset:	mflr	0
	stu	0,-4(1)
	.globl	deset
deset:	cal	17,17856(21)
deset0:	st	17,1740(13)
	.globl	C.deset4
	bl	C.deset4
	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
deset2:	cmp	0,15,22
	blt	deset6
	l	3,4(14)
	stu	3,-4(1)
	l	3,4(15)
	stu	3,-4(1)
	l	14,0(14)
	l	15,0(15)
	.globl	C.deset5
	bl	C.deset5
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	b	deset4
	.globl	C.deset4
C.deset4:	mflr	0
	stu	0,-4(1)
deset4:	cmpl	0,14,21
	beq	fntret
	b	deset5
	.globl	C.deset5
C.deset5:	mflr	0
	stu	0,-4(1)
deset5:	cmp	0,14,22
	bge	deset2
	cmpl	0,14,23
	blt	.fnt.66
	cmpl	0,14,22
	blt	deset8
.fnt.66:	l	15,1740(13)
	b	errbpa
deset6:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.67
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.67:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.68
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.68:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	15,4(6)
	oril	14,6,0
	l	15,1740(13)
	b	errilb
deset8:	st	15,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._desetq,6
	.globl	C.desetq
C.desetq:	mflr	0
	stu	0,-4(1)
	.globl	desetq
desetq:	l	3,0(14)
	stu	3,-4(1)
	l	14,4(14)
	.globl	C.evalcar
	bl	C.evalcar
	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	cal	17,17888(21)
	b	deset0
	.set	._cirlist,5
	.globl	C.cirlist
C.cirlist:	mflr	0
	stu	0,-4(1)
	.globl	cirlist
cirlist:	cmpli	0,17,0
	beq	cirlistf
	l	14,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.69
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.69:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	oril	16,14,0
	b	cirlist3
cirlist2:	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.70
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.70:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
cirlist3:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	cirlist2
	lil	17,0
	st	14,4(16)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
cirlistf:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._nreconc,3
	.globl	C.nreconc
C.nreconc:	mflr	0
	stu	0,-4(1)
	.globl	nreconc
nreconc:	b	frev2
frev1:	l	16,4(14)
	st	15,4(14)
	cmp	0,16,22
	blt	frevret
	l	15,4(16)
	st	14,4(16)
	cmp	0,15,22
	blt	frev9
	l	14,4(15)
	st	16,4(15)
frev2:	cmp	0,14,22
	bge	frev1
	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
frev9:	oril	14,16,0
frevret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._nsubst,4
	.globl	C.nsubst
C.nsubst:	mflr	0
	stu	0,-4(1)
	.globl	nsubst
nsubst:	oril	17,14,0
	b	nsloop
	.globl	C.nsloop
C.nsloop:	mflr	0
	stu	0,-4(1)
nsloop:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fnt.71
	b	errfs
.fnt.71:	stu	16,-4(1)
	oril	14,16,0
	stu	17,-4(1)
	.globl	C.savequal
	bl	C.savequal
	l	17,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	nsub0
	oril	14,17,0
	l	16,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
nsub2:	l	16,4(16)
	l	3,1216(13)
	cmpli	0,3,0
	beq	.fnt.72
	.globl	C.ithard
	bl	C.ithard
.fnt.72:nsub0:	cmp	0,16,22
	blt	nsubret
	stu	16,-4(1)
	l	16,0(16)
	.globl	C.nsloop
	bl	C.nsloop
	l	16,0(1)
	ai	1,1,4
	st	14,0(16)
nsub1:	l	14,4(16)
	stu	17,-4(1)
	.globl	C.savequal
	bl	C.savequal
	l	17,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	nsub2
nsub3:	st	17,4(16)
nsubret:	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._delq,3
	.globl	C.delq
C.delq:	mflr	0
	stu	0,-4(1)
	.globl	delq
delq:delq0:	cmp	0,15,22
	blt	delqret
	l	3,0(15)
	cmpl	0,3,14
	bne	delq1
	l	15,4(15)
	b	delq0
delq1:	oril	17,15,0
delq2:	oril	16,17,0
delq3:	l	17,4(17)
	cmp	0,17,22
	blt	delqret
	l	3,0(17)
	cmpl	0,3,14
	bne	delq2
	l	3,4(17)
	st	3,4(16)
	l	3,1216(13)
	cmpli	0,3,0
	beq	.fnt.73
	.globl	C.ithard
	bl	C.ithard
.fnt.73:	b	delq3
delqret:	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._lldelete,3
	.globl	C.lldelete
C.lldelete:	mflr	0
	stu	0,-4(1)
	.globl	lldelete
lldelete:	b	dele4
dele0:	stu	14,-4(1)
	l	15,0(15)
	.globl	C.equal
	bl	C.equal
	cmpl	0,14,21
	beq	dele1
	l	14,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	15,4(15)
dele4:	stu	15,-4(1)
	cmp	0,15,22
	bge	dele0
deleret:	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
dele1:	l	15,0(1)
	ai	1,1,4
	l	17,0(1)
dele2:	oril	16,17,0
dele3:	l	17,4(17)
	cmp	0,17,22
	blt	deleret
	l	14,0(17)
	stu	17,-4(1)
	.globl	C.savequal
	bl	C.savequal
	l	17,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	dele2
	l	3,4(17)
	st	3,4(16)
	l	3,1216(13)
	cmpli	0,3,0
	beq	.fnt.74
	.globl	C.ithard
	bl	C.ithard
.fnt.74:	b	dele3
	.set	._nreverse,2
	.globl	C.nreverse
C.nreverse:	mflr	0
	stu	0,-4(1)
	.globl	nreverse
nreverse:	oril	15,21,0
	cmp	0,14,22
	blt	nrev2
nrev1:	l	16,4(14)
	st	15,4(14)
	cmp	0,16,22
	blt	nrev9
	l	15,4(16)
	st	14,4(16)
	cmp	0,15,22
	blt	nrev3
	l	14,4(15)
	st	16,4(15)
	cmp	0,14,22
	bge	nrev1
nrev2:	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
nrev3:	oril	14,16,0
nrev9:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._nextl,6
	.globl	C.nextl
C.nextl:	mflr	0
	stu	0,-4(1)
	.globl	nextl
nextl:	l	15,0(14)
	cmpl	0,15,23
	blt	nextlerr
	cmpl	0,15,22
	bge	nextlerr
	l	3,4(14)
	stu	3,-4(1)
	l	16,0(15)
	cmp	0,16,22
	bge	nextl4
	cmpl	0,16,21
	beq	nextl4
	oril	14,15,0
	cal	15,18112(21)
	b	errnla
nextl4:	l	14,0(16)
	l	16,4(16)
	st	16,0(15)
	l	15,0(1)
	ai	1,1,4
	cmp	0,15,22
	blt	nextl9
	l	15,0(15)
	cmpl	0,15,23
	blt	nextlerr
	cmpl	0,15,22
	bge	nextlerr
	st	14,0(15)
nextl9:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
nextlerr:	oril	14,15,0
	cal	15,18112(21)
	b	errnva
	.set	._newl,6
	.globl	C.newl
C.newl:	mflr	0
	stu	0,-4(1)
	.globl	newl
newl:	l	3,0(14)
	stu	3,-4(1)
	l	14,4(14)
	.globl	C.evalcar
	bl	C.evalcar
	l	15,0(1)
	ai	1,1,4
	cmpl	0,15,23
	blt	newlerr
	cmpl	0,15,22
	bge	newlerr
	l	16,0(15)
	cal	4,32(21)
	cmpl	0,16,4
	beq	newlerr1
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.75
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.75:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	16,4(6)
	oril	14,6,0
	st	14,0(15)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
newlerr:	oril	14,15,0
	cal	15,18144(21)
	b	errnva
newlerr1:	oril	14,15,0
	cal	15,18144(21)
	b	errudv
	.set	._newr,6
	.globl	C.newr
C.newr:	mflr	0
	stu	0,-4(1)
	.globl	newr
newr:	l	15,0(14)
	cmpl	0,15,23
	blt	newrerr
	cmpl	0,15,22
	bge	newrerr
	stu	15,-4(1)
	l	14,4(14)
	.globl	C.evalcar
	bl	C.evalcar
	l	15,0(1)
	ai	1,1,4
	l	16,0(15)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.76
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.76:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	cmp	0,16,22
	bge	newr3
	st	14,0(15)
	b	newr9
newr3:	stu	16,-4(1)
	b	newr6
newr4:	oril	16,17,0
newr6:	l	17,4(16)
	cmp	0,17,22
	bge	newr4
	st	14,4(16)
	l	14,0(1)
	ai	1,1,4
newr9:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
newrerr:	oril	14,15,0
	cal	15,18176(21)
	b	errnva
	.set	._nconc1,3
	.globl	C.nconc1
C.nconc1:	mflr	0
	stu	0,-4(1)
	.globl	nconc1
nconc1:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.77
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.77:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	stu	14,-4(1)
	stu	15,-4(1)
	lil	17,2
	b	nconc
	cror	15,15,15
	.set	._nconc,5
	b	nconc
	.globl	C.nconc
C.nconc:	mflr	0
	stu	0,-4(1)
	.globl	nconc
nconc:	cmpli	0,17,0
	beq	fnconcf
	l	14,0(1)
	ai	1,1,4
	b	fnconc4
fnconc1:	l	15,0(1)
	cmp	0,15,22
	bge	fnconc3
	l	15,0(1)
	ai	1,1,4
	b	fnconc4
fnconc2:	l	15,4(15)
	l	3,1216(13)
	cmpli	0,3,0
	beq	.fnt.78
	.globl	C.ithard
	bl	C.ithard
.fnt.78:fnconc3:	l	3,4(15)
	cmp	0,3,22
	bge	fnconc2
	st	14,4(15)
	l	14,0(1)
	ai	1,1,4
fnconc4:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	fnconc1
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fnconcf:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._acons,4
	.globl	C.acons
C.acons:	mflr	0
	stu	0,-4(1)
	.globl	acons
acons:	stu	16,-4(1)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.79
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.79:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	15,4(6)
	oril	14,6,0
	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.80
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.80:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	15,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._pairlis,4
	.globl	C.pairlis
C.pairlis:	mflr	0
	stu	0,-4(1)
	.globl	pairlis
pairlis:	oril	17,21,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.81
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.81:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	st	21,4(6)
	oril	17,6,0
	stu	17,-4(1)
	stu	16,-4(1)
	b	pairlis5
pairlis2:	l	16,0(15)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.82
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.82:	l	3,4(6)
	st	3,1184(13)
	l	3,0(14)
	st	3,0(6)
	st	16,4(6)
	oril	16,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.83
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.83:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	21,4(6)
	oril	16,6,0
	st	16,4(17)
	oril	17,16,0
	l	14,4(14)
	l	15,4(15)
pairlis5:	cmp	0,14,22
	blt	pairlis8
	cmp	0,15,22
	bge	pairlis2
	cmpl	0,15,21
	beq	pairlis2
	oril	14,15,0
	cal	15,18304(21)
	b	errnla
pairlis8:	l	14,0(1)
	ai	1,1,4
	st	14,4(17)
	l	14,0(1)
	ai	1,1,4
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._assq,3
	.globl	C.assq
C.assq:	mflr	0
	stu	0,-4(1)
	.globl	assq
assq:	cmp	0,15,22
	blt	assq3
	oril	16,14,0
assq1:	l	14,0(15)
	cmp	0,14,22
	blt	assq2
	l	17,0(14)
	cmpl	0,17,16
	beq	assqret
assq2:	l	15,4(15)
	cmp	0,15,22
	bge	assq1
assq3:	oril	14,21,0
assqret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._assoc,3
	.globl	C.assoc
C.assoc:	mflr	0
	stu	0,-4(1)
	.globl	assoc
assoc:	cmp	0,15,22
	bge	asso1
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
asso1:	l	16,0(15)
	cmp	0,16,22
	blt	asso5
	stu	14,-4(1)
	stu	15,-4(1)
	l	15,0(16)
	stu	16,-4(1)
	.globl	C.equal
	bl	C.equal
	cmpl	0,14,21
	bne	asso9
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
asso5:	l	15,4(15)
	cmp	0,15,22
	bge	asso1
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
asso9:	l	14,0(1)
	ai	1,1,4
	ai	1,1,8
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cassq,3
	.globl	C.cassq
C.cassq:	mflr	0
	stu	0,-4(1)
	.globl	cassq
cassq:	b	cassq3
cassq1:	l	16,0(15)
	cmp	0,16,22
	blt	cassq2
	l	17,0(16)
	cmpl	0,17,14
	beq	cassq4
cassq2:	l	15,4(15)
cassq3:	cmp	0,15,22
	bge	cassq1
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
cassq4:	l	14,4(16)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cassoc,3
	.globl	C.cassoc
C.cassoc:	mflr	0
	stu	0,-4(1)
	.globl	cassoc
cassoc:	b	casso8
casso1:	l	16,0(15)
	cmp	0,16,22
	blt	casso5
	stu	14,-4(1)
	stu	15,-4(1)
	l	15,0(16)
	stu	16,-4(1)
	.globl	C.equal
	bl	C.equal
	cmpl	0,14,21
	bne	casso9
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
casso5:	l	15,4(15)
casso8:	cmp	0,15,22
	bge	casso1
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
casso9:	l	14,0(1)
	ai	1,1,4
	l	14,4(14)
	ai	1,1,8
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._rassq,3
	.globl	C.rassq
C.rassq:	mflr	0
	stu	0,-4(1)
	.globl	rassq
rassq:	cmp	0,15,22
	blt	rassq3
	oril	16,14,0
rassq1:	l	14,0(15)
	cmp	0,14,22
	blt	rassq2
	l	17,4(14)
	cmpl	0,17,16
	beq	rassqret
rassq2:	l	15,4(15)
	cmp	0,15,22
	bge	rassq1
rassq3:	oril	14,21,0
rassqret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._rassoc,3
	.globl	C.rassoc
C.rassoc:	mflr	0
	stu	0,-4(1)
	.globl	rassoc
rassoc:	b	rasso8
rasso1:	l	16,0(15)
	cmp	0,16,22
	blt	rasso5
	stu	14,-4(1)
	stu	15,-4(1)
	l	15,4(16)
	stu	16,-4(1)
	.globl	C.equal
	bl	C.equal
	cmpl	0,14,21
	bne	rasso9
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
rasso5:	l	15,4(15)
rasso8:	cmp	0,15,22
	bge	rasso1
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rasso9:	l	14,0(1)
	ai	1,1,4
	ai	1,1,8
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._sublis,3
	.globl	C.sublis
C.sublis:	mflr	0
	stu	0,-4(1)
	.globl	sublis
sublis:	cmp	0,15,22
	bge	sublis5
	stu	15,-4(1)
	oril	15,14,0
	l	14,0(1)
	.globl	C.assq
	bl	C.assq
	cmpl	0,14,21
	beq	sublis2
	l	15,0(1)
	ai	1,1,4
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
sublis2:	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
sublis5:	l	3,1216(13)
	cmpli	0,3,0
	beq	.fnt.84
	.globl	C.ithard
	bl	C.ithard
.fnt.84:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fnt.85
	b	errfs
.fnt.85:	stu	14,-4(1)
	stu	15,-4(1)
	l	15,0(15)
	.globl	C.sublis
	bl	C.sublis
	l	15,0(1)
	ai	1,1,4
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	stu	15,-4(1)
	l	15,4(15)
	.globl	C.sublis
	bl	C.sublis
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	4,4(16)
	cmpl	0,14,4
	bne	sublis8
	l	4,0(16)
	cmpl	0,15,4
	bne	sublis8
	oril	14,16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
sublis8:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fnt.86
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fnt.86:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
