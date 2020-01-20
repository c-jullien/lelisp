	.csect	lelisp_txt[PR]
	.globl	errnva
	.globl	errsym
	.globl	erroob
	.globl	errudf
	.globl	errwna
	.globl	errnla
	.globl	gccons
	.globl	inisymb
	.globl	inicst
	.globl	istdsym
	.globl	evalcar
	.globl	gaplus2i
	.globl	gadiff2i
	.globl	loc
	.globl	vag
	.globl	ini_sym
	.globl	getfn1
	.globl	getbi
	.globl	getfns
	.globl	setfn
	.globl	findfn
	.globl	getprop
	.globl	putprop
	.globl	addprop
	.globl	remprop
	.globl	C.ini_sym
C.ini_sym:	mflr	0
	stu	0,-4(1)
ini_sym:	lil	14,10
	cal	15,7808(13)
	l	16,3140(13)
	cal	17,164(13)
	lil	3,._makunbound
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7818(13)
	l	16,3136(13)
	cal	17,164(13)
	lil	3,._fplist
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,11
	cal	15,7823(13)
	l	16,3128(13)
	cal	17,164(13)
	lil	3,._pckgcell
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,14
	cal	15,7834(13)
	l	16,3120(13)
	cal	17,164(13)
	lil	3,._d3root
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7848(13)
	l	16,3116(13)
	cal	17,164(13)
	lil	3,._objval
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7854(13)
	l	16,3108(13)
	cal	17,164(13)
	lil	3,._valfn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7859(13)
	l	16,3104(13)
	cal	17,164(13)
	lil	3,._typefn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7865(13)
	l	16,3100(13)
	cal	17,164(13)
	lil	3,._setfn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7870(13)
	l	16,3084(13)
	cal	17,164(13)
	lil	3,._remfn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7875(13)
	l	16,3080(13)
	cal	17,164(13)
	lil	3,._findfn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7881(13)
	l	16,3096(13)
	cal	17,164(13)
	lil	3,._getfn1
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7887(13)
	l	16,3092(13)
	cal	17,164(13)
	lil	3,._getfn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,7892(13)
	l	16,3060(13)
	cal	17,164(13)
	lil	3,._getsym1
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7900(13)
	l	16,3064(13)
	cal	17,164(13)
	lil	3,._getsymb
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7907(13)
	l	16,3088(13)
	cal	17,164(13)
	lil	3,._getbi
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7913(13)
	l	16,3076(13)
	cal	17,164(13)
	lil	3,._synonym
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,7920(13)
	l	16,3072(13)
	cal	17,164(13)
	lil	3,._synqnym
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7928(13)
	l	16,3068(13)
	cal	17,164(13)
	lil	3,._remob
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,7933(13)
	l	16,3056(13)
	cal	17,164(13)
	lil	3,._getprop
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7936(13)
	l	16,3056(13)
	cal	17,164(13)
	lil	3,._getprop
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7943(13)
	l	16,3052(13)
	cal	17,164(13)
	lil	3,._getl
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7947(13)
	l	16,3048(13)
	cal	17,164(13)
	lil	3,._addprop
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7954(13)
	l	16,3044(13)
	cal	17,164(13)
	lil	3,._putprop
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7961(13)
	l	16,3040(13)
	cal	17,164(13)
	lil	3,._defprop
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7968(13)
	l	16,3036(13)
	cal	17,164(13)
	lil	3,._remprop
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7975(13)
	l	16,3032(13)
	cal	17,164(13)
	lil	3,._fincr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7979(13)
	l	16,3028(13)
	cal	17,164(13)
	lil	3,._fdecr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
sybfalse:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
sybret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._makunbound,2
	.globl	C.makunbound
C.makunbound:	mflr	0
	stu	0,-4(1)
	.globl	makunbound
makunbound:	cmpl	0,14,23
	blt	makuerr
	cmpl	0,14,22
	bge	makuerr
	cal	3,32(21)
	st	3,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
makuerr:	cal	15,15200(21)
	b	errnva
	.set	._fplist,5
	.globl	C.fplist
C.fplist:	mflr	0
	stu	0,-4(1)
	.globl	fplist
fplist:	cal	15,15232(21)
	l	16,3132(13)
	.globl	C.getset12
	bl	C.getset12
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	setplist
setplist:	st	14,4(16)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._pckgcell,5
	.globl	C.pckgcell
C.pckgcell:	mflr	0
	stu	0,-4(1)
	.globl	pckgcell
pckgcell:	cal	15,15264(21)
	l	16,3124(13)
	.globl	C.getset12
	bl	C.getset12
	l	14,12(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	pckgset
pckgset:	st	14,12(16)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._d3root,2
	.globl	C.d3root
C.d3root:	mflr	0
	stu	0,-4(1)
	.globl	d3root
d3root:	l	5,28(14)
	cmpl	0,5,21
	blt	d3rootn
	cmpl	0,5,22
	bge	d3rootn
	oril	17,14,0
d3roota:	l	3,12(14)
	cmpl	0,3,21
	beq	d3rootr
	l	14,28(14)
	cmpl	0,14,17
	bne	d3roota
d3rootn:	oril	14,21,0
d3rootr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._objval,5
	.globl	C.objval
C.objval:	mflr	0
	stu	0,-4(1)
	.globl	objval
objval:	cal	15,15328(21)
	l	16,3112(13)
	.globl	C.getset12
	bl	C.getset12
	l	14,16(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	objvset
objvset:	st	14,16(16)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._valfn,2
	.globl	C.valfn
C.valfn:	mflr	0
	stu	0,-4(1)
	.globl	valfn
valfn:	cmpl	0,14,21
	blt	valferr
	cmpl	0,14,22
	bge	valferr
	l	14,8(14)
	l	4,1104(13)
	cmpl	0,14,4
	blt	.sym.1
	l	4,168(13)
	cmpl	0,14,4
	blt	valfnr
.sym.1:	b	loc
valferr:	cal	15,15360(21)
	b	errsym
valfnr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._typefn,2
	.globl	C.typefn
C.typefn:	mflr	0
	stu	0,-4(1)
	.globl	typefn
typefn:	cmpl	0,14,21
	blt	typefer1
	cmpl	0,14,22
	bge	typefer1
	lhz	14,24(14)
	l	15,1876(13)
	l	3,0(15)
	l	16,4(3)
	si	4,16,1
	andil.	16,4,0xFFFF
typefn1:	l	3,0(15)
	ai	4,16,2
	sli	4,4,2
	lx	17,3,4
	cmpl	0,17,14
	beq	typefn2
	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bgt	typefn1
	lil	16,0
typefn2:	l	3,1872(13)
	l	3,0(3)
	ai	4,16,2
	sli	4,4,2
	lx	14,3,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
typefer1:	cal	15,15392(21)
	b	errsym
typefer2:	cal	15,15392(21)
	b	erroob
	.set	._setfn,4
	.globl	C.setfn
C.setfn:	mflr	0
	stu	0,-4(1)
	.globl	setfn
setfn:	cmpl	0,14,23
	blt	setfner2
	cmpl	0,14,22
	bge	setfner2
	cmpl	0,15,21
	blt	setfner1
	cmpl	0,15,22
	bge	setfner1
	stu	16,-4(1)
	l	3,1872(13)
	l	3,0(3)
	l	17,4(3)
	b	setfn3
setfner1:	oril	14,15,0
	cal	15,15424(21)
	b	errsym
setfner2:	cal	15,15424(21)
	b	errnva
setfner3:	cal	15,15424(21)
	oril	14,16,0
	b	erroob
setfn2:	l	3,1872(13)
	l	3,0(3)
	ai	4,17,2
	sli	4,4,2
	lx	16,3,4
	cmpl	0,16,15
	beq	setfn4
setfn3:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	setfn2
	lil	17,0
	b	setfner3
setfn4:	l	3,1876(13)
	l	3,0(3)
	ai	4,17,2
	sli	4,4,2
	lx	17,3,4
	sth	17,24(14)
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	cmp	0,14,22
	blt	setfn5
	l	3,0(14)
	cmpl	0,3,18
	bge	setfn6
setfn5:	.globl	C.vag
	bl	C.vag
setfn6:	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	st	15,8(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._getfn1,3
	.globl	C.getfn1
C.getfn1:	mflr	0
	stu	0,-4(1)
	.globl	getfn1
getfn1:	cmpl	0,14,21
	blt	getfn1r2
	cmpl	0,14,22
	bge	getfn1r2
	cmpl	0,15,21
	blt	getfn1r1
	cmpl	0,15,22
	bge	getfn1r1
	l	3,12(15)
	cmpl	0,3,21
	bne	sybfalse
getfn1i:	.globl	C.getsym1i
	bl	C.getsym1i
	lhz	15,24(14)
	cmpli	0,15,0
	beq	sybfalse
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getfn1r1:	oril	14,15,0
getfn1r2:	cal	15,15520(21)
	b	errsym
	.set	._getfn,5
	.globl	C.getfn
C.getfn:	mflr	0
	stu	0,-4(1)
	.globl	getfn
getfn:	cal	15,15552(21)
	lil	16,0
	cmpli	0,17,2
	beq	getfn2
	cmpli	0,17,3
	beq	getfn3
	lil	14,3
	b	errwna
getfn3:	l	16,0(1)
	ai	1,1,4
	cmpl	0,16,21
	blt	getfner3
	cmpl	0,16,22
	bge	getfner3
getfn2:	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	b	getfns
getfner1:	oril	14,15,0
getfner2:	cal	15,15552(21)
	b	errsym
getfner3:	oril	14,16,0
	b	errsym
	.globl	C.getfns
C.getfns:	mflr	0
	stu	0,-4(1)
getfns:	cmpl	0,15,21
	blt	getfner1
	cmpl	0,15,22
	bge	getfner1
	cmpl	0,14,21
	blt	.sym.2
	cmpl	0,14,22
	blt	getfn5
.sym.2:	cmp	0,14,22
	blt	getfner2
	oril	17,14,0
	cmp	0,17,22
	bge	getfnm1
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getfnm1:	l	14,0(17)
	cmpl	0,14,21
	blt	getfner2
	cmpl	0,14,22
	bge	getfner2
	l	3,4(17)
	stu	3,-4(1)
	.globl	C.getfn5
	bl	C.getfn5
	cmpl	0,14,21
	beq	getfnm2
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getfnm2:	l	17,0(1)
	ai	1,1,4
	cmp	0,17,22
	bge	getfnm1
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.getfn5
C.getfn5:	mflr	0
	stu	0,-4(1)
getfn5:	l	5,28(15)
	cmpl	0,5,20
	blt	.sym.3
	cmpl	0,5,21
	blt	getfnone
.sym.3:	cmp	0,14,22
	blt	getfn8
getfn7:	l	17,4(14)
	l	14,0(14)
	cmpl	0,17,21
	beq	getfn8
	stu	17,-4(1)
	.globl	C.getfn8
	bl	C.getfn8
	l	17,0(1)
	ai	1,1,4
	cmpl	0,14,21
	bne	getfnrt
	oril	14,17,0
	cmp	0,14,22
	blt	getfn8
	b	getfn7
getfnrt:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.getfn8
C.getfn8:	mflr	0
	stu	0,-4(1)
getfn8:getfn80:	oril	17,15,0
getfn81:	l	3,12(15)
	cmpl	0,3,14
	beq	getfn9
	l	15,28(15)
	cmpl	0,15,17
	bne	getfn81
getfn82:	cmpl	0,14,21
	beq	getfn83
	l	14,12(14)
	cmpl	0,14,16
	bne	getfn84
getfn83:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getfn84:	cmp	0,14,22
	blt	getfn80
	b	getfn7
getfn9:	stu	16,-4(1)
	lhz	16,24(15)
	cmpli	0,16,0
	beq	getfn91
	l	16,0(1)
	ai	1,1,4
	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getfn91:	l	16,0(1)
	ai	1,1,4
	b	getfn82
getfnone:	lhz	17,24(15)
	cmpli	0,17,0
	beq	sybfalse
	l	17,12(15)
getfno1:	cmp	0,14,22
	blt	getfno3
getfno2:	l	17,4(14)
	l	14,0(14)
	cmpl	0,17,21
	beq	getfno3
	stu	17,-4(1)
	l	17,12(15)
	.globl	C.getfno3
	bl	C.getfno3
	l	17,0(1)
	ai	1,1,4
	cmpl	0,14,21
	bne	getfnor
	oril	14,17,0
	b	getfno2
getfnor:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.getfno3
C.getfno3:	mflr	0
	stu	0,-4(1)
getfno3:	cmpl	0,14,17
	beq	getfno9
	cmpl	0,14,21
	beq	sybfalse
	l	14,12(14)
	cmpl	0,14,16
	bne	getfno1
getfnof:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getfno9:	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._getbi,4
	.globl	C.getbi
C.getbi:	mflr	0
	stu	0,-4(1)
	.globl	getbi
getbi:	cmpl	0,14,21
	blt	getbier1
	cmpl	0,14,22
	bge	getbier1
	cmpl	0,15,21
	blt	getbier2
	cmpl	0,15,22
	bge	getbier2
	cmpl	0,16,21
	blt	getbier3
	cmpl	0,16,22
	bge	getbier3
	l	3,12(16)
	cmpl	0,3,21
	bne	sybfalse
getbi1:	stu	15,-4(1)
getbi2:	stu	14,-4(1)
	.globl	C.getbi1i
	bl	C.getbi1i
	cmpl	0,14,21
	bne	getbi9
	l	14,0(1)
	ai	1,1,4
	l	15,12(15)
	cmpl	0,15,21
	bne	getbi2
	l	15,0(1)
	ai	1,1,4
	l	14,12(14)
	cmpl	0,14,21
	bne	getbi1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getbi9:	ai	1,1,8
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getbier3:	oril	14,16,0
	b	getbier1
getbier2:	oril	14,15,0
getbier1:	cal	15,15648(21)
	b	errsym
	.globl	C.getbi1i
C.getbi1i:	mflr	0
	stu	0,-4(1)
getbi1i:	l	17,12(16)
	cmp	0,17,22
	blt	getbi1i1
	l	3,0(17)
	cmpl	0,3,14
	bne	getbi1i1
	l	3,4(17)
	cmpl	0,3,15
	bne	getbi1i1
	lhz	17,24(16)
	cmpli	0,17,0
	bne	getbi1i9
getbi1i1:	l	5,28(16)
	cmpl	0,5,20
	blt	.sym.4
	cmpl	0,5,21
	blt	sybfalse
.sym.4:	stu	16,-4(1)
getbi1i2:	l	16,28(16)
	l	17,12(16)
	cmp	0,17,22
	blt	getbi1i3
	l	3,0(17)
	cmpl	0,3,14
	bne	getbi1i3
	l	3,4(17)
	cmpl	0,3,15
	bne	getbi1i3
	lhz	17,24(16)
	cmpli	0,17,0
	bne	getbi1i8
getbi1i3:	l	4,0(1)
	cmpl	0,16,4
	bne	getbi1i2
	ai	1,1,4
	b	sybfalse
getbi1i8:	ai	1,1,4
getbi1i9:	oril	14,16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._remfn,2
	.globl	C.remfn
C.remfn:	mflr	0
	stu	0,-4(1)
	.globl	remfn
remfn:	cmpl	0,14,21
	blt	makunfner
	cmpl	0,14,22
	bge	makunfner
	lil	3,0
	st	3,8(14)
	lil	3,0
	sth	3,24(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
makunfner:	cal	15,15456(21)
	b	errsym
	.set	._findfn,2
	.globl	C.findfn
C.findfn:	mflr	0
	stu	0,-4(1)
	.globl	findfn
findfn:	oril	15,14,0
	l	3,1220(13)
	l	3,0(3)
	l	14,4(3)
	si	4,14,1
	andil.	14,4,0xFFFF
findfn1:	l	3,1220(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	lx	14,3,4
	b	findfn8
findfn2:	oril	16,14,0
	l	5,28(14)
	cmpl	0,5,20
	blt	.sym.5
	cmpl	0,5,21
	blt	findfn4
.sym.5:findfn3:	l	14,28(14)
findfn4:	l	3,8(14)
	cmpl	0,3,15
	beq	findfn9
	cmpl	0,14,16
	bne	findfn3
	l	14,20(14)
findfn8:	cmpl	0,14,21
	blt	.sym.6
	cmpl	0,14,22
	blt	findfn2
.sym.6:	exts	14,14
	si	14,14,1
	cmpi	0,14,0
	bge	findfn1
	lil	14,0
	oril	14,21,0
findfn9:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._synonym,3
	.globl	C.synonym
C.synonym:	mflr	0
	stu	0,-4(1)
	.globl	synonym
synonym:	cmpl	0,14,21
	blt	synmerr2
	cmpl	0,14,22
	bge	synmerr2
	cmpl	0,14,21
	beq	synmerr2
	cmpl	0,15,21
	blt	.sym.7
	cmpl	0,15,22
	blt	synom
.sym.7:	oril	14,15,0
synmerr2:	cal	15,15680(21)
	b	errsym
synom:	lhz	16,24(15)
	cmpli	0,16,0
	beq	synmerr3
	sth	16,24(14)
	l	3,8(15)
	st	3,8(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
synmerr3:	stu	14,-4(1)
	oril	14,15,0
	cal	15,15680(21)
	.globl	C.errudf
	bl	C.errudf
	l	14,0(1)
	ai	1,1,4
	b	synonym
	.set	._synqnym,6
	.globl	C.synqnym
C.synqnym:	mflr	0
	stu	0,-4(1)
	.globl	synqnym
synqnym:	l	15,4(14)
	l	14,0(14)
	l	15,0(15)
	cmpl	0,14,21
	blt	synmerq2
	cmpl	0,14,22
	bge	synmerq2
	cmpl	0,14,21
	beq	synmerq2
	cmpl	0,15,21
	blt	synmerq1
	cmpl	0,15,22
	bge	synmerq1
	b	synom
synmerq1:	oril	14,15,0
synmerq2:	cal	15,15712(21)
	b	errsym
	.set	._remob,2
	.globl	C.remob
C.remob:	mflr	0
	stu	0,-4(1)
	.globl	remob
remob:	cmpl	0,14,23
	blt	remoberr
	cmpl	0,14,22
	bge	remoberr
	b	istdsym
remoberr:	cal	15,15744(21)
	b	errsym
	.set	._getsymb,5
	.globl	C.getsymb
C.getsymb:	mflr	0
	stu	0,-4(1)
	.globl	getsymb
getsymb:	cmpli	0,17,3
	beq	getsymb0
	cmpli	0,17,2
	beq	getsymb1
	cal	15,15616(21)
	lil	14,3
	b	errwna
getsymb0:	l	16,0(1)
	ai	1,1,4
	cmpl	0,16,21
	blt	.sym.8
	cmpl	0,16,22
	blt	getsymb2
.sym.8:	oril	14,16,0
	cal	15,15616(21)
	b	errsym
getsymb1:	lil	16,0
getsymb2:	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	b	getsymi
getsymi:	cmpl	0,15,21
	blt	getsymer
	cmpl	0,15,22
	bge	getsymer
getsymi1:	cmpl	0,14,21
	blt	.sym.9
	cmpl	0,14,22
	blt	getsymi3
.sym.9:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getsymi3:	cmpl	0,14,16
	beq	sybfalse
	stu	14,-4(1)
	.globl	C.getsym1i
	bl	C.getsym1i
	cmpl	0,14,21
	bne	getsymi5
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	sybfalse
	l	14,12(14)
	b	getsymi1
getsymi5:	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getsymer:	cal	14,15616(21)
	b	errsym
	.set	._getsym1,3
	.globl	C.getsym1
C.getsym1:	mflr	0
	stu	0,-4(1)
	.globl	getsym1
getsym1:	cmpl	0,14,21
	blt	getsy1r1
	cmpl	0,14,22
	bge	getsy1r1
	cmpl	0,15,21
	blt	getsy1r2
	cmpl	0,15,22
	bge	getsy1r2
	l	3,12(15)
	cmpl	0,3,21
	bne	sybfalse
	b	getsym1i
	.globl	C.getsym1i
C.getsym1i:	mflr	0
	stu	0,-4(1)
getsym1i:	l	3,12(15)
	cmpl	0,3,14
	beq	getsym12
	l	5,28(15)
	cmpl	0,5,20
	blt	.sym.10
	cmpl	0,5,21
	blt	sybfalse
.sym.10:	oril	17,15,0
getsym11:	l	15,28(15)
	l	3,12(15)
	cmpl	0,3,14
	beq	getsym12
	cmpl	0,15,17
	bne	getsym11
	b	sybfalse
getsym12:	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getsy1r2:	oril	14,15,0
getsy1r1:	cal	15,15584(21)
	b	errsym
	.globl	C.geti
C.geti:	mflr	0
	stu	0,-4(1)
geti:	l	17,4(14)
	oril	16,21,0
	b	geti3
geti2:	l	4,0(17)
	cmpl	0,15,4
	beq	getiret
	l	17,4(17)
	cmp	0,17,22
	blt	geti4
	oril	16,17,0
	l	17,4(17)
	l	3,1216(13)
	cmpli	0,3,0
	beq	.sym.11
	.globl	C.ithard
	bl	C.ithard
.sym.11:geti3:	cmp	0,17,22
	bge	geti2
geti4:	oril	17,21,0
getiret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._getprop,3
	.globl	C.getprop
C.getprop:	mflr	0
	stu	0,-4(1)
	.globl	getprop
getprop:	cmpl	0,14,21
	beq	getpr4
	cmpl	0,14,21
	blt	geterr
	cmpl	0,14,22
	bge	geterr
	l	17,4(14)
	cmp	0,17,22
	blt	getpr4
getpr2:	l	4,0(17)
	cmpl	0,15,4
	beq	getpr5
	l	17,4(17)
	cmp	0,17,22
	blt	getpr4
	l	17,4(17)
	l	3,1216(13)
	cmpli	0,3,0
	beq	.sym.12
	.globl	C.ithard
	bl	C.ithard
.sym.12:	cmp	0,17,22
	bge	getpr2
getpr4:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getpr5:	l	17,4(17)
	cmp	0,17,22
	blt	getpr4
	l	14,0(17)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
geterr:	cal	15,15808(21)
	b	errsym
	.set	._getl,3
	.globl	C.getl
C.getl:	mflr	0
	stu	0,-4(1)
	.globl	getl
getl:	cmpl	0,14,21
	beq	sybfalse
	cmpl	0,14,21
	blt	getlerr
	cmpl	0,14,22
	bge	getlerr
	cmpl	0,15,21
	beq	sybfalse
	cmp	0,15,22
	blt	getlerr2
	l	14,4(14)
	b	getl7
getl1:	l	16,0(14)
	stu	15,-4(1)
getl2:	l	17,0(15)
	cmpl	0,16,17
	beq	getl8
	l	15,4(15)
	cmp	0,15,22
	bge	getl2
	l	15,0(1)
	ai	1,1,4
	l	14,4(14)
	cmp	0,14,22
	blt	getl7
	l	14,4(14)
getl7:	cmp	0,14,22
	bge	getl1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getl8:	l	15,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getlerr:	cal	15,15840(21)
	b	errsym
getlerr2:	oril	14,15,0
	cal	15,15840(21)
	b	errnla
	.set	._addprop,4
	.globl	C.addprop
C.addprop:	mflr	0
	stu	0,-4(1)
	.globl	addprop
addprop:	cmpl	0,14,21
	blt	addpret
	cmpl	0,14,22
	bge	addpret
	cmpl	0,14,21
	beq	addpret
	l	17,4(14)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.sym.13
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.sym.13:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	17,4(6)
	oril	17,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.sym.14
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.sym.14:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	17,4(6)
	oril	17,6,0
	st	17,4(14)
	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
addpret:	cal	15,15872(21)
	b	errnva
	.set	._putprop,4
	.globl	C.putprop
C.putprop:	mflr	0
	stu	0,-4(1)
	.globl	putprop
putprop:	cmpl	0,14,21
	blt	putperr
	cmpl	0,14,22
	bge	putperr
	cmpl	0,14,21
	beq	putperr
	stu	15,-4(1)
	oril	15,16,0
	.globl	C.geti
	bl	C.geti
	oril	16,15,0
	l	15,0(1)
	ai	1,1,4
	cmp	0,17,22
	blt	addprop
	l	17,4(17)
	cmp	0,17,22
	blt	sybfalse
	st	15,0(17)
	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
putperr:	cal	15,15904(21)
	b	errnva
	.set	._defprop,6
	.globl	C.defprop
C.defprop:	mflr	0
	stu	0,-4(1)
	.globl	defprop
defprop:	cmp	0,14,22
	blt	defperr
	l	17,4(14)
	l	14,0(14)
	cmp	0,17,22
	blt	defperr
	l	15,0(17)
	l	16,4(17)
	cmp	0,16,22
	blt	defperr
	l	16,0(16)
	b	putprop
defperr:	cal	15,15936(21)
	b	errnva
	.set	._remprop,3
	.globl	C.remprop
C.remprop:	mflr	0
	stu	0,-4(1)
	.globl	remprop
remprop:	cmpl	0,14,21
	blt	remperr
	cmpl	0,14,22
	bge	remperr
	.globl	C.geti
	bl	C.geti
	cmp	0,17,22
	blt	sybfalse
	stu	17,-4(1)
	l	15,4(17)
	cmp	0,15,22
	blt	rempr2
	l	15,4(15)
rempr2:	cmp	0,16,22
	blt	rempr4
	st	15,4(16)
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rempr4:	st	15,4(14)
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
remperr:	cal	15,15968(21)
	b	errnva
	.globl	C.getset12
C.getset12:	mflr	0
	stu	0,-4(1)
getset12:	cmpli	0,17,1
	beq	getseta
	cmpli	0,17,2
	beq	getsetb
	lil	14,2
	b	errwna
getseta:	l	16,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,21
	blt	getsetc
	cmpl	0,14,22
	bge	getsetc
	mtlr	16
	br	
getsetb:	l	17,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	4,0(1)
	st	16,0(1)
	oril	16,4,0
	cmpl	0,16,21
	blt	getsetd
	cmpl	0,16,22
	bge	getsetd
	cmpl	0,16,21
	beq	getsetd
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getsetd:	oril	14,16,0
getsetc:	b	errsym
	.set	._fincr,6
	.globl	C.fincr
C.fincr:	mflr	0
	stu	0,-4(1)
	.globl	fincr
fincr:	l	3,0(14)
	stu	3,-4(1)
	l	14,4(14)
	cmpl	0,14,21
	bne	incr2
	lil	14,1
	b	incr3
incr2:	.globl	C.evalcar
	bl	C.evalcar
incr3:	oril	15,14,0
	l	14,0(1)
	cmpl	0,14,23
	blt	increrr1
	cmpl	0,14,22
	bge	increrr1
	l	14,0(14)
	lil	17,2
	.globl	C.gaplus2i
	bl	C.gaplus2i
	l	15,0(1)
	ai	1,1,4
	st	14,0(15)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
increrr1:	cal	15,16000(21)
	b	errnva
	.set	._fdecr,6
	.globl	C.fdecr
C.fdecr:	mflr	0
	stu	0,-4(1)
	.globl	fdecr
fdecr:	l	3,0(14)
	stu	3,-4(1)
	l	14,4(14)
	cmpl	0,14,21
	bne	decr2
	lil	14,1
	b	decr3
decr2:	.globl	C.evalcar
	bl	C.evalcar
decr3:	oril	15,14,0
	l	14,0(1)
	cmpl	0,14,23
	blt	decrerr1
	cmpl	0,14,22
	bge	decrerr1
	l	14,0(14)
	.globl	C.gadiff2i
	bl	C.gadiff2i
	l	15,0(1)
	ai	1,1,4
	st	14,0(15)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
decrerr1:	cal	15,16032(21)
	b	errnva
