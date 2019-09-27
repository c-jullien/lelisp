/*
 * *****************************************************************
 * *                                                               *
 * *       GELL 26, runtime library, support for 64 bit float      *
 * *                                                               *
 * *       Copyright (c) ILOG S.A., 1992, 1993                     *
 * *                                                               *
 * *****************************************************************
 */


/*      The ISO-C librairies    */

#include <errno.h>
#include <math.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "llc.h" 

extern Ptr GIbfloat, GIbvect, GIffloat;

/*
 *              Predicates
 */

extern int
llrt_floatp(Ptr arg) {
        if ((arg >= GIbfloat) && (arg < GIbvect))
                return (1);
        else    return (0);
}

extern int
llrt_feq(Ptr arg1, Ptr arg2) {
        if (((Float) arg1)->Val == ((Float) arg2)->Val)
                return (1);
        else    return (0);
}

extern int
llrt_fne(Ptr arg1, Ptr arg2) {
        if (((Float) arg1)->Val != ((Float) arg2)->Val)
                return (1);
        else    return (0);
}

extern int
llrt_flt(Ptr arg1, Ptr arg2) {
        if (((Float) arg1)->Val < ((Float) arg2)->Val)
                return (1);
        else    return (0);
}

extern int
llrt_fle(Ptr arg1, Ptr arg2) {
        if (((Float) arg1)->Val <= ((Float) arg2)->Val)
                return (1);
        else    return (0);
}

extern int
llrt_fgt(Ptr arg1, Ptr arg2) {
        if (((Float) arg1)->Val > ((Float) arg2)->Val)
                return (1);
        else    return (0);
}

extern int
llrt_fge(Ptr arg1, Ptr arg2) {
        if (((Float) arg1)->Val >= ((Float) arg2)->Val)
                return (1);
        else    return (0);
}


/*
 *      Allocation
 */

Float
llrt_float_alloc(void) {
        if (GIffloat == 0) llrt_gcfloat();
        if (GIffloat == 0) llrt_error ("llrt_float_alloc");
        {register Float fltaux;
         fltaux = (Float) GIffloat;
         GIffloat = fltaux->Next;
         return (fltaux);}
}


/*
 *              Conversions
 */

Ptr
llrt_fix(Ptr arg) {
        register Fix fixaux;
        fixaux = ((Float) arg)->Val;
        return ((Ptr) ((UINT_CVT) ((UFix) fixaux)));
}

Ptr
llrt_float(Ptr arg) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = (Fix) ((UFix) ((UINT_CVT) arg));
        return ((Ptr) fltaux);
}

/*
 *      Arithmetics
 */

extern Ptr
llrt_fadd(Ptr arg1, Ptr arg2) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = ((Float) arg1)->Val + ((Float) arg2)->Val;
        return ((Ptr) fltaux);
}

extern Ptr
llrt_fsub(Ptr arg1, Ptr arg2) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = ((Float) arg1)->Val - ((Float) arg2)->Val;
        return ((Ptr) fltaux);
}

extern Ptr
llrt_fmul(Ptr arg1, Ptr arg2) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = ((Float) arg1)->Val * ((Float) arg2)->Val;
        return ((Ptr) fltaux);
}

extern Ptr
llrt_fdiv(Ptr arg1, Ptr arg2) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = ((Float) arg1)->Val / ((Float) arg2)->Val;
        return ((Ptr) fltaux);
}


/*
 *      Math
 */

extern Ptr
llrt_sin(Ptr arg1) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = sin (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr
llrt_cos(Ptr arg1) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = cos (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr
llrt_asin(Ptr arg1) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = asin (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr
llrt_acos(Ptr arg1) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = acos (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr
llrt_atan(Ptr arg1) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = atan (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr
llrt_exp(Ptr arg1) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = exp (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr
llrt_log(Ptr arg1) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = log (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr
llrt_log10(Ptr arg1) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = log10 (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr
llrt_sqrt(Ptr arg1) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = sqrt (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr
llrt_pow(Ptr arg1, Ptr arg2) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = pow (((Float) arg1)->Val, ((Float) arg2)->Val);
        return ((Ptr) fltaux);
}


/*
 *              I/O
 */


extern Ptr
llrt_cvftoa(Ptr flt, Ptr str) {
        double dblaux;
        char  *straux, *strcnt;
        int seepoint = 0;

        dblaux = ((Float) flt)->Val;
        straux = (char *)(str->Val + 2);
        errno = 0;
        sprintf (straux, "%.12g", dblaux);
        if (errno != 0) {
                llrt_C_error ("llrt_cvftoa");
                straux[0] = '\0';}
        strcnt = straux;
        while (*strcnt != '\0') {
                if (*strcnt == '.' || *strcnt == 'e') {
                        seepoint = 1;
                        while (*strcnt != '\0' ) strcnt++; 
                }
                else strcnt++;
        }
        if (seepoint == 0){
                *strcnt++ = '.';
                *strcnt = '\0';}
        return LL_FIX_TO_PTR((Fix) (UINT_CVT)((strcnt - straux)));
}

extern Ptr
llrt_cvatof(Ptr str, Ptr len) {
        register Float fltaux;
        register double dblaux;
        register char * straux;

        straux = (char *)(str->Val + 2);
        *(straux + LL_PTR_TO_FIX(len)) = '\0';
        errno = 0;
        dblaux = atof (straux);
        if (errno != 0) {
                llrt_C_error("llrt_cvatof");
                dblaux = 0.0;}
        fltaux = llrt_float_alloc();
        fltaux->Val = dblaux;
        return ((Ptr) fltaux);
}


/*
 *              Misc
 */

extern Ptr
llrt_runtime (void) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = llrt_c_runtime();
        return ((Ptr) fltaux);
}

extern void
llrt_sleep(Ptr arg) {
        llrt_c_sleep (((Float) arg)->Val);
}

extern Ptr
llrt_setalarm(Ptr arg) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = llrt_c_setalarm (((Float) arg)->Val);
        return ((Ptr) fltaux);
}


/*
 *              Le-Lisp <-> C converters
 */


extern double
Lfloat_to_Cfloat(Ptr arg) {
        return ((Float) arg)->Val;
}

extern Ptr
Cfloat_to_Lfloat (double arg) {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = arg;
        return ((Ptr) fltaux);
}
