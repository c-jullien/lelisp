/*
 * *****************************************************************
 * *                                                               *
 * *       GELL 26, include file for the runtime library           *
 * *                                                               *
 * *       Copyright (c) ILOG S.A., 1990, 1991, 1992, 1993         *
 * *                                                               *
 * *****************************************************************
 */

#ifndef _LLC_H_
#define _LLC_H_

#include <lldata.h>

extern void   llrt_gcfloat(void);
extern void   llrt_error(char *);
extern void   llrt_C_error(char *);

extern void   llrt_c_date(Ptr);
extern double llrt_c_runtime(void);
extern int    llrt_c_sleep(double);
extern double llrt_c_setalarm(double);

#endif /* _LLC_H_ */
