; .EnTete "Le_Lisp (c) version 15.2" " " "Redefinition function"
; .EnPied "resetfn.ll" "D-%" " "
; .Annexe D "Redefinition function for GELL 15.26"
; .nr % 1
;

(unless (>= (version) 15.25)
        (error 'load 'erricf 'resetfn))

(defvar #:sys-package:colon 'gell-resetfn)

;;;
;;; Error messages
;;;

(defmessage :errnoredef
  (french "impossible de rede'finir la fonction")
  (english "can't redefine the function"))

(defmessage :errnocomp
  (french "fonction incompatible")
  (english "incompatible function"))

(defmessage :errnobody
  (french "corps de rede'finition non pre'sent")
  (english "no body definition"))

;;;
;;; The global variable where the name of a redefined function is
;;; stored by a special call to a redefined function.
;;;

(defvar #:gell-resetfn:function-name ())

;;; The property name of the new body

(defvar #:gell-resetfn:body-property '#:gell-resetfn:body-property)

;;; The actual functions called internally by the redefined SUBR. The name
;;; of the function has been stored in the special variable:
;;; #:gell-resetfn:function-name

(defun #:gell-resetfn:get-body ()
    (let ((body (getprop #:gell-resetfn:function-name 
			 '#:gell-resetfn:body-property)))
         (if body
             body
	     (error '#:gell-resetfn:get-body
		    ':errnobody
		    #:gell-resetfn:function-name))))

(loader '((fentry #:gell-resetfn:function-0 subr0)
          (jcall #:gell-resetfn:get-body)
          (mov '0 a4)
          (jmp #:llcp:ffuncall)))

(loader '((fentry #:gell-resetfn:function-1 subr0)
          (push a1)
          (jcall #:gell-resetfn:get-body)
          (mov '1 a4)
          (jmp #:llcp:ffuncall)))

(loader '((fentry #:gell-resetfn:function-2 subr0)
          (push a1)
          (push a2)
          (jcall #:gell-resetfn:get-body)
          (mov '2 a4)
          (jmp #:llcp:ffuncall)))

(loader '((fentry #:gell-resetfn:function-3 subr0)
          (push a1)
          (push a2)
          (push a3)
          (jcall #:gell-resetfn:get-body)
          (mov '3 a4)
          (jmp #:llcp:ffuncall)))

(loader '((fentry #:gell-resetfn:function-n subr0)
          (push a4)
          (jcall #:gell-resetfn:get-body)
          (pop a4)
          (jmp #:llcp:ffuncall)))

(loader '((fentry #:gell-resetfn:function-f subr0)
          (push a1)
          (jcall #:gell-resetfn:get-body)
	  (pop a2)
	  (mov '0 a4)
	  (bra 102)
      101 (push (car a2))
          (mov (cdr a2) a2)
	  (incr a4)
      102 (btcons a2 101)
          (jmp #:llcp:ffuncall)))


(defun :resetfn (symbol typefn lambda)
  ;; to redefined an EXPR/FEXPR in SUBR
  ;;
  ;; (print "call to :RESETFN: symbol=" symbol ", typefn=" typefn 
  ;;	    ", lambda= " lambda)
  (putprop symbol lambda '#:gell-resetfn:body-property)
  (or (:resetfn-aux symbol
		    #:|defC|:list-module-table-adr
		    (valfn symbol))
      (printerror 'resetfn ':errnoredef symbol)))
  

(defun  :resetfn-aux (symbol modtable fval)
  ;; map all the module table to find the right traced function
  ;;
  ;; (print "call to :RESETFN-AUX: symbol=" symbol ", modtable=" modtable
  ;;        ", fval= " fval)
  (when modtable
	;; don't change the "funcall", the function is not here!
	(if (eq (funcall 'llrt_set_trace_fval_p
			 symbol
			 (nextl modtable)
			 fval)
		0)
	    (:resetfn-aux symbol modtable fval)
	    t)))

(defun resetfn (symbol typefn valfn)
  ;;
  ;; (print "call to RESETFN: symbol= " symbol ", typefn= " typefn
  ;;        ", valfn= " valfn)
  (let ((otypefn (typefn symbol)))
    (if (memq otypefn '(subr0 subr1 subr2 subr3 nsubr fsubr))
	(cond ((eq otypefn typefn))
	      ((and (eq 'expr typefn)
		    (selectq otypefn
			     (subr0
			      (null (car valfn)))
			     (subr1
			      (and (consp (car valfn)) 
				   (null (cdr (car valfn)))))
			     (subr2
			      (and (consp (car valfn))
				   (consp (cdr (car valfn)))
				   (null (cddr (car valfn)))))
			     (subr3
			      (and (consp (car valfn)) 
				   (consp (cdr (car valfn))) 
				   (consp (cddr (car valfn))) 
				   (null (cdddr (car valfn)))))
			     (nsubr
			      (or (variablep (car valfn))
				  (variablep (cdr (last (car valfn))))
				  (ge (length (car valfn)) 4)))))
	       (:resetfn symbol otypefn (cons 'lambda valfn))
	       (putprop symbol (cons typefn valfn) 'resetfn))
	      ((and (eq 'fexpr typefn)
		    (eq 'fsubr otypefn))
	       (:resetfn symbol otypefn (cons 'flambda valfn))
	       (putprop symbol (cons typefn valfn) 'resetfn))
	      (t
	       (if (and (null #:system:redef-flag)
			(null (getprop symbol 'autoload)))
		   (printerror 'resetfn ':errnocomp symbol)
		   (setfn symbol typefn valfn))))
        (setfn symbol typefn valfn)
	(when (and (featurep 'compiler)
		   (macro-openp symbol))
	      (remove-macro-open symbol))))
  symbol)



#|

(df    testresetfnf (l) (print l))
(defun testresetfn0 () 'ok)

(defun testresetfn1 (x) (add1 x))
(defun testresetfn1t (x) (testresetfn1 x))


(defun testresetfn2 (x y) (add x y))
(defun testresetfn3 (x y z) (add x (add y z)))
(defun testresetfnn (x y z v) (add x (add y (add z v))))

(defun testfib (n)
   (cond ((eq n 1) 1)
         ((eq n 2) 1)
         (t (add (testfib (sub1 n)) (testfib (sub n 2))))))

(defun testtailrec (x) (testtailrecaux x))
(defun testtailrecaux (x)
   (if (le x 0)
       0
       (testtailrecaux (sub1 x))))

|#

#|

;;;
;;; The old definition which avoid all the redefinitions.
;;;

(defun resetfn (symbol typefn valfn)
  (let ((otypefn (typefn symbol)))
    (if (and (memq otypefn '(subr0 subr1 subr2 subr3 nsubr fsubr))
	     (memq typefn '(expr fexpr macro dmacro)))
	(with ((outchan ()))
	      (printerror 'resetfn ':errnocomp (list symbol typefn valfn)))
        (setfn symbol typefn valfn))))

|#

