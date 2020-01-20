	.csect	lelisp_txt[PR]
	.globl	errfs
	.globl	erres
	.globl	errnab
	.globl	errsym
	.globl	errxia
	.globl	errwna
	.globl	gccons
	.globl	inisymb
	.globl	inicst
	.globl	findtag
	.globl	evala1
	.globl	apply
	.globl	unbind0
	.globl	unbind1
	.globl	unbinp1
	.globl	unbind2
	.globl	unbind3
	.globl	unbind4
	.globl	unbind5
	.globl	unbind6
	.globl	unbind7
	.globl	unbind8
	.globl	unbind9
	.globl	unbind10
	.globl	evexpg
	.globl	unbinp
	.globl	evprogn
	.globl	evbndext
	.globl	bndtrbex
	.globl	sysprot
	.globl	ffuncall
	.globl	evbale
	.globl	deset
	.globl	loc
	.globl	ini_spec
	.globl	C.ini_spec
C.ini_spec:	mflr	0
	stu	0,-4(1)
ini_spec:	lil	14,8
	cal	15,7233(13)
	l	16,3644(13)
	cal	17,164(13)
	lil	3,._schedule
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7128(13)
	l	16,3640(13)
	cal	17,164(13)
	lil	3,._suspend
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7135(13)
	l	16,3632(13)
	cal	17,164(13)
	lil	3,._resume
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7255(13)
	l	16,3624(13)
	cal	17,164(13)
	lil	3,._tagbody
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,7253(13)
	l	16,3620(13)
	cal	17,164(13)
	lil	3,._go
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7241(13)
	l	16,3612(13)
	cal	17,164(13)
	lil	3,._block
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7155(13)
	l	16,3608(13)
	cal	17,164(13)
	lil	3,._llret
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,11
	cal	15,7161(13)
	l	16,3604(13)
	cal	17,164(13)
	lil	3,._llretf
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7172(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	3,11744(21)
	st	3,1452(13)
	lil	14,6
	cal	15,7176(13)
	l	16,3596(13)
	cal	17,164(13)
	lil	3,._cbind0
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7182(13)
	l	16,3592(13)
	cal	17,164(13)
	lil	3,._cbind1
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7188(13)
	l	16,3588(13)
	cal	17,164(13)
	lil	3,._cbind2
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7194(13)
	l	16,3584(13)
	cal	17,164(13)
	lil	3,._cbind3
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7200(13)
	l	16,3580(13)
	cal	17,164(13)
	lil	3,._cbindn
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	l	14,4612(13)
	.globl	C.loc
	bl	C.loc
	cal	15,11904(21)
	st	14,0(15)
	lil	14,6
	cal	15,7206(13)
	l	16,3576(13)
	cal	17,164(13)
	lil	3,._cbindl
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7212(13)
	l	16,3572(13)
	cal	17,164(13)
	lil	3,._cbinds
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7218(13)
	l	16,3548(13)
	cal	17,164(13)
	lil	3,._cexit
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,7222(13)
	l	16,3568(13)
	cal	17,164(13)
	lil	3,._ctag
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	l	14,4604(13)
	.globl	C.loc
	bl	C.loc
	cal	15,12032(21)
	st	14,0(15)
	lil	14,4
	cal	15,7225(13)
	l	16,3564(13)
	cal	17,164(13)
	lil	3,._cprot
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	l	14,4588(13)
	.globl	C.loc
	bl	C.loc
	cal	15,12064(21)
	st	14,0(15)
	lil	14,4
	cal	15,7229(13)
	l	16,3560(13)
	cal	17,164(13)
	lil	3,._cmplock
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	l	14,4596(13)
	.globl	C.loc
	bl	C.loc
	cal	15,12096(21)
	st	14,0(15)
	lil	14,8
	cal	15,7233(13)
	l	16,3556(13)
	cal	17,164(13)
	lil	3,._csched
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7241(13)
	l	16,3552(13)
	cal	17,164(13)
	lil	3,._cblock
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7246(13)
	l	16,3544(13)
	cal	17,164(13)
	lil	3,._cretfr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,2
	cal	15,7253(13)
	l	16,3540(13)
	cal	17,164(13)
	lil	3,._cgo
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,7
	cal	15,7255(13)
	l	16,3536(13)
	cal	17,164(13)
	lil	3,._ctagbody
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,8
	cal	15,7262(13)
	l	16,3532(13)
	cal	17,164(13)
	lil	3,._cffuncall
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,15
	cal	15,7270(13)
	l	16,3528(13)
	cal	17,164(13)
	lil	3,._cwithit
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,18
	cal	15,7285(13)
	l	16,3520(13)
	cal	17,164(13)
	lil	3,._cwithnoit
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7303(13)
	l	16,3512(13)
	cal	17,164(13)
	lil	3,._llcpnlist
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7308(13)
	l	16,3508(13)
	cal	17,164(13)
	lil	3,._llcperwna
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7314(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	14,1756(13)
	.globl	C.loc
	bl	C.loc
	cal	15,12448(21)
	st	14,0(15)
	lil	14,5
	cal	15,7319(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	14,1712(13)
	.globl	C.loc
	bl	C.loc
	cal	15,12480(21)
	st	14,0(15)
	lil	14,7
	cal	15,7324(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	cal	14,1216(13)
	.globl	C.loc
	bl	C.loc
	cal	15,12512(21)
	st	14,0(15)
	cal	3,224(21)
	st	3,1452(13)
	lil	14,1
	cal	15,7331(13)
	cal	16,164(13)
	.globl	C.inicst
	bl	C.inicst
	oril	15,14,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.1
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.1:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	cal	3,32(21)
	st	3,0(14)
	st	15,16(14)
	st	21,1452(13)
	lil	14,4
	cal	15,7332(13)
	l	16,3504(13)
	cal	17,164(13)
	lil	3,._fibd
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7336(13)
	l	16,3500(13)
	cal	17,164(13)
	lil	3,._fibl
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7340(13)
	l	16,3496(13)
	cal	17,164(13)
	lil	3,._fibml
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._schedule,6
	.globl	C.schedule
C.schedule:	mflr	0
	stu	0,-4(1)
	.globl	schedule
schedule:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fsp.2
	b	errfs
.fsp.2:	l	3,0(14)
	stu	3,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4584(13)
	stu	3,-4(1)
	st	1,1756(13)
	cal	3,11488(21)
	st	3,1744(13)
	b	evexpg
	.set	._suspend,1
	.globl	C.suspend
C.suspend:	mflr	0
	stu	0,-4(1)
	.globl	suspend
suspend:	l	3,1212(13)
	st	3,1868(13)
	lil	3,0
	st	3,1212(13)
	oril	14,21,0
	b	sus00
sus000:	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.3
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.3:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	st	15,4(6)
	oril	15,6,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.4
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.4:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
sus00:	l	16,1756(13)
	oril	15,21,0
	b	sus02
sus01:	l	17,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.5
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.5:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	st	15,4(6)
	oril	15,6,0
sus02:	oril	17,1,0
	cmpl	0,17,16
	bne	sus01
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.6
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.6:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	oril	15,21,0
	l	17,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1756(13)
	ai	1,1,4
	l	4,4632(13)
	cmpl	0,17,4
	beq	susb0
	l	4,4612(13)
	cmpl	0,17,4
	beq	susb1
	l	4,4608(13)
	cmpl	0,17,4
	beq	susb2
	l	4,4604(13)
	cmpl	0,17,4
	beq	susb3
	l	4,4600(13)
	cmpl	0,17,4
	beq	susb4
	l	4,4596(13)
	cmpl	0,17,4
	beq	susb5
	l	4,4592(13)
	cmpl	0,17,4
	beq	susb6
	l	4,4588(13)
	cmpl	0,17,4
	beq	susb7
	l	4,4584(13)
	cmpl	0,17,4
	beq	susb8
	l	4,4580(13)
	cmpl	0,17,4
	beq	susb9
	l	4,4576(13)
	cmpl	0,17,4
	beq	susb10
	lil	3,13
	cal	4,7345(13)
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
susb0:	b	erres
susb1:	l	15,8(1)
	.globl	C.sus100
	bl	C.sus100
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.7
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.7:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
	st	14,1728(13)
	l	17,12(1)
	ai	4,17,4
	andil.	17,4,0xFFFF
	lil	16,0
	oril	15,21,0
susb11:	sli	3,16,2
	lx	14,1,3
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.8
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.8:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	15,4(6)
	oril	15,6,0
	ai	4,16,1
	andil.	16,4,0xFFFF
susb12:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bgt	susb11
	lil	17,0
	l	14,1728(13)
	l	16,3636(13)
	l	3,1756(13)
	stu	3,-4(1)
	b	unbinp1
	.globl	susb13
susb13:	l	17,4612(13)
	b	sus000
	.globl	C.sus100
C.sus100:	mflr	0
	stu	0,-4(1)
sus100:	cmp	0,15,22
	blt	sus101
	l	3,0(15)
	stu	3,-4(1)
	l	15,4(15)
	.globl	C.sus100
	bl	C.sus100
	l	4,0(1)
	st	15,0(1)
	oril	15,4,0
	.globl	C.sus100
	bl	C.sus100
	l	16,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.9
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.9:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	16,4(6)
	oril	15,6,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
sus101:	cmpl	0,15,21
	beq	sus102
	l	15,0(15)
sus102:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
susb2:	l	16,0(1)
	ai	1,1,4
	cmpli	0,16,0
	beq	sus23
	lhz	17,24(16)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.10
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.10:	l	3,4(6)
	st	3,1184(13)
	st	17,0(6)
	st	15,4(6)
	oril	15,6,0
	l	17,0(1)
	ai	1,1,4
	sth	17,24(16)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.11
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.11:	l	3,4(6)
	st	3,1184(13)
	l	3,8(16)
	st	3,0(6)
	st	15,4(6)
	oril	15,6,0
	l	3,0(1)
	st	3,8(16)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.12
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.12:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	15,4(6)
	oril	15,6,0
	b	susb2
sus23:	l	17,4608(13)
	b	sus000
susb3:susb5:susb6:susb7:susb9:susb10:	l	15,0(1)
	ai	1,1,4
	b	sus000
susb4:	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.13
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.13:	l	3,4(6)
	st	3,1184(13)
	st	16,0(6)
	st	15,4(6)
	oril	15,6,0
	b	sus000
susb8:	l	16,0(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4584(13)
	stu	3,-4(1)
	st	1,1756(13)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.14
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.14:	l	3,4(6)
	st	3,1184(13)
	st	14,0(6)
	st	21,4(6)
	oril	14,6,0
	oril	15,14,0
	oril	14,16,0
	l	3,1868(13)
	st	3,1212(13)
	b	apply
	.set	._resume,2
	.globl	C.resume
C.resume:	mflr	0
	stu	0,-4(1)
	.globl	resume
resume:	l	3,1212(13)
	st	3,1868(13)
	lil	3,0
	st	3,1212(13)
	cmpl	0,14,21
	beq	resso
	.globl	restes
restes:	l	1,1756(13)
	l	16,0(1)
	l	4,4584(13)
	cmpl	0,16,4
	beq	resfin
	l	16,3628(13)
	b	unbinp
res00:	l	15,0(14)
	l	14,4(14)
	l	16,0(15)
	l	15,4(15)
	l	3,4608(13)
	cmpl	0,3,16
	beq	res20
	l	3,4600(13)
	cmpl	0,3,16
	beq	res40
	l	3,4612(13)
	cmpl	0,3,16
	bne	resn1
res11:	cmpl	0,15,21
	beq	res12
	l	3,0(15)
	stu	3,-4(1)
	l	15,4(15)
	b	res11
res12:	l	3,0(1)
	st	3,1712(13)
	l	15,0(14)
	l	3,4(14)
	stu	3,-4(1)
	l	14,12(1)
	.globl	C.deset
	bl	C.deset
	l	14,0(1)
	ai	1,1,4
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4612(13)
	stu	3,-4(1)
	st	1,1756(13)
	b	resfin
res20:	lil	3,0
	stu	3,-4(1)
res21:	cmpl	0,15,21
	beq	res22
	l	16,0(15)
	l	15,4(15)
	l	3,8(16)
	stu	3,-4(1)
	l	3,0(15)
	st	3,8(16)
	l	15,4(15)
	lhz	17,24(16)
	stu	17,-4(1)
	l	17,0(15)
	sth	17,24(16)
	l	15,4(15)
	stu	16,-4(1)
	b	res21
res22:	l	3,1756(13)
	stu	3,-4(1)
	l	3,4608(13)
	stu	3,-4(1)
	st	1,1756(13)
	b	resfin
res40:	l	3,4(15)
	stu	3,-4(1)
	l	15,0(15)
resn1:	stu	15,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	stu	16,-4(1)
	st	1,1756(13)
resfin:	l	15,0(14)
	l	14,4(14)
res14:	cmpl	0,15,21
	beq	res15
	l	3,0(15)
	stu	3,-4(1)
	l	15,4(15)
	b	res14
res15:	l	3,4(14)
	cmpl	0,3,21
	bne	res00
resso:	oril	15,21,0
	oril	16,21,0
	oril	17,21,0
	l	3,1868(13)
	st	3,1212(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._tagbody,6
	.globl	C.tagbody
C.tagbody:	mflr	0
	stu	0,-4(1)
	.globl	tagbody
tagbody:	cmp	0,14,22
	blt	tagbdr
	oril	16,14,0
	lil	17,0
tagbdr2:	l	15,0(16)
	l	16,4(16)
	cmp	0,15,22
	bge	tagbdr3
	stu	16,-4(1)
	stu	15,-4(1)
	ai	4,17,1
	andil.	17,4,0xFFFF
tagbdr3:	cmp	0,16,22
	bge	tagbdr2
	stu	17,-4(1)
	lil	15,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.15
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.15:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	stu	15,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4580(13)
	stu	3,-4(1)
	st	1,1756(13)
	l	3,1756(13)
	st	3,4(15)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.16
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.16:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	l	3,1712(13)
	st	3,4(6)
	st	6,1712(13)
	oril	15,14,0
	b	tagbd4
tagbd2:	l	14,0(15)
	cmp	0,14,22
	blt	tagbd3
	stu	15,-4(1)
	.globl	C.evala1
	bl	C.evala1
	l	15,0(1)
	ai	1,1,4
tagbd3:	l	15,4(15)
tagbd4:	cmp	0,15,22
	bge	tagbd2
tagbdr:	oril	14,21,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._go,6
	.globl	C.go
C.go:	mflr	0
	stu	0,-4(1)
	.globl	go
go:	l	14,0(14)
llgof1:	l	17,1712(13)
	b	llgof6
llgof2:	l	16,0(17)
	l	3,0(16)
	cmpli	0,3,0
	bne	llgof5
	l	15,4(16)
	cmpl	0,15,21
	beq	llgof5
	stu	17,-4(1)
	stu	15,-4(1)
	ai	15,15,12
	l	17,0(15)
	ai	15,15,4
	b	llgof4
llgof3:	l	16,0(15)
	cmpl	0,16,14
	beq	llgof7
	ai	15,15,8
llgof4:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	llgof3
	lil	17,0
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
llgof5:	l	17,4(17)
llgof6:	cmp	0,17,22
	bge	llgof2
	cal	15,11616(21)
	b	errnab
llgof7:	ai	15,15,4
	l	15,0(15)
	l	14,0(1)
	.globl	llgof8
llgof8:	l	17,1756(13)
	oril	1,17,0
	cmpl	0,17,14
	beq	llgof9
	l	16,3616(13)
	b	unbinp
llgof9:	l	4,1104(13)
	cmpl	0,15,4
	blt	.fsp.17
	l	4,168(13)
	cmpl	0,15,4
	blt	tagbd4
.fsp.17:	mtlr	15
	br	
	.set	._block,6
	.globl	C.block
C.block:	mflr	0
	stu	0,-4(1)
	.globl	block
block:	l	15,0(14)
	cmpl	0,15,21
	blt	blckerr
	cmpl	0,15,22
	bge	blckerr
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.18
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.18:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	oril	16,15,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.19
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.19:	l	3,4(6)
	st	3,1184(13)
	lil	3,1
	st	3,0(6)
	st	15,4(6)
	oril	15,6,0
	stu	16,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4576(13)
	stu	3,-4(1)
	st	1,1756(13)
	l	3,1756(13)
	st	3,4(16)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.20
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.20:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	l	3,1712(13)
	st	3,4(6)
	st	6,1712(13)
	cal	3,11648(21)
	st	3,1744(13)
	b	evexpg
blckerr:	oril	14,15,0
	cal	15,11648(21)
	b	errsym
	.set	._llret,6
	.globl	C.llret
C.llret:	mflr	0
	stu	0,-4(1)
	.globl	llret
llret:	oril	15,21,0
	stu	15,-4(1)
	cal	3,11680(21)
	st	3,1744(13)
	b	llretf1
	.set	._llretf,6
	.globl	C.llretf
C.llretf:	mflr	0
	stu	0,-4(1)
	.globl	llretf
llretf:	l	3,0(14)
	stu	3,-4(1)
	l	14,4(14)
	cal	3,11712(21)
	st	3,1744(13)
llretf1:	.globl	C.evprogn
	bl	C.evprogn
	l	15,0(1)
	ai	1,1,4
llretg:	l	17,1712(13)
	b	llretf4
llretf2:	l	16,0(17)
	l	3,0(16)
	cmpli	0,3,1
	bne	llretf3
	l	16,4(16)
	l	3,0(16)
	cmpl	0,3,15
	beq	llretf6
llretf3:	l	17,4(17)
llretf4:	cmp	0,17,22
	bge	llretf2
	oril	14,15,0
	cal	15,11712(21)
	b	errnab
llretf6:	l	3,4(16)
	cmpl	0,3,21
	bne	llretr2
	oril	14,15,0
	cal	15,11712(21)
	b	errxia
llretr2:	l	15,4(16)
	.globl	llretr3
llretr3:	l	17,1756(13)
	oril	1,17,0
	l	16,0(1)
	l	4,4576(13)
	cmpl	0,16,4
	bne	llretr4
	cmpl	0,15,17
	beq	llretr9
llretr4:	l	16,3600(13)
	b	unbinp
llretr9:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cbind0,1
	.globl	C.cbind0
C.cbind0:	mflr	0
	stu	0,-4(1)
	.globl	cbind0
cbind0:	l	3,1216(13)
	cmpli	0,3,0
	beq	.fsp.21
	.globl	C.ithard
	bl	C.ithard
.fsp.21:	l	3,4(1)
	l	4,4612(13)
	cmpl	0,3,4
	bne	cbind0g
	l	3,16(1)
	cmpl	0,3,17
	bne	cbind0g
	st	21,1712(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
cbind0g:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fsp.22
	b	errfs
.fsp.22:	l	15,0(1)
	ai	1,1,4
	lil	3,0
	stu	3,-4(1)
	stu	21,-4(1)
	stu	17,-4(1)
	l	3,1712(13)
	stu	3,-4(1)
	st	21,1712(13)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4612(13)
	stu	3,-4(1)
	st	1,1756(13)
	mtlr	15
	br	
	.set	._cbind1,1
	.globl	C.cbind1
C.cbind1:	mflr	0
	stu	0,-4(1)
	.globl	cbind1
cbind1:	l	3,1216(13)
	cmpli	0,3,0
	beq	.fsp.23
	.globl	C.ithard
	bl	C.ithard
.fsp.23:	l	3,4(1)
	l	4,4612(13)
	cmpl	0,3,4
	bne	cbind1g
	l	3,16(1)
	cmpl	0,3,17
	bne	cbind1g
	l	15,0(16)
	st	14,0(15)
	st	21,1712(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
cbind1g:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fsp.24
	b	errfs
.fsp.24:	l	15,0(1)
	lil	3,1
	stu	3,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	l	17,0(16)
	l	3,0(17)
	st	3,12(1)
	st	14,0(17)
	l	3,1712(13)
	stu	3,-4(1)
	st	21,1712(13)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4612(13)
	stu	3,-4(1)
	st	1,1756(13)
	mtlr	15
	br	
	.set	._cbind2,1
	.globl	C.cbind2
C.cbind2:	mflr	0
	stu	0,-4(1)
	.globl	cbind2
cbind2:	l	3,1216(13)
	cmpli	0,3,0
	beq	.fsp.25
	.globl	C.ithard
	bl	C.ithard
.fsp.25:	l	3,4(1)
	l	4,4612(13)
	cmpl	0,3,4
	bne	cbind2g
	l	3,16(1)
	cmpl	0,3,17
	bne	cbind2g
	l	17,0(16)
	st	14,0(17)
	l	17,4(16)
	l	16,0(17)
	st	15,0(16)
	st	21,1712(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
cbind2g:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fsp.26
	b	errfs
.fsp.26:	l	3,0(1)
	st	3,1732(13)
	ai	1,1,-4
	lil	3,2
	stu	3,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	l	17,0(16)
	l	3,0(17)
	st	3,16(1)
	st	14,0(17)
	l	17,4(16)
	l	17,0(17)
	l	3,0(17)
	st	3,12(1)
	st	15,0(17)
	l	3,1712(13)
	stu	3,-4(1)
	st	21,1712(13)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4612(13)
	stu	3,-4(1)
	st	1,1756(13)
	l	0,1732(13)
	mtlr	0
	br	
	.set	._cbind3,1
	.globl	C.cbind3
C.cbind3:	mflr	0
	stu	0,-4(1)
	.globl	cbind3
cbind3:	l	3,1216(13)
	cmpli	0,3,0
	beq	.fsp.27
	.globl	C.ithard
	bl	C.ithard
.fsp.27:	st	16,1736(13)
	l	3,0(1)
	st	3,1732(13)
	ai	1,1,4
	l	3,0(1)
	st	3,1740(13)
	ai	1,1,4
	l	3,0(1)
	l	4,4612(13)
	cmpl	0,3,4
	bne	cbind3g
	l	3,12(1)
	l	4,1740(13)
	cmpl	0,3,4
	bne	cbind3g
	l	16,0(17)
	st	14,0(16)
	l	17,4(17)
	l	16,0(17)
	st	15,0(16)
	l	17,4(17)
	l	17,0(17)
	l	16,1736(13)
	st	16,0(17)
	st	21,1712(13)
	l	0,1732(13)
	mtlr	0
	br	
cbind3g:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fsp.28
	b	errfs
.fsp.28:	ai	1,1,-12
	st	17,1728(13)
	l	16,0(17)
	l	3,0(16)
	st	3,8(1)
	st	14,0(16)
	l	17,4(17)
	l	16,0(17)
	l	3,0(16)
	st	3,4(1)
	st	15,0(16)
	l	17,4(17)
	l	17,0(17)
	l	3,0(17)
	st	3,0(1)
	l	16,1736(13)
	st	16,0(17)
	lil	3,3
	stu	3,-4(1)
	l	3,1728(13)
	stu	3,-4(1)
	l	3,1740(13)
	stu	3,-4(1)
	l	3,1712(13)
	stu	3,-4(1)
	st	21,1712(13)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4612(13)
	stu	3,-4(1)
	st	1,1756(13)
	l	0,1732(13)
	mtlr	0
	br	
	.set	._cbindn,1
	.globl	C.cbindn
C.cbindn:	mflr	0
	stu	0,-4(1)
	.globl	cbindn
cbindn:	l	3,1216(13)
	cmpli	0,3,0
	beq	.fsp.29
	.globl	C.ithard
	bl	C.ithard
.fsp.29:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fsp.30
	b	errfs
.fsp.30:	st	21,1752(13)
cbindnc:	l	3,0(1)
	st	3,1748(13)
	ai	1,1,4
cbindnn:	st	16,1732(13)
	st	17,1740(13)
	st	15,1728(13)
	st	15,1744(13)
	b	evbndext
	.set	._cbindl,1
	.globl	C.cbindl
C.cbindl:	mflr	0
	stu	0,-4(1)
	.globl	cbindl
cbindl:	l	3,1216(13)
	cmpli	0,3,0
	beq	.fsp.31
	.globl	C.ithard
	bl	C.ithard
.fsp.31:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fsp.32
	b	errfs
.fsp.32:	l	3,1712(13)
	st	3,1752(13)
	b	cbindnc
	.set	._cbinds,1
	.globl	C.cbinds
C.cbinds:	mflr	0
	stu	0,-4(1)
	.globl	cbinds
cbinds:	l	3,1216(13)
	cmpli	0,3,0
	beq	.fsp.33
	.globl	C.ithard
	bl	C.ithard
.fsp.33:	l	3,0(1)
	st	3,1748(13)
	ai	1,1,4
	st	21,1752(13)
	st	16,1732(13)
	st	15,1728(13)
	st	15,1744(13)
	b	bndtrbex
	.set	._ctag,1
	.globl	C.ctag
C.ctag:	mflr	0
	stu	0,-4(1)
	.globl	ctag
ctag:	l	15,0(1)
	ai	1,1,4
	stu	14,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4604(13)
	stu	3,-4(1)
	st	1,1756(13)
	mtlr	15
	br	
	.set	._cprot,1
	.globl	C.cprot
C.cprot:	mflr	0
	stu	0,-4(1)
	.globl	cprot
cprot:	b	sysprot
	.set	._cmplock,1
	.globl	C.cmplock
C.cmplock:	mflr	0
	stu	0,-4(1)
	.globl	cmplock
cmplock:	l	15,0(1)
	ai	1,1,4
	stu	14,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4596(13)
	stu	3,-4(1)
	st	1,1756(13)
	mtlr	15
	br	
	.set	._csched,1
	.globl	C.csched
C.csched:	mflr	0
	stu	0,-4(1)
	.globl	csched
csched:	l	3,1068(13)
	cmpl	0,1,3
	bge	.fsp.34
	b	errfs
.fsp.34:	l	15,0(1)
	ai	1,1,4
	stu	14,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4584(13)
	stu	3,-4(1)
	st	1,1756(13)
	mtlr	15
	br	
	.set	._cblock,1
	.globl	C.cblock
C.cblock:	mflr	0
	stu	0,-4(1)
	.globl	cblock
cblock:	oril	15,14,0
	l	14,0(1)
	ai	1,1,4
	cmpl	0,15,21
	blt	blckerr
	cmpl	0,15,22
	bge	blckerr
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.35
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.35:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	oril	16,15,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.36
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.36:	l	3,4(6)
	st	3,1184(13)
	lil	3,1
	st	3,0(6)
	st	15,4(6)
	oril	15,6,0
	stu	16,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4576(13)
	stu	3,-4(1)
	st	1,1756(13)
	l	3,1756(13)
	st	3,4(16)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.37
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.37:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	l	3,1712(13)
	st	3,4(6)
	st	6,1712(13)
	mtlr	14
	br	
	.set	._cexit,1
	.globl	C.cexit
C.cexit:	mflr	0
	stu	0,-4(1)
	.globl	cexit
cexit:	b	findtag
	.set	._cretfr,1
	.globl	C.cretfr
C.cretfr:	mflr	0
	stu	0,-4(1)
	.globl	cretfr
cretfr:	b	llretg
	.set	._cgo,1
	.globl	C.cgo
C.cgo:	mflr	0
	stu	0,-4(1)
	.globl	cgo
cgo:	b	llgof1
	.set	._ctagbody,1
	.globl	C.ctagbody
C.ctagbody:	mflr	0
	stu	0,-4(1)
	.globl	ctagbody
ctagbody:	l	14,0(1)
	ai	1,1,4
	lil	15,0
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.38
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.38:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	21,4(6)
	oril	15,6,0
	stu	15,-4(1)
	l	3,1756(13)
	stu	3,-4(1)
	l	3,4580(13)
	stu	3,-4(1)
	st	1,1756(13)
	l	3,1756(13)
	st	3,4(15)
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.39
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.39:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	l	3,1712(13)
	st	3,4(6)
	st	6,1712(13)
	mtlr	14
	br	
	.set	._cffuncall,1
	.globl	C.cffuncall
C.cffuncall:	mflr	0
	stu	0,-4(1)
	.globl	cffuncall
cffuncall:	b	ffuncall
	.set	._cwithit,1
	.globl	C.cwithit
C.cwithit:	mflr	0
	stu	0,-4(1)
	.globl	cwithit
cwithit:	l	14,0(1)
	ai	1,1,4
	l	3,1212(13)
	stu	3,-4(1)
	l	16,3524(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1212(13)
	ai	1,1,4
	mtlr	16
	br	
	.globl	cwithit1
cwithit1:	lil	3,1
	st	3,1212(13)
	mtlr	14
	br	
	.set	._cwithnoit,1
	.globl	C.cwithnoit
C.cwithnoit:	mflr	0
	stu	0,-4(1)
	.globl	cwithnoit
cwithnoit:	l	14,0(1)
	ai	1,1,4
	l	3,1212(13)
	stu	3,-4(1)
	l	16,3516(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,0(1)
	st	3,1212(13)
	ai	1,1,4
	mtlr	16
	br	
	.globl	cwithno1
cwithno1:	lil	3,0
	st	3,1212(13)
	mtlr	14
	br	
	.set	._llcpnlist,1
	.globl	C.llcpnlist
C.llcpnlist:	mflr	0
	stu	0,-4(1)
	.globl	llcpnlist
llcpnlist:	oril	14,21,0
	cmpli	0,17,0
	bne	llcpnl1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
llcpnl1:	l	16,0(1)
	ai	1,1,4
	b	llcpnl3
llcpnl2:	l	15,0(1)
	ai	1,1,4
	l	6,1184(13)
	cmpl	0,6,21
	bne	.fsp.40
	.globl	C.gccons
	bl	C.gccons
	l	6,1184(13)
.fsp.40:	l	3,4(6)
	st	3,1184(13)
	st	15,0(6)
	st	14,4(6)
	oril	14,6,0
llcpnl3:	exts	17,17
	si	17,17,1
	cmpi	0,17,0
	bge	llcpnl2
	lil	17,0
	mtlr	16
	br	
	.set	._llcperwna,3
	.globl	C.llcperwna
C.llcperwna:	mflr	0
	stu	0,-4(1)
	.globl	llcperwna
llcperwna:	oril	16,14,0
	oril	14,15,0
	oril	15,16,0
	b	errwna
	.set	._fibd,2
	.globl	C.fibd
C.fibd:	mflr	0
	stu	0,-4(1)
	.globl	fibd
fibd:	cal	16,12544(21)
	l	16,16(16)
	cal	17,12576(21)
	.globl	C.cbind1
	bl	C.cbind1
	cmpli	0,14,1
	bne	fibd2
	lil	14,1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fibd2:	cmpli	0,14,2
	bne	fibd3
	lil	14,1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fibd3:	si	4,14,1
	andil.	14,4,0xFFFF
	.globl	C.fibd
	bl	C.fibd
	stu	14,-4(1)
	cal	14,12544(21)
	l	14,0(14)
	si	4,14,2
	andil.	14,4,0xFFFF
	.globl	C.fibd
	bl	C.fibd
	l	15,0(1)
	ai	1,1,4
	a	4,15,14
	andil.	14,4,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._fibl,2
	.globl	C.fibl
C.fibl:	mflr	0
	stu	0,-4(1)
	.globl	fibl
fibl:	stu	14,-4(1)
	cmpli	0,14,1
	bne	fibl2
	lil	14,1
	b	fibl9
fibl2:	cmpli	0,14,2
	bne	fibl3
	lil	14,1
	b	fibl9
fibl3:	si	4,14,1
	andil.	14,4,0xFFFF
	.globl	C.fibl
	bl	C.fibl
	stu	14,-4(1)
	l	14,4(1)
	si	4,14,2
	andil.	14,4,0xFFFF
	.globl	C.fibl
	bl	C.fibl
	l	15,0(1)
	ai	1,1,4
	a	4,15,14
	andil.	14,4,0xFFFF
fibl9:	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._fibml,2
	.globl	C.fibml
C.fibml:	mflr	0
	stu	0,-4(1)
	.globl	fibml
fibml:	exts	3,14
	cmpi	0,3,2
	ble	fibmlr
	stu	14,-4(1)
	si	4,14,1
	andil.	14,4,0xFFFF
	.globl	C.fibml
	bl	C.fibml
	l	4,0(1)
	st	14,0(1)
	oril	14,4,0
	si	4,14,2
	andil.	14,4,0xFFFF
	.globl	C.fibml
	bl	C.fibml
	l	15,0(1)
	ai	1,1,4
	a	4,15,14
	andil.	14,4,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
fibmlr:	lil	14,1
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
