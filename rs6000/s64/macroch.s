	.csect	lelisp_txt[PR]
	.globl	errnia
	.globl	errudf
	.globl	errudv
	.globl	errwna
	.globl	erroob
	.globl	errsxt
	.globl	errsym
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	inisymb
	.globl	inicst
	.globl	trysympk
	.globl	readi
	.globl	getch
	.globl	asciii
	.globl	lread
	.globl	rereada4
	.globl	getcv
	.globl	read2
	.globl	rdpkgc2
	.globl	readdltd
	.globl	base10p
	.globl	ffuncall
	.globl	evala1
	.globl	sysprot
	.globl	llde
	.globl	getfns
	.globl	setfn
	.globl	getprop
	.globl	nreverse
	.globl	lllength
	.globl	list
	.globl	kwote
	.globl	stringa1
	.globl	makevect
	.globl	ini_mach
	.globl	C.ini_mach
C.ini_mach:	mflr	0
	stu	0,-4(1)
ini_mach:	lil	14,3
	cal	15,6602(13)
	l	16,4024(13)
	cal	17,164(13)
	lil	3,._dmc
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,6605(13)
	l	16,4016(13)
	cal	17,164(13)
	lil	3,._dms
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,6608(13)
	l	16,4012(13)
	cal	17,164(13)
	lil	3,._defsharp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6616(13)
	l	16,3988(13)
	cal	17,164(13)
	lil	3,._llsharp
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6637(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,1
	cal	15,6654(13)
	l	16,3912(13)
	cal	17,164(13)
	lil	3,._llcolon
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,6623(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,1
	cal	15,6653(13)
	l	16,3904(13)
	cal	17,164(13)
	lil	3,._llhat
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6660(13)
	l	16,3900(13)
	cal	17,164(13)
	lil	3,._lllbra
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6629(13)
	l	16,3896(13)
	cal	17,164(13)
	lil	3,._llrbra
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6650(13)
	l	16,4008(13)
	cal	17,164(13)
	lil	3,._llquote
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6631(13)
	l	16,4000(13)
	cal	17,164(13)
	lil	3,._llbquote
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6632(13)
	l	16,4004(13)
	cal	17,164(13)
	lil	3,._llcomma
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,6633(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,2
	cal	15,6635(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	3,128(21)
	st	3,1452(13)
	lil	14,5
	cal	15,6637(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	3,8320(21)
	st	3,0(14)
	lil	14,5
	cal	15,6642(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	3,8384(21)
	st	3,0(14)
	cal	3,8320(21)
	st	3,1452(13)
	lil	14,1
	cal	15,6647(13)
	l	16,3984(13)
	cal	17,164(13)
	lil	3,._shrpdot
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,8464(13)
	l	16,3980(13)
	cal	17,164(13)
	lil	3,._shrpplu
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,8467(13)
	l	16,3972(13)
	cal	17,164(13)
	lil	3,._shrpmoi
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6650(13)
	l	16,3968(13)
	cal	17,164(13)
	lil	3,._shrpquo
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,8473(13)
	l	16,3964(13)
	cal	17,164(13)
	lil	3,._shrpsla
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6652(13)
	l	16,3960(13)
	cal	17,164(13)
	lil	3,._shrpbak
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6653(13)
	l	16,3956(13)
	cal	17,164(13)
	lil	3,._shrphat
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6654(13)
	l	16,3952(13)
	cal	17,164(13)
	lil	3,._shrpcol
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6655(13)
	l	16,3944(13)
	cal	17,164(13)
	lil	3,._shrpdol
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6656(13)
	l	16,3940(13)
	cal	17,164(13)
	lil	3,._shrpprc
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6657(13)
	l	16,3932(13)
	cal	17,164(13)
	lil	3,._shrpgui
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6658(13)
	l	16,3928(13)
	cal	17,164(13)
	lil	3,._shrpbar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6659(13)
	l	16,3924(13)
	cal	17,164(13)
	lil	3,._shrppar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6660(13)
	l	16,3920(13)
	cal	17,164(13)
	lil	3,._shrpbra
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,1
	cal	15,6661(13)
	l	16,3936(13)
	cal	17,164(13)
	lil	3,._shrprad
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6662(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,6667(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	st	21,1452(13)
	lil	14,6
	cal	15,6674(13)
	l	16,3892(13)
	cal	17,164(13)
	lil	3,._typech
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,6680(13)
	l	16,3888(13)
	cal	17,164(13)
	lil	3,._typecod
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,6686(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,6691(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,6696(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,6701(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,6707(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,6712(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,4
	cal	15,6717(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,4
	cal	15,6721(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,6725(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,6730(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,6737(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,7
	cal	15,6743(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,6750(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,5
	cal	15,6756(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,6
	cal	15,6761(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	lil	14,15
	oril	15,21,0
	.globl	C.makevect
	bl	C.makevect
	st	14,1636(13)
	l	3,0(14)
	cal	5,9344(21)
	st	5,8(3)
	l	3,0(14)
	cal	5,9376(21)
	st	5,12(3)
	l	3,0(14)
	cal	5,9408(21)
	st	5,16(3)
	l	3,0(14)
	cal	5,9440(21)
	st	5,20(3)
	l	3,0(14)
	cal	5,9472(21)
	st	5,24(3)
	l	3,0(14)
	cal	5,9504(21)
	st	5,28(3)
	l	3,0(14)
	cal	5,9536(21)
	st	5,32(3)
	l	3,0(14)
	cal	5,9568(21)
	st	5,36(3)
	l	3,0(14)
	cal	5,9600(21)
	st	5,40(3)
	l	3,0(14)
	cal	5,9632(21)
	st	5,44(3)
	l	3,0(14)
	cal	5,9664(21)
	st	5,48(3)
	l	3,0(14)
	cal	5,9696(21)
	st	5,52(3)
	l	3,0(14)
	cal	5,9728(21)
	st	5,56(3)
	l	3,0(14)
	cal	5,9760(21)
	st	5,60(3)
	l	3,0(14)
	cal	5,9792(21)
	st	5,64(3)
	lil	14,15
	oril	15,21,0
	.globl	C.makevect
	bl	C.makevect
	st	14,1640(13)
	l	3,0(14)
	lil	5,0
	st	5,8(3)
	l	3,0(14)
	lil	5,1
	st	5,12(3)
	l	3,0(14)
	lil	5,2
	st	5,16(3)
	l	3,0(14)
	lil	5,3
	st	5,20(3)
	l	3,0(14)
	lil	5,4
	st	5,24(3)
	l	3,0(14)
	lil	5,5
	st	5,28(3)
	l	3,0(14)
	lil	5,6
	st	5,32(3)
	l	3,0(14)
	lil	5,7
	st	5,36(3)
	l	3,0(14)
	lil	5,8
	st	5,40(3)
	l	3,0(14)
	lil	5,9
	st	5,44(3)
	l	3,0(14)
	lil	5,10
	st	5,48(3)
	l	3,0(14)
	lil	5,11
	st	5,52(3)
	l	3,0(14)
	lil	5,12
	st	5,56(3)
	l	3,0(14)
	lil	5,13
	st	5,60(3)
	l	3,0(14)
	lil	5,14
	st	5,64(3)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._dmc,6
	.globl	C.dmc
C.dmc:	mflr	0
	stu	0,-4(1)
	.globl	dmc
dmc:	.globl	C.llde
	bl	C.llde
	stu	14,-4(1)
	l	3,4020(13)
	stu	3,-4(1)
	stu	14,-4(1)
	lil	3,10
	stu	3,-4(1)
	lil	17,2
	b	typech
	.globl	dmcret
dmcret:	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._dms,6
	.globl	C.dms
C.dms:	mflr	0
	stu	0,-4(1)
	.globl	dms
dms:	.globl	C.llde
	bl	C.llde
	stu	14,-4(1)
	l	3,4020(13)
	stu	3,-4(1)
	stu	14,-4(1)
	lil	3,9
	stu	3,-4(1)
	lil	17,2
	b	typech
	.set	._defsharp,6
	.globl	C.defsharp
C.defsharp:	mflr	0
	stu	0,-4(1)
	.globl	defsharp
defsharp:	l	15,0(14)
	cmpl	0,15,21
	blt	defshrer
	cmpl	0,15,22
	bge	defshrer
	stu	15,-4(1)
	l	3,4(14)
	stu	3,-4(1)
	cal	14,8672(21)
	l	14,0(14)
	.globl	C.trysympk
	bl	C.trysympk
	cal	15,2400(21)
	l	16,0(1)
	ai	1,1,4
	.globl	C.setfn
	bl	C.setfn
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
defshrer:	oril	14,15,0
	cal	15,8256(21)
	b	errsym
	.set	._llquote,1
	.globl	C.llquote
C.llquote:	mflr	0
	stu	0,-4(1)
	.globl	llquote
llquote:	.globl	C.readi
	bl	C.readi
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.1
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.1:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.2
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.2:	l	3,4(6)
	st	3,1184(13)
	cal	3,13888(21)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llcomma,1
	.globl	C.llcomma
C.llcomma:	mflr	0
	stu	0,-4(1)
	.globl	llcomma
llcomma:	lil	14,12
	cal	15,8576(21)
	b	errsxt
	.globl	commain
commain:	.globl	C.getch
	bl	C.getch
	cmpli	0,17,64
	beq	commain1
	cmpli	0,17,46
	beq	commain2
	.globl	C.rereada4
	bl	C.rereada4
	cal	14,8576(21)
commain0:	stu	14,-4(1)
	.globl	C.readi
	bl	C.readi
	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.3
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.3:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
commain1:	cal	14,8608(21)
	b	commain0
commain2:	cal	14,8640(21)
	b	commain0
	.set	._llbquote,1
	.globl	C.llbquote
C.llbquote:	mflr	0
	stu	0,-4(1)
	.globl	llbquote
llbquote:	cal	14,8576(21)
	l	3,8(14)
	stu	3,-4(1)
	lhz	15,24(14)
	stu	15,-4(1)
	l	16,3996(13)
	.globl	C.sysprot
	bl	C.sysprot
	cal	14,8576(21)
	l	3,4(1)
	sth	3,24(14)
	l	3,8(1)
	st	3,8(14)
	l	14,0(1)
	ai	1,1,12
	mtlr	16
	br	
	.globl	llbquot1
llbquot1:	l	3,3992(13)
	st	3,8(14)
	lil	3,1
	sth	3,24(14)
	.globl	C.readi
	bl	C.readi
	b	backquot
	.globl	C.backcste
C.backcste:	mflr	0
	stu	0,-4(1)
backcste:	cmpl	0,14,21
	beq	backcst9
	cmp	0,14,22
	blt	backcst8
	l	17,0(14)
	cal	4,13888(21)
	cmpl	0,17,4
	bne	backcst8
	l	17,4(14)
	l	3,4(17)
	cmpl	0,3,21
	beq	backcst9
backcst8:	oril	17,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
backcst9:	cal	17,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.backquot
C.backquot:	mflr	0
	stu	0,-4(1)
backquot:	cmpl	0,14,21
	bne	backquo0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
backquo0:	cmp	0,14,22
	bge	backquo1
	b	kwote
backquo1:	l	15,0(14)
	cal	4,8576(21)
	cmpl	0,15,4
	bne	backquo2
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
backquo2:	cal	4,8608(21)
	cmpl	0,15,4
	beq	backquor
	cal	4,8640(21)
	cmpl	0,15,4
	beq	backquor
	cmp	0,15,22
	blt	backquo3
	l	3,0(15)
	cal	4,8608(21)
	cmpl	0,3,4
	beq	backquo4
	l	3,0(15)
	cal	4,8640(21)
	cmpl	0,3,4
	beq	backquo5
backquo3:	stu	15,-4(1)
	l	14,4(14)
	.globl	C.backquot
	bl	C.backquot
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	.globl	C.backquot
	bl	C.backquot
	l	15,0(1)
	ai	1,1,4
	cmpl	0,15,21
	bne	backqu32
	.globl	C.backcste
	bl	C.backcste
	cmpl	0,17,21
	beq	backqu31
	l	14,4(14)
	l	14,0(14)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.4
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.4:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	b	kwote
backqu31:	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.5
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.5:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.6
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.6:	l	3,4(6)
	st	3,1184(13)
	cal	3,16960(21)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
backqu32:	.globl	C.backcste
	bl	C.backcste
	cmpl	0,17,21
	beq	backqu34
	oril	16,14,0
	oril	14,15,0
	.globl	C.backcste
	bl	C.backcste
	cmpl	0,17,21
	beq	backqu33
	l	14,4(14)
	l	14,0(14)
	l	16,4(16)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.7
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.7:	l	3,4(6)
	st	3,1184(13)
	l	3,0(16)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	b	kwote
backqu33:	oril	14,16,0
backqu34:	cmp	0,15,22
	blt	backqu36
	l	16,0(15)
	cal	4,16896(21)
	cmpl	0,16,4
	bne	backqu35
	cal	3,16992(21)
	stu	3,-4(1)
	stu	14,-4(1)
	l	15,4(15)
	l	3,0(15)
	stu	3,-4(1)
	l	15,4(15)
	l	3,0(15)
	stu	3,-4(1)
	lil	17,4
	b	list
backqu35:	cal	4,16960(21)
	cmpl	0,16,4
	beq	backqu37
	cal	4,17024(21)
	cmpl	0,16,4
	beq	backqu38
	cal	4,16992(21)
	cmpl	0,16,4
	beq	backqu38
backqu36:	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.8
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.8:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	cal	16,16896(21)
	b	backquo7
backqu37:	cal	16,17024(21)
backqu38:	l	15,4(15)
	b	backquo7
backquo4:	l	15,0(14)
	l	3,4(15)
	stu	3,-4(1)
	l	14,4(14)
	.globl	C.backquot
	bl	C.backquot
	cmpl	0,14,21
	bne	backqu41
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
backqu41:	cmp	0,14,22
	blt	backqu42
	l	3,0(14)
	cal	4,17184(21)
	cmpl	0,3,4
	bne	backqu42
	l	14,4(14)
	b	backqu43
backqu42:	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.9
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.9:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
backqu43:	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.10
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.10:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.11
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.11:	l	3,4(6)
	st	3,1184(13)
	cal	3,17184(21)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
backquo5:	l	3,4(14)
	cmpl	0,3,21
	bne	backqu51
	l	14,0(14)
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
backqu51:	l	3,0(14)
	stu	3,-4(1)
	l	14,4(14)
	.globl	C.backquot
	bl	C.backquot
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.12
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.12:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.13
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.13:	l	3,4(6)
	st	3,1184(13)
	l	3,4(15)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.14
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.14:	l	3,4(6)
	st	3,1184(13)
	cal	3,18208(21)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
backquo7:	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.15
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.15:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	15,4(6)
	oril	14,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.16
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.16:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
backquor:	lil	14,12
	cal	15,8544(21)
	b	errsxt
	.set	._llsharp,1
	.globl	C.llsharp
C.llsharp:	mflr	0
	stu	0,-4(1)
	.globl	llsharp
llsharp:	.globl	C.getch
	bl	C.getch
	.globl	C.base10p
	bl	C.base10p
	cmpl	0,14,21
	beq	rdsh4
	si	4,17,48
	andil.	17,4,0xFFFF
	stu	17,-4(1)
	b	rdsh3
rdsh2:	l	4,0(1)
	exts	4,4
	muli	4,4,10
	andil.	3,4,0xFFFF
	st	3,0(1)
	si	4,17,48
	andil.	17,4,0xFFFF
	l	4,0(1)
	a	4,17,4
	andil.	3,4,0xFFFF
	st	3,0(1)
rdsh3:	.globl	C.getch
	bl	C.getch
	.globl	C.base10p
	bl	C.base10p
	cmpl	0,14,21
	bne	rdsh2
	lil	3,1
	stu	3,-4(1)
	b	rdsh5
rdsh4:	lil	3,0
	stu	3,-4(1)
rdsh5:	.globl	C.asciii
	bl	C.asciii
	oril	15,14,0
	stu	14,-4(1)
	cal	14,8672(21)
	l	14,0(14)
	oril	16,21,0
	.globl	C.getfns
	bl	C.getfns
	cmpl	0,14,21
	beq	rdshr
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	b	ffuncall
rdshr:	l	14,0(1)
	ai	1,1,4
	cal	15,8288(21)
	b	errudf
	.set	._shrpdot,1
	.globl	C.shrpdot
C.shrpdot:	mflr	0
	stu	0,-4(1)
	.globl	shrpdot
shrpdot:	.globl	C.readi
	bl	C.readi
	.globl	C.evala1
	bl	C.evala1
	.globl	shrpdot1
shrpdot1:	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.17
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.17:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._shrpplu,1
	.globl	C.shrpplu
C.shrpplu:	mflr	0
	stu	0,-4(1)
	.globl	shrpplu
shrpplu:	.globl	C.readi
	bl	C.readi
	.globl	C.evala1
	bl	C.evala1
	cmpl	0,14,21
	beq	shrpplu1
shrpplu0:	l	3,3976(13)
	stu	3,-4(1)
	b	readi
shrpplu1:	.globl	C.readi
	bl	C.readi
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._shrpmoi,1
	.globl	C.shrpmoi
C.shrpmoi:	mflr	0
	stu	0,-4(1)
	.globl	shrpmoi
shrpmoi:	.globl	C.readi
	bl	C.readi
	.globl	C.evala1
	bl	C.evala1
	cmpl	0,14,21
	bne	shrpplu1
	b	shrpplu0
	.set	._shrpquo,1
	.globl	C.shrpquo
C.shrpquo:	mflr	0
	stu	0,-4(1)
	.globl	shrpquo
shrpquo:	.globl	C.readi
	bl	C.readi
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.18
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.18:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.19
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.19:	l	3,4(6)
	st	3,1184(13)
	cal	3,11360(21)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	b	shrpdot1
	.set	._shrpsla,1
	.globl	C.shrpsla
C.shrpsla:	mflr	0
	stu	0,-4(1)
	.globl	shrpsla
shrpsla:	.globl	C.getch
	bl	C.getch
	oril	14,17,0
	b	lowbyte
	.set	._shrpbak,1
	.globl	C.shrpbak
C.shrpbak:	mflr	0
	stu	0,-4(1)
	.globl	shrpbak
shrpbak:	cal	15,7392(21)
	l	3,0(15)
	stu	3,-4(1)
	st	21,0(15)
	.globl	C.readi
	bl	C.readi
	cal	15,7392(21)
	l	3,0(1)
	st	3,0(15)
	ai	1,1,4
	cal	15,9216(21)
	stu	14,-4(1)
	.globl	C.getprop
	bl	C.getprop
	l	15,0(1)
	ai	1,1,4
	cmpl	0,14,21
	bne	lowbyte
shrpbak1:	oril	14,15,0
	cal	15,9216(21)
	b	errudv
	.set	._shrphat,1
	.globl	C.shrphat
C.shrphat:	mflr	0
	stu	0,-4(1)
	.globl	shrphat
shrphat:	.globl	C.getch
	bl	C.getch
	andil.	17,17,31
	oril	14,17,0
	b	lowbyte
	.set	._shrpcol,1
	.globl	C.shrpcol
C.shrpcol:	mflr	0
	stu	0,-4(1)
	.globl	shrpcol
shrpcol:	l	3,1396(13)
	l	3,0(3)
	lbz	15,66(3)
	stu	15,-4(1)
	l	3,1452(13)
	stu	3,-4(1)
	l	16,3948(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1452(13)
	ai	1,1,4
	l	3,1396(13)
	l	3,0(3)
	l	4,0(1)
	stb	4,66(3)
	ai	1,1,4
	mtlr	16
	br	
	.globl	shrpcol1
shrpcol1:	st	21,1452(13)
	l	3,1396(13)
	l	3,0(3)
	lil	4,8
	stb	4,66(3)
	.globl	C.readi
	bl	C.readi
	cmp	0,14,22
	blt	shrpcol3
	.globl	C.getcv
	bl	C.getcv
	cmpli	0,17,58
	beq	shrpcol2
	.globl	C.rereada4
	bl	C.rereada4
	b	shrpcol3
shrpcol2:	st	14,1452(13)
	.globl	C.readi
	bl	C.readi
shrpcol3:	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.20
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.20:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
shrpcoer:	lil	14,6
	cal	15,8960(21)
	b	errsxt
	.set	._shrpdol,1
	.globl	C.shrpdol
C.shrpdol:	mflr	0
	stu	0,-4(1)
	.globl	shrpdol
shrpdol:	cal	3,8992(21)
	stu	3,-4(1)
	lil	14,16
	b	shrprad1
	.set	._shrpprc,1
	.globl	C.shrpprc
C.shrpprc:	mflr	0
	stu	0,-4(1)
	.globl	shrpprc
shrpprc:	cal	3,9024(21)
	stu	3,-4(1)
	lil	14,2
	b	shrprad1
	.set	._shrprad,2
	.globl	C.shrprad
C.shrprad:	mflr	0
	stu	0,-4(1)
	.globl	shrprad
shrprad:	cal	3,9184(21)
	stu	3,-4(1)
shrprad1:	.globl	C.shrprad2
	bl	C.shrprad2
	cmp	0,14,22
	blt	shrpradr
	l	3,0(14)
	cmpl	0,3,18
	bge	shrpradr
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.shrprad2
C.shrprad2:	mflr	0
	stu	0,-4(1)
shrprad2:	l	3,1404(13)
	stu	3,-4(1)
	st	14,1404(13)
	l	16,4136(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1404(13)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.21
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.21:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	mtlr	16
	br	
shrpradr:	l	15,0(1)
	ai	1,1,4
	b	errsxt
	.set	._shrpgui,1
	.globl	C.shrpgui
C.shrpgui:	mflr	0
	stu	0,-4(1)
	.globl	shrpgui
shrpgui:	oril	14,21,0
	b	shrpgui2
shrpgui1:	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.22
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.22:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	st	14,4(6)
	oril	14,6,0
shrpgui2:	.globl	C.getch
	bl	C.getch
	cmpli	0,17,34
	bne	shrpgui1
	.globl	C.getch
	bl	C.getch
	cmpli	0,17,34
	beq	shrpgui1
	.globl	C.rereada4
	bl	C.rereada4
	.globl	C.nreverse
	bl	C.nreverse
	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.23
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.23:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._shrpbar,1
	.globl	C.shrpbar
C.shrpbar:	mflr	0
	stu	0,-4(1)
	.globl	shrpbar
shrpbar:	.globl	C.getcv
	bl	C.getcv
shrpbari:	cmpli	0,17,35
	beq	shrpbar0
	cmpli	0,17,124
	bne	shrpbar
	.globl	C.getcv
	bl	C.getcv
	cmpli	0,17,35
	bne	shrpbari
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
shrpbar0:	.globl	C.getcv
	bl	C.getcv
	cmpli	0,17,124
	bne	shrpbari
	l	3,3928(13)
	stu	3,-4(1)
	b	shrpbar
	.set	._shrppar,1
	.globl	C.shrppar
C.shrppar:	mflr	0
	stu	0,-4(1)
	.globl	shrppar
shrppar:	.globl	C.read2
	bl	C.read2
	cmp	0,14,22
	blt	shrpprr
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
shrpprr:	l	6,1184(13)
	cmpl	0,6,21
	bne	.mac.24
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.mac.24:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._shrpbra,1
	.globl	C.shrpbra
C.shrpbra:	mflr	0
	stu	0,-4(1)
	.globl	shrpbra
shrpbra:	.globl	C.shrpbra0
	bl	C.shrpbra0
	l	3,1452(13)
	cmpl	0,3,21
	beq	shrpbrar
	l	3,1452(13)
	st	3,4(14)
shrpbrar:	b	shrpdot1
	.globl	C.shrpbra0
C.shrpbra0:	mflr	0
	stu	0,-4(1)
shrpbra0:	l	3,1452(13)
	stu	3,-4(1)
	l	16,3916(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1452(13)
	ai	1,1,4
	mtlr	16
	br	
	.globl	shrpbra1
shrpbra1:	st	21,1452(13)
	lil	14,93
	.globl	C.readdltd
	bl	C.readdltd
	stu	14,-4(1)
	.globl	C.lllength
	bl	C.lllength
	stu	14,-4(1)
	oril	15,21,0
	.globl	C.makevect
	bl	C.makevect
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	lil	17,0
	b	shrpbra3
shrpbra2:	l	3,0(14)
	ai	4,17,2
	sli	4,4,2
	l	5,0(15)
	stx	5,3,4
	l	15,4(15)
	ai	4,17,1
	andil.	17,4,0xFFFF
shrpbra3:	cmpl	0,17,16
	bne	shrpbra2
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
lowbyte:	l	3,3976(13)
	stu	3,-4(1)
	.globl	C.getch
	bl	C.getch
	cmpli	0,17,124
	beq	lowbyte0
	b	rereada4
lowbyte0:	cmpl	0,14,18
	bge	lowbyte5
	rlinm	14,14,8,16,31
	.globl	C.getch
	bl	C.getch
	cmpli	0,17,47
	beq	lowbyte2
	cmpli	0,17,94
	beq	lowbyte3
	cmpli	0,17,92
	beq	lowbyte4
	oril	14,17,0
	cal	15,9248(21)
	b	errsxt
lowbyte2:	.globl	C.getch
	bl	C.getch
lowbytre:	or	14,17,14
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
lowbyte3:	.globl	C.getch
	bl	C.getch
	andil.	17,17,31
	b	lowbytre
lowbyte4:	stu	14,-4(1)
	.globl	C.readi
	bl	C.readi
	stu	14,-4(1)
	cal	15,9216(21)
	.globl	C.getprop
	bl	C.getprop
	l	15,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	shrpbak1
	cmpl	0,14,18
	blt	lowbytre
lowbyte5:	oril	15,14,0
	cal	14,9216(21)
	b	errnia
	.set	._llcolon,1
	.globl	C.llcolon
C.llcolon:	mflr	0
	stu	0,-4(1)
	.globl	llcolon
llcolon:	cal	14,8704(21)
	l	14,0(14)
	l	3,1396(13)
	l	3,0(3)
	lil	4,8
	stb	4,66(3)
	l	16,3908(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	3,1396(13)
	l	3,0(3)
	lil	4,10
	stb	4,66(3)
	l	14,0(1)
	ai	1,1,4
	mtlr	16
	br	
	.set	._llhat,1
	.globl	C.llhat
C.llhat:	mflr	0
	stu	0,-4(1)
	.globl	llhat
llhat:	.globl	C.getch
	bl	C.getch
	andil.	17,17,31
	b	asciii
	.set	._lllbra,1
	.globl	C.lllbra
C.lllbra:	mflr	0
	stu	0,-4(1)
	.globl	lllbra
lllbra:	cal	14,8448(21)
lllbra1:	cal	15,7456(21)
	b	errudf
	.set	._llrbra,1
	.globl	C.llrbra
C.llrbra:	mflr	0
	stu	0,-4(1)
	.globl	llrbra
llrbra:	cal	14,8480(21)
	b	lllbra1
	.set	._typech,5
	.globl	C.typech
C.typech:	mflr	0
	stu	0,-4(1)
	.globl	typech
typech:	cal	15,9280(21)
typech0:	cmpli	0,17,1
	beq	typechg1
	cmpli	0,17,2
	beq	typechs1
	lil	14,2
	b	errwna
typechs1:	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	blt	typechs5
	lil	16,14
typechs2:	l	3,1636(13)
	l	3,0(3)
	ai	4,16,2
	sli	4,4,2
	lx	17,3,4
	cmpl	0,14,17
	beq	typechs4
	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bge	typechs2
	lil	16,0
	b	typechr1
typechs4:	oril	14,16,0
	b	typechs6
typechs5:	exts	3,14
	cmpi	0,3,0
	blt	typechr2
	exts	3,14
	cmpi	0,3,14
	bgt	typechr2
typechs6:	l	3,1640(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	lx	14,3,4
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	cal	4,9280(21)
	cmpl	0,15,4
	beq	typechs7
	cmpl	0,14,18
	bge	typechr1
	exts	3,14
	cmpi	0,3,0
	blt	typechr2
	exts	3,14
	cmpi	0,3,256
	bge	typechr2
	b	typechs8
typechs7:	st	15,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	l	3,0(14)
	lbz	14,8(3)
typechs8:	l	15,0(1)
	ai	1,1,4
	l	3,1396(13)
	l	3,0(3)
	ai	4,14,8
	stbx	15,3,4
	l	3,1636(13)
	l	3,0(3)
	ai	4,15,2
	sli	4,4,2
	lx	14,3,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
typechg1:	l	14,0(1)
	ai	1,1,4
	cal	4,9280(21)
	cmpl	0,15,4
	beq	typechg5
	cmpl	0,14,18
	bge	typechr1
	exts	3,14
	cmpi	0,3,0
	blt	typechr2
	exts	3,14
	cmpi	0,3,256
	bge	typechr2
	b	typechg7
typechg5:	st	15,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	l	3,0(14)
	lbz	14,8(3)
typechg7:	l	3,1396(13)
	l	3,0(3)
	ai	4,14,8
	lbzx	14,3,4
	l	3,1636(13)
	l	3,0(3)
	ai	4,14,2
	sli	4,4,2
	lx	14,3,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
typechr1:	b	errnia
typechr2:	b	erroob
	.set	._typecod,5
	.globl	C.typecod
C.typecod:	mflr	0
	stu	0,-4(1)
	.globl	typecod
typecod:	cal	15,9312(21)
	b	typech0
