; Ce petit programme traduit le fichier de donne'es du testlap
; ../lltest/testlddata.ll en un pseudo module testdata.lo
; pour pouvoir e^tre compile' et teste' dans Ce_Lisp.




(defun makelo ()
  (with ((inchan (openi "../../lltest/lap.lt"))
	 (outchan (openo "testlap.lo")))
	(let ((#:system:print-for-read t))
	  (print '(defvar :test-p ()))
	  (print '(defun check (:xxx :yyy)
		    (when :test-p (print "       " :xxx))
		    (let ((:val (eval :xxx)))
		      (unless (boundp ':yyy) (setq :yyy "<<< undef >>>"))
		      (unless (boundp ':val) (setq :val "<<< indef >>>"))
		      (if (equal :val :yyy)
			  ()
			  (print "*** TESTLAP erreur pour " :xxx)
			  (print "devrait etre " :yyy " et non pas " :val)))))
	  (print '(loader '((fentry #:llcp:nlist subr0)
			    (pop a3)
			    (mov nil a1)
			    (bra 4)
			 3  (pop a2)
			    (jcall xcons)
			    (mov a1 a1)   ; test modtoc.ll
			 4  (sobgez a4 3)
			    (bri a3)
			    (fentry #:llcp:errwna subr2)
			    (mov a2 a3)
			    (mov 'errwna a2)
			    (jmp error)
			    (end))))
	  (untilexit eof
	     (setq lu (read))
	     (if (not (and (consp lu) (eq (car lu) 'test)))
		 (print lu)
	         (makeloaux (cdr lu))))
	  (close (outchan)))))


(defun makeloaux (exp)
  (print `(print ,(nextl exp)))
  (print `(setq :test-p ,(nextl exp)))
  (let (e)
    (while exp
      (setq e (nextl exp))
      (if (and (consp e) (eq (car e) 'loader))
	  (print `(loader ',(cadr e)))
	  (print `(check ',e ',(nextl exp)))))))
				  
(makelo)
