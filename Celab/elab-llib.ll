;;;
;;; Elaboration file for: LLIB
;;;
;;; $Source: /usr/cvs/lelisp/Celab/elab-llib.ll,v $
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
       " : Loading,      ... lelisp/Celab/elab-llib.ll")

(let ((gell-silent-elaboration-p t))

     (libloadfile "initc.le"     t)
     (libloadfile "startll.le"     t)

     (libloadfile "messages.le"    t)
     (libloadfile "toplevel.le"    t)
     (libloadfile "files.le"       t)
     (libloadfile "module.le"      t)
     (libloadfile "defs.le"        t)
     (libloadfile "genarith.le"    t)
     (libloadfile "virtty.le"      t)
     (libloadfile "vt100.le"       t)

     (setq #:tty:name 'vt100)

     (libloadfile "path.le"        t)
     (libloadfile "llpboot.le"     t)
     (libloadfile "setf.le"        t)
     (libloadfile "defstruct.le"   t)
     (libloadfile "abbrev.le"      t)
     (libloadfile "microceyx.le"   t)
     (libloadfile "debug.le"       t)
     (libloadfile "trace.le"       t)
     (libloadfile "pretty.le"      t)
     (libloadfile "libcir.le"      t)
     (libloadfile "sort.le"        t)
     (libloadfile "array.le"       t)
     (libloadfile "callext.le"     t)
     (libloadfile "format.le"      t)
     (libloadfile "date.le"        t)
     (libloadfile "libdate.le"     t)
     (libloadfile "hash.le"        t)
     (libloadfile "stringio.le"    t)
     (libloadfile "sets.le"        t)
     (libloadfile "schedule.le"    t)
     (libloadfile "resetfn.le"     t)
     (libloadfile "product.le"     t)
)


(check-for-unresolved-references)
(gell-clean-core-image)


