;;;
;;; RATIO:  Arbitrary precision Rationnals
;;;
;;; $Source: /usr/cvs/lelisp/llib/ratio.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(unless (>= (version) 15.2)
	(error 'load 'erricf 'ratio))

(add-feature 'ratio)

(unless (featurep 'genr) (loadmodule 'genr))

(setq #:backup:majuscules #:system:read-case-flag
      #:system:read-case-flag ())

(defmacro package (l)
  `(setq #:sys-package:colon ,l))

(package 'R)

; .Chapitre II "Representations des Entiers et Algorithmes Arithmetiques"
; Les entiers sont ici repre'sente's par ce que nous apellerons des chiffres.
; Un chiffre est un arbre parfaitement e'quilibre', de profondeur p >=0, et
; dont les 2**p feuilles sont des cardinaux, entiers 16 bits dont on 
; n'interpre'te pas le premier bit comme un signe.

(package 'N)

; .Section "Profondeur, Re'duction et De'bordement"
; Ajoute a` la profondeur d'un chiffre n la valeur initiale p:
(defun :prof (n p) (if (fixp n) p (:prof (cdr n) (add1 p))))

; Teste si le chiffre n vaut 0:
(defun :=0 (n) 
    (if (fixp n) (eq n 0) (and (:=0 (cdr n)) (:=0 (car n)))))

; Conversion d'un chiffre de profondeur p en un chiffre de profondeur q>=p,
; comple'te' a` gauche par des 0:
(defun :C->C (n p q)
    (if (eq p q)
        n
        (:C->C (cons (:C->C 0 -1 p) n) (add1 p) q)))

; "Le registre de retenues Brr" :
(defvar #:ex:regret 0)
; Son nom Le_Lisp est #:ex:regret, et il sert a` communiquer les valeurs des
; retenues entrantes et sortantes des retenues dans les ope'rations 
; d'arithme'tique exacte sur les cardinaux.
(setq #:ex:regret 0)

; Construit c+B(p)*RegistreRetenue
(defun :overflow (c p)
    (if (eq 0 #:ex:regret) c (cons (:C->C (ex+ 0 0) -1 p) c)))

; Elimine les 0 non significatifs a` gauche du chiffre c:
(defun :underflow (c) 
    (if (and (consp c) (:=0 (car c))) (:underflow (cdr c)) c))
; .Section "Comparaison Entie`re"
; La comparaison (:<?> n m) renvoie -1,0 ou 1, le signe de N-M:
(defun :<?> (n m)
    (cond ((fixp n)
           ; si m est un fixp, comparaison exacte, sinon n<m:
           (if (fixp m) (ex? n m) -1))
          ((fixp m) 1)  ; n>m
          ((neqn (:<?> (car n) (car m)) 0)) ; Comparer les premiers chiffres.
                                  ;  S'ils sont e'gaux, comparer les seconds.
          ((:<?> (cdr n) (cdr m)))))                 
; .Section "Addition"
; Addition binaire de deux entiers n et m.
(defun :+ (n m)
    (let ((pn (:prof n -1)) (pm (:prof m -1)))
         ; Calcul des profondeurs, appel de l'addition de deux
         ; chiffres, le plus profond en tete, 
         ; et ve'rification de de'bordement de la retenue.
         (if (gt pm pn)
             (:overflow (:CC+C m n pm pn) pm)
             (:overflow (:CC+C n m pn pm) pn))))

; Addition des chiffres n et m, avec pn>=pm:
(defun :CC+C (n m np mp)
    (if (eq np mp)
        (:C+C n m)    ; addition de 2 chiffres de me^me profondeur
        (xcons (:CC+C (cdr n) m (sub1 np) mp)
               ; Ajouter m aux poids faibles de n, et propager la retenue.
               (:C+rr (car n)))))

; Addition des chiffres n et m de me^me profondeur:
(defun :C+C (n m)
    (if (fixp n)
        (ex+ n m)         ; profondeur=0
        (xcons (:C+C (cdr n) (cdr m))     ; Addition des poids faibles,
               (:C+C (car n) (car m)))))  ; Addition des poids forts.

; Propagation d'une retenue:
(defun :C+rr (n)
    (cond ((eq #:ex:regret 0) n)
          ((fixp n) (ex+ n 0))
          (t (xcons (:C+rr (cdr n))
                    (:C+rr (car n))))))
; .Section "Soustraction Entie're"
; Soustraction binaire sur N, en supposant n >= m:
(defun :- (n m)
    (setq #:ex:regret 1
          n (:underflow (:CC-C n m (:prof n -1) (:prof m -1)))
          #:ex:regret 0)
    n)

; Soustraction de deux chiffres n et m avec pn>=pm:
(defun :CC-C (n m np mp)
    (if (eq np mp)
        (:C-C n m)       ; Soustraction de deux chiffres de me^me profondeur.
        (xcons (:CC-C (cdr n) m (sub1 np) mp) ; n0-m
               (:C-rr (car n)))))             ; propagation de l'emprunt

; Soustraction de deux chiffres n et m de me^me profondeur:
(defun :C-C (n m)
    (if (fixp n)
        (ex+ n (ex- m))
        (xcons (:C-C (cdr n) (cdr m))
               (:C-C (car n) (car m)))))

; Propagation d'un emprunt:
(defun :C-rr (n)
    (cond ((eq #:ex:regret 1) n)          ; emprunt de 1
          ((fixp n) (ex+ n -1))            ; profondeur=0
          (t (xcons (:C-rr (cdr n))        ; poids faibles
                    (:C-rr (car n))))))    ; poids forts.
; .Section "Multiplication"
; Multiplication binaire de n et m:
(defun :* (n m)
    (cond ((fixp n)
           (selectq n (0 0) (1 m) (T (:overflow (:C*B m n) (:prof m -1)))))
          ((fixp m) 
           (selectq m (0 0) (1 n) (T (:overflow (:C*B n m) (:prof n -1)))))
          (T (let ((pn (:prof (car n) 0)) (pm (:prof (car m) 0)) (p1) (p0))
         ; Calcul des profondeurs, appel de la multiplication de deux
         ; chiffres, le plus profond en tete.
         ; Les poids forts du produit sont dans p1, les faibles dans p0:
             (if (gt pm pn)
                 (setq p1 (:C->C 0 -1 pn) p0 (:CC*C+C m n p1 pm pn))
                 (setq p1 (:C->C 0 -1 pm) p0 (:CC*C+C n m p1 pn pm)))
         ; Construction du re'sultat:
             (if (:=0 p1)
                 (:underflow p0)
                 (cons (if (gt pm pn) (:C->C p1 pn pm) (:C->C p1 pm pn))
                       p0))))))

; Produit d'un chiffre n par un fixp m:
(defun :C*B (n m)
    (if (fixp n)
        (ex* n m 0)                ; Produit dans la base.
        (xcons (:C*B (cdr n) m)    ; n0*m
               (:C*B (car n) m)))) ; n1*m

; Produit de deux chiffres n,m avec np>=mp:
; Renvoie les poids faibles, avec poids forts dans p1:
(defun :CC*C+C (n m p1 pn pm)
    (if (eq pn pm)
        (:C*C+C+C n m (:C->C 0 -1 pn) p1)
        (xcons (:CC*C+C (cdr n) m p1 (sub1 pn) pm)
               (:CC*C+C (car n) m p1 (sub1 pn) pm))))


; Pour calculer P = (N1*B+N0)*(M1*B+M0) + (RN1*B+RN0) + (RM1*B+RM0) = P1*B+P0:
; .br
; soit P00 = (N0*M0+RN0+RM0) = P001*B + P000; 
; .br
; soit P01 = (N0*M1+RN1+P001) = P011*B + P010; 
; .br
; soit P10 = (N1*M0+P010+RM1) = P101*B + P100; 
; .br
; soit P11 = (N1*M1+P011+P101) = P111*B + P110; 
; .br
; On a P1 = P111*B + P110 et P0 = P100*B + P011.

(defun :C*C+C+C (n m nm0 nm1)
    (cond ((fixp (car n))   ; produit 32 bits
           (setq #:ex:regret (cdr nm1))
           (rplacd nm0 (ex* (cdr n) (cdr m) (cdr nm0)))
           (rplaca nm0 (ex* (cdr n) (car m) (car nm0)))
           (rplacd nm1 #:ex:regret)
           (setq #:ex:regret (car nm1))
           (rplaca nm0 (ex* (car n) (cdr m) (car nm0)))
           (rplacd nm1 (ex* (car n) (car m) (cdr nm1)))
           (rplaca nm1 (ex+ 0 0)))
          (T                ; produit 64 bits et plus
             ; RN0<-P000 RM0<-P001
             (:C*C+C+C (cdr n) (cdr m) (cdr nm0) (cdr nm1))
             ; RN1<-P010 RM0<-P011
             (:C*C+C+C (cdr n) (car m) (car nm0) (cdr nm1))
             ; RN1<-P100 RM1<-P101
             (:C*C+C+C (car n) (cdr m) (car nm0) (car nm1))
             ; RM0<-P110 RM1<-P111
             (:C*C+C+C (car n) (car m) (cdr nm1) (car nm1))))
    nm0)
; .Section "Division"
; La division entie're est une ope'ration complexe, qui
; utilise presque toutes les fonctions de'ja construites.

; Etant donne's N>0 et D>0, il faut construire l'unique paire d'entiers Q et 
; R tels que:
; .br
; .b
; N = D*Q + R, 0<= R <D.
; .r

; La fonction (:quomod n d) traite les cas simple, et pre'pare les ope'randes
; quand il faut utiliser une division longue.
; Elle renvoie le quotient et met le modulo dans la variable #:ex:mod.
(defvar #:ex:mod 0)

(defun :quomod (n d)
    (selectq (:<?> n d)
             (-1 (setq #:ex:mod n) 0)    ; N<D => Q=0, R=N.
             (0  (setq #:ex:mod 0) 1)    ; N=D => Q=1, R=0.
             (1  (if (fixp d)
                     (:CquoB n d)
                     (let ((norm (:normalise d 1)) (pd (:prof d -1))
                           (reste) (quotient))
                          (setq d (:* d norm) n (:* n norm)
                                reste (:C->C 0 -1 pd)
                                quotient (:CCdivC reste n d (:prof n -1) pd)
                                #:ex:mod (:underflow
                                          (:quomod (:underflow reste) norm)))
                          (:underflow quotient))))))

; Division du chiffre n par le fixp d:
(defun :CquoB (n d)
    (if (eq 1 d)
        (setq #:ex:mod 0)
        (setq n (:underflow (:CdivB n d))
              #:ex:mod (ex+ 0 0)))
    n)

; Division du chiffre n par le fixp d, avec retenue entrante et sortante
; dans #:ex:regret:
(defun :CdivB (n d)
    (if (fixp n)
        (ex/ n d)
        (cons (:CdivB (car n) d)
              (:CdivB (cdr n) d))))

; Calcule une puissance de 2 par laquelle il faut multiplier n pour
; que son bit le plus significatif devienne 1 sans changer la profondeur:
(defun :normalise (n r)
    (cond ((fixp n)
           (while (> n 0) (setq n (logshift n 1) r (:* r 2))) r)
          ((:=0 (car n))
           (:normalise (cdr n) (:* (:**B (:prof (car n) -1)) r)))
          (t (:normalise (car n) r))))

(defun :**B (p) (cons (:C->C 1 -1 p) (:C->C 0 -1 p)))

; Retourne q, avec affectation du nouveau reste dans r:
; np >= dp-1.
; rB*B + n  = q*d  + r0         n = n1B+n0, d<B
; rB   + n1 = q1*d + r1
; r1B  + n0 = q0*d + r0
; rB*B + n  = (q1B+q0)*d + r0
(defun :CCdivC (r n d np dp)
    (if (lt np dp)
        (:CCCdivCC r n d np dp 0 0)
        (cons (:CCdivC r (car n) d (sub1 np) dp)
              (:CCdivC r (cdr n) d (sub1 np) dp))))

    
; (r1B+r0)*B + n = q*(d1B+d0) + r        n<B
; r1B+r0   = q*d1 + rr
; rrB + n - q*d0 = r                     r<d  r+2d>0
; rB*B + n = (q1B+q0)*d + r0


; Le cas degenere:
; (dB+r0)*B + n = B-1*(dB+d0) + r
; r = (d+r0-d0)*B + n + d0
(defun :CCCdivCC (r n d np dp q q*d)
    (cond ((equal (car r) (car d))
           (setq q (:**B np) #:ex:regret 1
                 q*d (xcons (:C-C (cdr q) (cdr d)) (:C-C (cdr d) (cdr r)))
                 q (:- q 1)))
          ((ge np 0)
               (setq q (:CCdivC (car r) (cdr r) (car d) np (sub1 dp)))
               (setq q*d (:C->C 0 -1 np))
               (setq q*d (xcons (:C*C+C+C q (cdr d) (copy q*d) q*d) q*d)))
          (t
               (setq #:ex:regret (car r))
               (setq q (ex/ (cdr r) (car d)))
               (rplaca r (ex+ 0 0))
               (setq q*d (xcons (ex* q (cdr d) 0) (ex+ 0 0)))))
        (rplacd r n)
        (setq #:ex:regret 1)
        (setq q*d (:C-C r q*d))
        (while (eq 0 #:ex:regret)
               (setq q (:C-rr q))
               (ex+ 0 0)
               (setq q*d (:C+C q*d d)))
        (ex+ 0 0)
        (rplacd r (cdr q*d))
        (rplaca r (car q*d))
        q))
; .Section "Ecriture des entiers"
(defun :prin (n)
    (if (eq 10 (obase))
        (:prin10 (:CdivB n 10000) (ex+ 0 0))
        (:prinB (:quomod n (obase)) #:ex:mod (obase))))

; Ecriture en base arbitraire base < 65536:
(defun :prinB (NquoB NmodB B)
    (when (neq NquoB 0) (:prinB (:quomod NquoB B) #:ex:mod B))
    (prin NmodB))

; Code optimise' pour l'e'criture en base 10:
(defun :prin10 (NquoB NmodB)
    (if (eq NquoB 0)
        (prin NmodB)
        (:prin10 (:underflow (:CdivB NquoB 10000)) (ex+ 0 0))
        (cond ((gt NmodB 999)    (prin NmodB))
              ((gt NmodB 99)   (prin 0) (prin NmodB))
              ((gt NmodB 9)  (prin 0) (prin 0) (prin NmodB))
              (T           (prin 0) (prin 0) (prin 0) (prin NmodB)))))
; .Section "Conversion Flottante"
(defvar :B0 (power 2 16))

(defvar :B0/2 (power 2 15))

; Calcule la base B de representation de n, en flottant:
(defun :B (n) (if (fixp n) :B0 (power (:B (cdr n)) 2)))

; Convertit n en flottant:
(defun :float (n)
    (if (fixp n) 
        (if (< n 0)
	    (+ (* (float (ex/ n 2)) 2) (ex+ 0 0))
	  (float n))
        (+ (* (:float (car n)) (:B (cdr n))) (:float (cdr n)))))

; .Chapitre III "Les entiers naturels Z et les rationnels Q"
; Par convention, tous les types utilisant les ope'rations arithme'tiques
; ge'ne'riques Le_Lisp sont des sous-types de R. Ceci nous permet d'utiliser
; pour tous ces objets le comportement par de'faut de'fini dans genr.ll
(package '#:R:Q)
; .Section "Structure Interne de N,Z et Q"
; Nous e'tendons les fix et float LeLisp, par des objets 
; auto-type's. Le tout forme l'ensemble R des nouveaux nombres, qui comprend :
; #:R:Q:N, les grands entiers positifs,
; #:R:Q:Z, les grands entiers ne'gatifs,
; #:R:Q:/, les rationnels par numerateur et de'nominateur.
; .SSection "Les grands entiers positifs N"
; Sont repre'sente's par des fixp>=0 ou des arbres de chifres dont le premier
; cons est un tcons.

; Pour qu'un (tcons fixp cdr) soit reconnu comme un #:R:Q:N.
(setq #:system:bignum-type '#:R:Q:N)

; Acce`s a` la valeur absolue:
(defmacro :N:n (n) `(progn ,n))

; Construit un grand entier a` partir d'un card de profondeur >0:
; On positionne a` 1 le bit de tcons.
(defmacro :Nx (c) `(tconsmk ,c))

; Construit un N a` partir d'un cardinal:
(defun Nx (c)
    (cond ((consp c) (tconsmk c))
          ((lt c 0) (tcons 0 c))
          (c)))
; .SSection "Les grands entiers ne'gatifs Z"
; Sont repre'sente's par (tcons ':Z abs)

; Acce`s a` la valeur absolue:
(defmacro :Z:n (z) `(cdr ,z))

; Construit un e'le'ment de Z a` partir d'un car c:
(defmacro :Zx (c) `(tcons ':Z ,c))

; Construit un Z a` partir d'un cardinal:
(defun Zx (c)
    (cond ((consp c) (:Zx c))
          ((ge c 0) (sub 0 c))
          ((:Zx (cons 0 c)))))       ; Pourquoi pas :Zx c ?????
; .SSection "Les fractions Z/N"
; Sont repre'sente'es par (tcons ':/ (cons num den))
; Provisoirement, num et den sont du type Z et N:

; Acce`s au nume'rateur:
(defmacro :/:n (q) `(cadr ,q))

; Remplacement du nume'rateur:
(defmacro :/:n<- (q v) `(rplaca (cdr ,q) ,v))

; Acce`s au de'nominateur:
(defmacro :/:d (q) `(cddr ,q))

; Remplacement du de'nominateur:
(defmacro :/:d<- (q v) `(rplacd (cdr ,q) ,v))

; Construit une fraction n/d:
(defmacro :/x (n d) `(tcons ':/ (cons n d)))

; Ve'rifie avant de construire si d=1:
(defun Qx (n d) (if (eq d 1) n (:/x n d)))

; Calcul du nume'rateur et du de'nominateur :
(defun numerator (r)
    (cond ((eq ':/ (type-of r)) (:/:n r))
          ((numberp r) r)
          (T (#:R:error 'numerator 'ERRNNA (list 'numerator r)))))

(defun denominator (r)
    (cond ((eq ':/ (type-of r)) (:/:d r))
          ((numberp r) 1)
          (T (#:R:error 'denominator 'ERRNNA (list 'denominator r)))))
; .Section "Tests de type"
; Les Q sont des rationnels:
(defun :rationalp (q) q)

; Les N sont des entiers:
(defun :N:integerp (n) n)

; Les Z sont des entiers:
(defun :Z:integerp (n) n)

; Un Q peut e^tre entier, si son de'nominateur vaut 1 apre`s re'duction :
(defun :/:integerp (q)
    (let ((n (:/:n q))
	  (d (:/:d q))
	  (gcd ()))
         (setq gcd (pgcd n d))
         (if (eq 0 gcd)
             (unless (eq 0 n) (:/:n<- q (quotient n (abs n))))
             (unless (eq 1 gcd)
                     (:/:n<- q (setq n (quotient n gcd)))
                     (:/:d<- q (setq d (quotient d gcd)))))
         (and (eq d 1) n)))
; .Section "Valeur absolue abs"
(defun :N:abs (x) x)

(defun :Z:abs (x) (Nx (:Z:n x)))

(defun :/:abs (q)
    (if (< (:/:n q) 0) (Qx (abs (:/:n q)) (:/:d q)) q))
; .Section "Partie entie`re truncate"
; Pour Z et N:
(defun :truncate (z) z)

(defun :/:truncate (q) 
    (or (:/:integerp q)
        (progn (setq q (quomod (:/:n q) (:/:d q))) (if (< q 0) (+ 1 q) q))))
; .Section "Convertion flottante float"
(defun :N:float (r) (#:N:float (:N:n r)))

(defun :Z:float (r) (0- (#:N:float (:Z:n r))))

(defun :/:float (q)
   (let* ((nu (:/:n q)) (de (:/:d q)) (di (pgcd nu de)))
     (if (neq 0 de)
	 (fdiv (float (quotient nu di)) (float (quotient de di)))
       (#:R:error 'float 'RDIV0 (list 'float q)))))

; .Section "Oppose' 0-"
; (0- x) vaut -x:
(defun :Z:0- (z) (:Nx (:Z:n z)))

(defun :N:0- (z) (:Zx (:N:n z)))

(defun :/:0- (q) (Qx (0- (:/:n q)) (:/:d q)))
; .Section "Inverse 1/"
; (1/ x) vaut 1/x:
(defun :N:1/ (n) (Qx 1 n))

(defun :Z:1/ (n) (Qx -1 (Nx (:Z:n n))))

(defun :/:1/ (q)
    (if (< (:/:n q) 0)
        (Qx (0- (:/:d q)) (abs (:/:n q)))
        (Qx (:/:d q) (:/:n q))))
; .Section "La Comparaison <?>"
; (<?> x y) renvoie 1 ssi x>y, 0 ssi x=y et -1 ssi x<y:
(defun :N:<?> (x y)
    (selectq (type-of y)
      (fix 1)
      (:N (#:N:<?> (:N:n x) (:N:n y)))
      (:Z 1)
      (:/ (0- (:Q?Z y x)))
      (T (0- (<?> y x)))))

(defun :Z:<?> (x y)
    (selectq (type-of y)
      (fix -1)
      (:N -1)
      (:Z (#:N:<?> (:Z:n y) (:Z:n x)))
      (:/ (0- (:Q?Z y x)))
      (T (0- (<?> y x)))))

(defun :/:<?> (x y)
    (selectq (type-of y)
      (:/ (<?> (* (:/:n x) (:/:d y)) (* (:/:n y) (:/:d x))))
      (T (if (integerp y)
             (:Q?Z x y)
             (0- (<?> y x))))))

(defun :Q?Z (q z) (<?> (:/:n q) (* z (:/:d q))))
; .Section "Addition"
; (+ x y) calcule la somme x+y.
(defun :N:+ (x y)
    (selectq (type-of y)
      (fix  (if (ge y 0) 
                 (:Nx (#:N:+ (:N:n x) y))
                 (Nx (#:N:- (:N:n x) (abs y)))))
      (:N (:Nx (#:N:+ (:N:n x) (:N:n y))))
      (:Z (:C-C (:N:n x) (:Z:n y)))
      (:/ (:Q+Z y x))
      (T (+ y x))))

(defun :Z:+ (x y)
    (selectq (type-of y)
      (fix (if (ge y 0) 
                (Zx (#:N:- (:Z:n x) y))
                (:Zx (#:N:+ (:Z:n x) (abs y)))))
      (:N (:C-C (:N:n y) (:Z:n x)))
      (:Z (:Zx (#:N:+ (:Z:n x) (:Z:n y))))
      (:/ (:Q+Z y x))
      (T (+ y x))))

; Soustraction binaire:
(defun :C-C (x y)
    (selectq (#:N:<?> x y)
      (1 (Nx (#:N:- x y)))
      (0 0)
      (-1 (Zx (#:N:- y x)))))

(defun :/:+ (x y)
    (selectq (type-of y)
      (:/ (if (eq (:/:d x) (:/:d y))
              (Qx (+ (:/:n x) (:/:n y)) (:/:d x))
              (Qx (+ (* (:/:n x) (:/:d y)) (* (:/:d x) (:/:n y)))
                  (* (:/:d x) (:/:d y)))))
      (T (if (integerp y)
             (:Q+Z x y)
             (+ y x)))))

(defun :Q+Z (q z) (Qx (+ (:/:n q) (* (:/:d q) z)) (:/:d q)))
; .Section "La multiplication"
; (* x y) vaut le produit x*y:
(defun :N:* (x y)
    (selectq (type-of y)
      (fix (if (ge y 0) 
               (Nx (#:N:* (:N:n x) y))
               (:Zx (#:N:* (:N:n x) (abs y)))))
      (:N (:Nx (#:N:* (:N:n x) (:N:n y))))
      (:Z (:Zx (#:N:* (:N:n x) (:Z:n y))))
      (:/ (:Q*Z y x))
      (T (* y x))))

(defun :Z:* (x y)
    (selectq (type-of y)
      (fix (if (ge y 0) 
               (Zx (#:N:* (:Z:n x) y))
               (:Nx (#:N:* (:Z:n x) (abs y)))))
      (:N (:Zx (#:N:* (:Z:n x) (:N:n y))))
      (:Z (:Nx (#:N:* (:Z:n x) (:Z:n y))))
      (:/ (:Q*Z y x))
      (T (* y x))))

(defun :/:* (x y)
    (selectq (type-of y)
      (:/ (Qx (* (:/:n x) (:/:n y))
              (* (:/:d x) (:/:d y))))
      (T (if (integerp y)
             (:Q*Z x y)
             (* y x)))))

(defun :Q*Z (q r) (Qx (* (:/:n q) r) (:/:d q)))
; .Section "Division entiere"
; (quomod x y) renvoie le quotient entier q de x par y, et affecte
; le reste r dans #:ex:mod. Mathe'matiquement, q et r sont de'finis
; par x=q*y+r avec q entier relatif et r re'el, 0<=r<abs(y).
(defun :N:quomod (x y)
    (selectq (type-of y)
      (fix (selectq (<?> y 0)
            (1 (CquoC (:N:n x) y))
            (0 (#:R:error 'quomod 'RDIV0 (list 'quomod x y)))
            (-1 (Cquo-C (:N:n x) (abs y)))))
      (:N (CquoC (:N:n x) (:N:n y)))
      (:Z (Cquo-C (:N:n x) (:Z:n y)))
      (:/ (quomod (:N:* x (:/:d y)) (:/:n y)))
      (T (truncate (:N:* x (1/ y))))))

(defun :Z:quomod (x y)
    (selectq (type-of y)
      (fix (selectq (<?> y 0)
            (1 (-CquoC (:Z:n x) y))
            (0 (#:R:error 'quomod 'RDIV0 (list 'quomod x y)))
            (-1 (-Cquo-C (:Z:n x) (abs y)))))
      (:N (-CquoC (:Z:n x) (:N:n y)))
      (:Z (-Cquo-C (:Z:n x) (:Z:n y)))
      (:/ (quomod (:Z:* x (:/:d y)) (:/:n y)))
      (T (truncate (:Z:* x (1/ y))))))

; n=dq+r 0<=r<d
(defun CquoC (n d) 
    (setq n (Nx (#:N:quomod n d))
          #:ex:mod (Nx #:ex:mod))
    n)

; n=dq+r => -n=d*(-q-1)+d-r  pour d>1
(defun -CquoC (n d)
    (if (eq d 1)
        (setq #:ex:mod 0 n (Zx n))
        (setq n (Zx (#:N:quomod n d)))
        (unless (eq 0 #:ex:mod)
                (setq n (- n 1) #:ex:mod (Nx (#:N:- d #:ex:mod)))))
    n)

; n=dq+r => n=-d*-q+r
(defun Cquo-C (n d) (0- (CquoC n d)))

; n=dq+r => -n=-d*(q+1)+d-r
(defun -Cquo-C (n d)
    (setq n (Nx (#:N:quomod n d)))
    (unless (eq 0 #:ex:mod)
            (setq n (+ n 1) #:ex:mod (Nx (#:N:- d #:ex:mod))))
    n)
; .Section "Ope'rations avec les fixp Lisp"
(package 'fix)

(defun :+ (x y) 
    (if (fixp y)
        (if (ge x 0)
            (if (ge y 0) (Nx (#:N:+ x y)) (- x (abs y)))
            (if (ge y 0) (- y (abs x)) (Zx (#:N:+ (abs x) (abs y)))))
        (+ y x)))

(defun :- (x y) (+ (0- y) x))

(defun :* (x y)
    (if (fixp y) 
        (if (ge x 0)
            (if (ge y 0) (Nx (#:N:* x y)) (Zx (#:N:* x (abs y))))
            (if (ge y 0) (Zx (#:N:* (abs x) y)) (Nx (#:N:* (abs x) (abs y)))))
        (selectq x
          (0 (if (eq 0 (denominator y)) (* y x) 0))
          (1 y)
          (T (* y x)))))

(defun :1/ (n) (if (ge n 0) (Qx 1 n) (Qx -1 (0- n))))

(defun :/ (n d) (* (1/ d) n))

(defun :quomod (x y)
    (selectq (<?> x 0)
      (1 (selectq (type-of y)
             (#:R:Q:N (setq #:ex:mod x) 0)
             (#:R:Q:Z (setq #:ex:mod x) 0)
             (fix (if (eq y 0)
                      (#:R:error 'quomod 'RDIV0 (list 'quomod x y))
                      (quomod x y)))
             (T (#:R:quomod x y))))
      (0 (if (eq y 0) 
             (#:R:error 'quomod 'RDIV0 (list 'quomod x y))
             (setq #:ex:mod 0) 0))
      (-1 (let ((q (:quomod (sub 0 x) y)))
               (cond ((eq #:ex:mod 0) (- q))
                     ((> y 0) (setq #:ex:mod (- y #:ex:mod)) (- -1 q))
                     (T (setq #:ex:mod (- #:ex:mod y)) (- 1 q)))))))
; .Section "Ope'rations avec les float Lisp"
(package 'float)

(defvar :b 32760)

(defvar :fb (float :b))

(defvar :-fb (- :fb))

(defun :quomod (f1 f2)
    (setq f2 (float f2))
    (let ((q (:truncate (fdiv f1 f2))))
         (setq #:ex:mod (fsub f1 (fmul f1 (float q))))
         q))

(defun :truncate (f)
    (if (< f 0) 
        (- (:truncate (- f)))
        (ftrunc f)))

(defun ftrunc (f)
    (if (< :-fb f :fb)
        (fix f)
        (lets ((f1 (fdiv f :fb)) (z1 (ftrunc f1)) (f0 (- f (* z1 :fb)))) 
              (+ (* z1 :b) (ftrunc f0)))))
; .Section "Ecriture des rationels"
(package '#:R:Q)

(defun :N:prin (q) (#:N:prin (:N:n q)) q)

(defun :Z:prin (q)  (princn #/-) (#:N:prin (:Z:n q)) q)


(defun :/:prin (q)
    (cond ((= 0 (:/:d q)) (prin "1/0"))
          ((integerp q) (prin (:/:n q)))
          ((let ((p (precision)) (n (:/:n q)) (d (:/:d q)))
                (selectq (type-of p)
                   (fix (ecrit-fc n d (if (= 0 p) 1 p) (abs p)))
                   (float (if (> (setq p (fix p)) 0) 
                              (ecrit-10 n d (obase) p)
                              (ecrit-fc n d 0 (- p))))
                   (T (prin (:/:n q)) (princn #//) (prin (:/:d q))))))))

(defun division- (n d)
    (if (< n d)
        (setq #:ex:mod n n 0)
        (setq #:ex:mod (- n d) n 1))
    n)
; Produit l'e'criture de p termes de l'e'criture en fraction continue
; normale du type (z) (1) (n) suivant le signe de z.
(defun ecrit-fc (n d z p)
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
                    (ecrit-10 n d (obase) 1) 
                    (prin (:/:n q)) (princn #//) (prin (:/:d q)))))
    (prin "/"))


           

; Ecrire n/d en base b avec p chiffres apre`s la virgule:
(defun ecrit-10 (n d b p)
  (let (gcd)
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
            (when (< (decr p) 1) (prin ".") (setq n gcd))))) )

; .Section "L'algorithme d'Euclide"
; Calcule le pgcd des deux entiers relatifs n et r:
(defun pgcd (n r)
    (if (eq r 0) (abs n)
        (pgcd r (modulo n r))))

; Calcule le pgcd des nombres composant la liste l:
(defun gcd l
    (let ((pgcd 0) (n))
         (while l 
                (setq n (nextl l))
                (ifn (integerp n)
                     (#:R:error 'gcd 'RNOTZ (list 'gcd n l))
                     (setq pgcd (pgcd pgcd n))))
          pgcd))
; .Section "Fibonacci et Factorielle"
(package 'N)
; .SSection "Fibonnacci"
; F0 = 0, F1 = 1, Fn+2 = Fn+1 + Fn:
; .br
; Pour calculer Fib(n) en O(logn) appels re'cursifs, on part de l'identite':
; .br
; F(n+m) = F(m)*F(n+1) + F(m-1)*F(n), dont on utilise les cas particulier:
; .br
; F(2p) = F(p)*(2F(p+1) - F(p)), F(2p+1) = F(p+1)**2 + F(p)**2.
(defun fib (n)
    (let ((fn 0) (fn+1 1))
         (unless (and (integerp n) (>= n 0))
                 (#:R:error 'fib 'RNOTZ (list 'fib n)))
         (:fib n)
         (Nx fn)))

(defun :fib (n)
    (if (< n 24)
        (repeat n (psetq fn+1 (:+ fn fn+1) fn fn+1))
        (:fib (div n 2))
        (psetq fn+1 (:+ (:* fn fn) (:* fn+1 fn+1))
               fn   (:* fn (:- (:C*B fn+1 2) fn)))
        (when (oddp n)
              (psetq fn+1 (:+ fn fn+1) fn fn+1))))
; .SSection "Factorielle"
; 0!=1 , n=1! = n*n!
(defun fact (n)
    (unless (and (integerp n) (>= n 0))
            (#:R:error 'fact 'RNOTZ (list 'fact n)))
    (Nx (:fact 1 1 n)))

; Calcule g*(g+k)*(g+2k)*...*(g+tk) pour g+tk<=d
(defun :fact (g i d)
    (if (<  (- d g) (* 10 i))
        (let ((r 1)) (for (k g i d) (setq r (:* r k))) r)
        (:* (:fact g (* 2 i) d)
            (:fact (+ g i) (* 2 i) d))))
; .Section "Test de parite'"
(package '#:R:Q)
(defun even? (n)
    (selectq (type-of n)
      (fix (evenp n))
      (cons (even? (cdr n)))
      (:N (even? (cdr n)))
      (:Z (even? (:Z:n n)))
      (T (if (integerp n) (even? (numerator n))
             (#:R:error 'even?  'RNOTZ (list 'even? n))))))

(setq #:system:read-case-flag  #:backup:majuscules)
