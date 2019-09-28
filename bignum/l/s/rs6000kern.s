# Copyright     Digital Equipment Corporation & INRIA     1988, 1989
#
#               KerN for the RS6000
#               [Bepaul]
#
		.set	SP,1
		.set	A1,14
		.set	A2,15
		.set	A3,16
		.set	A4,17
		.set	X8,10
		.set	X7,9
		.set	X6,8
		.set	X5,7
		.set	X4,6
		.set	X3,5
		.set	X2,4
		.set	X1,3
		.set	X0,0

		.toc
T.bignum_dat:	.tc	bignum_dat[TC],bignum_dat[RW]
		.csect	bignum_dat[RW]
		.csect	bignum_txt[PR]

		.globl	.BnSetToZero	# (BnSetToZero nn nd nl)
		b	BSTZ0
		cror	15,15,15
.BnSetToZero:	l	X1,0(SP)
		ai	SP,SP,4
		mtlr	X1
BSTZ0:		cmpi	0,A3,0		# if(nl <= 0) return;
		bler
		l	X2,0(A1)
		ai	X1,A2,1
		sli	X1,X1,2
		a	X1,X2,X1
		mtctr	A3		# ctr = nl;
		lil	X2,0		# cte = 0;
BSTZ1:		stu	X2,4(X1)	# *(++nn) = cte;
		bdn	BSTZ1		# if(--ctr != 0) goto BSTZ1;
		br			# return;

		.globl	.BnAssign	# (BnAssign mm md nn nd nl)
.BnAssign:	l	A3,0(SP)
		l	X2,4(SP)
		l	A2,8(SP)
		l	X1,12(SP)
		l	A1,16(SP)
		l	X0,20(SP)
		ai	SP,SP,24
		mtlr	X0
		l	X3,0(A1)
		l	X4,0(A2)
		ai	X1,X1,2
		ai	X2,X2,2
		sli	X1,X1,2
		sli	X2,X2,2
		a	X3,X1,X3
		a	X4,X2,X4
		cmpi	0,A3,0		# if(nl <= 0) return;
		bler
		mtctr	A3		# ctr = nl;
		cmpl	0,X3,X4		# if(mm >= nn) goto BAG2;
		bge	BAG2
		ai	X3,X3,-4	# mm--;
		ai	X4,X4,-4	# nn--;
BAG1:		lu	X1,4(X4)	# X = *(++nn);
		stu	X1,4(X3)	# *(++mm) = X;
		bdn	BAG1		# if(--ctr != 0) goto BAG1;
		br
BAG2:		beqr			# if(mm == nn) return;
		sli	X1,A3,2
		a	X4,X4,X1	# nn += nl;
		a	X3,X3,X1	# mm += nl;
BAG3:		lu	X1,-4(X4)	# X = *(--nn);
		stu	X1,-4(X3)	# *(--mm) = X;
		bdn	BAG3		# (if(--ctr != 0) goto BAG3;
		br			# return;

		.globl	.BnSetDigit	# (BnSetDigit nn nd d)
		b	BSSD0
		cror	15,15,15
.BnSetDigit:	l	X1,0(SP)
		ai	SP,SP,4
		mtlr	X1
BSSD0:		l	X3,0(A1)
		ai	X1,A2,2
		sli	X1,X1,2
		stx	A3,X3,X1
		br

		.globl	.BnGetDigit	# (BnGetDigit nn nd)
		b	BGGD0
		cror	15,15,15
.BnGetDigit:	l	X1,0(SP)
		ai	SP,SP,4
		mtlr	X1
BGGD0:		l	X3,0(A1)
		ai	X1,A2,2
		sli	X1,X1,2
		lx	A1,X3,X1
		br

		.globl	.BnNumDigits	# (BnNumDigits nn nd nl)
		b	BND0
		cror	15,15,15
.BnNumDigits:	l	X1,0(SP)
		ai	SP,SP,4
		mtlr	X1
BND0:		cmpi	0,A3,0		# if(nl <= 0) return(1);
		ble	BND2
		l	X3,0(A1)
		ai	X1,A2,2
		a	X1,X1,A3	# nl += nd + 2
		sli	X1,X1,2
		a	X3,X3,X1	# nn += nl;
		mtctr	A3		# ctr = nl;
BND1:		lu	X1,-4(X3)	# X = *(--nn);
		cmpi	0,X1,0		# if(X != 0) goto BND3
		bne	BND3
		bdn	BND1		# if(--ctr != 0) goto BND1;
BND2:		lil	A1,1		# return(1);
		br
BND3:		mfctr	A1		# return(ctr);
		br

		.globl	.BnNumLeadingZeroBitsInDigit	# (nn nd)
		b	BNLZB0
		cror	15,15,15
.BnNumLeadingZeroBitsInDigit:
		l	X1,0(SP)
		ai	SP,SP,4
		mtlr	X1
BNLZB0:		l	X3,0(A1)
		ai	X1,A2,2
		sli	X1,X1,2
		lx	X2,X3,X1
		cntlz	A1,X2		# Yeah!
		br

		.globl	.BnDoesDigitFitInWord	# (nn nd)
		b	BDDFIW0
		cror	15,15,15
.BnDoesDigitFitInWord:
		l	X1,0(SP)
		ai	SP,SP,4
		mtlr	X1
BDDFIW0:	l	X3,0(A1)
		ai	X1,A2,2
		sli	X1,X1,2
		lx	X2,X3,X1
		cmpli	0,X2,0x7FFF
		bler
		lil	A1,0		# return(1);
		br

		.globl	.BnIsDigitZero	# (BnIsDigitZero nn nd)
		b	BIDZ0
		cror	15,15,15
.BnIsDigitZero:	# Use the fact that nabs(d) >=0 <=> d == 0
		l	X1,0(SP)
		ai	SP,SP,4
		mtlr	X1
BIDZ0:	l	X3,0(A1)
		ai	X1,A2,2
		sli	X1,X1,2
		lx	X2,X3,X1
		nabs	X1,X2
		rlinm	X1,X1,1,31,31	# sign in the lowest bit.
		xoril	A1,X1,1		# get the inverse.
		br

		.globl	.BnIsDigitNormalized	# (nn nd)
		b	BIDN0
		cror	15,15,15
.BnIsDigitNormalized:
		l	X1,0(SP)
		ai	SP,SP,4
		mtlr	X1
BIDN0:		l	X3,0(A1)
		ai	X1,A2,2
		sli	X1,X1,2
		lx	X2,X3,X1
		rlinm	A1,X2,1,31,31	# sign in the lowest bit.
		br

		.globl	.BnIsDigitOdd	# BnnIsDigitOdd(nn nd)
		b	BIDO0
		cror	15,15,15
.BnIsDigitOdd:
		l	X1,0(SP)
		ai	SP,SP,4
		mtlr	X1
BIDO0:		l	X3,0(A1)
		ai	X1,A2,2
		sli	X1,X1,2
		lx	X2,X3,X1
		rlinm	A1,X2,0,31,31	# only the lowest bit.
		br

		.globl	.BnCompareDigits	# (BnCompareDigits mm md nn nd)
.BnCompareDigits:
		l	X2,0(SP)
		l	A2,4(SP)
		l	X1,8(SP)
		l	A1,12(SP)
		l	X0,16(SP)
		ai	SP,SP,20
		mtlr	X0
		l	X3,0(A1)
		l	X4,0(A2)
		ai	X1,X1,2
		ai	X2,X2,2
		sli	X1,X1,2
		sli	X2,X2,2
		lx	X3,X1,X3
		lx	X4,X2,X4
		cmpl	0,X3,X4		# if(d1 == d2) return(0);
		beq	BSD0
		bgt	BCDsup		# if(d1 > d2) return(1);
		xor	A1,A1,A1
		oril	A1,A1,0xFFFF	# return(-1);
BSDret:		br
BCDsup:		lil	A1,1		# return(1);
		br
BSD0:		lil	A1,0		# return(0);
		br

		.globl	.BnComplement	# (BnComplement nn nd nl)
		b	BCM0
		cror	15,15,15
.BnComplement:	l	X1,0(SP)
		ai	SP,SP,4
		mtlr	X1
BCM0:		cmpi	0,A3,0		# if(nl <= 0) return;
		bler
		l	X3,0(A1)
		ai	X1,A2,1
		sli	X1,X1,2
		a	X3,X3,X1
		mtctr	A3		# ctr = nl;
BCM1:		l	X1,4(X3)	# X = nn[1];
		sfi	X1,X1,-1	# X ^= -1;
		stu	X1,4(X3)	# *++nn = X;
		bdn	BCM1		# if(--ctr > 0) goto BCM1
		br			# return;

		.globl	.BnAndDigits	# (BnAndDigit mm md nn nd)
.BnAndDigits:	l	X2,0(SP)
		l	A2,4(SP)
		l	X1,8(SP)
		l	A1,12(SP)
		l	X0,16(SP)
		ai	SP,SP,20
		mtlr	X0
		l	X3,0(A1)
		l	X4,0(A2)
		ai	X1,X1,2
		ai	X2,X2,2
		sli	X1,X1,2
		sli	X2,X2,2
		lx	X5,X1,X3	# X = *mm;
		lx	X4,X2,X4
		and	X5,X5,X4	# X &= d;
		stx	X5,X1,X3	# *nn = X;
		br

		.globl	.BnOrDigits	# (BnOrDigits mm md nn nd)
.BnOrDigits:	l	X2,0(SP)
		l	A2,4(SP)
		l	X1,8(SP)
		l	A1,12(SP)
		l	X0,16(SP)
		ai	SP,SP,20
		mtlr	X0
		l	X3,0(A1)
		l	X4,0(A2)
		ai	X1,X1,2
		ai	X2,X2,2
		sli	X1,X1,2
		sli	X2,X2,2
		lx	X5,X1,X3	# X = *mm;
		lx	X4,X2,X4
		or	X5,X5,X4	# X |= d;
		stx	X5,X1,X3	# *nn = X;
		br

		.globl	.BnXorDigits	# (BnXorDigits mm md nn nd)
.BnXorDigits:	l	X2,0(SP)
		l	A2,4(SP)
		l	X1,8(SP)
		l	A1,12(SP)
		l	X0,16(SP)
		ai	SP,SP,20
		mtlr	X0
		l	X3,0(A1)
		l	X4,0(A2)
		ai	X1,X1,2
		ai	X2,X2,2
		sli	X1,X1,2
		sli	X2,X2,2
		lx	X5,X1,X3	# X = *mm;
		lx	X4,X2,X4
		xor	X5,X5,X4	# X ^= d;
		stx	X5,X1,X3	# *nn = X;
		br

		.globl	.BnShiftLeft	# (BnShiftLeft mm md ml nn nd nbits)
.BnShiftLeft:	l	A4,0(SP)
		l	X2,4(SP)
		l	A2,8(SP)
		l	A3,12(SP)
		l	X1,16(SP)
		l	A1,20(SP)
		l	X0,24(SP)
		ai	SP,SP,28
		mtlr	X0
		l	X3,0(A1)
		l	X4,0(A2)
		ai	X1,X1,1
		ai	X2,X2,2
		sli	X1,X1,2
		sli	X2,X2,2
		a	X3,X1,X3
		a	X4,X2,X4
		lil	X1,0		# res = 0;
		cmpi	0,A4,0		# if(nbits == 0) return(res);
		beq	BSL2
		cmpi	0,A3,0		# if(ml <= 0) return(res);
		ble	BSL2
		sfi	X5,A4,32	# rnbits = 32 - nbits;
		mtctr	A3		# ctr = ml;
BSL1:		l	X6,4(X3)	# X = mm[1];
		sl	X7,X6,A4	# Y = X << nbits;
		or	X7,X7,X1	# Y |= res;
		stu	X7,4(X3)	# *(++mm) = Y;
		sr	X1,X6,X5	# res = X >> rnbits;
		bdn	BSL1		# if(--ctr > 0) goto BSL1
BSL2:		st	X1,0(X4)
		br			# return(res);

		.globl	.BnShiftRight	# (BnnShiftRight mm md ml nn nd nbits)
.BnShiftRight:	l	A4,0(SP)
		l	X2,4(SP)
		l	A2,8(SP)
		l	A3,12(SP)
		l	X1,16(SP)
		l	A1,20(SP)
		l	X0,24(SP)
		ai	SP,SP,28
		mtlr	X0
		l	X3,0(A1)
		l	X4,0(A2)
		ai	X1,X1,2
		a	X1,X1,A3	# mm += ml;
		ai	X2,X2,2
		sli	X1,X1,2
		sli	X2,X2,2
		a	X3,X1,X3
		a	X4,X2,X4
		lil	X1,0		# res = 0;
		cmpi	0,A4,0		# if(nbits == 0) return(res);
		beq	BSR2
		cmpi	0,A3,0		# if(ml <= 0) return(res);
		ble	BSR2
		sfi	X5,A4,32	# rnbits = 32 - nbits;
		mtctr	A3		# ctr = ml;
BSR1:		lu	X6,-4(X3)	# X = *(--mm);
		sr	X7,X6,A4	# Y = X >> nbits;
		or	X7,X7,X1	# Y |= res;
		st	X7,0(X3)	# *(mm) = Y;
		sl	X1,X6,X5	# res = X << rnbits;
		bdn	BSR1		# if(--ctr > 0) goto BSR1
BSR2:		st	X1,0(X4)
		br			# return(res);

		.globl	.BnAddCarry	# (BnAddCarry nn nd nl carryin)
.BnAddCarry:	l	A4,0(SP)
		l	A3,4(SP)
		l	X1,8(SP)
		l	A1,12(SP)
		l	X0,16(SP)
		ai	SP,SP,20
		mtlr	X0
		l	X3,0(A1)
		ai	X1,X1,1
		sli	X1,X1,2
		a	X3,X1,X3
		cmpi	0,A4,0		# if(carryin == 0) return(0);
		beq	BAC3
		cmpi	0,A3,0		# if(nl == 0) return(1);
		beq	BAC2
		mtctr	A3		# ctr = nl;
BAC1:		l	X1,4(X3)	# X = nn[1];
		ai.	X1,X1,1		# X++;
		stu	X1,4(X3)	# *(++nn) = X;
		bne	BAC3		# if(X != 0) return(0);
		bdn	BAC1		# if(--ctr > 0) goto BAC1
BAC2:		lil	A1,1		# return(1);
		br
BAC3:		lil	A1,0		# return(0);
		br

		.globl	.BnAdd		# (BnAdd mm md ml nn nd nl carryin)
.BnAdd:	l	A4,0(SP)
		l	X5,4(SP)
		l	X2,8(SP)
		l	A2,12(SP)
		l	A3,16(SP)
		l	X1,20(SP)
		l	A1,24(SP)
		l	X0,28(SP)
		ai	SP,SP,32
		mtlr	X0
		l	X3,0(A1)
		l	X4,0(A2)
		ai	X1,X1,2
		ai	X2,X2,1
		sli	X1,X1,2
		sli	X2,X2,2
		a	X3,X1,X3
		a	X4,X2,X4
		sf	A3,X5,A3	# ml -= nl;
		ai	X3,X3,-4	# mm--; carry = 1;
		cmpi	0,X5,0		# if(nl == 0) goto BADD2;
		beq	BADD2
		mtctr	X5		# ctr = nl;
		cmpi	0,A4,0		# if(carryin) goto BADD1;
		bne	BADD1
		ai	X1,X1,0		# carry = 0;
BADD1:		lu	X2,4(X4)	# Y = *(++nn);
		l	X1,4(X3)	# X = mm[1];
		ae	X1,X1,X2	# X = X + Y + carry; carry = ??
		stu	X1,4(X3)	# *(++mm) = X;
		bdn	BADD1		# if(--ctr > 0) goto BADD1
		lil	X2,0
		ae	A4,X2,X2	# carryin = carry;
BADD2:		cmpi	0,A4,0		# if(carryin == 0) return(0);
		beq	BADD5
		cmpi	0,A3,0		# if(ml == 0) return(1);
		beq	BADD4
		mtctr	A3		# ctr = ml;
BADD3:		l	X1,4(X3)	# X = mm[1];
		ai.	X1,X1,1		# X++;
		stu	X1,4(X3)	# *(++mm) = X;
		bne	BADD5		# if(X != 0) return(0);
		bdn	BADD3		# if(--ctr > 0) goto BADD3;
BADD4:		lil	A1,1		# return(1);
		br
BADD5:		lil	A1,0		# return(0);
		br

		.globl	.BnSubtractBorrow	# (nn nd nl carryin)
.BnSubtractBorrow:
		l	A4,0(SP)
		l	A3,4(SP)
		l	X1,8(SP)
		l	A1,12(SP)
		l	X0,16(SP)
		ai	SP,SP,20
		mtlr	X0
		l	X3,0(A1)
		ai	X1,X1,1
		sli	X1,X1,2
		a	X3,X1,X3

		cmpi	0,A4,1		# if(carryin == 1) return(1);
		beq	BSB3
		cmpi	0,A3,0		# if(nl == 0) return(0);
		beq	BSB2
		mtctr	A3		# ctr = nl;
BSB1:		l	X1,4(X3)	# X = nn[1];
		si	X2,X1,1		# Y= X-1;
		stu	X2,4(X3)	# *(++nn) = Y;
		cmpi	0,X1,0
		bne	BSB3		# if(X != 0) return(1);
		bdn	BSB1		# if(--ctr > 0) goto BSB1
BSB2:		lil	A1,0		# return(0);
		br
BSB3:		lil	A1,1		# return(1);
		br

		.globl	.BnSubtract	# BnnSubtract(mm md ml nn nd nl carryin)
.BnSubtract:	l	A4,0(SP)
		l	X5,4(SP)
		l	X2,8(SP)
		l	A2,12(SP)
		l	A3,16(SP)
		l	X1,20(SP)
		l	A1,24(SP)
		l	X0,28(SP)
		ai	SP,SP,32
		mtlr	X0
		l	X3,0(A1)
		l	X4,0(A2)
		ai	X1,X1,2
		ai	X2,X2,1
		sli	X1,X1,2
		sli	X2,X2,2
		a	X3,X1,X3
		a	X4,X2,X4
		sf	A3,X5,A3	# ml -= nl;
		ai	X3,X3,-4	# mm--; carry = 1;
		cmpi	0,X5,0		# if(nl == 0) goto BS2
		beq	BS2
		mtctr	X5		# ctr = nl;
		cmpi	0,A4,0		# if(carryin) goto BS1
		bne	BS1
		ai	X1,X1,0		# carry = 0;
BS1:		lu	X2,4(X4)	# Y = *(++nn);
		l	X1,4(X3)	# X = mm[1];
		sfe	X1,X2,X1	# X = X - (Y + carry); carry = ??
		stu	X1,4(X3)	# *(++mm) = X;
		bdn	BS1		# if(--ctr > 0) goto BS1
		lil	A4,0
		ae	A4,A4,A4	# carryin = carry;
BS2:		cmpi	0,A4,1		# if(carryin == 0) return(1);
		beq	BS5
		cmpi	0,A3,0		# if(ml == 0) return(0);
		beq	BS4
		mtctr	A3		# ctr = ml;
BS3:		l	X1,4(X3)	# X = mm[1];
		si	X2,X1,1		# Y= X-1;
		stu	X2,4(X3)	# *(++mm) = Y;
		cmpi	0,X1,0		# if(X != 0) return(1);
		bne	BS5
		bdn	BS3		# if(--ctr > 0) goto BS3
BS4:		lil	A1,0		# return(0);
		br
BS5:		lil	A1,1		# return(1);
		br

		.globl	.BnMultiplyDigit # (pp pd pl mm md ml nn nd)
	.set PP,X4; .set PL,X5; .set MM,X6; .set ML,X7; .set D,X8
	.set LOW,X1; .set HIGHT,X2; .set OHIGHT,X3
.BnMultiplyDigit:
		l	X3,0(SP)
		l	D,4(SP)
		l	D,0(D)
		ai	X3,X3,2
		sli	X3,X3,2
		lx	D,D,X3
		cmpi	0,D,1		# if(d != 1) goto BMD2;
		bne	BMDsui
		lil	D,0
		st	D,4(SP)
		ai	SP,SP,4
		b	.BnAdd		# return(BnnAdd(pp, pl, mm, ml, 0));
BMDsui:		l	ML,8(SP)
		l	X2,12(SP)
		l	MM,16(SP)
		l	PL,20(SP)
		l	X1,24(SP)
		l	PP,28(SP)
		l	X0,32(SP)
		ai	SP,SP,36
		mtlr	X0
		l	PP,0(PP)
		l	MM,0(MM)
		ai	X1,X1,1
		ai	X2,X2,1
		sli	X1,X1,2
		sli	X2,X2,2
		a	PP,X1,PP
		a	MM,X2,MM
		cmpi	0,D,0		# if(d == 0) return(0);
		beq	BMD7
BMD2:		sf	PL,ML,PL	# pl -= ml;
		cmpi	0,ML,0		# if(ml == 0) return(0);
		beq	BMD7
		mtctr	ML		# ctr = ml;
		lil	OHIGHT,0	# OldHight = 0;
		cmpi	0,D,0		# if(D < 0) goto BMD8;
		blt	BMD8
BMD3:		lu	LOW,4(MM)	# Low = mm[1];
		mul	HIGHT,LOW,D	# Hight:MQ = Low*d
		cmpi	0,LOW,0		# if(Low>=0) pas de correction.
		bge	BMD4
		a	HIGHT,HIGHT,D	# Correction multiplication signe'.
BMD4:		mfmq	LOW		# Low = MQ;
		a	LOW,LOW,OHIGHT	# Low += OldHight;
		aze	HIGHT,HIGHT	# Hight += carry;
		l	OHIGHT,4(PP)	# *++pp += Low;
		a	LOW,LOW,OHIGHT
		stu	LOW,4(PP)
		aze	OHIGHT,HIGHT	# OldHight = Hight + carry;
		bdn	BMD3		# if(--ctr > 0) goto BMD3;
BMD40:		l	LOW,4(PP)	# *(++pp) += OldHight;
		a	LOW,LOW,OHIGHT
		stu	LOW,4(PP)
		lil	LOW,0		# if(carry == 0) return(0);
		aze.	LOW,LOW
		beq	BMD7
		si.	PL,PL,1		# pl--;
		ble	BMD6		# if(pl <= 0) return(1);
		mtctr	PL		# ctr = pl;
BMD5:		l	X1,4(PP)	# X = pp[1];
		ai.	X1,X1,1		# X++;
		stu	X1,4(PP)	# *(++pp) = X;
		bne	BMD7		# if(X != 0) return(0);
		bdn	BMD5		# if(--ctr > 0) goto BMD5;
BMD6:		lil	A1,1		# return(1);
		br
BMD7:		lil	A1,0		# return(0);
		br
		
BMD8:		lu	LOW,4(MM)	# Low = mm[1];
		mul	HIGHT,LOW,D	# Hight:MQ = Low*d
		a	HIGHT,HIGHT,LOW # Correction pour d<0...
		cmpi	0,LOW,0		# if(Low>=0) pas de correction.
		bge	BMD9
		a	HIGHT,HIGHT,D	# Correction multiplication signe'.
BMD9:		mfmq	LOW		# Low = MQ;
		a	LOW,LOW,OHIGHT	# Low += OldHight;
		aze	HIGHT,HIGHT	# Hight += carry;
		l	OHIGHT,4(PP)	# *pp += Low;
		a	LOW,LOW,OHIGHT
		stu	LOW,4(PP)
		aze	OHIGHT,HIGHT	# OldHight = Hight + carry;
		bdn	BMD8		# if(--ctr > 0) goto BMD8;
		b	BMD40		# goto BMD40;

		.globl	.BnDivideDigit	# (qq qd rr rd nn nd nl d dd)
	.set QQ,X1; .set NN,X2; .set NL,X3; .set DD,X4
	.set SQQ,X5; .set R,X1; .set Q,X6; .set NLOW,X6; .set DQ,X7
	.set BITS,X8; .set AUX,X3
.BnDivideDigit:
		l	A1,0(SP)
		l	DD,4(SP)
		l	DD,0(DD)
		ai	A1,A1,2
		sli	A1,A1,2
		lx	DD,DD,A1
		l	NL,8(SP)
		l	A1,12(SP)
		l	NN,16(SP)
		l	NN,0(NN)
		ai	A1,A1,2
		sli	A1,A1,2
		a	NN,NN,A1
		l	A1,20(SP)
		l	A2,24(SP)
		l	A2,0(A2)
		ai	A1,A1,2
		sli	A1,A1,2
		a	A2,A2,A1
		l	A1,28(SP)
		l	QQ,32(SP)
		l	QQ,0(QQ)
		ai	A1,A1,2
		sli	A1,A1,2
		a	QQ,QQ,A1
		l	X0,36(SP)
		ai	SP,SP,40
		mtlr	X0
		sli	A1,NL,2
		a	NN,NN,A1	# nn = &nn[nl];
		a	SQQ,QQ,A1	# qq = &qq[nl];
		si	SQQ,SQQ,4	# qq--;
		lu	R,-4(NN)	# R = *(--nn);
		si.	NL,NL,1		# nl--;
		bler			# if(nl <= 0) return(R);
		mtctr	NL		# ctr = nl;
		sri	DQ,DD,1		# D'= D / 2;
		cmpi	0,DD,0		# if(D<0) goto BDDinf;
		blt	BDDinf
# D > 0
BDDsup:		lu	NLOW,-4(NN)	# Low = *(--nn);
		cmpl	0,R,DQ		# if (R < D') goto BDDsupinf;
		blt	BDDsupinf
		andil.	BITS,NLOW,1	# bits = Low & 1;
		sri	NLOW,NLOW,1	# Low >>= 1;
		andil.	AUX,R,1		# aux = R & 1;
		sri	R,R,1		# R >>= 1;
		sli	AUX,AUX,31	# Low |= aux << 31;
		or	NLOW,NLOW,AUX
		mtmq	NLOW		# MQ = Low;
		div	Q,R,DD		# Q=R:MQ/D; MQ=R:MQ%D;
		mfmq	R		# R=MQ;
		sli	R,R,1		# R <<= 1;
		sli	Q,Q,1		# Q <<= 1;
		a	R,R,BITS	# R+=bits;
		cmpl	0,R,DD		# si R<D => ok
		blt	BDDsup1
		ai	Q,Q,1		# Q++;
		sf	R,DD,R		# R-=D;
BDDsup1:	stu	Q,-4(SQQ)	# *(--qq)=Q;
		bdn	BDDsup		# if(--ctr > 0) goto BDDsup;
		st	R,0(A2)
		lil	A1,0
		lil	A2,0
		br			# return(R);
BDDsupinf:	mtmq	NLOW		# MQ = XL;
		div	Q,R,DD		# Q=R:MQ/D; MQ=R:MQ%D;
		mfmq	R		# R=MQ;
		stu	Q,-4(SQQ)	# *(--qq)=Q;
		bdn	BDDsup		# if(--ctr > 0) goto BDDsup;
		st	R,0(A2)
		lil	A1,0
		lil	A2,0
		br			# return(R);

# D < 0
BDDinf:		lu	NLOW,-4(NN)	# Low = *(--nn);
		andil.	BITS,NLOW,7	# bits = Low & 7;
		sri	NLOW,NLOW,3	# Low >>= 3;
		andil.	AUX,R,7		# aux = R & 7;
		sri	R,R,3		# R >>= 3;
		sli	AUX,AUX,29	# Low |= aux << 29;
		or	NLOW,NLOW,AUX
		mtmq	NLOW		# MQ = Low;
		div	Q,R,DQ		# Q=R:MQ/D'; MQ=R:MQ%D';
		mfmq	R		# R=MQ
		sli	R,R,1		# R *= 2;
		andil.	AUX,DD,1	# if((D & 1) == 0) rien a retrancher;
		cmpli	0,AUX,0
		beq	BDDi4
# R <- R - Q
		cmpl	0,R,Q		# On teste avant de faire la diff.
		blt	BDDi3		# la diff est < 0
		sf	R,Q,R		# la diff est > 0
		b	BDDi4
BDDi3:		sf	R,Q,R		# On met a` jour
		si	Q,Q,1		# Q--;
		a	R,R,DD		# R += D;
# R <- 2R; Q <- 2Q;
BDDi4:		cmpl	0,R,DQ		# On teste avant de faire la mult.
		blt	BDDi41		# Ca va passer..
		bne	BDDi40		# Ca va casser...
		cmpli	0,AUX,0		# d0 = 1 ca passe...
		bne	BDDi41
BDDi40:		sli	Q,Q,1		# Q *= 2;
		sli	R,R,1		# R *= 2;
		ai	Q,Q,1		# Q++;
		sf	R,DD,R		# R -= D;
		b	BDDi5
BDDi41:		sli	Q,Q,1		# Q *= 2;
		sli	R,R,1		# R *= 2;
# R <- 2R; Q <- 2Q;
BDDi5:		cmpl	0,R,DQ		# On teste avant de faire la mult.
		blt	BDDi51		# Ca va passer..
		bne	BDDi50		# Ca va casser...
		cmpli	0,AUX,0		# d0 = 1 ca passe...
		bne	BDDi51
BDDi50:		sli	Q,Q,1		# Q *= 2;
		sli	R,R,1		# R *= 2;
		ai	Q,Q,1		# Q++;
		sf	R,DD,R		# R -= D;
		b	BDDi6
BDDi51:		sli	Q,Q,1		# Q *= 2;
		sli	R,R,1		# R *= 2;
# R += bits;
BDDi6:		sf	AUX,BITS,DD	# pour tester sans de'bordement..
		cmpl	0,R,AUX
		blt	BDDi61		# Ca va passer..
		ai	Q,Q,1		# Q++;
		sf	R,DD,R		# R -= D;
BDDi61:		a	R,R,BITS	# R += bits;
		stu	Q,-4(SQQ)	# *(--qq)=Q;
		bdn	BDDinf		# if(--ctr > 0) goto BDDinf;
		st	R,0(A2)
		lil	A1,0
		lil	A2,0
		br
