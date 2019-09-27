/*
;;;
;;; cstruct.c:        C helpers
;;;
;;; $Source: /usr/cvs/lelisp/common/cstruct.c,v $
;;; $Date: 2017/07/08 12:56:19 $
;;; $Revision: 1.4 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------
*/


char
charref(char *s, int n) {
        return *(char *) (s + n);
}

short
shortref(char *s, int n) {
        return *(short *) (s + n);
}

int
longref(char *s, int n) {
        return *(int *) (s + n);
}

void
charset(char *s, int n, char v) {
        *(char *) (s + n) = v;
}

void
shortset(char *s, int n, short v) {
        *(short *) (s + n) = v;
}

void
longset(char *s, int n, int v) {
        *(int *) (s + n) = v;
}

char *
cstring(char *lispstring, int length) {
        char *s = (char *)malloc(length + 1);
        (void)strncpy(s, lispstring, length + 1);
        return s;
}


