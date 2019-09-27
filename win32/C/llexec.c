#if     !defined(lint)
static  char *sccsid = "@(#)llexec.c    (c) Eligis, C. Jullien 2007/02/04";
#endif

/*
 *      llexec.c :      32bit stub for x64 stack compatibility.
 */

/*
 *      This stub is used by config to assure that Le-Lisp
 *      core is restored with the right stack even if it is
 *      launched by a 64bit process like cmd.exe.
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
#include "sysname.h"

int
main(int argc, char **argv)
{
        if (argc > 1) {
                spawnv(_P_WAIT, argv[1], argv+1);
                return(0);
        }

        fprintf(stderr, ";; 32bit stub for Le-Lisp console mode.\n");
        fprintf(stderr, ";; Usage: %s <path-to-lelisp>\\lebin.exe <args>\n",
                        argv[0]);
        return(1);
}
