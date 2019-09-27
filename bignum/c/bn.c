/* Copyright     Digital Equipment Corporation & INRIA     1988, 1989 */
/* Last modified_on Tue Jun  6 18:24:03 GMT+2:00 1989 by shand */
/*      modified_on Fri Apr 28 18:36:28 GMT+2:00 1989 by herve */


/* bn.c: a piece of the bignum kernel written in C */


                /***************************************/

#define BNNMACROS_OFF
#include "BigNum.h"

static int Initialized = FALSE;

                        /*** copyright ***/

static char copyright[]="@(#)bn.c: copyright Digital Equipment Corporation & INRIA 1988, 1989\n";


                /***************************************/

void BnnInit ()
{
    if (!Initialized)
    {


        Initialized = TRUE;
    }
}

                /***************************************/


Boolean BnnIsZero (nn, nl)

BigNum          nn;
BigNumLength    nl;

/* 
 * Returns TRUE iff N = 0
 */

{
    return (BnnNumDigits (nn, nl) == 1 && BnnIsDigitZero (*nn));
}


                /***************************************/


BigNumCarry BnnMultiply (pp, pl, mm, ml, nn, nl)

register BigNum         pp, nn;
         BigNum         mm;
register BigNumLength   pl, nl;
         BigNumLength   ml;

/*
 * Performs the product:
 *    Q = P + M * N
 *    BB = BBase(P)
 *    Q mod BB => P
 *    Q div BB => CarryOut
 *
 * Returns the CarryOut.  
 *
 * Assumes: 
 *    Size(P) >= Size(M) + Size(N), 
 *    Size(M) >= Size(N).
 */

{
   BigNumCarry c;

#ifndef mips
   /* Multiply one digit at a time */
   for (c = 0; nl-- > 0; pp++, nn++, pl--)
      c += BnnMultiplyDigit (pp, pl, mm, ml, *nn);
#else mips
   /* On mips processor use faster Karatsuba based multiplication. */
   c = 0;
   if (nl & 1)
   {
      c += BnnMultiplyDigit (pp, pl, mm, ml, *nn);
      pp++; nn++; nl--;
   }
   while (nl > 0)
   {
      c += BnnMultiply2Digit (pp, pl, mm, ml, nn[0], nn[1]);
      pp += 2;
      nn += 2;
      nl -= 2;
   }
#endif mips

   return c;
}

                /***************************************/
/**/


static divide (nn, nl, dd, dl)

         BigNum         nn, dd;
register BigNumLength   nl, dl;

/*
 * In-place division.
 *
 * Input (N has been EXTENDED by 1 PLACE; D is normalized):
 *      +-----------------------------------------------+----+
 *      |                       N                         EXT|
 *      +-----------------------------------------------+----+
 *
 *      +-------------------------------+
 *      |               D              1|
 *      +-------------------------------+
 *
 * Output (in place of N):
 *      +-------------------------------+---------------+----+
 *      |               R               |          Q         |
 *      +-------------------------------+---------------+----+
 *
 * Assumes:
 *    N > D
 *    Size(N) > Size(D)
 *    last digit of N < last digit of D
 *    D is normalized (Base/2 <= last digit of D < Base)
 */

{
   register     int             ni;
                BigNumDigit     DDigit, BaseMinus1, QApp, RApp;


   /* Initialize constants */
   BnnSetDigit (&BaseMinus1, 0);
   BnnComplement(&BaseMinus1, 1);

   /* Save the most significant digit of D */
   BnnAssign (&DDigit, dd+dl-1, 1);

   /* Replace D by Base - D */
   BnnComplement (dd, dl);
   BnnAddCarry (dd, dl, 1);

   /* For each digit of the divisor, from most significant to least: */
   nl += 1;
   ni = nl-dl;
   while (--ni >= 0) 
   {
      /* Compute the approximate quotient */
      nl--;

      /* If first digits of numerator and denominator are the same, */
      if (BnnCompareDigits (*(nn+nl), DDigit) == BN_EQ)
         /* Use "Base - 1" for the approximate quotient */
         BnnAssign (&QApp, &BaseMinus1, 1);
      else
         /* Divide the first 2 digits of N by the first digit of D */
         RApp = BnnDivideDigit (&QApp, nn+nl-1, 2, DDigit);

      /* Compute the remainder */
      BnnMultiplyDigit (nn+ni, dl+1, dd, dl, QApp);
      
      /* Correct the approximate quotient, in case it was too large */
      while (BnnCompareDigits (*(nn+nl), QApp) != BN_EQ)
      {
         BnnSubtract (nn+ni, dl+1, dd, dl, 1);  /* Subtract D from N */
         BnnSubtractBorrow (&QApp, 1, 0);       /* Q -= 1 */
      }
   }

   /* Restore original D */
   BnnComplement (dd, dl);
   BnnAddCarry (dd, dl, 1);
}


                /***************************************/
/**/


void BnnDivide (nn, nl, dd, dl)

         BigNum         nn, dd;
register BigNumLength   nl, dl;

/*
 * Performs the quotient:
 *    N div D => high-order bits of N, starting at N[dl]
 *    N mod D => low-order dl bits of N
 *
 * Assumes 
 *    Size(N) > Size(D),
 *    last digit of N < last digit of D (if N > D).
 */

{
   BigNumDigit  nshift;


   /* Take care of easy cases first */
   switch (BnnCompare (nn, nl, dd, dl))
   {
      case BN_LT:       /* n < d */
         ;                                      /* N => R */
         BnnSetToZero (nn+dl, nl-dl);           /* 0 => Q */
         return;
      case BN_EQ:       /* n == d */
         BnnSetToZero (nn, nl);                 /* 0 => R */
         BnnSetDigit (nn+nl-1, 1);              /* 1 => Q */
         return;
   }

   /* here: n > d */

   /* If divisor is just 1 digit, use a special divide */
   if (dl == 1)
      *nn = BnnDivideDigit (nn+1, nn, nl, *dd);        /* note: nn+1 = nn+dl */
   /* Otherwise, divide one digit at a time */
   else
   {
      /* Normalize */
      nshift = BnnNumLeadingZeroBitsInDigit (*(dd+dl-1));
      BnnShiftLeft (dd, dl, nshift);
      BnnShiftLeft (nn, nl, nshift);

      /* Divide */
      divide (nn, nl-1, dd, dl);

      /* Unnormalize */
      BnnShiftRight (dd, dl, nshift);
      BnnShiftRight (nn, dl, nshift); 
      /* note: unnormalize N <=> unnormalize R (with R < D) */
   }
}

                /***************************************/
/**/


BigNumCmp BnnCompare (mm, ml, nn, nl)

         BigNum         mm, nn;
register BigNumLength   ml, nl;

/*
 * return
 *              BN_GT   iff M > N
 *              BN_EQ   iff N = N
 *              BN_LT   iff N < N
*/

{
    register BigNumCmp result = BN_EQ;


    ml = BnnNumDigits (mm, ml);
    nl = BnnNumDigits (nn, nl);

    if (ml != nl)
        return (ml > nl ? BN_GT : BN_LT);

    while (result == BN_EQ && ml-- > 0)
        result = BnnCompareDigits (*(mm+ml), *(nn+ml));

    return (result);

/**** USE memcmp() instead: extern int memcmp ();

    if (ml == nl)
    {
        lex = memcmp (mm, nn, nl*BN_DIGIT_SIZE/BN_BYTE_SIZE);
        return (lex > 0 ? BN_GT: (lex == 0 ? BN_EQ: BN_LT));
    }
    else
        return (ml > nl ? BN_GT : BN_LT);
******/
}

                /***************************************/


void BnnClose ()
{
    if (Initialized)
    {


        Initialized = FALSE;
    }
}

                /***************************************/
