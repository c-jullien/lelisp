
!     .extern .udiv
!     .extern .umul
!     .extern bcopy
!     .extern bzero

    .global BnAdd
    .global BnAddCarry
    .global BnAndDigits
    .global BnAssign
    .global BnCompareDigits
    .global BnComplement
    .global BnDivideDigit
    .global BnDoesDigitFitInWord
    .global BnGetDigit
    .global BnIsDigitNormalized
    .global BnIsDigitOdd
    .global BnIsDigitZero
    .global BnMultiplyDigit
    .global BnNumDigits
    .global BnNumLeadingZeroBitsInDigit
    .global BnOrDigits
    .global BnSetDigit
    .global BnSetToZero
    .global BnShiftLeft
    .global BnShiftRight
    .global BnSubtract
    .global BnSubtractBorrow
    .global BnXorDigits
    .global BnnAdd
    .global BnnAddCarry
    .global BnnAndDigits
    .global BnnAssign
    .global BnnCompareDigits
    .global BnnComplement
    .global BnnDivideDigit
    .global BnnDoesDigitFitInWord
    .global BnnGetDigit
    .global BnnIsDigitNormalized
    .global BnnIsDigitOdd
    .global BnnIsDigitZero
    .global BnnMultiplyDigit
    .global BnnNumDigits
    .global BnnNumLeadingZeroBitsInDigit
    .global BnnOrDigits
    .global BnnSetDigit
    .global BnnSetToZero
    .global BnnShiftLeft
    .global BnnShiftRight
    .global BnnSubtract
    .global BnnSubtractBorrow
    .global BnnXorDigits


BnSetToZero:  save    %sp, -0x60, %sp
              sll     %i2, 0x5, %o1
              orcc    %g0, %o1, %g0
              sll     %i1, 0x2, %o0
              bge     BnSetToZero + 0x1c
              add     %i0, %o0, %o0
              add     %o1, 0x7, %o1
              call    llbzero
              sra     %o1, 0x3, %o1
              ret
              restore

BnAssign:      save    %sp, -0x60, %sp
                sll     %i1, 0x2, %o0
                sll     %i3, 0x2, %o1
                add     %i2, %o1, %o1
                add     %i0, %o0, %o0
                call    BnnAssign
                mov     %i4, %o2
                ret
                restore
BnSetDigit:    sll     %o1, 0x2, %o1
                jmp     %o7 + 0x8
                st      %o2, [%o0 + %o1]
BnGetDigit:    sll     %o1, 0x2, %o1
                jmp     %o7 + 0x8
                ld      [%o0 + %o1], %o0
BnNumDigits:   save    %sp, -0x60, %sp
                sll     %i1, 0x2, %o0
                add     %i0, %o0, %o0
                call    BnnNumDigits
                mov     %i2, %o1
                ret
                restore %g0, %o0, %o0
BnNumLeadingZeroBitsInDigit:   save    %sp, -0x60, %sp
                sll     %i1, 0x2, %o0
                call    BnnNumLeadingZeroBitsInDigit
                ld      [%i0 + %o0], %o0
                ret
                restore %g0, %o0, %o0
BnDoesDigitFitInWord:          sll     %o1, 0x2, %o1
                ld      [%o0 + %o1], %o0
                sethi   %hi(0x8000), %o2
                cmp     %o0, %o2
                blu,a   BnDoesDigitFitInWord + 0x1c
                mov     0x1, %o0
                clr     %o0
                jmp     %o7 + 0x8
                nop
BnIsDigitZero: sll     %o1, 0x2, %o1
                ld      [%o0 + %o1], %o0
                orcc    %g0, %o0, %g0
                bne,a   BnIsDigitZero + 0x18
                clr     %o2
                mov     0x1, %o2
                jmp     %o7 + 0x8
                add     %g0, %o2, %o0
BnIsDigitNormalized:           sll     %o1, 0x2, %o1
                ld      [%o0 + %o1], %o0
                sethi   %hi(0x80000000), %o2
                andcc   %o0, %o2, %g0
                be,a    BnIsDigitNormalized + 0x1c
                clr     %o0
                mov     0x1, %o0
                jmp     %o7 + 0x8
                nop
BnIsDigitOdd:  sll     %o1, 0x2, %o1
                ld      [%o0 + %o1], %o0
                andcc   %o0, 0x1, %g0
                be,a    BnIsDigitOdd + 0x18
                clr     %o0
                mov     0x1, %o0
                jmp     %o7 + 0x8
                nop
BnCompareDigits:               sll     %o1, 0x2, %o1
                add     %o0, %o1, %o1
                ld      [%o1], %o4
                sll     %o3, 0x2, %o0
                add     %o2, %o0, %o0
                ld      [%o0], %o5
                cmp     %o4, %o5
                bleu,a  BnCompareDigits + 0x2c
                ld      [%o1], %o1
                ba      BnCompareDigits + 0x40
                mov     0x1, %o0
                ld      [%o0], %o0
                cmp     %o1, %o0
                bne,a   BnCompareDigits + 0x40
                mov     -0x1, %o0
                clr     %o0
                jmp     %o7 + 0x8
                nop
BnComplement:  save    %sp, -0x60, %sp
                sll     %i1, 0x2, %o0
                add     %i0, %o0, %o0
                call    BnnComplement
                mov     %i2, %o1
                ret
                restore
BnAndDigits:   sll     %o3, 0x2, %o3
                ld      [%o2 + %o3], %o2
                sll     %o1, 0x2, %o1
                add     %o0, %o1, %o0
                ld      [%o0], %o4
                and     %o4, %o2, %o4
                jmp     %o7 + 0x8
                st      %o4, [%o0]
BnOrDigits:    sll     %o3, 0x2, %o3
                ld      [%o2 + %o3], %o2
                sll     %o1, 0x2, %o1
                add     %o0, %o1, %o0
                ld      [%o0], %o4
                or      %o4, %o2, %o4
                jmp     %o7 + 0x8
                st      %o4, [%o0]
BnXorDigits:   sll     %o3, 0x2, %o3
                ld      [%o2 + %o3], %o2
                sll     %o1, 0x2, %o1
                add     %o0, %o1, %o0
                ld      [%o0], %o4
                xor     %o4, %o2, %o4
                jmp     %o7 + 0x8
                st      %o4, [%o0]
BnShiftLeft:   save    %sp, -0x60, %sp
                sll     %i1, 0x2, %o0
                add     %i0, %o0, %o0
                mov     %i2, %o1
                call    BnnShiftLeft
                mov     %i5, %o2
                sll     %i4, 0x2, %i4
                st      %o0, [%i3 + %i4]
                ret
                restore
BnShiftRight:  save    %sp, -0x60, %sp
                sll     %i1, 0x2, %o0
                add     %i0, %o0, %o0
                mov     %i2, %o1
                call    BnnShiftRight
                mov     %i5, %o2
                sll     %i4, 0x2, %i4
                st      %o0, [%i3 + %i4]
                ret
                restore
BnAddCarry:    save    %sp, -0x60, %sp
                sll     %i1, 0x2, %o0
                add     %i0, %o0, %o0
                mov     %i2, %o1
                call    BnnAddCarry
                mov     %i3, %o2
                ret
                restore %g0, %o0, %o0
BnAdd:         save    %sp, -0x60, %sp
                ld      [%fp + 0x5c], %o4
                sll     %i1, 0x2, %o0
                sll     %i4, 0x2, %o2
                add     %i3, %o2, %o2
                add     %i0, %o0, %o0
                mov     %i2, %o1
                call    BnnAdd
                mov     %i5, %o3
                ret
                restore %g0, %o0, %o0
BnSubtractBorrow:              save    %sp, -0x60, %sp
                sll     %i1, 0x2, %o0
                add     %i0, %o0, %o0
                mov     %i2, %o1
                call    BnnSubtractBorrow
                mov     %i3, %o2
                ret
                restore %g0, %o0, %o0
BnSubtract:    save    %sp, -0x60, %sp
                ld      [%fp + 0x5c], %o4
                sll     %i1, 0x2, %o0
                sll     %i4, 0x2, %o2
                add     %i3, %o2, %o2
                add     %i0, %o0, %o0
                mov     %i2, %o1
                call    BnnSubtract
                mov     %i5, %o3
                ret
                restore %g0, %o0, %o0
BnMultiplyDigit:               save    %sp, -0x60, %sp
                ld      [%fp + 0x60], %o4
                ld      [%fp + 0x5c], %o5
                sll     %o4, 0x2, %o4
                ld      [%o5 + %o4], %o4
                sll     %i1, 0x2, %o0
                sll     %i4, 0x2, %o2
                add     %i3, %o2, %o2
                add     %i0, %o0, %o0
                mov     %i2, %o1
                call    BnnMultiplyDigit
                mov     %i5, %o3
                ret
                restore %g0, %o0, %o0
BnDivideDigit: save    %sp, -0x60, %sp
                ld      [%fp + 0x64], %o3
                ld      [%fp + 0x60], %o4
                ld      [%fp + 0x5c], %o2
                sll     %o3, 0x2, %o3
                ld      [%o4 + %o3], %o3
                sll     %i1, 0x2, %o0
                sll     %i5, 0x2, %o1
                add     %i4, %o1, %o1
                call    BnnDivideDigit
                add     %i0, %o0, %o0
                sll     %i3, 0x2, %i3
                st      %o0, [%i2 + %i3]
                ret
                restore
                unimp   0x0
BnnSetToZero:  save    %sp, -0x60, %sp
                sll     %i1, 0x5, %o1
                orcc    %g0, %o1, %g0
                bge,a   BnnSetToZero + 0x1c
                mov     %i0, %o0
                add     %o1, 0x7, %o1
                mov     %i0, %o0
                call    llbzero
                sra     %o1, 0x3, %o1
                ret
                restore
BnnAssign:     save    %sp, -0x60, %sp
                cmp     %i0, %i1
                blu,a   BnnAssign + 0x38
                sll     %i2, 0x5, %o2
                sll     %i2, 0x2, %i4
                add     %i1, %i4, %i5
                cmp     %i0, %i5
                bgu,a   BnnAssign + 0x38
                sll     %i2, 0x5, %o2
                cmp     %i0, %i1
                bgu,a   BnnAssign + 0x60
                subcc   %i2, 0x1, %i2
                ba      BnnAssign + 0x84
                nop
                orcc    %g0, %o2, %g0
                bge,a   BnnAssign + 0x4c
                mov     %i1, %o0
                add     %o2, 0x7, %o2
                mov     %i1, %o0
                mov     %i0, %o1
                call    llbcopy
                sra     %o2, 0x3, %o2
                ba      BnnAssign + 0x84
                nop
                mov     %i5, %i1
                bneg    BnnAssign + 0x84
                add     %i0, %i4, %i0
                sub     %i1, 0x4, %i1
                ld      [%i1], %o5
                subcc   %i2, 0x1, %i2
                sub     %i0, 0x4, %i0
                bpos    BnnAssign + 0x6c
                st      %o5, [%i0]
                ret
                restore
BnnSetDigit:   jmp     %o7 + 0x8
                st      %o1, [%o0]
BnnGetDigit:   jmp     %o7 + 0x8
                ld      [%o0], %o0
BnnNumDigits:  orcc    %g0, %o1, %g0
                sll     %o1, 0x2, %o3
                be      BnnNumDigits + 0x34
                add     %o0, %o3, %o0
                sub     %o0, 0x4, %o0
                ld      [%o0], %o2
                orcc    %g0, %o2, %g0
                bne,a   BnnNumDigits + 0x38
                orcc    %g0, %o1, %g0
                sub     %o1, 0x1, %o1
                orcc    %g0, %o1, %g0
                bne,a   BnnNumDigits + 0x14
                sub     %o0, 0x4, %o0
                orcc    %g0, %o1, %g0
                bne     BnnNumDigits + 0x44
                nop
                mov     0x1, %o1
                jmp     %o7 + 0x8
                add     %g0, %o1, %o0
BnnNumLeadingZeroBitsInDigit:  orcc    %g0, %o0, %g0
                sethi   %hi(0x80000000), %o1
                clr     %o4
                bne     BnnNumLeadingZeroBitsInDigit + 0x20
                mov     %o1, %o5
                ba      BnnNumLeadingZeroBitsInDigit + 0x30
                mov     0x20, %o5
                add     %o4, 0x1, %o4
                andcc   %o0, %o5, %g0
                be,a    BnnNumLeadingZeroBitsInDigit + 0x1c
                srl     %o5, 0x1, %o5
                mov     %o4, %o5
                jmp     %o7 + 0x8
                add     %g0, %o5, %o0
BnnDoesDigitFitInWord:         save    %sp, -0x40, %sp
                st      %i0, [%fp + 0x44]
                ret
                restore %g0, 0x1, %o0
BnnIsDigitZero:                orcc    %g0, %o0, %g0
                bne,a   BnnIsDigitZero + 0x10
                clr     %o1
                mov     0x1, %o1
                sll     %o1, 0x10, %o0
                sra     %o0, 0x10, %o0
                sll     %o0, 0x10, %o0
                jmp     %o7 + 0x8
                sra     %o0, 0x10, %o0
BnnIsDigitNormalized:          sethi   %hi(0x80000000), %o1
                andcc   %o0, %o1, %g0
                be,a    BnnIsDigitNormalized + 0x14
                clr     %o0
                mov     0x1, %o0
                sll     %o0, 0x10, %o0
                sra     %o0, 0x10, %o0
                sll     %o0, 0x10, %o0
                jmp     %o7 + 0x8
                sra     %o0, 0x10, %o0
BnnIsDigitOdd:  andcc   %o0, 0x1, %g0
                be,a    BnnIsDigitOdd + 0x10
                clr     %o0
                mov     0x1, %o0
                sll     %o0, 0x10, %o0
                sra     %o0, 0x10, %o0
                sll     %o0, 0x10, %o0
                jmp     %o7 + 0x8
                sra     %o0, 0x10, %o0
BnnCompareDigits:   cmp     %o0, %o1
                bleu,a  BnnCompareDigits + 0x14
                cmp     %o0, %o1
                ba      BnnCompareDigits + 0x20
                mov     0x1, %o0
                bne,a   BnnCompareDigits + 0x20
                mov     -0x1, %o0
                clr     %o0
                sll     %o0, 0x10, %o0
                sra     %o0, 0x10, %o0
                sll     %o0, 0x10, %o0
                jmp     %o7 + 0x8
                sra     %o0, 0x10, %o0
BnnComplement:  subcc   %o1, 0x1, %o1
                bneg    BnnComplement + 0x24
                nop
                ld      [%o0], %o2
                xor     %o2, -0x1, %o2
                st      %o2, [%o0]
                subcc   %o1, 0x1, %o1
                bpos    BnnComplement + 0xc
                add     %o0, 0x4, %o0
                jmp     %o7 + 0x8
                nop
BnnAndDigits:   ld      [%o0], %o2
                and     %o2, %o1, %o2
                jmp     %o7 + 0x8
                st      %o2, [%o0]
BnnOrDigits:    ld      [%o0], %o2
                or      %o2, %o1, %o2
                jmp     %o7 + 0x8
                st      %o2, [%o0]
BnnXorDigits:  ld      [%o0], %o2
                xor     %o2, %o1, %o2
                jmp     %o7 + 0x8
                st      %o2, [%o0]
BnnShiftLeft:  orcc    %g0, %o2, %g0
                be      BnnShiftLeft + 0x3c
                clr     %o4
                subcc   %o1, 0x1, %o1
                mov     0x20, %o3
                bneg    BnnShiftLeft + 0x3c
                sub     %o3, %o2, %o3
                ld      [%o0], %o5
                sll     %o5, %o2, %g1
                or      %g1, %o4, %g1
                st      %g1, [%o0]
                subcc   %o1, 0x1, %o1
                srl     %o5, %o3, %o4
                bpos    BnnShiftLeft + 0x1c
                add     %o0, 0x4, %o0
                jmp     %o7 + 0x8
                add     %g0, %o4, %o0
BnnShiftRight: orcc    %g0, %o2, %g0
                be      BnnShiftRight + 0x44
                clr     %o4
                sll     %o1, 0x2, %g1
                subcc   %o1, 0x1, %o1
                mov     0x20, %o3
                add     %o0, %g1, %o0
                bneg    BnnShiftRight + 0x44
                sub     %o3, %o2, %o3
                sub     %o0, 0x4, %o0
                ld      [%o0], %o5
                srl     %o5, %o2, %g2
                or      %g2, %o4, %g2
                subcc   %o1, 0x1, %o1
                sll     %o5, %o3, %o4
                bpos    BnnShiftRight + 0x24
                st      %g2, [%o0]
                jmp     %o7 + 0x8
                add     %g0, %o4, %o0
BnnAddCarry:   sll     %o2, 0x10, %o2
                srl     %o2, 0x10, %o2
                orcc    %g0, %o2, %g0
                bne,a   BnnAddCarry + 0x1c
                orcc    %g0, %o1, %g0
                ba      BnnAddCarry + 0x74
                clr     %o0
                bne,a   BnnAddCarry + 0x30
                subcc   %o1, 0x1, %o1
                ba      BnnAddCarry + 0x74
                mov     0x1, %o0
                subcc   %o1, 0x1, %o1
                bneg,a  BnnAddCarry + 0x58
                orcc    %g0, %o1, %g0
                mov     %o0, %o2
                ld      [%o2], %o3
                add     %o3, 0x1, %o3
                orcc    %g0, %o3, %g0
                add     %o0, 0x4, %o0
                be      BnnAddCarry + 0x2c
                st      %o3, [%o2]
                orcc    %g0, %o1, %g0
                bl,a    BnnAddCarry + 0x64
                mov     0x1, %o0
                clr     %o0
                sll     %o0, 0x10, %o0
                srl     %o0, 0x10, %o0
                sll     %o0, 0x10, %o0
                srl     %o0, 0x10, %o0
                jmp     %o7 + 0x8
                nop
BnnAdd:        save    %sp, -0x68, %sp
                sub     %i1, %i3, %i5
                subcc   %i3, 0x1, %i3
                sll     %i4, 0x10, %i4
                bneg    BnnAdd + 0xa8
                srl     %i4, 0x10, %i4
                ld      [%i0], %i1
                add     %i4, %i1, %i4
                cmp     %i4, %i1
                bgeu,a  BnnAdd + 0x78
                ld      [%i2], %i1
                ld      [%i2], %l7
                mov     0x1, %i4
                st      %l7, [%i0]
                add     %i2, 0x4, %i2
                ba      BnnAdd + 0x9c
                add     %i0, 0x4, %i0
                ld      [%fp + 0x50], %i0
                subcc   %i0, 0x1, %i0
                bneg,a  BnnAdd + 0xac
                sll     %i4, 0x10, %o2
                ld      [%fp + 0x4c], %o5
                ld      [%fp + 0x44], %l0
                ld      [%o5], %o5
                ld      [%l0], %l1
                ld      [%fp - 0x4], %l3
                add     %l1, %o5, %l1
                add     %l3, %l1, %l3
                ba      BnnAdd + 0x44
                st      %l3, [%l0]
                add     %i2, 0x4, %i2
                add     %i4, %i1, %i4
                st      %i4, [%i0]
                cmp     %i4, %i1
                bgeu    BnnAdd + 0x98
                add     %i0, 0x4, %i0
                ba      BnnAdd + 0x9c
                mov     0x1, %i4
                clr     %i4
                subcc   %i3, 0x1, %i3
                bpos,a  BnnAdd + 0x1c
                ld      [%i0], %i1
                sll     %i4, 0x10, %o2
                srl     %o2, 0x10, %o2
                mov     %i0, %o0
                call    BnnAddCarry
                mov     %i5, %o1
                sll     %o0, 0x10, %i0
                srl     %i0, 0x10, %i0
                ret
                restore
BnnSubtractBorrow:             sll     %o2, 0x10, %o2
                srl     %o2, 0x10, %o2
                cmp     %o2, 0x1
                bne,a   BnnSubtractBorrow + 0x1c
                orcc    %g0, %o1, %g0
                ba      BnnSubtractBorrow + 0x78
                mov     0x1, %o0
                bne,a   BnnSubtractBorrow + 0x30
                subcc   %o1, 0x1, %o1
                ba      BnnSubtractBorrow + 0x78
                clr     %o0
                subcc   %o1, 0x1, %o1
                bneg,a  BnnSubtractBorrow + 0x5c
                orcc    %g0, %o1, %g0
                mov     %o0, %o2
                ld      [%o2], %o5
                sub     %o5, 0x1, %o5
                st      %o5, [%o2]
                add     %o5, 0x1, %o5
                orcc    %g0, %o5, %g0
                be      BnnSubtractBorrow + 0x2c
                add     %o0, 0x4, %o0
                orcc    %g0, %o1, %g0
                bl,a    BnnSubtractBorrow + 0x68
                clr     %o0
                mov     0x1, %o0
                sll     %o0, 0x10, %o0
                srl     %o0, 0x10, %o0
                sll     %o0, 0x10, %o0
                srl     %o0, 0x10, %o0
                jmp     %o7 + 0x8
                nop
BnnSubtract:   save    %sp, -0x68, %sp
                sub     %i1, %i3, %l7
                subcc   %i3, 0x1, %i3
                sll     %i4, 0x10, %i4
                bneg    BnnSubtract + 0xac
                srl     %i4, 0x10, %i4
                ld      [%i0], %i5
                ld      [%i2], %i1
                add     %i4, %i5, %i4
                cmp     %i4, %i5
                add     %i2, 0x4, %i2
                bgeu    BnnSubtract + 0x7c
                xor     %i1, -0x1, %i1
                st      %i1, [%i0]
                mov     0x1, %i4
                ba      BnnSubtract + 0xa0
                add     %i0, 0x4, %i0
                ld      [%fp + 0x50], %i0
                subcc   %i0, 0x1, %i0
                bneg,a  BnnSubtract + 0xb0
                sll     %i4, 0x10, %o2
                ld      [%fp + 0x4c], %o5
                ld      [%fp + 0x44], %l1
                ld      [%o5], %o5
                ld      [%l1], %l2
                ld      [%fp - 0x4], %l4
                xor     %o5, -0x1, %o5
                add     %l2, %o5, %l2
                add     %l4, %l2, %l4
                ba      BnnSubtract + 0x44
                st      %l4, [%l1]
                add     %i4, %i1, %i4
                st      %i4, [%i0]
                cmp     %i4, %i1
                bgeu    BnnSubtract + 0x98
                add     %i0, 0x4, %i0
                ba      BnnSubtract + 0x9c
                mov     0x1, %i1
                clr     %i1
                mov     %i1, %i4
                subcc   %i3, 0x1, %i3
                bpos,a  BnnSubtract + 0x1c
                ld      [%i0], %i5
                sll     %i4, 0x10, %o2
                srl     %o2, 0x10, %o2
                mov     %i0, %o0
                call    BnnSubtractBorrow
                mov     %l7, %o1
                sll     %o0, 0x10, %i0
                srl     %i0, 0x10, %i0
                ret
                restore
BnnMultiplyDigit:              save    %sp, -0x68, %sp
                orcc    %g0, %i4, %g0
                bne     BnnMultiplyDigit + 0x18
                clr     %i5
                ba      BnnMultiplyDigit + 0x214
                clr     %i4
                cmp     %i4, 0x1
                bne,a   BnnMultiplyDigit + 0x44
                sethi   %hi(0xfc00), %o5
                clr     %o4
                mov     %i3, %o3
                mov     %i2, %o2
                mov     %i1, %o1
                call    BnnAdd
                mov     %i0, %o0
                ba      BnnMultiplyDigit + 0x210
                sll     %o0, 0x10, %i4
                add     %o5, 0x3ff, %l2
                and     %i4, %l2, %l4
                srl     %i4, 0x10, %l3
                sub     %i1, %i3, %l1
                orcc    %g0, %i3, %g0
                be,a    BnnMultiplyDigit + 0x19c
                ld      [%i0], %i2
                ld      [%i2], %i4
                mov     %l4, %o0
                and     %i4, %l2, %i1
                call    .umul
                mov     %i1, %o1
                mov     %o0, %l7
                srl     %i4, 0x10, %i4
                mov     %i4, %o1
                call    .umul
                mov     %l4, %o0
                mov     %o0, %l6
                mov     %l3, %o0
                call    .umul
                mov     %i1, %o1
                mov     %o0, %l5
                mov     %l3, %o0
                call    .umul
                mov     %i4, %o1
                add     %i5, %l7, %i5
                cmp     %i5, %l7
                sub     %i3, 0x1, %i3
                add     %i2, 0x4, %i2
                bgeu    BnnMultiplyDigit + 0xc4
                mov     %o0, %i4
                add     %i4, 0x1, %i4
                sll     %l6, 0x10, %o3
                add     %i5, %o3, %i5
                cmp     %i5, %o3
                bgeu,a  BnnMultiplyDigit + 0xe0
                sll     %l5, 0x10, %o5
                add     %i4, 0x1, %i4
                sll     %l5, 0x10, %o5
                add     %i5, %o5, %i5
                cmp     %i5, %o5
                bgeu,a  BnnMultiplyDigit + 0xf8
                ld      [%i0], %i1
                add     %i4, 0x1, %i4
                ld      [%i0], %i1
                ld      [%i0], %o1
                add     %i5, %i1, %i1
                cmp     %i1, %o1
                bgeu,a  BnnMultiplyDigit + 0x114
                srl     %l6, 0x10, %l6
                add     %i4, 0x1, %i4
                srl     %l6, 0x10, %l6
                add     %i4, %l6, %i4
                srl     %l5, 0x10, %i5
                st      %i1, [%i0]
                add     %i4, %i5, %i5
                ba      BnnMultiplyDigit + 0x54
                add     %i0, 0x4, %i0
                ld      [%fp + 0x54], %o0
                call    .umul
                ld      [%o1], %o1
                ld      [%fp + 0x44], %o5
                ld      [%o5], %o7
                add     %o7, %o0, %o7
                ld      [%fp - 0x4], %o0
                add     %o0, %o7, %o0
                st      %o0, [%o5]
                ld      [%fp + 0x50], %o3
                orcc    %g0, %o3, %g0
                bne,a   BnnMultiplyDigit + 0x12c
                ld      [%fp + 0x4c], %o1
                ld      [%fp + 0x48], %o3
                orcc    %g0, %o3, %g0
                be      BnnMultiplyDigit + 0x194
                nop
                ld      [%fp + 0x44], %o4
                ld      [%fp - 0x4], %o7
                ld      [%o4], %o5
                add     %o7, %o5, %o7
                st      %o7, [%o4]
                ld      [%fp + 0x48], %o3
                orcc    %g0, %o3, %g0
                bne,a   BnnMultiplyDigit + 0x174
                ld      [%fp + 0x44], %o4
                ba      BnnMultiplyDigit + 0x204
                ld      [%fp - 0x4], %i4
                add     %i0, 0x4, %i4
                add     %i5, %i2, %i5
                cmp     %i5, %i2
                blu     BnnMultiplyDigit + 0x1b8
                st      %i5, [%i0]
                ba      BnnMultiplyDigit + 0x214
                clr     %i4
                sub     %l1, 0x1, %i0
                orcc    %g0, %i0, %g0
                be,a    BnnMultiplyDigit + 0x1f8
                orcc    %g0, %i0, %g0
                mov     %i4, %i3
                ld      [%i3], %o1
                add     %i4, 0x4, %i4
                add     %o1, 0x1, %o1
                orcc    %g0, %o1, %g0
                bne     BnnMultiplyDigit + 0x1f4
                st      %o1, [%i3]
                sub     %i0, 0x1, %i0
                orcc    %g0, %i0, %g0
                bne,a   BnnMultiplyDigit + 0x1cc
                mov     %i4, %i3
                orcc    %g0, %i0, %g0
                be,a    BnnMultiplyDigit + 0x204
                mov     0x1, %i4
                clr     %i4
                sll     %i4, 0x10, %i4
                srl     %i4, 0x10, %i4
                sll     %i4, 0x10, %i4
                srl     %i4, 0x10, %i4
                ret
                restore %g0, %i4, %o0
BnnDivideDigit:                save    %sp, -0x70, %sp
                call    BnnNumLeadingZeroBitsInDigit
                mov     %i3, %o0
                mov     %o0, %o2
                orcc    %g0, %o2, %g0
                be      BnnDivideDigit + 0x38
                st      %o2, [%fp - 0x8]
                ld      [%i0 - 0x4], %o4
                st      %i2, [%fp - 0x10]
                st      %o4, [%fp - 0xc]
                mov     %i2, %o1
                mov     %i1, %o0
                call    BnnShiftLeft
                sll     %i3, %o2, %i3
                sub     %i2, 0x1, %l2
                sethi   %hi(0xfc00), %o1
                or      %o1, 0x3ff, %o1          ! 0xffff
                sll     %i2, 0x2, %l3
                add     %i1, %l3, %l3
                sub     %l3, 0x4, %l3
                ld      [%l3], %i2
                and     %i3, %o1, %l1
                sll     %l2, 0x2, %l4
                orcc    %g0, %l2, %g0
                srl     %i3, 0x10, %l6
                mov     %o1, %l0
                sll     %l1, 0x10, %l7
                add     %i0, %l4, %l4
                be      BnnDivideDigit + 0x234
                add     %l6, 0x1, %l5
                sub     %l3, 0x4, %l3
                ld      [%l3], %i4
                mov     %i2, %i5
                mov     %i5, %o0
                call    .udiv
                mov     %l6, %o1
                mov     %o0, %i1
                mov     %l1, %o0
                call    .umul
                mov     %i1, %o1
                mov     %o0, %i2
                mov     %l6, %o0
                call    .umul
                mov     %i1, %o1
                srl     %i2, 0x10, %i0
                add     %o0, %i0, %i0
                cmp     %i0, %i5
                sub     %l2, 0x1, %l2
                bgu     BnnDivideDigit + 0xdc
                sll     %i2, 0x10, %i2
                cmp     %i0, %i5
                bne     BnnDivideDigit + 0x154
                cmp     %i2, %i4
                bleu,a  BnnDivideDigit + 0x154
                cmp     %i2, %i4
                cmp     %l7, %i2
                bleu    BnnDivideDigit + 0x134
                sub     %i1, 0x1, %i1
                sub     %i2, %l7, %i2
                ba      BnnDivideDigit + 0x13c
                sub     %i0, %l5, %i0
                ld      [%fp - 0x4], %o3
                ld      [%fp + 0x44], %i0
                ld      [%fp + 0x50], %o1
                sub     %o0, 0x4, %o0
                ld      [%o0], %o0
                sll     %o3, 0x20, %o3
                call    .udiv
                or      %o3, %o0, %o0
                sub     %i0, 0x4, %i0
                st      %o0, [%i0]
                ld      [%fp + 0x4c], %o0
                orcc    %g0, %o0, %g0
                bne,a   BnnDivideDigit + 0xf4
                ld      [%fp + 0x48], %o0
                ba      BnnDivideDigit + 0x2c4
                ld      [%fp - 0x4], %i2
                sub     %i0, %l6, %i0
                sub     %i2, %l7, %i2
                cmp     %i0, %i5
                bgu,a   BnnDivideDigit + 0xe0
                cmp     %l7, %i2
                cmp     %i0, %i5
                be      BnnDivideDigit + 0xd4
                cmp     %i2, %i4
                bleu    BnnDivideDigit + 0x160
                sub     %i4, %i2, %i4
                add     %i0, 0x1, %i0
                sub     %i5, %i0, %i5
                sll     %i5, 0x10, %o0
                srl     %i4, 0x10, %o7
                sll     %i1, 0x10, %i1
                sub     %l4, 0x4, %l4
                st      %i1, [%l4]
                mov     %l6, %o1
                or      %o0, %o7, %o0
                call    .udiv
                nop
                mov     %o0, %i1
                mov     %l1, %o0
                call    .umul
                mov     %i1, %o1
                mov     %o0, %i2
                mov     %l6, %o0
                call    .umul
                mov     %i1, %o1
                mov     %o0, %i0
                srl     %i2, 0x10, %o0
                add     %i0, %o0, %i0
                and     %i0, %l0, %o2
                srl     %i0, 0x10, %i0
                cmp     %i0, %i5
                sll     %o2, 0x10, %o2
                and     %i2, %l0, %i2
                bgu     BnnDivideDigit + 0x1e8
                or      %i2, %o2, %i2
                cmp     %i0, %i5
                bne,a   BnnDivideDigit + 0x220
                ld      [%l4], %o1
                cmp     %i2, %i4
                bleu,a  BnnDivideDigit + 0x220
                ld      [%l4], %o1
                cmp     %i3, %i2
                bleu    BnnDivideDigit + 0x200
                sub     %i1, 0x1, %i1
                sub     %i2, %i3, %i2
                ba      BnnDivideDigit + 0x204
                sub     %i0, 0x1, %i0
                sub     %i2, %i3, %i2
                cmp     %i0, %i5
                bgu,a   BnnDivideDigit + 0x1ec
                cmp     %i3, %i2
                cmp     %i0, %i5
                be,a    BnnDivideDigit + 0x1e0
                cmp     %i2, %i4
                ld      [%l4], %o1
                orcc    %g0, %l2, %g0
                or      %o1, %i1, %o1
                sub     %i4, %i2, %i2
                bne     BnnDivideDigit + 0x78
                st      %o1, [%l4]
                ld      [%fp - 0x8], %o2
                orcc    %g0, %o2, %g0
                be,a    BnnDivideDigit + 0x2c0
                ld      [%fp - 0x8], %o1
                cmp     %l4, %l3
                bleu,a  BnnDivideDigit + 0x290
                cmp     %l4, %l3
                ld      [%fp - 0x10], %o4
                sll     %o4, 0x2, %o4
                add     %l3, %o4, %o4
                cmp     %l4, %o4
                bgeu,a  BnnDivideDigit + 0x290
                cmp     %l4, %l3
                sub     %l4, %l3, %i0
                sra     %i0, 0x2, %i0
                mov     %i0, %o1
                call    BnnShiftRight
                mov     %l3, %o0
                ld      [%fp - 0xc], %o4
                sub     %i0, 0x1, %i0
                sll     %i0, 0x2, %i0
                ba      BnnDivideDigit + 0x2bc
                st      %o4, [%l3 + %i0]
                bne,a   BnnDivideDigit + 0x2b0
                ld      [%fp - 0x10], %o1
                ld      [%fp - 0x10], %o0
                mov     0x1, %o1
                sub     %o0, 0x1, %o0
                sll     %o0, 0x2, %o0
                ba      BnnDivideDigit + 0x2b4
                add     %l3, %o0, %o0
                mov     %l3, %o0
                call    BnnShiftRight
                ld      [%fp - 0x8], %o2
                ld      [%fp - 0x8], %o1
                srl     %i2, %o1, %i2
                ret
                restore %g0, %i2, %o0
                unimp   0x0



! come from adb under BSD

llbcopy:        cmp     %o0, %o1
                bg      llbcopy + 0x24
                cmp     %o2, 0x9
                subcc   %o0, %o1, %o4
                bneg,a  llbcopy + 0x18
                sub     %g0, %o4, %o4
                cmp     %o2, %o4
                bg      llbcopy + 0x1b4
                cmp     %o2, 0x9
                ble     llbcopy + 0x190
                andcc   %o0, 0x3, %o5
                be      llbcopy + 0x78
                cmp     %o5, 0x2
                be      llbcopy + 0x5c
                cmp     %o5, 0x3
                ldub    [%o0], %o3
                add     %o0, 0x1, %o0
                stb     %o3, [%o1]
                add     %o1, 0x1, %o1
                bne     llbcopy + 0x5c
                sub     %o2, 0x1, %o2
                ba      llbcopy + 0x7c
                andcc   %o1, 0x3, %o5
                lduh    [%o0], %o3
                add     %o0, 0x2, %o0
                srl     %o3, 0x8, %o4
                stb     %o4, [%o1]
                stb     %o3, [%o1 + 0x1]
                add     %o1, 0x2, %o1
                sub     %o2, 0x2, %o2
                andcc   %o1, 0x3, %o5
                be      llbcopy + 0x16c
                cmp     %o5, 0x2
                be      llbcopy + 0x120
                cmp     %o5, 0x3
                ld      [%o0], %o4
                add     %o0, 0x4, %o0
                srl     %o4, 0x18, %o5
                stb     %o5, [%o1]
                bne     llbcopy + 0xdc
                add     %o1, 0x1, %o1
                sub     %o2, 0x1, %o2
                andn    %o2, 0x3, %o3
                sub     %o0, %o1, %o0
                sll     %o4, 0x8, %g1
                ld      [%o0 + %o1], %o4
                subcc   %o3, 0x4, %o3
                srl     %o4, 0x18, %o5
                or      %o5, %g1, %g1
                st      %g1, [%o1]
                bne     llbcopy + 0xb0
                add     %o1, 0x4, %o1
                sub     %o0, 0x3, %o0
                ba      llbcopy + 0x1a0
                and     %o2, 0x3, %o2
                srl     %o4, 0x8, %o5
                sth     %o5, [%o1]
                add     %o1, 0x2, %o1
                sub     %o2, 0x3, %o2
                andn    %o2, 0x3, %o3
                sub     %o0, %o1, %o0
                sll     %o4, 0x18, %g1
                ld      [%o0 + %o1], %o4
                subcc   %o3, 0x4, %o3
                srl     %o4, 0x8, %o5
                or      %o5, %g1, %g1
                st      %g1, [%o1]
                bne     llbcopy + 0xf4
                add     %o1, 0x4, %o1
                sub     %o0, 0x1, %o0
                ba      llbcopy + 0x1a0
                and     %o2, 0x3, %o2
                ld      [%o0], %o4
                add     %o0, 0x4, %o0
                srl     %o4, 0x10, %o5
                sth     %o5, [%o1]
                add     %o1, 0x2, %o1
                sub     %o2, 0x2, %o2
                andn    %o2, 0x3, %o3
                sub     %o0, %o1, %o0
                sll     %o4, 0x10, %g1
                ld      [%o0 + %o1], %o4
                subcc   %o3, 0x4, %o3
                srl     %o4, 0x10, %o5
                or      %o5, %g1, %g1
                st      %g1, [%o1]
                bne     llbcopy + 0x140
                add     %o1, 0x4, %o1
                sub     %o0, 0x2, %o0
                ba      llbcopy + 0x1a0
                and     %o2, 0x3, %o2
                andn    %o2, 0x3, %o3
                sub     %o0, %o1, %o0
                ld      [%o0 + %o1], %o4
                subcc   %o3, 0x4, %o3
                st      %o4, [%o1]
                bg      llbcopy + 0x174
                add     %o1, 0x4, %o1
                ba      llbcopy + 0x1a0
                and     %o2, 0x3, %o2
                ba      llbcopy + 0x1a0
                sub     %o0, %o1, %o0
                stb     %o4, [%o1]
                add     %o1, 0x1, %o1
                subcc   %o2, 0x1, %o2
                bge,a   llbcopy + 0x198
                ldub    [%o0 + %o1], %o4
                jmp     %o7 + 0x8
                clr     %o0
                add     %o0, %o2, %o0
                add     %o1, %o2, %o1
                sub     %o0, %o1, %o0
                sub     %o1, 0x1, %o1
                ldub    [%o0 + %o1], %o3
                subcc   %o2, 0x1, %o2
                bg      llbcopy + 0x1c0
                stb     %o3, [%o1]
                jmp     %o7 + 0x8
                clr     %o0
                nop


llbzero:        cmp     %o1, 0x7
                ble     llbzero + 0x48
                andcc   %o0, 0x3, %o3
                be      llbzero + 0x2c
                mov     0x4, %o4
                sub     %o4, %o3, %o3
                sub     %o1, %o3, %o1
                stb     %g0, [%o0]
                subcc   %o3, 0x1, %o3
                bne     llbzero + 0x1c
                add     %o0, 0x1, %o0
                andn    %o1, 0x3, %o2
                mov     %o2, %o4
                subcc   %o2, 0x4, %o2
                bne     llbzero + 0x34
                st      %g0, [%o0 + %o2]
                add     %o4, %o0, %o0
                and     %o1, 0x3, %o1
                orcc    %g0, %o1, %g0
                be      llbzero + 0x5c
                subcc   %o1, 0x1, %o1
                bne     llbzero + 0x50
                stb     %g0, [%o0 + %o1]
                jmp     %o7 + 0x8
                clr     %o0
                nop
