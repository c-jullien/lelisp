;;;
;;; testcpl.ll:  Specials tests of the compiler
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testcpl.ll,v $
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
        (error 'load 'erricf 'testcpl))
 

; .Section "A small test function"

(setq #:system:redef-flag t)

(defvar #:sys-package:colon 'testcpl)

(unless (boundp ':speak1)         ; speaky LAP ?
        (defvar :speak1 ()))

(unless (boundp ':speak2)         ; speaky compiler ?
        (defvar :speak2 ()))

#|
(de syserror (f m a)
    (if (eq f 'break)
        (break)
        (list f m a)))
|#

(df test (:nom :todo :expr :val)
    (print "test of " :nom)
    (let (:x)
         (setq :x (car (catcherror t (eval :expr))))
         (when (nequal :x :val)
               (print "** ERROR in " :nom " interpreted.")
               (print "**     value of " :expr " is " :val " not " :x))
         (eval :todo)
         (setq :x (eval :expr))
;         (when (and (symbolp :x) (not (boundp :x))) (setq :x '<undef>))
         (when (nequal :x :val)
               (print "** ERROR in " :nom "  compiled.")
               (print "**     value of " :expr " is " :val " not " :x))))



;;; .Section "Old bugs of the compiler"


(de foo-o1 (x)
   (cons
      (ncons x)
      (ifn (eq (car x) 'no) (cdr x)) ))


(test foo-o1 (compiler 'foo-o1 t :speak1 :speak2)
      (foo-o1 '(1 2 3))
      (((1 2 3)) 2 3))        
 

(de foo-o2 (n l)
    (tagbody 
     tour (if (le n 0)
              (go magne)
              (newl l (setq n (sub1 n)))
              (go tour))
     magne)
    l)

(test foo-o2 (compiler 'foo-o2 t :speak1 :speak2)
      (foo-o2 5 ()) (0 1 2 3 4))


(de foo-o3 ()
    (protect (+ 10 20) (+ 20 20)))

(test foo-o3 (compiler 'foo-o3 t :speak1 :speak2)
      (foo-o3) 30)


(de foo-o4 ()
    (protect (+ 10 20) 'ok))

(test foo-o4 (compiler 'foo-o4 t :speak1 :speak2)
      (foo-o4) 30)


(de foo-o5 (x y)
    (add (car x) (prog1 (car y) (rplaca x 100))))

(test foo-o5 (compiler 'foo-o5  t :speak1 :speak2)
      (foo-o5 (list 10) (list 20)) 30)     


(de foo-o6 (x y)
    (add (car y) (progn (rplaca y x) (car y))))

(test foo-o6 (compiler 'foo-o6  t :speak1 :speak2)
      (foo-o6 10 (list 20)) 30)     

(de foo-o7 (l)
    (let ((f (nextl l))) (setq l (list f l)))
    l)

(test foo-o7 (compiler 'foo-o7  t :speak1 :speak2)
      (foo-o7 '(1 2 3)) (1 (2 3)))



(de foo-o8 (adr)
    (if (fixp adr)
	(logshift adr -1)
        (rplacd adr (if (evenp (car adr))
			(logshift (cdr adr) -1)
		        (logor #$8000 (logshift (cdr adr) -1))))
	(rplaca adr (logshift (car adr) -1))))

(test foo-o8 (compiler 'foo-o8  t :speak1 :speak2)
      (foo-o8 (cons 0 22)) (0 . 11))

;;; .Section "Compiler style"

(de foo-t1 (x)
    (cons x x))
(test foo-t1 (compiler 'foo-t1 () :speak1 :speak2)
      (foo-t1 10) (10 . 10))

(de foo-t2 (x)
    (cons (car x) (car x)))
(test foo-t2 (compiler 'foo-t2 () :speak1 :speak2)
      (foo-t2 '(10)) (10 . 10))


(de foo-t3 (x)
    (cons (cadr x) (cadr x)))
(test foo-t3 (compiler 'foo-t3 () :speak1 :speak2)
      (foo-t3 '(11 10)) (10 . 10))


(de foo-t4 (x)
    (cons (caddr x) (caddr x)))
(test foo-t4 (compiler 'foo-t4 () :speak1 :speak2)
      (foo-t4 '(12 11 10)) (10 . 10))


(de foo-t5 (x)
    (cons (caddr x) (cdddr x)))
(test foo-t5 (compiler 'foo-t5 () :speak1 :speak2)
      (foo-t5 '(12 11 10 9)) (10 9))


(de foo-t6 (x)
    (cons (cadddr x) (cddddr x)))
(test foo-t6 (compiler 'foo-t6 () :speak1 :speak2)
      (foo-t6 '(12 11 10 9 8)) (9 8))

(de foo-t7 (x)
    (cons (caddr x) (cddddr x)))
(test foo-t7 (compiler 'foo-t7 () :speak1 :speak2)
      (foo-t7 '(12 11 10 9 8)) (10 8))

(de foo-t8 (l)
    (list (car l) (cadr l) (caddr l)))
(test foo-t8 (compiler 'foo-t8 () :speak1 :speak2)
      (foo-t8 '(1 2 3 4)) (1 2 3))

(de foo-t9 (l)
    (list (car l) (cdar l) (cddar l)))
(test foo-t9 (compiler 'foo-t9 () :speak1 :speak2)
      (foo-t9 '((1 2 3))) ((1 2 3) (2 3) (3)))

(de foo-t10 (x)
    (if (null x) x ()))
(test foo-t10 (compiler 'foo-t10 () :speak1 :speak2)
      (foo-t10 100) ())
(test foo-t10 ()
      (foo-t10 ()) ())

(de foo-t11 (l r)
    (while (consp l) (newl r (nextl l)))
    r)
(test foo-t11 (compiler 'foo-t11 () :speak1 :speak2)
      (foo-t11 '(1 2 3) ()) (3 2 1))

(de foo-t12 (n)
    (identity (identity (identity (sub1 n)))))
(test foo-t12 (compiler 'foo-t12 () :speak1 :speak2)
      (foo-t12 100) 99)

(de foo-t13 (n)
    (cond ((eq n 1) 1)
          ((eq n 2) 1)
          (t (plus (foo-t13 (sub1 n)) (foo-t13 (sub n 2))))))
(test foo-t13 (compiler 'foo-t13 () :speak1 :speak2)
      (foo-t13 10) 55)


;;;  .Section "destructuring compilation"

(de foo1 (l)
    (mapcar (lambda ((x . y)) (list x y))
            L))

(test foo1 (compiler 'foo1 () :speak1 :speak2) (foo1 '((a . b))) ((a b)))


(de foo2 (n) (foo21))
(de foo21 () n)



(test foo2 (progn (compiler 'foo21 () :speak1 :speak2)
                  (compiler 'foo2 () :speak1 :speak2))
      (foo2 10) 10)



;;; .Section "Lexicals functions"

(de fool1 ()
    (block bar
           (return-from bar 10)))

(test fool1 (compiler 'fool1 () :speak1 :speak2) (fool1) 10)

(de fool2 ()
    (block bar
           (return-from bar 10)
           11))

(test fool2 (compiler 'fool2 () :speak1 :speak2) (fool2) 10)

(de fool3 ()
    (block ()
           (return 10)
           11))

(test fool3 (compiler 'fool3 () :speak1 :speak2) (fool3) 10)

(de fool4 ()
    (block bar 
           (block gee
                  (return-from bar 20)
                  21)
           22))

(test fool4 (compiler 'fool4 () :speak1 :speak2) (fool4) 20)


(de fool5 (f g x)
    ;; Case of "aluminium book"
    (if (= x 0)
        (funcall f)
        (block here
               (+ 5 (fool5 g
                           (function (lambda () (return-from here 4)))
                           (- x 1))))))


(test fool5 (compiler 'fool5 () :speak1 :speak2) (fool5 () () 2) 4)

(comment
;;; not trouble with compiler messages ...
          (de fool61 () (return-from bar 20))
          (de fool6 () (block bar (fool61)))

          (test fool6 (progn (compiler 'fool61 () :speak1 :speak2)
                             (compiler 'fool6 ()  :speak1 :speak2))
                (fool6)  (return-from errnab bar))
)


(de fool7 (x) (block bar (let ((y (+ x 1))) (return-from bar y))))

(test fool7 (compiler 'fool7 () :speak1 :speak2)
      (fool7 10) 11)



;;; .Section "&NOBIND"

(de foonob1 &nobind 
    (list (arg) (arg 0) (arg 1)))

(test foonob1 (compiler 'foonob1 () :speak1 :speak2)
      (foonob1 1 2) (2 1 2))

(test foonob1 ()
      (foonob1 1 2 3 4 5) (5 1 2))

(test foonob1 ()
      (foonob1 1) (1 1 1))

(de foonob2 &nobind
    (if (gt (arg) 2)
        "not GET/SET"
        (let ((arg1 (if (lt (arg) 1) 'default1 (arg 0)))
              (arg2 (if (lt (arg) 2) 'default2 (arg 1))))
             (list arg1 arg2))))

(test foonob2 (compiler 'foonob2 () :speak1 :speak2)
      (foonob2) (default1 default2))

(test foonob2 ()
      (foonob2 1) (1 default2))

(test foonob2 ()
      (foonob2 1 2) (1 2))

(test foonob2 ()
      (foonob2 1 2 3) "not GET/SET")



;;; .Section "tail-rec functions"

(de footr0 (n) (footr01))
(de footr01 () (if (le (setq n (sub1 n)) 0) 'ok (footr01)))

(test footr0 (compiler 'footr0 t  :speak1 :speak2)
      (footr0 10000) ok)

(de footr1 (n) (footr11 n))
(de footr11 (n) (if (le n 0) 'ok (footr11 (sub n 1))))

(test footr1 (compiler 'footr1 t :speak1 :speak2)
      (footr1 10000) ok)

(de footr2 (n) (footr21 n n))
(de footr21 (n m) (if (le n 0) 'ok (footr21 (sub n 1) (sub m 1))))

(test footr2 (compiler 'footr2 t :speak1 :speak2)
      (footr2 10000) ok)

(de footr3 (n) (footr31 n n n))
(de footr31 (n m o)
    (if (le n 0) 'ok (footr31 (sub n 1) (sub m 1) (sub o 1))))

(test footr3 (compiler 'footr3 t :speak1 :speak2)
      (footr3 10000) ok)

(de footr4 (n) (footr41 n n n n))
(de footr41 (n m o p) 
    (if (le n 0) 'ok
           (footr41 (sub n 1) (sub m 1) (sub o 1) (sub p 1))))

(test footr4 (compiler 'footr4 t :speak1 :speak2)
      (footr4 10000) ok)

(de footr5 (n) (footr51 n n n n n))
(de footr51 (n m o p q) 
    (if (le n 0) 'ok
           (footr51 (sub n 1) (sub m 1) (sub o 1) (sub p 1) (sub q 1))))

(test footr5 (compiler 'footr5 t :speak1 :speak2)
      (footr5 10000) ok)


;;; .Section "Lists physical modifications physical."

(de foo-l0 () (newr l (foo-l1)))
(de foo-l1 () (newr l 1) 2)
(setq l ())

(test foo-l0 (compiler 'foo-l0 t :speak1 :speak2)
      (progn (setq l ())
	     (foo-l0))
      (1 2))
