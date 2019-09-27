;;;
;;; MINIMORE:  The MORE controler.
;;;
;;; $Source: /usr/cvs/lelisp/llib/minimore.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15.2)
        (error 'load 'erricf 'minimore))

(defvar #:sys-package:colon 'minimore)

;;;
;;; How to simulate the UNIX more command in Le-Lisp.
;;;

(defvar :count (tyymax))
(defvar :string "--More--")

(defun  more ()
  ;; starts MORE
  (unless (memq 'minimore #:sys-package:itsoft)
	  (setq #:sys-package:itsoft
		(cons  'minimore #:sys-package:itsoft))))

(defun  morend ()
  ;; ends MORE
  (setq #:sys-package:itsoft
	(delq 'minimore #:sys-package:itsoft)))

(defun  :bol ()
  ;; for each input line, reset the counter.
  (when (null (inchan)) 
	(setq :count (tyymax)))
  (super-itsoft '#.#:sys-package:colon 'bol ()))

(defun  :eol ()
  ;; for each output line, increment the counter and interpret the command.
  (when (null (outchan))
	(when (eq :count 0)
	      (tystring :string (slen :string))
	      (selectq (tyi)
		       ((#^M #^J)
			;; display one line
			(setq :count 1))
		       (#^D 
			;; display half screen
			(setq :count (div (tyymax) 2)))
		       (#/  
			;; display a full screen
			(setq :count (tyymax)))
		       (#/q 
			;; quit MORE
			(setq :count (tyymax))
			(for (i (sub1 (slength :string)) -1 0)
			     (tyback (chrnth i :string)))
			(fillstring (outbuf) 0 #\sp (outpos))
			(outpos 0)
			(exit #:system:toplevel-tag))
		       (t (setq :count 1)))
	      ;; clear the string "more?"
	      (for (i (sub1 (slength :string)) -1 0)
		   (tyback (chrnth i :string))))
	(setq :count (sub1 :count)))
  ;; the real work of the ITsoft
  (super-itsoft '#.#:sys-package:colon 'eol ()))


