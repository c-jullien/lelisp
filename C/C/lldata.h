/*
 * *****************************************************************
 * *                                                               *
 * *       GELL 26, include file for the runtime library           *
 * *                                                               *
 * *       Copyright (c) ILOG S.A., 1990, 1991, 1992, 1993         *
 * *                                                               *
 * *****************************************************************
 */

#ifndef _LLDATA_H_
#define _LLDATA_H_

#include <stdio.h>
#include <stdint.h>

/* Bias for addresses */
extern size_t LLADRBIAS;

/* A Le-Lisp pointeur */
struct LLPTR {
        struct LLPTR    *Val;
};

/* A Le-Lisp floating point number (64 bits) */
union LLFLOAT {
        struct LLPTR    *Next;
        double          Val;
};

/* Misc types */

typedef struct          LLPTR    *Ptr;
typedef union           LLFLOAT  *Float;

typedef int16_t         Fix;
typedef uint16_t        UFix;
typedef size_t          Adr;
typedef uint32_t        TableElem;

typedef TableElem       *Table;

#define FIX_MAX ((Fix)32767)
#define FIX_MIN ((Fix)(-32767 - 1))

/* Number of bits of a Le-Lisp pointeur (Ptr) */
#define PTR_NB_OF_BIT (sizeof (Ptr) * 8)

/* Le nombre d'octets, en puissance de 2, d'un pointeur Lisp.          */   
/*     = log2(PTR_NB_OF_BIT) */
#if defined(LLC64BITS)
#define PTR_SHIFT 3
#else   /* LLC64BITS */
#define PTR_SHIFT 2
#endif  /* LLC64BITS */

/* Le nombre d'octets, en puissance de 2, d'un double pointeur Lisp (cons ....).     */   
/*     = 1 + log2(PTR_NB_OF_BIT) */
#define PTR2_SHIFT (PTR_SHIFT + 1)

/* Le nombre de bit d'un e'le'ment de Table (TableElem) */
#define TABLE_ELEM_NB_OF_BIT (sizeof (TableElem) * 8)

/* Le nombre d'octets, en puissance de 2, d'un e'le'ment de Table (TableElem) */   
/*     =  log2(TABLE_ELEM_NB_OF_BIT) */
#if defined(LLC64BITS)
#define ELEM_SHIFT 5
#else   /* LLC64BITS */
#define ELEM_SHIFT 5
#endif  /* LLC64BITS */

/* Le masque permettant d'extraire un index de bits dans un TableElem */
/* #define ELEM_MASK ((1 << (ELEM_SHIFT + 1)) - 1) */
#define ELEM_MASK 0x1F

/* Shift pour extraire les parties hautes. */
#define HIGHTSHIFT 16

/* Masque pour les parties basses. */
#define LOWMASK 0xFFFF

/* Masque pour les parties hautes. */
#define HIGHTMASK 0xFFFF0000

#define GELLMODULESTAMP 0x12345678UL

/* type conversions */
#if defined(LLC64BITS)
#define UINT_CVT        uint64_t
#else
#define UINT_CVT        uint32_t
#endif

#define LL_FIX(val)        ((Ptr) ((UINT_CVT) ((UFix) (UINT_CVT)val)))
#define LL_FIX_TO_PTR(val) ((Ptr) ((UINT_CVT)val))
#define LL_PTR_TO_FIX(val) ((int) ((UINT_CVT)val))

struct GellEntry {
        Ptr (*entrypoint)(void);
        Ptr (*tracepoint)(void);
        unsigned long ftype;
};

typedef struct  GellEntry    * GellEntries;

struct GellModule {
        unsigned long gellmodulestamp;
        const char * const name;
        const char * const timestamp;
        Ptr  *litable;
        unsigned long entriesize;
        GellEntries entries;
};

#endif /* _LLDATA_H_ */
