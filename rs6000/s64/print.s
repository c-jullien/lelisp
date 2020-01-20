	.csect	lelisp_txt[PR]
	.globl	itsoft
	.globl	errfsp
	.globl	errsym
	.globl	errnia
	.globl	errnla
	.globl	errnva
	.globl	erroob
	.globl	errvec
	.globl	errwna
	.globl	getsetn
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	gettype
	.globl	tystrg
	.globl	tynewln
	.globl	inisymb
	.globl	inicst
	.globl	fascii
	.globl	ffuncall
	.globl	sysprot
	.globl	findtag
	.globl	unbind3
	.globl	getfns
	.globl	list
	.globl	getnumi
	.globl	stringa1
	.globl	makestrg
	.globl	strgsymb
	.globl	ini_print
	.globl	outch
	.globl	flulin
	.globl	probj
	.globl	probjt
	.globl	u_print
	.globl	C.ini_print
C.ini_print:	mflr	0
	stu	0,-4(1)
ini_print:	st	21,1704(13)
	lil	3,10
	st	3,1652(13)
	lil	3,100
	st	3,1656(13)
	lil	3,2000
	st	3,1664(13)
	lil	3,2000
	st	3,1672(13)
	lil	3,50
	st	3,1680(13)
	lil	3,0
	st	3,1692(13)
	lil	3,78
	st	3,1696(13)
	l	3,1696(13)
	st	3,1700(13)
	lil	14,256
	lil	15,0
	.globl	C.makestrg
	bl	C.makestrg
	st	14,1648(13)
	lil	14,3
	cal	15,6767(13)
	l	16,3884(13)
	cal	17,164(13)
	lil	3,._eol
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6770(13)
	l	16,3880(13)
	cal	17,164(13)
	lil	3,._llfflush
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6775(13)
	l	16,3876(13)
	cal	17,164(13)
	lil	3,._upratom
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,6781(13)
	l	16,3856(13)
	cal	17,164(13)
	lil	3,._prin
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6785(13)
	l	16,3848(13)
	cal	17,164(13)
	lil	3,._print
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,6790(13)
	l	16,3844(13)
	cal	17,164(13)
	lil	3,._prinflush
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6799(13)
	l	16,3840(13)
	cal	17,164(13)
	lil	3,._terpri
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6805(13)
	l	16,3836(13)
	cal	17,164(13)
	lil	3,._princh
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6811(13)
	l	16,3832(13)
	cal	17,164(13)
	lil	3,._princod
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6817(13)
	l	16,3816(13)
	cal	17,164(13)
	lil	3,._fptype
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,6822(13)
	l	16,3808(13)
	cal	17,164(13)
	lil	3,._prline
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,6831(13)
	l	16,3804(13)
	cal	17,164(13)
	lil	3,._prlevel
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,11
	cal	15,6841(13)
	l	16,3800(13)
	cal	17,164(13)
	lil	3,._prlength
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6852(13)
	l	16,3812(13)
	cal	17,164(13)
	lil	3,._fobase
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,6857(13)
	l	16,3796(13)
	cal	17,164(13)
	lil	3,._lmargin
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,6864(13)
	l	16,3792(13)
	cal	17,164(13)
	lil	3,._rmargin
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6871(13)
	l	16,3788(13)
	cal	17,164(13)
	lil	3,._outpos
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6877(13)
	l	16,3784(13)
	cal	17,164(13)
	lil	3,._outbuf
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,6883(13)
	l	16,3828(13)
	cal	17,164(13)
	lil	3,._explode
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,6890(13)
	l	16,3820(13)
	cal	17,164(13)
	lil	3,._explodech
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	cal	3,224(21)
	st	3,1452(13)
	lil	14,14
	cal	15,6899(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	st	21,0(14)
	lil	14,15
	cal	15,6913(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	st	21,0(14)
	lil	14,18
	cal	15,6928(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	3,96(21)
	st	3,0(14)
	st	21,1452(13)
	lil	14,3
	cal	15,6946(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
prpopj:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
prtrue:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.u_print
C.u_print:	mflr	0
	stu	0,-4(1)
u_print:	.globl	C.probj
	bl	C.probj
	.globl	C.fullin
	bl	C.fullin
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.flulin
C.flulin:	mflr	0
	stu	0,-4(1)
	.globl	flulin
flulin:	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	cal	14,9856(21)
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
	.globl	C.fullin
C.fullin:	mflr	0
	stu	0,-4(1)
fullin:	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	cal	14,9824(21)
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
	.set	._eol,1
	.globl	C.eol
C.eol:	mflr	0
	stu	0,-4(1)
	.globl	eol
eol:	.globl	C.outlin
	bl	C.outlin
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llfflush,1
	.globl	C.llfflush
C.llfflush:	mflr	0
	stu	0,-4(1)
	.globl	llfflush
llfflush:	l	3,1704(13)
	cmpl	0,3,21
	bne	prtrue
	l	15,1688(13)
	cmpli	0,15,0
	beq	prtrue
	l	3,1328(13)
	exts	3,3
	l	4,1208(13)
	exts	4,4
	cmp	0,3,4
	blt	fflush1
fflush0:	l	14,1644(13)
	stu	15,-4(1)
	lil	3,0
	st	3,1688(13)
	.globl	C.tystrg
	bl	C.tystrg
	l	3,0(1)
	st	3,1688(13)
	ai	1,1,4
	b	fflush3
fflush1:	l	14,1688(13)
	l	3,1340(13)
	l	3,0(3)
	l	16,12(3)
	cmpli	0,16,2
	beq	fflush2
	l	3,1328(13)
	oril	4,14,0
	l	5,1644(13)
	l	5,0(5)
	ai	5,5,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.outfl
	bl	.outfl
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	15,3,0
	b	fflush3
fflush2:	l	3,1328(13)
	oril	4,14,0
	l	5,1644(13)
	l	5,0(5)
	ai	5,5,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.outfl
	bl	.outfl
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	15,3,0
fflush3:	.globl	C.outli2
	bl	C.outli2
	lil	3,0
	st	3,1688(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.outlin
C.outlin:	mflr	0
	stu	0,-4(1)
outlin:	l	3,1704(13)
	cmpl	0,3,21
	bne	expls
	l	3,1328(13)
	exts	3,3
	l	4,1208(13)
	exts	4,4
	cmp	0,3,4
	blt	outli1
	l	14,1644(13)
	l	15,1688(13)
	stu	15,-4(1)
	lil	3,0
	st	3,1688(13)
	.globl	C.tystrg
	bl	C.tystrg
	.globl	C.tynewln
	bl	C.tynewln
	l	3,0(1)
	st	3,1688(13)
	ai	1,1,4
	b	outli2
outli1:	l	3,1340(13)
	l	3,0(3)
	l	16,12(3)
	cmpli	0,16,2
	beq	outli11
	l	3,1328(13)
	l	4,1688(13)
	l	5,1644(13)
	l	5,0(5)
	ai	5,5,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.outfl
	bl	.outfl
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	15,3,0
	b	outli2
outli11:	l	3,1328(13)
	l	4,1688(13)
	l	5,1644(13)
	l	5,0(5)
	ai	5,5,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.outf
	bl	.outf
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	15,3,0
	b	outli2
	.globl	C.outli2
C.outli2:	mflr	0
	stu	0,-4(1)
outli2:	l	15,1688(13)
	l	14,1644(13)
	b	outli4
outli3:	l	3,0(14)
	ai	4,15,8
	lil	5,32
	stbx	5,3,4
outli4:	exts	15,15
	si	15,15,1
	cmpi	0,15,0
	bge	outli3
	lil	15,0
	l	3,1692(13)
	st	3,1688(13)
outlret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.chklp
C.chklp:	mflr	0
	stu	0,-4(1)
	.globl	chklp
chklp:	l	3,1700(13)
	l	4,1696(13)
	cmpl	0,3,4
	bne	flulin
	l	3,1668(13)
	cmpli	0,3,1
	bne	chklp1
	l	14,1688(13)
	si	4,14,3
	andil.	14,4,0xFFFF
	lil	15,46
	l	3,1644(13)
	l	3,0(3)
	ai	4,14,8
	stbx	15,3,4
	ai	4,14,1
	andil.	14,4,0xFFFF
	l	3,1644(13)
	l	3,0(3)
	ai	4,14,8
	stbx	15,3,4
	ai	4,14,1
	andil.	14,4,0xFFFF
	l	3,1644(13)
	l	3,0(3)
	ai	4,14,8
	stbx	15,3,4
	b	probjend
chklp1:	l	4,1668(13)
	si	4,4,1
	andil.	3,4,0xFFFF
	st	3,1668(13)
	b	fullin
	.globl	C.outch
C.outch:	mflr	0
	stu	0,-4(1)
outch:	l	3,1704(13)
	cmpl	0,3,21
	bne	explch
	stu	14,-4(1)
	l	14,1688(13)
	exts	3,14
	l	4,1700(13)
	exts	4,4
	cmp	0,3,4
	blt	outch1
	.globl	C.chklp
	bl	C.chklp
	l	14,1688(13)
outch1:	l	3,1644(13)
	l	3,0(3)
	ai	4,14,8
	stbx	17,3,4
	l	4,1688(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1688(13)
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.outsp
C.outsp:	mflr	0
	stu	0,-4(1)
outsp:	l	3,1704(13)
	cmpl	0,3,21
	bne	expls
	stu	14,-4(1)
	l	14,1688(13)
	exts	3,14
	l	4,1700(13)
	exts	4,4
	cmp	0,3,4
	bge	outsp1
outsp0:	l	3,1644(13)
	l	3,0(3)
	ai	4,14,8
	lil	5,32
	stbx	5,3,4
	l	4,1688(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1688(13)
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
outsp1:	l	3,1700(13)
	l	4,1696(13)
	cmpl	0,3,4
	bne	outsp2
	.globl	C.chklp
	bl	C.chklp
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
outsp2:	.globl	C.chklp
	bl	C.chklp
	l	14,1688(13)
	b	outsp0
	.globl	C.outshrp
C.outshrp:	mflr	0
	stu	0,-4(1)
outshrp:	l	3,1704(13)
	cmpl	0,3,21
	bne	explsh
	stu	14,-4(1)
	l	14,1688(13)
	ai	4,14,1
	andil.	14,4,0xFFFF
	exts	3,14
	l	4,1700(13)
	exts	4,4
	cmp	0,3,4
	blt	outshrp1
	.globl	C.chklp
	bl	C.chklp
	l	14,1688(13)
	ai	4,14,1
	andil.	14,4,0xFFFF
outshrp1:	l	3,1644(13)
	l	3,0(3)
	ai	4,14,8
	stbx	17,3,4
	si	4,14,1
	andil.	14,4,0xFFFF
	l	3,1644(13)
	l	3,0(3)
	ai	4,14,8
	lil	5,35
	stbx	5,3,4
	l	4,1688(13)
	ai	4,4,2
	andil.	3,4,0xFFFF
	st	3,1688(13)
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
outet:	l	15,1676(13)
	exts	3,15
	cmpi	0,3,0
	blt	outet1
	cmpli	0,15,1
	beq	outddd
outet1:	l	4,1676(13)
	si	4,4,1
	andil.	3,4,0xFFFF
	st	3,1676(13)
	lil	17,38
	b	outch
outddd:	lil	17,46
	.globl	C.outch
	bl	C.outch
	.globl	C.outch
	bl	C.outch
	.globl	C.outch
	bl	C.outch
	b	probjend
pratom:	l	15,1676(13)
	exts	3,15
	cmpi	0,3,0
	blt	pratom1
	cmpli	0,15,1
	beq	outddd
	l	4,1676(13)
	si	4,4,1
	andil.	3,4,0xFFFF
	st	3,1676(13)
pratom1:	stu	14,-4(1)
	.globl	C.gettype
	bl	C.gettype
	cmpl	0,14,21
	blt	pratom2
	cmpl	0,14,22
	bge	pratom2
	cal	15,9920(21)
	oril	16,21,0
	.globl	C.getfns
	bl	C.getfns
	cmpl	0,14,21
	beq	pratom2
	cal	4,9920(21)
	cmpl	0,14,4
	beq	pratom2
	lil	17,1
	b	ffuncall
pratom2:	l	14,0(1)
	ai	1,1,4
	b	upratom
	.set	._upratom,2
	.globl	C.upratom
C.upratom:	mflr	0
	stu	0,-4(1)
	.globl	upratom
upratom:	cmpl	0,14,21
	blt	.pri.1
	cmpl	0,14,22
	blt	prsympk
.pri.1:	cmpl	0,14,18
	blt	prfix
	cmpl	0,14,18
	blt	.pri.2
	cmpl	0,14,19
	blt	prfloat
.pri.2:	cmpl	0,14,20
	blt	.pri.3
	cmpl	0,14,21
	blt	prstrg
.pri.3:	b	prvect
prsympk:	cmpl	0,14,21
	beq	pratnil
	lil	3,0
	st	3,1684(13)
	cal	16,10528(21)
	l	3,0(16)
	cmpl	0,3,21
	beq	prsymb
prsympk0:	l	16,12(14)
	cmpl	0,16,21
	beq	prsymb
prsympk1:	stu	14,-4(1)
	l	14,12(14)
	.globl	C.prpkg
	bl	C.prpkg
	l	14,0(1)
	ai	1,1,4
	b	prsymb
	.globl	C.prpkg
C.prpkg:	mflr	0
	stu	0,-4(1)
prpkg:	l	3,1684(13)
	stu	3,-4(1)
	l	16,3872(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1684(13)
	ai	1,1,4
	mtlr	16
	br	
	.globl	prpkg0
prpkg0:	cal	17,10528(21)
	l	3,0(17)
	cmpli	0,3,0
	bne	prpkg1
	cal	17,8704(21)
	l	4,0(17)
	cmpl	0,14,4
	bne	prpkg1
	lil	17,58
	b	outch
prpkg1:	l	4,1684(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1684(13)
	l	3,1680(13)
	cmpli	0,3,0
	beq	prpkg2
	l	3,1684(13)
	exts	3,3
	l	4,1680(13)
	exts	4,4
	cmp	0,3,4
	ble	prpkg2
	b	outddd
prpkg2:	cmpl	0,14,21
	blt	.pri.4
	cmpl	0,14,22
	blt	prpkgsym
.pri.4:	lil	17,58
	.globl	C.outshrp
	bl	C.outshrp
	.globl	C.probj0
	bl	C.probj0
	lil	17,58
	b	outch
prpkgsym:	l	3,12(14)
	cmpl	0,3,21
	bne	prsympk1
	lil	17,58
	l	3,3868(13)
	stu	3,-4(1)
	b	outshrp
	.globl	prsymb
prsymb:	cal	15,10464(21)
	l	15,0(15)
	cmpl	0,15,21
	beq	prat2
	.globl	C.chksymb
	bl	C.chksymb
	cmpl	0,15,21
	beq	prat2
	ai	4,15,2
	andil.	15,4,0xFFFF
	l	3,1684(13)
	cmpli	0,3,0
	beq	prat0
	ai	4,15,1
	andil.	15,4,0xFFFF
prat0:	l	3,1688(13)
	a	4,3,15
	andil.	15,4,0xFFFF
	exts	3,15
	l	4,1700(13)
	exts	4,4
	cmp	0,3,4
	ble	prat1
	.globl	C.chklp
	bl	C.chklp
prat1:	lil	17,124
	.globl	C.outch
	bl	C.outch
	.globl	C.strgsymb
	bl	C.strgsymb
	st	14,1728(13)
	l	3,0(14)
	l	15,4(3)
	lil	16,0
	b	prat12
prat10:	l	3,1728(13)
	l	3,0(3)
	ai	4,16,8
	lbzx	17,3,4
	l	3,1396(13)
	l	3,0(3)
	ai	4,17,8
	lbzx	14,3,4
	cmpli	0,14,13
	bne	prat11
	.globl	C.outch
	bl	C.outch
prat11:	.globl	C.outch
	bl	C.outch
	ai	4,16,1
	andil.	16,4,0xFFFF
prat12:	cmpl	0,16,15
	bne	prat10
	lil	17,124
	l	3,1684(13)
	cmpli	0,3,0
	beq	outch
	.globl	C.outch
	bl	C.outch
	lil	17,58
	b	outch
prat2:	.globl	C.strgsymb
	bl	C.strgsymb
	l	3,0(14)
	l	16,4(3)
	oril	15,16,0
	l	3,1684(13)
	cmpli	0,3,0
	beq	prat21
	ai	4,15,1
	andil.	15,4,0xFFFF
prat21:	l	3,1688(13)
	a	4,3,15
	andil.	15,4,0xFFFF
	exts	3,15
	l	4,1700(13)
	exts	4,4
	cmp	0,3,4
	ble	prat3
	.globl	C.chklp
	bl	C.chklp
prat3:	lil	15,0
	cal	17,10496(21)
	l	17,0(17)
	cmpl	0,17,21
	bne	prat8
	b	prathb
prat5:	l	3,0(14)
	ai	4,15,8
	lbzx	17,3,4
	exts	3,17
	cmpi	0,3,97
	blt	prat6
	exts	3,17
	cmpi	0,3,122
	bgt	prat6
	si	17,17,32
prat6:	.globl	C.outch
	bl	C.outch
	ai	4,15,1
	andil.	15,4,0xFFFF
prat8:	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bge	prat5
	lil	16,0
	l	3,1684(13)
	cmpli	0,3,0
	beq	prpopj
	lil	17,58
	b	outch
pratnil:	lil	17,40
	.globl	C.outch
	bl	C.outch
	lil	17,41
	b	outch
	.globl	C.chksymb
C.chksymb:	mflr	0
	stu	0,-4(1)
chksymb:	stu	14,-4(1)
	.globl	C.strgsymb
	bl	C.strgsymb
	l	3,0(14)
	l	15,4(3)
	cmpli	0,15,0
	beq	chksymb9
	stu	15,-4(1)
	oril	16,21,0
	b	chksymb3
chksymb0:	l	3,0(14)
	ai	4,15,8
	lbzx	17,3,4
	cmpli	0,17,43
	beq	chksymb2
	cmpli	0,17,45
	beq	chksymb2
	cmpli	0,17,101
	beq	chksymb2
	cmpli	0,17,69
	beq	chksymb2
	exts	3,17
	cmpi	0,3,48
	blt	chksymb1
	exts	3,17
	cmpi	0,3,57
	ble	chksymb2
chksymb1:	ai	4,16,1
	andil.	16,4,0xFFFF
chksymb2:	l	3,1396(13)
	l	3,0(3)
	ai	4,17,8
	lbzx	17,3,4
	cmpli	0,17,12
	bne	chksymb5
chksymb3:	exts	15,15
	si	15,15,1
	cmpi	0,15,0
	bge	chksymb0
	lil	15,0
	cmpl	0,16,21
	beq	chksymb4
	ai	1,1,4
	oril	15,21,0
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
chksymb4:	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
chksymb5:	oril	16,15,0
	l	15,0(1)
	ai	1,1,4
	b	chksymb7
chksymb6:	l	3,0(14)
	ai	4,16,8
	lbzx	17,3,4
	l	3,1396(13)
	l	3,0(3)
	ai	4,17,8
	lbzx	17,3,4
chksymb7:	cmpli	0,17,13
	bne	chksymb8
	ai	4,15,1
	andil.	15,4,0xFFFF
chksymb8:	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bge	chksymb6
	lil	16,0
chksymb9:	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.chkstrg
C.chkstrg:	mflr	0
	stu	0,-4(1)
chkstrg:	l	3,0(14)
	l	16,4(3)
	oril	15,16,0
	cmpli	0,16,0
	beq	chkstrg3
	b	chkstrg2
chkstrg1:	l	3,0(14)
	ai	4,16,8
	lbzx	17,3,4
	l	3,1396(13)
	l	3,0(3)
	ai	4,17,8
	lbzx	17,3,4
	cmpli	0,17,11
	bne	chkstrg2
	ai	4,15,1
	andil.	15,4,0xFFFF
chkstrg2:	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bge	chkstrg1
	lil	16,0
chkstrg3:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.prtypvec
C.prtypvec:	mflr	0
	stu	0,-4(1)
prtypvec:	l	3,4(14)
	cal	4,23584(21)
	cmpl	0,3,4
	beq	prpopj
	l	3,4(14)
	cal	4,22400(21)
	cmpl	0,3,4
	beq	prpopj
	stu	14,-4(1)
	l	14,4(14)
	.globl	C.prpkg
	bl	C.prpkg
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
prstrg:	.globl	C.prtypvec
	bl	C.prtypvec
	cal	15,10464(21)
	l	15,0(15)
	cmpl	0,15,21
	bne	prstr5
	l	3,0(14)
	l	16,4(3)
	oril	15,16,0
	l	3,1688(13)
	a	4,3,15
	andil.	15,4,0xFFFF
	exts	3,15
	l	4,1700(13)
	exts	4,4
	cmp	0,3,4
	ble	prathb
	l	3,1704(13)
	cmpl	0,3,21
	bne	prathb
	.globl	C.chklp
	bl	C.chklp
prathb:	lil	15,0
	b	prathb4
prathb2:	l	3,0(14)
	ai	4,15,8
	lbzx	17,3,4
	.globl	C.outch
	bl	C.outch
	ai	4,15,1
	andil.	15,4,0xFFFF
prathb4:	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bge	prathb2
	lil	16,0
	l	3,1684(13)
	cmpli	0,3,0
	beq	prpopj
	lil	17,58
	b	outch
prstr5:	.globl	C.chkstrg
	bl	C.chkstrg
	ai	4,15,2
	andil.	15,4,0xFFFF
	l	3,1688(13)
	a	4,3,15
	andil.	15,4,0xFFFF
	ai	4,15,2
	andil.	15,4,0xFFFF
	exts	3,15
	l	4,1700(13)
	exts	4,4
	cmp	0,3,4
	ble	prstr6
	l	3,1704(13)
	cmpl	0,3,21
	bne	prstrg
	.globl	C.chklp
	bl	C.chklp
prstr6:	lil	17,34
	.globl	C.outch
	bl	C.outch
	st	14,1728(13)
	l	3,0(14)
	l	14,4(3)
	lil	16,0
prstr60:	cmpl	0,16,14
	beq	prstr63
	l	3,1728(13)
	l	3,0(3)
	ai	4,16,8
	lbzx	17,3,4
	l	3,1396(13)
	l	3,0(3)
	ai	4,17,8
	lbzx	15,3,4
	cmpli	0,15,11
	bne	prstr61
	.globl	C.outch
	bl	C.outch
prstr61:	.globl	C.outch
	bl	C.outch
	ai	4,16,1
	andil.	16,4,0xFFFF
	b	prstr60
prstr63:	lil	17,34
	b	outch
prvect:	l	15,1660(13)
	exts	3,15
	cmpi	0,3,0
	ble	prvect11
	cmpli	0,15,1
	bne	prvect1
	b	outet
prvect1:	l	4,1660(13)
	si	4,4,1
	andil.	3,4,0xFFFF
	st	3,1660(13)
prvect11:	.globl	C.prtypvec
	bl	C.prtypvec
prvectv:	lil	17,91
	.globl	C.outshrp
	bl	C.outshrp
	.globl	C.prvectin
	bl	C.prvectin
	lil	17,93
	b	outch
	.globl	C.prvectin
C.prvectin:	mflr	0
	stu	0,-4(1)
prvectin:	l	3,0(14)
	l	15,4(3)
	lil	16,0
	b	prvect6
prvect2:	stu	14,-4(1)
	stu	16,-4(1)
	stu	15,-4(1)
	l	3,0(14)
	ai	4,16,2
	sli	4,4,2
	lx	14,3,4
	.globl	C.probj0
	bl	C.probj0
	l	17,0(1)
	cmpli	0,17,0
	beq	prvect4
	.globl	C.outsp
	bl	C.outsp
prvect4:	l	15,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	ai	4,16,1
	andil.	16,4,0xFFFF
	l	14,0(1)
	ai	1,1,4
prvect6:	exts	15,15
	si	15,15,1
	cmpi	0,15,0
	bge	prvect2
	lil	15,0
prvect9:	l	3,1660(13)
	exts	3,3
	cmpi	0,3,0
	ble	prvect91
	l	4,1660(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1660(13)
prvect91:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
prfloat:	stu	14,-4(1)
	l	16,1648(13)
	lfd	1,0(14)
	l	5,0(16)
	ai	5,5,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.llrt_cvftoa
	bl	.llrt_cvftoa
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	15,3,0
	b	prnum0
prfix:	stu	14,-4(1)
	l	16,1648(13)
	lil	15,0
	stu	17,-4(1)
	.globl	C.getnumi
	bl	C.getnumi
	l	17,0(1)
	ai	1,1,4
prnum0:	oril	16,15,0
	l	3,1688(13)
	a	4,3,16
	andil.	16,4,0xFFFF
	exts	3,16
	l	4,1700(13)
	exts	4,4
	cmp	0,3,4
	ble	prnum1
	.globl	C.chklp
	bl	C.chklp
prnum1:	lil	14,0
	b	prnum4
prnum3:	l	3,1648(13)
	l	3,0(3)
	ai	4,14,8
	lbzx	17,3,4
	.globl	C.outch
	bl	C.outch
	ai	4,14,1
	andil.	14,4,0xFFFF
prnum4:	exts	15,15
	si	15,15,1
	cmpi	0,15,0
	bge	prnum3
	lil	15,0
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.probj
C.probj:	mflr	0
	stu	0,-4(1)
probj:	stu	14,-4(1)
	l	3,3864(13)
	stu	3,-4(1)
	cal	3,9920(21)
	stu	3,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4604(13)
	stu	3,-4(1)
	st	1,1756(13)
	b	probj01
	.globl	probje
probje:	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
probjend:	cal	15,9920(21)
	b	findtag
probj01:	l	3,1664(13)
	st	3,1668(13)
	l	15,1672(13)
	cmpli	0,15,0
	beq	probj02
	ai	4,15,1
	andil.	15,4,0xFFFF
probj02:	st	15,1676(13)
	l	15,1656(13)
	cmpli	0,15,0
	beq	probj03
	ai	4,15,1
	andil.	15,4,0xFFFF
probj03:	st	15,1660(13)
	b	probj0
	.globl	C.probj0
C.probj0:	mflr	0
	stu	0,-4(1)
probj0:	l	3,1216(13)
	cmpli	0,3,0
	beq	.pri.5
	.globl	C.ithard
	bl	C.ithard
.pri.5:	cmpl	0,14,18
	blt	pratom
	cmpl	0,14,18
	blt	.pri.6
	cmpl	0,14,19
	blt	pratom
.pri.6:	l	4,1104(13)
	cmpl	0,14,4
	blt	.pri.7
	l	4,168(13)
	cmpl	0,14,4
	blt	probj0t
.pri.7:	cal	14,10560(21)
	b	prsymb
probj0t:	cmp	0,14,22
	blt	pratom
	l	15,1660(13)
	exts	3,15
	cmpi	0,3,0
	ble	probj11
	cmpli	0,15,1
	bne	probj1
	b	outet
probj1:	l	4,1660(13)
	si	4,4,1
	andil.	3,4,0xFFFF
	st	3,1660(13)
probj11:	sf	5,22,14
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
	beq	probj3
	stu	14,-4(1)
	.globl	C.gettype
	bl	C.gettype
	cmpl	0,14,21
	blt	probj12
	cmpl	0,14,22
	bge	probj12
	cal	15,9920(21)
	oril	16,21,0
	.globl	C.getfns
	bl	C.getfns
	cal	4,9920(21)
	cmpl	0,14,4
	beq	probj12
	cmpl	0,14,21
	beq	probj12
	lil	17,1
	b	ffuncall
probj12:	l	14,0(1)
	ai	1,1,4
probj2:	lil	17,40
	.globl	C.outshrp
	bl	C.outshrp
	b	probj7
probj3:	l	15,0(14)
	cal	4,13888(21)
	cmpl	0,15,4
	bne	probj5
	l	15,4(14)
	cmp	0,15,22
	blt	probj5
	l	3,4(15)
	cmpl	0,3,21
	bne	probj5
	lil	17,39
	.globl	C.outch
	bl	C.outch
	l	14,0(15)
	l	3,1660(13)
	exts	3,3
	cmpi	0,3,0
	ble	probj4
	l	4,1660(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1660(13)
probj4:	b	probj0
probj5:	lil	17,40
	.globl	C.outch
	bl	C.outch
	b	probj7
	.globl	C.probjd
C.probjd:	mflr	0
	stu	0,-4(1)
probjd:	lil	17,46
	b	outch
probj6:	.globl	C.outsp
	bl	C.outsp
probj7:probj8:	l	3,1068(13)
	cmpl	0,1,3
	bge	.pri.8
	b	errfsp
.pri.8:	l	3,4(14)
	stu	3,-4(1)
	l	14,0(14)
	.globl	C.probj0
	bl	C.probj0
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	probj9
	cmp	0,14,22
	blt	probjk
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
	beq	probj6
probjk:	.globl	C.outsp
	bl	C.outsp
	.globl	C.probjd
	bl	C.probjd
	.globl	C.outsp
	bl	C.outsp
	.globl	C.probj0
	bl	C.probj0
probj9:	lil	17,41
	l	3,1660(13)
	exts	3,3
	cmpi	0,3,0
	ble	probj91
	l	4,1660(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1660(13)
probj91:	b	outch
	.globl	C.probjt
C.probjt:	mflr	0
	stu	0,-4(1)
probjt:	l	3,3860(13)
	stu	3,-4(1)
	b	probj
	.set	._prin,5
	.globl	C.prin
C.prin:	mflr	0
	stu	0,-4(1)
	.globl	prin
prin:	.globl	C.prinn
	bl	C.prinn
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.prinn
C.prinn:	mflr	0
	stu	0,-4(1)
prinn:	cmpli	0,17,0
	beq	prinnr
	ai	4,17,1
	andil.	17,4,0xFFFF
	stu	17,-4(1)
	b	prinn1
prinn0:	cal	14,10464(21)
	l	14,0(14)
	cmpl	0,14,21
	beq	prinn1
	stu	17,-4(1)
	l	3,3852(13)
	stu	3,-4(1)
	cal	3,9920(21)
	stu	3,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4604(13)
	stu	3,-4(1)
	st	1,1756(13)
	b	outsp
	.globl	prinn2
prinn2:	l	17,0(1)
	ai	1,1,4
prinn1:	sli	3,17,2
	lx	14,1,3
	stu	17,-4(1)
	.globl	C.probj
	bl	C.probj
	l	17,0(1)
	ai	1,1,4
	si	4,17,1
	andil.	17,4,0xFFFF
	exts	3,17
	cmpi	0,3,1
	bgt	prinn0
	sli	3,17,2
	lx	16,1,3
	l	17,0(1)
	ai	1,1,4
	exts	3,17
	sli	3,3,2
	a	1,1,3
	mtlr	16
	br	
prinnr:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._print,5
	.globl	C.print
C.print:	mflr	0
	stu	0,-4(1)
	.globl	print
print:	.globl	C.prinn
	bl	C.prinn
	b	fullin
	.set	._prinflush,5
	.globl	C.prinflush
C.prinflush:	mflr	0
	stu	0,-4(1)
	.globl	prinflush
prinflush:	.globl	C.prinn
	bl	C.prinn
	b	flulin
	.set	._terpri,5
	.globl	C.terpri
C.terpri:	mflr	0
	stu	0,-4(1)
	.globl	terpri
terpri:	cal	15,10016(21)
	cmpli	0,17,1
	beq	terpr2
	lil	14,1
	cmpli	0,17,0
	beq	terpr6
	b	errwna
terpr2:	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	blt	terpr6
	b	errnia
terpr5:	.globl	C.fullin
	bl	C.fullin
terpr6:	exts	14,14
	si	14,14,1
	cmpi	0,14,0
	bge	terpr5
	lil	14,0
	b	prtrue
	.set	._princh,5
	.globl	C.princh
C.princh:	mflr	0
	stu	0,-4(1)
	.globl	princh
princh:	lil	15,1
	cmpli	0,17,1
	beq	princh1
	cmpli	0,17,2
	beq	princh2
	lil	14,2
	cal	15,10048(21)
	b	errwna
princh2:	l	15,0(1)
	ai	1,1,4
princh1:	cmpl	0,15,18
	blt	princh3
	oril	14,15,0
	cal	15,10048(21)
	b	errnia
princh3:	l	14,0(1)
	cal	3,10048(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	l	3,0(14)
	lbz	17,8(3)
	.globl	C.princr1
	bl	C.princr1
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.princr1
C.princr1:	mflr	0
	stu	0,-4(1)
princr1:	l	3,1664(13)
	st	3,1668(13)
	cal	3,9920(21)
	stu	3,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4604(13)
	stu	3,-4(1)
	st	1,1756(13)
	b	princr3
princr2:	stu	15,-4(1)
	.globl	C.outch
	bl	C.outch
	l	15,0(1)
	ai	1,1,4
princr3:	exts	15,15
	si	15,15,1
	cmpi	0,15,0
	bge	princr2
	lil	15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._princod,5
	.globl	C.princod
C.princod:	mflr	0
	stu	0,-4(1)
	.globl	princod
princod:	lil	15,1
	cmpli	0,17,1
	beq	princd1
	cmpli	0,17,2
	beq	princd0
	lil	14,2
	cal	15,10080(21)
	b	errwna
princd0:	l	15,0(1)
	ai	1,1,4
	cmpl	0,15,18
	blt	princd1
	oril	14,15,0
	cal	15,10080(21)
	b	errnia
princd1:	l	17,0(1)
	cmpl	0,17,18
	blt	princd2
	oril	14,17,0
	cal	15,10080(21)
	b	errnia
princd2:	.globl	C.princr1
	bl	C.princr1
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._explode,2
	.globl	C.explode
C.explode:	mflr	0
	stu	0,-4(1)
	.globl	explode
explode:	l	3,1708(13)
	stu	3,-4(1)
	l	3,1704(13)
	stu	3,-4(1)
	l	16,3824(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1704(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1708(13)
	ai	1,1,4
	mtlr	16
	br	
	.globl	explode1
explode1:	oril	15,21,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.pri.9
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.pri.9:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	stu	15,-4(1)
	st	15,1708(13)
	cal	3,96(21)
	st	3,1704(13)
	.globl	C.probj
	bl	C.probj
	l	14,0(1)
	ai	1,1,4
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._explodech,2
	.globl	C.explodech
C.explodech:	mflr	0
	stu	0,-4(1)
	.globl	explodech
explodech:	.globl	C.explode
	bl	C.explode
	oril	15,14,0
	stu	14,-4(1)
	stu	14,-4(1)
expldech1:	cmp	0,15,22
	blt	expldech2
	l	14,0(15)
	st	15,0(1)
	.globl	C.fascii
	bl	C.fascii
	l	15,0(1)
	st	14,0(15)
	l	15,4(15)
	b	expldech1
expldech2:	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
expls:	stu	17,-4(1)
	lil	17,32
	b	explch1
explsh:	stu	17,-4(1)
	lil	17,35
	.globl	C.explch
	bl	C.explch
	l	17,0(1)
	b	explch1
	.globl	C.explch
C.explch:	mflr	0
	stu	0,-4(1)
explch:	stu	17,-4(1)
explch1:	stu	15,-4(1)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.pri.10
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.pri.10:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	st	21,4(6)
	oril	17,6,0
	l	15,1708(13)
	st	17,4(15)
	st	17,1708(13)
	l	15,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._fptype,5
	.globl	C.fptype
C.fptype:	mflr	0
	stu	0,-4(1)
	.globl	fptype
fptype:	cal	15,10112(21)
	cmpli	0,17,1
	beq	ptyp1
	cmpli	0,17,2
	beq	ptyp2
	lil	14,2
	b	errwna
ptyp1:	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,21
	blt	ptyper1
	cmpl	0,14,22
	bge	ptyper1
	lhz	14,26(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ptyp2:	l	14,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	cmpl	0,16,21
	blt	ptyper1
	cmpl	0,16,22
	bge	ptyper1
	sth	14,26(16)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ptyper1:	b	errsym
ptyper2:	oril	14,16,0
	b	errnia
	.set	._fobase,5
	.globl	C.fobase
C.fobase:	mflr	0
	stu	0,-4(1)
	.globl	fobase
fobase:	cal	15,10240(21)
	l	16,1652(13)
	lil	3,2
	stu	3,-4(1)
	lil	3,36
	stu	3,-4(1)
	.globl	C.getsetn
	bl	C.getsetn
	st	14,1652(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._prline,5
	.globl	C.prline
C.prline:	mflr	0
	stu	0,-4(1)
	.globl	prline
prline:	cal	15,10144(21)
	l	16,1664(13)
	lil	3,0
	stu	3,-4(1)
	lil	3,32767
	stu	3,-4(1)
	.globl	C.getsetn
	bl	C.getsetn
	st	14,1664(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._prlevel,5
	.globl	C.prlevel
C.prlevel:	mflr	0
	stu	0,-4(1)
	.globl	prlevel
prlevel:	cal	15,10176(21)
	l	16,1656(13)
	lil	3,0
	stu	3,-4(1)
	lil	3,32767
	stu	3,-4(1)
	.globl	C.getsetn
	bl	C.getsetn
	st	14,1656(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._prlength,5
	.globl	C.prlength
C.prlength:	mflr	0
	stu	0,-4(1)
	.globl	prlength
prlength:	cal	15,10208(21)
	l	16,1672(13)
	lil	3,0
	stu	3,-4(1)
	lil	3,32767
	stu	3,-4(1)
	.globl	C.getsetn
	bl	C.getsetn
	st	14,1672(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.tespos
C.tespos:	mflr	0
	stu	0,-4(1)
tespos:	cmpl	0,14,18
	bge	poser2
	exts	3,14
	cmpi	0,3,0
	blt	poser
	exts	3,14
	l	4,1700(13)
	exts	4,4
	cmp	0,3,4
	ble	prpopj
poser:	oril	15,17,0
	b	erroob
poser2:	oril	15,17,0
	b	errnia
	.set	._lmargin,5
	.globl	C.lmargin
C.lmargin:	mflr	0
	stu	0,-4(1)
	.globl	lmargin
lmargin:	cal	15,10272(21)
	l	16,1692(13)
	lil	3,0
	stu	3,-4(1)
	l	3,1696(13)
	stu	3,-4(1)
	.globl	C.getsetn
	bl	C.getsetn
	st	14,1692(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._rmargin,5
	.globl	C.rmargin
C.rmargin:	mflr	0
	stu	0,-4(1)
	.globl	rmargin
rmargin:	lil	3,1
	stu	3,-4(1)
	l	3,1644(13)
	l	3,0(3)
	l	15,4(3)
	ai	4,15,1
	andil.	15,4,0xFFFF
	stu	15,-4(1)
	cal	15,10304(21)
	l	16,1696(13)
	.globl	C.getsetn
	bl	C.getsetn
	st	14,1696(13)
	l	3,1644(13)
	l	3,0(3)
	l	15,4(3)
	exts	3,14
	exts	4,15
	cmp	0,3,4
	ble	rmargin1
	oril	14,15,0
rmargin1:	st	14,1700(13)
	l	14,1696(13)
rmargin2:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._outpos,5
	.globl	C.outpos
C.outpos:	mflr	0
	stu	0,-4(1)
	.globl	outpos
outpos:	cal	15,10336(21)
	l	16,1688(13)
	lil	3,0
	stu	3,-4(1)
	l	3,1700(13)
	stu	3,-4(1)
	.globl	C.getsetn
	bl	C.getsetn
	st	14,1688(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._outbuf,5
	.globl	C.outbuf
C.outbuf:	mflr	0
	stu	0,-4(1)
	.globl	outbuf
outbuf:	cmpli	0,17,0
	beq	outbu1
	oril	15,21,0
	cmpli	0,17,1
	beq	outbu5
	cmpli	0,17,2
	beq	outbu4
	lil	14,1
	cal	15,10368(21)
	b	errwna
outbu1:	l	14,1644(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
outbu4:	l	15,0(1)
	ai	1,1,4
outbu5:	l	14,0(1)
	ai	1,1,4
	cal	17,10368(21)
	.globl	C.tespos
	bl	C.tespos
	cmpl	0,15,21
	beq	outbu6
	cmpl	0,15,18
	bge	outbuer
	l	3,1644(13)
	l	3,0(3)
	ai	4,14,8
	stbx	15,3,4
outbu6:	l	3,1644(13)
	l	3,0(3)
	ai	4,14,8
	lbzx	14,3,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
outbuer:	oril	14,15,0
	oril	15,17,0
	b	errnia
