/*
 *      complice.c :    pre-processor for cmplc++, the real compiler.
 *                      On UNIX this is done by a shell script,  but
 *                      Windows is limited by the number of arguments.
 */

#if     defined(_MSC_VER) && (_MSC_VER >= 1400)
#define _CRT_SECURE_NO_DEPRECATE        1
#define _CRT_NONSTDC_NO_DEPRECATE       1
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <process.h>
#include <errno.h>
#include <direct.h>
#include <fcntl.h>
#include <io.h>
#include <ctype.h>
#include "sysname.h"

#define SIZEBUF         4096
#define MAXLINE_SIZE    1024
#define MAXPATH_SIZE    8192
#define MAXOUTPUT_SIZE  8192
#define MAXNB_FILES     256

#if     !defined(O_BINARY)
#define O_BINARY        0
#endif

#if     !defined(TRUE)
#define TRUE    1
#endif

#if     !defined(FALSE)
#define FALSE   0
#endif

static  void    FileMove(char *name1, char *name2);
static  char    *ReadDelimited(char *s, int i);
static  char    *ReadArgument(void);
static  char    *NextArgument(int flag);
static  char    *StripDblQuote(char *s);
static  void    Usage(void);

static  char    **Argv;
static  int     Argc;
static  char    *CurrentArgument = NULL;
static  int     Argcur = 0;
static  FILE    *fc;

#define CheckArgument(x, y)   (strcmp(x, y) == 0)

static  void
Usage(void)
{
        (void)printf(";; Le-Lisp, COMPLICE compiler v1.3 [%s]\n",LL_SYS_NAME);
        (void)printf(";; Usage : complice [ flags ] [ file [ ... ] ]\n;;\n");
        (void)printf(";;\twith :\n");
        (void)printf(";;\t\t-parano  [t | nil]\n");
        (void)printf(";;\t\t-w       [t | nil]\n");
        (void)printf(";;\t\t-v       [t | nil]\n");
        (void)printf(";;\t\t-g       [t | nil]\n");
        (void)printf(";;\t\t-h       [t | nil]\n");
        (void)printf(";;\t\t-hh      [t | nil]\n");
        (void)printf(";;\t\t-r       [t | nil]\n");
        (void)printf(";;\t\t-callext [t | nil]\n");
        (void)printf(";;\t\t-cons    <number>\n");
        (void)printf(";;\t\t-o       <output-directory>\n");
        (void)printf(";;\t\t-p       <include-path>path\n");
        (void)printf(";;\t\t-i\n");
        (void)printf(";;\t\t-e       \"<lisp-sexpr>\"\n");
        (void)printf(";;\t\t-config  <configuration-file>\n");
        (void)printf(";;\t\t-f       <temporary-file>\n");
        (void)printf(";;\t\tfile     <module-to-compile>\n");

        exit(1);
}

static  char    *
NextArgument(int flag)
{
        if ((fc == NULL) || ((CurrentArgument = ReadArgument()) == NULL))
                if (Argcur < Argc)
                        CurrentArgument = Argv[ ++Argcur ];

        if ((flag == TRUE) && (CurrentArgument == NULL))
                Usage();

        return(CurrentArgument);

}

static  char    *
ReadDelimited(char *s, int delimiter)
{
        char    *p = s;
        int     c;

        *p++ = (char)delimiter;

        for (;;)
                if ((c = fgetc(fc)) == EOF)
                        Usage();
                else    if (c == delimiter) {
                                *p++ = (char)delimiter;
                                *p   = '\000';
                                return(s);
                } else  *p++ = (char)c;

}

static  char    *
ReadArgument(void)
{
        static  char token[ MAXLINE_SIZE ];
        char    *s = (char *)&token[ 0 ];
        int     c;

        do
                if ((c = fgetc(fc)) == EOF) {
                        fc = NULL;
                        return(NULL);
                }
        while(isspace((char)c) || ((char)c == '\n'));

        while(!isspace((char)c) && ((char)c != '\n')) {
                switch(c) {
                case '"'  :
                case '\'' :
                        return(ReadDelimited((char *)&token[ 0 ], c));
                }
                *s++ = (char)c;
                if ((c = fgetc(fc)) == EOF) {
                        fc = NULL;
                        return(NULL);
                }
        }

        *s = '\000';

        return((char *)&token[ 0 ]);
}

static  char    *
StripDblQuote(char *s)
{
        char    *p = s;

        if (*s != '\"')
                return(s);

        for (p = s++ ; *p ; p++)
                ;

        if (*--p == '\"')
                *p = '\000';
        
        return(s);

}

int
main(int argc, char **argv)
{
        static  char    llpath[MAXPATH_SIZE]    = "";
        static  char    output[MAXOUTPUT_SIZE]  = "";
        static  char    cmd[MAXLINE_SIZE]       = "";
        static  char    cnf[MAXLINE_SIZE]       = "";
        static  char    parano[ 8 ]             = "nil";
        static  char    warning[ 8 ]            = "t";
        static  char    verbose[ 8 ]            = "nil";
        static  char    callext[ 8 ]            = "nil";
        static  char    flggct[ 8 ]             = "nil";
        static  char    flgrcf[ 8 ]             = "nil";
        static  char    flgch[ 8 ]              = "nil";
        static  char    flgchh[ 8 ]             = "nil";
        static  char    cons[ 32 ]              = "";
        static  char    sh[MAXLINE_SIZE]        = "";
        static  char    *file                   = "complice.tmp";
        static  int     nfiles                  = 0;
        static  FILE    *fd                     = NULL;
        static  int     retcode                 = 0;
        static  char    files[MAXNB_FILES][_MAX_PATH];
        static  int     i;

        Argv = argv;
        Argc = argc;

        if ((fd = fopen(file, "w")) == NULL) {
                perror(file);
                exit(1);
        }

        llpath[ 0 ] = '\000';

        if (argc == 1)
                goto execute;           

        while(NextArgument(FALSE)) {
                if (CheckArgument(CurrentArgument, "-parano")) {
                        (void)strcpy(parano, NextArgument(TRUE));
                        continue;
                }
                if (CheckArgument(CurrentArgument, "-callext")) {
                        (void)strcpy(callext, NextArgument(TRUE));
                        continue;
                }
                if (CheckArgument(CurrentArgument, "-g")) {
                        (void)strcpy(flggct, NextArgument(TRUE));
                        continue;
                }
                if (CheckArgument(CurrentArgument, "-h")) {
                        (void)strcpy(flgch, NextArgument(TRUE));
                        continue;
                }
                if (CheckArgument(CurrentArgument, "-hh")) {
                        (void)strcpy(flgchh, NextArgument(TRUE));
                        continue;
                }
                if (CheckArgument(CurrentArgument, "-r")) {
                        (void)strcpy(flgrcf, NextArgument(TRUE));
                        continue;
                }
                if (CheckArgument(CurrentArgument, "-cons")) {
                        (void)strcpy(cons, "-cons ");
                        (void)strcat(cons, NextArgument(TRUE));
                        continue;
                }
                if (CheckArgument(CurrentArgument, "-w")) {
                        (void)strcpy(warning, NextArgument(TRUE));
                        continue;
                }
                if (CheckArgument(CurrentArgument, "-v")) {
                        (void)strcpy(verbose, NextArgument(TRUE));
                        continue;
                }
                if (CheckArgument(CurrentArgument, "-o")) {
                        (void)strcpy(output, NextArgument(TRUE));
                        continue;
                }
                if (CheckArgument(CurrentArgument, "-p")) {
                        (void)strcat(llpath, NextArgument(TRUE));
                        (void)strcat(llpath, " ");
                        continue;
                }
                if (CheckArgument(CurrentArgument, "-i")) {
                        goto execute;
                }
                if (CheckArgument(CurrentArgument, "-e")) {
                        fprintf(fd, "%s\n",StripDblQuote(NextArgument(TRUE)));
                        continue;
                }
                if (CheckArgument(CurrentArgument, "-config")) {
                        (void)strcpy(cnf, NextArgument(TRUE));
                        if ((fc = fopen(cnf, "r")) == NULL) {
                                perror(cnf);
                                exit(1);
                        }
                        continue;
                }
                if (CheckArgument(CurrentArgument, "-f")) {
                        (void)fclose(fd);
                        file = NextArgument(TRUE);

                        if ((fd = fopen(file, "w")) == NULL) {
                                perror(file);
                                exit(1);
                        }

                        continue;
                }

                if (*CurrentArgument == '-')
                        Usage();

                (void)strcpy(files[ nfiles++ ], CurrentArgument);

        }

        fprintf(fd, ";;\n");
        fprintf(fd, ";; Complice driver\n");
        fprintf(fd, ";;\n");
        fprintf(fd, "(defvar #:complice:parano-flag  %s)\n", parano);
        fprintf(fd, "(defvar #:complice:warning-flag %s)\n", warning);
        fprintf(fd, "(unless %s ;; -callext\n", callext);
        fprintf(fd, "        (defun getglobal (x) 1)\n");
        fprintf(fd, "        (compile getglobal)\n");
        fprintf(fd, "        (defun defextern-cache l))\n");
        fprintf(fd, "(when %s ;; -g\n", flggct);
        fprintf(fd, "      (with ((outchan ()))\n");
        fprintf(fd, "            (print (gc t))))\n");
        fprintf(fd, "(setq #:system:read-case-flag %s)\n", flgrcf);
        fprintf(fd, "(setq #:system:path\n");
        fprintf(fd, "      (append '(%s) #:system:path))\n", llpath);
        fprintf(fd, "(when %s ;; -h\n", flgch);
        fprintf(fd, "      (lmcacheinit)\n");
        fprintf(fd, "      (setq #:lmcache:verbose %s))\n", verbose);
        fprintf(fd, "(when %s ;; -hh\n", flgchh);
        fprintf(fd, "      (rehashinit)\n");
        fprintf(fd, "      (setq #:rehash:verbose %s))\n", verbose);
        fprintf(fd, "(defun #:cmplc:user-interrupt () (end 1))\n");
        fprintf(fd, "(defun #:cmplc:syserror (f m b)\n");
        fprintf(fd, "   (print \" ** \" f \" : \" m \" : \" b) (end 1))\n");
        fprintf(fd, "(newl #:sys-package:itsoft 'cmplc)\n");
        fprintf(fd, ";; Compile following module(s):\n");
        for (i = 0 ; i < nfiles ; i++)
                fprintf(fd, "(compilemodule '%s)\n", files[ i ]);

        fprintf(fd, "(end ())\n");
        
        (void)fclose(fd);

        if (CheckArgument(verbose, "t")) {
                if ((fd = fopen(file, "r")) == NULL) {
                        perror(file);
                        exit(1);
                }

                while((i = fgetc(fd)) != EOF)
                        (void)fputc(i, stderr);

                (void)fclose(fd);
        }

execute:
        (void)strcpy(cmd, "CPCMDFILE=");
        (void)strcat(cmd, file);
        (void)putenv(cmd);

        /*
         *      Get the directory of complice.exe
         */

        (void)strcpy(sh, strlwr(getenv("LELISP")));

        if (sh[ 0 ] == 0) {
                (void)puts("LELISP variable environment, not found !\n");
                exit(0);
        }

        (void)strcat(sh, "\\");
        (void)strcat(sh, LL_SYS_NAME);
        (void)strcat(sh, "\\cmplc++.bat");

        if ((fd = fopen(sh, "r")) == NULL) {
                (void)printf("complice, can't find %s\n", sh);
        } else  {
                (void)fclose(fd);
                retcode = system(sh);
        }

        (void)putenv("CPCMDFILE=");

        (void)remove(file);

        if (*output) {
                for (i = 0 ; i < nfiles ; i++) {
                        (void)strcat(files[ i ], ".lo");
                        (void)strncpy(cmd, output, MAXLINE_SIZE);
                        cmd[ MAXLINE_SIZE - 1 ] = '\000';
                        (void)strcat(cmd, "\\" );
                        (void)strcat(cmd, files[ i ]);
                        FileMove(files[ i ], cmd);
                }
        }

        return(retcode);

}

static  void
FileMove(char *name1, char *name2)
{
        int     fd1;
        int     fd2;
        int     n1;
        int     n2;
        char    buff[ SIZEBUF ];

        if ((fd1 = open(name1, O_BINARY|O_RDONLY)) == -1) {
                perror(name1);
                exit(1);
        }
        
        if ((fd2=open(name2, O_BINARY|O_WRONLY|O_CREAT|O_TRUNC, 0777)) == -1) {
                (void)close(fd2);
                perror(name2);
                exit(1);
        }

        while((n1 = read(fd1, buff, SIZEBUF)) != 0) {
                if (n1 == -1) {
                        if (errno != EINTR) { /* Erreur pendant le read */
                                (void)close(fd1);
                                (void)close(fd2);
                                perror(name1);
                                exit(1);
                        } else  continue;      /* Interrupt pendant le read */
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
                                perror(name2);
                                exit(1);
                        }
                }
        }

        (void)close(fd1);
        (void)close(fd2);
        (void)remove(name1);

}               
