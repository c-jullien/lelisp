



		SECTION 10

		XREF	BnSetToZero		
BnSetToZero	MOVE.L	(a1),a0
		MOVE.L	a2,d0
		LEA	8(a0,d0.L*4),a0		
		MOVE.L	a3,d0
		DBF	d0,BSTZ1		
		RTS				
BSTZ1		CLR.L	(a0)+			
		DBF	d0,BSTZ1		
		RTS				

		XREF	BnAssign
BnAssign
BAGnl	EQU	0
BAGnd	EQU	4
BAGnn	EQU	8
BAGmd	EQU	12
BAGmm	EQU	16
BAGret	EQU	20
		MOVE.L	BAGmm(a7),a0
		MOVE.L	(a0),a0
		MOVE.L	BAGnn(a7),a6
		MOVE.L	(a6),a6
		MOVE.L	BAGmd(a7),d0
		MOVE.L	BAGnd(a7),d1
		LEA	8(a0,d0.L*4),a0		
		LEA	8(a6,d1.L*4),a6		
		MOVE.L	BAGnl(a7),d0
		LEA	BAGret(a7),a7
		CMP.L	a6,a0
		BCC	BAG2			
		DBF	d0,BAG1			
		RTS				
BAG1		MOVE.L	(a6)+,(a0)+		
		DBF	d0,BAG1			
		RTS				
BAG2		BLS	BAG4			
		LEA	0(a0,d0.L*4),a0		
		LEA	0(a6,d0.L*4),a6		
		DBF	d0,BAG3			
		RTS				
BAG3		MOVE.L	-(a6),-(a0)		
		DBF	d0,BAG3			
BAG4		RTS				

		XREF	BnSetDigit		
BnSetDigit	MOVE.L	(a1),a0
		MOVE.L	a2,d0
		LEA	8(a0,d0.L*4),a0		
		MOVE.L	a3,(a0)			
		RTS

		XREF	BnGetDigit		
BnGetDigit	MOVE.L	(a1),a0
		MOVE.L	a2,d0
		MOVE.L	8(a0,d0.L*4),a1		
		RTS

		XREF	BnNumDigits		
BnNumDigits	MOVE.L	(a1),a0
		MOVE.L	a2,d1
		MOVE.L	a3,d0
		ADD.L	d0,d1			
		LEA	8(a0,d1.L*4),a0		
		DBF	d0,BND1			
		MOVEQ	#1,d0
		MOVE.L	d0,a1
		RTS				
BND1		TST.L	-(a0)
		BNE	BND3			
		DBF	d0,BND1			
		MOVEQ	#1,d0
		MOVE.L	d0,a1
		RTS				
BND3		ADDQ.L	#1,d0
		MOVE.L	d0,a1
		RTS				

		XREF	BnNumLeadingZeroBitsInDigit	
BnNumLeadingZeroBitsInDigit
		MOVE.L	(a1),a0
		MOVE.L	a2,d1
		BFFFO	8(a0,d1.L*4){#0:#32},d0
		MOVE.L	d0,a1
		RTS

		XREF	BnDoesDigitFitInWord	
BnDoesDigitFitInWord
		MOVE.L	(a1),a0
                MOVE.L    a2,d1
                MOVE.L    8(a0,d1.L*4),d1        
                CMP.L    #0x7FFF,d1
                BHI     BDFno
                RTS
BDFno           CLR.L    d0
		MOVE.L	d0,a1
                RTS

		XREF	BnIsDigitZero		
BnIsDigitZero	CLR.L	d0
		MOVE.L	(a1),a0
		MOVE.L	a2,d1
		TST.L	8(a0,d1.L*4)		
		SEQ	d0
		MOVE.L	d0,a1
		RTS				

		XREF	BnIsDigitNormalized	
BnIsDigitNormalized
		CLR.L	d0
		MOVE.L	(a1),a0
		MOVE.L	a2,d1
		TST.W	8(a0,d1.L*4)		
		SMI	d0
		MOVE.L	d0,a1
		RTS				

		XREF	BnIsDigitOdd		
BnIsDigitOdd	CLR.L	d0
		MOVE.L	(a1),a0
		MOVE.L	a2,d1
		MOVE.W	10(a0,d1.L*4),cc
		SCS	d0
		MOVE.L	d0,a1
		RTS

		XREF	BnCompareDigits
BnCompareDigits
BCDnd	EQU 	0
BCDnn	EQU	4
BCDmd	EQU	8
BCDmm	EQU	12
BCDret	EQU	16
		MOVE.L	BCDmd(a7),d0
		MOVE.L	BCDmm(a7),a0
		MOVE.L	(a0),a0
		MOVE.L	8(a0,d0.L*4),d1		
		MOVE.L	BCDnd(a7),d0
		MOVE.L	BCDnn(a7),a0
		LEA	BCDret(a7),a7
		MOVE.L	(a0),a0
		CMP.L	8(a0,d0.L*4),d1		
		BHI	BCDsup			
		SNE	d0
		EXT.W	d0
		MOVE.L	d0,a1
		RTS
BCDsup		MOVEQ	#1,d0			
		MOVE.L	d0,a1
		RTS
			
		XREF	BnComplement		
BnComplement	MOVE.L	(a1),a0
		MOVE.L	a2,d0
		LEA	8(a0,d0.L*4),a0		
		MOVE.L	a3,d0
		DBF	d0,BCM1
		RTS
BCM1		NOT.L	(a0)+			
		DBF	d0,BCM1			
		RTS

		XREF	BnAndDigits
BnAndDigits
BADnd	EQU	0
BADnn	EQU	4
BADmd	EQU	8
BADmm	EQU	12
BADret	EQU	16
		MOVE.L	BADmm(a7),a0
		MOVE.L	BADmd(a7),d0
		MOVE.L	(a0),a0
		LEA	8(a0,d0.L*4),a0		
		MOVE.L	BADnn(a7),a6
		MOVE.L	BADnd(a7),d0
		MOVE.L	(a6),a6
		MOVE.L	8(a6,d0.L*4),d0		
		AND.L	d0,(a0)			
		LEA	BADret(a7),a7
		RTS

		XREF	BnOrDigits
BnOrDigits
BODnd	EQU	0
BODnn	EQU	4
BODmd	EQU	8
BODmm	EQU	12
BODret	EQU	16
		MOVE.L	BODmm(a7),a0
		MOVE.L	BODmd(a7),d0
		MOVE.L	(a0),a0
		LEA	8(a0,d0.L*4),a0		
		MOVE.L	BODnn(a7),a6
		MOVE.L	BODnd(a7),d0
		MOVE.L	(a6),a6
		MOVE.L	8(a6,d0.L*4),d0		
		OR.L	d0,(a0)			
		LEA	BODret(a7),a7
		RTS

		XREF	BnXorDigits
BnXorDigits
BXDnd	EQU	0
BXDnn	EQU	4
BXDmd	EQU	8
BXDmm	EQU	12
BXDret	EQU	16
		MOVE.L	BXDmm(a7),a0
		MOVE.L	BXDmd(a7),d0
		MOVE.L	(a0),a0
		LEA	8(a0,d0.L*4),a0		
		MOVE.L	BXDnn(a7),a6
		MOVE.L	BXDnd(a7),d0
		MOVE.L	(a6),a6
		MOVE.L	8(a6,d0.L*4),d0		
		EOR.L	d0,(a0)			
		LEA	BXDret(a7),a7
		RTS

		XREF	BnShiftLeft
BnShiftLeft
BSLnbi	EQU	0
BSLnd	EQU	4
BSLnn	EQU	8
BSLml	EQU	12
BSLmd	EQU	16
BSLmm	EQU	20
BSLret	EQU	24
		MOVE.L	BSLnbi(a7),d0
		BNE	BSL0			
		MOVE.L	BSLnn(a7),a0
		MOVE.L	BSLnd(a7),d1
		MOVE.L	(a0),a0
		MOVE.L	d0,8(a0,d1.L*4)	
		LEA	BSLret(a7),a7
		RTS
BSL0		MOVE.L	BSLmm(a7),a0
		MOVE.L	BSLmd(a7),d1
		MOVE.L	(a0),a0
		LEA	8(a0,d1.L*4),a0		
		CLR.L	d1
		MOVEM.L	#0x3C00,-(a7)	
		MOVE.L	BSLml + 16(a7),d2
		MOVEQ	#32,d3
		SUB.L	d0,d3			
		BRA	BSL2			
BSL1		MOVE.L	(a0),d4			
		MOVE.L	d4,d5			
		LSL.L	d0,d5			
		OR.L	d1,d5			
		MOVE.L	d5,(a0)+			
		MOVE.L	d4,d1			
		LSR.L	d3,d1			
BSL2		DBF	d2,BSL1			
		MOVEM.L	(a7)+,#0x003C		
		MOVE.L	BSLnn(a7),a0
		MOVE.L	BSLnd(a7),d0
		MOVE.L	(a0),a0
		MOVE.L	d1,8(a0,d0.L*4)	
		LEA	BSLret(a7),a7
		RTS

		XREF	BnShiftRight
BnShiftRight
BSRnbi	EQU	0
BSRnd	EQU	4
BSRnn	EQU	8
BSRml	EQU	12
BSRmd	EQU	16
BSRmm	EQU	20
BSRret	EQU	24
		MOVE.L	BSRnbi(a7),d0
		BNE	BSR0			
		MOVE.L	BSRnn(a7),a0
		MOVE.L	BSRnd(a7),d1
		MOVE.L	(a0),a0
		MOVE.L	d0,8(a0,d1.L*4)	
		LEA	BSRret(a7),a7
		RTS
BSR0		MOVE.L	BSRmm(a7),a0
		MOVE.L	BSRmd(a7),d1
		MOVEM.L	#0x3C00,-(a7)		
		MOVE.L	BSRml + 16(a7),d2
		ADD.L	d2,d1			
		MOVE.L	(a0),a0
		LEA	8(a0,d1.L*4),a0		
		CLR.L	d1
		MOVEQ	#32,d3
		SUB.L	d0,d3			
		BRA	BSR2			
BSR1		MOVE.L	-(a0),d4			
		MOVE.L	d4,d5			
		LSR.L	d0,d5			
		OR.L	d1,d5			
		MOVE.L	d5,(a0)			
		MOVE.L	d4,d1			
		LSL.L	d3,d1			
BSR2		DBF	d2,BSR1			
		MOVEM.L	(a7)+,#0x003C		
		MOVE.L	BSRnn(a7),a0
		MOVE.L	BSRnd(a7),d0
		MOVE.L	(a0),a0
		MOVE.L	d1,8(a0,d0.L*4)	
		LEA	BSRret(a7),a7
		RTS

		XREF	BnAddCarry
BnAddCarry
BACcar	EQU	0
BACnl	EQU	4
BACnd	EQU	8
BACnn	EQU	12
BACret	EQU	16
		MOVE.L	BACcar(a7),d0
		BEQ	BAC2			
		MOVE.L	BACnl(a7),d0
		BEQ	BAC3			
		MOVE.L	BACnn(a7),a0
		MOVE.L	BACnd(a7),d1
		MOVE.L	(a0),a0
		LEA	8(a0,d1.L*4),a0		
		SUBQ.L	#1,d0			
BAC1		ADDQ.L	#1,(a0)+			
		DBCC	d0,BAC1			
		SCS	d0
		NEG.B	d0
		EXTB.L	d0
BAC2		MOVE.L	d0,a1
		LEA	BACret(a7),a7
		RTS				
BAC3		MOVEQ	#1,d0
		MOVE.L	d0,a1
		LEA	BACret(a7),a7
		RTS				
		
		XREF	BnAdd
BnAdd
BADDcar	EQU	0
BADDnl	EQU	4
BADDnd	EQU	8
BADDnn	EQU	12
BADDml	EQU	16
BADDmd	EQU	20
BADDmm	EQU	24
BADDret	EQU	28
		MOVE.L	BADDmm(a7),a0
		MOVE.L	BADDmd(a7),d0
		MOVE.L	(a0),a0
		LEA	8(a0,d0.L*4),a0		
		MOVE.L	BADDnn(a7),a6
		MOVE.L	BADDnd(a7),d1
		MOVE.L	(a6),a6
		LEA	8(a6,d1.L*4),a6		
		MOVE.L	BADDml(a7),d0
		MOVE.L	BADDnl(a7),d1
		SUB.L	d1,BADDml(a7)		
		TST.L	d1
		BNE	BADD1			
		TST.L	BADDcar(a7)		
		BNE	BADD7			
		CLR.L	d0
		MOVE.L	d0,a1
		LEA	BADDret(a7),a7
		RTS				
BADD1		SUBQ.L	#1,d1			
		MOVE.L	BADDcar(a7),d0
		NEG.B	d0
		MOVE.W	d0,cc
		MOVE.L	d2,-(a7)			
BADDX		MOVE.L	(a6)+,d0
		MOVE.L	(a0),d2
		ADDX.L	d0,d2			
		MOVE.L	d2,(a0)+			
		DBF	d1,BADDX		
		MOVE.L	(a7)+,d2			
		MOVE.W	cc,d0
		AND.W	#0x10,d0
		BNE	BADD7			
		CLR.L	d0
		MOVE.L	d0,a1
		LEA	BADDret(a7),a7
		RTS
BADD7		MOVE.L	BADDml(a7),d0
		BEQ	BADD9			
		SUBQ.L	#1,d0			
BADD8		ADDQ.L	#1,(a0)+			
		DBCC	d0,BADD8		
		SCS	d0
		NEG.B	d0
		EXTB.L	d0
		MOVE.L	d0,a1
		LEA	BADDret(a7),a7
		RTS				
BADD9		MOVEQ	#1,d0
		MOVE.L	d0,a1
		LEA	BADDret(a7),a7
		RTS				

		XREF	BnSubtractBorrow
BnSubtractBorrow
BSBcar	EQU	0
BSBnl	EQU	4
BSBnd	EQU	8
BSBnn	EQU	12
BSBret	EQU	16
		MOVE.L	BSBcar(a7),d0
		BNE	BSB2			
		MOVE.L	BSBnl(a7),d1
		BEQ	BSB3			
		MOVE.L	BSBnn(a7),a0
		MOVE.L	BSBnd(a7),d0
		MOVE.L	(a0),a0
		LEA	8(a0,d0.L*4),a0		
		SUBQ.L	#1,d1			
BSB1		SUBQ.L	#1,(a0)+			
		DBCC	d1,BSB1			
		SCC	d0
		NEG.B	d0
		EXTB.L	d0
BSB2		MOVE.L	d0,a1
		LEA	BSBret(a7),a7
		RTS				
BSB3		MOVEQ	#0,d0
		MOVE.L	d0,a1
		LEA	BSBret(a7),a7
		RTS				

		XREF	BnSubtract
BnSubtract
BScar	EQU	0
BSnl	EQU	4
BSnd	EQU	8
BSnn	EQU	12
BSml	EQU	16
BSmd	EQU	20
BSmm	EQU	24
BSret	EQU	28
		MOVE.L	BSmm(a7),a0
		MOVE.L	BSmd(a7),d0
		MOVE.L	(a0),a0
		LEA	8(a0,d0.L*4),a0		
		MOVE.L	BSnn(a7),a6
		MOVE.L	BSnd(a7),d1
		MOVE.L	(a6),a6
		LEA	8(a6,d1.L*4),a6		
		MOVE.L	BSml(a7),d0
		MOVE.L	BSnl(a7),d1
		SUB.L	d1,BSml(a7)		
		TST.L	d1
		BNE	BS1			
		TST.L	BScar(a7)		
		BEQ	BS7			
		MOVEQ	#1,d0
		MOVE.L	d0,a1
		LEA	BSret(a7),a7
		RTS				
BS1		SUBQ.L	#1,d1			
		MOVE.L	BScar(a7),d0
		NEG.B	d0
		NOT.B	d0
		MOVE.W	d0,cc
		MOVE.L	d2,-(a7)			
BSX		MOVE.L	(a6)+,d0
		MOVE.L	(a0),d2
		SUBX.L	d0,d2			
		MOVE.L	d2,(a0)+			
		DBF	d1,BSX			
		MOVE.L	(a7)+,d2			
		MOVE.W	cc,d0
		AND.W	#0x10,d0
		BNE	BS7			
		MOVEQ	#1,d0			
		MOVE.L	d0,a1
		LEA	BSret(a7),a7
		RTS
BS7		MOVE.L	BSml(a7),d1
		BEQ	BS9			
		SUBQ.L	#1,d1			
BS8		SUBQ.L	#1,(a0)+			
		DBCC	d1,BS8			
		SCC	d0
		NEG.B	d0
		EXTB.L	d0
		MOVE.L	d0,a1
		LEA	BSret(a7),a7
		RTS				
BS9		CLR.L	d0
		MOVE.L	d0,a1
		LEA	BSret(a7),a7
		RTS				

		XREF	BnMultiplyDigit
BnMultiplyDigit
BMDnd	EQU	0
BMDnn	EQU	4
BMDml	EQU	8
BMDmd	EQU	12
BMDmm	EQU	16
BMDpl	EQU	20
BMDpd	EQU	24
BMDpp	EQU	28
BMDret	EQU	32
		MOVE.L	BMDnn(a7),a0
		MOVE.L	BMDnd(a7),d0
		MOVE.L	(a0),a0
		MOVE.L	8(a0,d0.L*4),d0		
		BNE	BMD1			
		MOVE.L	d0,a1
		LEA	BMDret(a7),a7
		RTS				
BMD1		CMP.L	#1,d0
		BNE	BMD2			
		CLR.L	BMDnn(a7)
		LEA	BMDnn(a7),a7
		BRA	BnAdd			
BMD2		MOVE.L	BMDpp(a7),a0
		MOVE.L	BMDpd(a7),d1
		MOVE.L	(a0),a0
		LEA	8(a0,d1.L*4),a0		
		MOVE.L	BMDmm(a7),a6
		MOVE.L	BMDmd(a7),d1
		MOVE.L	(a6),a6
		LEA	8(a6,d1.L*4),a6		
		MOVE.L	BMDml(a7),d1
		SUB.L	d1,BMDpl(a7)		
		MOVEM.L	#0x3c00,-(a7)		
		CLR.L	d2
		CLR.L	d5
		BRA	BMD6			
BMD3		MOVE.L	(a6)+,d4			
		MULU.L	d0,d3:d4		
		ADD.L	d2,d4			
		ADDX.L	d5,d3			
		ADD.L	(a0),d4		
		ADDX.L	d5,d3
		MOVE.L	d4,(a0)+			
		MOVE.L	d3,d2			
BMD6		DBF	d1,BMD3			
		MOVE.L	d2,d0
		MOVEM.L	(a7)+,#0x003C		
		ADD.L	d0,(a0)+			
		BCS	BMD7			
		CLR.L	d0
		MOVE.L	d0,a1
		LEA	BMDret(a7),a7
		RTS				
BMD7		MOVE.L	BMDpl(a7),d0
		SUBQ.L	#1,d0			
		BEQ	BMD10			
		SUBQ.L	#1,d0			
BMD8		ADDQ.L	#1,(a0)+			
BMD9		DBCC	d0,BMD8			
		SCS	d0
		NEG.B	d0
		EXTB.L	d0
		MOVE.L	d0,a1
		LEA	BMDret(a7),a7
		RTS				
BMD10		MOVEQ	#1,d0
		MOVE.L	d0,a1
		LEA	BMDret(a7),a7
		RTS				

		XREF	BnDivideDigit
BnDivideDigit
BDDdd	EQU	8
BDDd	EQU	12
BDDnl	EQU	16
BDDnd	EQU	20
BDDnn	EQU	24
BDDrd	EQU	28
BDDrr	EQU	32
BDDqd	EQU	36
BDDqq	EQU	40
BDDret	EQU	36
		MOVEM.L	#0x3000,-(a7)		
		MOVE.L	BDDnl(a7),d0
		MOVE.L	BDDdd(a7),d1
		MOVE.L	BDDd(a7),a0
		MOVE.L	(a0),a0
		MOVE.L	8(a0,d1.L*4),d1		
		MOVE.L	BDDnd(a7),d2
		ADD.L	d0,d2			
		MOVE.L	BDDnn(a7),a0
		MOVE.L	(a0),a0
		LEA	8(a0,d2.L*4),a0		
		SUBQ.L	#1,d0			
		MOVE.L	BDDqd(a7),d2
		ADD.L	d0,d2			
		MOVE.L	BDDqq(a7),a6
		MOVE.L	(a6),a6
		LEA	8(a6,d2.L*4),a6		
		MOVE.L	-(a0),d2		
		BRA	BDD2			
BDD1		MOVE.L	-(a0),d3		
		DIVU.L	d1,d2:d3		
						
		MOVE.L	d3,-(a6)		
BDD2		DBF	d0,BDD1			
		MOVE.L	BDDrr(a7),a0
		MOVE.L	BDDrd(a7),d0
		MOVE.L	(a0),a0
		MOVE.L	d2,8(a0,d0.L*4)		
		MOVEM.L	(a7)+,#0x000C		
		LEA	BDDret(a7),a7
		RTS
