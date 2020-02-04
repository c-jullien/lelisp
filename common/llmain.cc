/*
;;;
;;; main.cc:       main entry point in C++
;;;
;;; $Source: /usr/cvs/lelisp/common/llmain.cc,v $
;;; $Date: 2017/07/08 12:56:19 $
;;; $Revision: 1.4 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;;                   Eligis
;;;                   4, villa des reinettes
;;;                   F-95390 Saint-Prix, France
;;;                   email: lelisp@eligis.com
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------
*/

extern "C" void inlelisp(int, char**, char**);

int
main(int argc, char** argv, char** envp) {
        inlelisp(argc,argv,envp);
        return 0;
}
