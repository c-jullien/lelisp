;;;
;;; Elaboration file for: BENCH
;;;
;;; $Source: /usr/cvs/lelisp/Celab/elab-bench.ll,v $
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
       " : Loading,      ... lelisp/Celab/elab-bench.ll")

(let ((gell-silent-elaboration-p t))

     (libloadfile "boyer.le" t)
     (libloadfile "browse.le" t)
     (libloadfile "checkmet.le" t)
     (libloadfile "ctak.le" t)
     (libloadfile "dderiv.le" t)
     (libloadfile "deriv.le" t)
     (libloadfile "destru.le" t)
     (libloadfile "div.le" t)
     (libloadfile "fft.le" t)
     (libloadfile "fib20.le" t)
     (libloadfile "puzzle.le" t)
     (libloadfile "stak.le" t)
     (libloadfile "tak.le" t)
     (libloadfile "takl.le" t)
     (libloadfile "takr.le" t)
     (libloadfile "traverse.le" t)
     (libloadfile "triang.le" t)
)


(check-for-unresolved-references)
(gell-clean-core-image)

