;;;
;;; testlap.ll:  tests for loaders
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testlap.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------



(unless (>= (version) 15.2)
        (error 'load 'erricf 'testlap))
 
;;; This file executes tests of loader.
;;; Tests must be a success before using compilers.


(defvar #:sys-package:colon 'testlap)

(unless (boundp ':speak)       ; the default. loader is not speaky
	(defvar :speak ()))

(defvar deb-code (#:system:ccode))
(defvar timetest 0)           ; total time for tests.

(de #:testlap:reset () (#:system:ccode deb-code))

(de #:testlap:mem (at . n) (memory-dump (valfn at) (or (car n) 9)))

(df test l
    (let (obj val res speak-val? (time1 (runtime)) time2)
         (prin (nextl l))(flush)
         (setq speak-val? (nextl l))
         (while l
                (setq obj (nextl l))
                (if (and (consp obj) (eq (car obj) 'loader))
		    (loader (cadr obj) (or (cddr obj) :speak))
		    (setq res (catcherror t (eval obj)))
		    (setq res (if (consp res)
				  (car res)
				'error))
		    (setq val (nextl l))
		    (cond ((nequal val res)
			   (terpri)
			   (prin "**** value of " obj
				 " must be " val " but is " res)
			   (flush))
			  (speak-val?
			   (terpri)
			   (prin "     value of " obj
				 " is " val )
			   (flush)))))
	 (setq time2 (runtime))
	 (let ((time (fix (* 1000 (- time2 time1)))))
	   (setq timetest (+ timetest time))
	   (setq time (string time))
	   (prin (catenate (makestring (- 4 (slen time)) #\sp) time) " ms"))
	 (terpri)
	 ))


(loadfile
   (catenate #:system:lltest-directory
             "lap.lt")
   ())

(#:testlap:reset)
