;;;
;;; NAME:  "Interface Le-Lisp / KerN version C"
;;;
;;; $Source: /usr/cvs/lelisp/solaris386/bnkern.ll,v $
;;; $Date: 2006/12/15 12:28:44 $
;;; $Revision: 1.1 $
;;;
;;; ------------------------------------------------------------
;;; Copyright Digital Equipment Corporation & INRIA  1988, 1989
;;; Author  "Bernard Paul Serpette"
;;; Inquiries to:     ILOG S.A.
;;;                   2 Avenue Gallieni, BP 85,
;;;                   F-94253 Gentilly Cedex, France.
;;;                   email: lelisp@ilog.fr
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
;; We describe here the C protocol interface.


;;.Section "Declarations"
(defvar #:sys-package:colon 'kern)
(defvar BN_DIGIT_SIZE 32)
(defvar BN_WORD_SIZE 15)
(defvar :NO_BYTE_IN_DIGIT (div BN_DIGIT_SIZE 8))

;;.Section "Loading binary file if exist"
(when (eq 0 (getglobal  "_BnDivideDigit"))
   (let ( (f (search-in-path #:system:path "kern.o")) )
       (ifn f
          (error 'kern 'errfile "kern.o")
          (prinflush ";; Loading " f " ... ")
          (cload f)
          (print "Done!") )))

;;.Section "Definition of primitive set"
(defmacro :setfn (name ltype type)
   (let ( (Cname (concat "_" name)) (Lname (implode (explode name))) )
      (setq ltype (nsubst 'string 'N (nsubst 't 'I ltype)))
      (setq type (or (cassq type '((N . string) (I . t) (U . t))) 'fix))
      `(defun ,Lname
         ,@(cddr (buildextern Cname
                              (#:system:cached-getglobal Cname)
                               ltype type )))))

(:setfn "BnSetToZero"                 (N I I)             U)
(:setfn "BnAssign"                    (N I N I I)         U)
(:setfn "BnSetDigit"                  (N I I)             U)
(:setfn "BnGetDigit"                  (N I)               Fix)
(:setfn "BnNumDigits"                 (N I I)             I)
(:setfn "BnNumLeadingZeroBitsInDigit" (N I)               Fix)
; (:setfn "BnDoesDigitFitInWord"        (N I)               Fix)
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

;;.Section "Adjustment of BnDoesDigitFitInWord"
(defvar :hight_to_low_index
   (let ( (l ()) (n (BnCreate 'n 2)) )
      (for (i 1 1 3)
         (BnSetDigit n 0 9)
         (BnShiftLeft n 0 1 n 1 (mul 8 i))
         (for (j 0 1 3)
            (when (eq (sref n j) 9) (newl l j)) ))
      l ))

(defun BnDoesDigitFitInWord (s i)
   (let ( (l :hight_to_low_index) (i (mul :NO_BYTE_IN_DIGIT i)) )
      (while (and (cdr l) (eq 0 (sref s (add (car l) i))))
         (setq l (cdr l)) )
      (if (cdr l)
         0
         (if (lt (sref s (add (car l) i)) #$80)
            1
            0 ))))
