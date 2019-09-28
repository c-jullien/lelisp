;;;
;;; TOPLEVEL:  Le-Lisp TopLevel
;;;
;;; $Source: /usr/cvs/lelisp/llib/toplevel.ll,v $
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
        (error 'load 'erricf 'toplevel))

;;;
;;; Errors Handling
;;;
 
(defvar #:sys-package:itsoft ())  ; ITsoft package.

 
(defvar #:system:debug ())             ; T if debug mode.
(defvar #:trace:trace ())              ; list of traced functions

(defvar #:system:print-msgs 1)         ; the OS prints some messages.
(defvar #:system:error-flag ())        ; T if messages are printed.

(df catcherror (#:system:error-flag . #:system:l)
    ;; error handler
    (let ((#:system:error-flag (eval #:system:error-flag))
	  #:catcherror:system:debug
	  )
      (prog1 (let ((#:system:print-msgs 
		    (if #:system:error-flag #:system:print-msgs 0))
		   (#:system:debug 
		    (if #:system:error-flag #:system:debug ()))
		   )
	       (setq #:catcherror:system:debug #:system:debug)
	       (prog1 (tag #:system:error-tag
			   (ncons (eprogn #:system:l)))
		 (unless (eq #:catcherror:system:debug #:system:debug)
			 (setq #:catcherror:system:debug #:system:debug))))
	(when #:catcherror:system:debug
	      (setq #:system:debug #:catcherror:system:debug)))
      ))
		

(defmacro errset (#:system:e #:system:i)
  ;;  "a` la Maclisp"
  (list 'catcherror #:system:i #:system:e))

(defmacro err #:system:l
  ;; the argument is a PROGN to be evaluated
  (mcons 'exit '#:system:error-tag #:system:l))
 
;;;
;;; The BREAK function is defined in the debug module.
;;;

(defun break () (err))

;;; The SYSERROR ITsoft

(defvar #:system:f ())
(defvar #:system:m ())
(defvar #:system:b ())

(defun syserror (#:system:f #:system:m #:system:b)
  ;; 1 - flush the input buffer
  (teread)
  (tyflush)
  ;; 2 - print the message on tty
  (when (and #:system:error-flag (null #:system:debug))
	(let ((outchan (outchan)))
	  (outchan ())
	  (protect (printerror #:system:f #:system:m #:system:b)
                   (outchan outchan))))
  ;; don't remove the funcall (in order to redefine break)
  (funcall 'break))
 

;;;
;;; The TopLevel
;;;
 
(defvar #:toplevel:status t)   ; interactive toplevel
(defvar #:toplevel:read ())    ; last read object
(defvar #:toplevel:cread ())   ; current object
(defvar #:toplevel:print ())   ; last printed form
(defvar #:toplevel:eval ())    ; last returned value

(defmacro #:toplevel:topeval (e)
  ;; evaluate an expression at toplevel
  (list 'tag '#:system:error-tag 
	(list 'lock '(lambda (tag val) 
		       (cond ((null tag) 
			      (ncons val))
			     ((eq tag '#:system:error-tag) ())
			     ((eq tag '#:system:toplevel-tag) 
			      (exit #:system:toplevel-tag))
			     (t (error 'toplevel 
				       'errudt
				       tag))))
	      e)))

(defun toplevel ()
  (tag #:system:toplevel-tag
       (setq
	#:system:error-flag t
	;; the old read form
	#:toplevel:read #:toplevel:cread
	;; the new read form
	#:toplevel:cread (#:toplevel:topeval (read))
	#:toplevel:cread
	(when (consp #:toplevel:cread) (car #:toplevel:cread))
	;; the value of the evaluation
	#:toplevel:eval (#:toplevel:topeval (eval #:toplevel:cread)))
       (when (and (consp #:toplevel:eval) 
		  #:toplevel:status)
	     (tyflush)
	     (princn #/=)
	     (princn #\sp)
	     (#:toplevel:topeval (print (car #:toplevel:eval))))
       (setq #:toplevel:eval (car #:toplevel:eval))))
 
(printline 5000)
 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; Labels of standard Errors
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(unless (featurep 'messages) (loadmodule 'messages))

;;;
;;; Fatal Errors
;;;

(defvar #:system:fatal-errors
        '(ERRFSTK ERRFSGC ERRFPGC ERRFSUD ERRFSTR ERRFVEC
          ERRFSYM ERRFCNS ERRFFLT ERRFFIX ERRFHEP ERRFCOD))

(defmessage ERRFSTK
  (french  "***** Erreur fatale : pile pleine.")
  (english "***** Fatal error : stack overflow."))
(defmessage ERRFSGC
  (french  "***** Erreur fatale : pile pleine durant un GC.")
  (english "***** Fatal error : stack overflow during GC."))
(defmessage ERRFPGC
  (french  "***** Erreur fatale : pile pleine durant un PRINT.")
  (english "***** Fatal error : stack overflow during PRINT."))
(defmessage ERRFSUD
  (french  "***** Erreur fatale : pile vide.")
  (english "***** Fatal error : stack underflow."))
(defmessage ERRFSTR
  (french  "***** Erreur fatale : zone des chaines pleine.")
  (english "***** Fatal error : no room for strings."))
(defmessage ERRFVEC
  (french  "***** Erreur fatale : zone des vecteurs pleine.")
  (english "***** Fatal error : no room for vectors."))
(defmessage ERRFSYM
  (french  "***** Erreur fatale : zone des symboles pleine.")
  (english "***** Fatal error : no room for symbols."))
(defmessage ERRFCNS
  (french  "***** Erreur fatale : zone des listes pleine.")
  (english "***** Fatal error : no room for lists."))
(defmessage ERRFFLT
  (french  "***** Erreur fatale : zone des flottants pleine.")
  (english "***** Fatal error : no room for floats."))
(defmessage ERRFFIX
  (french  "***** Erreur fatale : zone des entiers pleine.")
  (english "***** Fatal error : no room for fixnums."))
(defmessage ERRFHEP
  (french  "***** Erreur fatale : zone du tas pleine.")
  (english "***** Fatal error : heap overflow."))
(defmessage ERRFCOD
  (french  "***** Erreur fatale : zone du code pleine.")
  (english "***** Fatal error : no room for code."))

(progn
   (defvar ERRFSTK (get-message 'ERRFSTK))
   (defvar ERRFSGC (get-message 'ERRFSGC))
   (defvar ERRFPGC (get-message 'ERRFPGC))
   (defvar ERRFSUD (get-message 'ERRFSUD))
   (defvar ERRFSTR (get-message 'ERRFSTR))
   (defvar ERRFVEC (get-message 'ERRFVEC))
   (defvar ERRFSYM (get-message 'ERRFSYM))
   (defvar ERRFCNS (get-message 'ERRFCNS))
   (defvar ERRFFLT (get-message 'ERRFFLT))
   (defvar ERRFFIX (get-message 'ERRFFIX))
   (defvar ERRFHEP (get-message 'ERRFHEP))
   (defvar ERRFCOD (get-message 'ERRFCOD))
  )

;;;
;;; Standard Errors
;;;

(defmessage ERRMAC (french "erreur de la machine")
                   (english "machine error"))
(defmessage ERRUDV (french "variable indefinie")
                   (english "undefined variable"))
(defmessage ERRUDF (french "fonction indefinie")
                   (english "undefined function"))
(defmessage ERRUDM (french "methode indefinie")
                   (english "undefined method"))
(defmessage ERRUDT (french "echappement indefini")
                   (english "undefined escape"))
(defmessage ERRBDF (french "mauvaise definition")
                   (english "bad definition"))
(defmessage ERRWNA (french "mauvais nombre d'arguments")
                   (english "wrong number of arguments"))
(defmessage ERRBPA (french "mauvais parametre")
                   (english "bad parameter"))
(defmessage ERRILB (french "liaison illegale")
                   (english "illegal binding"))
(defmessage ERRBAL (french "mauvaise liste d'arguments")
                   (english "bad argument list"))
(defmessage ERRNAB (french "pas de portee lexicale")
                   (english "no lexical scope"))
(defmessage ERRXIA (french "bloc lexical perime")
                   (english "inactive lexical scope"))
(defmessage ERRSXT (french "erreur de syntaxe")
                   (english "syntax error"))
(defmessage ERRIOS (french "erreur d'entree/sortie")
                   (english "I/O error"))
(defmessage ERR0DV (french "division par 0")
                   (english "division by zero"))
(defmessage ERRNNA (french "l'argument n'est pas un nombre")
                   (english "not a number"))
(defmessage ERRNIA (french "l'argument n'est pas un entier")
                   (english "not a fixnum"))
(defmessage ERRNFA (french "l'argument n'est pas un flottant")
                   (english "non float argument"))
(defmessage ERRNSA (french "l'argument n'est pas une chaine")
                   (english "non string argument"))
(defmessage ERRNAA (french "l'argument n'est pas un atome")
                   (english "not an atom"))
(defmessage ERRNLA (french "l'argument n'est pas une liste")
                   (english "not a list"))
(defmessage ERRNVA (french "l'argument n'est pas une variable")
                   (english "not a variable"))
(defmessage ERRVEC (french "l'argument n'est pas un vecteur")
                   (english "not a vector"))
(defmessage ERRSYM (french "l'argument n'est pas un symbole")
                   (english "not a symbol"))
(defmessage ERRNDA (french "l'argument n'est pas une adresse")
                   (english "not an address"))
(defmessage ERRSTC (french "l'argument n'est pas une structure")
                   (english "not a structure"))
(defmessage ERROOB (french "argument hors limite")
                   (english "argument out of bounds"))
(defmessage ERRSTL (french "chaine trop longue")
                   (english "string too long"))
(defmessage ERRGEN (french "ne sait pas calculer")
                   (english "can't compute"))
(defmessage ERRVIRTTY (french "terminal inconnu")
                      (english "unknown terminal type"))
(defmessage ERRFILE (french "fichier inconnu")
                    (english "unknown file"))
(defmessage ERRICF (french "fichier incompatible")
                   (english "incompatible file"))
(defmessage ERRUNK (french "je ne connais pas")
                   (english "I don't know"))

;;;
;;; Syntax Errors
;;;

(defmessage ERRSXT1 (french "liste trop courte")
                    (english "list too short"))
(defmessage ERRSXT2 (french "chaine trop longue")
                    (english "string too long"))
(defmessage ERRSXT3 (french "symbole trop long")
                    (english "symbol too long"))
(defmessage ERRSXT4 (french "mauvais debut d'expression")
                    (english "bad beginning of expression"))
(defmessage ERRSXT5 (french "symbole special trop long")
                    (english "special symbol too long"))
(defmessage ERRSXT6 (french "mauvais package")
                    (english "bad package"))
(defmessage ERRSXT7 (french "mauvaise construction pointee")
                    (english "bad dotted pair construction"))
(defmessage ERRSXT9 (french "mauvaise liste arguments")
                    (english "bad argument list"))
(defmessage ERRSXT10 (french "mauvaise valeur de splice-macro")
                     (english "bad splice-macro"))
(defmessage ERRSXT11 (french "EOF durant un READ")
                     (english "EOF during READ"))
(defmessage ERRSXT12 (french "mauvaise utilisation du BACKQUOTE")
                     (english "bad use of BACKQUOTE"))

;;;
;;; Machine Errors
;;;

(defmessage ERRMAC4 (french "instruction illegale")
                    (english "illegal instruction"))
(defmessage ERRMAC8 (french "exception flottante")
                    (english "floating point exception"))
(defmessage ERRMAC10 (french "erreur de bus")
                     (english "bus error"))
(defmessage ERRMAC11 (french "violation de segment")
                     (english "segmentation fault"))

;;;
;;; How to print an Error
;;;

(defun printerror (#:system:f #:system:m #:system:b)
  ;; print - for the function <f>
  ;;       - the type of error <m>
  ;;       - with the bad argument <b>
  (print "** " #:system:f " : "
	 ;; find the message
	 (if (symbolp #:system:m)
	     (cond ((get-message-p #:system:m))
		   ((boundp #:system:m) (symeval #:system:m))
		   (t #:system:m))
	     #:system:m)
	 " : "
	 (cond
	  ((and (eq #:system:m 'errsxt) 
		(numberp #:system:b))
	   (if (and (> #:system:b 0) (< #:system:b 13))
	       (get-message
		(selectq #:system:b 
			 (1 'ERRSXT1)
			 (2 'ERRSXT2)
			 (3 'ERRSXT3)
			 (4 'ERRSXT4)
			 (5 'ERRSXT5)
			 (6 'ERRSXT6)
			 (7 'ERRSXT7)
			 (9 'ERRSXT9)
			 (10 'ERRSXT10)
			 (11 'ERRSXT11)
			 (12 'ERRSXT12)))
	     #:system:b))
	  ((and #:system:unixp
		(eq #:system:m 'errmac)
		(numberp #:system:b))
	   (selectq #:system:b
		    (4  (get-message 'ERRMAC4))
		    (8  (get-message 'ERRMAC8))
		    (10 (get-message 'ERRMAC10))
		    (11 (get-message 'ERRMAC11))
		    (t #:system:b)))
	  (t #:system:b))))
