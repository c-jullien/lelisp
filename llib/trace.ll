;;;
;;; TRACE: Trace and Step facility.
;;;
;;; $Source: /usr/cvs/lelisp/llib/trace.ll,v $
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
        (error 'load 'erricf 'trace))

(add-feature 'debug)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; The TRACE mode
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defvar #:sys-package:colon 'trace)

;;;
;;; Error messages
;;;

(defmessage :ERRTNB (french "Je ne sais pas tracer une fonction &NOBIND")
                    (english "I don't know how to trace an &NOBIND function"))
(defmessage :ERRCNT (french "Je ne peux pas tracer")
                    (english "I can't trace"))
(defmessage :ERRKNT (french "Je ne sais pas tracer une fonction de ce type")
                    (english "I don't know trace a function of this type"))
(defmessage :ERRNTF (french "cette fonction n'e'tait pas trace'e")
                    (english "this function wasn't traced"))

;;;
;;; Global Variables
;;;

(defvar #:system:debug ())
(defvar *trace-input* ())       ; the command input channel
(defvar *trace-output* ())	; the trace output channel
(defvar #:step:auto-step ())    ; to set the automatic step

(defmacro :output body
  `(with ((outchan *trace-output*))
	 ,@body)))

(defvar :trace ())		; the list of traced functions

(defvar :last-untraced ())	; the list of untraced functions

(defvar :untracable		; the list of untracable functions
  '(cstep step unstep quote arg =))

;;;
;;; Auxiliary functions
;;;
 
(defun :flat (l)
  ;; flatten a list
  (let ((r)) (:flat-aux l) (reverse r)))
 
(defun :flat-aux (l)
  (cond ((null l) ())
	((atom l) (newl r l))
	(t (:flat-aux (car l)) (:flat-aux (cdr l)))))
 
;;;
;;; Trace functions
;;;

(defvar tracewindow ())
(defvar #:trace:windowp    t))

(df trace l
  (cond (l  ; trace the list of function <l>
	 (mapc ':trace-one l)
	 (when (and :trace
		    (featurep 'window)
		    (null tracewindow)
		    #:trace:windowp)
	       (setq tracewindow
		     (create-window '#:window:tty 
				    (div (bitxmax) 2) (mul (font-height) 3)
				    (div (bitxmax) 2) (bitymax)
				    "Le-Lisp : Trace" 0 1)))
	 l)
	(t #:trace:trace)))

(df untrace l
    ;; remove the trace of all the functions in the list <l>
    ;; or all the traced functions if <l> = ()
    (mapc ':untrace-one (setq :last-untraced (or l (setq l :trace))))
    (when (and (null :trace) (featurep 'window) tracewindow)
          (kill-window tracewindow)
          (setq tracewindow ()))
    l)

(defun :untrace-one (f)
  (let ((val (getprop f 'trace)))
    (if (atom val)
	(printerror 'untrace ':ERRNTF f)
      (cond
       ((getprop f 'resetfn&trace)     ; take care of resetfn
	(resetfn f (car val)(cdr val))
	(remprop f 'resetfn&trace))
       ((getprop f 'resetfn)		; the trace sets the resetfn
	(remprop f 'resetfn)
	(setfn f (car val) (cdr val)))
       (t				; the simple case
	(setfn f (car val) (cdr val))))
      (remprop f 'trace)
      (setq :trace (delq f :trace)))))

;;; A trace specifier (trace-one argument) has the format:
;;;   trace ::= fct
;;;          |  (fct [trace-spec]*)
;;;          |  ((fct*) [trace-spec]*)  ;  pas encore
;;; trace-spec ::= (wherein fct) | (wherein (fct*)) ;  pas encore
;;;             |  (entry expr*)
;;;             |  (exit  expr*)
;;;             |  (when  expr)   ; conditionnal trace
;;;             |  (break expr)   ; conditionnal break
;;;             |  (step expr)    ; conditionnal step
;;; 
;;; By default: (trace foo) =
;;;    (foo (entry (prin 'foo "--->") (print-parameters 'foo))
;;;         (exit  (prin 'foo "<---") (print #:trace:value))
;;;         (when t)
;;;         (break ())
;;;         (step ())
;;;    )

(defun default-specif (item)
  (selectq item
	   (entry
	    `((:output
	       (print
		',:fct " ---> "
		,@(if (index "subr" :ftype)
		      ;; no ` because of mapcan
		      (mapcan (lambda (u) (list u " ")) (:flat :larg))
		      (mapcan (lambda (u) (list (kwote u) "=" u " "))
			      (:flat :larg)))))))
	   (exit
	    `((:output (print ',:fct " <--- " :value))))
	   (when
	    '(t))			; (when t)
	   (break
	    ())				; no break
	   (step
	    ())				; no step
	   ))          

(defun parse-specif (specif)
  (mapcar (lambda (item) (or (assq item specif)
			     (cons item (default-specif item))))
	  '(entry exit when break step)))

(defvar :not-in-trace-flag t)
(defvar :step-in-trace-flag ())

;;;
;;; Used functions by the internal trace
;;;

(synonymq :if if)
(synonymq :let let)
(synonymq :when when)
(synonymq :with with)
(synonymq :progn progn)
(synonymq :itsoft itsoft)
(synonymq :and and)
(synonymq :or or)
(synonymq :call call)
(synonymq :calln calln)
(synonymq :boundp boundp)
(synonymq :eval eval)
(synonymq :traceval traceval)
(synonymq :eprogn eprogn)

(defun build-tracing-fval (specif)
  `(,:larg
    (unstep
     (:if :not-in-trace-flag
	  (:let ((:not-in-trace-flag ()))
		(setq :step-in-trace-flag ())
		(:when ,(car (cassq 'when specif))
		       ,(if (and (featurep 'window) #:trace:windowp)
			    `(:with (,(list 'current-window 'tracewindow))
				    ,@(cassq 'entry specif))
                            `(:progn ,@(cassq 'entry specif)))
		       (:when ,(car (cassq 'break specif))
			      (let ((:not-in-trace-flag t) 
				    (#:system:debug t))
				(:itsoft 'syserror
					 '(,:fct break tracebreak)))))
		(:let ((:value 
			(:if (:and ,(car (cassq 'when specif))
				   (:or :step-in-trace-flag
					,(car (cassq 'step specif))))
			     (:let ((:not-in-trace-flag t))
				   (step ,:call))
			     (:let ((:not-in-trace-flag t))
				   (cstep ,:call)))))
		      (:when ,(car (cassq 'when specif))
			     ,(if (and (featurep 'window) #:trace:windowp)
				  `(:with (,(list 'current-window
						  'tracewindow))
					  ,@(cassq 'exit specif))
				  `(:progn
				    ,@(cassq 'exit specif))))
		      :value))
	  (cstep ,:call)))))

(defvar :fct)                   ; the traced function
(defvar :ftype)                 ; it ftype
(defvar :larg)                  ; arguments, (pseudo-args for subr)
(defvar :call)                  ; how to call the function

(defun :trace-one (:fct)
  (let ((specif)
	(props))		; indicators to be setted after the setfn
    (when (consp :fct)
	  (setq specif (cdr :fct) :fct (car :fct)))
    (when (memq :fct :untracable)
	  (error 'trace ':ERRCNT :fct))
    (when (and (consp (valfn :fct))
	       (eq '&nobind (car (valfn :fct))))
	  (error 'trace ':ERRTNB :fct))
    (when (memq :fct :trace) (:untrace-one :fct))
    ;; special bindings
    (let ((:ftype (or (car (getprop :fct 'resetfn)) (typefn :fct)))
	  :larg :call
	  (fval (or (cdr (getprop :fct 'resetfn)) (valfn :fct))))
      (when (getprop :fct 'resetfn)
	    ;; no need to remove the resetfn indicator because setfn does it
	    (newl props '(t resetfn&trace)))
      (selectq :ftype
	       ((expr fexpr macro dmacro)
		(setq :larg  (car fval)
		      :call `(:progn ,@(cdr fval))))
	       (subr0
		(setq :larg  ()
		      :call `(:call ',fval () () ())))
	       ((subr1)
		(setq :larg '(:arg1)
		      :call `(:call ',fval :arg1 () ())))
	       (subr2
		(setq :larg '(:arg1 :arg2)
		      :call `(:call ',fval :arg1 :arg2 ())))
	       (subr3
		(setq :larg '(:arg1 :arg2 :arg3)
		      :call `(:call ',fval :arg1 :arg2 :arg3)))
	       ((fsubr msubr dmsubr)
		(setq :larg ':arg1
		      :call `(:call ',fval :arg1 () ())))
	       (nsubr
		(setq :larg ':arg1
		      :call `(:calln ',fval :arg1))))
      (cond ((null :ftype)
	     (printerror 'trace 'ERRUNK :fct))  
	    ((not (memq :ftype '(expr fexpr macro dmacro
				 msubr dmsubr subr0 subr1 subr2
				 subr3 fsubr nsubr)))
	     (printerror 'trace ':ERRKNT (list :fct :ftype)))
	    (t
	     (newl props (list (cons :ftype fval) 'trace))
	     (resetfn :fct
		      (or (car (memq :ftype '(expr fexpr macro dmacro)))
			  (cassq :ftype
				 '((subr1 . expr) (subr2 . expr)
				   (subr3 . expr) (subr0 . expr)
				   (fsubr . fexpr) (nsubr . expr)
				   (msubr . macro) (dmsubr . dmacro))))
		      (build-tracing-fval (parse-specif specif)))
	     ;; now set the indicators
	     (newl :trace :fct)
	     (mapc (lambda ((value prop))
		     (putprop :fct value prop))
		   props)))))
  )




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Step Mode
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(setq #:sys-package:colon 'step)

;;;
;;; Error Messages
;;;

(defmessage :ERRNONOBIND
  (french  "je ne peux pas suivre une fonction &NOBIND")
  (english "I can't step an &NOBIND function"))

(defmessage :ERRNOSENDWINDOW
  (french "je ne sais pas suivre SEND dans une fene^tre graphique")
  (english "I can't step SEND into graphic window"))

(defmessage :HELP1
  (french  ";Les commandes de pas a pas sont : ")
  (english ";Commands for step are : "))

(defmessage :HELP2
  (french  ";   CR  pour passer a l'expression suivante")
  (english ";   CR  go to next expression"))

(defmessage :HELP3
  (french  ";   .   pour voir l'expression courante")
  (english ";   .   see current expression"))

(defmessage :HELP4
  (french  ";   <   pour evaluer sans pas a pas et y revenir")
  (english ";   <   evaluate without step and come back"))

(defmessage :HELP5
  (french  ";   q   retour au toplevel")
  (english ";   q   return to toplevel"))

(defmessage :HELP6
  (french  ";   h   pour avoir l'historique du pas a pas")
  (english ";   h   view history"))

(defmessage :HELP7
  (french  ";   ?   pour avoir ce texte ....")
  (english ";   ?   this message ..."))

;;;
;;; Global Variables
;;;

(defvar :depth 0)
(defvar :value ())
(defvar :speak t)
(defvar :history ())
(defvar :exp)
(makunbound ':speak)

;;;
;;; The Step
;;;

(df step (:exp)
    (#:trace:let ((#:sys-package:itsoft
		   (cons '#.#:sys-package:colon #:sys-package:itsoft))
		  (:depth 0)			; the current depth
		  (:value)			; the returned value
		  (:speak t)			; verbose mode
		  (#:trace:trace #:trace:trace) ; for trace
		  (:history))			; the history
		 (tag step
		      (#:trace:traceval
		       `(progn ,:exp))		; PROGN is mandatory
	     )))

(defun :nobind? (:form)
  (and (consp :form)
       (cond
	((symbolp (car :form))
	 (cond
	  ((and (consp (valfn (car :form)))
		(eq '&nobind (car (valfn (car :form)))))) ))
	((and (consp (car :form))
	      (eq 'lambda (caar :form))
	      (eq '&nobind (cadar :form)))))
       ))
  
(defun :stepeval (:forme :env)
  ;; called by ITSoft
  (let ((:depth (1+ :depth)) 
        (:history (cons :forme :history)))
    (cond ((and (consp :forme)
		(eq (car :forme) 'unstep))
	   (eval :forme :env))
	  ((null :speak) (stepeval :forme :env))
	  (t (:steploop #/.)))))

(df unstep :exp
    (#:trace:eprogn :exp))

;;; to compile traced functions with complice
(putprop 'unstep 'parano '#:complice:fvar)

(defmacro :alphanum-p ()
  `(member (valfn (getfn #:sys-package:tty 'tyi))
	   (list (valfn 'tyi) (valfn '#:tty:tyi))))

(df cstep (:exp)
    (#:trace:if (#:trace:and (#:trace:boundp ':speak) :speak)
		(#:trace:traceval :exp)
		(#:trace:eval :exp)))

(defun :stepmargin (:n)
  (repeat (if (< :n 20) :n 21) (princn #\sp)))

(defun :steploop (:cmd)
  (when :auto-step (setq :cmd t))
  (selectq :cmd
      (#/. 
       (#:trace:output
	(with ((printlevel 3) (printline 1))
	      (:stepmargin :depth)
	      (prinflush :depth " -> " :forme " step>")))
       (let ((response
	      (with ((inchan *trace-input*))
		    (teread)
		    (car (readline)))))
	 (:steploop response)))
      (#/=
       (let ((#:system:debug t))
	 (itsoft 'syserror (list 'step 'break :forme)))
       (:steploop #/.))
      (#/< (setq :value (let ((:speak ()))
			  (eval :forme :env)))
	   (#:trace:output
	    (:stepmargin :depth) 
	    (print :depth " <- " :value)))
      (#/q (exit #:system:toplevel-tag))
      (#/h (let ((:n 0) 
		 (:history (reverse :history)))
	     (#:trace:output
	      (while :history
		(:stepmargin :n)
		(print (incr :n) " " (nextl :history)))))
	   (:steploop #/.))
      (#/?
       (#:trace:output
	(print (get-message ':HELP1))
	(print (get-message ':HELP2))
	(print (get-message ':HELP3))
	(print (get-message ':HELP4))
	(print (get-message ':HELP5))
	(print (get-message ':HELP6))
	(print (get-message ':HELP7))
	)
       (:steploop #/.))
      (t
       (#:trace:output
	(setq :value 
	      (cond
	       ((and (consp :forme)	; SEND special case
		     (eq (car :forme) 'send))
		(if (:alphanum-p)
		    ;; ok for a regular TTY
		    (protect
		     (let ((:fnt ())
			   (#:trace:windowp ()))
		       (trace (send
			       (entry
				(setq :fnt
				      (getfn
				       (type-of (cadr #:trace:arg1))
				       (car #:trace:arg1)))
				(cond ((null :fnt) )
				      ((or (memq :fnt #:trace:untracable)
					   (memq :fnt
						 '(car print prin))))
				      (t (#:trace:trace-one
					  `(,:fnt (step t))))))
			       (exit
				(if (memq :fnt #:trace:trace)
				    (#:trace:untrace-one :fnt))
				)
			       ))
		       (let ((:speak ()))
			 (#:trace:eval :forme :env)))
		     (if (memq 'send #:trace:trace)
			 (untrace send)) )
		  ;; no SEND step using the virtual bitmap
		  (:stepmargin :depth)
		  (printerror 'step ':ERRNOSENDWINDOW :forme)
		  (eval :forme :env))
		)
	       ((:nobind? :forme)	; skip &nobind
		(:stepmargin :depth)
		(printerror 'step
			    ':ERRNONOBIND
			    :forme)
		(eval :forme :env))
	       (t			; standard case
		(traceval :forme :env)))
	      ))
       (:stepmargin :depth) 
       (print :depth " <- " :value)))
  )


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Collect space used by trace/step
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun stepend ()
  (mapc 'remob (oblist 'step))
  (libautoload trace step unstep cstep)
  'stepend)

(defun tracend ()
  ;; collect the space used by trace
  (untrace)
  (mapc 'remob (oblist 'trace))
  (libautoload trace trace untrace)
  'tracend)

(defun debugend ()
  ;; collect all
  (tracend)
  (stepend)
  (rem-feature 'debug)
  'debugend)


