;;;
;;; VIRMACROS:  Virtual Bitmap Macros.
;;;
;;; $Source: /usr/cvs/lelisp/llib/virmacros.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;;;
;;;; All macros needed by the Virtual Bitmap
;;;;

(setq #:sys-package:colon 'display)


(defvar #:display:all-displays
  (when (boundp '#:display:all-displays)
	#:display:all-displays))

;; to use the #:display:dump package.
(defvar #:display:dumpdevice
  (when (boundp '#:display:dumpdevice)
	#:display:dumpdevice))

(defmacro #:display:internal-current-display ()
  '#:display:current-display)


;;;
;;; little sweetie for vesaizists.
(eval-when (load eval compile)
(unless (getdef 'defconstant)
	(defmacro defconstant (a b)
	  `(defvar ,a ,b)))
)


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;;
;;;; FUNCTION BUILDERS
;;;;
;;;; They allow automatic definition for series of functions.

(eval-when (eval compile)
;; Given an extended list of arguments, returns a simplified list of arguments.
(defun :good-parms (parms)
  (ifn (consp parms)
       parms
       (cons (if (consp (car parms)) (caar parms) (car parms))
	     (:good-parms (cdr  parms)))))
)

;;;
;;; A definer a-la defun which allows arguments to have a type.
(eval-when (eval compile)
(defmacro :defun (func parms . body)
  (let ((good-parms (:good-parms parms)))
    `(defun ,func ,good-parms
       ,@(mapcan (lambda (parm)
		   (when (consp parm)
			 `((,(symbol (cadr parm) 'assert)
			    ',func
			    ,(car parm)))))
		 parms)
       ,@body)))
)

;;;
;;; See example in file VIRDRAW.LL
;;;

;;;
;;; If this variable is set, there will be no drawing during dumps.
;;;
(defvar #:display:dumpsilent)

(eval-when 
 (load eval compile)
 (defmacro :define-draw (func parms)
   (let ((good-parms (:good-parms parms)))
     `(progn 
	(:defun ,func ,parms
		(let ((display (:internal-current-display)))
		  (#:display:assert-current ',func display)
		  (when 
		   (#:display:window display)
		   (when #:display:dumpdevice
			 ;; Module #:display:dump use:
			 ;;  if the variable #:display:dumpdevice is non-()
			 ;;  all the drawing functions call an other
			 ;;  function in the dump package.
			 (funcall
			  (getfn '#:display:dump ',func)
			  display (#:display:graph-env display)
			  ,@good-parms))
		   (unless (and #:display:dumpdevice #:display:dumpsilent)
			   (send ',func display
				 (#:display:graph-env display)
				 ,@good-parms)))))
	(:define-default-method ,func)
	)))
 
 (defmacro :define-draw-no-default (func parms)
   (let ((good-parms (:good-parms parms)))
     `(progn 
	(:defun ,func ,parms
		(let ((display (:internal-current-display)))
		  (#:display:assert-current ',func display)
		  (when 
		   (#:display:window display)
		   (when #:display:dumpdevice
			 ;; Module #:display:dump use:
			 ;;  if the variable #:display:dumpdevice is non-()
			 ;;  all the drawing functions call an other
			 ;;  function in the dump package.
			 (funcall
			  (getfn '#:display:dump ',func)
			  display (#:display:graph-env display)
			  ,@good-parms))
		   (unless (and #:display:dumpdevice #:display:dumpsilent)
			   (send ',func display 
				 (#:display:graph-env display)
				 ,@good-parms)))))
	;; no definition for default method.
	;; (:define-default-method ,func)
	)))
 )

;;;
;;; See example in file VIRINIT.LL
(eval-when (load eval compile)
(defmacro :define-n (func . func-to-call)
  `(progn (defun ,func &nobind
	    (let ((display (if (eq (arg) 1) (arg 0)
			     (:internal-current-display))))
	      (#:display:assert ',func display)
	      ,(if func-to-call
		   `(,(car func-to-call) display)
		 `(send ',func display))))
	  (:define-default-method ,func)
	  ))
)


;;;
;;; See example in file VIRGRAPH.LL
(eval-when (load eval compile)
(defmacro :define-0 (func graph-env? . default)
  `(progn (defun ,func ()
	    (let ((display (:internal-current-display)))
	      (:assert-current ',func display)
	      (send ',func display
		    ,@(when graph-env? '((:graph-env display))))))
	  (:define-default-method ,func ,@default)
	  ))
)


;;;
;;; See example in file VIRGRAPH.LL
(eval-when (load eval compile)
(defmacro :define-string-func (func)
  `(progn
     (defun ,func (s start length)
       (let ((display (:internal-current-display)))
	 (#:display:assert-current ',func display)
	 (send ',func display (#:display:graph-env display) s start length)))
     (:define-default-method ,func)
     ))
)


;;;
;;; See example in file VIRGRAPH.LL
(eval-when (load eval compile)
(defmacro :define-graph-env (name . type)
  (let ((func-cur (concat 'current- name))
	(func (concat 'graph-env- name))
	(accessor (symbol 'graph-env name))
	)
    `(progn (defun ,func (graph-env . x)
	      (#:graph-env:assert ',func graph-env)
	      (let ((display (#:graph-env:display graph-env))
		    num
		    )
		(ifn x
		     (,accessor graph-env)
		     (setq num (car x))
		     (,(symbol (or (car type) name) 'assert) ',func num)
		     (send ',func-cur display graph-env num)
		     (,accessor graph-env num))))
	    (defun ,func-cur &nobind
	      (let ((arg (arg))
		    (new-x (arg 0))
		    (display (:internal-current-display))
		    graph-env old-x
		    )
		(when (gt arg 1)
		      (error ',func-cur 'errwna arg))
		(#:display:assert-current ',func-cur display)
		(setq graph-env (#:display:graph-env display)
		      old-x (,accessor graph-env)
		      )
		(if (or (eq 0 arg) (eq old-x new-x))
		    old-x
		  (,(symbol (or (car type) name) 'assert) ',func-cur new-x)
		  (send ',func-cur display graph-env new-x)
		  (,accessor graph-env new-x))))
	    (:define-default-method ,func)
	    (:define-default-method ,func-cur)
	    )))
)

;;;
;;; See example in file VIRGRAPH.LL
;;; Defines a default method, only if there is no one defined.
(eval-when (load eval compile)
(defmacro :define-default-method (func . body)
  `(defun ,(symbol 'display func) &nobind
     ,@(or body `((error ',func ':not-yet-inplemented (arg 0))))))
)


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;;
;;;; MACROS FOR TEST OF TYPES
;;;;


;;;
;;; Test fix. Replaces previous function test-fix

(setq #:sys-package:colon 'fix)

(defmacro :assert (:f :x)
  `(unless (fixp ,:x)
	   (error ,:f 'errnia ,:x)))


;;;
;;; Test on numbers

(setq #:sys-package:colon 'number)

(defmacro :assert (:f :x)
  `(unless (numberp ,:x)
	   (error ,:f 'errnna ,:x)))


;;;
;;; Test on string.

(setq #:sys-package:colon 'string)

(defmacro :assert (:f :x)
  `(unless (stringp ,:x)
	   (error ,:f 'errnsa ,:x)))


;;;
;;; Test on cons (test is listp)

(setq #:sys-package:colon 'cons)

(defmacro :assert (:f :x)
  `(unless (listp ,:x)
	   (error ,:f 'errnla ,:x)))


;;;
;;; Test on symbol

(setq #:sys-package:colon 'symbol)

(defmacro :assert (:f :x)
  `(unless (symbolp ,:x)
	   (error ,:f 'errsym ,:x)))


;;;
;;; Test on vector.

(setq #:sys-package:colon 'vector)

(defmacro :assert (:f :x)
  `(unless (vectorp ,:x)
	   (error ,:f 'errvec ,:x)))


;;;
;;; Test on modes. Replaces previous function test-mode

(setq #:sys-package:colon 'mode)

(defmacro :assert (:f :x)
  `(unless (and (fixp ,:x)
		(ge ,:x 0)
		(le ,:x 16))
	   (error ,:f '#:display:err-not-a-valid-mode ,:x)))


;;;
;;; Test on patterns. Replaces previous function test-pattern

(setq #:sys-package:colon 'pattern)

(defmacro :assert (:f :x)
  `(unless (and (fixp ,:x)
		(ge ,:x 0)
		(le ,:x (pattern-max)))
	   (error ,:f '#:display:err-not-a-valid-pattern ,:x)))


;;;
;;; Test on cursors.

(setq #:sys-package:colon 'cursor)

(defmacro :assert (:f :x)
  `(progn (#:fix:assert ,:f ,:x)
	  (unless (and (ge ,:x 0) (le ,:x (cursor-max)))
		  (error ,:f '#:display:err-not-a-valid-cursor ,:x))))


;;;
;;; Test on fonts. Replaces previous function test-font

(setq #:sys-package:colon 'font)

(defmacro :assert (:f :x)
  `(unless (and (fixp ,:x)
		(ge ,:x 0)
		(le ,:x (font-max)))
	   (error ,:f '#:display:errnotafont ,:x)))


;;;
;;; Test on line-styles.

(setq #:sys-package:colon 'line-style)

(defmacro :assert (:f :x)
  `(unless (and (fixp ,:x)
		(ge ,:x 0)
		(le ,:x (line-style-max)))
	   (error ,:f 'erroob ,:x)))


;;;
;;; Tests on displays.

(setq #:sys-package:colon 'display)

(defmacro :assert (:f :x)
  `(progn (unless ,:x
		  (error ,:f '#:display:no-current-display ,:x))
	  (unless (and (typep ,:x 'display)
		       (#:display:prologuep ,:x))
		  (error ,:f '#:display:errnotadisplay ,:x))))


(defmacro :assert-current (:f :x)
  `(unless ,:x
	   (error ,:f '#:display:no-current-display ,:x)))




;;;
;;; Tests on menus. Replaces previous function #:menu:check-menu.

(setq #:sys-package:colon 'menu)

(defmacro :assert (:f :m)
  `(unless (typep ,:m 'menu)
	   (error ,:f '#:display:errnotamenu ,:m)))


;;;
;;; Tests on colors.

(setq #:sys-package:colon 'color)

(defmacro :assert (:f :c)
  `(unless (and (typep ,:c 'color)
		(#:color:display ,:c))
	   (error ,:f '#:display:errnotacolor ,:c)))

(defmacro :assert-mutable (:f :x)
  `(unless (#:color:mutable ,:x)
	   (error ,:f '#:display:errnotmutable ,:x)))



;;;
;;; Tests on bitmaps.

(setq #:sys-package:colon 'bitmap)

(defmacro :assert (:f :b)
  `(unless (typep ,:b 'bitmap)
	   (error ,:f '#:display:errnotabitmap ,:b)))

(defmacro :assert-same-display (:f :b1 :b2)
  `(let ((:d1 (#:bitmap:display ,:b1))
	 (:d2 (#:bitmap:display ,:b2))
	 )
     (when (neq :d1 :d2)
	   (error ,:f '#:display:err-diff-display (list :d1 :d2)))))

(defmacro :assert-in (:f :b :x :y)
  `(progn (unless (and (ge ,:x 0) (lt ,:x (#:bitmap:w ,:b)))
		  (error ,:f 'erroob ,:x))
	  (unless (and (ge ,:y 0) (lt ,:y (#:bitmap:h ,:b)))
		  (error ,:f 'erroob ,:y))
	  ))


;;;
;;; Tests on stipples.

(setq #:sys-package:colon 'stipple)

(defmacro :assert (:f :b)
  `(unless (or (null ,:b) (typep ,:b '#:bitmap:stipple))
	   (error ,:f '#:display:errnotastipple ,:b)))


(setq #:sys-package:colon 'fill-mode)

(defmacro :assert (:f :b)
  `(unless (memq ,:b '(foreground transparentstipple opaquestipple pattern))
	   (error ,:f '#:display:errnotafillmod ,:b)))
;;;
;;; Test on windows.


(setq #:sys-package:colon 'window)

(defmacro :assert (:f :x)
  `(unless (typep ,:x '#:image:rectangle:window)
	   (error ,:f '#:display:errnotawindow ,:x)))

(defmacro :assert-same-display (:f :x1 :x2)
  `(let ((:d1 (#:window:display ,:x1))
	 (:d2 (#:window:display ,:x2))
	 )
     (when (neq :d1 :d2)
	   (error ,:f '#:display:err-diff-display (list :d1 :d2)))))



;;;
;;; Test on graph-envs.

(setq #:sys-package:colon 'graph-env)

(defmacro :assert (:f :x)
  `(unless (typep ,:x 'graph-env)
	   (error ,:f '#:display:err-not-a-valid-graph-env ,:x)))
