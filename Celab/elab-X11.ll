;;;
;;; Elaboration file for: BV X11
;;;
;;; $Source: /usr/cvs/lelisp/Celab/elab-X11.ll,v $
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
       " : Loading,      ... lelisp/Celab/elab-X11.ll")

(let ((gell-silent-elaboration-p t))

     (add-feature 'virbitmap)

     (libloadfile "virmacros.ll" t)
     (libloadfile "virstruct.ll" t)

     (libloadfile "virutil.le" t)
     (libloadfile "virdraw.le" t)
     (libloadfile "virmenu.le" t)
     (libloadfile "virgraph.le" t)
     (libloadfile "virwindow.le" t)
     (libloadfile "vircolor.le" t)
     (libloadfile "virbit.le" t)
     (libloadfile "virevent.le" t)
     (libloadfile "virinit.le" t)
     (libloadfile "virbitmap.le" t)
     (libloadfile "evloop.le" t)
     (libloadfile "ttywindow.le" t)

     (libloadfile "x11struct.le" t)
     (libloadfile "x11_def.le" t)
     (libloadfile "x11menu.le" t)
     (libloadfile "x11draw.le" t)
     (libloadfile "x11graph.le" t)
     (libloadfile "x11color.le" t)
     (libloadfile "x11bitmap.le" t)
     (libloadfile "x11event.le" t)
     (libloadfile "x11window.le" t)
     (libloadfile "x11init.le" t)
)

(check-for-unresolved-references)
(gell-clean-core-image)


;;;
;;; Set up variables:

(setq #:sys-package:bitmap '#:display:x11)


(setq #:display:x11:events-list
      (list 'down-event 'up-event 'ascii-event 'drag-event
	    'enterwindow-event 'leavewindow-event))

(setq #:display:x11:override-redirect ())


(remob '#:x11:LOADX11)
(remob '#:x11:BVX11)
(remob '#:x11:LINKX11)
(remob '#:x11:INTERPRETED)

(print "X11 ok.")



; Simulate (inibitmap '|X11|) by hand.

(setq #:bitmap:name '|X11|)

(setq #:display:all-bitmaps
      (acons #:bitmap:name #:sys-package:bitmap #:display:all-bitmaps)))

;(synonymq #:sharp:|B|  #:sharp:b)

(newl #:module:compiled-list 'virbitmap)
(newl #:module:compiled-list 'x11)

