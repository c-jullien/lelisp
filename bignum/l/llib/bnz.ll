
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

#|
.Chapitre II "L'arithme'tique Ge'ne'rique Le_Lisp"
Par convention, tous les types utilisant les ope'rations arithme'tiques
ge'ne'riques Le_Lisp sont des sous-types de R. Ceci nous permet d'utiliser
pour tous ces objets le comportement par de'faut de'fini dans gen.ll
|#

(unless (>= (version) 15.2)
        (error 'load 'erricf 'bnz))

(add-feature 'z)

(setq #:sys-package:colon '#:r:q)

;;.Section "Les macros locales"
(dmd incr1 (n) `(setq ,n (add1 ,n)))
(dmd decr1 (n) `(setq ,n (sub1 ,n)))

; La plus grande puissance de ibase inferieure a` Base:
(defvar :ikmax 1)
; La plus grande puissance de la base qui est un fix:
(defvar :ikmaxp 1)
; Contient la table des puissances de ibase jusqu'a k=:kmax
(defvar :ibase**k)
; La table de transcodage pour la semantique de lecture.
(defvar :rtt (makestring 256 255))

; La plus grande puissance de obase inferieure a` Base:
(defvar :okmax 1)
; La plus grande puissance de la base qui est un fix:
(defvar :okmaxp 1)
; Contient la table des puissances de obase jusqu'a k=:okmax
(defvar :obase**k)

; Tampons
(defvar :PrinTampon)
(defvar :StrgSize 4005); un multiple de :okmax+1
(defvar :StrgTampon (makestring :StrgSize #/0))
; Le tampon qui sert dans les soustractions, divisions et
; pour le prin:
(defvar Ntampon)
(defvar :fix)

(defvar :fdiv)

; La longueur de la somme est 2 en 16 bits et 1 en 32 bits:
(defvar :longueur-sommes)

(defun :boot ()
   (setq :PrinTampon (BnCreate 'n 4))
   (setq Ntampon (BnCreate '#:R:Q:N 4))
   (setq :fix (BnCreate 'N 2))
   (setq :fdiv (BnCreate ':N 1))
   (setq :longueur-sommes (add1 (div BN_WORD_SIZE BN_DIGIT_SIZE)))
   (setq :ibase**k (BnCreate '#:R:Q:N (+ BN_DIGIT_SIZE 1)))
   (setq :obase**k (BnCreate '#:R:Q:N (+ BN_DIGIT_SIZE 1))) )

; .Chapitre III "Les entiers relatifs Z."

#|
.Section "Structure Interne de Z"
L'ensemble Z des entiers relatif, comprend:
.br
Les fix LeLisp pour les entiers -2^15<z<2^15.
.br
Le type :Q:N, pour les entiers positifs z>2^15.
.br
Le type :Q:Z, pour les entiers ne'gatifs z<-2^15.
.Section "Tests de type"
L'ensemble de ces trois types characte`rise les objets Lisp pour lesquels
(integerp z) = z, leur comple'mentaire par (integerp r) = (). Cette remarque
ne sera plus vraie quand on aura fait une extention pour laquelle la fonction
ge'ne'rique integerp est e'tendue par (integerp e) = e. Nous ne nous priverons
pas de l'utiliser pour les entiers de Gauss, par exemple.
|#

(de :integerp (n) n)
; .Section "Recopie"
(de Zcopy (n typ)
    (lets ((nl (BnNumDigits n 0 (BnGetSize n)))
           (nc (BnCreate typ nl)))
          (BnAssign nc 0 n 0 nl)
          nc))

(de BzCopy (z) (Zcopy z (BnGetType z)))

; .Section "Changements de Signe"

; La me`me, e'tendue aux fixp:
(de 0-N (n)
    (selectq (type-of n)
      (fix (0- n))
      (:N (BnSetType n ':Z) n)
      (:Z (BnSetType n ':N) n)
      (T (send '0- n))))

(de BzNegate (z) (0-N (BzCopy z)))

#|
Le fait qu'on ne puisse partager le contenu de deux vecteurs type's entre
deux objets diffe'rents oblige a` des copies bien douloureuses pour la
ne'gation des nombres.
.Section "Valeur absolue abs"
|#
(de :N:abs (n) n)

(de :Z:abs (z) (Zcopy z ':N))
(de BzAbs (z) (Zcopy z ':N))

; .Section "Oppose' 0-"
; (0- x) vaut -x:
(de :Z:0- (z) (Zcopy z ':N))

(de :N:0- (n)  (Zcopy n ':Z)))

; Signe
(defun BzSign (z)
   (cond
      ((neq (BnIsZero z 0 (BnGetSize z)) 0) 0)
      ((eq (BnGetType z) '#:R:Q:N) 1)
      (t -1) ))

; .Section "Partie entie`re truncate"
; Pour Z et N:
(de :truncate (z) z)
; .Section "Convertion flottante float"
(de Zfloat (bn)
    (let ((s (catenate (string (explode bn)) ".")))
         (stratom (slen s) s ())))

(de :N:float (r) (Zfloat r))

(de :Z:float (r) (Zfloat r))

; .Section "La Comparaison <?>"
; (Z?Z n m nl ml) retourne -1,0,1 suivant le signe de N-M = Val<n>-Val<m>.
(de Z?Z (n m nl ml)
    (setq ml (<?> nl ml))
    (while (and (eq ml 0) (ge (decr1 nl) 0))
                (setq ml (BnCompareDigits n nl m nl)))
    ml)

; (<?> x y) renvoie 1 ssi x>y, 0 ssi x=y et -1 ssi x<y:
(de :N:<?> (n y)
    (selectq (type-of y)
      (fix (if (and (eq 1 (BnNumDigits n 0 (BnGetSize n)))
                    (neq (BnDoesDigitFitInWord n 0) 0))
               (progn
                   (setq n (BnGetDigit n 0))
                   (<?> n y))
               1))
      (:N (Z?Z n y (BnNumDigits n 0 (BnGetSize n))
                   (BnNumDigits y 0 (BnGetSize y))))
      (:Z 1)
      (T (0- (<?> y n)))))

(de :Z:<?> (z y)
    (selectq (type-of y)
      (fix (if (and (eq 1 (BnNumDigits z 0 (BnGetSize z)))
                    (neq (BnDoesDigitFitInWord z 0) 0))
               (progn
                  (setq z (BnGetDigit z 0))
                  (<?> (sub 0 z) y))
               -1))
      (:N -1)
      (:Z (Z?Z y z (BnNumDigits y 0 (BnGetSize y))
                   (BnNumDigits z 0 (BnGetSize z))))
      (T (0- (<?> y z)))))

(de BzCompare (y z) (<?> y z))

; .Section "Addition sur Z"
(de Z+Z (n nl m ml s typ)
    (cond ((gt nl ml)
           (setq s (BnCreate typ nl))
           (BnAssign s 0 n 0 nl)
           (if (eq 0 (BnAdd s 0 nl m 0 ml 0))
               s
               ; overflow
               (setq n (BnCreate typ (add1 nl)))
               (BnAssign n 0 s 0 nl)
               (BnSetDigit n nl 1)
               n))
           ((eqn nl ml)
            (setq s (BnCreate typ (setq nl (add1 nl))))
            (BnAssign s 0 n 0 ml)
            (BnAdd s 0 nl m 0 ml 0)
            s)
           (T (Z+Z m ml n nl s typ))))

(de Z-Z (n nl m ml s typ)
    (cond ((gt nl ml)
           (setq s (BnCreate typ nl))
           (BnAssign s 0 n 0 nl)
           (BnSubtract s 0 nl m 0 ml 1)
           ; pas d'underflow, car nl > ml >= 1
           s)
          ((eqn nl ml)
           (setq s (BnCreate typ nl))
           (BnAssign s 0 n 0 nl)
           (if (eq 1 (BnSubtract s 0 nl m 0 ml 1))
               ; n-m > 0 : on regarde une coertion e'ventuelle
               (BnConvert s 0 nl)
               ; underflow
               (if (and (eq 1 (BnNumDigits s 0 nl))
                        (neq (BnIsDigitZero s 0) 0))
                   ; n=m
                   0
                   ; n<m
                   (BnComplement s 0 nl)
                   (BnAddCarry s 0 nl 1)
                   (BnSetType s (if (eq typ ':N) ':Z ':N))
                   (BnConvert s 0 nl))))
           (T (Z-Z m ml n nl s (if (eq typ ':N) ':Z ':N)))))

(de :N:+ (n y)
    (selectq (type-of y)
      (fix (cond ((ge y 0)
                  (BnSetDigit :fix 0 y)
                  (Z+Z n (BnNumDigits n 0 (BnGetSize n)) :fix 1 0 ':N))
                 (T (BnSetDigit :fix 0 (sub 0 y))
                    (Z-Z n (BnNumDigits n 0 (BnGetSize n)) :fix 1 0 ':N))))
      (:N  (Z+Z n (BnNumDigits n 0 (BnGetSize n))
                y (BnNumDigits y 0 (BnGetSize y))
                0 ':N))
      (:Z  (Z-Z n (BnNumDigits n 0 (BnGetSize n))
                y (BnNumDigits y 0 (BnGetSize y))
                0 ':N))
      (t   (+ y n))))

(de :N:- (n y)
    (selectq (type-of y)
      (fix (cond ((ge y 0)
                  (BnSetDigit :fix 0 y)
                  (Z-Z n (BnNumDigits n 0 (BnGetSize n)) :fix 1 0 ':N))
                 (T (BnSetDigit :fix 0 (sub 0 y))
                    (Z+Z n (BnNumDigits n 0 (BnGetSize n)) :fix 1 0 ':N))))
      (:N  (Z-Z n (BnNumDigits n 0 (BnGetSize n))
                y (BnNumDigits y 0 (BnGetSize y)) 0 ':N))
      (:Z  (Z+Z n (BnNumDigits n 0 (BnGetSize n))
                y (BnNumDigits y 0 (BnGetSize y)) 0 ':N))
      (t   (+ (0- y) n))))

(de :Z:+ (z y)
    (selectq (type-of y)
      (fix (cond ((ge y 0)
                  (BnSetDigit :fix 0 y)
                  (Z-Z z (BnNumDigits z 0 (BnGetSize z)) :fix 1 0 ':Z))
                 (T (BnSetDigit :fix 0 (sub 0 y))
                    (Z+Z z (BnNumDigits z 0 (BnGetSize z)) :fix 1 0 ':Z))))
      (:N (Z-Z z (BnNumDigits z 0 (BnGetSize z))
               y (BnNumDigits y 0 (BnGetSize y)) 0 ':Z))
      (:Z (Z+Z z (BnNumDigits z 0 (BnGetSize z))
               y (BnNumDigits y 0 (BnGetSize y)) 0 ':Z))
      (T (+ y z))))

(de BzAdd (y z) (+ y z))

(de :Z:- (z y)
    (selectq (type-of y)
      (fix (cond ((ge y 0)
                  (BnSetDigit :fix 0 y)
                  (Z+Z z (BnNumDigits z 0 (BnGetSize z)) :fix 1 0 ':Z))
                 (T (BnSetDigit :fix 0 (sub 0 y))
                    (Z-Z z (BnNumDigits z 0 (BnGetSize z)) :fix 1 0 ':Z))))
      (:N (Z+Z z (BnNumDigits z 0 (BnGetSize z))
               y (BnNumDigits y 0 (BnGetSize y)) 0 ':Z))
      (:Z (Z-Z z (BnNumDigits z 0 (BnGetSize z))
               y (BnNumDigits y 0 (BnGetSize y)) 0 ':Z))
      (T (+ (0- y) z))))

(de BzSubtract (y z) (- y z))

(de #:fix:+ (x y)
    (cond ((ge x 0)
           (BnSetDigit :fix 0 x)
           (selectq (type-of y)
              (fix (setq x (BnCreate ':N :longueur-sommes))
                   (BnSetDigit x 0 y)  ; y>0
                   (BnAdd x 0 :longueur-sommes :fix 0 1 0)
                   x)
              (:N (Z+Z y (BnNumDigits y 0 (BnGetSize y)) :fix 1 0 ':N))
              (:Z (Z-Z y (BnNumDigits y 0 (BnGetSize y)) :fix 1 0 ':Z))
              (t (+ y x))))
          (T     ;  x < 0
           (BnSetDigit :fix 0 (sub 0 x))
           (selectq (type-of y)
              (fix (setq x (BnCreate ':Z :longueur-sommes))
                   (BnSetDigit x 0 (sub 0 y))  ; y<0
                   (BnAdd x 0 :longueur-sommes :fix 0 1 0)
                   x)
              (:N (Z-Z y (BnNumDigits y 0 (BnGetSize y)) :fix 1 0 ':N))
              (:Z (Z+Z y (BnNumDigits y 0 (BnGetSize y)) :fix 1 0 ':Z))
              (t (+ y x))))))

(de #:fix:- (x y)
    (cond ((ge x 0)
           (BnSetDigit :fix 0 x)
           (selectq (type-of y)
              (fix (setq x (BnCreate ':N :longueur-sommes))
                   (BnSetDigit x 0 (sub 0 y))  ; y<0
                   (BnAdd x 0 :longueur-sommes :fix 0 1 0)
                   x)
              (:N (Z-Z y (BnNumDigits y 0 (BnGetSize y)) :fix 1 0 ':Z))
              (:Z (Z+Z y (BnNumDigits y 0 (BnGetSize y)) :fix 1 0 ':N))
              (t (+ (0- y) x))))
          (T     ;  x < 0
           (BnSetDigit :fix 0 (sub 0 x))
           (selectq (type-of y)
              (fix (setq x (BnCreate ':Z :longueur-sommes))
                   (BnSetDigit x 0 y)   ; y>0
                   (BnAdd x 0 :longueur-sommes :fix 0 1 0)
                   x)
              (:N (Z+Z y (BnNumDigits y 0 (BnGetSize y)) :fix 1 0 ':Z))
              (:Z (Z-Z y (BnNumDigits y 0 (BnGetSize y)) :fix 1 0 ':N))
              (t (+ y x))))))

; .Section "La multiplication"
(de Z*Z (n nl m ml p pl typ)
    (setq pl (add nl ml)            ; Longueur de p=n*m.
          p  (BnCreate typ pl))        ; Le produit p=n*m
          ; On peut supposer n plus long que m, soit nl>=ml:
    (when (gt ml nl) (psetq n m m n nl ml ml nl))
    ; On fait le produit
    (BnMultiply p 0 pl n 0 nl m 0 ml)
    ; On renvoie le resultat:
    p))

; (* x y) vaut le produit x*y:
(de :N:* (n y)
    (selectq (type-of y)
      (fix (cond ((gt y 1)
                  (BnSetDigit :fix 0 y)
                  (Z*Z n (BnNumDigits n 0 (BnGetSize n)) :fix 1 0 0 ':N))
                 ((gt 0 y)
                  (BnSetDigit :fix 0 (sub 0 y))
                  (Z*Z n (BnNumDigits n 0 (BnGetSize n)) :fix 1 0 0 ':Z))
                 (t (if (eq 0 y) 0 n))))
      (:N (Z*Z  n (BnNumDigits n 0 (BnGetSize n))
                y (BnNumDigits y 0 (BnGetSize y)) 0 0 ':N))
      (:Z (Z*Z  n (BnNumDigits n 0 (BnGetSize n))
                y (BnNumDigits y 0 (BnGetSize y)) 0 0 ':Z))
      (T (* y n))))

(de :Z:* (n y)
    (selectq (type-of y)
      (fix (cond ((gt y 1)
                  (BnSetDigit :fix 0 y)
                  (Z*Z n (BnNumDigits n 0 (BnGetSize n)) :fix 1 0 0 ':Z))
                 ((gt 0 y)
                  (BnSetDigit :fix 0 (sub 0 y))
                  (Z*Z n (BnNumDigits n 0 (BnGetSize n)) :fix 1 0 0 ':N))
                 (t (if (eq 0 y) 0 n))))
      (:N (Z*Z  n (BnNumDigits n 0 (BnGetSize n))
                y (BnNumDigits y 0 (BnGetSize y)) 0 0 ':Z))
      (:Z (Z*Z  n (BnNumDigits n 0 (BnGetSize n))
                y (BnNumDigits y 0 (BnGetSize y)) 0 0 ':N))
      (T (* y n))))

(de BzMultiply (y z) (* y z))

(de #:fix:* (x y)
    (cond ((gt x 1)
           (BnSetDigit :fix 0 x)
           (selectq (type-of y)
              (fix  (cond ((ge y 0)
                           (setq x (BnCreate ':N 2))
                           (BnSetDigit :fix 1 y))
                          (T
                           (setq x (BnCreate ':Z 2))
                           (BnSetDigit :fix 1 (sub 0 y))))
                    (BnMultiplyDigit x 0 2 :fix 0 1 :fix 1)
                    x)
              (:N (Z*Z y (BnNumDigits y 0 (BnGetSize y)) :fix 1 0 0 ':N))
              (:Z (Z*Z y (BnNumDigits y 0 (BnGetSize y)) :fix 1 0 0 ':Z))
              (t (* y x))))
          ((gt 0 x)
           (BnSetDigit :fix 0 (sub 0 x))
           (selectq (type-of y)
              (fix  (cond ((ge y 0)
                           (setq x (BnCreate ':Z 2))
                           (BnSetDigit :fix 1 y))
                          (T
                           (setq x (BnCreate ':N 2))
                           (BnSetDigit :fix 1 (sub 0 y))))
                    (BnMultiplyDigit x 0 2 :fix 0 1 :fix 1)
                    x)
              (:N (Z*Z y (BnNumDigits y 0 (BnGetSize y)) :fix 1 0 0 ':Z))
              (:Z (Z*Z y (BnNumDigits y 0 (BnGetSize y)) :fix 1 0 0 ':N))
              (t (* y x))))
            (t (if (eq 0 x) 0 y))))
;;;;;;;;;;;;;;;;;;;;;;;;;MODIF;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; .Section "Les tampons"

; Entre les nl chiffres de n dans le tampon, suivis de nz zeros:
(de EntreTampon (n nl nz)
    ; Verifie que la longueur du tampon est  superieure a nl+nz,
    (unless (ge (BnGetSize Ntampon) (add nl nz))
            ; sinon, augmente la longueur du tampon:
            (setq Ntampon  (BnCreate '#:R:Q:N (add nl nz))))
    (BnAssign Ntampon 0 n 0 nl)       ; Recopie n dans le tampon, et
    ; remet a` 0 les chiffres de poids forts.
    (setq nz (sub (BnGetSize Ntampon) nl))
    (when (gt nz 0)
          (BnSetToZero Ntampon nl nz)))

; Forme un entier avec les chiffres de n[nd..nd+nl-1] et coerce si possible.
(de BnConvert (n nd nl)
    ; mise a` jour du nombre de chiffres de n
    (setq nl (BnNumDigits n nd nl))
    (if (and (eqn nl 1) (neq (BnDoesDigitFitInWord n nd) 0))
        ; n est un fix cache'
        (progn
           (if (equal (type-of n) ':N)
               (BnGetDigit n nd)
               (sub 0 (BnGetDigit n nd))))
        ; n est un bignum
        (let ((nn (BnCreate (BnGetType n) nl)))
             (BnAssign nn 0 n nd nl)
             nn)))

; .Section "Division entiere"

; Retourne le quotient de n par d avec transit par Ntampon et mise a`
; jour de #:ex:mod. La philosophie est la suivante : on recopie n dans
; Ntampon et on le padde avec un nombre suffisant nz de 0. On divise Ntampon
; par d et on re'cupe`re le reste dans Ntampon[0..dl-1] et le quotient
; dans Ntampon[dl..nl+nz-1]. Ceci est valable dans tous les cas.
(de :N:NquomodN (n d)
    (slet ((nl (BnNumDigits n 0 (BnGetSize n)))
           (dl (BnNumDigits d 0 (BnGetSize d)))
           (nz (add1 (sub dl nl)))); nz est le nombre de ze'ros dans Ntampon
          (selectq (BnCompare n 0 nl d 0 dl)
             (-1; n < d
                (setq #:ex:mod (BnConvert n 0 nl))
                0)
             ( 0; n = d
                (setq #:ex:mod 0)
                1)
             ( 1; n > d
                (if (eqn (BnCompareDigits n (sub1 nl) d (sub1 dl)) -1)
                    (progn
                       (setq nz (max 0 nz))
                       (EntreTampon n nl nz)
                       (BnDivide Ntampon 0 nl d 0 dl))
                    (setq nz (max 1 nz))
                    (EntreTampon n nl nz)
                    (BnDivide Ntampon 0 (add1 nl) d 0 dl))
                ; Le tampon contient le modulo sur 0...dl-1
                (setq #:ex:mod (BnConvert Ntampon 0 dl))
                ; et le quotient sur dl...nl+nz-1
                (BnConvert Ntampon dl (sub (add nl nz) dl))))))

; (quomod x y) renvoie le quotient entier q de x par y, et affecte
; le reste r dans #:ex:mod. Mathe'matiquement, q et r sont de'finis
; par x=q*y+r avec q entier relatif et r re'el, 0<=r<abs(y).
(de :N:quomod (n y)
    (selectq (type-of y)
      (fix (selectq (<?> y 0)
            (1 (BnSetDigit :fdiv 0 y)
               (:N:NquomodN n :fdiv))
            (0 (#:R:error 'quomod 'RDIV0 (list 'quomod n y)))
            (-1 (BnSetDigit :fdiv 0 (sub 0 y))
                (0-N (:N:NquomodN n :fdiv)))))
      (:N  (:N:NquomodN n y))
      (:Z  (0-N (:N:NquomodN n y)))
      (T (#:R:quomod n y))))


(de :Z:quomod (z y)
    (selectq (type-of y)
      (fix (selectq (<?> y 0)
            (1  (BnSetDigit :fdiv 0 y)
                (-CquoC z :fdiv))
            (0 (#:R:error 'quomod 'RDIV0 (list 'quomod z y)))
            (-1  (BnSetDigit :fdiv 0 (sub 0 y))
                 (-Cquo-C z :fdiv))))
      (:N (-CquoC z y))
      (:Z (-Cquo-C z y))
      (t (#:R:quomod z y))))

; Revoir et changer : patch du 25/09/87
; n=dq+r => -n=d*(-q-1)+d-r  pour r>0
(de -CquoC (-n d); au de'part -n est ne'gatif
    (setq -n (:N:NquomodN (0- -n) d)); 0- -n > 0
    (if (= 0 #:ex:mod)
        (0-N -n)
        (setq #:ex:mod (- d #:ex:mod))
        (0-N (+ -n 1))))

; n=dq+r => -n=-d*(q+1)+d-r
(de -Cquo-C (-n -d); au de'part -n et -d sont ne'gatifs
    (setq -n (:N:NquomodN (0- -n) -d))
    (if (= 0 #:ex:mod)
        -n
        (setq #:ex:mod (- (abs -d) #:ex:mod))
        (+ -n 1)))

(de BzDiv (y z) (quotient y z))
(de BzDivide (y z) (quotient y z))
(de BzMod (y z) (quotient y z) #:ex:mod))

; .Section "Ecriture des grands entiers"

; .SSection "Manipulation de la base de sortie obase"
; Construit la table des puissances de obase, affecte :okmax et :okmaxp
(de makeObase**k (ob)
    (let ( (k 0) (kp 0) )
         (BnSetToZero :obase**k 0 (+ BN_DIGIT_SIZE 1))
         (BnSetDigit :obase**k 0 ob)
         (while (neq (BnIsDigitZero :obase**k (incr k)) 0)
                (BnMultiplyDigit :obase**k k 2 :obase**k (sub1 k) 1
                                 :obase**k 0))
         (setq k (sub k 2))
         (while (and (le kp k)
                     (neq (BnDoesDigitFitInWord :obase**k kp) 0))
                (setq kp (add1 kp)))
         (setq :okmaxp (sub1 kp))
         (setq :okmax k)))

(defun Nprin (n)
   (let ( (base (obase)) )
      (unless (eq base (BnGetDigit :obase**k 0))
         (makeObase**k base) )
      (slet ((nl  (BnNumDigits n 0 (BnGetSize n)))
              (lBuf)
              (sf 0)
              (s :StrgTampon)
              (si 0) nq nr nrp sip
              (kmax+1 (add1 :okmax))
              (kmaxp+1 (add1 :okmaxp))
              ; taille maximale du buffer d'impression
              (SizeBuf (mul (div :StrgSize kmax+1) kmax+1)))
         (setq nq (add1 nl))
         ; mise a` jour du tampon
         (when (gt (add nq 3) (BnGetSize :PrinTampon))
               (setq :PrinTampon (BnCreate 'N (add nq 3))))
         ; recopie de n
         (BnAssign :PrinTampon 0 n 0 nl)
         (BnSetToZero :PrinTampon nl 3)
         (setq nrp (add 2 (setq nr nq)))
         (while (gt nq 1)
            ; on re'cupe`re un chiffre<:obase**k[:okmax] dans :PrinTampon[nr]
            (BnDivideDigit :PrinTampon 0 :PrinTampon nr :PrinTampon 0 nq
                           :obase**k :okmax)
            (setq sip si)
            (while (eq (BnIsDigitZero :PrinTampon nr) 0)
               ; on re'cupe`re un fix dans :PrinTampon[nrp]
               (BnDivideDigit :PrinTampon nr :PrinTampon nrp :PrinTampon nr 2
                           :obase**k :okmaxp )
               ; on l'imprime
               (C2string (BnGetDigit :PrinTampon nrp) s sip base)
               ; on met a` jour l'adresse dans la chaine
               (setq sip (add sip kmaxp+1)) )
            ; et voici pour Paul...
            (when (ge (setq si (add si kmax+1)) SizeBuf)
                  (newl lBuf s)
                  (setq s (makestring SizeBuf #/0) si 0))
            (when (neq (BnIsDigitZero :PrinTampon (sub nq 2)) 0)
               (setq nq (sub1 nq)) ))
         ; s a au plus si caracte`res, on n'imprime pas les ze'ros de te^te
         (while (and (gt si 0) (eq (sref s (setq si (sub1 si))) #/0)))
         (when (and (eq si 0) (eq (sref s si) #/0) lBuf)
               (setq s (nextl lBuf) si SizeBuf)
               (while (and (gt si 0) (eq (sref s (setq si (sub1 si))) #/0))))
         ; on imprime tous les chiffres
         (while s
                (setq sf si)
                (while (ge si 0)
                       (princn (sref s si))
                       (setq si (sub1 si)))
                (setq s (nextl lBuf))
                (setq si (sub1 SizeBuf)))
         ; remise a` ze'ro de :StrgTampon
         ; sf contient l'adresse du chiffre de te^te de :StrgTampon
         (fillstring :StrgTampon 0 #/0 (add1 sf))
         ())))

; table de transcodage des caracte`res
(defvar :fixtocn "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ")

; met dans la chaine s, a` partir de la place si, les caracte`res
; repre'sentant le fix 'fix dans la base 'base
(defun C2string (fix s si base)
   (while (neq fix 0)
      (sset s si (sref :fixtocn (rem fix base)))
      (setq si (add1 si) fix (div fix base)) )
   si )

(de :N:prin (n)
    (when #:system:print-for-read
        (let ((#:system:print-for-read ()))
             (prin "#{")))
    (Nprin n)
    (when #:system:print-for-read
          (princn #/})))

(de :Z:prin (n)
    (when #:system:print-for-read
        (let ((#:system:print-for-read ()))
             (prin "#{")))
    (unless (and (eq 1 (BnNumDigits n 0 (BnGetSize n)))
                 (neq (BnIsDigitZero n 0) 0))
            (princn #/-))
    (Nprin n)
    (when #:system:print-for-read
          (princn #/})))

; .SSection "Manipulation de la base d'entre'e obase"
; Construit la table des puissances de obase, affecte :kmax et :kmaxp
(de makeIbase**k (ib)
    (let ( (k 0) (kp 0) (i 255) )
         (while (ge i 0) (sset :rtt i 255) (setq i (sub1 i)))
         (setq i 0)
         (while (and (lt i 10) (lt i ib))
            (sset :rtt (add #/0 i) i)
            (setq i (add1 i)) )
         (while (lt i ib)
            (sset :rtt (add #/a (sub i 10)) i)
            (sset :rtt (add #/A (sub i 10)) i)
            (setq i (add1 i)) )
         (BnSetToZero :ibase**k 0 (+ BN_DIGIT_SIZE 1))
         (BnSetDigit :ibase**k 0 ib)
         (while (neq (BnIsDigitZero :ibase**k (incr k)) 0)
                (BnMultiplyDigit :ibase**k k 2 :ibase**k (sub1 k) 1
                                 :ibase**k 0))
         (while (and (le kp k)
                     (neq (BnDoesDigitFitInWord :ibase**k kp) 0))
                (setq kp (add1 kp)))
         (setq :ikmaxp (sub1 kp))
         (setq :ikmax (sub k 2))))

(defun #:sharp:|{| ()
   (let ( (b (ibase)) )
      (unless (eq b (BnGetDigit :ibase**k 0))
         (makeIbase**k b) )
      (let ( (i 0) c n m j (size 1) hight
             (s :StrgTampon)
             (lbuf ()) (inpos 0) strgsize
             (kmax+1 (add1 :ikmax))
             (kmaxp+1 (add1 :ikmaxp))
             (sgn ()) )
         (setq strgsize (sub :StrgSize (rem :StrgSize kmax+1)))
         (while (eq (typecn (peekcn)) 'ecom) (readcn))
         (when (eq (peekcn) #/-) (setq sgn t) (readcn))
         (while (neq (setq c (readcn)) #/})
            (unless (eq (sref :rtt c) 255)
               (sset s inpos c)
               (setq i (add1 i) inpos (add1 inpos))
               (when (eq inpos strgsize)
                  (newl lbuf s)
                  (setq s (makestring strgsize #/0))
                  (setq inpos 0) )))
         (setq n (BnCreate 'n (add 2 (div i kmax+1))))
         (setq m (BnCreate 'n (add 2 (div i kmax+1))))
         (setq s (:ReverseBuf s lbuf inpos strgsize))
         (setq inpos (sub strgsize inpos))
         (:StringToDigit s inpos (setq j (rem i kmax+1)) n b)
         (BnSetDigit n 1 0)
         (setq inpos (add inpos j))
         (while (lt j i)
            (when (ge inpos strgsize)
               (when lbuf (setq s (nextl lbuf)))
               (setq inpos 0) )
            (:StringToDigit s inpos kmax+1 m b)
            (BnSetToZero m 1 size)
            (BnMultiplyDigit m 0 (add1 size) n 0 size :ibase**k :ikmax)
            (when (eq (BnIsDigitZero m size) 0) (setq size (add1 size)))
            (psetq m n n m)
            (setq j (add j kmax+1) inpos (add inpos kmax+1)) )
         (fillstring :StrgTampon 0 #/0 strgsize)
         (BnSetType n (if sgn '#:R:Q:Z '#:R:Q:N))
         (ncons n) )))

(defun :ReverseBuf (s l i n)
   (let ( (n-i (sub n i)) (ret ()) (sl l) )
      (bltstring s n-i s 0 i)
      (while l
         (bltstring s 0 (car l) i n-i)
         (newl ret s)
         (setq s (nextl l))
         (bltstring s n-i s 0 i) )
      (when sl (displace sl ret))
      s ))

(defun :StringToDigit (s sd sl n ibase)
   (let ( (accu 0) i (kmaxp+1 (add1 :ikmaxp)) )
      (repeat (setq i (rem sl kmaxp+1))
         (setq accu (add (mul accu ibase) (sref :rtt (sref s sd)))
               sd (add1 sd) ))
      (BnSetDigit n 0 accu)
      (while (lt i sl)
         (setq accu 0)
         (repeat kmaxp+1
            (setq accu (add (mul accu ibase) (sref :rtt (sref s sd)))
                  sd (add1 sd) ))
         (setq i (add i kmaxp+1))
         (BnAssign n 1 n 0 1)
         (BnSetDigit n 0 accu)
         (BnMultiplyDigit n 0 2 n 1 1 :ibase**k :ikmaxp) )
      n ))

; .Section "Ope'rations avec les fixp Lisp"
(de #:fix:quomod (x y)
    ;; x est un fix.
    (ifn (integerp y)
         (#:R:quomod x y)
         (if (and (eq 1 (BnNumDigits y 0 (BnGetSize y)))
                  (neq (BnDoesDigitFitInWord y 0) 0))
             (quomod x (BnGetDigit y 0))
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
                (-1 (let ((q (#:fix:quomod (sub 0 x) y)))
                         (cond ((eq #:ex:mod 0) (- q))
                               ((> y 0) (setq #:ex:mod (- y #:ex:mod))
                                        (- -1 q))
                               (T (setq #:ex:mod (- #:ex:mod y))
                                  (- 1 q)))))))))

; .Section "L'algorithme d'Euclide"
; Calcule le pgcd des nombres composant la liste l:
(de gcd l
    (let ((pgcd 0) (n))
         (while l
                (setq n (nextl l))
                (ifn (integerp n)
                     (#:R:error 'gcd 'RNOTZ (list 'gcd n l))
                     (setq pgcd (pgcd pgcd n))))
          pgcd))

(de pgcd (n m)
    (selectq (type-of n)
       (fix (#:fix:pgcd n m))
       (':N (:Z:pgcd n m))
       (':Z (:Z:pgcd n m))
       (T (error 'pgcd 'errnna n))))

; Pgcd avec au moins un bignum.
(de :Z:pgcd (n m)
    (selectq (type-of m)
       (fix (fixpgcd (abs m) n))
       (':N (:N:pgcd n m))
       (':Z (:N:pgcd n m))
       (T (error 'pgcd 'errnna m))))

; Pgcd avec un fix.
(de #:fix:pgcd (fix m)
    (selectq (type-of m)
       (fix (fixpgcdfix (abs fix) (abs m)))
       (':N (fixpgcd (abs fix) m))
       (':Z (fixpgcd (abs fix) m))
       (T (error 'pgcd 'errnna fix))))

; Pgcd de deux fix.
(de fixpgcdfix (n m)
    (if (eqn m 0)
        n
        (fixpgcdfix m (rem n m))))

; Pgcd d'un fix et d'un bignum.
(de fixpgcd (n m)
    (if (eqn n 0)
        m
        (fixpgcdfix (modulo m n) n)))

; Pgcd de deux bignums.
(de :N:pgcd (n m)
    (let ((gl 0) (nl 0) (ml 0))
         ; calcul des longueurs
         (setq nl (BnNumDigits n 0 (BnGetSize n))
               ml (BnNumDigits m 0 (BnGetSize m)))
         ; mise a` jour du tampon
         (setq gl (add 2 (add nl ml)))
         (when (lt (BnGetSize Ntampon) gl)
               (setq Ntampon (BnCreate '#:R:Q:N gl)))
         ; on s'arrange pour que n >= m
         (if (eqn (BnCompare n 0 nl m 0 ml) -1)
             (setq gl (BnGcd Ntampon 0 m 0 ml n 0 nl))
             (setq gl (BnGcd Ntampon 0 n 0 nl m 0 ml)))
         (BnConvert Ntampon 0 gl)))

(de :N:pgcd (n m)
    (let ((ndl 0) (nl 0) (ml 0))
         ; calcul des longueurs
         (setq nl (BnNumDigits n 0 (BnGetSize n))
               ml (BnNumDigits m 0 (BnGetSize m)))
         ; mise a` jour du tampon
         (setq ndl (add 2 (add nl ml)))
         (when (lt (BnGetSize Ntampon) ndl)
               (setq Ntampon (BnCreate '#:R:Q:N ndl)))
         ; on s'arrange pour que n >= m
         (if (eqn (BnCompare n 0 nl m 0 ml) -1)
             (setq ndl (BnGcd m 0 ml n 0 nl))
             (setq ndl (BnGcd n 0 nl m 0 ml)))
         (BnConvert Ntampon (car ndl) (cdr ndl))))

; Calcul de pgcd(n, m) dans Ntampon. On suppose size(Ntampon) > nl + ml + 1
; et n >= m.
; Au d'epart : Ntampon[0..ml-1]     = m[0..ml-1]
;              Ntampon[ml]          = 0
;              Ntampon[ml+1..ml+nl] = n[0..nl-1]
;              Ntampon[ml+nl+1]     = 0
; Retourne un cons forme' de l'index du premier chiffre de g et du nombre
; de chiffres du pgcd
(de BnGcd (n nd nl m md ml)
    (let ((gmd 0) (gml ml) (gmf (sub1 ml))
          (gnd (add1 ml)) (gnl nl) (gnf (add nl ml))
          (tmp 0))
         ; initialisation de Ntampon
         (BnAssign    Ntampon gmd m md ml)
         (BnSetToZero Ntampon (add1 gmf) 1)
         (BnAssign    Ntampon gnd n nd nl)
         (BnSetToZero Ntampon (add1 gnf) 1)
         ; on boucle tant que gm>0
         (until (and (eqn gml 1) (neq (BnIsDigitZero Ntampon gmd) 0))
             ; on divise Ntampon[gnd..gnd+gnl-1][0]
             ; par Ntampon[gmd..gmd+gml-1]
             (if (eqn (BnCompare Ntampon gnd gnl Ntampon gmd gml) 0)
                 (progn
                     (BnSetToZero Ntampon gnd gml); on met gn a` ze'ro
                     (setq gnl 1)); on met a` jour la longueur
                 (BnSetDigit Ntampon (add1 gnf) 0)
                 (BnDivide Ntampon gnd (add1 gnl) Ntampon gmd gml)
                 ; le reste se trouve sur Ntampon[gnd..gnd+gml-1]
                 ; on met a` jour les longueurs
                 (setq gnl (BnNumDigits Ntampon gnd gml))
                 (setq gnf (sub1 (add gnd gnl))))
             ; on permute les adresses
             (setq tmp gnd gnd gmd gmd tmp)
             (setq tmp gnl gnl gml gml tmp)
             (setq tmp gnf gnf gmf gmf tmp))
          ; le reste se trouve dans Ntampon[gnd..gnd+gnl-1]
          (cons gnd gnl)))

; .Section "Test de parite'"
(de even? (n)
    (selectq (type-of n)
      (fix (evenp n))
      (:N (if (neq (BnIsDigitOdd n 0) 0) () 0))
      (:Z (if (neq (BnIsDigitOdd n 0) 0) () 0))
      (T (if (numberp n) (send 'even? n)
             (#:R:error 'even?  'RNOTZ (list 'even? n))))))


; .SSection "Exponentielle a` deux arguments"
(de ** (x y)
    (cond ((< y 0) (/ (** x (- y))))
          ((eq y 0) 1)
          ((integerp y) (:**N x y 1))
          ((eq x 0) (if (eq 0 y) (/ 0 0) 0))
          ((eq 1 x) 1)
          (T (power x y))))

; Calcule p*(x**n)
(de :**N (x n p)
    (if (eq 1 n)
        (* x p)
        (:**N (* x x) (quomod n 2) (if (= 0 #:ex:mod) p (* x p)))))

; .Chapitre IV "Les rationnels Q."
; (libload "/udd/lelisp/vuillemin/lib/q")

;;;;;;;;;;;;;;;;;;;;;;;;;MODIF;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; .Section "Fibonacci et Factorielle"

; .SSection "Fibonnacci"
; F0 = 0, F1 = 1, Fn+2 = Fn+1 + Fn:
(defvar TableFib
        '#[0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610
           987 1597 2584 4181 6765 10946 17711 28657])
; Pour calculer Fib(n) en O(logn) appels re'cursifs, on part de l'identite':
;.br
; F(n+m) = F(m)*F(n+1) + F(m-1)*F(n), dont on utilise les cas particulier:
;.br
; F(2p) = F(p)*(2F(p+1) - F(p)), F(2p+1) = F(p+1)**2 + F(p)**2.
; F(2p) = F(p)**2 + 2F(p)F(p-1), F(2p+1) = F(p+1)**2 + F(p)**2.
(de fib (n)
    (unless (and (integerp n) (>= n 0))
            (#:R:error 'fib 'RNOTZ (list 'fib n)))
    (Nfib n))

(de Nfib (n)
    (if (le n 23)
        (vref TableFib n)
        (lets ((taille (add1 (div n BN_DIGIT_SIZE)))
               (fn (BnCreate 'fn taille))
               (fn+1 (BnCreate 'fn+1 taille))
               (f2n (BnCreate 'f2n taille))
               (f2n+1 (BnCreate 'f2n+1 taille))
               (fl 0)
               (f2l 0)
               (sv))
              (fibexp n)
              (EntreTampon fn taille 0)
              (BnConvert NTampon 0 taille))))

(de fibexp (n)
    (cond ((ge 23 n)
           (BnSetDigit fn 0 (vref TableFib n))
           (BnSetDigit fn+1 0 (vref TableFib (add1 n)))
           (setq fl 1))
          ((oddp n)
           (fibexp (sub1 n))
           (when (eq 1 (BnAdd fn 0 fl fn+1 0 fl 0))
                 (BnSetDigit fn fl 1) (incr1 fl))
           (psetq fn fn+1 fn+1 fn))
          (T  ;  n=2p
           (fibexp (div n 2))
           (setq f2l (add fl fl))
           (BnMultiply  f2n 0 f2l fn 0 fl fn 0 fl); fn*fn   -> f2n
           (BnMultiply  f2n+1 0 f2l fn+1 0 fl
                        fn+1 0 fl)                ; fn+1*fn+1 -> f2n+1
           (BnAdd f2n+1 0 f2l f2n 0 f2l 0)        ; fn**2+fn+1**2 -> f2n+1
           (BnComplement fn+1 0 fl)               ; B-1-fn+1  -> fn+1
           (BnAdd fn+1 0 fl fn 0 fl 0)            ; B-1-fn-1  -> fn+1
           (BnComplement fn+1 0 fl)               ;    fn-1   -> fn+1
           (BnAdd fn+1 0 fl fn+1 0 fl 0)          ;  2*fn-1   -> fn+1
           (BnMultiply f2n 0 f2l fn 0 fl fn+1 0 fl); fn*fn+2*fn-1*fn -> f2n
           (while (eq 0 (BnCompareDigits #:N:C0 0 f2n+1 (sub1 f2l)))
                  (decr1 f2l))
           (BnSetToZero fn 0 fl) (BnSetToZero fn+1 0 fl)
           (setq sv fn fn f2n f2n sv
                 sv fn+1 fn+1 f2n+1 f2n+1 sv
                 fl f2l f2l 0))))

; .SSection "Factorielle"
; 0!=1 , n! = n*n-1!
; (fact 0) = 1 , (fact n) = (* n (fact (- n 1)))
(de fact (n)
    (unless (and (integerp n) (>= n 0))
            (#:R:error 'fact 'RNOTZ (list 'fact n)))
    (Nfact n))

; On multiplie les produits i*(n-i)
(de Nfact (n)
    (let ((fact 1))
         (cond ((gt 8 n) (while (ge n 1) (setq fact (mul fact n) n (sub1 n))))
               ((or (gt 350 n) (and (eq 32 BN_DIGIT_SIZE) (gt 501 n)))
                (EntreTampon #:N:C0 0 (sub (div n 2) 1))
                (BnSetDigit Ntampon 1 5040)
                (let ((i 8) (fl 0))
                     (while (ge n i)
                            (BnSetDigit Ntampon 0
                                       (sub1 (if (eq n i) n (mul n i))))
                            (incr1 i) (decr1 n)
                            (unless (neq (BnIsDigitZero Ntampon fl) 0)
                                    (incr1 fl))
                           (BnMultiplyDigit Ntampon 1 (add1 fl) Ntampon 1 fl
                                            Ntampon 0))
                     (setq fact (BnConvert Ntampon 1 (add1 fl)))))
                (T (print "Error Fact trop grande")))
          fact))

(eval-when (load eval)
   (:boot) )
