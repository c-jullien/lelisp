;;;
;;; testtrace.ll:  TRACE and STEP tests.
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testtrace.ll,v $
;;; $Date: 2016/05/21 10:36:08 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testtrace))

(unless (featurep 'stringio)
	(libloadfile "stringio" t))

(setq #:sys-package:colon 'testtrace)

(setq :speak? ()) ; tests are speaky ???

;;; A function testtrace. test "standard" mesasages .
(de :testtrace (file liste-of-trace)
    ;; FILE is file from trace
    ;; LISTE-OF-TRACE is list of expected prints of trace
    ;; SPEAK? = T => testtrace is verbose
    (with ((inchan (openi (temporary-file-pathname file))))
       (tag eof
          (while t
	    (let ((form (readstring))
		  (trueform (nextl liste-of-trace)))
	      (when :speak?
		    (print "The returned form with trace of " file ": " form)
		    (print "The expected form: " trueform))
	      (ifn (equal form trueform)
		   (print "**** trace of " file " should be <"
			  trueform ">, and not <" form ">")
		   (when :speak? (print " OK"))
		   ))))
       )
    (deletefile (temporary-file-pathname file))
    )

;;; A macro write-trace ; produce the trace on file:
(defmacro :write-trace (file . fn)
  `(with ((outchan (openo ,(temporary-file-pathname file))))
	 (let ((*trace-output* (outchan))
	       (*trace-itsoft* 'testtrace)
	       (#:sys-package:itsoft 'testtrace))
	   (mapc (lambda (a)
		   (print (car (catcherror () (eval a)))))
		 ',fn))
	 (close (outchan))))

(de :syserror (function message args)
    ;; retourne la liste (nom-de-l'erreur fnt)
    (err (list (list message function args))))

(print "          [TRACE test]")

;;; trace of an EXPR:
(de :foo1 (x)
  (if (le x 0) ()
    (cons x (:foo1 (1- x)))))

(setq #:system:print-package-flag t)

(:write-trace "foo1"
	      (trace :foo1)
	      (:foo1 2)
	      (untrace :foo1))

(:testtrace "foo1"
	   '("(#:testtrace:foo1)"
	     "#:testtrace:foo1 ---> x=2 " "#:testtrace:foo1 ---> x=1 "
	     "#:testtrace:foo1 ---> x=0 " "#:testtrace:foo1 <--- ()"
	     "#:testtrace:foo1 <--- (1)" "#:testtrace:foo1 <--- (2 1)"
	     "(2 1)"
	     "(#:testtrace:foo1)" ))


;;; trace of an FEXPR:
(df :foo2 (x) (list x))

(:write-trace "foo2"
	      (trace :foo2)
	      (:foo2 (cons 1 2))
	      (untrace :foo2))

(:testtrace "foo2"
	  '("(#:testtrace:foo2)"
	    "#:testtrace:foo2 ---> x=(cons 1 2) "
	    "#:testtrace:foo2 <--- ((cons 1 2))" 
	    "((cons 1 2))"
	    "(#:testtrace:foo2)"))

;;; trace of &NOBIND function:

(de :foo3 &nobind (list (arg)))

(:write-trace "foo3"
	      (trace :foo3))

(:testtrace "foo3"
	    '("(#:trace:errtnb trace #:testtrace:foo3)"))

;;; trace of SEND
(de :foo31 (x)(send 'foo32 x))
(de foo32 (x)(list x x ))

(:write-trace "foo31"
	      (trace :foo31)
	      (:foo31 3)
	      (untrace :foo31))
(:testtrace "foo31"
	    '("(#:testtrace:foo31)"
	      "#:testtrace:foo31 ---> x=3 "
	      "#:testtrace:foo31 <--- (3 3)"
	      "(3 3)"
	      "(#:testtrace:foo31)"
	      ))

;;; trace of a MACRO:
(defmacro :foo4 (x) `(cons ,x ,x))

(:write-trace "foo4"
	      (trace :foo4)
	      (:foo4 3)
	      (untrace :foo4))

(:testtrace "foo4"
	    '("(#:testtrace:foo4)"
	      "#:testtrace:foo4 ---> x=3 "
	      "#:testtrace:foo4 <--- (cons 3 3)"
	      "(3 . 3)"
	      "(#:testtrace:foo4)" ))

(when (featurep 'compiler)
;;; Trace of a compiled function then redefined,
;;; Check the state function dont change.
(de :foo5 () 2)
(compile :foo5)
(setq :save-redef #:system:redef-flag)
(protect 
    (progn 
      (setq #:system:redef-flag t)
      (:write-trace "foo5"
		    (typefn ':foo5)
		    (de :foo5 () 33)
		    (trace :foo5)
		    (:foo5)
		    (untrace)
		    (typefn ':foo5))
      (:testtrace "foo5"
		  '("subr0"
		    "#:testtrace:foo5"
		    "(#:testtrace:foo5)"
		    "#:testtrace:foo5 ---> "
		    "#:testtrace:foo5 <--- 33"
		    "33"
		    "(#:testtrace:foo5)"
		    "subr0")))
    ;; restore the previous value of #:system:redef-flag
    (setq #:system:redef-flag :save-redef))
)

;;; trace / detrace of a subr
(:write-trace "foo6"
	      (trace rplacd)
	      (rplacd '(1 1) 2)
	      (untrace)
	      (rplacd '(1 1) 2))

(:testtrace "foo6"
	    '("(rplacd)"
	      "rplacd ---> (1 1) 2 "
	      "rplacd <--- (1 . 2)"
	      "(1 . 2)"
	      "(rplacd)"
	      "(1 . 2)"))

(print "          [End of test trace]")
(print "          [STEP test]")

;;; test of step.
(setq #:step:auto-step t)

;;; step of a recursive function:
(de :bar1 (x) (if (le x 0)()(cons x (:bar1 (1- x)))))

(:write-trace "bar1" (step (:bar1 3)))

(:testtrace "bar1"
'(
"  2 <- 3"
"    4 <- 3"
"    4 <- 0"
"   3 <- ()"
"    4 <- 3"
"      6 <- 3"
"     5 <- 2"
"       7 <- 2"
"       7 <- 0"
"      6 <- ()"
"       7 <- 2"
"         9 <- 2"
"        8 <- 1"
"          10 <- 1"
"          10 <- 0"
"         9 <- ()"
"          10 <- 1"
"            12 <- 1"
"           11 <- 0"
"             13 <- 0"
"             13 <- 0"
"            12 <- 0"
"            12 <- ()"
"           11 <- ()"
"          10 <- ()"
"         9 <- (1)"
"        8 <- (1)"
"       7 <- (1)"
"      6 <- (2 1)"
"     5 <- (2 1)"
"    4 <- (2 1)"
"   3 <- (3 2 1)"
"  2 <- (3 2 1)"
" 1 <- (3 2 1)"
"(3 2 1)"
))

;;; step of an &NOBIND function called at toplevel:
(setq a (current-language))
(current-language 'english)
(de #:tt:bar2 &nobind (list (arg)))

(:write-trace "bar2" (step (#:tt:bar2 1 11 111)))

(:testtrace "bar2" '(
" ** step : I can't step an &NOBIND function : (#:tt:bar2 1 11 111)"
" 1 <- (3)"
"(3)"
))

;;; step of an &NOBIND function called:
(de :bar3 () (list (#:tt:bar2 3 2 1)))

(:write-trace "bar3" (step (:bar3)))

(:testtrace "bar3" (list
"   ** step : I can't step an &NOBIND function : (#:tt:bar2 3 2 1)"
"   3 <- (3)"
"  2 <- ((3))"
" 1 <- ((3))"
"((3))"
))
(current-language a)

;;; step of SEND
(de :bar31 (x)(send 'bar32 x))
(de bar32 (x)(list x x ))

(when (featurep 'compiler) ;; only with the compiler
(:write-trace "bar31" (step (:bar31 9)) )

(:testtrace "bar31" (list
"  2 <- 9"
"bar32 ---> x=9 "
"   3 <- 9"
"   3 <- 9"
"  2 <- (9 9)"
" 1 <- (9 9)"
"bar32 <--- (9 9)"
"  2 <- (9 9)"
" 1 <- (9 9)"
"(9 9)"
))
)

(:write-trace "bar4" (step (unstep (cons 1 2))))
(:testtrace "bar4" '("(1 . 2)"))

(print "          [End of test step]")
(print "          [End of test]")

(setq #:step:auto-step ())
