;;;
;;; TERMINFO:  The Terminfo -> Virtty generator
;;;
;;; $Source: /usr/cvs/lelisp/llib/terminfo.ll,v $
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
        (error 'load 'erricf 'terminfo))

(defvar #:sys-package:colon 'terminfo)

(add-feature 'terminfo)

;;;
;;; Messages
;;;

(unless (featurep 'messages) (libloadfile 'messages t))

(defmessage :ERRBOOL
  (french "la taille de la zone boole'enne ne correspond pas")
  (english "the boolean zone doesn't fit"))

(defmessage :ERRNUMB
  (french "la taille de la zone des nombres ne correspond pas")
  (english "the number zone doesn't fit"))

(defmessage :ERRSTRG
  (french "la taille de la zone des chai^nes ne correspond pas")
  (english "the string zone doesn't fit"))

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
  (french "; On cre'e le fichier virtty a` partir de terminfo pour : ")
  (english "; File virtty is create from terminfo for: "))

;;; This module generates a VIRTTY file from a TERMINFO
;;; description. The TERMINFO directory is hold in the
;;; variable:  #:system:terminfo-file or in the shell
;;; variable TERMINFO; The directory which contains all the
;;; VIRTTY description files is hold in: #:system:virtty-directory.

;;;
;;; Read the TERMINFO database.
;;;

(defun :read-entry (term)
  (let ((ti (or (getenv "TERMINFO") #:system:terminfo-directory)))
    (setq ti (string ti))
    (let ((:entry (catenate ti
			    (ifn (eq (sref ti (1- (slength ti))) #//) "/")
			    (ascii (sref term 0))
			    "/"
			    term)))
      (ifn (probefile :entry)
	   (error 'terminfo 'ERRVIRTTY term))
      (with ((inchan (openib :entry)))
	    (:read-header)
	    (:skip :sname)
	    (:read-bools)
	    (:skip (logand (+ :sname :sbool) 1))
	    (:read-numbs)
	    (:read-strgs)
	    (:read-table)
	    (close (inchan))))))

;;;
;;; TERMINFO constants
;;;

;;; This table has to be changed after each modification
;;; of terminfo(4) (e.g. add a capacity).

(defvar :magic-number #8r432)	      ; terminfo magic number
(defvar :size-of-boolean-section 21)  ; size of boolean section
(defvar :size-of-number-section 8)    ; size of number section
(defvar :size-of-string-section 145)  ; size of string section

;;;
;;; Indexes of the entries (whith the ANSI name) and the icode
;;;

;;; the flags

;;; the numbers

(defvar :columns 0)			; cols co
(defvar :lines 2)			; lines li

;;; the strings

(defvar :clear_screen 5)		; clear cl
(defvar :clr_eol 6)			; el ce
(defvar :clr_eos 7)			; ed cd
(defvar :cursor_address 10)		; cup cm
(defvar :cursor_invisible 13)		; civis vi
(defvar :cursor_normal 16)		; cnorm ve
(defvar :delete_char 21)		; dch1 dc
(defvar :delete_line 22)		; dl1 dl
(defvar :enter_delete_mode 29)		; smdc dm
(defvar :enter_insert_mode 31)		; smir im
(defvar :enter_standout_mode 35)	; smso so
(defvar :enter_underline_mode 36)	; smul us
(defvar :exit_delete_mode 41)		; rmdc ed
(defvar :exit_insert_mode 42)		; rmir ei
(defvar :exit_standout_mode 43)		; rmso se
(defvar :exit_underline_mode 44)	; rmul ue
(defvar :flash_screen 45)		; flash vb
(defvar :init_1string 48)		; is1 i1
(defvar :init_2string 49)		; is2 i2
(defvar :init_3string 50)		; is3 i3
(defvar :init_file 51)			; if if
(defvar :insert_character 52)		; ich1 ic
(defvar :insert_line 53)		; il1 al
(defvar :init_prog 138)			; iprog iP


;;;
;;; Read functions
;;;

(defun :read-short ()
  ;; read a 16bit number.
  (logor (logand (readcn) 255) (logshift (readcn) 8)))

(defun :skip (n)
  ;; skip n bytes
  (repeat n (readcn)))

(defun :read-header ()
  ;; read the header (terminfo(4))
  (ifn (eq (:read-short) :magic-number)
       (error 'terminfo 'erroob :entry))
  (setq :sname (:read-short)
	:sbool (:read-short)
	:snumb (:read-short)
	:sstrg (:read-short)
	:stable (:read-short))
  (ifn (eq :sbool :size-of-boolean-section)
       (:warning ':ERRBOOL))
  (setq :bools (makevector :sbool ()))
  (ifn (eq :snumb :size-of-number-section)
       (:warning ':ERRNUMB))
  (setq :numbs (makevector :snumb ()))
  (ifn (eq :sstrg :size-of-string-section)
       (:warning ':ERRSTRG))
  (setq :strgs (makevector :sstrg ()))
  (setq :table (makestring :stable 0)))


(defun :read-bools ()
  ;; read the flags
  (for (i 0 1 (1- :sbool))
       (vset :bools i (eq (readcn) 1))))

(defun :read-numbs ()
  ;; read the numerical parameters
  (for (i 0 1 (1- :snumb))
       (let ((n (:read-short)))
	 (vset :numbs i (if (eq n -1) () n)))))

(defun :read-strgs ()
  ;; read the strings (offset in table)
  (for (i 0 1 (1- :sstrg))
       (let ((n (:read-short)))
	 (vset :strgs i (if (eq n -1) () n)))))

(defun :read-table ()
  ;; read the string table
  (for (i 0 1 (1- :stable))
       (sset :table i (readcn))))

;;;
;;; Generation functions
;;;

(defun :cursor (l)
  ;; generate the cursor function
  (let ((par1 'line)(par2 'col)(stack)(c)(exp)(special-tyod)(ifl)
	(var (makevector 26 ()))(istack)(ifsl))
    (while l
      (nextl l c)
      (if (neq c #/%)
	  (newl exp `(tyo ,c))
	  (nextl l c)
	  (selectq c
	      (#/% (newl exp `(tyo #/%)))
	      (#/d (newl exp `(tyod ,(nextl stack) 0)))
	      (#/2 (ifn (eq (nextl l) #/d)
			(error 'terminfo 'errbpa 'cursor))
		   (setq special-tyod t)
		   (newl exp `(:tyod ,(nextl stack) 2)))
	      (#/3 (ifn (eq (nextl l) #/d)
			(error 'terminfo 'errbpa 'cursor))
		   (setq special-tyod t)
		   (newl exp `(:tyod ,(nextl stack) 3)))
	      (#/0 (nextl l c)
		   (if (and (memq c '(#/2 #/3)) (eq (nextl l) #/d))
		       (newl exp
			     `(tyod ,(nextl stack) ,(sub c #/0)))
		       (error 'terminfo 'errbpa 'cursor)))
	      ((#/c #/s) (newl exp `(tyo ,(nextl stack))))
	      (#/p (selectq (nextl l)
		       (#/1 (newl stack par1))
		       (#/2 (newl stack par2))
		       (#/3 (newl stack par3))
		       (#/4 (newl stack par4))
		       (#/5 (newl stack par5))
		       (#/6 (newl stack par6))
		       (#/7 (newl stack par7))
		       (#/8 (newl stack par8))
		       (#/9 (newl stack par9))
		       (t (error 'terminfo 'errbpa 'cursor))))
	      (#/P (nextl l c)
		   (ifn (and (>= c #/a) (<= c #/z))
			(error 'terminfo 'errbpa 'cursor)
			(vset var (- c #/a) (nextl stack))))
	      (#/g (nextl l c)
		   (ifn (and (>= c #/a) (<= c #/z))
			(error 'terminfo 'errbpa 'cursor)
			(newl stack (vref var (- c #/a)))))
	      (#/+ (newl stack `(add ,(nextl stack) ,(nextl stack))))
	      (#/- (newl stack
			 (reverse `(,(nextl stack) ,(nextl stack) sub))))
	      (#/* (newl stack `(mul ,(nextl stack) ,(nextl stack))))
	      (#// (newl stack
			 (reverse `(,(nextl stack) ,(nextl stack) div))))
	      (#/m (newl stack
			 (reverse `(,(nextl stack) ,(nextl stack) rem))))
	      (#/& (newl stack `(logand ,(nextl stack) ,(nextl stack))))
	      (#/| (newl stack `(logor ,(nextl stack) ,(nextl stack))))
	      (#/= (newl stack `(= ,(nextl stack) ,(nextl stack))))
              (#/> (newl stack `(< ,(nextl stack) ,(nextl stack))))
              (#/< (newl stack `(> ,(nextl stack) ,(nextl stack))))
              (#/! (let ((arg (nextl stack)))
                          (ifn (and (consp arg) (memq (car arg) '(= < >)))
                               (setq arg `(<> 0 ,arg)))
                          (newl stack `(not ,arg))))
              (#/~ (newl stack `(lognot ,(nextl stack))))
              (#/i (setq par1 `(add1 ,par1) par2 `(add1 ,par2)))
              (#/' (newl stack (nextl l))
                       (ifn (eq (nextl l) #/')
                            (error 'terminfo 'errbpa 'cursor)))
              (#/{ (let (ll c)
                          (until (eq (setq c (nextl l)) #/}) (newl ll c))
                          (newl stack (implode (reverse ll)))))
              (#/? (newl exp 'if) (setq ifl t))
              (#/t (newl exp (nextl stack)) (newl exp 'then)
                       (setq istack stack))
              (#/e (if istack (:save-stack)) (newl exp 'else)
                       (setq stack istack))
              (#/; (if istack (:save-stack))
                       (newl exp (:cursor-if))
                       (setq ifl () stack ())
                       (when ifsl
                             (for (i 1 1 ifsl)
                                (newl stack
                                      (symbol 'terminfo (catenate "x" i)))))
                       (setq ifsl ()))
              (t (error 'terminfo 'errbpa 'cursor)))))
       (if (or stack ifl) (error 'terminfo 'errbpa 'cursor))
       (when special-tyod
             (terpri)
             (print "(defun #:terminfo:tyod (x n)")
             (print "    (when (or (> n 1) (> x 9))")
             (print "          (#:terminfo:tyod (div x 10) (sub1 n)))")
             (print "    (if (eq x 0) (tyo #\sp)")
             (print "        (tyo (add #/0 (rem x 10)))))"))
       (:de 'tycursor '(col line) exp)))

(defun :save-stack ()
  (if (and ifsl (neq ifsl (length stack)))
      (error 'terminfo 'errbpa 'cursor))
  (setq ifsl (length stack) stack (reverse stack))
  (let (ss)
    (for (i 1 1 ifsl)
	 (newl ss (nextl stack))
	 (newl ss (symbol 'terminfo (catenate "x" i))))
    (newl exp (cons 'setq ss))))

(defun :cursor-if ()
  (let (else then test elem)
    (until (memq (setq elem (nextl exp)) '(else then)) (newl else elem))
    (setq else (:compact else))
    (if (eq elem 'then)
	(setq then else else ())
        (until (eq (setq elem (nextl exp)) 'then) (newl then elem))
	(setq then (:compact then)))
    (until (memq (setq elem (nextl exp)) '(if else)) (newl test elem))
    (while test (newl exp (nextl test)))
    (nextl exp test)
    (ifn (and (consp test) (memq (car test) '(= < > not)))
	 (setq test `(<> 0 ,test)))
    (ifn (eq elem 'else)
	 (:if test then else)
	 (newl exp 'else)
	 (newl exp (:if test then else))
	 (:cursor-if))))

(defun :compact (l)
  (if (and (eq (caar l) 'tyo) (eq (caadr l) 'tyo))
      (:compact
       (cons (cons 'tyo (nconc1 (cdar l) (cadadr l))) (cddr l)))
    l))

(defun :if (test then else)
  (cond
   ((cdr then)
    (cond
     ((cdr else) `(if ,test ,(newl then 'progn) ,.else))
     ((null else) `(when ,test ,.then))
     (t `(ifn ,test ,@else ,.then))))
   ((null then) `(unless ,test ,.else))
   (t `(if ,test ,@then ,.else))))

;;; small optim, concatenation of all the TYO (and reverse the list)

(defun :de (sem par exp)
  (let (l ltyo)	; l: new exp; ltyo: tyo list
    (while exp
      (if (car exp)
	  (selectq (caar exp)
		   (tyo (mapc (lambda (tyo) (newl ltyo tyo))
			      (reverse (cdr (nextl exp)))))
		   ((incr decr setq) (newl l (nextl exp)))
		   (t
		    (when ltyo
			  (newl l `(tyo ,.ltyo)) (setq ltyo nil))
		    (newl l (nextl exp))))
	(nextl exp)))
    (when ltyo (newl l `(tyo ,.ltyo)))
    (terpri)
    (with ((lmargin 8))
	  (prin "(defun #:tty:" (string term) ":" sem " " par)
	  (while l
	    (terpri) (outpos 4) (prin (nextl l)))
	  (prin ")"))
    (terpri)))

;;; the same without parameters (and n-ary)

(defun :den (sem . exp)
  (:de sem () exp))

(defun :decaps (sem caps)
  (if (vref :strgs caps)
      (:den sem (:get-string caps))
      (:cant sem)))

(defun :cant (sem)
  (terpri)
  (print "; ** terminfo : " term ": cn't do: " sem)))

(defun :set (sem val)
  (terpri)
  (print "(defvar #:tty:" term ":" sem " " val ")")
  (print "(defvar #:tty:" sem " " val ") ;  v15 compatibility"))

(defun :warning (s)
  (terpri)
  (printerror "warning" s "terminfo"))

;;;
;;; Command strings
;;;

(defun :get-string (n)
  (setq n (vref :strgs n))
  (if (and (fixp n) (<= 0 n))
      (let (liste)
	(untilexit :eos
	     (let ((c (sref :table n)))
	       (incr n)
	       (if (and (eq c #/$) (eq (sref :table n) #/<))
		   (:look-for-delay))
	       (if (eq c 0) (exit :eos))
	       (newl liste c)))
	(cons 'tyo (reverse liste)))))

;;;
;;; skip the delays
;;;

(defun :look-for-delay ()
  (let ((nn n)(cc c))
    (incr n)			; skip <
    (untilexit :eop
	  (selectq (sref :table n)
		   (#/> (setq n (1+ n) c (sref :table n)) (exit :eop))
		   ((#/0 #/1 #/2 #/3 #/4 #/5 #/6 #/7 #/8 #/9 #/* #/.) (incr n))
		   (t (setq n nn c cc))))))

;;;
;;; Main function
;;;

(defun :compile (term output-file)
  (setq term (implode (pname term)))
  (print (get-message ':MSGCREATE) term)
  (:read-entry (string term))
  (let (#:system:print-for-read)
    ;; check if the terminal can address the cursor
    (ifn (vref :strgs :cursor_address)
	 (error 'terminfo
		':ERRNOCURSOR
		term))
    ;; check if the terminal can erease the screen
    (ifn (or (vref :strgs :clear_screen) (vref :strgs :clr_eos))
	 (error 'terminfo
		':ERRNOSCREEN
		term))
    ;; start the generation
    (with ((outchan (openo output-file)))
	  ;; print the header
	  (print "; Le-Lisp version "
		 (version)
		 (get-message ':MSGTERM)
		 term)
	  ;; the system name
	  (terpri)
	  (print "(setq #:sys-package:tty '#:tty:" term ")")
	  ;; variables which contain the size of the screen
	  (when (vref :numbs :columns)
		(:set 'xmax (1- (vref :numbs :columns))))
	  (when (vref :numbs :lines)
		(:set 'ymax (1- (vref :numbs :lines))))
	  ;; addressing the cursor
	  (:cursor (cdr (:get-string :cursor_address)))
	  ;; if visible bell, define bell
	  (if (vref :strgs :flash_screen) (:decaps 'tybeep :flash_screen))
	  ;; clear screen
	  (if (vref :strgs :clear_screen)
	      (:decaps 'tycls :clear_screen)
	      (:den 'tycls (:get-string :clr_eos) `(tycursor 0 0)))
	  ;; clear to end of line
	  (:decaps 'tycleol :clr_eol)
	  ;; clear to end of screen
	  (:decaps 'tycleos :clr_eos)
	  ;; delete a character
	  (if (vref :strgs :delete_char)
	      (:den 'tydelch
		    (:get-string :exit_delete_mode)
		    (:get-string :delete_char)
		    (:get-string :enter_delete_mode))
	      (:cant 'tydelch))
	  ;; insert line
	  (:decaps 'tyinsln :insert_line)
	  ;; delete line
	  (:decaps 'tydelln :delete_line)
	  ;; attribute (underline or reverse)
	  (when (and (vref :strgs :enter_standout_mode)
		     (vref :strgs :exit_standout_mode))
		(:de 'tyattrib '(x)
		     (list `(if x
				,(:get-string :enter_standout_mode)
			        ,(:get-string :exit_standout_mode))))
		(:set 'tyattrib ()))
	  (when (and (vref :strgs :enter_underline_mode)
		     (vref :strgs :exit_underline_mode))
		(:de 'tyattrib '(x)
		     (list `(if x
				,(:get-string :enter_underline_mode)
			        ,(:get-string :exit_underline_mode))))
		(:set 'tyattrib ()))
	  ;; insert a character or a string
	  (if (or (vref :strgs :insert_character)
		  (vref :strgs :enter_insert_mode)
		  (vref :strgs :exit_insert_mode))
	      (:de 'tyinsch '(arg)
		   (list
		    (:get-string :exit_insert_mode)
		    `(tyo arg)
		    (:get-string :insert_character)
		    (:get-string :enter_insert_mode)))
	      (:cant 'tyinsch))
	  ;; The initialization string
	  (let (l)
	    (if (vref :strgs :init_file)
		(with ((inchan
			(openib
			 (string (cdr (:get-string :init_file))))))
		      (untilexit eof (newl l (readcn)))))
	    (:den 'typrologue
		  `(,(symbol (symbol 'tty term) 'tycls))
		  (:get-string :init_1string)
		  (:get-string :init_2string)
		  `(tyo ,.(reverse l))
		  (if (vref :strgs :init_prog)
		      `(comline
			,(string (cdr (:get-string :init_prog)))))
		  (:get-string :init_3string)))
	  ;; Epilogue string (and set the cursor at the end of the screen)
	  (:den 'tyepilogue
		`(tycursor 0 (1- ,(symbol (symbol 'tty term) 'ymax))))
	  ;; show/hide the cursor
	  (when (and (vref :strgs :cursor_invisible)
		     (vref :strgs :cursor_normal))
		(:de 'tyshowcursor '(x)
		     (list `(if x
				,(:get-string :cursor_normal)
			      ,(:get-string :cursor_invisible)))))
	  (:set 'tyshowcursor t)
	  (close (outchan)))
    term))

