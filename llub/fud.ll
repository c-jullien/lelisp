;;;
;;; FUD:  A debugging tool which tracks undefined function.
;;;
;;; $Source: /usr/cvs/lelisp/llub/fud.ll,v $
;;; $Date: 2016/05/21 10:36:08 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is a contribution of Le-Lisp version 15.
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

#|

Often, in a complicated runtime generation, one forgets to load a
module. Any call to an inexistent function, from the compiled code,
raises some spurious error like "machine error" or "segmentation
fault" But this error is difficult to track, we need the NAME of the
missing function.

By loading this file, and invoking the "fud" function, any attenpt to call
an undefined or an inexistent function will raise an error which will print
the name of that function.

How to use it:

? fud
= fud.ll
? (fud)

|#


(unless (>= (version) 15.25)
        (error 'load 'erricf 'fud))

(defvar #:sys-package:colon 'fud)

(add-feature 'fud)


;;;
;;; The relay function allowing to call an EXPR from a SUBR
;;; (this function is defined first in order to prevent the loader
;;; to create a literal vector for each stub)
;;;

(loader '((fentry :relay-function subr1)
	  (push ':call-an-undefined-function)
	  (push a1)
	  (mov '2 A4)
	  (jmp funcall)
	  (end)))

(defun :call-an-undefined-function (fnt)
  (error "FUD" 'errudf fnt))


;;;
;;; The main function
;;;

(defun fud ()
  (mapoblist (lambda (symb)
	       (when (variablep symb)
		     (unless (typefn symb)
			     ;; we use a relay function in order
			     ;; to minimize the stubs' code size
			     ;; which has only 2 LLM3 instructions.
			     (loader `((fentry ,symb subr0)
				       (mov ',symb a1)
				       (jmp :relay-function)
				       (end)))
			     ;; reset the FTYPE to () == undefined function
			     (setfn symb () (valfn symb))))))
  ";; FUD: all the stubs have been set, go on ...")

(print ";; (fud) to set up the ""fud"" stubs.")


#| ; to test

(defun foo (x) (bar (add1 x)))
(defun bar (x) (add x x))
(foo 10)
(compile foo t t t t t)
(foo 10)
(remfn 'bar)
(foo 10)
(libload fud)
(fud)
(foo 10)

|#
