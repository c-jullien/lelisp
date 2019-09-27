; .EnTete "Le-Lisp (c) version 15.2" " " "Les variables ge'ne'ralise'es"
; .EnPied "setf.ll" "%" " "
; .SuperTitre "Les variables ge'ne'ralise'es"
;
; .Auteur "Jose' Grimm"
;
; .Centre "*****************************************************************"
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; .Centre "$Header: /usr/cvs/lelisp/llub/gsetf.ll,v 1.1 2006/12/09 10:41:07 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'setf))

(add-feature 'setf)

; Tous les symboles pre'ce'de's de : seront cre'e's dans le package SETF

(defvar #:sys-package:colon 'setf)

; .Section "La fonction d'affectation ge'ne'ralise'e"

(dmd setf forms
     (let ((res ()))
          (while forms
                 (newl res (:setf1 (nextl forms) (nextl forms))))
          (if (null (cdr res))
              (car res)
              `(progn ,@(nreverse res)))))

(de :setf1 (form val)
    (cond ((symbolp form)
           `(setq ,form ,val))
          ((or (atom form) (not (symbolp (car form))))
           (error 'setf "Can't setf this" form))
          ((getfn1 (car form) 'setf)
           (funcall (getfn1 (car form) 'setf) form val))
          ((memq  (typefn (car form)) '(dmacro macro))
           (:setf1 (macroexpand1 form) val))
          (t
            (error 'setf "Can't find setf method for" form))))

; .Section "De'finition des fonctions d'affectation"

(dmd defsetf (fun pat var . body)
     (let ((name (symbol fun 'setf)))
          `(de ,name ((,name ,.pat) ,(car var))
               ,.body)))

(defsetf car (x) (y)    `(rplaca ,x ,y))
(defsetf cdr (x) (y)    `(rplacd ,x ,y))

(defsetf caar (x) (y)   `(rplaca (car ,x) ,y))
(defsetf cadr (x) (y)   `(rplaca (cdr ,x) ,y))
(defsetf cdar (x) (y)   `(rplacd (car ,x) ,y))
(defsetf cddr (x) (y)   `(rplacd (cdr ,x) ,y))

(defsetf caaar (x) (y)  `(rplaca (caar ,x) ,y))
(defsetf caadr (x) (y)  `(rplaca (cadr ,x) ,y))
(defsetf cadar (x) (y)  `(rplaca (cdar ,x) ,y))
(defsetf caddr (x) (y)  `(rplaca (cddr ,x) ,y))
(defsetf cdaar (x) (y)  `(rplacd (caar ,x) ,y))
(defsetf cdadr (x) (y)  `(rplacd (cadr ,x) ,y))
(defsetf cddar (x) (y)  `(rplacd (cdar ,x) ,y))
(defsetf cdddr (x) (y)  `(rplacd (cddr ,x) ,y))

(defsetf caaaar (x) (y) `(rplaca (caaar ,x) ,y))
(defsetf caaadr (x) (y) `(rplaca (caadr ,x) ,y))
(defsetf caadar (x) (y) `(rplaca (cadar ,x) ,y))
(defsetf caaddr (x) (y) `(rplaca (caddr ,x) ,y))
(defsetf cadaar (x) (y) `(rplaca (cdaar ,x) ,y))
(defsetf cadadr (x) (y) `(rplaca (cdadr ,x) ,y))
(defsetf caddar (x) (y) `(rplaca (cddar ,x) ,y))
(defsetf cadddr (x) (y) `(rplaca (cdddr ,x) ,y))
(defsetf cdaaar (x) (y) `(rplacd (caaar ,x) ,y))
(defsetf cdaadr (x) (y) `(rplacd (caadr ,x) ,y))
(defsetf cdadar (x) (y) `(rplacd (cadar ,x) ,y))
(defsetf cdaddr (x) (y) `(rplacd (caddr ,x) ,y))
(defsetf cddaar (x) (y) `(rplacd (cdaar ,x) ,y))
(defsetf cddadr (x) (y) `(rplacd (cdadr ,x) ,y))
(defsetf cdddar (x) (y) `(rplacd (cddar ,x) ,y))
(defsetf cddddr (x) (y) `(rplacd (cdddr ,x) ,y))

(defsetf nth (i x) (v) `(rplaca (nthcdr ,i ,x) ,v))

(defsetf get (s i) (v) `(putprop ,s ,v ,i))
(defsetf getprop (s i) (v) `(putprop ,s ,v ,i))
(defsetf plist (x) (p) `(plist ,x ,p))

(defsetf symeval (x) (y) `(set ,x ,y))

(defsetf vref (x i) (v) `(vset ,x ,i ,v))
(defsetf aref (x . li) (v) `(aset ,x ,@li ,v))

(defsetf load-byte (n np nl) (v)
         `(setf ,n (deposit-byte ,n ,np ,nl ,v)))
