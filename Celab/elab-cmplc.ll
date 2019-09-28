;;;
;;; GELL 15.26: Elaboration file for: Complice + Modtoc
;;;
;;; $Source: /usr/cvs/lelisp/Celab/elab-cmplc.ll,v $
;;; $Date: 2017/06/11 11:54:55 $
;;; $Revision: 1.1 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;; and maintained by ILOG.
;;;
;;; Inquiries to:     ILOG S.A.
;;;                   2 Avenue Gallieni, BP 85,
;;;                   F-94253 Gentilly Cedex, France.
;;;                   email: lelisp@ilog.fr
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(print)
(print ";GELL " (version)(subversion)
       " : Loading,      ... lelisp/Celab/elab-cmplc.ll")

(let ((gell-silent-elaboration-p t))

     (libloadfile "complice.le"     t)
     (libloadfile "modtoc.le"       t)
)


(check-for-unresolved-references)
(gell-clean-core-image)


