	.csect	lelisp_txt[PR]
	.globl	errsym
	.globl	errnia
	.globl	errnla
	.globl	errnva
	.globl	errwna
	.globl	errvec
	.globl	errbal
	.globl	erroob
	.globl	errfs
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	evalcar
	.globl	evala1
	.globl	funcall
	.globl	ffuncall
	.globl	evprogn
	.globl	inisymb
	.globl	inicst
	.globl	addprop
	.globl	getprop
	.globl	putprop
	.globl	remprop
	.globl	member
	.globl	nreverse
	.globl	nreconc
	.globl	equal
	.globl	makevect
	.globl	loc
	.globl	ini_ctl
	.globl	llde
	.globl	C.ini_ctl
C.ini_ctl:	mflr	0
	stu	0,-4(1)
ini_ctl:	lil	14,16
	cal	15,7358(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	3,224(21)
	st	3,12(14)
	st	21,0(14)
	lil	14,13
	oril	15,21,0
	.globl	C.makevect
	bl	C.makevect
	st	14,1872(13)
	l	3,1872(13)
	l	3,0(3)
	cal	5,2208(21)
	st	5,12(3)
	l	3,1872(13)
	l	3,0(3)
	cal	5,2240(21)
	st	5,16(3)
	l	3,1872(13)
	l	3,0(3)
	cal	5,2272(21)
	st	5,20(3)
	l	3,1872(13)
	l	3,0(3)
	cal	5,2304(21)
	st	5,24(3)
	l	3,1872(13)
	l	3,0(3)
	cal	5,2336(21)
	st	5,28(3)
	l	3,1872(13)
	l	3,0(3)
	cal	5,2368(21)
	st	5,32(3)
	l	3,1872(13)
	l	3,0(3)
	cal	5,2400(21)
	st	5,36(3)
	l	3,1872(13)
	l	3,0(3)
	cal	5,2432(21)
	st	5,40(3)
	l	3,1872(13)
	l	3,0(3)
	cal	5,2464(21)
	st	5,44(3)
	l	3,1872(13)
	l	3,0(3)
	cal	5,2496(21)
	st	5,48(3)
	l	3,1872(13)
	l	3,0(3)
	cal	5,2528(21)
	st	5,52(3)
	l	3,1872(13)
	l	3,0(3)
	cal	5,2560(21)
	st	5,56(3)
	lil	14,13
	oril	15,21,0
	.globl	C.makevect
	bl	C.makevect
	st	14,1876(13)
	l	3,1876(13)
	l	3,0(3)
	lil	5,1
	st	5,12(3)
	l	3,1876(13)
	l	3,0(3)
	lil	5,2
	st	5,16(3)
	l	3,1876(13)
	l	3,0(3)
	lil	5,3
	st	5,20(3)
	l	3,1876(13)
	l	3,0(3)
	lil	5,4
	st	5,24(3)
	l	3,1876(13)
	l	3,0(3)
	lil	5,5
	st	5,28(3)
	l	3,1876(13)
	l	3,0(3)
	lil	5,6
	st	5,32(3)
	l	3,1876(13)
	l	3,0(3)
	lil	5,7
	st	5,36(3)
	l	3,1876(13)
	l	3,0(3)
	lil	5,8
	st	5,40(3)
	l	3,1876(13)
	l	3,0(3)
	lil	5,9
	st	5,44(3)
	l	3,1876(13)
	l	3,0(3)
	lil	5,10
	st	5,48(3)
	l	3,1876(13)
	l	3,0(3)
	lil	5,11
	st	5,52(3)
	l	3,1876(13)
	l	3,0(3)
	lil	5,12
	st	5,56(3)
	lil	14,5
	cal	15,7374(13)
	l	16,3492(13)
	cal	17,164(13)
	lil	3,._llde
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,7379(13)
	l	16,3492(13)
	cal	17,164(13)
	lil	3,._llde
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,7381(13)
	l	16,3488(13)
	cal	17,164(13)
	lil	3,._lldf
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,7383(13)
	l	16,3484(13)
	cal	17,164(13)
	lil	3,._lldm
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,7385(13)
	l	16,3480(13)
	cal	17,164(13)
	lil	3,._dmd
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,7388(13)
	l	16,3480(13)
	cal	17,164(13)
	lil	3,._dmd
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,7396(13)
	l	16,3476(13)
	cal	17,164(13)
	lil	3,._llds
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7398(13)
	l	16,3472(13)
	cal	17,164(13)
	lil	3,._defvar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,12
	cal	15,7404(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	3,224(21)
	st	3,12(14)
	lil	14,6
	cal	15,7416(13)
	l	16,3468(13)
	cal	17,164(13)
	lil	3,._revert
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7422(13)
	l	16,3464(13)
	cal	17,164(13)
	lil	3,._getdef
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7428(13)
	l	16,3460(13)
	cal	17,164(13)
	lil	3,._makedef
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,7435(13)
	l	16,3456(13)
	cal	17,164(13)
	lil	3,._llif
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,7437(13)
	l	16,3452(13)
	cal	17,164(13)
	lil	3,._llifn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7440(13)
	l	16,3448(13)
	cal	17,164(13)
	lil	3,._when
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7444(13)
	l	16,3444(13)
	cal	17,164(13)
	lil	3,._unless
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7450(13)
	l	16,3440(13)
	cal	17,164(13)
	lil	3,._cond
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,7454(13)
	l	16,3436(13)
	cal	17,164(13)
	lil	3,._llor
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,7456(13)
	l	16,3432(13)
	cal	17,164(13)
	lil	3,._lland
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7459(13)
	l	16,3428(13)
	cal	17,164(13)
	lil	3,._while
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7464(13)
	l	16,3424(13)
	cal	17,164(13)
	lil	3,._until
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7469(13)
	l	16,3420(13)
	cal	17,164(13)
	lil	3,._loop
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7473(13)
	l	16,3416(13)
	cal	17,164(13)
	lil	3,._frepeat
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7479(13)
	l	16,3412(13)
	cal	17,164(13)
	lil	3,._selectq
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,7486(13)
	l	16,3408(13)
	cal	17,164(13)
	lil	3,._map
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7489(13)
	l	16,3408(13)
	cal	17,164(13)
	lil	3,._map
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7493(13)
	l	16,3400(13)
	cal	17,164(13)
	lil	3,._mapc
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7497(13)
	l	16,3392(13)
	cal	17,164(13)
	lil	3,._maplist
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7504(13)
	l	16,3384(13)
	cal	17,164(13)
	lil	3,._mapcar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7510(13)
	l	16,3376(13)
	cal	17,164(13)
	lil	3,._mapcon
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7516(13)
	l	16,3368(13)
	cal	17,164(13)
	lil	3,._mapcan
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7522(13)
	l	16,3360(13)
	cal	17,164(13)
	lil	3,._fevery
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,7527(13)
	l	16,3348(13)
	cal	17,164(13)
	lil	3,._fany
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,7530(13)
	l	16,3336(13)
	cal	17,164(13)
	lil	3,._mapvect
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,7539(13)
	l	16,3312(13)
	cal	17,164(13)
	lil	3,._mapoblist
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,7548(13)
	l	16,3328(13)
	cal	17,164(13)
	lil	3,._mapcoblist
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,7558(13)
	l	16,3320(13)
	cal	17,164(13)
	lil	3,._maploblist
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7568(13)
	l	16,3304(13)
	cal	17,164(13)
	lil	3,._quote
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7573(13)
	l	16,3300(13)
	cal	17,164(13)
	lil	3,._lambda
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7579(13)
	l	16,3296(13)
	cal	17,164(13)
	lil	3,._flambda
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7586(13)
	l	16,3292(13)
	cal	17,164(13)
	lil	3,._mlambda
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,7593(13)
	l	16,3284(13)
	cal	17,164(13)
	lil	3,._llident
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7601(13)
	l	16,3288(13)
	cal	17,164(13)
	lil	3,._comment
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7608(13)
	l	16,3276(13)
	cal	17,164(13)
	lil	3,._progn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7613(13)
	l	16,3280(13)
	cal	17,164(13)
	lil	3,._eprogn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7619(13)
	l	16,3268(13)
	cal	17,164(13)
	lil	3,._prog1
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,21
	cal	15,7624(13)
	l	16,3272(13)
	cal	17,164(13)
	lil	3,._exdef
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7645(13)
	l	16,3264(13)
	cal	17,164(13)
	lil	3,._prog2
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	cal	14,13888(21)
	st	14,0(14)
	cal	14,13920(21)
	st	14,0(14)
	cal	14,13952(21)
	st	14,0(14)
	cal	14,13984(21)
	st	14,0(14)
cnfalse:	oril	14,21,0
cnpopj:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
cnttrue:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
def:	l	15,4(14)
	l	14,0(14)
	sth	16,24(14)
	st	15,8(14)
	cal	16,12672(21)
	l	15,0(16)
	cmpl	0,15,21
	beq	cnpopj
	stu	14,-4(1)
	.globl	C.putprop
	bl	C.putprop
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llde,6
	.globl	C.llde
C.llde:	mflr	0
	stu	0,-4(1)
	.globl	llde
llde:	lil	16,7
	b	def
	.set	._lldf,6
	.globl	C.lldf
C.lldf:	mflr	0
	stu	0,-4(1)
	.globl	lldf
lldf:	lil	16,8
	b	def
	.set	._lldm,6
	.globl	C.lldm
C.lldm:	mflr	0
	stu	0,-4(1)
	.globl	lldm
lldm:	lil	16,9
	b	def
	.set	._dmd,6
	.globl	C.dmd
C.dmd:	mflr	0
	stu	0,-4(1)
	.globl	dmd
dmd:	lil	16,10
	b	def
	.set	._llds,6
	.globl	C.llds
C.llds:	mflr	0
	stu	0,-4(1)
	.globl	llds
llds:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._defvar,6
	.globl	C.defvar
C.defvar:	mflr	0
	stu	0,-4(1)
	.globl	defvar
defvar:	cmp	0,14,22
	blt	defvar9
	l	3,0(14)
	stu	3,-4(1)
	l	14,4(14)
	.globl	C.evalcar
	bl	C.evalcar
	l	15,0(1)
	ai	1,1,4
	cmpl	0,15,23
	blt	defverr
	cmpl	0,15,22
	bge	defverr
	st	14,0(15)
	oril	14,15,0
	cal	16,12672(21)
	l	15,0(16)
	cmpl	0,15,21
	beq	defvar9
	stu	14,-4(1)
	.globl	C.putprop
	bl	C.putprop
	l	14,0(1)
	ai	1,1,4
defvar9:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
defverr:	oril	14,15,0
	cal	15,12928(21)
	b	errnva
	.set	._revert,2
	.globl	C.revert
C.revert:	mflr	0
	stu	0,-4(1)
	.globl	revert
revert:	cal	15,12960(21)
	.globl	C.getprop
	bl	C.getprop
	cmpl	0,14,21
	beq	cnpopj
	b	evala1
	.set	._getdef,2
	.globl	C.getdef
C.getdef:	mflr	0
	stu	0,-4(1)
	.globl	getdef
getdef:	cmpl	0,14,21
	blt	gtdefe
	cmpl	0,14,22
	bge	gtdefe
	lhz	15,24(14)
	l	16,8(14)
	b	defsuit
gtdefe:	cal	15,13024(21)
	b	errsym
	.set	._makedef,4
	.globl	C.makedef
C.makedef:	mflr	0
	stu	0,-4(1)
	.globl	makedef
makedef:	cmpl	0,15,18
	bge	uncod0
	exts	3,15
	cmpi	0,3,0
	blt	uncodtr
	exts	3,15
	cmpi	0,3,12
	ble	defsuit
uncodtr:	cal	15,13056(21)
	b	erroob
uncod0:	stu	16,-4(1)
	l	3,1872(13)
	l	3,0(3)
	l	17,4(3)
	b	uncod2
uncod1:	l	3,1872(13)
	l	3,0(3)
	ai	4,17,2
	sli	4,4,2
	lx	16,3,4
	cmpl	0,16,15
	beq	uncod3
uncod2:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	uncod1
	lil	17,0
uncod3:	oril	15,17,0
	l	16,0(1)
	ai	1,1,4
defsuit:	sli	3,15,2
	cal	4,1880(13)
	lx	0,4,3
	mtlr	0
	br	
	.globl	mkdef0
	.globl	mkdef1
	.globl	mkdef1
	.globl	mkdef1
	.globl	mkdef1
	.globl	mkdef1
	.globl	mkdef1
	.globl	mkdef2
	.globl	mkdef3
	.globl	mkdef4
	.globl	mkdef5
	.globl	mkdef1
	.globl	mkdef1
mkdef0:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
mkdef1:	l	4,1104(13)
	cmpl	0,16,4
	blt	.cnt.1
	l	4,168(13)
	cmpl	0,16,4
	blt	mkdef10
.cnt.1:	stu	14,-4(1)
	stu	15,-4(1)
	oril	14,16,0
	.globl	C.loc
	bl	C.loc
	oril	16,14,0
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
mkdef10:	l	6,1184(13)
	cmpl	0,6,21
	bne	.cnt.2
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.cnt.2:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	21,4(6)
	oril	16,6,0
	l	3,1872(13)
	l	3,0(3)
	ai	4,15,2
	sli	4,4,2
	lx	15,3,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.cnt.3
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.cnt.3:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	16,4(6)
	oril	16,6,0
	cal	17,12896(21)
	b	mkdef8
mkdef2:	cal	17,12736(21)
	b	mkdef8
mkdef3:	cal	17,12768(21)
	b	mkdef8
mkdef4:	cal	17,12800(21)
	b	mkdef8
mkdef5:	cal	17,12864(21)
mkdef8:	l	6,1184(13)
	cmpl	0,6,21
	bne	.cnt.4
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.cnt.4:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	16,4(6)
	oril	16,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.cnt.5
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.cnt.5:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	st	16,4(6)
	oril	16,6,0
	oril	14,16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llif,6
	.globl	C.llif
C.llif:	mflr	0
	stu	0,-4(1)
	.globl	llif
llif:	cmp	0,14,22
	blt	ifer2
	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	15,0(1)
	ai	1,1,4
	cmp	0,15,22
	blt	ifer1
	l	16,4(15)
	cal	3,13088(21)
	st	3,1744(13)
	cmpl	0,14,21
	beq	progna3
	l	14,0(15)
	b	evala1
ifer1:	oril	14,15,0
ifer2:	cmpl	0,14,21
	beq	cnpopj
	cal	15,13088(21)
	b	errbal
	.set	._llifn,6
	.globl	C.llifn
C.llifn:	mflr	0
	stu	0,-4(1)
	.globl	llifn
llifn:	cmp	0,14,22
	blt	ifner2
	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	15,0(1)
	ai	1,1,4
	cmp	0,15,22
	blt	ifner1
	l	16,4(15)
	cal	3,13120(21)
	st	3,1744(13)
	cmpl	0,14,21
	bne	progna3
	l	14,0(15)
	b	evala1
ifner1:	oril	14,15,0
ifner2:	cmpl	0,14,21
	beq	cnpopj
	cal	15,13120(21)
	b	errbal
	.set	._when,6
	.globl	C.when
C.when:	mflr	0
	stu	0,-4(1)
	.globl	when
when:	cmp	0,14,22
	blt	whener1
	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	16,0(1)
	ai	1,1,4
	cal	3,13152(21)
	st	3,1744(13)
	cmpl	0,14,21
	bne	progna3
whenr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
whener1:	cmpl	0,14,21
	beq	whenr
	cal	15,13152(21)
	b	errbal
	.set	._unless,6
	.globl	C.unless
C.unless:	mflr	0
	stu	0,-4(1)
	.globl	unless
unless:	cmp	0,14,22
	blt	unler1
	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	16,0(1)
	ai	1,1,4
	cal	3,13184(21)
	st	3,1744(13)
	cmpl	0,14,21
	beq	progna3
	oril	14,21,0
unlesr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
unler1:	cmpl	0,14,21
	beq	unlesr
	cal	15,13184(21)
	b	errbal
	.set	._cond,6
	.globl	C.cond
C.cond:	mflr	0
	stu	0,-4(1)
	.globl	cond
cond:	oril	15,14,0
cond1:	cmp	0,15,22
	blt	conder3
	l	3,4(15)
	stu	3,-4(1)
	l	14,0(15)
	cmp	0,14,22
	blt	conder1
	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	cmpl	0,14,21
	beq	cond1
	cal	3,13216(21)
	st	3,1744(13)
	cmp	0,16,22
	bge	progna3
	cmpl	0,16,21
	beq	condret
	oril	14,16,0
	b	conder4
condret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
conder1:	cmpl	0,14,21
	bne	conder2
	l	15,0(1)
	ai	1,1,4
	b	cond1
conder2:	cal	15,13216(21)
	b	errnla
conder3:	oril	14,15,0
	cmpl	0,14,21
	bne	conder4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
conder4:	cal	15,13216(21)
	b	errbal
	.set	._llor,6
	.globl	C.llor
C.llor:	mflr	0
	stu	0,-4(1)
	.globl	llor
llor:	cmp	0,14,22
	bge	or2
	cmpl	0,14,21
	beq	cnpopj
	b	orer2
or1:	stu	15,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	cmpl	0,14,21
	bne	pret
	l	14,0(1)
	ai	1,1,4
or2:	l	15,4(14)
	cmp	0,15,22
	bge	or1
	cmpl	0,15,21
	bne	orer1
	b	evalcar
orer1:	oril	14,15,0
orer2:	cal	15,13248(21)
	b	errbal
	.set	._lland,6
	.globl	C.lland
C.lland:	mflr	0
	stu	0,-4(1)
	.globl	lland
lland:	cmp	0,14,22
	bge	and2
	cmpl	0,14,21
	beq	cnttrue
	b	ander2
and1:	stu	15,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	cmpl	0,14,21
	beq	pret
	l	14,0(1)
	ai	1,1,4
and2:	l	15,4(14)
	cmp	0,15,22
	bge	and1
	cmpl	0,15,21
	bne	ander1
	b	evalcar
pret:	l	15,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ander1:	oril	14,15,0
ander2:	cal	15,13280(21)
	b	errbal
	.set	._while,6
	.globl	C.while
C.while:	mflr	0
	stu	0,-4(1)
	.globl	while
while:	cmp	0,14,22
	blt	whiler
	stu	14,-4(1)
	b	while2
while1:	l	14,0(1)
	l	14,4(14)
	cal	3,13312(21)
	st	3,1744(13)
	.globl	C.iprogn
	bl	C.iprogn
while2:	l	14,0(1)
	.globl	C.evalcar
	bl	C.evalcar
	cmpl	0,14,21
	bne	while1
	l	15,0(1)
	ai	1,1,4
whileret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
whiler:	cmpl	0,14,21
	beq	whileret
	cal	15,13312(21)
	b	errbal
	.set	._until,6
	.globl	C.until
C.until:	mflr	0
	stu	0,-4(1)
	.globl	until
until:	cmp	0,14,22
	blt	untiler
	stu	14,-4(1)
	b	until2
until1:	l	14,0(1)
	l	14,4(14)
	cal	3,13344(21)
	st	3,1744(13)
	.globl	C.iprogn
	bl	C.iprogn
until2:	l	14,0(1)
	.globl	C.evalcar
	bl	C.evalcar
	cmpl	0,14,21
	beq	until1
	l	15,0(1)
	ai	1,1,4
untilret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
untiler:	cmpl	0,14,21
	beq	untilret
	cal	15,13344(21)
	b	errbal
	.set	._loop,6
	.globl	C.loop
C.loop:	mflr	0
	stu	0,-4(1)
	.globl	loop
loop:	stu	14,-4(1)
loop1:	l	14,0(1)
	cal	3,13376(21)
	st	3,1744(13)
	.globl	C.iprogn
	bl	C.iprogn
	b	loop1
	.set	._frepeat,6
	.globl	C.frepeat
C.frepeat:	mflr	0
	stu	0,-4(1)
	.globl	frepeat
frepeat:	cmp	0,14,22
	blt	freper
	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	cmpl	0,15,18
	blt	repeat2
	oril	14,15,0
	cal	15,13408(21)
	b	errnia
repeat1:	stu	14,-4(1)
	stu	15,-4(1)
	cal	3,13408(21)
	st	3,1744(13)
	.globl	C.iprogn
	bl	C.iprogn
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
repeat2:	exts	15,15
	si	15,15,1
	cmpi	0,15,0
	bge	repeat1
	lil	15,0
	b	cnttrue
freper:	cmpl	0,14,21
	beq	cnttrue
	cal	15,13408(21)
	b	errbal
	.set	._selectq,6
	.globl	C.selectq
C.selectq:	mflr	0
	stu	0,-4(1)
	.globl	selectq
selectq:	cmp	0,14,22
	blt	selecer1
	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	16,0(1)
	ai	1,1,4
	b	selec5
selec1:	l	15,0(16)
	l	16,4(16)
	cmp	0,15,22
	blt	selecer2
	l	17,4(15)
	l	15,0(15)
	cal	4,96(21)
	cmpl	0,15,4
	beq	selec7
	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	cmp	0,15,22
	blt	selec2
	.globl	C.member
	bl	C.member
	b	selec3
selec2:	.globl	C.equal
	bl	C.equal
selec3:	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	cmpl	0,14,21
	bne	selec6
	l	14,0(1)
	ai	1,1,4
selec5:	cmp	0,16,22
	bge	selec1
	oril	14,16,0
selecer1:	cmpl	0,14,21
	beq	cnpopj
	cal	15,13440(21)
	b	errbal
selecer2:	cmpl	0,15,21
	beq	selec5
	oril	14,15,0
	cal	15,13440(21)
	b	errnla
selec6:	l	14,0(1)
	ai	1,1,4
selec7:	oril	14,17,0
	cal	3,13440(21)
	st	3,1744(13)
	b	iprogn
	.set	._map,5
	.globl	C.map
C.map:	mflr	0
	stu	0,-4(1)
	.globl	map
map:	cal	15,13504(21)
	lil	3,0
	stu	3,-4(1)
	l	3,3404(13)
	stu	3,-4(1)
	oril	16,21,0
allmap:	stu	17,-4(1)
	stu	16,-4(1)
	exts	3,17
	cmpi	0,3,1
	ble	maper
	.globl	map1
map1:	l	17,12(1)
	l	14,8(1)
	l	15,4(1)
	stu	14,-4(1)
	oril	16,15,0
	ai	4,16,4
	andil.	16,4,0xFFFF
	sli	3,16,2
	lx	14,1,3
	b	map3
map2:	sli	3,16,2
	lx	14,1,3
	cmp	0,14,22
	blt	map4
	sli	5,16,2
	l	4,4(14)
	stx	4,1,5
	cmpli	0,17,0
	beq	map3
	l	14,0(14)
map3:	stu	14,-4(1)
	exts	15,15
	si	15,15,1
	cmpi	0,15,0
	bgt	map2
	lil	15,0
	si	4,16,4
	andil.	16,4,0xFFFF
	oril	17,16,0
	b	funcall
map4:	sf	4,15,16
	andil.	16,4,0xFFFF
	si	4,16,3
	andil.	16,4,0xFFFF
	exts	3,16
	sli	3,3,2
	a	1,1,3
	l	14,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	ai	4,16,2
	andil.	16,4,0xFFFF
	exts	3,16
	sli	3,3,2
	a	1,1,3
	cmpli	0,17,2
	beq	map5
	b	nreverse
map5:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	map6
map6:	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.cnt.6
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.cnt.6:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	15,4(6)
	oril	15,6,0
	stu	15,-4(1)
	b	map1
	.globl	map7
map7:	cmp	0,14,22
	blt	map1
	l	15,0(1)
	ai	1,1,4
	.globl	C.nreconc
	bl	C.nreconc
	stu	14,-4(1)
	b	map1
	.globl	map8
map8:	st	14,0(1)
	cmpl	0,14,21
	bne	map1
	b	map10
	.globl	map9
map9:	st	14,0(1)
	cmpl	0,14,21
	beq	map1
map10:	ai	1,1,4
	l	17,0(1)
	ai	4,17,3
	andil.	17,4,0xFFFF
	exts	3,17
	sli	3,3,2
	a	1,1,3
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
maper:	oril	14,17,0
	b	errwna
allmapun:	l	17,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	stu	14,-4(1)
	stu	15,-4(1)
	stu	17,-4(1)
	stu	16,-4(1)
	.globl	mapun1
mapun1:	l	15,8(1)
	cmp	0,15,22
	blt	mapun4
	l	3,4(15)
	st	3,8(1)
	l	16,4(1)
	l	14,12(1)
	stu	16,-4(1)
	l	3,0(15)
	stu	3,-4(1)
	lil	17,1
	b	ffuncall
mapun4:	l	14,0(1)
	ai	1,1,4
	ai	1,1,12
	l	17,0(1)
	ai	1,1,4
	cmpli	0,17,2
	beq	mapun5
	b	nreverse
mapun5:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	mapun6
mapun6:	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.cnt.7
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.cnt.7:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	15,4(6)
	oril	15,6,0
	stu	15,-4(1)
	b	mapun1
	.globl	mapun7
mapun7:	cmp	0,14,22
	blt	mapun1
	l	15,0(1)
	ai	1,1,4
	.globl	C.nreconc
	bl	C.nreconc
	stu	14,-4(1)
	b	mapun1
	.globl	mapun8
mapun8:	st	14,0(1)
	cmpl	0,14,21
	bne	mapun1
	ai	1,1,20
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	mapun9
mapun9:	cmpl	0,14,21
	beq	mapun1
	ai	1,1,20
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._mapc,5
	.globl	C.mapc
C.mapc:	mflr	0
	stu	0,-4(1)
	.globl	mapc
mapc:	oril	16,21,0
	lil	3,1
	stu	3,-4(1)
	cmpli	0,17,2
	bne	mapcn
	l	3,3396(13)
	stu	3,-4(1)
	b	allmapun
mapcn:	cal	15,13536(21)
	l	3,3404(13)
	stu	3,-4(1)
	b	allmap
	.set	._maplist,5
	.globl	C.maplist
C.maplist:	mflr	0
	stu	0,-4(1)
	.globl	maplist
maplist:	oril	16,21,0
	cal	15,13568(21)
	lil	3,0
	stu	3,-4(1)
	l	3,3388(13)
	stu	3,-4(1)
	b	allmap
	.set	._mapcar,5
	.globl	C.mapcar
C.mapcar:	mflr	0
	stu	0,-4(1)
	.globl	mapcar
mapcar:	oril	16,21,0
	lil	3,1
	stu	3,-4(1)
	cmpli	0,17,2
	bne	mapcarn
	l	3,3380(13)
	stu	3,-4(1)
	b	allmapun
mapcarn:	cal	15,13600(21)
	l	3,3388(13)
	stu	3,-4(1)
	b	allmap
	.set	._mapcon,5
	.globl	C.mapcon
C.mapcon:	mflr	0
	stu	0,-4(1)
	.globl	mapcon
mapcon:	cal	15,13632(21)
	oril	16,21,0
	lil	3,0
	stu	3,-4(1)
	l	3,3372(13)
	stu	3,-4(1)
	b	allmap
	.set	._mapcan,5
	.globl	C.mapcan
C.mapcan:	mflr	0
	stu	0,-4(1)
	.globl	mapcan
mapcan:	oril	16,21,0
	lil	3,1
	stu	3,-4(1)
	cmpli	0,17,2
	bne	mapcann
	l	3,3364(13)
	stu	3,-4(1)
	b	allmapun
mapcann:	cal	15,13664(21)
	l	3,3372(13)
	stu	3,-4(1)
	b	allmap
	.set	._fevery,5
	.globl	C.fevery
C.fevery:	mflr	0
	stu	0,-4(1)
	.globl	fevery
fevery:	cal	16,96(21)
	lil	3,2
	stu	3,-4(1)
	cmpli	0,17,2
	bne	feveryn
	l	3,3356(13)
	stu	3,-4(1)
	b	allmapun
feveryn:	cal	15,13696(21)
	l	3,3352(13)
	stu	3,-4(1)
	b	allmap
	.set	._fany,5
	.globl	C.fany
C.fany:	mflr	0
	stu	0,-4(1)
	.globl	fany
fany:	oril	16,21,0
	lil	3,2
	stu	3,-4(1)
	cmpli	0,17,2
	bne	fanyn
	l	3,3344(13)
	stu	3,-4(1)
	b	allmapun
fanyn:	cal	15,13728(21)
	l	3,3340(13)
	stu	3,-4(1)
	b	allmap
	.set	._mapvect,3
	.globl	C.mapvect
C.mapvect:	mflr	0
	stu	0,-4(1)
	.globl	mapvect
mapvect:	cmpl	0,15,19
	blt	mapvect9
	cmpl	0,15,20
	bge	mapvect9
	lil	16,0
	l	3,0(15)
	l	17,4(3)
	b	mapvect8
mapvect1:	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	l	3,0(15)
	ai	4,16,2
	sli	4,4,2
	lx	16,3,4
	l	3,3332(13)
	stu	3,-4(1)
	stu	16,-4(1)
	lil	17,1
	b	ffuncall
	.globl	mapvect2
mapvect2:	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	ai	4,16,1
	andil.	16,4,0xFFFF
mapvect8:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	mapvect1
	lil	17,0
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
mapvect9:	oril	14,15,0
	cal	15,13760(21)
	b	errvec
	.set	._mapcoblist,2
	.globl	C.mapcoblist
C.mapcoblist:	mflr	0
	stu	0,-4(1)
	.globl	mapcoblist
mapcoblist:	l	3,3324(13)
	stu	3,-4(1)
allmapob:	oril	17,21,0
	l	3,1220(13)
	l	3,0(3)
	l	16,4(3)
	si	4,16,1
	andil.	16,4,0xFFFF
mapcob0:	l	3,1220(13)
	l	3,0(3)
	ai	4,16,2
	sli	4,4,2
	lx	16,3,4
	b	mapcob7
mapcob1:	oril	15,16,0
	l	5,28(15)
	cmpl	0,5,20
	blt	.cnt.8
	cmpl	0,5,21
	blt	mapcob3
.cnt.8:mapcob2:	l	15,28(15)
mapcob3:	cal	4,32(21)
	cmpl	0,15,4
	beq	mapcob6
	stu	14,-4(1)
	stu	16,-4(1)
	stu	15,-4(1)
	stu	17,-4(1)
	l	17,16(1)
	stu	17,-4(1)
	stu	15,-4(1)
	lil	17,1
	b	ffuncall
	.globl	mapcob5
mapcob5:	l	17,0(1)
	ai	1,1,4
mapcob5a:	l	15,0(1)
	ai	1,1,4
mapcob5b:	l	16,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
mapcob6:	cmpl	0,16,15
	bne	mapcob2
	l	16,20(16)
mapcob7:	cmpl	0,16,21
	blt	.cnt.9
	cmpl	0,16,22
	blt	mapcob1
.cnt.9:mapcob8:	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bge	mapcob0
	lil	16,0
	l	14,0(1)
	ai	1,1,4
	oril	14,17,0
	b	nreverse
	.globl	maplobco
maplobco:	cmpl	0,14,21
	beq	mapcob5
	l	17,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.cnt.10
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.cnt.10:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	17,4(6)
	oril	17,6,0
	b	mapcob5b
	.globl	mapcobco
mapcobco:	cmp	0,14,22
	blt	mapcob5
	l	15,0(1)
	ai	1,1,4
	.globl	C.nreconc
	bl	C.nreconc
	oril	17,14,0
	b	mapcob5a
	.set	._maploblist,2
	.globl	C.maploblist
C.maploblist:	mflr	0
	stu	0,-4(1)
	.globl	maploblist
maploblist:	l	3,3316(13)
	stu	3,-4(1)
	b	allmapob
	.set	._mapoblist,2
	.globl	C.mapoblist
C.mapoblist:	mflr	0
	stu	0,-4(1)
	.globl	mapoblist
mapoblist:	l	3,3308(13)
	stu	3,-4(1)
	b	allmapob
	.set	._quote,6
	.globl	C.quote
C.quote:	mflr	0
	stu	0,-4(1)
	.globl	quote
quote:	l	15,4(14)
	cmpl	0,15,21
	bne	quoterr
	l	14,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
quoterr:	lil	14,1
	cal	15,13888(21)
	b	errwna
	.set	._lambda,6
	.globl	C.lambda
C.lambda:	mflr	0
	stu	0,-4(1)
	.globl	lambda
lambda:	l	6,1184(13)
	cmpl	0,6,21
	bne	.cnt.11
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.cnt.11:	l	3,4(6)
	st	3,1184(13)
	cal	3,13920(21)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._flambda,6
	.globl	C.flambda
C.flambda:	mflr	0
	stu	0,-4(1)
	.globl	flambda
flambda:	l	6,1184(13)
	cmpl	0,6,21
	bne	.cnt.12
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.cnt.12:	l	3,4(6)
	st	3,1184(13)
	cal	3,13952(21)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._mlambda,6
	.globl	C.mlambda
C.mlambda:	mflr	0
	stu	0,-4(1)
	.globl	mlambda
mlambda:	l	6,1184(13)
	cmpl	0,6,21
	bne	.cnt.13
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.cnt.13:	l	3,4(6)
	st	3,1184(13)
	cal	3,13984(21)
	st	3,0(6)
	st	14,4(6)
	oril	14,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._comment,6
	.globl	C.comment
C.comment:	mflr	0
	stu	0,-4(1)
	.globl	comment
comment:	cal	14,14048(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._llident,2
	.globl	C.llident
C.llident:	mflr	0
	stu	0,-4(1)
	.globl	llident
llident:	l	3,1216(13)
	cmpli	0,3,0
	beq	.cnt.14
	.globl	C.ithard
	bl	C.ithard
.cnt.14:	l	3,1068(13)
	cmpl	0,1,3
	bge	.cnt.15
	b	errfs
.cnt.15:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
progna3:	oril	14,16,0
	l	3,1216(13)
	cmpli	0,3,0
	beq	.cnt.16
	.globl	C.ithard
	bl	C.ithard
.cnt.16:	cmp	0,14,22
	blt	progna35
	l	15,4(14)
	cmpl	0,15,21
	beq	progna36
progna35:	b	evprogn
progna36:	b	evalcar
	.set	._eprogn,2
	.globl	C.eprogn
C.eprogn:	mflr	0
	stu	0,-4(1)
	.globl	eprogn
eprogn:	cal	3,14112(21)
	st	3,1744(13)
	l	3,1216(13)
	cmpli	0,3,0
	beq	.cnt.17
	.globl	C.ithard
	bl	C.ithard
.cnt.17:	b	evprogn
	.set	._progn,6
	.globl	C.progn
C.progn:	mflr	0
	stu	0,-4(1)
	.globl	progn
progn:	cal	3,14080(21)
	st	3,1744(13)
	b	iprogn
	.globl	C.iprogn
C.iprogn:	mflr	0
	stu	0,-4(1)
iprogn:	l	3,1216(13)
	cmpli	0,3,0
	beq	.cnt.18
	.globl	C.ithard
	bl	C.ithard
.cnt.18:	b	evprogn
	.set	._exdef,6
	.globl	C.exdef
C.exdef:	mflr	0
	stu	0,-4(1)
	.globl	exdef
exdef:	b	prog1
	.set	._prog1,6
	.globl	C.prog1
C.prog1:	mflr	0
	stu	0,-4(1)
	.globl	prog1
prog1:	cmp	0,14,22
	blt	prog1e
	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	cal	3,14144(21)
	st	3,1744(13)
	.globl	C.iprogn
	bl	C.iprogn
	l	14,0(1)
	ai	1,1,4
prog1r:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
prog1e:	cmpl	0,14,21
	beq	prog1r
	cal	15,14144(21)
	b	errbal
	.set	._prog2,6
	.globl	C.prog2
C.prog2:	mflr	0
	stu	0,-4(1)
	.globl	prog2
prog2:	cmp	0,14,22
	blt	prog2e
	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	14,0(1)
	ai	1,1,4
	cmp	0,14,22
	blt	prog2e
	l	3,4(14)
	stu	3,-4(1)
	.globl	C.evalcar
	bl	C.evalcar
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	cal	3,14208(21)
	st	3,1744(13)
	.globl	C.iprogn
	bl	C.iprogn
	l	14,0(1)
	ai	1,1,4
prog2r:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
prog2e:	cmpl	0,14,21
	beq	prog2r
	cal	15,14208(21)
	b	errbal
