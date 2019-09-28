	.verstamp	1 31
 # Copyright     Digital Equipment Corporation & INRIA     1988, 1989
 # Last modified_on Tue Jun 13 20:09:06 GMT+2:00 1989 by shand
 #
 #		KerN for Mips
 #		Paul Zimmermann & Robert Ehrlich & Bernard Paul Serpette
 #		& Mark Shand
 #
	.text	
	.align	2
	.globl	BnSetToZero
	.ent	BnSetToZero			# (nn nd nl)
BnSetToZero:
		lw	$4,0($16)
		addu	$17,2
		sll	$17,2
		addu	$4,$17			# nn = &nn[nd];
		sll	$9,$18,2		# nl <<= 2;
		beq	$18,$0,BSTZ2		# if(nl == 0) goto BSTZ2;
		andi	$8,$9,0x1c
		lw	$10,BSTZTable($8)
		addu	$9,$4			# nl += nn;
		addu	$4,$8
		j	$10
BSTZE8:
BSTZLoop:	addu	$4,32			# nn++;
		sw	$0,-32($4)		# *nn = 0;
BSTZE7:		sw	$0,-28($4)
BSTZE6:		sw	$0,-24($4)
BSTZE5:		sw	$0,-20($4)
BSTZE4:		sw	$0,-16($4)		# *nn = 0;
BSTZE3:		sw	$0,-12($4)
BSTZE2:		sw	$0,-8($4)
BSTZE1:		sw	$0,-4($4)
		bne	$4,$9,BSTZLoop		# if(nn != nl) goto BSTZLoop;
BSTZ2:		lw	$31,0($sp)
		addu	$sp,4
		j	$31			# return;
		.rdata
BSTZTable:
		.word	BSTZE8
		.word	BSTZE1
		.word	BSTZE2
		.word	BSTZE3
		.word	BSTZE4
		.word	BSTZE5
		.word	BSTZE6
		.word	BSTZE7
		.text
	.end	BnSetToZero

	.align	2
	.globl	BnAssign
	.ent	BnAssign			# (mm md nn nd nl)
BnAssign:
		lw	$4,16($sp)
		lw	$4,0($4)
		lw	$8,12($sp)
		addu	$8,2
		sll	$8,2
		addu	$4,$8			# mm = &mm[md];
		lw	$5,8($sp)
		lw	$5,0($5)
		lw	$8,4($sp)
		addu	$8,2
		sll	$8,2
		addu	$5,$8			# nn = &nn[nd];
		lw	$6,0($sp)
		lw	$31,20($sp)
		addu	$sp,24
		ble	$4,$5,BAG2		# if(mm <= nn) goto BAG2;
		sll	$12,$6,2		# X = nl << 2;
		addu	$4,$12			# mm += X;
		addu	$5,$12			# nn += X;
		b	BAG4			# goto BAG4;
BAG1:		lw	$12,($5)		# X = *(nn);
		sw	$12,($4)		# *(mm) = X
		addu	$4,4			# mm++;
		addu	$5,4			# nn++;
		subu	$6,1			# nl--;
BAG2:		bnez	$6,BAG1			# if(nl) goto BAG1;
		j	$31			# return;
BAG3:		subu	$4,4			# mm--;
		subu	$5,4			# nn--;
		lw	$12,($5)		# X = *(nn);
		sw	$12,($4)		# *(mm) = X;
		subu	$6,1			# nl--;
BAG4:		bnez	$6,BAG3			# if(nl) goto BAG3;
		j	$31			# return;
	.end	BnAssign

	.align	2
	.globl	BnSetDigit
	.ent	BnSetDigit			# (nn nd d)
BnSetDigit:
		lw	$4,0($16)
		sll	$17,2
		addu	$4,$17			# nn = nn[nd - 2]
		sw	$18,8($4)		# *(nn + 2) = d;
		lw	$31,0($sp)
		addu	$sp,4
		j	$31			# return;
	.end	BnSetDigit

	.align	2
	.globl	BnGetDigit
	.ent	BnGetDigit			# (nn nd)
BnGetDigit:
		lw	$4,0($16)
		sll	$17,2
		addu	$4,$17			# nn = nn[nd - 2]
		lw	$16,8($4)		# return(*nn);
		lw	$31,0($sp)
		addu	$sp,4
		j	$31
	.end	BnGetDigit

	.align	2
	.globl	BnNumDigits
	.ent	BnNumDigits			# (nn nd nl)
BnNumDigits:
		lw	$4,0($16)
		addu	$17,2
		sll	$17,2
		addu	$4,$17			# nn = &nn[nd]
		sll	$12,$18,2
		addu	$4,$12			# nn = &nn[nl];
		b	BND2			# goto BND2;
BND1:		subu	$18,1			# nl--;
		subu	$4,4			# nn--;
		lw	$12,0($4)		# X = *nn;
		bnez	$12,BND3		# if(X) goto BND3;
BND2:		bnez	$18,BND1		# if(nl) goto BND1;
		li	$16,1			# return(1);
		lw	$31,0($sp)
		addu	$sp,4
		j	$31
BND3:		addu	$16,$18,1		# return(nl);
		lw	$31,0($sp)
		addu	$sp,4
		j	$31
	.end	BnNumDigits

	.align	2
	.globl	BnNumLeadingZeroBitsInDigit
	.ent	BnNumLeadingZeroBitsInDigit	# (nn nd)
BnNumLeadingZeroBitsInDigit:
 # If you change $2 by $16 the Mips Optimizer generates Bad Code! Thanks!
		lw	$4,0($16)
		sll	$17,2
		addu	$4,$17			# nn = nn[nd - 2]
		lw	$4,8($4)		# n = nn[2];
		move	$2,$0			# p = 0;
		bne	$4,0,BLZ2		# if(!d) goto BLZ2;
		li	$16,32			# return(32);
		lw	$31,0($sp)
		addu	$sp,4
		j	$31
BLZ1:		addu	$2,1			# p++;
		sll	$4,1			# d <<= 1;
BLZ2:		bgtz	$4,BLZ1			# while (d>0) goto BLZ1
		lw	$31,0($sp)
		addu	$sp,4
		move	$16,$2
		j	$31			# return(p);
	.end	BnNumLeadingZeroBitsInDigit

	.align	2
	.globl	BnDoesDigitFitInWord
	.ent	BnDoesDigitFitInWord		# (nn nd)
BnDoesDigitFitInWord:
		lw	$4,0($16)
		sll	$17,2
		addu	$4,$17			# nn = nn[nd - 2]
		lw	$4,8($4)		# n = nn[2];
		li	$5,32768
		bgeu	$4,$5,BDFno		# if(n >= 0x8000) goto BDFno;
		li	$16,1			# return(1);
		lw	$31,0($sp)
		addu	$sp,4
		j	$31
BDFno:		move	$16,$0			# return(0);
		lw	$31,0($sp)
		addu	$sp,4
		j	$31
	.end	BnDoesDigitFitInWord

	.align	2
	.globl	BnIsDigitZero
	.ent	BnIsDigitZero			# (nn nd)
BnIsDigitZero:
		lw	$4,0($16)
		sll	$17,2
		addu	$4,$17			# nn = nn[nd - 2]
		lw	$4,8($4)		# n = nn[2];
		seq	$16,$4,0		# return(d == 0);
		lw	$31,0($sp)
		addu	$sp,4
		j	$31
	.end	BnIsDigitZero

	.align	2
	.globl	BnIsDigitNormalized
	.ent	BnIsDigitNormalized		# (nn nd)
BnIsDigitNormalized:
		lw	$4,0($16)
		sll	$17,2
		addu	$4,$17			# nn = nn[nd - 2]
		lw	$4,8($4)		# n = nn[2];
		slt	$16,$4,$0		# return(d < 0);
		lw	$31,0($sp)
		addu	$sp,4
		j	$31
	.end	BnIsDigitNormalized

	.align	2
	.globl	BnIsDigitOdd
	.ent	BnIsDigitOdd			# (nn nd)
BnIsDigitOdd:
		lw	$4,0($16)
		sll	$17,2
		addu	$4,$17			# nn = nn[nd - 2]
		lw	$4,8($4)		# n = nn[2];
		and	$16,$4,1		# return(d & 1);
		lw	$31,0($sp)
		addu	$sp,4
		j	$31
	.end	BnIsDigitOdd

	.align	2
	.globl	BnCompareDigits
	.ent	BnCompareDigits		# (nn nd mm md)
BnCompareDigits:
		lw	$4,12($sp)
		lw	$4,0($4)
		lw	$6,8($sp)
		sll	$6,2
		addu	$4,$6			# nn = nn[nd - 2]
		lw	$4,8($4)		# d1 = nn[2];
		lw	$5,4($sp)
		lw	$5,0($5)
		lw	$6,0($sp)
		sll	$6,2
		addu	$5,$6			# mm = mm[md - 2]
		lw	$5,8($5)		# d2 = mm[2];
		sltu	$8,$5,$4		# t0 = (d2 < d1);
		sltu	$9,$4,$5		# t1 = (d1 < d2);
		sub	$16,$8,$9		# return t0-t1;
		andi	$16,65535
		lw	$31,16($sp)
		addu	$sp,20
		j	$31
	.end	BnCompareDigits

	.align	2
	.globl	BnComplement
	.ent	BnComplement			# (nn nd nl)
BnComplement:
		lw	$4,0($16)
		addu	$17,2
		sll	$17,2
		addu	$4,$17			# nn = &nn[nd]
		sll	$8,$18,2		# bytes = nl*4;
		beq	$18,$0,BCM2		# if(nl == 0) goto BCM2;
		add	$8,$4			# lim = nn+bytes;
BCM1:
		lw	$14,0($4)		# X = *nn;
		nor	$14,$0			# X ^= -1;
		sw	$14,0($4)		# *nn = X
		addu	$4,4			# nn++;
		bne	$8,$4,BCM1		# if(nl != 0) goto BCM1;
BCM2:		lw	$31,0($sp)
		addu	$sp,4
		j	$31			# return;
	.end	BnComplement

	.align	2
	.globl	BnAndDigits
	.ent	BnAndDigits			# (nn nd mm md)
BnAndDigits:
		lw	$4,12($sp)
		lw	$4,0($4)
		lw	$6,8($sp)
		sll	$6,2
		addu	$4,$6			# nn = nn[nd - 2]
		lw	$14,8($4)		# d1 = nn[2];
		lw	$5,4($sp)
		lw	$5,0($5)
		lw	$6,0($sp)
		sll	$6,2
		addu	$5,$6			# mm = mm[md - 2]
		lw	$5,8($5)		# d2 = mm[2];
		and	$14,$5			# d1 &= d2;
		sw	$14,8($4)		# nn[2] = d1;
		lw	$31,16($sp)
		addu	$sp,20
		j	$31			# return;
	.end	BnAndDigits

	.align	2
	.globl	BnOrDigits
	.ent	BnOrDigits			# (nn nd mm md)
BnOrDigits:
		lw	$4,12($sp)
		lw	$4,0($4)
		lw	$6,8($sp)
		sll	$6,2
		addu	$4,$6			# nn = nn[nd - 2]
		lw	$14,8($4)		# d1 = nn[2];
		lw	$5,4($sp)
		lw	$5,0($5)
		lw	$6,0($sp)
		sll	$6,2
		addu	$5,$6			# mm = mm[md - 2]
		lw	$5,8($5)		# d2 = mm[2];
		or	$14,$5			# d1 |= d2;
		sw	$14,8($4)		# nn[2] = d1;
		lw	$31,16($sp)
		addu	$sp,20
		j	$31			# return;
	.end	BnOrDigits

	.align	2
	.globl	BnXorDigits
	.ent	BnXorDigits			# (nn nd mm md)
BnXorDigits:
		lw	$4,12($sp)
		lw	$4,0($4)
		lw	$6,8($sp)
		sll	$6,2
		addu	$4,$6			# nn = nn[nd - 2]
		lw	$14,8($4)		# d1 = nn[2];
		lw	$5,4($sp)
		lw	$5,0($5)
		lw	$6,0($sp)
		sll	$6,2
		addu	$5,$6			# mm = mm[md - 2]
		lw	$5,8($5)		# d2 = mm[2];
		xor	$14,$5			# d1 ^= d2;
		sw	$14,8($4)		# nn[2] = d1;
		lw	$31,16($sp)
		addu	$sp,20
		j	$31			# return;
	.end	BnXorDigits

	.align	2
	.globl	BnShiftLeft
	.ent	BnShiftLeft			# (mm md ml nn nd nbi)
BnShiftLeft:
		lw	$4,20($sp)
		lw	$4,0($4)
		lw	$8,16($sp)
		addu	$8,2
		sll	$8,2
		addu	$4,$8			# mm = &mm[md];
		lw	$5,12($sp)
		lw	$6,0($sp)
		move	$2,$0			# res = 0;
		beq	$6,0,BSL2		# if(nbi == 0) goto BSL2;
		li	$14,32			# rnbi = 32;
		subu	$14,$6			# rnbi -= nbi;
		beq	$5,0,BSL2		# if(ml == 0) goto BSL2;
		sll	$15,$5,2		# bytes = 4*ml;
		addu	$15,$4			# lim = mm+size;
BSL1:		lw	$13,0($4)		# save = *mm;
		sll	$12,$13,$6		# X = save << nbi;
		or	$12,$2			# X |= res;
		sw	$12,0($4)		# *mm = X;
		addu	$4,4			# mm++;
		srl	$2,$13,$14		# res = save >> rnbi;
		bne	$4,$15,BSL1		# if(mm != lim) goto BSL1;
BSL2:		lw	$4,8($sp)
		lw	$4,0($4)
		lw	$5,4($sp)
		sll	$5,2
		addu	$4,$5			# nn = nn[nd - 2]
		sw	$2,8($4)		# nn[2] = res;
		lw	$31,24($sp)
		addu	$sp,28
		j	$31
	.end	BnShiftLeft

	.align	2
	.globl	BnShiftRight
	.ent	BnShiftRight			# (mm md ml nn nd nbi)
BnShiftRight:
		lw	$4,20($sp)
		lw	$4,0($4)
		lw	$8,16($sp)
		addu	$8,2
		sll	$8,2
		addu	$4,$8			# mm = &mm[md];
		lw	$5,12($sp)
		lw	$6,0($sp)
		move	$2,$0			# res = 0;
		beq	$6,0,BSR2		# if(nbi == 0) goto BSR2;
		sll	$14,$5,2		# bytes = ml*4;
		beq	$5,0,BSR2		# if(ml == 0) goto BSR2
		addu	$15,$4,$14		# lim = mm; mm += bytes;
		li	$14,32			# lnbi = 32;
		subu	$14,$6			# lnbi -= nbi;
BSR1:		subu	$15,4			# mm--;
		lw	$13,0($15)		# save = *mm;
		srl	$12,$13,$6		# X = save >> nbi;
		or	$12,$2			# X |= res
		sw	$12,0($15)		# *mm = X;
		sll	$2,$13,$14		# res = save << lnbi;
		bne	$15,$4,BSR1		# if(mm != lim) goto BSR1;
BSR2:		lw	$4,8($sp)
		lw	$4,0($4)
		lw	$5,4($sp)
		sll	$5,2
		addu	$4,$5			# nn = nn[nd - 2]
		sw	$2,8($4)		# nn[2] = res;
		lw	$31,24($sp)
		addu	$sp,28
		j	$31			# return(res);
	.end	BnShiftRight

	.align	2
	.globl	BnAddCarry
	.ent	BnAddCarry			# (nn nd nl car)
BnAddCarry:
		lw	$4,12($sp)
		lw	$4,0($4)
		lw	$8,8($sp)
		addu	$8,2
		sll	$8,2
		addu	$4,$8			# nn = &nn[nd];
		lw	$5,4($sp)
		lw	$6,0($sp)
		lw	$31,16($sp)
		addu	$sp,20
		beq	$6,0,BAC3		# if(car == 0) return(0);
		beq	$5,0,BAC2		# if(nl == 0) return(1);
BAC1:		subu	$5,1			# nl--;
		lw	$9,0($4)		# X = *nn;
		addu	$9,1			# X++;
		sw	$9,0($4)		# *nn = X;
		addu	$4,4			# nn++;
		bne	$9,$0,BAC3		# if(X) goto BAC3;
		bne	$5,$0,BAC1		# if(nl) goto BAC1;
BAC2:		li	$16,1			# return(1);
		j	$31
BAC3:		li	$16,0			# return(0);
		j	$31
	.end	BnAddCarry

	.align	2
	.globl	BnAdd
	.ent	BnAdd				# (mm md ml nn nd nl car)
BnAdd:
		lw	$4,24($sp)
		lw	$4,0($4)
		lw	$8,20($sp)
		addu	$8,2
		sll	$8,2
		addu	$4,$8			# mm = &mm[md];
		lw	$5,16($sp)
		lw	$6,12($sp)
		lw	$6,0($6)
		lw	$8,8($sp)
		addu	$8,2
		sll	$8,2
		addu	$6,$8			# nn = &nn[nd];
		lw	$7,4($sp)
		lw	$16,0($sp)		# c = carryin;
		lw	$31,28($sp)
		addu	$sp,32
		subu	$5,$7			# ml -= nl;
		bne	$7,$0,BADD1		# if(nl) goto BADD1;
		bne	$16,$0,BADD2		# if(c) goto BADD2;
BADD0:		j	$31			# return(c)
BADD1:		subu	$7,1			# nl--;
		lw	$15,0($4)		# save = *mm;
		addu	$4,4			# mm++;
		addu	$15,$16			# save += c;
		sltu	$14,$15,$16		# c' = (save < c);
		lw	$10,0($6)		# X = *nn;
		addu	$6,4			# nn++;
		addu	$10,$15			# X += save;
		sw	$10,-4($4)		# mm[-1] = X
		sltu	$15,$10,$15		# save = (X < save);
		addu	$16,$15,$14		# c = c' + save;
		bne	$7,$0,BADD1		# if(nl) goto BADD1;

BADD2:		beq	$5,0,BADD0		# if(ml == 0) return(c);
		beq	$16,0,BADD0		# if(c == 0) return(0);
BADD3:		subu	$5,1			# ml--;
		lw	$9,0($4)		# X = *mm;
		addu	$9,1			# X++;
		sw	$9,0($4)		# *mm = X;
		addu	$4,4			# mm++;
		bne	$9,$0,BADD4		# if(X) return(0);
		bne	$5,$0,BADD3		# if(ml) goto BADD3;
		j	$31			# return(1);
BADD4:		move	$16,$0			# return(0)
		j	$31
	.end	BnAdd

	.align	2
	.globl	BnSubtractBorrow
	.ent	BnSubtractBorrow		# (nn nd nl car)
BnSubtractBorrow:
		lw	$4,12($sp)
		lw	$4,0($4)
		lw	$8,8($sp)
		addu	$8,2
		sll	$8,2
		addu	$4,$8			# nn = &nn[nd];
		lw	$5,4($sp)
		lw	$6,0($sp)
		lw	$31,16($sp)
		addu	$sp,20
		bne	$6,0,BSB3		# if(car) return(1);
		beq	$5,0,BSB2		# if(nl == 0) return(0);
BSB1:		subu	$5,1			# nl--;
		lw	$9,0($4)		# X = *nn;
		move	$10,$9			# Y = X;
		subu	$9,1			# X--;
		sw	$9,0($4)		# *nn = X;
		addu	$4,4			# nn++;
		bne	$10,$0,BSB3		# if(Y) return(1);
		bne	$5,$0,BSB1		# if(nl) goto BSB1;
BSB2:		li	$16,0			# return(0);
		j	$31
BSB3:		li	$16,1			# return(1);
		j	$31
	.end	BnSubtractBorrow

	.align	2
	.globl	BnSubtract
	.ent	BnSubtract 2			# (mm md ml nn nd nl car)
BnSubtract:
		lw	$4,24($sp)
		lw	$4,0($4)
		lw	$8,20($sp)
		addu	$8,2
		sll	$8,2
		addu	$4,$8			# mm = &mm[md];
		lw	$5,16($sp)
		lw	$6,12($sp)
		lw	$6,0($6)
		lw	$8,8($sp)
		addu	$8,2
		sll	$8,2
		addu	$6,$8			# nn = &nn[nd];
		lw	$7,4($sp)
		lw	$14,0($sp)		# c = carryin;
		lw	$31,28($sp)
		addu	$sp,32
		subu	$5,$7			# ml -= nl;
		bne	$7,$0,BS1		# if(nl) goto BS1;
		beq	$14,$0,BS7		# if(!c) goto BS7;
BS0:		li	$16,1			# return(1)
		j	$31
BS1:		subu	$7,1			# nl--;
		lw	$15,0($4)		# save = *mm;
		lw	$12,0($6)		# invn = *nn;
		addu	$6,4			# nn++;
		nor	$12,$0			# invn ^= -1;
		addu	$14,$15			# c += save;
		bgeu	$14,$15,BS2		# if(c >= save) goto BS2
		sw	$12,0($4)		# *mm = invn
		addu	$4,4			# mm++;
		li	$14,1			# c = 1;
		bne	$7,$0,BS1		# if(nl) goto BS1;
		li	$16,1			# return(1)
		j	$31
BS2:		addu	$14,$12			# c += invn;
		sw	$14,0($4)		# *mm = c;
		addu	$4,4			# mm++;
		bgeu	$14,$12,BS3		# if(c >= invn) goto BS3;
		li	$14,1			# c = 1;
		bne	$7,$0,BS1		# if(nl) goto BS1;
		li	$16,1			# return(1)
		j	$31
BS3:		move	$14,$0			# c = 0;
		bne	$7,$0,BS1		# if(nl) goto BS1;
BS7:		beq	$5,0,BS9		# if(ml == 0) return(0);
BS8:		subu	$5,1			# ml--;
		lw	$9,0($4)		# X = *mm;
		move	$10,$9			# Y = X
		subu	$9,1			# X--;
		sw	$9,0($4)		# *mm = X;
		addu	$4,4			# mm++;
		bne	$10,$0,BS0		# if(X) return(1);
		bne	$5,$0,BS8		# if(ml) goto BS8;
BS9:		move	$16,$0			# return(0);
		j	$31
	.end	BnSubtract

	.align	2
	.globl	BnMultiplyDigit
	.ent	BnMultiplyDigit		# (pp pd pl mm md ml nn nd)
BnMultiplyDigit:
		lw	$4,28($sp)
		lw	$4,0($4)
		lw	$8,24($sp)
		addu	$8,2
		sll	$8,2
		addu	$4,$8			# pp = &pp[pd];
		lw	$5,20($sp)
		lw	$6,16($sp)
		lw	$6,0($6)
		lw	$8,12($sp)
		addu	$8,2
		sll	$8,2
		addu	$6,$8			# mm = &mm[md];
		lw	$7,8($sp)
		lw	$8,4($sp)
		lw	$8,0($8)
		lw	$9,0($sp)
		sll	$9,2
		addu	$8,$9			# nn = nn[nd - 2]
		lw	$8,8($8)		# d = nn[2];
		move	$9,$0			# low = 0;
		beq	$8,0,BMD7		# if(d == 0) return(0);
		bne	$8,1,BMD2		# if(d != 1) goto BMD2;
		addu	$sp,4
		sw	$0,0($sp)
		b	BnAdd			# BnAdd(pp,pd,pl,mm,md,ml,0);
BMD2:		subu	$5,$7			# pl -= ml;
		move	$11,$0			# carry1 = 0
		move	$10,$0			# inc = 0
		beq	$7,$0,BMD6		# if(ml==0) goto BMD6;
		sll	$7,$7,2			# ml *= 4;
		addu	$7,$7,$6		# ml = &mm[ml]
BMD3:		lw	$13,0($6)		# X = *mm;
		addu	$6,4			# mm++;
		multu	$13,$8			# HI-LO = X * d;
		sltu	$12,$15,$10		# carry2 = (save < inc)
		lw	$15,0($4)		# save = *pp;
		addu	$9,$11			# low += carry1;
		addu	$9,$12			# low += carry2;
		addu	$15,$15,$9		# save = save + low;
		sltu	$11,$15,$9		# carry1 = (save < low)
		addu	$4,4			# pp++;
		mflo	$10			# inc = LO;
		mfhi	$9			# low = HI;
		addu	$15,$10			# save += inc;
		sw	$15,-4($4)		# *pp = save;
		bne	$7,$6,BMD3		# if(mm != ml) goto BMD3;
BMD6:		sltu	$12,$15,$10		# carry2 = (save < inc)
		lw	$15,($4)		# save = *pp;
		addu	$9,$11			# low += carry1;
		addu	$9,$12			# low += carry2;
		addu	$9,$15			# low += save;
		sw	$9,0($4)		# *pp = low;
		addu	$4,4			# pp++;
		bltu	$9,$15,BMD8		# if(low < save) goto BMD8;
BMD7:		lw	$31,32($sp)
		addu	$sp,36
		move	$16,$0			# return(0);
		j	$31
BMD8:		subu	$5,1			# pl--;
		beq	$5,0,BMD10		# if(ml == 0) return(1);
BMD9:		subu	$5,1			# pl--;
		lw	$9,0($4)		# X = *pp;
		addu	$9,1			# X++;
		sw	$9,0($4)		# *pp = X;
		addu	$4,4			# pp++;
		bne	$9,$0,BMD7		# if(X) return(0);
		bne	$5,$0,BMD9		# if(pl) goto BMD9;
BMD10:		li	$16,1			# return(1);
		lw	$31,32($sp)
		addu	$sp,36
		j	$31
	.end	BnMultiplyDigit

	.align	2
	.globl	BnDivideDigit
	.ent	BnDivideDigit			# (qq qd rr rd nn nd nl d dd)
BnDivideDigit:
		subu	$sp,8
		sw	$24,0($sp)
		sw	$25,4($sp)
		lw	$4,40($sp)
		lw	$10,0($4)
		lw	$8,36($sp)
		addu	$8,2
		sll	$8,2
		addu	$10,$8			# qq = &qq[qd];
		lw	$5,24($sp)
		lw	$5,0($5)
		lw	$8,20($sp)
		addu	$8,2
		sll	$8,2
		addu	$5,$8			# nn = &nn[nd];
		lw	$6,16($sp)		# nl;
		lw	$7,12($sp)
		lw	$7,0($7)
		lw	$8,8($sp)
		sll	$8,2
		addu	$7,$8			# d = d[dd - 2]
		lw	$7,8($7)		# d = d[2];

		move	$11,$31
		move	$9,$5
		move	$8,$6
		move	$4,$7
					# k = BnNumLeadingZeroBitsInDigit(d);
                move    $6,$0			# p = 0;
                bne     $4,0,zBLZ2		# if(!d) goto BLZ2;
                li      $6,32			# return(32);
                b	zBLZ3
zBLZ1:		addu    $6,1			# p++;
                sll     $4,1                    # d <<= 1;
zBLZ2:		bgtz    $4,zBLZ1		# while (d>0) goto BLZ1
					# {k=BnNumLeadingZeroBitsInDigit(d);}
		beq	$6,$0,BDD1		# if(k == 0) goto BDD1;
zBLZ3:						# BnShiftLeft(nn, nl, k);
		move	$4,$9
		move	$5,$8
                move    $2,$0                   # res = 0;
                beq     $6,0,zBSL2               # if(nbi == 0) goto BSL2;
                li      $14,32                  # rnbi = 32;
                subu    $14,$6                  # rnbi -= nbi;
                beq     $5,0,zBSL2               # if(ml == 0) goto BSL2;
                sll     $15,$5,2                # bytes = 4*ml;
                addu    $15,$4                  # lim = mm+size;
zBSL1:          lw      $13,0($4)               # save = *mm;
                sll     $12,$13,$6              # X = save << nbi;
                or      $12,$2                  # X |= res;
                sw      $12,0($4)               # *mm = X;
                addu    $4,4                    # mm++;
                srl     $2,$13,$14              # res = save >> rnbi;
                bne     $4,$15,zBSL1             # if(mm != lim) goto BSL1;
zBSL2:						# BnShiftLeft(nn, nl, k);
		lw	$31,0($10)		# first_qq = *qq;
		move	$5,$8			# o_nl = nl;
		sll	$7,$6			# d <<= k;
BDD1:		sll	$3,$8,2
		addu	$9,$3			# nn = &nn[nl];
		subu	$8,1			# nl--;
		subu	$3,4
		addu	$10,$3			# qq = &qq[nl];
		srl	$25,$7,16		# ch = HIGH(d);
		and	$2,$7,65535		# cl = LOW(d);
		subu	$9,4			# nn--;
		lw	$13,0($9)		# rl = *nn;
		beq	$8,0,BDDx		# if(nl == 0) goto BDDx;
BDD2:		subu	$8,1			# nl--;
		move	$12,$13			# rh = rl;
		subu	$9,4			# nn--;
		lw	$13,0($9)		# rl = *nn;
		divu	$14,$12,$25		# qa = rh/ch;
		multu	$2,$14			# HI-LO = cl * qa;
		mflo	$24			# pl = LO;
		multu	$25,$14			# HI-LO = ch * qa;
		mflo	$15			# ph = LO;
		srl	$3,$24,16		# X = HIGH(pl);
		addu	$15,$3			# ph += X;
		sll	$24,16			# pl = L2H(pl);
		bgtu	$15,$12,BDD84		# if(ph > rh) goto BDD84;
		bne	$15,$12,BDD88		# if(ph != rh) goto BDD88;
		bleu	$24,$13,BDD88		# if(pl <= rl) goto BDD88;
BDD84:		sll	$3,$2,16		# X = L2H(cl);
BDD85:		subu	$14,1			# qa--;
		bleu	$3,$24,BDD86		# if(X <= pl) goto BDD86;
		subu	$15,1			# ph--;
BDD86:		subu	$24,$3			# pl -= X;
		subu	$15,$25			# ph -= ch;
		bgtu	$15,$12,BDD85		# if(ph > rh) goto BDD85;
		bne	$15,$12,BDD88		# if(ph != rh) goto BDD88;
		bgtu	$24,$13,BDD85		# if(pl > rl) goto BDD85;
BDD88:		bleu	$24,$13,BDD89		# if(pl <= rl) goto BDD89;
		subu	$12,1			# rh--;
BDD89:		subu	$13,$24			# rl -= pl;
		subu	$12,$15			# rh -= ph;
		subu	$10,4			# qq--;
		sll	$3,$14,16		# X = L2H(qa);
		sw	$3,0($10)		# *qq = X;
		sll	$3,$12,16		# X = L2H(rh);
		srl	$14,$13,16		# qa = HIGH(rl);
		or	$14,$3			# qa |= X;
		divu	$14,$14,$25		# qa /= ch;
		multu	$2,$14			# HI-LO = cl * qa;
		mflo	$24			# pl = LO;
		multu	$25,$14			# HI-LO = ch * qa;
		mflo	$15			# ph = LO;
		srl	$3,$24,16		# X = HIGH(pl);
		addu	$15,$3			# ph += X;
		and	$24,65535		# pl = LOW(pl);
		and	$3,$15,65535		# X = LOW(ph);
		sll	$3,16			# X = L2H(X)
		or	$24,$3			# pl |= X;
		srl	$15,16			# ph = HIGH(ph);
		bgtu	$15,$12,BDD41		# if(ph > rh) goto BDD841;
		bne	$15,$12,BDD44		# if(ph != rh) goto BDD44;
		bleu	$24,$13,BDD44		# if(pl <= rl) goto BDD44;
BDD41:		subu	$14,1			# qa--;
		bleu	$7,$24,BDD42		# if(d <= pl) goto BDD42;
		subu	$15,1			# ph--;
BDD42:		subu	$24,$7			# pl -= d;
		bgtu	$15,$12,BDD41		# if(ph > rh) goto BDD841;
		bne	$15,$12,BDD44		# if(ph == rh) goto BDD44;
		bgtu	$24,$13,BDD41		# if(pl > rl) goto BDD41;
BDD44:		subu	$13,$24			# rl -= pl;
		lw	$3,0($10)		# X = *qq;
		or	$3,$14			# X |= qa
		sw	$3,0($10)		# *qq = X;
		bne	$8,0,BDD2
BDDx:		beq	$6,0,BDD46		# if(k = 0) goto BDD46;
		bleu	$10,$9,BDD45		# if(qq < nn) goto BDD45;
		sll	$3,$5,2
		addu	$3,$9			# X = &nn[o_nl];
		bleu	$3,$10,BDD45		# if(X <= qq) goto BDD45;
		subu	$5,$10,$9		# o_nl = qq - nn;
		srl	$5,2			# o_nl >>= 2;
		lw	$8,0($10)		# X = *qq;
		sw	$31,0($10)		# *qq = first_qq;
		addu	$5,1			# o_nl++;
		move	$4,$9			# BnShiftRight(nn, o_nl, k);
		jal	zBnShiftRight
		sw	$8,0($10)		# X = *qq;
		b	BDD46
BDD45:		bne	$10,$9,BDD451		# if(qq == nn) goto BDD451;
		subu	$5,1			# o_nl--;
		sll	$5,2
		addu	$9,$5			# nn = &nn[o_nl];
		li	$5,1			# o_nl = 1;
BDD451:		move	$4,$9			# BnShiftRight(nn, o_nl, k);
		jal	zBnShiftRight
BDD46:		srl	$2,$13,$6		# return(rl >> k);
		lw	$4,32($sp)
		lw	$4,0($4)
		lw	$5,28($sp)
		sll	$5,2
		addu	$4,$5			# rr = rr[rd - 2]
		sw	$2,8($4)		# rr[2] = res;
		lw	$31,44($sp)
		lw	$24,0($sp)
		lw	$25,4($sp)
		addu	$sp,48
		j	$31
	.end	BnDivideDigit

	.align	2
	.globl	zBnShiftRight
	.ent	zBnShiftRight			# (mm ml nbi)
zBnShiftRight:
		move	$2,$0			# res = 0;
		beq	$6,0,zBSR2		# if(nbi == 0) goto BSR2;
		sll	$14,$5,2		# bytes = ml*4;
		beq	$5,0,zBSR2		# if(ml == 0) goto BSR2
		addu	$15,$4,$14		# lim = mm; mm += bytes;
		li	$14,32			# lnbi = 32;
		subu	$14,$6			# lnbi -= nbi;
zBSR1:		subu	$15,4			# mm--;
		lw	$3,0($15)		# save = *mm;
		srl	$12,$3,$6		# X = save >> nbi;
		or	$12,$2			# X |= res
		sw	$12,0($15)		# *mm = X;
		sll	$2,$3,$14		# res = save << lnbi;
		bne	$15,$4,zBSR1		# if(mm != lim) goto BSR1;
zBSR2:		j	$31			# return(res);
	.end	zBnShiftRight
