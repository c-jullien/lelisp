;;.Titre "Interface Le-Lisp / KerN version C"
;;.Auteur "Bernard Paul Serpette"
;;.INRIA


;;.Section "Contenu"
;;     Ce fichier contient l'interface entre le noyau KerN et Le-Lisp.
;;Il existe deux types d'interfaces qui sont, par ordre de'croissant
;;d'efficacite': Le jeu de primitives est e'crit en assembleur avec un
;;protocole d'appel a` la Le-Lisp, dans ce cas les fonctions d'interfaces
;;sont conside're'es comme des `subr`s; le jeu de primitives est e'crit
;;en C ou assembleur mais le protocole d'appel et celui de C, dans ce cas
;;les fonctions d'interfaces sont de'clare'es par des `defextern`s.
;;
;;	Nous de'crivons ici l'interface protocole C.

;;.Section "De'clarations"
(defvar #:sys-package:colon 'kern)
(defvar BN_DIGIT_SIZE 32)
(defvar BN_WORD_SIZE 15)
(defvar :NO_BYTE_IN_DIGIT (div BN_DIGIT_SIZE 8))

;;.Section "Chargement du binaire s'il existe"
(when (eq 0 (getglobal  "_BnDivideDigit"))
   (let ( (f (search-in-path #:system:path "kern.o")) )
       (ifn f
          (error 'kern 'errfile "kern.o")
          (prinflush ";; Loading " f " ... ")
          (cload f)
          (print "Done!") )))

;;.Section "De'finition du jeu de primitives"
(defmacro :setfn (name ltype type)
   (let ( (Cname (concat "_" name)) (Lname (implode (explode name))) )
      (setq ltype (nsubst 'string 'N (nsubst 't 'I ltype)))
      (setq type (or (cassq type '((N . string) (I . t) (U . t))) 'fix))
      `(defun ,Lname
         ,@(cddr (buildextern Cname
                              (#:system:cached-getglobal Cname)
                               ltype type )))))

(:setfn "BnSetToZero"                 (N I I)             U)
(:setfn "BnAssign"                    (N I N I I)         U)
(:setfn "BnSetDigit"                  (N I Fix)           U)
(:setfn "BnGetDigit"                  (N I)               Fix)
(:setfn "BnNumDigits"                 (N I I)             I)
(:setfn "BnNumLeadingZeroBitsInDigit" (N I)               Fix)
; (:setfn "BnDoesDigitFitInWord"        (N I)               Fix)
(:setfn "BnIsDigitZero"               (N I)               Fix)
(:setfn "BnIsDigitNormalized"         (N I)               Fix)
(:setfn "BnIsDigitOdd"                (N I)               Fix)
(:setfn "BnCompareDigits"             (N I N I)           Fix)
(:setfn "BnComplement"                (N I I)             U)
(:setfn "BnAndDigits"                 (N I N I)           U)
(:setfn "BnOrDigits"                  (N I N I)           U)
(:setfn "BnXorDigits"                 (N I N I)           U)
(:setfn "BnShiftLeft"                 (N I I N I Fix)     U)
(:setfn "BnShiftRight"                (N I I N I fix)     U)
(:setfn "BnAddCarry"                  (N I I Fix)         Fix)
(:setfn "BnAdd"                       (N I I N I I Fix)   Fix)
(:setfn "BnSubtractBorrow"            (N I I Fix)         Fix)
(:setfn "BnSubtract"                  (N I I N I I Fix)   Fix)
(:setfn "BnMultiplyDigit"             (N I I N I I N I)   Fix)
(:setfn "BnDivideDigit"               (N I N I N I I N I) U)

;;.Section "Allocations propres a` Le-Lisp"
(defun BnAlloc (i)
  (makestring (mul :NO_BYTE_IN_DIGIT i) 0) )

(defun BnCreate (Ad i)
  (let ( (n (makestring (mul :NO_BYTE_IN_DIGIT i) 0)) )
    (typestring n Ad)
    n ))

(defun BnFree (n) 1)

(defun BnGetType (n)
   (typestring n) )

(defun BnSetType (n Ad)
   (typestring n Ad) )

(defun BnGetSize (n)
  (div (slen n) :NO_BYTE_IN_DIGIT))

(defvar :tampon (BnCreate 'n 2))
(defun #:N:prin (s)
   (let ( cnt )
      (with ( (obase 16) )
         (for (i (sub1 (BnGetSize s)) -1 0)
            (BnAssign :tampon 0 s i 1)
            (setq cnt 0)
            (while (< cnt BN_DIGIT_SIZE)
               (BnShiftLeft :tampon 0 1 :tampon 1 4)
               (prin (BnGetDigit :tampon 1))
               (incr cnt 4) )))))

;;.Section "Re'glage de BnDoesDigitFitInWord"
(defvar :hight_to_low_index
   (let ( (l ()) (n (BnCreate 'n 2)) )
      (for (i 1 1 3)
         (BnSetDigit n 0 9)
         (BnShiftLeft n 0 1 n 1 (mul 8 i))
         (for (j 0 1 3)
            (when (eq (sref n j) 9) (newl l j)) ))
      l ))

(defun BnDoesDigitFitInWord (s i)
   (let ( (l :hight_to_low_index) (i (mul :NO_BYTE_IN_DIGIT i)) )
      (while (and (cdr l) (eq 0 (sref s (add (car l) i))))
         (setq l (cdr l)) )
      (if (cdr l)
         0
         (if (lt (sref s (add (car l) i)) #$80)
            1
            0 ))))
