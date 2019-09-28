;;;
;;; ARRAY:  the array facility.
;;;
;;; $Source: /usr/cvs/lelisp/llib/array.ll,v $
;;; $Date: 2016/05/21 10:36:04 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------



(unless (>= (version) 15.2)
        (error 'load 'erricf 'array))

;;; All these functions are "autoload" in the minimal system.

(defun makearray (arg1 . #:system:larg)
  ;; creates an array (at least 1 dimension)
  (if #:system:larg
      (let ((result (makevector arg1 ())))
	(for (i 0 1 (1- arg1)) 
	     (vset result i (apply 'makearray #:system:larg)))
	result)
      arg1))

(defmacro aref (inst . #:system:larg)
  ;; access to an element of an array
  (cond ((null #:system:larg) inst)
	((atom #:system:larg) (error 'aref 'errwna #:system:larg))
	(t `(vref (aref ,inst ,.(nreverse (cdr (reverse #:system:larg))))
		  ,(car (last #:system:larg))))))
         
(defmacro aset (inst . #:system:larg)
  ;; writes an element of an array
  (cond ((atom #:system:larg) (error 'aset 'errwna #:system:larg))
	((consp (cdr #:system:larg))
	 `(vset (aref ,inst ,.(nreverse (cddr (reverse #:system:larg))))
		,(cadr (reverse #:system:larg)) 
		,(car (last #:system:larg))))
	(t inst)))

