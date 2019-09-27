/*
;;;
;;; llfloat.c:          Le-Lisp floating point runtime library
;;;
;;; $Source: /usr/cvs/lelisp/common/llfloat.c,v $
;;; $Date: 2017/09/10 05:50:17 $
;;; $Revision: 1.9 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------
*/

/*
 *              Includes files
 */

#include "Machine.h"
#include <stdlib.h>
#include <math.h>
#include <errno.h>

/*
 *              Le-Lisp <-> C converters
 */

/*      double precision ASCII->float   */

double
llrt_cvatof(char *buffer) {
        double result;

        errno = 0;
        result = atof(buffer);
/* the sun4 and SunOS4.0 have IEEE routines which routine Inf. */
#if     !defined(SUN4)
#if     !defined(SUNOS40)
        if (errno == ERANGE)
                kill(getpid(), SIGFPE);
#endif /* SUNOS40 */
#endif /* SUN4 */
        return (result);
}

/*      C long <-> C double  converters */

double
floatc(long intval) {
        return((double) intval);
}

long
fixc(double fltval) {
        return((long) fltval);
}

/*
 *      Circular functions
 */

double
llrt_sin(double fltval) {
        return(sin(fltval));
}

double
llrt_cos(double fltval) {
        return(cos(fltval));
}

double
llrt_asin(double fltval) {
        return(asin(fltval));
}

double
llrt_acos(double fltval) {
        return(acos(fltval));
}

double
llrt_atan(double fltval) {
        return(atan(fltval));
}

double
llrt_exp(double fltval) {
        return(exp(fltval));
}

double
llrt_log(double fltval) {
        return(log(fltval));
}

double
llrt_log10(double fltval) {
        return(log10(fltval));
}

double
llrt_power(double fltval1, double fltval2)  {
        return(pow(fltval1, fltval2));
}

double
llrt_sqrt(double fltval) {
        return(sqrt(fltval));
}

