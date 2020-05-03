/*************************************************************/
/*                                                           */
/*       Le-Lisp C fix converters and equo functions         */
/*************************************************************/

/* includes */
#include "lelisp.h"

/* converter C FIX -> Le-Lisp FIX */

LL_OBJECT
cfix_to_lfix(long i) {
         return(LL_OBJECT)(i & 0xffff);
}

/* converter Le-Lisp FIX -> C FIX */

long
lfix_to_cfix(long i) {
        return((i << 16) >> 16);
}

