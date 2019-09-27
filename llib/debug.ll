;;;
;;; DEBUG:  Debug Facility
;;;
;;; $Source: /usr/cvs/lelisp/llib/debug.ll,v $
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
    (error 'load 'erricf 'debug))

(defvar #:sys-package:colon '#:system:debug)


(unless (featurep 'virtty)
        (initty))


;;;
;;; User Interface
;;;


;;; Nb of lines to be pretty-printed
(defvar #:system:debug-line 5)

;;; Stack Deepth to be displayed
(defvar #:system:stack-depth 5)

;;; set if debug is active
(defvar #:system:debug ())

;;; error message
(defmessage :errnobloc (french "bloc inconnu")
                       (english "unknown block"))


(defun printstack nl  ;  ((&opt n 32767) (&opt l (cstack))) ...
  ;; print the content of the stack
  (let* ((l (if (and (consp nl) (consp (cdr nl))) (cadr nl) (cstack)))
	 (m (if (consp nl)    ; number of blocks to be printed
		(min (car nl) (length l))
	        (length l)))
	 (n (length l))       ; number od block
	 frame)
    (mapc (lambda (f) (when (:is-hidden-block f) (decr n)))
	  l)
    (setq m (min m n))
    (incr n)
    (while (gt m 0)
      (nextl l frame)
      (unless (:is-hidden-block frame)
	      (decr n)
	      (decr m)
	      (prin "   [stack ")
	      (when (< n 100) (princn #\sp))
	      (when (< n 10) (princn #\sp))
	      (prin n "]   (")
	      (selectq (car frame)
		       ;; on the block's type
		       (1  ; LAMBDA  (1 llink fval lparam v1 .. vn)
			(prin (or (:findfn (caddr frame))
				  'let)))
		       (2  ; LABEL (2 fct1 ofval1 oftyp1 ...)
			(prin 'flet " " (cadr frame)))
		       (3  ; ESCAPE (3 tag-name)
			(prin 'tag " "(cadr frame)))
		       (4  ; ITSOFT (4 llink name state form function)
			(prin 'itsoft " " (caddr frame)))
		       (5  ; LOCK (5 fval)
			(prin 'lock " " (or (symbolp (cadr frame))
					    (:findfn (cadr frame))
					    "(lambda ...)")))
		       (6  ; PROTECT (5 progn)
			(prin 'protect))
		       (7  ; SYS-PROT (6)
			(prin 'sys-protect))
		       (8  ; SCHEDULE (8 XXX)
			(prin 'schedule))
		       (9  ; TAGBODY (9 et1 corp1 ... etN corpN)
			(prin 'tagbody))
		       (10 ; BLOCK (10 slot)
			(prin 'block))
		       (11)
		       (t  ; bad block type
			(printerror 'printstack
				    ':errnobloc
				    (car frame))))
	      (print " ...)")))))

(defun :is-hidden-block (frame)
  (or (eq (car frame) 7)   ; SYS-PROT
      (eq (car frame) 11)  ; PROGN
      (eq (car frame) 4))  ; ITSOFT
)

(df debug  #:system:l
    ;; set/reset the debug mode
    (cond ((atom #:system:l)
	   ;; returns the current state
           #:system:debug)
          ((memq (car #:system:l) '(t ()))
	   ;; set the global variable
           (setq #:system:debug (car #:system:l)))
          (t ; temporary setting
           (let ((#:system:debug (car #:system:l)))
	     (eval (car #:system:l))))))


;;;
;;; The BREAK Loop
;;;

(defun break ()
  ;; create a BREAK loop
  (if #:system:debug
      (let ((#:system:debug t)
	    (#:sys-package:itsoft
	     (cons '#.#:sys-package:colon
		   (remq '#.#:sys-package:colon
			 #:sys-package:itsoft))))
	(clockalarm 0)
	(tag continue
	     (with ((inchan ())
		    (outchan ()))
		   (:break-loop (cstack)))
	     (err)))
      (err)))

(defun debug-command (:char)
  ;; run a debug command
  (eprogn (cdr (cassq :char :commands))))

;;;
;;; Global variables used by the various inspectors
;;;

(defvar :current-form)
(defvar :current-function)
(defvar :current-error-form)
(defvar :error-message)
(defvar :break-number 0)
(defvar :resetfn-alist)


(defun :break-loop (:stack)
  (let (:error-message
	:current-function
	:current-form
	:current-error-form
	(:resetfn-alist
	 (mapcoblist
	  (lambda (s)
	    (when (and (neq (valfn s) 0)
		       (getprop s 'resetfn))
		  (ncons (cons (cdr (getprop s 'resetfn)) s))))))
	current-window
	(:break-number (add1 :break-number)))
    (protect
     (progn 
       (when (and (featurep 'window) (current-window))
	     (setq current-window (current-window))
	     (current-window
	      (:create-break-window :break-number)))
       (with ((prompt
	       (if (gt :break-number 1)
		   (catenate :break-number ">? ")
		 ">? ")))
	     (:init-stack (:stack-in-error :stack))
	     (debug-command #/e)
	     (debug-command #/.)
	     (protect 
	      (untilexit break 
			 (itsoft 'toplevel ()))
	      (untilexit #:system:debug (:up-stack)))))
     (when (and (featurep 'window)
		(current-window))
	   (kill-window (current-window))
	   (current-window current-window)))))

;;;
;;; Interactive Toplevel
;;;

(defun :toplevel ()
  (tag #:system:debug
       (catcherror t
		   (print "= " (eval (read))))))

;;;
;;; Commands decoding
;;;

(defun :bol ()
  (super-itsoft '#.#:sys-package:colon 'bol ())
  (let* ((:inbuf (inbuf))
         (:c (sref (inbuf) 0)))
    (when (and (assq :c :commands) (eq 3 (inmax)))
	  (sset :inbuf 0 #\cr) (sset :inbuf 1 #\lf)
	  (debug-command :c))))


;;;
;;; Set up a break window
;;;

(defun :create-break-window (n)
  (unless (current-display)
	  (bitprologue))
  (let ((window (create-window '#:window:tty
			       (div (bitxmax) 3)
			       (mul (mul n 2) (font-height))
			       (scale (bitxmax) 2 3) 
			       (scale (bitymax) 2 3) 
			       (catenate "Le-Lisp : Break Loop #" (string n))
			       1 1)))
    ;; The window has to be ready
    (selectq #:bitmap:name
	     (|X11|
	      (let (ev)
		(while (or (neq (#:event:code (setq ev (read-event)))
				'map-window)
			   (neq (#:event:window ev) window)))))
	     ((windows pm)
	      (let (ev)
		(while (or (neq (#:event:code (setq ev (read-event)))
				'repaint-window-event)
			   (neq (#:event:window ev) window))))))
    window))

  
  
(defun :find-syserror (stack)
  ;; stack initialization
  (when stack
	(if (and (eq 4 (caar stack)) 
		 (eq 'syserror (caddar stack)))
	    stack
	    (:find-syserror (cdr stack)))))

(defun :find-break (stack)
  (when stack
	(if (and (eq 1 (caar stack))
		 (if (eq (typefn 'break) 'expr)
		     (eq (valfn 'break) (caddar stack))
		     (equal (valfn 'break) (loc (caddar stack)))))
	    stack
	    (:find-break (cdr stack)))))

(defun :cut-to-toplevel (stack)
  (if (:is-at-toplevel stack)
      (displace stack '(()))
      (let (frame)
	(until (or (null (cdr stack))
		   (:is-at-toplevel (cdr stack)))
	       (nextl stack))
	(when (consp stack) (rplacd stack ())))))

(defun :is-at-toplevel (stack)
  (or (and (eq 4 (caar stack)) (eq 'toplevel (caddar stack)))
      (and
       (eq 7 (caar stack))  ; SYS-PROT
       (nextl stack)
       (or (eq 7 (caar stack)) (eq 5 (caar stack)))
       (nextl stack)
       (and (eq 3 (caar stack)) (eq '#:system:error-tag (cadar stack)))
       (nextl stack)
       (if (eq 11 (caar stack)) (nextl stack) t)
       (and (eq 3 (caar stack)) (eq '#:system:toplevel-tag (cadar stack)))
       (nextl stack)
       (if (eq 1 (caar stack)) (nextl stack) t)
       (and (eq 4 (caar stack)) (eq 'toplevel (caddar stack))))))

(defun :stack-in-error (stack)
  (:cut-to-toplevel stack)
  (let ((stack (or (:find-syserror stack)
		   (:find-break stack))))
    (cond ((and (eq 1 (caar stack))
		(if (eq (typefn 'break) 'expr)
		    (eq (valfn 'break) (caddar stack))
		  (equal (valfn 'break) (loc (caddar stack)))))
	   ;; BREAK at top
	   (setq :error-message '(break break ())
		 :current-error-form '(break)))
	  ((eq 4 (caar stack))
	   ;;SYSERROR at top
	   (setq :error-message (nth 10 (car stack)))
	   (setq :current-error-form ; break step: forme dans errmess
		 (if (eq 'step (car :error-message))
		     (caddr :error-message)
		     (nth 4 (car stack)))))
	  (t (setq :error-message '(debug errerr ()))))
    (nextl stack)
    (:remove-fn
     '(cstep unstep step #:step:steploop #:step:stepeval)
     stack)))

(defun :remove-fn (lfn stack)
  (setq stack (cons () stack)
        lfn (mapcar 'valfn lfn))
  (let ((bstack stack)
        (fstack stack))
    (while (setq fstack (:find-function (cdr fstack)))
      (ifn (:is-in-lvalfn (caddr (car fstack)) lfn)
	   (setq stack fstack)
	   (rplacd stack (cdr fstack))))
    (setq stack bstack)
    (cdr bstack)))

(defun :is-in-lvalfn (valfn lvalfn)
  (any (lambda (vfn)
	 (or (eq vfn valfn)
	     (equal (loc valfn) vfn)))
       lvalfn))

(defun :init-stack (stack)
  (when (:is-a-struct-access (car stack)) ;  hack #:system:structaccess
        (nextl stack))
  (setq :current-form (ncons stack))
  (setq :current-function (ncons (:find-function stack))))

;;;
;;; Commands
;;;

(defvar :commands
  '((#/v "show variables" (:print-current-variables))
    (#/h "print top of stack" (:printstack #:system:stack-depth))
    (#/H "print complete stack" (:printstack))
    (#/e "show error message" (:print-error))
    (#/. "show current stack frame" (:print-current-function))
    (#/+ "down stack" (:down-stack) (:print-current-function))
    (#/- "up stack" (:up-stack) (:print-current-function))
    (#/t "back to toplevel" (exit #:system:toplevel-tag))
    (#/q "exit inspection loop" (exit break))
    (#/r "resume and correct error" (:continue))
    (#/c "continue" (exit continue))
    (#/z "step traced functions"
	 (setq #:trace:step-in-trace-flag t) (:continue))
    (#/? "list commands" (:help))))

;;;
;;; Print commands
;;;

(defun :printstack n
  (if n (setq n (car n)) (setq n (length (car :current-form))))
  (printstack n (car :current-form)))

(defun :print-current-variables ()
  (:print-variables (car :current-form)))

(defun :print-variables (:s)
  (cond ((:has-function-definition (car :s))
	 (:print-arguments (nth 3 (car :s))))
	((eq 1 (caar :s))
	 (:print-arguments (nth 3 (car :s)))
	 (:bind/unbind (car :s))
	 (:print-variables (cdr :s))
	 (:bind/unbind (car :s)))
	(:s (:print-variables (cdr :s)))))

(defun :print-arguments (:larg)
  (cond ((or (eq :larg '&nobind) (null :larg)))
	((symbolp :larg) (print " " :larg "=" (symeval :larg)))
	((consp :larg)
	 (:print-arguments (car :larg))
	 (:print-arguments (cdr :larg)))))

(defun :print-error ()
  (apply 'printerror :error-message)
  (selectq (cadr :error-message)
	   ((errwna  ;   "bad number of arguments"
	     errbpa  ;   "bad parameter"
	     errilb) ;   "illegal binding"
	    (let ((d (:getdef (car :error-message))))
              (:print-filtered
	       (list (car d) (cadr d) (:hilited:make (caddr d))))))
	   ))

(defun :print-current-function ()
  (let ((current-definition
	 (:getdef (:findfn (caddr (caar :current-function))))))
    (when current-definition
	  (:print-filtered 
	   (:hilite-expr 
	    (:current-expr current-definition)
	    current-definition)))))

;;;
;;; Move on stack command
;;;

(defun :down-stack ()
  (let* ((:next-form (cdr (car :current-function)))
         (:next-function (:find-function :next-form)))
    (ifn :next-function
	 (exit #:system:debug)
	 (newl :current-form :next-form)
	 (newl :current-function :next-function)
	 (let ((:previous-form (cadr :current-form)))
	   (while (neq :previous-form (car :current-form))
	     (:bind/unbind (nextl :previous-form)))))))

(defun :up-stack ()
  (ifn (cdr :current-function)
       (exit #:system:debug)
       (let ((:rebind-frames 
	      (:up-frame-list (cadr :current-form) (car :current-form))))
	 (nextl :current-function)
	 (nextl :current-form)
	 (while :rebind-frames
	   (:bind/unbind (nextl :rebind-frames))))))

(defun :up-frame-list (f1 f2)
  (let ((res ()))
    (until (eq (car f1) (car f2))
	   (newl res (nextl f1)))
    res))

;;;
;;; Misc comands
;;;

(defun :continue ()
  (selectq (cadr :error-message)
	   (break (exit continue))
	   (errudv
	    (prinflush (prompt) "(setq " (caddr :error-message) " ")
	    (with ((prompt ""))
		  (let ((form
			 `(setq ,(caddr :error-message) ,(read))))
		    (exit continue (eval form)))))
	   (errudf
	    (prinflush "Function ")
	    (exit continue (read)))
	   (t
	    (print "This error can not be resumed"))))

(defun :help ()
  (mapc (lambda ((c doc . rest)) (print "; " (ascii c) ":   " doc))
	:commands))

(defun :bind/unbind (:frame)
  ;; unstack a stack block
  (when (eq 1 (car :frame))   ; LAMBDA  (1 llink fval lparam vn ... v1)
	(let ((:lval (nreverse (cddddr :frame))))
	  (:exchange-arguments (cadddr :frame) :lval)
	  (rplacd (cdddr :frame) (nreverse :lval)))))

(defun :exchange-arguments (:larg :lval)
  (cond ((or (eq :larg '&nobind) (null :larg)))
	((symbolp :larg)
	 (rplaca :lval
		 (prog1 (:cval :larg)
		   (:scval :larg (car :lval)))))
	((consp :larg)
	 (:exchange-arguments (car :larg) 
			      (if (consp (car :larg)) (car :lval) :lval))
	 (:exchange-arguments (cdr :larg) (cdr :lval)))))

(defvar :v)

(defun :scval (:s :v)
  (if (boundp ':v) (set :s :v) (makunbound :s)))

(defun :cval (:s)
  (if (boundp :s) (symeval :s) '_undef_))

(defun :current-expr (definition)
  (let ((:frame-list
	 (:up-frame-list (car :current-form) (car :current-function))))
    (while :frame-list
      (setq definition (:find-expr (nextl :frame-list) definition)))
    (when (null (cdr :current-form))
	  (setq definition (:find-error definition)))
    definition))

(defun :find-expr (frame sexpr)
  ;; find the xpr which has created the block
  (or
   (:find-tree
    (or
     (selectq (car frame)   ; on the block's type
	      (1  ;  LAMBDA  (1 llink fval lparam v1 ... vn)
	       (lambda (expr)
		 (and (consp (car expr))
		      (eq (cdar expr) (caddr frame)))))
	      ;; type label (2 fct1 ofval1 oftyp1 ... oftypn)
	      (3  ; ESCAPE (3 tag-name)
	       (lambda (expr) 
		 (and (memq (car expr) '(tag untilexit))
		      (consp (cdr expr))
		      (eq (cadr expr) (cadr frame)))))
	      ;; ITSOFT (4 llink nom etat forme funct)
	      (5  ; LOCK (5 fval)
	       (lambda (expr)
		 (and (eq (car expr) 'lock)
		      (consp (cdr expr))
		      (eq (cadr expr) (cadr frame)))))
	      (6  ; PROTECT (6 progn)
	       (lambda (expr)
		 (and (eq (car expr) 'protect)
		      (consp (cdr expr))
		      (eq (cddr expr) (cadr frame)))))
	      ;; SYS-PROT (7)
	      (8   ; SCHEDULE (8 XXX)
	       (lambda (expr) (eq (car expr) 'schedule)))
	      (9   ; TAGBODY (9 et1 body1 ... etN bodyN)
               )
	      ;; type BLOCK   (10 slot)
	      (11  ; PROGN (11 progn)
	       (lambda (expr) (exit found (caadr frame)))))
     (lambda (expr) (exit found ())))
    sexpr)
   sexpr))


(defun :find-error (expr)
  ;; find the expression which raised the error
  (or
   (when (memq (cadr :error-message) '(errudf errbal errwna errilb break))
	 (:find-tree
	  (lambda (expr)
	    (eq expr :current-error-form))
	  expr))
   (when (eq (cadr :error-message) 'errudv)
	 (:find-tree
	  (lambda (expr)
	    (when (eq (car expr) (caddr :error-message))
		  (exit found (car expr))))
	  expr))
   (:find-tree
    (lambda (expr)
      (and (eq (car expr) (car :error-message))
	   (:find-tree
	    (lambda (expr)
	      (eq expr :current-error-form))
	    expr)))
    expr)
   expr))

;;;
;;; Utilities
;;;

(defun :find-tree (:fn :tree)
  ;; find and substitue
  (tag found (:find-tree1 :fn :tree)))

(defun :find-tree1 (:fn :tree)
  (when (consp :tree)
        (when (funcall :fn :tree)
              (exit found :tree))
        (while (consp :tree)
	  (:find-tree1 :fn (nextl :tree)))))

          
(defun substq (n o s)
  ;; substitution with EQ
  (cond ((atom s)
	 (if (eq s o) n s))
	((consp s)
	 (cons
	  (if (eq (car s) o)
	      n
	      (substq n o (car s)))
	  (if (eq (cdr s) o)
	      n
	      (substq n o (cdr s)))))))

(defun :find-function (stack)
  ;; handle the stack-list (CSTAK)
  (until (or (:has-function-definition (car stack))
	     (null stack))
	 (nextl stack))
  stack)

(defun :has-function-definition (frame)
  (and (eq (car frame) 1)
       (:findfn (caddr frame))))

(defun :is-a-struct-access (frame)
  (and (eq (car frame) 1)
       (let ((valfn (caddr frame)))
	 (and (consp valfn)
	      (eq (car valfn) '&nobind)
	      (consp (cdr valfn))
	      (consp (cadr valfn))
	      (eq (caadr valfn) '#:system:structaccess)))))

(defun :getdef (f)
  ;; get the definition of a function
  (cond ((memq f #:trace:trace)
	 (:get-plist-def f 'trace))
	((getprop f 'resetfn)
	 (:get-plist-def f 'resetfn))
	(t (getdef f))))

(defun :findfn (valfn)
  (or (findfn valfn)
      (cassoc valfn :resetfn-alist)))

(defun :get-plist-def (symbol prop)
  (makedef symbol
	   (car (getprop symbol prop))
	   (cdr (getprop symbol prop))))


;;;
;;; Hilite management
;;;

(defun :hilite-expr (expr1 expr2)
  (ifn expr1
       expr2
       (substq (:hilited:make expr1) expr1 expr2)))

(defun :hilited:make (o)
  (tcons ':hilited o))

(defun :hilited:prin (f)
  (with ((tyattrib t))
	(pprin (cdr f))))

(synonymq :hilited:pretty :hilited:prin)

;;; to limitate the hilited text

(defvar :outlist)
(defvar :hibegin)
(defvar :hiend)
(defvar :nlines)

(defvar #:tty:system:hilited:tyattrib ())

(defun #:tty:system:hilited:tyattrib (x)
  (if x
      (setq :hibegin (cons :nlines (outpos)))
      (setq :hiend (cons :nlines (outpos)))))

(defun :hilited:eol ()
  (incr :nlines)
  (newl :outlist (substring (outbuf) 0 (outpos)))
  (fillstring (outbuf) 0 #\sp)
  (outpos (lmargin)))

(defun :print-filtered (x)
  (let ((:nlines 0)
	(:hibegin ())
	(:hiend ())
	(:outlist ()))
    (let ((#:sys-package:itsoft ':hilited)
	  (#:sys-package:tty '#:tty:system:hilited))
      (pprint x))
    (ifn (and :hibegin :hiend)
	 (setq :hibegin (cons 0 0)
	       :hiend (cons 0 0)))
    (:flush-hilited)))

(defun :flush-hilited ()
  (setq :outlist (nreverse :outlist))
  (unless (le :nlines #:system:debug-line)
	  (let ((nscroll (min (sub1 (car :hibegin))
			      (sub (add1 (car :hiend))
				   #:system:debug-line))))
	    (when (gt nscroll 0)
		  (rplaca :hibegin (sub (car :hibegin) nscroll))
		  (rplaca :hiend (min (sub (car :hiend) nscroll)
				      (sub1 #:system:debug-line)))
		  (rplacd :outlist
			  (nthcdr (add1 nscroll) :outlist))
		  (rplaca :outlist (catenate (car :outlist) " ...")))
	    (when (gt (length :outlist) #:system:debug-line)
		  (let ((boutlist 
			 (nthcdr (sub1 #:system:debug-line)
				 :outlist)))
		    (rplacd boutlist ())
		    (rplaca boutlist
			    (catenate (car boutlist) "  ..."))
		    (when (gt (car :hiend) (sub1 #:system:debug-line))
			  (rplaca :hiend (sub1 #:system:debug-line))
			  (rplacd :hiend (slen (car boutlist))))))))
  (let ((#:system:print-for-read ()))
    (with ((outchan t))
	  (with ((rmargin 78))
		(repeat (car :hibegin) (print (nextl :outlist)))
		(prin (substring (car :outlist) 0 (cdr :hibegin)))
		(tyattrib t)
		(cond ((eq (car :hiend) (car :hibegin))
		       (prin (substring (car :outlist) 
					(cdr :hibegin) 
					(sub (cdr :hiend)
					     (cdr :hibegin)))))
		      (t
		       (print 
			(substring
			 (nextl :outlist) 
			 (cdr :hibegin)))
		       (repeat (sub1 (sub (car :hiend) (car :hibegin)))
			       (tyattrib t) (print (nextl :outlist)))
		       (tyattrib t)
		       (prin
			(substring (car :outlist) 0 (cdr :hiend)))))
		(tyattrib ())
		(print (substring (nextl :outlist) (cdr :hiend)))
		(while :outlist (print (nextl :outlist)))))))

