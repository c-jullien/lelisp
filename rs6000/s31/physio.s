	.csect	lelisp_txt[PR]
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
	.globl	inphy
	.globl	input
	.globl	restcori
	.globl	tyo
	.globl	tycursor
	.globl	tystrg
	.globl	tynewln
	.globl	phytrue
	.globl	C.ini_pio
C.ini_pio:	mflr	0
	stu	0,-4(1)
ini_pio:	l	14,1208(13)
	oril	15,21,0
	.globl	C.makevect
	bl	C.makevect
	st	14,1332(13)
	l	4,1208(13)
	si	4,4,3
	andil.	3,4,0xFFFF
	st	3,1208(13)
	l	15,1208(13)
	ai	4,15,1
	andil.	15,4,0xFFFF
	oril	14,21,0
	lil	16,1
	lil	3,1024
	st	3,1344(13)
	.globl	C.inchini
	bl	C.inchini
	oril	14,21,0
	.globl	C.inopen
	bl	C.inopen
	l	15,1208(13)
	oril	14,21,0
	lil	16,2
	.globl	C.outchini
	bl	C.outchini
	l	14,1208(13)
	.globl	C.outopen
	bl	C.outopen
	l	15,1208(13)
	ai	4,15,2
	andil.	15,4,0xFFFF
	oril	14,21,0
	lil	16,2
	.globl	C.outchini
	bl	C.outchini
	l	14,1208(13)
	ai	4,14,2
	andil.	14,4,0xFFFF
	.globl	C.outchani
	bl	C.outchani
	l	3,1644(13)
	l	3,0(3)
	l	14,4(3)
	st	14,1700(13)
	ai	4,14,1
	andil.	14,4,0xFFFF
	st	14,1696(13)
	l	14,1208(13)
	.globl	C.outchani
	bl	C.outchani
	lil	14,1
	lil	15,0
	.globl	C.makestrg
	bl	C.makestrg
	st	14,1352(13)
	lil	14,2
	lil	15,94
	.globl	C.makestrg
	bl	C.makestrg
	st	14,1348(13)
	lil	14,3
	lil	15,8
	.globl	C.makestrg
	bl	C.makestrg
	st	14,1356(13)
	l	3,1356(13)
	l	3,0(3)
	lil	4,32
	stb	4,9(3)
	lil	14,3
	cal	15,6081(13)
	l	16,4360(13)
	cal	17,164(13)
	lil	3,._tyi
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,6084(13)
	l	16,4356(13)
	cal	17,164(13)
	lil	3,._tys
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,6087(13)
	l	16,4352(13)
	cal	17,164(13)
	lil	3,._tyinstrg
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,6097(13)
	l	16,4344(13)
	cal	17,164(13)
	lil	3,._tyo
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,6100(13)
	l	16,4348(13)
	cal	17,164(13)
	lil	3,._tyflush
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6107(13)
	l	16,4340(13)
	cal	17,164(13)
	lil	3,._tyback
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,6113(13)
	l	16,4336(13)
	cal	17,164(13)
	lil	3,._tynewln
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,6122(13)
	l	16,4332(13)
	cal	17,164(13)
	lil	3,._tycn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,6126(13)
	l	16,4328(13)
	cal	17,164(13)
	lil	3,._tystrg
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,6134(13)
	l	16,4324(13)
	cal	17,164(13)
	lil	3,._tycursor
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6142(13)
	l	16,4320(13)
	cal	17,164(13)
	lil	3,._tycls
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,15
	cal	15,6147(13)
	l	16,4316(13)
	cal	17,164(13)
	lil	3,._tyrdspl
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,6162(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	3,5952(21)
	st	3,1452(13)
	lil	14,3
	cal	15,6081(13)
	l	16,4312(13)
	cal	17,164(13)
	lil	3,._ttytyi
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,6084(13)
	l	16,4308(13)
	cal	17,164(13)
	lil	3,._ttytys
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,6087(13)
	l	16,4304(13)
	cal	17,164(13)
	lil	3,._ttytyist
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,6097(13)
	l	16,4300(13)
	cal	17,164(13)
	lil	3,._ttytyo
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,6100(13)
	l	16,4292(13)
	cal	17,164(13)
	lil	3,._ttytyflu
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6107(13)
	l	16,4284(13)
	cal	17,164(13)
	lil	3,._ttytybac
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,6113(13)
	l	16,4280(13)
	cal	17,164(13)
	lil	3,._ttytynew
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,6122(13)
	l	16,4276(13)
	cal	17,164(13)
	lil	3,._ttytycn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,6126(13)
	l	16,4272(13)
	cal	17,164(13)
	lil	3,._ttytystr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,6134(13)
	l	16,4268(13)
	cal	17,164(13)
	lil	3,._ttytycur
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6142(13)
	l	16,4264(13)
	cal	17,164(13)
	lil	3,._ttytycls
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,15
	cal	15,6147(13)
	l	16,4260(13)
	cal	17,164(13)
	lil	3,._ttytyrds
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	cal	3,128(21)
	st	3,1452(13)
	lil	14,3
	cal	15,6162(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	3,5952(21)
	st	3,0(14)
	st	21,1452(13)
	lil	14,4
	cal	15,6165(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,3
	cal	15,6169(13)
	l	16,4256(13)
	cal	17,164(13)
	lil	3,._bol
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6172(13)
	l	16,4252(13)
	cal	17,164(13)
	lil	3,._finmax
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6177(13)
	l	16,4248(13)
	cal	17,164(13)
	lil	3,._finpos
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6182(13)
	l	16,4244(13)
	cal	17,164(13)
	lil	3,._finbuf
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,6187(13)
	l	16,4240(13)
	cal	17,164(13)
	lil	3,._lleof
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6190(13)
	l	16,4236(13)
	cal	17,164(13)
	lil	3,._prompt
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,6196(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	l	3,28(14)
	st	3,1360(13)
	cal	3,224(21)
	st	3,1452(13)
	lil	14,18
	cal	15,6198(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	3,96(21)
	st	3,0(14)
	lil	14,14
	cal	15,6216(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	st	21,0(14)
	st	21,1452(13)
	lil	14,5
	cal	15,6230(13)
	l	16,4228(13)
	cal	17,164(13)
	lil	3,._openi
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6235(13)
	l	16,4224(13)
	cal	17,164(13)
	lil	3,._openo
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6240(13)
	l	16,4220(13)
	cal	17,164(13)
	lil	3,._opena
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6245(13)
	l	16,4216(13)
	cal	17,164(13)
	lil	3,._openib
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6251(13)
	l	16,4212(13)
	cal	17,164(13)
	lil	3,._openob
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6257(13)
	l	16,4208(13)
	cal	17,164(13)
	lil	3,._openab
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6263(13)
	l	16,4204(13)
	cal	17,164(13)
	lil	3,._input
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6268(13)
	l	16,4196(13)
	cal	17,164(13)
	lil	3,._inchan
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,6274(13)
	l	16,4192(13)
	cal	17,164(13)
	lil	3,._outchan
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,6281(13)
	l	16,4188(13)
	cal	17,164(13)
	lil	3,._fchannel
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6288(13)
	l	16,4200(13)
	cal	17,164(13)
	lil	3,._output
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6294(13)
	l	16,4184(13)
	cal	17,164(13)
	lil	3,._lclose
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,6299(13)
	l	16,4180(13)
	cal	17,164(13)
	lil	3,._deletfi
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,6309(13)
	l	16,4176(13)
	cal	17,164(13)
	lil	3,._renamfi
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,6319(13)
	l	16,4172(13)
	cal	17,164(13)
	lil	3,._copyfi
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,6327(13)
	l	16,4160(13)
	cal	17,164(13)
	lil	3,._probefi
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,6336(13)
	l	16,4156(13)
	cal	17,164(13)
	lil	3,._savecor
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,12
	cal	15,6345(13)
	l	16,4152(13)
	cal	17,164(13)
	lil	3,._restcor
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,17
	cal	15,6357(13)
	l	16,4232(13)
	cal	17,164(13)
	lil	3,._coercns
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,16
	cal	15,6374(13)
	l	16,4168(13)
	cal	17,164(13)
	lil	3,._makdir
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,16
	cal	15,6390(13)
	l	16,4164(13)
	cal	17,164(13)
	lil	3,._remdir
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
phytrue:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._tyi,1
	.globl	C.tyi
C.tyi:	mflr	0
	stu	0,-4(1)
	.globl	tyi
tyi:	cal	14,5568(21)
	b	totty0
	.set	._tys,1
	.globl	C.tys
C.tys:	mflr	0
	stu	0,-4(1)
	.globl	tys
tys:	cal	14,5600(21)
	b	totty0
	.set	._tyinstrg,2
	.globl	C.tyinstrg
C.tyinstrg:	mflr	0
	stu	0,-4(1)
	.globl	tyinstrg
tyinstrg:	stu	14,-4(1)
	lil	17,1
	cal	14,5632(21)
	b	totty
	.set	._tyflush,1
	.globl	C.tyflush
C.tyflush:	mflr	0
	stu	0,-4(1)
	.globl	tyflush
tyflush:	cal	14,5696(21)
	b	totty0
	.set	._tyo,5
	.globl	C.tyo
C.tyo:	mflr	0
	stu	0,-4(1)
	.globl	tyo
tyo:	cal	14,5664(21)
	b	totty
	.set	._tyback,2
	.globl	C.tyback
C.tyback:	mflr	0
	stu	0,-4(1)
	.globl	tyback
tyback:	stu	14,-4(1)
	lil	17,1
	cal	14,5728(21)
	b	totty
	.set	._tynewln,1
	.globl	C.tynewln
C.tynewln:	mflr	0
	stu	0,-4(1)
	.globl	tynewln
tynewln:	cal	14,5760(21)
	b	totty0
	.set	._tycn,2
	.globl	C.tycn
C.tycn:	mflr	0
	stu	0,-4(1)
	.globl	tycn
tycn:	stu	14,-4(1)
	lil	17,1
	cal	14,5792(21)
	b	totty
	.set	._tystrg,3
	.globl	C.tystrg
C.tystrg:	mflr	0
	stu	0,-4(1)
	.globl	tystrg
tystrg:	stu	14,-4(1)
	stu	15,-4(1)
	lil	17,2
	cal	14,5824(21)
	b	totty
	.set	._tycursor,3
	.globl	C.tycursor
C.tycursor:	mflr	0
	stu	0,-4(1)
	.globl	tycursor
tycursor:	stu	14,-4(1)
	stu	15,-4(1)
	lil	17,2
	cal	14,5856(21)
	b	totty
	.set	._tycls,1
	.globl	C.tycls
C.tycls:	mflr	0
	stu	0,-4(1)
	.globl	tycls
tycls:	cal	14,5888(21)
	b	totty0
	.set	._tyrdspl,5
	.globl	C.tyrdspl
C.tyrdspl:	mflr	0
	stu	0,-4(1)
	.globl	tyrdspl
tyrdspl:	cal	14,5920(21)
	b	totty
totty0:	lil	17,0
totty:	stu	17,-4(1)
	oril	15,14,0
	cal	14,6368(21)
	l	14,0(14)
	oril	16,21,0
	stu	15,-4(1)
	.globl	C.getfns
	bl	C.getfns
	l	15,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	tottyer
	l	17,0(1)
	ai	1,1,4
	b	ffuncall
tottyer:	cal	14,6368(21)
	l	14,0(14)
	b	errudf
	.set	._ttytyi,1
	.globl	C.ttytyi
C.ttytyi:	mflr	0
	stu	0,-4(1)
	.globl	ttytyi
ttytyi:	.globl	C.tyflush
	bl	C.tyflush
ttyin_again:	l	3,1216(13)
	cmpli	0,3,0
	beq	.phy.1
	.globl	C.ithard
	bl	C.ithard
.phy.1:	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.ttyin
	bl	.ttyin
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	andil.	14,3,255
	cmpi	0,3,255
	beq	ttyin_again
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._ttytys,1
	.globl	C.ttytys
C.ttytys:	mflr	0
	stu	0,-4(1)
	.globl	ttytys
ttytys:	.globl	C.tyflush
	bl	C.tyflush
	cal	3,164(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.ttys
	bl	.ttys
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	15,3,0
	l	14,164(13)
	sri	14,14,24
	cmpli	0,15,0
	beq	tys9
	oril	14,21,0
tys9:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._ttytyist,2
	.globl	C.ttytyist
C.ttytyist:	mflr	0
	stu	0,-4(1)
	.globl	ttytyist
ttytyist:	cmpl	0,14,20
	blt	ttyinr
	cmpl	0,14,21
	bge	ttyinr
	stu	14,-4(1)
	.globl	C.tyflush
	bl	C.tyflush
	l	14,0(1)
	ai	1,1,4
	l	3,0(14)
	l	4,4(3)
	ai	3,3,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.ttyinstr
	bl	.ttyinstr
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	14,3,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ttyinr:	cal	15,6048(21)
	b	errnsa
	.set	._ttytyo,5
	.globl	C.ttytyo
C.ttytyo:	mflr	0
	stu	0,-4(1)
	.globl	ttytyo
ttytyo:	cmpli	0,17,0
	beq	ttytyo9
	stu	17,-4(1)
	ai	4,17,1
	andil.	17,4,0xFFFF
	b	ttytyo2
ttytyo1:	sli	3,17,2
	lx	14,1,3
	cmpl	0,14,21
	beq	ttytyo2
	stu	17,-4(1)
	.globl	C.ttytyoi
	bl	C.ttytyoi
	l	17,0(1)
	ai	1,1,4
ttytyo2:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	ttytyo1
	lil	17,0
	l	17,0(1)
	ai	1,1,4
	exts	3,17
	sli	3,3,2
	a	1,1,3
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ttytyo9:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.ttytyoi
C.ttytyoi:	mflr	0
	stu	0,-4(1)
ttytyoi:	l	3,1328(13)
	stu	3,-4(1)
	stu	14,-4(1)
	l	14,1208(13)
	ai	4,14,2
	andil.	14,4,0xFFFF
	.globl	C.outchani
	bl	C.outchani
	l	14,0(1)
	ai	1,1,4
	l	16,4296(13)
ttytyoi0:	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	stu	16,-4(1)
	stu	15,-4(1)
	.globl	C.outchani
	bl	C.outchani
	l	15,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	mtlr	16
	br	
	.globl	ttytyoi1
ttytyoi1:	cmpl	0,14,18
	blt	ttytyof
	cmp	0,14,22
	bge	ttytyoc
	cmpl	0,14,20
	blt	.phy.2
	cmpl	0,14,21
	blt	ttytyos
.phy.2:ttytyoer:	cal	15,6080(21)
	b	errnia
ttytyof:	oril	17,14,0
	stu	14,-4(1)
	.globl	C.outch
	bl	C.outch
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ttytyoc:	stu	14,-4(1)
ttytyoc1:	l	3,4(14)
	stu	3,-4(1)
	l	17,0(14)
	.globl	C.outch
	bl	C.outch
	l	14,0(1)
	ai	1,1,4
	cmp	0,14,22
	bge	ttytyoc1
	cmpl	0,14,21
	bne	ttytyoer
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ttytyos:	l	3,0(14)
	l	15,4(3)
	l	3,1688(13)
	a	4,3,15
	andil.	15,4,0xFFFF
	exts	3,15
	l	4,1700(13)
	exts	4,4
	cmp	0,3,4
	blt	ttytyos1
	.globl	C.flulin
	bl	C.flulin
ttytyos1:	l	3,0(14)
	l	15,4(3)
	l	4,0(14)
	cal	4,8(4)
	l	5,1644(13)
	l	5,0(5)
	ai	5,5,8
	l	3,1688(13)
	a	5,5,3
	oril	3,15,0
	cmp	0,5,4
	ble	.phy.6
	a	4,4,3
	a	5,5,3
	b	.phy.4
.phy.3:	lbz	6,0(4)
	stb	6,0(5)
.phy.4:	si	4,4,1
	si	5,5,1
	si	3,3,1
	cmpi	0,3,0
	bge	.phy.3
	b	.phy.7
.phy.5:	lbz	6,0(4)
	stb	6,0(5)
	ai	4,4,1
	ai	5,5,1
.phy.6:	si	3,3,1
	cmpi	0,3,0
	bge	.phy.5
.phy.7:	l	4,1688(13)
	a	4,15,4
	andil.	3,4,0xFFFF
	st	3,1688(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._ttytyflu,1
	.globl	C.ttytyflu
C.ttytyflu:	mflr	0
	stu	0,-4(1)
	.globl	ttytyflu
ttytyflu:	l	14,1208(13)
	ai	4,14,2
	andil.	14,4,0xFFFF
	l	3,1332(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	lx	14,3,4
	l	3,0(14)
	l	14,20(3)
	cmpli	0,14,0
	bne	ttytyfl1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ttytyfl1:	l	3,1328(13)
	stu	3,-4(1)
	l	14,1208(13)
	ai	4,14,2
	andil.	14,4,0xFFFF
	.globl	C.outchani
	bl	C.outchani
	l	16,4288(13)
	b	ttytyoi0
	.set	._ttytybac,2
	.globl	C.ttytybac
C.ttytybac:	mflr	0
	stu	0,-4(1)
	.globl	ttytybac
ttytybac:	l	14,1356(13)
	lil	15,3
	b	ttytystr
	.set	._ttytynew,1
	.globl	C.ttytynew
C.ttytynew:	mflr	0
	stu	0,-4(1)
	.globl	ttytynew
ttytynew:	lil	6,0
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
	.set	._ttytycn,2
	.globl	C.ttytycn
C.ttytycn:	mflr	0
	stu	0,-4(1)
	.globl	ttytycn
ttytycn:	l	15,1352(13)
	l	3,0(15)
	stb	14,8(3)
	lil	3,1
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
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._ttytystr,3
	.globl	C.ttytystr
C.ttytystr:	mflr	0
	stu	0,-4(1)
	.globl	ttytystr
ttytystr:	cmpl	0,14,20
	blt	tystrers
	cmpl	0,14,21
	bge	tystrers
	cmpl	0,15,18
	bge	tystrern
	l	3,0(14)
	l	16,4(3)
	exts	3,15
	cmpi	0,3,0
	blt	ttytyst0
	exts	3,15
	exts	4,16
	cmp	0,3,4
	blt	ttytyst1
ttytyst0:	oril	15,16,0
ttytyst1:	oril	3,15,0
	l	4,0(14)
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
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
tystrers:	cal	15,5824(21)
	b	errnsa
tystrern:	oril	14,15,0
	cal	15,5824(21)
	b	errnia
	.set	._ttytycur,3
	.globl	C.ttytycur
C.ttytycur:	mflr	0
	stu	0,-4(1)
	.globl	ttytycur
ttytycur:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._ttytycls,1
	.globl	C.ttytycls
C.ttytycls:	mflr	0
	stu	0,-4(1)
	.globl	ttytycls
ttytycls:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._ttytyrds,5
	.globl	C.ttytyrds
C.ttytyrds:	mflr	0
	stu	0,-4(1)
	.globl	ttytyrds
ttytyrds:	b	rdpscrn
	.set	._bol,1
	.globl	C.bol
C.bol:	mflr	0
	stu	0,-4(1)
	.globl	bol
bol:	.globl	C.inphyl
	bl	C.inphyl
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._finmax,5
	.globl	C.finmax
C.finmax:	mflr	0
	stu	0,-4(1)
	.globl	finmax
finmax:	lil	3,0
	stu	3,-4(1)
	l	3,1364(13)
	l	3,0(3)
	l	15,4(3)
	stu	15,-4(1)
	cal	15,6464(21)
	l	16,1372(13)
	.globl	C.getsetn
	bl	C.getsetn
	st	14,1372(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._finpos,5
	.globl	C.finpos
C.finpos:	mflr	0
	stu	0,-4(1)
	.globl	finpos
finpos:	lil	3,0
	stu	3,-4(1)
	l	3,1364(13)
	l	3,0(3)
	l	15,4(3)
	stu	15,-4(1)
	cal	15,6496(21)
	l	16,1368(13)
	.globl	C.getsetn
	bl	C.getsetn
	st	14,1368(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._finbuf,5
	.globl	C.finbuf
C.finbuf:	mflr	0
	stu	0,-4(1)
	.globl	finbuf
finbuf:	cmpli	0,17,0
	bne	inbu1
	l	14,1364(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
inbu1:	cal	15,6528(21)
	cmpli	0,17,1
	beq	inbu2
	cmpli	0,17,2
	beq	inbu5
	lil	14,2
	cal	15,6528(21)
	b	errwna
inbu2:	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	blt	inbu3
	b	errnia
inbu3:	l	3,1364(13)
	l	3,0(3)
	ai	4,14,8
	lbzx	14,3,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
inbu5:	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	blt	inbu6
	b	errnia
inbu6:	l	3,1364(13)
	l	3,0(3)
	ai	4,14,8
	stbx	15,3,4
	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.inphy
C.inphy:	mflr	0
	stu	0,-4(1)
inphy:	l	3,1368(13)
	exts	3,3
	l	4,1372(13)
	exts	4,4
	cmp	0,3,4
	bge	inph2
	l	3,1364(13)
	l	3,0(3)
	l	4,1368(13)
	ai	4,4,8
	lbzx	17,3,4
	l	4,1368(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1368(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
inph2:	l	3,1216(13)
	cmpli	0,3,0
	beq	.phy.8
	.globl	C.ithard
	bl	C.ithard
.phy.8:	stu	14,-4(1)
	stu	15,-4(1)
	stu	17,-4(1)
	cal	14,6432(21)
	oril	15,21,0
	.globl	C.itsoft
	bl	C.itsoft
	l	17,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	lil	3,0
	st	3,1368(13)
	b	inphy
	.globl	C.inphyl
C.inphyl:	mflr	0
	stu	0,-4(1)
inphyl:	stu	15,-4(1)
	stu	17,-4(1)
	stu	14,-4(1)
	lil	3,0
	stu	3,-4(1)
	lil	3,0
	stu	3,-4(1)
inphyl0:	l	3,1324(13)
	cmpl	0,3,18
	blt	inchf
inphy1:	l	14,1360(13)
	l	3,0(14)
	l	15,4(3)
	.globl	C.tystrg
	bl	C.tystrg
	lil	17,0
	cal	16,6688(21)
	l	3,0(16)
	cmpl	0,3,21
	bne	inphln
	cal	16,6656(21)
	l	16,0(16)
	cmpl	0,16,21
	beq	inphp3
inphy3:	.globl	C.tyi
	bl	C.tyi
	st	14,4(1)
	cmpli	0,14,8
	beq	inphy6
	cmpli	0,14,127
	beq	inphy6
	cmpli	0,14,24
	beq	inphy8
	cmpli	0,14,21
	beq	inphy8
	cmpli	0,14,13
	beq	inphy9
	cmpli	0,14,10
	beq	inphy9
	exts	3,14
	cmpi	0,3,32
	blt	inphy5
	.globl	C.tycn
	bl	C.tycn
inphy4:	l	14,4(1)
	l	17,0(1)
	l	3,1364(13)
	l	3,0(3)
	ai	4,17,8
	stbx	14,3,4
	ai	4,17,1
	andil.	17,4,0xFFFF
	st	17,0(1)
	l	3,1364(13)
	l	3,0(3)
	l	14,4(3)
	exts	3,17
	exts	4,14
	cmp	0,3,4
	blt	inphy3
	b	inphyd
inphy5:	ai	4,14,64
	andil.	14,4,0xFFFF
	l	3,1348(13)
	l	3,0(3)
	stb	14,9(3)
	l	14,1348(13)
	lil	15,2
	.globl	C.tystrg
	bl	C.tystrg
	b	inphy4
inphy6:	l	17,0(1)
	cmpli	0,17,0
	beq	inphy3
	si	4,17,1
	andil.	17,4,0xFFFF
	st	17,0(1)
	.globl	C.inphy60
	bl	C.inphy60
	b	inphy3
	.globl	C.inphy60
C.inphy60:	mflr	0
	stu	0,-4(1)
inphy60:	l	3,1364(13)
	l	3,0(3)
	ai	4,17,8
	lbzx	14,3,4
	exts	3,14
	cmpi	0,3,32
	bge	inphy61
	ai	4,14,64
	andil.	14,4,0xFFFF
	.globl	C.tyback
	bl	C.tyback
	lil	14,94
inphy61:	b	tyback
inphy8:	l	17,0(1)
	cmpli	0,17,0
	beq	inphy3
	b	inphy81
inphy80:	st	17,0(1)
	.globl	C.inphy60
	bl	C.inphy60
	l	17,0(1)
inphy81:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	inphy80
	lil	17,0
	lil	3,0
	st	3,0(1)
	b	inphy3
inphy9:	.globl	C.tynewln
	bl	C.tynewln
inphyc:	l	17,0(1)
	l	3,1364(13)
	l	3,0(3)
	ai	4,17,8
	lil	5,13
	stbx	5,3,4
	ai	4,17,1
	andil.	17,4,0xFFFF
	l	3,1364(13)
	l	3,0(3)
	ai	4,17,8
	lil	5,10
	stbx	5,3,4
	ai	4,17,1
	andil.	17,4,0xFFFF
inphyd:	st	17,1372(13)
	ai	1,1,8
	l	14,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
inphp2:	l	17,0(1)
	l	3,1364(13)
	l	3,0(3)
	ai	4,17,8
	stbx	14,3,4
	ai	4,17,1
	andil.	17,4,0xFFFF
	st	17,0(1)
inphp3:	.globl	C.tyi
	bl	C.tyi
	cmpli	0,14,10
	beq	inphyc
	cmpli	0,14,13
	bne	inphp2
	b	inphyc
inphln:	l	14,1364(13)
	.globl	C.tyinstrg
	bl	C.tyinstrg
	st	14,0(1)
	b	inphyc
inchf:	l	3,1336(13)
	l	3,0(3)
	l	16,12(3)
	cmpli	0,16,1
	beq	inchf00
	cmpli	0,16,3
	bne	inchf0
	l	3,1324(13)
	l	4,1364(13)
	l	4,0(4)
	ai	4,4,8
	cal	5,132(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.inbfb
	bl	.inbfb
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	16,3,0
	l	17,132(13)
	st	17,0(1)
	exts	3,16
	cmpi	0,3,0
	blt	inchf1
	cmpli	0,16,1
	beq	inchf3
	b	inphyd
inchf00:	l	3,1324(13)
	l	4,1364(13)
	l	4,0(4)
	ai	4,4,8
	cal	5,132(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.inbf
	bl	.inbf
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	16,3,0
	l	17,132(13)
	st	17,0(1)
	exts	3,16
	cmpi	0,3,0
	blt	inchf1
	cmpli	0,16,0
	beq	inphyc
	cmpli	0,16,1
	beq	inchf3
	b	inphyd
inchf0:	oril	14,21,0
	.globl	C.inchani
	bl	C.inchani
	xor	14,14,14
	oril	14,14,0xFFFC
	cal	15,6944(21)
	b	errios
inchf1:	oril	14,21,0
	.globl	C.inchani
	bl	C.inchani
	oril	14,16,0
	cal	15,6944(21)
	b	errios
inchf3:	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	cal	14,6560(21)
	l	15,1324(13)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.phy.9
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.phy.9:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
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
	b	inphyl0
	.set	._lleof,2
	.globl	C.lleof
C.lleof:	mflr	0
	stu	0,-4(1)
	.globl	lleof
lleof:	cmpl	0,14,21
	beq	lleof1
	stu	14,-4(1)
	oril	3,14,0
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.fclos
	bl	.fclos
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	15,3,0
	oril	15,21,0
	l	3,1332(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	stx	15,3,4
	oril	14,21,0
	.globl	C.inchani
	bl	C.inchani
	l	14,0(1)
	ai	1,1,4
lleof1:	cal	15,7424(21)
	l	3,0(15)
	cmpl	0,3,21
	beq	lleof2
	b	erlec11
lleof2:	cal	15,6560(21)
	b	findtag
	.set	._prompt,5
	.globl	C.prompt
C.prompt:	mflr	0
	stu	0,-4(1)
	.globl	prompt
prompt:	cmpli	0,17,0
	beq	prompt2
	cmpli	0,17,1
	beq	prompt1
	lil	14,2
	cal	15,6592(21)
	b	errwna
prompt1:	l	14,0(1)
	ai	1,1,4
	cal	3,6592(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	st	14,1360(13)
prompt2:	l	14,1360(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
prompter:	cal	15,6592(21)
	b	errnaa
	.set	._coercns,2
	.globl	C.coercns
C.coercns:	mflr	0
	stu	0,-4(1)
	.globl	coercns
coercns:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.coerci
C.coerci:	mflr	0
	stu	0,-4(1)
coerci:	stu	14,-4(1)
	cal	14,7296(21)
	lil	17,1
	b	ffuncall
	.globl	C.chanalloc
C.chanalloc:	mflr	0
	stu	0,-4(1)
chanalloc:	l	15,1208(13)
	b	chanal4
chanal3:	l	3,1332(13)
	l	3,0(3)
	ai	4,15,2
	sli	4,4,2
	lx	16,3,4
	cmpl	0,16,21
	beq	chanal9
chanal4:	exts	15,15
	si	15,15,1
	cmpi	0,15,0
	bge	chanal3
	lil	15,0
	xor	15,15,15
	oril	15,15,0xFFFE
chanal9:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.inchini
C.inchini:	mflr	0
	stu	0,-4(1)
inchini:	stu	15,-4(1)
	stu	14,-4(1)
	stu	16,-4(1)
	lil	14,7
	oril	15,21,0
	.globl	C.makevect
	bl	C.makevect
	stu	14,-4(1)
	l	14,1344(13)
	lil	15,0
	.globl	C.makestrg
	bl	C.makestrg
	l	15,0(1)
	ai	1,1,4
	l	3,0(15)
	st	14,16(3)
	l	16,0(1)
	ai	1,1,4
	l	3,0(15)
	st	16,12(3)
	l	14,0(1)
	ai	1,1,4
	l	3,0(15)
	st	14,8(3)
	l	3,0(15)
	lil	5,0
	st	5,20(3)
	l	3,0(15)
	lil	5,0
	st	5,24(3)
	oril	14,21,0
	l	3,0(15)
	st	14,28(3)
	l	3,0(15)
	st	14,32(3)
	l	14,0(1)
	ai	1,1,4
	l	3,1332(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	stx	15,3,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.outchini
C.outchini:	mflr	0
	stu	0,-4(1)
outchini:	stu	15,-4(1)
	stu	14,-4(1)
	stu	16,-4(1)
	lil	14,7
	oril	15,21,0
	.globl	C.makevect
	bl	C.makevect
	stu	14,-4(1)
	l	14,1344(13)
	lil	15,32
	.globl	C.makestrg
	bl	C.makestrg
	l	15,0(1)
	ai	1,1,4
	l	3,0(15)
	st	14,16(3)
	l	16,0(1)
	ai	1,1,4
	l	3,0(15)
	st	16,12(3)
	l	16,0(1)
	ai	1,1,4
	l	3,0(15)
	st	16,8(3)
	l	3,0(15)
	lil	5,0
	st	5,20(3)
	l	3,0(15)
	l	5,1692(13)
	st	5,24(3)
	l	3,0(15)
	l	5,1696(13)
	st	5,28(3)
	l	3,0(15)
	l	5,1700(13)
	st	5,32(3)
	l	14,0(1)
	ai	1,1,4
	l	3,1332(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	stx	15,3,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
openr1:	oril	14,15,0
openr2:	l	15,1740(13)
	b	errios
	.set	._openi,2
	.globl	C.openi
C.openi:	mflr	0
	stu	0,-4(1)
	.globl	openi
openi:	.globl	C.coerci
	bl	C.coerci
	cal	3,6720(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	.globl	C.chanalloc
	bl	C.chanalloc
	cmpli	0,15,0xFFFE
	beq	openr1
	oril	3,15,0
	l	4,0(14)
	ai	4,4,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.infile
	bl	.infile
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	16,3,0
	cmpli	0,16,0
	bne	openr2
	lil	16,1
	b	inchini
	.set	._openo,2
	.globl	C.openo
C.openo:	mflr	0
	stu	0,-4(1)
	.globl	openo
openo:	.globl	C.coerci
	bl	C.coerci
	cal	3,6752(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	.globl	C.chanalloc
	bl	C.chanalloc
	cmpli	0,15,0xFFFE
	beq	openr1
	oril	3,15,0
	l	4,0(14)
	ai	4,4,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.oufile
	bl	.oufile
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	17,3,0
	cmpli	0,17,0
	bne	openr2
	lil	16,2
	b	outchini
	.set	._opena,2
	.globl	C.opena
C.opena:	mflr	0
	stu	0,-4(1)
	.globl	opena
opena:	.globl	C.coerci
	bl	C.coerci
	cal	3,6784(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	.globl	C.chanalloc
	bl	C.chanalloc
	cmpli	0,15,0xFFFE
	beq	openr1
	oril	3,15,0
	l	4,0(14)
	ai	4,4,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.apfile
	bl	.apfile
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	17,3,0
	cmpli	0,17,0
	bne	openr2
	lil	16,2
	b	outchini
	.set	._openib,2
	.globl	C.openib
C.openib:	mflr	0
	stu	0,-4(1)
	.globl	openib
openib:	.globl	C.coerci
	bl	C.coerci
	cal	3,6816(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	.globl	C.chanalloc
	bl	C.chanalloc
	cmpli	0,15,0xFFFE
	beq	openr1
	oril	3,15,0
	l	4,0(14)
	ai	4,4,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.infile
	bl	.infile
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	16,3,0
	cmpli	0,16,0
	bne	openr2
	lil	16,3
	b	inchini
	.set	._openob,2
	.globl	C.openob
C.openob:	mflr	0
	stu	0,-4(1)
	.globl	openob
openob:	.globl	C.coerci
	bl	C.coerci
	cal	3,6848(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	.globl	C.chanalloc
	bl	C.chanalloc
	cmpli	0,15,0xFFFE
	beq	openr1
	oril	3,15,0
	l	4,0(14)
	ai	4,4,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.oufile
	bl	.oufile
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	16,3,0
	cmpli	0,16,0
	bne	openr2
	lil	16,4
	b	outchini
	.set	._openab,2
	.globl	C.openab
C.openab:	mflr	0
	stu	0,-4(1)
	.globl	openab
openab:	.globl	C.coerci
	bl	C.coerci
	cal	3,6880(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	.globl	C.chanalloc
	bl	C.chanalloc
	cmpli	0,15,0xFFFE
	beq	openr1
	oril	3,15,0
	l	4,0(14)
	ai	4,4,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.apfile
	bl	.apfile
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	16,3,0
	cmpli	0,16,0
	bne	openr2
	lil	16,4
	b	outchini
	.set	._input,2
	.globl	C.input
C.input:	mflr	0
	stu	0,-4(1)
	.globl	input
input:	l	3,1324(13)
	cmpl	0,3,21
	beq	inputi
	stu	14,-4(1)
	l	14,1324(13)
	.globl	C.closeint
	bl	C.closeint
	l	14,0(1)
	ai	1,1,4
inputi:	cmpl	0,14,21
	beq	input2
	.globl	C.openi
	bl	C.openi
input2:	.globl	C.inchani
	bl	C.inchani
	b	phytrue
	.set	._output,2
	.globl	C.output
C.output:	mflr	0
	stu	0,-4(1)
	.globl	output
output:	l	3,1328(13)
	exts	3,3
	l	4,1208(13)
	exts	4,4
	cmp	0,3,4
	bge	ouput1
	stu	14,-4(1)
	l	14,1328(13)
	.globl	C.closeint
	bl	C.closeint
	l	14,0(1)
	ai	1,1,4
ouput1:	cmpl	0,14,21
	beq	ouput2
	cal	4,96(21)
	cmpl	0,14,4
	bne	ouput3
	l	14,1208(13)
	ai	4,14,2
	andil.	14,4,0xFFFF
	b	ouput4
ouput2:	l	14,1208(13)
	b	ouput4
ouput3:	.globl	C.openo
	bl	C.openo
ouput4:	.globl	C.outchani
	bl	C.outchani
	b	phytrue
	.set	._inchan,5
	.globl	C.inchan
C.inchan:	mflr	0
	stu	0,-4(1)
	.globl	inchan
inchan:	cmpli	0,17,0
	beq	inchget
	cmpli	0,17,1
	beq	inchset
	lil	14,1
	cal	15,6944(21)
	b	errwna
inchget:	l	14,1324(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
inchset:	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	blt	inchst2
	cmpl	0,14,21
	beq	inchst3
incherr1:	xor	14,14,14
	oril	14,14,0xFFFD
incherr2:	cal	15,6944(21)
	b	errios
inchst2:	exts	3,14
	cmpi	0,3,0
	blt	incherr1
	exts	3,14
	l	4,1208(13)
	exts	4,4
	cmp	0,3,4
	bge	incherr1
	l	3,1332(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	lx	15,3,4
	cmpl	0,15,21
	beq	incherr3
	l	3,0(15)
	l	15,12(3)
	cmpli	0,15,1
	beq	inchani
	cmpli	0,15,3
	bne	incherr3
inchst3:	b	inchani
incherr3:	xor	14,14,14
	oril	14,14,0xFFFC
	b	incherr2
	.globl	C.inchani
C.inchani:	mflr	0
	stu	0,-4(1)
inchani:	stu	14,-4(1)
	.globl	C.inclose
	bl	C.inclose
	l	14,0(1)
	ai	1,1,4
	b	inopen
	.globl	C.inopen
C.inopen:	mflr	0
	stu	0,-4(1)
inopen:	st	14,1324(13)
	cmpl	0,14,21
	bne	inchani3
	l	15,1208(13)
	ai	4,15,1
	andil.	15,4,0xFFFF
	b	inchani4
inchani3:	oril	15,14,0
inchani4:	l	3,1332(13)
	l	3,0(3)
	ai	4,15,2
	sli	4,4,2
	lx	15,3,4
	l	3,0(15)
	l	3,16(3)
	st	3,1364(13)
	l	3,0(15)
	l	3,20(3)
	st	3,1368(13)
	l	3,0(15)
	l	3,24(3)
	st	3,1372(13)
	l	3,0(15)
	l	3,28(3)
	st	3,1428(13)
	l	3,0(15)
	l	3,32(3)
	st	3,1424(13)
	st	15,1336(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.inclose
C.inclose:	mflr	0
	stu	0,-4(1)
inclose:	l	15,1324(13)
	cmpl	0,15,21
	bne	inchani1
	l	15,1208(13)
	ai	4,15,1
	andil.	15,4,0xFFFF
inchani1:	l	3,1332(13)
	l	3,0(3)
	ai	4,15,2
	sli	4,4,2
	lx	15,3,4
	cmpl	0,15,21
	beq	inchani2
	l	3,0(15)
	l	5,1364(13)
	st	5,16(3)
	l	3,0(15)
	l	5,1368(13)
	st	5,20(3)
	l	3,0(15)
	l	5,1372(13)
	st	5,24(3)
	l	3,0(15)
	l	5,1428(13)
	st	5,28(3)
	l	3,0(15)
	l	5,1424(13)
	st	5,32(3)
inchani2:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._outchan,5
	.globl	C.outchan
C.outchan:	mflr	0
	stu	0,-4(1)
	.globl	outchan
outchan:	cmpli	0,17,0
	beq	ouchget
	cmpli	0,17,1
	beq	ouchset
	lil	14,1
	cal	15,6976(21)
	b	errwna
ouchget:	l	14,1328(13)
	l	15,1208(13)
	exts	3,14
	exts	4,15
	cmp	0,3,4
	blt	ouchget2
	cmpl	0,14,15
	beq	ouchget1
	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ouchget1:	oril	14,21,0
ouchget2:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ouchset:	l	14,0(1)
	cmpl	0,14,18
	blt	ouchst2
	cmpl	0,14,21
	beq	ouchst1
	cal	4,96(21)
	cmpl	0,14,4
	bne	oucherr1
	l	14,1208(13)
	ai	4,14,2
	andil.	14,4,0xFFFF
	b	ouchst3
ouchst1:	l	14,1208(13)
	b	ouchst3
ouchst2:	exts	3,14
	cmpi	0,3,0
	blt	oucherr1
	exts	3,14
	l	4,1208(13)
	exts	4,4
	cmp	0,3,4
	bge	oucherr1
	l	3,1332(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	lx	15,3,4
	cmpl	0,15,21
	beq	oucherr3
	l	3,0(15)
	l	15,12(3)
	cmpli	0,15,4
	beq	ouchst3
	cmpli	0,15,2
	bne	oucherr3
ouchst3:	.globl	C.outchani
	bl	C.outchani
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
oucherr3:	xor	14,14,14
	oril	14,14,0xFFFC
	b	oucherr2
oucherr1:	xor	14,14,14
	oril	14,14,0xFFFD
oucherr2:	cal	15,6976(21)
	b	errios
	.globl	C.outchani
C.outchani:	mflr	0
	stu	0,-4(1)
outchani:	.globl	C.outclose
	bl	C.outclose
	b	outopen
	.globl	C.outopen
C.outopen:	mflr	0
	stu	0,-4(1)
outopen:	st	14,1328(13)
outchai3:	oril	15,14,0
outchai4:	l	3,1332(13)
	l	3,0(3)
	ai	4,15,2
	sli	4,4,2
	lx	15,3,4
	l	3,0(15)
	l	3,16(3)
	st	3,1644(13)
	l	3,0(15)
	l	3,20(3)
	st	3,1688(13)
	l	3,0(15)
	l	3,24(3)
	st	3,1692(13)
	l	3,0(15)
	l	3,28(3)
	st	3,1696(13)
	l	3,0(15)
	l	3,32(3)
	st	3,1700(13)
	st	15,1340(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.outclose
C.outclose:	mflr	0
	stu	0,-4(1)
outclose:	l	15,1328(13)
outchai1:	l	3,1332(13)
	l	3,0(3)
	ai	4,15,2
	sli	4,4,2
	lx	15,3,4
	cmpl	0,15,21
	beq	outchai2
	l	3,0(15)
	l	5,1644(13)
	st	5,16(3)
	l	3,0(15)
	l	5,1688(13)
	st	5,20(3)
	l	3,0(15)
	l	5,1692(13)
	st	5,24(3)
	l	3,0(15)
	l	5,1696(13)
	st	5,28(3)
	l	3,0(15)
	l	5,1700(13)
	st	5,32(3)
outchai2:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._fchannel,5
	.globl	C.fchannel
C.fchannel:	mflr	0
	stu	0,-4(1)
	.globl	fchannel
fchannel:	cmpli	0,17,0
	beq	fchan5
	cmpli	0,17,1
	beq	fchan1
	lil	14,1
	cal	15,7008(21)
	b	errwna
fchan1:	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	blt	fchan2
	cal	4,96(21)
	cmpl	0,14,4
	beq	fchan8
	cal	15,7008(21)
	b	errnia
fchan2:	exts	3,14
	cmpi	0,3,0
	blt	fchan4
	exts	3,14
	l	4,1208(13)
	exts	4,4
	cmp	0,3,4
	bge	fchan4
	b	fchan21
	.globl	C.fchan21
C.fchan21:	mflr	0
	stu	0,-4(1)
fchan21:	l	3,1332(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	lx	14,3,4
	cmpl	0,14,21
	beq	fchan3
	l	3,0(14)
	l	15,8(3)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.phy.10
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.phy.10:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	l	3,0(14)
	l	14,12(3)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.phy.11
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.phy.11:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	15,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fchan3:	oril	15,21,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.phy.12
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.phy.12:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	lil	14,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.phy.13
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.phy.13:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	15,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fchan4:	xor	14,14,14
	oril	14,14,0xFFFD
	cal	15,7008(21)
	b	errios
fchan5:	oril	16,21,0
	l	17,1208(13)
	b	fchan7
fchan6:	oril	14,17,0
	.globl	C.fchan21
	bl	C.fchan21
	l	6,1184(13)
	cmpl	0,6,21
	bne	.phy.14
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.phy.14:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	16,4(6)
	oril	16,6,0
fchan7:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	fchan6
	lil	17,0
	l	17,1208(13)
	oril	14,16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fchan8:	l	14,1332(13)
	b	copy
	.set	._lclose,5
	.globl	C.lclose
C.lclose:	mflr	0
	stu	0,-4(1)
	.globl	lclose
lclose:	cmpli	0,17,1
	beq	lclose8
	cmpli	0,17,0
	bne	closer1
	oril	17,21,0
	l	14,1208(13)
	l	15,1332(13)
	si	4,14,1
	andil.	14,4,0xFFFF
lclose1:	l	3,0(15)
	ai	4,14,2
	sli	4,4,2
	lx	16,3,4
	cmpl	0,16,21
	beq	lclose2
	l	3,0(15)
	ai	4,14,2
	sli	4,4,2
	stx	17,3,4
	oril	3,14,0
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.fclos
	bl	.fclos
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	16,3,0
	cmpli	0,16,0
	bne	closer0
lclose2:	exts	14,14
	si	14,14,1
	cmpi	0,14,0
	bge	lclose1
	lil	14,0
	l	14,1208(13)
	.globl	C.outchani
	bl	C.outchani
	b	phytrue
lclose8:	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	closer4
	exts	3,14
	cmpi	0,3,0
	blt	closer2
	exts	3,14
	l	4,1208(13)
	exts	4,4
	cmp	0,3,4
	bge	closer2
	l	3,1332(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	lx	15,3,4
	cmpl	0,15,21
	bne	closeint
closer0:	xor	14,14,14
	oril	14,14,0xFFFC
	b	closer3
closer1:	cal	15,7072(21)
	lil	14,1
	b	errwna
closer2:	xor	14,14,14
	oril	14,14,0xFFFD
closer3:	cal	15,7072(21)
	b	errios
closer4:	cal	15,7072(21)
	b	errnia
	.globl	C.closeint
C.closeint:	mflr	0
	stu	0,-4(1)
closeint:	oril	15,21,0
	l	3,1332(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	stx	15,3,4
	oril	3,14,0
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.fclos
	bl	.fclos
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	15,3,0
	cmpli	0,15,0
	beq	phytrue
	cal	15,7072(21)
	b	errios
	.set	._deletfi,2
	.globl	C.deletfi
C.deletfi:	mflr	0
	stu	0,-4(1)
	.globl	deletfi
deletfi:	.globl	C.coerci
	bl	C.coerci
	cal	3,7104(21)
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
	.globl	.fdele
	bl	.fdele
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	14,3,0
	cmpli	0,14,0
	beq	phytrue
	cal	15,7104(21)
	b	errios
	.set	._renamfi,3
	.globl	C.renamfi
C.renamfi:	mflr	0
	stu	0,-4(1)
	.globl	renamfi
renamfi:	stu	15,-4(1)
	.globl	C.coerci
	bl	C.coerci
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	.globl	C.coerci
	bl	C.coerci
	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	cal	3,7136(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	.globl	C.stringa2
	bl	C.stringa2
	l	3,0(14)
	ai	3,3,8
	l	4,0(15)
	ai	4,4,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.frena
	bl	.frena
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	14,3,0
	cmpli	0,14,0
	beq	phytrue
	cal	15,7136(21)
	b	errios
	.set	._copyfi,3
	.globl	C.copyfi
C.copyfi:	mflr	0
	stu	0,-4(1)
	.globl	copyfi
copyfi:	stu	15,-4(1)
	.globl	C.coerci
	bl	C.coerci
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	.globl	C.coerci
	bl	C.coerci
	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	cal	3,7168(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	.globl	C.stringa2
	bl	C.stringa2
	l	3,0(14)
	ai	3,3,8
	l	4,0(15)
	ai	4,4,8
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.fcopy
	bl	.fcopy
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	14,3,0
	cmpli	0,14,0
	beq	phytrue
	cal	15,7168(21)
	b	errios
	.set	._makdir,2
	.globl	C.makdir
C.makdir:	mflr	0
	stu	0,-4(1)
	.globl	makdir
makdir:	.globl	C.coerci
	bl	C.coerci
	cal	3,7328(21)
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
	.globl	.llmkdir
	bl	.llmkdir
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	14,3,0
	cmpli	0,14,0
	beq	phytrue
	cal	15,7328(21)
	b	errios
	.set	._remdir,2
	.globl	C.remdir
C.remdir:	mflr	0
	stu	0,-4(1)
	.globl	remdir
remdir:	.globl	C.coerci
	bl	C.coerci
	cal	3,7360(21)
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
	.globl	.llrmdir
	bl	.llrmdir
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	14,3,0
	cmpli	0,14,0
	beq	phytrue
	cal	15,7360(21)
	b	errios
	.set	._probefi,2
	.globl	C.probefi
C.probefi:	mflr	0
	stu	0,-4(1)
	.globl	probefi
probefi:	.globl	C.coerci
	bl	C.coerci
	cal	3,7200(21)
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
	.globl	.fprobe
	bl	.fprobe
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	oril	14,3,0
	cmpli	0,14,0
	beq	phytrue
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._savecor,2
	.globl	C.savecor
C.savecor:	mflr	0
	stu	0,-4(1)
	.globl	savecor
savecor:	.globl	C.coerci
	bl	C.coerci
	cal	3,7232(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	cal	3,96(21)
	stu	3,-4(1)
	.globl	hgc
	.globl	C.hgc
	bl	C.hgc
	cal	3,188(13)
	st	3,172(13)
	cal	3,2024(13)
	st	3,176(13)
	l	3,1084(13)
	st	3,196(13)
	l	3,1096(13)
	st	3,200(13)
	l	3,0(14)
	ai	3,3,8
	.globl	C.ll_corsav
	bl	C.ll_corsav
	oril	14,3,0
	cmpli	0,14,0
	beq	corres
	cal	15,7232(21)
	b	errios
corres:	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._restcor,2
	.globl	C.restcor
C.restcor:	mflr	0
	stu	0,-4(1)
	.globl	restcor
restcor:	.globl	C.coerci
	bl	C.coerci
	cal	3,7264(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	b	restcori
	.globl	C.restcori
C.restcori:	mflr	0
	stu	0,-4(1)
restcori:	cal	3,188(13)
	st	3,172(13)
	l	3,0(14)
	ai	3,3,8
	.globl	C.ll_corest
	bl	C.ll_corest
	oril	14,3,0
	cmpli	0,14,0
	beq	restres
	cal	15,7264(21)
	b	errios
restres:	l	14,0(1)
	ai	1,1,4
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
