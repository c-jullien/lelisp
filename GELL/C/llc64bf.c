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
#include <stdio.h>
#include <string.h>


#include "llc.h" 


extern Ptr GIbfloat, GIbvect, GIffloat;

/*
 *              Predicates
 */

extern int llrt_floatp (arg) Ptr arg; {
        if ((arg >= GIbfloat) && (arg < GIbvect))
                return (1);
        else    return (0);
}

extern int llrt_feq (arg1, arg2) Ptr arg1, arg2; {
        if (((Float) arg1)->Val == ((Float) arg2)->Val)
                return (1);
        else    return (0);
}

extern int llrt_fne (arg1, arg2) Ptr arg1, arg2; {
        if (((Float) arg1)->Val != ((Float) arg2)->Val)
                return (1);
        else    return (0);
}

extern int llrt_flt (arg1, arg2) Ptr arg1, arg2; {
        if (((Float) arg1)->Val < ((Float) arg2)->Val)
                return (1);
        else    return (0);
}

extern int llrt_fle (arg1, arg2) Ptr arg1, arg2; {
        if (((Float) arg1)->Val <= ((Float) arg2)->Val)
                return (1);
        else    return (0);
}

extern int llrt_fgt (arg1, arg2) Ptr arg1, arg2; {
        if (((Float) arg1)->Val > ((Float) arg2)->Val)
                return (1);
        else    return (0);
}

extern int llrt_fge (arg1, arg2) Ptr arg1, arg2; {
        if (((Float) arg1)->Val >= ((Float) arg2)->Val)
                return (1);
        else    return (0);
}


/*
 *      Allocation
 */

Float llrt_float_alloc () {
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

Ptr llrt_fix (arg) Ptr arg; {
        register Fix fixaux;
        fixaux = ((Float) arg)->Val;
        return ((Ptr) ((UFix) fixaux));
}

Ptr llrt_float (arg) Ptr arg; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = (Fix) ((UFix) arg);
        return ((Ptr) fltaux);
}

/*
 *      Arithmetics
 */

extern Ptr llrt_fadd (arg1, arg2) Ptr arg1, arg2; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = ((Float) arg1)->Val + ((Float) arg2)->Val;
        return ((Ptr) fltaux);
}

extern Ptr llrt_fsub (arg1, arg2) Ptr arg1, arg2; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = ((Float) arg1)->Val - ((Float) arg2)->Val;
        return ((Ptr) fltaux);
}

extern Ptr llrt_fmul (arg1, arg2) Ptr arg1, arg2; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = ((Float) arg1)->Val * ((Float) arg2)->Val;
        return ((Ptr) fltaux);
}

extern Ptr llrt_fdiv (arg1, arg2) Ptr arg1, arg2; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = ((Float) arg1)->Val / ((Float) arg2)->Val;
        return ((Ptr) fltaux);
}


/*
 *      Math
 */

extern Ptr llrt_sin (arg1) Ptr arg1; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = sin (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr llrt_cos (arg1) Ptr arg1; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = cos (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr llrt_asin (arg1) Ptr arg1; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = asin (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr llrt_acos (arg1) Ptr arg1; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = acos (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr llrt_atan (arg1) Ptr arg1; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = atan (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr llrt_exp (arg1) Ptr arg1; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = exp (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr llrt_log (arg1) Ptr arg1; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = log (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr llrt_log10 (arg1) Ptr arg1; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = log10 (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr llrt_sqrt (arg1) Ptr arg1; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = sqrt (((Float) arg1)->Val);
        return ((Ptr) fltaux);
}

extern Ptr llrt_pow (arg1, arg2) Ptr arg1, arg2; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = pow (((Float) arg1)->Val, ((Float) arg2)->Val);
        return ((Ptr) fltaux);
}


/*
 *              I/O
 */


extern Ptr llrt_cvftoa (flt, str) Ptr flt, str; {
        double dblaux;
        char  *straux, *strcnt;
        int seepoint = 0;

        dblaux = ((Float) flt)->Val;
        straux = (char *)(str->Val + 2);
        errno = 0;
        sprintf (straux, "%g", dblaux);
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
        return ((Ptr) ((Fix) (strcnt - straux)));
}

extern Ptr llrt_cvatof (str, len) Ptr str, len; {
        register Float fltaux;
        register double dblaux;
        register char * straux;

        straux = (char *)(str->Val + 2);
        *(straux + (Fix) len) = '\0';
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

extern Ptr llrt_runtime () {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = llrt_c_runtime();
        return ((Ptr) fltaux);
}

extern llrt_sleep (arg) Ptr arg; {
        llrt_c_sleep (((Float) arg)->Val);
}

extern Ptr llrt_setalarm (arg) Ptr arg; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = llrt_c_setalarm (((Float) arg)->Val);
        return ((Ptr) fltaux);
}


/*
 *              Le-Lisp <-> C converters
 */


extern double Lfloat_to_Cfloat (arg) Ptr arg; {
        return ((Float) arg)->Val;
}

extern Ptr Cfloat_to_Lfloat (arg) double arg; {
        register Float fltaux;
        fltaux = llrt_float_alloc();
        fltaux->Val = arg;
        return ((Ptr) fltaux);
}

