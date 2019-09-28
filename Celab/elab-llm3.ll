;;;
;;; Elaboration file for: LLM3
;;;
;;; $Source: /usr/cvs/lelisp/Celab/elab-llm3.ll,v $
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
       " : Loading,      ... lelisp/Celab/elab-llm3.ll")

(let ((gell-silent-elaboration-p t))

     (libloadfile  "llinit.le"	t)
     (libloadfile  "toperr.le"	t)
     (libloadfile  "gc.le"	t)
     (libloadfile  "physio.le"	t)
     (libloadfile  "read.le"	t)
     (libloadfile  "macroch.le"	t)
     (libloadfile  "print.le"	t)
     (libloadfile  "eval.le"	t)
     (libloadfile  "fspecs.le"	t)
     (libloadfile  "cntrl.le"	t)
     (libloadfile  "carcdr.le"	t)
     (libloadfile  "symbs.le"	t)
     (libloadfile  "fntstd.le"	t)
     (libloadfile  "number.le"	t)
     (libloadfile  "specnb.le"	t)
     (libloadfile  "string.le"	t)
     (libloadfile  "chars.le"	t)
     (libloadfile  "extend.le"	t)
     (libloadfile  "bllsht.le"	t)
)

(check-for-unresolved-references)
(gell-clean-core-image)


