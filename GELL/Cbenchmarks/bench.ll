; Lance les benchs de GELL 15.26

(loadfile "/nfs/lelisp15/work/Celab/startll.le" t)
(loadfile "/nfs/lelisp15/work/Celab/format.le" t)


(check-for-unresolved-references)

; charge la valeur de "list-results-ok"
(setq list-results-ok ())
(catcherror t (loadfile "/nfs/work/lelisp/benchmarks/Results/results.ll" t))

; PK a change' de nom ...
(setq list-results list-results-ok)

(defvar :test-list  '(

    ; file or   test      test          check          meter         repetition   use-gc-p
    ; module    name      function      function       function      factor

    (fib20      fib20     test-fib20    check-fib20    meter-fib20   10           ())
    (tak        tak       test-tak      check-tak      meter-tak     10           ())
    (stak       stak      test-stak     check-stak     meter-stak     5           ())
    (ctak       ctak      test-ctak     check-ctak     meter-ctak     5           ())
    (takl       takl      test-takl     check-takl     meter-takl     5           ())
    (takr       takr      test-takr     check-takr     meter-takr    10           ())
    (boyer      boyer     test-boyer    check-boyer    meter-boyer    1           t)
    (browse     browse    test-browse   check-browse   meter-browse   1           t)
    (destru     destru    test-destru   check-destru   meter-destru   5           ())
    (traverse   travinit  test-travinit check-travinit meter-travinit 1           ())
    ( ()        travrun   test-travrun  check-travrun  meter-travrun  1           ())
    (deriv      deriv     test-deriv    check-deriv    meter-deriv    5           t)
    (dderiv     dderiv    test-dderiv   check-dderiv   meter-deriv    5           t)
    (div        div2iter  test-div2iter check-div2iter meter-div2iter 5           t)
    ( ()        div2recur test-div2rec  check-div2rec  meter-div2rec  5           t)
    (fft        fft       test-fft      check-fft      meter-fft      1           ())
    (puzzle     puzzle    test-puzzle   check-puzzle   meter-puzzle   1           ())
    (triang     triang    test-triang   check-triang   meter-triang   1           ())


))

(defvar :in-test-p ())
(defun gcalarm () (when :in-test-p (print "GC ----")))

(defvar :nb-of-test 0)
(defvar :ratio-list ())
(defvar :list-of-results ())
(defvar :list-of-complice ())

(defun do-bench (name check-p)
   ; re'alise les tests GELL pour la machine "name"
   (untilexit found
       (cond
	 ((null list-results) (exit found))
	 ((eqstring (caddr (caar list-results)) name)
	  (setq :list-of-complice (car list-results))
	  (exit found))
	 (t (nextl list-results))))
   (let ((#:system:print-for-read ())
	 (file (catenate name ".log")))
     (print "Output on file " file)
 (with ((rmargin (add1 (slen (outbuf)))))
     (with ((outchan (openo file)))
	 (print "; results of GELL Benchmarks")
	 (print)
	 (print (date))
	 (print)
	 (print "; Elaborating ... ")
	 (loadfile (catenate "../../Cbenchmarks/checkmet.le") t)
	 (let ((:testnumber 0))
	   (mapc (lambda ((module name test check meter rep-factor))
		   (when module
			 (print "Elaborating " (incr :testnumber) " : " name)
			 (loadfile (catenate "../../Cbenchmarks/" module ".le") t)))
		 :test-list)
	   (check-for-unresolved-references))
	 (print)
	 (when check-p
	       (print "; Checking .....")
	       (let ((:testnumber 0))
		 (mapc (lambda ((file name test check meter rep-factor))
			 (print "Checking " (incr :testnumber) " : " name)
			 (funcall check))
		       :test-list))
	       (print))
	 (when :list-of-complice
	       (print "I found the complice values for " name
		      " = " :list-of-complice))
	 (print)
	 (mapc (lambda ((file name test check meter rep-factor gc-use-p))
		 (test file name test rep-factor gc-use-p))
	       :test-list)
	 (rmargin 60)
	 (print)
	 (setq :ratio-list (nreverse :ratio-list))
	 (print "GELL: average on " 15 
		" tests : " (/ (apply '+ (firstn 15 :ratio-list)) 15))
	 (print "GELL: average on " :nb-of-test 
		" tests : " (/ (apply '+ (firstn :nb-of-test :ratio-list)) :nb-of-test))
	 (print)
	 (if :list-of-complice
	     (progn
	       (prin "((")
	       (let ((#:system:print-for-read t)) (prin (caar :list-of-complice)))
	       (prin " ")
	       (let ((#:system:print-for-read t)) (prin "[C]"))
	       (prin " ")
	       (let ((#:system:print-for-read t)) (prin (caddar :list-of-complice)))
	       (prin " ")
	       (let ((#:system:print-for-read t)) (prin "GELL 25"))
	       (print ")")
	       (print (reverse :list-of-results))
	       (print ")"))
	   (progn
	     (print (reverse :list-of-results))))
	 (print)
	 (print)
	 (print "Total = " (apply '+ (mapcar 'cadr :list-of-results)))
	 (print)
	 (close (outchan))))))
   

(defun test (module name test-fnt rep-factor use-gc-p)
   (let ((val-complice (numberp (car (cassoc name
					     (cadr :list-of-complice))))))
     (incr :nb-of-test)
     (print "Test : " test-fnt)

     (let ((:bestime 1000.)
	   (:to-eval (list test-fnt 1))
	   (:runtime))
       (gc)
       (repeat rep-factor
	       (when (and (neq rep-factor 1) use-gc-p) (gc))
	       (let ((:in-test-p t))
		 (setq :runtime (time :to-eval)))
	       (when (< :runtime :bestime)
		     (setq :bestime :runtime)))
       (newl :list-of-results (list name :bestime))
       (if (numberp val-complice)
	   (progn (newl :ratio-list (/ :bestime val-complice))
		  (print " GELL: " name " = " :bestime
                         " complice = " val-complice
			 " ratio = " (/ :bestime val-complice)))
	   (progn (newl :ratio-list 1.)
		  (print " GELL: " name " = " :bestime))))))







