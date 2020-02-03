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

extern Ptr     llrt_ithard();
extern Ptr     llrt_cons();
extern Ptr     llrt_gccons();
extern Ptr     llrt_gcfloat();
extern         llrt_llovni();
extern Ptr     llrt_nlist();
extern         llrt_inisymb();
extern         llrt_inicst();
extern Ptr     llrt_callg();
extern Ptr     llrt_vag();
extern Ptr     llrt_jmpd();

extern int     llrt_corsav();
extern int     llrt_corest();

extern Ptr     llrt_call_error();
extern Ptr     llrt_call_length();
extern Ptr     llrt_call_nreverse();
extern Ptr     llrt_call_memq();
extern Ptr     llrt_call_assq();
extern Ptr     llrt_call_cassq();
extern Ptr     llrt_call_rassq();

/* Runtime floating point functions defined in: llfloat[31|64].c */

extern Ptr     llrt_cvatof();
extern Ptr     llrt_cvftoa();
extern Ptr     llrt_float();
extern Ptr     llrt_fix();

extern int     llrt_floatp();
extern int     llrt_feq();
extern int     llrt_fne();
extern int     llrt_flt();
extern int     llrt_fle();
extern int     llrt_fgt();
extern int     llrt_fge();

extern Ptr     llrt_fadd();
extern Ptr     llrt_fsub();
extern Ptr     llrt_fmul();
extern Ptr     llrt_fdiv();

extern Ptr     llrt_sin();
extern Ptr     llrt_cos();
extern Ptr     llrt_asin();
extern Ptr     llrt_acos();
extern Ptr     llrt_atan();
extern Ptr     llrt_exp();
extern Ptr     llrt_log();
extern Ptr     llrt_log10();
extern Ptr     llrt_sqrt();
extern Ptr     llrt_pow();

extern Ptr     llrt_runtime();
extern Ptr     llrt_sleep();
extern Ptr     llrt_setalarm();

extern Ptr     Cfloat_to_Lfloat();
extern double  Lfloat_to_Cfloat();
extern Ptr     Lfix_to_Lfloat();
extern Ptr     Lfloat_to_Lfix();
extern         Cfixvector_to_Lfixvector();
extern         Lfixvector_to_Cfixvector();
extern Ptr     Cstring_to_Lstring();

/* Indirect functions for: ../common/*.c */

extern char    llrt_ttyin();
extern char    llrt_ttys();
extern int     llrt_ttyinstr();
extern int     llrt_ttyout();


extern int     llrt_infile();
extern int     llrt_apfile();
extern int     llrt_oufile();
extern int     llrt_inbf();
extern int     llrt_inbfb();
extern int     llrt_outf();
extern int     llrt_outfl();
extern int     llrt_fcopy();
extern int     llrt_fdele();
extern int     llrt_frena();
extern int     llrt_fprobe();
extern int     llrt_mkdir();
extern int     llrt_rmdir();
extern int     llrt_fclos();

extern void    llrt_c_date();
extern double  llrt_c_runtime();
extern         llrt_c_sleep();
extern int     llrt_c_getenv();
extern int     llrt_cline();
extern int     llrt_getgloba();
extern double  llrt_c_setalarm();

extern Ptr GXcrastrg();

extern Table GIbtbgc, GIbtbin;
extern char *llrt_charttys;
extern char *static_string, llrt_ttys();

#endif /* _LELISPC_H_ */
