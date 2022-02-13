/*
;;;
;;; main.c:        main entry point in C
;;;
;;; $Source: /usr/cvs/lelisp/common/llmain.c,v $
;;; $Date: 2017/07/08 07:05:43 $
;;; $Revision: 1.5 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------
*/

extern void inlelisp(int argc, char **argv, char **envp); 

#if defined(__APPLE__)
#include <spawn.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef _POSIX_SPAWN_DISABLE_ASLR
#define _POSIX_SPAWN_DISABLE_ASLR 0x0100
#endif

extern int noaslrmain(int argc, char **argv, char** envp);

int
main(int argc, char *const *argv, char *const *envp, const char **apple) {
        int spawned = 0;
        int ret;
        short ps_flags = 0;
        pid_t pid;
        posix_spawn_file_actions_t actions;
        posix_spawnattr_t attrs;
        char **cargv = (char**)malloc(64 * sizeof(char*));
        int cargc = 0;

        (void)apple;

        for (cargc = 0; cargc < argc; ++cargc) {
                cargv[cargc] = argv[cargc];
                if (strcmp(argv[cargc], "--noaslr") == 0) {
                        cargv[cargc + 1] = NULL;
                        spawned = 1;
                        break;
                }
        }

        if (spawned == 0) {
                cargv[cargc++] = "--noaslr";
                cargv[cargc] = NULL;

                (void)posix_spawn_file_actions_init(&actions);
                (void)posix_spawnattr_init(&attrs);

                ps_flags |= POSIX_SPAWN_SETEXEC;
                ps_flags |= _POSIX_SPAWN_DISABLE_ASLR;
                ret = posix_spawnattr_setflags(&attrs, ps_flags);

                if (ret != 0) {
                        (void)printf("cannot set posix_spawn flags\n");
                }

                (void)posix_spawnp(&pid,
                                   cargv[0],
                                   &actions,
                                   &attrs,
                                   cargv,
                                   envp);
                /*
                 * returns only if posix_spawn fails.
                 */
                (void)posix_spawnattr_destroy(&attrs);
        }

        ret = noaslrmain(cargc, (char**)cargv, (char**)envp);
        free(cargv);
        return ret;
}

#define main noaslrmain
#endif


int
main(int argc, char* argv[], char *envp[])
{
        inlelisp(argc,argv,envp);
        return 0;
}
