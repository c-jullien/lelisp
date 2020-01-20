	.csect	lelisp_txt[PR]
	.globl	itsoft
	.globl	errfs
	.globl	errfsgc
	.globl	errfm
	.globl	errfr
	.globl	errff
	.globl	errfn
	.globl	errfv
	.globl	errato
	.globl	errnla
	.globl	errwna
	.globl	errnaa
	.globl	errstc
	.globl	errsym
	.globl	errudf
	.globl	errudm
	.globl	erroob
	.globl	errvec
	.globl	inisymb
	.globl	inicst
	.globl	probjt
	.globl	funcall
	.globl	ffuncall
	.globl	sysprot
	.globl	getfns
	.globl	getbi
	.globl	list
	.globl	gcinfo
	.globl	gettype
	.globl	gccons
	.globl	gcsymb
	.globl	gcstrg
	.globl	gcvect
	.globl	gcfloat
	.globl	gcnumb
	.globl	hgc
	.globl	ini_gc
	.globl	llsend
	.globl	gcstmrk
	.globl	smpvect
	.globl	smpstrg
	.globl	C.ini_gc
C.ini_gc:	mflr	0
	stu	0,-4(1)
ini_gc:	lil	14,2
	cal	15,5740(13)
	l	16,4472(13)
	cal	17,164(13)
	lil	3,._gcuser
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,5742(13)
	l	16,4464(13)
	cal	17,164(13)
	lil	3,._gcalarm
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,15
	cal	15,5749(13)
	l	16,4468(13)
	cal	17,164(13)
	lil	3,._gcalarb
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,5764(13)
	l	16,4456(13)
	cal	17,164(13)
	lil	3,._gcinfo
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,5770(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,4
	cal	15,5774(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,5778(13)
	l	16,4444(13)
	cal	17,164(13)
	lil	3,._tconscl
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,5785(13)
	l	16,4448(13)
	cal	17,164(13)
	lil	3,._tconsmk
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,5792(13)
	l	16,4452(13)
	cal	17,164(13)
	lil	3,._tcons
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,5797(13)
	l	16,4440(13)
	cal	17,164(13)
	lil	3,._tconsp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,5803(13)
	l	16,4436(13)
	cal	17,164(13)
	lil	3,._frcons
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,5811(13)
	l	16,4428(13)
	cal	17,164(13)
	lil	3,._frtree
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,5819(13)
	l	16,4420(13)
	cal	17,164(13)
	lil	3,._gettype
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,5826(13)
	l	16,4412(13)
	cal	17,164(13)
	lil	3,._subtypep
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,5834(13)
	l	16,4416(13)
	cal	17,164(13)
	lil	3,._typep
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,5839(13)
	l	16,4408(13)
	cal	17,164(13)
	lil	3,._llsend
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,5843(13)
	l	16,4388(13)
	cal	17,164(13)
	lil	3,._supsend
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,5853(13)
	l	16,4396(13)
	cal	17,164(13)
	lil	3,._csend
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,5858(13)
	l	16,4384(13)
	cal	17,164(13)
	lil	3,._sendbi
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,5863(13)
	l	16,4400(13)
	cal	17,164(13)
	lil	3,._senderro
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	cal	3,224(21)
	st	3,1452(13)
	lil	14,12
	cal	15,5873(13)
	l	16,4380(13)
	cal	17,164(13)
	lil	3,._strctacc
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,11
	cal	15,5885(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,12
	cal	15,5896(13)
	l	16,4376(13)
	cal	17,164(13)
	lil	3,._smpvect
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,12
	cal	15,5908(13)
	l	16,4368(13)
	cal	17,164(13)
	lil	3,._smpstrg
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,13
	cal	15,5920(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	st	21,0(14)
	lil	14,17
	cal	15,5933(13)
	l	16,4460(13)
	cal	17,164(13)
	lil	3,._fnalzefn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	st	21,1452(13)
	lil	3,0
	st	3,1232(13)
	lil	3,0
	st	3,1236(13)
	lil	3,0
	st	3,1240(13)
	lil	3,0
	st	3,1244(13)
	lil	3,0
	st	3,1248(13)
	lil	3,0
	st	3,1252(13)
	lil	3,0
	st	3,1260(13)
	lil	3,0
	st	3,1256(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.hgc
C.hgc:	mflr	0
	stu	0,-4(1)
hgc:	l	4,1256(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1256(13)
	b	gcgo
	.globl	C.gccons
C.gccons:	mflr	0
	stu	0,-4(1)
gccons:	l	4,1232(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1232(13)
	.globl	C.gcgo
	bl	C.gcgo
	l	3,1308(13)
	exts	3,3
	cmpi	0,3,0
	bgt	gcret
	l	3,1304(13)
	exts	3,3
	cmpi	0,3,400
	bge	gcret
	b	errfm
	.globl	C.gcsymb
C.gcsymb:	mflr	0
	stu	0,-4(1)
gcsymb:	l	4,1236(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1236(13)
	.globl	C.gcgo
	bl	C.gcgo
	l	3,1180(13)
	cmpli	0,3,0
	bne	gcret
	b	errato
	.globl	C.gcstrg
C.gcstrg:	mflr	0
	stu	0,-4(1)
gcstrg:	l	4,1240(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1240(13)
	.globl	C.gcgo
	bl	C.gcgo
	l	3,1172(13)
	cmpl	0,3,21
	bne	gcret
	b	errfr
	.globl	C.gcvect
C.gcvect:	mflr	0
	stu	0,-4(1)
gcvect:	l	4,1244(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1244(13)
	.globl	C.gcgo
	bl	C.gcgo
	l	3,1176(13)
	cmpl	0,3,21
	bne	gcret
	b	errfv
	.globl	C.gcfloat
C.gcfloat:	mflr	0
	stu	0,-4(1)
gcfloat:	l	4,1248(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1248(13)
	.globl	C.gcgo
	bl	C.gcgo
	l	3,1276(13)
	exts	3,3
	cmpi	0,3,0
	bgt	gcret
	l	3,1272(13)
	exts	3,3
	cmpi	0,3,0
	bgt	gcret
	b	errff
gcnumb:	l	4,1252(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1252(13)
	.globl	C.gcgo
	bl	C.gcgo
	l	3,1268(13)
	exts	3,3
	cmpi	0,3,0
	bgt	gcret
	l	3,1264(13)
	exts	3,3
	cmpi	0,3,0
	bgt	gcret
	b	errfn
gcret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.gcgo
C.gcgo:	mflr	0
	stu	0,-4(1)
gcgo:	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	l	3,1712(13)
	stu	3,-4(1)
	l	3,1716(13)
	stu	3,-4(1)
	l	3,1720(13)
	stu	3,-4(1)
	l	3,1724(13)
	stu	3,-4(1)
	l	3,1728(13)
	stu	3,-4(1)
	l	3,1732(13)
	stu	3,-4(1)
	l	3,1736(13)
	stu	3,-4(1)
	l	3,1740(13)
	stu	3,-4(1)
	l	3,1744(13)
	stu	3,-4(1)
	l	3,1748(13)
	stu	3,-4(1)
	l	3,1752(13)
	stu	3,-4(1)
	l	3,1704(13)
	stu	3,-4(1)
	l	3,1436(13)
	stu	3,-4(1)
	l	3,1424(13)
	stu	3,-4(1)
	l	3,1428(13)
	stu	3,-4(1)
	l	3,1440(13)
	stu	3,-4(1)
	l	3,1708(13)
	stu	3,-4(1)
	oril	17,1,0
	l	3,1380(13)
	stu	3,-4(1)
	l	3,1396(13)
	stu	3,-4(1)
	l	3,1400(13)
	stu	3,-4(1)
	l	3,1444(13)
	stu	3,-4(1)
	l	3,1452(13)
	stu	3,-4(1)
	l	3,1872(13)
	stu	3,-4(1)
	l	3,1876(13)
	stu	3,-4(1)
	l	3,1636(13)
	stu	3,-4(1)
	l	3,1640(13)
	stu	3,-4(1)
	l	3,1648(13)
	stu	3,-4(1)
	l	3,1968(13)
	stu	3,-4(1)
	l	3,1360(13)
	stu	3,-4(1)
	l	3,1332(13)
	stu	3,-4(1)
	l	3,1348(13)
	stu	3,-4(1)
	l	3,1352(13)
	stu	3,-4(1)
	l	3,1356(13)
	stu	3,-4(1)
	l	3,1228(13)
	stu	3,-4(1)
	l	3,1936(13)
	stu	3,-4(1)
	l	3,1940(13)
	stu	3,-4(1)
	l	3,1944(13)
	stu	3,-4(1)
	l	3,1948(13)
	stu	3,-4(1)
	l	3,1952(13)
	stu	3,-4(1)
	stu	17,-4(1)
	st	21,1704(13)
	st	21,1436(13)
	st	21,1712(13)
	cal	14,4800(21)
	oril	15,21,0
	.globl	C.itsoft
	bl	C.itsoft
	.globl	C.gcnoit
	bl	C.gcnoit
	cal	14,4768(21)
	oril	15,21,0
	.globl	C.itsoft
	bl	C.itsoft
	l	17,0(1)
	ai	1,1,4
	oril	1,17,0
	l	3,0(1)
	st	3,1708(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1440(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1428(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1424(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1436(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1704(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1752(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1748(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1744(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1740(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1736(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1732(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1728(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1724(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1720(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1716(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1712(13)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
gcend:	.globl	gcpopj
gcpopj:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.gcnoit
C.gcnoit:	mflr	0
	stu	0,-4(1)
gcnoit:	l	3,1212(13)
	cmpli	0,3,0
	beq	gcst0
	l	16,4480(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	lil	3,1
	st	3,1212(13)
	mtlr	16
	br	
	.globl	gcst00
gcst00:	lil	3,0
	st	3,1212(13)
gcst0:gcstmrk:	oril	17,1,0
	l	16,1060(13)
gcst1:	l	14,0(17)
	ai	17,17,4
	.globl	C.mark
	bl	C.mark
	cmpl	0,17,16
	bne	gcst1
	l	14,1220(13)
	l	6,1104(13)
	sf	5,6,14
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,184(13)
	a	3,3,5
	l	5,0(3)
	or	5,5,4
	st	5,0(3)
	l	3,1220(13)
	l	3,0(3)
	l	17,4(3)
	si	4,17,1
	andil.	17,4,0xFFFF
gcat0:	l	3,1220(13)
	l	3,0(3)
	ai	4,17,2
	sli	4,4,2
	lx	17,3,4
	b	gcat8
gcat1:	oril	16,17,0
	l	5,28(17)
	cmpl	0,5,20
	blt	.gc.1
	cmpl	0,5,21
	blt	gcat5
.gc.1:gcat2:	l	17,28(17)
gcat5:	l	14,0(17)
	cal	4,32(21)
	cmpl	0,14,4
	beq	gcatm1
	.globl	C.mark
	bl	C.mark
gcatm1:	l	14,4(17)
	cmpl	0,14,21
	beq	gcatm2
	.globl	C.mark
	bl	C.mark
gcatm2:	l	14,8(17)
	cmpli	0,14,0
	beq	gcatm3
	.globl	C.mark
	bl	C.mark
gcatm3:	l	14,12(17)
	cmpl	0,14,21
	beq	gcatm4
	.globl	C.mark
	bl	C.mark
gcatm4:	l	14,16(17)
	cmpl	0,14,21
	beq	gcatm5
	.globl	C.mark
	bl	C.mark
gcatm5:	l	14,20(17)
	cmpl	0,14,20
	blt	.gc.2
	cmpl	0,14,21
	blt	gcatm9
.gc.2:	l	14,28(17)
	cmpl	0,14,20
	blt	.gc.3
	cmpl	0,14,21
	blt	gcatm9
.gc.3:	l	14,20(14)
gcatm9:	.globl	C.mark
	bl	C.mark
	cmpl	0,17,16
	bne	gcat2
gcat6:	l	17,20(17)
gcat8:	cmpl	0,17,21
	blt	.gc.4
	cmpl	0,17,22
	blt	gcat1
.gc.4:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	gcat0
	lil	17,0
gcat9:	b	gcfnlz
	.globl	C.mark
C.mark:	mflr	0
	stu	0,-4(1)
mark:	l	4,1104(13)
	cmpl	0,14,4
	blt	.gc.5
	l	4,168(13)
	cmpl	0,14,4
	bge	.gc.5
	l	6,1104(13)
	sf	5,6,14
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,184(13)
	a	3,3,5
	l	5,0(3)
	and	5,5,4
	cmpli	0,5,0
	bne	.gc.5
	l	6,1104(13)
	sf	5,6,14
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,184(13)
	a	3,3,5
	l	5,0(3)
	or	5,5,4
	st	5,0(3)
	cmp	0,14,22
	bge	.gc.7
	cmpl	0,14,19
	blt	.gc.11
	cmpl	0,14,20
	blt	.gc.8
.gc.11:	cmpl	0,14,20
	blt	.gc.12
	cmpl	0,14,21
	blt	.gc.6
.gc.12:.gc.5:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
.gc.6:	l	14,4(14)
	b	mark
.gc.7:	l	3,1064(13)
	cmpl	0,1,3
	bge	.gc.13
	b	errfsgc
.gc.13:	l	3,4(14)
	stu	3,-4(1)
	l	14,0(14)
	.globl	C.mark
	bl	C.mark
	l	14,0(1)
	ai	1,1,4
	b	mark
.gc.8:	stu	16,-4(1)
	l	3,0(14)
	l	16,4(3)
	stu	14,-4(1)
	l	3,1064(13)
	cmpl	0,1,3
	bge	.gc.14
	b	errfsgc
.gc.14:	b	.gc.10
.gc.9:	l	3,0(1)
	l	3,0(3)
	ai	4,16,2
	sli	4,4,2
	lx	14,3,4
	stu	16,-4(1)
	.globl	C.mark
	bl	C.mark
	l	16,0(1)
	ai	1,1,4
.gc.10:	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bge	.gc.9
	lil	16,0
	l	14,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	b	.gc.6
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gcfnlz:	cal	15,5504(21)
	l	15,0(15)
	cmpl	0,15,21
	beq	gcfnlz9
	cal	15,5536(21)
	lhz	16,24(15)
	cmpli	0,16,2
	bne	gcfnlz9
	l	16,8(15)
	l	14,1120(13)
gcfnlz2:	l	6,1104(13)
	sf	5,6,14
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,184(13)
	a	3,3,5
	l	5,0(3)
	and	5,5,4
	cmpli	0,5,0
	bne	gcfnlz8
	l	15,0(14)
	cmpl	0,15,21
	beq	gcfnlz8
	cmpl	0,15,19
	blt	.gc.15
	cmpl	0,15,20
	blt	gcfnlz8
.gc.15:	stu	14,-4(1)
	stu	16,-4(1)
	l	3,4476(13)
	stu	3,-4(1)
	mtlr	16
	br	
	.globl	gcfnlz6
gcfnlz6:	l	16,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
gcfnlz8:	ai	14,14,8
	cmpl	0,14,20
	blt	gcfnlz2
gcfnlz9:	b	gcompact
gcompact:	l	16,1092(13)
	l	17,1092(13)
	b	hsweep8
hsweep2:	l	14,0(16)
	cmpl	0,14,20
	blt	.gc.16
	cmpl	0,14,21
	blt	hsweep4
.gc.16:	cmpl	0,14,19
	blt	.gc.17
	cmpl	0,14,20
	blt	hsweep5
.gc.17:	cmpi	0,14,0
	blt	hsweep6
	cmpl	0,14,21
	blt	.gc.18
	cmpl	0,14,22
	blt	hsweep7
.gc.18:	lil	3,13
	cal	4,5950(13)
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
	l	6,1320(13)
	l	5,1100(13)
	l	4,1096(13)
	l	3,1092(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.llovni
	bl	.llovni
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	b	hsweep9
hsweep4:	st	16,1320(13)
	l	15,4(16)
	a	4,15,16
	ai	4,4,13
	lil	3,3
	andc	16,4,3
	l	6,1104(13)
	sf	5,6,14
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,184(13)
	a	3,3,5
	l	5,0(3)
	and	5,5,4
	cmpli	0,5,0
	beq	hsweep8
	l	3,1320(13)
	cmpl	0,3,17
	bne	hsweep41
	oril	17,16,0
	b	hsweep8
hsweep41:	l	3,1320(13)
	sf	4,3,16
	sri	4,4,2
	oril	5,17,0
	cmp	0,5,3
	ble	.gc.22
	oril	6,4,0
	sli	6,6,2
	a	3,3,6
	a	5,5,6
	b	.gc.20
.gc.19:	l	6,0(3)
	st	6,0(5)
.gc.20:	si	3,3,4
	si	5,5,4
	si	4,4,1
	cmpi	0,4,0
	bge	.gc.19
	b	.gc.23
.gc.21:	l	6,0(3)
	st	6,0(5)
	ai	3,3,4
	ai	5,5,4
.gc.22:	si	4,4,1
	cmpi	0,4,0
	bge	.gc.21
.gc.23:	st	17,0(14)
	a	4,15,17
	ai	4,4,13
	lil	3,3
	andc	17,4,3
	b	hsweep8
hsweep5:	st	16,1320(13)
	l	15,4(16)
	sli	3,15,2
	a	4,16,3
	ai	16,4,8
	l	6,1104(13)
	sf	5,6,14
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,184(13)
	a	3,3,5
	l	5,0(3)
	and	5,5,4
	cmpli	0,5,0
	beq	hsweep8
	l	3,1320(13)
	cmpl	0,3,17
	bne	hsweep51
	oril	17,16,0
	b	hsweep8
hsweep51:	l	3,1320(13)
	sf	4,3,16
	sri	4,4,2
	oril	5,17,0
	cmp	0,5,3
	ble	.gc.27
	oril	6,4,0
	sli	6,6,2
	a	3,3,6
	a	5,5,6
	b	.gc.25
.gc.24:	l	6,0(3)
	st	6,0(5)
.gc.25:	si	3,3,4
	si	5,5,4
	si	4,4,1
	cmpi	0,4,0
	bge	.gc.24
	b	.gc.28
.gc.26:	l	6,0(3)
	st	6,0(5)
	ai	3,3,4
	ai	5,5,4
.gc.27:	si	4,4,1
	cmpi	0,4,0
	bge	.gc.26
.gc.28:	st	17,0(14)
	sli	3,15,2
	a	4,17,3
	ai	17,4,8
	b	hsweep8
hsweep6:	st	16,1320(13)
	l	6,1104(13)
	sf	5,6,14
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,184(13)
	a	3,3,5
	l	5,0(3)
	and	5,5,4
	cmpli	0,5,0
	beq	hsweep8
	l	3,1320(13)
	cmpl	0,3,17
	bne	hsweep61
	oril	17,16,0
	b	hsweep8
hsweep61:	l	3,1320(13)
	l	4,1312(13)
	sf	4,3,4
	sri	4,4,2
	oril	5,17,0
	cmp	0,5,3
	ble	.gc.32
	oril	6,4,0
	sli	6,6,2
	a	3,3,6
	a	5,5,6
	b	.gc.30
.gc.29:	l	6,0(3)
	st	6,0(5)
.gc.30:	si	3,3,4
	si	5,5,4
	si	4,4,1
	cmpi	0,4,0
	bge	.gc.29
	b	.gc.33
.gc.31:	l	6,0(3)
	st	6,0(5)
	ai	3,3,4
	ai	5,5,4
.gc.32:	si	4,4,1
	cmpi	0,4,0
	bge	.gc.31
.gc.33:	st	17,0(14)
	b	hsweep8
hsweep7:	st	16,1320(13)
	l	6,1104(13)
	sf	5,6,14
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,184(13)
	a	3,3,5
	l	5,0(3)
	and	5,5,4
	cmpli	0,5,0
	beq	hsweep8
	l	3,1320(13)
	cmpl	0,3,17
	bne	hsweep71
	oril	17,16,0
	b	hsweep8
hsweep71:	l	3,1320(13)
	sf	4,3,16
	sri	4,4,2
	oril	5,17,0
	cmp	0,5,3
	ble	.gc.37
	oril	6,4,0
	sli	6,6,2
	a	3,3,6
	a	5,5,6
	b	.gc.35
.gc.34:	l	6,0(3)
	st	6,0(5)
.gc.35:	si	3,3,4
	si	5,5,4
	si	4,4,1
	cmpi	0,4,0
	bge	.gc.34
	b	.gc.38
.gc.36:	l	6,0(3)
	st	6,0(5)
	ai	3,3,4
	ai	5,5,4
.gc.37:	si	4,4,1
	cmpi	0,4,0
	bge	.gc.36
.gc.38:	st	17,0(14)
hsweep8:	l	4,1096(13)
	cmpl	0,16,4
	blt	hsweep2
	st	17,1096(13)
hsweep9:	b	gcsweep
gcsweep:	lil	14,0
	lil	15,0
	lil	16,0
	l	17,1108(13)
	l	4,1104(13)
	cmpl	0,17,4
	blt	gcswn4
	cmpl	0,17,18
	bge	gcswn4
gcswn1:	l	6,1104(13)
	sf	5,6,17
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,184(13)
	a	3,3,5
	l	5,0(3)
	and	6,5,4
	cmpli	0,6,0
	beq	.gc.39
	andc	5,5,4
	st	5,0(3)
	b	gcswn3
.gc.39:	st	14,0(17)
	oril	14,17,0
	ai	4,15,1
	andil.	15,4,0xFFFF
	exts	3,15
	cmpi	0,3,1024
	blt	lab102
	lil	15,0
	ai	4,16,1
	andil.	16,4,0xFFFF
lab102:	cror	15,15,15
gcswn3:	ai	17,17,4
	cmpl	0,17,18
	blt	gcswn1
gcswn4:	st	14,1164(13)
	st	15,1264(13)
	st	16,1268(13)
	lil	14,0
	lil	15,0
	lil	16,0
	l	17,1112(13)
	cmpi	0,17,0
	bge	gcswf4
gcswf1:	l	6,1104(13)
	sf	5,6,17
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,184(13)
	a	3,3,5
	l	5,0(3)
	and	6,5,4
	cmpli	0,6,0
	beq	.gc.40
	andc	5,5,4
	st	5,0(3)
	b	gcswf3
.gc.40:	st	14,0(17)
	oril	14,17,0
	ai	4,15,1
	andil.	15,4,0xFFFF
	exts	3,15
	cmpi	0,3,1024
	blt	lab103
	lil	15,0
	ai	4,16,1
	andil.	16,4,0xFFFF
lab103:	cror	15,15,15
gcswf3:gcswf4:	st	14,1168(13)
	st	15,1272(13)
	st	16,1276(13)
	oril	14,21,0
	lil	15,0
	lil	16,0
	l	17,1120(13)
gcswv1:	l	6,1104(13)
	sf	5,6,17
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,184(13)
	a	3,3,5
	l	5,0(3)
	and	6,5,4
	cmpli	0,6,0
	beq	.gc.41
	andc	5,5,4
	st	5,0(3)
	b	gcswv2
.gc.41:	st	14,0(17)
	oril	14,17,0
	ai	4,15,1
	andil.	15,4,0xFFFF
	exts	3,15
	cmpi	0,3,1024
	blt	lab104
	lil	15,0
	ai	4,16,1
	andil.	16,4,0xFFFF
lab104:	cror	15,15,15
gcswv2:	ai	17,17,8
	cmpl	0,17,20
	blt	gcswv1
	st	14,1176(13)
	st	15,1280(13)
	st	16,1284(13)
	oril	14,21,0
	lil	15,0
	lil	16,0
	l	17,1128(13)
gcsws1:	l	6,1104(13)
	sf	5,6,17
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,184(13)
	a	3,3,5
	l	5,0(3)
	and	6,5,4
	cmpli	0,6,0
	beq	.gc.42
	andc	5,5,4
	st	5,0(3)
	b	gcsws2
.gc.42:	st	14,0(17)
	oril	14,17,0
	ai	4,15,1
	andil.	15,4,0xFFFF
	exts	3,15
	cmpi	0,3,1024
	blt	lab105
	lil	15,0
	ai	4,16,1
	andil.	16,4,0xFFFF
lab105:	cror	15,15,15
gcsws2:	ai	17,17,8
	cmpl	0,17,21
	blt	gcsws1
	st	14,1172(13)
	st	15,1288(13)
	st	16,1292(13)
	lil	15,0
	lil	16,0
	l	14,1180(13)
	b	gcswyc3
gcswyc2:	l	14,20(14)
	ai	4,15,1
	andil.	15,4,0xFFFF
	exts	3,15
	cmpi	0,3,1024
	blt	lab106
	lil	15,0
	ai	4,16,1
	andil.	16,4,0xFFFF
lab106:	cror	15,15,15
gcswyc3:	cmpl	0,14,21
	blt	.gc.43
	cmpl	0,14,22
	blt	gcswyc2
.gc.43:	st	15,1296(13)
	st	16,1300(13)
	l	3,1220(13)
	l	3,0(3)
	l	14,4(3)
	b	gcswy9
gcswy2:	oril	15,14,0
	l	3,1220(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	lx	14,3,4
	b	gcswy8
gcswy3:	oril	16,14,0
	oril	17,14,0
gcswy4:	l	6,1104(13)
	sf	5,6,14
	sri	5,5,3
	andil.	4,5,31
	sri	5,5,5
	sli	5,5,2
	lil	3,1
	sl	4,3,4
	l	3,184(13)
	a	3,3,5
	l	5,0(3)
	and	6,5,4
	cmpli	0,6,0
	beq	.gc.44
	andc	5,5,4
	st	5,0(3)
	b	gcswy5
.gc.44:	cmpl	0,14,23
	blt	gcswy5
	cmpl	0,14,22
	bge	gcswy5
	l	3,0(14)
	cal	4,32(21)
	cmpl	0,3,4
	bne	gcswy5
	l	3,4(14)
	cmpl	0,3,21
	bne	gcswy5
	l	3,16(14)
	cmpl	0,3,21
	bne	gcswy5
	stu	15,-4(1)
	lhz	15,24(14)
	cmpli	0,15,0
	beq	gcswys
	l	15,0(1)
	ai	1,1,4
gcswy5:	l	5,28(14)
	cmpl	0,5,20
	blt	.gc.45
	cmpl	0,5,21
	blt	gcswy6
.gc.45:gcswy50:	oril	17,14,0
	l	14,28(14)
	cmpl	0,14,16
	bne	gcswy4
gcswy6:	oril	15,16,0
	l	14,20(16)
gcswy8:	cmpl	0,14,21
	blt	.gc.46
	cmpl	0,14,22
	blt	gcswy3
.gc.46:gcswy9:	exts	14,14
	si	14,14,1
	cmpi	0,14,0
	bge	gcswy2
	lil	14,0
	b	gcswcons
gcswys:	l	15,0(1)
	ai	1,1,4
	l	5,28(14)
	cmpl	0,5,20
	blt	.gc.47
	cmpl	0,5,21
	blt	gcswys1
.gc.47:	cmpl	0,14,16
	bne	gcswys2
	b	gcswys3
gcswys1:	l	17,20(14)
	cmpl	0,15,18
	blt	gcswys12
	st	17,20(15)
	b	gcswys14
gcswys12:	l	3,1220(13)
	l	3,0(3)
	ai	4,15,2
	sli	4,4,2
	stx	17,3,4
gcswys14:	l	3,1180(13)
	st	3,20(14)
	st	14,1180(13)
	l	4,1296(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1296(13)
	l	3,1296(13)
	exts	3,3
	cmpi	0,3,1024
	blt	lab107
	lil	3,0
	st	3,1296(13)
	l	4,1300(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1300(13)
lab107:	cror	15,15,15
	oril	14,17,0
	b	gcswy8
gcswys2:	l	3,28(14)
	st	3,28(17)
	l	4,28(16)
	cmpl	0,16,4
	beq	gcswys20
	l	3,1180(13)
	st	3,20(14)
	st	14,1180(13)
	l	4,1296(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1296(13)
	l	3,1296(13)
	exts	3,3
	cmpi	0,3,1024
	blt	lab108
	lil	3,0
	st	3,1296(13)
	l	4,1300(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1300(13)
lab108:	cror	15,15,15
	oril	14,17,0
	b	gcswy50
gcswys20:	l	3,20(14)
	st	3,28(16)
	l	3,1180(13)
	st	3,20(14)
	st	14,1180(13)
	l	4,1296(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1296(13)
	l	3,1296(13)
	exts	3,3
	cmpi	0,3,1024
	blt	lab109
	lil	3,0
	st	3,1296(13)
	l	4,1300(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1300(13)
lab109:	cror	15,15,15
	b	gcswy6
gcswys3:	cmpl	0,15,18
	blt	gcswys30
	l	3,28(16)
	st	3,20(15)
	b	gcswys31
gcswys30:	l	3,1220(13)
	l	3,0(3)
	ai	4,15,2
	sli	4,4,2
	l	5,28(16)
	stx	5,3,4
gcswys31:	oril	17,16,0
gcswys32:	l	17,28(17)
	l	3,28(17)
	cmpl	0,3,16
	bne	gcswys32
	l	3,28(16)
	st	3,28(17)
	l	16,28(16)
	l	4,28(16)
	cmpl	0,16,4
	bne	gcswys33
	l	3,20(16)
	st	3,28(16)
	l	3,20(14)
	st	3,20(16)
	b	gcswys34
gcswys33:	l	3,20(14)
	st	3,20(16)
gcswys34:	l	3,1180(13)
	st	3,20(14)
	st	14,1180(13)
	l	4,1296(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1296(13)
	l	3,1296(13)
	exts	3,3
	cmpi	0,3,1024
	blt	lab110
	lil	3,0
	st	3,1296(13)
	l	4,1300(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1300(13)
lab110:	cror	15,15,15
	oril	14,16,0
	b	gcswy3
	.globl	gcswcons
gcswcons:	oril	14,21,0
	lil	15,0
	lil	16,0
	l	17,1148(13)
	l	6,1104(13)
	sf	5,6,22
	sri	5,5,6
	l	3,184(13)
	a	3,3,5
	l	4,180(13)
	l	16,168(13)
	lil	5,0
.gc.48:	l	6,0(3)
	l	7,0(4)
	and	7,7,6
	st	7,0(4)
	ai	4,4,4
	lil	7,0
.gc.49:	lil	8,1
	sl	8,8,7
	and	8,8,6
	cmpli	0,8,0
	bne	.gc.50
	st	14,4(17)
	st	21,0(17)
	oril	14,17,0
	ai	5,5,1
.gc.50:	ai	17,17,8
	ai	7,7,1
	cmpli	0,7,32
	blt	.gc.49
	lil	7,0
	st	7,0(3)
	ai	3,3,4
	cmpl	0,17,16
	blt	.gc.48
	andil.	3,5,1023
	oril	15,3,0
	sri	5,5,10
	oril	16,5,0
	st	14,1184(13)
	st	15,1304(13)
	st	16,1308(13)
	b	gcswend
gcswend:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._gcuser,5
	.globl	C.gcuser
C.gcuser:	mflr	0
	stu	0,-4(1)
	.globl	gcuser
gcuser:	cmpli	0,17,1
	beq	gcuser5
	cmpli	0,17,0
	beq	gcuser4
	lil	14,1
	cal	15,4736(21)
	b	errwna
gcuser4:	oril	14,21,0
	stu	14,-4(1)
gcuser5:	l	4,1260(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1260(13)
	.globl	C.gcgo
	bl	C.gcgo
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,21
	bne	gcinfo0
	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._gcalarb,1
	.globl	C.gcalarb
C.gcalarb:	mflr	0
	stu	0,-4(1)
	.globl	gcalarb
gcalarb:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._gcalarm,1
	.globl	C.gcalarm
C.gcalarm:	mflr	0
	stu	0,-4(1)
	.globl	gcalarm
gcalarm:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._fnalzefn,2
	.globl	C.fnalzefn
C.fnalzefn:	mflr	0
	stu	0,-4(1)
	.globl	fnalzefn
fnalzefn:	lil	3,34
	cal	4,5963(13)
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
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._gcinfo,5
	.globl	C.gcinfo
C.gcinfo:	mflr	0
	stu	0,-4(1)
	.globl	gcinfo
gcinfo:	cmpli	0,17,0
	beq	gcinfo0
	cmpli	0,17,1
	beq	gcinfo1
	lil	14,1
	cal	15,4832(21)
	b	errwna
gcinfo0:	oril	17,21,0
gcinfou:	cal	3,4736(21)
	stu	3,-4(1)
	l	3,1232(13)
	stu	3,-4(1)
	l	3,1236(13)
	stu	3,-4(1)
	l	3,1240(13)
	stu	3,-4(1)
	l	3,1244(13)
	stu	3,-4(1)
	l	3,1248(13)
	stu	3,-4(1)
	l	3,1252(13)
	stu	3,-4(1)
	l	3,1256(13)
	stu	3,-4(1)
	l	3,1260(13)
	stu	3,-4(1)
	cal	3,16896(21)
	stu	3,-4(1)
	l	14,1304(13)
	l	15,1308(13)
	.globl	C.gcinfz
	bl	C.gcinfz
	stu	14,-4(1)
	cal	3,23136(21)
	stu	3,-4(1)
	l	14,1296(13)
	l	15,1300(13)
	.globl	C.gcinfz
	bl	C.gcinfz
	stu	14,-4(1)
	cal	3,22400(21)
	stu	3,-4(1)
	l	14,1288(13)
	l	15,1292(13)
	.globl	C.gcinfz
	bl	C.gcinfz
	stu	14,-4(1)
	cal	3,23584(21)
	stu	3,-4(1)
	l	14,1280(13)
	l	15,1284(13)
	.globl	C.gcinfz
	bl	C.gcinfz
	stu	14,-4(1)
	cal	3,18688(21)
	stu	3,-4(1)
	l	14,1272(13)
	l	15,1276(13)
	.globl	C.gcinfz
	bl	C.gcinfz
	stu	14,-4(1)
	cal	3,18720(21)
	stu	3,-4(1)
	l	14,1264(13)
	l	15,1268(13)
	.globl	C.gcinfz
	bl	C.gcinfz
	stu	14,-4(1)
	cal	3,4896(21)
	stu	3,-4(1)
	cmpl	0,17,21
	beq	gcinfou2
	l	3,1092(13)
	l	4,1100(13)
	sf	3,3,4
	oril	5,3,0
	andil.	5,5,1023
	oril	14,5,0
	sri	15,3,10
	b	gcinfou3
gcinfou2:	l	3,1096(13)
	l	4,1100(13)
	sf	3,3,4
	oril	5,3,0
	andil.	5,5,1023
	oril	14,5,0
	sri	15,3,10
gcinfou3:	l	6,1184(13)
	cmpl	0,6,21
	bne	.gc.51
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.gc.51:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	15,6,0
	oril	14,15,0
	stu	14,-4(1)
	cal	3,4864(21)
	stu	3,-4(1)
	cmpl	0,17,21
	beq	gcinfou4
	l	3,1080(13)
	l	4,1088(13)
	sf	3,3,4
	oril	5,3,0
	andil.	5,5,1023
	oril	14,5,0
	sri	15,3,10
	b	gcinfou5
gcinfou4:	l	3,1084(13)
	l	4,1088(13)
	sf	3,3,4
	oril	5,3,0
	andil.	5,5,1023
	oril	14,5,0
	sri	15,3,10
gcinfou5:	l	6,1184(13)
	cmpl	0,6,21
	bne	.gc.52
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.gc.52:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	15,6,0
	oril	14,15,0
	stu	14,-4(1)
	lil	17,25
	b	list
gcinfo1:	l	14,0(1)
	ai	1,1,4
	lil	15,0
	lil	16,0
	l	17,1104(13)
	l	4,1104(13)
	cmpl	0,17,4
	blt	gcinfon9
	cmpl	0,17,18
	bge	gcinfon9
gcinfon1:	ai	4,15,1
	andil.	15,4,0xFFFF
	exts	3,15
	cmpi	0,3,1024
	blt	lab111
	lil	15,0
	ai	4,16,1
	andil.	16,4,0xFFFF
lab111:	cror	15,15,15
	ai	17,17,4
	cmpl	0,17,18
	blt	gcinfon1
gcinfon9:	st	15,1264(13)
	st	16,1268(13)
	lil	15,0
	lil	16,0
	l	17,1112(13)
	cmpi	0,17,0
	bge	gcinfof9
gcinfof1:	ai	4,15,1
	andil.	15,4,0xFFFF
	exts	3,15
	cmpi	0,3,1024
	blt	lab112
	lil	15,0
	ai	4,16,1
	andil.	16,4,0xFFFF
lab112:	cror	15,15,15
gcinfof9:	st	15,1272(13)
	st	16,1276(13)
	lil	15,0
	lil	16,0
	l	17,1120(13)
gcinfov1:	ai	4,15,1
	andil.	15,4,0xFFFF
	exts	3,15
	cmpi	0,3,1024
	blt	lab113
	lil	15,0
	ai	4,16,1
	andil.	16,4,0xFFFF
lab113:	cror	15,15,15
	ai	17,17,8
	cmpl	0,17,20
	blt	gcinfov1
	st	15,1280(13)
	st	16,1284(13)
	lil	15,0
	lil	16,0
	l	17,1128(13)
gcinfos1:	ai	4,15,1
	andil.	15,4,0xFFFF
	exts	3,15
	cmpi	0,3,1024
	blt	lab114
	lil	15,0
	ai	4,16,1
	andil.	16,4,0xFFFF
lab114:	cror	15,15,15
	ai	17,17,8
	cmpl	0,17,21
	blt	gcinfos1
	st	15,1288(13)
	st	16,1292(13)
	lil	15,0
	lil	16,0
	l	17,1136(13)
gcinfoy1:	ai	4,15,1
	andil.	15,4,0xFFFF
	exts	3,15
	cmpi	0,3,1024
	blt	lab115
	lil	15,0
	ai	4,16,1
	andil.	16,4,0xFFFF
lab115:	cror	15,15,15
	ai	17,17,32
	cmpl	0,17,22
	blt	gcinfoy1
	st	15,1296(13)
	st	16,1300(13)
	lil	15,0
	lil	16,0
	l	17,1148(13)
gcinfol1:	ai	4,15,1
	andil.	15,4,0xFFFF
	exts	3,15
	cmpi	0,3,1024
	blt	lab116
	lil	15,0
	ai	4,16,1
	andil.	16,4,0xFFFF
lab116:	cror	15,15,15
	ai	17,17,8
	l	3,168(13)
	cmpl	0,17,3
	blt	gcinfol1
	st	15,1304(13)
	st	16,1308(13)
	lil	17,0
	b	gcinfou
	.globl	C.gcinfz
C.gcinfz:	mflr	0
	stu	0,-4(1)
gcinfz:	cmpli	0,15,0
	beq	gcinfz9
	exts	3,15
	cmpi	0,3,32
	bge	gcinfz1
	exts	4,15
	muli	4,4,1024
	andil.	15,4,0xFFFF
	a	4,15,14
	andil.	14,4,0xFFFF
	b	gcinfz9
gcinfz1:	l	6,1184(13)
	cmpl	0,6,21
	bne	.gc.53
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.gc.53:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	15,6,0
	oril	14,15,0
gcinfz9:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._tcons,3
	.globl	C.tcons
C.tcons:	mflr	0
	stu	0,-4(1)
	.globl	tcons
tcons:	l	6,1184(13)
	cmpl	0,6,21
	bne	.gc.54
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.gc.54:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	15,4(6)
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
	.set	._tconsmk,2
	.globl	C.tconsmk
C.tconsmk:	mflr	0
	stu	0,-4(1)
	.globl	tconsmk
tconsmk:	cmp	0,14,22
	blt	tcmker
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
tcmker:	cal	15,4960(21)
	b	errnla
	.set	._tconscl,2
	.globl	C.tconscl
C.tconscl:	mflr	0
	stu	0,-4(1)
	.globl	tconscl
tconscl:	cmp	0,14,22
	blt	tccler
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
	andc	5,5,4
	st	5,0(3)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
tccler:	cal	15,4928(21)
	b	errnla
	.set	._tconsp,2
	.globl	C.tconsp
C.tconsp:	mflr	0
	stu	0,-4(1)
	.globl	tconsp
tconsp:	cmp	0,14,22
	blt	tconsp1
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
	bne	tconsp2
tconsp1:	oril	14,21,0
tconsp2:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._frcons,2
	.globl	C.frcons
C.frcons:	mflr	0
	stu	0,-4(1)
	.globl	frcons
frcons:	l	3,1212(13)
	cmpli	0,3,0
	beq	frcs1
	l	16,4432(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	lil	3,1
	st	3,1212(13)
	mtlr	16
	br	
	.globl	frcs0
frcs0:	lil	3,0
	st	3,1212(13)
frcs1:	l	15,1184(13)
	cmp	0,14,22
	blt	frcser
	st	21,0(14)
	st	15,4(14)
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
	andc	5,5,4
	st	5,0(3)
	st	14,1184(13)
	oril	15,21,0
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
frcser:	cal	15,5056(21)
	b	errnla
	.set	._frtree,2
	.globl	C.frtree
C.frtree:	mflr	0
	stu	0,-4(1)
	.globl	frtree
frtree:	l	3,1212(13)
	cmpli	0,3,0
	beq	frtr1
	l	16,4424(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	lil	3,1
	st	3,1212(13)
	mtlr	16
	br	
	.globl	frtr0
frtr0:	lil	3,0
	st	3,1212(13)
frtr1:	l	17,1184(13)
	.globl	C.frtr3
	bl	C.frtr3
	st	17,1184(13)
	oril	17,21,0
	oril	16,21,0
	oril	15,21,0
	oril	14,21,0
frtret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
frtr2:	oril	14,16,0
	b	frtr3
	.globl	C.frtr3
C.frtr3:	mflr	0
	stu	0,-4(1)
frtr3:	cmp	0,14,22
	blt	frtret
	b	frtr4
	.globl	C.frtr4
C.frtr4:	mflr	0
	stu	0,-4(1)
frtr4:	l	15,0(14)
	l	16,4(14)
	st	17,4(14)
	st	21,0(14)
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
	andc	5,5,4
	st	5,0(3)
	oril	17,14,0
	cmp	0,15,22
	blt	frtr2
	stu	16,-4(1)
	oril	14,15,0
	.globl	C.frtr4
	bl	C.frtr4
	l	14,0(1)
	ai	1,1,4
	b	frtr3
	.set	._gettype,2
	.globl	C.gettype
C.gettype:	mflr	0
	stu	0,-4(1)
	.globl	gettype
gettype:	cmp	0,14,22
	blt	gettype0
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
	beq	gettype2
	l	14,0(14)
	cmpl	0,14,21
	blt	.gc.55
	cmpl	0,14,22
	blt	gettyper
.gc.55:	cmpl	0,14,18
	blt	gettypfx
	cmp	0,14,22
	blt	gettyper
	l	5,0(14)
	cmpl	0,5,21
	blt	gettypfx
	cmpl	0,5,22
	bge	gettypfx
gettyper:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gettype0:	cmpl	0,14,19
	blt	.gc.56
	cmpl	0,14,20
	blt	gettype1
.gc.56:	cmpl	0,14,18
	blt	gettype6
	cmpi	0,14,0
	blt	gettype5
	cmpl	0,14,20
	blt	.gc.57
	cmpl	0,14,21
	blt	gettype1
.gc.57:	cmpl	0,14,21
	beq	gettype3
	cmpl	0,14,21
	blt	.gc.58
	cmpl	0,14,22
	blt	gettype4
.gc.58:gettype6:	cal	14,18720(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gettype1:	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gettype2:	cal	14,16896(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gettype3:	cal	14,16160(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gettype4:	cal	14,23136(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gettype5:	cal	14,18688(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
gettypfx:	cal	14,5408(21)
	l	14,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._typep,3
	.globl	C.typep
C.typep:	mflr	0
	stu	0,-4(1)
	.globl	typep
typep:	l	3,4412(13)
	stu	3,-4(1)
	b	gettype
	.set	._subtypep,3
	.globl	C.subtypep
C.subtypep:	mflr	0
	stu	0,-4(1)
	.globl	subtypep
subtypep:	cmpl	0,14,21
	blt	subtypr1
	cmpl	0,14,22
	bge	subtypr1
	cmpl	0,15,21
	blt	subtypr2
	cmpl	0,15,22
	bge	subtypr2
	b	subtyp1
subtyp0:	l	14,12(14)
subtyp1:	cmpl	0,14,15
	beq	subtyp3
	cmp	0,14,22
	bge	subtyp5
	cmpl	0,14,21
	blt	subtyp2
	cmpl	0,14,22
	bge	subtyp2
	cmpl	0,14,21
	bne	subtyp0
subtyp2:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
subtyp3:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
subtyp4:	l	14,0(1)
	ai	1,1,4
	cmp	0,14,22
	blt	subtyp7
subtyp5:	l	3,4(14)
	stu	3,-4(1)
	l	14,0(14)
	.globl	C.subtyp7
	bl	C.subtyp7
	cmpl	0,14,21
	beq	subtyp4
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
subtyp6:	l	14,12(14)
	b	subtyp7
	.globl	C.subtyp7
C.subtyp7:	mflr	0
	stu	0,-4(1)
subtyp7:	cmpl	0,14,15
	beq	subtyp9
	cmp	0,14,22
	bge	subtyp5
	cmpl	0,14,21
	blt	subtyp8
	cmpl	0,14,22
	bge	subtyp8
	cmpl	0,14,21
	bne	subtyp6
subtyp8:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
subtyp9:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
subtypr2:	oril	14,15,0
subtypr1:	cal	15,5152(21)
	b	errsym
	.set	._llsend,5
	.globl	C.llsend
C.llsend:	mflr	0
	stu	0,-4(1)
	.globl	llsend
llsend:	exts	3,17
	cmpi	0,3,1
	ble	sender
	si	4,17,1
	andil.	17,4,0xFFFF
	si	4,17,1
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	14,1,3
	ai	4,17,1
	andil.	17,4,0xFFFF
	cmpl	0,14,19
	blt	send2
	cmpl	0,14,20
	bge	send2
	l	14,4(14)
send1:	sli	3,17,2
	lx	15,1,3
	cal	16,0(21)
	stu	17,-4(1)
	.globl	C.getfns
	bl	C.getfns
	l	17,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	send3
	sli	5,17,2
	l	4,4404(13)
	stx	4,1,5
	b	ffuncall
send2:	.globl	C.gettype
	bl	C.gettype
	b	send1
send3:	oril	16,17,0
	b	send5
send4:	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.gc.59
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.gc.59:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
send5:	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bge	send4
	lil	16,0
	stu	14,-4(1)
	lil	17,2
	cal	14,5344(21)
	b	ffuncall
sender:	lil	14,2
	cal	15,5216(21)
	b	errwna
	.set	._senderro,3
	.globl	C.senderro
C.senderro:	mflr	0
	stu	0,-4(1)
	.globl	senderro
senderro:	l	6,1184(13)
	cmpl	0,6,21
	bne	.gc.60
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.gc.60:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	15,4(6)
	oril	14,6,0
	cal	15,5216(21)
	b	errudm
	.set	._csend,5
	.globl	C.csend
C.csend:	mflr	0
	stu	0,-4(1)
	.globl	csend
csend:	exts	3,17
	cmpi	0,3,2
	ble	csender
	l	3,4392(13)
	stu	3,-4(1)
	si	4,17,1
	andil.	17,4,0xFFFF
	si	4,17,1
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	14,1,3
	b	gettype
	.globl	csend1
csend1:	sli	3,17,2
	lx	15,1,3
	cal	16,0(21)
	stu	17,-4(1)
	.globl	C.getfns
	bl	C.getfns
	l	17,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	csend3
	sli	5,17,2
	l	4,4404(13)
	stx	4,1,5
	ai	4,17,1
	andil.	17,4,0xFFFF
	sli	5,17,2
	l	4,4404(13)
	stx	4,1,5
	si	4,17,1
	andil.	17,4,0xFFFF
	b	ffuncall
csend3:	ai	4,17,2
	andil.	17,4,0xFFFF
	b	funcall
csender:	lil	14,3
	cal	15,5280(21)
	b	errwna
	.set	._supsend,5
	.globl	C.supsend
C.supsend:	mflr	0
	stu	0,-4(1)
	.globl	supsend
supsend:	exts	3,17
	cmpi	0,3,2
	ble	supsenr1
	stu	17,-4(1)
	sli	3,17,2
	lx	15,1,3
	si	4,17,2
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	14,1,3
	.globl	C.typep
	bl	C.typep
	cmpl	0,14,21
	beq	supsenr3
	l	17,0(1)
	ai	1,1,4
	si	4,17,1
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	14,1,3
	cmpl	0,14,21
	blt	supsenr2
	cmpl	0,14,22
	bge	supsenr2
	l	14,12(14)
	sli	5,17,2
	l	4,4404(13)
	stx	4,1,5
	si	4,17,1
	andil.	17,4,0xFFFF
	b	send1
supsenr1:	lil	14,3
	cal	15,5248(21)
	b	errwna
supsenr2:	cal	15,5248(21)
	b	errsym
supsenr3:	cal	15,5248(21)
	l	17,0(1)
	ai	1,1,4
	si	4,17,1
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	14,1,3
	si	4,17,2
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	16,1,3
	l	6,1184(13)
	cmpl	0,6,21
	bne	.gc.61
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.gc.61:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	21,4(6)
	oril	16,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.gc.62
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.gc.62:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	16,4(6)
	oril	14,6,0
	b	erroob
	.set	._sendbi,5
	.globl	C.sendbi
C.sendbi:	mflr	0
	stu	0,-4(1)
	.globl	sendbi
sendbi:	exts	3,17
	cmpi	0,3,2
	ble	sendbier
	stu	17,-4(1)
	si	4,17,1
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	14,1,3
	.globl	C.gettype
	bl	C.gettype
	stu	14,-4(1)
	sli	3,17,2
	lx	14,1,3
	.globl	C.gettype
	bl	C.gettype
	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	si	4,17,1
	andil.	17,4,0xFFFF
	sli	3,17,2
	lx	16,1,3
	stu	17,-4(1)
	.globl	C.getbi
	bl	C.getbi
	l	17,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	sendbi3
	sli	5,17,2
	l	4,4404(13)
	stx	4,1,5
	b	ffuncall
sendbi2:	l	16,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.gc.63
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.gc.63:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
sendbi3:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	sendbi2
	lil	17,0
	cal	15,5312(21)
	b	errudm
sendbier:	lil	14,3
	cal	15,5312(21)
	b	errwna
	.set	._strctacc,5
	.globl	C.strctacc
C.strctacc:	mflr	0
	stu	0,-4(1)
	.globl	strctacc
strctacc:	cmpli	0,17,5
	bne	fieldr1
	l	14,8(1)
	cmpl	0,14,19
	blt	fieldr2
	cmpl	0,14,20
	bge	fieldr2
	l	15,16(1)
	cmpl	0,15,21
	blt	fieldr3
	cmpl	0,15,22
	bge	fieldr3
	l	15,12(15)
	stu	14,-4(1)
	stu	17,-4(1)
	.globl	C.typep
	bl	C.typep
	l	17,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	fieldr4
	l	16,12(1)
	exts	3,16
	cmpi	0,3,0
	blt	fieldr5
	l	3,0(15)
	l	17,4(3)
	exts	3,16
	exts	4,17
	cmp	0,3,4
	bge	fieldr4
	l	17,0(1)
fieldn:	cmpli	0,17,1
	beq	fieldget
	cmpli	0,17,2
	beq	fieldset
	lil	14,1
	l	15,16(1)
	b	errwna
fieldget:	l	3,0(15)
	ai	4,16,2
	sli	4,4,2
	lx	14,3,4
	ai	1,1,20
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fieldset:	l	14,4(1)
	l	3,0(15)
	ai	4,16,2
	sli	4,4,2
	stx	14,3,4
	ai	1,1,20
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fieldr1:	lil	14,5
	cal	15,5376(21)
	b	errwna
fieldr4:	oril	14,15,0
fieldr2:	l	15,16(1)
	b	errstc
fieldr3:	oril	14,15,0
	l	15,16(1)
	b	errnaa
fieldr5:	oril	14,16,0
	cal	15,5376(21)
	b	erroob
	.set	._smpvect,2
	.globl	C.smpvect
C.smpvect:	mflr	0
	stu	0,-4(1)
	.globl	smpvect
smpvect:	l	15,1120(13)
smpvect2:	l	5,0(15)
	cmpl	0,5,19
	blt	.gc.64
	cmpl	0,5,20
	blt	smpvect4
.gc.64:	l	3,0(15)
	cmpl	0,3,21
	beq	smpvect4
	stu	15,-4(1)
	stu	14,-4(1)
	l	3,4372(13)
	stu	3,-4(1)
	stu	14,-4(1)
	stu	15,-4(1)
	lil	17,2
	b	funcall
	.globl	smpvect3
smpvect3:	l	14,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
smpvect4:	ai	15,15,8
	cmpl	0,15,20
	blt	smpvect2
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._smpstrg,2
	.globl	C.smpstrg
C.smpstrg:	mflr	0
	stu	0,-4(1)
	.globl	smpstrg
smpstrg:	l	15,1128(13)
smpstrg2:	l	5,0(15)
	cmpl	0,5,20
	blt	.gc.65
	cmpl	0,5,21
	blt	smpstrg4
.gc.65:	l	3,0(15)
	cmpl	0,3,21
	beq	smpstrg4
	stu	15,-4(1)
	stu	14,-4(1)
	l	3,4364(13)
	stu	3,-4(1)
	stu	14,-4(1)
	stu	15,-4(1)
	lil	17,2
	b	funcall
	.globl	smpstrg3
smpstrg3:	l	14,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
smpstrg4:	ai	15,15,8
	cmpl	0,15,21
	blt	smpstrg2
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
