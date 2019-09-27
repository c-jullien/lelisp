
/* Maintenance: automatic genereted file                     */
/*                                                           */
/* $Id: Cfix.c,v 1.3 2017/09/03 07:27:47 jullien Exp $ */
/*************************************************************/

/*                                                           */
/*       Le-Lisp C fix converters and equo functions         */
/*                      on Solaris 386                       */
/*************************************************************/

/* includes */
#include "lelisp.h"

/* converter C FIX -> Le-Lisp FIX */

LL_OBJECT cfix_to_lfix (i)
long i;
{
         return(LL_OBJECT)(i & 0xffff);
}

/* converter Le-Lisp FIX -> C FIX */

long  lfix_to_cfix (i)
LL_OBJECT i;
{
        long l = (long)i;
        return((l << 16) >> 16);
}

