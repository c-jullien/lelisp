;;;
;;; DEFS:  System Function Definitions and Macros.
;;;
;;; $Source: /usr/cvs/lelisp/llib/defs.ll,v $
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
        (error 'load 'erricf 'defs))
 
(defvar #:sys-package:colon 'system)


;;;
;;; Control the redefinition of functions
;;;

(defvar :redef-flag t)

;;;
;;; Messages
;;;

(defmessage :errtwicedef (french "fonction rede'finie")
                         (english "redefined function"))
(defmessage :errnocomp   (french "fonction incompatible")
                         (english "incompatible function"))
(defmessage :errnulinc   (french "incre'ment nul")
                         (english "null increment"))


;;;
;;; Explicit macro expansion.
;;;
 
(defun macroexpand (:x)
  ;; expand recursively a form
  (cond ((atom :x) :x)
	((symbolp (car :x))
	 (cond ((eq (typefn (car :x)) 'macro)
		(macroexpand (apply (cons 'lambda (valfn (car :x))) :x)))
	       ((eq (typefn (car :x)) 'dmacro)
		(macroexpand 
		 (apply (cons 'lambda (valfn (car :x))) (cdr :x))))
	       ((eq (typefn (car :x)) 'msubr)
		(macroexpand 
		 (call (valfn (car :x)) :x () ())))
	       ((eq (typefn (car :x)) 'dmsubr)
		(macroexpand 
		 (call (valfn (car :x)) (cdr :x) () ())))
	       ((eq (car :x) 'quote) :x)
	       (t (let ( (l ()) )
		    (while (consp :x) (newl l (macroexpand (nextl :x))))
		    (prog1 (nreverse l) (rplacd l :x)) ))))
	(t (let ( (:l ()) )
	     (while (consp :x) (newl :l (macroexpand (nextl :x))))
	     (prog1 (nreverse :l) (rplacd :l :x)) ))))

(defun macroexpand1 (:x)
  ;; perform ONE macro expansion.
  (cond ((eq (typefn (car :x)) 'macro)
	 (apply (cons 'lambda (valfn (car :x))) :x))
	((eq (typefn (car :x)) 'dmacro)
	 (apply (cons 'lambda (valfn (car :x))) (cdr :x)))
	((eq (typefn (car :x)) 'msubr)
	 (call (valfn (car :x)) :x () ()))
	((eq (typefn (car :x)) 'dmsubr)
	 (call (valfn (car :x)) (cdr :x) () ()))
	(t :x)))
 
;;;
;;; The Variable/Function and the WITH form
;;;
 
(defmacro with (:l . :body)
  (let ((:var (let ((n -1))
		(mapcar (lambda (x)
			  (symbol 'with (concat "arg" (incr n))))
			:l))))
    `(let (,@(mapcar (lambda (:var :l) 
		       (list :var 
			     (or (consp (firstn (1- (length :l))
						:l))
				 (error 'with 'errsxt :l))))
		     :var
		     :l))
       (protect
	(progn ,@:l ,@:body)
	,@(mapcar (lambda (:var :l)
		    (append1 (firstn (1- (length :l))
				     :l) 
			     :var))
		  ;; inverting the 2 lists, restore the values
		  (nreverse :var)
		  (reverse :l) )))))


;;;
;;; Auxiliary functions for the defining forms.
;;;
 
(defun :def-check-all (namelarg fnt)
  ;; test if there are, at least, 2 arguments.
  (unless (consp (cdr namelarg))
	  (error fnt 'errnla (cdr namelarg)))
  (let ((name (car namelarg)) (larg (cadr namelarg)))
    ;; test a complete definition.
    ;; of name: name
    ;; with the argument list: larg
    ;; the name of the defining form is: fnt
    ;; 1 - test the name
    (unless (variablep name)
	    (error fnt 'errbdf name))
    ;; 2 - test the parameter list
    (:def-check-larg larg name ())
    ;; 3 - test the redefinition
    (when (and (not :redef-flag) 
	       (typefn name))
	  (printerror  fnt ':errtwicedef name))
    ;; 4 - untrace the funtion if needed
    (when (memq name #:trace:trace)
	  (eval `(untrace ,name)))
    ;; 5 - save the old definition
    (when (and :previous-def-flag 
	       (typefn name))
	  (putprop name
                   (getdef name)
                   ':previous-def))
    ;; 6 - set the flag "loaded-from-file"
    (when :loaded-from-file
	  (putprop name
                   :loaded-from-file
                   ':loaded-from-file))))

(defun :def-check-larg (l fnt lpar)
  ;; raise the ERRBPA error for the function "fnt" if the list "l"
  ;; don't contain symbolic parameters.
  ;; "lpar" is a flat parameter list
  ;; check is a name occurs twice.
  (:def-check-larg-aux l fnt))

(defun :def-check-larg-aux (l fnt)
  (cond ((null l) t)
	((variablep l)
	 (if (memq l lpar)
	     (error fnt 'errbpa l)
	   (newl lpar l)))
	((and (consp l) (car l))
	 (if (and (:def-check-larg-aux (car l) fnt)
		  (:def-check-larg-aux (cdr l) fnt))
	     t
	     ()))
	(t (error fnt 'errbpa l))))
 
;;;
;;; Redefinitions
;;;

(defun :resetfn (symbol typefn lambda)
  (let ((l ()))
    (newl l `(fentry ,symbol ,typefn))
    (when (eq typefn 'fsubr)
	  (newl l `(push ',lambda)))
    (when (memq typefn '(subr1 subr2 subr3 fsubr))
	  (newl l '(push a1)))
    (when (memq typefn '(subr2 subr3))
	  (newl l '(push a2)))
    (when (eq typefn 'subr3)
	  (newl l '(push a3)))
    (unless (eq typefn 'fsubr)
	    (newl l `(mov ',lambda a1)))
    (unless (eq typefn 'nsubr)
	    (newl l
		  `(mov ',(selectq typefn
                                   (subr0 0) (subr1 1) (subr2 2) (subr3 3)
                                   (fsubr 2))
			a4)))
    (if (eq typefn 'fsubr)
	(newl l '(jmp apply))
      (newl l '(jmp #:llcp:ffuncall)))
    (newl l '(end))
    (loader (nreverse l) ())))

(defun resetfn (symbol typefn valfn)
  (let ((otypefn (typefn symbol)))
    (if (and (memq otypefn '(subr0 subr1 subr2 subr3 nsubr fsubr))
	     (featurep 'loader)) ; needs the loader
	(cond ((eq otypefn typefn))
	      ((and (eq 'expr typefn)
		    (selectq otypefn
			     (subr0
			      (null (car valfn)))
			     (subr1
			      (and (consp (car valfn)) 
				   (null (cdr (car valfn)))))
			     (subr2
			      (and (consp (car valfn))
				   (consp (cdr (car valfn)))
				   (null (cddr (car valfn)))))
			     (subr3
			      (and (consp (car valfn)) 
				   (consp (cdr (car valfn))) 
				   (consp (cddr (car valfn))) 
				   (null (cdddr (car valfn)))))
			     (nsubr
			      (or (variablep (car valfn))
				  (variablep (cdr (last (car valfn))))
				  (ge (length (car valfn)) 4)))))
	       (:resetfn ':bidon otypefn (cons 'lambda valfn))
	       (setfn symbol (typefn ':bidon) (valfn ':bidon))
	       (putprop symbol (cons typefn valfn) 'resetfn))
	      ((and (eq 'fexpr typefn)
		    (eq 'fsubr otypefn))
	       (:resetfn symbol otypefn (cons 'flambda valfn))
	       (putprop symbol (cons typefn valfn) 'resetfn))
	      (t
	       (when (and (null #:system:redef-flag)
			  (null (getprop symbol 'autoload)))
		     (printerror 'resetfn ':errnocomp  symbol))
	       (setfn symbol typefn valfn)))
      (setfn symbol typefn valfn)
      (when (and (featurep 'compiler)
		 (macro-openp symbol))
	    (remove-macro-open symbol))))
  symbol)

;;;
;;; redefinition of the defining forms
;;;
(setfn 'de 'fexpr 
    '(:l
       (:def-check-all :l 'de)
       (resetfn (car :l) 'expr (cdr :l))))
 
(setfn 'df 'fexpr 
    '(:l
       (:def-check-all :l 'df)
       (resetfn (car :l) 'fexpr (cdr :l))))
 
(setfn 'dm 'fexpr 
    '(:l
       (:def-check-all :l 'dm)
       (setfn (car :l) 'macro (cdr :l))))
 
(setfn 'dmd 'fexpr 
    '(:l
       (:def-check-all :l 'dmd)
       (setfn (car :l) 'dmacro (cdr :l))))
 
(setfn 'defmacro 'fexpr 
    '(:l
       (:def-check-all :l 'defmacro)
       (setfn (car :l) 'dmacro (cdr :l))))

(setfn 'defun 'fexpr 
    '(:l
       (:def-check-all :l 'defun)
       (resetfn (car :l) 'expr (cdr :l))))
 
(setfn 'ds 'fexpr 
    '(:l
       (:def-check-all :l 'ds)
       (setfn (car :l) (cadr :l) (caddr :l))))
 
;;;
;;; All the varieties of LET
;;;


(defmacro letn (:name :larg . :body)
  `(flet ((,:name ,(mapcar 'car `,:larg) ,@:body))
	 (,:name ,@(mapcar 'cadr `,:larg)))))))))

(defmacro slet (l . :body)
  (cond ((null l) `(let () ,@:body))
	((cdr l) `(let (,(car l)) (lets ,(cdr l) ,@:body)))
	(t `(let (,(car l)) ,@:body))))

(synonym 'lets 'slet)
(synonym 'let* 'slet)

;;; compatibility Le-lisp V16

(synonym 'dynamic-let 'let)

(df dynamic (name)
    ;; dynamic reference  (for the defsetf, cf setf.ll)
    (symeval name))


;;;
;;; FOR control structure
;;;

;;; syntax : (for (var init step end) e1 ... eN) <implicit PROGN>)
;;; The variable <var> is declared locally and varies from <init> to <end>
;;; included.
(eval-when (load eval compile)
(defun :generate-for-3 (test)
  `(until (,test ,:var ,:end)
	  ,@:body
	  (setq ,:var (,_+ ,:var ,:step))))

(defun :generate-for-2 (_> _< _+)
  (let (stepnum)
    (when (numberp :init)
	  (unless (funcall :_pred :init)(error :_for :_err :init)) )
  `(let ((,:var ,:init)
	 ,@(unless (or (numberp :step)
		       (symbolp :step))
		   (prog1 `((#:system:for:arg1 ,:step))
		     (setq :step '#:system:for:arg1)))
	 ,@(unless (or (numberp :end)
		       (symbolp :end))
		   (prog1 `((#:system:for:arg2 ,:end))
		     (setq :end '#:system:for:arg2)))
	 )
     ,@(if (numberp :step)
	   (progn
	     (unless (funcall :_pred :step)(error :_for :_err :step))
	     (setq stepnum :step)
	     ())
	 `((unless (,:_pred ,:step)(error ',:_for ',:_err ,:step))))
     ,@(if (numberp :end)
	   (unless (funcall :_pred :end)(error :_for :_err :end))
	 `((unless (,:_pred ,:end)(error ',:_for ',:_err ,:end)))) 

     ,(cond
       ((null stepnum)
	`(cond ((> ,:step 0)
		,(:generate-for-3 _>))
	       ((< ,:step 0)
		,(:generate-for-3 _<))
	       (t (error ',:_for ':errnulinc 0))) )
       ((> stepnum 0)
	(:generate-for-3 _>) )
       ((< stepnum 0)
	(:generate-for-3 _<) )
       (t (error :_for ':errnulinc 0)) )
     (progn ,@res))))

(defun :generate-for-1 (:var :init :step :end :res :body :_for :_pred :_err _> _< _+)
  (unless (variablep :var)
	  (error :_for 'errnva :var))
  (unless (and :init :step :end)
	  (error :_for 'errsxt (list :var :init :step :end)))
  (:generate-for-2 _> _< _+)
  )

;;; general FOR
(dmd for ((var init step end . res) . body)
     (:generate-for-1 var init step end res body
		      'for 'numberp 'errnna '> '< '+))

;;; integer FOR
(dmd ifor ((var init step end . res) . body)
     (:generate-for-1 var init step end res body
		      'ifor 'fixp 'errnia 'gt 'lt 'add))

;;; float FOR
(dmd ffor ((var init step end . res) . body)
     (:generate-for-1 var init step end res body
		      'ffor 'floatp 'errnfa 'fgt 'flt 'fadd))

)


;;;
;;;   PROG/PROG*/RETURN/DO/DO* control structures
;;;

(defun :generate-tagbody (:body)
  (when :body
	(if (every 'consp :body)
	    :body
	    (list (cons 'tagbody :body)))))
  
(defun :generate-block (:body :l)
  ;; ?!?!? check if the the value part (test and returned value for DO)
  ;; ?!?!? there are NO RETURN/RETURN-FROM.
  (if (tag ok (:generate-block-aux :body))
      `(block () ,:l)
      :l))

(defun :generate-block-aux (:body)
  (cond ((atom :body) ())
	((memq (car :body) '(return return-from)) (exit ok t))
	(t (any ':generate-block-aux :body))))

(defmacro prog :l
  ;; the form (prog) is correct
  (:generate-block (cdr :l)
		   (if (car :l)
		       `(let ,(car :l) ,@(:generate-tagbody (cdr :l)))
		       `(progn ,@(:generate-tagbody (cdr :l))))))

(defmacro prog* :l
  ;; the form (prog*) is correct
  (:generate-block (cdr :l)
		   (if (car :l)
		       `(let* ,(car :l) ,@(:generate-tagbody (cdr :l)))
		       `(progn ,@(:generate-tagbody (cdr :l))))))

(defmacro do (:lvar (:test . :result) . :body)
  (:generate-block :body
		   `(let ,(mapcar (lambda (x)
				    (list (car x) (cadr x)))
				  :lvar)
		      (until ,:test
			     ,@(:generate-tagbody :body)
			     ,@(let ((:x (mapcan
					  (lambda (x)
					    (when (consp (cddr x))
						  (list (car x) (caddr x))))
					  :lvar)))
				 (when :x `((psetq ,@:x)))))
		      (progn ,@:result))))

(defmacro do* (:lvar (:test . :result) . :body)
  (:generate-block :body
		   `(let* ,(mapcar (lambda (x)
				     (list (car x) (cadr x)))
				   :lvar)
		      (until ,:test
			     ,@(:generate-tagbody :body)
			     ,@(let ((:x (mapcan
					  (lambda (x)
					    (when (consp (cddr x))
						  (list (car x) (caddr x))))
					  :lvar)))
				 (when :x `((setq ,@:x)))))
		      (progn ,@:result))))

;;;
;;; The special control structure: BACKTRACK
;;;


(defmacro backtrack (:name :lvar . :body)
  (unless (symbolp :name)
	  (error 'backtrack 'errnaa :name))
  `(tag backtrack
	,@(if (null :lvar)
	      (mapcar (lambda (e)
			`(tag ,:name ,e (exit backtrack)))
		      :body)
	    `((let ((:backtrack (list ,@:lvar)))
		,@(mapcan (lambda (e)
			    `((tag ,:name
				   ,e (exit backtrack))
			      (desetq ,:lvar 
				      :backtrack)))
			  :body))))))


;;;
;;; CATCH-ALL_BUT is superseded by LOCK ...
;;;

(defmacro catch-all-but (tag . :body)
  `(lock (lambda (tag val)
	   (cond ((null tag) val)
		 ((memq tag ',tag) (evexit tag val))
		 (t (error 'catch-all-but errudt tag))))
	 ,@:body))


;;;
;;; An very inefficient closure construction.
;;;

;;;        (closure <lvar> <fnt>)
;;;            <lvar> list of variables to close
;;;            <fnt>  a LAMBDA or LAMBDA-NAMED function

(defun closure (lvarclot :f)
  (let ((listval (mapcar '(lambda (val) (list 'quote (eval val))) lvarclot))
	(:lvar (cadr :f))
	(:body (cddr :f)))
    `(lambda ,:lvar
       ((lambda ,lvarclot
	  (protect (progn ,@:body)
		   ,@(mapcar '(lambda (slot :var)
				`(rplaca (cdr ,`(quote ,slot))
					 ,:var))
			     listval  lvarclot)))
	,@listval))))

;;; some small exemples

 ; (setfn 'nextint 'expr
 ;        (let ((n 1))
 ;             (cdr (closure '(n) '(lambda () (setq n (1+ n))))))))))

 ; (setfn 'fib 'expr
 ;        (let ((x 1) (y 1))
 ;             (cdr (closure '(x y)
 ;                      '(lambda () (setq y (prog1 (+ x y) (setq x y)))))))))

