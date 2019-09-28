;;;
;;; VIRTTY:  The Le-Lisp Virtual Terminal.
;;;
;;; $Source: /usr/cvs/lelisp/llib/virtty.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(unless (>= (version) 15.2)
        (error 'load 'erricf 'virtty))

(add-feature 'virtty)


;;; The global variable "#:sys-package:tty" holds the name of the package
;;; from which are found the functions of the virtty.
;;; By default, this variable holds: "tty"

;;; The definition of a new terminal type has to:
;;;  - set up this variable with a name #:tty:<name>
;;;  - define, in this package, the missing functions


(defvar #:sys-package:tty 'tty)

;;; The function "initty" is called after all restore-core.
;;; and has to set up this variable.

;;; Functions of the virtual terminal:
;;;
;;;    Standard:
;;;        (tyi) read a character
;;;        (tys) read a character if any or returns ()
;;;        (tyinstring strg) read a line (without echo) in strg,
;;;                          returns the number of characters.
;;;        (tyo o1 o2 ... on) print the objects (cn, pname, string)
;;;                           in the terminal buffer.
;;;        (tyflush)  flush the terminal buffer
;;;        (tyod n nc)  print a number with nc characters
;;;        (redisplayscreen ...) cf Reference Manual, chapter 7

;;;    Mandatory:
;;;        (tycursor x y)  set the cirsor at position
;;;        (tycls)         erase the screen

;;;    Optionnal:
;;;        All these functions have to be defined. If they have no
;;;        signification for a certain terminal, return ().
;;;        (typrologue)       initialize the terminal in video mode
;;;        (tyepilogue)       quit te video mode.
;;;        (tycleol)          clear to end of line
;;;        (tycleos)          clear to end of screen
;;;        (tybeep)           ring the bell
;;;        (tyinsch cn)       insert a character (ch)
;;;        (tyinscn cn)       insert a character (cn)
;;;        (tydelch)          delete a character at the cursor's position
;;;        (tydelcn cn)       delete the character cn at the cursor's position
;;;        (tyinsln)          insert a new line
;;;        (tydelln)          delete a line
;;;        (tyattrib [i])     get/set the video attribute
;;;        (tybs cn)          back-space
;;;        (tycr)             goto column 0
;;;        (tyshowcursor [i]) show/hide cursor

;;;    Composed functions:
;;;        (tyco x y c1 c2 ... cn) position cursor and print
;;;        (tycot x y c1 c2 ... cn) position cursor and print with attribute

;;;
;;; The 5th standard function
;;;

(defun tyod (x n)
  (to-tty 'tyod x n))

(defun #:tty:tyod (x n)
  ;; Display the fixnum <x> with <n> characters
  (when (or (gt n 1) (gt x 9)) (#:tty:tyod (div x 10) (sub1 n)))
  (tyo (add #/0 (rem x 10))))


;;;
;;; Fonctions and Variables of the virtual terminal
;;;

(defmacro to-tty (cmd . larg)
  `(funcall (getfn #:sys-package:tty ,cmd ()) ,@larg))

(defmacro get-tty (var)
  `(symeval (getsymb #:sys-package:tty ,var ())))

(defun  tyerror (appel)     (to-tty 'tyerror appel))
(defun  typrologue ()       (to-tty 'typrologue))
(defun  tyepilogue ()       (to-tty 'tyepilogue))
(defun  tycleol ()          (to-tty 'tycleol))
(defun  tycleos ()          (to-tty 'tycleos))
(defun  tybeep ()           (to-tty 'tybeep))
(defun  tyinsch (cn)        (to-tty 'tyinsch cn))
(defun  tydelch ()          (to-tty 'tydelch))
(defun  tyinscn (cn)        (to-tty 'tyinscn cn))
(defun  tydelcn (cn)        (to-tty 'tydelcn cn))
(defun  tyinsln ()          (to-tty 'tyinsln))
(defun  tydelln ()          (to-tty 'tydelln))
(defun  tybs (cn)           (to-tty 'tybs cn))
(defun  tycr ()             (to-tty 'tycr))

(defun  tyname ()           (get-tty 'name))
(defun  tyxmax ()           (get-tty 'xmax))
(defun  tyymax ()           (get-tty 'ymax))
(defun  tyupkey ()          (get-tty 'up))
(defun  tydownkey ()        (get-tty 'down))
(defun  tyleftkey ()        (get-tty 'left))
(defun  tyrightkey ()       (get-tty 'right))

(defun  tyattrib x        
  (ifn x
       (get-tty 'tyattrib)
       (to-tty 'tyattrib (car x))
       (set (getsymb #:sys-package:tty 'tyattrib ()) (car x))))

(defun  tyshowcursor x        
  (ifn x
       (get-tty 'tyshowcursor)
       (to-tty 'tyshowcursor (car x))
       (set (getsymb #:sys-package:tty 'tyshowcursor ()) (car x))))


;;;
;;; Defaulted Functions and Variables
;;;

(defun #:tty:tyerror (caller)     ())
(defun #:tty:typrologue ())
(defun #:tty:tyepilogue ())
(defun #:tty:tycleol ()          (tyerror '(tycleol)))
(defun #:tty:tycleos ()          (tyerror '(tycleos)))
(defun #:tty:tybeep ()           (tyo #^G))
(defun #:tty:tyinsch (cn)        (tyerror (list 'tyinsch cn)))
(defun #:tty:tyinscn (cn)        (tyerror (list 'tyinscn cn)))
(defun #:tty:tydelch ()          (tyerror '(tydelch)))
(defun #:tty:tydelcn (cn)        (tydelch))
(defun #:tty:tyinsln ()          (tyerror '(tyinsln)))
(defun #:tty:tydelln ()          (tyerror '(tydelln)))
(defun #:tty:tyattrib (i)        (tyerror (list 'tyattrib i)))
(defun #:tty:tybs (cn)           (tyo #\bs))
(defun #:tty:tycr ()             (tyo #\cr))
(defun #:tty:tyshowcursor (i)    (tyerror (list 'tyshowcursor i)))

(defvar #:tty:tyattrib ())

(defvar #:tty:tyshowcursor ())

(defvar #:tty:name 'dumb)

(defvar #:tty:xmax 79)
(defvar #:tty:ymax 23)

(defvar #:tty:up #^P)
(defvar #:tty:down #^N)
(defvar #:tty:left #^B)
(defvar #:tty:right #^F)


;;;
;;; Composed functions
;;;

(defun tyco (x y cn . l) 
  (tycursor x y)
  (tyo cn)
  (while l (tyo (nextl l))))

(defun tycot (x y cn . l)
  (tycursor x y) 
  (tyattrib t)
  (tyo cn)
  (while l (tyo (nextl l)))
  (tyattrib ()))

;;;
;;; The initty function
;;;

(defun initty term
  ;; look and load the real name of the terminal
  (setq #:tty:name 
	(symbol () 
		(cond ((consp term) 
		       ;; the argument
		       (car term))
		      ((getenv "TERM"))
		      ((system)))))
  ;; check if a previous "initty" has been performed on the
  ;;  same type.
  (unless (and #:sys-package:tty
	       (equal (string #:tty:name) (string #:sys-package:tty)))
	  (let ((file (catenate #:system:virtty-directory
				#:tty:name
				#:system:lelisp-extension)))
	    ;; try to load the corresponding file
	    (if (probefile file)
		(loadfile file t)
	        (or (consp (catcherror t 
				 ;; load the termcap -> virtty translator
				 (libload termcap)
				 ;; translate (don't change the funcall!)
                                 (funcall '#:termcap:compile #:tty:name file)
					;; unload the translator
                                 (mapc 'remob (oblist 'termcap))
				 ;; load the translated file
                                 (loadfile file t)))
		    (consp (catcherror t 
				 ;; load the terminfo -> virtty translator
				 (libload terminfo)
				 ;; translate (don't change the funcall!)
                                 (funcall '#:terminfo:compile #:tty:name file)
					;; unload the translator
                                 (mapc 'remob (oblist 'terminfo))
				 ;; the the translated file
                                 (loadfile file t)))))
            #:tty:name)))
