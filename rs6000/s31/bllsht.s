	.csect	lelisp_txt[PR]
	.globl	reenter
	.globl	theend
	.globl	errnda
	.globl	errwna
	.globl	errnia
	.globl	errnva
	.globl	errvec
	.globl	errfs
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	inisymb
	.globl	inicst
	.globl	apply
	.globl	evalcar
	.globl	ini_bll
	.globl	epur
	.globl	loc
	.globl	vag
	.globl	vaga1
	.globl	C.ini_bll
C.ini_bll:	mflr	0
	stu	0,-4(1)
ini_bll:	lil	14,3
	cal	15,9285(13)
	l	16,2076(13)
	cal	17,164(13)
	lil	3,._loc
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,9288(13)
	l	16,2072(13)
	cal	17,164(13)
	lil	3,._locint
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	cal	3,224(21)
	st	3,12(14)
	lil	14,3
	cal	15,9294(13)
	l	16,2068(13)
	cal	17,164(13)
	lil	3,._vag
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,9297(13)
	l	16,2040(13)
	cal	17,164(13)
	lil	3,._memory
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,9303(13)
	l	16,2036(13)
	cal	17,164(13)
	lil	3,._bltmemory
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,9312(13)
	l	16,2064(13)
	cal	17,164(13)
	lil	3,._addadr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,9318(13)
	l	16,2060(13)
	cal	17,164(13)
	lil	3,._incradr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,9325(13)
	l	16,2056(13)
	cal	17,164(13)
	lil	3,._subadr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,9331(13)
	l	16,2052(13)
	cal	17,164(13)
	lil	3,._gtadr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,9336(13)
	l	16,2048(13)
	cal	17,164(13)
	lil	3,._accode
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	cal	3,224(21)
	st	3,12(14)
	lil	14,5
	cal	15,9341(13)
	l	16,2044(13)
	cal	17,164(13)
	lil	3,._aecode
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	cal	3,224(21)
	st	3,12(14)
	lil	14,10
	cal	15,9346(13)
	l	16,2032(13)
	cal	17,164(13)
	lil	3,._precomp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,9356(13)
	l	16,2028(13)
	cal	17,164(13)
	lil	3,._llcall
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,9360(13)
	l	16,2024(13)
	cal	17,164(13)
	lil	3,._llcaln
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._loc,2
	.globl	C.loc
C.loc:	mflr	0
	stu	0,-4(1)
	.globl	loc
loc:	sri	15,14,16
	andil.	14,14,0xFFFF
	cmpli	0,15,0
	beq	loc9
	l	6,1184(13)
	cmpl	0,6,21
	bne	.bll.1
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.bll.1:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
loc9:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._locint,2
	.globl	C.locint
C.locint:	mflr	0
	stu	0,-4(1)
	.globl	locint
locint:	sri	15,14,16
	andil.	14,14,0xFFFF
	a	4,15,14
	andil.	14,4,0xFFFF
	andil.	14,14,32767
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._vag,2
	.globl	C.vag
C.vag:	mflr	0
	stu	0,-4(1)
	.globl	vag
vag:	cal	15,23776(21)
	b	vaga1
	.globl	C.vaga1
C.vaga1:	mflr	0
	stu	0,-4(1)
vaga1:	cmp	0,14,22
	blt	vagc
	l	3,0(14)
	cmpl	0,3,18
	bge	vagerr
	l	3,4(14)
	cmpl	0,3,18
	bge	vagerr
	l	15,0(14)
	l	14,4(14)
	sli	3,15,16
	or	14,3,14
vagret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
vagc:	cmpl	0,14,18
	bge	vagerr
	l	4,1104(13)
	cmpl	0,14,4
	blt	vagret
	cmpl	0,14,18
	bge	vagret
	l	14,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
vagerr3:	oril	14,16,0
vagerr:	b	errnda
	.globl	C.vaga3
C.vaga3:	mflr	0
	stu	0,-4(1)
vaga3:	cmp	0,16,22
	blt	vaga3c
	l	3,0(16)
	cmpl	0,3,18
	bge	vagerr3
	l	3,4(16)
	cmpl	0,3,18
	bge	vagerr3
	l	15,0(16)
	l	16,4(16)
	sli	3,15,16
	or	16,3,16
vaga3ret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
vaga3c:	cmpl	0,16,18
	bge	vagerr3
	l	4,1104(13)
	cmpl	0,16,4
	blt	vaga3ret
	cmpl	0,16,18
	bge	vaga3ret
	l	16,0(16)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._addadr,3
	.globl	C.addadr
C.addadr:	mflr	0
	stu	0,-4(1)
	.globl	addadr
addadr:	cal	3,23872(21)
	st	3,2016(13)
	.globl	C.adrverif
	bl	C.adrverif
	a	3,14,15
	lil	4,0
	a	3,3,4
	sri	15,3,16
	andil.	14,3,0xFFFF
	a	3,16,17
	a	3,3,15
	sri	15,3,16
	andil.	16,3,0xFFFF
	b	adrcreat
	.set	._incradr,3
	.globl	C.incradr
C.incradr:	mflr	0
	stu	0,-4(1)
	.globl	incradr
incradr:	stu	14,-4(1)
	cal	3,23904(21)
	st	3,2016(13)
	.globl	C.adrverif
	bl	C.adrverif
	a	3,14,15
	lil	4,0
	a	3,3,4
	sri	15,3,16
	andil.	14,3,0xFFFF
	a	3,16,17
	a	3,3,15
	sri	15,3,16
	andil.	16,3,0xFFFF
	l	17,0(1)
	ai	1,1,4
	cmpli	0,16,0
	bne	incadr2
	exts	3,14
	cmpi	0,3,0
	bge	incadr3
incadr2:	cmpli	0,16,0xFFFF
	beq	incadr3
	cmp	0,17,22
	blt	incadr1
	st	16,0(17)
	st	14,4(17)
	oril	14,17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
incadr1:	l	6,1184(13)
	cmpl	0,6,21
	bne	.bll.2
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.bll.2:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
incadr3:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._subadr,3
	.globl	C.subadr
C.subadr:	mflr	0
	stu	0,-4(1)
	.globl	subadr
subadr:	cal	3,23936(21)
	st	3,2016(13)
	.globl	C.adrverif
	bl	C.adrverif
	stu	16,-4(1)
	xoril	15,15,0xFFFF
	xoril	17,17,0xFFFF
	lil	4,1
	a	3,15,4
	lil	4,0
	a	3,3,4
	sri	16,3,16
	andil.	15,3,0xFFFF
	lil	4,0
	a	3,17,4
	a	3,3,16
	sri	16,3,16
	andil.	17,3,0xFFFF
	l	16,0(1)
	ai	1,1,4
	a	3,14,15
	lil	4,0
	a	3,3,4
	sri	15,3,16
	andil.	14,3,0xFFFF
	a	3,16,17
	a	3,3,15
	sri	15,3,16
	andil.	16,3,0xFFFF
	b	adrcreat
	.set	._gtadr,3
	.globl	C.gtadr
C.gtadr:	mflr	0
	stu	0,-4(1)
	.globl	gtadr
gtadr:	cal	3,23968(21)
	st	3,2016(13)
	.globl	C.adrverif
	bl	C.adrverif
	cmpl	0,16,17
	blt	gtadr0
	beq	gtadr1
	b	gtadr2
gtadr1:	cmpl	0,14,15
	blt	gtadr0
	beq	gtadr0
	b	gtadr2
gtadr2:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gtadr0:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.adrverif
C.adrverif:	mflr	0
	stu	0,-4(1)
adrverif:	cmp	0,14,22
	bge	adrver1
	cmpl	0,14,18
	bge	adrerr1
	lil	16,0
	exts	3,14
	cmpi	0,3,0
	bge	adrver4
	xor	16,16,16
	oril	16,16,0xFFFF
adrver4:	cmp	0,15,22
	bge	adrver2
	cmpl	0,15,18
	bge	adrerr2
	lil	17,0
	exts	3,15
	cmpi	0,3,0
	bge	adrver5
	xor	17,17,17
	oril	17,17,0xFFFF
adrver5:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
adrver2:	l	17,0(15)
	cmpl	0,17,18
	bge	adrerr2
	l	3,4(15)
	cmpl	0,3,18
	bge	adrerr2
	l	15,4(15)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
adrver1:	cmp	0,15,22
	bge	adrver3
	cmpl	0,15,18
	bge	adrerr2
	l	16,0(14)
	cmpl	0,16,18
	bge	adrerr1
	lil	17,0
	exts	3,15
	cmpi	0,3,0
	bge	adrver6
	xor	17,17,17
	oril	17,17,0xFFFF
adrver6:	l	3,4(14)
	cmpl	0,3,18
	bge	adrerr1
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
adrver3:	l	16,0(14)
	cmpl	0,16,18
	bge	adrerr1
	l	17,0(15)
	cmpl	0,17,18
	bge	adrerr2
	l	3,4(14)
	cmpl	0,3,18
	bge	adrerr1
	l	14,4(14)
	l	3,4(15)
	cmpl	0,3,18
	bge	adrerr2
	l	15,4(15)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
adrerr2:	oril	14,15,0
adrerr1:	l	15,2016(13)
	b	errnda
adrcreat:	cmpli	0,16,0
	bne	adrcrea1
	exts	3,14
	cmpi	0,3,0
	blt	adrcrea2
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
adrcrea1:	cmpli	0,16,0xFFFF
	bne	adrcrea2
	exts	3,14
	cmpi	0,3,0
	blt	adrcrear
adrcrea2:	l	6,1184(13)
	cmpl	0,6,21
	bne	.bll.3
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.bll.3:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
adrcrear:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._accode,5
	.globl	C.accode
C.accode:	mflr	0
	stu	0,-4(1)
	.globl	accode
accode:	cal	15,24000(21)
	cmpli	0,17,0
	beq	accodeg
	cmpli	0,17,1
	beq	accodes
	lil	14,1
	b	errwna
accodes:	l	14,0(1)
	ai	1,1,4
	.globl	C.vaga1
	bl	C.vaga1
	st	14,1084(13)
accodeg:	l	14,1084(13)
	b	loc
	.set	._aecode,1
	.globl	C.aecode
C.aecode:	mflr	0
	stu	0,-4(1)
	.globl	aecode
aecode:	l	14,1088(13)
	b	loc
	.set	._memory,5
	.globl	C.memory
C.memory:	mflr	0
	stu	0,-4(1)
	.globl	memory
memory:	cal	15,23808(21)
	cmpli	0,17,2
	bne	memor2
	l	14,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	.globl	C.vaga3
	bl	C.vaga3
	sth	14,0(16)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
memor2:	cmpli	0,17,1
	bne	memor3
	l	14,0(1)
	ai	1,1,4
	.globl	C.vaga1
	bl	C.vaga1
	lhz	3,0(14)
	andil.	14,3,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
memor3:	lil	14,2
	b	errwna
	.set	._bltmemory,4
	.globl	C.bltmemory
C.bltmemory:	mflr	0
	stu	0,-4(1)
	.globl	bltmemory
bltmemory:	stu	15,-4(1)
	cal	15,23840(21)
	.globl	C.vaga1
	bl	C.vaga1
	.globl	C.vaga3
	bl	C.vaga3
	oril	17,14,0
	l	14,0(1)
	.globl	C.vaga1
	bl	C.vaga1
	oril	15,17,0
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._precomp,6
	.globl	C.precomp
C.precomp:	mflr	0
	stu	0,-4(1)
	.globl	precomp
precomp:	b	evalcar
	.set	._llcall,5
	.globl	C.llcall
C.llcall:	mflr	0
	stu	0,-4(1)
	.globl	llcall
llcall:	cmpli	0,17,4
	bne	callerr1
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	stu	15,-4(1)
	.globl	C.vaga1
	bl	C.vaga1
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	oril	15,14,0
	oril	14,17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
callerr1:	cal	15,24096(21)
	lil	14,4
	b	errwna
	.set	._llcaln,3
	.globl	C.llcaln
C.llcaln:	mflr	0
	stu	0,-4(1)
	.globl	llcaln
llcaln:	oril	16,15,0
	cal	15,24128(21)
	.globl	C.vaga1
	bl	C.vaga1
	lil	17,0
	b	calln3
calln2:	l	3,0(16)
	stu	3,-4(1)
	l	3,1068(13)
	cmpl	0,1,3
	bge	.bll.4
	b	errfs
.bll.4:	l	16,4(16)
	ai	4,17,1
	andil.	17,4,0xFFFF
calln3:	cmp	0,16,22
	bge	calln2
	mtlr	14
	br	
epur:	cror	15,15,15
