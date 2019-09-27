
;==========================================================================
;
;      Le_Lisp v15.2  :  les rationnels en pre'cision arbitraire Z
;
;===========================================================================
; (c)  Francois Morain, Bernard Serpette, Jean Vuillemin, Paul Zimmermann 1988
;      Institut National de Recherche en Informatique et Automatique
;      B.P. 105, 78153 Le Chesnay Cedex, France. morain@inria,
;      serpette@inria, vuillemin@inria, zimmerma@inria
;===========================================================================

; Le pre'sent fichier ne marche qu'en 15.2, 15.21 ...
(unless (>= (version) 15.2)
	(error 'load 'erricf 'bnq))

; Arithmetique Entie`re: fichier bnq.ll
(add-feature 'q)

(dmd package (l) `(setq #:sys-package:colon ,l))

; .Section "Structure Interne de N,Z et Q"
; Nous e'tendons les fix et float LeLisp, par des objets 
; auto-type's. Le tout forme l'ensemble R des nouveaux nombres, qui comprend :
; #:R:Q:N, les grands entiers positifs,
; #:R:Q:Z, les grands entiers ne'gatifs,
; #:R:Q:/, les rationnels par numerateur et de'nominateur.

; .Section "Cre'ation d'un rationnel"
(package '#:R:Q)
(defstruct #:R:Q:/ n d)

(de #:R:Q:/x (n d)
    (let ((q (#:R:Q:/:make)))
         (#:R:Q:/:n q n)
         (#:R:Q:/:d q d)
         q))

; Ve'rifie avant de construire si d=1:
(de Qx (n d) (if (eq d 1) n (:/x n d)))

(de :N:1/ (n) (:/x 1 n))

(de :Z:1/ (z) (:/x -1 (abs z)))

; Calcul du nume'rateur et du de'nominateur :
(de numerator (r)
    (cond ((eq ':/ (type-of r)) (:/:n r))
          ((numberp r) r)
          (T (#:R:error 'numerator 'ERRNNA (list 'numerator r)))))

(de denominator (r)
    (cond ((eq ':/ (type-of r)) (:/:d r))
          ((numberp r) 1)
          (T (#:R:error 'denominator 'ERRNNA (list 'denominator r)))))

; .Section "Tests de type"
; Les Q sont des rationnels:
(de :rationalp (q) q)

(package ':/); le package courant est #:R:Q:/

; Un Q peut e^tre entier, si son de'nominateur vaut 1 apre`s re'duction :
(de :integerp (q)
    (let ((n (:n q)) (d (:d q)) (gcd))
         (setq gcd (pgcd n d))
         (if (eq 0 gcd)
	     ; q vaut 0 ou +/- 1
             (unless (eq 0 n) (:n q (quotient n (abs n))))
             (unless (eq 1 gcd)
		     ; on met a` jour la repre'sentation de q
                     (:n q (setq n (quotient n gcd)))
                     (:d q (setq d (quotient d gcd)))))
         (and (eq d 1) n)))

; .Section "Oppose' 0-"
; (0- x) vaut -x: le signe est celui du nume'rateur.
(de :0- (q) (Qx (0- (:n q)) (:d q)))

; .Section "Valeur absolue abs"
(de :abs (q)
    (if (< (:n q) 0) (Qx (abs (:n q)) (:d q)) q))

; .Section "Partie entie`re floor"
; q = n/d, n=a*d+r, floor=a, #:ex:mod=r/d.
(de :floor (q) 
    (let ((quo  (quomod (:n q) (:d q))))
         (setq  #:ex:mod (Qx #:ex:mod (:d q)))
         quo))

(de :truncate (q)
    (let ((quo (:floor q)))
         (when (< quo 0) (setq quo (+ 1 quo) #:ex:mod (- #:ex:mod 1)))
         quo))

; .Section "Convertion flottante float"
(de :float (q)
    (if (neq 0 (:d q))
        (fdiv (float (:n q)) (float (:d q)))
        (#:R:error 'float 'RDIV0 (list 'float q))))

; .Section "Inverse 1/"
; (1/ x) vaut 1/x:
(de :1/ (q)
    (if (< (:n q) 0)
        (Qx (0- (:d q)) (abs (:n q)))
        (Qx (:d q) (:n q))))

; .Section "La Comparaison <?>"
; (<?> x y) renvoie 1 ssi x>y, 0 ssi x=y et -1 ssi x<y:
(de :<?> (q y)
    (selectq (type-of y)
      (#:R:Q:/ (<?> (* (:n q) (:d y)) (* (:n y) (:d q))))
      (T (if (integerp y)
             (<?> (:n q) (* y (:d q)))
             (0- (<?> y q))))))

; .Section "Addition"
(de :+ (x y)
    (selectq (type-of y)
      (#:R:Q:/ (if (eq (:d x) (:d y))
              (Qx (+ (:n x) (:n y)) (:d x))
              (Qx (+ (* (:n x) (:d y)) (* (:d x) (:n y)))
                  (* (:d x) (:d y)))))
      (T (if (integerp y)
             (:Q+Z x y)
             (+ y x)))))

(de :Q+Z (q z) (Qx (+ (:n q) (* (:d q) z)) (:d q)))

; .Section "La multiplication"
; (* x y) vaut le produit x*y:

(de :* (x y)
    (selectq (type-of y)
      (#:R:Q:/ (Qx (* (:n x) (:n y))
                   (* (:d x) (:d y))))
      (T (if (integerp y)
             (:Q*Z x y)
             (* y x)))))

(de :Q*Z (q r) (Qx (* (:n q) r) (:d q)))

; .Section "Le print"
(de :prin (q)
    (cond ((= 0 (:d q)) (if (eq 0 (:n q)) (prin "0/0") (prin "1/0")))
          ((:integerp q) (prin (:n q)))
          ((let ((p (precision)) (n (:n q)) (d (:d q)))
                (selectq (type-of p)
                   (fix (ecrit-fc n d (if (= 0 p) 1 p) (abs p)))
                   (float (if (> (setq p (fix p)) 0) 
                              (ecrit-10 n d 10 p)
                              (ecrit-fc n d 0 (- p))))
                   (T (prin (:n q)) (princn #//) (prin (:d q))))))))

(de division- (n d)
    (if (< n d)
        (setq #:ex:mod n n 0)
        (setq #:ex:mod (- n d) n 1))
    n)

; Produit l'e'criture de p termes de l'e'criture en fraction continue
; normale du type (z) (1) (n) suivant le signe de z.
(de ecrit-fc (n d z p)
    (prin "/")
    (while (> p 0)
           (prin (selectq (<?> z 0) 
                    (1 (quomod n d))
                    (0 (division- n d))
                    (-1 (round n d))))
           (setq n d d #:ex:mod)
           (if (eq d 0)
               (setq p 0)
               (unless (= 0 z) (prin " "))
               (setq p (- p 1))))
    (unless (= 0 d)
            (when (= 0 z) (prin " "))
            (if (< 0 d 100)
                (if (> n 0) 
                    (ecrit-10 n d 10 1) 
                    (prin (:n q)) (princn #//) (prin (:d q)))))
    (prin "/"))

; Ecrire n/d en base b avec p chiffres apre`s la virgule:
(de ecrit-10 (n d b p)
   (let ( gcd )
      (when (< n 0) (prin "-") (setq n (- n)))
      (prin (quomod n d)) (setq n #:ex:mod gcd (pgcd d b))
      (unless (= 1 gcd) (prin "."))
      (while (> gcd 1)
           (setq d (quotient d gcd) p (-  p 1))
           (prin (quomod (* (quotient b gcd) n) d)) 
           (setq n #:ex:mod gcd (pgcd d b)))
      (unless (= 0 n)
      (prin "," (quotient (* b n) d)) (setq gcd n n #:ex:mod p (- p 1))
      (until (= gcd n)
            (prin (quomod (* b n) d)) (setq n #:ex:mod) 
            (when (< (decr p) 1) (prin ".") (setq n gcd))))))

; .Section "Ope'rations avec les fixp Lisp"
(package 'fix)

(de :1/ (n) (if (ge n 0) (Qx 1 n) (Qx -1 (0- n))))

(de :/ (n d) (* (1/ d) n))

(package '#:R:Q)
; .Section "La division"
; (quomod x y) renvoie le quotient entier q de x par y, et affecte
; le reste r dans #:ex:mod. Mathe'matiquement, q et r sont de'finis
; par x=q*y+r avec q entier relatif et r re'el, 0<=r<abs(y);  x est un
; #:R:Q:/.
(de :quomod (x y)
    (#:R:quomod x y))

