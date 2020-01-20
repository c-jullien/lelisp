	.csect	lelisp_txt[PR]
	.globl	errnia
	.globl	errnla
	.globl	errnsa
	.globl	errsxt
	.globl	errsym
	.globl	erroob
	.globl	errudf
	.globl	errudv
	.globl	getsetn
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	gcsymb
	.globl	hgc
	.globl	inphy
	.globl	sysprot
	.globl	evala1
	.globl	apply
	.globl	ffuncall
	.globl	llde
	.globl	getfns
	.globl	setfn
	.globl	getprop
	.globl	nreverse
	.globl	lllength
	.globl	equal
	.globl	gaplus2i
	.globl	gatim2i
	.globl	gadinv
	.globl	gadiv
	.globl	stringa1
	.globl	strgallc
	.globl	makestrg
	.globl	makevect
	.globl	fascii
	.globl	ini_read
	.globl	istdsym
	.globl	hashint
	.globl	inisymb
	.globl	inicst
	.globl	inasymb
	.globl	inacst
	.globl	tryatom
	.globl	trysymp
	.globl	trysymb
	.globl	trysympk
	.globl	crastrg
	.globl	erlec11
	.globl	readdltd
	.globl	lread
	.globl	readi
	.globl	getch
	.globl	asciii
	.globl	rereada4
	.globl	getcv
	.globl	read2
	.globl	rdpkgc2
	.globl	base10p
	.globl	erlec6
	.globl	C.ini_read
C.ini_read:	mflr	0
	stu	0,-4(1)
ini_read:	st	21,1424(13)
	st	21,1428(13)
	st	21,1436(13)
	st	21,1440(13)
	cal	3,224(21)
	st	3,1452(13)
	lil	14,14
	cal	15,6406(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	st	21,0(14)
	lil	14,12
	cal	15,6420(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	st	21,0(14)
	st	21,1452(13)
	lil	14,4
	cal	15,6432(13)
	l	16,4128(13)
	cal	17,164(13)
	lil	3,._lread
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,6436(13)
	l	16,4124(13)
	cal	17,164(13)
	lil	3,._implode
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,6443(13)
	l	16,4120(13)
	cal	17,164(13)
	lil	3,._implodech
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6452(13)
	l	16,4116(13)
	cal	17,164(13)
	lil	3,._readch
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6458(13)
	l	16,4108(13)
	cal	17,164(13)
	lil	3,._readcod
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,6464(13)
	l	16,4104(13)
	cal	17,164(13)
	lil	3,._lcuread
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6471(13)
	l	16,4100(13)
	cal	17,164(13)
	lil	3,._teread
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6477(13)
	l	16,4096(13)
	cal	17,164(13)
	lil	3,._reread
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,6483(13)
	l	16,4084(13)
	cal	17,164(13)
	lil	3,._readline
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,6491(13)
	l	16,4076(13)
	cal	17,164(13)
	lil	3,._readstrg
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,6501(13)
	l	16,4080(13)
	cal	17,164(13)
	lil	3,._stratom
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,19
	cal	15,6508(13)
	l	16,4072(13)
	cal	17,164(13)
	lil	3,._readdltd
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6527(13)
	l	16,4092(13)
	cal	17,164(13)
	lil	3,._peekch
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6533(13)
	l	16,4088(13)
	cal	17,164(13)
	lil	3,._peekcn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,6539(13)
	l	16,4052(13)
	cal	17,164(13)
	lil	3,._concatpk
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6549(13)
	l	16,4060(13)
	cal	17,164(13)
	lil	3,._fascii
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6554(13)
	l	16,4056(13)
	cal	17,164(13)
	lil	3,._cascii
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,6560(13)
	l	16,4048(13)
	cal	17,164(13)
	lil	3,._uppercase
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,6569(13)
	l	16,4044(13)
	cal	17,164(13)
	lil	3,._lowercase
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6578(13)
	l	16,4040(13)
	cal	17,164(13)
	lil	3,._asciip
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6584(13)
	l	16,4036(13)
	cal	17,164(13)
	lil	3,._digitp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,6590(13)
	l	16,4032(13)
	cal	17,164(13)
	lil	3,._letterp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6597(13)
	l	16,4028(13)
	cal	17,164(13)
	lil	3,._fibase
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	3,10
	st	3,1404(13)
	lil	14,256
	lil	15,12
	.globl	C.makestrg
	bl	C.makestrg
	st	14,1396(13)
	l	3,0(14)
	lil	4,0
	stb	4,8(3)
	l	3,0(14)
	lil	4,7
	stb	4,16(3)
	l	3,0(14)
	lil	4,7
	stb	4,17(3)
	l	3,0(14)
	lil	4,2
	stb	4,18(3)
	l	3,0(14)
	lil	4,7
	stb	4,19(3)
	l	3,0(14)
	lil	4,7
	stb	4,20(3)
	l	3,0(14)
	lil	4,2
	stb	4,21(3)
	l	3,0(14)
	lil	4,7
	stb	4,40(3)
	l	3,0(14)
	lil	4,11
	stb	4,42(3)
	l	3,0(14)
	lil	4,9
	stb	4,43(3)
	l	3,0(14)
	lil	4,10
	stb	4,47(3)
	l	3,0(14)
	lil	4,4
	stb	4,48(3)
	l	3,0(14)
	lil	4,5
	stb	4,49(3)
	l	3,0(14)
	lil	4,10
	stb	4,52(3)
	l	3,0(14)
	lil	4,6
	stb	4,54(3)
	l	3,0(14)
	lil	4,10
	stb	4,66(3)
	l	3,0(14)
	lil	4,1
	stb	4,67(3)
	l	3,0(14)
	lil	4,10
	stb	4,99(3)
	l	3,0(14)
	lil	4,10
	stb	4,101(3)
	l	3,0(14)
	lil	4,10
	stb	4,102(3)
	l	3,0(14)
	lil	4,10
	stb	4,104(3)
	l	3,0(14)
	lil	4,13
	stb	4,132(3)
	l	3,0(14)
	lil	4,0
	stb	4,135(3)
	lil	3,1024
	st	3,1448(13)
	l	14,1448(13)
	lil	15,0
	.globl	C.makestrg
	bl	C.makestrg
	st	14,1444(13)
	lil	14,128
	lil	15,0
	.globl	C.makevect
	bl	C.makevect
	st	14,1400(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rdpopj:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
hashint:	oril	15,14,0
	l	3,0(15)
	l	14,4(3)
	b	hashfast
	.globl	C.hashfast
C.hashfast:	mflr	0
	stu	0,-4(1)
hashfast:	oril	16,14,0
	exts	3,14
	cmpi	0,3,6
	ble	hashcour
	stu	16,-4(1)
	lil	16,5
hashf1:	l	3,0(15)
	ai	4,16,8
	lbzx	17,3,4
	a	4,14,14
	andil.	14,4,0xFFFF
	a	4,17,14
	andil.	14,4,0xFFFF
	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bge	hashf1
	lil	16,0
	lil	16,5
hashf5:	l	4,0(1)
	st	16,0(1)
	oril	16,4,0
	si	4,16,1
	andil.	16,4,0xFFFF
	l	3,0(15)
	ai	4,16,8
	lbzx	17,3,4
	a	4,14,14
	andil.	14,4,0xFFFF
	a	4,17,14
	andil.	14,4,0xFFFF
	l	4,0(1)
	st	16,0(1)
	oril	16,4,0
	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bge	hashf5
	lil	16,0
	l	16,0(1)
	ai	1,1,4
	b	hashend
hashcour:	cmpli	0,14,0
	beq	hashret
	b	hashcou3
hashcou1:	l	3,0(15)
	ai	4,16,8
	lbzx	17,3,4
	a	4,14,14
	andil.	14,4,0xFFFF
	a	4,17,14
	andil.	14,4,0xFFFF
hashcou3:	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bge	hashcou1
	lil	16,0
hashend:	andil.	14,14,32767
	l	3,1220(13)
	l	3,0(3)
	l	17,4(3)
	exts	3,17
	exts	4,14
	divs	3,4,3
	mfmq	3
	andil.	14,3,0xFFFF
hashret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.inisymb
C.inisymb:	mflr	0
	stu	0,-4(1)
inisymb:	stu	17,-4(1)
	stu	16,-4(1)
	.globl	C.crastrg
	bl	C.crastrg
	oril	15,14,0
	.globl	C.crasymb
	bl	C.crasymb
	l	17,0(1)
	ai	1,1,4
	st	17,8(14)
	l	17,0(1)
	ai	1,1,4
	cmpl	0,17,21
	beq	inisymr
	st	14,0(17)
inisymr:	l	16,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	sth	17,24(14)
	mtlr	16
	br	
	.globl	C.inicst
C.inicst:	mflr	0
	stu	0,-4(1)
inicst:	stu	16,-4(1)
	.globl	C.crastrg
	bl	C.crastrg
	oril	15,14,0
	.globl	C.crasymb
	bl	C.crasymb
	st	14,0(14)
	l	16,0(1)
	ai	1,1,4
	cmpl	0,16,21
	beq	inicstr
	st	14,0(16)
inicstr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.crasymb
C.crasymb:	mflr	0
	stu	0,-4(1)
crasymb:	.globl	C.symballc
	bl	C.symballc
	stu	14,-4(1)
	l	3,1452(13)
	st	3,12(14)
	st	15,28(14)
	l	3,0(15)
	l	14,4(3)
	.globl	C.trysymb0
	bl	C.trysymb0
	l	14,0(1)
	ai	1,1,4
	cmpli	0,15,1
	beq	plac2d
	cmpli	0,15,2
	beq	plac3d12
	b	plac3d2n
inasymb:	cal	3,32(21)
	st	3,0(14)
inasymb2:	st	21,4(14)
	lil	3,0
	sth	3,26(14)
	l	3,1452(13)
	st	3,12(14)
	st	21,16(14)
	stu	14,-4(1)
	l	15,28(14)
	l	3,0(15)
	l	14,4(3)
	.globl	C.trysymb0
	bl	C.trysymb0
	l	14,0(1)
	ai	1,1,4
	cmpli	0,15,1
	beq	plac2d
	cmpli	0,15,2
	beq	plac3d12
	b	plac3d2n
inacst:	st	14,0(14)
	lil	3,0
	st	3,8(14)
	lil	3,0
	sth	3,24(14)
	b	inasymb2
makefix:	st	21,1412(13)
	lil	16,0
	b	makefix0
	.globl	C.makefix0
C.makefix0:	mflr	0
	stu	0,-4(1)
makefix0:	lil	14,0
	l	3,0(15)
	ai	4,16,8
	lbzx	17,3,4
	cmpli	0,17,43
	beq	makefix8
	cmpli	0,17,45
	bne	makefix1
	st	17,1412(13)
	b	makefix8
makefix1:	l	3,0(15)
	ai	4,16,8
	lbzx	17,3,4
	cmpli	0,17,47
	beq	makefxr1
	exts	3,17
	cmpi	0,3,48
	blt	makefxd1
	exts	3,17
	cmpi	0,3,57
	bgt	makefxd1
	si	4,17,48
	andil.	17,4,0xFFFF
	b	makefix2
makefxd1:	exts	3,17
	cmpi	0,3,65
	blt	makefxd2
	exts	3,17
	cmpi	0,3,90
	bgt	makefxd2
	si	4,17,65
	andil.	17,4,0xFFFF
	ai	4,17,10
	andil.	17,4,0xFFFF
	b	makefix2
makefxd2:	exts	3,17
	cmpi	0,3,97
	blt	makefix2
	exts	3,17
	cmpi	0,3,122
	bgt	makefix2
	si	4,17,97
	andil.	17,4,0xFFFF
	ai	4,17,10
	andil.	17,4,0xFFFF
makefix2:	l	3,1404(13)
	cmpli	0,3,10
	beq	makefix6
	l	3,1404(13)
	exts	3,3
	exts	4,14
	muls	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	makefix3
makefix3:	exts	3,17
	exts	4,14
	a	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	makefix4
makefix4:	b	makefix8
makefix6:	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	l	15,1404(13)
	lil	17,2
	.globl	C.gatim2i
	bl	C.gatim2i
	l	15,0(1)
	ai	1,1,4
	lil	17,2
	.globl	C.gaplus2i
	bl	C.gaplus2i
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
makefix8:	ai	4,16,1
	andil.	16,4,0xFFFF
	l	4,1376(13)
	cmpl	0,16,4
	bne	makefix1
	l	3,1412(13)
	cmpl	0,3,21
	beq	makefixr
	b	gadinv
makefixr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
makefxr1:	l	3,1412(13)
	cmpl	0,3,21
	beq	makefixr2
	stu	15,-4(1)
	stu	16,-4(1)
	.globl	C.gadinv
	bl	C.gadinv
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
makefixr2:	stu	14,-4(1)
	ai	4,16,1
	andil.	16,4,0xFFFF
	st	21,1412(13)
	.globl	C.makefix0
	bl	C.makefix0
	stu	14,-4(1)
	lil	17,2
	b	gadiv
makeflo:	l	3,0(15)
	ai	3,3,8
	lil	4,0
	l	5,1376(13)
	stbx	4,5,3
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.llrt_cvatof
	bl	.llrt_cvatof
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
	.globl	C.nextfix
C.nextfix:	mflr	0
	stu	0,-4(1)
nextfix:	l	4,1376(13)
	cmpl	0,16,4
	bne	nextxxx
	ai	1,1,4
	b	makefix
	.globl	C.nextflo
C.nextflo:	mflr	0
	stu	0,-4(1)
nextflo:	l	4,1376(13)
	cmpl	0,16,4
	bne	nextxxx
	ai	1,1,4
	b	makeflo
	.globl	C.nextsym
C.nextsym:	mflr	0
	stu	0,-4(1)
nextsym:	l	4,1376(13)
	cmpl	0,16,4
	bne	nextxxx
	ai	1,1,4
	b	trysymi
nextxxx:	l	3,0(15)
	ai	4,16,8
	lbzx	17,3,4
	ai	4,16,1
	andil.	16,4,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.digitpi
C.digitpi:	mflr	0
	stu	0,-4(1)
digitpi:	oril	14,17,0
	exts	3,17
	cmpi	0,3,48
	blt	digitpi1
	exts	3,17
	cmpi	0,3,57
	bgt	digitpi1
	si	4,14,48
	andil.	14,4,0xFFFF
	b	digitpi9
digitpi1:	exts	3,17
	cmpi	0,3,65
	blt	digitpi2
	exts	3,17
	cmpi	0,3,90
	bgt	digitpi2
	si	4,14,65
	andil.	14,4,0xFFFF
	b	digitpi8
digitpi2:	exts	3,17
	cmpi	0,3,97
	blt	digitpif
	exts	3,17
	cmpi	0,3,122
	bgt	digitpif
	si	4,14,97
	andil.	14,4,0xFFFF
digitpi8:	ai	4,14,10
	andil.	14,4,0xFFFF
digitpi9:	exts	3,14
	l	4,1404(13)
	exts	4,4
	cmp	0,3,4
	bge	digitpif
	exts	3,14
	cmpi	0,3,57
	ble	digitpt
	st	21,1408(13)
digitpit:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
digitpif:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.base10p
C.base10p:	mflr	0
	stu	0,-4(1)
base10p:	exts	3,17
	cmpi	0,3,48
	blt	digitpif
	exts	3,17
	cmpi	0,3,57
	bgt	digitpif
	oril	14,17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.tryatom
C.tryatom:	mflr	0
	stu	0,-4(1)
tryatom:	cmpli	0,14,0
	bne	trynum
	l	3,1452(13)
	cmpl	0,3,21
	bne	trynum
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
trynum:	st	14,1376(13)
	st	15,1380(13)
	l	3,1416(13)
	cmpl	0,3,21
	bne	trysymi
	lil	16,0
	st	16,1408(13)
	.globl	C.nextsym
	bl	C.nextsym
	cmpli	0,17,46
	beq	tryflo0
	cmpli	0,17,45
	beq	tryfix0
	cmpli	0,17,43
	beq	tryfix0
	.globl	C.digitpi
	bl	C.digitpi
	cmpl	0,14,21
	bne	tryfix1
	b	trysymi
tryfix0:	.globl	C.nextsym
	bl	C.nextsym
	cmpli	0,17,46
	beq	tryflo0
	.globl	C.digitpi
	bl	C.digitpi
	cmpl	0,14,21
	beq	trysymi
tryfix1:	.globl	C.nextfix
	bl	C.nextfix
	.globl	C.digitpi
	bl	C.digitpi
	cmpl	0,14,21
	bne	tryfix1
	cmpli	0,17,46
	beq	tryflo2
	cmpli	0,17,69
	beq	tryflo3
	cmpli	0,17,101
	beq	tryflo3
	cmpli	0,17,47
	beq	tryfix2
	b	trysymi
tryfix2:	.globl	C.nextsym
	bl	C.nextsym
	cmpli	0,17,43
	beq	tryfix3
	cmpli	0,17,45
	beq	tryfix3
	.globl	C.digitpi
	bl	C.digitpi
	cmpl	0,14,21
	beq	trysymi
	b	tryfix4
tryfix3:	.globl	C.nextsym
	bl	C.nextsym
	.globl	C.digitpi
	bl	C.digitpi
	cmpl	0,14,21
	beq	trysymi
tryfix4:	.globl	C.nextfix
	bl	C.nextfix
	.globl	C.digitpi
	bl	C.digitpi
	cmpl	0,14,21
	bne	tryfix4
	b	trysymi
tryflo0:	.globl	C.nextsym
	bl	C.nextsym
	.globl	C.base10p
	bl	C.base10p
	cmpl	0,14,21
	beq	trysymi
tryflo1:	.globl	C.nextflo
	bl	C.nextflo
	.globl	C.base10p
	bl	C.base10p
	cmpl	0,14,21
	bne	tryflo1
	cmpli	0,17,69
	beq	tryflo4
	cmpli	0,17,101
	beq	tryflo4
	b	trysymi
tryflo2:	l	3,1408(13)
	cmpl	0,3,21
	bne	tryflo1
	b	trysymi
tryflo3:	l	3,1408(13)
	cmpl	0,3,21
	beq	trysymi
tryflo4:	.globl	C.nextsym
	bl	C.nextsym
	.globl	C.base10p
	bl	C.base10p
	cmpl	0,14,21
	bne	tryflo6
	cmpli	0,17,45
	beq	tryflo5
	cmpli	0,17,43
	bne	trysymi
tryflo5:	.globl	C.nextsym
	bl	C.nextsym
	.globl	C.base10p
	bl	C.base10p
	cmpl	0,14,21
	beq	trysymi
tryflo6:	.globl	C.nextflo
	bl	C.nextflo
	.globl	C.base10p
	bl	C.base10p
	cmpl	0,14,21
	bne	tryflo6
	b	trysymi
trysymi:	l	14,1376(13)
	b	trysymb
	.globl	C.trysymb
C.trysymb:	mflr	0
	stu	0,-4(1)
	.globl	trysymb
trysymb:	.globl	C.trysymb0
	bl	C.trysymb0
	.globl	trysymbx
trysymbx:	cmpli	0,15,0
	beq	trysymre
	cmpli	0,15,1
	beq	mak2d
	cmpli	0,15,2
	beq	mak3d12
mak3d2n:	.globl	C.symballc
	bl	C.symballc
plac3d2n:	l	16,28(17)
	st	16,28(14)
	st	14,28(17)
	l	3,20(16)
	st	3,20(14)
trysymre:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
mak3d12:	.globl	C.symballc
	bl	C.symballc
plac3d12:	l	3,28(17)
	st	3,20(14)
	st	14,28(17)
	st	17,28(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
mak2d:	l	15,1376(13)
	.globl	C.strgallc
	bl	C.strgallc
	l	4,1380(13)
	l	4,0(4)
	cal	4,8(4)
	l	5,0(14)
	cal	5,8(5)
	oril	3,15,0
	cmp	0,5,4
	ble	.rea.4
	a	4,4,3
	a	5,5,3
	b	.rea.2
.rea.1:	lbz	6,0(4)
	stb	6,0(5)
.rea.2:	si	4,4,1
	si	5,5,1
	si	3,3,1
	cmpi	0,3,0
	bge	.rea.1
	b	.rea.5
.rea.3:	lbz	6,0(4)
	stb	6,0(5)
	ai	4,4,1
	ai	5,5,1
.rea.4:	si	3,3,1
	cmpi	0,3,0
	bge	.rea.3
.rea.5:	oril	15,14,0
	.globl	C.symballc
	bl	C.symballc
	st	15,28(14)
	l	17,1384(13)
plac2d:	l	3,1220(13)
	l	3,0(3)
	ai	4,17,2
	sli	4,4,2
	lx	3,3,4
	st	3,20(14)
	l	3,1220(13)
	l	3,0(3)
	ai	4,17,2
	sli	4,4,2
	stx	14,3,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.trysymb0
C.trysymb0:	mflr	0
	stu	0,-4(1)
trysymb0:	st	14,1376(13)
	st	15,1380(13)
	.globl	C.hashfast
	bl	C.hashfast
	st	14,1384(13)
	l	3,1220(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	lx	16,3,4
	st	16,1388(13)
	l	14,1376(13)
	b	trysymb6
trysymb1:	l	17,28(16)
	cmpl	0,17,20
	blt	.rea.6
	cmpl	0,17,21
	blt	trysymb2
.rea.6:	l	17,20(17)
trysymb2:	l	3,0(17)
	l	15,4(3)
	cmpl	0,14,15
	bne	trysymb5
	l	4,1380(13)
	l	4,0(4)
	cal	4,8(4)
	l	5,0(17)
	cal	5,8(5)
	oril	3,14,0
	b	.rea.8
.rea.7:	lbz	6,0(4)
	lbz	7,0(5)
	cmp	0,6,7
	bne	.rea.9
	ai	4,4,1
	ai	5,5,1
.rea.8:	si	3,3,1
	cmpi	0,3,0
	bge	.rea.7
	b	trysymb8
.rea.9:trysymb5:	st	16,1388(13)
	l	16,20(16)
trysymb6:	cmpl	0,16,18
	bge	trysymb1
	lil	15,1
	l	17,1384(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
trysymb8:	oril	14,16,0
	l	15,1388(13)
	cmpl	0,14,15
	beq	trysy3d
	l	3,20(14)
	st	3,20(15)
	l	16,1384(13)
	l	3,1220(13)
	l	3,0(3)
	ai	4,16,2
	sli	4,4,2
	lx	3,3,4
	st	3,20(14)
	l	3,1220(13)
	l	3,0(3)
	ai	4,16,2
	sli	4,4,2
	stx	14,3,4
	b	trysy3d
trysymp:	l	3,1452(13)
	stu	3,-4(1)
	st	14,1452(13)
	l	3,0(15)
	l	14,4(3)
	l	16,4148(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1452(13)
	ai	1,1,4
	mtlr	16
	br	
	.globl	C.trysympk
C.trysympk:	mflr	0
	stu	0,-4(1)
trysympk:	l	3,1452(13)
	stu	3,-4(1)
	st	14,1452(13)
	oril	14,15,0
	l	16,4144(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1452(13)
	ai	1,1,4
	mtlr	16
	br	
	.globl	trysymp1
trysymp1:	l	3,4140(13)
	stu	3,-4(1)
	b	trysy3d
	.globl	C.pkgcequ
C.pkgcequ:	mflr	0
	stu	0,-4(1)
pkgcequ:	stu	14,-4(1)
	l	14,12(14)
	l	15,1452(13)
	.globl	C.equal
	bl	C.equal
	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
trysy3d:	l	17,1452(13)
	cmpl	0,17,21
	blt	.rea.10
	cmpl	0,17,22
	blt	trysy3s
.rea.10:trysy3c:	.globl	C.pkgcequ
	bl	C.pkgcequ
	cmpl	0,15,21
	bne	trysyr4
	l	5,28(14)
	cmpl	0,5,20
	blt	trysy3c0
	cmpl	0,5,21
	bge	trysy3c0
trysyr1:	lil	15,2
	oril	17,14,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
trysy3c0:	stu	14,-4(1)
	stu	14,-4(1)
trysy3c1:	l	14,28(14)
	.globl	C.pkgcequ
	bl	C.pkgcequ
	cmpl	0,15,21
	bne	trysyr3
	l	5,20(14)
	cmpl	0,5,20
	blt	.rea.11
	cmpl	0,5,21
	blt	trysy3c2
.rea.11:	st	14,4(1)
trysy3c2:	l	4,0(1)
	cmpl	0,14,4
	bne	trysy3c1
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
trysyr2:	lil	15,3
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
trysyr3:	ai	1,1,8
trysyr4:	lil	15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
trysy3s:	l	4,12(14)
	cmpl	0,17,4
	beq	trysyr4
	l	5,28(14)
	cmpl	0,5,20
	blt	.rea.12
	cmpl	0,5,21
	blt	trysyr1
.rea.12:	oril	15,14,0
	oril	16,14,0
trysy31:	l	14,28(14)
	l	4,12(14)
	cmpl	0,17,4
	beq	trysyr4
	l	5,20(14)
	cmpl	0,5,20
	blt	.rea.13
	cmpl	0,5,21
	blt	trysy32
.rea.13:	oril	15,14,0
trysy32:	cmpl	0,14,16
	bne	trysy31
	oril	17,15,0
	b	trysyr2
	.globl	C.istdsym
C.istdsym:	mflr	0
	stu	0,-4(1)
istdsym:	cal	3,32(21)
	st	3,0(14)
	st	21,4(14)
	lil	3,0
	st	3,8(14)
	lil	3,0
	sth	3,24(14)
	lil	3,0
	sth	3,26(14)
	st	21,16(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.symballc
C.symballc:	mflr	0
	stu	0,-4(1)
symballc:	l	14,1180(13)
	cmpli	0,14,0
	bne	symball1
	.globl	C.gcsymb
	bl	C.gcsymb
	l	14,1180(13)
symball1:	l	3,20(14)
	st	3,1180(13)
	.globl	C.istdsym
	bl	C.istdsym
	l	3,1452(13)
	st	3,12(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.crastrg
C.crastrg:	mflr	0
	stu	0,-4(1)
crastrg:	stu	15,-4(1)
	oril	15,14,0
	.globl	C.strgallc
	bl	C.strgallc
	l	16,0(1)
	ai	1,1,4
	oril	3,15,0
	oril	4,16,0
	l	5,0(14)
	ai	5,5,8
	cmp	0,5,4
	ble	.rea.17
	a	4,4,3
	a	5,5,3
	b	.rea.15
.rea.14:	lbz	6,0(4)
	stb	6,0(5)
.rea.15:	si	4,4,1
	si	5,5,1
	si	3,3,1
	cmpi	0,3,0
	bge	.rea.14
	b	.rea.18
.rea.16:	lbz	6,0(4)
	stb	6,0(5)
	ai	4,4,1
	ai	5,5,1
.rea.17:	si	3,3,1
	cmpi	0,3,0
	bge	.rea.16
.rea.18:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.getch
C.getch:	mflr	0
	stu	0,-4(1)
getch:	l	3,1424(13)
	cmpl	0,3,21
	beq	getch1
	lil	3,1
	st	3,1420(13)
	l	17,1424(13)
	l	3,4(17)
	st	3,1424(13)
	l	17,0(17)
	b	getch2
getch1:	l	3,1436(13)
	cmpl	0,3,21
	bne	getch3
	lil	3,0
	st	3,1420(13)
	.globl	C.inphy
	bl	C.inphy
getch2:	lil	16,12
	exts	3,17
	cmpi	0,3,255
	bgt	getch21
	l	3,1396(13)
	l	3,0(3)
	ai	4,17,8
	lbzx	16,3,4
getch21:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getch3:	l	17,1440(13)
	lil	3,2
	st	3,1420(13)
	cmpl	0,17,21
	beq	getch4
	cmp	0,17,22
	blt	erlec1
	l	3,4(17)
	st	3,1440(13)
	l	17,0(17)
	cmpl	0,17,18
	bge	erlec9
	b	getch2
getch4:	lil	3,0
	st	3,1440(13)
	lil	17,32
	b	getch2
	.globl	C.getcv
C.getcv:	mflr	0
	stu	0,-4(1)
getcv:	.globl	C.getch
	bl	C.getch
	sli	3,16,2
	cal	4,1456(13)
	lx	0,4,3
	mtlr	0
	br	
	.globl	getcv
	.globl	getcvc
	.globl	getcvs
	.globl	getcv1
	.globl	getcvr
	.globl	getcvr
	.globl	getcvr
	.globl	getcvr
	.globl	getcvr
	.globl	getcvr
	.globl	getcvr
	.globl	getcvr
	.globl	getcv2
	.globl	getcvr
	.globl	getcvr
getcvr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getcv1:	st	17,1416(13)
	.globl	C.getch
	bl	C.getch
	lil	16,12
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getcv2:	cal	16,7392(21)
	l	3,0(16)
	cmpl	0,3,21
	bne	getcv3
	exts	3,17
	cmpi	0,3,65
	blt	getcv3
	exts	3,17
	cmpi	0,3,90
	bgt	getcv3
	ai	17,17,32
getcv3:	lil	16,12
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
getcvc:	.globl	C.getch
	bl	C.getch
	cmpli	0,16,2
	bne	getcvc
getcvs:	lil	16,7
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.rd1
C.rd1:	mflr	0
	stu	0,-4(1)
rd1:	st	21,1416(13)
	lil	15,0
rdsep:	.globl	C.getcv
	bl	C.getcv
	sli	3,16,2
	cal	4,1516(13)
	lx	0,4,3
	mtlr	0
	br	
	.globl	erlec1
	.globl	erlec1
	.globl	erlec1
	.globl	erlec1
	.globl	rdparo
	.globl	rdparf
	.globl	rddot
	.globl	rdsep
	.globl	rdpkgc
	.globl	rdsplic
	.globl	rdmac
	.globl	rdstr
	.globl	rdpname
	.globl	rdsymb
	.globl	rdmsymb
rdparo:	l	4,1432(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1432(13)
	lil	16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rdparf:	l	3,1432(13)
	exts	3,3
	si	3,3,1
	st	3,1432(13)
	cmpi	0,3,0
	bge	rdparfr
	lil	3,0
	st	3,1432(13)
	lil	3,0
	st	3,1432(13)
rdparfr:	lil	16,1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rddot:	cmpli	0,17,46
	bne	rddot1
	.globl	C.getcv
	bl	C.getcv
	cmpli	0,16,12
	beq	rddot2
	lil	16,2
	b	rereada4
rddot1:	lil	16,2
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rddot2:	l	3,1444(13)
	l	3,0(3)
	lil	4,46
	stb	4,8(3)
	lil	15,1
	b	rdpname
rdpkgc:	cal	14,8704(21)
	l	14,0(14)
	b	rdpkgc2
rdpkgc1:	oril	14,15,0
	l	15,1444(13)
	.globl	C.tryatom
	bl	C.tryatom
	cmpl	0,14,21
	blt	erlec6
	cmpl	0,14,22
	bge	erlec6
	.globl	rdpkgc2
rdpkgc2:	l	3,1452(13)
	stu	3,-4(1)
	st	14,1452(13)
	l	16,4136(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1452(13)
	ai	1,1,4
	stu	16,-4(1)
	lil	16,3
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rdsplic:	.globl	C.asciii
	bl	C.asciii
	oril	15,21,0
	.globl	C.apply
	bl	C.apply
	cmpl	0,14,21
	beq	rdsplic1
	cmp	0,14,22
	bge	rdsplic1
	b	erlec10
rdsplic1:	lil	16,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rdmac:	.globl	C.asciii
	bl	C.asciii
	oril	15,21,0
	.globl	C.apply
	bl	C.apply
rdretobj:	lil	16,3
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rdstr0:	l	3,1444(13)
	l	3,0(3)
	ai	4,15,8
	stbx	17,3,4
	ai	4,15,1
	andil.	15,4,0xFFFF
	exts	3,15
	l	4,1448(13)
	exts	4,4
	cmp	0,3,4
	bge	erlec2
rdstr:	.globl	C.getch
	bl	C.getch
	cmpli	0,16,11
	bne	rdstr0
	.globl	C.getch
	bl	C.getch
	cmpli	0,16,11
	beq	rdstr0
	.globl	C.rereada4
	bl	C.rereada4
	.globl	C.strgallc
	bl	C.strgallc
	l	4,1444(13)
	l	4,0(4)
	cal	4,8(4)
	l	5,0(14)
	cal	5,8(5)
	oril	3,15,0
	cmp	0,5,4
	ble	.rea.22
	a	4,4,3
	a	5,5,3
	b	.rea.20
.rea.19:	lbz	6,0(4)
	stb	6,0(5)
.rea.20:	si	4,4,1
	si	5,5,1
	si	3,3,1
	cmpi	0,3,0
	bge	.rea.19
	b	.rea.23
.rea.21:	lbz	6,0(4)
	stb	6,0(5)
	ai	4,4,1
	ai	5,5,1
.rea.22:	si	3,3,1
	cmpi	0,3,0
	bge	.rea.21
.rea.23:	l	3,1452(13)
	cmpl	0,3,21
	beq	rdretobj
	l	3,1452(13)
	st	3,4(14)
	b	rdretobj
rdpname:	l	3,1444(13)
	l	3,0(3)
	ai	4,15,8
	stbx	17,3,4
	ai	4,15,1
	andil.	15,4,0xFFFF
	exts	3,15
	cmpi	0,3,128
	bge	erlec3
	.globl	C.getcv
	bl	C.getcv
	cmpli	0,16,12
	beq	rdpname
	cmpli	0,16,6
	beq	rdpname
rdfinsym:	cmpli	0,16,8
	beq	rdpkgc1
	.globl	C.rereada4
	bl	C.rereada4
	oril	14,15,0
	l	15,1444(13)
	.globl	C.tryatom
	bl	C.tryatom
	b	rdretobj
rdsymb:	st	17,1416(13)
	b	rdsymb1
rdsymb0:	l	3,1444(13)
	l	3,0(3)
	ai	4,15,8
	stbx	17,3,4
	ai	4,15,1
	andil.	15,4,0xFFFF
	exts	3,15
	cmpi	0,3,256
	bge	erlec5
rdsymb1:	.globl	C.getch
	bl	C.getch
	cmpli	0,16,13
	bne	rdsymb0
	.globl	C.getch
	bl	C.getch
	cmpli	0,16,13
	beq	rdsymb0
	b	rdfinsym
rdmsymb:	st	17,1416(13)
	l	3,1444(13)
	l	3,0(3)
	stb	17,8(3)
	lil	15,1
	.globl	C.getcv
	bl	C.getcv
	b	rdfinsym
	.globl	C.readi
C.readi:	mflr	0
	stu	0,-4(1)
	.globl	readi
readi:	.globl	C.rd1
	bl	C.rd1
read0:	sli	3,16,2
	cal	4,1576(13)
	lx	0,4,3
	mtlr	0
	br	
	.globl	read2
	.globl	erlec4
	.globl	erlec4
	.globl	rdpopj
	.globl	read1
read1:	l	3,4(14)
	cmpl	0,3,21
	bne	erlec10
	l	14,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.read2
C.read2:	mflr	0
	stu	0,-4(1)
	.globl	read2
read2:	l	3,1428(13)
	stu	3,-4(1)
	cal	14,7616(21)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.rea.24
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.rea.24:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	stu	14,-4(1)
	st	14,1428(13)
read3:	stu	14,-4(1)
	.globl	C.rd1
	bl	C.rd1
read31:	sli	3,16,2
	cal	4,1596(13)
	lx	0,4,3
	mtlr	0
	br	
	.globl	read6
	.globl	read7
	.globl	read9
	.globl	read4
	.globl	read5
	.globl	read4
read4:	l	6,1184(13)
	cmpl	0,6,21
	bne	.rea.25
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.rea.25:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	15,0(1)
	ai	1,1,4
	st	14,4(15)
	b	read3
read5:	cmp	0,14,22
	bge	read51
	l	14,0(1)
	ai	1,1,4
	b	read3
read51:	l	15,0(1)
	ai	1,1,4
	st	14,4(15)
read52:	l	3,4(14)
	cmp	0,3,22
	blt	read3
	l	14,4(14)
	b	read52
read6:	l	3,4132(13)
	stu	3,-4(1)
	b	read2
read7:	l	14,0(1)
	ai	1,1,4
read71:	l	14,0(1)
	ai	1,1,4
	l	14,4(14)
	l	3,0(1)
	st	3,1428(13)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
read9:	.globl	C.readi
	bl	C.readi
	stu	14,-4(1)
	.globl	C.rd1
	bl	C.rd1
	l	14,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	sli	3,16,2
	cal	4,1616(13)
	lx	0,4,3
	mtlr	0
	br	
	.globl	erlec7
	.globl	read91
	.globl	erlec7
	.globl	erlec7
	.globl	erlec7
read91:	st	14,4(15)
	b	read71
erlec1:	lil	14,1
	b	erlec
erlec2:	lil	14,2
	b	erlec
erlec3:	lil	14,3
	b	erlec
erlec4:	lil	14,4
	b	erlec
erlec5:	lil	14,5
	b	erlec
erlec6:	lil	14,6
	b	erlec
erlec7:	lil	14,7
	b	erlec
erlec8:	lil	14,8
	b	erlec
erlec9:	lil	14,9
	b	erlec
erlec10:	lil	14,10
	b	erlec
erlec11:	lil	14,11
	b	erlec
erlec:	l	3,1436(13)
	cmpl	0,3,21
	bne	erlecc1
	cal	15,7456(21)
	b	errsxt
erlecc1:	cal	15,7488(21)
	st	21,1436(13)
	st	21,1440(13)
	b	errsxt
	.set	._lread,1
	.globl	C.lread
C.lread:	mflr	0
	stu	0,-4(1)
	.globl	lread
lread:	.globl	C.getcv
	bl	C.getcv
	cmpli	0,16,5
	beq	lread
	cmpli	0,16,7
	beq	lread
	.globl	C.rereada4
	bl	C.rereada4
	cal	14,7424(21)
	l	3,0(14)
	stu	3,-4(1)
	cal	3,96(21)
	st	3,0(14)
	l	16,4136(13)
	.globl	C.sysprot
	bl	C.sysprot
lreadend:	l	14,0(1)
	ai	1,1,4
	cal	17,7424(21)
	l	3,0(1)
	st	3,0(17)
	ai	1,1,4
	mtlr	16
	br	
	.set	._implode,2
	.globl	C.implode
C.implode:	mflr	0
	stu	0,-4(1)
	.globl	implode
implode:	l	3,1440(13)
	stu	3,-4(1)
	l	3,1436(13)
	stu	3,-4(1)
	l	3,1424(13)
	stu	3,-4(1)
	st	14,1440(13)
	cal	3,96(21)
	st	3,1436(13)
	st	21,1424(13)
	l	16,4136(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1424(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1436(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1440(13)
	ai	1,1,4
	mtlr	16
	br	
	.set	._implodech,2
	.globl	C.implodech
C.implodech:	mflr	0
	stu	0,-4(1)
	.globl	implodech
implodech:	oril	15,14,0
	oril	16,21,0
impldech1:	cmp	0,15,22
	blt	impldech2
	l	14,0(15)
	.globl	C.cascii
	bl	C.cascii
	l	6,1184(13)
	cmpl	0,6,21
	bne	.rea.26
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.rea.26:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	16,4(6)
	oril	16,6,0
	l	15,4(15)
	b	impldech1
impldech2:	oril	14,16,0
	.globl	C.nreverse
	bl	C.nreverse
	b	implode
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._readch,1
	.globl	C.readch
C.readch:	mflr	0
	stu	0,-4(1)
	.globl	readch
readch:	l	3,4112(13)
	stu	3,-4(1)
	b	getch
	.set	._readcod,1
	.globl	C.readcod
C.readcod:	mflr	0
	stu	0,-4(1)
	.globl	readcod
readcod:	.globl	C.getch
	bl	C.getch
	oril	14,17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._lcuread,1
	.globl	C.lcuread
C.lcuread:	mflr	0
	stu	0,-4(1)
	.globl	lcuread
lcuread:	l	14,1428(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._teread,1
	.globl	C.teread
C.teread:	mflr	0
	stu	0,-4(1)
	.globl	teread
teread:	st	21,1424(13)
	lil	3,0
	st	3,1372(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._reread,2
	.globl	C.reread
C.reread:	mflr	0
	stu	0,-4(1)
	.globl	reread
reread:	cmpl	0,14,21
	beq	reread9
	cmp	0,14,22
	blt	rereade
	oril	15,21,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.rea.27
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.rea.27:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	stu	15,-4(1)
reread4:	l	16,0(14)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.rea.28
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.rea.28:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	21,4(6)
	oril	16,6,0
	st	16,4(15)
	oril	15,16,0
	l	14,4(14)
	cmp	0,14,22
	bge	reread4
	l	3,1424(13)
	st	3,4(15)
	l	14,0(1)
	ai	1,1,4
	l	14,4(14)
	st	14,1424(13)
reread9:	l	14,1424(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rereade:	cal	15,7680(21)
	b	errnla
	.globl	C.rereada4
C.rereada4:	mflr	0
	stu	0,-4(1)
rereada4:	l	3,1420(13)
	cmpli	0,3,0
	bne	rrda41
	l	4,1368(13)
	si	4,4,1
	andil.	3,4,0xFFFF
	st	3,1368(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
rrda41:	l	6,1184(13)
	cmpl	0,6,21
	bne	.rea.29
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.rea.29:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	l	3,1424(13)
	st	3,4(6)
	oril	17,6,0
	st	17,1424(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._peekch,1
	.globl	C.peekch
C.peekch:	mflr	0
	stu	0,-4(1)
	.globl	peekch
peekch:	.globl	C.getch
	bl	C.getch
	stu	17,-4(1)
	.globl	C.rereada4
	bl	C.rereada4
	l	17,0(1)
	ai	1,1,4
	b	asciii
	.set	._peekcn,1
	.globl	C.peekcn
C.peekcn:	mflr	0
	stu	0,-4(1)
	.globl	peekcn
peekcn:	.globl	C.getch
	bl	C.getch
	oril	14,17,0
	b	rereada4
	.set	._readline,1
	.globl	C.readline
C.readline:	mflr	0
	stu	0,-4(1)
	.globl	readline
readline:	.globl	C.getch
	bl	C.getch
	oril	14,21,0
	cmpli	0,17,13
	bne	readl2
	.globl	C.getch
	bl	C.getch
	oril	14,21,0
	cmpli	0,17,10
	bne	readl2
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
readl2:	cmpli	0,17,10
	beq	readl4
readl3:	cmpli	0,17,10
	beq	readl5
	l	6,1184(13)
	cmpl	0,6,21
	bne	.rea.30
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.rea.30:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	st	14,4(6)
	oril	14,6,0
readl4:	stu	14,-4(1)
	.globl	C.getch
	bl	C.getch
	l	14,0(1)
	ai	1,1,4
	cmpli	0,17,13
	bne	readl3
readl5:	b	nreverse
	.set	._stratom,4
	.globl	C.stratom
C.stratom:	mflr	0
	stu	0,-4(1)
	.globl	stratom
stratom:	cmpl	0,14,18
	bge	erstrat1
	cmpl	0,15,20
	blt	erstrat2
	cmpl	0,15,21
	bge	erstrat2
	st	16,1416(13)
	b	tryatom
erstrat1:	cal	15,7776(21)
	b	errnia
erstrat2:	oril	14,15,0
	cal	15,7776(21)
	b	errnsa
	.set	._readstrg,1
	.globl	C.readstrg
C.readstrg:	mflr	0
	stu	0,-4(1)
	.globl	readstrg
readstrg:	.globl	C.getch
	bl	C.getch
	lil	15,0
	cmpli	0,17,10
	beq	reads4
	cmpli	0,17,13
	bne	reads3
	.globl	C.getch
	bl	C.getch
	lil	15,0
reads3:	cmpli	0,17,10
	beq	reads5
	l	3,1444(13)
	l	3,0(3)
	ai	4,15,8
	stbx	17,3,4
	l	4,1448(13)
	cmpl	0,15,4
	beq	reads5
	ai	4,15,1
	andil.	15,4,0xFFFF
reads4:	stu	15,-4(1)
	.globl	C.getch
	bl	C.getch
	l	15,0(1)
	ai	1,1,4
	cmpli	0,17,13
	bne	reads3
reads5:	.globl	C.strgallc
	bl	C.strgallc
	l	4,1444(13)
	l	4,0(4)
	cal	4,8(4)
	l	5,0(14)
	cal	5,8(5)
	oril	3,15,0
	cmp	0,5,4
	ble	.rea.34
	a	4,4,3
	a	5,5,3
	b	.rea.32
.rea.31:	lbz	6,0(4)
	stb	6,0(5)
.rea.32:	si	4,4,1
	si	5,5,1
	si	3,3,1
	cmpi	0,3,0
	bge	.rea.31
	b	.rea.35
.rea.33:	lbz	6,0(4)
	stb	6,0(5)
	ai	4,4,1
	ai	5,5,1
.rea.34:	si	3,3,1
	cmpi	0,3,0
	bge	.rea.33
.rea.35:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._readdltd,2
	.globl	C.readdltd
C.readdltd:	mflr	0
	stu	0,-4(1)
	.globl	readdltd
readdltd:	cmpl	0,14,18
	bge	readdltr
	l	3,1396(13)
	l	3,0(3)
	ai	4,14,8
	lbzx	15,3,4
	stu	14,-4(1)
	stu	15,-4(1)
	l	3,1396(13)
	l	3,0(3)
	ai	4,14,8
	lil	5,5
	stbx	5,3,4
	l	16,4068(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	l	3,1396(13)
	l	3,0(3)
	ai	4,17,8
	stbx	15,3,4
	mtlr	16
	br	
readdltr:	cal	15,7808(21)
	b	errnia
	.globl	C.asciii
C.asciii:	mflr	0
	stu	0,-4(1)
	.globl	asciii
asciii:	oril	14,17,0
	cmpl	0,14,18
	bge	ascierr
	exts	3,14
	cmpi	0,3,0
	blt	fascii3
	exts	3,14
	cmpi	0,3,128
	bge	fascii3
	l	3,1400(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	lx	15,3,4
	cmpl	0,15,21
	blt	fascii3
	cmpl	0,15,22
	bge	fascii3
	oril	14,15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fascii3:	stu	14,-4(1)
	lil	15,0
	l	3,1444(13)
	l	3,0(3)
	ai	4,15,8
	stbx	14,3,4
	ai	4,15,1
	andil.	15,4,0xFFFF
	oril	14,15,0
	l	15,1444(13)
	l	3,1452(13)
	stu	3,-4(1)
	l	16,4064(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1452(13)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	cmpl	0,14,21
	blt	fascii7
	cmpl	0,14,22
	bge	fascii7
	exts	3,15
	cmpi	0,3,0
	blt	fascii7
	exts	3,15
	cmpi	0,3,128
	bge	fascii7
	l	3,1400(13)
	l	3,0(3)
	ai	4,15,2
	sli	4,4,2
	stx	14,3,4
fascii7:	mtlr	16
	br	
	.globl	fascii8
fascii8:	st	21,1452(13)
	b	tryatom
ascierr:	cal	15,7936(21)
	b	errnia
	.set	._fascii,2
	.globl	C.fascii
C.fascii:	mflr	0
	stu	0,-4(1)
	.globl	fascii
fascii:	oril	17,14,0
	b	asciii
	.set	._cascii,2
	.globl	C.cascii
C.cascii:	mflr	0
	stu	0,-4(1)
	.globl	cascii
cascii:	cal	3,7968(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	l	3,0(14)
	lbz	14,8(3)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._concatpk,3
	.globl	C.concatpk
C.concatpk:	mflr	0
	stu	0,-4(1)
	.globl	concatpk
concatpk:	cmpl	0,14,21
	blt	concpkr1
	cmpl	0,14,22
	bge	concpkr1
	cmpl	0,15,21
	blt	concpkr2
	cmpl	0,15,22
	bge	concpkr2
	b	concpk0
	.globl	C.concpk0
C.concpk0:	mflr	0
	stu	0,-4(1)
concpk0:	cmpl	0,15,21
	beq	concpkr
	stu	15,-4(1)
	l	15,12(15)
	.globl	C.concpk0
	bl	C.concpk0
	l	15,0(1)
	ai	1,1,4
	b	trysympk
concpkr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
concpkr2:	oril	14,15,0
concpkr1:	cal	15,7904(21)
	b	errsym
	.set	._uppercase,2
	.globl	C.uppercase
C.uppercase:	mflr	0
	stu	0,-4(1)
	.globl	uppercase
uppercase:	cmpl	0,14,18
	bge	upper9
	exts	3,14
	cmpi	0,3,97
	blt	upper8
	exts	3,14
	cmpi	0,3,122
	bgt	upper8
	si	14,14,32
upper8:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
upper9:	cal	15,8000(21)
	b	errnia
	.set	._lowercase,2
	.globl	C.lowercase
C.lowercase:	mflr	0
	stu	0,-4(1)
	.globl	lowercase
lowercase:	cmpl	0,14,18
	bge	lower9
	exts	3,14
	cmpi	0,3,65
	blt	lower8
	exts	3,14
	cmpi	0,3,90
	bgt	lower8
	ai	14,14,32
lower8:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
lower9:	cal	15,8032(21)
	b	errnia
	.set	._asciip,2
	.globl	C.asciip
C.asciip:	mflr	0
	stu	0,-4(1)
	.globl	asciip
asciip:	cmpl	0,14,18
	bge	asciipn
	exts	3,14
	cmpi	0,3,0
	blt	asciipn
	exts	3,14
	cmpi	0,3,255
	ble	asciipt
asciipn:	oril	14,21,0
asciipt:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._digitp,2
	.globl	C.digitp
C.digitp:	mflr	0
	stu	0,-4(1)
	.globl	digitp
digitp:	cmpl	0,14,18
	bge	digitpn
	exts	3,14
	cmpi	0,3,48
	blt	digitpn
	exts	3,14
	cmpi	0,3,57
	ble	digitpt
digitpn:	oril	14,21,0
digitpt:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._letterp,2
	.globl	C.letterp
C.letterp:	mflr	0
	stu	0,-4(1)
	.globl	letterp
letterp:	cmpl	0,14,18
	bge	lettern
	exts	3,14
	cmpi	0,3,65
	blt	lettere
	exts	3,14
	cmpi	0,3,90
	ble	lettert
lettere:	exts	3,14
	cmpi	0,3,97
	blt	lettern
	exts	3,14
	cmpi	0,3,122
	ble	lettert
lettern:	oril	14,21,0
lettert:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._fibase,5
	.globl	C.fibase
C.fibase:	mflr	0
	stu	0,-4(1)
	.globl	fibase
fibase:	cal	15,8160(21)
	l	16,1404(13)
	lil	3,2
	stu	3,-4(1)
	lil	3,36
	stu	3,-4(1)
	.globl	C.getsetn
	bl	C.getsetn
	st	14,1404(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
