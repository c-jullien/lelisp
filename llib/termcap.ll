;;;
;;; TERMCAP:  The Termcap -> Virtty generator.
;;;
;;; $Source: /usr/cvs/lelisp/llib/termcap.ll,v $
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
        (error 'load 'erricf 'termcap))

(defvar #:sys-package:colon 'termcap)

(add-feature 'termcap)

;;;
;;; Messages
;;;

(unless (featurep 'messages)
	(libloadfile 'messages t))

(defmessage :ERRDEFTERM
  (french "Ce terminal est de'fini par rapport a`")
  (english "This terminal is defined in terms of"))

(defmessage :ERRNOCURSOR
  (french "Terminal insuffisant : pas d'adressage curseur")
  (english "Terminal lacks capability: cursor addressing"))

(defmessage :ERRNOSCREEN
  (french "Terminal insuffisant : pas d'effacement de l'e'cran")
  (english "Terminal lacks capability: clear screen"))

(defmessage :MSGTERM
  (french " : compilation du terminal virtuel : ")
  (english ": compilation of virtual terminal: "))

(defmessage :MSGCREATE
  (french "; On cre'e le fichier virtty a` partir de termcap pour : ")
  (english "; File virtty is created from termcap for: "))

;;; This module generates a VIRTTY file from a TERMCAP
;;; description. The TERMCAP database file is hold in
;;; the variable:  #:system:termcap-file or in the shell
;;; variable TERMCAP; The directory which contains all the
;;; VIRTTY description files is hold in: #:system:virtty-directory.


;;;
;;; Read the TERMCAP database.
;;;

(defun :tgetent (term)
  (let ((termcap (getenv "TERMCAP")))
    (if (and termcap  ; use the shell variable
	     (neq #// (chrnth 0 termcap))
	     (index term termcap 0))
	(pname termcap)
        (let ((line))
	  (with ((inchan (openi (or termcap #:system:termcap-file))))
		(tag eof
		     (until (setq line (:index term (:readline) 0)))
		     (setq line (pname line))
		     (while (eq (car (last line)) #/\)
			    (setq line (nconc line 
					      (pname (:readline)))))
		       (eof (inchan))))
		line))))

(defun :index (term line pos)
  (setq pos (index term line pos))
  (and pos
       (let ((pos2 (add pos (plength term))))
	 (if (and (or (eq pos 0)
		      (eq (chrnth (1- pos) line) #/| ))
                  (or (eq (chrnth pos2 line) #/| )
		      (eq (chrnth pos2 line) #/: )))
	     line
	     (:index term line (add1 pos))))))

(defun :readline ()
  (let ((line (readstring)))
    (if (or (eqstring line "") (eq (chrnth 0 line)  #/#))
	(:readline)
        line)))

;;;
;;; Transformation of a TERMCAP entry -> Lisp list
;;;


;;; Take the list of characters and returns a pair:
;;;   - the list of the terminals' names
;;;   - an A-list ((entry-name . value) ...)

(defun :parse (l)
  (let ((alist ())
	(pos   0)
	(prop  ()))
    (while (neq (car l) #/: )
      (while (eq (car l) #/| ) (nextl l))
      (until (or (null l)
                 (eq (car l) #/| )
	(eq (car l) #/: ))
      (nextl l)))
    ;; read the characteristics
    (untilexit eoln
	 (while (memq (nth pos l)
		      '(#\tab #\sp #\lf #\cr #/\ #/:)) 
	   (setq pos (add1 pos)))
	 (setq prop (list (:readcn) (:readcn)))
	 (selectq (nth pos l)
	    (#/#
	     (setq pos (add1 pos))
	     (setq alist (acons prop (:readnumber) alist)))
	    (#/=
	     (setq pos (add1 pos))
	     ;; read a string eventually preceeded by:
	     ;; {{integer}.integer}{*}
	     ;; and flush these numbers ....
	     (when (digitp (nth pos l))
		   (:readnumber)
		   (when (eq (nth pos l) #/.)
			 (setq pos (add1 pos))
			 (:readnumber))
		   (when (eq (nth pos l) #/*)
			 (setq pos (add1 pos))))
	     (setq alist (acons prop (:readstring) alist)))
	    (#/:
	     (setq alist (acons prop nil alist)))
	    (#/@
	     (setq pos (add1 pos))
	     (setq alist (acons prop t alist)))
	    (t)))
    (nreverse alist)))

;;; The folowing functions use the global variables <l> and <pos>

(defun :readcn ()
  (setq pos (add1 pos))
  (when (ge pos (length l)) (exit eoln))
  (selectq (nth (1- pos) l)
      (#/\
       (prog1 (or (cassq (nth pos l)
			 '((#/E . #\esc) (#/n . #\lf) (#/r . #\cr) 
			   (#/t . #\tab) (#/b . #\bs) (#/f . #^L)))
		  (and (digitp (nth pos l))
		       ;; read a number in octal
		       (let ((x (- (nth pos l) #/0)))
			 (while (digitp (nth (incr pos) l))
			   (setq x (+ (* x 8) 
				      (- (nth pos l) #/0))))
			 (decr pos)
			 x))
		  ;; and by default
		  (nth pos l))
	 (incr pos)))
      (#/^
       (prog1 (logand 31 (nth pos l)) (incr pos)))
      (t    (nth (1- pos) l))))

(defun :readnumber ()
  ;; read a decimal number
  (let ((x 0))
    (while (digitp (nth pos l))
      (setq x (+ (* x 10) (- (nth pos l) #/0)))
      (incr pos))
    x))

(defun :readstring ()
  ;; read a string up to ":"
  (let ((liste))
    (until (eq (nth pos l) #/:) (newl liste (:readcn)))
    (nreverse liste)))

;;;
;;; Generation functions
;;;

;;; Use 3 global variables:
;;;  -  term        : the terminal name
;;;  -  capas       : the capaciy A-list
;;;  -  output-file : the output file


(defun :cursor (l)
  ;; generate the cursor motion
  (let ((lvar '(line col)) (lpar '(col line)) (exp) (char))
    (while l
      (setq char (nextl l))
      (if (neq char #/%) 
	  (newl exp `(tyo ,char))
	  (setq char (nextl l))
	  (selectq char
	      (#/d (newl exp `(tyod ,(nextl lvar) 0)))
	      (#/2 (newl exp `(tyod ,(nextl lvar) 2)))
	      (#/3 (newl exp `(tyod ,(nextl lvar) 3)))
	      (#/. (newl exp `(tyo ,(nextl lvar))))
	      (#/+ (newl exp
			 `(tyo (add ,(nextl l) ,(nextl lvar)))))
	      (#/>
	       (newl exp `(if (> ,(car lvar) ,(nextl l))
			      (incr ,(car lvar) ,(nextl l)))))
	      (#/r (setq lpar (reverse lpar)))
	      (#/i (newl exp `(setq line (add1 line)))
		   (newl exp `(setq col (add1 col))))
	      (#/% (newl exp `(tyo #/%)))
	      (#/n (newl exp `(setq ,(car lvar)
				    (logxor ,(car lvar) 96))))
	      (#/B (newl exp `(incr ,(car lvar)
				    (* 6 (div ,(car lvar) 10)))))
	      (#/D (newl exp `(decr ,(car lvar)
				    (* 2 (rem ,(car lvar) 16)))))
	      (t))))
    (:de 'tycursor lpar exp)))

;;; small optim, concatenation of all the TYO (and reverse the list)

(defun :de (sem par exp)
  (let ((l) (ltyo)) ; l: new exp; ltyo: tyo list
    (while exp
      (selectq (caar exp)
	  (tyo (mapc (lambda (tyo) (newl ltyo tyo))
		     (reverse (cdr (nextl exp)))))
	  ((incr decr setq) (newl l (nextl exp)))
	  (t
	   (when ltyo
		 (newl l `(tyo ,.ltyo)) (setq ltyo nil))
	   (newl l (nextl exp)))))
    (when ltyo (newl l `(tyo ,.ltyo)))
    (terpri)
    (with ((lmargin 8))
	  (prin "(defun #:tty:" (string term) ":" sem " " par)
	  (while l
	    (terpri) (outpos 3) (prin (nextl l)))
	  (prin ")"))
    (terpri)))

;;; the same without parameters (and n-ary)

(defun :den (sem . exp)
  (:de sem () exp))

(defun :decapa (sem capa)
  (if (assoc capa capas)
      (:den sem (:cassoc capa))
      (:cant sem)))

(defun :set (sem val)
  (terpri)
  (print "(defvar #:tty:" term ":" sem " " val ")")
  (print "(defvar #:tty:" sem " " val ") ;  v15 compatibility"))


(defun :cant (sem)
  (terpri)
  (print "; termcap: " term ": can't perform: " sem))

(defun :cassoc (capa) 
  `(tyo ,.(cassoc capa capas)))

;;;
;;; Main function
;;;

(defun :compile (term output-file)
  (print (get-message ':MSGCREATE) term)
  (let ((names (:tgetent term)) (capas)
	(#:system:print-for-read ()))         ; protect the print
    (ifn names
	 (error 'termcap 'ERRVIRTTY term))
    (setq term (implode (pname term))
	  capas (:parse names))
    ;; indirection
    (while (assoc '#"tc" capas)
      (let ((auxterm (cassoc '#"tc" capas)) (aux) (aux2))
	(setq aux (:tgetent auxterm))
	(ifn aux (error ':compile (string auxterm) ()))
	(setq aux (:parse aux)
	      capas (append (remq (assoc '#"tc" capas) capas)
			    aux))
	;; for each removed capacity, copy the list
	(while (setq aux (car (rassq t capas)))
	  (setq aux2 capas)
	  (while aux2 
	    (ifn (equal (caar aux2) aux)
		 (nextl aux2)
		 (rplac (nextl aux2) nil  nil))))))
    ;; check if the terminal can address the cursor
    (ifn (assoc '#"cm" capas)
	 (error ':compile ':ERRNOCURSOR term))
    ;; check if the terminal can clear the screen
    (ifn (or (assoc '#"cd" capas) (assoc '#"cl" capas))
	 (error ':compile ':ERRNOSCREEN term))
    ;; start the generation
    (with ((outchan (openo output-file)))
	  ;; Small header
	  (print ";;; Le-Lisp version " (version)
		 (get-message ':MSGTERM)
		 term)
	  ;; System name
	  (terpri)
	  (print "(setq #:sys-package:tty '#:tty:" term ")")
	  ;; variables which contain the size of the screen
	  (if (assoc '#"co" capas)
	      (:set 'xmax (1- (cassoc '#"co" capas)))
	      (:set 'xmax 79))
	  (if (assoc '#"li" capas)
	      (:set 'ymax (1- (cassoc '#"li" capas)))
	      (:set 'ymax 23))
	  (:cursor (cassoc '#"cm" capas))
	  ;; if visible bell, define bell
	  (if (assoc '#"vb" capas)
	      (:decapa 'tybeep '#"vb"))
	  ;; clear the screen
	  (if (assoc '#"cl" capas) 
	      (:decapa 'tycls '#"cl")
	      (:den 'tycls
		    (:cassoc '#"cd")
		    `(tycursor 0 0)))
	  ;; clear to end of line
	  (:decapa 'tycleol '#"ce")
	  ;; clear to end of screen
	  (:decapa 'tycleos '#"cd")
	  ;; delete character
	  (if (assoc '#"dc" capas)
	      (:den 'tydelch
		    (:cassoc '#"ed")
		    (:cassoc '#"dc")
		    (:cassoc '#"dm"))
	      (:cant 'tydelch))
	  ;; insert a line
	  (:decapa 'tyinsln '#"al")
	  ;; delete a line
	  (:decapa 'tydelln '#"dl")
	  ;; attribute (underline or reverse)
	  (when (and (assoc '#"so" capas) (assoc '#"se" capas))
		(:de 'tyattrib '(x)
		     (list `(if x (tyo ,.(cassoc '#"so" capas))
			      (tyo ,.(cassoc '#"se" capas)))))
		(:set 'tyattrib ()))
	  (when (and (assoc '#"us" capas) (assoc '#"ue" capas))
		(:de 'tyattrib '(x)
		     (list `(if x (tyo ,.(cassoc '#"us" capas))
			      (tyo ,.(cassoc '#"ue" capas)))))
		(:set 'tyattrib ()))
	  ;; insert a character or a string
	  (if (or (assoc '#"ic" capas)
		  (assoc '#"im" capas) 
		  (assoc '#"ei" capas))
	      (:de 'tyinsch '(arg)
		   (list
		    (:cassoc '#"ei")
		    `(tyo arg)
		    (:cassoc '#"ic")
		    (:cassoc '#"im")))
	      (:cant 'tyinsch))
	  ;; The initialization string "if"
	  (let ((aux (cassoc '#"if" capas)) (l))
	    (when aux
		  (with ((inchan (openi (string aux))))
			(untilexit eof (newl l (readcn)))))
	    (:den 'typrologue
		  `(,(symbol (symbol 'tty term) 'tycls))
		  `(tyo ,.(nreverse l))
		  (:cassoc '#"is")))
	  ;; Epilogue string (and set the cursor at the end of the screen)
	  (:den 'tyepilogue
		`(tycursor 0 (sub1 ,(symbol (symbol 'tty term) 'ymax))))
	  ;; show/hide the cursor
	  (:set 'tyshowcursor t)
	  (close (outchan)))
    term))


