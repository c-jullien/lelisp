; .EnTete "Le-Lisp (c) version 15.2" " " "L'Arithme'tique ge'ne'rique R"
; .EnPied " " "%" " "
; .Chapitre I "L'arithme'tique ge'ne'rique R"
;
; .Centre "*****************************************************************"
; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"

; .Centre "$Header: /usr/cvs/lelisp/llib/genr.ll,v 1.3 2017/06/10 19:47:42 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'genr))

(add-feature 'genr)

(setq #:backup:majuscules #:system:read-case-flag
      #:system:read-case-flag ())
; Ce module facilite l'e'criture d'extensions a` l'arithme'tique LeLisp.
; Il re'alise la conversion par de'faut des se'mantiques binaires
; - / quomod en 0- 1/ et truncate respectivement.
; Il effectue la conversion flottante en temps qu'option de dernier
; recours. Il suffit pour cela que les objets programme's re'pondent
; a` la se'mantique float.

; Pour l'utiliser, on pourra, soit installer ses objets comme sous type 
; de R, soit simplement charger ce module.

(setq #:sys-package:colon 'R)
; .Section "Ope'rations Binaires"
; Les se'mantiques ge'ne'riques binaires sont :
; + - * / <?> quomod power

(de :+ (n1 n2)
    (fadd (float n1) (float n2)))

; Re'duction de la soustraction binaire - a` l'oppose' 0- unaire:
(de :- (n1 n2) (+ n1 (0- n2)))

(de :* (n1 n2);  (fmul (float n1) (float n2)))
     (fmul (float n1) (float n2)))

; Re'duction de la division binaire / a` l'inverse 1/:
(de :/ (n1 n2) (* n1 (1/ n2)))

(de :<?> (n1 n2) (<?> (float n1) (float n2)))

(defvar #:ex:mod 0)
; Re'duction de la division entie`re au plancher floor:
(de :quomod (n1 n2)
    (let ((q (floor (/ n1 (abs n2)))))
         (setq #:ex:mod (- n1 (* (abs n2) q)))
         (if (< n2 0) (- q) q)))

(de :power (n1 n2) (exp (* n2 (log n1))))

; .SSection "Exponentielle a` deux arguments"
(de ** (x y)
    (cond ((< y 0) (/ (** x (- y))))
          ((integerp y) (:**N x y 1))
          ((eq x 0) (if (eq 0 y) (/ 0 0) 0))
          ((eq 1 x) 1)
          (T (power x y))))

; Calcule p*(x**n)

(de :**N (x n p)
    (if (eq 0 n)
        p
        (:**N (* x x) (quomod n 2) (if (eq 0 #:ex:mod) p (* x p)))))
; .Section "Ope'rations Unaires"
; Les se'mantiques ge'ne'riques unaires sont :
; abs 0- 1/ float truncate exp log sqrt sin cos asin acos atan
; prin eval numberp integerp rationalp

(de :eval (n) n)

(de :numberp (n) n)

; Par de'faut, les R ne sont pas des entiers:
(de :integerp (r) ())

; Par de'faut, les R ne sont pas des rationnels:
(de :rationalp (r) ())

(de :0- (n) (0- (float n)))

(de :1/ (n) (1/ (float n)))

; Pour eviter de boucler dans le meme #:sys-package:genarith 'R
(de :truncate (n) (let ((#:sys-package:genarith 'genarith))
		    (truncate (float n))))

(de :exp (r) (exp (float r)))

(de :log (r) (if (< r 0.) (error "log" 'errgen r)
	       (log (float r))))

(de :sqrt (r) (if (< r 0.) (error "sqrt" 'errgen r)
		(sqrt (float r))))

(de :atan (r) (atan (float r)))

(de :sin (r) (sin (float r)))

(de :asin (r) (if (or (< r -1.)(> r 1.))
		  (error "asin" 'errgen r)
		(asin (float r))))

(de :cos (r) (cos (float r)))

(de :acos (r) (if (or (< r -1.)(> r 1.))
		  (error "acos" 'errgen r)
		(acos (float r))))

; .Section "Re`glage de l'e'criture"
(defvar :prec t)

(de precision k
    (unless (null k) (setq :prec (car k)))
    :prec)
; .Section "Erreurs Arithme'tiques"
(defmessage RDIV0 (french "Division entie`re par 0")
                  (english "integer division by 0"))
(defmessage RNOTZ (french "L'argument n'est pas un entier")
                  (english "the argument is not an integer"))
(defmessage RNOTC (french "Complexe mal forme'")
                  (english "badly formed complex number"))
(defmessage RINC (french "Argument complexe")
                 (english "complex argument"))

(defmacro :error (nomf msg lapp)
    `(error ,nomf ,msg ,lapp))

; .Section "Comparaison avec des float ou des fixp"
(de #:float:<?> (x y) (0- (<?> (float y) x)))

(de #:fix:<?> (x y) (0- (<?> y x)))

(defvar #:sys-package:genarith 'R)

(setq #:system:read-case-flag  #:backup:majuscules)
