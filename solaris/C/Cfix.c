/*************************************************************/
/*                                                           */
/*       Le-Lisp C fix converters and equo functions         */
/*                      on SOLARIS                           */
/*************************************************************/

/* includes */
#include "lelisp.h"

/* equo function */
void
equo(unsigned int x, unsigned int y, unsigned int *buffer) {
        *buffer = ((x / y) & 65535) ;
        *(buffer+1) = ((x % y) & 65535) ;
}

/* converter C FIX -> Le-Lisp FIX */

LL_OBJECT
cfix_to_lfix (long i) {
         return(LL_OBJECT)(i & 0xffff);
}

/* converter Le-Lisp FIX -> C FIX */

long
lfix_to_cfix (LL_OBJECT i) {
        return(((long)i << 16) >> 16);
}

