;;;
;;; PRGCINFO:  Print GC infos.
;;;
;;; $Source: /usr/cvs/lelisp/llub/prgcinfo.ll,v $
;;; $Date: 2016/05/21 10:36:08 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is a contribution of Le-Lisp version 15.
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;; Print GC Infos in a more readable way than (GCINFO)


;;; Use : (PRGCINFO) prints in a readable form the actual sizes
;;; of the different types of objets present in memory.

;;; A new contrib PRINTGCINFO (with FORMAT) is even more readable .....



(defvar #:sys-package:colon 'prgcinfo)

;;; compute the size of a pointer.

(defvar :ptr
  ;; the size (in byte) of a Le-Lisp Pointer.
  (selectq (system)
       ((|Calphaosf| |Calphavms| alphaosf)   8)
       (t                                    4)))

(defvar :ptr2 (* :ptr 2))
(defvar :ptr8 (* :ptr 8))

(defvar :initial   (gcinfo t))

(defvar :list-name       '(cons symbol string vector float fix  heap code))
(defvar :list-size       '(10   12     14     16     18    20   22   24))
(defvar :list-freq       '(1    2      3      4      5     6    7    ()))
(defvar :size-obj   (list :ptr2 :ptr8  :ptr2  :ptr2  :ptr2 :ptr 1     1))


(defun prgcinfo ()
    (with ((outchan ()))
          (print "Used memory in byte:")
	  (let ((:total 0.)
		(:current (gcinfo)))
	       (mapc (lambda (name freq size sobj)
		       (let ((used (- (:intval (nth size :initial) sobj)
				      (:intval (nth size :current) sobj))))
			 (unless (or (= used 0) (= used 0.0))
				 (prin name ": ")
				 (outpos 10)
				 (prin (when (fixp freq)
					     (nth freq :current)))
				 (outpos 14)
				 (print used)
				 (incr :total used))))
		     :list-name
		     :list-freq
		     :list-size
		     :size-obj)
	       (print "Total     =   " :total)))
    'prgcinfo)
		

(defun :intval (n sobj)
    (* sobj
       (if (consp n)
	   (* (car n) 1024)
	   n)))

(print "(prgcinfo) to see the values.")
