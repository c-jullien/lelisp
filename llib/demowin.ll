;;;
;;; DEMOWIN:  a simple demo of TOPWIN
;;;
;;; $Source: /usr/cvs/lelisp/llib/demowin.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------



(defun demowindow ()
  (ifn (featurep 'window)
       (error 'demo "No window, try (topwindow t) ..." ())
       (let ((w1) (w2) (w3))
	 (protect
	  (progn (setq w1 (create-window '#:window:tty
					 1 1  600 400 "Hanoi 1" 0 1)
		       w2 (create-window '#:window:tty 
					 200 200 600 400 "Hanoi 2" 0 1)
		       w3 (create-window '#:window:tty 
					 400 400 600 400 "Hanoi 3" 0 1))
		 (bitmap-refresh)
		 (progn (with ((current-window w1)) (hanoi 6))
			(with ((current-window w2)) (hanoi 7))
			(with ((current-window w3)) (whanoi 6))))
	  (kill-window w1)
	  (kill-window w2)
	  (kill-window w3)))))
