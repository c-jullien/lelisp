/*
;;;
;;; llstdio.c:        I/O Interfaces Le-Lisp V15.2 usable on all UNIX.
;;;
;;; $Source: /usr/cvs/lelisp/common/llstdio.c,v $
;;; $Date: 2017/09/23 15:59:21 $
;;; $Revision: 1.17 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------
*/

/********************************************************

        #include and #define

*********************************************************/

#include "Machine.h"
#define ll_closedir closedir
#define ll_readdir readdir
#define ll_opendir opendir

/* error codes */
#define codereturn(v) {                  \
        if (v)                           \
                errreturn(LLSYSNAME, 1); \
        return(0);                       \
        }


/********************************************************

        initialisations of I/O

*********************************************************/

extern int maxchan; /* max number of channels */
extern signal_type out(int code);

/* llstdio: initialisation of multi-files system
   --------------------------------------------- */

void
llstdio(void) {
        maxchan = LLMAXCHAN;
}

/********************************************************

        Functions using tty

*********************************************************/

/* ttyin: read of one character
   ---------------------------- */

static char caractere;

unsigned char
ttyin(void) {
#if     defined(LLDOS)
	int c;
        if (isatty(fileno(stdin))) {
                c = (int)DOStyi();
        } else  {
                c = fgetc(stdin);
                if (c == EOF) {
                        out(0);
                }
	}
        return (unsigned char)c;
#else   /* LLDOS */
#if     defined(ITINREAD) /* alors nous sommes en UNIX */
        /*
        certains UNIX (BSD4.2 en particulier)
        posent un proble`me particulier, car ils restartent
        les I/O interrompues, on fait donc une attente a` l'aide
        d'un select qui surveille stdin et termine sur un signal
        ou sur l'arrive'e d'un caracte`re.
        */

#if defined(CYGWIN)
        fd_set rfds;
        FD_ZERO(&rfds);
        FD_SET(0, &rfds);

        if (select(1, &rfds, 0, 0, 0) < 0) {
                /* interrupted? returns Lelisp */
                return(-1);
        }
#else
        int readfds = 1;

        if (select(1, &readfds, 0, 0, 0) < 0) {
                /* interrupted? returns Lelisp */
                return(-1);
        }
#endif
#endif /* ITINREAD */

        switch (read(0, &caractere, 1)) {
        case 0 :
                /* EOF, exit lelisp   */
                out(0);
        case 1 :
                /* got one character */
                return(caractere);
        default:
                /* error, returns Lelisp  */
                return((unsigned char) -1);
        }
#endif  /* LLDOS */
}

/* ttys: test of one character
   --------------------------- */

#if     defined(LLDOS)
int ttys (signed char *buffer)
#else   /* LLDOS */
char ttys (char *buffer)
#endif  /* LLDOS */
{
#if     defined(LLDOS)
        if (isatty(fileno(stdin)))
                return((int)(*buffer = (char)DOStys()));
        else    return((int)(*buffer = (char)fgetc(stdin)));
#else   /* LLDOS */
        int nchars=0;

        int vfcntl;

        vfcntl = fcntl (0, F_GETFL, nchars);
#if !defined(O_NONBLOCK)
#define O_NONBLOCK O_NDELAY
#endif
        vfcntl |= O_NONBLOCK;
        fcntl (0, F_SETFL, vfcntl);
        nchars = read (0, buffer, 1);
        if (nchars <= 0)
                nchars = -1;
        else
                nchars = 0;
        vfcntl &= ~O_NONBLOCK;
        fcntl (0, F_SETFL, vfcntl);
        return (nchars);
#endif /* LLDOS */
}

/* ttyinstr: read a ligne directly with system
   ------------------------------------------- */

int
ttyinstr (char *buffer, int maxlen) {
        int n;
        int c;

        for (n = 0; n < maxlen; n++) {
                c = ttyin();
                if ((c == '\r') || (c == '\n'))
                        return(n);
                *(buffer + n) = (char)c;
        }
        return(maxlen);
}

/* ttyout: print a string
   ---------------------- */

void
ttyout(int length, char *buffer) {

        long cc = 1;
        long count;

#if     defined(LLDOS)
        for (count = 0; count != length; count += cc) {
                if ((char)((size_t)(buffer+count)) != '\r') {
                        cc = DOSputs(buffer+count, length-count);
                        if (cc < 0)
                                break;
                }
        }
#else /* LLDOS */
        for (count = 0; count != length; count += cc) {
                if ((char)((long)(buffer+count)) != '\r') {
                        cc = write(1, buffer+count, length-count);
                        if (cc < 0)
                                break;
                }
        }
#endif /* LLDOS */
}

/* ttycrlf: print CR/LF
   ---------------------------- */

void
ttycrlf(void) {
           ttyout(2, "\r\n");
}


/********************************************************

        Functions using files

*********************************************************/

/* input buffers */

struct {
        char contents[LLMAXCHAR];
        char *position;
        char *last;
#if     defined(LL_ANSI_FILES)
        FILE *filedesc;
#else   /* LL_ANSI_FILES */
        int filedesc;
#endif  /* LL_ANSI_FILES */
} channels[LLMAXCHAN];


/* inbf: read a line on ascii file
   -------------------------------

   Lit la ligne suivante sur le canal argument.
   La taille de la ligne lue est rendue dans *ptaille.

   Retourne un code condition:
          0: Ok on a une une ligne comple`te
          1: On a rien lu a` cause de EOF
          2: On a lu un de'but de ligne qui de'passe LLMAXCHAR
          3: On a lu la dernie`re ligne du fichier qui ne se termine
             pas par CR/LF
*/

int
inbf(int canal, char *buffer, long *ptaille) {
        int resread;
        char *ficbuff;
        char *ficpos;
        char *ficlast;
        int ncars;

        ncars = 0;
again:
        ficpos = channels[canal].position;
        ficlast = channels[canal].last;
        while ((ncars < LLMAXCHAR) &&
               (ficpos != ficlast) &&
               ((*buffer++ = *ficpos++) != '\n')) {
                ncars += 1;
        }
        if (*(buffer - 1) == '\n') {
                channels[canal].position = ficpos;
                *ptaille = ncars;
                return(0);
        }
        if (ncars == LLMAXCHAR) {
                channels[canal].position = ficpos;
                *ptaille = ncars;
                return(2);
        }
        ficbuff = channels[canal].contents;
#if     defined(LL_ANSI_FILES)
        resread=(int)fread(ficbuff,sizeof(char),LLMAXCHAR,channels[canal].filedesc);
#else   /* LL_ANSI_FILES */
        resread = read (channels[canal].filedesc, ficbuff, LLMAXCHAR);
#endif  /* LL_ANSI_FILES */
        if (resread <= 0) {
                channels[canal].position = channels[canal].contents;
                channels[canal].last = channels[canal].contents;
                if (ncars > 0) {
                        *ptaille = ncars;
                        return(2);
                } else {
                        *ptaille = 0;
                        return(1);
                }
        }
        channels[canal].last = ficbuff + resread;
        channels[canal].position = ficbuff;
        goto again;
}

/* inbfb: read a buffer on binary file
   -----------------------------------

   code condition:
        0: EOF
        1: Ok
*/

int
inbfb(int canal, char *buffer, long *ptaille) {
        int cc;

#if     defined(LL_ANSI_FILES)
        cc = (int)fread(buffer, 1, LLMAXCHAR, channels[canal].filedesc);
#else   /* LL_ANSI_FILES */
        cc = (int)read (channels[canal].filedesc, buffer, LLMAXCHAR);
#endif  /* LL_ANSI_FILES */
        if (cc > 0) {
                *ptaille = cc;
                return(0);
        } else {
                *ptaille = 0;
                return(1);
        }
}

/* inb: read ptaille char. in binary file
   --------------------------------------

   code condition:
        0: EOF
        1: Ok
*/

int
inb(int canal, char *buffer, int length, long *ptaille) {
        int cc;

#if     defined(LL_ANSI_FILES)
        cc = (int)fread(buffer, 1, length, channels[canal].filedesc);
#else   /* LL_ANSI_FILES */
        cc = (int)read (channels[canal].filedesc, buffer, length);
#endif  /* LL_ANSI_FILES */
        if (cc > 0) {
                *ptaille = cc;
                return(0);
        } else {
                *ptaille = 0;
                return(1);
        }
}

/* outf: print a line in a ascii file
   ----------------------------------
*/
#if ! defined(new_errreturn)
#define new_errreturn errreturn
#endif

int
outf(int canal, int length, char *buff) {
#if     defined(LL_ANSI_FILES)
        if ((unsigned long) fwrite(buff,sizeof(char),length,channels[canal].filedesc)!=(unsigned long)length)
#else   /* LL_ANSI_FILES */
        if (write (channels[canal].filedesc, buff, length) != length)
#endif  /* LL_ANSI_FILES */
                new_errreturn ("Le_Lisp : outf1 ", 1);
#if     defined(LL_ANSI_FILES)
        if (fwrite("\n", sizeof(char), 1, channels[canal].filedesc) != 1)
#else   /* LL_ANSI_FILES */
        if (write (channels[canal].filedesc, "\n", 1) != 1)
#endif  /* LL_ANSI_FILES */
                new_errreturn ("Le_Lisp : outf2 ", 1);
        return(0);
}

/* outfl: print line without EOL in ascii file
   -------------------------------------------
*/

int outfl (int canal, int length, char *buff)
{
#if     defined(LL_ANSI_FILES)
        if ((unsigned long) fwrite(buff,sizeof(char),length,channels[canal].filedesc)!=(unsigned long)length)
#else   /* LL_ANSI_FILES */
        if (write (channels[canal].filedesc, buff, length) != length)
#endif  /* LL_ANSI_FILES */
                new_errreturn ("Le_Lisp : outfl ", 1);
        return(0);
}

#if !defined(NBSYST) || ((NBSYST != 33) && (NBSYST != 66) && (NBSYST != 47))

/* llseek: set <chan> channel at position <n1>*<n2>
   ------------------------------------------------
  (uniquement pour des defexterns)
*/

int
llseek(int canal, int n1, int n2) {
#if     !defined(SEEK_SET)
#define SEEK_SET 0
#endif  /* SEEK_SET */

#if     defined(LL_ANSI_FILES)
        if (fseek(channels[canal].filedesc, (long)n1*(long)n2, SEEK_SET))
#else   /* LL_ANSI_FILES */
        if (lseek(channels[canal].filedesc,(long)n1*(long)n2, SEEK_SET) != -1)
#endif  /* LL_ANSI_FILES */
                errreturn ("Le_Lisp : llseek ", 1);
        return(0);
}
#endif

/* infile: open a file for read
   ----------------------------
*/

int
infile(int canal, char *buff) {
#if     defined(LL_ANSI_FILES)
        if ((channels[canal].filedesc = fopen(buff, "r")) != NULL) {
#else   /* LL_ANSI_FILES */
        if ((channels[canal].filedesc = open(buff, 0)) != -1) {
#endif  /* LL_ANSI_FILES */
                channels[canal].position = channels[canal].contents;
                channels[canal].last = channels[canal].contents;
                return(0);
        }
        errreturn(buff, 1);
}

/* infile: open a file for print
   -----------------------------
*/

int
oufile(int canal, char *buff) {
#if     defined(LL_ANSI_FILES)
        FILE    *fd;

        fd = fopen(buff, "w"); /* Can't specify access rights in ANSI. */
        if ((channels[canal].filedesc = fd) != NULL) {
#else   /* LL_ANSI_FILES */
        int fd;
        fd = creat (buff, 0666); /* rw-rw-rw | umask */
        if ((channels[canal].filedesc = fd) != -1) {
#endif  /* LL_ANSI_FILES */
                channels[canal].position = channels[canal].contents;
                channels[canal].last = channels[canal].contents;
                return(0);
        }
        errreturn(buff, 1);
}

/* apfile: open a file for append
   ------------------------------
*/

int
apfile(int canal, char *buff) {
#if     defined(LL_ANSI_FILES)
        FILE    *fd;

        fd = fopen(buff, "a"); /* Can't specify access rights in ANSI. */
        if ((channels[canal].filedesc = fd) != NULL) {
#else   /* LL_ANSI_FILES */
        int fd;
        if ((fd = open (buff, 1)) == -1)
                fd = creat (buff, 0666); /* rw-rw-rw | umask */
        lseek (fd, 0, 2);
        if ((channels[canal].filedesc = fd) != -1){
#endif  /* LL_ANSI_FILES */
                channels[canal].position = channels[canal].contents;
                channels[canal].last = channels[canal].contents;
                return(0);
        }
        errreturn(buff, 1);
}


#if     defined(LLDOS) || defined(CYGWIN)

/* infileb: open binary file for read
   ----------------------------------
*/

int
infileb(int canal, char *buff) {
#if     defined(LL_ANSI_FILES)
        if ((channels[canal].filedesc = fopen(buff, "rb")) != NULL) {
#else   /* LL_ANSI_FILES */
        if ((channels[canal].filedesc = open(buff,O_BINARY|O_RDONLY)) != -1) {
#endif  /* LL_ANSI_FILES */
                channels[canal].position = channels[canal].contents;
                channels[canal].last = channels[canal].contents;
                return(0);
        }
        errreturn(buff, 1);
}

/* oufileb: open binary file for print
   -----------------------------------
*/

int
oufileb(int canal, char *buff) {
#if     defined(LL_ANSI_FILES)
        FILE    *fd;

        fd = fopen(buff, "wb"); /* Can't specify access rights in ANSI. */
        if ((channels[canal].filedesc = fd) != NULL) {
#else   /* LL_ANSI_FILES */
        int fd;

        fd=open(buff,O_BINARY|O_CREAT|O_WRONLY|O_TRUNC,S_IRWXU|S_IRWXG|S_IRWXO);
        if ((channels[canal].filedesc = fd) != -1) {
#endif  /* LL_ANSI_FILES */
                channels[canal].position = channels[canal].contents;
                channels[canal].last = channels[canal].contents;
                return(0);
        }
        errreturn(buff, 1);
}

/* apfileb: open binary file for append
   ------------------------------------
*/

int
apfileb(int canal, char *buff) {
#if     defined(LL_ANSI_FILES)
        FILE    *fd;

        fd = fopen(buff, "ab"); /* Can't specify access rights in ANSI. */
        if ((channels[canal].filedesc = fd) != NULL) {
#else   /* LL_ANSI_FILES */
        int fd;

        if ((fd = open(buff, O_APPEND|O_WRONLY|O_BINARY))==-1)
                fd=open(buff,O_CREAT|O_WRONLY|O_BINARY,S_IRWXU|S_IRWXG|S_IRWXO);
        lseek (fd, 0, 2);
        if ((channels[canal].filedesc = fd) != -1){
#endif  /* LL_ANSI_FILES */
                channels[canal].position = channels[canal].contents;
                channels[canal].last = channels[canal].contents;
                return(0);
        }
        errreturn(buff, 1);
}

#endif  /* LLDOS */

/* fclos: close file
   -----------------
*/

int
fclos(int canal) {
#if     defined(LL_ANSI_FILES)
        codereturn(fclose(channels[canal].filedesc));
#else   /* LL_ANSI_FILES */
        codereturn (close(channels[canal].filedesc));
#endif  /* LL_ANSI_FILES */
}

/* fdele: delete file
   ------------------
   C code condition return
 */


int
fdele(char *buff) {
        codereturn(remove(buff));
}

/* frena: rename file
   ---------------------------------
   C code condition return
 */

int
frena(char *nom1, char *nom2) {
#if     defined(LLRENAME) || defined(LL_ANSI_FILES)
        if (rename(nom1, nom2))
                errreturn("Le_Lisp : rename ", 1);
        return 0;
#else /* LLRENAME || LL_ANSI_FILES */
        if (close (open(nom1,0)) == 0) {
                unlink(nom2);
                if (link(nom1, nom2) == 0)
                        if (unlink(nom1) == 0)
                                return(0);
                        errreturn(nom1, 1);
        } else
                errreturn(nom1, 1);
#endif /* LLRENAME || LL_ANSI_FILES */
}

/* fcopy: copy a file
   ------------------
   C code condition return
 */

#define SIZEBUF 4096
#if     defined(LL_ANSI_FILES)
int
fcopy(char *nom1, char *nom2)
{
        FILE    *fd1;
        FILE    *fd2;
        int     n1;
        int     n2;
        char    buff[SIZEBUF];
#if !defined(LLDOS)
        struct stat buf1, buf2;

        buf1.st_ino = (ino_t)1;
        buf2.st_ino = (ino_t)2;

        if (stat(nom1, &buf1) == 0 &&
            stat(nom2, &buf2) == 0 &&
            buf1.st_ino == buf2.st_ino) {
                errno = EIO;
                errreturn(nom1, EIO);
        }
#else
        char fulln1[256];
        char fulln2[256];

        (void)_fullpath((char *)&fulln1[0], nom1, 255);
        (void)_fullpath((char *)&fulln2[0], nom2, 255);

        if (stricmp(fulln1, fulln2) == 0) {
                errno = EIO;
                errreturn(nom1, EIO);
        }
#endif /* LLDOS */
        if ((fd1 = fopen(nom1, "rb")) == NULL)
                errreturn(nom1, 1);
        if ((fd2 = fopen(nom2, "wb")) == NULL) {
                (void)fclose(fd1);
                errreturn(nom2, 1);
        }

        while (!feof(fd1)) {
                n1 = (int)fread(buff, 1, SIZEBUF, fd1);
                if ((n1 < SIZEBUF) && ferror(fd1)) {
                        (void)fclose(fd2);
                        (void)fclose(fd1);
                        errreturn(nom1, 1);
                }
                if (!n1)
                        break;
                n2 = (int)fwrite(buff, 1, n1, fd2);
                if (n2 != n1) {
                        (void)fclose(fd2);
                        (void)fclose(fd1);
                        errreturn(nom2, 1);
                }
        }

        (void)fclose(fd2);
        (void)fclose(fd1);

        return(0);
}
#else   /* LL_ANSI_FILES */
int
fcopy(char *nom1, char *nom2) {
        int fd1, fd2;
        int n1, n2;
        char buff[SIZEBUF];
        struct stat buf1, buf2;

        buf1.st_ino = (ino_t)1;
        buf2.st_ino = (ino_t)2;

        if (stat(nom1, &buf1) == 0 &&
            stat(nom2, &buf2) == 0 &&
            buf1.st_ino == buf2.st_ino) {
                errno = EIO;
                errreturn(nom1, EIO);
        }

#if     defined(LLDOS)
        if ((fd1 = open(nom1, O_BINARY|O_RDONLY)) == -1)
#else  /* LLDOS */
        if ((fd1 = open(nom1, O_RDONLY)) == -1)
#endif /* LLDOS */
               errreturn(nom1, 1);

#if     defined(LLDOS)
        if ((fd2 = open(nom2, O_BINARY|O_WRONLY|O_CREAT|O_TRUNC, 0777)) == -1)
#else  /* LLDOS */
        if ((fd2 = open(nom2, O_WRONLY|O_CREAT|O_TRUNC, 0777)) == -1)
#endif /* LLDOS */
               {
                       (void)close(fd1);
                       errreturn(nom2,1);
               }

        while ((n1 = read(fd1, buff, SIZEBUF)) != 0) {
                if (n1 == -1) {
                        if (errno != EINTR) { /* Erreur pendant le read */
                                close(fd1);
                                close(fd2);
                                errreturn(nom1, 1);
                        } else continue;      /* Interrupt pendant le read */
                } else  {
                        /* Interrupt pendant le write ? */
                        do {
                                errno = 0;
                                n2 = write(fd2, buff, n1);
                        } while ((n2 == -1) && (errno == EINTR));
                        if ((n1 ==-1) || (n2 != n1)) {
                                /* Erreur pendant le write */
                                (void)close(fd1);
                                (void)close(fd2);
                                errreturn(nom2, 1);
                        }
                }
        }

        close(fd1);
        close(fd2);

        return(0);
}
#endif  /* LL_ANSI_FILES */

/* fprobe: teste if file exists
   ----------------------------
   C code condition return
 */

int
fprobe(char *buff) {
        struct  stat    mode;

        return(stat(buff, &mode));
}

/* le repertoire courant */
int
llgetwd(char *s, int l)
{
        return(LLGETCWD(s,l) ? (int)strlen(s) : 0);
}

/* lldirectoryp: is this a directory?
   ----------------------------------
*/
/*  pas tres elegant, mais en attendant d'avoir POSIX ... */
#if     !defined(S_ISDIR)
#if     defined(S_IFMT) && defined(S_IFDIR)
#define S_ISDIR(__mode) ((__mode & S_IFMT) == S_IFDIR)
#else
#if     defined(S_IFDIR)
#define S_ISDIR(__mode) ((__mode & S_IFDIR) == 0)
#endif
#endif
#endif

int
lldirectoryp(char *p) {
#if     defined(S_ISDIR) /* defined(_POSIX_SOURCE) || defined(LLDOS)*/
        struct   stat   mode;

        if (stat(p, &mode) == 0)
                if (S_ISDIR(mode.st_mode))
                        return(0);    /* c'est OK */
        return(-1);                   /* pas un repertoire */
#else   /* S_ISDIR *//* _POSIX_SOURCE || LLDOS */
        DIR *dirp;

        dirp = ll_opendir(p);
        if (dirp == NULL)
                return(-1); /* par un repertoire */
        else {
                ll_closedir(dirp);
                return(0); /* c'est OK */
        }
#endif /* S_ISDIR *//* _POSIX_SOURCE || LLDOS */
}

/******************************************************************
 *   operations on date of files
 *****************************************************************/

/* La fct qui ramene la vraie date d'un fichier */
time_t
fdate(char *name) {
        struct stat stbuf;
        if (stat(name, &stbuf) == -1) {
                return(-1);
        }
        return(stbuf.st_mtime);
}

/* pour traduire une date C en date LL */
extern void tr_date(time_t unix_date, long *ll_date);

/* getfdate: return date of file
   -----------------------------
 */

void
getfdate(long *date_lisp, char *file) {
        tr_date(fdate(file), date_lisp);
}

/*
 *        newer
 *        =====
 *        Lists both of its arguments newer first.
 *        For CAML module system.
 */

int
newer(char *name1, char *name2) {
        time_t   date1;
        time_t   date2;
        date1 = fdate (name1);
        date2 = fdate (name2);
        if (date1 == -1) {
                if (date2 == -1)
                        return(-3);
                else
                        return(-1);
        }
        if (date2 == -1)
                return(-2);
        return(date1 > date2);
}

#if     !defined(LL_ANSI_FILES)
/*
 * Returns C file descriptor that corresponds to Le-Lisp descriptor
 */
int
llgetchan(int a) {
        return(channels[a].filedesc);
}

/*
 * Replaces C file descriptor that corresponds to Le-Lisp descriptor
 * Returns new descriptor.
 */
int
llsetchan(int a, int b) {
   channels[a].filedesc = b;
   return(b);
}
#endif  /* LL_ANSI_FILES */

/*
 *
 *      Les fonctions pour la nouvelle imple'mentation du wildcard et
 *      du current-directory
 *
 *      Auteur  : Georges SCHUMACHER, MADICIA.
 *      Date    : 10 Juin 1991.
 *
 */

#if     defined(LLWILDCARD)

/*
 *      Ouverture du re'pertoire.
 */

DIR *
llopendir(char *path) {
        return(ll_opendir(path));
}

/*
 *      Read a directory
 */

char *
llreaddir(DIR *dirp) {
        struct READDIR_TYPE *dp = (struct READDIR_TYPE *)ll_readdir(dirp);

        if (!dp)
                return("");
        return(dp->d_name);
}

/*
 *      Close a directory
 */

void
llclosedir(DIR *dirp) {
        ll_closedir(dirp);
}
#endif  /* LLWILDCARD */

/* Functions make-directory / remove-directory directories
   -------------------------------------------------------
*/

static int
lltrupath(char *path) {
        size_t l = strlen(path);

        if (path[l - 1] == '/') {
                path[l - 1] = '\0';
                return(1);
        }
        return(0);
}

static void
lluntrupath(char *path) {
   path[strlen(path)] = '/';
}

long
llmkdir(char *path)
{
        int changed = lltrupath(path);

        if (LLMKDIR(path, 0777) < 0) {   /* rwx-rwx-rwx | umask */
                if (changed)
                        lluntrupath(path);
                errreturn(path, 1);
        }
        if (changed)
                lluntrupath(path);
        return((long) 0);
}

long
llrmdir(char *path)
{
        int changed = lltrupath(path);

        if (rmdir(path) < 0) {
                if (changed)
                        lluntrupath(path);
                errreturn(path, 1);
        }
        if (changed)
                lluntrupath(path);
        return(0);
}
