	.csect	lelisp_txt[PR]
	.globl	inisymb
	.globl	errnla
	.globl	ini_cad
	.globl	C.ini_cad
C.ini_cad:	mflr	0
	stu	0,-4(1)
ini_cad:	lil	14,3
	cal	15,7591(13)
	l	16,3260(13)
	cal	17,164(13)
	lil	3,._fcar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,3
	cal	15,7594(13)
	l	16,3256(13)
	cal	17,164(13)
	lil	3,._fcdr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7597(13)
	l	16,3252(13)
	cal	17,164(13)
	lil	3,._ca2r
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7601(13)
	l	16,3248(13)
	cal	17,164(13)
	lil	3,._cadr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7605(13)
	l	16,3244(13)
	cal	17,164(13)
	lil	3,._cdar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,4
	cal	15,7609(13)
	l	16,3240(13)
	cal	17,164(13)
	lil	3,._cddr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7613(13)
	l	16,3236(13)
	cal	17,164(13)
	lil	3,._caaar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7618(13)
	l	16,3232(13)
	cal	17,164(13)
	lil	3,._caadr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7623(13)
	l	16,3228(13)
	cal	17,164(13)
	lil	3,._cadar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7628(13)
	l	16,3224(13)
	cal	17,164(13)
	lil	3,._caddr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7633(13)
	l	16,3220(13)
	cal	17,164(13)
	lil	3,._cdaar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7638(13)
	l	16,3216(13)
	cal	17,164(13)
	lil	3,._cdadr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7643(13)
	l	16,3212(13)
	cal	17,164(13)
	lil	3,._cddar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,5
	cal	15,7648(13)
	l	16,3208(13)
	cal	17,164(13)
	lil	3,._cdddr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7653(13)
	l	16,3204(13)
	cal	17,164(13)
	lil	3,._caaaar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7659(13)
	l	16,3200(13)
	cal	17,164(13)
	lil	3,._caaadr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7665(13)
	l	16,3196(13)
	cal	17,164(13)
	lil	3,._caadar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7671(13)
	l	16,3192(13)
	cal	17,164(13)
	lil	3,._caaddr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7677(13)
	l	16,3188(13)
	cal	17,164(13)
	lil	3,._cadaar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7683(13)
	l	16,3184(13)
	cal	17,164(13)
	lil	3,._cadadr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7689(13)
	l	16,3180(13)
	cal	17,164(13)
	lil	3,._caddar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7695(13)
	l	16,3176(13)
	cal	17,164(13)
	lil	3,._cadddr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7701(13)
	l	16,3172(13)
	cal	17,164(13)
	lil	3,._cdaaar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7707(13)
	l	16,3168(13)
	cal	17,164(13)
	lil	3,._cdaadr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7713(13)
	l	16,3164(13)
	cal	17,164(13)
	lil	3,._cdadar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7719(13)
	l	16,3160(13)
	cal	17,164(13)
	lil	3,._cdaddr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7725(13)
	l	16,3156(13)
	cal	17,164(13)
	lil	3,._cddaar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7731(13)
	l	16,3152(13)
	cal	17,164(13)
	lil	3,._cddadr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7737(13)
	l	16,3148(13)
	cal	17,164(13)
	lil	3,._cdddar
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	lil	14,6
	cal	15,7743(13)
	l	16,3144(13)
	cal	17,164(13)
	lil	3,._cddddr
	stu	3,-4(1)
	.globl	C.inisymb
	bl	C.inisymb
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
carerr:	cmpl	0,14,21
	beq	careret
	oril	14,16,0
	b	errnla
careret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._fcar,2
	.globl	C.fcar
C.fcar:	mflr	0
	stu	0,-4(1)
	.globl	fcar
fcar:	cal	15,13952(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._fcdr,2
	.globl	C.fcdr
C.fcdr:	mflr	0
	stu	0,-4(1)
	.globl	fcdr
fcdr:	cal	15,13984(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._ca2r,2
	.globl	C.ca2r
C.ca2r:	mflr	0
	stu	0,-4(1)
	.globl	ca2r
ca2r:	cal	15,14016(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cadr,2
	.globl	C.cadr
C.cadr:	mflr	0
	stu	0,-4(1)
	.globl	cadr
cadr:	cal	15,14048(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cdar,2
	.globl	C.cdar
C.cdar:	mflr	0
	stu	0,-4(1)
	.globl	cdar
cdar:	cal	15,14080(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cddr,2
	.globl	C.cddr
C.cddr:	mflr	0
	stu	0,-4(1)
	.globl	cddr
cddr:	cal	15,14112(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._caaar,2
	.globl	C.caaar
C.caaar:	mflr	0
	stu	0,-4(1)
	.globl	caaar
caaar:	cal	15,14144(21)
	oril	16,14,0
caaar1:	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._caadr,2
	.globl	C.caadr
C.caadr:	mflr	0
	stu	0,-4(1)
	.globl	caadr
caadr:	cal	15,14176(21)
	oril	16,14,0
caadr1:	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cadar,2
	.globl	C.cadar
C.cadar:	mflr	0
	stu	0,-4(1)
	.globl	cadar
cadar:	cal	15,14208(21)
	oril	16,14,0
cadar1:	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._caddr,2
	.globl	C.caddr
C.caddr:	mflr	0
	stu	0,-4(1)
	.globl	caddr
caddr:	cal	15,14240(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cdaar,2
	.globl	C.cdaar
C.cdaar:	mflr	0
	stu	0,-4(1)
	.globl	cdaar
cdaar:	cal	15,14272(21)
	oril	16,14,0
cdaar1:	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cdadr,2
	.globl	C.cdadr
C.cdadr:	mflr	0
	stu	0,-4(1)
	.globl	cdadr
cdadr:	cal	15,14304(21)
	oril	16,14,0
cdadr1:	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cddar,2
	.globl	C.cddar
C.cddar:	mflr	0
	stu	0,-4(1)
	.globl	cddar
cddar:	cal	15,14336(21)
	oril	16,14,0
cddar1:	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cdddr,2
	.globl	C.cdddr
C.cdddr:	mflr	0
	stu	0,-4(1)
	.globl	cdddr
cdddr:	cal	15,14368(21)
	oril	16,14,0
cdddr1:	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._caaaar,2
	.globl	C.caaaar
C.caaaar:	mflr	0
	stu	0,-4(1)
	.globl	caaaar
caaaar:	cal	15,14400(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	b	caaar1
	.set	._caaadr,2
	.globl	C.caaadr
C.caaadr:	mflr	0
	stu	0,-4(1)
	.globl	caaadr
caaadr:	cal	15,14432(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	b	caaar1
	.set	._caadar,2
	.globl	C.caadar
C.caadar:	mflr	0
	stu	0,-4(1)
	.globl	caadar
caadar:	cal	15,14464(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	b	caadr1
	.set	._caaddr,2
	.globl	C.caaddr
C.caaddr:	mflr	0
	stu	0,-4(1)
	.globl	caaddr
caaddr:	cal	15,14496(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	b	caadr1
	.set	._cadaar,2
	.globl	C.cadaar
C.cadaar:	mflr	0
	stu	0,-4(1)
	.globl	cadaar
cadaar:	cal	15,14528(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	b	cadar1
	.set	._cadadr,2
	.globl	C.cadadr
C.cadadr:	mflr	0
	stu	0,-4(1)
	.globl	cadadr
cadadr:	cal	15,14560(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	b	cadar1
	.set	._caddar,2
	.globl	C.caddar
C.caddar:	mflr	0
	stu	0,-4(1)
	.globl	caddar
caddar:	cal	15,14592(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cadddr,2
	.globl	C.cadddr
C.cadddr:	mflr	0
	stu	0,-4(1)
	.globl	cadddr
cadddr:	cal	15,14624(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.set	._cdaaar,2
	.globl	C.cdaaar
C.cdaaar:	mflr	0
	stu	0,-4(1)
	.globl	cdaaar
cdaaar:	cal	15,14656(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	b	cdaar1
	.set	._cdaadr,2
	.globl	C.cdaadr
C.cdaadr:	mflr	0
	stu	0,-4(1)
	.globl	cdaadr
cdaadr:	cal	15,14688(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	b	cdaar1
	.set	._cdadar,2
	.globl	C.cdadar
C.cdadar:	mflr	0
	stu	0,-4(1)
	.globl	cdadar
cdadar:	cal	15,14720(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	b	cdadr1
	.set	._cdaddr,2
	.globl	C.cdaddr
C.cdaddr:	mflr	0
	stu	0,-4(1)
	.globl	cdaddr
cdaddr:	cal	15,14752(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	b	cdadr1
	.set	._cddaar,2
	.globl	C.cddaar
C.cddaar:	mflr	0
	stu	0,-4(1)
	.globl	cddaar
cddaar:	cal	15,14784(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	b	cddar1
	.set	._cddadr,2
	.globl	C.cddadr
C.cddadr:	mflr	0
	stu	0,-4(1)
	.globl	cddadr
cddadr:	cal	15,14816(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	b	cddar1
	.set	._cdddar,2
	.globl	C.cdddar
C.cdddar:	mflr	0
	stu	0,-4(1)
	.globl	cdddar
cdddar:	cal	15,14848(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,0(14)
	b	cdddr1
	.set	._cddddr,2
	.globl	C.cddddr
C.cddddr:	mflr	0
	stu	0,-4(1)
	.globl	cddddr
cddddr:	cal	15,14880(21)
	oril	16,14,0
	cmp	0,14,22
	blt	carerr
	l	14,4(14)
	b	cdddr1
