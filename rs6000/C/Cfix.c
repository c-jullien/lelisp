/*************************************************************/
/*                                                           */
/*       Le-Lisp C fix converters and equo functions         */
/*                      on RS6000                           */
/*************************************************************/

/* includes */
#include "lelisp.h"

/* equo function */
equo (x,y,buffer)
unsigned x,y,*buffer;
{
        *buffer = ((x / y) & 65535) ;
        *(buffer+1) = ((x % y) & 65535) ;
        return;
}

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
	return(((long)i << 16) >> 16);
}

