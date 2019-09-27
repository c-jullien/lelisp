;;;
;;; BENCHMARKS:  The Le-Lisp Benchmarks Utility
;;;
;;; $Source: /usr/cvs/lelisp/benchmarks/benchmarks.ll,v $
;;; $Date: 2016/05/21 16:28:01 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;; This utility runs all the so-called "Gabriel's Benchmarks" in Le-Lisp.

(unless (>= (version) 15.2)
        (error 'load 'erricf 'benchmarks))

(defvar #:sys-package:colon 'benchmarks)

(unless (or (featurep '64bitfloats)
            (eq 0. 0.))
        (add-feature '64bitfloats))

(defmacro push (val var) `(setq ,var (cons ,val ,var)))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; The mininal Le-Lisp configuration used (see lelisp/<system>/recette/Bench)
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(nconc1 #:system:path (catenate #:system:directory "benchmarks/"))

(unless (featurep 'setf)        (loadmodule 'setf t))
(unless (featurep 'format)      (loadmodule 'format t))
(unless (featurep 'date)        (loadmodule 'date t))

(defvar :in-test-p ())
(defvar :runtime-in-gc 0.)
(defvar :gc-count 0)
(defvar :gc-values ())

(defun gc-before-alarm ()
  (when :in-test-p 
	(setq :runtime-in-gc (runtime))))

(defun gcalarm ()
  (when :in-test-p
	(newl :gc-values (fsub (runtime) :runtime-in-gc))
	(incr :gc-count)))

(compile-all-in-core)

(defun do-test ()
  (let ((:testnumber 0)
	(:list-of-results ()))
    (print)
    (print "; =========================================")
    (print ";  Benchmarks Le-Lisp version " (version) " : TEST ")
    (print "; =========================================")
    (print)
    (herald)
    (print "; " (list-features))
    (print "; " (date))
    (mapc (lambda ((file name test check meter rep-factor times))
	    ;; <file> module name
	    ;; <name> test name
	    ;; <test> test function name
	    ;; <check> check function name
	    ;; <meter> meter function name
	    ;; <rep-factor> repeat factor
	    ;; <times> # of running tests
	    (print)
	    (when file (loadmodule file))
	    (print "Test " (incr :testnumber) " : " name)
	    (let ((:runtime 0.)
		  (:bestime 1000.)
		  (:gc-values ())
		  (:gc-count 0))
	      (repeat rep-factor
		      (gc)
		      (let ((:in-test-p 
			     (not (and (eq name 'fft) ; cf gc-before-alarm
				       (featurep '64bitfloats)))))
			(setq :gc-values ())
			(setq :gc-count 0)
			(setq :runtime (runtime))
			(funcall test times)
			(setq :runtime
			      (fdiv (fsub (runtime) :runtime)
				    (float times)))
			)
		      (when (< :runtime :bestime)
			    (setq :bestime :runtime)))
	      (print "Total time for " name " = " :bestime " seconds.")
	      (when (neq :gc-count 0)
		    (print " including " :gc-count " GCs " 
			   (reverse :gc-values)))
	      (newl :list-of-results
		    (list name
			  :bestime)
		    )))
	  :test-list)
    (with ((rmargin 60))
	  (print)
	  (let ((#:system:print-for-read t))
	    (print (list (mcons "<<full system name and OS>>"
				(catenate "[" (string (system)) "]")
				"<<Nickname>>"
				(catenate "LL " (string (version)))
				(if (neq 0. 0.) (list '64bitfloats)))
			 (reverse :list-of-results))
		   ))
	  (print)
	  (print "Total = " (apply '+ (mapcar 'cadr :list-of-results)))
	  (print))
    'do-test))


(defun do-check ()
  (unless (featurep 'checkmet)
	  (loadmodule 'checkmet () t))
  (let ((:testnumber 0))
    (print)
    (print "; ==========================================")
    (print ";  Benchmarks Le-Lisp version " (version) " : CHECK ")
    (print "; ==========================================")
    (print)
    (mapc (lambda ((file name test check meter rep-factor times))
	    ;; <file> module name
	    ;; <name> test name
	    ;; <test> test function name
	    ;; <check> check function name
	    ;; <meter> meter function name
	    ;; <rep-factor> repeat factor
	    ;; <times> # of running tests
	    (when file (loadmodule file))
	    (print "Checking " (incr :testnumber) " : " name)
	    (funcall check))
	  :test-list))
  'do-check)

(defun do-meter ()
  (unless (featurep 'checkmet)
	  (loadmodule 'checkmet () t))
  (let ((:testnumber 0))
    (print)
    (print "; ==========================================")
    (print ";  Benchmarks Le-Lisp version " (version) " : METER ")
    (print "; ==========================================")
    (print)
    (mapc (lambda ((file name test check meter rep-factor times))
	    ;; <file> module name
	    ;; <name> test name
	    ;; <test> test function name
	    ;; <check> check function name
	    ;; <meter> meter function name
	    ;; <rep-factor> repeat factor
	    ;; <times> # of running tests
	    (when file
		  (setq file (catenate file #:system:lelisp-extension))
		  (print "Loading... " file)
		  (libloadfile file t))
	    (gc)
	    (print "Metering " (incr :testnumber) " : " name)
	    (with ((outchan (openo (catenate name ".mtr"))))
		  (print)
		  (print "Metering of " name ", no compiled mode.")
		  (print)
		  (funcall meter)
		  (count-calls-printn 20.)
		  (close (outchan))))
	  :test-list))
  'do-meter)


(defvar :test-list  '(

; file or   test      test          check          meter         rep-    times
; module    name      function      function       function      factor

(fib20      fib20     test-fib20    check-fib20    meter-fib20   10       10)
(tak        tak       test-tak      check-tak      meter-tak     10       10)
(stak       stak      test-stak     check-stak     meter-stak    10       1)
(ctak       ctak      test-ctak     check-ctak     meter-ctak    10       1)
(takl       takl      test-takl     check-takl     meter-takl    10       1)
(takr       takr      test-takr     check-takr     meter-takr    10       10)
(boyer      boyer     test-boyer    check-boyer    meter-boyer    1       1)
(browse     browse    test-browse   check-browse   meter-browse   1       1)
(destru     destru    test-destru   check-destru   meter-destru   5       1)
(traverse   travinit  test-travinit check-travinit meter-travinit 2       1)
( ()        travrun   test-travrun  check-travrun  meter-travrun  2       1)
(deriv      deriv     test-deriv    check-deriv    meter-deriv    1       1)
(dderiv     dderiv    test-dderiv   check-dderiv   meter-deriv    1       1)
(div        div2iter  test-div2iter check-div2iter meter-div2iter 5       1)
( ()        div2recur test-div2rec  check-div2rec  meter-div2rec  5       1)
(fft        fft       test-fft      check-fft      meter-fft      1       1)
(puzzle     puzzle    test-puzzle   check-puzzle   meter-puzzle   1       1)
(triang     triang    test-triang   check-triang   meter-triang   1       1)

))

(defun do-modules ()
  ;; compile all the files of the benchmarks
  (mapc (lambda (x) (when (and (car x) (symbolp (car x)))
			  (print "Compiling .. " (car x))
			  (let ((#:complice:parano-flag ()))
			    (compilemodule (car x)))))
	(cons '(checkmet) :test-list)))

(compile-all-in-core)

(print "(do-test)    to run the tests.")
(print "(do-check)   to check the tests.")
(print "(do-meter)   to perform meterings.")
(print "(do-modules) to build the modules (if cmplc is present).")


