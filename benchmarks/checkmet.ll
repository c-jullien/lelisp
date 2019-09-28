;;;
;;; CHECKMET:  The Le-Lisp Benchmarks (0)
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/checkmet.ll,v $
;;; $Date: 2016/05/21 16:28:01 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (featurep 'countcalls)  (libloadfile 'countcalls t))

(add-feature 'checkmet)

;;; CHECK and METER 

(defun check-value (expr value)
  (let ((actual-value (eval expr)))
    (when (nequal actual-value value)
	  (print "** the value of " expr
		 " has to be " value
		 " not " actual-value))))

(defmacro perform-meter (expr)
  `(progn (count-calls-init)
	  ,expr
	  (count-calls-stop)
	  ))




