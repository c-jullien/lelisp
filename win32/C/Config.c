/*
 *      config.c :      
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
#include <fcntl.h>
#include <direct.h>
#include <io.h>
#include "sysname.h"

void
usage(void)
{
        (void)printf(";; Le-Lisp core-image configurator v1.3 [%s]\n", LL_SYS_NAME);
        (void)printf(";; Usage : -t|-w config command binary lisp-config\n");
        exit(1);
}

int
main(int argc, char **argv)
{
        static  char    dir[ 128 ];
        static  char    exe[ 128 ];
        static  char    cmd[ 128 ];
        static  char    bin[ 128 ];
        static  char    cnf[ 128 ];
        static  char    bat[ 128 ];
        static  char    sh[  256 ];
        static  char    *curdir;
        int             win = 1;
        int             c;
        FILE            *fd1;
        FILE            *fd2;

        if (argc != 5)
                usage();

        /*
         *      Get current directory
         */

        (void)strcpy(dir, "%LELISP%\\");
        (void)strcat(dir, LL_SYS_NAME );

        curdir = getcwd(exe, 128);
        if (curdir == NULL)
                curdir = ".";
        else    (void)strlwr(curdir);

        /*
         *      Get windows (-w) or text (-t) mode
         */

        if (strcmp(argv[ 1 ], "-w") == 0)
                win = 1;
        else    if (strcmp(argv[ 1 ], "-t") == 0)
                win = 0;
        else    usage();

        /*
         *      Get cmd, bat, bin & cnf from command line (4 args)
         */

        (void)sprintf(cmd, "%s",       strlwr(argv[ 2 ]));
        (void)sprintf(bat, "%s.bat",   strlwr(argv[ 2 ]));
        (void)sprintf(bin, "%s",       strlwr(argv[ 3 ]));
        (void)sprintf(cnf, "conf\\%s", strlwr(argv[ 4 ]));

        /*
         *      build Le-Lisp batch file from *.cnf file
         */

        if ((fd1 = fopen("config.tmp", "w")) == NULL) {
                perror("config.tmp");
                exit(1);
        }

        if ((fd2 = fopen(cnf, "r")) == NULL) {
                perror(cnf);
                exit(1);
        }

        (void)fprintf(fd1, "(setq #:system:name '%s)\n", cmd);

        while((c = fgetc(fd2)) != EOF)
                (void)fputc(c, fd1);

        (void)fprintf(fd1, "(end)\n");
        
        (void)fclose(fd1);
        (void)fclose(fd2);

        /*
         *      build the batch file : <dir>\<cmd> -config <dir>\conf\<cmd>.lcf
         */

        if ((fd1 = fopen(bat, "w")) == NULL) {
                perror(cmd);
                exit(1);
        }

        (void)fprintf(fd1, "@%s\\%s -config %s\\conf\\%s.lcf",
                              dir,bin,       dir,      cmd);
        (void)fclose(fd1);

        if (win)
                (void)sprintf(
                                sh,
                                "%s\\%s -config %s\\conf\\%s.lcf",
                                 exe,bin,       exe,      cmd
                            );
        else    (void)sprintf(
                                sh,
                                "%s\\%s -config %s\\conf\\%s.lcf < config.tmp",
                                 exe,bin,       exe,      cmd
                            );

        /*
         *      build the shell script to build the core image
         */

        (void)system(sh);

        /*
         *      build the batch file : <dir>\<cmd> -r <dir>\llcore\<cmd>.cor
         */

        if ((fd1 = fopen(bat, "w")) == NULL) {
                perror(cmd);
                exit(1);
        }

#if     defined(USE_LLEXEC) && defined(LLSTACK)
        (void)fprintf(fd1, "@%s\\llexec %s\\%s -r %s\\llcore\\%s.cor %%*",
              dir,       dir,bin,  dir,        cmd);
#else
        (void)fprintf(fd1, "@%s\\%s -r %s\\llcore\\%s.cor %%*",
                              dir,bin,  dir,        cmd);
#endif
        (void)fclose(fd1);

        /*
         *      remove Le-Lisp response files
         */

        (void)sprintf(sh, "%s\\conf\\%s.lcf", dir, cmd);

        (void)remove(sh);

        if (!win && (fd1 = fopen("config.tmp", "r")) != NULL) {
                (void)fclose(fd1);
                (void)remove("config.tmp");
        }

        return(0);
}
