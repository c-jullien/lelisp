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

int
main(int argc, char* argv[], char *envp[])
{
        inlelisp(argc,argv,envp);
        return 0;
}
