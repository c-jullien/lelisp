;;;
;;; FORMAT:  the FORMAT function
;;;
;;; $Source: /usr/cvs/lelisp/llib/nformat.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;; A slightly revisited version of Format, still using
;;; lists and 16! dynamic variables, but probably easier
;;; to understand (and to compile!)


(unless (>= (version) 15.2)
        (error 'load 'erricf 'format))

(defvar #:sys-package:colon 'format)

(add-feature 'format)


;;;
;;; Errors handling
;;;

(defvar :glb-fnt-name)		; the name of the invoking function

(defun :error (msg arg) 
  (error :glb-fnt-name msg arg))

(defmessage :errfermant
  (french "hors contexte")
  (english "out of context"))

(defmessage :errbaddest
  (french "mauvaise destination")
  (english "bad destination"))

(defmessage :error-parameter-nn
  (french "parame`tre non nume'rique")
  (english "non numerical parameter"))

(defmessage :error-too-many-parameters
  (french  "trop de parame`tres")
  (english "too many parameters"))

;;;
;;; The calling functions
;;;


(defun prinf (strg . largs)
  (setq :glb-fnt-name 'prinf)
  (unless (stringp strg)
	  (:error 'errnsa strg))
  (mapc 'princn (:format (pname strg) largs)))

(defun printf (strg . largs)
  (setq :glb-fnt-name 'printf)
  (unless (stringp strg)
	  (:error 'errnsa strg))
  (mapc 'princn (:format (pname strg) largs))
  (print))

(defun format (where strg . largs)
  (setq :glb-fnt-name 'format)
  (unless (stringp strg)
	  (:error 'errnsa strg))
  (let ((res (:format (pname strg) largs)))
    (cond
     ((null where) (:string res))
     ((or (fixp where) (eq where t))
      (when (eq where t) (setq where ()))
      (with ((outchan where)) (mapc 'princn res) ()))
     (t (:error ':errbaddest where)))))


;;;
;;; Result construction functions
;;;

(defvar :glb-res)    ; the global result list

(defun :emit-char (char)
  ;; emits the character <char>
  (newl :glb-res char))

(defun :emit-n-chars (n char)
  ;; emits <n> times the chararcter <char>
  (repeat n (newl :glb-res char)))

(defun :emit-l-chars (lofchar)
  ;; emits the list of characters <lofchar>
  (while lofchar (newl :glb-res (nextl lofchar))))

(defun :string (lofchar)
  ;; creates a string containing all the characters of the
  ;; list <lofchar> in reverse order, because the "string"
  ;; function don't accept more than 1k chars.
  (let ((indx 0)
	(strg (makestring (length lofchar) 32)))
    (setq lofchar (nreverse lofchar))
    (while lofchar
      (sset strg indx (nextl lofchar))
      (setq indx (add1 indx)))
    strg))

;;;
;;; Internal functions
;;;

(defvar :glb-format)	; the format string
(defvar :glb-args)	; the arguments list
(defvar :glb-cf)	; the current format string
(defvar :glb-ca)	; the current arguments list

(defun :format (format largs)
  (let ((:glb-format format)
	(:glb-cf     format)
	(:glb-args   largs)
	(:glb-ca     largs)
	(:glb-res    ()))
    (:tag-format-scan)
    :glb-res))

(defun :tag-format-scan ()
  (tag hat (:format-scan)))

(defun :format-scan ()
  (let ((fchar))
    (untilexit end-format
        (setq fchar (nextl :glb-cf))
	(cond
	   ((null fchar)
	    (exit end-format))
	   ((eq fchar #/~)
	    (:tilde-decode))
	   (t (:emit-char fchar))))))

;;;
;;; Tilde Decoder: Set up the global parameter variables.
;;;

(defvar :glb-par-1 ())
(defvar :glb-par-2 ())
(defvar :glb-par-3 ())
(defvar :glb-par-4 ())
(defvar :glb-par-5 ())
(defvar :glb-par-6 ())
(defvar :glb-par-7 ())
(defvar :glb-atsgn ())
(defvar :glb-colon ())

(defun :set-parameter (nb value)
  ;; set the <nb>th parameter of the form #:format:glb-par-<nb>
  ;; with the value <value>.
  ;; Not a very exciting code ...
  (selectq nb
     (1 (setq :glb-par-1 value))
     (2 (setq :glb-par-2 value))
     (3 (setq :glb-par-3 value))
     (4 (setq :glb-par-4 value))
     (5 (setq :glb-par-5 value))
     (6 (setq :glb-par-6 value))
     (7 (setq :glb-par-7 value))
     (t (:error ':error-too-many-parameters nb))))

(defun :tilde-decode ()
  ;; dynamic bindings
  (let ((:glb-par-1)
	(:glb-par-2)
	(:glb-par-3)
	(:glb-par-4)
	(:glb-par-5)
	(:glb-par-6)
	(:glb-par-7)
	(:glb-atsgn)
	(:glb-colon))

    ;; local bindings
    (let ((tilde-char)
	  (par-nb 1))

      ;; set the parameters
      (untilexit end-decode-parameter
	   (setq tilde-char (nextl :glb-cf))
	   (selectq tilde-char
	       (#"+-0123456789"
		       (:set-parameter par-nb (:read-n (ncons tilde-char))))
	       (#/'    (:set-parameter par-nb (nextl :glb-cf)))
	       (#"vV"  (let ((value (nextl :glb-ca)))
			 (unless (fixp value)
				 (:error ':error-parameter-nn value))
			 (:set-parameter par-nb value)))
	       (#/#    (:set-parameter par-nb (length :glb-ca)))
	       (#/,    (setq par-nb (add1 par-nb)))
	       (#/@    (setq :glb-atsgn t))
	       (#/:    (setq :glb-colon t))
	       (t      (exit end-decode-parameter))))

      ;; decode the directive
      (selectq tilde-char
	(#"aA"  (:format-ascii))
	(#"sS"  (:format-sexpr))
	(#"dD"  (:format-integer 10))
	(#"bB"  (:format-integer 2))
	(#"oO"  (:format-integer 8))
	(#"xX"  (:format-integer 16))
	(#"rR"  (:format-radix))
	(#"pP"  (:format-plural))
	(#"cC"  (:format-char))
	(#"eE"  (:format-e-float (nextl :glb-ca)))
	(#"fF"  (:format-f-float (nextl :glb-ca)))
	(#"gG"  (:format-g-float (nextl :glb-ca)))
	(#/%    (:format-nl))
	(#\lf   (:format-eol))
	(#/~    (:format-tilde))
	(#"tT"  (:format-tab))
	(#/*    (:format-ignore))
	(#/?    (:format-indirect))
	(#/[    (:format-cond))
	(#/{    (:format-iter ()))
	(#/^    (:format-hat))
	(#/]    (:error ':errfermant "]"))
	(#/;    (:error ':errfermant ";"))
	(#/}    (:error ':errfermant "}"))
	(#/)    (:error ':errfermant ")"))
	(#/>    (:error ':errfermant ">"))
	(t      (:error 'format (string (list #/~ tilde-char)))))))))

(defun :read-n (lonb)
  ;; return a fixnum decoded from ":glb-cf"
  (let ((fchar (car :glb-cf)))
    (cond
     ((digitp fchar) (nextl :glb-cf) (:read-n (cons fchar lonb)))
     (t (let ((value (implode (nreverse lonb))))
	  (if (fixp value)
	      value
	      (:error ':error-parameter-nn value)))))))

;;;
;;; Various format padding
;;;

(defun :format-pad (lofchar mincol padchar)
  ;; lofchar = a list of char in the natural order
  ;; mincol  = the minimum number to be emitted
  ;; padchar = the padding character
  ;; and :glb-atsgn=t left justify, =() right justify
  (setq mincol  (or mincol  0))
  (setq padchar (or padchar #\sp))
  (let ((len (length lofchar)))
    (if :glb-atsgn
	(progn
	  (:emit-l-chars lofchar)
	  (:emit-n-chars (sub mincol len) padchar))
        (progn
	  (:emit-n-chars (sub mincol len) padchar)
	  (:emit-l-chars lofchar)))))
			
(defun :format-pad4 (lofchar)
  ;; lofchar = a list of char in the natural order
  (let ((wide    (or :glb-par-1 0))      ; total  maxwidth
	(colinc  (or :glb-par-2 1))      ; increment
	(minpad  (or :glb-par-3 0))      ; min size
	(padchar (or :glb-par-4 #\sp))   ; the padding character
	(len     (length lofchar)))      ; the length of the list of chars
    ;; and :glb-atsgn=t left justify, =() right justify
    (setq len (add len minpad))
    (if :glb-atsgn
	(progn
	  (:emit-l-chars lofchar)
	  (:emit-n-chars minpad padchar)
	  (while (lt len wide)
	         (:emit-n-chars colinc padchar)
		 (setq len (add len colinc))))
        (progn
	  (while (lt len wide)
	         (:emit-n-chars colinc padchar)
		 (setq len (add len colinc)))
	  (:emit-n-chars minpad padchar)
	  (:emit-l-chars lofchar)))))
		  
(defun :float-pad (wide ovfchar padchar val)
  (setq val (nreverse val))
  (setq padchar (or padchar #\sp))
  (let ((len (length val)))
    (if (null wide)
	(:emit-l-chars val)
        (if (and ovfchar (lt wide len))
	    (:emit-n-chars wide ovfchar)
	    (progn
	      (:emit-n-chars (sub wide len) padchar)
	      (:emit-l-chars val))))))


;;;
;;; The format specializers
;;;

(defun :format-ascii ()
  (let ((#:system:print-for-read ()))
    (:format-as-aux)))

(defun :format-sexpr ()
  (let ((#:system:print-for-read t))
    (:format-as-aux)))

(defun :format-as-aux ()
  (if (or :glb-par-3 :glb-par-4)
      (:format-pad4 (explode (nextl :glb-ca)))
      (:format-pad  (explode (nextl :glb-ca)) :glb-par-1 :glb-par-2)))

(defun :format-integer (base)
  (with ((obase base))
        (let ((#:system:print-for-read ()))
	  (:format-pad (explode (nextl :glb-ca)) :glb-par-1 :glb-par-2))))

(defun :format-radix ()
  (let ((value (nextl :glb-ca))
	(radix :glb-par-1))
    (unless (fixp radix)
	    (:error 'errsxt (catenate "~" radix "R")))
    (with ((obase radix))
	  (let ((#:system:print-for-read ()))
	    (:format-pad (explode value) :glb-par-2 :glb-par-3)))))

(defun :format-plural ()
  ;; output a plural.
  (let ((arg (if :glb-colon
		 (nth (sub (length :glb-args) (add1 (length :glb-ca)))
		      :glb-args)
	         (nextl :glb-ca))))
    (if (eq arg 1)
	(when :glb-atsgn (:emit-char #/y))
        (if :glb-atsgn
	    (:emit-l-chars '#"ies")
	    (:emit-char #/s)))))

(defun :format-char ()
  ;; output a simple character.
  (let ((value (nextl :glb-ca)))
    (unless (asciip value) (:error 'erroob value))
    (cond
     ((and :glb-atsgn :glb-colon)
      (:error 'errsxt "~@:C"))
     (:glb-atsgn
      (:emit-l-chars
	    (cond
	     ((eq value #\del) '#"#\del")
	     ((gt value #\sp)  (list #/# #// value))
	     ((eq value #\sp)  '#"#\sp")
	     (t (list #/# #/^ (logor #$40 value))))))
     (:glb-colon
      (let ((name (cassq value :char-names)))
	(if name
	    (:emit-l-chars (pname name))
	    (:emit-char value))))
     (t (:emit-char value)))))


(defvar :char-names ())

(defun :set-char-names ()
  (for (i 0 1 31)
       (newl :char-names
	     (cons i (concat 'control- (ascii (logor #$40 i))))))
  (newl :char-names '(0   . null))
  (newl :char-names '(7   . bell))
  (newl :char-names '(8   . back-space))
  (newl :char-names '(9   . tab))
  (newl :char-names '(10  . line-feed))
  (newl :char-names '(13  . return))
  (newl :char-names '(27  . escape))
  (newl :char-names '(32  . space))
  (newl :char-names '(127 . delete)))

(:set-char-names)

(defun :format-nl ()
  ;; output <n> new lines.
  (repeat (or :glb-par-1 1)
	  (:emit-char #\cr)
	  (:emit-char #\lf)))

(defun :format-eol ()
  (cond
   ((and :glb-atsgn :glb-colon) (:error 'errsxt "~@:#\LF"))
   (:glb-atsgn (:emit-char #\lf)
	       (while (eq (typecn (car :glb-cf)) 'csep) (nextl :glb-cf)))
   (:glb-colon)
   (t (while (eq (typecn (car :glb-cf)) 'csep) (nextl :glb-cf)))))

(defun :format-tilde ()
  ;; emit <n> ~ characters.
  (:emit-n-chars (or :glb-par-1 1) #/~))

(defun :format-tab ()
  ;; output tab stop.
  (let ((colnum (or :glb-par-1 1))
	(colinc (or :glb-par-2 1))
	(curpos (if (null (memq :glb-res #\lf))
		    (length :glb-res)
		    (sub (length :glb-res)
			 (length (memq :glb-res #\lf)))))
	(count)
	(pos)
	(mod))
    (if :glb-atsgn
	(setq count colnum pos (add curpos colnum))
	(if (lt curpos colnum)
	    (setq count (sub colnum curpos) pos colnum)
	    (setq count 0 pos curpos)))
    (setq mod (rem (sub pos (if :glb-atsgn 0 colnum)) colinc))
    (when (neq mod 0)
	  (setq count (add count (sub colinc mod))))
    (:emit-n-chars count #\sp)))

(defun :format-ignore ()
  ;; ignore <n> arguments.
  (let ((count (or :glb-par-1 (if :glb-atsgn 0 1))))
    (if (and :glb-atsgn :glb-colon)
	(:error 'errsxt "~@:*")
        (setq :glb-ca
	      (cond (:glb-atsgn (nthcdr count :glb-args))
		    (:glb-colon (nthcdr (sub (sub (length :glb-args)
						  (length :glb-ca))
					     count)
					:glb-args))
		    (t (nthcdr count :glb-ca)))))))

(defun :format-indirect ()
  ;; indirect format.
  (let ((strg (nextl :glb-ca)))		; the new format string
    (if (stringp strg)
	(setq strg (pname strg))
        (:error 'errnsa strg))
    (let ((:glb-format strg)
	  (:glb-cf     strg))
      (if :glb-atsgn
	  ;; if @, use the same argument list
	  (:tag-format-scan)
	  ;; if not @, use the next arg as argument list.
	  (let* ((:glb-ca   (nextl :glb-ca))
		 (:glb-args :glb-ca))
	    ;; which has to be a list.
	    (unless (listp :glb-ca)
		    (:error 'errnla :glb-ca))
	    (:tag-format-scan))))))

(defun :format-cond ()
  (cond
   ((and :glb-atsgn :glb-colon)
    (:error 'errsxt "~@:["))
   (:glb-atsgn 
    (setq :glb-par-1 (car :glb-ca))
    (cond
     ((not :glb-par-1)
      (:search-cond (nextl :glb-cf) 0 ())
      (nextl :glb-ca))
     (t (let* ((:glb-format (:search-cond (nextl :glb-cf) 0 ()))
	       (:glb-cf :glb-format))
	  (:format-scan)))))
   (:glb-colon
    (nextl :glb-ca :glb-par-1)
    (let* ((:glb-format (:search-cond (nextl :glb-cf)
				      (if :glb-par-1 1 0) ()))
	   (:glb-cf :glb-format))
      (:format-scan)))
   (t (ifn :glb-par-1 (nextl :glb-ca :glb-par-1))
      (let* ((:glb-format (:search-cond (nextl :glb-cf) :glb-par-1 ()))
	     (:glb-cf :glb-format))
	(:format-scan)))))

(defun :search-cond (:c :n :ff)
  (ifn :c (:error 'errsxt "~[..."))
  (if (zerop :n)
      (selectq :c
	 (#/~ (let ((:cc (nextl :glb-cf)))
		(selectq :cc
		    (() (:error ':format-cond :glb-cf))
		    (#/] :ff)
		    (#/; (prog1 :ff (:search-cond (nextl :glb-cf) -1 ())))
		     (#/: (if (eq (car :glb-cf) #/;)
				  (prog1 :ff (:search-cond (nextl :glb-cf) -1 ()))
				  (:search-cond (nextl :glb-cf) :n
						(nconc :ff (list :c :cc)))))
			  (t (:search-cond (nextl :glb-cf) :n
					   (nconc :ff (list :c :cc)))))))
		(t (:search-cond (nextl :glb-cf) :n (nconc1 :ff :c))))
	      (ifn (eq :c #/~) (:search-cond (nextl :glb-cf) :n ())
		   (nextl :glb-cf :c)
		   (selectq :c
		       (() (:error 'errsxt "~[..."))
		       (#/] ())
		       (#/; (:search-cond (nextl :glb-cf) (1- :n) ()))
		       (#/: (nextl :glb-cf :c)
			    (:search-cond (nextl :glb-cf)
					  (if (eq :c #/;) 0 :n) ()))
		       (t (:search-cond (nextl :glb-cf) :n ()))))))

(defun :format-iter (:iter-colon)
  (let ((:iter-n (or :glb-par-1 -1))
	(:iter-n-first)
	(:glb-format (:search-iter (nextl :glb-cf) () ()))
	(:glb-cf))
    (unless (eq :iter-n 0)
	    (unless :glb-format
                    (setq :glb-format (nextl :glb-ca))
                    (unless (stringp :glb-format) (:error 'errnsa :glb-format))
                    (setq :glb-format (pname :glb-format)))
	    (setq :iter-n-first :iter-n :glb-cf :glb-format)
	    (cond
	     ((and :glb-atsgn :glb-colon) 
	      (tag colon-hat
		   (:iter-colon :glb-ca)))
	     (:glb-atsgn (tag hat (:iter)))
	     (:glb-colon (tag colon-hat (:iter-colon (nextl :glb-ca))))
	     (t (let ((:glb-args (car :glb-ca))
		      (:glb-ca (nextl :glb-ca)))
		  (tag hat (:iter))))))))

(defun :search-iter (:c :ff :cc)
  (cond
   ((null :c)
    (:error 'errsxt "~}"))
   ((eq :c #/~) (nextl :glb-cf :cc)
    (cond
     ((eq :cc #/}) :ff)
     ((and (eq :cc #/:) (eq (car :glb-cf) #/}))
      (setq :iter-colon t) (nextl :glb-cf) :ff)
     (t (:search-iter (nextl :glb-cf) (nconc :ff (list :c :cc)) ()))))
   (t (:search-iter (nextl :glb-cf) (nconc1 :ff :c) ()))))

(defun :iter ()
  (if (null :glb-format) (exit hat))
  (if (and (null :glb-ca) (not :iter-colon)) (exit hat))
  (:iter-loop (nextl :glb-cf)))

(defun :iter-loop (char)
  (cond
   ((eq :iter-n 0)
    (exit hat))
   ((null char)
    (when (null :glb-ca)
	  (exit hat))
    (setq :iter-n (sub1 :iter-n))
    (setq :glb-cf :glb-format)
    (:iter-loop (nextl :glb-cf)))
   ((eq char #/~)
    (:tilde-decode))
   (t (:emit-char char)))
  (:iter-loop (nextl :glb-cf)))

(defun :iter-colon (sub-args)
  (when (null :glb-format) (exit colon-hat))
  (:iter-colon-loop (car sub-args) (nextl sub-args)))

(defun :iter-colon-loop (:glb-args :glb-ca)
  (if (and (null :glb-ca) (null sub-args)
	   (not (and (eq :iter-n :iter-n-first) :iter-colon)))
      (exit colon-hat))
  (if (eq :iter-n 0) (exit colon-hat))
  (setq :iter-n (sub1 :iter-n))
  (let ((:glb-cf :glb-format))
    (:tag-format-scan))
  (:iter-colon-loop (car sub-args) (nextl sub-args)))

(defun :format-hat ()
  (when (null :glb-par-1) (setq :glb-par-1 (length :glb-ca)))
  (if (or (and (null :glb-par-2) (null :glb-par-3) (eq :glb-par-1 0))
	  (and :glb-par-2 (null :glb-par-3) (eq :glb-par-1 :glb-par-2))
	  (and :glb-par-2
	       :glb-par-3
	       (or (le :glb-par-1 :glb-par-2)
		   (le :glb-par-2 :glb-par-3))))
      (if :glb-colon (exit colon-hat) (exit hat))))

;;;
;;; Utilities
;;;

(defun :imin (a b)
  (if (lt a b)
      a
      b))

(defun :imax (a b)
  (if (gt a b)
      a
      b))


;;;
;;; Floating point
;;;

(defun :float-digits (value count exp)
  ;; return the list of <count> significative digits of 
  ;; the value <value>.
  ;; <exp> = log10(value).
  (let* ((x (fmul value (power 10 (sub 0 (add1 exp)))))
	 (y (fmul .5 (power 10 (sub 0 count))))
	 (rest (fadd x y))
	 (lst)
	 (fix))
    (when (gt (fix rest) (fix x))	; If the rounding generate 1 digit
	  (setq rest x))		; more before the dot (ex: 9.9 -> 10.0)
    (while (gt count 0)
      (setq fix (fix (fmul rest 10.)))
      (newl lst (add #/0 fix))
      (setq rest (- (fmul rest 10.) fix))
      (setq count (sub1 count)))
    (nreverse lst)))

(defun :format-f-float (value)
  (if (not (numberp value))
      ;; not a number
      (with ((obase 10))
	    (let ((#:system:print-for-read ()))
	      (:format-pad (explode value) :glb-par-1 :glb-par-5)))
      ;; a good number. Float it.
      (unless (floatp value) (setq value (float value)))
      ;; handle the k-factor.
      (when :glb-par-3 (setq value (* value (power 10 :glb-par-3))))
      ;; comnpute the representation
      (let ((rr (if (flt value 0.) 
		    (ncons #/-)
		    (when :glb-atsgn (ncons #/+)))))
	;; value = absolute value 
	(when (flt value 0.) (setq value (fsub 0. value)))
	(if (or :glb-par-1 :glb-par-2)
	    (let* ((exp (if (feqn value 0.) 0 (fix (log10 value))))
		   (par-1 (or :glb-par-1 100))
		   (par-2 (or :glb-par-2
			      (:imax 0 (- par-1 2 (max exp 0)
					  (length rr)))))
		   (digits (:float-digits value (add par-2 (add1 exp)) exp)))
	      (if (lt exp 0)
		  (let ((zero (:imin (sub -1 exp) par-2)))
		    (ifn (and (eq (sub par-1 par-2) 1)
			      (not :glb-atsgn)
			      (fgt value 0.))
			 (newl rr #/0))
		    (newl rr #/.)
		    (if (feqn value 0.)
			(repeat zero (newl rr #/0))
		        (cond
			 ((neq zero par-2)
			  (repeat zero (newl rr #/0))
			  (repeat (sub par-2 zero)
				  (newl rr (nextl digits))))
			 (t (repeat zero (newl rr #/0)) ))))
		(repeat (add1 exp) (newl rr (nextl digits)))
		(newl rr #/.)
		(repeat par-2 (newl rr (nextl digits))))
	      rr)
	      (explode value))
	;; edit it.
	(:float-pad :glb-par-1 :glb-par-4 :glb-par-5 rr))))

(defun :format-e-float (value)
  (if (null (numberp value))
      ;; it's not a number
      (with ((obase 10))
	    (let ((#:system:print-for-read ()))
	      (:format-pad (explode value) :glb-par-1 :glb-par-6)))
      ;; it's a number, float it.
      (unless (floatp value) (setq value (float value)))
      ;; the k-factor
      (unless :glb-par-4 (setq :glb-par-4 1))
      ;; comnpute the representation
      (let ((rr (if (flt value 0.) 
		    (ncons #/- )
		    (when :glb-atsgn (ncons #/+ )))))
	;; value = absolute value 
	(when (flt value 0.) (setq value (fsub 0. value)))
	(if (or :glb-par-1 :glb-par-2 :glb-par-3)
	    ;; need computation
	    (let ((exp (if (feqn value 0.)
			   0
			   (floor (log10 value))))
		  (:glb-par-1 (or :glb-par-1 100))
		  (exp-r)
		  (exp-len))
	      (setq exp-r (:float-exp (- exp :glb-par-4 -1)))
	      (setq exp-len (length exp-r))
	      (if (eq exp-len :glb-par-1) 
		  (setq rr exp-r)
		  (setq rr (:float-e value 
				     (sub :glb-par-1 (add exp-len (length rr)))
				     exp
				     rr))
		  (setq rr (append (nreverse exp-r) rr)))
	      rr)
	    ;; don't need computation
	    (explode value))
	;; edit it.
	(:float-pad :glb-par-1 :glb-par-5 :glb-par-6 rr))))

(defun :float-exp (exponent)
  ;; compute the exponent:  e+n or e-n
  (let* ((lst (pname (abs exponent)))
	 (len (length lst))
	 (res ()))
    (if (and :glb-par-5 :glb-par-3 (lt :glb-par-3 len))
	(setq res (makelist :glb-par-1 :glb-par-5))
        (setq res (nconc res
			 (if :glb-par-3
			     (makelist (sub :glb-par-3 len) #/0))
			 lst)))
    (newl res (if (>= exponent 0) #/+ #/-))
    (newl res (or :glb-par-7 #/e))
    res))

(defun :float-e (value r-len exp rr)
  (unless :glb-par-2 
	  (setq :glb-par-2 (sub r-len 2)))
  (cond
   ((eq :glb-par-4 0)
    (setq :glb-par-2 (:imax :glb-par-2 0))
    (:float-e-1 0 0 :glb-par-2 r-len rr
		(:float-digits value :glb-par-2 exp)))
   ((gt :glb-par-4 0)
    (setq :glb-par-2 (:imax :glb-par-2 (sub1 :glb-par-4)))
    (:float-e-1 :glb-par-4 0 (- :glb-par-2 -1 :glb-par-4) r-len rr
		(:float-digits value (add1 :glb-par-2) exp)))
   (t (setq :glb-par-2 (:imax :glb-par-2 (sub 1 :glb-par-4)))
      (:float-e-1 0 (abs :glb-par-4) (add :glb-par-2 :glb-par-4) r-len rr
		  (:float-digits value (add :glb-par-2 :glb-par-4) exp)))))

(defun :float-e-1 (before zero after r-len rr digits)
  (repeat before (newl rr (nextl digits)))
  (if (and (eq before 0) (neq r-len (add1 (add zero after))))
      (newl rr #/0))
  (newl rr #/.)
  (repeat zero (newl rr #/0))
  (repeat after (newl rr (nextl digits)))
  rr)


(defun :format-g-float (value)
  (if (null (numberp value))
      ;; it's not a number
      (with ((obase 10))
	    (let ((#:system:print-for-read ()))
	      (:format-pad (explode value) :glb-par-1 :glb-par-6)))
      ;; it's a number, float it.
      (unless (floatp value) (setq value (float value)))
      (let* ((:n (if (feqn value 0.) 0 (add1 (floor (log10 (abs value))))))
	     (:ee (if :glb-par-3 (add :glb-par-3 2) 4))
	     (:ww (if :glb-par-1 (sub :glb-par-1 :ee) 0))
	     (:q (sub :ww 2))
	     (:d (if :glb-par-2 :glb-par-2 (:imax :q (:imin :n 7))))
	     (:dd (sub :d :n)))
	(if (or (lt :dd 0) (gt :dd :d))
	    (:format-e-float value)
	    (let ((:glb-par-1 :ww)
		  (:glb-par-2 :dd)
		  (:glb-par-3 ())
		  (:glb-par-4 :glb-par-5)
		  (:glb-par-5 :glb-par-6))
	      (:format-f-float value))
	    (:emit-n-chars :ee #\sp)))))

