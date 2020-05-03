/*      Liste des conditionnelles de compilation C :
        ============================================

        Les types et sous-types de syste`mes :

              S5                 : UNIX System V
                                 :       par defaut: release 2 ou 3
                   S5R4          :       release 4

                   SPS9          :       sous-type Ridge SPS9
                   SPS7          :       sous-type SPS7 SMX 5.1
                   CADMUS        :       sous-type Cadmus
                   UNIGRAPH      :
                   MACAUX        :
                   IBMRT         :

                   __STDC__      : Ansi C (obligatoire pour les .h)
                   LLPOSIX       : UNIX - librairies POSIX
                   _POSIX_SOURCE :        (obligatoire pour les .h)

              BSD4x              : UNIX System Berkeley
                   BSD41         :    de type 4.1
                   BSD42         :    de type 4.2
                     SUNOS40     :       sous-type SunOS4.x/SunOS3.x

        OS2                : Le systeme OS2 (Ce n'est pas un systeme UNIX)

  Les autres options fournies a` la compilation C

        variables: [-D...=...]
              NBSYST  :       nume'ro du syste`me a` cre'er
              FILEINI :       nom du fichier startup.
                                 defaut= ../llib/startup.ll
              LLSYSNAME:      nom du syste`me utilisant lelisp.c.
                                 defaut= Le-Lisp
              LLPAGESIZE:     la taille d'une page me'moire.
                                 defaut=1024
              LLTIMEUNIT:     fre'quence de l'horloge.
                                 defaut=HZ sur S5
              OVERLAYSIZE:    valeur de la zone dans laquelle la zone
                               DATA peut avoir bouger apres un RESTORE-CORE.
                                 defaut=96 sur RS6000
        flags: [-D...]
              FILIT   :       indicateur de fichier initial.
              LLBAN   :       indicateur de pre'sence de bannie`re.
              LLFOREIGN :     les messages sont en Breton! defaut=1
              EXECORE :       L'image me'moire est un exe'cutable (a.out).
                                 defaut=0
              CLOAD   :       loader dynamique ou non.
                                 defaut= CLOAD= not(S5)
              NOCLOAD :
              ITINREAD:       surveille les IT dans la lecture d'1 car.
                                 defaut=BSD
              MULTIPLECLOAD:  charger dynamiquement plusieurs fois de
                               suite le meme fichier. defaut=0
              LLFOREGROUND:   flag d'utilisation du pre'dicat forground.
                                 defaut=BSD
              LLVFORK :       un fork economique.
                                 defaut=BSD
              LLSHARED:       indique la me'moire partage'e.
                                 defaut=BSD||S5=not(OS2)
        LLGHOSTPROC:    permet de forker le process LL avant d'allouer
                        les zones LL.
                          defaut=0
              LLWILDCARD:     pour le nouveau WILDCARD ecrit en C qui
                               n'exploite pas SHELL, on n'utilise plus
                               de buffer interne.
                                 defaut=1 (tjrs vrai)
        LLSTACK:        pour les portages qui necessitent une pile
                        specifique a Le-Lisp (tous les 386).
                          defaut=
              LLCOERCESIGNAL: pour les signatures particulieres de signal()
                                 defaut=0
              LLCOERCEBRK:    pour les signatures particulieres de brk()
                                 defaut=0
*/

/*****************************************************

        Jeu de definitions et conditionnelles

 *****************************************************/
/*      Les constantes du systeme
        -------------------------  */

#if     defined( _MSC_VER ) && (_MSC_VER >= 1400)
#define _CRT_SECURE_NO_DEPRECATE        1
#define _CRT_NONSTDC_NO_DEPRECATE       1
#endif

#if     defined(_MT)
#define ILM_REENTRANT
#define _REENTRANT
#endif

/* le fichier d initialisation */
#if     !defined( FILEINI )
#define FILEINI "../llib/startup.ll"
#endif  /* FILEINI */

/* 0 = fichier initial, 1 = core */
#define FILIT 0

/* 0 = banniere,  1 = silence */
#define LLBAN 0

/*      Parame`tres du syste`me multi-fichiers */
#if     !defined( LLMAXCHAR )
#define  LLMAXCHAR  1024  /* taille d un tampon LLM3 (1024 maxi) */
#endif  /* LLMAXCHAR */

#if     !defined( LLMAXCHAN )
#define  LLMAXCHAN  24    /* nombre de canaux disponibles */
#endif  /* LLMAXCHAN */

/*      Les autres parametres dependants du systeme
        -------------------------------------------  */

/* le numero du systeme */
#if     !defined( NBSYST )

#define NBSYST 74

#endif  /* NBSYST */

/* la taille des pages (obtenu par pagesize(1) ou getpagesize(2) ou
   par la documentation). Doit etre une puissance de 2 >= BIPTR */
#if     !defined( LLPAGESIZE )

#define LLPAGESIZE      4096

#endif  /* LLPAGESIZE */

/* Le systeme : actuellement CAML ou Le-Lisp */
#if     !defined( LLSYSNAME )

#define LLSYSNAME       "Le-Lisp"

#endif  /* LLSYSNAME */

/*      les flags specifiques a un portage
        ----------------------------------  */

#define NOCLOAD

/* # Pour avoir des messages en breton (par defaut) */
#define LLFOREIGN

/* # syst. call:  rename */
#define LLRENAME

/* # nouveau WILDCARD */
#define LLWILDCARD

/* # une pile LL supplementaire */
/* #define LLSTACK */

/* C standard */
#if     defined( __ST_DC__ )
#define __STDC__        1
#endif

/* ANSI C file functions */
#if     !defined( LL_ANSI_FILES )
#define LL_ANSI_FILES   1
#endif

/* POSIX */
#if     !defined( _POSIX_SOURCE )
#define _POSIX_SOURCE
#endif

/* Systeme DOS */
#if     !defined( LLDOS )
#define LLDOS
#endif

/*****************************************************

                Les declarations

 *****************************************************/

/* L indicateur controlant l impression des erreurs systeme */
extern int **prtmsgs;           /* il est dans le save-core ! */

/*****************************************************

                Les includes

 *****************************************************/

#include <sys/types.h>          /* pour tout le monde */
#include <sys/stat.h>           /* pour tout le monde */
#include <stdio.h>              /* pour les entrees sorties */
#include <stdlib.h>             /* pour bibliothe`ques standard */
#include <string.h>             /* pour les chai^nes de caracte`res */
#include <errno.h>              /* pour perror, et save-core */
#include <fcntl.h>              /* pour open et fcntl */
#include <time.h>
#include <signal.h>             /* pour les signaux UNIX */
#include <dirent.h>

/*     Les cas particuliers */
#include <io.h>
#include <direct.h>
#include <winsock.h>

/*      Maintenant que les includes sont fait, SCODE est une variable !! */

#undef  SCODE
#define SCODE   LLSCODE

/*     Fin des cas particuliers  */

/* ***************************************************
                        MACROS  C
   *************************************************** */

/* pour calculer des adresses alignees sur LLPAGESIZE */
#define align(x) (x = ((x+LLPAGESIZE-1)&~(LLPAGESIZE-1)))

/* pour aligner certaines valeurs d adresse en particulier */
#define _llround(x,s) ((((x)-1) & ~((s)-1)) +(s))

/*  l impression des erreurs systeme */
#define errreturn(M,V) { if(**prtmsgs != 0) perror(M) ; return(V); }

#define errreturnarg(M,A,V) { if(**prtmsgs != 0) {char buf[512];strcpy(buf,M);strcat(buf," - ");strcat(buf,A); perror(buf);} ; return(V); }

/* le tres fameux ld -A */

#if     !defined( BIN_LD_A )
/* la valeur par defaut */
#define BIN_LD_A     "/bin/ld -A %s -N -x -T %x -o %s %s -lc"
#endif

/* la structure de readdir */

/* la valeur par defaut */
#if     !defined( READDIR_TYPE )
#define READDIR_TYPE dirent
#endif

/* Le test de repertoire a la POSIX */
#if     !defined( S_ISDIR )
#define S_ISDIR( mode ) (((mode) & _S_IFMT) == _S_IFDIR)
#endif

/* la signature des signaux */
typedef void (*signal_type)(int);

#define SIGNAL(sig,func) signal(sig,func)

/* # pour le repertoire courant */

#define LLGETCWD(s,l) getcwd(s,l)

/* # pour aligner bmem sur LLMAXPAGESIZE ou sur PAGESIZE */

#define LLMAXPAGESIZE 8192

#define LLBMEMALIGN(b) (char *)(((long)b+LLPAGESIZE-1)&~(LLPAGESIZE-1))

/* output length of 31bitfloats */

#define LLPRT31BITS "%g"

/* output length of 64bitfloats */

#define LLPRT64BITS "%g"

/* # max stack size on this system */

#define LLSTACKMAX 1000000

/* # mkdir function */

#define LLMKDIR(p,n) mkdir(p)

/* #  EVLOOP_MAXFDS variable */

        /*
         * FOPEN_MAX is a ISO/IEC 9899:1990 C Language macro that expands to an
         * integral  constant  expression  that  is the minimum number of files
         * that the implementation gurantees can be open simultaneously (p.124)
         */
        
#define LLEVLOOP_MAXFDS FOPEN_MAX

struct NT386stat {
        _dev_t          st_dev;
        _ino_t          st_ino;
        unsigned short  st_mode;
        short           st_nlink;
        short           st_uid;
        short           st_gid;
        _dev_t          st_rdev;
        _off_t          st_size;
        time_t          st_atime;
        time_t          st_mtime;
        time_t          st_ctime;
};

extern  int                     lliconic;
extern  char                    llgeometry[];
extern  long                    alarm( long );
extern  int                     NT386remove( char *name );
extern  int                     NT386rename( char *name1, char *name2 );
extern  FILE    *               NT386fopen( const char *fname, char *fmode );
extern  int                     NT386stat( const char *name, struct NT386stat *buffer );
extern  int                     NT386chdir( char *path );
extern  char    *               NT386getcwd( char *pathbuf, int length );
extern  char    *               NT386getenv( char *env );
extern  int                     NT386puts( char *szText, int nSize );
extern  int                     NT386isatty( int fd );
extern  DIR     *               NT386opendir( char *dirname );
extern  void    *               NT386calloc( size_t num, size_t size );


#define fopen                   NT386fopen
#define remove                  NT386remove
#define rename                  NT386rename
#define calloc                  NT386calloc

#if     !defined( getpid )
#define getpid                  _getpid
#endif

#if     defined( chdir )
#undef  chdir
#define chdir                   NT386chdir
#endif
#if     defined( getcwd )
#undef  getcwd
#define getcwd                  NT386getcwd
#endif
#define getenv                  NT386getenv
#define opendir                 NT386opendir

#define sleep                   DOSsleep

#if     defined( stat )
#undef  stat
#endif

#define stat                    NT386stat

#if     defined( isatty )
#undef  isatty
#endif

#define isatty                  NT386isatty

extern  int                     DOSsleep( long seconds );
extern  char                    DOStyi( void );
extern  int                     DOStys( void );
extern  int                     DOStyo( int c );
extern  int                     DOSputs( char *s, int i );
extern  void                    getargs( char *fname );

/*
   kill n'existe pas sous MSDOS ou OS2. Il devrait exister raise dans une
   version ulterieure!
*/

#define kill( pid, sig )

#define END                     LL_END
#define out                     ll_out

/* Use 'Old' name for sizes */

#define LLOLD_SIZE_NAMES

#if     defined( LLWINDOWS )
#define printf  winprintf
#define fprintf winfprintf
extern  int winprintf(const char *format, ...);
extern  int winfprintf(FILE *stream, const char *format, ...);
#endif
