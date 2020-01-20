	.csect	lelisp_txt[PR]
	.globl	errfs
	.globl	errwna
	.globl	errnia
	.globl	errnaa
	.globl	errsym
	.globl	errvec
	.globl	erroob
	.globl	errfh
	.globl	errnsa
	.globl	errstl
	.globl	gccons
	.globl	gcfloat
	.globl	gcnumb
	.globl	gcstrg
	.globl	gcvect
	.globl	hgc
	.globl	tyo
	.globl	tycursor
	.globl	inisymb
	.globl	inicst
	.globl	trysymp
	.globl	trysympk
	.globl	hashint
	.globl	ffuncall
	.globl	nreverse
	.globl	equal
	.globl	ini_str
	.globl	ffsymbol
	.globl	strgallc
	.globl	getnumi
	.globl	strgsymb
	.globl	stringa1
	.globl	stringa2
	.globl	eqstrgi
	.globl	makestrg
	.globl	makevect
	.globl	eqvectri
	.globl	rdpscrn
	.globl	ffindex
	.globl	C.ini_str
C.ini_str:	mflr	0
	stu	0,-4(1)
ini_str:	lil	14,6
	cal	15,8960(13)
	l	16,2240(13)
	cal	17,164(13)
	lil	3,._string
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,8966(13)
	l	16,2236(13)
	cal	17,164(13)
	lil	3,._plength
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,8973(13)
	l	16,2232(13)
	cal	17,164(13)
	lil	3,._slength
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8980(13)
	l	16,2228(13)
	cal	17,164(13)
	lil	3,._slen
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8984(13)
	l	16,2180(13)
	cal	17,164(13)
	lil	3,._sref
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,8988(13)
	l	16,2172(13)
	cal	17,164(13)
	lil	3,._sset
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,8992(13)
	l	16,2164(13)
	cal	17,164(13)
	lil	3,._typestrg
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,9002(13)
	l	16,2160(13)
	cal	17,164(13)
	lil	3,._exchstrg
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,9012(13)
	l	16,2224(13)
	cal	17,164(13)
	lil	3,._caten
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,9020(13)
	l	16,2216(13)
	cal	17,164(13)
	lil	3,._eqstring
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,15
	cal	15,9028(13)
	l	16,2220(13)
	cal	17,164(13)
	lil	3,._subsequal
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,9043(13)
	l	16,2212(13)
	cal	17,164(13)
	lil	3,._substring
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,9052(13)
	l	16,2208(13)
	cal	17,164(13)
	lil	3,._makestrg
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,9062(13)
	l	16,2204(13)
	cal	17,164(13)
	lil	3,._duplstrg
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,9072(13)
	l	16,2200(13)
	cal	17,164(13)
	lil	3,._bltstrg
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,9081(13)
	l	16,2196(13)
	cal	17,164(13)
	lil	3,._fillstrg
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,9091(13)
	l	16,2192(13)
	cal	17,164(13)
	lil	3,._scanstrg
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,9101(13)
	l	16,2188(13)
	cal	17,164(13)
	lil	3,._spanstrg
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,9111(13)
	l	16,2184(13)
	cal	17,164(13)
	lil	3,._chrpos
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,9117(13)
	l	16,2176(13)
	cal	17,164(13)
	lil	3,._chrnth
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,9123(13)
	l	16,2168(13)
	cal	17,164(13)
	lil	3,._chrset
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,9129(13)
	l	16,2156(13)
	cal	17,164(13)
	lil	3,._ffindex
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,9134(13)
	l	16,2136(13)
	cal	17,164(13)
	lil	3,._hash
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,9138(13)
	l	16,2148(13)
	cal	17,164(13)
	lil	3,._ffsymbol
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,9144(13)
	l	16,2132(13)
	cal	17,164(13)
	lil	3,._fpnam
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,9149(13)
	l	16,2144(13)
	cal	17,164(13)
	lil	3,._concat
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,9155(13)
	l	16,2128(13)
	cal	17,164(13)
	lil	3,._gensym
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,9161(13)
	l	16,2152(13)
	cal	17,164(13)
	lil	3,._alphales
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,9171(13)
	l	16,2120(13)
	cal	17,164(13)
	lil	3,._bltscrn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,9180(13)
	l	16,2116(13)
	cal	17,164(13)
	lil	3,._typevect
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,9190(13)
	l	16,2084(13)
	cal	17,164(13)
	lil	3,._exchvect
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,9200(13)
	l	16,2112(13)
	cal	17,164(13)
	lil	3,._makevect
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,9210(13)
	l	16,2108(13)
	cal	17,164(13)
	lil	3,._vlength
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,9217(13)
	l	16,2104(13)
	cal	17,164(13)
	lil	3,._eqvector
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,9225(13)
	l	16,2100(13)
	cal	17,164(13)
	lil	3,._vref
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,9229(13)
	l	16,2096(13)
	cal	17,164(13)
	lil	3,._vset
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,9
	cal	15,9233(13)
	l	16,2092(13)
	cal	17,164(13)
	lil	3,._bltvect
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,9242(13)
	l	16,2088(13)
	cal	17,164(13)
	lil	3,._vector
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,10
	cal	15,9248(13)
	l	16,2080(13)
	cal	17,164(13)
	lil	3,._fillvect
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,13
	cal	15,9258(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	3,224(21)
	st	3,12(14)
	stu	14,-4(1)
	lil	14,1
	lil	15,103
	.globl	C.makestrg
	bl	C.makestrg
	l	16,0(1)
	ai	1,1,4
	st	14,0(16)
	lil	14,14
	cal	15,9271(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	3,224(21)
	st	3,12(14)
	lil	3,100
	st	3,0(14)
	lil	14,1024
	lil	15,0
	.globl	C.makestrg
	bl	C.makestrg
	st	14,1968(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.strgallc
C.strgallc:	mflr	0
	stu	0,-4(1)
strgallc:	exts	3,15
	cmpi	0,3,0
	bge	strgall0
	lil	15,0
strgall0:	l	14,1172(13)
	cmpl	0,14,21
	beq	strgall3
	l	3,1096(13)
	st	3,1964(13)
	l	4,1096(13)
	a	4,15,4
	ai	4,4,13
	lil	3,3
	andc	4,4,3
	st	4,1096(13)
	l	3,1100(13)
	l	4,1096(13)
	cmpl	0,3,4
	blt	strgall4
strgall2:	l	3,0(14)
	st	3,1172(13)
	l	3,1964(13)
	st	3,0(14)
	cal	3,1964(13)
	l	3,0(3)
	st	15,4(3)
	cal	3,1964(13)
	l	3,0(3)
	st	14,0(3)
	l	3,0(14)
	ai	4,15,8
	lil	5,0
	stbx	5,3,4
	cal	3,22400(21)
	st	3,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
strgall3:	.globl	C.gcstrg
	bl	C.gcstrg
	b	strgallc
strgall4:	oril	14,21,0
	l	3,1964(13)
	st	3,1096(13)
	.globl	C.hgc
	bl	C.hgc
	l	14,1172(13)
	l	3,1096(13)
	st	3,1964(13)
	l	4,1096(13)
	a	4,15,4
	ai	4,4,13
	lil	3,3
	andc	4,4,3
	st	4,1096(13)
	l	3,1096(13)
	l	4,1100(13)
	cmpl	0,3,4
	blt	strgall2
	l	3,1964(13)
	st	3,1096(13)
	oril	14,21,0
	b	errfh
	.globl	C.getnumi
C.getnumi:	mflr	0
	stu	0,-4(1)
getnumi:	cmpli	0,14,0x8000
	beq	getmin
	exts	3,14
	cmpi	0,3,0
	bge	getpos
	lil	17,45
	.globl	C.getnumch
	bl	C.getnumch
	exts	3,14
	neg	3,3
	andil.	14,3,0xFFFF
	b	getpos
	.globl	C.getpos
C.getpos:	mflr	0
	stu	0,-4(1)
getpos:	oril	17,14,0
	l	3,1652(13)
	exts	3,3
	exts	4,17
	divs	3,4,3
	mfmq	3
	andil.	17,3,0xFFFF
	ai	4,17,48
	andil.	17,4,0xFFFF
	exts	3,17
	cmpi	0,3,57
	ble	getpos2
	ai	4,17,7
	andil.	17,4,0xFFFF
getpos2:	l	3,1652(13)
	exts	3,3
	exts	4,14
	divs	3,4,3
	andil.	14,3,0xFFFF
	cmpli	0,14,0
	beq	getnumch
	stu	17,-4(1)
	.globl	C.getpos
	bl	C.getpos
	l	17,0(1)
	ai	1,1,4
	b	getnumch
getmin:	lil	17,35
	.globl	C.getnumch
	bl	C.getnumch
	lil	17,36
	.globl	C.getnumch
	bl	C.getnumch
	lil	17,56
	.globl	C.getnumch
	bl	C.getnumch
	lil	17,48
	.globl	C.getnumch
	bl	C.getnumch
	.globl	C.getnumch
	bl	C.getnumch
	b	getnumch
	.globl	C.getnumch
C.getnumch:	mflr	0
	stu	0,-4(1)
getnumch:	l	3,0(16)
	ai	4,15,8
	stbx	17,3,4
	ai	4,15,1
	andil.	15,4,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
badstr2:	oril	14,15,0
badstr1:	l	15,1740(13)
	b	errnsa
badvec2:	oril	14,15,0
badvec1:	l	15,1740(13)
	b	errvec
badnbar5:	lil	14,5
	b	badnba31
badnbar3:	lil	14,3
badnba31:	l	15,1740(13)
	b	errwna
badnbar4:	lil	14,4
	b	badnba31
badoob1:	l	15,1740(13)
	b	erroob
badfix2:	oril	14,15,0
badfix1:	l	15,1740(13)
	b	errnia
badfix3:	oril	14,16,0
	b	badfix1
badfix4:	oril	14,17,0
	b	badfix1
badind2:	oril	14,15,0
badind1:	l	15,1740(13)
	b	erroob
badind3:	oril	14,16,0
	b	badind1
badind4:	oril	14,17,0
	b	badind1
	.globl	C.mina1a2
C.mina1a2:	mflr	0
	stu	0,-4(1)
mina1a2:	exts	3,15
	exts	4,14
	cmp	0,3,4
	bgt	mina1a2x
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
mina1a2x:	oril	15,14,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.mina1a3
C.mina1a3:	mflr	0
	stu	0,-4(1)
mina1a3:	exts	3,16
	exts	4,14
	cmp	0,3,4
	bgt	mina1a3x
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
mina1a3x:	oril	16,14,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.mina1a4
C.mina1a4:	mflr	0
	stu	0,-4(1)
mina1a4:	exts	3,17
	exts	4,14
	cmp	0,3,4
	bgt	mina1a4x
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
mina1a4x:	oril	17,14,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
mina3a1:	exts	3,14
	exts	4,16
	cmp	0,3,4
	bgt	mina3a1x
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
mina3a1x:	oril	14,16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.mina3a4
C.mina3a4:	mflr	0
	stu	0,-4(1)
mina3a4:	exts	3,17
	exts	4,16
	cmp	0,3,4
	bgt	mina3a4x
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
mina3a4x:	oril	17,16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
mina4a1:	exts	3,14
	exts	4,17
	cmp	0,3,4
	bgt	mina4a1x
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
mina4a1x:	oril	14,17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.mina4a3
C.mina4a3:	mflr	0
	stu	0,-4(1)
mina4a3:	exts	3,16
	exts	4,17
	cmp	0,3,4
	bgt	mina4a3x
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
mina4a3x:	oril	16,17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
strfalse:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._string,2
	.globl	C.string
C.string:	mflr	0
	stu	0,-4(1)
	.globl	string
string:	cmpl	0,14,20
	blt	.str.1
	cmpl	0,14,21
	blt	stringr
.str.1:	cmpl	0,14,21
	blt	stringc
	cmpl	0,14,22
	bge	stringc
	l	15,20(14)
	cmpl	0,15,20
	blt	.str.2
	cmpl	0,15,21
	blt	stringr2
.str.2:	l	15,28(14)
	cmpl	0,15,20
	blt	.str.3
	cmpl	0,15,21
	blt	stringr2
.str.3:	l	15,20(15)
stringr2:	oril	14,15,0
stringr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
stringc:	cal	3,22400(21)
	st	3,1740(13)
	b	strgrest
	.globl	C.stringa1
C.stringa1:	mflr	0
	stu	0,-4(1)
stringa1:	cmpl	0,14,20
	blt	strgrest
	cmpl	0,14,21
	bge	strgrest
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.strgsymb
C.strgsymb:	mflr	0
	stu	0,-4(1)
strgsymb:	stu	15,-4(1)
	l	15,20(14)
	cmpl	0,15,20
	blt	.str.4
	cmpl	0,15,21
	blt	strgsyre
.str.4:	l	15,28(14)
	cmpl	0,15,20
	blt	.str.5
	cmpl	0,15,21
	blt	strgsyre
.str.5:	l	15,20(15)
strgsyre:	oril	14,15,0
	l	15,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.strgrest
C.strgrest:	mflr	0
	stu	0,-4(1)
strgrest:	cmpl	0,14,21
	blt	.str.6
	cmpl	0,14,22
	blt	strgsymb
.str.6:	cmpl	0,14,19
	blt	.str.7
	cmpl	0,14,20
	blt	badstr1
.str.7:	stu	15,-4(1)
	stu	16,-4(1)
	l	16,1968(13)
	cmpl	0,14,18
	blt	strgnf
	cmpl	0,14,19
	bge	strgnf
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
	b	strgfol
strgnf:	lil	15,0
	stu	17,-4(1)
	cmpl	0,14,18
	bge	strgnn
	.globl	C.getnumi
	bl	C.getnumi
	b	strgfol4
strgnn:	cmpl	0,14,21
	beq	strgfol4
	cmp	0,14,22
	blt	badstr1
	l	17,0(14)
	cmpl	0,17,18
	bge	badstr1
	.globl	C.getnumch
	bl	C.getnumch
	exts	3,15
	cmpi	0,3,1024
	bge	badstr1
	l	14,4(14)
	b	strgnn
strgfol4:	l	17,0(1)
	ai	1,1,4
strgfol:	.globl	C.strgallc
	bl	C.strgallc
	l	4,0(16)
	cal	4,8(4)
	l	5,0(14)
	cal	5,8(5)
	oril	3,15,0
	cmp	0,5,4
	ble	.str.11
	a	4,4,3
	a	5,5,3
	b	.str.9
.str.8:	lbz	6,0(4)
	stb	6,0(5)
.str.9:	si	4,4,1
	si	5,5,1
	si	3,3,1
	cmpi	0,3,0
	bge	.str.8
	b	.str.12
.str.10:	lbz	6,0(4)
	stb	6,0(5)
	ai	4,4,1
	ai	5,5,1
.str.11:	si	3,3,1
	cmpi	0,3,0
	bge	.str.10
.str.12:	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.stringa2
C.stringa2:	mflr	0
	stu	0,-4(1)
stringa2:	cmpl	0,15,20
	blt	stra2c
	cmpl	0,15,21
	bge	stra2c
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
stra2c:	stu	14,-4(1)
	oril	14,15,0
	.globl	C.strgrest
	bl	C.strgrest
	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.stringa3
C.stringa3:	mflr	0
	stu	0,-4(1)
stringa3:	cmpl	0,16,20
	blt	stra3c
	cmpl	0,16,21
	bge	stra3c
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
stra3c:	stu	14,-4(1)
	oril	14,16,0
	.globl	C.strgrest
	bl	C.strgrest
	oril	16,14,0
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._plength,2
	.globl	C.plength
C.plength:	mflr	0
	stu	0,-4(1)
	.globl	plength
plength:	cal	3,22432(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	l	3,0(14)
	l	14,4(3)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._slength,2
	.globl	C.slength
C.slength:	mflr	0
	stu	0,-4(1)
	.globl	slength
slength:	cal	3,22464(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	l	3,0(14)
	l	14,4(3)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._slen,2
	.globl	C.slen
C.slen:	mflr	0
	stu	0,-4(1)
	.globl	slen
slen:	cal	3,22496(21)
	st	3,1740(13)
	cmpl	0,14,20
	blt	badstr1
	cmpl	0,14,21
	bge	badstr1
	l	3,0(14)
	l	14,4(3)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._caten,5
	.globl	C.caten
C.caten:	mflr	0
	stu	0,-4(1)
	.globl	caten
caten:	cal	3,22656(21)
	st	3,1740(13)
caten0:	oril	16,17,0
	lil	15,0
	b	caten2
caten1:	sli	3,17,2
	lx	14,1,3
	.globl	C.stringa1
	bl	C.stringa1
	sli	5,17,2
	stx	14,1,5
	l	3,0(14)
	l	14,4(3)
	exts	3,14
	exts	4,15
	a	4,3,4
	andil.	15,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	catenstl
caten2:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	caten1
	lil	17,0
	stu	16,-4(1)
	.globl	C.strgallc
	bl	C.strgallc
	l	17,0(1)
	ai	1,1,4
	b	caten4
caten3:	l	16,0(1)
	ai	1,1,4
	l	3,0(16)
	l	3,4(3)
	st	3,1728(13)
	l	3,1728(13)
	sf	4,3,15
	andil.	15,4,0xFFFF
	l	4,0(16)
	cal	4,8(4)
	l	5,0(14)
	ai	5,5,8
	a	5,5,15
	l	3,1728(13)
	cmp	0,5,4
	ble	.str.16
	a	4,4,3
	a	5,5,3
	b	.str.14
.str.13:	lbz	6,0(4)
	stb	6,0(5)
.str.14:	si	4,4,1
	si	5,5,1
	si	3,3,1
	cmpi	0,3,0
	bge	.str.13
	b	.str.17
.str.15:	lbz	6,0(4)
	stb	6,0(5)
	ai	4,4,1
	ai	5,5,1
.str.16:	si	3,3,1
	cmpi	0,3,0
	bge	.str.15
.str.17:caten4:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	caten3
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
catenstl:	lil	14,32767
	cal	15,22656(21)
	b	errstl
	.set	._subsequal,5
	.globl	C.subsequal
C.subsequal:	mflr	0
	stu	0,-4(1)
	.globl	subsequal
subsequal:	cal	3,22720(21)
	st	3,1740(13)
	cmpli	0,17,5
	bne	badnbar5
	l	14,12(1)
	cmpl	0,14,20
	blt	badstr1
	cmpl	0,14,21
	bge	badstr1
	l	15,4(1)
	cmpl	0,15,20
	blt	badstr2
	cmpl	0,15,21
	bge	badstr2
	l	16,8(1)
	cmpl	0,16,18
	bge	badfix3
	exts	3,16
	cmpi	0,3,0
	blt	badind3
	l	17,0(1)
	cmpl	0,17,18
	bge	badfix4
	exts	3,17
	cmpi	0,3,0
	blt	badind4
	st	14,1728(13)
	st	15,1732(13)
	l	14,16(1)
	cmpl	0,14,18
	bge	badfix1
	exts	3,14
	cmpi	0,3,0
	blt	badind1
	oril	15,14,0
	a	4,16,15
	andil.	15,4,0xFFFF
	l	3,1728(13)
	l	3,0(3)
	l	3,4(3)
	st	3,1736(13)
	exts	3,15
	l	4,1736(13)
	exts	4,4
	cmp	0,3,4
	bgt	badind1
	oril	15,14,0
	a	4,17,15
	andil.	15,4,0xFFFF
	l	3,1732(13)
	l	3,0(3)
	l	3,4(3)
	st	3,1736(13)
	exts	3,15
	l	4,1736(13)
	exts	4,4
	cmp	0,3,4
	bgt	badind1
	ai	1,1,20
	l	4,1728(13)
	l	4,0(4)
	ai	4,4,8
	a	4,4,16
	l	5,1732(13)
	l	5,0(5)
	ai	5,5,8
	a	5,5,17
	oril	3,14,0
	b	.str.19
.str.18:	lbz	6,0(4)
	lbz	7,0(5)
	cmp	0,6,7
	bne	.str.20
	ai	4,4,1
	ai	5,5,1
.str.19:	si	3,3,1
	cmpi	0,3,0
	bge	.str.18
	b	subseqr
.str.20:	oril	14,21,0
subseqr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._eqstring,3
	.globl	C.eqstring
C.eqstring:	mflr	0
	stu	0,-4(1)
	.globl	eqstring
eqstring:	cal	3,22688(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	.globl	C.stringa2
	bl	C.stringa2
eqstrgi:	cmpl	0,14,15
	beq	sret
	l	3,0(14)
	l	16,4(3)
	l	3,0(15)
	l	17,4(3)
	cmpl	0,16,17
	bne	sfalse
	l	17,4(14)
	cmpl	0,17,21
	blt	eqstrg2
	cmpl	0,17,22
	bge	eqstrg2
	l	4,4(15)
	cmpl	0,17,4
	bne	sfalse
	l	4,0(14)
	cal	4,8(4)
	l	5,0(15)
	cal	5,8(5)
	oril	3,16,0
	b	.str.22
.str.21:	lbz	6,0(4)
	lbz	7,0(5)
	cmp	0,6,7
	bne	.str.23
	ai	4,4,1
	ai	5,5,1
.str.22:	si	3,3,1
	cmpi	0,3,0
	bge	.str.21
	b	sret
.str.23:sfalse:	oril	14,21,0
sret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
eqstrg2:	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	oril	14,17,0
	l	15,4(15)
	.globl	C.equal
	bl	C.equal
	oril	17,14,0
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	cmpl	0,17,21
	beq	sfalse2
	l	4,0(14)
	cal	4,8(4)
	l	5,0(15)
	cal	5,8(5)
	oril	3,16,0
	b	.str.25
.str.24:	lbz	6,0(4)
	lbz	7,0(5)
	cmp	0,6,7
	bne	.str.26
	ai	4,4,1
	ai	5,5,1
.str.25:	si	3,3,1
	cmpi	0,3,0
	bge	.str.24
	b	sret2
.str.26:sfalse2:	oril	14,21,0
sret2:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._substring,5
	.globl	C.substring
C.substring:	mflr	0
	stu	0,-4(1)
	.globl	substring
substring:	cal	3,22752(21)
	st	3,1740(13)
	lil	14,32767
	cmpli	0,17,2
	beq	substr1
	cmpli	0,17,3
	bne	badnbar3
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	badfix1
substr1:	l	17,0(1)
	ai	1,1,4
	cmpl	0,17,18
	bge	badfix4
	exts	3,17
	cmpi	0,3,0
	blt	badind4
	l	16,0(1)
	ai	1,1,4
	.globl	C.stringa3
	bl	C.stringa3
	l	3,0(16)
	l	15,4(3)
	exts	3,17
	exts	4,15
	sf	4,3,4
	andil.	15,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	substr2
substr2:	.globl	C.mina1a2
	bl	C.mina1a2
	.globl	C.strgallc
	bl	C.strgallc
	l	4,0(16)
	ai	4,4,8
	a	4,4,17
	l	5,0(14)
	cal	5,8(5)
	oril	3,15,0
	cmp	0,5,4
	ble	.str.30
	a	4,4,3
	a	5,5,3
	b	.str.28
.str.27:	lbz	6,0(4)
	stb	6,0(5)
.str.28:	si	4,4,1
	si	5,5,1
	si	3,3,1
	cmpi	0,3,0
	bge	.str.27
	b	.str.31
.str.29:	lbz	6,0(4)
	stb	6,0(5)
	ai	4,4,1
	ai	5,5,1
.str.30:	si	3,3,1
	cmpi	0,3,0
	bge	.str.29
.str.31:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._makestrg,3
	.globl	C.makestrg
C.makestrg:	mflr	0
	stu	0,-4(1)
	.globl	makestrg
makestrg:	cal	3,22784(21)
	st	3,1740(13)
	cmpl	0,14,18
	bge	badfix1
	exts	3,14
	cmpi	0,3,0
	bge	makstrg0
	lil	14,0
makstrg0:	cmpl	0,15,18
	bge	badfix2
	stu	15,-4(1)
	oril	15,14,0
	.globl	C.strgallc
	bl	C.strgallc
	l	16,0(1)
	ai	1,1,4
	b	makstrg2
makstrg1:	l	3,0(14)
	ai	4,15,8
	stbx	16,3,4
makstrg2:	exts	15,15
	si	15,15,1
	cmpi	0,15,0
	bge	makstrg1
	lil	15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._duplstrg,3
	.globl	C.duplstrg
C.duplstrg:	mflr	0
	stu	0,-4(1)
	.globl	duplstrg
duplstrg:	cal	3,22816(21)
	st	3,1740(13)
	cmpl	0,14,18
	bge	badfix1
	exts	3,14
	cmpi	0,3,0
	blt	dupserr
	.globl	C.stringa2
	bl	C.stringa2
	oril	16,15,0
	l	3,0(15)
	l	17,4(3)
	oril	15,17,0
	exts	3,14
	exts	4,15
	muls	4,3,4
	andil.	15,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	dupsstl
	st	14,1728(13)
	.globl	C.strgallc
	bl	C.strgallc
	lil	15,0
	b	dupstrg2
dupstrg1:	l	4,0(16)
	cal	4,8(4)
	l	5,0(14)
	ai	5,5,8
	a	5,5,15
	oril	3,17,0
	cmp	0,5,4
	ble	.str.35
	a	4,4,3
	a	5,5,3
	b	.str.33
.str.32:	lbz	6,0(4)
	stb	6,0(5)
.str.33:	si	4,4,1
	si	5,5,1
	si	3,3,1
	cmpi	0,3,0
	bge	.str.32
	b	.str.36
.str.34:	lbz	6,0(4)
	stb	6,0(5)
	ai	4,4,1
	ai	5,5,1
.str.35:	si	3,3,1
	cmpi	0,3,0
	bge	.str.34
.str.36:	a	4,17,15
	andil.	15,4,0xFFFF
dupstrg2:	l	3,1728(13)
	exts	3,3
	si	3,3,1
	st	3,1728(13)
	cmpi	0,3,0
	bge	dupstrg1
	lil	3,0
	st	3,1728(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
dupserr:	cal	15,22816(21)
	b	erroob
dupsstl:	cal	15,22816(21)
	b	errstl
	.set	._bltstrg,5
	.globl	C.bltstrg
C.bltstrg:	mflr	0
	stu	0,-4(1)
	.globl	bltstrg
bltstrg:	cal	3,22848(21)
	st	3,1740(13)
	cmpli	0,17,5
	beq	bltstrg0
	lil	16,32767
	cmpli	0,17,4
	beq	bltstrg1
	lil	15,0
	cmpli	0,17,3
	bne	badnbar3
	b	bltstrg2
bltstrg0:	l	16,0(1)
	ai	1,1,4
	cmpl	0,16,18
	bge	badfix3
bltstrg1:	l	15,0(1)
	ai	1,1,4
	cmpl	0,15,18
	bge	badfix2
	exts	3,15
	cmpi	0,3,0
	blt	badind2
bltstrg2:	st	15,1732(13)
	l	15,0(1)
	ai	1,1,4
	.globl	C.stringa2
	bl	C.stringa2
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	badfix1
	exts	3,14
	cmpi	0,3,0
	blt	badind1
	st	14,1728(13)
	l	14,0(1)
	cmpl	0,14,20
	blt	badstr1
	cmpl	0,14,21
	bge	badstr1
	l	3,0(14)
	l	14,4(3)
	l	3,1728(13)
	exts	3,3
	exts	4,14
	sf	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	bltstr3
bltstr3:	.globl	C.mina1a3
	bl	C.mina1a3
	l	3,0(15)
	l	17,4(3)
	l	3,1732(13)
	exts	3,3
	exts	4,17
	sf	4,3,4
	andil.	17,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	bltstr4
bltstr4:	.globl	C.mina4a3
	bl	C.mina4a3
	l	14,0(1)
	ai	1,1,4
	exts	3,16
	cmpi	0,3,0
	ble	bltstrg6
	l	4,0(15)
	ai	4,4,8
	l	3,1732(13)
	a	4,4,3
	l	5,0(14)
	ai	5,5,8
	l	3,1728(13)
	a	5,5,3
	oril	3,16,0
	cmp	0,5,4
	ble	.str.40
	a	4,4,3
	a	5,5,3
	b	.str.38
.str.37:	lbz	6,0(4)
	stb	6,0(5)
.str.38:	si	4,4,1
	si	5,5,1
	si	3,3,1
	cmpi	0,3,0
	bge	.str.37
	b	.str.41
.str.39:	lbz	6,0(4)
	stb	6,0(5)
	ai	4,4,1
	ai	5,5,1
.str.40:	si	3,3,1
	cmpi	0,3,0
	bge	.str.39
.str.41:bltstrg6:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._fillstrg,5
	.globl	C.fillstrg
C.fillstrg:	mflr	0
	stu	0,-4(1)
	.globl	fillstrg
fillstrg:	cal	3,22880(21)
	st	3,1740(13)
	lil	14,32767
	cmpli	0,17,3
	beq	fillstr0
	cmpli	0,17,4
	bne	badnbar4
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	badfix1
fillstr0:	l	16,0(1)
	ai	1,1,4
	cmpl	0,16,18
	bge	badfix3
	l	15,0(1)
	ai	1,1,4
	cmpl	0,15,18
	bge	badfix2
	exts	3,15
	cmpi	0,3,0
	blt	badind2
	oril	17,14,0
	l	14,0(1)
	cmpl	0,14,20
	blt	badstr1
	cmpl	0,14,21
	bge	badstr1
	l	3,0(14)
	l	14,4(3)
	exts	3,15
	exts	4,14
	sf	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	fillstr6
fillstr6:	.globl	C.mina1a4
	bl	C.mina1a4
	l	14,0(1)
	ai	1,1,4
	b	fillstr8
fillstr7:	l	3,0(14)
	ai	4,15,8
	stbx	16,3,4
	ai	4,15,1
	andil.	15,4,0xFFFF
fillstr8:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	fillstr7
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._scanstrg,5
	.globl	C.scanstrg
C.scanstrg:	mflr	0
	stu	0,-4(1)
	.globl	scanstrg
scanstrg:	cal	3,22912(21)
	st	3,1740(13)
sanstrg1:	lil	16,0
	cmpli	0,17,2
	beq	sanstrg2
	cmpli	0,17,3
	bne	badnbar3
	l	16,0(1)
	ai	1,1,4
	cmpl	0,16,18
	bge	badfix3
	exts	3,16
	cmpi	0,3,0
	blt	badind3
sanstrg2:	l	15,0(1)
	ai	1,1,4
	.globl	C.stringa2
	bl	C.stringa2
	l	14,0(1)
	ai	1,1,4
	.globl	C.stringa1
	bl	C.stringa1
	l	3,0(14)
	l	17,4(3)
	exts	3,16
	exts	4,17
	sf	4,3,4
	andil.	17,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	sanstrg4
	b	sanstrg4
sanstrg3:	stu	14,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	l	3,0(14)
	ai	4,16,8
	lbzx	17,3,4
	l	3,0(15)
	l	16,4(3)
	b	sanpos6
sanpos5:	l	3,0(15)
	ai	4,16,8
	lbzx	14,3,4
	cmpl	0,17,14
	beq	sanpos9
sanpos6:	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bge	sanpos5
	lil	16,0
	cal	3,22912(21)
	l	4,1740(13)
	cmpl	0,3,4
	bne	sanstrg6
	b	sanposf
sanpos9:	cal	3,22944(21)
	l	4,1740(13)
	cmpl	0,3,4
	bne	sanstrg6
sanposf:	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	ai	4,16,1
	andil.	16,4,0xFFFF
sanstrg4:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	sanstrg3
	lil	17,0
	b	strfalse
sanstrg6:	l	17,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._spanstrg,5
	.globl	C.spanstrg
C.spanstrg:	mflr	0
	stu	0,-4(1)
	.globl	spanstrg
spanstrg:	cal	3,22944(21)
	st	3,1740(13)
	b	sanstrg1
	.set	._chrpos,5
	.globl	C.chrpos
C.chrpos:	mflr	0
	stu	0,-4(1)
	.globl	chrpos
chrpos:	cal	3,22976(21)
	st	3,1740(13)
	lil	16,0
	cmpli	0,17,2
	beq	chrpos1
	cmpli	0,17,3
	bne	badnbar3
	l	16,0(1)
	ai	1,1,4
	cmpl	0,16,18
	bge	badfix3
	exts	3,16
	cmpi	0,3,0
	blt	badind3
chrpos1:	l	15,0(1)
	ai	1,1,4
	.globl	C.stringa2
	bl	C.stringa2
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	badfix1
	andil.	14,14,255
	l	3,0(15)
	l	17,4(3)
	exts	3,16
	exts	4,17
	sf	4,3,4
	andil.	17,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	chrpos3
	b	chrpos3
chrpos2:	l	3,0(15)
	ai	4,16,8
	lbzx	3,3,4
	st	3,1728(13)
	l	3,1728(13)
	cmpl	0,3,14
	beq	chrpos5
	ai	4,16,1
	andil.	16,4,0xFFFF
chrpos3:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	chrpos2
	lil	17,0
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
chrpos5:	oril	14,16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._sref,3
	.globl	C.sref
C.sref:	mflr	0
	stu	0,-4(1)
	.globl	sref
sref:	cal	3,22528(21)
	st	3,1740(13)
	cmpl	0,14,20
	blt	badstr1
	cmpl	0,14,21
	bge	badstr1
	cmpl	0,15,18
	bge	badfix2
	exts	3,15
	cmpi	0,3,0
	blt	badind2
	l	3,0(14)
	l	16,4(3)
	exts	3,15
	exts	4,16
	cmp	0,3,4
	bge	badind2
	l	3,0(14)
	ai	4,15,8
	lbzx	14,3,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._chrnth,3
	.globl	C.chrnth
C.chrnth:	mflr	0
	stu	0,-4(1)
	.globl	chrnth
chrnth:	cal	3,23008(21)
	st	3,1740(13)
	.globl	C.stringa2
	bl	C.stringa2
	cmpl	0,14,18
	bge	badfix1
	exts	3,14
	cmpi	0,3,0
	blt	strfalse
	l	3,0(15)
	l	16,4(3)
	exts	3,14
	exts	4,16
	cmp	0,3,4
	bge	strfalse
	l	3,0(15)
	ai	4,14,8
	lbzx	14,3,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._sset,4
	.globl	C.sset
C.sset:	mflr	0
	stu	0,-4(1)
	.globl	sset
sset:	cal	3,22560(21)
	st	3,1740(13)
	oril	17,14,0
	oril	14,15,0
	oril	15,17,0
	cmpl	0,15,20
	blt	badstr2
	cmpl	0,15,21
	bge	badstr2
	stu	16,-4(1)
	.globl	C.chrset5
	bl	C.chrset5
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._chrset,4
	.globl	C.chrset
C.chrset:	mflr	0
	stu	0,-4(1)
	.globl	chrset
chrset:	cal	3,23040(21)
	st	3,1740(13)
	.globl	C.stringa2
	bl	C.stringa2
	b	chrset5
	.globl	C.chrset5
C.chrset5:	mflr	0
	stu	0,-4(1)
chrset5:	cmpl	0,14,18
	bge	badfix1
	exts	3,14
	cmpi	0,3,0
	blt	badind1
	cmpl	0,16,18
	bge	badfix3
	l	3,0(15)
	l	17,4(3)
	exts	3,14
	exts	4,17
	cmp	0,3,4
	bge	badind1
	l	3,0(15)
	ai	4,14,8
	stbx	16,3,4
	oril	14,16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._typestrg,5
	.globl	C.typestrg
C.typestrg:	mflr	0
	stu	0,-4(1)
	.globl	typestrg
typestrg:	cal	15,22592(21)
	cmpli	0,17,1
	beq	typesg
	cmpli	0,17,2
	beq	typess
	lil	14,1
	b	errwna
typesg:	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,20
	blt	typeser3
	cmpl	0,14,21
	bge	typeser3
typesg2:	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
typess:	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,21
	blt	.str.42
	cmpl	0,14,22
	blt	types2
.str.42:	cmp	0,14,22
	blt	typeser2
types2:	cmpl	0,14,21
	beq	typeser2
	l	16,0(1)
	ai	1,1,4
	cmpl	0,16,20
	blt	typeser1
	cmpl	0,16,21
	bge	typeser1
	st	14,4(16)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
typeser1:	oril	14,16,0
typeser3:	b	errnsa
typeser2:	b	errsym
	.set	._exchstrg,3
	.globl	C.exchstrg
C.exchstrg:	mflr	0
	stu	0,-4(1)
	.globl	exchstrg
exchstrg:	cal	3,22624(21)
	st	3,1740(13)
	cmpl	0,14,20
	blt	badstr1
	cmpl	0,14,21
	bge	badstr1
	cmpl	0,15,20
	blt	badstr2
	cmpl	0,15,21
	bge	badstr2
	l	3,4(14)
	stu	3,-4(1)
	l	3,4(15)
	stu	3,-4(1)
	l	3,0(14)
	st	3,1964(13)
	l	3,0(15)
	st	3,0(14)
	l	3,1964(13)
	st	3,0(15)
	l	3,0(14)
	st	14,0(3)
	l	3,0(15)
	st	15,0(3)
	l	3,0(1)
	st	3,4(14)
	ai	1,1,4
	l	3,0(1)
	st	3,4(15)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._ffindex,5
	.globl	C.ffindex
C.ffindex:	mflr	0
	stu	0,-4(1)
	.globl	ffindex
ffindex:	cal	3,23072(21)
	st	3,1740(13)
	lil	16,0
	cmpli	0,17,2
	beq	ffindg3
	cmpli	0,17,3
	bne	badnbar3
	l	16,0(1)
	ai	1,1,4
	cmpl	0,16,18
	bge	badfix3
	exts	3,16
	cmpi	0,3,0
	blt	badind3
ffindg3:	l	15,0(1)
	ai	1,1,4
	.globl	C.stringa2
	bl	C.stringa2
	l	14,0(1)
	ai	1,1,4
	.globl	C.stringa1
	bl	C.stringa1
	l	3,0(15)
	l	17,4(3)
	l	3,0(14)
	l	3,4(3)
	st	3,1728(13)
	l	3,1728(13)
	sf	4,3,17
	andil.	17,4,0xFFFF
	sf	4,16,17
	andil.	17,4,0xFFFF
	ai	4,17,1
	andil.	17,4,0xFFFF
	b	ffindex4
ffindex3:	l	4,0(15)
	ai	4,4,8
	a	4,4,16
	l	5,0(14)
	cal	5,8(5)
	l	3,1728(13)
	b	.str.44
.str.43:	lbz	6,0(4)
	lbz	7,0(5)
	cmp	0,6,7
	bne	.str.45
	ai	4,4,1
	ai	5,5,1
.str.44:	si	3,3,1
	cmpi	0,3,0
	bge	.str.43
	b	ffindex6
.str.45:	ai	4,16,1
	andil.	16,4,0xFFFF
ffindex4:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	ffindex3
	lil	17,0
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ffindex6:	oril	14,16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._alphales,3
	.globl	C.alphales
C.alphales:	mflr	0
	stu	0,-4(1)
	.globl	alphales
alphales:	cal	3,23264(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	.globl	C.stringa2
	bl	C.stringa2
	l	3,0(14)
	l	16,4(3)
	l	3,0(15)
	l	17,4(3)
	.globl	C.mina3a4
	bl	C.mina3a4
	lil	16,0
	b	alpha2
alpha1:	l	3,0(14)
	ai	4,16,8
	lbzx	3,3,4
	st	3,1728(13)
	l	3,0(15)
	ai	4,16,8
	lbzx	3,3,4
	st	3,1732(13)
	l	3,1728(13)
	exts	3,3
	l	4,1732(13)
	exts	4,4
	cmp	0,3,4
	blt	strue
	l	3,1728(13)
	l	4,1732(13)
	cmpl	0,3,4
	bne	strfalse
	ai	4,16,1
	andil.	16,4,0xFFFF
alpha2:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	alpha1
	lil	17,0
	l	3,0(14)
	l	17,4(3)
	cmpl	0,17,16
	bne	strfalse
strue:	cal	14,96(21)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._ffsymbol,3
	.globl	C.ffsymbol
C.ffsymbol:	mflr	0
	stu	0,-4(1)
	.globl	ffsymbol
ffsymbol:	cmpl	0,15,21
	blt	ffsymb1
	cmpl	0,15,22
	bge	ffsymb1
	b	trysympk
ffsymb1:	cal	3,23136(21)
	st	3,1740(13)
	.globl	C.stringa2
	bl	C.stringa2
	cmpl	0,14,21
	blt	ffsymbr2
	cmpl	0,14,22
	bge	ffsymbr2
	b	trysymp
ffsymbr2:	cal	15,23136(21)
	b	errsym
	.set	._concat,5
	.globl	C.concat
C.concat:	mflr	0
	stu	0,-4(1)
	.globl	concat
concat:	sli	3,17,2
	lx	3,1,3
	st	3,1732(13)
	sli	5,17,2
	l	4,2140(13)
	stx	4,1,5
	cal	3,23200(21)
	st	3,1740(13)
	b	caten0
	.globl	concat9
concat9:	oril	15,14,0
	oril	14,21,0
	l	3,1732(13)
	stu	3,-4(1)
	b	trysymp
	.set	._hash,2
	.globl	C.hash
C.hash:	mflr	0
	stu	0,-4(1)
	.globl	hash
hash:	cal	3,23104(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	b	hashint
	.set	._fpnam,2
	.globl	C.fpnam
C.fpnam:	mflr	0
	stu	0,-4(1)
	.globl	fpnam
fpnam:	cal	3,23168(21)
	st	3,1740(13)
	.globl	C.stringa1
	bl	C.stringa1
	l	3,0(14)
	l	15,4(3)
	oril	16,14,0
	oril	14,21,0
	b	fpnam2
fpnam1:	l	3,0(16)
	ai	4,15,8
	lbzx	17,3,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.str.46
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.str.46:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	st	14,4(6)
	oril	14,6,0
fpnam2:	exts	15,15
	si	15,15,1
	cmpi	0,15,0
	bge	fpnam1
	lil	15,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._gensym,1
	.globl	C.gensym
C.gensym:	mflr	0
	stu	0,-4(1)
	.globl	gensym
gensym:	cal	14,23648(21)
	l	3,0(14)
	stu	3,-4(1)
	cal	15,23680(21)
	l	14,0(15)
	exts	4,14
	ai	4,4,1
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	gennerr
gennerr:	st	14,0(15)
	stu	14,-4(1)
	lil	17,2
	b	concat
rdpscrn:	cal	3,5920(21)
	st	3,1740(13)
	b	bltscrn0
rdpscrn1:	l	4,1728(13)
	l	4,0(4)
	ai	4,4,8
	a	4,4,16
	l	5,1732(13)
	l	5,0(5)
	ai	5,5,8
	a	5,5,16
	l	3,1980(13)
	b	.str.48
.str.47:	lbz	6,0(4)
	lbz	7,0(5)
	cmp	0,6,7
	bne	.str.49
	ai	4,4,1
	ai	5,5,1
.str.48:	si	3,3,1
	cmpi	0,3,0
	bge	.str.47
	b	rdpscrn5
.str.49:	stu	16,-4(1)
	stu	17,-4(1)
	l	17,1980(13)
	st	16,1988(13)
	l	4,1988(13)
	a	4,17,4
	andil.	3,4,0xFFFF
	st	3,1988(13)
	l	3,2004(13)
	st	3,1992(13)
	l	4,1992(13)
	a	4,17,4
	andil.	3,4,0xFFFF
	st	3,1992(13)
rdpscrn3:	l	3,1728(13)
	l	3,0(3)
	ai	4,16,8
	lbzx	14,3,4
	l	3,1732(13)
	l	3,0(3)
	ai	4,16,8
	lbzx	15,3,4
	l	3,1732(13)
	l	3,0(3)
	ai	4,16,8
	stbx	14,3,4
	cmpl	0,14,15
	bne	scrnaff
rdpscrn4:	ai	4,16,1
	andil.	16,4,0xFFFF
	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	rdpscrn3
	lil	17,0
	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
rdpscrn5:	l	3,1972(13)
	a	4,3,16
	andil.	16,4,0xFFFF
	l	4,2008(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,2008(13)
	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	rdpscrn1
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
scrnaff:	l	3,1728(13)
	stu	3,-4(1)
	l	3,1732(13)
	stu	3,-4(1)
	stu	17,-4(1)
	stu	16,-4(1)
	exts	3,14
	cmpi	0,3,32
	bge	scrnaff0
	lil	14,46
scrnaff0:	l	3,1988(13)
	sf	4,3,16
	andil.	16,4,0xFFFF
	l	4,1988(13)
	a	4,16,4
	andil.	3,4,0xFFFF
	st	3,1988(13)
	l	4,1992(13)
	a	4,16,4
	andil.	3,4,0xFFFF
	st	3,1992(13)
	oril	17,16,0
	l	3,2124(13)
	stu	3,-4(1)
	cmpli	0,16,1
	bne	scrnaff4
scrnaff1:	stu	14,-4(1)
scrnaff2:	b	tyo
	.globl	scrnaff3
scrnaff3:	l	16,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1732(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1728(13)
	ai	1,1,4
	b	rdpscrn4
scrnaff4:	l	15,4(1)
	si	4,15,1
	andil.	15,4,0xFFFF
	cmpli	0,16,3
	bne	scrnaff7
	si	4,15,1
	andil.	15,4,0xFFFF
	l	3,1728(13)
	l	3,0(3)
	ai	4,15,8
	lbzx	16,3,4
	stu	16,-4(1)
	ai	4,15,1
	andil.	15,4,0xFFFF
scrnaff6:	l	3,1728(13)
	l	3,0(3)
	ai	4,15,8
	lbzx	16,3,4
	stu	16,-4(1)
	b	scrnaff1
scrnaff7:	cmpli	0,16,2
	beq	scrnaff6
	stu	14,-4(1)
	l	14,1992(13)
	l	15,2008(13)
	.globl	C.tycursor
	bl	C.tycursor
	lil	17,1
	b	scrnaff2
	.globl	C.clipscrn
C.clipscrn:	mflr	0
	stu	0,-4(1)
clipscrn:	cmpl	0,14,18
	bge	badfix1
	lil	17,0
	exts	3,14
	cmpi	0,3,0
	blt	clipscr3
	oril	16,14,0
clipscr1:	cmpl	0,15,18
	bge	badfix2
	exts	3,15
	cmpi	0,3,0
	blt	clipscr4
	a	4,15,17
	andil.	17,4,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
clipscr3:	lil	16,0
	sf	4,14,17
	andil.	17,4,0xFFFF
	b	clipscr1
clipscr4:	sf	4,15,16
	andil.	16,4,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.mina1dlx
C.mina1dlx:	mflr	0
	stu	0,-4(1)
mina1dlx:	l	3,1980(13)
	exts	3,3
	exts	4,14
	cmp	0,3,4
	bgt	minx1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
minx1:	st	14,1980(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.mina1dly
C.mina1dly:	mflr	0
	stu	0,-4(1)
mina1dly:	l	3,1984(13)
	exts	3,3
	exts	4,14
	cmp	0,3,4
	bgt	miny1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
miny1:	st	14,1984(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._bltscrn,5
	.globl	C.bltscrn
C.bltscrn:	mflr	0
	stu	0,-4(1)
	.globl	bltscrn
bltscrn:	cal	3,23296(21)
	st	3,1740(13)
bltscrn0:	l	14,0(1)
	ai	1,1,4
	cmpli	0,17,12
	beq	bltscrna
	cmpli	0,17,4
	bne	badnbar4
	cmpl	0,14,18
	bge	badfix1
	l	15,0(1)
	ai	1,1,4
	cmpl	0,15,18
	bge	badfix2
	st	15,1980(13)
	st	14,1984(13)
	st	15,1976(13)
	st	15,1972(13)
	lil	3,0
	st	3,1996(13)
	lil	3,0
	st	3,2004(13)
	lil	3,0
	st	3,2008(13)
	lil	3,0
	st	3,2000(13)
	lil	16,0
	lil	17,0
	b	bltscrnb
bltscrna:	cmpl	0,14,18
	bge	badfix1
	st	14,1984(13)
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	badfix1
	st	14,1980(13)
	l	3,0(1)
	st	3,2012(13)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,2008(13)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	.globl	C.clipscrn
	bl	C.clipscrn
	st	16,2004(13)
	st	16,1996(13)
	st	17,2000(13)
	l	15,2012(13)
	l	14,2008(13)
	.globl	C.clipscrn
	bl	C.clipscrn
	st	16,2008(13)
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	badfix1
	sf	4,17,14
	andil.	14,4,0xFFFF
	.globl	C.mina1dly
	bl	C.mina1dly
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	badfix1
	st	14,1976(13)
	l	3,2000(13)
	sf	4,3,14
	andil.	14,4,0xFFFF
	.globl	C.mina1dlx
	bl	C.mina1dlx
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	badfix1
	sf	4,16,14
	andil.	14,4,0xFFFF
	.globl	C.mina1dly
	bl	C.mina1dly
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	badfix1
	st	14,1972(13)
	l	3,1996(13)
	sf	4,3,14
	andil.	14,4,0xFFFF
	.globl	C.mina1dlx
	bl	C.mina1dlx
bltscrnb:	l	3,0(1)
	st	3,1732(13)
	ai	1,1,4
	l	5,1732(13)
	cmpl	0,5,20
	blt	bltscrn8
	cmpl	0,5,21
	bge	bltscrn8
	l	3,0(1)
	st	3,1728(13)
	ai	1,1,4
	l	5,1728(13)
	cmpl	0,5,20
	blt	bltscrn9
	cmpl	0,5,21
	bge	bltscrn9
	l	3,1980(13)
	exts	3,3
	cmpi	0,3,0
	ble	bltscrn7
	l	3,1984(13)
	exts	3,3
	cmpi	0,3,0
	ble	bltscrn7
	l	3,1976(13)
	exts	3,3
	exts	4,17
	muls	4,3,4
	andil.	17,4,0xFFFF
	l	4,2000(13)
	a	4,17,4
	andil.	3,4,0xFFFF
	st	3,2000(13)
	l	17,1984(13)
	l	3,1972(13)
	exts	3,3
	exts	4,16
	muls	4,3,4
	andil.	16,4,0xFFFF
	l	3,1996(13)
	a	4,3,16
	andil.	16,4,0xFFFF
	cal	3,5920(21)
	l	4,1740(13)
	cmpl	0,3,4
	beq	rdpscrn1
	l	14,1980(13)
	l	15,2000(13)
bltscrn6:	l	4,1732(13)
	l	4,0(4)
	ai	4,4,8
	a	4,4,15
	l	5,1728(13)
	l	5,0(5)
	ai	5,5,8
	a	5,5,16
	oril	3,14,0
	cmp	0,5,4
	ble	.str.53
	a	4,4,3
	a	5,5,3
	b	.str.51
.str.50:	lbz	6,0(4)
	stb	6,0(5)
.str.51:	si	4,4,1
	si	5,5,1
	si	3,3,1
	cmpi	0,3,0
	bge	.str.50
	b	.str.54
.str.52:	lbz	6,0(4)
	stb	6,0(5)
	ai	4,4,1
	ai	5,5,1
.str.53:	si	3,3,1
	cmpi	0,3,0
	bge	.str.52
.str.54:	l	3,1972(13)
	a	4,3,16
	andil.	16,4,0xFFFF
	l	3,1976(13)
	a	4,3,15
	andil.	15,4,0xFFFF
	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	bltscrn6
	lil	17,0
bltscrn7:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
bltscrn8:	l	14,1732(13)
	b	badstr1
bltscrn9:	l	14,1728(13)
	b	badstr1
	.set	._typevect,5
	.globl	C.typevect
C.typevect:	mflr	0
	stu	0,-4(1)
	.globl	typevect
typevect:	cal	15,23328(21)
	cmpli	0,17,1
	beq	typevg
	cmpli	0,17,2
	beq	typevs
	lil	14,1
	b	errwna
typevg:	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,19
	blt	typever3
	cmpl	0,14,20
	bge	typever3
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
typevs:	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,21
	blt	.str.55
	cmpl	0,14,22
	blt	typevs2
.str.55:	cmp	0,14,22
	blt	typever2
typevs2:	cmpl	0,14,21
	beq	typever2
	l	16,0(1)
	ai	1,1,4
	cmpl	0,16,19
	blt	typever1
	cmpl	0,16,20
	bge	typever1
	st	14,4(16)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
typever1:	oril	14,16,0
typever3:	b	errvec
typever2:	b	errsym
	.set	._makevect,3
	.globl	C.makevect
C.makevect:	mflr	0
	stu	0,-4(1)
	.globl	makevect
makevect:	cal	3,23392(21)
	st	3,1740(13)
	cmpl	0,14,18
	bge	badfix1
	exts	3,14
	cmpi	0,3,0
	blt	badind1
	oril	16,14,0
makvect0:	l	14,1176(13)
	cmpl	0,14,21
	beq	makvect3
	l	3,1096(13)
	st	3,1964(13)
	sli	3,16,2
	l	4,1096(13)
	a	4,4,3
	ai	4,4,8
	st	4,1096(13)
	l	3,1100(13)
	l	4,1096(13)
	cmpl	0,3,4
	blt	makvect4
makvect2:	l	3,0(14)
	st	3,1176(13)
	l	3,1964(13)
	st	3,0(14)
	cal	3,1964(13)
	l	3,0(3)
	st	16,4(3)
	cal	3,1964(13)
	l	3,0(3)
	st	14,0(3)
	b	vectfil4
vectfil1:	l	3,0(14)
	ai	4,16,2
	sli	4,4,2
	stx	15,3,4
vectfil4:	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bge	vectfil1
	lil	16,0
	cal	3,23584(21)
	st	3,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
makvect3:	.globl	C.gcvect
	bl	C.gcvect
	b	makvect0
makvect4:	oril	14,21,0
	l	3,1964(13)
	st	3,1096(13)
	.globl	C.hgc
	bl	C.hgc
	l	14,1176(13)
	l	3,1096(13)
	st	3,1964(13)
	sli	3,16,2
	l	4,1096(13)
	a	4,4,3
	ai	4,4,8
	st	4,1096(13)
	l	3,1096(13)
	l	4,1100(13)
	cmpl	0,3,4
	blt	makvect2
	oril	14,21,0
	l	3,1964(13)
	st	3,1096(13)
	b	errfh
	.set	._vlength,2
	.globl	C.vlength
C.vlength:	mflr	0
	stu	0,-4(1)
	.globl	vlength
vlength:	cal	3,23424(21)
	st	3,1740(13)
	cmpl	0,14,19
	blt	badvec1
	cmpl	0,14,20
	bge	badvec1
	l	3,0(14)
	l	14,4(3)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._eqvector,3
	.globl	C.eqvector
C.eqvector:	mflr	0
	stu	0,-4(1)
	.globl	eqvector
eqvector:	cal	3,23456(21)
	st	3,1740(13)
	cmpl	0,14,19
	blt	badvec1
	cmpl	0,14,20
	bge	badvec1
	cmpl	0,15,19
	blt	badvec2
	cmpl	0,15,20
	bge	badvec2
eqvectri:	l	3,0(14)
	l	16,4(3)
	l	3,0(15)
	l	17,4(3)
	cmpl	0,16,17
	bne	strfalse
	l	17,4(14)
	cmpl	0,17,21
	blt	eqvect6
	cmpl	0,17,22
	bge	eqvect6
	l	4,4(15)
	cmpl	0,17,4
	bne	strfalse
	b	eqvect5
eqvect4:	stu	14,-4(1)
	stu	15,-4(1)
	l	3,0(14)
	ai	4,16,2
	sli	4,4,2
	lx	14,3,4
	l	3,0(15)
	ai	4,16,2
	sli	4,4,2
	lx	15,3,4
	stu	16,-4(1)
	.globl	C.equal
	bl	C.equal
	oril	17,14,0
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	cmpl	0,17,21
	beq	strfalse
eqvect5:	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bge	eqvect4
	lil	16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
eqvect6:	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	oril	14,17,0
	l	15,4(15)
	.globl	C.equal
	bl	C.equal
	oril	17,14,0
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	cmpl	0,17,21
	bne	eqvect5
	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._vref,3
	.globl	C.vref
C.vref:	mflr	0
	stu	0,-4(1)
	.globl	vref
vref:	cal	3,23488(21)
	st	3,1740(13)
	cmpl	0,15,18
	bge	badfix2
	exts	3,15
	cmpi	0,3,0
	blt	badind2
	cmpl	0,14,19
	blt	badvec1
	cmpl	0,14,20
	bge	badvec1
	l	3,0(14)
	l	16,4(3)
	exts	3,15
	exts	4,16
	cmp	0,3,4
	bge	badind2
	l	3,0(14)
	ai	4,15,2
	sli	4,4,2
	lx	14,3,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._vset,4
	.globl	C.vset
C.vset:	mflr	0
	stu	0,-4(1)
	.globl	vset
vset:	cal	3,23520(21)
	st	3,1740(13)
	cmpl	0,15,18
	bge	badfix2
	exts	3,15
	cmpi	0,3,0
	blt	badind2
	cmpl	0,14,19
	blt	badvec1
	cmpl	0,14,20
	bge	badvec1
	l	3,0(14)
	l	17,4(3)
	exts	3,15
	exts	4,17
	cmp	0,3,4
	bge	badind2
	l	3,0(14)
	ai	4,15,2
	sli	4,4,2
	stx	16,3,4
	oril	14,16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._bltvect,5
	.globl	C.bltvect
C.bltvect:	mflr	0
	stu	0,-4(1)
	.globl	bltvect
bltvect:	cal	3,23552(21)
	st	3,1740(13)
	cmpli	0,17,5
	beq	bltvect0
	lil	16,32767
	cmpli	0,17,4
	beq	bltvect1
	lil	15,0
	cmpli	0,17,3
	bne	badnbar3
	b	bltvect2
bltvect0:	l	16,0(1)
	ai	1,1,4
	cmpl	0,16,18
	bge	badfix3
bltvect1:	l	15,0(1)
	ai	1,1,4
	cmpl	0,15,18
	bge	badfix2
	exts	3,15
	cmpi	0,3,0
	blt	badind2
bltvect2:	st	15,1732(13)
	l	15,0(1)
	ai	1,1,4
	cmpl	0,15,19
	blt	badvec2
	cmpl	0,15,20
	bge	badvec2
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	badfix1
	exts	3,14
	cmpi	0,3,0
	blt	badind1
	st	14,1728(13)
	l	14,0(1)
	cmpl	0,14,19
	blt	badvec1
	cmpl	0,14,20
	bge	badvec1
	l	3,0(14)
	l	14,4(3)
	l	3,1728(13)
	sf	4,3,14
	andil.	14,4,0xFFFF
	.globl	C.mina1a3
	bl	C.mina1a3
	l	3,0(15)
	l	17,4(3)
	l	3,1732(13)
	sf	4,3,17
	andil.	17,4,0xFFFF
	.globl	C.mina4a3
	bl	C.mina4a3
	l	14,0(1)
	ai	1,1,4
	exts	3,16
	cmpi	0,3,0
	ble	bltvect6
	l	4,0(15)
	ai	4,4,8
	l	3,1732(13)
	sli	3,3,2
	a	4,4,3
	l	5,0(14)
	ai	5,5,8
	l	3,1728(13)
	sli	3,3,2
	a	5,5,3
	oril	3,16,0
	cmp	0,5,4
	ble	.str.59
	oril	6,3,0
	sli	6,6,2
	a	4,4,6
	a	5,5,6
	b	.str.57
.str.56:	l	6,0(4)
	st	6,0(5)
.str.57:	si	4,4,4
	si	5,5,4
	si	3,3,1
	cmpi	0,3,0
	bge	.str.56
	b	.str.60
.str.58:	l	6,0(4)
	st	6,0(5)
	ai	4,4,4
	ai	5,5,4
.str.59:	si	3,3,1
	cmpi	0,3,0
	bge	.str.58
.str.60:bltvect6:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._vector,5
	.globl	C.vector
C.vector:	mflr	0
	stu	0,-4(1)
	.globl	vector
vector:	oril	14,17,0
	stu	14,-4(1)
	oril	15,21,0
	.globl	C.makevect
	bl	C.makevect
	l	17,0(1)
	ai	1,1,4
	b	vector2
vector1:	l	15,0(1)
	ai	1,1,4
	l	3,0(14)
	ai	4,17,2
	sli	4,4,2
	stx	15,3,4
vector2:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	vector1
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._exchvect,3
	.globl	C.exchvect
C.exchvect:	mflr	0
	stu	0,-4(1)
	.globl	exchvect
exchvect:	cal	3,23360(21)
	st	3,1740(13)
	cmpl	0,14,19
	blt	badvec1
	cmpl	0,14,20
	bge	badvec1
	cmpl	0,15,19
	blt	badvec2
	cmpl	0,15,20
	bge	badvec2
	l	3,4(14)
	stu	3,-4(1)
	l	3,4(15)
	stu	3,-4(1)
	l	3,0(14)
	st	3,1964(13)
	l	3,0(15)
	st	3,0(14)
	l	3,1964(13)
	st	3,0(15)
	l	3,0(14)
	st	14,0(3)
	l	3,0(15)
	st	15,0(3)
	l	3,0(1)
	st	3,4(14)
	ai	1,1,4
	l	3,0(1)
	st	3,4(15)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._fillvect,5
	.globl	C.fillvect
C.fillvect:	mflr	0
	stu	0,-4(1)
	.globl	fillvect
fillvect:	cal	3,23616(21)
	st	3,1740(13)
	lil	14,32767
	cmpli	0,17,3
	beq	fillvec0
	cmpli	0,17,4
	bne	badnbar4
	l	14,0(1)
	ai	1,1,4
	cmpl	0,14,18
	bge	badfix1
fillvec0:	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	cmpl	0,15,18
	bge	badfix2
	exts	3,15
	cmpi	0,3,0
	blt	badind2
	oril	17,14,0
	l	14,0(1)
	cmpl	0,14,19
	blt	badvec1
	cmpl	0,14,20
	bge	badvec1
	l	3,0(14)
	l	14,4(3)
	exts	3,15
	exts	4,14
	sf	4,3,4
	andil.	14,4,0xFFFF
	exts	6,4
	cmpl	0,6,4
	bne	fillvec6
fillvec6:	.globl	C.mina1a4
	bl	C.mina1a4
	l	14,0(1)
	ai	1,1,4
	b	fillvec8
fillvec7:	l	3,0(14)
	ai	4,15,2
	sli	4,4,2
	stx	16,3,4
	ai	4,15,1
	andil.	15,4,0xFFFF
fillvec8:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	fillvec7
	lil	17,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
