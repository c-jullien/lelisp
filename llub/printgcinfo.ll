;;;
;;; PRINTGCINFO:  Print GC Infos in a more readable way than (GCINFO)
;;;
;;; $Source: /usr/cvs/lelisp/llub/printgcinfo.ll,v $
;;; $Date: 2016/05/21 10:36:08 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is a contribution of Le-Lisp version 15.
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;;
;;; Print GC Infos in a more readable way than (GCINFO)
;;;

(unless (>= (version) 15.26)
        (error 'load 'erricf 'printgcinfo))

(defvar #:sys-package:colon 'printgcinfo)

;;; compute the size of a pointer.

(defvar :ptr
  ;; the size (in byte) of a Le-Lisp Pointer.
  (selectq (system)
       ((|Calphaosf| |Calphavms| alphaosf)   8)
       (t                                    4)))

(defvar :ptr2 (* :ptr 2))
(defvar :ptr8 (* :ptr 8))

(defvar :gcinfo-database (list (cons () (gcinfo t))))

(defvar :list-name '(    cons  symbol string vector float fix  heap  code))
(defvar :list-size '(    10    12     14     16     18    20   22    24))
(defvar :list-cont '(    1     2      3      4      5     6    7     ()))
(defvar :list-byte (list :ptr2 :ptr8  :ptr2  :ptr2  :ptr2 :ptr 1     1))


(defun save-gcinfo (name)
  ;; save a set a new values.
  (if (symbolp name)
      (setq :gcinfo-database (acons name (gc t) :gcinfo-database))
      (error 'save-gcinfo 'errsymb name))
  name)

(defun :get-gcinfo (name)
  (or (cassq name :gcinfo-database)
      (cassq ()   :gcinfo-database)))

(defun print-gcinfo rest
  (let ((format1 "~A~7T~4D~14T~10,0F~10,0F~34T~10,0F~10,0F~54T~10,0F~10,0F")
	(initial-gcinfo (if (symbolp (car rest))
			    (:get-gcinfo (car rest))
			    (error 'print-gcinfo 'errsymb (car rest))))
	(current-gcinfo (gc t))
	(total-call 0)
	(total-init 0.)
	(total-used 0.)
	(total-free 0.))
    (prinf "System name: ~S, pointer size: ~D" (system) :ptr)
    (terpri)
    (prinf "Type~9TCall~22T  Init~42T  Used~62T  Free")
    (terpri)
    (prinf "~20Tnb     size~40Tnb     size~60Tnb     size")
    (terpri)
    (mapc (lambda (name size byte call)
	    (let* ((ni   (:intval (nth size initial-gcinfo) 1))
		   (init (:intval (nth size initial-gcinfo) byte))
		   (nf   (:intval (nth size current-gcinfo) 1))
		   (free (:intval (nth size current-gcinfo) byte))
		   (nu   (- ni nf))
		   (used (- init free))
		   (call (if call (nth call current-gcinfo) 0)))
	      (incr total-call call)
	      (incr total-init init)
	      (incr total-used used)
	      (incr total-free free)
	      (prinf format1 name call ni init nu used nf free)
	      (terpri)))
	  :list-name
	  :list-size
	  :list-byte
	  :list-cont)
    (prinf format1 "Total" 
	   total-call 0. total-init 0. total-used 0. total-free)
    (terpri))
  'print-gcinfo)

(defun :intval (n byte)
  (* (if (consp n)
	 (+ (* (car n) 1024) (or (fixp (cdr n)) 0))
         n)
     byte))


(print ";; (print-gcinfo) to see the values.")
