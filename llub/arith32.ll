; .EnTete "Le-Lisp (c) version 15.2" " " "arith32"
; .EnPied "arith32.ll" "%" " "
; .SuperTitre "Arithme'tique 32 bits"
;
; .Auteur "Pascal Kuczynski"
;
; .Centre "*****************************************************************"
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; .Centre "$Id"

;;; Ce module constitue un ensemble de fonctions permettant de
;;; jouer avec l'arithmetique 32 bits au travers de convertisseurs:
;;; adresse <-> float|fix

(unless (>= (version) 15.2)
     (error 'load 'erricf 'arith32))

(defmessage errftoa
  (french "un ne'gatif n'a pas de sens pour une adresse")
  (english "I don't know what is a negative adresse"))
(defmessage erratof
  (french "chaque partie d'une adresse doit e^tre un entier")
  (english "each part of an address must be a fixnum"))

;;; optionnel: si on veux de tres grand nombres
;;; on prendra soin de faire (setq bigfloat t)
(when (and (not (featurep 'q))
	   (boundp 'bigfloat)
	   bigfloat)
      (loadmodule 'bnq))

(defvar maxfix 32767)
(defvar highval 65536)

;;; pour transformer une adresse 32 bits en flottant
(de AtoF (cons)
    (if (consp cons)
        (+ (* (16bns (car cons)) highval)
           (16bns (cdr cons)))
      (16bns cons)))

(de 16bns (x)
    (unless (fixp x)
	    (error '|AtoF| 'erratof x))
    (if (ge x 0)
        x
      (+ highval x)))

;;; pour transformer un flottant ou fixnum en adresse 32 bits
(de FtoA (f)
    (when (< f 0)
	(error '|FtoA| 'errftoa f))
    
    (if (fixp f)
	f
      (let ((h (fix (/ f highval))))
	(when (> (abs h) highval)
	      (error 'ftoa 'erroob f))
	(cons h
	      (16bs (- f (* h highval))))
	)))

(de 16bs (x)
    (fix (if (<= (abs x) maxfix)
	     x
	   (- x highval))))

;;ex:
;(AtoF 1) -> 1
;(AtoF '(1 . 0)) -> 65536.
;(AtoF '(0 . -32767)) -> 32770.

;(FtoA 1) -> 1
;(FtoA 65536) -> (1 . 0)
;(FtoA 32770) -> (0 . -32767)

;; on a tjrs:
;(FtoA (AtoF <@>)) -> <@>
;(AtoF (FtoA <F>)) -> <F>
