;;;
;;; COUNTCALLS:  A Count Calls Tool
;;;
;;; $Source: /usr/cvs/lelisp/llub/countcalls.ll,v $
;;; $Date: 2016/05/21 10:36:08 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is a contribution of Le-Lisp version 15.
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15.25)
        (error 'load 'erricf 'countcalls))

(defvar #:sys-package:colon 'count-calls)

(when (featurep 'countcalls)
      (with ((inchan ()))
	    (print ";; countcalls already loaded.")
	    (exit eof)))

(add-feature 'countcalls)

#|

The Count Calls Tool [JER]:

counts the number of calls for all the existing functions in memory
compiled or interpreted, with a small overhead (30-50 % of the total
execution time).

 Usage:

      (count-calls-init)
                  initialize the counters, reset them and start the counting

      (count-calls-clear)
                  reset the counters

      (count-calls-start)
                  start the counting

      (count-calls-stop)
                  stop the counting

      (count-calls-infos [min])
                  return the a-list of the form :
                          ((name count typefn) ...)
                  for the current counting. If a float optionnal
                  argument is provided, it represents the threshold
                  value of the counters. By default this value is 1.

      (count-calls-printn [min])
                  print, sorted by counts, the current counting. Use the
                  same optionnal argument than the previous function.

      (count-calls-printa [min])
                  print, sorted by names, the current counting. Use the
                  same optionnal argument than the previous function.


 Example:

? ^Lcountcalls
= countcalls.ll
? (defun fib (n) 
?    (cond ((eq n 1) 1)
?          ((eq n 2) 1)
?          (t (add (fib (sub1 n)) (fib (sub n 2)))))))
= fib
? 
? (count-calls-init)
= count-calls-init
? (fib 20)
= 6765
? (count-calls-printn 1000.)
   24474.  subr2  eq
   13529.  fsubr  cond
   13529.   expr  fib
    6764.  subr2  sub
    6764.  subr2  add
    6764.  subr1  sub1
= ()
? (compile-all-in-core)
= ()
? (count-calls-clear)
= count-calls-clear
? (fib 20)
= 6765
? (count-calls-printn 1000.)
   13529.  subr1  fib
= ()


  Implementation:

we use a single indicator stored in the P-list of each countcalled function.
It contains: (<counter>) in case of EXPR
             (<counter> . <old-fval>) in case of SUBR


|#


;;;
;;; Global Variables
;;;

(defvar :active-flag ())	; set if the count is active

(defvar :debug-flag ())		; for debugging purpose


;;;
;;; The Count Calls Internal Functions
;;;

(loader '(

	  ;; Hand coded internal functions. Can use only A1 & A2.
	  ;;

	  ;; (df :fincrplist (symb)
	  ;;    ;;  an FEXPR version of :incrplist
	  ;;    ;; has to return () to avoid interferences
	  ;;    ;; with functions without body.
	  ;;     (:incrplist symb)
	  ;;     ())
	  ;; 

          (fentry :fincrplist fsubr)
          (mov (car a1) a1)
          (call :incrplist)    
	  (mov nil a1)
	  (return)

	  ;; (defun :incrplist (symb)
	  ;;     ;; just for side effect, returns nothing.
	  ;;     (if :active-flag
	  ;;         (let ((:active-flag ()))
	  ;;              (:incrplist-aux (plist symb)))))
	  ;;
	  ;; (defun :incrplist-aux (plist)
	  ;;     (cond ((null plist) ())
	  ;;           ((eq (car plist) ':plist-indicator)
	  ;;            (rplaca (cadr plist) (fadd (cadr plist) 1.))
	  ;;		(cddr plist))
	  ;;           (t (:incrplist-aux (cddr plist)))))
	  ;;

          (entry :incrplist subr1)

          (bfvar a1 107)
          (mov (plist a1) a1)
	  (mov ':plist-indicator a2)
          (bra 104)
      103 (mov (cdr a1) a1)
          (bfcons a1 107)
          (mov (cdr a1) a1)
      104 (bfcons a1 107)
          (cabne (car a1) a2 103)
          (mov (cdr a1) a1)		; skip the indicator
	  (mov (car a1) a2)		; the P-list value
          (cabeq nil (cvalq :active-flag) 105)
          (fplus '1. (car a2))
      105 (mov (cdr a2) a1)		; return the old FVAL
	  (return)
      107 (push 'error)			; something wrong, call ERROR!
          (push ':internal-count)
	  (push (& 5))
          (push a1)
	  (mov '4 a4)
	  (jmp funcall)

	  ;; The "impossible" function used by the stubs:
	  ;; the old A1 is pushed; A1 = the name of the function
	  ;; Perform the counting and jump to the old FVAL.

	  (fentry :internal-count subr0)
	  (push (& 0))			; the real A1 saving
					; (& 1) is reserved for the return
	  (push a2)			; before the calls
	  (call :incrplist)		; returns the FVAL
	  (cabeq a1 nil 107)		;  strange .....
	  (jcall vag)			;  transforms it into an address
	  (pop a2)
	  (mov a1 (& 1))		; save the old fval
	  (pop a1)			; the saved A1
	  (return)			; fall back in the old fval

          (end)) ())

;;;
;;; Count Calls Initialization
;;;

(defun count-calls-init lst
  (let ((:active-flag ()))
    (if lst
	(mapc (lambda (x) 
		(unless (getprop x ':plist-indicator)
			(:count-calls-init1 x)))
	      lst)
        (mapoblist (lambda (x) 
		     (unless (getprop x ':plist-indicator)
			     (:count-calls-init1 x)))))
    (count-calls-clear))
  (count-calls-start)
  'count-calls-init)


(defun count-calls-clear ()
  (let ((:active-flag ()))
    (mapoblist (lambda (x)
		 (when (variablep x)
		       (let ((plist (getprop x ':plist-indicator)))
			 (when (consp plist)
			       (rplaca plist 0.0)))))))
  'count-calls-clear)

(defun :count-calls-init1 (x)
  ;; prepare the count call of the symbol "x"
  (when (and (variablep x)
	     (typefn x)
	     (neq x 'vag)
	     (neq (packagecell x) '#.#:sys-package:colon)
	     (neq (packagecell x) 'llcp))
	(when :debug-flag (print ':count-calls-init1 " " x))
	(let ((plist (getprop x ':plist-indicator)))
	  (selectq (typefn x)
		   ((subr0 subr1 subr2 subr3 nsubr fsubr msubr dmsubr)
		    (if (and (consp plist) (cdr plist))
			;; it's a SUBR already countcalled
			(rplaca plist 0.0)
		        ;; it's a newly compiled function or a not
		        ;; countcalled function.
		        (putprop x (cons 0.0 (valfn x)) ':plist-indicator)
			;; load a very small stub (3 LLM3 instructions)
			(loader `((fentry :strict-internal ,(typefn x))
				  (push a1)
				  (mov ',x a1)
				  (jmp :internal-count)
				  (end)) () )
			(setfn x
			       (typefn ':strict-internal)
			       (valfn  ':strict-internal))
			))
		   ((expr fexpr macro dmacro)
		    (if (consp plist)
			;; it's an EXPR already countcalled
			(rplaca plist 0.0)
		        ;; it's a newly interpreted function or a not
		        ;; countcalled function.
		        (putprop x (ncons 0.0) ':plist-indicator)
			(let ((v (valfn x)))
			  (resetfn x
				   (typefn x) 
				   (mcons (car v)
					  `(:fincrplist ,x)
					  (cdr v))))))
		   (t ())))))


;;;
;;; Start / Stop the Count Calls Tool
;;;

(defun count-calls-start ()
  (setq :active-flag t))

(defun count-calls-stop ()
  (setq :active-flag ()))


;;;
;;; Print various Count Calls Infos
;;;

(defun :get-count-calls-infos (fnt val-min)
  ;; return an unordered list of the current values of the Count Calls
  ;; discaring all the values < than val-min.
  ;; This internal function is called by the "fnt" function
  ;; of the interface.
  (setq val-min (if (consp val-min)
		    (let ((val (car val-min)))
		      (when (fixp val)
			    (setq val (float val)))
		      (if (and (floatp val)
			       (>= val 0.0))
			  val
		          (error fnt 'erroob val)))
		    1.))
  (let ((result))
    (mapoblist (lambda (x)
		 (let ((plist (getprop x ':plist-indicator)))
		   (when (and (consp plist)
			      (floatp (car plist))
			      (fle val-min  (car plist)))
			 (newl result (list x (car plist) (typefn x)))))))
    result))


(defun count-calls-infos val-min
  (let ((:active-flag ()))
    (:get-count-calls-infos 'count-calls-infos val-min)))


(defun count-calls-printn val-min
  (let ((:active-flag ()))
    (let ((l (:get-count-calls-infos 'count-calls-printn val-min)))
      (setq l (sort (lambda (x y) (> (cadr x) (cadr y))) l))
      (mapc (lambda (z)
	      (prinf " ~10,0F ~6@A  ~A"
		     (cadr z)
		     (caddr z)
		     (car z))
	      (terpri))
	    l))))


(defun count-calls-printa val-min
  (let ((:active-flag ()))
    (let ((l (:get-count-calls-infos 'count-calls-printa val-min)))
      (setq l (sort (lambda (x y) (alphalessp (car x) (car y))) l))
      (mapc (lambda (z)
	      (prinf " ~36A  ~6@A ~10,0F "
		     (car z)
		     (caddr z)
		     (cadr z))
	      (terpri))
	    l))))


(progn
  (print ";; (count-calls-init)          to initialize and start")
  (print ";; (count-calls-start)         to start")
  (print ";; (count-calls-stop)          to stop")
  (print ";; (count-calls-clear)         to clear the counters")
  (print ";; (count-calls-printa [n])    to print the results (alpha)")
  (print ";; (count-calls-printn [n])    to print the results (number)"))


#| ; to run the test

(defun fib (n)
  (cond ((eq n 1) 1)
        ((eq n 2) 1)
        (t (add (fib (sub1 n)) (fib (sub n 2))))))

 (count-calls-init) ; or
; (count-calls-init 'eq 'fib 'sub1 'sub)
 (fib 20)
 (count-calls-printn 1000.)
 (compile-all-in-core)
 (count-calls-clear)
 (fib 20)
 (count-calls-printn 1000.)

|#
