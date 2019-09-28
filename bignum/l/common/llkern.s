	file	"llkern.c"
	data	1
	text
	global	BnSetToZero
BnSetToZero:
	link.l	%fp,&F%1
	movm.l	&M%1,(4,%sp)
	fmovm	&FPM%1,(FPO%1,%sp)
	mov.l	(16,%fp),%d0
	lsl.l	&5,%d0
	mov.l	%d0,%d1
	lsr.l	&3,%d1
	mov.l	%d1,%d0
	mov.l	%d0,(%sp)
	mov.l	(12,%fp),%d0
	pea.l	([8.w,%fp],%d0.l*4)
	jsr	bzero
	add.l	&4,%sp
L%41:
	movm.l	(4,%sp),&M%1
	fmovm	(FPO%1,%sp),&FPM%1
	unlk	%fp
	rts
	set	S%1,0
	set	T%1,0
	set	F%1,-4
	set	FPO%1,4
	set	FPM%1,0x0000
	set	M%1,0x0000
	data	1
	text
	global	BnAssign
BnAssign:
	link.l	%fp,&F%2
	movm.l	&M%2,(4,%sp)
	fmovm	&FPM%2,(FPO%2,%sp)
	mov.l	(24,%fp),(%sp)
	mov.l	(20,%fp),%d0
	pea.l	([16.w,%fp],%d0.l*4)
	mov.l	(12,%fp),%d0
	pea.l	([8.w,%fp],%d0.l*4)
	jsr	BnnAssign
	add.l	&8,%sp
L%44:
	movm.l	(4,%sp),&M%2
	fmovm	(FPO%2,%sp),&FPM%2
	unlk	%fp
	rts
	set	S%2,0
	set	T%2,0
	set	F%2,-4
	set	FPO%2,4
	set	FPM%2,0x0000
	set	M%2,0x0000
	data	1
	text
	global	BnSetDigit
BnSetDigit:
	link.l	%fp,&F%3
	movm.l	&M%3,(4,%sp)
	fmovm	&FPM%3,(FPO%3,%sp)
	mov.l	(12,%fp),%d0
	mov.l	(16,%fp),([8.w,%fp],%d0.l*4)
L%46:
	movm.l	(4,%sp),&M%3
	fmovm	(FPO%3,%sp),&FPM%3
	unlk	%fp
	rts
	set	S%3,0
	set	T%3,0
	set	F%3,-4
	set	FPO%3,4
	set	FPM%3,0x0000
	set	M%3,0x0000
	data	1
	text
	global	BnGetDigit
BnGetDigit:
	link.l	%fp,&F%4
	movm.l	&M%4,(4,%sp)
	fmovm	&FPM%4,(FPO%4,%sp)
	mov.l	(12,%fp),%d0
	mov.l	([8.w,%fp],%d0.l*4),%d0
	bra	L%48
L%48:
	movm.l	(4,%sp),&M%4
	fmovm	(FPO%4,%sp),&FPM%4
	unlk	%fp
	rts
	set	S%4,0
	set	T%4,0
	set	F%4,-4
	set	FPO%4,4
	set	FPM%4,0x0000
	set	M%4,0x0000
	data	1
	text
	global	BnNumDigits
BnNumDigits:
	link.l	%fp,&F%5
	movm.l	&M%5,(4,%sp)
	fmovm	&FPM%5,(FPO%5,%sp)
	mov.l	(16,%fp),(%sp)
	mov.l	(12,%fp),%d0
	pea.l	([8.w,%fp],%d0.l*4)
	jsr	BnnNumDigits
	add.l	&4,%sp
	bra	L%50
L%50:
	movm.l	(4,%sp),&M%5
	fmovm	(FPO%5,%sp),&FPM%5
	unlk	%fp
	rts
	set	S%5,0
	set	T%5,0
	set	F%5,-4
	set	FPO%5,4
	set	FPM%5,0x0000
	set	M%5,0x0000
	data	1
	text
	global	BnNumLeadingZeroBitsInDigit
BnNumLeadingZeroBitsInDigit:
	link.l	%fp,&F%6
	movm.l	&M%6,(4,%sp)
	fmovm	&FPM%6,(FPO%6,%sp)
	mov.l	(12,%fp),%d0
	mov.l	([8.w,%fp],%d0.l*4),(%sp)
	jsr	BnnNumLeadingZeroBitsInDigit
	bra	L%52
L%52:
	movm.l	(4,%sp),&M%6
	fmovm	(FPO%6,%sp),&FPM%6
	unlk	%fp
	rts
	set	S%6,0
	set	T%6,0
	set	F%6,-4
	set	FPO%6,4
	set	FPM%6,0x0000
	set	M%6,0x0000
	data	1
	text
	global	BnDoesDigitFitInWord
BnDoesDigitFitInWord:
	link.l	%fp,&F%7
	movm.l	&M%7,(4,%sp)
	fmovm	&FPM%7,(FPO%7,%sp)
	mov.l	(12,%fp),%d0
	cmp.l	([8.w,%fp],%d0.l*4),&32768
	blo	L%_11
	mov.l	&0,%d0
	br	L%_12
L%_11:
	mov.l	&1,%d0
L%_12:
	bra	L%54
L%54:
	movm.l	(4,%sp),&M%7
	fmovm	(FPO%7,%sp),&FPM%7
	unlk	%fp
	rts
	set	S%7,0
	set	T%7,0
	set	F%7,-4
	set	FPO%7,4
	set	FPM%7,0x0000
	set	M%7,0x0000
	data	1
	text
	global	BnIsDigitZero
BnIsDigitZero:
	link.l	%fp,&F%8
	movm.l	&M%8,(4,%sp)
	fmovm	&FPM%8,(FPO%8,%sp)
	mov.l	(12,%fp),%d0
	tst.l	([8.w,%fp],%d0.l*4)
	bne	L%_13
	mov.l	&1,%d0
	br	L%_14
L%_13:
	mov.l	&0,%d0
L%_14:
	bra	L%56
L%56:
	movm.l	(4,%sp),&M%8
	fmovm	(FPO%8,%sp),&FPM%8
	unlk	%fp
	rts
	set	S%8,0
	set	T%8,0
	set	F%8,-4
	set	FPO%8,4
	set	FPM%8,0x0000
	set	M%8,0x0000
	data	1
	text
	global	BnIsDigitNormalized
BnIsDigitNormalized:
	link.l	%fp,&F%9
	movm.l	&M%9,(4,%sp)
	fmovm	&FPM%9,(FPO%9,%sp)
	mov.l	(12,%fp),%d0
	mov.l	([8.w,%fp],%d0.l*4),%d0
	and.l	&-2147483648,%d0
	beq	L%_15
	mov.l	&1,%d0
	br	L%_16
L%_15:
	mov.l	&0,%d0
L%_16:
	bra	L%58
L%58:
	movm.l	(4,%sp),&M%9
	fmovm	(FPO%9,%sp),&FPM%9
	unlk	%fp
	rts
	set	S%9,0
	set	T%9,0
	set	F%9,-4
	set	FPO%9,4
	set	FPM%9,0x0000
	set	M%9,0x0000
	data	1
	text
	global	BnIsDigitOdd
BnIsDigitOdd:
	link.l	%fp,&F%10
	movm.l	&M%10,(4,%sp)
	fmovm	&FPM%10,(FPO%10,%sp)
	mov.l	(12,%fp),%d0
	lea.l	([8.w,%fp],%d0.l*4),%a0
	btst	&0,(%a0,3.w)
	beq	L%_17
	mov.l	&1,%d0
	br	L%_18
L%_17:
	mov.l	&0,%d0
L%_18:
	bra	L%60
L%60:
	movm.l	(4,%sp),&M%10
	fmovm	(FPO%10,%sp),&FPM%10
	unlk	%fp
	rts
	set	S%10,0
	set	T%10,0
	set	F%10,-4
	set	FPO%10,4
	set	FPM%10,0x0000
	set	M%10,0x0000
	data	1
	text
	global	BnCompareDigits
BnCompareDigits:
	link.l	%fp,&F%11
	movm.l	&M%11,(4,%sp)
	fmovm	&FPM%11,(FPO%11,%sp)
	mov.l	(12,%fp),%d0
	mov.l	([8.w,%fp],%d0.l*4),%d0
	mov.l	(20,%fp),%d1
	cmp.l	%d0,([16.w,%fp],%d1.l*4)
	bls	L%_19
	mov.l	&1,%d0
	br	L%_20
L%_19:
	mov.l	(12,%fp),%d0
	mov.l	([8.w,%fp],%d0.l*4),%d0
	mov.l	(20,%fp),%d1
	cmp.l	%d0,([16.w,%fp],%d1.l*4)
	bne	L%_21
	mov.l	&0,%d0
	br	L%_22
L%_21:
	mov.l	&-1,%d0
L%_22:
L%_20:
	bra	L%62
L%62:
	movm.l	(4,%sp),&M%11
	fmovm	(FPO%11,%sp),&FPM%11
	unlk	%fp
	rts
	set	S%11,0
	set	T%11,0
	set	F%11,-4
	set	FPO%11,4
	set	FPM%11,0x0000
	set	M%11,0x0000
	data	1
	text
	global	BnComplement
BnComplement:
	link.l	%fp,&F%12
	movm.l	&M%12,(4,%sp)
	fmovm	&FPM%12,(FPO%12,%sp)
	mov.l	(16,%fp),(%sp)
	mov.l	(12,%fp),%d0
	pea.l	([8.w,%fp],%d0.l*4)
	jsr	BnnComplement
	add.l	&4,%sp
L%64:
	movm.l	(4,%sp),&M%12
	fmovm	(FPO%12,%sp),&FPM%12
	unlk	%fp
	rts
	set	S%12,0
	set	T%12,0
	set	F%12,-4
	set	FPO%12,4
	set	FPM%12,0x0000
	set	M%12,0x0000
	data	1
	text
	global	BnAndDigits
BnAndDigits:
	link.l	%fp,&F%13
	movm.l	&M%13,(4,%sp)
	fmovm	&FPM%13,(FPO%13,%sp)
	mov.l	(12,%fp),%d0
	mov.l	(20,%fp),%d1
	mov.l	([16.w,%fp],%d1.l*4),%d1
	and.l	%d1,([8.w,%fp],%d0.l*4)
L%66:
	movm.l	(4,%sp),&M%13
	fmovm	(FPO%13,%sp),&FPM%13
	unlk	%fp
	rts
	set	S%13,0
	set	T%13,0
	set	F%13,-4
	set	FPO%13,4
	set	FPM%13,0x0000
	set	M%13,0x0000
	data	1
	text
	global	BnOrDigits
BnOrDigits:
	link.l	%fp,&F%14
	movm.l	&M%14,(4,%sp)
	fmovm	&FPM%14,(FPO%14,%sp)
	mov.l	(12,%fp),%d0
	mov.l	(20,%fp),%d1
	mov.l	([16.w,%fp],%d1.l*4),%d1
	or.l	%d1,([8.w,%fp],%d0.l*4)
L%68:
	movm.l	(4,%sp),&M%14
	fmovm	(FPO%14,%sp),&FPM%14
	unlk	%fp
	rts
	set	S%14,0
	set	T%14,0
	set	F%14,-4
	set	FPO%14,4
	set	FPM%14,0x0000
	set	M%14,0x0000
	data	1
	text
	global	BnXorDigits
BnXorDigits:
	link.l	%fp,&F%15
	movm.l	&M%15,(4,%sp)
	fmovm	&FPM%15,(FPO%15,%sp)
	mov.l	(12,%fp),%d0
	mov.l	(20,%fp),%d1
	mov.l	([16.w,%fp],%d1.l*4),%d1
	eor.l	%d1,([8.w,%fp],%d0.l*4)
L%70:
	movm.l	(4,%sp),&M%15
	fmovm	(FPO%15,%sp),&FPM%15
	unlk	%fp
	rts
	set	S%15,0
	set	T%15,0
	set	F%15,-4
	set	FPO%15,4
	set	FPM%15,0x0000
	set	M%15,0x0000
	data	1
	text
	global	BnShiftLeft
BnShiftLeft:
	link.l	%fp,&F%16
	movm.l	&M%16,(4,%sp)
	fmovm	&FPM%16,(FPO%16,%sp)
	mov.l	(28,%fp),(%sp)
	mov.l	(16,%fp),-(%sp)
	mov.l	(12,%fp),%d0
	pea.l	([8.w,%fp],%d0.l*4)
	jsr	BnnShiftLeft
	add.l	&8,%sp
	mov.l	(24,%fp),%d1
	mov.l	%d0,([20.w,%fp],%d1.l*4)
L%72:
	movm.l	(4,%sp),&M%16
	fmovm	(FPO%16,%sp),&FPM%16
	unlk	%fp
	rts
	set	S%16,0
	set	T%16,0
	set	F%16,-4
	set	FPO%16,4
	set	FPM%16,0x0000
	set	M%16,0x0000
	data	1
	text
	global	BnShiftRight
BnShiftRight:
	link.l	%fp,&F%17
	movm.l	&M%17,(4,%sp)
	fmovm	&FPM%17,(FPO%17,%sp)
	mov.l	(28,%fp),(%sp)
	mov.l	(16,%fp),-(%sp)
	mov.l	(12,%fp),%d0
	pea.l	([8.w,%fp],%d0.l*4)
	jsr	BnnShiftRight
	add.l	&8,%sp
	mov.l	(24,%fp),%d1
	mov.l	%d0,([20.w,%fp],%d1.l*4)
L%74:
	movm.l	(4,%sp),&M%17
	fmovm	(FPO%17,%sp),&FPM%17
	unlk	%fp
	rts
	set	S%17,0
	set	T%17,0
	set	F%17,-4
	set	FPO%17,4
	set	FPM%17,0x0000
	set	M%17,0x0000
	data	1
	text
	global	BnAddCarry
BnAddCarry:
	link.l	%fp,&F%18
	movm.l	&M%18,(4,%sp)
	fmovm	&FPM%18,(FPO%18,%sp)
	mov.l	(20,%fp),(%sp)
	mov.l	(16,%fp),-(%sp)
	mov.l	(12,%fp),%d0
	pea.l	([8.w,%fp],%d0.l*4)
	jsr	BnnAddCarry
	add.l	&8,%sp
	mov.l	&0,%d1
	mov.w	%d0,%d1
	mov.l	%d1,%d0
	bra	L%76
L%76:
	movm.l	(4,%sp),&M%18
	fmovm	(FPO%18,%sp),&FPM%18
	unlk	%fp
	rts
	set	S%18,0
	set	T%18,0
	set	F%18,-4
	set	FPO%18,4
	set	FPM%18,0x0000
	set	M%18,0x0000
	data	1
	text
	global	BnAdd
BnAdd:
	link.l	%fp,&F%19
	movm.l	&M%19,(4,%sp)
	fmovm	&FPM%19,(FPO%19,%sp)
	mov.l	(32,%fp),(%sp)
	mov.l	(28,%fp),-(%sp)
	mov.l	(24,%fp),%d0
	pea.l	([20.w,%fp],%d0.l*4)
	mov.l	(16,%fp),-(%sp)
	mov.l	(12,%fp),%d0
	pea.l	([8.w,%fp],%d0.l*4)
	jsr	BnnAdd
	add.l	&16,%sp
	mov.l	&0,%d1
	mov.w	%d0,%d1
	mov.l	%d1,%d0
	bra	L%78
L%78:
	movm.l	(4,%sp),&M%19
	fmovm	(FPO%19,%sp),&FPM%19
	unlk	%fp
	rts
	set	S%19,0
	set	T%19,0
	set	F%19,-4
	set	FPO%19,4
	set	FPM%19,0x0000
	set	M%19,0x0000
	data	1
	text
	global	BnSubtractBorrow
BnSubtractBorrow:
	link.l	%fp,&F%20
	movm.l	&M%20,(4,%sp)
	fmovm	&FPM%20,(FPO%20,%sp)
	mov.l	(20,%fp),(%sp)
	mov.l	(16,%fp),-(%sp)
	mov.l	(12,%fp),%d0
	pea.l	([8.w,%fp],%d0.l*4)
	jsr	BnnSubtractBorrow
	add.l	&8,%sp
	mov.l	&0,%d1
	mov.w	%d0,%d1
	mov.l	%d1,%d0
	bra	L%80
L%80:
	movm.l	(4,%sp),&M%20
	fmovm	(FPO%20,%sp),&FPM%20
	unlk	%fp
	rts
	set	S%20,0
	set	T%20,0
	set	F%20,-4
	set	FPO%20,4
	set	FPM%20,0x0000
	set	M%20,0x0000
	data	1
	text
	global	BnSubtract
BnSubtract:
	link.l	%fp,&F%21
	movm.l	&M%21,(4,%sp)
	fmovm	&FPM%21,(FPO%21,%sp)
	mov.l	(32,%fp),(%sp)
	mov.l	(28,%fp),-(%sp)
	mov.l	(24,%fp),%d0
	pea.l	([20.w,%fp],%d0.l*4)
	mov.l	(16,%fp),-(%sp)
	mov.l	(12,%fp),%d0
	pea.l	([8.w,%fp],%d0.l*4)
	jsr	BnnSubtract
	add.l	&16,%sp
	mov.l	&0,%d1
	mov.w	%d0,%d1
	mov.l	%d1,%d0
	bra	L%82
L%82:
	movm.l	(4,%sp),&M%21
	fmovm	(FPO%21,%sp),&FPM%21
	unlk	%fp
	rts
	set	S%21,0
	set	T%21,0
	set	F%21,-4
	set	FPO%21,4
	set	FPM%21,0x0000
	set	M%21,0x0000
	data	1
	text
	global	BnMultiplyDigit
BnMultiplyDigit:
	link.l	%fp,&F%22
	movm.l	&M%22,(4,%sp)
	fmovm	&FPM%22,(FPO%22,%sp)
	mov.l	(36,%fp),%d0
	mov.l	([32.w,%fp],%d0.l*4),(%sp)
	mov.l	(28,%fp),-(%sp)
	mov.l	(24,%fp),%d0
	pea.l	([20.w,%fp],%d0.l*4)
	mov.l	(16,%fp),-(%sp)
	mov.l	(12,%fp),%d0
	pea.l	([8.w,%fp],%d0.l*4)
	jsr	BnnMultiplyDigit
	add.l	&16,%sp
	mov.l	&0,%d1
	mov.w	%d0,%d1
	mov.l	%d1,%d0
	bra	L%84
L%84:
	movm.l	(4,%sp),&M%22
	fmovm	(FPO%22,%sp),&FPM%22
	unlk	%fp
	rts
	set	S%22,0
	set	T%22,0
	set	F%22,-4
	set	FPO%22,4
	set	FPM%22,0x0000
	set	M%22,0x0000
	data	1
	text
	global	BnDivideDigit
BnDivideDigit:
	link.l	%fp,&F%23
	movm.l	&M%23,(4,%sp)
	fmovm	&FPM%23,(FPO%23,%sp)
	mov.l	(40,%fp),%d0
	mov.l	([36.w,%fp],%d0.l*4),(%sp)
	mov.l	(32,%fp),-(%sp)
	mov.l	(28,%fp),%d0
	pea.l	([24.w,%fp],%d0.l*4)
	mov.l	(12,%fp),%d0
	pea.l	([8.w,%fp],%d0.l*4)
	jsr	BnnDivideDigit
	add.l	&12,%sp
	mov.l	(20,%fp),%d1
	mov.l	%d0,([16.w,%fp],%d1.l*4)
L%86:
	movm.l	(4,%sp),&M%23
	fmovm	(FPO%23,%sp),&FPM%23
	unlk	%fp
	rts
	set	S%23,0
	set	T%23,0
	set	F%23,-4
	set	FPO%23,4
	set	FPM%23,0x0000
	set	M%23,0x0000
	data	1
