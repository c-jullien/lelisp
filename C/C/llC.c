/*
 * *****************************************************************
 * *                                                               *
 * *       GELL 26, runtime library                                *
 * *                                                               *
 * *       Copyright (c) ILOG S.A., 1992                           *
 * *                                                               *
 * *****************************************************************
 */

/*      The ISO-C librairies    */

#include <errno.h>
#include <setjmp.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include "lldata.h" 

#if defined(__GNUC__)
#if (__GCC__ > 4)
#pragma GCC diagnostic push
#endif
#pragma GCC diagnostic ignored "-Wstrict-prototypes"
typedef Ptr (*LL_PFUN)();
#if (__GCC__ > 4)
#pragma GCC diagnostic pop
#endif
#else /* __GNUC__ */
typedef Ptr (*LL_PFUN)();
#endif /* __GNUC__ */

/*

Les noms des sous-programmes du "runtime" sont, en ge'ne'ral, pre'fixe's par "llrt_"
Les noms des sous-programmes externes LLM3  sont pre'fixe's par "GX"
Les noms des mots me'moire LLM3 sont pre'fixe's par "GI"

Si des proble`mes de conflit de noms se posent, SEULS les fichiers de
../common/?*.c et celui-ci doivent e^tre change's. Tout le code
engendre' par GELL est donc prote'ge', l'ensemble des variables et des
fonctions C de ../common/?*.c passent par des relais renomme's.

*/


/*  =========================================

    Les donne'es statiques de LLM3

    =========================================  */


/*

De'clarations des mots me'moire de travail utilise's par
../common/lelisp.c et de'finis dans ../llm3/ *.llm3.

*/

extern int selfcore;

extern Ptr GIellm3;

extern Ptr GIbcode, bcode;
extern Ptr GIccode, ccode;
extern Ptr GIecode, ecode;

extern Ptr GIbheap, bheap;
extern Ptr GIcheap, cheap;
extern Ptr GIeheap, eheap;

extern Ptr GIbnumb, bnumb;
extern Ptr GIcnumb, cnumb;

extern Ptr GIbfloat, bfloat;
extern Ptr GIcfloat, cfloat;

extern Ptr GIbvect, bvect;
extern Ptr GIcvect, cvect;

extern Ptr GIbstrg, bstrg;
extern Ptr GIcstrg, cstrg;

extern Ptr GIbsymb, bsymb;
extern Ptr GIcsymb, csymb;

extern Ptr GIbcons, bcons;
extern Ptr GIccons, ccons;

extern Ptr GIbstack, bstack;
extern Ptr GImstack1, mstack1;
extern Ptr GImstack2, mstack2;
extern Ptr GIestack, estack;
extern Ptr GImaxchan, maxchan;
extern Ptr GInbsyst, nbsyst;
extern Ptr GIfilit, filit;
extern Ptr GIfiliz, filiz;
extern Ptr GIfilin, filin;
extern Ptr GIllban, llban;

extern Table GIbtbin, btbin;
extern Table GIbtbgc, btbgc;

extern int alarm_on;

/* -------------------------------
      Les donne'es statiques LLM3
   ------------------------------- */

/* ne doit pas e^tre sauve' par SAVE-CORE */

Ptr GIecons = 0;
Ptr econs = 0;

/* tout le reste doit e^tre sauve' par SAVE-CORE */

Ptr GIbsave = 0;     /* doit e^tre le premier mot sauve' par SAVE-CORE */

/* les mots me'moire utilise's par ../common/lelisp.c */

Ptr bcode = 0;
Ptr ccode = 0;
Ptr ecode = 0;

Ptr bheap = 0;
Ptr cheap = 0;
Ptr eheap = 0;

Ptr bnumb = 0;
Ptr cnumb = 0;

Ptr bfloat = 0;
Ptr cfloat = 0;

Ptr bvect = 0;
Ptr cvect = 0;

Ptr bstrg = 0;
Ptr cstrg = 0;

Ptr bsymb = 0;
Ptr csymb = 0;

Ptr bcons = 0;
Ptr ccons = 0;

Ptr bstack = 0;
Ptr mstack1 = 0;
Ptr mstack2 = 0;
Ptr estack = 0;
Ptr maxchan = 0;
Ptr nbsyst = 0;
Ptr filit = 0;
Ptr filiz = 0;
Ptr filin = 0;
Ptr llban = 0;

Table btbin = 0;
Table btbgc = 0;

int alarm_on = 0;               /* for lelisp.c */

/* les mots pre'de'finis dans ../common/lelisp.c */

extern int gelldebug;           /* in lelisp.c  -gelldebug */
extern Ptr bllm3, ellm3;        /* de'but et fin de la zone data LLM3 */
extern Ptr llucode, lluheap;    /* fin des zones code et heap (trous) */

/* les vraies donne'es statiques de GELL */

Ptr GIa1    = 0;
Ptr GIa2    = 0;
Ptr GIa3    = 0;
Ptr GIa4    = 0;

Ptr GIsp    = 0;

Ptr GIsavsp = 0;
Ptr GInil   = 0;

Table GIbtbin = 0;
Table GIbtbgc = 0;

extern char *GMprtmsgs;       /* in toperr.h */
char **prtmsgs = &GMprtmsgs;  /* for llstdio.c */
char *llrt_charttys="ok!";      /* for physio.llm3 */

extern Ptr GIeimpur;

extern int GIitstate;
extern int GIitcount;

int GIbrkcnt   = 0;
int GIclkcnt   = 0;

float accusingle1;
float accusingle2;


Ptr GIesave = 0;  /* doit e^tre le premier mot sauve' par SAVE-CORE si les adresses sont inverse'es */

/*
    ==========================================================
    point d'entre'e du runtime utilise' par ../common/lelisp.c
    ==========================================================
*/

extern void ll_break(void);
extern void ll_merro(int n);
extern void ll_clock(void);
extern int  corest(char *name);
extern int  corsav(char *name);
extern void llrun(LL_PFUN where);
extern void outner(void);
extern void outwer(void);
extern int  inton(void);
  
/*
    ====================================
    point d'entre'e LLM3 utilise's 
    ====================================
*/
   
extern Ptr GXllinit(void);      /* le premier point d'entre'e LLM3 */
extern Ptr GXgccons(void);      /* appel du GC sur les cons */
extern Ptr GXgcfloat(void);     /* appel du GC sur les floats */
extern Ptr GXinisymb(void);     /* initialise un symbole */
extern Ptr GXinicst(void);      /* initialise une constante */
extern Ptr GXphytrue(void);     /* pour retourner T */
extern Ptr GXsysprot(void);     /* les sysprot du runtime */
extern Ptr GXffuncall(void);
extern Ptr GXcrastrg(void);
extern Ptr GXtrysymb(void);

extern Ptr GXllbreak(void);
extern Ptr GXllclock(void);

extern Ptr GXllpanic(void);       /* appel 4 coups */
extern Ptr GXllmerro(void);       /* erreur machine */


/*  ====================================
    point d'entre'e utilise's par LLM3
    ==================================== */
   

extern Ptr GXll_exit(void);      /* retour normal de LLM3 (end) */
extern Ptr GXexwer(void);        /* retour anormal de LLM3 (end x) */

extern Ptr GXpopja4(void);       /* les retours rapides */
extern Ptr GXpopj0(void);
extern Ptr GXpopj1(void);
extern Ptr GXpopj2(void);
extern Ptr GXpopj3(void);
extern Ptr GXpopj4(void);
extern Ptr GXpopj5(void);
extern Ptr GXpopj6(void);
extern Ptr GXpopj7(void);
extern Ptr GXpopj8(void);
extern Ptr GXpopj9(void);


/*  ====================================
    point d'entre'e du runtime
    ==================================== */
   
extern void    llm3_execute(LL_PFUN llm3_cont);

extern int     llrt_corsav(char *name);
extern int     llrt_correst(char *name);
extern Ptr     llrt_cons(Ptr car, Ptr cdr);
extern void    llrt_gccons(void);
extern void    llrt_gcfloat(void);
extern void    llrt_inisymb(Ptr plen, Ptr pname, Ptr fval, Ptr dotvar, Ptr ftype);
extern Ptr     llrt_inicst(Ptr plen, Ptr pname, Ptr dotval);
extern Ptr     llrt_vag(Ptr val);
extern void    llrt_ithard(void);

extern Ptr     SetLitTable(void);

extern double  Lfloat_to_Cfloat(Ptr val);

/*  ===========================================

    Les routines de lancement de LL

    ===========================================  */

void
llstart(void) {
        (void)clock();
        llrun (GXllinit);
}

/*  ===============================

    Traitement des images me'moires

    =============================== */

int
llrt_corsav(char *name) {
        if (&GIbsave < &GIesave) {
                bllm3 = (Ptr) &GIbsave;
        } else {
                /* les adresses sont dans l'ordre inverse */
                bllm3 = (Ptr) &GIesave;
        }
        ellm3 = (Ptr) &GIellm3;
        llucode = GIccode;
        lluheap = GIcheap;
        GIsavsp = GIsp;
        GIa1 = (Ptr) ((size_t) corsav(name));
        return LL_PTR_TO_FIX(GIa1);
}

int
llrt_corest(char *name) {
        int ret;
        if (&GIbsave < &GIesave) {
                bllm3 = (Ptr) &GIbsave;
        } else {
                /* les adresses sont dans l'ordre inverse */
                bllm3 = (Ptr) &GIesave;
        }
        ret = corest(name);
        if (ret != 0) {
                return (ret);
        } else {
                GIsp = GIsavsp;
                return (0);
        }
}

/* Lancement d'une image-me'moire en direct en cas de EXECORE. */

void
llcorgo(void) {
        GIsp = GIsavsp;
        GIa1 = (Ptr) 0;
        llrun(GXphytrue);
}

/*  ===========================================

    Les routines de communication LL <-> C

    ===========================================  */

/*
   Ide'e de base : les lancements de code LLM3 par la routine 
   "llm3_protect_call" construisent un bloc de type SYSPROT
   qui re'alise e'galement la mise a` jour de la pile C
   au moyen d'un long/setjmp a` la fois en cas de retour simple
   ou de de'vidage de pile en cas d'EXITs.
*/

#define MAXCSTACK 20

jmp_buf env_llm3_call[MAXCSTACK];

int ind_llm3_call = 0;

void (*ret_from_llm3_call[MAXCSTACK]) (void);

void ret_from_llm3_call_00(void) {ind_llm3_call = 00; longjmp(env_llm3_call[00], 1);}
void ret_from_llm3_call_01(void) {ind_llm3_call = 01; longjmp(env_llm3_call[01], 1);}
void ret_from_llm3_call_02(void) {ind_llm3_call = 02; longjmp(env_llm3_call[02], 1);}
void ret_from_llm3_call_03(void) {ind_llm3_call = 03; longjmp(env_llm3_call[03], 1);}
void ret_from_llm3_call_04(void) {ind_llm3_call = 04; longjmp(env_llm3_call[04], 1);}
void ret_from_llm3_call_05(void) {ind_llm3_call = 05; longjmp(env_llm3_call[05], 1);}
void ret_from_llm3_call_06(void) {ind_llm3_call = 06; longjmp(env_llm3_call[06], 1);}
void ret_from_llm3_call_07(void) {ind_llm3_call = 07; longjmp(env_llm3_call[07], 1);}
void ret_from_llm3_call_08(void) {ind_llm3_call =  8; longjmp(env_llm3_call[ 8], 1);}
void ret_from_llm3_call_09(void) {ind_llm3_call =  9; longjmp(env_llm3_call[ 9], 1);}
void ret_from_llm3_call_10(void) {ind_llm3_call = 10; longjmp(env_llm3_call[10], 1);}
void ret_from_llm3_call_11(void) {ind_llm3_call = 11; longjmp(env_llm3_call[11], 1);}
void ret_from_llm3_call_12(void) {ind_llm3_call = 12; longjmp(env_llm3_call[12], 1);}
void ret_from_llm3_call_13(void) {ind_llm3_call = 13; longjmp(env_llm3_call[13], 1);}
void ret_from_llm3_call_14(void) {ind_llm3_call = 14; longjmp(env_llm3_call[14], 1);}
void ret_from_llm3_call_15(void) {ind_llm3_call = 15; longjmp(env_llm3_call[15], 1);}
void ret_from_llm3_call_16(void) {ind_llm3_call = 16; longjmp(env_llm3_call[16], 1);}
void ret_from_llm3_call_17(void) {ind_llm3_call = 17; longjmp(env_llm3_call[17], 1);}
void ret_from_llm3_call_18(void) {ind_llm3_call = 18; longjmp(env_llm3_call[18], 1);}
void ret_from_llm3_call_19(void) {ind_llm3_call = 19; longjmp(env_llm3_call[19], 1);}

void
ret_from_llm3_call_init(void) {
        ret_from_llm3_call[00] = ret_from_llm3_call_00;
        ret_from_llm3_call[01] = ret_from_llm3_call_01;
        ret_from_llm3_call[02] = ret_from_llm3_call_02;
        ret_from_llm3_call[03] = ret_from_llm3_call_03;
        ret_from_llm3_call[04] = ret_from_llm3_call_04;
        ret_from_llm3_call[05] = ret_from_llm3_call_05;
        ret_from_llm3_call[06] = ret_from_llm3_call_06;
        ret_from_llm3_call[07] = ret_from_llm3_call_07;
        ret_from_llm3_call[ 8] = ret_from_llm3_call_08;
        ret_from_llm3_call[ 9] = ret_from_llm3_call_09;
        ret_from_llm3_call[10] = ret_from_llm3_call_10;
        ret_from_llm3_call[11] = ret_from_llm3_call_11;
        ret_from_llm3_call[12] = ret_from_llm3_call_12;
        ret_from_llm3_call[13] = ret_from_llm3_call_13;
        ret_from_llm3_call[14] = ret_from_llm3_call_14;
        ret_from_llm3_call[15] = ret_from_llm3_call_15;
        ret_from_llm3_call[16] = ret_from_llm3_call_16;
        ret_from_llm3_call[17] = ret_from_llm3_call_17;
        ret_from_llm3_call[18] = ret_from_llm3_call_18;
        ret_from_llm3_call[19] = ret_from_llm3_call_19;
}

/*
  Appel d'une se'quence LLM3, au moyen d'un simple JCALL LLM3.
  Il ne doit empiler qu'une seule adresse de retour dans la pile
  Le-Lisp sinon certains appels sont perturbe's. Dans cet appel
  simple, il n'y a pas construction de bloc SYSPROT.
  N'importe quelle se'quence LLM3 est appelable.
*/

void
llm3_simple_call(LL_PFUN llm3_adr) {
        if (ind_llm3_call >= MAXCSTACK) {
                fprintf(stderr, "LLM3_SIMPLE_CALL: C stack overflow, %d.\r\n",
                         ind_llm3_call);
                GXexwer();
        } else {
                if (setjmp(env_llm3_call[ind_llm3_call]) == 0) {
                        (--GIsp)->Val = (Ptr) ret_from_llm3_call[ind_llm3_call];
                        if (gelldebug != 0) 
                           fprintf(stderr, "llm3_simple_call:\t%d,\tsp=%p\r\n",
                                    ind_llm3_call, GIsp);
                        ind_llm3_call++;
                        llm3_execute(llm3_adr);
                }
        }
}


/*
  Appel d'une se'quence LLM3, au moyen d'un JCALL LLM3 prote'ge'.
  Il empile un block de contro^le SYSPROTECT pour restaurer la pile
  C en cas d'EXIT intempestifs (ex les erreurs fatales).
*/

void
llm3_protect_call(LL_PFUN llm3_adr) {
        if (ind_llm3_call >= MAXCSTACK) {
                fprintf(stderr, "LLM3_PROTECT_CALL: C stack overflow, %d.\r\n",
                        ind_llm3_call);
                GXexwer();
        } else {
                Ptr ret_adr;
                if (setjmp(env_llm3_call[ind_llm3_call]) == 0) {
                        /* sauve tous les registres pour la simulation du SYSPROT */
                        (--GIsp)->Val = GIa3;
                        /* simule un appel a` SYSPROT */
                        GIa3 = (Ptr) llm3_adr;
                        (--GIsp)->Val = (Ptr) ret_from_llm3_call[ind_llm3_call];
                        /* pour connai^tre la hauteur de la pile */
                        if (gelldebug != 0) 
                                fprintf(stderr,
                                        "llm3_protect_call:\t%d,\tsp=%p\r\n", 
                                        ind_llm3_call, GIsp);
                        ind_llm3_call++;
                        llm3_execute(GXsysprot);
                } else {
                        /* ce doit e^tre maintenant le me^me sp */
                        if (gelldebug != 0) 
                                fprintf(stderr,
                                        "llm3_protect_return:\t%d,\tsp=%p\r\n",
                                        ind_llm3_call, GIsp);
                        ret_adr = GIa3;
                        /* la valeur de retour */
                        GIa1 = (GIsp++)->Val;
                        /* les registres sauve's */
                        GIa3 = (GIsp++)->Val;
                        /* pour relancer la continuation du SYSPROT */
                        if ((Ptr) ret_adr != (Ptr) GXpopj0)
                                llm3_execute((LL_PFUN)ret_adr);
                }
        }
}

void
llm3_execute(LL_PFUN llm3_cont) {
        register LL_PFUN cont;
        cont = llm3_cont;
        for (;;)
                cont = (LL_PFUN)(*cont)();
}

void
llrun(LL_PFUN where) {
        /* les noms changent en GELL pour e'viter des conflits */
        GIbcode      =  bcode;
        GIccode      =  ccode;
        GIecode      =  ecode;
        GIbheap      =  bheap;
        GIcheap      =  cheap;
        GIeheap      =  eheap;
        GIbnumb      =  bnumb;
        GIcnumb      =  cnumb;
        GIbfloat     =  bfloat;
        GIcfloat     =  cfloat;
        GIbvect      =  bvect;
        GIcvect      =  cvect;
        GIbstrg      =  bstrg;
        GIcstrg      =  cstrg;
        GIbsymb      =  bsymb;
        GIcsymb      =  csymb;
        GIbcons      =  bcons;
        GIccons      =  ccons;
        GIecons      =  econs;
        GIbstack     =  bstack;
        GImstack1    =  mstack1;
        GImstack2    =  mstack2;
        GIestack     =  estack;
        GImaxchan    =  maxchan;
        GInbsyst     =  nbsyst;
        GIfilit      =  filit;
        GIfiliz      =  filiz;
        GIfilin      =  filin;
        GIllban      =  llban;
        GIbtbin      =  btbin;
        GIbtbgc      =  btbgc;
        GIitstate    =  0;
        GIitcount    =  0;
        GIbrkcnt     =  0;
        GIclkcnt     =  0;

        GInil        =  GIbsymb;

        ret_from_llm3_call_init();
        ind_llm3_call = 0;

        inton();

        /* pas de llm3_protect_call car la pile LL 
           n'est pas encore initialise'e */
        llm3_execute(where);
}

/*  ====================================================

    Traitement des sous-programmes standard Le-Lisp 

    ====================================================  */

/*
  Ces routines sont appele'es directement par l'expansion
  de certaines macros LLM3. Cela e'vite de macroexpanser de
  ve'ritables JCALL LLM3, ce qui est toujours tre`s couteux
  et cela permet aux optimisateurs de mieux fonctionner
*/

extern Ptr GIfcons, GInil;

extern Ptr
llrt_cons(Ptr car, Ptr cdr) {
        register Ptr ptraux;
        ptraux = GIfcons;
        if (ptraux == GInil) {
                llrt_gccons();
                ptraux = GIfcons;
        }
        GIfcons = (ptraux + 1)->Val;
        ptraux->Val = car;
        (ptraux + 1)->Val = cdr;
        return (ptraux);
}

void
llrt_gccons(void) {
        /* simulation du JCALL GCCONS Le-Lisp */
        llm3_simple_call(GXgccons);
}

void
llrt_gcfloat(void) {
        /* simulation du JCALL GCFLOAT Le-Lisp */
        llm3_simple_call(GXgcfloat);
}

void
llrt_inisymb(Ptr plen, Ptr pname, Ptr fval, Ptr dotvar, Ptr ftype) {
        /* simulation du JCALL INISYMB Le-Lisp */
        GIa1 = plen;
        GIa2 = pname;
        GIa3 = fval;
        GIa4 = dotvar;
        (--GIsp)->Val = ftype;
        llm3_simple_call(GXinisymb);
}

extern Ptr
llrt_inicst(Ptr plen, Ptr pname, Ptr dotvar) {
        /* simulation du JCALL INICST Le-Lisp */
        GIa1 = plen;
        GIa2 = pname;
        GIa3 = dotvar;
        llm3_simple_call(GXinicst);
        return ((Ptr) 0);
}

extern Ptr
llrt_vag(Ptr val) {
        register Ptr val1, val2;
        val1 = val;
        if (val1 >= GIbcons) goto loc_vagc;
        if ((val1 < GIbnumb) || (val1 >= GIbvect)) return (val1);
        val1 = (val1 + 0)->Val;
        return (val1);
loc_vagc:       
        val2 = (val1 + 0)->Val;
        val1 = (val1 + 1)->Val;
        val1 = (Ptr) (((Adr) val2 << HIGHTSHIFT) + (Adr) val1);
        return (val1);
}

/*
  re'alise l'appel d'une fonction trace'e et compile'e.
  Il faut mettre le symbole "isymbol" dans la cval de #:gell-resetfn:name
  Appeler l'une des fonctions relais : #:gell-resetfn:-function-X
*/
extern Ptr
llrt_jmpd(Ptr* litable, int isymbol, int igellname, int igellreset) {
        litable[igellname]->Val = litable[isymbol];
        return ((litable[igellreset] + 2) -> Val);
}

/*  ====================================================
    Traitement de SIGNAL et des ITs
    ====================================================  */

/* 
   Les appels directs des signaux UNIX.
   Il faut rearmer les signaux a` chaque fois.
 */

/* appel direct par SIGNAL */
void
ll_break(void) {
        /* 4 ^C non traite's en diffe're' lance l'interruption
           directe "llpanic" non re'cupe'rable */
        GIitcount++;
        inton();
        if (++GIbrkcnt >= 4)
                if (GIitstate != 0) {
                        GIitcount -= GIbrkcnt;
                        llm3_protect_call(GXllpanic);
}               }

/* appel direct par SIGNAL */
void
ll_merro(int n) {
        /* toujours une interruption directe */
        inton();
        GIa2 = LL_FIX_TO_PTR(n);                   /* le nume'ro du signal */
        llm3_protect_call(GXllmerro);
}

/* appel direct par SIGNAL */
void
ll_clock(void) {
        /* toujours une interruption diffe're'e */
        if (GIclkcnt != 1) {
                GIitcount++;
                GIclkcnt = 1;
        }
        inton();
}

/* 
   Traitement des interruptions en diffe're'. 
*/

/* Appel par INTEST = if (GIitcount != 0) llrt_ithard (); */


extern Ptr llrt_do_ithard(void);
extern Ptr llrt_ret_ithard(void);
extern Ptr llrt_handle_its(void);
extern Ptr llrt_end_ithard(void);

void
llrt_ithard(void) {
        /* simulation du JCALL ITHARD Le-Lisp */
        if (GIitstate != 0) {
                if (gelldebug != 0)
                        fprintf(stderr, "llrt_start_ithard:\t%d,\tsp=%p.\r\n",
                                 ind_llm3_call, GIsp);
                /* sauve les accus, si l'on revient normalement */
                (--GIsp)->Val = GIa4;
                (--GIsp)->Val = GIa3;
                (--GIsp)->Val = GIa2;
                (--GIsp)->Val = GIa1;
                llm3_protect_call(llrt_do_ithard);
                /* restaure les accus en cas de retour normal */
                GIa1 = (GIsp++)->Val;
                GIa2 = (GIsp++)->Val;
                GIa3 = (GIsp++)->Val;
                GIa4 = (GIsp++)->Val;
                if (gelldebug != 0)
                        fprintf(stderr, "llrt_end_ithard:\t%d,\tsp=%p.\r\n",
                                 ind_llm3_call, GIsp);

        }
}

Ptr
llrt_do_ithard(void) {
        if (gelldebug != 0)
                fprintf(stderr, "llrt_do_ithard:\t\t%d,\tsp=%p.\r\n",
                         ind_llm3_call, GIsp);
        /* pas d'IT dans une IT */
        GIitstate = 0;
        /* Protection de itstate. */
        GIa3 = (Ptr) llrt_handle_its;
        (--GIsp)->Val = (Ptr) llrt_ret_ithard;
        return ((Ptr) GXsysprot);
}

Ptr
llrt_ret_ithard(void) {
        /* le retour du SYSPROT sur itstate */
        Ptr ret_adr;
        ret_adr = GIa3;
        /* reautorise les ITs */
        GIitstate = 1;
        GIa1 = (GIsp++)->Val;
        if (gelldebug != 0)
                fprintf(stderr, "llrt_ret_ithard:\t%d,\tsp=%p.\r\n",
                         ind_llm3_call, GIsp);
        return (ret_adr);
}

Ptr
llrt_handle_its(void) {
        /* Traitement des breaks. */
        if (GIbrkcnt != 0) {
                if (gelldebug != 0)
                        fprintf(stderr, "llrt_do_break:\t\t%d,\tsp=%p.\r\n",
                                 ind_llm3_call, GIsp);
                GIitcount = 0;
                GIbrkcnt  = 0;
                (--GIsp)->Val = ((Ptr) llrt_end_ithard);
                return ((Ptr) GXllbreak);
        }
        /* traitement de l'horloge */
        if (GIclkcnt != 0) {
                if (gelldebug != 0)
                        fprintf(stderr, "llrt_do_clock:\t\t%d,\tsp=%p.\r\n",
                                 ind_llm3_call, GIsp);
                GIitcount = 0;
                GIclkcnt  = 0;
                (--GIsp)->Val = ((Ptr) llrt_end_ithard);
                return ((Ptr) GXllclock);
        }
        fprintf(stderr, "llrt_handle_its: Uncaught IT");
        return ((Ptr) llrt_end_ithard);
}

Ptr
llrt_end_ithard(void) {
        /* fin de traitement */
        if (gelldebug != 0)
                fprintf(stderr, "llrt_end_ithard:\t%d,\tsp=%p.\r\n",
                         ind_llm3_call, GIsp);
        return ((GIsp++)->Val);
}

Ptr
GXll_exit(void) {
        outner();
        return GInil; /* don't return but consistent with signature. */
}

Ptr
GXexwer(void) {
        outwer();
        return GInil; /* don't return but consistent with signature. */
}

/*  ============================

    rea'lisation d'un CALLG 

    ============================  */

#define MAXCALLGARGS 16

int rfix_callg_array[MAXCALLGARGS];
int rfix_callg_index = 0;

double rfloat_callg_array[MAXCALLGARGS];
int rfloat_callg_index = 0;

Ptr fixvector_callg_array[MAXCALLGARGS];
int fixvector_callg_index = 0;

Ptr floatvector_callg_array[MAXCALLGARGS];
int floatvector_callg_index = 0;


void
Cfixvector_to_Lfixvector(Ptr vect) {
        int i,s;
        s = LL_PTR_TO_FIX((vect+1)->Val);
        if (gelldebug != 0) printf("SIZEC2L= %d\r\n",s);
        for (i = 2; i < (s + 2); i++) {
                if (gelldebug != 0) printf("OKC2L %d\r\n",i);
                (vect+i)->Val = LL_FIX((vect+i)->Val);
        }
}

void
Lfixvector_to_Cfixvector(Ptr vect) {
        int i,s;
        s = LL_PTR_TO_FIX((vect+1)->Val);
        if (gelldebug != 0) printf("SIZEL2C= %d\r\n",s);
        for (i = 2; i < (s + 2); i++) {
                if (gelldebug != 0) printf("OKL2C %d\r\n",i);
                (vect+i)->Val = LL_FIX((vect+i)->Val);
        }
}


void
Cfloatvector_to_Lfloatvector(Ptr vect) {
        int i, s, fl;
        s = LL_PTR_TO_FIX((vect+1)->Val);
        if (gelldebug != 0)
                printf("SIZE FixVC2L= %d\r\n",s);
        for (i = 2; i < (s + 2); i++) {
                if (gelldebug != 0) printf("FixVC2L %d\r\n",i);
                fl = LL_PTR_TO_FIX((vect+i)->Val);
                fl = (fl >> 1) | 0x80000000;
                (vect+i)->Val = LL_FIX_TO_PTR(fl);
        }
}

void
Lfloatvector_to_Cfloatvector(Ptr vect) {
        int i,s,fl;
        s = LL_PTR_TO_FIX((vect+1)->Val);
        if (gelldebug != 0)
                printf("SIZE FLOATL2C= %d\r\n",s);
        for (i = 2; i < (s + 2); i++) {
                if (gelldebug != 0) printf("FLOATL2C %d\r\n",i);
                fl = LL_PTR_TO_FIX((vect+i)->Val);
                fl = fl << 1;
                (vect+i)->Val = LL_FIX_TO_PTR(fl);
        }
}

#if defined(LLC64BITS) && defined(__CYGWIN__)
/*
 * CJu: on 64bits, external is a 32 lisp string that contains 64bit external
 * pointer. Some systems allocate memeory far beyond 32bit address.
 * CYGWIN for example, allocates memory above 0x6000xxxxx.
 */
static Ptr
make_external(Ptr result) {
        char dummy[sizeof result];
        Ptr* mem;
        GIa1 = LL_FIX(sizeof(result));
        GIa2 = (Ptr) dummy;
        llm3_simple_call(GXcrastrg);
        mem = (Ptr*)(GIa1->Val)+2;
        *mem = result;
#if defined(DEBUG_EXTERNAL)
        printf("make: %p %p %p\n", result, GIa1, (GIa1->Val)+2);
#endif
        return (GIa1);
}

static Ptr
get_external(Ptr val) {
        Ptr* mem = (Ptr*)(val->Val)+2;
#if defined(DEBUG_EXTERNAL)
        printf("get: %p %p %p\n", val, (val->Val)+2, *mem);
#endif
        return ((Ptr) *mem);
}
#else
#define make_external(result) result
#define get_external(val)     val
#endif

#define	_convtype(type, val) convtype((int)((UINT_CVT)type), val)

Ptr
convtype(int typarg, Ptr val) {
        int fl;
        switch (typarg) {
        case 0: /* external ou T */
                return get_external(val);
        case 1: /* fix */
                return LL_FIX(val);
        case 2: /* float */
                /* fprintf(stderr, "CALLG: type FLOAT not implemented\r\n"); */
                fl = LL_PTR_TO_FIX(val);
                fl = fl << 1;
                return LL_FIX_TO_PTR(fl);
        case 3: /* string */
                return ((Ptr) (val->Val)+2);
        case 4: /* vector */
                return ((Ptr) (val->Val)+2);
        case 5: /* rfix */
                if (rfix_callg_index >= MAXCALLGARGS) {
                        fprintf(stderr, "CALLG: too many RFIX types\r\n");
                        return ((Ptr) 0);
                }
                else {
                        rfix_callg_array[rfix_callg_index] = (Fix) ((UFix) (UINT_CVT)val);
                        return ((Ptr) &rfix_callg_array[rfix_callg_index++]);
                }
        case 6: /* rfloat */
                if (rfloat_callg_index >= MAXCALLGARGS) {
                        fprintf(stderr, "CALLG: too many RFLOAT types\r\n");
                        return ((Ptr) 0);
                }
                else {
                        rfloat_callg_array[rfloat_callg_index] 
                                =  Lfloat_to_Cfloat((Ptr) val);
                        return ((Ptr) &rfloat_callg_array[rfloat_callg_index++]);
                }
        case 7: /* fixvector */
                if (fixvector_callg_index >= MAXCALLGARGS) {
                        fprintf(stderr, "CALLG: too many FIXVECTOR types\r\n");
                        return ((Ptr) 0);
                }
                else {
                        fixvector_callg_array[fixvector_callg_index++] = val->Val;
                        Lfixvector_to_Cfixvector(val->Val);
                        return ((Ptr) (val->Val)+2);
                }
        case 8: /* floatvector */
                if (floatvector_callg_index >= MAXCALLGARGS) {
                        fprintf(stderr, "CALLG: too many FIXVECTOR types\r\n");
                        return ((Ptr) 0);
                }
                else {
                        floatvector_callg_array[floatvector_callg_index++]
                                = val->Val;
                        Lfloatvector_to_Cfloatvector(val->Val);
                        return ((Ptr) (val->Val)+2);
                }
        default:
                fprintf(stderr, "CALLG: type unknown: %d\r\n", typarg);
                return ((Ptr) 0);
        }
}

Ptr
buildretval(int type, Ptr result) {
        /* conversion d'une valeur de retour C en Lisp */
        /* le type est dans "type", la valeur dans "result" */
        int fl;
        switch (type) {
        case 0 : /* external ou t */
                return make_external(result);
        case 1 : /* fix */
                return LL_FIX(result);
        case 2 : /* float */
                /* fprintf(stderr, "BUILD: return value FLOAT not implemented\r\n"); */
                fl = LL_PTR_TO_FIX(result);
                fl = (fl >> 1) | 0x80000000;
                return LL_FIX_TO_PTR(fl);
        case 3 : /* string */
                {int size; char *str;
                 str = (char *) result;
                 size = 0;
                 while (str[size] != '\0') ++size;
                 GIa1 = LL_FIX(size);
                 GIa2 = (Ptr) result;
                 llm3_simple_call(GXcrastrg);
                 return (GIa1);
                }
        case 4 : /* vector */
                fprintf(stderr, "BUILD: return value VECTOR not implemented\r\n");
                return ((Ptr) 0);
        case 5 : /* rfix */
                fprintf(stderr, "BUILD: return value RFIX not implemented\r\n");
                return ((Ptr) result);
        case 6 : /* rfloat */
                fprintf(stderr, "BUILD: return value RFLOAT not implemented\r\n");
                return ((Ptr) result);
        default :
                fprintf(stderr, "BUILD: return value type unknow: %d\r\n", type);
                return ((Ptr) 0);
        }
}

Ptr
llrt_callg(int n, LL_PFUN adrsubr) {
        /*
          n:        nb d'arguments empile's.
          adrsubr: adresse de lancement de la routine C
        */
        Ptr arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8,
            arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, result;
        int i, type, ind;

        int local_rfix_callg_index;
        int local_rfloat_callg_index;
        int local_fixvector_callg_index;
        int local_floatvector_callg_index;

        Ptr prota4;     /* il est obligatoire au retour de CALLG */

        local_rfix_callg_index =  rfix_callg_index;
        local_rfloat_callg_index =  rfloat_callg_index;
        local_fixvector_callg_index =  fixvector_callg_index;
        local_floatvector_callg_index =  floatvector_callg_index;

        prota4 = GIa4;
        ind = (n - 2) / 2;
        switch (ind) {
        case 0:
                result = (*adrsubr)();
                break;
        case 1:
                arg1 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1);     
                break;
        case 2:
                arg1 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg2 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2);
                break;
        case 3:
                arg1 = _convtype((GIsp + 4)->Val, (Ptr) (GIsp + 5)->Val);
                arg2 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg3 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2, arg3);
                break;
        case 4:
                arg1 = _convtype((GIsp + 6)->Val, (Ptr) (GIsp + 7)->Val);
                arg2 = _convtype((GIsp + 4)->Val, (Ptr) (GIsp + 5)->Val);
                arg3 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg4 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2, arg3, arg4);
                break;
        case 5:
                arg1 = _convtype((GIsp + 8)->Val, (Ptr) (GIsp + 9)->Val);
                arg2 = _convtype((GIsp + 6)->Val, (Ptr) (GIsp + 7)->Val);
                arg3 = _convtype((GIsp + 4)->Val, (Ptr) (GIsp + 5)->Val);
                arg4 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg5 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2, arg3, arg4, arg5);
                break;
        case 6:
                arg1 = _convtype((GIsp + 10)->Val, (Ptr) (GIsp + 11)->Val);
                arg2 = _convtype((GIsp + 8)->Val, (Ptr) (GIsp + 9)->Val);
                arg3 = _convtype((GIsp + 6)->Val, (Ptr) (GIsp + 7)->Val);
                arg4 = _convtype((GIsp + 4)->Val, (Ptr) (GIsp + 5)->Val);
                arg5 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg6 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2, arg3, arg4, arg5, arg6);
                break;
        case 7:
                arg1 = _convtype((GIsp + 12)->Val, (Ptr) (GIsp + 13)->Val);
                arg2 = _convtype((GIsp + 10)->Val, (Ptr) (GIsp + 11)->Val);
                arg3 = _convtype((GIsp + 8)->Val, (Ptr) (GIsp + 9)->Val);
                arg4 = _convtype((GIsp + 6)->Val, (Ptr) (GIsp + 7)->Val);
                arg5 = _convtype((GIsp + 4)->Val, (Ptr) (GIsp + 5)->Val);
                arg6 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg7 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2, arg3, arg4, arg5, arg6, arg7);
                break;
        case 8:
                arg1 = _convtype((GIsp + 14)->Val, (Ptr) (GIsp + 15)->Val);
                arg2 = _convtype((GIsp + 12)->Val, (Ptr) (GIsp + 13)->Val);
                arg3 = _convtype((GIsp + 10)->Val, (Ptr) (GIsp + 11)->Val);
                arg4 = _convtype((GIsp + 8)->Val, (Ptr) (GIsp + 9)->Val);
                arg5 = _convtype((GIsp + 6)->Val, (Ptr) (GIsp + 7)->Val);
                arg6 = _convtype((GIsp + 4)->Val, (Ptr) (GIsp + 5)->Val);
                arg7 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg8 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2, arg3, arg4,
                                     arg5, arg6, arg7, arg8);
                break;
        case 9:
                arg1 = _convtype((GIsp + 16)->Val, (Ptr) (GIsp + 17)->Val);
                arg2 = _convtype((GIsp + 14)->Val, (Ptr) (GIsp + 15)->Val);
                arg3 = _convtype((GIsp + 12)->Val, (Ptr) (GIsp + 13)->Val);
                arg4 = _convtype((GIsp + 10)->Val, (Ptr) (GIsp + 11)->Val);
                arg5 = _convtype((GIsp + 8)->Val, (Ptr) (GIsp + 9)->Val);
                arg6 = _convtype((GIsp + 6)->Val, (Ptr) (GIsp + 7)->Val);
                arg7 = _convtype((GIsp + 4)->Val, (Ptr) (GIsp + 5)->Val);
                arg8 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg9 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2, arg3, arg4, arg5,
                                     arg6, arg7, arg8, arg9);
                break;
        case 10:
                arg1 = _convtype((GIsp + 18)->Val, (Ptr) (GIsp + 19)->Val);
                arg2 = _convtype((GIsp + 16)->Val, (Ptr) (GIsp + 17)->Val);
                arg3 = _convtype((GIsp + 14)->Val, (Ptr) (GIsp + 15)->Val);
                arg4 = _convtype((GIsp + 12)->Val, (Ptr) (GIsp + 13)->Val);
                arg5 = _convtype((GIsp + 10)->Val, (Ptr) (GIsp + 11)->Val);
                arg6 = _convtype((GIsp + 8)->Val, (Ptr) (GIsp + 9)->Val);
                arg7 = _convtype((GIsp + 6)->Val, (Ptr) (GIsp + 7)->Val);
                arg8 = _convtype((GIsp + 4)->Val, (Ptr) (GIsp + 5)->Val);
                arg9 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg10 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2, arg3, arg4, arg5,
                                     arg6, arg7, arg8, arg9, arg10);
                break;
        case 11:
                arg1 = _convtype((GIsp + 20)->Val, (Ptr) (GIsp + 21)->Val);
                arg2 = _convtype((GIsp + 18)->Val, (Ptr) (GIsp + 19)->Val);
                arg3 = _convtype((GIsp + 16)->Val, (Ptr) (GIsp + 17)->Val);
                arg4 = _convtype((GIsp + 14)->Val, (Ptr) (GIsp + 15)->Val);
                arg5 = _convtype((GIsp + 12)->Val, (Ptr) (GIsp + 13)->Val);
                arg6 = _convtype((GIsp + 10)->Val, (Ptr) (GIsp + 11)->Val);
                arg7 = _convtype((GIsp + 8)->Val, (Ptr) (GIsp + 9)->Val);
                arg8 = _convtype((GIsp + 6)->Val, (Ptr) (GIsp + 7)->Val);
                arg9 = _convtype((GIsp + 4)->Val, (Ptr) (GIsp + 5)->Val);
                arg10 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg11 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2, arg3, arg4, arg5, arg6,
                                     arg7, arg8, arg9, arg10, arg11);
                break;
        case 12:
                arg1 = _convtype((GIsp + 22)->Val, (Ptr) (GIsp + 23)->Val);
                arg2 = _convtype((GIsp + 20)->Val, (Ptr) (GIsp + 21)->Val);
                arg3 = _convtype((GIsp + 18)->Val, (Ptr) (GIsp + 19)->Val);
                arg4 = _convtype((GIsp + 16)->Val, (Ptr) (GIsp + 17)->Val);
                arg5 = _convtype((GIsp + 14)->Val, (Ptr) (GIsp + 15)->Val);
                arg6 = _convtype((GIsp + 12)->Val, (Ptr) (GIsp + 13)->Val);
                arg7 = _convtype((GIsp + 10)->Val, (Ptr) (GIsp + 11)->Val);
                arg8 = _convtype((GIsp + 8)->Val, (Ptr) (GIsp + 9)->Val);
                arg9 = _convtype((GIsp + 6)->Val, (Ptr) (GIsp + 7)->Val);
                arg10 = _convtype((GIsp + 4)->Val, (Ptr) (GIsp + 5)->Val);
                arg11 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg12 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2, arg3, arg4, arg5, arg6,
                                     arg7, arg8, arg9, arg10, arg11, arg12);
                break;
        case 13:
                arg1 = _convtype((GIsp + 24)->Val, (Ptr) (GIsp + 25)->Val);
                arg2 = _convtype((GIsp + 22)->Val, (Ptr) (GIsp + 23)->Val);
                arg3 = _convtype((GIsp + 20)->Val, (Ptr) (GIsp + 21)->Val);
                arg4 = _convtype((GIsp + 18)->Val, (Ptr) (GIsp + 19)->Val);
                arg5 = _convtype((GIsp + 16)->Val, (Ptr) (GIsp + 17)->Val);
                arg6 = _convtype((GIsp + 14)->Val, (Ptr) (GIsp + 15)->Val);
                arg7 = _convtype((GIsp + 12)->Val, (Ptr) (GIsp + 13)->Val);
                arg8 = _convtype((GIsp + 10)->Val, (Ptr) (GIsp + 11)->Val);
                arg9 = _convtype((GIsp + 8)->Val, (Ptr) (GIsp + 9)->Val);
                arg10 = _convtype((GIsp + 6)->Val, (Ptr) (GIsp + 7)->Val);
                arg11 = _convtype((GIsp + 4)->Val, (Ptr) (GIsp + 5)->Val);
                arg12 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg13 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2, arg3, arg4, arg5, arg6,
                                     arg7, arg8, arg9, arg10, arg11,
                                     arg12, arg13);
                break;
        case 14:
                arg1 = _convtype((GIsp + 26)->Val, (Ptr) (GIsp + 27)->Val);
                arg2 = _convtype((GIsp + 24)->Val, (Ptr) (GIsp + 25)->Val);
                arg3 = _convtype((GIsp + 22)->Val, (Ptr) (GIsp + 23)->Val);
                arg4 = _convtype((GIsp + 20)->Val, (Ptr) (GIsp + 21)->Val);
                arg5 = _convtype((GIsp + 18)->Val, (Ptr) (GIsp + 19)->Val);
                arg6 = _convtype((GIsp + 16)->Val, (Ptr) (GIsp + 17)->Val);
                arg7 = _convtype((GIsp + 14)->Val, (Ptr) (GIsp + 15)->Val);
                arg8 = _convtype((GIsp + 12)->Val, (Ptr) (GIsp + 13)->Val);
                arg9 = _convtype((GIsp + 10)->Val, (Ptr) (GIsp + 11)->Val);
                arg10 = _convtype((GIsp + 8)->Val, (Ptr) (GIsp + 9)->Val);
                arg11 = _convtype((GIsp + 6)->Val, (Ptr) (GIsp + 7)->Val);
                arg12 = _convtype((GIsp + 4)->Val, (Ptr) (GIsp + 5)->Val);
                arg13 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg14 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2, arg3, arg4, arg5, arg6,
                                     arg7, arg8, arg9, arg10, arg11,
                                     arg12, arg13, arg14);
                break;
        case 15:
                arg1 = _convtype((GIsp + 28)->Val, (Ptr) (GIsp + 29)->Val);
                arg2 = _convtype((GIsp + 26)->Val, (Ptr) (GIsp + 27)->Val);
                arg3 = _convtype((GIsp + 24)->Val, (Ptr) (GIsp + 25)->Val);
                arg4 = _convtype((GIsp + 22)->Val, (Ptr) (GIsp + 23)->Val);
                arg5 = _convtype((GIsp + 20)->Val, (Ptr) (GIsp + 21)->Val);
                arg6 = _convtype((GIsp + 18)->Val, (Ptr) (GIsp + 19)->Val);
                arg7 = _convtype((GIsp + 16)->Val, (Ptr) (GIsp + 17)->Val);
                arg8 = _convtype((GIsp + 14)->Val, (Ptr) (GIsp + 15)->Val);
                arg9 = _convtype((GIsp + 12)->Val, (Ptr) (GIsp + 13)->Val);
                arg10 = _convtype((GIsp + 10)->Val, (Ptr) (GIsp + 11)->Val);
                arg11 = _convtype((GIsp + 8)->Val, (Ptr) (GIsp + 9)->Val);
                arg12 = _convtype((GIsp + 6)->Val, (Ptr) (GIsp + 7)->Val);
                arg13 = _convtype((GIsp + 4)->Val, (Ptr) (GIsp + 5)->Val);
                arg14 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg15 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2, arg3, arg4, arg5, arg6,
                                     arg7, arg8, arg9, arg10, arg11,
                                     arg12, arg13, arg14, arg15);
                break;
        case 16:
                arg1 = _convtype((GIsp + 30)->Val, (Ptr) (GIsp + 31)->Val);
                arg2 = _convtype((GIsp + 28)->Val, (Ptr) (GIsp + 29)->Val);
                arg3 = _convtype((GIsp + 26)->Val, (Ptr) (GIsp + 27)->Val);
                arg4 = _convtype((GIsp + 24)->Val, (Ptr) (GIsp + 25)->Val);
                arg5 = _convtype((GIsp + 22)->Val, (Ptr) (GIsp + 23)->Val);
                arg6 = _convtype((GIsp + 20)->Val, (Ptr) (GIsp + 21)->Val);
                arg7 = _convtype((GIsp + 18)->Val, (Ptr) (GIsp + 19)->Val);
                arg8 = _convtype((GIsp + 16)->Val, (Ptr) (GIsp + 17)->Val);
                arg9 = _convtype((GIsp + 14)->Val, (Ptr) (GIsp + 15)->Val);
                arg10 = _convtype((GIsp + 12)->Val, (Ptr) (GIsp + 13)->Val);
                arg11 = _convtype((GIsp + 10)->Val, (Ptr) (GIsp + 11)->Val);
                arg12 = _convtype((GIsp + 8)->Val, (Ptr) (GIsp + 9)->Val);
                arg13 = _convtype((GIsp + 6)->Val, (Ptr) (GIsp + 7)->Val);
                arg14 = _convtype((GIsp + 4)->Val, (Ptr) (GIsp + 5)->Val);
                arg15 = _convtype((GIsp + 2)->Val, (Ptr) (GIsp + 3)->Val);
                arg16 = _convtype((GIsp)->Val, (Ptr) (GIsp + 1)->Val);
                result = (*adrsubr) (arg1, arg2, arg3, arg4, arg5, arg6,
                                     arg7, arg8, arg9, arg10, arg11,
                                     arg12, arg13, arg14, arg15, arg16);
                break;
        default:
                printf("CALLG: too many arguments: %d\r\n", (n - 2) / 2);               
                result = (Ptr) 0;
                break;
        }

        GIa4 = prota4;
        if (fixvector_callg_index !=  local_fixvector_callg_index)
                for (i=local_fixvector_callg_index; i < fixvector_callg_index; i++)
                        Cfixvector_to_Lfixvector(fixvector_callg_array[i]);
        if (floatvector_callg_index !=  local_floatvector_callg_index)
                for (i=local_floatvector_callg_index;
                     i < floatvector_callg_index;
                     i++)
                        Cfloatvector_to_Lfloatvector(floatvector_callg_array[i]);
        rfix_callg_index = local_rfix_callg_index;
        rfloat_callg_index = local_rfloat_callg_index;
        fixvector_callg_index = local_fixvector_callg_index;
        floatvector_callg_index = local_floatvector_callg_index;

        type = LL_PTR_TO_FIX((GIsp + (int) n - 2)->Val);
        return ((Ptr) buildretval (type, result));
}


/*  ======================================

    La machinerie du LispCaller

    ======================================  */

Ptr
getsym(char *str) {
        int size;
        size = 0;
        while (str[size] != '\0') ++size;
        GIa1 = LL_FIX(size);
        GIa2 = (Ptr) str;
        llm3_simple_call(GXcrastrg);
        GIa2 = (Ptr) GIa1;
        GIa1 = LL_FIX(size);
        llm3_simple_call(GXtrysymb);
        return ((Ptr) GIa1);
}


Ptr
pusharg(int type, Ptr val) {
        (--GIsp)->Val = buildretval(type, val);
        return ((Ptr) 0);
}

Ptr
lispcall(int type, int narg, Ptr symb) {
        /* il faut pre'voir de faire un SYSPROTECT ici
           quoi que la semantique de la chose n'est pas
           tre`s tre`s claire */

        if (ind_llm3_call >= MAXCSTACK) {
                printf("LISP_CALL: C stack overflow\r\n");
                GXexwer();
        } else {
                if (setjmp(env_llm3_call[ind_llm3_call]) == 0) {
                        int i; Ptr ssp;
                        /* recopie les arguments 1 elem plus haut dans 
                           la pile pour y forcer l'adr de retour */
                        ssp = GIsp;
                        for (i = 0; i < narg; i++) {
                                (ssp-1)->Val = ssp->Val;
                                ssp++;
                        }
                        /* force le retour */
                        (--ssp)->Val = (Ptr) ret_from_llm3_call[ind_llm3_call];
                        if (gelldebug != 0) 
                           printf("llm3_lisp_call: %d\r\n", ind_llm3_call);
                        ind_llm3_call++;
                        --GIsp;
                        GIa1 = symb;
                        GIa4 = LL_FIX_TO_PTR(narg);
                        llm3_execute(GXffuncall);
                } else {
                        return (convtype(type, GIa1));
                }
        }
        return GInil;
}

/*  ============================================================

    Fonctions spe'ciales de gestion de la table des litte'raux C

    Charge une table de litteraux C avec la copie d'un vecteur Lisp.
    Simulation d'une fonction LLM3 :
        A1 = adresse du mot memoire "GlY_module"
        A2 = adresse du vecteur LL tel quel
        A3 = taille du vecteur LL + 2 (headers)

    ============================================================  */

Ptr
SetLitTable(void) {
    Ptr cname;          /* adresse du mot memoire "Ymodule" */
    Ptr *lispvect;      /* adresse du vecteur LL tel quel */
    int taill;          /* taille du vecteur LL + 2 (headers) */
    int i; 
    Ptr lname;

    cname = (Ptr) GIa1;
    lispvect = (Ptr *) GIa2;
    taill = LL_PTR_TO_FIX(GIa3);
    lname = *lispvect;
    for (i=0; i<taill; i++)
            (cname++)->Val = (lname++)->Val ;
    GIa1 = (Ptr) 0;
    return ((GIsp++)->Val);
}


/*  =======================================================

    Points d'entre'e simples utilise's dans la ge'ne'ration
    du code C (cf modpeep.ll)

    =======================================================*/

Ptr
GXpopja4(void) {
        register Ptr reg_sp, reg_a4, ret_adr;
        reg_sp = GIsp;
        reg_a4 = (reg_sp++)->Val;
        reg_sp += LL_PTR_TO_FIX(reg_a4);
        ret_adr = (reg_sp++)->Val;
        GIsp = reg_sp;
        GIa4 = reg_a4;
        return (ret_adr);
}

Ptr
GXpopj0(void) {
        register Ptr reg_sp, ret_adr;
        reg_sp = GIsp; ret_adr = (reg_sp++)->Val;
        GIsp = reg_sp; return (ret_adr);
}

Ptr
GXpopj1(void) {
        register Ptr reg_sp, ret_adr;
        reg_sp = GIsp; reg_sp += (int) 1; ret_adr = (reg_sp++)->Val;
        GIsp = reg_sp; return (ret_adr);
}

Ptr
GXpopj2(void) {
        register Ptr reg_sp, ret_adr;
        reg_sp = GIsp; reg_sp += (int) 2; ret_adr = (reg_sp++)->Val;
        GIsp = reg_sp; return (ret_adr);
}

Ptr
GXpopj3(void) {
        register Ptr reg_sp, ret_adr;
        reg_sp = GIsp; reg_sp += (int) 3; ret_adr = (reg_sp++)->Val;
        GIsp = reg_sp; return (ret_adr);
}

Ptr
GXpopj4(void) {
        register Ptr reg_sp, ret_adr;
        reg_sp = GIsp; reg_sp += (int) 4; ret_adr = (reg_sp++)->Val;
        GIsp = reg_sp; return (ret_adr);
}

Ptr
GXpopj5(void) {
        register Ptr reg_sp, ret_adr;
        reg_sp = GIsp; reg_sp += (int) 5; ret_adr = (reg_sp++)->Val;
        GIsp = reg_sp; return (ret_adr);
}

Ptr
GXpopj6(void) {
        register Ptr reg_sp, ret_adr;
        reg_sp = GIsp; reg_sp += (int) 6; ret_adr = (reg_sp++)->Val;
        GIsp = reg_sp; return (ret_adr);
}

Ptr
GXpopj7(void) {
        register Ptr reg_sp, ret_adr;
        reg_sp = GIsp; reg_sp += (int) 7; ret_adr = (reg_sp++)->Val;
        GIsp = reg_sp; return (ret_adr);
}

Ptr
GXpopj8(void) {
        register Ptr reg_sp, ret_adr;
        reg_sp = GIsp; reg_sp += (int) 8; ret_adr = (reg_sp++)->Val;
        GIsp = reg_sp; return (ret_adr);
}

Ptr
GXpopj9(void) {
        register Ptr reg_sp, ret_adr;
        reg_sp = GIsp; reg_sp += (int) 9; ret_adr = (reg_sp++)->Val;
        GIsp = reg_sp; return (ret_adr);
}


/*  ====================================================

    Les fonctions relais de ../common/lelisp.c

    ====================================================  */

extern char ttyin(void);
extern char ttys(char *buf);
extern int  ttyinstr(char *buf, int len);
extern int  ttyout(int, char*);
extern int  infile(int, char*);
extern int  apfile(int, char*);
extern int  oufile(int, char*);
extern int  inbf(int, char*, int*);
extern int  inbfb(int, char*, int*);
extern int  outf(int, int, char*);
extern int  outfl(int, int, char*);
extern int  fdele(char*);
extern int  fprobe(char*);
extern int  fclos(int);
extern int  fcopy(char*, char*);
extern int  frena(char*, char*);
extern int  cdate(Ptr);
extern int  getgloba(char*);
extern int  cline(char*);
extern int  getenvrn(char*, char*);

char   llrt_ttyin(void) {return (ttyin());}
char   llrt_ttys(char *buf) {return (ttys(buf));}
int    llrt_ttyinstr(char *buf, int len) {return (ttyinstr(buf, len));}
int    llrt_ttyout(int len, char *buf) {return (ttyout(len, buf));}

int    llrt_infile(int chan, char *buf) {return (infile(chan, buf));}
int    llrt_apfile(int chan, char *buf) {return (apfile(chan, buf));}
int    llrt_oufile(int chan, char *buf) {return (oufile(chan, buf));}
int    llrt_inbf(int chan, char *buf, int *psiz) {return (inbf(chan, buf, psiz));}
int    llrt_inbfb(int chan, char *buf, int *psiz) {return (inbfb(chan, buf, psiz));}
int    llrt_outf(int chan, int len, char *buf) {return (outf(chan, len, buf));}
int    llrt_outfl(int chan, int len, char *buf) {return (outfl(chan, len, buf));}

int    llrt_fdele(char *buf) {return (fdele(buf));}
int    llrt_fprobe(char *buf) {return (fprobe(buf));}
int    llrt_fclos(int chan) {return (fclos(chan));}
int    llrt_fcopy(char *buf1, char *buf2) {return (fcopy(buf1, buf2));}
int    llrt_frena(char *buf1, char *buf2) {return (frena(buf1, buf2));}

int    llrt_cdate(Ptr pvect) {return (cdate(pvect));}
int    llrt_getenvrn(char *buf1, char *buf2) {return (getenvrn(buf1, buf2));}
int    llrt_cline(char *buf) {return (cline(buf));}
int    llrt_getgloba(char *buf) {return (getgloba(buf));}

extern int
llrt_c_sleep(double tim) {
       /* les routines de ../common/lelisp.c ne sont pas
          canoniques (utilisent accusingle1 ou la pile) */
       return ((int)sleep ((unsigned int) tim));
}

/* It'a the ISO C version, but the system time is included :-(

extern double llrt_c_runtime(void) {
        clock_t clkaux;
        double   dblaux;
        clkaux = clock();
        dblaux = (double) clkaux;
        dblaux /= (double)CLOCKS_PER_SEC;
        if (gelldebug != 0)
                fprintf(stderr, "CLK= %d\tCPS= %d SEC= %g\r\n",
                         clkaux, CLOCKS_PER_SEC, dblaux);
        return (dblaux);
}
*/

extern double runtime(void);
extern double
llrt_c_runtime(void) {
        return (runtime());
}

extern double setalarm(double tim);
extern double
llrt_c_setalarm(double tim) {
        return (setalarm(tim));
}

extern void
llrt_error(char *fntname) {
        char * errmsg;

        errmsg = strerror(errno);
        fprintf(stderr, "\r\nLe-Lisp: %s: %s\r\n", fntname, errmsg);
}
