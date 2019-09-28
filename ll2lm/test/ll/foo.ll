; le cas simple ou` f-foo0 doit etre exporte' 
(de f-foo0(x)x)

; le cas simple ou` f-foo1 doit etre exporte' 
(defmacro m-foo0 (x)
  (if (f-foo200 x) `(cons ,x,x) '(progn)))

; cas d'une macro utilisant une fct non exportee a la macroexpansion
; et f-bar1 declencher l'import de bar
(de f-foo1 (x)
  (f-bar1 x))

; un eval-when avec LOAD pour que la macro soit exporte'e
(eval-when (load eval compile)
(defmacro deffoo1 (n)
   `(defun ,(concat 'f-foo1- n)() ,n))
)

; un eval-when sans LOAD pour que la macro ne soit pas exporte'e
(eval-when (eval compile)
(defmacro deffoo2 (n)
   `(defun ,(concat 'f-foo2- n)() ,n))
)

; une expotable-definition
(eval-when (load eval compile)
(defmacro deffoo3 (n . l)
   `(exportable-definition ',(concat 's-foo3- n) 'foostruct ()
			   (de ,(concat 'f-foo3- n) () ,@l)))
)

; une macro hors EVAL-WHEN (COMPILE)
(defmacro deffoo4 (n)
  `(defun ,(concat 'f-foo4- n)() ,n))

; des toplevel form macros
(deffoo1 10)
(deffoo2 11)
; les 2 f-bar2 & f-bar20 doivent etre automatiquement exportees de bar
(deffoo3 12  (f-bar2 (f-bar20 0)))
(deffoo4 13)

; idem mai from importation
(defbar1 "f-foo-14")
(defbar1 "f-foo-15")
(defbar2 "f-foo-16")

; idem + eval-when
(eval-when (load eval compile)
(defbar1 "f-foo-17")
)
(eval-when (eval compile)
(defbar1 "f-foo-18")
)

; cas classique des structures en tou genre
(defstruct s-foo a b)
(deftclass t-foo a b)

; une structure + abbrev inconnue
(defabbrev a-s-foo3 {a-bar3}:s-foo3)
(defstruct {a-s-foo3} z)

; des fcts internes (normalement pas exporte'es)
(de f-foo20 (x) x)
(de f-foo200(x) x)
(de f-foo21 (x) x)
(de f-foo22 (x) x)
(de f-foo23 (x) (f-foo23 x)); exporte car seulement recursion
(de f-foo24 (x) x);exportee car dynamique
(de f-foo25 (x) x)
(de f-foo26 (x) x);exportee car dynamique
(de f-foo27 (x) x)
(de f-foo28 (x) x)
; cas d'une methode de structure utilisee en interne:
; elle doit apparaitre qd meme dans les exports de la base!
(de f-foo29 (x) (#:s-foo:b x))


; utilisation simple d'appel de fct internes
(de f-foo3 (x)(f-foo20 (f-foo21 x)))
; idem avec fct extern indefinie en plus
(de f-foo31(x)(f-foo20 (f-too99 x)))

; un defabbrev connu a la compilation
(eval-when (load eval compile)
(defabbrev a-foo1 #:foo1)
)

; utilisation d'une abbrev connue lors de la definition
(de {a-foo1}:f-foo4 (x) x)
; idem + utilsation d'une abbrev inconnue lors de l'analyse
(de {a-foo1}:f-foo41 (x)  ({a-bar1}:f-bar2 x))
; idem avec un niveau de package en +
(de {a-foo1}:f-foo42 (x)  ({a-bar1}:asd:f-bar2 x))
(de {a-foo1}:asd:f-foo43 (x) x)

; utilisation d'une abbrev inconnue lors de la definition
(de {a-bar2}:f-foo5 (x) x)
; idem + utilisation d'une fct interne + une fct inconnue
(de {a-bar2}:f-foo51 (x) (f-foo22 (f-bar3 x)))
; abbrev inconnue + 1 niveau de package lors de la definition
(de {a-bar2}:asd:f-foo6 ())

; cas d'un definisseur inconnue
(eval-when (load eval compile)(de f-foo6(x) x))
(unknow-foo6 (f-foo6 0))
(unknow-foo6 (f-foo6 1))
(unknow-foo6 (f-foo6 2))
(unknow-foo6 (f-foo6 3))
(unknow-foo6 (f-foo6 4))
(unknow-foo6 5)

; cas d'une fct utilisee au toplevel
(de f-foo61 (x) (print "       f-foo61 is used inline"))
(f-foo61 0)

; cas dynamic simple
(de f-foo71(x) (funcall 'f-foo24 x))
(de f-foo72(x) (funcall 'f-bar41 x))
; cas dynamic sur une macro du compilo
(de f-foo73(x)(mapc 'f-foo25 x))
(de f-foo74(x)(mapc 'f-bar42 x))
; cas dynamic sur une DEFDYNAMIC
(de f-foo75()(mapoblist 'f-foo26))
(de f-foo76()(mapoblist 'f-bar43))

; cas de synonym
; sur une externe
(synonymq f-foo81 f-foo1)
; sur une interne
(synonymq f-foo82 f-foo27)
; sur une extern inconnue
(synonymq f-foo83 f-bar5)
; sur une subr
(synonymq f-foo84 car)

; cas simple de multiple defintion
(de f-foo91 (x) (f-foo28 x))
(de f-foo91 (x) (f-foo29 x))

; cas des sharp caractere
; on suppose defini ailleurs #_
(de f-fooa1(x) (let(xx) (cons x #_x)(f-foo21 xx)))

(eval-when (load eval compile)
(defsharp @() (let ((x (read))) `((cons ,x ,x))))
)
(de f-fooa2(x) (f-foo21 #@x))

;; cas ou` on doit importe FEE.lm parce qu'on herite de sa structure s-fee
(eval-when (load eval compile)
(setq #:system:defstruct-all-access-flag t)
(defstruct #:s-fee:s-fooa3 c)
; idem mais on doit importer fur.lm en plus a cause d'un champs initialise
; dans la structur s-fee2 heritee
(defstruct #:s-fee2:s-foo3 c)
)

;; on ne refabrique pas les accesseurs sur s-fii: on n'importe pas FII.lm
(eval-when (load eval compile)
(setq #:system:defstruct-all-access-flag ())
(defstruct #:s-fii:s-fooa4 c)
)

;; la meme chose mais avec des initialisation en plus!
(eval-when (load eval compile)
(defstruct #:s-zuu:s-fooa6 c)
)

;; cas d'1 DEFABBREV suivi d'un DEFSTRUCT dans le m^ EVAL-WHEN
(eval-when (load eval compile)
(defabbrev s-fii s-fii)
); en realite' on doit mettre 2 eval-when pour que ca marche...
(eval-when (load eval compile)
(defstruct {s-fii}:s-fooa5 c d)
)

; must declenche import of too
(de f-fooa5 (x)
  (omakeq s-too a x b 0))

; to test HASH.lm
(defvar v-foo1 (make-hash-table-eq))

(eval-when (load eval compile)
(defvar v-foo2 (make-hash-table-eq))
)

; pour tester un meme abbrev definie dans plusieurs modules
; cf zar.ll yar.ll
(setq v-foo3 '{a-zar}:v-foo3)
