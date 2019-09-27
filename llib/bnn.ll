;;.Chapitre I "Arithme'tique Entie`re en place"
;;.Auteur "F. Morain, B. Serpette, J. Vuillemin, P. Zimmermann"
;;.INRIA

;;.Section "Contenu"
;;Nous cre'ons une arithme'tique entie're a` partir des ope'rations machines
;;du fichier kern. Les calculs interme'diaires se font dans un tampon, et le
;;re'sultat est alloue' en fin d'ope'ration. Ce re'sultat est du type fix,
;;quand il est entre -2**15 et 2**15, du type #:R:Q:N pour les grands
;;positifs, et #:R:Q:Z pour les grands ne'gatifs.

(unless (>= (version) 15.2)
	(error 'load 'erricf 'bnn))

;;.Section "De'claration"
(add-feature 'n)

(defvar #:sys-package:colon 'n)

; Les constantes
(eval-when (load eval compile)
   (defvar :C0)
   (defvar :C-1)
   (defvar :Creg) )

; Contient les quotients approche's dans la division longue.
(defvar :qapp)

; Sauvegarde le chiffre le plus significatif du diviseur.
(defvar :Cdiv)

;;Le tampon qui sert pour Karatsuba.
(defvar :Ntampon)

;;.Section "Les macros locales"
;(dmd incr1 (n) `(setq ,n (add1 ,n)))
(dmd decr1 (n) `(setq ,n (sub1 ,n)))

;;; Utilisation des pre'dicats a` la C.
(dmd :true (pred) `(neq ,pred 0))
;(dmd :false (pred) `(eq ,pred 0))


(dmd Base-N (n nd nl) 
     `(progn (BnComplement ,n ,nd ,nl) (BnAddCarry ,n ,nd ,nl 1)))

; Soustraction de 1 a` un chiffre >0:
(dmd C-1 (c cd)
    `(BnAdd ,c ,cd 1 :C-1 0 1 0))

;;.Section "Initialisations"
; Transformation d'un fix f en grand entier de longueur 1 et de type typ
(de fix->N (f typ)
    (let ((fixn (BnCreate typ 1)))
       (BnSetDigit fixn 0 f)
          fixn))

(defun :boot ()
   ;; 0
   (setq :C0 (fix->N 0 'N))
   ;; Contient la constante Base-1
   (setq :C-1 (fix->N 0 'N))
   (BnComplement :C-1 0 1)
   ;; Registre de travail:
   (setq :Creg (fix->N 0 'N))
   ;; Contient les quotients approche's dans la division longue.
   (setq :qapp (BnCreate 'N 2))
   ;; Sauvegarde le chiffre le plus significatif du diviseur.
   (setq :Cdiv (fix->N 0 'N))
   ;; Le tampon
   (setq :Ntampon (BnCreate 'n 4)) )

;;.Section "Tampon"
; Entre les nl chiffres de n dans le tampon, suivis de nz zeros:
(de :EntreTampon (n nl nz)
    ; Verifie que la longueur du tampon est  superieure a nl+nz,
    (unless (ge (BnGetSize :Ntampon) (add nl nz))
            ; sinon, augmente la longueur du tampon:
            (setq :Ntampon  (BnCreate 'n (add nl nz))))
    (BnAssign :Ntampon 0 n 0 nl)       ; Recopie n dans le tampon, et
    ; remet a` 0 les chiffres de poids forts.
    (setq nz (sub (BnGetSize :Ntampon) nl))
    (when (gt nz 0)
          (BnSetToZero :Ntampon nl nz)))

;;.Section "Fonctions ge'ne'rales utilisateurs"
(defun BnIsZero (n nd nl)
   ;; Retourne 0 si n <> 0.
   (if (and (eqn (BnNumDigits n nd nl) 1) (:true (BnIsDigitZero n nd)))
        ;; n est nul
        1
        0))

(defun BnCompare (n nd nl m md ml)
   ;; Retourne 1 si n > m, -1 si n < m, 0 sinon
   (let ((n?m (<?> nl ml)))
        (when (eqn n?m 0)
             ; nl et ml deviennent les adresses courantes
             (setq nl (add nd nl) ml (add md ml))
             (while (and (eq n?m 0) (ge (decr1 nl) nd))
                    (setq n?m (BnCompareDigits n nl m (decr1 ml)))))
         n?m))

; Calcule le log2 de c[cd]:
(de BnNumBitsInDigit (c cd) 
    (if (:true (BnIsDigitZero c cd))
        1 
        (sub BN_DIGIT_SIZE (BnNumLeadingZeroBitsInDigit c cd))))

(de BnNumBits (n nd nl)
    (add (mul BN_DIGIT_SIZE (sub1 nl))
         (BnNumBitsInDigit n (sub1 (add nd nl))) ))

;;.Section "Division entie`re en place"
; Calcule n=dq+r.
; On suppose :
; n=n[nd..nd+nl-1], d=d[dd..dd+dl-1] et n[nd..nd+nl-1] < d[dd+dl-1] et
; nl > dl.
; ATTENTION : n est de'truit :
; en sortie, n[nd......nd+dl-1]  contient le reste
;            n[nd+dl...nd+nl-1]  contient le quotient.
; Cela impose : Size(n) > NumDigits(d).
; Toute allocation, en particulier celle relative a` #:ex:mod est rele'gue'e 
; au niveau de z
(de BnDivide (n nd nl d dd dl)
    (if (eqn 1 dl)
        ; on est su^r que nl>1 car n[nd+nl-1] < d[dd] et n > d
        (BnDivideDigit n (add1 nd) n nd n nd nl d dd)
        (let ((normalisateur 
                 (BnNumLeadingZeroBitsInDigit d (sub1 (add dd dl)))))
             (BnShiftLeft d dd dl :C0 0 normalisateur)
             ; d est normalise', soit multiplie' par 2**norm.
             (BnShiftLeft n nd nl :C0 0 normalisateur)
             ; n est multiplie' par 2**norm, et occupe toujours nl mots.
             ; apres ce decalage, le chiffre nl de n est
             ; toujours inferieur au chiffre dl de d.

             (Ndivide n nd nl d dd dl)

             ; On divise n et d par 2**norm, les bits sortant
             ; a gauche sont necessairement nuls.
             (BnShiftRight d dd dl :C0 0 normalisateur)
             (BnShiftRight n nd dl :C0 0 normalisateur))))

; Si q=q[nd..nd+ql-1], on a 
; q<=n/d<(n[nd+nl-1]+1)*B**(nl-1)/(d[dd+dl-1]*B**(dl-1))
;       =(n[nd+nl-1]+1)/d[dd+dl-1]*B**(nl-dl)
; q<B**(nl-dl) : donc q a nl-dl chiffres et r a dl chiffres : qr a nl 
; chiffres.

; Une e'tape e'le'mentaire est la division de dl+1 chiffres de n par
; les dl chiffres de d.
(de Ndivide (n nd nl d dd dl)
    ; Sauvegarde du chiffre significatif de d:
    (BnAssign :Cdiv 0 d (sub1 (add dd dl)) 1)
    ; Remplacement de D par Base**dl - D:
    (Base-N d dd dl)
    ; nl devient le rang du dernier chiffre courant de n
    (setq nl (add nd nl))
    (let ((ni (sub  nl dl)))
         (while (ge (decr1 ni) nd)
                ; Calcul du quotient approche':
                (if (eq 0 (BnCompareDigits n (decr1 nl) :Cdiv 0))
                    (BnAssign :qapp 0 :C-1 0 1)
                    (BnDivideDigit :qapp 0 :qapp 1 n (sub1 nl) 2 :Cdiv 0))
                ; Calcul du reste
                (BnMultiplyDigit n ni (add1 dl) d dd dl :qapp 0)
                (while  (<> (BnCompareDigits n nl :qapp 0) 0)
                        ; Correction de quotient
                        (Base-N d dd dl)
                        (BnAdd n ni (add1 dl) d dd dl 0)
                        (C-1 n nl)
                        (C-1 :qapp 0)
                        (Base-N d dd dl))))
    ; retour au d original
    (Base-N d dd dl))

;;.Section "Multiplication Accumulation"
; Soient N=val<n,nd,nl> , M=val<m,md,ml>, P=val<p,pd,pl>,
;
; NM = P+N*M = NM0+nm1*Base**pl
; 
; (BnMultiply p pd pl n nd nl m md ml) retourne nm1, qui vaut 0 ou 1,
; et remplace les pl chiffres de P par ceux de NM0.
; On suppose pl >= nl+ml.
(defun BnMultiply (p pd pl n nd nl m md ml)
   (let ((r 0))
       (while (gt ml 0)
          (setq r (add r (BnMultiplyDigit p pd pl n nd nl m md))
                pd (add1 pd)
                pl (sub1 pl)
                md (add1 md)
                ml (sub1 ml)))
      r ))

; .Section "KARATSUBA"

; on lance Karatsuba de`s que ml >= BN_KARA_LIMIT
(defvar BN_KARA_LIMIT 25)
(defvar BN_MAX_SIZE_DIVIDED_BY_TWO 4095)
(synonymq BnMultiplyPlain BnMultiply)

(de BnMultiplyKaratsuba (p pd pl n nd nl m md ml)
  (if (gt ml BN_MAX_SIZE_DIVIDED_BY_TWO)
    (BnMultiplyPlain p pd pl n nd nl m md ml)
    (let ((q (div nl ml))
          (rem (rem nl ml))  ;  rem < ml
          (r 0)
          (2ml (add ml ml)))
         (if (ge ml BN_KARA_LIMIT)
             (:EntreTampon n 0 2ml)) ; pour Karatsuba
         (while (gt q 0)
                (setq r (add r (BnAddCarry p (add pd 2ml) (sub pl 2ml)
                                      (B+B*B_kara n nd m md p pd
                                                  :Ntampon 0 ml)))
                      pd (add pd ml)
                      pl (sub pl ml)
                      nd (add nd ml)
                      q (sub1 q)))
         (when (gt rem 0)
               (setq r (add r (BnMultiply p pd pl m md ml n nd rem))))
         r)))

; Choix de la multiplication
(de BnKaraSwitch (flag)
    (if flag
        (synonym 'BnMultiply 'BnMultiplyKaratsuba)
        (synonym 'BnMultiply 'BnMultiplyPlain)))

; .SSection "Algorithme de Karatsuba"
#|
Multiplie R+N*M=>R, en utilisant P pour ses calculs intermediaires.
.br
Nl=Ml=l, Pl=Rl=2*l
.br
R=r0+br1+bbr2+bbbr3, N=n0+b*n1, M=m0+b*m1
|#

(de B+B*B_kara (n nd m md r rd p pd l)
    (cond ((ge BN_KARA_LIMIT l)
           (BnMultiplyPlain r rd (mul l 2) n nd l m md l))
#|
Si l est impair, on ecrit N=n0+bN1, M=m0+bM1, R=r0+b*b*R1. Ici, b=Base.
.br
Il vient N*M=b*bN1*M1 + n0*M + m0*N.
|#
          ((oddp l)
           (let ((cout
                     (B+B*B_kara n (add nd 1)
                                 m (add md 1) r (add rd 2) p pd (sub l 1))))
                (setq cout (add cout (BnMultiplyDigit r rd (mul l 2) n nd l m md)))
                (add cout (BnMultiplyDigit r (add rd 1) (sub (mul l 2) 1)
                                 m (add md 1)  (sub l 1) n nd))))
#|
Si l est pair, on ecrit N=n0+Bn1, M=m0+Bm1, P=p0+Bp1, R=r0+Br1+BBr2+BBBr3
avec B=b**l/2.

.DebLL 2
        P             R             N          M
____________________________________________________
|  |  |  |  |    |  |  |  |  |    |  |  |    |  |  |
| ?  ? ?  ? |    |    R      |    |n0 n1|    |m0 m1|
____________________________________________________
.FinLL
|#
       (t (lets ((l/2 (quo l 2))   ;  l est pair
                 (cn 0) ; retenue du troisieme chiffre
                 (cm 0) ; retenue sortante
                 (pd1 (add pd l/2))
                 (pd2 (add pd1 l/2))
                 (rd1 (add rd l/2))
                 (rd2 (add rd1 l/2))
                 (rd3 (add rd2 l/2))
                 (nd1 (add nd l/2))
                 (md1 (add md l/2)))
#|
.DebLL 2
        P             R             N          M
____________________________________________________
|  |  |  |  |    |  |  |  |  |    |  |  |    |  |  |
| ?  ? ?  ? |    |     R      |    |n0 n1|    |m0 m1|
____________________________________________________
pd   pd1  rd rd1 rd2      nd nd1    md md1
.FinLL
|#
          (BnAssign p pd n nd1 l/2)
          (BnAssign p pd1 m md1 l/2)
          (setq cn (BnAdd p pd l/2 n nd l/2 0))
          (setq cm (BnAdd p pd1 l/2 m md l/2 0))

#|
.DebLL 2
        P             R             N          M
____________________________________________________
|  |  |  |  |    |  |  |  |  |    |  |  |    |  |  | Sn=n0+n1=sn+b*cn
|sn|sm| ?| ?|         R      |    |n0 n1|    |m0 m1| Sm=m0+m1=sm+b*cm
____________________________________________________
pd   pd1  rd rd1 rd2      nd nd1    md md1
.FinLL
|#
          (unless (eq 0 cn) (setq cn (add cm (BnAdd r rd2 l/2 p pd1 l/2 0))))
          (unless (eq 0 cm) (setq cn (add cn (BnAdd r rd2 l/2 p pd l/2 0))))
          (setq cn (add cn (B+B*B_kara p pd p pd1 r rd1 p pd2 l/2)))
#|
.DebLL 2
        P             R             N          M
____________________________________________________
|  |  |  |  |    |  |  |  |  |    |  |  |    |  |  |
|sn|sm| ?| ?|    |r0|  R1 |r3|    |n0 n1|    |m0 m1| R1=P1+B(cn*sm+cm*sn)
____________________________________________________
pd   pd1  rd rd1 rd2 rd3  nd nd1    md md1
.FinLL
|#
          (BnSetToZero p pd l)
          (B+B*B_kara n nd m md p pd p pd2 l/2) ;  pas de retenue
#|
.DebLL 2
        P             R             N          M
____________________________________________________
|  |  |  |  |    |  |  |  |  |    |  |  |    |  |  |
|  P2 |    |r0|  R1 |r3|    |n0 n1|    |m0 m1| P2=n0*m0
____________________________________________________
pd   pd1  rd rd1 rd2 rd3  nd nd1    md md1
.FinLL
|#
          (setq cn (add cn (sub (BnSubtract r rd1 l p pd l 1) 1)))
          (setq cn (add cn (BnAdd r rd (add l l/2) p pd l 0)))

#|
.DebLL 2
        P             R             N          M
____________________________________________________
|  |  |  |  |    |  |  |  |  |    |  |  |    |  |  |
|     |    |   R2   |r3|    |n0 n1|    |m0 m1| R2=P2+b(R1-P2)+r0 mod b**3
____________________________________________________
pd   pd1  rd rd1 rd2 rd3  nd nd1    md md1
.FinLL
|#
          (BnSetToZero p pd l)
          (B+B*B_kara n nd1 m md1 p pd p pd2 l/2) ; pas de retenue
#|
.DebLL 2
        P             R             N          M
____________________________________________________
|  |  |  |  |    |  |  |  |  |    |  |  |    |  |  |
|  P3 |    |   R2   |r3|    |n0 n1|    |m0 m1| P3=n1*m1
____________________________________________________
pd   pd1  rd rd1 rd2 rd3  nd nd1    md md1
.FinLL
|#
           (setq cn (add cn (sub (BnSubtract r rd1 l p pd l 1) 1)))
           (setq cm (BnAdd r rd2 l p pd l 0))
           (while (gt cn 0)
                  (setq cm (add cm (BnAddCarry r rd3 l/2 1))
                        cn (sub cn 1)))
#|
 R3=R2+B*(B-1)*P3+B*B*cn*cm
.DebLL 2
        P             R             N          M
____________________________________________________
|  |  |  |  |    |  |  |  |  |    |  |  |    |  |  |
|      P3   |    |     R3    |    |n0 n1|    |m0 m1|
____________________________________________________
pd   pd1  rd rd1 rd2 rd3  nd nd1    md md1
.FinLL
.DebLL 2
        P             R             N          M
____________________________________________________
|  |  |  |  |    |  |  |  |  |    |  |  |    |  |  |
| ?  ? ?  ? |    |    N*M    |    |  N  |    |  M  |
____________________________________________________
.FinLL
|#
         cm
          ))))

;;.Section "Fin du fichier"
(eval-when (load eval)
   (:boot) )
