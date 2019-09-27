#if     !defined(lint)
static  char *sccsid = "@(#)dirent.c    (c) Christian Jullien 2005/11/25";
#endif

/*
 *      NAME
 *              opendir, readdir, telldir, seekdir, rewinddir,
 *              closedir - directory operations.
 *
 *      SYNTAX
 *              #include <dirent.h>
 *
 *              DIR *opendir(filename)
 *              const char *filename;
 *
 *              struct direct *readdir(dirp)
 *              DIR     *dirp;
 *
 *              void rewinddir(dirp)
 *              DIR     *dirp;
 *
 *              int closedir(dirp)
 *              DIR     *dirp;
 *
 *      POSIX EXTENSIONS
 *              long telldir(dirp)
 *              DIR     *dirp;
 *
 *              void seekdir(dirp, loc)
 *              DIR     *dirp;
 *              long    loc;
 *
 *      DESCRIPTION
 *              Read directory entries with POSIX 1003.1 interface.
 *
 *      SEE ALSO
 *              see DIRECTORY(3) for more informations.
 *
 */

/* LINTLIBRARY */

#if     defined(_MSC_VER) && (_MSC_VER >= 1400)
#define _CRT_SECURE_NO_DEPRECATE        1
#define _CRT_NONSTDC_NO_DEPRECATE       1
#endif

#include        <stdio.h>
#include        <string.h>
#include        <errno.h>

#if     defined(__STDC__) || defined(_ISO)
#include        <stdlib.h>
#include        <io.h>
#else
extern  char    *malloc();
#endif

#if     defined(_NT) || defined(WIN23)
#include        <windows.h>
#endif

#if     defined(_OS2)
#define         INCL_DOSMISC
#define         INCL_DOSFILEMGR
#include        <os2.h>
#if     !defined(INCL_16)
typedef ULONG   UCOUNT;
#else
typedef USHORT  UCOUNT;
#endif
static  UCOUNT  count;
#endif

#include        "dirent.h"

#if     defined(MSDOS) && !defined(_DOS)
#define _DOS
#endif

#if     defined(_DOS)
#include        <dos.h>

#if     defined(_MSC_VER) && (_MSC_VER >=700)
#define _USE_DOS_FIND
#endif

#if     defined(__TURBOC__)
#define _USE_DOS_FIND
#endif

#if     defined(__SC__)
#define _USE_DOS_FIND
#endif

#if     !defined(_USE_DOS_FIND)
#if     defined(__STDC__) || defined(_ISO)
static  int     DosFindFirst(char *buf, int attribute, DIR *dp);
static  int     DosFindNext(DIR *dp);
static  void    SYSCALL(unsigned int syscall);
static  void    install(DIR *dp);
static  void    restore(void);
#else
static  int     DosFindFirst();
static  int     DosFindNext();
static  void    SYSCALL();
static  void    install();
static  void    restore();
#endif
#endif

#endif  /* DOS */

#if     defined(FILENAME_MAX)
#define DIR_FILENAME_MAX        FILENAME_MAX    /* # of bytes, ISO file name */
#else
#define DIR_FILENAME_MAX        255
#endif

DIR     *
opendir(const char *dirname)

{
        DIR     *dp;

        dp = (DIR *)malloc(sizeof(DIR));
        if (dp == NULL)
                return(NULL);

        dp->dd_direct = (struct dirent *)malloc(sizeof(struct dirent));
        if (dp->dd_direct == NULL) {
                free(dp);
                return(NULL);
        }

#if     defined(_OS2)
        dp->dd_doshandle = HDIR_CREATE;
#endif

#if     defined(_DOS)
        /*
         *      Obsolete code on MS-DOS ? to be checked !!!
         */

        if ((dirname[1] == ':') && dirname[2] == '\000') {
                dp->dd_path = (char *)malloc(4); /* "C:." */
                (void)strcpy(dp->dd_path, "C:.");
                (void)strcpy(dp->dd_path, "C:");
                dp->dd_path[0] = dirname[0];
        } else  {
                dp->dd_path = (char *)malloc((unsigned)strlen(dirname) + 1);
                (void)strcpy(dp->dd_path, dirname);
        }
#else
        dp->dd_path = (char *)malloc((unsigned)strlen(dirname) + 1);
        if (dp->dd_path == NULL) {
                free(dp->dd_direct);
                free(dp);
                return(NULL);
        }

        (void)strcpy(dp->dd_path, dirname);
#endif

        rewinddir(dp);

        if (dp->status) {
                free(dp->dd_direct);
                free(dp->dd_path );
                free(dp);
                return(NULL);
        }

        return(dp);
}

extern  int     long_filename_flag;

struct  dirent  *
readdir(DIR *dp)
{
        struct dirent *dent = dp->dd_direct;

#if     defined(_OS2)
        UCOUNT  Count = 1;

        if (dp->dd_loc)
                dp->status = DosFindNext(
                                dp->dd_doshandle,
                                &dp->dd_resbuf,
                                (ULONG)sizeof(dp->dd_resbuf),
                                &Count
                           );

        if (dp->status)
                return((struct dirent *)NULL);

        (void)strlwr(strcpy(dent->d_name, dp->dd_resbuf.achName));

#endif  /* _OS2 */

#if     defined(_NT) || defined(WIN23)
        if (dp->dd_loc) {
                if (FindNextFile(dp->dd_hFindFile, &dp->dd_lpffd) != 1)
                        dp->status = 1;
                else    dp->status = 0;
        }

        if (dp->status)
                return((struct dirent *)NULL);

#if     defined(_OEM_CONVERT)
        (void)CharToOem(dp->dd_lpffd.cFileName, dent->d_name);
#else
        strncpy(dent->d_name, dp->dd_lpffd.cFileName, MAXNAMLEN);
        if (long_filename_flag == 0)
                (void)strlwr(dent->d_name);
#endif

#if     defined(_LOWERCASE)
        (void)strlwr(dent->d_name);
#endif
#endif  /* _NT || WIN23 */

#if     defined(_DOS)

        if (dp->dd_loc)
#if     defined(_USE_DOS_FIND)
                dp->status = _dos_findnext((struct find_t *)dp);
#else
                dp->status = DosFindNext(dp);
#endif

        if (dp->status)
                return(NULL);

        (void)strlwr(strcpy(dent->d_name, dp->dd_buf));
#endif  /* _DOS */

        dent->d_ino    = dp->dd_loc++;
        dent->d_namlen = (unsigned short)strlen(dent->d_name);

        return(dent);

}

#if     !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)

long
telldir(DIR *dirp)
{
        return(dirp->dd_loc);
}

void
seekdir(DIR *dirp, long loc)
{
        rewinddir(dirp);
        while((dirp->dd_loc < loc-1) && !dirp->status)
                (void)readdir(dirp);
}

#endif

void
rewinddir(DIR *dp)
{
#if     !(defined(_NT) || defined(WIN23))
        unsigned  int   attribute = I_STD|I_RDO|I_HID|I_DIR;
#endif
        char            buf[ DIR_FILENAME_MAX + 8];
        char            c;

        (void)strcpy(buf, dp->dd_path);
        if (((c = buf[strlen(buf)-1]) != '/') && c != '\\')
                (void)strcat(buf, "\\*.*");
        else    (void)strcat(buf, "*.*");
#if     defined(_OS2)
        count = 1;

        dp->status = DosFindFirst(
                        (char *)buf,
                        (PHDIR)&dp->dd_doshandle,
                        (ULONG)attribute,
                        &dp->dd_resbuf,
                        (ULONG)sizeof(dp->dd_resbuf),
                        (PULONG)&count,
#if     defined(_OS2V1)
                        0L
#else
                        (ULONG)FIL_STANDARD
#endif
                   );

        if (_osmode == DOS_MODE)
                dp->dd_doshandle = HDIR_SYSTEM; /* real mode */
#endif  /* _OS2 */

#if     defined(_NT) || defined(WIN23)
        dp->dd_hFindFile = FindFirstFile(buf, &dp->dd_lpffd);
        if (dp->dd_hFindFile == INVALID_HANDLE_VALUE)
                dp->status = 1;
        else    dp->status = 0;
#endif  /* _NT || WIN23 */

#if     defined(_DOS)
#if     defined(_USE_DOS_FIND)
        dp->status = _dos_findfirst(buf, attribute, (struct find_t *)dp);
#else
        dp->status = DosFindFirst(buf, attribute, dp);
#endif
#endif  /* _DOS */

        dp->dd_loc = 0;
}

int
closedir(DIR *dp)

{
#if     defined(_OS2)
        DosFindClose((HDIR)dp->dd_doshandle);
#endif

#if     defined(_NT) || defined(WIN23)
        FindClose(dp->dd_hFindFile);
#endif

        free(dp->dd_direct);
        free(dp->dd_path );
        free(dp);

        return(0);
}

/*
 *      Old interface with int86 routines (obsolete).
 */

#if     defined(_DOS) && !defined(_USE_DOS_FIND)

#define GETDTA          0x2F00
#define SETDTA          0x1A00
#define FINDFIRST       0x4E00
#define FINDNEXT        0x4F00

#define AX              sys_regs.x.ax
#define BX              sys_regs.x.bx
#define CX              sys_regs.x.cx
#define DX              sys_regs.x.dx
#define DS              seg_regs.ds
#define ES              seg_regs.es

union   REGS    sys_regs;
static  unsigned  int   odp_off;

#if     defined(M_I86CM) || defined(M_I86LM) || defined(M_I86HM) || defined(__COMPACT__) || defined(__MEDIUM__) || defined(__LARGE__)

static  unsigned  int   odp_seg;
struct  SREGS   seg_regs;
#define SYSTEM()                int86x(0x21, &sys_regs, &sys_regs, &seg_regs)
#define getseg(dta)           ((unsigned int)((unsigned long)dta >> 16))
#define getoffset(dta)        ((unsigned int)((unsigned long)dta))
#define setseg(seg, val)      (seg = val)

#else

#define SYSTEM()                int86(0x21, &sys_regs, &sys_regs);
#define getseg(dta)
#define getoffset(dta)        ((unsigned int)dta)
#define setseg(seg, val)

#endif

int
DosFindFirst(buf, attribute, dp)
char    *buf;
int     attribute;
DIR     *dp;
{
        install(dp);
        DX = getoffset(buf);
        DS = getseg(buf);
        CX = attribute;
        SYSCALL(FINDFIRST);
        restore();

        return(AX & 0xFF);
}

int
DosFindNext(dp)
DIR     *dp;
{
        install(dp);
        SYSCALL(FINDNEXT);
        restore();

        return(AX & 0xFF);
}

static  void
SYSCALL(syscall)
unsigned int syscall;
{
        AX = syscall;
        SYSTEM();
}

static  void
install(dp)
DIR     *dp;
{
        SYSCALL(GETDTA);
        odp_off = BX;
        setseg(odp_seg, ES);
        DX = getoffset(dp);
        DS = getseg(dp);
        SYSCALL(SETDTA);
}

static  void
restore()
{
        DX = odp_off;
        setseg(DS, odp_seg);
        SYSCALL(SETDTA);
}

#endif
