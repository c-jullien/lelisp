;;;
;;; FORMAT:  the function FORMAT
;;;
;;; $Source: /usr/cvs/lelisp/llib/format.ll,v $
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
        (error 'load 'erricf 'format))

(defvar #:sys-package:colon 'format)

(add-feature 'format)


;;;
;;; The calling functions
;;;


(defun prinf (:f-string . :args)
  (unless (stringp :f-string)
	  (error 'prinf 'errnsa :f-string))
  (mapc 'princn (:format (pname :f-string) :args ())))

(defun printf (:f-string . :args)
  (unless (stringp :f-string)
	  (error 'printf 'errnsa :f-string))
  (mapc 'princn (:format (pname :f-string) :args ()))
  (terpri))

(defun format (:where :f-string . :args)
  (unless (stringp :f-string)
	  (error 'format 'errnsa :f-string))
  (let ((:result (:format (pname :f-string) :args ())))
    (cond
     ((null :where) (:string :result))
     ((or (fixp :where) (eq :where t))
      (when (eq :where t) (setq :where ()))
      (with ((outchan :where)) (mapc 'princn :result) ()))
     (t (:error 'format :where)))))

;;;
;;; Internal functions
;;;

(defun :format (:format :args :r)
  (let ((:f :format)
	(:l :args))
    (tag format
	 (tag hat
	      (:format1))))
  :r)

(defun :format1 ()
  (let ((:char (nextl :f)))
    (cond
     ((null :char) (exit format))
     ((eq :char #/~)
      (let ((:par1)
	    (:par2)
	    (:par3)
	    (:par4)
	    (:par5)
	    (:par6)
	    (:par7)
	    (:at-sign)
	    (:colon)
	    (:par-n 1))
	(:tilde-decode)))
     (t (newr :r :char))))
  (:format1))

(defun :tilde-decode ()
  (let ((:c (nextl :f)))
    (selectq :c
	((#/0 #/1 #/2 #/3 #/4 #/5 #/6 #/7 #/8 #/9 #/- #/+)
	 (set (symbol 'format (concat 'par :par-n)) (:read-n (list :c)))
	 (:tilde-decode))
	(#/'
	 (set (symbol 'format (concat 'par :par-n)) (nextl :f))
	 (:tilde-decode))
	((#/v #/V)
	 (set (symbol 'format (concat 'par :par-n)) (nextl :l))
	 (:tilde-decode))
	(#/#
	 (set (symbol 'format (concat 'par :par-n)) (length :l))
	 (:tilde-decode))
	(#/, (incr :par-n) (:tilde-decode))
	(#/@ (setq :at-sign t) (:tilde-decode))
	(#/: (setq :colon t) (:tilde-decode))
	(#/A (:format-ascii (nextl :l)))
	(#/S (:format-sexpr (nextl :l)))
	(#/D (:format-decimal (nextl :l)))
	(#/B (:format-binary (nextl :l)))
	(#/O (:format-octal (nextl :l)))
	(#/X (:format-hexa (nextl :l)))
	(#/R (:format-radix (nextl :l)))
	(#/P (:format-plural))
	(#/C (:format-char (nextl :l)))
	(#/E (:format-e-float (nextl :l)))
	(#/F (:format-f-float (nextl :l)))
	(#/G (:format-g-float (nextl :l)))
	(#/% (:format-nl))
	(#\lf (:format-eol))
	(#/~ (:format-tilde))
	(#/T (:format-tab))
	(#/* (:format-ignore))
	(#/? (:format-indirect))
	(#/[ (:format-cond))
	(#/{ (:format-iter ()))
	(#/^ (:format-hat))
	(#/] (:error 'errfermant "]"))
	(#/; (:error 'errfermant ";"))
	(#/} (:error 'errfermant "}"))
	(#/) (:error 'errfermant ")"))
	(#/> (:error 'errfermant ">"))
	(t (:error 'format (string (list #/~ :c)))))))

(defun :pad (:val :wide :side :padchar)
  (let ((:length (length :val)))
    (if (>= :length :wide) 
	:val
        (if :side
	    (nconc :val (makelist (- :wide :length) :padchar))
	    (nconc (makelist (- :wide :length) :padchar) :val)))))

(defun :pad-4 (:val :wide :side :padchar :colinc :minpad)
  (setq :val (if :side
		 (nconc :val (makelist :minpad :padchar))
	         (nconc (makelist :minpad :padchar) :val)))
  (:pad-4-loop (length :val)))

(defun :pad-4-loop (:length)
  (if (<= :wide :length) 
      :val
      (setq :val (if :side 
		     (nconc :val (makelist :colinc :padchar))
		     (nconc (makelist :colinc :padchar) :val)))
      (:pad-4-loop (length :val))))


;;;
;;; The format specializers
;;;

(defun :format-pad (:val :par-1 :par-2)
  (setq :r (nconc :r (ifn :par-1 :val
			  (:pad :val :par-1 :at-sign
				(if :par-2 :par-2 #\sp))))))

(defun :format-ascii (:arg)
  (let ((#:system:print-for-read ()))
    (if (or :par3 :par4)
	(setq :r (nconc :r (:pad-4 (explode :arg) (if :par1 :par1 0)
				   :at-sign (if :par4 :par4 #\sp)
				   (if :par2 :par2 1)
				   (if :par3 :par3 0))))
      (:format-pad (explode :arg) :par1 :par2))))

(defun :format-sexpr (:arg)
  (let ((#:system:print-for-read t))
    (if (or :par3 :par4)
	(setq :r (nconc :r (:pad-4 (explode :arg) (if :par1 :par1 0)
				   :at-sign (if :par4 :par4 #\sp)
				   (if :par2 :par2 1)
				   (if :par3 :par3 0))))
      (:format-pad (explode :arg) :par1 :par2))))

(defun :format-decimal (:arg)
  (with ((obase 10))
        (let ((#:system:print-for-read ()))
	  (:format-pad (explode :arg) :par1 :par2))))

(defun :format-binary (:arg)
  (with ((obase 2))
        (let ((#:system:print-for-read ()))
	  (:format-pad (explode :arg) :par1 :par2))))

(defun :format-octal (:arg)
  (with ((obase 8))
        (let ((#:system:print-for-read ()))
	  (:format-pad (explode :arg) :par1 :par2))))

(defun :format-hexa (:arg)
  (with ((obase 16))
        (let ((#:system:print-for-read ()))
	  (:format-pad (explode :arg) :par1 :par2))))

(defun :format-radix (:arg)
  (ifn (fixp :par1) (:error 'errsxt (catenate "~" :par1 "R")))
  (with ((obase :par1))
        (let ((#:system:print-for-read ()))
	  (:format-pad (explode :arg) :par2 :par3))))

(defun :format-plural ()
  (let ((:arg (ifn :colon (nextl :l)
		   (nth (- (length :args) (length :l) 1) :args))))
    (if (eq :arg 1)
	(if :at-sign (setq :r (nconc1 :r #/y)))
        (setq :r (nconc :r
			(if :at-sign (list #/i #/e #/s) (list #/s)))))))

(defun :format-char (:arg)
  (ifn (asciip :arg) (:error 'erroob :arg))
  (cond
   ((and :at-sign :colon)
    (:error 'errsxt "~@:C"))
   (:at-sign
    (setq :r (nconc :r
		    (cond
		     ((= :arg #\del) (append '#"#\del" ()))
		     ((> :arg #\sp) (list #/# #// :arg))
		     ((= :arg #\sp) (append '#"#\sp" ()))
		     (t (list #/# #/^ (logor #$40 :arg)))))))
   (:colon (setq :r
		 (let ((:name (cassq :arg :char-names)))
		   (if :name (nconc :r (pname :name))
		     (nconc1 :r :arg)))))
   (t (setq :r (nconc1 :r :arg)))))

(defvar :char-names ())

(for (i 0 1 31)
     (newl :char-names (cons i (concat 'control- (ascii (logor #$40 i))))))

(progn (newl :char-names '(0 . null))
       (newl :char-names '(7 . bell))
       (newl :char-names '(8 . back-space))
       (newl :char-names '(9 . tab))
       (newl :char-names '(10 . line-feed))
       (newl :char-names '(13 . return))
       (newl :char-names '(27 . escape))
       (newl :char-names '(32 . space))
       (newl :char-names '(127 . delete)))

(defun :float-pad (:wide :ovfchar :padchar :val)
  (let ((:length (length :val)))
    (setq :r
	  (nconc :r
		 (ifn :wide :val
		      (if (and :ovfchar (< :wide :length))
			  (makelist :wide :ovfchar)
			  (nconc (makelist (- :wide :length)
					   (if :padchar :padchar #\sp))
				 :val)))))))

(defun :float-digits (:count)
  (when (lt :count 0)
	;; ?!?!? BUG HERE, NOT COMPLELETY FIXED!!
	(setq :count (sub 0 :count)))
  (let* ((:x (fmul :f (power 10 (- 0 1 :exp))))
	 (:y (fmul .5 (power 10 (- :count))))
	 (:rest (fadd :x :y))
	 (:list))
    (cond ((eq (fix :rest) 1)
	   (incr :exp))
	  (t
	   (when (> (fix :rest)(fix :x)); Il the rounding generate 1 digit
		 (setq :rest :x))))	; more before the dot (ex: 9.9 -> 10.0)
    (while (> :count 0)
      (let ((:fix (fix (* :rest 1e+4))))
	(setq :list (nconc :list (:next-digits (explode :fix))))
	(setq :rest (- (* :rest 1e+4) :fix))
	(setq :count (- :count 4))))
    :list))

(defun :next-digits (:sublist)
  (let ((:length (length :sublist)))
    (nconc (makelist (- 4 :length) #/0) :sublist)))

(defun :format-f-float (:arg)
  (ifn (numberp :arg)
       (let ((:par1 :par1)
	     (:par2 :par5))
	 (:format-decimal :arg))
       (unless (floatp :arg)
	       (setq :arg (float :arg)))
       (when :par3
	     (setq :arg (* :arg (power 10 :par3))))
       (:float-pad :par1
		   :par4
		   :par5
		   (let ((:rr (if (< :arg 0)
				  (list #/-)
				  (when :at-sign (list #/+))))
			 (:f (abs :arg)))
		     (if (or :par1 :par2)
			 ;; a size is given
			 (let* ((:exp (if (= :f 0)
					  0
					  (fix (log10 :f))))
				(:par1 (or :par1 100))
				(:par2
				 (or :par2
				     (max 0
					  (- :par1
					     2
					     (max :exp 0)
					     (if (or :at-sign (< :arg 0))
						 1
					         0)))))
				(:digits (:float-digits (+ :par2 
							   :exp
							   1))))
			   (:float-f)
			   :rr)
		       (explode :arg))))))

(defun :float-f ()
  (if (< :exp 0)
      (let ((:zero (min (- -1 :exp) :par2)))
	(ifn (and (= (- :par1 :par2) 1) (not :at-sign) (>= :arg 0))
	     (newr :rr #/0))
	(newr :rr #/.)
	(if (zerop :f)
	    (repeat :zero (newr :rr #/0))
	    (cond
	     ((<> :zero :par2)
	      (repeat :zero (newr :rr #/0))
	      (repeat (- :par2 :zero) (newr :rr (nextl :digits))))
	     (t (repeat :zero (newr :rr #/0)) ))))
    (repeat (1+ :exp) (newr :rr (nextl :digits)))
    (newr :rr #/.)
    (repeat :par2 (newr :rr (nextl :digits)))))
 
(defun :format-e-float (:arg)
  (ifn (numberp :arg)
       (let ((:par1 :par1)
	     (:par2 :par6))
	 (:format-decimal :arg))
       (ifn (floatp :arg) (setq :arg (float :arg)))
       (ifn :par4 (setq :par4 1))
       (:float-pad :par1 :par5 :par6
	  (let ((:rr (if (< :arg 0) (list #/-) (if :at-sign (list #/+))))
		(:f (abs :arg)))
	    (if (or :par1 :par2 :par3)
		(let ((:exp (if (= :f 0) 0 (floor (log10 :f))))
		      (:par1 (or :par1 100))
		      (:savexp)
		      (:nexp)
		      (:exp-r)
		      (:exp-l))
		  (:float-exp (- :exp :par4 -1))
		  (setq :savexp :exp)
		  (setq :exp-l (length :exp-r))
		  (if (= :exp-l :par1) :exp-r
		    (:float-e (- :par1 :exp-l (length :rr)))
                    ; incremente l'exposant de la liste :exp-r
                    ; si :exp a bouge' (passage de la barriere des 9.999999)
                    (setq :nexp :exp-r)
		    (nextl :nexp) ; pour passer l'eventuel premier +/-
		    (if (lt :savexp :exp) ; si 
			(let (( l (explode (add1 (implode :nexp)))))
			      (ifn (eq #/- (car l)) (newl l #/+))
			      (rplac :nexp (car l)
			             (cdr l))))
		    (nconc :rr :exp-r)))
	      (explode :arg))))))

(defun :float-exp (:t-exp)
  (newr :exp-r (or :par7 #/e))
  (newr :exp-r (if (>= :t-exp 0) #/+ #/-))
  (let* ((:nb-list (pname (abs :t-exp)))
	 (:length (length :nb-list)))
    (if (and :par5 :par3 (< :par3 :length))
	(setq :exp-r (makelist :par1 :par5))
        (setq :exp-r (nconc :exp-r
			    (if :par3 (makelist (- :par3 :length) #/0))
			    :nb-list)))))

(defun :float-e (:r-length)
  (ifn :par2 (setq :par2 (- :r-length 2)))
  (cond
   ((zerop :par4)
    (setq :par2 (max :par2 0))
    (let ((:digits (:float-digits :par2)))
      (:float-e-1 0 0 :par2)))
   ((> :par4 0)
    (setq :par2 (max :par2 (1- :par4)))
    (let ((:digits (:float-digits (1+ :par2))))
      (:float-e-1 :par4 0 (- :par2 -1 :par4))))
   (t (setq :par2 (max :par2 (- 1 :par4)))
      (let ((:digits (:float-digits (+ :par2 :par4))))
	(:float-e-1 0 (abs :par4) (+ :par2 :par4))))))

(defun :float-e-1 (:before :zero :after)
  (repeat :before (newr :rr (nextl :digits)))
  (if (and (zerop :before) (<> :r-length (+ 1 :zero :after)))
      (newr :rr #/0))
  (newr :rr #/.)
  (if (> :zero 0) (setq :rr (nconc :rr (makelist :zero #/0))))
  (repeat :after (newr :rr (nextl :digits))))

(defun :format-g-float (:arg)
  (ifn (numberp :arg)
       (let ((:par1 :par1)
	     (:par2 :par6))
	 (:format-decimal :arg))
       (ifn (floatp :arg) (setq :arg (float :arg)))
       (let* ((:n (if (zerop :arg) 0 (1+ (floor (log10 (abs :arg))))))
	      (:ee (ifn :par3 4 (+ :par3 2)))
	      (:ww (ifn :par1 0 (- :par1 :ee)))
	      (:q (- :ww 2))
	      (:d (if :par2 :par2 (max :q (min :n 7))))
	      (:dd (- :d :n)))
	 (if (or (< :dd 0) (> :dd :d))
	     (:format-e-float :arg)
	     (let ((:par1 :ww)
		   (:par2 :dd)
		   (:par3)
		   (:par4 :par5)
		   (:par5 :par6))
	       (:format-f-float :arg))
	     (setq :r (nconc :r (makelist :ee #\sp)))))))

(defun :format-nl ()
  (ifn :par1 (setq :par1 1))
  (setq :r (nconc :r (mapcan 'list
			     (makelist :par1 #\cr)
			     (makelist :par1 #\lf)))))

(defun :format-eol ()
  (cond
   ((and :at-sign :colon) (:error 'errsxt "~@:#\LF"))
   (:at-sign (setq :r (nconc1 :r #\lf))
	     (while (eq (typecn (car :f)) 'csep) (nextl :f)))
   (:colon)
   (t (while (eq (typecn (car :f)) 'csep) (nextl :f)))))

(defun :format-tilde ()
  (ifn :par1 (setq :par1 1))
  (setq :r (nconc :r (makelist :par1 #/~))))

(defun :format-tab ()
  (let ((:back :r))
    (while (memq #\lf :back) (setq :back (cdr (memq #\lf :back))))
    (setq :back (length :back))
    (ifn :par1 (setq :par1 1))
    (ifn :par2 (setq :par2 1))
    (let ((:n)
	  (:base (if :at-sign 0 :par1))(:pos))
      (if :at-sign
	  (setq :n :par1 :pos (+ :back :par1))
	  (if (< :back :par1)
	      (setq :n (- :par1 :back) :pos :par1)
	      (setq :n 0 :pos :back)))
      (let ((:mod (modulo (- :pos :base) :par2)))
	(ifn (zerop :mod)
	     (setq :n (+ :n (- :par2 :mod)))))
      (setq :r (nconc :r (makelist :n #\sp))))))

(defun :format-ignore ()
  (ifn :par1 (setq :par1 (if :at-sign 0 1)))
  (cond
   ((and :at-sign :colon) (:error 'errsxt "~@:*"))
   (:at-sign (setq :l (nthcdr :par1 :args)))
   (:colon (let ((:l1 (length :args))
		 (:l2 (length :l)))
	     (setq :l (nthcdr (- :l1 :l2 :par1) :args))))           
   (t (setq :l (nthcdr :par1 :l)))))

(defun :format-indirect ()
  (let* ((:s (nextl :l))
	 (:format (pname :s)))
    (ifn (stringp :s) (:error 'errnsa :s))
    (tag hat
	 (if :at-sign
	     (:format-ind-at)
	     (:format-ind-list (nextl :l))))))

(defun :format-ind-at ()
  (let ((:f :format))
    (:format-ind-at1 (nextl :f))))

(defun :format-ind-at1 (:char)
  (cond
   ((null :char))
   ((eq :char #/~)
    (let ((:par1)
	  (:par2)
	  (:par3)
	  (:par4)
	  (:par5)
	  (:par6)
	  (:par7)
	  (:at-sign)
	  (:colon)
	  (:par-n 1))
      (:tilde-decode)
      (:format-ind-at1 (nextl :f))))
   (t (newr :r :char) (:format-ind-at1 (nextl :f)))))

(defun :format-ind-list (:args)
  (ifn (listp :args) (:error 'errnla :args))
  (let ((:f :format)
	(:l :args))
    (tag format
	 (tag hat
	      (:format1)))))

(defun :format-cond ()
  (cond
   ((and :at-sign :colon) (:error 'errsxt "~@:["))
   (:at-sign (setq :par1 (car :l))
	     (cond
	      ((not :par1) (:search-cond (nextl :f) 0 ()) (nextl :l))
	      (t (let* ((:format (:search-cond (nextl :f) 0 ()))
			(:f :format))
		   (tag format
			(:format1))))))
   (:colon (nextl :l :par1)
	   (let* ((:format (:search-cond (nextl :f) (if :par1 1 0) ()))
		  (:f :format))
	     (tag format
		  (:format1))))
   (t (ifn :par1 (nextl :l :par1))
      (let* ((:format (:search-cond (nextl :f) :par1 ()))
	     (:f :format))
	(tag format
	     (:format1))))))

(defun :search-cond (:c :n :ff)
  (ifn :c (:error 'errsxt "~[..."))
  (if (zerop :n)
      (selectq :c
	  (#/~ (let ((:cc (nextl :f)))
		 (selectq :cc
		     (() (:error ':format-cond :f))
		     (#/] :ff)
		     (#/; (prog1 :ff (:search-cond (nextl :f) -1 ())))
		     (#/: (if (eq (car :f) #/;)
				  (prog1 :ff (:search-cond (nextl :f) -1 ()))
				  (:search-cond (nextl :f) :n
						(nconc :ff (list :c :cc)))))
		     (t (:search-cond (nextl :f) :n
				      (nconc :ff (list :c :cc)))))))
		 (t (:search-cond (nextl :f) :n (nconc1 :ff :c))))
	       (ifn (eq :c #/~) (:search-cond (nextl :f) :n ())
		    (nextl :f :c)
		    (selectq :c
			(() (:error 'errsxt "~[..."))
			(#/] ())
			(#/; (:search-cond (nextl :f) (1- :n) ()))
			(#/: (nextl :f :c)
			     (:search-cond (nextl :f)
					   (if (eq :c #/;) 0 :n) ()))
	   (t (:search-cond (nextl :f) :n ()))))))

(defun :format-iter (:iter-colon)
  (let ((:iter-n (if :par1 :par1 -1))
	(:iter-n-first)
	(:format (:search-iter (nextl :f) () ()))
	(:f))
    (unless (zerop :iter-n)
	    (unless :format
                    (setq :format (nextl :l))
                    (ifn (stringp :format) (:error 'errnsa :format))
                    (setq :format (pname :format)))
	    (setq :iter-n-first :iter-n :f :format)
	    (cond
	     ((and :at-sign :colon) 
	      (tag colon-hat
		   (:iter-colon :l)))
	     (:at-sign (tag hat (:iter)))
	     (:colon (tag colon-hat (:iter-colon (nextl :l))))
	     (t (let ((:args (car :l))
		      (:l (nextl :l)))
		  (tag hat (:iter))))))))

(defun :search-iter (:c :ff :cc)
  (cond
   ((null :c)
    (:error 'errsxt "~}"))
   ((eq :c #/~) (nextl :f :cc)
    (cond
     ((eq :cc #/}) :ff)
     ((and (eq :cc #/:) (eq (car :f) #/}))
      (setq :iter-colon t) (nextl :f) :ff)
     (t (:search-iter (nextl :f) (nconc :ff (list :c :cc)) ()))))
   (t (:search-iter (nextl :f) (nconc1 :ff :c) ()))))

(defun :iter ()
  (if (null :format) (exit hat))
  (if (and (null :l) (not :iter-colon)) (exit hat))
  (:iter-loop (nextl :f)))

(defun :iter-loop (:char)
  (cond
   ((zerop :iter-n) (exit hat))
   ((null :char)
    (if (null :l) (exit hat))
    (decr :iter-n) (setq :f :format) (:iter-loop (nextl :f)))
   ((eq :char #/~)
    (let ((:par1)
	  (:par2)
	  (:par3)
	  (:par4)
	  (:par5)
	  (:par6)
	  (:par7)
	  (:at-sign)
	  (:colon)
	  (:par-n 1))
      (:tilde-decode)))
   (t (newr :r :char)))
  (:iter-loop (nextl :f)))

(defun :iter-colon (:sub-args)
  (if (null :format) (exit colon-hat))
  (:iter-colon-loop (car :sub-args) (nextl :sub-args)))

(defun :iter-colon-loop (:args :l)
  (if (and (null :l) (null :sub-args)
	   (not (and (= :iter-n :iter-n-first) :iter-colon)))
      (exit colon-hat))
  (if (zerop :iter-n) (exit colon-hat))
  (decr :iter-n)
  (tag hat
       (tag format
	    (let ((:f :format))
	      (:format1))))
  (:iter-colon-loop (car :sub-args) (nextl :sub-args)))

(defun :format-hat ()
  (if (null :par1) (setq :par1 (length :l)))
  (if (or (and (null :par2) (null :par3) (zerop :par1))
	  (and :par2 (null :par3) (= :par1 :par2))
	  (and :par2 :par3 (or (<= :par1 :par2) (<= :par2 :par3))))
      (if :colon (exit colon-hat) (exit hat))))

(defun :read-n (:l)
  (let ((:c (car :f)))
    (cond
     ((digitp :c) (nextl :f) (:read-n (nconc1 :l :c)))
     (t (implode :l)))))

(defun :string (:lst)
  ;; creates a string containing all the characters of the
  ;; list :lst, because the "string" function don't accept
  ;; more than 1k chars.
  (let* ((:n (length :lst))
	 (:s (makestring :n 32))
	 (:l (nreverse :lst)))
    (while (gt :n 0) 
      (setq :n (sub1 :n))
      (sset :s :n (nextl :l)))
    :s))

(defmacro :error (a b) `(error "Format" ,a ,b))

(defmessage errfermant (french "hors contexte")
                       (english "out of context"))
