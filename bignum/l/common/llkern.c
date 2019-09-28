/* Copyright     Digital Equipment Corporation & INRIA     1988, 1989 */
/* Interface entre le noyau Bn et le noyau Bnn. */
/* Bernard Paul Serpette */

#include <BigNum.h>
#ifdef  NOMEM
#include <string.h>
#endif

void BnSetToZero(nn, nd, nl) BigNum nn; int nd, nl; {
#ifdef NOMEM
        (void)memset( &nn[nd], 0, nl*BN_DIGIT_SIZE/BN_BYTE_SIZE );
#else
        bzero(&nn[nd], nl*BN_DIGIT_SIZE/BN_BYTE_SIZE);
#endif
}

void BnAssign(mm, md, nn, nd, nl) BigNum mm, nn; int md, nd, nl; {
        BnnAssign(mm + md, nn + nd, nl);
}

void BnSetDigit(nn, nd, d) BigNum nn; int nd, d; {
        nn[nd] = d;
}

int BnGetDigit(nn, nd) BigNum nn; int nd; {
        return(nn[nd]);
}

int BnNumDigits(nn, nd, nl) BigNum nn; int nd, nl; {
        return(BnnNumDigits(nn + nd, nl));
}

int BnNumLeadingZeroBitsInDigit(nn, nd) BigNum nn; int nd; {
        return(BnnNumLeadingZeroBitsInDigit(*(nn + nd)));
}

int BnDoesDigitFitInWord(nn, nd) BigNum nn; int nd; {
        return(nn[nd] >= 1 << 15 ? FALSE : TRUE);
}

int BnIsDigitZero(nn, nd) BigNum nn; int nd; {
        return(nn[nd] == 0);
}

int BnIsDigitNormalized(nn, nd) BigNum nn; int nd; {
        return(nn[nd] & (1 << (BN_DIGIT_SIZE - 1)) ? TRUE : FALSE);
}

int BnIsDigitOdd(nn, nd) BigNum nn; int nd; {
        return(nn[nd] & 1 ? TRUE : FALSE);
}

int BnCompareDigits(mm, md, nn, nd) BigNum mm, nn; int md, nd; {
        return(mm[md] > nn[nd] ? BN_GT : (mm[md] == nn[nd] ? BN_EQ : BN_LT));
}

void  BnComplement(nn, nd, nl) BigNum nn; int nd, nl; {
        BnnComplement(nn + nd, nl);
}

void  BnAndDigits(mm, md, nn, nd) BigNum mm, nn; int md, nd; {
        mm[md] &= nn[nd];
}

void  BnOrDigits(mm, md, nn, nd) BigNum mm, nn; int md, nd; {
        mm[md] |= nn[nd];
}

void  BnXorDigits(mm, md, nn, nd) BigNum mm, nn; int md, nd; {
        mm[md] ^= nn[nd];
}

void BnShiftLeft(mm, md, ml, nn, nd, nbits)
                BigNum mm, nn; int md, ml, nd, nbits; {
        *(nn+nd) = BnnShiftLeft((mm + md), ml, nbits);
}

void BnShiftRight(mm, md, ml, nn, nd, nbits)
                BigNum mm, nn; int md, ml, nd, nbits; {
        *(nn+nd) = BnnShiftRight((mm + md), ml, nbits);
}

int BnAddCarry(nn, nd, nl, carryin) BigNum nn; int nd, nl, carryin; {
        return(BnnAddCarry((nn + nd), nl, carryin));
}

int BnAdd(mm, md, ml, nn, nd, nl, carryin)
                BigNum mm, nn; int md, ml, nd, nl, carryin; {
        return(BnnAdd((mm + md), ml, (nn + nd), nl, carryin));
}

int BnSubtractBorrow(nn, nd, nl, carryin) BigNum nn; int nd, nl, carryin; {
        return(BnnSubtractBorrow((nn + nd), nl, carryin));
}

int BnSubtract(mm, md, ml, nn, nd, nl, carryin)
                BigNum mm, nn; int md, ml, nd, nl, carryin; {
        return(BnnSubtract((mm + md), ml, (nn + nd), nl, carryin));
}

int BnMultiplyDigit(pp, pd, pl, mm, md, ml, nn, nd)
                BigNum pp, mm, nn; int pd, pl, md, ml, nd; {
        return(BnnMultiplyDigit(pp + pd, pl, mm + md, ml, nn[nd]));
}

void BnDivideDigit(qq, qd, rr, rd, nn, nd, nl, d, dd)
                BigNum qq, rr, nn, d; int qd, rd, nd, nl, dd; {
        rr[rd] = BnnDivideDigit(qq + qd, nn + nd, nl, d[dd]);
}
