#if defined(__cplusplus)
extern "C" {
#endif

#define LLPTR long

/* les de'clarations de types Lisp en C */

typedef long LL_FIX;

typedef long LL_FLOAT;

/* 
   Comme C ne connai^t pas les types polymorphes, il faut se rabbatre
   sur la de'claration suivante pour les objets Lisp.

typedef union {
     struct LL_SYMBOL *ll_symbol;
     struct LL_CONS   *ll_cons;
     struct LL_STRING *ll_string;
     struct LL_VECTOR *ll_vector;
            LL_FIX     ll_fix;
            LL_FLOAT   ll_float;
} LL_OBJECT;

   C n'autorise he'las pas le passage d'une union comme argument de fonctions
   (me^me si cette union a pour taille un pointeur!).

   On en arrive donc a` l'horreur suivante :
 */

typedef char *LL_OBJECT;

struct LL_SYMBOL {
        LL_OBJECT  ll_cval;     /* 32 bits */ /* voire 64 */
        LL_OBJECT  ll_plist;    /* 32 bits */ /*   ...    */
        LL_OBJECT  ll_fval;     /* 32 bits */
        LL_OBJECT  ll_pkgc;     /* 32 bits */
        LL_OBJECT  ll_oval;     /* 32 bits */
        LL_OBJECT  ll_alink;    /* 32 bits */
        short      ll_ftype;    /* 16 bits */
        short      ll_ptype;    /* 16 bits */
        LL_OBJECT  ll_pname;    /* 32 bits */
};

struct LL_CONS {
     LL_OBJECT  ll_car; /* 32 bits */
     LL_OBJECT  ll_cdr; /* 32 bits */

};
 /*
    C n'autorise pas les structures de taille variable.
 
    Le champ  ll_strfil  contient le premier caracte`re de la chai^ne
    Lisp. Les autres caracte`res sont conse'cutifs a` celui-ci dans
    la me'moire.

 Exemple : impression d'une chai^ne Lisp
 
   voir(s) struct LL_STRING *s; {
       write(1, &((s->ll_strobj)->ll_strfil), (s->ll_strobj)->ll_strsiz);
   }
 */

struct LL_STRING {
     struct {
        struct LL_STRING *ll_strarr;    /* 32 bits */
        long              ll_strsiz;    /* 32 bits */
        char              ll_strfil;    /* n * 8 bits */
     }  *ll_strobj;             /* 32 bits */
     LL_OBJECT ll_strtyp;       /* 32 bits */
};

 /*
   Me^me remarque pour le champ ll_vecfil que pour le champ ll_strfil
 */

struct LL_VECTOR {
     struct{
         struct LL_VECTOR *ll_vecarr;   /* 32 bits */
         long              ll_vecsiz;   /* 32 bits */
         LL_OBJECT         ll_vecfil;   /* n * 32 bits */
     } *ll_vecobj;              /* 32 bits */
     LL_OBJECT ll_vectyp;       /* 32 bits */
};


/* Les types symbolique des arguments */

#define LLT_T 0      /* Objet quelconque */
#define LLT_FIX 1    /* Entier */
#define LLT_FLOAT 2  /* Flottant */
#define LLT_STRING 3 /* Chaine de caracteres */
#define LLT_VECTOR 4 /* Vecteur */

/* Les fonctions permettant l'interface C --->  Lisp */

#if defined (__cplusplus) || defined (__STDC__)

extern struct LL_SYMBOL *getsym(char *pname);

extern void pusharg(long ll_type, ...);

extern void pushargd(long ll_type, double value);

extern LL_OBJECT lispcall (long ll_type, long narg, struct LL_SYMBOL *symbol);

extern double lfloat_to_cfloat(LL_OBJECT f);

extern LL_OBJECT cfloat_to_lfloat(double f);

extern long lfix_to_cfix(LL_OBJECT i);

extern LL_OBJECT cfix_to_lfix(long i);

#else /* __cplusplus || __STDC__ */


struct LL_SYMBOL *getsym();

/*  void pusharg (ll_type, value) long ll_type; any value; */
void pusharg();

/*  void pushargd (ll_type, value) long ll_type; double value; */
void pushargd();

/*  LL_OBJECT lispcall (ll_type, narg, symbol)
         long ll_type, narg; struct LL_SYMBOL *symbol;  */
                                              
LL_OBJECT lispcall();

/* double lfloat_to_cfloat (lf) LL_OBJECT lf; */
extern double lfloat_to_cfloat();

/* LL_OBJECT cfloat_to_lfloat(cf) double cf; */
extern LL_OBJECT cfloat_to_lfloat();

/* long lfix_to_cfix(i) long i; */
extern long lfix_to_cfix();

/* long cfix_to_lfix(i) long i; */
extern LL_OBJECT cfix_to_lfix();

#endif /* __cplusplus || __STDC__ */

/* User Macro fix/float Converters */

#define LL_C_FLOAT(f) lfloat_to_cfloat(f)
#define C_LL_FLOAT(f) cfloat_to_lfloat(f)
#define LL_C_FIX(i) lfix_to_cfix(i)
#define C_LL_FIX(i) cfix_to_lfix(i)

/* special for decstation POSIX
 */
#if defined(DECSTATION) && defined(_POSIX_SOURCE)
typedef char * caddr_t;
#endif

/* special for hpXX and POSIX
 */
#if (defined(HP9700) || defined(HP11)) && defined(_POSIX_SOURCE)
typedef char * caddr_t;
#endif

/* special for sco386 POSIX
 */
#if defined(SCO386) && defined(_POSIX_SOURCE)
typedef char * caddr_t;
#endif

#if defined(__cplusplus)
}
#endif
