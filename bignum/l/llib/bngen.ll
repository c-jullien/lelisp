;==========================================================================
;
;      Le_Lisp v15.2  :  L'arithme'tique ge'ne'rique R.
;
;===========================================================================
;  (c)  Jean Vuillemin, 1984
;       Institut National de Recherche en Informatique et Automatique
;       B.P. 105, 78153 Le Chesnay Cedex, France. vuillemin@inria
;===========================================================================
(unless (>= (version) 15.2)
        (error 'load 'erricf 'bngen))

(add-feature 'gen)

(setq #:backup:majuscules #:SYSTEM:READ-CASE-FLAG
      #:SYSTEM:READ-CASE-FLAG ())
; .Chapitre I "Arithme'tique ge'ne'rique R"
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

; Re'duction de la soustraction binaire - a` l'oppose' 0- unaire:
(de :- (n1 n2) (+ n1 (0- n2)))


; Re'duction de la division binaire / a` l'inverse 1/:
(de :/ (n1 n2) (* n1 (1/ n2)))

(defvar #:ex:mod 0)

; Re'duction de la division entie`re au plancher floor:
(de :quomod (n1 n2)
    (lets ((an2 (abs n2))
           (q (floor (/ n1 an2))))
          (setq #:ex:mod (* #:ex:mod an2))
          (if (< n2 0) (0- q) q)))
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

; .Section "Plancher"
; Renvoie le plus grand entier relatif z tel que z<=r:
(de floor (r)
    (cond ((not (numberp r))
           (:error 'floor 'ERRNNA r))
          ((integerp r) (setq #:ex:mod 0) r)
          (T (send 'floor r))))

(de :truncate (r)
     (setq r (send 'floor r))
     (when (< r 0) (setq r (+ 1 r) #:ex:mod (- #:ex:mod 1)))
     r)

(de ceiling (r) (let ((z (floor r))) (if (< z r) (+ z 1) z))) ; !!

; n=dq+r -d<2r<=d  ou -d-r<r<=d-r
(de round (n d)
    (cond ((< d 0) (0- (round n (0- d))))
          ((< n 0)
           (if (= #:ex:mod (- d #:ex:mod))
               (- -1 (round (0- n) d)) 
               (setq n (0- (round (0- n) d)) #:ex:mod (0- #:ex:mod))
               n))
          ((setq n (quotient n d) d (- d #:ex:mod))
           (if (< d #:ex:mod)
               (setq #:ex:mod (0- d) n (+ 1 n))
               n)))))
; .Section "Re`glage de l'e'criture"
(defvar :prec t)

(de precision k
    (unless (null k) (setq :prec (car k)))
    :prec)
; .Section "Erreurs Arithme'tiques"
(de :error (nomf msg lapp)
    (error nomf
           (selectq msg
             (RDIV0 "Division entie`re par 0 : ")
             (RNOTZ  "L'argument n'est pas un entier: ")
             (RNOTC  "Complexe mal forme'")
             (RINC "Argument Complexe")
             (T msg))
           lapp))
; .Section "Contagion flottante"
(setq #:sys-package:colon 'float)

(de :* (x y) (fmul x (float y)))

(de :+ (x y) (fadd x (float y)))

(de :<?> (x y)  (<?> x (float y)))


(defvar :b 32760)

(defvar :fb (float :b))

(defvar :-fb (- :fb))

(de :quomod (f1 f2)
    (setq f2 (float f2))
    (let ((q (:truncate (fdiv f1 f2))))
         (setq #:ex:mod (fsub f1 (fmul f1 (float q))))
         q))

(de :floor (f) (:truncate f))

(de :truncate (f)
    (if (< f 0) 
        (- (:truncate (- f)))
        (ftrunc f)))

#|
Retour a l'ancienne version de ratio
(de ftrunc (f)
    (if (< :-fb f :fb)
        (fix f)
        (lets ((f1  (fdiv f :fb))
               (z1 (ftrunc f1))
               (f0 (fsub f (fmul f1 :fb))))
              (+ (* z1 :b) (ftrunc f0)))))
|#

(de ftrunc (f)
    (if (< :-fb f :fb)
        (fix f)
        (lets ((f1  (fdiv f :fb))
               (z1 (ftrunc f1))
               (f0 (- f (* z1 :fb))))
              (+ (* z1 :b) (ftrunc f0)))))

(de #:fix:<?> (x y) (0- (<?> y x)))

(defvar #:sys-package:genarith 'R)

(setq #:SYSTEM:READ-CASE-FLAG  #:backup:majuscules)
