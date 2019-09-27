; .EnTete "Le-Lisp (c) version 15.2" " " "Les Complexes"
; .EnPied " " "%" " "
; .Chapitre IV "Les Nombres Complexes"
;
; .Centre "*****************************************************************"
; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"

; .Centre "$Header: /usr/cvs/lelisp/llib/complex.ll,v 1.3 2017/06/10 19:47:42 jullien Exp $"
;==========================================================================
;
;      Le_Lisp v15.2  :  les complexes C.
;
;===========================================================================
;  (c)  Jean Vuillemin, 1986
;       Institut National de Recherche en Informatique et Automatique
;       B.P. 105, 78153 Le Chesnay Cedex, France. vuillemin@inria
;===========================================================================
(unless (>= (version) 15.2)
	(error 'load 'erricf 'complex))

(setq #:sys-package:colon 'R)

(add-feature 'complex)

(unless (featurep 'genr) (loadmodule 'genr))

(setq #:backup:majuscules #:system:read-case-flag
      #:system:read-case-flag ())
; Un complexe est repre'sente' c par sa partie re'elle (:r c) et sa partie
; imaginaire (:i c).
(defstruct :C r i)

; Teste le type C:
(dmd :C:? (c) `(eq ':C (type-of ,c)))

; Construit un complexe [r:i]. Suppose i<>0 :
(dmd :C:x (r i) `(let ((:c (:C:make))) (:C:r :c ,r) (:C:i :c ,i) :c))

(setq #:sys-package:colon '#:R:C)

; Construit a+ib = [a:b] 
(de makecomplex (a b) (if (= 0 b) a (:x a b)))

; L'imaginaire pur i*i=-1 :
(defvar i (makecomplex 0 1))

; Teste si un nombre est un complexe pur:
(de complexp (c) (and (:? c) c))

; Teste si un objet Lisp est un re'el.
(de realp (r)                    ;  Les re'els sont forme's de
    (or (rationalp r)            ;  Q,
        (floatp r)               ;  des flottants,
        (and (numberp r)         ;  et de tous les nombres qui
             (send 'realp r))))  ;  re'pondent au message realp.

; Les complexes ne sont pas des re'els:
(de :realp (c) ())
; .Section "Fonctions propres aux complexes"
; Acce's aux parties re'elles et imaginaires :
(de realpart (c)
    (cond ((:? c) (:r c))
          ((numberp c) c)
          (T (#:R:error 'realpart 'ERRNNA (list 'realpart c)))))

(de imagpart (c)
    (cond ((:? c) (:i c))
          ((numberp c) 0)
          (T (#:R:error 'imagpart 'ERRNNA (list 'imagpart c)))))

; Le conjugue' de a+ib est a-ib
(de conjugate (c)
    (if (numberp c)
        (if (:? c) (:x (:r c) (- (:i c))) c)
        (#:R:error 'conjugate 'ERRNNA
               (list 'conjugate c))))

; Definition du module au carre:
(de :module2 (c)  (+ (* (:r c) (:r c)) (* (:i c) (:i c))))
; .Section "Arithme'tique Complexe"
(de :float (c) (:x (float (:r c)) (float (:i c))))

(de :truncate (c) (#:R:error 'truncate 'RINC (list 'fix c)))

; La comparaison est rarement bien de'finie sur les complexes:
; On renvoie le complexe forme' du re'sultat
; des comparaisons sur les 2 champs.
(de :<?> (a b)
    (if (:? b)
        (makecomplex (<?> (:r a) (:r b)) (<?> (:i a) (:i b)))
        (:x (<?> (:r a) b) (<?> (:i a) 0))))

; Addition binaire :
(de :+ (c r)
    (if (:? r)
        (makecomplex (+ (:r c) (:r r)) (+ (:i c) (:i r)))
        (:x (+ r (:r c)) (:i c))))

; Negation Unaire:
(de :0- (c) (:x (- (:r c)) (- (:i c))))

; Multiplication binaire :
(de :* (c r)
    (if (:? r)
        (makecomplex (- (* (:r c) (:r r)) (* (:i c) (:i r)))
            (+ (* (:r c) (:i r)) (* (:i c) (:r r))))
        (makecomplex (* r (:r c)) (* r (:i c)))))

; Inverse: 1/a+ib = a/m-ib/m  avec m=a*a+b*b
(de :1/ (c) 
    (let ((m (:module2 c)))
         (:x (/ (:r c) m) (- (/ (:i c) m)))))

; Par convention, a+ib s'e'crit [bi+a]
(de :prin (c)
    (cond ((eq (precision) 'cl)
           (princn #/#) (princn #/C) (princn #/()
           (prin (:r c)) (princn #\SP) (prin (:i c)) (princn #/)))
          (T (princn #/[)
             (unless (or (= 1 (:i c)) (= 1. (:i c)))
                     (if (or (= -1 (:i i)) (= -1. (:i c)))
                         (princn #/-)
                         (prin (:i c))))
             (princn #/i)
             (unless (= 0 (:r c)) 
                     (cond ((> (:r c) 0)
                            (princn #/+) (prin (:r c)))
                           (T (princn #/-) (prin (- (:r c))))))
             (princn #/])))
    c)

; Pour pouvoir relire les complexes:
(dmc  |[| ()
      (let ((r) (j))   
           (setq j (with ((typecn #/i 'csep))
                         (selectq (peekcn)
                          (#/i 1)
                          (#/- (readcn)
                               (if (eq (peekcn) #/i) -1 (- (read))))
                          (T (read))))
                 r (readcn))
        (selectq r
         (#/i (selectq (readcn)
                (#/] (setq r 0))
                (#/+ (setq r (read))
                     (if (eq (peekcn) #/]) (readcn)
                         (#:R:error 'read 'RNOTC r)))
                (#/- (setq r (- (read)))
                     (if (eq (peekcn) #/]) (readcn)
                         (#:R:error 'read 'RNOTC r)))
                (T (#:R:error 'read 'RNOTC r))))
         (#/] (setq r j j 0))
         (T  (#:R:error 'read 'RNOTC r)))
        (makecomplex r j)))

(defsharp |C| ()
   (setq n (read))
   (list (:x (car n) (cadr n))))
; .Section "Conversion en coordonne'es polaires"
; De'finition de pi : soit on prend la valeur exacte si on dispose des re'els,
; soit on approxime en flottant avec une pre'cision de'pendante de la machine:
(defvar pi (if (boundp 'pi) pi (* 4 (atan 1.))))

(defvar pi/2 (/ pi 2))

; Pour un complexe c=rho*e**i*theta, le module rho est donne' par (:abs c),
; la phase theta par (:phase c) et e**i*theta par (:signum c).

(de :abs (c) (if (zerop (:r c)) (abs (:i c)) (sqrt (:module2 c))))

; La phase est 0 pour un re'el, et atan(r/j) pour c=[ji+r]
(de phase (c)
    (cond ((:? c) (:arctan (:i c) (:r c)))
          ((numberp c)  (if (< c 0) pi 0))
          (T (#:R:error 'phase 'ERRNNA
                    (list 'phase c)))))

; i*r = r*e**i*pi/2   rc+ic=rho*e**i*theta, tan(theta)=ic/rc
(de :arctan (y x)
    (selectq (<?> y 0)
     (1 (selectq (<?> x 0)
         (1 (atan (/ y x)))
         (0 pi/2)
         (-1 (+ pi (atan (/ y x))))))
     (0 (if (< x 0) pi 0))
     (-1 (- (:arctan (- y) x)))))

; Pour un re'el, (signum r) donne le signe -1,0,1 de r.
; Pour un complexe c=rho*e**i*theta, c'est e**i*theta, soit c/(abs c).
(de signum (c)
    (cond ((:? c) (:* c (/ (:abs c))))
          ((numberp c) (<?> c 0))
          (T (#:R:error 'signum 'ERRNNA
                    (list 'signum c)))))
; .Section "Logarithme et Exponentielle sur C"
; log(r*e**i*theta) = log(r)+i*theta
(de :log (c) (:x (log (:abs c)) (:arctan (:i c) (:r c))))

; e**rc+ic = e**rc*(cosic+i*sinic)
(de :exp (c) (:*  (:cis (:i c)) (exp (:r c))))

(de :cis (theta) (:x (cos theta) (sin theta)))

; (cis r) = cos(r)+i*sin(r)
(de cis (r)
    (if (numberp r) (:cis r) 
        (#:R:error 'cis 'ERRNNA (list 'cis r))))

; (sqrt c) = c**1/2 = e**(log(c)/2)
(de :sqrt (c) (:exp (/ (:log c) 2)))
; .Section "Sinus, Cosinus et Arc Tangente sur C"
; sin(c)=1/2i(e**i*c-e**-i*c)
(de :sin (c)
    (* (- (exp (* i c)) (exp (* [-i]  c))) [-1/2i]))

; cos(c)=1/2(e**i*c+e**-i*c)
(de :cos (c)
    (/ (+ (exp (* i c)) (exp (* [-i] c))) 2))

; atan(z)=-ilog((1+iz)(sqrt1/(1+z*z)))
(de :atan (z)
    (if (= i z) (/ 0)
        (:* [-i] (log (/ (+ 1 (* i z)) (sqrt (+ 1 (* z z))))))))

; tan(z)  = sin(z)/co

(de tan (z) (/ (sin z) (cos z)))
; .Section "Extention sur C des Fonctions Transcendantes sur R"
(setq #:sys-package:colon '#:R)

(de :log (r)
    (selectq (<?> r 0)
      (1 (log (float r)))
      (0 (- (/ 0)))
      (-1 (:C:x (log (- r)) pi))))


(de #:fix:log (r) (:log r))

(de #:float:log (r) (:log r))

(de :sqrt (r)
    (selectq (<?> r 0)
      (1 (sqrt (float r)))
      (0 0)
      (-1 (:C:x 0 (sqrt (- r))))))

(de #:fix:sqrt (r) (:sqrt r))

(de #:float:sqrt (r) (:sqrt r))

; asin(z)=-ilog(iz+sqrt(1-z*z))
(de :asin (z)
    (* [-i] (log (+ (* z i) (sqrt (- 1 (* z z)))))))

(de #:fix:asin (r) (:asin r))

(de #:float:asin (r) (:asin r))

; acos(z)=pi/2-asinz
;(de :acos (z) (- pi/2 (asin z)))
(de :acos (z)
    (if (realp z)
	(- pi/2 (asin (float z)))
        (- pi/2 (asin z))))

(de #:fix:acos (r) (:acos r))

(de #:float:acos (r) (:acos r))
; .SSection "Fonctions Hyperboliques"
; sinhx=(e**x-e**-x)/2   
(de sinh (x)
    (if (numberp x)
        (/ (- (exp x) (exp (- x))) 2)
        (#:R:error 'sinh 'ERRNNA
                  (list 'sinh x))))

; coshx=(e**x+e**-x)/2   
(de cosh (x)
    (if (numberp x)
        (/ (+ (exp x) (exp (- x))) 2)
        (#:R:error 'cosh 'ERRNNA
                  (list 'cosh x))))

; tanhx=sinhx/coshx
(de tanh (x)
    (if (numberp x)
        (/ (sinh x) (cosh x))
        (#:R:error 'tanh 'ERRNNA
                  (list 'tanh x))))

; asinhx=log(x+sqrt(1+x*x))
(de asinh (x)
    (if (numberp x)
        (log (+ x (sqrt (+ 1 (* x x)))))
        (#:R:error 'asinh 'ERRNNA
                  (list 'asinh x))))

; acoshx=log(x+(x+1)*sqrt(x-1/x+1))
(de acosh (x)
    (if (numberp x)
        (log (+ x (* (+ x 1) (sqrt (/ (- x 1) (+ x 1))))))
        (#:R:error 'acosh 'ERRNNA
                  (list 'acosh x))))

; atanh(x) = 1/2*log((1+x/1-x))
(de atanh (x)
    (cond
        ((not (numberp x))
         (#:R:error 'atanh 'ERRNNA (list 'atanh x)))
        ((= 1 x) (/ 0))
        ((= -1 x) (- (/ 0)))
        (t (/ (log (/ (+ x 1) (- 1 x))) 2))))

; .Section "Modifs a` genr.ll"
(de :+ (n m)
    (if (complexp m) (:C:+ m n) (plus (float n) (float m))))

(de :* (n m)
    (if (complexp m) (:C:* m n) (times (float n) (float m))))

(de :<?> (n m)
    (if (complexp m) (- (:C:<?> m n)) (<?> (float n) (float m))))

(setq #:system:read-case-flag  #:backup:majuscules)
