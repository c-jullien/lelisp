/*
;;;
;;; lelisp.c:        runtime librairie in C
;;;
;;; $Source: /usr/cvs/lelisp/common/lelisp.c,v $
;;; $Date: 2017/08/15 15:06:53 $
;;; $Revision: 1.24 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------
*/

/* All specifics machine definitions are in <machine>/C/Machine.h */
#include "Machine.h"

/* For LLM3 symbols (same in C and xxx.llm3) */
#ifndef LLM3VAR
#define LLM3VAR
#endif

#define IMPORT extern
#define EXPORT

/*  Basics units memory */
#define PTR     (sizeof(char *))
#define BIPTR   (PTR*2)
#define KPTR    ((unsigned int)(PTR*1024))
#define KOCTET  ((unsigned int)1024)

#if     defined(LLOLD_SIZE_NAMES)
#define LLSSTACK        SSTACK
#define LLSCODE         SCODE
#define LLSHEAP         SHEAP
#define LLSNUMB         SNUMB
#define LLSFLOAT        SFLOAT
#define LLSVECT         SVECT
#define LLSSTRG         SSTRG
#define LLSSYMB         SSYMB
#define LLSCONS         SCONS
#define LLUCONS         UCONS
#endif /* LLOLD_SIZE_NAMES */

/*  sizes of LL area (be careful to used units) */
int LLSSTACK = 6;          /*  K objects of type pointers */
int LLSCODE  = 128;        /*  K bytes */
int LLSHEAP  = 128;        /*  K bytes */
int LLSNUMB  = 0;          /*  K objects of type fixnum */
int LLSFLOAT = 1;          /*  K objects of type float */
int LLSVECT  = 1;          /*  K objects of type vector */
int LLSSTRG  = 3;          /*  K objects of type string */
int LLSSYMB  = 2;          /*  K objects of type symbols */
int LLSCONS  = 4;          /*  8 K CONS */
int LLUCONS  = 0;          /*  32 CONS */


/*****************************************************

        external declarations

 *****************************************************/
/* external entry points
   ===================== */
extern void lmaccess(char *s, int i);
extern int  lmalive(char *s);
extern void llstdio(void);

/* the LLM3 globals variables
   ========================== */

/* LL stack */
IMPORT char *bstack, *estack, *mstack1, *mstack2;

/* LL areas */
IMPORT char  *bcode,  *ccode,  *ecode,
             *bheap,  *cheap,  *eheap,
             *bnumb,  *cnumb,
             *bfloat, *cfloat,
             *bvect,  *cvect,
             *bstrg,  *cstrg,
             *bsymb,  *csymb,
             *bcons,  *ccons,  *econs;

/* init file */
IMPORT int filiz, filit, llban;
IMPORT char *filin;

/* the system number */
IMPORT int nbsyst;

/* some declarations
   ================= */

#if defined(LLGHOSTPROC)

/* Some macro definitions and constants. */
#if !defined(SHM_SIZE)
#define SHM_SIZE        4500    /* The size of the shared segment. */
#endif  /* SHM_SIZE */
#define SHM_STAT        (*(int *)comline)
#define SHM_BUFF        (comline + sizeof(int))

/* Some global variables. */
int     f_pid;                  /* Father pid. */
int     c_pid           = 0;    /* Child pid. */
char    *comline;               /* Pointer to shared segment */
int     shm_key;                /* Shared segment key. */
int     sig_flag        = 0;

/* A very complex function used for signals. */
static void
wait_function(int sig) {
        sig_flag = 1;
        return;
}

/* What must do the child. */
extern void child_body();
extern void exit_child();

/* a fonction which wait for sig_flag */
void
wait_sig_flag(void) {
        while (!sig_flag) {
           /* some compilo strip the test if always true, so ... */
                (void)donil();
        }
        sig_flag = 0;
}

int
donil(void) {
        return(0);
}
#endif  /* LLGHOSTPROC */


/* some specials cases
   =================== */

int     verbose = 0;

size_t LLADRBIAS = 0;

#if defined(LLSTACK)
int cstack = 0;
extern char *savsp;
extern char *getbstack(int, int);
char *ll_ptr_stack;
#if     defined(__linux__) || defined(X86MACOS)
#include <sys/resource.h>
static struct rlimit lllimit;
#endif
#if !defined(CSTACK)
#define CSTACK  0x8000
#endif  /* CSTACK */
#endif  /* LLSTACK */

/******************************************************

  globales C variables

*******************************************************/

/* Execore flag
   ============
   selfcore = 1 during save-core in execore mode */
int selfcore = 0;

/*  Debug mode
    ==========
    In debug mode: no interrupt, no stty. useful for adb...*/
int lldebug = 0;
int gelldebug = 0;

/* areas memory
   ============ */

/* area's sizes */
int sstack, scode, sheap, snumb, sfloat, svect, sstrg, ssymb, scons;

/* TCONS bits */
EXPORT int  stbin;
LLM3VAR char *btbin;

/* GC bits */
EXPORT int stbgc;
LLM3VAR char *btbgc;

/* begin & end memory */
EXPORT char *bmem;
EXPORT char *emem;

/* Unix environment
   ================ */
#if defined(EXECORE)
/* initial environment Shell (restore-core BSD) */
char **envpini;
#endif /* EXECORE */

/* binary lelispbin : absolute path
   ================= */
char lelispbin[256]; /* changed by llcload */
char realbin[256];   /* not changed by llcload */

/* entry points
  ============= */

/* To avoid a "core dumbed" on bad signal */
extern void out(int n);

void
oupps(int n) {
        fprintf(stderr, "%s: I quit on signal %d\r\n", LLSYSNAME, n);
        out(-1);
}

/* Error */

char *usage(void);

/* Memory allocation */
char *END;
#ifdef LLDOS
#define RATE NULL
int   lliconic  = 0; /* if 1 then start iconified */
int   llfixed   = 0;                  /* if 1 then start fixed termial */
int   llconsole = 0;                  /* if 1 then create console      */
char  llgeometry[64] = { 0 };
#else   /* LLDOS */
#define RATE (char *) -1
#endif  /* LLDOS */

/********************************************************

  Terminal management

 ********************************************************/

#if     !defined(LLDOS)
struct termios tioini, tiolisp;             /* initial and LL termio */
#endif  /* LLDOS */

int realterminal = 0;                       /* =0 it's a true term */
int ll_fg = 1;                              /* =1/0 forground/background  */

extern int init_stty(void);
extern int lisp_stty(void);
extern int unix_stty(void);

#if defined(LLDOS)
extern  void    DOSlispterm(void);
extern  void    DOSsysterm(void);
#endif  /* LLDOS */

/* return the status foreground = 1, background = 0.
 */
int
is_ll_fg(void) {
        return ll_fg;
}

#if defined(LLFOREGROUND)
/* Return True (1) if the process is in Foreground mode
   and set the status variable ll_fg to 1, otherwize 0.
 */
int
is_ll_foreground(void) {
#if defined(FREEBSD)
	/*
	 * This version looks more POSIX compliant and should be used
	 * on all modern systems.
	 */
        pid_t tpsg;

        tpsg  = tcgetpgrp(STDIN_FILENO);
        ll_fg = 1;

        if (tpsg == -1) {
                perror("/dev/tty");
		return ll_fg;
	}

        if (tpsg != getpgrp()) {
                ll_fg = 0;
	}

        return ll_fg;
#else
        int tpsg;
        ll_fg = 1;
        if (!(tpsg = tcgetpgrp(0)))
                perror("/dev/tty");
        if (tpsg != GETPGRP())
                ll_fg=0;
        return ll_fg;
#endif
}

#else  /* LLFOREGROUND */
int is_ll_foreground(void) { ll_fg = 1 ; return ll_fg; }
#endif /* LLFOREGROUND */

/* init_stty: initialize initials and LL STTY
   ------------------------------------------ */

/* nombre de caracteres tape's en (LLVTIME * .1) secs  */
#if defined(ALPHAOSF) || defined(RS6000) || defined(LLHPUX11)
/*  patch pour la version 2.0 */
#define LLVMIN  1
#else
#define LLVMIN  6
#endif
/* nombre de dixieme de secs entre 2 car. */
#define LLVTIME 1

int
init_stty(void) {
        realterminal = isatty(0);
#if !defined(LLDOS)
        (void) tcgetattr(0, &tioini);
        (void) tcgetattr(0, &tiolisp);
        tiolisp.c_cc[VMIN]  = LLVMIN;
        tiolisp.c_cc[VTIME] = LLVTIME;
        tiolisp.c_iflag &= ~(IGNBRK|INLCR|ICRNL);
        tiolisp.c_iflag |= BRKINT;
        tiolisp.c_oflag &= ~(OPOST);
        tiolisp.c_lflag &= ~(ICANON|ECHO|ECHOE|ECHOK|ECHONL|NOFLSH);
        tiolisp.c_lflag |= ISIG;
#if defined (M88K)
        /* force en att_stty[BCS]: discipline line=0 */
        tiolisp.c_line = 0;
#endif
        /* est-on interactif ? */
#if defined(LLFOREGROUND)
        if ((is_ll_foreground()) && (realterminal != 0))
#else  /* LLFOREGROUND */
        if (realterminal != 0)
#endif /* LLFOREGROUND */
        /* mets le tty lisp */
                (void) tcsetattr(0, TCSANOW, &tiolisp);
#endif  /* LLDOS */
        return((int)0);
}

/* lisp_stty: switche term in LL mode
   ---------------------------------- */

int
lisp_stty(void) {
#if !defined(LLDOS)
#if defined(LLFOREGROUND)
        if ((is_ll_foreground()) && (realterminal != 0))
#else  /* LLFOREGROUND */
        if (realterminal != 0)
#endif /* LLFOREGROUND */
                (void) tcsetattr(0, TCSANOW, &tiolisp);
#else /* LLDOS */
                DOSlispterm();
#endif /* LLDOS */
        return((int)0);
}

/* unix_stty: switch term in Unix mode
   ----------------------------------- */

int
unix_stty(void) {
#if !defined(LLDOS)
#if defined(LLFOREGROUND)
        if ((is_ll_foreground()) && (realterminal != 0))
#else  /* LLFOREGROUND */
        if (realterminal != 0)
#endif /* LLFOREGROUND */
                (void) tcsetattr(0, TCSANOW, &tioini);
#else /* LLDOS */
                DOSsysterm();
#endif /* LLDOS */
        return((int)0);
}

/********************************************************

  Unix signal management

 ********************************************************/

extern void ll_break(int n);
extern void ll_merro(int n);
extern void ll_clock(int n);

#if defined(LLFOREGROUND)
void
onstop(int signo) {
        /* stopped job : ^Z */
        unix_stty();
        SIGNAL(SIGTSTP, SIG_DFL);
        SIGNAL(SIGTTOU, SIG_IGN);
        kill(GETPGRP(), signo);
}

void
oncont(int signo) {
        (void)signo;
        /* switch in mode Lisp */
        lisp_stty();
        SIGNAL(SIGTSTP, (signal_type)onstop);
}

void
shstop(int signo) {
        /* during a COMLINE */
        SIGNAL(SIGTSTP, SIG_IGN);
        kill(GETPGRP(), signo);
}

void
shcont(int signo) {
        (void)signo;
        /* during a COMLINE */
        SIGNAL(SIGTSTP, (signal_type)shstop);
}
#endif /* LLFOREGROUND */


/* init_signal: intialize Unix signal of LL
   ---------------------------------------- */

int
init_signal(void) {
#if     defined(LLDOS)
        SIGNAL(SIGABRT,  oupps);
#if     !defined(NOSIGFPE)
        SIGNAL(SIGFPE,   oupps);
#endif  /* NOSIGFPE */
        SIGNAL(SIGILL,   oupps);
        SIGNAL(SIGSEGV,  oupps);
#else   /* LLDOS */
        int i;
        if (lldebug == 0) {
                for (i = 3 ; i <= 12; SIGNAL(i++, (signal_type)oupps))
                        ;
#if defined(LLFOREGROUND)
                SIGNAL(SIGTSTP, (signal_type)onstop);
                SIGNAL(SIGCONT, (signal_type)oncont);
                SIGNAL(SIGTTOU, SIG_IGN);
#endif /* LLFOREGROUND */
        }
#endif  /* LLDOS */
        return(0);
}

int
int_ign(void) {
#if     defined(LLDOS)
        SIGNAL(SIGABRT,  SIG_IGN);
#if     !defined(NOSIGFPE)
        SIGNAL(SIGFPE,   SIG_IGN);
#endif  /* NOSIGFPE */
        SIGNAL(SIGILL,   SIG_IGN);
        SIGNAL(SIGSEGV,  SIG_IGN);
        if (realterminal != 0) {
                SIGNAL(SIGINT,   SIG_IGN);     /* interrupt : Ctl-C */
                SIGNAL(SIGBREAK, SIG_IGN);     /* interrupt : Ctl-break */
        }
#else   /* LLDOS */
        if (realterminal != 0)
                SIGNAL(SIGINT,  SIG_IGN);     /* interrupt */
        SIGNAL(SIGILL,  SIG_IGN);       /* illegal instruction */
        SIGNAL(SIGSEGV, SIG_IGN);       /* segmentation violation */
        SIGNAL(SIGFPE,  SIG_IGN);       /* floating point exception */
        SIGNAL(SIGBUS,  SIG_IGN);       /* bus error */
        SIGNAL(SIGTRAP, SIG_IGN);       /* trace trap */
#if defined(LLFOREGROUND)
        SIGNAL(SIGTSTP, (signal_type)shstop);/* stop generated from keyboard */
        SIGNAL(SIGCONT, (signal_type)shcont);/* continue after stop */
#endif /* LLFOREGROUND */
#endif /* LLDOS */
        return((int)0);
}

/* int_std: switch on standard signals for COMLINE
   ----------------------------------------------- */

int
int_std(void) {
#if     defined(LLDOS)
        SIGNAL(SIGABRT,  SIG_DFL);
#if     !defined(NOSIGFPE)
        SIGNAL(SIGFPE,   SIG_DFL);
#endif  /* NOSIGFPE */
        SIGNAL(SIGILL,   SIG_DFL);
        SIGNAL(SIGSEGV,  SIG_DFL);
        if (realterminal != 0) {
                SIGNAL(SIGINT,   SIG_DFL);     /* interrupt : Ctl-C */
                SIGNAL(SIGBREAK, SIG_DFL);     /* interrupt : Ctl-break */
        }
#else   /* LLDOS */
        if (realterminal != 0)
                SIGNAL(SIGINT,  SIG_DFL);     /* interrupt */
        SIGNAL(SIGILL,  SIG_DFL);       /* illegal instruction */
        SIGNAL(SIGSEGV, SIG_DFL);       /* segmentation violation */
        SIGNAL(SIGFPE,  SIG_DFL);       /* floating point exception */
        SIGNAL(SIGBUS,  SIG_DFL);       /* bus error */
        SIGNAL(SIGTRAP, SIG_DFL);       /* trace trap */
#if defined(LLFOREGROUND)
#if defined(ALPHAOSF)
        SIGNAL(SIGTSTP, SIG_IGN);       /* stop generated from keyboard */
#else  /* ALPHAOSF */
        SIGNAL(SIGTSTP, SIG_DFL);       /* stop generated from keyboard */
#endif /* ALPHAOSF */
        SIGNAL(SIGCONT, SIG_DFL);       /* continue after stop */
#endif /* LLFOREGROUND */
#endif /* LLDOS */
        return((int)0);
}

/* inton: start Unix signals for LL
   -------------------------------- */

int
inton(void) {
     if (lldebug == 0) {
#if defined(LLDOS)
        SIGNAL(SIGABRT,  ll_merro);
#if ! defined(NOSIGFPE)
        SIGNAL(SIGFPE,   ll_merro);
#endif /* NOSIGFPE */
        SIGNAL(SIGILL,   ll_merro);
        SIGNAL(SIGSEGV,  ll_merro);
        if (realterminal != 0) {
                SIGNAL(SIGINT,   ll_break);     /* interrupt : Ctl-C */
                SIGNAL(SIGBREAK, ll_break);     /* interrupt : Ctl-break */
        }
#else /* LLDOS */
       if (realterminal != 0)
               SIGNAL(SIGINT, (signal_type)ll_break); /* interrupt */
        SIGNAL(SIGILL,  (signal_type)ll_merro);  /* illegal instruction */
        SIGNAL(SIGSEGV, (signal_type)ll_merro);  /* segmentation violation */
        SIGNAL(SIGFPE,  (signal_type)ll_merro);  /* floating point exception*/
        SIGNAL(SIGBUS,  (signal_type)ll_merro);  /* bus error */
        SIGNAL(SIGTRAP, (signal_type)ll_merro);  /* trace trap */
        SIGNAL(SIGALRM, (signal_type)ll_clock);  /* alarm clock */

#if defined(LLFOREGROUND)
        SIGNAL(SIGTSTP,(signal_type)onstop);/* stop generated from keyboard */
        SIGNAL(SIGCONT,(signal_type)oncont);/* continue after stop */
#endif /* LLFOREGROUND */
#if defined(SIG_SETMASK) && !defined(APOLLO)
        {
                struct sigset_t *set = {0};
                sigprocmask(SIG_SETMASK, (sigset_t *)&set, NULL);
        }
#else
                sigsetmask(0);
#endif
#if defined(SIGDANGER)
        SIGNAL(SIGDANGER,(signal_type)ll_merro);         /*impending lack of pg space*/
#endif /* SIGDANGER */
#endif /* LLDOS */
       }
     return((int)0);
}

/* intoff: stop Unix signals of LL
   ------------------------------- */

int
intoff(void) {
        if (lldebug == 0) {
#if     defined(LLDOS)
        if (realterminal != 0) {
                SIGNAL(SIGINT,   SIG_IGN);     /* interrupt : Ctl-C */
                SIGNAL(SIGBREAK, SIG_IGN);     /* interrupt : Ctl-break */
        }
#else   /* LLDOS */
                if (realterminal != 0)
                        SIGNAL(SIGINT,  SIG_IGN);
#endif  /* LLDOS */
        }
        return((int)0);
}

void
ll_verbose(int verbosep, int size) {
  /* display sizes in core */
  if (verbosep) {
     printf("Allocation for: %s\r\n", LLSYSNAME);
     printf("    FILIT   %3d\r\n", filit);
     printf("    FILIN   \"%s\"\r\n", filin);
     printf("    C stack address near  %p\r\n", &size);
#if defined(LLSTACK) && defined(LLDOS)
     printf("    C stack reserved size 0x%08p\r\n",((cstack==0)?CSTACK:cstack));
#endif
     printf("    Lisp stack [%p - %p]\r\n", bstack, estack);
     printf("Size of memory regions  (bytes)  (SIZES):\r\n");
     printf("    stack            %10d%10u\r\n", sstack, sstack / KPTR);
     printf("    code             %10d%10u\r\n", scode, scode / KOCTET);
     printf("    heap             %10d%10u\r\n", sheap, sheap / KOCTET);
     printf("    fixnums          %10d%10u\r\n", snumb, snumb / KPTR);
     printf("    floats           %10d%10u\r\n", sfloat, sfloat / (KPTR * 2));
     printf("    vectors          %10d%10u\r\n", svect, svect / (KPTR * 2));
     printf("    strings          %10d%10u\r\n", sstrg, sstrg / (KPTR * 2));
     printf("    symbols          %10d%10u\r\n", ssymb, ssymb / (KPTR * 8));
     printf("    cons             %10d%10u\r\n", scons, scons / (KPTR * 16));
     printf("    invisible bits   %10d\r\n", stbin);
     printf("    gc bits          %10d\r\n", stbgc);
     printf("Total               %11d\r\n", size);
  }
}

#if defined(LL_ANSI_FILES)
extern int fprobe(char *buff);
#endif

void
ll_fprobe_core(char *corename, int verbosep, int size) {
        if (filiz) {
#if defined(LL_ANSI_FILES)
        if (fprobe(corename)) {
#else   /* LL_ANSI_FILES */
           if (close(open(corename, 0)) != 0) {
#endif  /* LL_ANSI_FILES */
#if defined(LLFOREIGN)
           fprintf(stderr, "%s: Can't find file \"%s\"\r\n", LLSYSNAME, corename);
#else /* LLFOREIGN */
           fprintf(stderr, "%s : je ne trouve pas le fichier \"%s\"\r\n",
                   LLSYSNAME, corename);
#endif /* LLFOREIGN */
           out(-1);
   }
#if defined(EXECORE)
           if (filit == 1) {
                   int dummy;
                   int *pdummy;
                   (void)ll_verbose(verbosep, size);
                   dummy = 1;
                   pdummy = &dummy;
                   prtmsgs = &pdummy;   /* **prtmsgs existe */
                   corest(corename);
                   out(-1);
           }
#else
	   (void)verbosep;
	   (void)size;
#endif /* EXECORE */
   }
}

/*******************************************

  LL entry point

 *******************************************/

extern void llinit_template(void);
extern void llrm_template(void);
extern int getsize_from_llcore(char *);
extern void zonevide(char *s);
extern long getgloba(char *s);

#if defined(LLDOS)
static  double  StartTime;
#endif  /* LLDOS */

int
inlelisp(int argc, char **argv, char **envp) {
        int n;
        int size=0;

        (void)envp;

        verbose=0;

#if defined(LLC64BITS)
        if ((size_t)inlelisp > (size_t)0xFFFFFFFF) {
                LLADRBIAS = (size_t)inlelisp & 0xFFFFFFFF00000000;
        }
#endif

#if defined(EXECORE)
        envpini = envp;               /* save Shell environment */
#endif /* EXECORE */
        init_signal();                /* initialize signals */

#if defined(LLDOS)
        StartTime = (double)clock();  /* initialisation horloge LLDOS */
#endif  /* LLDOS */
        filit  = FILIT;               /* init values */
        llban  = LLBAN;
        nbsyst = NBSYST;

#if defined (EXECORE)
        if (selfcore == 1)
                filin  =  argv[0];
        else
#endif /* EXECORE */
                filin  = FILEINI;

        llinit_template();            /* init template if cloadp */

        /* read arguments
           The 1st one argv[0] is ALWAYS the usefull path of LL binary */

        strcpy(lelispbin, argv[0]);  /* lelispbin will take template's value
                                        when we will do a CLOAD */
        strcpy(realbin, argv[0]);    /* realbin keep always the same value*/

#define suitarg() ((++n >= argc) ? usage() : *(argv+n))
#define checkarg(s) (!strcmp(s,*(argv+n)))

        for (n = 1; n < argc; n++) {
                if ((**(argv+n) >= '0') && (**(argv+n) <= '9')) {
                       LLSCONS = atoi(*(argv+n)); continue; }
                if (**(argv+n) == '-') {
                     if (checkarg("-r")) {
                       filit = 1; filin = suitarg(); continue; }
                     if (checkarg("-stack")) {
                       LLSSTACK = atoi(suitarg()); continue; }
                     if (checkarg("-code")) {
                       LLSCODE = atoi(suitarg()); continue; }
                     if (checkarg("-heap")) {
                       LLSHEAP = atoi(suitarg()); continue; }
                     if (checkarg("-number")) {
                       LLSNUMB = atoi(suitarg()); continue; }
                     if (checkarg("-float")) {
                       LLSFLOAT = atoi(suitarg()); continue; }
                     if (checkarg("-vector")) {
                       LLSVECT = atoi(suitarg()); continue; }
                     if (checkarg("-string")) {
                       LLSSTRG = atoi(suitarg()); continue; }
                     if (checkarg("-symbol")) {
                       LLSSYMB = atoi(suitarg()); continue; }
                     if (checkarg("-cons")) {
                       LLSCONS = atoi(suitarg()); continue; }
                     if (checkarg("-ucons")) {
                       LLUCONS = atoi(suitarg()); continue; }
                     if (checkarg("-s")) {
                       llban = 1; continue; }
                     if (checkarg("-debug")) {
                       lldebug = 1; continue; }
                     if (checkarg("-gelldebug")) {
                       gelldebug = 1; continue; }
                     if (checkarg("-v")) {
                       verbose = 1; continue; }
#if defined(LLSTACK)
                     if (checkarg("-cstack")) {
                       cstack = atoi(suitarg()); continue; }
#endif
#if defined(LLDOS)
                     if (checkarg("-iconic")) {
                       lliconic = 1; continue; }
                     if (checkarg("-fixed")) {
                       llfixed = 1; continue; }
                     if (checkarg("-geometry")) {
                       (void)strcpy(llgeometry,suitarg()); continue; }
                     if (checkarg("-console")) {
                        llconsole = 1; continue; }
                     if (checkarg("-config")) {
                       getargs(suitarg()); continue; }
#endif
                     (void) usage();
             } else {
                     filit=0;
             }
             filin = *(argv+n);
        }
        filiz=(int)strlen(filin);

        if (lldebug == 0)
                 init_stty();         /* initialisation du terminal */
#if defined(LLDOS)
        if (LLSSTACK > LLSTACKMAX) {
                LLSSTACK = LLSTACKMAX;
                fprintf(stderr,
                        "stack set to %d on this system\r\n",
                        LLSTACKMAX);
        }
#endif

        if (LLSSTACK > LLSTACKMAX) {
                LLSSTACK = LLSTACKMAX;
                fprintf(stderr,
                        "stack set to %d on this system\r\n",
                        LLSTACKMAX);
        }
        if (filit == 1) {
                (void)ll_fprobe_core(filin, verbose, size);
#if !defined (EXECORE)
                (void)getsize_from_llcore(filin);
#endif /* EXECORE */
        }
        else {
        sstack = LLSSTACK * KPTR;
        scode  = LLSCODE  * KOCTET;
        sheap  = LLSHEAP  * KOCTET;
        snumb  = LLSNUMB  * KPTR;
        sfloat = LLSFLOAT * KPTR * 2;
        svect  = LLSVECT  * KPTR * 2;
        sstrg  = LLSSTRG  * KPTR * 2;
        ssymb  = LLSSYMB  * KPTR * 8;         /* symbol = 8 pointers */
        scons  = LLSCONS  * KPTR * 16;        /* in 8K CONS */
        scons  += LLUCONS * PTR * 64;         /* in packet of 32 CONS */
        }

        /*
          Verification of arguments
          only FLOAT, NUMB and CODE value may be empty
        */
#define nozero(zone, nom) if (zone == 0) zonevide(nom)

        align(snumb);
        align(sfloat);
        align(scode);
        nozero(sstack,"stack"); align(sstack);
        nozero(sheap,"heap");   align(sheap);
        nozero(svect,"vector"); align(svect);
        nozero(sstrg,"string"); align(sstrg);
        nozero(ssymb,"symbol"); align(ssymb);
        nozero(scons,"cons");   align(scons);

        /*
          compute complete memory size
        */

        stbin = scons / (BIPTR * 8);    /* size of TCONS bits table */
        align(stbin);                   /* 1 bit for 2 pointers */

        stbgc = (snumb+sfloat+svect+sstrg+ssymb+scons) / (BIPTR * 8);
                                        /* size of GC Bit Table */

        align(stbgc);

        /* en 2 coups a cause des limites de certains compilos C */

        size = sstack+scode+sheap+svect + (4 * PTR);
        size = size+snumb+sfloat+sstrg+ssymb+scons+stbin+stbgc;

/* differently placed if execore mode or no (see sbrk()) */
#if defined(EXECORE)
        (void) ll_verbose(verbose, size);
        if (selfcore == 1) {
                corinit();        /* restauration turbo */
                out(-1);          /* au cas ou on rentrerait */
        }
#endif /* EXECORE */

        /*
          Memory allocation
        */

#if defined(LLGHOSTPROC)

        /* The father's pid. */
        f_pid = getpid();

        /* Creation of a shared segment. */
        shm_key = shmget(IPC_PRIVATE, SHM_SIZE, SHM_W | SHM_R | IPC_CREAT);
        if (shm_key < 0) {
                (void)fprintf(stderr,
                              "%s: Can't create shared memory\r\n",
                              LLSYSNAME);
                out(-1);
        }

        /* Attachment of the shared segment. */
        if (!(comline = shmat(shm_key, 0, 666))) {
                (void)fprintf(stderr,
                              "%s: Can't attach shared memory\r\n",
                              LLSYSNAME);
                out(-1);
        }

        /* Creation of the child process. */
        c_pid = fork();

        /* Error ? */
        if (c_pid < 0) {
                (void)fprintf(stderr,
                              "%s: Can't create child process\r\n",
                              LLSYSNAME);
                out(-1);
        }

        /* What must do the child process. */
        if (c_pid == 0) {

                /* All signals are ignored except the following ones. */
                (void)int_ign();

                /* SIGQUIT is used to tell child to exit. */
                (void)signal(SIGQUIT, exit_child);

                /* SIGUSR1 is used to tell child to work. */
                (void)signal(SIGUSR1, child_body);

                while (1) {
                        /* Waits for father's orders. */
                        (void)pause();

                        /* Tells father it's finished. */
                        if (kill(f_pid, SIGINT))
                                exit(-1);
                 }
        }

        /* Child always alive ? */
        if (kill(c_pid, 0) < 0) {
                (void)fprintf(stderr,
                              "%s: Child process doesn't exist any more\r\n",
                              LLSYSNAME);
                out(-1);
        }
#endif  /* LLGHOSTPROC */


        /* Just because GETGLOBAL do a malloc...
           This malloc must be executed before OUR malloc */
        (void) getgloba("start");

        /* The command-line uses bytes which changes the adresses. */
#if     defined(LLMAP)
        bmem = (char *)llalloc(size + LLMAXPAGESIZE * 2);
#else
#if     defined(LLUSESBRK)
        bmem = (char *)sbrk(size + LLMAXPAGESIZE * 2);
        if ((long)bmem < 0)
                bmem = NULL;
#else
        bmem = (char *)calloc(size + LLMAXPAGESIZE * 2, 1);
#endif
#endif

        if (bmem != NULL) {
                bmem = (char *)LLBMEMALIGN(bmem);

/*      bmem = bmem + (256 * 1024); Alloc the same buffer (256 K) */
        }
        END   = bmem + size;
        if (verbose) {
                (void)fprintf(
                              stderr,
                              "Le-Lisp memory form %p to %p\n\r",
                              bmem, END
                        );
                (void)fprintf(
                              stderr,
                              "Le-Lisp memory LLADRBIAS 0x%lx\n\r",
                              (unsigned long)LLADRBIAS
                        );
        }
        if (bmem == NULL) {
          fprintf(stderr,
                  "%s: Can't get required memory space\r\n",
                  LLSYSNAME);
          out(-1);
        }


        /* load predefined variables */

#if defined(LLSTACK)
        /*      version unix 386        */

        /* stack Lisp = stack C - size (SStack) */
        if (cstack == 0)
                cstack = CSTACK;

#if     defined(__linux__) || defined(X86MACOS)
        getrlimit(RLIMIT_STACK, &lllimit);
        if (lllimit.rlim_cur < (cstack + (sstack * KPTR)))
                lllimit.rlim_cur = lllimit.rlim_max;

        setrlimit(RLIMIT_STACK, &lllimit);
#endif

        bstack  = getbstack(sstack, cstack); /* compute bstack */
        estack  = bstack - sstack - PTR;      /* tole'rance minimale */
        mstack2 = estack + (128 * PTR);       /* fatal Full Stack */
        mstack1 = estack + (1024 * PTR);      /* no fatal Full Stack  */

        bcode  = bmem;
        ccode  = bcode;
        ecode  = bcode + scode;
#else /* LLSTACK */
        estack  = bmem + (4 * PTR);         /* tole'rance minimale */
        mstack2 = estack + (128 * PTR);     /* fatal Full Stack */
        mstack1 = estack + (1024 * PTR);    /* no fatal Full Stack */
/*
        bstack  = estack + sstack - PTR;
        bcode  = bstack + PTR;
 */
        bstack = bmem + sstack - PTR;
        bcode  = bmem + sstack;
        ccode  = bcode;
        ecode  = bcode + scode;
#endif /* LLSTACK */

        bheap  = ecode;
        cheap  = bheap;
        eheap  = bheap + sheap;

        bnumb  = eheap;
        cnumb  = bnumb;

        bfloat = bnumb + snumb;
        cfloat = bfloat;

        bvect  = bfloat + sfloat;
        cvect  = bvect;

        bstrg  = bvect + svect;
        cstrg  = bstrg;

        bsymb  = bstrg + sstrg;
        csymb  = bsymb;

        bcons  = bsymb + ssymb;
        econs  = bcons + scons;
        ccons  = bcons;

        btbin  = econs;
        btbgc  = btbin + stbin;
        emem   = btbgc;

#if !defined(EXECORE)
        (void)ll_verbose(verbose,size);
#endif /* EXECORE */

        /* let's go !!! */

        llstdio();
        lisp_stty();
        lmaccess(LLSYSNAME, 0);

        /* at return (if so), we pretty get out */

        out(0);
        return ((int)0);
}


/**********************************************************

         L E S    I M A G E S     M E Mz O I R E S

 **********************************************************/


/*   LLM3 instruction CORSAV must initialize this 4 var.
      bllm3, ellm3  llm3 data area limits
      llucode       end of uses code
      lluheap       end of used heap */

LLM3VAR char *bllm3, *ellm3;
LLM3VAR char *llucode, *lluheap;

/* To do only short I/O (cf NFS ...) */

#if !defined(LLWRITESIZE)
#define LLWRITESIZE 8192
#endif /* LLWRITESIZE */

#if defined(LL_ANSI_FILES)
int
LLWRITE(FILE *fd, char *where, int length) {
        int     cc, n;

        /* printf("Write: %d %x  %x \r\n", fd, where, length); */
        n = length;
        while (n >= LLWRITESIZE) {
                cc = (int)fwrite(where, 1, LLWRITESIZE, fd);
                if ((cc < LLWRITESIZE) && ferror(fd))
                        return(-1);
                where += cc;
                n -= cc;
        }
        while (n > 0) {
                cc = (int)fwrite(where, 1, n, fd);
                if ((cc < n) && ferror(fd))
                        return(-1);
                where += cc;
                n -= cc;
        }
        return(length);
}
#else   /* LL_ANSI_FILES */
int LLWRITE(int fd, char* where, int length) {
        int cc, n;

        /* printf("Write: %d %x  %x \r\n", fd, where, length); */
        n = length;
        while (n >= LLWRITESIZE) {
                if ((cc = write(fd, where, LLWRITESIZE)) < 0)
                        return(cc);
                where += cc;
                n -= cc;
        }
        while (n > 0) {
                if ((cc = write(fd, where, n)) < 0)
                        return(cc);
                where += cc;
                n -= cc;
        }
        return(length);
}
#endif  /* LL_ANSI_FILES */


/************************************
  LL core in EXECORE mode
 ************************************/

#if defined(EXECORE)

int corscons;       /* size of CONS in core */
int corstbin;       /* TCONS bits in core */
char *corbtbin;
char *lltopstack;

/***********
  exec LL EXECORE core
***********/

void
corinit(void) {
        int diffcons;
        int diffmem;
        int i;

        if (scons > corscons) {
           if (sbrk(0) != END)
                fprintf (stderr,
                       "%s: Can't allocate space without hole\r\n",LLSYSNAME);
           else {
                /* core is smaller than current lelisp memory */
                /* size CONS may be smaller */
                diffcons = (scons - corscons);
                /* TCONS bits are not in core */
                diffmem = diffcons + (diffcons / 64);
                /* GC bits are not in core */
                diffmem += diffcons / 64;
                align(diffmem);

                if (sbrk(diffmem) == RATE) {
                   fprintf (stderr,
                            "%s: not enough memory space\r\n",
                            LLSYSNAME);
                   out(-1);
                }

                econs += diffcons;
                btbin = econs;
                for (i = corstbin; --i >= 0;)
                        btbin[i] = corbtbin[i];

                btbgc = btbin + stbin;

                END = sbrk(0);
           }
        }
#if defined(LLSTACK)
/* We need to allocate the stack */
        bstack  = getbstack(sstack, CSTACK);
        if (!memcpy(savsp, ll_ptr_stack, bstack - savsp)) {
              fprintf (stderr,
                       "%s: Can't allocate the stack\r\n", LLSYSNAME);
              out(-1);
        }
        free(ll_ptr_stack);
#endif /* LLSTACK */
        inton();
        lisp_stty();
        lmaccess(LLSYSNAME, 0);
}

#else /* EXECORE */
/*************************************
 LL core in standard mode
 *************************************

  The header of core files containt:
    - 3 identification words (12 bytes)
    - the sizes of aarea in LL core
        corsstack
        corscode
        corsheap
        corsnumb
        corsfloat
        corsvect
        corsstrg
        corssymb
        corscons
        corstbin
    - the sizes of others saved LL memory
        sllm3
        ucode
        uheap
        urest
    - the address of area's begin
        bllm3
        bcode
        bheap
        bnumb
        float
        bvect
        bstrg
        bsymb
        bcons
*/

#define ID "lelisp core "
#if !defined(STAMP)
#define STAMP "0000"
#endif /* STAMP */

struct LLENTETE {
        char idlelisp[12];
        char stamp[4];

        int corsstack;
        int corscode;
        int corsheap;
        int corsnumb;
        int corsfloat;
        int corsvect;
        int corsstrg;
        int corssymb;
        int corscons;
        int corstbin;

        int sllm3;
        int ucode;
        int uheap;
        int urest;

        char *bllm3;
        char *bcode;
        char *bheap;
        char *bnumb;
        char *bfloat;
        char *bvect;
        char *bstrg;
        char *bsymb;
        char *bcons;
} entete;


/**********
  standard Save-core
***********/

int
corsav(char *nom) {
#if defined(LL_ANSI_FILES)
        FILE    *fd;

        if ((fd = fopen(nom, "wb")) == NULL) /* No access rights in ANSI */
#else   /* LL_ANSI_FILES */
       int fd;

        if ((fd = creat(nom, 0777)) == -1)
#endif  /* LL_ANSI_FILES */
                errreturn(nom, 1);

        if (lmalive(LLSYSNAME) == -1)  /* check ilm server */
                {
#if defined(LL_ANSI_FILES)
                        fclose(fd);
#else   /* LL_ANSI_FILES */
                        close(fd);
#endif  /* LL_ANSI_FILES */
                        return(13);    /* 13 is I/O error */
                }

        memset(entete.idlelisp, 0, 12);
        memcpy(entete.idlelisp, ID, 12);
        memset(entete.stamp, 0, 4);
        memcpy(entete.stamp, STAMP, 4);

        entete.corsstack = sstack;
        entete.corscode  = scode;
        entete.corsheap  = sheap;
        entete.corsnumb  = snumb;
        entete.corsfloat = sfloat;
        entete.corsvect  = svect;
        entete.corsstrg  = sstrg;
        entete.corssymb  = ssymb;
        entete.corscons  = scons;
        entete.corstbin  = stbin;

        entete.sllm3 = (int)(ellm3   - bllm3);
        entete.ucode = (int)(llucode - bmem);
        entete.uheap = (int)(lluheap - bheap);
        entete.urest = (int)(econs   - bnumb);

        entete.bllm3 = bllm3;
        entete.bcode = bcode;
        entete.bheap = bheap;
        entete.bnumb = bnumb;
        entete.bfloat= bfloat;
        entete.bvect = bvect;
        entete.bstrg = bstrg;
        entete.bsymb = bsymb;
        entete.bcons = bcons;

        if (LLWRITE(fd, (char *)&entete, sizeof(struct LLENTETE))
                                    != sizeof(struct LLENTETE)) {
                                                    /* header */
#if defined(LL_ANSI_FILES)
                fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                errreturn(nom, 1);
        }
        if ((LLWRITE(fd, bllm3, entete.sllm3)) != entete.sllm3) {
                                                    /* variables LLM3 */
#if defined(LL_ANSI_FILES)
                fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                errreturn(nom, 1);
        }
        if ((LLWRITE(fd, bmem, entete.ucode)) != entete.ucode) {
                                                    /* using code  */
#if defined(LL_ANSI_FILES)
                fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                errreturn(nom, 1);
        }

        if ((LLWRITE(fd, bheap, entete.uheap)) != entete.uheap) {
                                                    /* using heap */
#if defined(LL_ANSI_FILES)
                fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                errreturn(nom, 1);
        }
        if ((LLWRITE(fd, bnumb, entete.urest)) != entete.urest) {
                                                    /* lisp areas */
#if defined(LL_ANSI_FILES)
                fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                errreturn(nom, 1);
        }
        if ((LLWRITE(fd, btbin, entete.corstbin)) != entete.corstbin) {
                                                    /* TCONS bits */
#if defined(LL_ANSI_FILES)
                fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                errreturn(nom, 1);
        }

#if defined(LLSTACK)
        if ((LLWRITE(fd,savsp,(int)(bstack-savsp))) != (int)(bstack-savsp)) {
                                                       /* lisp stack*/
#if defined(LL_ANSI_FILES)
                fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                errreturn(nom, 1);
        }
#endif  /* LLSTACK */

#if defined(LL_ANSI_FILES)
        if (fclose(fd) == EOF)
#else   /* LL_ANSI_FILES */
        if (close(fd) < 0)
#endif  /* LL_ANSI_FILES */
                errreturn(LLSYSNAME,1);
        return(0);
}

/**********
  standard LL Restore-core
***********/
#define MSGCORE() \
        fprintf(stderr, "%s: not a compatible core image: \"%s\"\r\n", \
                LLSYSNAME, nom)
#define ERRCORE(_msg) \
        fprintf(stderr, "%s: %s\r\n", LLSYSNAME, _msg); \
        flag=1
#define ERRSIZE(_size) \
        fprintf(stderr, "%s: the size in core is : %u\n\r", LLSYSNAME,_size)

#if defined(LL_ANSI_FILES)
int LLREAD(FILE *fd, char *where, int length) {
        /* printf("LLREAD:  %d %x  %x \r\n", fd, where, length); */
        return((int)fread(where, 1, length, fd));
}
#else   /* LL_ANSI_FILES */
int LLREAD(int fd, char *where, int length) {
        /* printf("LLREAD:  %d %x  %x \r\n", fd, where, length); */
        return(read(fd, where, length));
}
#endif  /* LL_ANSI_FILES */

int
getsize_from_llcore(char *nom) {
#if defined(LL_ANSI_FILES)
        FILE    *fd;

        if ((fd = fopen(nom, "rb")) == NULL)
#else   /* LL_ANSI_FILES */
        int fd;

        if ((fd = open(nom, 0)) == -1)
#endif  /* LL_ANSI_FILES */
                return(1);

        if (LLREAD(fd, (char *)&entete, sizeof(struct LLENTETE))
           != sizeof(struct LLENTETE)) {
                                                  /* read header */
#if defined(LL_ANSI_FILES)
                (void)fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                strcpy(entete.idlelisp,"");
        }
        if (strncmp(entete.idlelisp, ID, 12)) {    /* identification string*/
                fprintf(stderr, "%s: \"%s\" is not a core image\r\n",
                        LLSYSNAME, nom);
#if defined(LL_ANSI_FILES)
                (void)fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                if ((prtmsgs == 0) || (*prtmsgs == 0) || (**prtmsgs) == 0)
                        out (-1);
                return(1);
        }
        {
                sstack = entete.corsstack;
                scode  = entete.corscode;
                sheap  = entete.corsheap;
                snumb  = entete.corsnumb;
                sfloat = entete.corsfloat;
                svect  = entete.corsvect;
                sstrg  = entete.corsstrg;
                ssymb  = entete.corssymb;
                scons  = LLSCONS  * KPTR * 16;    /* unit=8K CONS */
                scons  += LLUCONS * PTR * 64;     /* unit=packet of 32 CONS*/
                if (entete.corscons > scons)
                        scons  = entete.corscons;
#if defined(LL_ANSI_FILES)
                        (void)fclose(fd);
#else   /* LL_ANSI_FILES */
                        close(fd);
#endif  /* LL_ANSI_FILES */
        }
        return(0);
}

int
corest(char *nom) {
#if defined(LL_ANSI_FILES)
        FILE    *fd;

        if ((fd = fopen(nom, "rb")) == NULL)
#else   /* LL_ANSI_FILES */
        int fd;

        if ((fd = open(nom, 0)) == -1)
#endif  /* LL_ANSI_FILES */
                return(1);

        if (LLREAD(fd, (char *)&entete, sizeof(struct LLENTETE))
           != sizeof(struct LLENTETE)) {
                                                  /* read header */
#if defined(LL_ANSI_FILES)
                (void)fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                strcpy(entete.idlelisp,"");
        }
        if (strncmp(entete.idlelisp, ID, 12)) {     /* identification string */
                fprintf(stderr, "%s: \"%s\" is not a core image\r\n",
                        LLSYSNAME, nom);
#if defined(LL_ANSI_FILES)
                (void)fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                if ((prtmsgs == 0) || (*prtmsgs == 0) || (**prtmsgs) == 0)
                        out (-1);
                return(1);
        }
        {
                int flag=0;
                if (strncmp(entete.stamp, STAMP, 4)) { /* rigth stamp */
                        ERRCORE("Bad stamp");
                }
                if (entete.corsstack != sstack) {     /* fixed sizes  */
                        ERRCORE("Bad STACK size");
                        ERRSIZE(entete.corsstack / KPTR);
                }
                if (entete.corscode  != scode) {
                        ERRCORE("Bad CODE size");
                        ERRSIZE(entete.corscode / KOCTET);
                }
                if (entete.corsheap  != sheap) {
                        ERRCORE("Bad HEAP size");
                        ERRSIZE(entete.corsheap / KOCTET);
                }
                if (entete.corsnumb  != snumb) {
                        ERRCORE("Bad NUMBER size");
                        ERRSIZE(entete.corsnumb / KPTR);
                }
                if (entete.corsfloat != sfloat) {
                        ERRCORE("Bad FLOAT size");
                        ERRSIZE(entete.corsfloat / (KPTR * 2));
                }
                if (entete.corsvect  != svect) {
                        ERRCORE("Bad VECTOR size");
                        ERRSIZE(entete.corsvect / (KPTR * 2));
                }
                if (entete.corsstrg  != sstrg) {
                        ERRCORE("Bad STRING size");
                        ERRSIZE(entete.corsstrg / (KPTR * 2));
                }
                if (entete.corssymb  != ssymb) {
                        ERRCORE("Bad SYMBOL size");
                        ERRSIZE(entete.corssymb / (KPTR * 8));
                }
                if (entete.corscons  >  scons) {     /* too big ? */
                        ERRCORE("CONS size too low");
                        ERRSIZE(entete.corscons / (KPTR * 16));
                }
                if ((flag==0) &&
                    (entete.bllm3   != bllm3)) {    /* begin LLM3 */
                        ERRCORE("Bad LLM3 address");
                }
                if (flag == 1) {
                        MSGCORE();
#if defined(LL_ANSI_FILES)
                        (void)fclose(fd);
#else   /* LL_ANSI_FILES */
                        close(fd);
#endif  /* LL_ANSI_FILES */
                        if ((prtmsgs == 0) || (*prtmsgs == 0) || (**prtmsgs)
                            == 0)
                                out (-1);
                        return(1);
                }
        }

        if ((LLREAD(fd, bllm3, entete.sllm3)) != entete.sllm3) {
                                                    /* variables LLM3 */
#if defined(LL_ANSI_FILES)
                (void)fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                errreturn(nom, 1);
        }

        if ((LLREAD(fd, bmem, entete.ucode)) != entete.ucode) {
                                                    /* using code */
#if defined(LL_ANSI_FILES)
                (void)fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                errreturn(nom, 1);
        }

        if ((LLREAD(fd, bheap, entete.uheap)) != entete.uheap) {
                                                    /* using heap */
#if defined(LL_ANSI_FILES)
                (void)fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                errreturn(nom, 1);
        }

        if ((LLREAD(fd, bnumb, entete.urest)) != entete.urest) {
                                                    /* lisp areas */
#if defined(LL_ANSI_FILES)
                (void)fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                errreturn(nom, 1);
        }
        if ((LLREAD(fd, btbin, entete.corstbin)) != entete.corstbin) {
                                                    /* TCONS bits */
#if defined(LL_ANSI_FILES)
                (void)fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                errreturn(nom, 1);
        }

#if defined(LLSTACK)
        if ((LLREAD(fd,savsp,(int)(bstack-savsp))) != (int)(bstack-savsp)) {
                                                   /* stack lisp */
#if defined(LL_ANSI_FILES)
                (void)fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
                errreturn(nom,1);
        }
#endif  /* LLSTACK */

#if defined(LL_ANSI_FILES)
                (void)fclose(fd);
#else   /* LL_ANSI_FILES */
                close(fd);
#endif  /* LL_ANSI_FILES */
        return(0);
}

#endif /* EXECORE */

/**********************************************************

  cline: execute a SHELL command

 **********************************************************/

extern int cchdir(char *s);
extern int ll_system(char *s);

int
cline(char *buff) {
    char *dir;

    if (!strncmp(buff, "cd", 2)) {  /* may be : CD */
            dir = buff + 1;
            while (*++dir == ' ')
                    /* void */ ;
#if defined(LLDOS)
            if ((*dir != '\0') && (dir != buff+2))
                    if (!chdir(dir))      /* cd PATH */
                            return(0);
#else /* LLDOS */
            if (*dir == '\0')
                    cchdir(getenv("HOME"));  /* just cd */
            else if (dir != buff+2)
                    if (!cchdir(dir))        /* cd PATH */
                            return (0);
#endif /* LLDOS */
    }
     unix_stty();
#if defined(LLGHOSTPROC)

    SHM_STAT = -2;

    /* Child always alive ? */
    if (kill(c_pid, 0) < 0) {
            (void)fprintf(stderr,"Child process doesn't exist any more\r\n");
            out(-1);
    }

    /* Prepare to wait for child. */
    (void)signal(SIGINT, wait_function);

    (void)strcpy(SHM_BUFF, buff);
    (void)kill(c_pid, SIGUSR1);
    (void)wait_sig_flag();
#else   /* LLGHOSTPROC */
    ll_system(buff);
#endif  /* LLGHOSTPROC */
    inton();
    lisp_stty();
    return((int)0);
}

#if !defined(LLGHOSTPROC)

extern int llgetchan(int f);

int
ll_system(char *s) {
#if defined(CYGWIN) || defined(LLDOS)
        return(system(s));
#else /* CYGWIN */
        int status, pid, w;

#if defined(LLVFORK)
        pid = vfork();
#else  /* LLVFORK */
        pid = fork();
#endif /* LLVFORK */
        if (pid == 0) {
                {
                        int f;
                        for (f = 0;f < LLMAXCHAN; f++)
                                /* we close all open channels */
                                if (llgetchan(f) > 2)
                                        (void)close(llgetchan(f));
                }
                int_std();
                execl("/bin/sh", "sh", "-c", s, (char *)NULL);
                _exit(127);
        }
        int_ign();
        while ((w = wait(&status)) != pid && w != -1)
                ;
        if (w == -1)
                status = -1;
        return(status);
#endif /* CYGWIN */
}
#endif  /* LLGHOSTPROC */

/* runtime
   =======
   Return spend time since begining of job in sec. (float)
   This value depends of system.
*/

#if !defined(LLTIMEUNIT)
#define LLTIMEUNIT HZ
#endif /* LLTIMEUNIT */

#if defined (LLDOS)
double
runtime(void) {
        double  f;

        f  = (double)clock() - StartTime;
#if defined(CLOCKS_PER_SEC)
        f /= (double)CLOCKS_PER_SEC;
#else
        f /= (double)CLK_TCK;
#endif
        return(f);
}
#endif /* LLDOS */

#if !defined (LLDOS)
double runtime(void) {
        static double nb_tic = 0;

        if (nb_tic == 0) {
                nb_tic = sysconf(_SC_CLK_TCK);
        }

        struct tms timebuffer;
        times(&timebuffer);
        return (timebuffer.tms_utime / nb_tic); /* (float)LLTIMEUNIT); */
}
#endif /* LLDOS */

/* sleep
   =======
   sleep n sec. (float)
   Unfornuatly, Unix/Posix can't sleep less than 1 sec.
*/

void
cdleep(double f) {
        unsigned seconds;
        seconds = (unsigned)f;
        sleep(seconds);
}

void
csleep(double f) {
        cdleep(f);
}

/* cdate
   =====
   Donne la date courante
*/

void
tr_date(time_t unix_date, long *ll_date) {
        struct tm decoded;

        decoded = *localtime(&unix_date);
        ll_date[0] = decoded.tm_year + 1900;
        ll_date[1] = decoded.tm_mon + 1;
        ll_date[2] = decoded.tm_mday;
        ll_date[3] = decoded.tm_hour;
        ll_date[4] = decoded.tm_min;
        ll_date[5] = decoded.tm_sec;
        ll_date[7] = decoded.tm_wday == 0 ? 7 : decoded.tm_wday;
}

void
cdate(long *date_lisp) {
    tr_date(time(0), date_lisp);
}

/* setalarm
   ========
   start an alarm after n sec. (float)
*/

double
setalarm(double f) {
        register int secs;
        extern int alarm_on;

        secs = (long) f;
        alarm_on = f == 0. ? 0 : 1;
        if ((secs == 0) && (f != 0.))
                secs = 1;               /* pour l'arrondi */
        return((double)alarm(secs));
}

/* getenvrn
   ========
   Extract value of a SHELL variable, in a string buffer
   given as parameter.
   Return length of result.
*/

int
getenvrn(char *nom, char *buff) {
        char *u = getenv(nom);

        nom = u;

        if (u != NULL) {
                while ((*buff++ = *u++) != 0)
                        ;
                return (int)(u-nom-1);
        }
        return (0);
}

/* out routine */
void
out(int code) {
#if defined(LLGHOSTPROC)
        /* Kill child processes. */
        if (c_pid) {
#if defined(LLWILDCARD)
                if (shm_key > 0) {
                        SHM_STAT = -1;
                        (void)signal(SIGINT, wait_function);
                        if (kill(c_pid, SIGUSR1)) {
                             (void)fprintf(stderr,
                                           "Can't kill child process.\r\n");
                     }
                }
#endif  /* LLWILDCARD */

                if (kill(c_pid, SIGQUIT)) {
                        (void)fprintf(stderr,
                                      "Can't kill child process.\r\n");
                        (void)kill(c_pid, SIGKILL);
                }
        }

        /* Erase shared segment. */
        if (shm_key > 0) {
                if (shmctl(shm_key, IPC_RMID, 0)) {
                        (void)fprintf(stderr,
                                      "Can't close shared memory\r\n");
                }
        }

#endif  /* LLGHOSTPROC */

        llrm_template();         /* reinit template id cloadp */
        unix_stty();
        exit(code);              /* and exit with return code */
}

void
outner(void) {
        /* normal exit from LL */
        out(0);
}

void
outwer(void) {
        /* anormal exit from LL */
        out(-1);                 /* UNIX convention */
}

void
outcore(void) {
        perror("Le-Lisp : restore-core : ");
        out(-1);
}

/* Unix usage of lelispbin */

char *
usage(void) {
        fprintf(stderr,
                "Usage: %s [-s] [file] [-r file] [number] \
[-stack number] [-code number] [-heap number] [-float number] \
[-vector number] [-string number] [-symbol number] [-cons number] \
[-v] \r\n",
                lelispbin);
        out(-1);
        return((char *)-1);
}

void
zonevide(char *s) {
        fprintf(stderr, "Empty %s zone\r\n", s);
        out(-1);
}

int
cchdir(char *strg) {
#if !defined(LLWILDCARD)

        return(llglobb(strg, "", 0));

#else   /* LLWILDCARD */

#if defined(LLGHOSTPROC)

        if (chdir(strg))
                return(-1);
        SHM_STAT = 0;

        /* Child always alive ? */
        if (kill(c_pid, 0) < 0) {
#if defined(LLFOREIGN)
                (void)fprintf(stderr, "Child process doesn't exist any more\r\n");
#else   /* LLFOREIGN */
                (void)fprintf(stderr, "Processus fils absent.\r\n");
#endif  /* LLFOREIGN */
                out(-1);
        }

        /* Prepare to wait for child. */
        (void)signal(SIGINT, wait_function);

        (void)strcpy(SHM_BUFF, strg);
        (void)kill(c_pid, SIGUSR1);
        (void)wait_sig_flag();

        return(SHM_STAT);

#else   /* LLGHOSTPROC */

        return(chdir(strg));

#endif  /* LLGHOSTPROC */

#endif  /* LLWILDCARD */

}

char *chome(void) {
        return(getenv("HOME"));
}

long cmoinsun(void) {
    return(-1);
}

double cmulmulf(double nf) {
        return (nf*nf);
}

/*   a little callextern test */
double
ctest(char *strg, double nf, int ni, long *vect) {
        long i;
/*
        printf("la chaine est \"%s\"\r\n", strg);
        printf("le flottant est %e\r\n", nf);
        printf("l'entier est %d\r\n", ni);
        printf("le vecteur contient vect[0]=%8x,vect[1]=%8x\r\n",
               vect[0], vect[1]);
*/
        (void)strg;

        i = vect[0]; vect[0] = vect[1]; vect[1] = i;
        return(nf*ni);
}

#if !defined(LLDOS)
/* This code describe wildcarding mecanism as on BSD4.2.
   The firt call create a sub-process CSHELL,
   the other times, we just pipe names to expand,
   and return expansed string in LL
  Auteur : Michel DANA
  Date   : 26 Aout 1988
  Modif  : 31 Aout 1988 pour adaptation SYSTEM 5
  Modif  : 1992 : no more useful because of the limited LLMAXLINE...
 */


#define LLMAXLINE 4096
int
llglobb(char *ll_in_string, char* ll_out_string, int maxline) {
#if defined(LLGHOSTPROC)
        /* Child always alive ? */
        if (kill(c_pid, 0) < 0) {
           (void)fprintf(stderr, "Child process doesn't exist any more\r\n");
           out(-1);
        }

        SHM_STAT = maxline;

        /* Prepare to wait for child. */
        (void)signal(SIGINT, wait_function);
        sig_flag = 0;

        switch(maxline) {

        case -2 : {     /* cline. */
                (void)strcpy(SHM_BUFF, ll_in_string);
                (void)kill(c_pid, SIGUSR1);
                (void)wait_sig_flag();
                break;
        }

        case -1 : {     /* Stop process. */
                (void)kill(c_pid, SIGINT);
                (void)wait_sig_flag();
                break;
        }

        case  0 : {     /* Chdir. */
                if (chdir(ll_in_string)) {
                        inton();
                        return(-1);
                }

                /* Child must also change directory. */
                (void)strcpy(SHM_BUFF, ll_in_string);
                kill(c_pid, SIGUSR1);
                /* while (sig_flag != 1)
                        ; */
                (void)wait_sig_flag();
                sig_flag = 1;
                break;
        }

        default : {     /* Expand pathnames. */
                (void)strcpy(SHM_BUFF, ll_in_string);
                sig_flag = 0;
                (void)kill(c_pid, SIGUSR1);
                (void)wait_sig_flag();
                (void)strcpy(ll_out_string, SHM_BUFF);
        }

        }

        inton();
        return(SHM_STAT);

#else   /* LLGHOSTPROC */
  static int pipe_in[2],pipe_out[2],first_time=0,pid=0;
  static int incopy, outcopy;
  static char *s;
  static FILE *stream_in, *stream_out;
  static char buff[LLMAXLINE];
  int i;
                                           /* EN */
 if (maxline==0)                           /* chdir */
   {if (chdir(ll_in_string)) return(-1);   /* chdir in same process */
    if (first_time==0) return(0);          /* pas de sous-shell */
    };                                     /* on en reste la */

 if (maxline==-1)                          /* destruction du sous-shell */
   {if (first_time==0)                     /* meme pas cree encore */
      return(0);                           /* on en reste la */
    fclose(stream_out);                    /* on ferme fd vers le sh */
    i=wait(0);                             /* le sous-sh est mort */
    fclose(stream_in);                     /* on ferme le fd venant du sh */
    first_time=0;                          /* on revient a l'etat */
    return(i);};                           /* on en reste la */

 if (first_time==0) {
/* c'est la premiere fois, il y a des choses a initialiser  */
   if (maxline==0)                         /* chdir? */
     return(chdir(ll_in_string));          /* nouvelle directory */
   if (pipe(pipe_in) || pipe(pipe_out))    /* erreur? */
     return(-7);                           /* retour lelisp */
   incopy=dup(0);                          /* copie pour cline .... */
   outcopy=dup(1);                         /* ... redirige par <> dans sh */
   first_time=1;
#if defined(LLVFORK)
   pid=vfork();    /* on forke astucieusement */
#else  /* LLVFORK */
   pid =fork();
#endif /* LLVFORK */
   if (pid<0) return(-8);                  /* erreur? retour lelisp */
   if (pid==0) {   /* je suis le fils  */
      close(pipe_in[1]);                   /* faut pas oublier */
      close(pipe_out[0]);                  /* ces deux inutiles-la */
      dup2(pipe_in[0],0);  /* je reassigne stdin */
      dup2(pipe_out[1],1); /* la meme chose sur stdout */
/*      freopen("/dev/null","w",stderr);  pour ne pas avoir de messages */
                                       /* bizarres en cas d'echec */
      execl ("/bin/sh","sh",(char *)NULL);/* sh existe partout */
 }
   /* le pere maintenant */

   close(pipe_in[0]);
   close(pipe_out[1]);  /* inutile de conserver des descripteurs */
                        /* inutiles */
   stream_in=fdopen(pipe_out[0],"r");
   stream_out=fdopen(pipe_in[1],"w");
   setbuf(stream_out,NULL);  /*pas de bufferisation....*/
   fputs("trap '' 2\n", stream_out);        /* contre les ^C de Lelisp */
   close(incopy);                           /* seul utilise par le fils */
   close(outcopy);
 }

   if (kill((pid_t)pid,0)<0)                      /* le pid, est-il la? */
    {fclose(stream_out);                  /* non, on ferme */
      fclose(stream_in);                   /*  les filedesc */
      first_time=0;                        /* pret a recommencer */
      if (maxline == 0) return(0);         /* chdir?, pas d'erreur */
      return(-9);};                        /* retour Lelisp */

   if (maxline == 0)                       /* chdir, suite */
     {fprintf(                       /* on compose une commande cd */
        stream_out,                        /* vers le sous-sh */
        "cd %s\n",                         /* le template */
        ll_in_string);                     /* la directory */
      return(0);};                         /* on en reste la */

   if (maxline==-2)                        /* on simule cline */
     {int_ign();                           /* prolog de ... */
      unix_stty();                         /* .. cline */
      fprintf                              /* on construit la commande */
        (stream_out,                       /* vers le sous-sh */
         "sh -c 'exec <&%d >&%d; %s'\n",   /* recuperation de ... */
         incopy,                           /*  ... stdin ...*/
         outcopy,                          /*  ... stdout */
         ll_in_string);                    /* la commande-cline */
      fprintf(stream_out,"echo $?\n");     /* imprime exit-status */
      fscanf(stream_in,"%d",&i);           /* recupere exit-status */
      lisp_stty();                         /* epilog de ... */
      inton();                             /* ... cline */
      return(i);};                         /* synchronise' */

   s= & buff[0];
   buff[0]='\0';
   strcat(&buff[0],"echo ll: ");
   strcat(&buff[0],ll_in_string);
   strcat(&buff[0],"\n");
/*   printf("on passe %s \n",&buff[0]); */
   fputs(s, stream_out);
   while (strncmp(s=fgets(buff,maxline,stream_in), "ll: ", 4))
     ;
   s = s + 4;
   (void)strcpy(ll_out_string,s);
   return(strlen(ll_out_string));
#endif  /* LLGHOSTPROC */
}


#if defined(LLGHOSTPROC)
void
child_body(int sig) {
#if !defined(LLWILDCARD)
        static  int     child           = 0;
        static  int     pipe_in[2],
                        pipe_out[2];
        static  char    *s;
        static  FILE    *stream_in,
                        *stream_out;
        static  char    buff[LLMAXLINE];
#endif  /* LLWILDCARD */
        /* Re-initialize SIGUSR1. */
        (void)signal(SIGUSR1, child_body);

        switch(SHM_STAT) {    /* What to do ? */

        case -2 : {     /* cline. */
                SHM_STAT = system(SHM_BUFF);
                break;
        }

#if !defined(LLWILDCARD)

        case -1 : {     /* Stop process. */
                if (child) {
                        (void)fclose(stream_out);
                        SHM_STAT = wait(0);
                        (void)fclose(stream_in);
                        child = 0;
                } else  SHM_STAT = 0;
                break;
        }

#endif  /* LLWILDCARD */

        case  0 : {     /* chdir. */
                if (chdir(SHM_BUFF))
                        SHM_STAT = -1;
#if !defined(LLWILDCARD)
                if (child) {   /* Also for child. */
                        (void)fprintf(stream_out, "cd %s\n", SHM_BUFF);
                }
#endif  /* LLWILDCARD */
                SHM_STAT = 0;
                break;
        }

#if !defined(LLWILDCARD)

        default : {     /* Expand pathnames. */
                if (!child) {

                        /* Initializes and forks process. */
                        if (pipe(pipe_in) || pipe(pipe_out)) {
                                SHM_STAT = -7;
                                return;
                        }
                        child = 1;

                        child = fork();

                        /* Error ? */
                        if (child < 0) {
                                SHM_STAT = -8;
                                return;
                        }

                        /* Child process. */
                        if (child == 0) {

                                /* Closes unused streams. */
                                (void)close(pipe_in[1]);
                                (void)close(pipe_out[0]);

                                /* Reassigns stdin and stdout. */
                                (void)fclose(stdin);
                                (void)fclose(stdout);
                                (void)dup(pipe_in[0]);
                                (void)dup(pipe_out[1]);
                                execl("/bin/sh", "sh", 0);
                        }

                        /* Father process. */

                        /* Closes unused streams. */
                        (void)close(pipe_in[0]);
                        (void)close(pipe_out[1]);

                        stream_in = fdopen(pipe_out[0], "r");
                        stream_out = fdopen(pipe_in[1], "w");

                        /* No bufferisation. */
                        setbuf(stream_out, NULL);

                        /* Against ^C . */
                        (void)fputs("trap '' 2\n", stream_out);
                }

                /* Child present ? */
                if (kill(child, 0) < 0) {
                        (void)fclose(stream_out);
                        (void)fclose(stream_in);
                                Child = 0;
                        If(Shm_STAT == 0) {
                                SHM_STAT = 0;
                                return;
                        }
                        SHM_STAT = -9;
                        return;
                }

                /* Expansion. */
                s = &buff[0];
                buff[0] = '\0';
                (void)strcat(&buff[0], "echo ll: ");
                (void)strcat(&buff[0], SHM_BUFF);
                (void)strcat(&buff[0], "\n");
                (void)fputs(s, stream_out);
                while (strncmp(s = fgets(buff, SHM_STAT, stream_in),
                                "ll: ",
                                4))
                        ;
                s = s + 4;
                (void)strcpy(SHM_BUFF, s);
                SHM_STAT = strlen(SHM_BUFF);

        }       /* default */

#endif  /* LLWILDCARD */

        }       /* switch(SHM_STAT) */

        return;
}

void
exit_child(void) {
        exit(0);
}

#endif  /* LLGHOSTPROC */
#endif  /* LLDOS */

/***************
  HEAP OVNI bug
 ***************
 In case of * HEAP-OVNI *,
 try to dump 1024 bytes from the heap
 or until eheap if < 1024.
 Dump start at offset -128 from the last good object on the heap.
*/

#define llprdump0(fmt)      fprintf(stderr, fmt)
#define llprdump1(fmt, ptr) fprintf(stderr, fmt, ptr)

int
llovni(unsigned long bheapaddr,
       unsigned long cheapaddr,
       unsigned long eheapaddr,
       unsigned long obj_adr) {
        unsigned long bdump;
        unsigned long edump;
        unsigned long i,j;

        /*
         * try to dump 1024 bytes of the heap
         or until eheapaddr in < 1024
        */

        bdump = (obj_adr - 128);
        if ((eheapaddr - obj_adr - 128 > 1024))
          edump = bdump + 1024;
        else
          edump = eheapaddr;

        llprdump0("\r\nLe-Lisp: * HEAP-OVNI *\r\n");
        llprdump1("BHEAP = 0x%lX\r\n", bheapaddr);
        llprdump1("CHEAP = 0x%lX\r\n", cheapaddr);
        llprdump1("EHEAP = 0x%lX\r\n", eheapaddr);
        llprdump1("Last good object address = 0x%lX\r\n", obj_adr);
        llprdump1("Memory dump from 0x%lX ", bdump);
        llprdump1("to 0x%lX\r\n", edump);

        for (i = bdump; i <= edump; i=i + (7 * sizeof(long))) {
          llprdump1("0x%lX ", i);
          for (j = i ; j < i + (7 * sizeof(long)) ; j = j + sizeof(long)) {
            if (j == obj_adr)
              llprdump0("*");
            else
              llprdump0(" ");
#ifdef LLDOS
            llprdump1("%08lX ", (*((long *)(size_t)j)));
#else /* LLDOS */
            llprdump1("%08lX ", (*((long *)j)));
#endif /* LLDOS */
          }
          llprdump0("\r\n");
        }

        llprdump0("Le-Lisp : End of memory dump.\r\n");
        return (edump - bdump);
}
