#if     !defined(lint)
static  char *sccsid = "@(#)nt386.c     (c) ELIGIS, C. Jullien 2009/01/17";
#endif

/*
 *      nt386.c :       
 */

#if     defined(_MSC_VER) && (_MSC_VER >= 1400)
#define _CRT_SECURE_NO_DEPRECATE        1
#define _CRT_NONSTDC_NO_DEPRECATE       1
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <sys\types.h>
#include <sys\stat.h>
#include <dirent.h>
#include <direct.h>

#define MAXTOKEN        128

extern  void            usage(void);
#if     defined(LL1524)
extern  void            tryaccess(int flag);
#endif
extern  int             fprobe(char *name);
extern  int             fdele(char *name);

static  int             NT386Path(const char *OldPath, char **NewPath);
extern  int             NT386stat(const char *PathName, struct _stat *Mode);
extern  int             NT386chdir(char *path);
extern  int             NT386remove(char *name);
extern  int             NT386rename(char *name, char *name2);
extern  FILE            *NT386fopen(const char *fname, char *fmode);
extern  char            *NT386getcwd(char *pathbuff, int length);
extern  char            *NT386getenv(char *env);
extern  DIR             *NT386opendir(char *dirname);

extern  int             WinFlag;      /* 0 = text, 1 = windows    */
extern  int             llconsole;    /* create a console         */
extern  int             lliconic;     /* start iconified          */
extern  int             llfixed;      /* start iconified          */
extern  int             lldebug;      /* start in debug mode      */
extern  char            llgeometry[]; /* start with geometry      */

/*
 *      For the bignum, force to include the kern library.
 */

extern  void    BnAssign();
static  void    (*bignum)() = BnAssign;

/*
 *      The function to normalize a pathname.
 */

#define FAT_NAME_MAX    7       /* 8 - 1 ! */
#define FAT_EXT_MAX     2       /* 3 - 1 ! */

#if     !defined(MAX_PATH)
#define MAX_PATH        256
#endif  /* MAX_PATH */

int     long_filename_flag = 0;

short
set_long_filename(short flag) {
        int     oldflag = long_filename_flag;

        if (flag == 1 || flag == 0)
                long_filename_flag = flag;

        return((short)oldflag);
}

static  int
NT386Path(const char *OldPath, char **NewPath) {
        char            *p1;
        char            *p2;
        static  char    PathBuf[MAX_PATH];
        char            FoundExt= 0;
        register int    i;
        register int    j;

        /*
         *      Initialisation
         */

        *NewPath = PathBuf;

        if (long_filename_flag) {
                strcpy(&PathBuf[0], OldPath);
                return(0);
        }

        for (p1 = (char *)OldPath, p2 = PathBuf, i = FAT_NAME_MAX, j = 0;
             *p1 && j < MAX_PATH;
             p1++, j++) {
                switch(*p1) {

                case '/' :
                case '\\':
                        *p2++ = '\\';
                        FoundExt = 0;
                        i = FAT_NAME_MAX;
                        break;

                case '.' :
                        if (!(FoundExt++)) {
                                *p2++ = *p1;
                                i = FAT_EXT_MAX;
                        } else  if (*(p1 - 1) == '.')
                                        *p2++ = *p1;
                        break;

                default  :
                        if (i >= 0)
                                *p2++ = *p1;
                        i--;

                }
        }
        if (*(p2-1) == '\\')
                *--p2 = '\0';
        else    *p2 = '\0';

        /* That's ok */
        return(0);
}

/*
 *      This is a redefinition of the getcwd function in order to have
 *      path in lower case.
 */

char    *
NT386getcwd(char *path, int length) {
        char    *code;

        code = _getcwd(path, length);
        if (long_filename_flag == 0)
                (void)strlwr(path);
        if (code && (path[ strlen(path) - 1 ] != '\\'))
                (void)strcat(path, "\\");

        return(code);
}

char    *
NT386getenv(char *env) {
        char    *p = getenv(env);

        if (p)
                return(p);
        else    if (strcmp(env, "HOME") == 0)
                        return("\\");
        else    if (WinFlag && (strcmp(env, "TERM") == 0))
                        return("windows");
        else    if (WinFlag && (strcmp(env, "BITMAP") == 0))
                        return("windows");
        else    return(NULL);
}

/*
 *      This is a redifiniton of the remove function in order to manage
 *      filenames which are too long for Windows NT.
 */

int
NT386remove(char *name) {
        int     ret = remove(name);

        if (ret) {
                char    *name2;

                (void)NT386Path(name, &name2);
                ret = remove(name2);
        }

        return(ret);

}

/*
 *      This is a redifiniton of the rename function in order to manage
 *      filenames which are too long for Windows NT.
 */

int
NT386rename(char *name1, char *name2)
{
        int     ret;

        if (!fprobe(name2))
                if (fdele(name2))
                        return(-1);

        ret = rename(name1, name2);

        if (ret == -1) {
                char    *old, *new;

                (void)NT386Path(name1, &new);
                old = malloc(strlen(new) + 1);
                if (old == NULL)
                        return(-1);
                (void)strcpy(old, new);
                (void)NT386Path(name2, &new);
                ret = rename(old, new);
                (void)free(old);
        }

        return(ret);
}

/*
 *      This a redefinition of stat in order to manage backslash in
 *      end of directory path.
 */

int
NT386stat(const char *PathName, struct _stat *Mode)
{
        char    *name   = NULL;
        char    *p      = (char *)PathName;
        int     last    = (int)strlen(PathName);
        int     ret;

        if (last == 0)
                return(-1);
        else    --last;

        if (last && (p[last] == '\\' || p[last] == '/') && p[last-1] != ':') {
                p = strdup(PathName);
                if (p == NULL) {
                        (void)fprintf(stderr, "Error in NT386stat : no more memory\r\n");
                        return(-1);
                }
                p[last] = '\0';
        }

        ret = _stat(p, Mode);

        if (ret) {
                (void)NT386Path(p, &name);
                ret = _stat(name, Mode);
        }

        if (p != PathName)
                (void)free(p);

        return(ret);
}

/*
 *      This is a redefinition of the chdir function in order to manage
 *      device.
 */

int
NT386chdir(char *path)
{
        static  char    buff[ 256 ];
        int             i = 0;
        size_t          len;

        if (path[ 1 ] == ':') {
                static  char    dsk[] = "X:";

                dsk[ 0 ] = path[ 0 ];

                if (_chdir(dsk) == -1)
                        return(-1);
                i = 2;
        }
        (void)strncpy(buff, &path[ i ], 256);
        buff[ 255 ] = '\000';

        len = strlen(buff) - 1;

        if (len && ((buff[ len ] == '\\') || (buff[ len ] == '/')))
                buff[ len ] = '\0';

        if (buff[ 0 ])
                if (!_chdir(buff))
                        return(0);
                else    {
                        char    *name;
                        (void)NT386Path(buff, &name);
                        return(_chdir(name));
                }

        return(0);
}

DIR     *
NT386opendir(char *dirname)
{
        char    *p      = dirname;
        int     last    = (int)strlen(dirname) - 1;
        DIR     *ret;

        if (last && (p[last] == '\\' || p[last] == '/')) {
                p = strdup(dirname);
                if (p == NULL) {
                        (void)fprintf(stderr, "Error in NT386opendir : no more memory\r\n");
                        return((DIR *)0);
                }
                p[last] = '\0';
        }
        ret = opendir(p);

        if (p != dirname)
                (void)free(p);

        return(ret);
}

/*      Maintenant que les includes sont fait, SCODE est une variable !! */

#undef  SCODE
#define SCODE   LLSCODE

extern int SSTACK;      /* en K objets de type pointeurs */
extern int SCODE;       /* en K octets */
extern int SHEAP;       /* en K octets */
extern int SNUMB;       /* en K objets de type entiers */
extern int SFLOAT;      /* K objets de type flottant */
extern int SVECT;       /* K objets de type vecteur */
extern int SSTRG;       /* K objets de type chaine */
extern int SSYMB;       /* K objets de type symboles */
extern int SCONS;       /* 8 K CONS */
extern int UCONS;       /* 32 CONS */
extern int filiz;
extern int filit;
extern int llban;
extern int verbose;
extern int cstack;
extern char *filin;

char    *
gettoken(FILE *fd)
{
        static  char token[ MAXTOKEN ];
        char    *s = (char *)&token[ 0 ];
        int     c;

        do
                if ((c = fgetc(fd)) == EOF)
                        return(NULL);
        while(isspace(c) || (c == '\n'));

        while(!isspace(c) && (c != '\n')) {
                *s++ = (char)c;
                if ((c = fgetc(fd)) == EOF)
                        return(NULL);
        }

        *s = '\000';

        return((char *)&token[ 0 ]);
}

static  char    *
nextarg(FILE *fd)
{
        char    *s;

        if ((s = gettoken(fd)) == NULL)
                (void)usage();

        return(s);
}

#define checkarg(s, val)      (!strcmp(s, val))

static  char    init_file[ MAXTOKEN ];

void
getargs(char *fname)
{
        FILE            *fd;
        char            *s;

        if ((fd = fopen(fname, "r")) == NULL) {
                (void)fprintf(
                        stderr, "Configuration file %s not found.\n", fname);
                return;
        }

        while((s = gettoken(fd)) != NULL) {
                if ((*s >= '0') && (*s <= '9')) {
                        SCONS = atoi(s);
                        continue;
                }
                if (*s == '-') {
                        if (checkarg(s, "-r")) {
                                filit = 1;
                                filin = strcpy(init_file, nextarg(fd));
                                continue;
                        }
                        if (checkarg(s, "-stack")) {
                                SSTACK = atoi(nextarg(fd));
                                continue;
                        }
                        if (checkarg(s, "-code")) {
                                SCODE = atoi(nextarg(fd));
                                continue;
                        }
                        if (checkarg(s, "-heap")) {
                                SHEAP = atoi(nextarg(fd));
                                continue;
                        }
                        if (checkarg(s, "-number")) {
                                SNUMB = atoi(nextarg(fd));
                                continue;
                        }
                        if (checkarg(s, "-float")) {
                                SFLOAT = atoi(nextarg(fd));
                                continue;
                        }
                        if (checkarg(s, "-vector")) {
                                SVECT = atoi(nextarg(fd));
                                continue;
                        }
                        if (checkarg(s, "-string")) {
                                SSTRG = atoi(nextarg(fd));
                                continue;
                        }
                        if (checkarg(s, "-symbol")) {
                                SSYMB = atoi(nextarg(fd));
                                continue;
                        }
                        if (checkarg(s, "-cons")) {
                                SCONS = atoi(nextarg(fd));
                                continue;
                        }
                        if (checkarg(s, "-ucons")) {
                                UCONS = atoi(nextarg(fd));
                                continue;
                        }
                        if (checkarg(s, "-debug")) {
                                lldebug = 1;
                                continue;
                        }
#if     defined(LLSTACK)
                        if (checkarg(s, "-cstack")) {
                                cstack = atoi(nextarg(fd));
                                continue;
                        }
#endif
                        if (checkarg(s, "-iconic")) {
                                lliconic = 1;
                                continue;
                        }
                        if (checkarg(s, "-fixed")) {
                                llfixed = 1;
                                continue;
                        }
                        if (checkarg(s, "-geometry")) {
                                (void)strcpy(llgeometry, nextarg(fd));
                                continue;
                        }
                        if (checkarg(s, "-console")) {
                                llconsole = 1;
                                continue;
                        }
                        if (checkarg(s, "-s")){
                                llban = 1;
                                continue;
                        }
                        if (checkarg(s, "-v")){
                                verbose = 1;
                                continue;
                        }
#if     defined(LL1524)
                        if (checkarg(s, "-access")) {
                                tryaccess(-1);
                                exit(1);
                        }
#endif
                        (void)usage();
                } else
                        filit = 0;
                        filin = strcpy(init_file, s);
        }

        (void)fclose(fd);
}

/*
 *      This is a redefinition of the fopen function in order to manage
 *      filenames which are too long for NT386.
 */

FILE    *
NT386fopen(const char *filename, char *mode)
{
        FILE    *ret;

        if (long_filename_flag == 0)
                ret = fopen(filename, mode);
        else    ret = NULL;

        if (ret == NULL) {
                char    *name;

                (void)NT386Path(filename, &name);
                ret = fopen(name, mode);

        }

        return(ret);
}

#if     !defined(VM_START)
#define VM_START        0x20000000L     /* start address   */
#endif

#if     !defined(VM_MAX)
#define VM_MAX          0x20000000L     /* maximum allowed */
#endif

#define VM_PAGEMODE     PAGE_EXECUTE_READWRITE  // PAGE_READWRITE

static void
NT386allocerror()
{
        LPVOID lpMsgBuf;

        FormatMessage(
                       FORMAT_MESSAGE_ALLOCATE_BUFFER | 
                       FORMAT_MESSAGE_FROM_SYSTEM | 
                       FORMAT_MESSAGE_IGNORE_INSERTS,
                       NULL,
                       GetLastError(),
                       MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
                       (LPTSTR)&lpMsgBuf,
                       0,
                       NULL
                   );

        MessageBox(NULL, (LPCTSTR)lpMsgBuf, "Error", MB_OK);
        LocalFree(lpMsgBuf);
}

void    *
NT386calloc(size_t num, size_t size)
{
        static  size_t        startmem  = VM_START;
        static  unsigned int  allocflag = 0;

        void    *mem;

        if (allocflag)
                return((void *)NULL);
        else    allocflag++;

        size = size * num;

        mem  = (void *)VirtualAlloc(
                                     (LPVOID)startmem,
                                     VM_MAX,
                                     MEM_RESERVE,
                                     VM_PAGEMODE
                                 );

        if (mem == NULL) {
                DWORD   code = GetLastError();
                char    msg[ 128 ];
                sprintf(msg, "VirtualAlloc-1 error %u (0x%x)", code, code);

                NT386allocerror();
                MessageBox(NULL, msg, "Le-Lisp error", MB_OK);
                return(NULL);
        }

        mem = (void *)VirtualAlloc(
                                    (LPVOID)startmem,
                                    size,
                                    MEM_COMMIT,
                                    VM_PAGEMODE
                                );

        if (mem == NULL) {
                DWORD   code = GetLastError();
                char    msg[ 128 ];
                sprintf(msg, "VirtualAlloc-2 error %u (0x%x)", code, code);

                NT386allocerror();
                MessageBox(NULL, msg, "Le-Lisp error", MB_OK);
                return(NULL);
        }

        (void)memset(mem, 0, size);

        return(mem);
}
