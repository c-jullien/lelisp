# Copyright     Digital Equipment Corporation & INRIA     1988, 1989
#
#		KerN for the VAX.
#		[Bepaul]
#
		.globl	BnSetToZero
		.align	1
BnSetToZero:	addl3	$8,(r2),r0
		moval	(r0)[r3],r0		# nn = &nn[nd];
		movl	r4,r1
		sobgeq	r1,BSTZ1		# if(nl--) goto BSTZ1;
		rsb
BSTZ1:		clrl	(r0)+			# *(nn++) = 0;
		sobgeq	r1,BSTZ1		# if(nl--) goto BSTZ1;
		rsb

		.globl	BnAssign
		.align	1
BnAssign:			.set	BAGnl,0
				.set	BAGnd,4
				.set	BAGnn,8
				.set	BAGmd,12
				.set	BAGmm,16
		addl3	$8,*BAGmm(sp),r0
		addl3	$8,*BAGnn(sp),r1
		movl	BAGmd(sp),r2
		movl	BAGnd(sp),r3
		movl	BAGnl(sp),r11
		addl2	$20,sp
		moval	(r0)[r2],r0		# mm = &mm[md];
		moval	(r1)[r3],r1		# nn = &nn[nd];
		cmpl	r0,r1
		jgequ	BAG2			# if(mm >= nn) goto BAG2;
		sobgeq	r11,BAG1		# if(nl--) goto BAG1;
		rsb
BAG1:		movl	(r1)+,(r0)+		# *(mm++) = *(nn++);
		sobgeq	r11,BAG1		# if(nl--) goto BAG1;
		rsb
BAG2:		jeql	BAG4			# if(mm == nn) return;
		moval	(r0)[r11],r0		# mm = &mm[nl];
		moval	(r1)[r11],r1		# nn = &nn[nl];
		sobgeq	r11,BAG3		# if(nl--) goto BAG3;
		rsb
BAG3:		movl	-(r1),-(r0)		# *(--mm) = *(--nn);
		sobgeq	r11,BAG3		# if(nl--) goto BAG3;
BAG4:		rsb

		.globl	BnSetDigit
		.align	1
BnSetDigit:	addl3	$8,(r2),r0
		movl	r4,(r0)[r3]		# nn[nd] = d;
		rsb

		.globl	BnGetDigit
		.align	1
BnGetDigit:	addl3	$8,(r2),r0
		movl	(r0)[r3],r2		# return(nn[nd]);
		rsb

		.globl	BnNumDigits
		.align	1
BnNumDigits:	addl3	$8,(r2),r0
		addl2	r4,r3			# nd += nl;
		moval	(r0)[r3],r0		# nn = &nn[nd];
		movl	r4,r2
		sobgeq	r2,BND1			# if(nl-- != 0) goto BND1;
		movl	$1,r2
		rsb				# return(1);
BND1:		tstl	-(r0)
		jneq	BND2			# if(*(--nn) != 0) goto BND2;
		sobgeq	r2,BND1			# if(nl-- != 0) goto BND1;
		movl	$1,r2
		rsb				# return(1);
BND2:		incl	r2
		rsb				# return(nl + 1);

		.globl	BnNumLeadingZeroBitsInDigit
		.align	1
BnNumLeadingZeroBitsInDigit:
		addl3	$8,(r2),r0
		movl	(r0)[r3],r1		# digit = nn[nd]
		movl	$31,r0
BLZ1:		bbs	r0,r1,BLZ2
		sobgeq	r0,BLZ1
BLZ2:		subl3	r0,$31,r2
		rsb

		.globl	BnDoesDigitFitInWord
		.align	1
BnDoesDigitFitInWord:
		addl3	$8,(r2),r0
		movl	(r0)[r3],r2
		cmpl	r2,$0x8000
		jgequ	BDFno
		movl	$1,r2
		rsb
BDFno:		clrl	r2
		rsb

		.globl	BnIsDigitZero
		.align	1
BnIsDigitZero:	addl3	$8,(r2),r0
		tstl	(r0)[r3]
		jneq	BDZ1			# if(nn[nd]) goto BDZ1;
		movl	$1,r2
		rsb
BDZ1:		clrl	r2
		rsb

		.globl	BnIsDigitNormalized
		.align	1
BnIsDigitNormalized:
		addl3	$8,(r2),r0
		movl	(r0)[r3],r0
		extzv	$31,$1,r0,r2
		rsb

		.globl	BnIsDigitOdd
		.align	1
BnIsDigitOdd:
		addl3	$8,(r2),r0
		bicl3	$-2,(r0)[r3],r2
		rsb

		.globl	BnCompareDigits
		.align	1
BnCompareDigits:		.set	BCDnd,0
				.set	BCDnn,4
				.set	BCDmd,8
				.set	BCDmm,12
		addl3	$8,*BCDmm(sp),r11
		movl	BCDmd(sp),r0
		movl	(r11)[r0],r0		# d0 = mm[md];
		addl3	$8,*BCDnn(sp),r11
		movl	BCDnd(sp),r1
		movl	(r11)[r1],r1		# d1 = nn[nd]
		addl2	$16,sp
		cmpl	r0,r1
		jeql	BCDeq			# if(dg0 == dg1) goto BCDeq
		jlssu	BCDinf			# if(dg0 < dg1) goto BCDinf
		movl	$1,r2			# return(1);
		rsb
BCDeq:		clrl	r2			# return(0);
		rsb
BCDinf:		movl	$0xFFFF,r2		# return(-1);
		rsb

		.globl	BnComplement
		.align	1
BnComplement:	addl3	$8,(r2),r0
		moval	(r0)[r3],r0		# nn = &nn[nd];
		movl	r4,r1
		sobgeq	r1,BCM1			# if(nl-- != 0) goto BCM1;
		rsb
BCM1:		mcoml	(r0),(r0)+		# *(nn++) ^= -1;
		sobgeq	r1,BCM1			# if(nl-- != 0) goto BCM1;
		rsb

		.globl	BnAndDigits
		.align	1
BnAndDigits:			.set	BADnd,0
				.set	BADnn,4
				.set	BADmd,8
				.set	BADmm,12
		addl3	$8,*BADnn(sp),r11
		movl	BADnd(sp),r0
		mcoml	(r11)[r0],r0		# d = ~nn[nd];
		addl3	$8,*BADmm(sp),r11
		movl	BADmd(sp),r1
		bicl2	r0,(r11)[r1]		# mm[md] &= ~digit;
		addl2	$16,sp
		rsb

		.globl	BnOrDigits
		.align	1
BnOrDigits:			.set	BODnd,0
				.set	BODnn,4
				.set	BODmd,8
				.set	BODmm,12

		addl3	$8,*BODnn(sp),r11
		movl	BODnd(sp),r0
		addl3	$8,*BODmm(sp),r13
		movl	BODmd(sp),r1
		bisl2	(r11)[r0],(r13)[r1]	# mm[md] |= nn[nd];
		addl2	$16,sp
		rsb

		.globl	BnXorDigits
		.align	1
BnXorDigits:			.set	BXDnd,0
				.set	BXDnn,4
				.set	BXDmd,8
				.set	BXDmm,12
		addl3	$8,*BXDnn(sp),r11
		movl	BXDnd(sp),r0
		addl3	$8,*BXDmm(sp),r13
		movl	BXDmd(sp),r1
		xorl2	(r11)[r0],(r13)[r1]	# mm[md] ^= nn[nd];
		addl2	$16,sp
		rsb

		.globl	BnShiftLeft
		.align	1
BnShiftLeft:			.set	BSLnbi,0
				.set	BSLnd,4
				.set	BSLn,8
				.set	BSLml,12
				.set	BSLmd,16
				.set	BSLm,20
		movl	BSLnbi(sp),r3
		jneq	BSL0			# if(nbi) goto BSL0
		addl3	$8,*BSLn(sp),r1
		movl	BSLnd(sp),r0
		movl	r3,(r1)[r0]		# n[nd] = 0;
		addl2	$24,sp
		rsb
BSL0:		addl3	$8,*BSLm(sp),r1
		movl	BSLmd(sp),r0
		moval	(r1)[r0],r0	# m = &m[md];
		movl	BSLml(sp),r1
		clrl	r2			# res = 0;
		subl3	r3,$32,r4		# rnbi = BN_DIGIT_SIZE - nbi;
		jbr	BSL2			# goto BSL2
BSL1:		movl	(r0),r13		# save = *m
		ashl	r3,r13,r11		# X = save << nbi;
		bisl3	r2,r11,(r0)+		# *(m++) = X | res;
		extzv	r4,r3,r13,r2		# res = save >> rnbits;
BSL2:		sobgeq	r1,BSL1		# if(ml-- != 0) goto BSL1;
		addl3	$8,*BSLn(sp),r1
		movl	BSLnd(sp),r0
		movl	r2,(r1)[r0]
		clrl	r2
		addl2	$24,sp
		rsb

		.globl	BnShiftRight
		.align	1
BnShiftRight:			.set	BSRnbi,0
				.set	BSRnd,4
				.set	BSRn,8
				.set	BSRml,12
				.set	BSRmd,16
				.set	BSRm,20
		movl	BSRnbi(sp),r3
		jneq	BSR0			# if(nbi) goto BSR0;
		addl3	$8,*BSRn(sp),r1
		movl	BSRnd(sp),r0
		movl	r3,(r1)[r0]		# n[nd] = 0;
		addl2	$24,sp
		rsb
BSR0:		addl3	$8,*BSRm(sp),r11
		movl	BSRml(sp),r1
		addl3	r1,BSRmd(sp),r0
		moval	(r11)[r0],r0		# m = &[md + ml];
		clrl	r2			# res = 0;
		subl3	r3,$32,r4		# lnbi = BN_DIGIT_SIZE - nbi;
		jbr	BSR2			# goto BSR2;
BSR1:		movl	-(r0),r13		# save = *(--m);
		extzv	r3,r4,r13,r11		# X = save >> nbi;
		bisl3	r2,r11,(r0)		# *m = X | res;
		ashl	r4,r13,r2		# res = save << lnbi;
BSR2:		sobgeq	r1,BSR1
		addl3	$8,*BSRn(sp),r1
		movl	BSRnd(sp),r0
		movl	r2,(r1)[r0]
		clrl	r2
		addl2	$24,sp
		rsb

		.globl	BnAddCarry
		.align	1
BnAddCarry:			.set	BACcar,0
				.set	BACnl,4
				.set	BACnd,8
				.set	BACn,12
		movl	BACcar(sp),r2
		jeql	BAC3			# if(car == 0) return(car);
		movl	BACnl(sp),r0
		jeql	BAC2			# if(nl == 0) return(1);
		addl3	$8,*BACn(sp),r11
		movl	BACnd(sp),r1
		moval	(r11)[r1],r1	# n = &n[nd];
		decl	r0			# nl--;
BAC1:		incl	(r1)+			# ++(*n++);
		bcc	BAC4			# if(!C) goto BAC4
		sobgeq	r0,BAC1		# if(nl--) goto BAC1;
BAC2:		movl	$1,r2			# return(1);
BAC3:		addl2	$16,sp
		rsb
BAC4:		clrl	r2			# return(0);
		addl2	$16,sp
		rsb
		
		.globl	BnAdd
		.align	1
BnAdd:				.set	BADDcar,0
				.set	BADDnl,4
				.set	BADDnd,8
				.set	BADDn,12
				.set	BADDml,16
				.set	BADDmd,20
				.set	BADDm,24
		addl3	$8,*BADDm(sp),r11
		movl	BADDmd(sp),r0
		moval	(r11)[r0],r0	# m = &m[md];
		addl3	$8,*BADDn(sp),r11
		movl	BADDnd(sp),r1
		moval	(r11)[r1],r1	# n = &n[nd];
		movl	BADDml(sp),r13
		movl	BADDnl(sp),r11
		movl	BADDcar(sp),r2
		addl2	$28,sp
		subl2	r11,r13		# ml -= nl;
		tstl	r11
		jneq	BADD1			# if(nl) goto BADD1
		tstl	r2
		jneq	BADD4			# if(car) goto BADD4
		clrl	r2
		rsb				# return(0);

BADD1:		decl	r11			# nl--;
		bispsw	r2			# Carry = r2
BADD2:		adwc	(r1)+,(r0)+		# *(m++) += *(n++) + Carry
		sobgeq	r11,BADD2		# if(nl--) goto BADD2;
		blssu	BADD4			# if(Carry) goto BADD4;
BADD3:		clrl	r2			# return(0);
		rsb

BADD4:		tstl	r13
		jeql	BADD6			# if(ml == 0) goto BADD6;
		decl	r13			# ml--;
BADD5:		incl	(r0)+			# ++(*m++);
		bcc	BADD3			# if(!Carry) goto BADD3;
		sobgeq	r13,BADD5		# if(ml--) goto BADD5;
BADD6:		movl	$1,r2
		rsb

		.globl	BnSubtractBorrow
		.align	1
BnSubtractBorrow:		.set	BSBcar,0
				.set	BSBnl,4
				.set	BSBnd,8
				.set	BSBn,12
		movl	BSBcar(sp),r2
		jneq	BSB2			# if(car) goto BSB2;
		movl	BSBnl(sp),r0
		jeql	BSB20			# if(nl == 0) goto BSB3;
		addl3	$8,*BSBn(sp),r11
		movl	BSBnd(sp),r1
		moval	(r11)[r1],r1	# n = &n[nd];
		decl	r0			# nl--;
BSB1:		decl	(r1)+			# (*n++)--;
		bcc	BSB3			# if(!C) goto BSB4
		sobgeq	r0,BSB1			# if(nl--) goto BSB1;
BSB20:		clrl	r2			# return(0);
BSB2:		addl2	$16,sp
		rsb
BSB3:		movl	$1,r2			# return(1);
		addl2	$16,sp
		rsb

		.globl	BnSubtract
		.align	1
BnSubtract:			.set	BScar,0
				.set	BSnl,4
				.set	BSnd,8
				.set	BSn,12
				.set	BSml,16
				.set	BSmd,20
				.set	BSm,24
		addl3	$8,*BSm(sp),r11
		movl	BSmd(sp),r0
		moval	(r11)[r0],r0	# m = &m[md];
		addl3	$8,*BSn(sp),r11
		movl	BSnd(sp),r1
		moval	(r11)[r1],r1	# n = &n[nd];
		movl	BSml(sp),r13
		movl	BSnl(sp),r11
		movl	BScar(sp),r2
		addl2	$28,sp
		subl2	r11,r13		# ml -= nl;
		tstl	r11
		jneq	BS1			# if(nl) goto BS1
		tstl	r2
		jeql	BS4			# if(car == 0) goto BS4
		movl	$1,r2
		rsb				# return(1);

BS1:		decl	r11			# nl--;
		xorw2	$1,r2			# r2 = ~r2
		bispsw	r2			# Carry = r2;
BS2:		sbwc	(r1)+,(r0)+		# *(m++) -= *(n++) + Carry;
		sobgeq	r11,BS2		# if(nl--) goto BS2;
		blssu	BS4			# if(carry) goto BS4;
BS3:		movl	$1,r2			# return(1);
		rsb

BS4:		tstl	r13
		jeql	BS6			# if(ml == 0) goto BS6;
		decl	r13			# ml--;
BS5:		decl	(r0)+			# --(*m++);
		bcc	BS3			# if(!C) goto BS3;
		sobgeq	r13,BS5		# if(ml--) goto BS5;
BS6:		clrl	r2			# return(0);
		rsb

		.globl	BnMultiplyDigit
		.align	1
BnMultiplyDigit:		.set	BMDnd,0
				.set	BMDn,4
				.set	BMDml,8
				.set	BMDmd,12
				.set	BMDm,16
				.set	BMDpl,20
				.set	BMDpd,24
				.set	BMDp,28
		addl3	$8,*BMDn(sp),r11
		movl	BMDnd(sp),r0
		movl	(r11)[r0],r2		# c = n[nd];
		jneq	BMD1
		clrl	r2
		addl2	$32,sp
		rsb
BMD1:		cmpl	$1,r2
		jneq	BMD2			# if(c != 1) goto BMD2
		addl2	$4,sp
		clrl	(sp)
		jbr	BnAdd			# BnAdd(p,pd,pl,m,md,ml,0);

BMD2:		addl3	$8,*BMDp(sp),r3
		movl	BMDpd(sp),r11
		moval	(r3)[r11],r11		# p = &p[pd];
		addl3	$8,*BMDm(sp),r3
		movl	BMDmd(sp),r13
		moval	(r3)[r13],r13		# m = &m[md];
		movl	BMDml(sp),r3
		subl2	r3,BMDpl(sp)		# pl -= ml;
		clrl	r4			# d = 0;
		jbr	BMD6			# goto BMD6;
BMD3:		movl	(r13)+,r5		# save = *(m++);
		emul	r2,r5,$0,r0		# X = save * c;
		tstl	r2			## conversion
		bgeq	BMDsup1			##  multiplication
		addl2	r5,r1			##  signee
BMDsup1:	tstl	r5			##  vers
		bgeq	BMDsup2			##  multiplication
		addl2	r2,r1			##  non signee
BMDsup2:	addl2	r4,r0			# X += d;
		bcc	BMD4			# if(C) X(hight)++;
		incl	r1
BMD4:		addl2	(r11),r0			# X += *p
		bcc	BMD5			# if (C) X(hight)++;
		incl	r1
BMD5:		movl	r0,(r11)+		# *(p++) = X(low);
		movl	r1,r4			# d = X(hight);
BMD6:		sobgeq	r3,BMD3			# if(ml--) goto BMD3;
		addl2	r4,(r11)+		# *(p++) += d;
		bcs	BMD7			# if(C) goto BMD7;
BMD10:		clrl	r2			# return(0);
		clrl	r3
		clrl	r4
		clrl	r5
		addl2	$32,sp
		rsb

BMD7:		movl	BMDpl(sp),r2
		decl	r2			# pl--;
		jeql	BMD9			# if(!pl) goto BM9;
		decl	r2			# pl--;
BMD8:		incl	(r11)+			# ++(*p++);
		bcc	BMD10			# if(!C) goto BMD10;
		sobgeq	r2,BMD8			# if(pl--) goto BMD8
BMD9:		movl	$1,r2			# return(1);
		clrl	r3
		clrl	r4
		clrl	r5
		addl2	$32,sp
		rsb

		.globl	BnDivideDigit
		.align	1
BnDivideDigit:			.set	BDDdd,32
				.set	BDDd,36
				.set	BDDnl,40
				.set	BDDnd,44
				.set	BDDn,48
				.set	BDDrd,52
				.set	BDDr,56
				.set	BDDqd,60
				.set	BDDq,64
		pushr	$0x03FC			# sauve 8
		movl	BDDnl(sp),r2
		movl	BDDdd(sp),r3
		addl3	$8,*BDDd(sp),r0
		movl	(r0)[r3],r3		# c = d[dd];
		movl	BDDnd(sp),r4
		addl2	r2,r4			# nd += nl;
		addl3	$8,*BDDn(sp),r0
		moval	(r0)[r4],r0		# n = &n[nd];
		decl	r2			# nl--;
		movl	BDDqd(sp),r4
		addl2	r2,r4			# qd += nl;
		addl3	$8,*BDDq(sp),r1
		moval	(r1)[r4],r1		# q = &q[qd];
		movl	-(r0),r5		##  X(hight) = *(--n);
		extzv	$1,$31,r3,r7		# r7 = D' <- D div 2
		tstl	r3
		bgeq	ndivc2
		jbr	ndiv5			# D < 0!!

						# D < 2**31
		jbr	ndivc2			# N < D * 2**32
ndivc1:		movl	-(r0),r4		# (bdivu dx3 ax1 dx1)
		cmpl	r5,r7
		jlss	ndivc11
		extzv	$0,$1,r4,r6		# r6 <- n0
		ashq	$-1,r4,r4		# N' = r4 = N quo 2 < D * 2**31
		ediv	r3,r4,r4,r5		# r4 <- Q' = N' quo D < 2**31
						# r5 <- R' = N' rem D < D
		ashq	$1,r4,r4		# r4 <- 2 * Q'        < 2**32
						# r5 <- 2 * R'        < 2 * D
		addl2	r6,r5			# r5 <- 2 * R' + n0   < 2 * D
		cmpl	r5,r3			# r5 < D -> Q = r4, R = r5
		jlssu	ndivc12			# sinon
		incl	r4			# Q = r4 + 1
		subl2	r3,r5			# R = r5 - D
		jbr	ndivc12
ndivc11:	ediv	r3,r4,r4,r5		# Q = r4, R = r5
ndivc12:	movl	r4,-(r1)		# range r4 en me'moire
ndivc2:		sobgeq	r2,ndivc1		# (sobgez dx2 ndivc1)
		movl	BDDrd(sp),r2
		addl3	$8,*BDDr(sp),r0
		movl	r5,(r0)[r2]		## r[rd] = X(hight);
		popr	$0x03FC
		addl2	$36,sp
		rsb

ndiv3:		movl	-(r0),r4		# r4 poid faible de N
		extzv	$0,$1,r4,r9		# r9 <-  n0
		extzv	$1,$1,r4,r6		# r6 <-  n1
		extzv	$2,$1,r4,r8		# r8 <- n2
		ashq	$-3,r4,r4		# r4 <- N'' = N quo 4
		bicl2	$0xE0000000,r5		# Le ashq ne le fait pas
		ediv 	r7,r4,r4,r5		# r4 <- Q' = N''' quo D'
						# r5 <- R' = N''' rem D'
		ashl	$1,r5,r5		# r5 <- 2 * R'
		addl2	r8,r5			# r5 <- 2 * R' + n2
		bbc	$0,r3,ndiv4		# si d0 = 0
		cmpl	r5,r4			# sinon r5 <- 2R' + n1 - Q'
		blssu	ndiv30			# la diff est < 0
		subl2	r4,r5			# la diff est > 0
		jbr	ndiv4			# voila la diff!
ndiv30:		subl2	r4,r5			# la diff!
		decl	r4			# r4 <- r4 - 1
		addl2	r3,r5			# r5 <- r5 + D
ndiv4:		ashl	$1,r4,r4		# r4 <- 2Q'
		addl2	r5,r5			# r5 <- 2r5
		bisl2	r6,r5			# r5 <- r5 + n1 (flag C ok!)
		bcs	ndiv40			# On deborde sur!
		cmpl	r5,r3
		jlssu	ndiv42			# depasse pas D
ndiv40:		incl	r4			# Q = r4 + 1
		subl2	r3,r5			# R = r5 - D
ndiv42:		ashl	$1,r4,r4		# r4 <- 2Q'
		addl2	r5,r5			# r5 <- 2r5
		bisl2	r9,r5			# r5 <- r5 + n0 (flag C ok!)
		bcs	ndiv43			# On deborde sur!
		cmpl	r5,r3
		jlssu	ndiv44			# depasse pas D
ndiv43:		incl	r4			# Q = r4 + 1
		subl2	r3,r5			# R = r5 - D
ndiv44:		movl	r4,-(r1)		# range le quotient en memoire
ndiv5:		sobgeq	r2,ndiv3		# On continue!
		movl	BDDrd(sp),r2
		addl3	$8,*BDDr(sp),r0
		movl	r5,(r0)[r2]		## r[rd] = X(hight);
		popr	$0x03FC
		addl2	$36,sp
		rsb
