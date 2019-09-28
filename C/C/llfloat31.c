/*
 * *****************************************************************
 * *                                                               *
 * *       GELL 26, runtime library, support for 31 bit float      *
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

/*
 *              Le-Lisp <-> C converters
 */

Ptr
Cfloat_to_Lfloat(double dflt) {
        register int entier;
        union {int binary ; float floating ; } ftampon ;
        ftampon.floating = dflt;
        entier = ftampon.binary;
        entier = (entier >> 1) | 0x80000000;
        return LL_FIX_TO_PTR(entier);
}

double
Lfloat_to_Cfloat(Ptr ptr) {
        union {int binary ; float floating ; } ftampon ;
        ftampon.binary = LL_PTR_TO_FIX(ptr) << 1;
        return ((double) ftampon.floating);
}

Ptr
Lfix_to_Lfloat(Ptr ptr) {
        union {int binary ; float floating ; } ftampon ;
        ftampon.floating = (float) ((int) ((Fix) ((UINT_CVT)ptr)));
        return LL_FIX_TO_PTR((int) ((ftampon.binary >> 1) | 0x80000000));
}

Ptr
Lfloat_to_Lfix(Ptr ptr) {
        union {int binary ; float floating ; } ftampon ;
        ftampon.binary = LL_PTR_TO_FIX(ptr) << 1;
        return LL_FIX_TO_PTR((int) ftampon.floating & 0xffff);
}

/*
 *           Conversions
 */

Ptr
llrt_float(Ptr ptr) {
        return (Lfix_to_Lfloat(ptr));
}

Ptr
llrt_fix(Ptr ptr) { 
        return (Lfloat_to_Lfix(ptr));
}

/*
 *           Predicates
 */

extern int
llrt_floatp(Ptr arg) {
        if (LL_PTR_TO_FIX(arg) < 0)
                return (1);
        else    return (0);
}

extern int
llrt_feq(Ptr arg1, Ptr arg2) {
        if (Lfloat_to_Cfloat(arg1) == Lfloat_to_Cfloat(arg2))
                return (1);
        else    return (0);
}

extern int
llrt_fne(Ptr arg1, Ptr arg2) {
        if (Lfloat_to_Cfloat(arg1) != Lfloat_to_Cfloat(arg2))
                return (1);
        else    return (0);
}

extern int
llrt_flt(Ptr arg1, Ptr arg2) {
        if (Lfloat_to_Cfloat(arg1) < Lfloat_to_Cfloat(arg2))
                return (1);
        else    return (0);
}

extern int
llrt_fle(Ptr arg1, Ptr arg2) {
        if (Lfloat_to_Cfloat(arg1) <= Lfloat_to_Cfloat(arg2))
                return (1);
        else    return (0);
}

extern int
llrt_fgt(Ptr arg1, Ptr arg2) {
        if (Lfloat_to_Cfloat(arg1) > Lfloat_to_Cfloat(arg2))
                return (1);
        else    return (0);
}

extern int
llrt_fge(Ptr arg1, Ptr arg2) {
        if (Lfloat_to_Cfloat(arg1) >= Lfloat_to_Cfloat(arg2))
                return (1);
        else    return (0);
}

/*
 *      Arithmetics
 */

extern Ptr
llrt_fadd(Ptr arg1, Ptr arg2) {
        return (Cfloat_to_Lfloat(Lfloat_to_Cfloat(arg1)
                                 + Lfloat_to_Cfloat(arg2)));
}

extern Ptr
llrt_fsub(Ptr arg1, Ptr arg2) {
        return (Cfloat_to_Lfloat(Lfloat_to_Cfloat(arg1)
                                 - Lfloat_to_Cfloat(arg2)));
}

extern Ptr
llrt_fmul(Ptr arg1, Ptr arg2) {
        return (Cfloat_to_Lfloat(Lfloat_to_Cfloat(arg1)
                                 * Lfloat_to_Cfloat(arg2)));
}

extern Ptr
llrt_fdiv(Ptr arg1, Ptr arg2) {
        return (Cfloat_to_Lfloat(Lfloat_to_Cfloat(arg1)
                                 / Lfloat_to_Cfloat(arg2)));
}

/*
 *      Math
 */

extern Ptr
llrt_sin(Ptr arg1) {
        return (Cfloat_to_Lfloat(sin(Lfloat_to_Cfloat(arg1))));
}

extern Ptr
llrt_cos(Ptr arg1) {
        return (Cfloat_to_Lfloat(cos(Lfloat_to_Cfloat(arg1))));
}

extern Ptr
llrt_asin(Ptr arg1) {
        return (Cfloat_to_Lfloat(asin(Lfloat_to_Cfloat(arg1))));
}

extern Ptr
llrt_acos(Ptr arg1) {
        return (Cfloat_to_Lfloat(acos(Lfloat_to_Cfloat(arg1))));
}

extern Ptr
llrt_atan(Ptr arg1) {
        return (Cfloat_to_Lfloat(atan(Lfloat_to_Cfloat(arg1))));
}

extern Ptr
llrt_exp(Ptr arg1) {
        return (Cfloat_to_Lfloat(exp(Lfloat_to_Cfloat(arg1))));
}

extern Ptr
llrt_log(Ptr arg1) {
        return (Cfloat_to_Lfloat(log(Lfloat_to_Cfloat(arg1))));
}

extern Ptr
llrt_log10(Ptr arg1) {
        return (Cfloat_to_Lfloat(log10(Lfloat_to_Cfloat(arg1))));
}

extern Ptr
llrt_sqrt(Ptr arg1) {
        return (Cfloat_to_Lfloat(sqrt(Lfloat_to_Cfloat(arg1))));
}

extern Ptr
llrt_pow(Ptr arg1, Ptr arg2) {
        return (Cfloat_to_Lfloat(pow(Lfloat_to_Cfloat(arg1),
                                     Lfloat_to_Cfloat(arg2))));
}

/*
 *              I/O
 */

extern Ptr
llrt_cvftoa(Ptr flt, Ptr str) {
        double dblaux;
        char *straux, *strcnt;
        int seepoint = 0;

        dblaux = Lfloat_to_Cfloat(flt);
        straux = (char *)(str->Val + 2);
        errno = 0;
        (void)sprintf(straux, "%.7g", dblaux);
        if (errno != 0) {
                perror("llrt_cvftoa");
                straux[0] = '\0';
        }
        strcnt = straux;
        while (*strcnt != '\0') {
                if (*strcnt == '.' || *strcnt == 'e') {
                        seepoint = 1;
                        while (*strcnt != '\0') strcnt++; 
                }
                else strcnt++;
        }
        if (seepoint == 0){
                *strcnt++ = '.';
                *strcnt = '\0';
        }
        return LL_FIX_TO_PTR((Fix) (UINT_CVT)((strcnt - straux)));
}

extern Ptr
llrt_cvatof(Ptr str, Ptr len) {
        char  *straux;
        double dblaux;

        straux = (char *)(str->Val + 2);
        *(straux + LL_PTR_TO_FIX(len)) = '\0';
        errno = 0;
        dblaux = atof(straux);
        if (errno != 0) {
                perror("llrt_cvatof");
                dblaux = 0.0;
        }
        return (Cfloat_to_Lfloat(dblaux));
}


/*
 *              Misc
 */

extern Ptr
llrt_runtime(void) {
        return (Cfloat_to_Lfloat(llrt_c_runtime()));
}

extern void
llrt_sleep(Ptr arg) {
        llrt_c_sleep (Lfloat_to_Cfloat(arg));
}

extern Ptr
llrt_setalarm(Ptr arg) {
        return (Cfloat_to_Lfloat(llrt_c_setalarm(Lfloat_to_Cfloat(arg))));
}

