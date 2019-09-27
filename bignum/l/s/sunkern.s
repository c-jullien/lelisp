| Copyright     Digital Equipment Corporation & INRIA     1988, 1989
|
|		KerN for the 68020 : MIT syntax
|		[Bepaul]
|
		.text

		.globl	BnSetToZero		| (nn nd nl)
BnSetToZero:	movl	a1@,a0
		movl	a2,d0
		lea	a0@(8,d0:l:4),a0	| nn = &nn[nd];
		movl	a3,d0
		dbf	d0,BSTZ1		| if(nl--) goto BSTZ1;
		rts				| return;
BSTZ1:		clrl	a0@+			| *(nn++) = 0;
		dbf	d0,BSTZ1		| if(nl--) goto BSTZ1;
		rts				| return;

		.globl	BnAssign
BnAssign:			BAGnl	=	0
				BAGnd	=	4
				BAGnn	=	8
				BAGmd	=	12
				BAGmm	=	16
				BAGret	=	20
		movl	sp@(BAGmm),a0
		movl	a0@,a0
		movl	sp@(BAGnn),a6
		movl	a6@,a6
		movl	sp@(BAGmd),d0
		movl	sp@(BAGnd),d1
		lea	a0@(8,d0:l:4),a0	| mm = &mm[md];
		lea	a6@(8,d1:l:4),a6	| nn = &nn[nd];
		movl	sp@(BAGnl),d0
		lea	sp@(BAGret),sp
		cmpl	a6,a0
		jcc	BAG2			| if(mm >= nn) goto BAG2;
		dbf	d0,BAG1			| if(nl--) goto BAG1;
		rts				| return;
BAG1:		movl	a6@+,a0@+		| *(mm++) = *(nn++);
		dbf	d0,BAG1			| if(nl--) goto BAG1;
		rts				| return;
BAG2:		jls	BAG4			| if(mm <= nn) goto BAG4;
		lea	a0@(0,d0:l:4),a0	| mm = &mm[nl];
		lea	a6@(0,d0:l:4),a6	| nn = &nn[nl];
		dbf	d0,BAG3			| if(nl--) goto BAG3;
		rts				| return;
BAG3:		movl	a6@-,a0@-		| *(--mm) = *(--nn);
		dbf	d0,BAG3			| if(nl--) goto BAG3;
BAG4:		rts				| return;

		.globl	BnSetDigit		| (nn nd d)
BnSetDigit:	movl	a1@,a0
		movl	a2,d0
		lea	a0@(8,d0:l:4),a0	| nn = &nn[nd];
		movl	a3,a0@			|| *nn = d;
		rts

		.globl	BnGetDigit		| (nn nd)
BnGetDigit:	movl	a1@,a0
		movl	a2,d0
		movl	a0@(8,d0:l:4),a1	| return(nn[nd]);
		rts

		.globl	BnNumDigits		| (nn nd nl)
BnNumDigits:	movl	a1@,a0
		movl	a2,d1
		movl	a3,d0
		addl	d0,d1			| nd += nl;
		lea	a0@(8,d1:l:4),a0	| nn = &nn[nd];
		dbf	d0,BND1			| if(nl--) goto BND1;
		moveq	#1,d0
		movl	d0,a1
		rts				| return(1);
BND1:		tstl	a0@-
		jne	BND3			| if(*(--nn) != 0) goto BND3;
		dbf	d0,BND1			| if(nl-- != 0) goto BND1;
		moveq	#1,d0
		movl	d0,a1
		rts				| return(1);
BND3:		addql	#1,d0
		movl	d0,a1
		rts				| return(nl + 1);

		.globl	BnNumLeadingZeroBitsInDigit	| (nn nd)
BnNumLeadingZeroBitsInDigit:
		movl	a1@,a0
		movl	a2,d1
		bfffo	a0@(8,d1:l:4){#0:#32},d0
		movl	d0,a1
		rts

		.globl	BnDoesDigitFitInWord	| (nn nd)
BnDoesDigitFitInWord:
		movl	a1@,a0
                movl    a2,d1
                movl    a0@(8,d1:l:4),d1        | digit = nn[nd];
                cmpl    #0x7FFF,d1
                bhi     BDFno
                rts
BDFno:          clrl    d0
		movl	d0,a1
                rts

		.globl	BnIsDigitZero		| (nn nd)
BnIsDigitZero:	clrl	d0
		movl	a1@,a0
		movl	a2,d1
		tstl	a0@(8,d1:l:4)		| Z = (nn[nd] == 0);
		seq	d0
		movl	d0,a1
		rts				| return(Z);

		.globl	BnIsDigitNormalized	| (nn nd)
BnIsDigitNormalized:
		clrl	d0
		movl	a1@,a0
		movl	a2,d1
		tstw	a0@(8,d1:l:4)		| N = (nn[nd] < 0);
		smi	d0
		movl	d0,a1
		rts				| return(N);

		.globl	BnIsDigitOdd		| (nn nd)
BnIsDigitOdd:	clrl	d0
		movl	a1@,a0
		movl	a2,d1
		movw	a0@(10,d1:l:4),cc	| C = n[nd] & 1;
		scs	d0			| return(C);
		movl	d0,a1
		rts

		.globl	BnCompareDigits
BnCompareDigits:		BCDnd	= 	0
				BCDnn	=	4
				BCDmd	=	8
				BCDmm	=	12
				BCDret	=	16
		movl	sp@(BCDmd),d0
		movl	sp@(BCDmm),a0
		movl	a0@,a0
		movl	a0@(8,d0:l:4),d1	| dg0 = m[md];
		movl	sp@(BCDnd),d0
		movl	sp@(BCDnn),a0
		lea	sp@(BCDret),sp
		movl	a0@,a0
		cmpl	a0@(8,d0:l:4),d1	| Z = ((n[nd] - dg0) == 0);
		bhi	BCDsup			| if(dg0 > dg1) goto BCDsup;
		sne	d0
		extw	d0			| return(!Z);
		movl	d0,a1
		rts
BCDsup:		moveq	#1,d0			| return(1);
		movl	d0,a1
		rts
			
		.globl	BnComplement		| (nn nd nl)
BnComplement:	movl	a1@,a0
		movl	a2,d0
		lea	a0@(8,d0:l:4),a0	| nn = &nn[nd];
		movl	a3,d0
		dbf	d0,BCM1
		rts
BCM1:		notl	a0@+			| *(n++) ^= -1;
		dbf	d0,BCM1			| if(nl-- != 0) goto BCM1;
		rts

		.globl	BnAndDigits
BnAndDigits:			BADnd	=	0
				BADnn	=	4
				BADmd	=	8
				BADmm	=	12
				BADret	=	16
		movl	sp@(BADmm),a0
		movl	sp@(BADmd),d0
		movl	a0@,a0
		lea	a0@(8,d0:l:4),a0	| mm = &mm[md];
		movl	sp@(BADnn),a6
		movl	sp@(BADnd),d0
		movl	a6@,a6
		movl	a6@(8,d0:l:4),d0	| digit = nn[nd];
		andl	d0,a0@			| *mm &= digit;
		lea	sp@(BADret),sp
		rts

		.globl	BnOrDigits
BnOrDigits:			BODnd	=	0
				BODnn	=	4
				BODmd	=	8
				BODmm	=	12
				BODret	=	16
		movl	sp@(BODmm),a0
		movl	sp@(BODmd),d0
		movl	a0@,a0
		lea	a0@(8,d0:l:4),a0	| mm = &mm[md];
		movl	sp@(BODnn),a6
		movl	sp@(BODnd),d0
		movl	a6@,a6
		movl	a6@(8,d0:l:4),d0	| digit = nn[nd];
		orl	d0,a0@			| *mm |= digit;
		lea	sp@(BODret),sp
		rts

		.globl	BnXorDigits
BnXorDigits:			BXDnd	=	0
				BXDnn	=	4
				BXDmd	=	8
				BXDmm	=	12
				BXDret	=	16
		movl	sp@(BXDmm),a0
		movl	sp@(BXDmd),d0
		movl	a0@,a0
		lea	a0@(8,d0:l:4),a0	| mm = &mm[md];
		movl	sp@(BXDnn),a6
		movl	sp@(BXDnd),d0
		movl	a6@,a6
		movl	a6@(8,d0:l:4),d0	| digit = nn[nd];
		eorl	d0,a0@			| *mm ^= digit;
		lea	sp@(BXDret),sp
		rts

		.globl	BnShiftLeft
BnShiftLeft:			BSLnbi	=	0
				BSLnd	=	4
				BSLnn	=	8
				BSLml	=	12
				BSLmd	=	16
				BSLmm	=	20
				BSLret	=	24
		movl	sp@(BSLnbi),d0
		jne	BSL0			| if(nbi) goto BSL0;
		movl	sp@(BSLnn),a0
		movl	sp@(BSLnd),d1
		movl	a0@,a0
		movl	d0,a0@(8,d1:l:4)	| nn[nd] = 0;
		lea	sp@(BSLret),sp
		rts
BSL0:		movl	sp@(BSLmm),a0
		movl	sp@(BSLmd),d1
		movl	a0@,a0
		lea	a0@(8,d1:l:4),a0	| mm = &mm[md];
		clrl	d1			| res = 0;
		moveml	#0x3C00,sp@-		| Save 4 registers
		movl	sp@(BSLml + 16),d2
		moveq	#32,d3
		subl	d0,d3			| rnbi = BN_DIGIT_SIZE - nbi;
		bra	BSL2			| goto BSL2;
BSL1:		movl	a0@,d4			| save = *mm;
		movl	d4,d5			| X = save;
		lsll	d0,d5			| X <<= nbi;
		orl	d1,d5			| X |= res;
		movl	d5,a0@+			| *(mm++) = X;
		movl	d4,d1			| res = save;
		lsrl	d3,d1			| res >>= rnbi;
BSL2:		dbf	d2,BSL1			| if(ml-- != 0) goto BSL1;
		moveml	a7@+,#0x003C		| Restore 4 registers
		movl	sp@(BSLnn),a0
		movl	sp@(BSLnd),d0
		movl	a0@,a0
		movl	d1,a0@(8,d0:l:4)	| nn[nd] = res;
		lea	sp@(BSLret),sp
		rts

		.globl	BnShiftRight
BnShiftRight:			BSRnbi	=	0
				BSRnd	=	4
				BSRnn	=	8
				BSRml	=	12
				BSRmd	=	16
				BSRmm	=	20
				BSRret	=	24
		movl	sp@(BSRnbi),d0
		jne	BSR0			| if(nbi) goto BSR0;
		movl	sp@(BSRnn),a0
		movl	sp@(BSRnd),d1
		movl	a0@,a0
		movl	d0,a0@(8,d1:l:4)	| nn[nd] = 0;
		lea	sp@(BSRret),sp
		rts
BSR0:		movl	sp@(BSRmm),a0
		movl	sp@(BSRmd),d1
		moveml	#0x3C00,sp@-		| Save 4 registers
		movl	sp@(BSRml + 16),d2
		addl	d2,d1			| md += ml;
		movl	a0@,a0
		lea	a0@(8,d1:l:4),a0	| mm = &mm[md];
		clrl	d1			| res = 0;
		moveq	#32,d3
		subl	d0,d3			| lnbi = BN_DIGIT_SIZE - nbi;
		bra	BSR2			| goto BSR2;
BSR1:		movl	a0@-,d4			| save = *(--mm);
		movl	d4,d5			| X = save;
		lsrl	d0,d5			| X >>= nbi;
		orl	d1,d5			| X |= res;
		movl	d5,a0@			| *mm = X;
		movl	d4,d1			| res = save;
		lsll	d3,d1			| res <<= lnbi;
BSR2:		dbf	d2,BSR1			| if(ml-- != 0) goto BSR1;
		moveml	a7@+,#0x003C		| Restore 4 registers
		movl	sp@(BSRnn),a0
		movl	sp@(BSRnd),d0
		movl	a0@,a0
		movl	d1,a0@(8,d0:l:4)	| nn[nd] = res;
		lea	sp@(BSRret),sp
		rts

		.globl	BnAddCarry
BnAddCarry:			BACcar	=	0
				BACnl	=	4
				BACnd	=	8
				BACnn	=	12
				BACret	=	16
		movl	sp@(BACcar),d0
		jeq	BAC2			| if(car == 0) return(car);
		movl	sp@(BACnl),d0
		jeq	BAC3			| if(nl == 0) return(1);
		movl	sp@(BACnn),a0
		movl	sp@(BACnd),d1
		movl	a0@,a0
		lea	a0@(8,d1:l:4),a0	| nn = &nn[nd];
		subql	#1,d0			| nl--;
BAC1:		addql	#1,a0@+			| ++(*nn++);
		dbcc	d0,BAC1			| if(Carry || nl--) goto BAC1;
		scs	d0
		negb	d0
		extbl	d0
BAC2:		movl	d0,a1
		lea	sp@(BACret),sp
		rts				| return(Carry);
BAC3:		moveq	#1,d0
		movl	d0,a1
		lea	sp@(BACret),sp
		rts				| return(1);
		
		.globl	BnAdd
BnAdd:				BADDcar	=	0
				BADDnl	=	4
				BADDnd	=	8
				BADDnn	=	12
				BADDml	=	16
				BADDmd	=	20
				BADDmm	=	24
				BADDret	=	28
		movl	sp@(BADDmm),a0
		movl	sp@(BADDmd),d0
		movl	a0@,a0
		lea	a0@(8,d0:l:4),a0	| mm = &mm[md];
		movl	sp@(BADDnn),a6
		movl	sp@(BADDnd),d1
		movl	a6@,a6
		lea	a6@(8,d1:l:4),a6	| nn = &nn[nd];
		movl	sp@(BADDml),d0
		movl	sp@(BADDnl),d1
		subl	d1,sp@(BADDml)		| ml -= nl;
		tstl	d1
		jne	BADD1			| if(nl) goto BADD1
		tstl	sp@(BADDcar)		||
		jne	BADD7			| if(car) goto BADD7
		clrl	d0
		movl	d0,a1
		lea	sp@(BADDret),sp
		rts				| return(0);
BADD1:		subql	#1,d1			| nl--;
		movl	sp@(BADDcar),d0
		negb	d0			| /* Bit No 4 */
		movw	d0,cc			| X = car;
		movl	d2,sp@-			||| Save register.
BADDX:		movl	a6@+,d0
		movl	a0@,d2
		addxl	d0,d2			| N = *mm + *(nn++) + X
		movl	d2,a0@+			| X = N >> 32; *(mm++) = N;
		dbf	d1,BADDX		| if(nl--) goto BADDX
		movl	sp@+,d2			||| Restore register.
		movw	cc,d0
		andw	#0x10,d0
		jne	BADD7			| if(X) goto BADD7;
		clrl	d0			| return(0);
		movl	d0,a1
		lea	sp@(BADDret),sp
		rts
BADD7:		movl	sp@(BADDml),d0
		jeq	BADD9			| if(ml == 0) goto BADD9;
		subql	#1,d0			| ml--;
BADD8:		addql	#1,a0@+			| ++(*mm++);
		dbcc	d0,BADD8		| if(C || ml--) goto BADD8
		scs	d0
		negb	d0
		extbl	d0
		movl	d0,a1
		lea	sp@(BADDret),sp
		rts				| return(C)
BADD9:		moveq	#1,d0
		movl	d0,a1
		lea	sp@(BADDret),sp
		rts				| return(1);

		.globl	BnSubtractBorrow
BnSubtractBorrow:		BSBcar	=	0
				BSBnl	=	4
				BSBnd	=	8
				BSBnn	=	12
				BSBret	=	16
		movl	sp@(BSBcar),d0
		jne	BSB2			| if(car) return(car);
		movl	sp@(BSBnl),d1
		jeq	BSB3			| if(nl == 0) return(0);
		movl	sp@(BSBnn),a0
		movl	sp@(BSBnd),d0
		movl	a0@,a0
		lea	a0@(8,d0:l:4),a0	| nn = &nn[nd];
		subql	#1,d1			| nl--;
BSB1:		subql	#1,a0@+			| (*nn++)--;
		dbcc	d1,BSB1			| if(Carry || nl--) goto BSB1;
		scc	d0
		negb	d0
		extbl	d0
BSB2:		movl	d0,a1
		lea	sp@(BSBret),sp
		rts				| return(Carry);
BSB3:		moveq	#0,d0
		movl	d0,a1
		lea	sp@(BSBret),sp
		rts				| return(1);

		.globl	BnSubtract
BnSubtract:			BScar	=	0
				BSnl	=	4
				BSnd	=	8
				BSnn	=	12
				BSml	=	16
				BSmd	=	20
				BSmm	=	24
				BSret	=	28
		movl	sp@(BSmm),a0
		movl	sp@(BSmd),d0
		movl	a0@,a0
		lea	a0@(8,d0:l:4),a0	| mm = &mm[md];
		movl	sp@(BSnn),a6
		movl	sp@(BSnd),d1
		movl	a6@,a6
		lea	a6@(8,d1:l:4),a6	| nn = &nn[nd];
		movl	sp@(BSml),d0
		movl	sp@(BSnl),d1
		subl	d1,sp@(BSml)		| ml -= nl;
		tstl	d1
		jne	BS1			| if(nl) goto BS1
		tstl	sp@(BScar)		||
		jeq	BS7			| if(!car) goto BS7
		moveq	#1,d0
		movl	d0,a1
		lea	sp@(BSret),sp
		rts				| return(1);
BS1:		subql	#1,d1			| nl--;
		movl	sp@(BScar),d0
		negb	d0			| /* Bit No 4 */
		notb	d0
		movw	d0,cc			| X = ~car;
		movl	d2,sp@-			||| Save register.
BSX:		movl	a6@+,d0
		movl	a0@,d2
		subxl	d0,d2			| N = *mm - *(nn++) - X
		movl	d2,a0@+			| X = N >> 32; *(mm++) = N;
		dbf	d1,BSX			| if(nl--) goto BSX
		movl	sp@+,d2			||| Restore register.
		movw	cc,d0
		andw	#0x10,d0
		jne	BS7			| if(X) goto BS7;
		moveq	#1,d0			| return(0);
		movl	d0,a1
		lea	sp@(BSret),sp
		rts
BS7:		movl	sp@(BSml),d1
		jeq	BS9			| if(ml == 0) goto BS9;
		subql	#1,d1			| ml--;
BS8:		subql	#1,a0@+			| --(*mm++);
		dbcc	d1,BS8			| if(Carry || ml--) goto BS8
		scc	d0
		negb	d0
		extbl	d0
		movl	d0,a1
		lea	sp@(BSret),sp
		rts				| return(C)
BS9:		clrl	d0
		movl	d0,a1
		lea	sp@(BSret),sp
		rts				| return(0);

		.globl	BnMultiplyDigit
BnMultiplyDigit:		BMDnd	=	0
				BMDnn	=	4
				BMDml	=	8
				BMDmd	=	12
				BMDmm	=	16
				BMDpl	=	20
				BMDpd	=	24
				BMDpp	=	28
				BMDret	=	32
		movl	sp@(BMDnn),a0
		movl	sp@(BMDnd),d0
		movl	a0@,a0
		movl	a0@(8,d0:l:4),d0	| c = nn[nd];
		jne	BMD1			| if(c) goto BMD1;
		movl	d0,a1
		lea	sp@(BMDret),sp
		rts				| return(0);
BMD1:		cmpl	#1,d0
		jne	BMD2			| if(c != 1) goto BMD2;
		clrl	sp@(BMDnn)
		lea	sp@(BMDnn),sp
		bra	BnAdd			| BnAdd(pp,pd,pl,mm,md,ml,0);
BMD2:		movl	sp@(BMDpp),a0
		movl	sp@(BMDpd),d1
		movl	a0@,a0
		lea	a0@(8,d1:l:4),a0	| pp = &pp[pd];
		movl	sp@(BMDmm),a6
		movl	sp@(BMDmd),d1
		movl	a6@,a6
		lea	a6@(8,d1:l:4),a6	| mm = &mm[md];
		movl	sp@(BMDml),d1
		subl	d1,sp@(BMDpl)		| pl -= ml;
		moveml	#0x3c00,sp@-		| Save 4 registers
		clrl	d2			| d = 0;
		clrl	d5
		bra	BMD6			| goto BMD6;
BMD3:		movl	a6@+,d4			| X = *(mm++);
		mulul	d0,d3:d4		|| X *= c;
		addl	d2,d4			| X += d;
		addxl	d5,d3			| X(hight) += Carry;
		addl	a0@,d4			| X += *pp;
		addxl	d5,d3			| X(hight) += Carry;
		movl	d4,a0@+			| *(p++) = X(low);
		movl	d3,d2			|| d = X(hight);
BMD6:		dbf	d1,BMD3			| if(ml--) goto BMD3;
		movl	d2,d0
		moveml	a7@+,#0x003C		| Restore 4 registers
		addl	d0,a0@+			| *(pp++) += d;
		bcs	BMD7			| if(Carry) goto BMD7;
		clrl	d0
		movl	d0,a1
		lea	sp@(BMDret),sp
		rts				| return(0);
BMD7:		movl	sp@(BMDpl),d0
		subql	#1,d0			| pl--;
		jeq	BMD10			| if(!pl) goto BM10;
		subql	#1,d0			| pl--;
BMD8:		addql	#1,a0@+			| ++(*pp++);
BMD9:		dbcc	d0,BMD8			| if(Carry || pl--) goto BMD8
		scs	d0
		negb	d0
		extbl	d0
		movl	d0,a1
		lea	sp@(BMDret),sp
		rts				| return(C);
BMD10:		moveq	#1,d0
		movl	d0,a1
		lea	sp@(BMDret),sp
		rts				| return(1);

		.globl	BnDivideDigit
BnDivideDigit:			BDDdd	=	8
				BDDd	=	12
				BDDnl	=	16
				BDDnd	=	20
				BDDnn	=	24
				BDDrd	=	28
				BDDrr	=	32
				BDDqd	=	36
				BDDqq	=	40
				BDDret	=	36
		moveml	#0x3000,sp@-		| Save 2 registers
		movl	sp@(BDDnl),d0
		movl	sp@(BDDdd),d1
		movl	sp@(BDDd),a0
		movl	a0@,a0
		movl	a0@(8,d1:l:4),d1	| c = d[dd];
		movl	sp@(BDDnd),d2
		addl	d0,d2			| nd += nl;
		movl	sp@(BDDnn),a0
		movl	a0@,a0
		lea	a0@(8,d2:l:4),a0	| nn = &nn[nd];
		subql	#1,d0			| nl--;
		movl	sp@(BDDqd),d2
		addl	d0,d2			| qd += nl;
		movl	sp@(BDDqq),a6
		movl	a6@,a6
		lea	a6@(8,d2:l:4),a6	| qq = &qq[qd];
		movl	a0@-,d2			|| X(hight) = *(--nn);
		bra	BDD2			| goto BDD2;
BDD1:		movl	a0@-,d3			| X(low) = *(--nn);
		divul	d1,d2:d3		|| X(low) = X / c;
						| X(hight) = X % c;
		movl	d3,a6@-			| *(--qq) = X(low);
BDD2:		dbf	d0,BDD1			| if(nl--) goto BDD1;
		movl	sp@(BDDrr),a0
		movl	sp@(BDDrd),d0
		movl	a0@,a0
		movl	d2,a0@(8,d0:l:4)	|| rr[rd] = X(hight);
		moveml	a7@+,#0x000C		| Restore 2 registers
		lea	sp@(BDDret),sp
		rts
