;;;
;;; EXPAND:  LLM3/part2: The LLM3 generic expander.
;;;
;;; $Source: /usr/cvs/lelisp/lltool/expand.ll,v $
;;; $Date: 2016/05/21 14:44:51 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15)
        (error 'load 'erricf 'expand ))
 
;;; In order to create an expander memory-image, load the
;;; following files in this order:
;;;
;;; 1 - The LLM3 constants            ../lltool/llm3.ll
;;; 2 - The generic expander          ../lltool/expand.ll
;;; 3 - The predefined macros         ../lltool/macllm3.ll
;;; 4 - The machine specific macros   ../XXX/macXXX.ll


(defvar #:system:read-case-flag ())

(defvar #:sys-package:colon 'expand)

;;;
;;; Callinfg functions
;;;

(defun  expand ()
  (:expand-list-of-files  #:llm3:files))

(defun test ()
  (:expand-one-file))

;;;
;;; Global variables of the expander
;;;

(defvar :s-dir       "./s/")

;;;
;;; Main loop
;;;

(defun :expand-list-of-files (lfile)
  ;; expand a list of LLM3 files
  (while lfile
    (print "expand: expansion of: " (car lfile))
    (with ((inchan (#:llm3:openi-llm3 (car lfile)))
	   (outchan (openo (catenate :s-dir
				     (car lfile) ".s")))
	   (rmargin (add1 (slen (outbuf))))) ; GELL uses (very) long lines
	  (:expand-one-file)
	  (close (outchan)))
    (nextl lfile)))

(defun :expand-one-file ()
  (catcherror t
	      (let ((#:status:print-flag t)
		    (genlab-counter 0)
		    (in-if-stack    '(t))
		    (flag-pseudo    ()))
		(#:llm3:process-one-file ':apply-ins))))

(defun  :apply-ins (l) 
  ;; expand a line
  (let ((*label (car l))
	(*opcod (cadr l))
	(*arg1 (caddr l))
	(narg (getprop (cadr l) '#:llm3:narg))
	(genlab ())
	(f))
    (unless narg
	    (:err "undefined instruction" *opcod l))
    (if (or (and (fixp narg) (neq (length (cddr l)) narg))
	    (and (consp narg) (not (memq (length (cddr l)) narg))))
	(:err "wrong number of arguments" *opcod l))
    (if (consp narg)
	(nconc (last l)
	       (makelist (sub (car (last narg)) (length (cddr l))) ())))
    (cond ((eq *opcod 'ENDC) (nextl in-if-stack))
	  ((eq *opcod 'IFNE)
	   (newl in-if-stack 
		 (and (symbolp *arg1)
		      (neq (getvalue *arg1) 0))))
	  ((eq *opcod 'IFEQ)
	   (newl in-if-stack 
		 (and (symbolp *arg1)
		      (eq (getvalue *arg1) 0))))
	  (t (when (car in-if-stack)
		   (:prin-label *label) 
		   (when (getvalue 'STATLLM3)
			 (:prin-statop *opcod)
			 (mapc (lambda (op type)
				 (when type 
				       (:prin-statarg op)))
			       (cddr l)
			       (or (consp (getprop *opcod
						   '#:llm3:typarg))
				   (cirlist (getprop *opcod
						     '#:llm3:typarg))))
			 (mapc ':prin-spec-pro
			       (getprop *opcod '#:llm3Ltypspec)))
		   (setq f (getfn1 'expand *opcod))
		   (if f
		       (apply f (cddr l))
		       (error 'expand 'errudf l))
		   (when (getvalue 'STATLLM3)
			 (mapc ':prin-spec-epi
			       (getprop *opcod '#:llm3Ltypspec))))))))

(defun :err (m a l)
  (error 'expand m (list a l)))

;;;
;;; Macros definitions
;;;

(defvar :re-defvalue ())   	;; authorize redefinition of "defvalue"s

(df defvalue (name val)
    ;; definition of a value for the expander.
    ;; check for redefinitions.
    (let ((oval (getprop name ':value)))
      (if (and oval (nequal val (car oval)) (not :re-defvalue))
	  (error 'defvalue
		 "value redefined: "
		 (list name oval val))
	  (putprop name val '#:sharp:value)
	  (putprop name (list val) ':value))))

(defmacro getvalue (name)
  `(car (getprop ,name ':value)))

(defun pgetvalue (name)
  ;; get the value pf the symbol <name>
  ;; raise an error if a value can't be found.
  (let ((val (getprop name ':value)))
    (if (consp val)
	(car val)
        (error 'getvalue
	       "no value for"
	       name))))

(df defregister (name val)
    (putprop name t ':register)
    (putprop name (list val) ':value))

(df defins (name  . body)
    (setfn (symbol 'expand name) 
           'expr
           (cons (firstn (let ((n (getprop name '#:llm3:narg)))
			   (or n
			       (error 'defins "missing argument number for"
				      name))
			   (or (fixp n)
			       (car (last n))))
                         :list-args)
		 body)))

(df definstruct (name  . valfn)
    (setfn (symbol 'expand name) 
           'expr
           valfn))


;;;
;;; Common test functions
;;;

(defun register? (reg)
  (when (symbolp reg)
	(getprop reg ':register)))

(defun immvalue? (reg)
  (and (consp reg) (eq (car reg) '|#|)))

(defun immvalue0? (reg)
  (and (consp reg) (eq (car reg) '|#|) (eq (cadr reg) 0)))

;;;
;;; Macro characters for the print function
;;;

(dmc |\| ()
     (concat '*arg (read)))

(defvar :list-args  '(\1 \2 \3 \4 \5 \6))

(defun |[| ()
  (with ((typecn #/, cmsymb)
	 (typecn #/: cmsymb)
	 (typecn #/@ cmsymb))
	(flet ((|]| () (exit croch)))
	      (let ((l (list 'printinst)))
		(untilexit croch
		     (setq o (read))
                     (cond ((numberp o) 
			    (setq o (concat "*arg" o)))
                           ((eq o '|,|) (setq o ","))
                           ((eq o '|:|) (setq o ":"))
                           ((eq o '|@|) (setq o '(:genlab))))
                     (newl l o))
		(nreverse l))))))

(defun printinst l
  (while l 
    (cond ((atom (car l)) 
	   (:prin-at (nextl l)))
	  (t (:prin-cons (nextl l)))))
  (terpri))




(defun #:expand:lab (op)
  (:prin-label op))

