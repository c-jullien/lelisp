;;;
;;; TOPWIN:  a simple use of the Le-Lisp Virtual Bitmap
;;;
;;; $Source: /usr/cvs/lelisp/llib/topwin.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15.2)
        (error 'load 'erricf 'topwin))

(defvar #:sys-package:colon 'topwindow)

(add-feature 'window)


;;;  Definition of a #:window:tty window

(unless (getprop '#:image:rectangle:window:tty 'defstruct)
	(libload #u"ttywindow"))

(defvar topwindow)

(defun topwindow i
  (cond ((null i)
	 (not (not topwindow)))
	((car i)
	 (unless topwindow
		 (bitprologue)
		 (setq topwindow (create-window '#:window:tty
						(if (eq #:bitmap:name 'bvtty)
						    0 50)
						(if (eq #:bitmap:name 'bvtty)
						    0 50)
						(div (bitxmax) 2)
						(div (bitymax) 2)
						"Le-Lisp : Toplevel" 1 1)
		       #:sys-package:itsoft 
		       (cons '#.#:sys-package:colon #:sys-package:itsoft))
		 (bitmap-flush)
		 (bitmap-sync)
		 ;; The window has to be ready
 		 (selectq #:bitmap:name
			  (|X11|
			   (let (ev)
			     (while (or (neq (#:event:code
					      (setq ev (read-event)))
					     'map-window)
					(neq (#:event:window ev) topwindow)))))
			  ((windows pm)
			   (let (ev)
			     (while (or (neq (#:event:code
					      (setq ev (read-event)))
                                            'repaint-window-event)
					(neq (#:event:window ev) topwindow)))))
			  )
		 (current-window topwindow)
		 ))
	(t
	 (when topwindow
	       (tyflush)
	       (current-window ())
	       (kill-window topwindow)
	       (setq topwindow ())
	       (setq #:sys-package:itsoft
		     (delq '#.#:sys-package:colon #:sys-package:itsoft))
	       (bitepilogue)))))


;;;
;;; A small customization of PEPE 
;;;

(when (featurep 'pepe)

      (setq #:sys-package:colon 'pepe)

      (defkey     #^V (:nextscreen))

      (defesckey  #/V (:prevscreen))

      (defesckey  #/< (setq :ydisplay 0 :xcursor 0 :ycursor 0 :column 0))

      (defesckey  #/> 
	(setq :ycursor (length :buffer)
	      :ydisplay (max 0 (- :ycursor
				  (div #:tty:ymax 2)))
	      :ycursor (- :ycursor :ydisplay 1))
	(:endline))
)
