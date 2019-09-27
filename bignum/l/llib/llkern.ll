;;;
;;; NAME:  "Interface Le-Lisp / KerN version Le-Lisp"
;;;
;;; $Source: /usr/cvs/lelisp/bignum/l/llib/llkern.ll,v $
;;; $Date: 2016/05/24 18:12:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; Copyright Digital Equipment Corporation & INRIA  1988, 1989
;;; Author  "Bernard Paul Serpette"
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;.Section "Contents"
;;
;; This file contains the interface between the KerN kernel and
;; Le-Lisp.  There are two interface types, here listed in descending
;; order of efficiency: 
;;  1. The primitives are written in assembler using the Le-Lisp
;;     function call protocol.  The primitives are considered to be
;;     SUBRs.
;;  2. The primitives are written in C or assembler but are called
;;     using C's function call protocol.  In this case, the primitives
;;     are declared using DEFEXTERN.
;;     
;; We describe here the Le-Lisp protocol interface.


;;.Section "Declarations"
(defvar #:sys-package:colon 'kern)
(defvar :version 'lisp)
(defvar BN_DIGIT_SIZE 32)
(defvar BN_WORD_SIZE 15)
(defvar :NO_BYTE_IN_DIGIT (div BN_DIGIT_SIZE 8))

;;.Section "Loading binary file if exist"
(when (eq 0 (getglobal  "BnDivideDigit"))
   (let ( (f (search-in-path #:system:path "kern.o")) )
       (ifn f
          (error 'kern 'errfile "kern.o")
          (prinflush ";; Loading " f " ... ")
          (cload f)
          (print "Done!") )))

;;.Section "Definition of primitive set"
(defmacro :setfn (name ltype type)
   `(if t
      (setfn ',(implode (explode name))
             ',(or (cassq (length ltype) '((2 . subr2) (3 . subr3)))
                  'nsubr )
             (getglobal ,(catenate "" name)) )))

(:setfn "BnSetToZero"                 (N I I)             U)
(:setfn "BnAssign"                    (N I N I I)         U)
(:setfn "BnSetDigit"                  (N I I)             U)
(:setfn "BnGetDigit"                  (N I)               Fix)
(:setfn "BnNumDigits"                 (N I I)             I)
(:setfn "BnNumLeadingZeroBitsInDigit" (N I)               Fix)
(:setfn "BnDoesDigitFitInWord"        (N I)               Fix)
(:setfn "BnIsDigitZero"               (N I)               Fix)
(:setfn "BnIsDigitNormalized"         (N I)               Fix)
(:setfn "BnIsDigitOdd"                (N I)               Fix)
(:setfn "BnCompareDigits"             (N I N I)           Fix)
(:setfn "BnComplement"                (N I I)             U)
(:setfn "BnAndDigits"                 (N I N I)           U)
(:setfn "BnOrDigits"                  (N I N I)           U)
(:setfn "BnXorDigits"                 (N I N I)           U)
(:setfn "BnShiftLeft"                 (N I I N I Fix)     U)
(:setfn "BnShiftRight"                (N I I N I fix)     U)
(:setfn "BnAddCarry"                  (N I I Fix)         Fix)
(:setfn "BnAdd"                       (N I I N I I Fix)   Fix)
(:setfn "BnSubtractBorrow"            (N I I Fix)         Fix)
(:setfn "BnSubtract"                  (N I I N I I Fix)   Fix)
(:setfn "BnMultiplyDigit"             (N I I N I I N I)   Fix)
(:setfn "BnDivideDigit"               (N I N I N I I N I) U)

;;.Section "Allocations for Le-Lisp"
(defun BnAlloc (i)
  (makestring (mul :NO_BYTE_IN_DIGIT i) 0) )

(defun BnCreate (Ad i)
  (let ( (n (makestring (mul :NO_BYTE_IN_DIGIT i) 0)) )
    (typestring n Ad)
    n ))

(defun BnFree (n) 1)

(defun BnGetType (n)
   (typestring n) )

(defun BnSetType (n Ad)
   (typestring n Ad) )

(defun BnGetSize (n)
  (div (slen n) :NO_BYTE_IN_DIGIT))

(defvar :tampon (BnCreate 'n 2))
(defun #:N:prin (s)
   (let ( cnt )
      (with ( (obase 16) )
         (for (i (sub1 (BnGetSize s)) -1 0)
            (BnAssign :tampon 0 s i 1)
            (setq cnt 0)
            (while (< cnt BN_DIGIT_SIZE)
               (BnShiftLeft :tampon 0 1 :tampon 1 4)
               (prin (BnGetDigit :tampon 1))
               (incr cnt 4) )))))
