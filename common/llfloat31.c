/*
;;;
;;; llfloat31.c: Le-Lisp floating point converter runtime library
;;;
;;; $Source: /usr/cvs/lelisp/common/llfloat31.c,v $
;;; $Date: 2017/07/08 12:56:19 $
;;; $Revision: 1.8 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------
*/
/*
 *              Includes files
 */

#include "Machine.h"

/*      simple precision float->ASCII   (for Le-Lisp 31bitfloats)       */

long
llrt_cvftoa(double fltval, char *buffer) {
        char* start;
        int seepoint;

        errno = 0;
        start = buffer;

        (void)sprintf(buffer, LLPRT31BITS, fltval);
        if (errno != 0) {
                buffer[0] = '\0';
                return (0);
        }
        seepoint = 0;
        while (*buffer != '\0') {
                if (*buffer == '.' || *buffer == 'e') {
                        seepoint = 1;
                        while (*buffer != '\0') buffer++;
                }
                else buffer++;
        }
        if (seepoint == 0){
                *buffer++ = '.';
                *buffer = '\0';
        }
        /* remove trailling zeros */
        while (*buffer == '0')
                buffer--;

        return (long)(buffer - start);
}
