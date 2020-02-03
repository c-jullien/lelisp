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
#include <stdio.h>
#include <string.h>



#include "llc.h"


/*
 *              Le-Lisp <-> C converters
 */

Ptr Cfloat_to_Lfloat (dflt)
    double dflt; 
{
        register int entier;
        union {int binaire ; float flottant ; } ftampon ;
        ftampon.flottant = dflt;
        entier = ftampon.binaire;
        entier = (entier >> 1) | 0x80000000;
        return ((Ptr) entier);
}

double Lfloat_to_Cfloat (ptr)
       Ptr ptr;
{
        union {int binaire ; float flottant ; } ftampon ;
        ftampon.binaire = ((int) ptr << 1);
        return ((double) ftampon.flottant);
}

Ptr Lfix_to_Lfloat (ptr)
    Ptr ptr;
{
        union {int binaire ; float flottant ; } ftampon ;
        ftampon.flottant = (float) ((int) ((Fix) ptr));
        return ((Ptr) ((int) ((ftampon.binaire >> 1) | 0x80000000)));
}

Ptr Lfloat_to_Lfix (ptr)
    Ptr ptr;
{
        union {int binaire ; float flottant ; } ftampon ;
        ftampon.binaire = (int) ptr << 1;
        return ((Ptr) ((int) ftampon.flottant & 0xffff));
}


/*
 *           Conversions
 */

Ptr llrt_float (ptr)
    Ptr ptr;
{
        return (Lfix_to_Lfloat (ptr));
}

Ptr llrt_fix (ptr) 
    Ptr ptr;
{
        return (Lfloat_to_Lfix (ptr));
}

/*
 *           Predicates
 */

extern int llrt_floatp (arg) Ptr arg; {
        if ((int) arg < (int) 0)
                return (1);
        else    return (0);
}

extern int llrt_feq (arg1, arg2) Ptr arg1, arg2; {
        if (Lfloat_to_Cfloat (arg1) == Lfloat_to_Cfloat (arg2))
                return (1);
        else    return (0);
}

extern int llrt_fne (arg1, arg2) Ptr arg1, arg2; {
        if (Lfloat_to_Cfloat (arg1) != Lfloat_to_Cfloat (arg2))
                return (1);
        else    return (0);
}

extern int llrt_flt (arg1, arg2) Ptr arg1, arg2; {
        if (Lfloat_to_Cfloat (arg1) < Lfloat_to_Cfloat (arg2))
                return (1);
        else    return (0);
}

extern int llrt_fle (arg1, arg2) Ptr arg1, arg2; {
        if (Lfloat_to_Cfloat (arg1) <= Lfloat_to_Cfloat (arg2))
                return (1);
        else    return (0);
}

extern int llrt_fgt (arg1, arg2) Ptr arg1, arg2; {
        if (Lfloat_to_Cfloat (arg1) > Lfloat_to_Cfloat (arg2))
                return (1);
        else    return (0);
}

extern int llrt_fge (arg1, arg2) Ptr arg1, arg2; {
        if (Lfloat_to_Cfloat (arg1) >= Lfloat_to_Cfloat (arg2))
                return (1);
        else    return (0);
}



/*
 *      Arithmetics
 */

extern Ptr llrt_fadd (arg1, arg2) Ptr arg1, arg2; {
        return (Cfloat_to_Lfloat
                    (Lfloat_to_Cfloat (arg1) + Lfloat_to_Cfloat (arg2)));
}

extern Ptr llrt_fsub (arg1, arg2) Ptr arg1, arg2; {
        return (Cfloat_to_Lfloat
                    (Lfloat_to_Cfloat (arg1) - Lfloat_to_Cfloat (arg2)));
}

extern Ptr llrt_fmul (arg1, arg2) Ptr arg1, arg2; {
        return (Cfloat_to_Lfloat
                    (Lfloat_to_Cfloat (arg1) * Lfloat_to_Cfloat (arg2)));
}

extern Ptr llrt_fdiv (arg1, arg2) Ptr arg1, arg2; {
        return (Cfloat_to_Lfloat
                    (Lfloat_to_Cfloat (arg1) / Lfloat_to_Cfloat (arg2)));
}


/*
 *      Math
 */

extern Ptr llrt_sin (arg1) Ptr arg1; {
        return (Cfloat_to_Lfloat (sin (Lfloat_to_Cfloat (arg1))));
}

extern Ptr llrt_cos (arg1) Ptr arg1; {
        return (Cfloat_to_Lfloat (cos (Lfloat_to_Cfloat (arg1))));
}

extern Ptr llrt_asin (arg1) Ptr arg1; {
        return (Cfloat_to_Lfloat (asin (Lfloat_to_Cfloat (arg1))));
}

extern Ptr llrt_acos (arg1) Ptr arg1; {
        return (Cfloat_to_Lfloat (acos (Lfloat_to_Cfloat (arg1))));
}

extern Ptr llrt_atan (arg1) Ptr arg1; {
        return (Cfloat_to_Lfloat (atan (Lfloat_to_Cfloat (arg1))));
}

extern Ptr llrt_exp (arg1) Ptr arg1; {
        return (Cfloat_to_Lfloat (exp (Lfloat_to_Cfloat (arg1))));
}

extern Ptr llrt_log (arg1) Ptr arg1; {
        return (Cfloat_to_Lfloat (log (Lfloat_to_Cfloat (arg1))));
}

extern Ptr llrt_log10 (arg1) Ptr arg1; {
        return (Cfloat_to_Lfloat (log10 (Lfloat_to_Cfloat (arg1))));
}

extern Ptr llrt_sqrt (arg1) Ptr arg1; {
        return (Cfloat_to_Lfloat (sqrt (Lfloat_to_Cfloat (arg1))));
}

extern Ptr llrt_pow (arg1, arg2) Ptr arg1, arg2; {
        return (Cfloat_to_Lfloat (pow (Lfloat_to_Cfloat (arg1),
                                       Lfloat_to_Cfloat (arg2))));
}


/*
 *              I/O
 */


extern Ptr llrt_cvftoa (flt, str) Ptr flt, str; {
        double dblaux;
        char *straux, *strcnt;
        int seepoint = 0;

        dblaux = Lfloat_to_Cfloat (flt);
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
        char  *straux;
        double dblaux;

        straux = (char *)(str->Val + 2);
        *(straux + (Fix) len) = '\0';
        errno = 0;
        dblaux = atof (straux);
        if (errno != 0) {
                llrt_C_error("llrt_cvatof");
                dblaux = 0.0;}
        return (Cfloat_to_Lfloat (dblaux));
}


/*
 *              Misc
 */

extern Ptr llrt_runtime () {
        return (Cfloat_to_Lfloat (llrt_c_runtime ()));
}

extern llrt_sleep (arg) Ptr arg; {
        llrt_c_sleep (Lfloat_to_Cfloat (arg));
}

extern Ptr llrt_setalarm (arg) Ptr arg; {
        return (Cfloat_to_Lfloat (llrt_c_setalarm (Lfloat_to_Cfloat (arg))));
}

