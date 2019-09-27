# Copyright     Digital Equipment Corporation & INRIA     1988, 1989
#
#		KerN for the VAX.
#		[Bepaul]
#
		.globl	_BnnSetToZero
		.align	1
_BnnSetToZero:			.set	BSTZnn,4
				.set	BSTZnl,8
		.word	0
		movl	BSTZnn(ap),r0
		movl	BSTZnl(ap),r1
		sobgeq	r1,BSTZ1		# if(nl--) goto BSTZ1
		ret				# return;
BSTZ1:		clrl	(r0)+			# *(nn++) = 0;
		sobgeq	r1,BSTZ1		# if(nl--) goto BSTZ1;
		ret

		.globl	_BnnAssign
		.align	1
_BnnAssign:			.set	BAGmm,4
				.set	BAGnn,8
				.set	BAGnl,12
		.word	0
		movl	BAGmm(ap),r0
		movl	BAGnn(ap),r1
		movl	BAGnl(ap),r2
		cmpl	r0,r1
		jgequ	BAG2			# if(mm >= nn) goto BAG2;
		sobgeq	r2,BAG1			# if(nl--) goto BAG1;
		ret				# return;
BAG1:		movl	(r1)+,(r0)+		# *(mm++) = *(nn++);
		sobgeq	r2,BAG1			# if(nl--) goto BAG1;
BAG2:		jlequ	BAG4			# if(mm <= nn) goto BAG4;
		moval	(r0)[r2],r0		# mm = &mm[nl];
		moval	(r1)[r2],r1		# nn = &nn[nl];
		sobgeq	r2,BAG3			# if(nl--) goto BAG3;
		ret				# return;
BAG3:		movl	-(r1),-(r0)		# *(--mm) = *(--nn);
		sobgeq	r2,BAG3			# if(nl--) goto BAG3;
BAG4:		ret				# return;

		.globl	_BnnSetDigit
		.align	1
_BnnSetDigit:			.set	BSDnn,4
				.set	BSDd,8
		.word	0
		movl	BSDd(ap),*BSDnn(ap)	# *nn = d;
		ret

		.globl	_BnnGetDigit
		.align	1
_BnnGetDigit:			.set	BGDnn,4
		.word	0
		movl	*BGDnn(ap),r0		# return(*nn);
		ret

		.globl	_BnnNumDigits
		.align	1
_BnnNumDigits:			.set	BNDnn,4
				.set	BNDnl,8
		.word	0
		movl	BNDnl(ap),r0
		moval	*BNDnn(ap)[r0],r1	# nn = &nn[nd];
		sobgeq	r0,BND1			# if(nl-- != 0) goto BND1;
		movl	$1,r0
		ret				# return(1);
BND1:		tstl	-(r1)
		jneq	BND3			# if(*(--n) != 0) goto BND3;
		sobgeq	r0,BND1			# if(nl-- != 0) goto BND1;
		movl	$1,r0
		ret				# return(1);
BND3:		incl	r0
		ret				# return(nl + 1);

		.globl	_BnnNumLeadingZeroBitsInDigit
		.align	1
_BnnNumLeadingZeroBitsInDigit:	.set	BLZd,4
		.word	0
		movl	BLZd(ap),r1
		movl	$31,r0
BLZ1:		bbs	r0,r1,BLZ2
		sobgeq	r0,BLZ1
BLZ2:		subl3	r0,$31,r0
		ret

		.globl	_BnnDoesDigitFitInWord
		.align	1
_BnnDoesDigitFitInWord:		.set	BDFd,4
		.word	0
		movl	$1,r0			# C_VERSION
		ret

		.globl	_BnnIsDigitZero
		.align	1
_BnnIsDigitZero:		.set	BDZd,4
		.word	0
		tstl	BDZd(ap)
		jneq	BDZ1			# if(d) goto BDZ1;
		movl	$1,r0
		ret				# return(1);
BDZ1:		clrl	r0
		ret				# return(0);

		.globl	_BnnIsDigitNormalized
	# Boolean BnIsDigitNormalized(n, nd) BigNum n; int nd; {
		.align	1
_BnnIsDigitNormalized:		.set	BDNd,4
		.word	0
		movl	BDNd(ap),r0
		extzv	$31,$1,r0,r0		# return(d >> 31);
		ret

		.globl	_BnnIsDigitOdd
		.align	1
_BnnIsDigitOdd:			.set	BDOd,4
		.word	0
		bicl3	$-2,BDOd(ap),r0		# return(d || 1);
		ret

		.globl	_BnnCompareDigits
		.align	1
_BnnCompareDigits:		.set	BCDd1,4
				.set	BCDd2,8
		.word	0
		cmpl	BCDd1(ap),BCDd2(ap)
		jeql	BCDeq			# if(d0 == d1) goto BCDeq
		jlssu	BCDinf			# if(d0 < d1) goto BCDinf
		movl	$1,r0			# return(1);
		ret
BCDeq:		clrl	r0			# return(0);
		ret
BCDinf:		movl	$-1,r0			# return(-1);
		ret

		.globl	_BnnComplement
		.align	1
_BnnComplement:			.set	BCMnn,4
				.set	BCMnl,8
		.word	0
		movl	BCMnn(ap),r0
		movl	BCMnl(ap),r1
		sobgeq	r1,BCM1			# if(nl-- != 0) goto BCM1;
		ret
BCM1:		mcoml	(r0),(r0)+		# *(n++) ^= -1;
		sobgeq	r1,BCM1			# if(nl-- != 0) goto BCM1;
		ret

		.globl	_BnnAndDigits
		.align	1
_BnnAndDigits:			.set	BADnn,4
				.set	BADd,8
		.word	0
		mcoml	BADd(ap),r0		# d = ~d;
		bicl2	r0,*BADnn(ap)		# *nn &= ~d;
		ret

		.globl	_BnnOrDigits
		.align	1
_BnnOrDigits:			.set	BODnn,4
				.set	BODd,8
			.word	0
		bisl2	BODd(ap),*BODnn(ap)	# *nn |= d;
		ret

		.globl	_BnnXorDigits
		.align	1
_BnnXorDigits:			.set	BXDnn,4
				.set	BXDd,8
		.word	0
		xorl2	BXDd(ap),*BXDnn(ap)	# *nn ^= d;
		ret

		.globl	_BnnShiftLeft
		.align	1
_BnnShiftLeft:			.set	BSLmm,4
				.set	BSLml,8
				.set	BSLnbi,12
		.word	0x40			# Save register r6
		clrl	r0			# res = 0;
		movl	BSLnbi(ap),r3
		jneq	BSL0			# if(nbi) goto BSL0
		ret				# return(res);
BSL0:		movl	BSLmm(ap),r2
		movl	BSLml(ap),r1
		subl3	r3,$32,r4		# rnbi = BN_DIGIT_SIZE - nbi;
		sobgeq	r1,BSL1			# if(ml-- != 0) goto BSL1;
		ret				# return(res);
BSL1:		movl	(r2),r5			# save = *mm
		ashl	r3,r5,r6		# X = save << nbi;
		bisl3	r0,r6,(r2)+		# *(mm++) = X | res;
		extzv	r4,r3,r5,r0		# res = save >> rnbits;
		sobgeq	r1,BSL1			# if(ml-- != 0) goto BSL1;
		ret				# return(res);

		.globl	_BnnShiftRight
		.align	1
_BnnShiftRight:			.set	BSRmm,4
				.set	BSRml,8
				.set	BSRnbi,12
		.word	0x40			# Save register r6
		clrl	r0			# res = 0;
		movl	BSRnbi(ap),r3
		jneq	BSR0			# if(nbi) goto BSR0;
		ret				# return(res);
BSR0:		movl	BSRml(ap),r1
		moval	*BSRmm(ap)[r1],r2	# mm = &mm[ml];
		subl3	r3,$32,r4		# lnbi = BN_DIGIT_SIZE - nbi;
		sobgeq	r1,BSR1			# if(ml-- != 0) goto BSR1;
		ret				# return(res);
BSR1:		movl	-(r2),r5		# save = *(--mm);
		extzv	r3,r4,r5,r6		# X = save >> nbi;
		bisl3	r0,r6,(r2)		# *mm = X | res;
		ashl	r4,r5,r0		# res = save << lnbi;
		sobgeq	r1,BSR1			# if(ml-- != 0) goto BSR1;
		ret				# return(res);

		.globl	_BnnAddCarry
		.align	1
_BnnAddCarry:			.set	BACnn,4
				.set	BACnl,8
				.set	BACcar,12
		.word	0
		movl	BACcar(ap),r0
		jeql	BAC3			# if(car == 0) return(car);
		movl	BACnl(ap),r0
		jeql	BAC2			# if(nl == 0) return(1);
		movl	BACnn(ap),r1
		decl	r0			# nl--;
BAC1:		incl	(r1)+			# ++(*nn++);
		bcc	BAC4			# if(!Carry) goto BAC4
		sobgeq	r0,BAC1			# if(nl--) goto BAC1;
BAC2:		movl	$1,r0			# return(1);
BAC3:		ret
BAC4:		clrl	r0			# return(0);
		ret

		.globl	_BnnAdd
		.align	1
_BnnAdd:			.set	BADDmm,4
				.set	BADDml,8
				.set	BADDnn,12
				.set	BADDnl,16
				.set	BADDcar,20
		.word	0
		movl	BADDmm(ap),r0
		movl	BADDnn(ap),r1
		movl	BADDml(ap),r2
		movl	BADDnl(ap),r3
		subl2	r3,r2			# ml -= nl;
		tstl	r3
		jneq	BADD1			# if(nl) goto BADD1
		tstl	BADDcar(ap)
		jneq	BADD7			# if(car) goto BADD7
		clrl	r0
		ret				# return(0);
BADD1:		decl	r3			# nl--;
		tstl	BADDcar(ap)
		jneq	BADD4			# if(car) goto BADD4

BADD2:		addl2	(r1)+,(r0)+		# *(m++) += *(n++);
		bcs	BADD6			# if(C) goto BADD6;
BADD3:		sobgeq	r3,BADD2		# if(nl--) goto BADD2;
BADD30:		clrl	r0
		ret

BADD4:		addl2	(r1)+,(r0)		# *(m) += *(n++);
		bcs	BADD5			# if(C) goto BADD5
		incl	(r0)+			# ++(*(m)++);
		bcc	BADD3			# if(!C) goto BADD3;
		sobgeq	r3,BADD4		# if(nl--) goto BADD4;
		jbr	BADD7			# Vers propagation.
BADD5:		incl	(r0)+			# ++(*(m)++);
BADD6:		sobgeq	r3,BADD4		# if(nl--) goto BADD4;

BADD7:		tstl	r2
		jeql	BADD9			# if(ml == 0) goto BADD9;
		decl	r2			# ml--;
BADD8:		incl	(r0)+			# ++(*m++);
		bcc	BADD30			# if(!C) goto BADD30;
		sobgeq	r2,BADD8		# if(ml--) goto BADD8;
BADD9:		movl	$1,r0
		ret

		.globl	_BnnSubtractBorrow
		.align	1
_BnnSubtractBorrow:		.set	BSBnn,4
				.set	BSBnl,8
				.set	BSBcar,12
		.word	0
		movl	BSBcar(ap),r0
		jneq	BSB2			# if(car) return(car);
		movl	BSBnl(ap),r0
		jeql	BSB20			# if(nl == 0) return(0);
		movl	BSBnn(ap),r1
		decl	r0			# nl--;
BSB1:		decl	(r1)+			# (*nn++)--;
		bcc	BSB3			# if(!Carry) goto BSB3;
		sobgeq	r0,BSB1			# if(nl--) goto BSB1;
BSB20:		clrl	r0			# return(0);
BSB2:		ret
BSB3:		movl	$1,r0			# return(1);
		ret

		.globl	_BnnSubtract
		.align	1
_BnnSubtract:			.set	BSmm,4
				.set	BSml,8
				.set	BSnn,12
				.set	BSnl,16
				.set	BScar,20
		.word	0
		movl	BSmm(ap),r0
		movl	BSnn(ap),r1
		movl	BSml(ap),r2
		movl	BSnl(ap),r3
		subl2	r3,r2			# ml -= nl;
		tstl	r3
		jneq	BS1			# if(nl) goto BS1
		tstl	BScar(ap)
		jeql	BS7			# if(car) goto BS7
		movl	$1,r0
		ret				# return(1);
BS1:		decl	r3			# nl--;
		tstl	BScar(ap)
		jneq	BS4			# if(car) goto BS4

BS2:		mcoml	(r1)+,r4		# X = ~*(n++);
		addl2	r4,(r0)+		# *(m++) += X;
		bcs	BS6			# if(C) goto BS6;
BS3:		sobgeq	r3,BS2			# if(nl--) goto BS2;

BS7:		tstl	r2
		jeql	BS80			# if(ml == 0) goto BS80;
		decl	r2			# ml--;
BS8:		decl	(r0)+			# --(*m++);
		bcc	BS9			# if(!C) goto BS9;
		sobgeq	r2,BS8			# if(ml--) goto BS8;
BS80:		clrl	r0			# return(0);
		ret
BS9:		movl	$1,r0			# return(1);
		ret

BS4:		mcoml	(r1)+,r4		# X = ~*(n++);
		incl	(r0)			# ++(*(m));
		bcs	BS5			# if(C) goto BS5
		addl2	r4,(r0)+		# *(m++) += X;
		bcc	BS3			# if(!C) goto BS3;
		sobgeq	r3,BS4			# if(nl--) goto BS4;
		movl	$1,r0			# return(1);
		ret
BS5:		movl	r4,(r0)+		# *(m++) = X;
BS6:		sobgeq	r3,BS4			# if(nl--) goto BS4;
		movl	$1,r0			# return(1);
		ret

		.globl	_BnnMultiplyDigit
# note1: (2^32-1)*(2^32-1) = 2^64-1 - 2*(2^32-1)
# thus 64 bits accomodates a*b+c+d for all a,b,c,d < 2^32
# note2: inner loop is doubled to avoid unnecessary register moves.
		.align	1
_BnnMultiplyDigit:		.set	BMDpp,4
				.set	BMDpl,8
				.set	BMDmm,12
				.set	BMDml,16
				.set	BMDd,20
		.word	0x1C0		# Save register r6,r7,r8
		movl	BMDd(ap),r2	# r2 = d
		jlss	BMDNeg		# if (d<0) goto BMDNeg
		jneq	BMD1		# if (d) goto BMD1;
		clrl	r0
		ret
BMD1:		cmpl	$1,r2
		bneq	BMD2		# if (c != 1) goto BMD2
		pushl	$0
		pushl	BMDml(ap)
		pushl	BMDmm(ap)
		pushl	BMDpl(ap)
		pushl	BMDpp(ap)
		calls	$7,_BnnAdd	# BnnAdd(pp,pl,mm,ml,0);
		ret
BMD2:		movl	BMDpp(ap),r3	# r3 = p
		movl	BMDmm(ap),r1	# r1 = a
		movl	BMDml(ap),r7	# r7 = ml
		subl3	r7,BMDpl(ap),r8	# r8 = pl-ml
		ashl	$-1,r7,r0	# loop counter r0 = (ml+1)/2
		clrl	r5
		bitl	$1,r7
		bneq	BMDPOddLen	# if (ml is odd) goto BMDPOddLen
		clrl	r7
		jbr	BMDPEvenLen	# if (ml is even) goto BMDPOddLen
BMDPLoop:	emul	(r1)+,r2,$0,r4	# r4:r5 = m[i]*d
		bgeq	BMDMPos1	# if (m[i] < 0) 
		addl2	r2,r5		#    r5 += d
BMDMPos1:	addl2	r7,r4		# r4 = (m[i]*d)%2^32+(m[i-1]*d)/2^32+C
		adwc	$0,r5		# r5 = (m[i]*d)/2^32 + carry1
		addl2	r4,(r3)+	# *p++ += r4
		adwc	$0,r5		# r5 = (m[i]*d)/2^32 + carry2
BMDPOddLen:	emul	(r1)+,r2,$0,r6	# r6:r7 = m[i+1]*d
		bgeq	BMDMPos2	# if (m[i+1] < 0)
		addl2	r2,r7		#    r7 += d
BMDMPos2:	addl2	r5,r6		# r6 = (m[i+1]*d)%2^32+(m[i]*d)/2^32+C
		adwc	$0,r7		# r7 = (m[i+1]*d)/2^32 + carry1
		addl2	r6,(r3)+	# *p++ += r6
		adwc	$0,r7		# r7 = (m[i+1]*d)/2^32 + carry2
BMDPEvenLen:	sobgeq	r0,BMDPLoop	# if ((i+=2)/2 < ml/2) repeat loop
		addl2	r7,(r3)+	# *p += (m[ml-1]*d)/2^32
		bcs	BMDTail
BMDRet0:	clrl	r0
		ret

BMDNeg:		movl	BMDpp(ap),r3	# r3 = p
		movl	BMDmm(ap),r1	# r1 = a
		movl	BMDml(ap),r7	# r7 = ml
		subl3	r7,BMDpl(ap),r8	# r8 = pl-ml
		ashl	$-1,r7,r0	# loop counter r0 = (ml+1)/2
		clrl	r5
		bitl	$1,r7
		bneq	BMDNOddLen
		clrl	r7
		jbr	BMDNEvenLen
BMDNLoop:	movl	(r1)+,r6	# r6 = m[i]
		emul	r6,r2,$0,r4	# r4:r5 = m[i]*d
		bleq	BMDMPos3	# if (m[i] < 0) 
		addl2	r2,r5		#    r5 += d
BMDMPos3:	addl2	r6,r5		# r5 += m[i]
		addl2	r7,r4		# r4 = (m[i]*d)%2^32+(m[i-1]*d)/2^32+C
		adwc	$0,r5		# r5 = (m[i]*d)/2^32 + carry1
		addl2	r4,(r3)+	# *p++ += r4
		adwc	$0,r5		# r5 = (m[i]*d)/2^32 + carry2
BMDNOddLen:	movl	(r1)+,r4	# r6 = m[i+1]
		emul	r4,r2,$0,r6	# r6:r7 = m[i+1]*d
		bleq	BMDMPos4	# if (m[i+1] < 0)
		addl2	r2,r7		#    r7 += d
BMDMPos4:	addl2	r4,r7		# r7 += m[i+1]
		addl2	r5,r6		# r6 = (m[i+1]*d)%2^32+(m[i]*d)/2^32+C
		adwc	$0,r7		# r7 = (m[i+1]*d)/2^32 + carry1
		addl2	r6,(r3)+	# *p++ += r6
		adwc	$0,r7		# r7 = (m[i+1]*d)/2^32 + carry2
BMDNEvenLen:	sobgeq	r0,BMDNLoop	# if ((i+=2)/2 < ml/2) repeat loop
		addl2	r7,(r3)+	# *p += (m[ml-1]*d)/2^32
		bcs	BMDTail
		clrl	r0		# r0 = carry
		ret

BMDTailLoop:	incl	(r3)+
		bcc	BMDRet0
BMDTail:	sobgtr	r8,BMDTailLoop
		movl	$1,r0		# r0 = carry
		ret

		.globl	_BnnDivideDigit
		.align	1
_BnnDivideDigit:		.set	BDDqq,4
				.set	BDDnn,8
				.set	BDDnl,12
				.set	BDDd,16
		.word	0x3C0			# Save register r6,r7,r8,r9
		movl	BDDnl(ap),r2
		movl	BDDd(ap),r3
		moval	*BDDnn(ap)[r2],r0	# nn = &nn[nl];
		decl	r2			# nl--;
		moval	*BDDqq(ap)[r2],r1	# qq = &qq[nl];
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
		movl	r5,r0			# return(X(hight));
		ret

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
		movl	r5,r0			# return(X(hight));
		ret
