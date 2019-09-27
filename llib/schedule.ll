;;;
;;; SCHEDULE:  basic schedulers.
;;;
;;; $Source: /usr/cvs/lelisp/llib/schedule.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(unless (>= (version) 15.2)
        (error 'load 'erricf 'schedule))

(defvar #:sys-package:colon 'schedule)


;;;
;;; Initialization of the CLOCK ITsoft.
;;;

(defvar #:system:clock-tick 0.05)

(defun clock ()
  (when (debug) (princn #/.))
  (suspend))

(defmacro clockstart ()
  `(clockalarm #:system:clock-tick))

(defmacro clockstop ()
  `(clockalarm 0.))

;;;
;;; Basic schedulers
;;;

(defvar :ll)

(df parallel :ll
    ;; evaluates in parallel the expressions in :ll
    ;; returns () when all the expressions are evaluated.
    (without-interrupts
     (let ((:l (append :ll ())))   ; to avoid the physical modifications
       (while :l
	 (schedule (lambda (:v)
		     (newr :l (list 'resume (kwote :v)))) 
		   (let ((:e (nextl :l)))
		     ;; this LET has to be in the scope
		     ;; of the "schedule" activation block.
		     (clockstart)
		     (with-interrupts (eval :e))
		     (clockstop)))))))

(df parallelvalues :ll
    ;; evaluates in parallel the expressions in :ll
    ;; returns a list of values (same order than :ll)
    (without-interrupts
     (let ((:ltask ())                      ; suspended tasks
	   (:l :ll)                         ; what we have to do
	   (:r (makelist (length :ll) ()))  ; list of returned values
	   (:i -1))                         ; slot counter
       (while (or :l :ltask)
	 (schedule (lambda (:v) (newr :ltask :v))
		   (clockstart)
		   (ifn :l
			(resume (nextl :ltask))
			(let ((:e (nextl :l)))
			  ;; this LET has to be in the scope
			  ;; of the "schedule" activation block.
			  (incr :i)
			  (rplaca (nthcdr :i :r)
				  (with-interrupts (eval :e)))))
		   (clockstop)))
       :r)))

(df tryinparallel :ll
    ;; evaluates in parallel the expressions in :ll
    ;; returns the first computed value and stop the
    ;; remaining evaluations.
    (without-interrupts
     (let ((:ltask ())
	   (:l :ll))
       (tag :return-value
	    (while (or :l :ltask)
	      (schedule (lambda (:v) (newr :ltask :v))
			(clockstart)
			(let ((:e (nextl :l)))
			  ;; this LET has to be in the scope
			  ;; of the "schedule" activation block.
			  (if :e
			      (exit :return-value
				    (prog1
					(with-interrupts
					 (eval :e))
				      (clockstop))))
			  (resume (nextl :ltask)))))))))
         

(defmacro progn-no-suspend :body
  ;; evaluates the expressions without interrupts
  `(schedule resume ,@:body))

(defmacro letparallel (:lvar . :body)
  ;; LET in which the variable values are evaluated in parallel
  ;; the final binding is also performed in parallel
  `(letvq ,(mapcar 'car :lvar)
	  (parallelvalues ,@(mapcar 'cadr :lvar))
	  ,@:body))

