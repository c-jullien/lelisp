;;;
;;; PRETTY:  The Le-Lisp Pretty Printer.
;;;
;;; $Source: /usr/cvs/lelisp/llib/pretty.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;; Pretty prints any S-expression.

(unless (>= (version) 15.21)
        (error 'load 'erricf 'pretty))

(defvar #:sys-package:colon 'pretty)

(add-feature 'pretty)


;;;
;;; Internals
;;;

(defvar :quotelevel 0)
(defvar :quotelength 0)

(defun  :p (l)
  ;; pretty-print the expression <l>
  (let ((f (getfn (type-of l) 'pretty ())))
    (cond
     ((and f (neq f 'pretty))
      ;; try to use an extended pretty printer.
      (funcall f l))
     ((atom l) (prin l))  
     ((and (eq (car l) 'QUOTE)
	   (consp (cdr l))
	   (null (cddr l)))
      ;; special case: (QUOTE s)  =>  's
      (princn #/')
      (with ((printlevel :quotelevel)
	     (printlength :quotelength))
	    (prin (cadr l))))
     ((and (consp (car l))
	   (eq (caar l) 'LAMBDA)
	   (consp (cdar l))
	   (listp (cadar l))
	   (listp (cddar l))
	   (listp (cdr l))
	   (null (cdr (last (cadar l))))
	   (null (cdr (last (cdr l))))
	   (eq (length (cadar l))
	       (length (cdr l))))
      ;; special case: ((LAMBDA ...) ...)  =>  (LET ...)
      (:p (mcons 'let
		 (mapcar 'list (cadar l) (cdr l))
		 (cddar l))))
     ((and (if (symbolp (car l))
	       (neqn (ptype (car l)) 3)
	     t)
	   (:inlinep l)))
     (t (let ((f (car l))
	      (l (cdr l)))
	  (princn #/( )
	  (:p f)
	  (selectq (if (symbolp f)
		       (ptype f)
		       t)
		   (1 (:progn))
		   (2 (:p1) (:progn))
		   (3 (:p1) (:p1) (:progn))
		   (4 (:cond))
		   (5 (:p1) (:cond))
		   (6 (with ((lmargin (add (lmargin) 5)))
			    (while (consp l)
			      (:p1)
			      (:p1)
			      (when l (terpri)))))
		   (7 (:p1) (:tagbody))
		   (t (:progn)))
	  (:pdot)))))))

(defun :pdot ()
  ;; if <l> is not NIL, prints a doted pair
  (when l
	(princn #\sp)
	(princn #/. )
	(princn #\sp)
	(prin l))
  (princn #/) ))

(defun  :p1 ()
  ;; the the next element (with test)
  (when (consp l)
	(with ((lmargin (:lmargin f)))
	      (princn #\sp)
	      (:p (nextl l)))))

(defun  :progn ()
  ;; print the actual PROGN
  (with ((lmargin (:lmargin f)))
	(while (consp l)
	  (if (numberp (car l))
	      (:p1)
	      (if (lt (outpos) (lmargin))
		  (outpos (lmargin))
		  (terpri))
	      (:p (nextl l))))))

(defun  :tagbody ()
  ;; print the actual TAGBODY
  (with ((lmargin (:lmargin f)))
	(while (consp l)
	  (if (atom (car l))
	      (with ((lmargin (sub (lmargin)
				   (imin (lmargin) 7))))
		    (terpri)
		    (:p1))
	      (if (lt (outpos) (lmargin))
		  (outpos (lmargin))
		  (terpri))
	      (:p (nextl l))))))


(defun  :cond ()
  ;; print the actual COND
  (with ((lmargin (add (lmargin) 3)))
	(while (consp l)
	  (terpri)
	  (if (:inlinep (car l))
	      (nextl l)
	      (let ((l (nextl l)) (f t))
		(princn #/( )
		(when (consp l) (:p (nextl l)))
		(when l (:progn))
		(:pdot)))))))

(defun  :lmargin (f)
  ;; compute the new left margin
  (add (lmargin)
       (cond ((listp f) 1)
	     ((vectorp f) 1)
	     ((lt (lmargin) (div :sizeline 2))
	      (if (lt (plength f) 8)
		  (add (plength f) 2)
		  4))
	     ((lt (lmargin) (scale :sizeline 3 4))
	      2)
	     (t 0))))))))

(defun  :inlinep (l)
  ;; if <l> can be printed in the current line, prints <l>
  ;; if not, escape :inlinep and return ().
  (let ((:outpos (outpos)))
    (if (tag :inlinep
	     (let ((#:sys-package:itsoft 
		    (cons 'pretty #:sys-package:itsoft)))
	       (prin l)
	       t))
	t
        (fillstring (outbuf) :outpos #\sp)
	(outpos :outpos)
	())))

(defun  #:pretty:eol ()
  ;; the ITSOFT which raises the escape
  (exit :inlinep ()))


;;;
;;; "User functions"
;;;

(defun  pprint (s)
  ;; pretty print the expression <s>
  (with ((lmargin (lmargin)))
	(let ((#:system:print-for-read t)
	      (#:system:print-package-flag
	         (or #:system:print-package-flag t))
	      (:sizeline (sub (rmargin) (lmargin)))
	      (f ())) 
	  (:p s))
	(terpri))
  s)

(defun  pprin (s)
  ;; don't set global variables.
  (let ((:sizeline (sub (rmargin) (lmargin))))
    (:p s)))

(df  pretty :l
     ;; pretty print the list of functions <l>
     (mapc (lambda (l)
	     (cond ((memq l #:trace:trace)
		    (selectq (current-language)
			     ('english (print "; " l " is traced"))
			     ('french  (print "; " l " est tracee")))
		    (terpri)
		    (pprint (:get-plist-def l 'trace)))
		   ((getprop l 'resetfn)
		    (pprint (:get-plist-def l 'resetfn)))
		   (t (pprint (getdef l))))
	     (terpri))
           :l))

(defun  :get-plist-def (symbol prop)
  (makedef symbol
	   (car (getprop symbol prop))
	   (cdr (getprop symbol prop))))

(df  prettyf :l
     ;; like PRETTY but the result is redirected in a file
     ;; (1rst argument)
     (with ((outchan (openo (car :l))))
           (apply 'pretty (cdr :l))
           (close (outchan))
           (car :l)))

(defun  prettyend ()
  ;; Collect the space of this library
  (mapc 'remob (oblist '#.#:sys-package:colon))
  (rem-feature 'pretty)
  (libautoload pretty pprint pprin pretty prettyf prettyend)
  'prettyend)
 

;;;
;;; Set the Pretty Print indicators
;;;


(let ((x '

( 
 +       1
 -       1
 *       1
 append  1
 and     1
 calln   1
 catenate 1
 concat  1
 list    1
 max     1
 mcons   1
 min     1
 or      1
 plus    1
 prin    1
 print   1
 prog1   1
 progn   1
 protect 1
 times   1

 any     2
 block   2
 call    2
 catcherror     2
 do      2
 do*     2
 every   2
 evexit  2
 evtag   2
 exit    2
 funcall 2
 if      2
 ifn     2
 lambda  2
 let     2
 lets    2
 let*    2
 map     2
 mapc    2
 mapcar  2
 maplist 2
 mapcon  2
 mapcan  2
 repeat  2
 slet    2
 tag     2
 unless  2
 until   2
 untilexit   2
 when    2
 while   2
 with    2

 de      3
 defun   3
 df      3
 dm      3
 dmc     3
 dmd     3
 dms     3
 defmacro           3
 defsharp           3
 letn               3
 backtrack          3

 cond    4

 selectq 5

 setq    6
 setqq   6
 psetq   6

 tagbody 7

)))

(while x
   (ptype (nextl x) (nextl x)))))

