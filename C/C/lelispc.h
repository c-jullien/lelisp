/*
 * *****************************************************************
 * *                                                               *
 * *       GELL 26, include file for the generated modules         *
 * *                                                               *
 * *       Copyright (c) ILOG S.A., 1990, 1991, 1992, 1993         *
 * *                                                               *
 * *****************************************************************
 */


#ifndef _LELISPC_H_
#define _LELISPC_H_

#include "lldata.h"

/* Global variables defined in: llc.c */

extern Ptr     GIa1;
extern Ptr     GIa2;
extern Ptr     GIa3;
extern Ptr     GIa4;
extern Ptr     GIsp;

extern Ptr     GIffloat;
extern Ptr     GIbnumb;
extern Ptr     GIbfloat;
extern Ptr     GIbstrg;
extern Ptr     GIbvect;
extern Ptr     GIbsymb;
extern Ptr     GInil;
extern Ptr     GIbvar;
extern Ptr     GIbcons;
extern Ptr     GIecons;
extern Ptr     GIitstate;
extern Ptr     GIitcount;
extern Ptr     GIfcons;

/* Runtime functions defined in: llc.c */

extern void    llrt_ithard(void);
extern Ptr     llrt_cons(Ptr car, Ptr cdr);
extern Ptr     llrt_gccons(void);
extern Ptr     llrt_gcfloat(void);
extern void    llrt_inisymb(Ptr plen, Ptr pname, Ptr fval, Ptr dotvar, Ptr ftype);
extern Ptr     llrt_inicst(Ptr plen, Ptr pname, Ptr dotvar);
extern Ptr     llrt_callg();
extern Ptr     llrt_vag(Ptr val);
extern Ptr     llrt_jmpd(Ptr* litable, int isymbol, int igellname, int igellreset);

extern int     llrt_corsav(char *name);
extern int     llrt_corest(char *name);

/* Runtime floating point functions defined in: llfloat[31|64].c */

extern Ptr     llrt_cvatof(Ptr str, Ptr len);
extern Ptr     llrt_cvftoa(Ptr flt, Ptr str);
extern Ptr     llrt_float(Ptr ptr);
extern Ptr     llrt_fix(Ptr ptr);

extern int     llrt_floatp(Ptr arg);
extern int     llrt_feq(Ptr arg1, Ptr arg2);
extern int     llrt_fne(Ptr arg1, Ptr arg2);
extern int     llrt_flt(Ptr arg1, Ptr arg2);
extern int     llrt_fle(Ptr arg1, Ptr arg2);
extern int     llrt_fgt(Ptr arg1, Ptr arg2);
extern int     llrt_fge(Ptr arg1, Ptr arg2);

extern Ptr     llrt_fadd(Ptr arg1, Ptr arg2);
extern Ptr     llrt_fsub(Ptr arg1, Ptr arg2);
extern Ptr     llrt_fmul(Ptr arg1, Ptr arg2);
extern Ptr     llrt_fdiv(Ptr arg1, Ptr arg2);

extern Ptr     llrt_sin(Ptr arg1);
extern Ptr     llrt_cos(Ptr arg1);
extern Ptr     llrt_asin(Ptr arg1);
extern Ptr     llrt_acos(Ptr arg1);
extern Ptr     llrt_atan(Ptr arg1);
extern Ptr     llrt_exp(Ptr arg1);
extern Ptr     llrt_log(Ptr arg1);
extern Ptr     llrt_log10(Ptr arg1);
extern Ptr     llrt_sqrt(Ptr arg1);
extern Ptr     llrt_pow(Ptr arg1, Ptr arg2);

extern Ptr     llrt_runtime(void);
extern Ptr     llrt_sleep(Ptr arg);
extern Ptr     llrt_setalarm(Ptr arg);

extern Ptr     Cfloat_to_Lfloat(double d);
extern double  Lfloat_to_Cfloat(Ptr ptr);
extern Ptr     Lfix_to_Lfloat(Ptr ptr);
extern Ptr     Lfloat_to_Lfix(Ptr ptr);
extern void    Cfixvector_to_Lfixvector(Ptr vect);
extern void    Lfixvector_to_Cfixvector(Ptr vect);

/* Indirect functions for: ../common/*.c */

extern char    llrt_ttyin(void);
extern char    llrt_ttys(char *buf);
extern int     llrt_ttyinstr(char *buf, int len);
extern int     llrt_ttyout(int len, char *buf);

extern int     llrt_infile(int chan, char *buf);
extern int     llrt_apfile(int chan, char *buf);
extern int     llrt_oufile(int chan, char *buf);
extern int     llrt_inbf(int chan, char *buf, int *psiz);
extern int     llrt_inbfb(int chan, char *buf, int *psiz);
extern int     llrt_outf(int chan, int len, char *buf);
extern int     llrt_outfl(int chan, int len, char *buf);
extern int     llrt_fcopy(char *buf1, char *buf2);
extern int     llrt_fdele(char *buf);
extern int     llrt_frena(char *buf1, char *buf2);
extern int     llrt_fprobe(char *buf);
extern int     llrt_fclos(int chan);

extern double  llrt_c_runtime(void);
extern int     llrt_c_sleep(double);
extern int     llrt_cline(char *buf);
extern int     llrt_getgloba(char *buf);
extern double  llrt_c_setalarm(double);

extern Ptr     GXcrastrg(void);

extern Table GIbtbgc, GIbtbin;
extern char *llrt_charttys;
extern char *static_string;

#endif /* _LELISPC_H_ */
