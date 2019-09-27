;;;
;;; MODTOC:  Module To C translator.
;;;
;;; $Source: /usr/cvs/lelisp/C/modtoc.ll,v $
;;; $Date: 2017/07/30 13:26:48 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;; and maintained by ILOG.
;;;
;;; Inquiries to:     ILOG S.A.
;;;                   2 Avenue Gallieni, BP 85,
;;;                   F-94253 Gentilly Cedex, France.
;;;                   email: lelisp@ilog.fr
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15.2)
        (error 'load 'erricf 'modtoc ))

(defvar #:sys-package:colon 'modtoc)

(unless (featurep 'date)
        (libload date)
        (libload libdate))

(current-language 'english)

#|

Ce traducteur re'alise la conversion d'un module Le-Lisp compile' avec
Complice en un programme C utilisable dans des exe'cutifs GELL.


  <file1>.ll  |             <module>.lo   |              <module>.c
  <file2>.ll  |    ==>                    |    ==>       <module>.h
    ...       | (complice)                |  (modtoc)    <module>.le
  <fileN>.ll  |             <module>.lm   |
  <module>.lm |

Il se compose d'un traducteur ge'ne'ral : "modtoc.ll" ainsi que de 2
optimiseurs optionnels globaux (i.e. travaillant sur la liste LAP) :

  1 - "modpeep.ll" un "peephole" optimiseur qui travaille sur les listes 
      d'instructions LAP et qui retourne une nouvelle liste LAP valide
  2 - "modopt.ll" un  optimiseur qui calcule la liste des e'tiquettes Lap qui
      peuvent e^tre traduites par de ve'ritables e'tiquettes C accessibles
      par de vilains "goto" et non pas sous forme de proce'dures C.

Ce traducteur re'alise e'galement la conversion d'un module LLM3 traduit au
format LAP par l'utilitaire "llm3tolo". Cela permet de n'avoir qu'un seul
traducteur et de partager toutes les optimisations. Dans ce type de
traduction le fichier d'e'laboration n'est pas cre'e'.

  <file>.llm3  |             <file>.lo    |              <module>.c
               |    ==>      <file>.lm    |    ==>       <module>.h
               | (llm3tolo)               |  (modtoc)

Le code engendre' est inde'epndant de l'implantation des nombres
flottants (31 ou 64 bits), car toutes les routines en calcul flottants
utilisent des proce'dure de la bibliothe`que d'exe'cution GELL qui se
trouve sur ll.c.

|#

; .Section "Les Variables Globales de Contro^le du Traducteur"

#|
Le traducteur est contro^le' au moyen des 6 variables globales suivantes et
se lance au moyen de la fonction externe "module-to-C" qui admet un nom de 
module en argument.
|#

; Les instructions LAP sont mises en commentaires dans le programme C
(defvar :C-verbose-mode ())

; L'optimisateur du code LAP "peephole"  est lance' avant la traduction.
(defvar :peephole-optimize-p   t)

; L'optimisateur d'e'tiquettes locales "modopt" est lance' avant la traduction.
(defvar :optimize-local-labels-p t)

; Ce traducteur est appele' sur un pseudo-module provenant de la
; traduction d'un fichier LLM3 (llm3tolo).
(defvar :llm3-module-p ())

; Des statistiques sur la taille des fonctions locales C sont re'alise'es et 
; imprime'es apre`s la phase de ge'ne'ration.
; Utile pour les optimisations futures car le re'sultat global de GELL de'pend
; pour beaucoup de la taille des proce'dures C engendre'es.
(defvar :stats-on-C-size-p t)

; Les instructions CONS sont compile'es en ligne. Les re'sultats e'tants
; mitoge's, cette valeur vaut toujours () sauf dans des cas tre`s pre'cis
; comme les benchs.
(defvar :open-cons-p ())

; .Section "Les Constantes de Ge'ne'ration"

; Elles peuvent e^tre change'es en fonction des compilateurs C
; TOUS les identificateurs C engendre's utilisent de tels pre'fixes
; pour e'viter tout conflit de nom avec des bibliothe`ques e'crites 
; en C (merci Ingres....).

; Pre'fixes de cre'ation d'identificateurs C
(defvar :prefix-module-function       "GL")
(defvar :prefix-trace-function        "GD")
(defvar :prefix-module-table          "GZ")
(defvar :prefix-module-name           "GN")
(defvar :prefix-module-date           "GT")
(defvar :prefix-module-entry          "GW")
(defvar :prefix-litteral-base         "GY")
(defvar :prefix-local-label           "l_")

(defvar :prefix-impure-llm3           "GI")
(defvar :prefix-dot-llm3              "GM")
(defvar :prefix-ftype-llm3            "GF")
(defvar :prefix-external-llm3         "GX")

; Pre'fixes de cre'ation de noms de fichiers C
(defvar :suffix-le                    ".le")
(defvar :suffix-h                     ".h")
(defvar :suffix-c                     ".c")

; .Section "Les Variables Globales Internes"

; Toutes ces variables sont initialise'es a` chaque appel de la fonction 
; principale de traduction d'un module complet : "module-to-C".

; Le surnom du module en cours de traduction (utilise' dans les noms C). 
; Calcule' a` partir du nom de module Lisp.
(defvar :C-module-name ())

; La date (timestamp) de traduction de ce module
(defvar :date ())

; Le nom de la structure C de description du module.
(defvar :C-module-table-name ())

; Les 3 fichiers/canaux cre'e's par ce traducteur.
(defvar :include-channel ())
(defvar :Ccode-channel ())
(defvar :elaborate-channel ())

; La liste (simple) des litte'raux du module
(defvar :list-litterals ())

; La liste des fonctions exporte'es du module : 
; alist de la forme (llname . typefn) dans l'ordre des FENTRY
(defvar :list-fentry ())

; La liste des BRX a` e'mettre en fin de fichier include : 
; ((brxname . listCetiq) ....)
(defvar :list-brx ())

; La liste des symboles sur lesquels on re'alise un appel de type
; FVALQ. Cette liste permet de ve'rifier avec defCcheck, apre`s
; e'laboration comple`te, qu'il n'existe pas d'appel a` des
; fonctions non pre'sentes.
(defvar :list-of-fvalqued-symbols ())

; La A-liste des ve'ritable noms des symboles LLM3: ((llm3name . llname) ...)
(defvar :llm3-ll-name ())

; Le nom de la variable C qui contient la table de litte'raux
(defvar :C-lit-table-name ())

; Les points d'entre'e "externes" des fonctions de'clare'es avec FENTRY
; A-Liste de la forme (nom-lap . nom-C)
(defvar :extern-llm3-predefined 
  (list
   (cons 'popj0   (catenate :prefix-external-llm3 "popj0"))
   (cons 'popj1   (catenate :prefix-external-llm3 "popj1"))
   (cons 'popj2   (catenate :prefix-external-llm3 "popj2"))
   (cons 'popj3   (catenate :prefix-external-llm3 "popj3"))
   (cons 'popj4   (catenate :prefix-external-llm3 "popj4"))
   (cons 'popj5   (catenate :prefix-external-llm3 "popj5"))
   (cons 'popj6   (catenate :prefix-external-llm3 "popj6"))
   (cons 'popj7   (catenate :prefix-external-llm3 "popj7"))
   (cons 'popj8   (catenate :prefix-external-llm3 "popj8"))
   (cons 'popj9   (catenate :prefix-external-llm3 "popj9"))
   (cons 'popja4  (catenate :prefix-external-llm3 "popja4"))
   (cons 'cbindn  (catenate :prefix-external-llm3 "unbind1"))
   (cons 'tag     (catenate :prefix-external-llm3 "unbind3"))
   (cons 'lock    (catenate :prefix-external-llm3 "unbind5"))
   (cons 'prot    (catenate :prefix-external-llm3 "unbind7"))))

; Les points d'entre'e des fonctions de'clare'es avec LENTRY 
; (LLM3). A-Liste de la forme (nom-lap . nom-C)
(defvar :llm3-functions ())

; Les points d'entre'e des fonctions de'clare'es avec FENTRY/ENTRY
; (non LLM3). A-Liste de la forme (nom-lap . nom-C)
(defvar :module-functions ())

; Les points d'entre'e trace'es des fonctions de'clare'es avec FENTRY
; A-Liste de la forme (nom-lap . nom-C)
(defvar :trace-functions ())

; Les e'tiquettes internes qui ne sont pas des points d'entre'e C.
; Cette liste est calcule'e par l'optimisateur, s'il est appele'.
; Les e'tiquettes de ce type sont de ve'ritables e'tiquettes C
; et doivent en the'orie faire gagner pas mal de temps et de place.
(defvar :local-labels-module '())

; Le compteur du ge'ne'rateur de noms locaux (a` la Gensym)
; mais utilisant e'galement le nom du module.
(defvar :gen-new-label-counter 0)

; Les noms des variables de type ADR d'un module LLM3 (elles sont
; parfois de'finies 2 fois)
(defvar :internal-variables-list ())

; .Section "La Fonction Principale de lancement"

(defun module-to-C (module)
   ;; <module> est le nom d'un module engendre' par Complice
   (:print-msg "GELL 15.26: module-to-C: translating module: " module)
   (if (probepathm module)
       (let ((defmod (readdefmodule module))
             exp)
            (setq :C-module-name        (:gen-module-name module))
	    (setq :date                 (date))
            (setq :include-channel      (openo (catenate module :suffix-h)))
            (setq :Ccode-channel        (openo (catenate module :suffix-c)))
	    (setq :elaborate-channel    (openo (catenate module :suffix-le)))
	    (setq :C-module-table-name  (catenate :prefix-module-table
						  :C-module-name))
	    (setq :C-lit-table-name     (catenate :prefix-litteral-base
						  :C-module-name))
            (setq :list-litterals       ())
            (setq :list-fentry          ())
	    (setq :list-brx             ())
	    (setq :llm3-ll-name         ())
            (setq :llm3-functions       :extern-llm3-predefined)
            (setq :trace-functions      ())
            (setq :module-functions     ())
            (setq :list-of-fvalqued-symbols ())
            (setq :gen-new-label-counter 0)
            (setq :internal-variables-list ())
            (setq :in-procedure-C-p ())
	    (:initialize-elaborate-channel)
	    (with ((outchan :elaborate-channel))
		  (:wt0 ";;; GELL 15.26: elaboration file for the module: "
			module)
		  (:wt0 ";;;             translation done: """ :date """")
		  (:wt0)
		  (:wt0 "(with ((outchan ()))")
		  (:wt1 "(print "";Loading elaboration file: "
			module :suffix-le """))" )
		  (:wt0 "(unless (boundp '#:module:compiled-list)")
		  (:wt1 "(setq #:module:compiled-list ()))")
		  (:wt0 "(newl #:module:compiled-list '" module ")")
		  (:wt0 "(setq #:system:read-case-flag t)")
		  (:wt0))
	    (with ((outchan :include-channel))
                  (:wt0 "/* GELL 15.26: include file for the module: """ 
			module """ */")
                  (:wt0 "/*             translation done:            """ 
			:date """ */")
		  (:princlude-list-of-decl "impure LLM3 predefined" "extern Ptr" ""
					   (mapcar (lambda (x)
						     (catenate :prefix-impure-llm3
							       x))
						   '(dlink llink fcons evalst)))
		  (:wt0))
            (with ((outchan :Ccode-channel)
                   (lmargin 0)
                   (rmargin (add1 (slen (outbuf))))
                   (inchan (openi (probepatho module))))
                  (:wt0 "/* GELL 15.26: source file for the module: """ 
			module """ */")
                  (:wt0 "/*             translation done:           """ 
			:date """ */")
                  (:wt0 "/*             peephole-optimize-p:        "
			:peephole-optimize-p " */")
                  (:wt0 "/*             optimize-local-labels-p:    " 
			:optimize-local-labels-p " */")
                  (:wt0)
                  (:wt0 "#include ""lelispc.h"" ")
                  (:wt0 "#include """ module ".h"" ")
                  (:wt0)
                  (when :stats-on-C-size-p
                        (:stats-start))
                  (let ((#:system:read-case-flag t))
                    (untilexit eof
                             (setq exp (read))
                             (if (and (consp exp)
                                      (eq (car exp) 'loader)
                                      (consp (cadr exp))
                                      (eq (car (cadr exp)) 'quote))
                                 (:loader (cadr (cadr exp)))
			         (if :llm3-module-p 
				     (:print-error
				       "modtoc: not a loader call in a LLM3 module"
				       exp)
				     (:to-elaborate-channel exp)))))
		  (:generate-trace-functions :list-fentry)
                  (:function-ending-point)
		  (with ((outchan :include-channel))
			(:princlude-list-of-decl "LLM3 functions" "extern Ptr" "(void)"
			     (mapcar 'cdr (reverse :llm3-functions)))
			(:princlude-list-of-decl "intern functions" "static Ptr" "(void)"
			     (mapcar 'cdr (reverse :module-functions)))
			(:princlude-list-of-decl "trace functions"  "static Ptr" "(void)"
			     (mapcar 'cdr (reverse :trace-functions)))
			;; print the brx tables (if any)
			(when :list-brx
			      (:wt0)
			      (mapc (lambda (abrx)
				      (:wt0 "Ptr (* " (car abrx)" []) () = {")
				      (nextl abrx)
				      (while (cdr abrx)
					(:wt1 (nextl abrx) ","))
				      (:wt1 (car abrx) "};"))
				    (reverse :list-brx)))
			;; print the literal table
			(:wt0)
			(:wt0 "static Ptr " :C-lit-table-name "["
			      ;; ISO C interdit d'initialiser un tableau vide.
			      (let ((len (length :list-litterals)))
				   (if (eq len 0)
				       1
				       len))
			      "];")
			;; print the module table
			(:wt0)
			(let ((gname (catenate :prefix-module-name  :C-module-name))
			      (dname (catenate :prefix-module-date  :C-module-name))
			      (tname (catenate :prefix-module-table :C-module-name))
			      (ename (catenate :prefix-module-entry :C-module-name))
			      (size (length :list-fentry)))
			  (:wt0 "static const char " gname "[] = """ 
				:C-module-name """;")
			  (:wt0 "static const char " dname "[] = """ :date """;")
			  (when (neq size 0)
				(:wt0)
				(:wt0 "static struct GellEntry " 
				      ename "[] = {")
				(mapc (lambda (extfnt)
					(let ((fnt (:get-module-function
						    (car extfnt))))
					  (if (null fnt)
					      (:print-error
					              "printable: no function for: "
						      extfnt)
					      (:wn1 "{" fnt ",	")
					      (when (lt (slength fnt) 6)
						    (:wn1))
					      (:wt0 (:get-trace-function
						           (car extfnt))
						    ",	"
						    (:typefn-to-ftype 'gellmodule 
								      (cdr extfnt))
						    "},	/* "
						    (:get-real-ll-name (car extfnt))
						    " */"))))
				      :list-fentry)
				(:wt0 "};"))
			  (:wt0)
			  (:wt0 "struct GellModule " tname " = {")
			  (:wt1 "GELLMODULESTAMP,")
			  (:wt1 gname ",")
			  (:wt1 dname ",")
			  (:wt1 :C-lit-table-name ",")
			  (:wt1 size ",")
			  (if (eq size 0)
			      (:wt1 "0};")
			      (:wt1 ename "};"))))
		  (close :include-channel)
		  (:close-elaborate-channel)
                  (when :stats-on-C-size-p
                        (:stats-stop))
                  (close :Ccode-channel)))
       (error 'module-to-C "no module description for" module)))

(defun :princlude-list-of-decl (msg type sig lext)
  ;; imprime une liste de de'clarations de fonctions
  ;; de type <type> (4 par ligne)
  (when (consp lext)
	(with ((outchan :include-channel))
	      (:wt0)
	      (:wt0 "/*	" msg "	*/")
	      (with ((lmargin 0)
		     (rmargin (add1 (slen (outbuf)))))
		    (let ((emitted 0)
			  (x))
		      (map (lambda (lx)
			     ;; the name
			     (setq x (car lx))
			     ;; avoid duplication
			     (when (null (memq x (cdr lx)))
				   (cond ((eq emitted 0)
					  (:wn0 type " " x sig)
					  (setq emitted 1))
					 ((eq emitted 4)
					  (:wt0 ";")
					  (:wn0 type " " x sig)
					  (setq emitted 1))
					 (t (:wn0 ", " x sig)
					    (setq emitted (add1 emitted))))))
			    lext)
		      (when (neq emitted 0) (:wt0 ";")))))))


(defun :generate-trace-functions (list-fentry)
  ;; engendre toutes les fonctions de trace.
  (let ((list-fentry-size (length list-fentry))
	(tname (catenate :prefix-module-table :C-module-name))
	(i -1))
    (:loader `(
	       ,@(mapcan 
		  (lambda (elem)
		    (ncons (list 'DENTRY (car elem) (cdr elem) tname (incr i))))
		  list-fentry)))))

; .Section "Les Fonctions sur le canal C"

#|

On ne peut e'mettre une fonction C qu'a` la fin de celle-ci car on
ge`re l'utilisation de "register" par un cache des variables globales
tre`s utilise'es.


Les variables globales suivantes sont utilise'es a` l'inte'rieur de la
compilation d'une seule fonction C (en ge'ne'ral un morceau de code
LAP)

|#

; Indicateur vrai si en cours de ge'ne'ration d'un corps de proce'dure C.
(defvar :in-procedure-C-p ())

; Le contenu du corps de la fonction C (liste de chai^nes)
(defvar :C-body-list ())

; La se'quence d'initialisation en te^te de proce'dure C, une chai^ne
; (l'initialisation des registres)
(defvar :C-ini-seq "")

; La se'quence de retour en fin de proce'dure C, une chai^ne
; (le de'chargement des registres)
(defvar :C-ret-seq "")

; La liste des e'tiquettes locales rencontre'es, pour ge'rer
; l'indicateur de "re'fe'rences locales en avant"
(defvar :local-procedure-label-list ())

; L'indicateur indiquant des re'fe'rences en arrie`re : ie des boucles!
(defvar :backward-references-p ())

; L'indicateur qui sait si cette fonction C a e'te' appele'e
; re'cursivement (et dans ce cas faire un goto et engendrer
; l'e'tiquette correspondante en cas d'appel re'cursifs).
(defvar :tailrec-p ())

; Le nom de l'e'tiquette pour le "goto" tailrec.
(defvar :tailrec-label ())

; Le nom LL de la fonction en cours de ge'ne'ration
(defvar :current-name ())

#| 

Pour essayer d'optimiser un peu le code C engendre', les registres
globaux (nil, bnumb, bfloat, bvect, bstrg, bsymb, bcons, sp, a1, a2,
a3, a4) sont mis dans des variables locales a` la fonction C et de
type register. Le gain en temps et en place est appre'ciable.  Pour
s'assurer de leur restauration correcte a` la sortie des proce'dures
C, on ge`re e'galement leur modification dans cette me^me proce'dure
C.

|#

; Le nombre de fois qu'un registre global parmi :
;      litterals, nil, bnumb, bvect, bstrg, bsymb, bcons, sp, a1, a2, a3, a4
; est utilise' en lecture seule ou en lecture/e'criture avant de le mettre 
; dans une variable locale "register".
(defvar :use-threshold-read-only  2)  ; 2
(defvar :use-threshold-read-write 3)  ; 3

; Les compteurs d'utilisation des registres globaux.

(defvar :use-lit-count       ())
(defvar :use-nil-count       ())
(defvar :use-bnumb-count     ())
(defvar :use-bfloat-count    ())
(defvar :use-bvect-count     ())
(defvar :use-bstrg-count     ())
(defvar :use-bsymb-count     ())
(defvar :use-bcons-count     ())
(defvar :use-sp-count        ())
(defvar :use-a1-count        ())
(defvar :use-a2-count        ())
(defvar :use-a3-count        ())
(defvar :use-a4-count        ())
(defvar :modify-sp-p         ())
(defvar :modify-a1-p         ())
(defvar :modify-a2-p         ())
(defvar :modify-a3-p         ())
(defvar :modify-a4-p         ())

(defun :init-register-use ()
   (setq :use-lit-count       0
         :use-nil-count       0
         :use-bnumb-count     0
         :use-bfloat-count    0
         :use-bvect-count     0
         :use-bstrg-count     0
         :use-bsymb-count     0
         :use-bcons-count     0
         :use-sp-count        0
         :use-a1-count        0
         :use-a2-count        0
         :use-a3-count        0
         :use-a4-count        0
	 :modify-sp-p         ()
	 :modify-a1-p         ()
	 :modify-a2-p         ()
	 :modify-a3-p         ()
	 :modify-a4-p         ()
))

(defun :no-register-use ()
   ; pour inhiber toutes les allocations de registres.
   (setq :use-lit-count       -10000
         :use-nil-count       -10000
         :use-bnumb-count     -10000
         :use-bfloat-count    -10000
         :use-bvect-count     -10000
         :use-bstrg-count     -10000
         :use-bsymb-count     -10000
         :use-bcons-count     -10000
         :use-sp-count        -10000
         :use-a1-count        -10000
         :use-a2-count        -10000
         :use-a3-count        -10000
         :use-a4-count        -10000
))


(defvar :register-attribute-list
   '((nil     "<<nil>>"       "rNil")
     (bnumb   "<<bnumb>>"     "rBnumb")
     (bfloat  "<<bfloat>>"    "rBfloat")
     (bvect   "<<bvect>>"     "rBvect")
     (bstrg   "<<bstrg>>"     "rBstrg")
     (bsymb   "<<bsymb>>"     "rBsymb")
     (bcons   "<<bcons>>"     "rBcons")
     (a1      "<<a1>>"        "rA1")
     (a2      "<<a2>>"        "rA2")
     (a3      "<<a3>>"        "rA3")
     (a4      "<<a4>>"        "rA4")
     (sp      "<<sp>>"        "rSp")))


(defun :use-register (reg)
   (selectq reg
	    (lit       (setq :use-lit-count    (add1 :use-lit-count)))
	    (nil       (setq :use-nil-count    (add1 :use-nil-count)))
	    (bnumb     (setq :use-bnumb-count  (add1 :use-bnumb-count)))
	    (bfloat    (setq :use-bfloat-count (add1 :use-bfloat-count)))
	    (bvect     (setq :use-bvect-count  (add1 :use-bvect-count)))
	    (bstrg     (setq :use-bstrg-count  (add1 :use-bstrg-count)))
	    (bsymb     (setq :use-bsymb-count  (add1 :use-bsymb-count)))
	    (bcons     (setq :use-bcons-count  (add1 :use-bcons-count)))
	    (sp        (setq :use-sp-count     (add1 :use-sp-count)))
	    (a1        (setq :use-a1-count     (add1 :use-a1-count)))
	    (a2        (setq :use-a2-count     (add1 :use-a2-count)))
	    (a3        (setq :use-a3-count     (add1 :use-a3-count)))
	    (a4        (setq :use-a4-count     (add1 :use-a4-count)))
	    (t         ())))

(defun :modify-register (reg)
   (selectq reg
	    (sp        (setq :modify-sp-p  t))
	    (a1        (setq :modify-a1-p  t))
	    (a2        (setq :modify-a2-p  t))
	    (a3        (setq :modify-a3-p  t))
	    (a4        (setq :modify-a4-p  t))
	    (t         ())))

(defun :function-entry-point (name)
  ;; engendre l'ente^te d'une proce'dure C
  (:function-ending-point)
  (let ((internal-name (:lab name)))
    (if (assq name :llm3-functions)
	(:wt0 "extern Ptr " internal-name "(void) {	/* " 
	      (:get-real-ll-name name) " */")
        (:wt0 "static Ptr " internal-name "(void) {	/* " name " */"))
    (:function-entry-point-init name internal-name)))

(defun :trace-entry-point (name)
  ;; engendre l'ente^te d'une proce'dure C de type trace
  (:function-ending-point)
  (let ((internal-name (:get-trace-function name)))
    (:wt0 "static Ptr " internal-name "() {	/* trace " 
	  (:get-real-ll-name name) " */")
    (:function-entry-point-init name internal-name)))

(defun :function-entry-point-init (name internal-name)
  (setq :in-procedure-C-p t
	:C-body-list ()
	:C-ini-seq ""
	:C-ret-seq ""
	:local-procedure-label-list ()
	:backward-references-p ()
	:tailrec-p ()
	:tailrec-label (:gen-tailrec-label internal-name)
	:current-name name)
  (:init-register-use))

        
(defun :function-ending-point ()
  ;; termine une fonction (si ce n'est pas de'ja` fait)
  ;; et l'imprime.
  (when :in-procedure-C-p
	(:prin1 "   {	register Ptr aRet")
	(:force-register :use-lit-count ()  
			 "<<lit>>" :C-lit-table-name "*" "rLit")
	(:force-simple-register :use-sp-count     :modify-sp-p   'sp)
	(:force-simple-register :use-a1-count     :modify-a1-p   'a1)
	(:force-simple-register :use-a2-count     :modify-a2-p   'a2)
	(:force-simple-register :use-a3-count     :modify-a3-p   'a3)
	(:force-simple-register :use-a4-count     :modify-a4-p   'a4)
	(:force-simple-register :use-nil-count    ()             'nil)
	(:force-simple-register :use-bnumb-count  ()             'bnumb)
	(:force-simple-register :use-bfloat-count ()             'bfloat)
	(:force-simple-register :use-bvect-count  ()             'bvect)
	(:force-simple-register :use-bstrg-count  ()             'bstrg)
	(:force-simple-register :use-bsymb-count  ()             'bsymb)
	(:force-simple-register :use-bcons-count  ()             'bcons)
	(print ";")
	(when (nequal :C-ini-seq "") (print "	" :C-ini-seq))
	(:wt0 "  lRet: <<ret>> return (aRet);}}")
	(:code-replace :C-body-list "<<ret>>" :C-ret-seq)
	(when :tailrec-p
	      (print :tailrec-label ":"))
	(mapc 'print (setq :C-body-list (nreverse :C-body-list)))
	(setq :in-procedure-C-p ())
	(:wt0)
	(when :stats-on-C-size-p
	      (incr :stats-nb-of-procs)
	      (let ((size (length :C-body-list)))
		(setq size (min size (1- (vlength :stats-vector))))
		(vset :stats-vector size
		      (1+ (vref :stats-vector size)))))))


(defun :force-simple-register (count modified register)
   (let ((val (assq register :register-attribute-list)))
        (:force-register count modified (cadr val) register "" (caddr val))))

(defun :force-register (count modified internal word type reg)
   (let ((allocated (ge count
			(if (or (not modified) :tailrec-p :backward-references-p)
			    :use-threshold-read-only
			    :use-threshold-read-write))))
        (when (symbolp word)
	      (setq word (catenate :prefix-impure-llm3 word)))
        (if allocated
	    (progn
	        (incr :stats-preloaded-registers)
	        (prin ", " type reg)
		(setq :C-ini-seq 
		      (if (eqstring :C-ini-seq "")
			  (catenate reg " = " word ";")
			  (catenate :C-ini-seq " " reg " = "  word ";")))
		(:code-replace :C-body-list internal  reg)
		(when modified
		      (incr :stats-unloaded-registers)
		      (setq :C-ret-seq 
			    (if (eqstring :C-ret-seq "")
				(catenate word " = " reg ";")
			        (catenate :C-ret-seq " " word " = " reg ";")))))
	    (:code-replace :C-body-list internal word))))


(defun :code-replace (lstrg old new)
  ;; remplace toutes les chai^nes "old" par "new" dans la liste des
  ;; chaines "lstrg". "old" et "new" n'ont pas la me^me taille.
  (mapc (lambda (strg)
           (let ((ind 0))
                (when (setq ind (index old strg 0))
                      (exchstring strg (:code-replace-aux strg old new ind 
							  (slen old))))))
         lstrg))

(defun :code-replace-aux (strg old new ind len)
    (if (null ind)
        strg
        (catenate (substring strg 0 ind)
                  new
                  (let ((strg (substring strg (add ind len))))
                       (:code-replace-aux strg
					  old
					  new
					  (index old strg 0)
					  len)))))

(defun :terpri ()
  ;; termine une ligne C et re'alise le stockage s'il le faut.
  (if (and :in-procedure-C-p (eq (outchan) :Ccode-channel))
      (progn (newl :C-body-list (substring (outbuf) 0 (outpos)))
	     (outpos 0))
      (terpri)))

; .Section "Les Fonctions sur le canal d'e'laboration"

#|

Le fichier d'e'laboration devant contenir EN TETE le vecteur de
litte'raux (le "defClit" pour permettre une e'laboration
incre'mentale). Il faut donc stocker toutes les formes d'e'laboration
avant d'e'crire le fichier d'e'laboration.

|#

; Les formes a` e'laborer.
(defvar :exprs-to-elaborate-channel ())

(defun :initialize-elaborate-channel ()
   (setq :exprs-to-elaborate-channel ()))

(defun :to-elaborate-channel (exp)
   (newl :exprs-to-elaborate-channel exp))

(defun :close-elaborate-channel ()
  ;; E'crit l'ensemble du fichier d'e'laboration.
  (with ((outchan :elaborate-channel)
	 (obase 10)
	 (printlevel 1000)
	 (printlength 30000)
	 (rmargin (add1 (slen (outbuf))))
	 (lmargin 0))
	(let ((#:system:print-for-read t)
	      (#:system:print-with-abbrev-flag ()))
	  (:princ1 #/( )
	  (prin 'defCelaborate :C-module-table-name)
	  (let ((#:system:print-for-read ())) (print " """ :date """"))
	  (print)
	  (print (kwote (mapcar (lambda (entry)
				  (cons (:get-real-ll-name (car entry))
					(cdr entry)))
				:list-fentry)))
	  (print)
	  (print (apply 'vector (nreverse :list-litterals)))
	  (:princ1 #/))
	  (print)
	  (print)
	  (mapc ':print-elaborate-channel (nreverse :exprs-to-elaborate-channel))
	  (print)
	  (print `(defCcheck ,(kwote :list-of-fvalqued-symbols))))
	(close :elaborate-channel)))
                    
(defun :print-elaborate-channel (expr)
  ;; imprime une expression sur le canal d'e'laboration.
  (print expr))

; .Section "La Ge'ne'ration des ope'randes"

(defun :opr (op)
  ;; ge'ne'ration d'un ope'rande en lecture seule.
  (:operand op))

(defun :opw (op)
  ;; ge'ne'ration d'un ope'rande en e'criture.
  (:operand op)
  (when (symbolp op) (:modify-register op)))

(defun :opm (op)
  ;; ge'ne'ration d'un ope'rande en lecture puis e'criture.
  ;; pour les ++ -- += -= de C.
  (when (symbolp op) (:use-register op))
  (:operand op)
  (when (symbolp op) (:modify-register op)))

(defun :operand (op)
  ;; traduit un ope'rande LAP de type pointeur -> C
  (when (null op) (error ':operand 'modtoc ()))  ; pour filter des erreurs ...
  (if (atom op)
      (let ((val (cassq op :extern-llm3-predefined)))
	(cond (val (prin "((Ptr) " val ")"))
	      ((symbolp op)
	       (if (eq (sref (string op) 0) #/.)
		   (prin :prefix-dot-llm3 (substring (string op) 1))
		   (let ((val (:optr-convert op)))
		     (if (stringp val)
			 (prin val)
		         (prin :prefix-impure-llm3 op)))))
	      (t (prin op))))
      (let ((arg1 (cadr op)))
	  (selectq (car op)
		;; on suppose que les ope'randes sont bien forme's.
                (QUOTE  (if (fixp arg1)
                            (cond ((eq arg1 #$8000)
                                   (prin "(Ptr) ((UFix) 0x8000)"))
                                  ((ge arg1 0)
				   (prin "(Ptr) " arg1))
                                  (t 
				   (prin "(Ptr) ((UFix) ")
				   (:prinhex arg1)
				   (:princ1 #/) )))
                            (:lit arg1)))
                (CAR    (:wn0 (:opr arg1) "->Val"))
                (CDR    (:wn0 "(" (:opr arg1) " + 1)->Val"))
                (CVAL   (:wn0 (:opr arg1) "->Val"))
                (PLIST  (:wn0 "(" (:opr arg1) " + 1)->Val"))
                (FVAL   (:wn0 "(" (:opr arg1) " + 2)->Val"))
                (PKGC   (:wn0 "(" (:opr arg1) " + 3)->Val"))
                (OVAL   (:wn0 "(" (:opr arg1) " + 4)->Val"))
                (ALINK  (:wn0 "(" (:opr arg1) " + 5)->Val"))
                (PFTYPE (:wn0 "(" (:opr arg1) " + 6)->Val"))
                (PNAME  (:wn0 "(" (:opr arg1) " + 7)->Val"))
                (VAL    (:wn0 (:opr arg1) "->Val"))
                (TYP    (:wn0 "(" (:opr arg1) " + 1)->Val"))
                (CVALQ  (:wn0 (:lit arg1) "->Val"))
                (FVALQ  (unless (memq arg1 :list-of-fvalqued-symbols)
                                (newl :list-of-fvalqued-symbols arg1))
                        (:wn0 "(" (:lit arg1) " + 2)->Val"))
                (&      (if (eq arg1 0)
                            (:wn0 (:opr 'sp) "->Val")
                            (:wn0 "(" (:opr 'sp) " + " arg1 ")->Val")))
                (@      (:wn0 "((Ptr) " (:lab arg1) ")"))
                (%      (:wn0 "((Ptr) &" (:opr arg1) ")"))
                (EVAL   (if (and (consp arg1)
                                 (eq (car arg1) 'kwote)
                                 (consp (cadr arg1))
                                 (memq (caadr arg1)
                                       '(getglobal #:system:cached-getglobal))
                                 (consp (cadr (cadr arg1)))
                                 (eq (caadr (cadr arg1)) 'quote))
			    ;; les "getglobal" sont re'solus par l'e'diteur de liens
			    ;; Attention: enlever le "_" le cas e'che'ant ....
                            (let ((name (cadr (cadr (cadr arg1)))))
                                 (when (eq (chrnth 0 name) #/_)
                                       (setq name (substring name 1)))
                                 (:wn0 "(Ptr) " name)
                                 (with ((outchan :include-channel))
                                       (:wt0 "extern Ptr " name "(void);")))
                            (:opr (eval arg1))))
                (t      (error ':operand 'modtoc op))))))

(defun :optr-convert (op)
   (if (symbolp op)
       (let ((val (assq op :register-attribute-list)))
	    (if (null val)
		op
	        (:use-register op)
		(cadr val)))
       op))

(defun :int (op)
  ;; engendre l'acce`s a` un ope'rande qui va e^tre utilise'
  ;; avec un castrage de type (int)
  (if (and (consp op)
	   (eq (car op) 'QUOTE)
	   (fixp (cadr op)))
      (prin "(int) " (cadr op))
      (:wn0 "(int) (" (:opr op) ")")))

(defun :fix (op)
  ;; engendre l'acce`s a` un ope'rande qui va e^tre utilise'
  ;; avec un castrage de type (Fix).
  (if (and (consp op)
	   (eq (car op) 'QUOTE)
	   (fixp (cadr op)))
      (prin "(Fix) " (cadr op))
      (:wn0 "(Fix) (" (:opr op) ")")))

(defun :fixpos (op)
  ;; engendre l'acce`s a` un ope'rande qui va e^tre utilise'
  ;; avec un castrage de type (Fix), pour un nb toujours >= 0
  (if (and (consp op)
	   (eq (car op) 'QUOTE)
	   (fixp (cadr op)))
      (if (ge (cadr op) 0)
	  (prin "(Fix) " (cadr op))
	  (error ':fixpos 'erroob op))
      (:wn0 "(Fix) (" (:opr op) ")")))

(defun :fixincr (op)
  ;; engendre une ope'ration d'auto incre'ment avec un ope'rande de type
  ;; Fix, positif ou ne'gatif.
  (if (and (consp op)
	   (eq (car op) 'QUOTE)
	   (fixp (cadr op)))
      (if (ge (cadr op) 0)
	  (prin " += (Fix) " (cadr op))
	  (prin " -= (Fix) " (abs (cadr op))))
      (:wn0 " += (Fix) (" (:opr op) ")")))

(defun :ufix (op)
  ;; engendre l'acce`s a` un ope'rande qui va e^tre utilise'
  ;; avec un castrage de type (UFix).
  (if (and (consp op)
	   (eq (car op) 'QUOTE)
	   (fixp (cadr op)))
      (prin "(UFix) " (cadr op))
      (:wn0 "(UFix) (" (:opr op) ")")))

(defun :lab (label)
  ;; engendre l'acce`s a` un ope'rande de type adresse (@).
  (when (null label)
	(error ':lab 'modtoc ()))
  (or (:get-module-function label)
      (:make-module-function label)))

(defun :literal-index (op)
  ;; retourne l'index de op dans la table des litte'raux
  (let ((ls (if (or (stringp op) (floatp op))
		(member op :list-litterals)
	        (memq   op :list-litterals))))
    (if ls
	(sub1 (length ls))
        (progn
	  (newl :list-litterals op)
	  (:literal-index op)))))

(defun :lit (op)
  ;; engendre l'acce`s a` un ope'rande quote' (').
  (:use-register 'lit)
  (prin "<<lit>>[" (:literal-index op) "]"))

(defun :strg (strg)
  ;; engendre l'acce`s a` un ope'rande type chai^me (LLM3)
  (if (and (consp strg) (eq (car strg) 'strg))
      (progn (:princ1 #/")  ; le caracte`re guillemet
             (mapc (lambda (c)
			;; le quote-char des chai^nes C
                        (when (memq c '(#/\ #/"))
                              (:princ1 92))
                        (:princ1 c))
                    (explode (cadr strg)))
             (:princ1 #/"))
       (error ':strg "bad value" strg)))

(defvar :prinhex-table "0123456789abcdef")

(defun :prinhex (n)
  ;; impression de <n>, sur 16 bits, en hexade'cimal.
  (let ((prt :prinhex-table))
    (:prin1  "0x")
    (:princ1 (sref prt (logand (logshift n -12) #$F)))
    (:princ1 (sref prt (logand (logshift n -8)  #$F)))
    (:princ1 (sref prt (logand (logshift n -4)  #$F)))
    (:princ1 (sref prt (logand n                #$F)))))


; .Section "La Ge'ne'ration du code d'une instruction"

(defun :instruction (obj)
   (when :C-verbose-mode 
         (:wt1 "	/* " obj " */"))
   (cond
       ((null obj) ())
       ((atom obj)
        (if (memq obj :local-labels-module)
	    (progn
	      (newl :local-procedure-label-list obj)
	      (:wt0 :prefix-local-label obj ":"))
            (when (if (consp :previous-instruction)
                      (null (memq (car :previous-instruction) 
                                  '(BRA BRI BRX JMP CALL JCALL RETURN)))
                      :previous-instruction)
                  (:goto-label-at obj ""))
            (:function-entry-point obj)))
       (t (let ((codop (car obj))
                (arg1  (cadr obj))
                (arg2  (caddr obj))
                (arg3  (cadddr obj))
		(arg4  (car (cddddr obj))))

	    ;; se'lection sur les code-ope'rations (ordre de la doc).

	    (selectq codop


; .SSection "les pseudos-instructions"

            (ENTRY   ; (ENTRY <name> <ftype>)
	             ; Complice engendre les 2!
	             (let ((entry (:make-module-function arg1)))
                          (:function-entry-point arg1)))
            (FENTRY  ; (FENTRY <name> <ftype> <lparam>)
	             (:to-elaborate-channel 
		               `(defCsetfn ',arg1
				           ,:C-module-table-name
					   ,(length :list-fentry)))
		     (setq :list-fentry 
			   (nconc1 :list-fentry (cons arg1 arg2))))
            (LENTRY  ; (LENTRY <name> <ftype>) LLM3 FENTRY
                     (let ((entry (:get-llm3-function arg1)))
		          (when (null entry)
				(:print-error "'LENTRY: no LLM3 entry point" arg1))
                          (:function-entry-point arg1)
			  (setq :list-fentry 
				(nconc1 :list-fentry
					(cons arg1
					      (:ftype-to-typefn 'lentry arg2))))
                          (with ((outchan :include-channel))
                                (:wt0 "#define " :prefix-ftype-llm3 arg1 " " arg2))))
            (DENTRY  ; (DENTRY <llname> <typefn>)
                     ; c'est une fonction relai de trace
	             (:make-trace-function arg1)
		     (:trace-entry-point arg1)
		     (:wt1 "aRet = llrt_jmpd (<<lit>>,"
			   (:literal-index (:get-real-ll-name arg1)) ","
			   (:literal-index '#:gell-resetfn:function-name) ","
			   (:literal-index (selectq arg2
					      (subr0  '#:gell-resetfn:function-0)
					      (subr1  '#:gell-resetfn:function-1)
					      (subr2  '#:gell-resetfn:function-2)
					      (subr3  '#:gell-resetfn:function-3)
					      (nsubr  '#:gell-resetfn:function-n)
					      (fsubr  '#:gell-resetfn:function-f)
					      (msubr  '#:gell-resetfn:function-1)
					      (dmsubr '#:gell-resetfn:function-1)
					      (t (error 'DENTRY "bad typefn" arg2))))
			   ");"))
            (EVAL    ; (EVAL s)  e'valuation a` LOAD-TIME
                     (catcherror t (eval arg1)))
            (LOCAL)
            (TITLE)
            (ENDL)
            (END)


; .SSection "Manipulation de pointeurs"

            (NOP)    ; difficile de faire quelquechose non enleve' par l'-O
            (MOV     (:mov-instruction arg1 arg2))
	    (MOVNIL  ; LLM3 : op
                     (:mov-instruction 'nil arg1))
            (CABEQ   (:cmp-ptr-and-branch arg1 "==" arg2 arg3))
            (CABNE   (:cmp-ptr-and-branch arg1 "!=" arg2 arg3))
            (BTLISP  (:cmp-type-inside  arg1 'BNUMB 'ECONS arg2))
            (BFLISP  (:cmp-type-outside arg1 'BNUMB 'ECONS arg2))


; .SSection "Le contro^le"

            (BRA     (:goto-label `(@ ,arg1) ""))
            (JMP     (:goto-label `(FVALQ ,arg1) ""))
            (BRI     (:goto-label arg1 ""))
            (BRX     ; LLM3 : (((@ 1) .... (@ 100)) index)
	             (let ((lab (:gen-new-symbol 'brx_))) ; un tableau local.
		          (newl :list-brx
				(cons lab
				      (mapcar (lambda (lab) (:lab (cadr lab)))
					      arg1)))
			  (:wt1 "{aRet = (Ptr) (" lab "[" (:int arg2) "]); "
				"goto lRet;}")))
            (SOBGEZ  ;
                     (:wt1 "{register Fix aux;")
                     (:wt2 "aux = " (:fix arg1) " - 1;")
                     (:wt2 (:opw arg1) " = (Ptr) ((UFix) aux);")
                     (:wn2 "if (aux >= 0) ")
                     (:goto-label-at arg2 "}"))
            (SOBGTZ  ; LLM3
                     (:wt1 "{register Fix aux;")
                     (:wt2 "aux = " (:fix arg1) " - 1;")
                     (:wt2 (:opw arg1) " = (Ptr) ((UFix) aux);")
                     (:wn2 "if (aux > 0) ")
                     (:goto-label-at arg2 "")
                     (:wt2 "else " (:opw arg1) " = (Ptr) 0;}"))


; .SSection "Les instructions sur la pile"

            (STACK   (:mov-instruction 'SP arg1))
            (SSTACK  (:mov-instruction arg1 'SP))

            ; Pile de contro^le

            (CALL    (:call-internal `(@ ,arg1)))
            (CALLI   (:call-internal arg1))
            (JCALL   (:instruction
		        (if (eq arg1 :current-name)
                            ; JCALL recursif
			    (:call-internal `(@ ,arg1))
                            ; JCALL normal (via la FVAL)
			    (:call-internal `(FVALQ ,arg1)))))
            (RETURN  (:wt1 "{aRet = (" (:opm 'sp) "++)->Val; goto lRet;}"))

            ; Pile de donne'es

            (PUSH    (if (and (consp arg1)
                              (eq (car arg1) '&))
                         ; cas vicieux (PUSH (& n))
			 (progn
			   (:wt1 "{register Ptr aux;")
			   (:wt2 "aux = " (:opr arg1) ";")
			   (:wt2 "(--" (:opm 'sp) ")->Val = aux;}"))
		         (:wt1 "(--" (:opm 'sp) ")->Val = " (:opr arg1) ";")))
            (POP     (if (and (consp arg1)
                              (eq (car arg1) '&))
                         ; cas vicieux (POP (& n))
			 (progn
			   (:wt1 "{register Ptr aux;")
			   (:wt2 "aux = (" (:opm 'sp) "++)->Val;")
			   (:wt2 (:opw arg1) " = aux;}"))
                         (:wt1 (:opw arg1) " = (" (:opm 'sp) "++)->Val;")))
            (POPR    ; LLM3 : sp op
		     (:wt1 (:opw arg2) " =  (" (:opm arg1) "++)->Val;"))
            (ADJSTK  (if (and (consp arg1)
                              (eq (car arg1) '&))
                         ; cas vicieux (ADJSTK (& n))
                         (:wt1 "{register Fix aux; aux = " (:fix arg1) "; "
			       (:opm 'sp) " += aux;}")
                         (:wt1 (:opm 'sp) (:fixincr arg1) ";")))
            (ADJSTKR ; LLM3 : sp n
		     (:wt1 (:opm arg1) " += " (:fix arg2) ";"))
            (MOVXSP  ; (MOVXSP op index)
                     (:wt1 "(" (:opw 'sp) " + " (:fix arg2) ")->Val = "
			   (:opr arg1) ";"))
            (XSPMOV  ; (XSPMOV index op)
                     (:wt1 (:opw arg2) " = (" (:opr 'sp) " + " 
			   (:fixpos arg1) ")->Val;"))
	    (XTOPST  ; LLM3 : op
		     (:wt1 "{register Ptr aux;")
		     (:wt2 "aux = " (:opr 'sp) "->Val;")
                     (:wt2 (:opr 'sp) "->Val = " (:opr arg1) ";")
		     (:wt2 (:opw arg1) " = aux;}"))
	    (TOPST   ; LLM3 : op
                     (:mov-instruction '(& 0) arg1))
	    (TOPSTR  ; LLM3 : sp op
                     (:wt1 (:opw arg2) " = " (:opr arg1) "->Val;"))
            (CHKSTK  ; LLM3 : borne lab
	             (:cmp-ptr-and-branch 'sp "<" arg1 arg2))

; .SSection "Les cellules de liste"

            (BTCONS  (:cmp-int-and-branch arg1 ">=" 'BCONS arg2))
            (BFCONS  (:cmp-int-and-branch arg1 "<"  'BCONS arg2))
            ; Ces 2 instructions ne sont pas dans la doc Ch. 13!!!
            (CAR     (:mov-instruction `(CAR ,arg1) arg1))
            (CDR     (:mov-instruction `(CDR ,arg1) arg1))


; .SSection " NIL / Symboles / Variables "

            (BTNIL   (:instruction `(CABEQ ,arg1 nil ,arg2)))
            (BFNIL   (:instruction `(CABNE ,arg1 nil ,arg2)))
            (BTSYMB  (:cmp-type-inside  arg1 'BSYMB 'BCONS arg2))
            (BFSYMB  (:cmp-type-outside arg1 'BSYMB 'BCONS arg2))
            (BTVAR   (:cmp-type-inside  arg1 'BVAR  'BCONS arg2))
            (BFVAR   (:cmp-type-outside arg1 'BVAR  'BCONS arg2))
	    (SETBVAR (:mov-instruction arg1 'BVAR))


; .SSection "Les instructions sur les entiers"

            (BTFIX   (:cmp-ptr-and-branch arg1 "<"  'BFLOAT arg2))
            (BFFIX   (:cmp-ptr-and-branch arg1 ">=" 'BFLOAT arg2))
            (INCR    (:fix-arith arg1 '+ '1 arg1 arg2))
            (DECR    (:fix-arith arg1 '- '1 arg1 arg2))
            (PLUS    (when (nequal arg1 ''0)
                           (:fix-arith arg2 '+ arg1 arg2 arg3)))
            (DIFF    (when (nequal arg1 ''0)
                           (:fix-arith arg2 '- arg1 arg2 arg3)))
            (NEGATE  (:fix-arith '0   '- arg1 arg1 arg2))
            (TIMES   (:fix-arith arg2 '* arg1 arg2 arg3))
            (QUO     (:fix-arith arg2 '/ arg1 arg2 arg3))
            (REM     (:fix-arith arg2 '% arg1 arg2 arg3))
            (CNBEQ   (:instruction `(CABEQ ,arg1 ,arg2 ,arg3)))
            (CNBNE   (:instruction `(CABNE ,arg1 ,arg2 ,arg3)))
            (CNBLE   (:cmp-fix-and-branch arg1 "<=" arg2 arg3))
            (CNBLT   (:cmp-fix-and-branch arg1 "<"  arg2 arg3))
            (CNBGE   (:cmp-fix-and-branch arg1 ">=" arg2 arg3))
            (CNBGT   (:cmp-fix-and-branch arg1 ">"  arg2 arg3))
            (LAND    (:fix-logic arg2 "&" arg1 arg2))
            (LOR     (:fix-logic arg2 "|" arg1 arg2))
            (LXOR    (:fix-logic arg2 "^" arg1 arg2))
            (LSHIFT  ; Attention: << et >> ne suivent pas les re`gles
                     ; de conversions classiques et certains compilos
                     ; oublient que le type de l'expression est celui
                     ; du 1er argument, d'ou` le (UFix) supple'mentaire.
                     ; Vivement ANSI C!!
                     (if (and (consp arg1)
                              (eq (car arg1) 'quote)
                              (fixp (cadr arg1)))
                         ; c'est une constante nume'rique
                         (if (ge (cadr arg1) 0)
                             (:wt1 (:opw arg2) " = (Ptr) (UFix) (" 
				   (:ufix arg2) " << " (cadr arg1) ");")
                             (:wt1 (:opw arg2) " = (Ptr) (UFix) ("
				   (:ufix arg2) " >> " (abs (cadr arg1)) ");"))
                         ; le nb de de'calage est calcule'
                         (:wt1 "{register Fix aux;")
                         (:wt2 "aux = " (:fix arg1) ";")
                         (:wn2 "if (aux >= 0)")
                         (:wt0 "aux = " (:ufix arg2) " << aux;")
                         (:wt2 "else        aux = " (:ufix arg2) " >> -aux;")
                         (:wt2 (:opw arg2) " = (Ptr) ((UFix) aux);}")))

; .SSection "Les instructions sur les nombres flottants et les autres nombres"

            (BTNUMB  ; LLM3 : op lab
	             (:cmp-type-inside  arg1 'BNUMB 'BFLOAT arg2)) 
            (BFNUMB  ; LLM3 : op lab
                     (:cmp-type-outside  arg1 'BNUMB 'BFLOAT arg2))
            (BTFLOAT (:wt1 "if (llrt_floatp (" (:opr arg1) ") != 0) ")
		     (:goto-label-at arg2 ""))
            (BFFLOAT (:wt1 "if (llrt_floatp (" (:opr arg1) ") == 0) ")
		     (:goto-label-at arg2 ""))
            (FPLUS   (:float-arith arg1 "fadd" arg2))
            (FDIFF   (:float-arith arg1 "fsub" arg2))
            (FTIMES  (:float-arith arg1 "fmul" arg2))
            (FQUO    (:float-arith arg1 "fdiv" arg2))
            (CFBEQ   (:cmp-float-and-branch arg1 "feq" arg2 arg3))
            (CFBNE   (:cmp-float-and-branch arg1 "fne" arg2 arg3))
            (CFBLT   (:cmp-float-and-branch arg1 "flt" arg2 arg3))
            (CFBLE   (:cmp-float-and-branch arg1 "fle" arg2 arg3))
            (CFBGT   (:cmp-float-and-branch arg1 "fgt" arg2 arg3))
            (CFBGE   (:cmp-float-and-branch arg1 "fge" arg2 arg3))
            (CVFTOA  ; LLM3 src strg cnt
	             (:wt1 (:opw arg3) " = llrt_cvftoa (" (:opr arg1) ", " 
			                                  (:opr arg2) ");"))
            (CVATOF  ; LLM3 : strg slen lab flt
	             (let ((strg arg1) (slen arg2) (lab arg3) (flt arg4))
		       (:wt1 "<<ret>> " (:opw flt) " =  llrt_cvatof ("
			     (:opr strg) ", " (:opr slen) ");")))
            (FLOAT   ; LLM3 : op
	             (:wt1 "<<ret>> " (:opw arg1)
			   " = llrt_float (" (:opr arg1) ");"))
            (FIX     ; LLM3 : op
	             (:wt1 (:opw arg1) " = llrt_fix (" (:opr arg1) ");"))
            (SIN     (:float-funct-2 "sin"   arg1 arg2))
            (COS     (:float-funct-2 "cos"   arg1 arg2))
            (ASIN    (:float-funct-2 "asin"  arg1 arg2))
            (ACOS    (:float-funct-2 "acos"  arg1 arg2))
            (ATAN    (:float-funct-2 "atan"  arg1 arg2))
            (EXP     (:float-funct-2 "exp"   arg1 arg2))
            (LOG     (:float-funct-2 "log"   arg1 arg2))
            (LOG10   (:float-funct-2 "log10" arg1 arg2))
            (SQRT    (:float-funct-2 "sqrt"  arg1 arg2))
            (POWER   (:float-funct-3 "pow"   arg1 arg2 arg3))

            (ECOMP   ; LLM3 : op1 op2 lab1 lab2 lab3
                (let ((op1 arg1) (op2 arg2) (lab1 arg3) 
		      (lab2 arg4) (lab3 (nth 5 obj)))
                     (:wn1 "if (((UFix) " (:opr op1) 
			   ") < ((UFix) " (:opr op2) "))")
		     (:goto-label-at lab1 "")
                     (:wn1 "else if (((UFix) " (:opr op1) 
			   ") > ((UFix) " (:opr op2) "))")
                     (:goto-label-at lab3 "")
                     (:wn1 "else")
                     (:goto-label-at lab2 "")))
            (EPLUS   ; LLM3 : op1 op2 op3 op4 op5
	        (let ((op1 arg1) (op2 arg2) (op3 arg3)
		      (op4 arg4) (op5 (nth 5 obj)))
	             (:wt1 "{register Adr aux;")
		     (:wt2 "aux = (Adr) " (:opr op1) " + (Adr) " (:opr op2)
			   " + (Adr) " (:opr op3) ";")
		     (:wt2 (:opw op4) " = (Ptr) (aux >> HIGHTSHIFT);")
		     (:wt2 (:opw op5) " = (Ptr) (aux & LOWMASK);}")))
            (ETIMES  ; LLM3 : op1 op2 op3 op4 op5 op6
	        (let ((op1 arg1) (op2 arg2) (op3 arg3)
		      (op4 arg4) (op5 (nth 5 obj)) (op6 (nth 6 obj)))
	             (:wt1 "{register Adr aux;")
		     (:wt2 "aux = (Adr) " (:opr op1) " * (Adr) " (:opr op2)
			   " + (Adr) " (:opr op3) " + (Adr) " (:opr op4) ";")
		     (:wt2 (:opw op5) " = (Ptr) (aux >> HIGHTSHIFT);")
		     (:wt2 (:opw op6) " = (Ptr) (aux & LOWMASK);}")))
            (EDIVIDE ; LLM3 : op1 op2 op3 op4 op5
	        (let ((op1 arg1) (op2 arg2) (op3 arg3)
		      (op4 arg4) (op5 (nth 5 obj)))
	             (:wt1 "{register Adr aux;")
		     (:wt2 "aux = (Adr) " (:opr op1) ";")
		     (:wt2 "aux = (aux << HIGHTSHIFT) | ((Adr)" (:opr op2) ");")
		     (:wt2 (:opw  op5) " = (Ptr) (aux % ((Adr) " (:opr op3) "));")
		     (:wt2 "aux = aux / ((Adr) " (:opr op3) ");")
		     (:wt2 (:opw op4) " = (Ptr) ((UFix) aux);}")))


; .SSection "Les instructions sur les vecteurs"

            (BTVECT  (:cmp-type-inside  arg1 'BVECT 'BSTRG arg2))
            (BFVECT  (:cmp-type-outside arg1 'BVECT 'BSTRG arg2))
            (HPXMOV  ; (HPXMOV vect ind dest)
                     (:wt1 (:opw arg3) " = (" (:opr arg1)
			   "->Val + 2 + " (:fixpos arg2) ")->Val;"))
            (HPMOVX  ; (HPMOVX val vect ind)
                     (:wt1 "(" (:opr arg2) "->Val + 2 + " (:fixpos arg3)
			   ")->Val = " (:opr arg1) ";"))
            (HPMOVM  ; LLM3 : size vects inds vectd indd
                (let ((size arg1) (vects arg2) (inds arg3) 
                      (vectd arg4) (indd (nth 5 obj)))
                     (:wt1 "{register Ptr r1, r2; register int r3;")
                     (:wt2 "r1 = (" (:opr vects) "->Val + 2);")
                     (:wt2 "r2 = (" (:opr vectd) "->Val + 2);")
                     (:wt2 "r3 = " (:fixpos size) ";")
                     (if (and (equal inds ''0) (equal indd ''0))
			 (:wt2 "while (r3--) (r2++)->Val = (r1++)->Val;}")
                         (progn
                            (:wt2 "if ((r1 == r2) && (" (:fixpos inds) " < " 
				  (:fixpos indd) ")) {")
                            (:wt3 "r1 += r3 + " (:fixpos inds) ";")
                            (:wt3 "r2 += r3 + " (:fixpos indd) ";")
                            (:wt3 "while (r3--) (--r2)->Val = (--r1)->Val;")
                            (:wt2 " } else {")
                            (:wt3 "r1 += " (:fixpos inds) ";")
                            (:wt3 "r2 += " (:fixpos indd) ";")
                            (:wt3 "while (r3--) (r2++)->Val = (r1++)->Val;}}")))))

; .SSection "Les instructions sur les chai^nes de caracte`res et les caracte`res"

            (BTSTRG  (:cmp-type-inside  arg1 'BSTRG 'BSYMB arg2))
            (BFSTRG  (:cmp-type-outside arg1 'BSTRG 'BSYMB arg2))
            (HBXMOV  ; (HBXMOV strg ind dest)
                     (:wt1 (:opw arg3)
			   " = (Ptr) ((unsigned char) *(((char *) (" 
			   (:opr arg1)
			   "->Val + 2)) + " (:fixpos arg2) "));"))
            (HBMOVX  ; (HBMOVX val strg ind)
                     (:wt1 "*((char *) (" (:opr arg2) "->Val + 2) + "
			   (:fixpos arg3) ") = (char) " (:opr arg1) ";"))
            (HBMOVM  ; LLM3 : size strgs inds strgd indd
                (let ((size arg1) (strgs arg2) (inds arg3) 
                      (strgd arg4) (indd (nth 5 obj)))
                     (:wt1 "{register char *r1, *r2; register int r3;")
                     (:wt2 "r1 = (char *) (" (:opr strgs) "->Val + 2);")
                     (:wt2 "r2 = (char *) (" (:opr strgd) "->Val + 2);")
                     (:wt2 "r3 = " (:fixpos size) ";")
                     (if (and (equal inds ''0) (equal indd ''0))
			 (:wt1 " while (r3--) *r2++ = *r1++;}")
                         (progn
                            (:wt2 "if ((r1 == r2) && (" (:fixpos inds) " < " 
				  (:fixpos indd) ")) {")
                            (:wt3 "r1 += r3 + " (:fixpos inds) ";")
                            (:wt3 "r2 += r3 + " (:fixpos indd) ";")
                            (:wt3 "while (r3--) *--r2 = *--r1;")
                            (:wt2 " } else {")
                            (:wt3 "r1 += " (:fixpos inds) ";")
                            (:wt3 "r2 += " (:fixpos indd) ";")
                            (:wt3 "while (r3--) *r2++ = *r1++;}}")))))
             (HBTEQ  ; LLM3 : size strg1 ind1 strg2 ind2 lab
                (let ((size arg1) (strg1 arg2) (ind1 arg3) 
                      (strg2 arg4) (ind2 (nth 5 obj))
                      (lab (nth 6 obj)) (et (:gen-new-symbol 'hbteq_)))
                            (:wt1 "{register char *r1, *r2; register int r3;")
                            (:wt2 "r1 = (char *) (" (:opr strg1) "->Val + 2);")
                            (when (nequal ind1 ''0)
				  (:wt2 "r1 += " (:fixpos ind1) ";"))
                            (:wt2 "r2 = (char *) (" (:opr strg2) "->Val + 2);")
                            (when (nequal ind2 ''0)
				  (:wt2 "r2 += " (:fixpos ind2) ";"))
                            (:wt2 "r3 = " (:fixpos size) ";")
                            (:wt2 "if (r3 > 0) while (r3--) if (*r2++ != *r1++) "
				  "goto " et ";")
                            (:wn2)
                            (:goto-label-at lab "}")
                            (:wt1 et ":")))
            (MOVBM   ; LLM3 : size src strg
                (let ((size arg1) (src arg2) (strg arg3))
                     (:wt1 "{register char *r1, *r2; register int r3;")
                     (:wt2 "r1 = (char *) " (:opr src) ";")
                     (:wt2 "r2 = (char *) (" (:opr strg) "->Val + 2);")
                     (:wt2 "r3 = " (:fixpos size) " + 1;")
                     (:wt2 "if (r3 > 0) while (r3--) *r2++ = *r1++;}")))
            (HGSIZE  ; LLM3 : HGSIZE op dest
                     (:wt1 (:opw arg2) " = (" (:opr arg1) "->Val + 1)->Val;"))
            (HSSIZE  ; LLM3 : HSSIZE val op
                     (:wt1 "(" (:opr arg2) "->Val + 1)->Val = " (:opr arg1) ";"))
            (HGOBJ   ; LLM3 : op dest
                     (:wt1 (:opw arg2) " = (" (:opr arg1) "->Val)->Val;"))
            (HSOBJ   ; LLM3 : HSOBJ val op
                     (:wt1 "(" (:opr arg2) "->Val)->Val = " (:opr arg1) ";"))
            (UPPERC  ; LLM3 : arg1
                     (:wt1 (:opw arg1) " = (Ptr) (" (:fixpos arg1) " - 32);"))
            (LOWERC  ; LLM3 : arg1
                     (:wt1 (:opw arg1) " = (Ptr) (" (:fixpos arg1) " + 32);"))

; .SSection "Les instructions spe'ciales rajoute'es par 'modpeep.ll'"

	    (CALLEQ        (:call-ptr-test-direct "=="))
	    (CALLNEQ       (:call-ptr-test-direct "!="))
	    (CALLEQN       (:call-fix-test-direct "=="))
	    (CALLNEQN      (:call-fix-test-direct "!="))
	    (CALLLT        (:call-fix-test-direct "<"))
	    (CALLLE        (:call-fix-test-direct "<="))
	    (CALLGT        (:call-fix-test-direct ">"))
	    (CALLGE        (:call-fix-test-direct ">="))

	    (CALLFIXP      (:call-type-test-direct ''0 'BNUMB))
	    (CALLVECTORP   (:call-type-test-direct 'BVECT 'BSTRG))
	    (CALLSTRINGP   (:call-type-test-direct 'BSTRG 'BSYMB))
	    (CALLCONSP     (:call-type-test-direct 'BCONS 'ECONS))
	    
	    (CALLERROR     (:call-rt-direct-0 "llrt_call_error"))
	    (CALLLENGTH    (:call-rt-direct-1 "llrt_call_length"))
	    (CALLNREVERSE  (:call-rt-direct-1 "llrt_call_nreverse"))
	    (CALLMEMQ      (:call-rt-direct-2 "llrt_call_memq"))
	    (CALLASSQ      (:call-rt-direct-2 "llrt_call_assq"))
	    (CALLCASSQ     (:call-rt-direct-2 "llrt_call_cassq"))
	    (CALLRASSQ     (:call-rt-direct-2 "llrt_call_rassq"))

            (NLIST   ; == (JCALL #:LLCP:NLIST)
#| ?!?!?
	             (:wt1 "{register unsigned long count, max;")
		     (:wt2 "max = (unsigned long) ((UFix) ((Ptr) " (:opr 'a4) "));")
		     (:wt2 (:opw 'a1) " = " (:opr 'nil) ";")
		     (:wt2 "for (count=0; count<max; count++) {")
		     (:wt3 "<<ret>> " (:opw 'a1) " = llrt_cons ((--" 
			   (:opm 'sp) ")->Val, " (:opr 'a1) ");}}"))
|#
                     (let* ((lab1 (:gen-new-symbol 'nlist_))
			    (lab2 (:gen-new-symbol 'nlist_))
			    (:local-labels-module 
			          (mcons lab1 lab2 :local-labels-module)))
		       (:instruction '(MOV NIL A1))
		       (:instruction `(BRA ,lab2))
		       (:instruction lab1)
		       (:instruction '(POP A2))
		       (:instruction '(CONS A2 A1))
		       (:instruction lab2)
		       (:instruction `(SOBGEZ A4 ,lab1))))

            (ICALLG   ; new instruction to call an external procedure
	              ; (ICALLG <stack> <name> <larg>)
	              ;    <larg> = (typeret arg1 typearg1 arg2 typearg2 ...)
	              (:callg-generate arg1 arg2 arg3))
                                
; .SSection "Les pseudos-instructions spe'ciales LLM3"

            (LISTEXT
	                (let ((liname
			       (mapcar (lambda (x)
					 (catenate :prefix-external-llm3 x))
				       arg1)))
			  (mapc (lambda (name iname)
				  (newl :llm3-functions
					(cons name iname)))
				arg1 liname)))
            (XREFI 
	              (with ((outchan :include-channel))
			    (let ((val (assq arg2 :register-attribute-list)))
			         (if val
				     (print "extern Ptr " 
					    :prefix-impure-llm3 arg2 ";")
				     (:wt0  "extern Ptr " 
					    (:opr arg2) ";")))))
            (XREFP)
	    (XDEFI)
	    (XDEFP)
	    (LABEL)
	    (MAKFNT  ; LLM3 : nom plen pname
                     (let ((in (:internal-variable arg1))
			   (llname))
		       (:wt1 "{<<ret>> llrt_inisymb (" (:opr arg2) 
			     ", (Ptr) " (:strg arg3)
			     ", "  (:opr `(@ ,arg1))
			     ", (Ptr) &" in
			     ", (Ptr) " :prefix-ftype-llm3 arg1 ");}")
		       ;; stocke le nom LL
		       (setq llname (symbol () (cadr arg3)))
		       (if (assq arg1 :llm3-ll-name)
			   (:print-error "MAKFNT: this name already exists: " arg1)
		           (when (rassq llname :llm3-ll-name)
				 (setq llname (symbol 'gell llname))
				 (:print-error "MAKFNT: another name for: " llname))
			   (newl :llm3-ll-name (cons arg1 llname)))
		       ;; c,a fait perdre du temps et de la place ici.
		       (:no-register-use)))
	    (MAKCST  ; LLM3 : nom plen pname
                     (let ((in (:internal-variable arg1)))
		       (:wt1 "{<<ret>> llrt_inicst (" (:opr arg2) ", (Ptr) "
			     (:strg arg3) ", (Ptr) &" in ");}"))
		     ; c,a fait perdre du temps et de la place ici.
	             (:no-register-use))
	    (INTEST   ; LLM3 : 
                       (:wt1 "if (" (:opr 'itcount) " != 0) "
			     "{<<ret>> llrt_ithard ();}"))
	    (IFEQ)
	    (ENDC)
	    (PURE)
	    (IMPURE)
	    (LADR    ; an LLM3 address
	          (with ((outchan :include-channel))
			(print "extern Ptr " :prefix-impure-llm3 arg1 
			       " = " arg2 ";")))

; .SSection "Les instructions spe'cialise'es"

            (GFTYPE  ; LLM3 : symb dest
                     (setq arg1 `(PFTYPE ,arg1))
                     (:wt1 "{register UFix aux;")
                     (:wt2 "aux = (UFix) (" (:opr arg1) ");")
                     (:wt2 (:opw arg2) " = (Ptr) aux;}"))
            (SFTYPE  ; LLM3 : src symb
                     (setq arg2 `(PFTYPE ,arg2))
                     (:wt1 "{register int aux1, aux2;")
                     (:wt2 "aux1 = " (:int arg2) ";")
                     (:wt2 "aux1 = aux1 & HIGHTMASK;")
                     (:wt2 "aux2 = " (:int arg1) ";")
                     (:wt2 "aux1 = aux1 | aux2;")
                     (:wt2 (:opr arg2) " = (Ptr) aux1;}"))
            (GPTYPE  ; LLM3 : symb dest
                     (setq arg1 `(PFTYPE ,arg1))
                     (:wt1 "{register int aux;")
                     (:wt2 "aux = " (:int arg1) ";")
                     (:wt2 "aux = aux >> HIGHTSHIFT;")
                     (:wt2 (:opw arg2) " = (Ptr) aux;}"))
            (SPTYPE  ; LLM3 : src symb
                     (setq arg2 `(PFTYPE ,arg2))
                     (:wt1 "{register int aux1, aux2;")
                     (:wt2 "aux1 = " (:int arg2) ";")
                     (:wt2 "aux2 = " (:int arg1) ";")
                     (:wt2 "aux2 = aux2 << HIGHTSHIFT;")
                     (:wt2 "aux1 = aux1 | aux2;")
                     (:wt2 (:opr arg2) " = (Ptr) aux1;}"))

; .SSection "Les instructions de construction de listes"

            (CONS    ; LLM3 : car,cdr/dest
	             ;; the two ways to generate CONS
	             (if :open-cons-p
			 (progn
			   (:wt1 "{register Ptr aux; aux = " (:opr 'fcons) ";")
			   (:wt2 "if (aux == " (:opr 'nil) ") "
				 "{<<ret>> llrt_gccons(); aux = " (:opr 'fcons) ";}")
			   (:wt2 (:opr 'fcons) " = (aux + 1)->Val; aux->Val = "
				 (:opr arg1) ";")
			   (:wt2 "(aux + 1)->Val = " (:opr arg2) "; " (:opw arg2)
				 " = aux;}"))
		         (:wt1 "<<ret>> " (:opw arg2) " = llrt_cons (" (:opr arg1)
			       ", " (:opr arg2) ");")))
		         
            (XCONS   ; LLM3 : cdr,car/dest
	             ;; the two ways to generate CONS
	             (if :open-cons-p
			 (progn
			   (:wt1 "{register Ptr aux; aux = " (:opr 'fcons) ";")
			   (:wt2 "if (aux == " (:opr 'nil) ") "
				 "{<<ret>> llrt_gccons(); aux = " (:opr 'fcons) ";}")
			   (:wt2 (:opr 'fcons) " = (aux + 1)->Val; aux->Val = "
				 (:opr arg2) ";")
			   (:wt2 "(aux + 1)->Val = " (:opr arg1) "; " (:opw arg2)
				 " = aux;}"))
		         (:wt1 "<<ret>> " (:opw arg2) " = llrt_cons (" (:opr arg2)
			       ", " (:opr arg1) ");")))

            (NCONS   ; LLM3 : car/dest
	             ;; the two ways to generate CONS
	             (if :open-cons-p
			 (progn
			   (:wt1 "{register Ptr aux; aux = " (:opr 'fcons) ";")
			   (:wt2 "if (aux == " (:opr 'nil) ") "
				 "{<<ret>> llrt_gccons(); aux = " (:opr 'fcons) ";}")
			   (:wt2 (:opr 'fcons) " = (aux + 1)->Val; aux->Val = "
				 (:opr arg1) ";")
			   (:wt2 "(aux + 1)->Val = " (:opr 'nil) "; " 
				 (:opw arg1) " = aux;}"))
		         (:wt1 "<<ret>> " (:opw arg1) " = llrt_cons (" (:opr arg1)
			       ", " (:opr 'nil) ");")))

; .SSection "Les instructions sur le bit invisible"

            (STINVSBL ; LLM3 : accu
                      (:mactabin arg1)
                      (:wt2 (:opr 'btbin) "[aux] |= mask;}"))
            (CLINVSBL ; LLM3 : accu
                      (:mactabin arg1)
                      (:wt2 (:opr 'btbin) "[aux] &= ~mask;}"))
            (BTINVSBL ; LLM3 : accu lab
                      (:mactabin arg1)
                      (:wt2 "aux = " (:opr 'btbin) "[aux] & mask;")
                      (:wn2 "if (aux != 0)")
                      (:goto-label-at arg2 "}"))
            (BFINVSBL ; accu lab
                      (:mactabin arg1)
                      (:wt2 "aux = " (:opr 'btbin) "[aux] & mask;")
                      (:wn2 "if (aux == 0)")
                      (:goto-label-at arg2 "}"))

; .SSection "Les instructions du GC"

            (STMARK   ; LLM3 : accu
                      (:mactabgc arg1)
                      (:wt2 (:opr 'btbgc) "[aux] |= mask;}"))
            (BTMARK   ; LLM3 : accu lab
                      (:mactabgc arg1)
                      (:wt2 "aux = " (:opr 'btbgc) "[aux] & mask;")
                      (:wn2 "if (aux != 0)")
                      (:goto-label-at arg2 "}"))
            (BFMARK   ; LLM3 : accu lab
                      (:mactabgc arg1)
                      (:wt2 "aux = " (:opr 'btbgc) "[aux] & mask;")
                      (:wn2 "if (aux == 0)")
                      (:goto-label-at arg2 "}"))
            (TCMARK   ; LLM3 : accu lab
                      (:mactabgc arg1)
                      (:wn2 "if (" (:opr 'btbgc) "[aux] & mask) {" 
			    (:opr 'btbgc) "[aux] &= ~mask;")
                      (:goto-label-at arg2 "}}"))

            (CONVTOK  ; LLM3 : first last dest
                      (:wt1 (:opw arg3) " = (Ptr) (((Adr) " (:opr arg2) " - (Adr) " 
			   (:opr arg1) ") >> 10);"))
            (INCRINK  ; LLM3 : unit k
	              (:incrink arg1 arg2))
            (SWPCONS  ; LLM3 : 
                      (:swpcons arg1 arg2 arg3 arg4))
            (GCMARK   ; LLM3 :
                      (:gcmark))
            (GCSTART  )
            (GCSTOP   )
            (SFCONS   ; LLM3 : op
                      (:mov-instruction arg1 'FCONS))
            (GFCONS   ; LLM3 : op
                      (:mov-instruction 'FCONS arg1))
            (NXSYMB   ; LLM3 : op lab
                      (:next-chunk arg1 8 'BCONS arg2))
            (NXNUMB   ; LLM3 : op lab
                      (:next-chunk arg1 1 'BFLOAT arg2))
            (NXFLOAT  ; LLM3 : op lab
	              ; en theorie (sizeof(union LL_FLOAT) / sizeof(Ptr))
                      ; mais a cause de la taille fixe'e dans commmon : 2
                      (:next-chunk arg1 2 'BVECT arg2))
            (NXVECT   ; LLM3 : op lab
                      (:next-chunk arg1 2 'BSTRG arg2))
            (NXSTRG   ; LLM3 : op lab
                      (:next-chunk arg1 2 'BSYMB arg2))
            (NXCONS   ; LLM3 : op lab
                      (:next-chunk arg1 2 'ECONS arg2))

; .SSection "Instructions sur le TAS"

            (CHBLT    ; LLM3 : op1 op2 lab
                      (:cmp-ptr-and-branch arg1 "<" arg2 arg3))
            (NXHB     ; LLM3 : size op
                      ; Pour e^tre sur qu'il n'y ait pas de proble`me d'alignement,
                      ; on debute toutes les adresses du tas sur des frontie`res de 
                      ; mots (32 bits en ge'ne'ral). 
                      ; Attention on rajoute a` la main le caracte`re `\0`.
                      (:wt1 (:opm arg2) " += 3 + ((" 
			    (:fixpos arg1) ") / sizeof(Ptr));"))
            (NXHP     ; LLM3 : size op
                      (:wt1 (:opw arg2) " = (" 
			    (:opr arg2) " + 2 + " (:fixpos arg1) ");"))
            (NXHF     ; LLM3 : heap
                      )
            (NXHS     ; LLM3 : heap
                      )
            (HBLT     ; LLM3 : ssrc esrc sdest
                 (let ((ssrc arg1) (esrc arg2) (sdst arg3))
                      (:wt1 "{register Table src, dst, fin;")
                      (:wt2 "src = (Table) " (:opr ssrc) ";")
                      (:wt2 "dst = (Table) " (:opr sdst) ";")
                      (:wt2 "fin = (Table) " (:opr esrc) ";")
                      (:wt2 "while (src != fin) *dst++ = *src++;}")))

; .SSection "Les instructions sur le canal terminal"

            (TTYIN    ; LLM3 : op
	              (:wt1 (:opw arg1) " = (Ptr) llrt_ttyin();"))
	    (TTYIS    ; LLM3 : op cc
	              (:wt1 "{register int aux;")
		      (:wt2 "aux = llrt_ttys(llrt_charttys);")
		      (:wt2 (:opw arg2) " = (Ptr) aux;")
		      (:wt2 "aux = *llrt_charttys;")
		      (:wt2 (:opw arg1) " = (Ptr) aux;}"))
	    (TTYINSTR ; LLM3 : strg count
	              (:wt1 (:opw arg2) " = (Ptr) llrt_ttyinstr(" 
			    (:opr arg1) "->Val + 2,("
			    (:opr arg1) "->Val + 1)->Val);"))
            (TTYMSG   ; LLM3 : n strg
                      (:wt1 "llrt_ttyout(" (:fixpos arg1) ", " (:strg arg2) ");"))
            (TTYCRLF  ; LLM3 :
                      (:wt1 "llrt_ttyout(2, ""\n\r"");"))
            (TTYSTRG  ; LLM3 : n strg
                      (:wt1 "llrt_ttyout(" (:fixpos arg1) ", " 
			    (:opr arg2) "->Val + 2);"))

; .SSection "Les instructions sur les fichiers"

            (INFILE   ; LLM3 : chan strg cc
                      (:file-funct 'llrt_infile arg1 arg2 arg3))
            (OUFILE   ; LLM3 : chan strg cc
                      (:file-funct 'llrt_oufile arg1 arg2 arg3))
            (APFILE   ; LLM3 : chan strg cc
                      (:file-funct 'llrt_apfile arg1 arg2 arg3))
            (INFILEB  ; LLM3 : chan strg cc
                      (:file-funct 'llrt_infile arg1 arg2 arg3))
            (OUFILEB  ; LLM3 : chan strg cc
                      (:file-funct 'llrt_oufile arg1 arg2 arg3))
            (APFILEB  ; LLM3 : chan strg cc
                      (:file-funct 'llrt_apfile arg1 arg2 arg3))
            (INBF     ; LLM3 : chan strg size cc
                      (:io-funct 'llrt_inbf arg1 arg2 arg3 arg4))
            (INBFB    ; LLM3 : chan strg size cc
                      (:io-funct 'llrt_inbfb arg1 arg2 arg3 arg4))
            (OUTF     ; LLM3 : chan strg size cc
	              (:wt1 (:opw arg4) " = (Ptr) llrt_outf(" (:opr arg1) 
			    "," (:opr arg3) "," (:opr arg2) "->Val + 2);"))
            (OUTFL    ; LLM3 : chan strg size cc
	              (:wt1 (:opw arg4) " = (Ptr) llrt_outfl(" (:opr arg1)
			    "," (:opr arg3) "," (:opr arg2) "->Val + 2);"))
            (OUTFLB   ; LLM3 : chan strg size cc
	              (:wt1 (:opw arg4) " = (Ptr) llrt_outfl(" (:opr arg1)
			    "," (:opr arg3) "," (:opr arg2) "->Val + 2);"))
            (FCLOS    ; LLM3 : chan cc
	              (:wt1 (:opw arg2) " = (Ptr) llrt_fclos(" (:opr arg1) ");"))
            (FDELE    ; LLM3 : strg cc
	              (:system-call-1-cc 'llrt_fdele arg1 arg2))
	    (FRENA    ; LLM3 : strg1 strg2 cc
	              (:system-call-2-cc  'llrt_frena arg1 arg2 arg3))
	    (FCOPY    ; LLM3 : strg1 strg2 cc
	              (:system-call-2-cc  'llrt_fcopy arg1 arg2 arg3))
	    (FPROBE   ; LLM3 : strg cc
	              (:system-call-1-cc 'llrt_fprobe arg1 arg2))
	    (MKDIR    ; LLM3 : strg cc
	              (:system-call-1-cc 'llmkdir arg1 arg2))
	    (RMDIR    ; LLM3 : strg cc
	              (:system-call-1-cc 'llrmdir arg1 arg2))
	    (CORSAV   ; LLM3 : strg cc
		      (:system-call-1-cc 'llrt_corsav arg1 arg2)
                      ; c'est vraiment pas le moment de jouer avec les registres.
		      (:no-register-use))
	    (COREST   ; LLM3 : strg cc
		      (:system-call-1-cc 'llrt_corest arg1 arg2)
                      ; c'est vraiment pas le moment de jouer avec les registres.
		      (:no-register-use))

; .SSection "Les instructions syste`me"

	    (CLINE    ; LLM3 : strg
	              (:system-call-1 'llrt_cline arg1))
	    (DATE     ; LLM3 :op
	              (:system-call-1 'cdate arg1))
	    (GETENVRN ; LLM3 : strg1 strg2 cnt
	              (:system-call-2-cc 'getenvrn arg1 arg2 arg3))
	    (GETGLOBAL ; LLM3 : strg op
	              (:system-call-1-cc 'llrt_getgloba arg1 arg2))
	    (CALLG    ; LLM3 : op1 op2
	              (:wt1 (:opw arg2) " = (Ptr) llrt_callg(" 
			    (:opr arg1) "," (:opr arg2) ");")
                      ; c'est vraiment pas le moment de jouer avec les registres.
		      (:no-register-use))
; ?!?!?! check les <<ret>> en cas d'alocation!!!
	    (RUNTIME  ; LLM3 : op
	              (:wt1 "<<ret>> " (:opw arg1) " = llrt_runtime();"))
	    (SLEEP    ; LLM3 : op
	              (:wt1 "llrt_sleep (" (:opr arg1) ");"))
	    (SETALARM ; LLM3 : op
	              (:wt1 "<<ret>> " (:opw arg1) 
			    " = llrt_setalarm (" (:opr arg1) ");"))

; .SSection "Les instructions d'acce`s a` la me'moire"

            (ADRHL    ; LLM3 : adr h l
               (let ((adr arg1) (h arg2) (l arg3))
                      (:wt1 (:opw h) " = (Ptr) ((Adr) " (:opr adr) " >> HIGHTSHIFT);")
                      (:wt1 (:opw l) " = (Ptr) ((Adr) " (:opr adr) " & LOWMASK);")))
            (HLADR    ; LLM3 : h l adr
	       (let ((h arg1) (l arg2) (adr arg3))
		     (:wt1 "{register Ptr aux;")
		     (:wt2 " aux = (Ptr) (((Adr) " (:opr h) 
                           " << HIGHTSHIFT) + (Adr) " (:opr l) ");")
		     (:wt2 " aux = (Ptr) ((long) aux | LLADRBIAS);")
		     (:wt2 (:opw adr) " = aux;}")))
            (ADDADR  ; LLM3 : A3|A1 + A4|A2 -> A3|A1
                     (:wt1 "{register int aux0, aux1, aux2;")
                     (:wt2 "aux0 = (int) ((UFix) " (:opr 'a3) 
			   "); aux1 = aux0 << HIGHTSHIFT;")
                     (:wt2 "aux0 = (int) ((UFix) " (:opr 'a1)
			   "); aux1 = aux0 + aux1;")
                     (:wt2 "aux0 = (int) ((UFix) " (:opr 'a4)
			   "); aux2 = aux0 << HIGHTSHIFT;")
                     (:wt2 "aux0 = (int) ((UFix) " (:opr 'a2)
			   "); aux2 = aux0 + aux2;")
                     (:wt2 "aux1 = aux1 + aux2;")
                     (:wt2 "aux0 = (aux1 >> HIGHTSHIFT) & LOWMASK; "
			   (:opw 'a3) " = (Ptr) aux0;")
                     (:wt2 "aux0 = aux1 & LOWMASK; " (:opw 'a1) " = (Ptr) aux0;}"))
            (SUBADR  ; LLM3 : A3|A1 - A4|A2 -> A3|A1
                     (:wt1 "{register int aux0, aux1, aux2;")
                     (:wt2 "aux0 = (int) ((UFix) " (:opr 'a3)
			   "); aux1 = aux0 << HIGHTSHIFT;")
                     (:wt2 "aux0 = (int) ((UFix) " (:opr 'a1)
			   "); aux1 = aux0 + aux1;")
                     (:wt2 "aux0 = (int) ((UFix) " (:opr 'a4)
			   "); aux2 = aux0 << HIGHTSHIFT;")
                     (:wt2 "aux0 = (int) ((UFix) " (:opr 'a2)
			   "); aux2 = aux0 + aux2;")
                     (:wt2 "aux1 = aux1 - aux2;")
                     (:wt2 "aux0 = (aux1 >> HIGHTSHIFT) & LOWMASK; "
			   (:opw 'a3) " = (Ptr) aux0;")
                     (:wt2 "aux0 = aux1 & LOWMASK; " (:opw 'a1) " = (Ptr) aux0;}"))
            (MEMSET  ; LLM3 : arg1 -> MEM(arg2)
	             (:wt1 "{register Fix *adr;")
		     (:wt2 "adr = (Fix *) " (:opr arg2) ";")
		     (:wt2 "*adr = " (:fix arg1) ";}"))
            (MEMGET  ; LLM3 : MEM(arg1) -> arg2
	             (:wt1 "{register Fix *adr;")
		     (:wt2 "adr = (Fix *) " (:opr arg2) ";")
		     (:wt2 (:opm arg2) " = (Ptr) ((Fix) *adr);}"))
            (MEMMOVM ; LLM3 : src end dest
	             (:wt1 "{register Fix *src, *end, *dst;")
		     (:wt2 "src = (Fix *) " (:opr arg1) ";")
		     (:wt2 "end = (Fix *) " (:opr arg2) ";")
		     (:wt2 "dst = (Fix *) " (:opr arg3) ";")
		     (:wt2 "while (src < end) *dst++ = *src++;}"))

	    (HOVNI   ; LLM3 macro
	             (:wt1 "llovni(" (:opr arg1) "," (:opr arg2) ","
			   (:opr arg3) "," (:opr arg4) ");"))

            (t (error ':instruction 'modtoc obj)))))))


; .Section "Les Fonctions auxiliaires de ge'ne'ration des extensions LLM3"

(defun :mov-instruction (src dst)
  ;; generate a MOV instruction
  (:wt1 (:opw dst) " = " (:opr src) ";"))

(defun :system-call-1 (fnt strg)
   (:wt1 fnt "(" (:opr strg) "->Val + 2);"))

(defun :system-call-1-cc (fnt strg cc)
   (:wt1 (:opw cc) " = (Ptr) " fnt "(" (:opr strg) "->Val + 2);"))
   
(defun :system-call-2-cc (fnt strg1 strg2 cc)
   (:wt1 (:opw cc) " = (Ptr) " fnt "(" (:opr strg1) "->Val + 2, " 
	 (:opr strg2) "->Val + 2);"))

(defun :file-funct (fnt chan strg cc)
    (:wt1 (:opw cc) " = (Ptr) " fnt "(" (:opr chan) ","
	  (:opr strg) "->Val + 2);"))

(defun :io-funct (fnt chan strg size cc)
    (:wt1 (:opw cc) " = (Ptr) " fnt "(" (:opr chan) ", " 
	  (:opr strg) "->Val + 2, &" (:opr size) ");")
    ; a` cause du &
    (:no-register-use))

(defun :internal-variable (name)
  (let ((name (catenate :prefix-dot-llm3 name)))
    (when (not (member name :internal-variables-list))
	  (newl :internal-variables-list name)
	  (with ((outchan :include-channel))
		(:wt0 "Ptr " name " = 0;")))
    name))

(defun :mactabgc (obj)
  ;; pour la table du GC :
  ;; Calcule dans le registre "aux" un index de Table associe' a` "obj".
  ;; Calcule dans le registre "mask" le masque associe'e a` "obj".
  (:wt1 "{register TableElem aux, mask;")
  (:wt2 "aux = (TableElem) ((TableElem) " (:opr obj) 
	" - (TableElem) " (:opr 'BNUMB) ");")
  ;; Calcule dans "aux" l'index de bits.
  (:wt2 "aux >>= PTR2_SHIFT;")
  ;; Calcule dans "mask" l'index de bits au niveau caracte`re.
  (:wt2 "mask = 1; mask <<= (aux & ELEM_MASK);")
  ;; Calcule dans "aux" l'index de caracte`re.
  (:wt2 "aux >>= ELEM_SHIFT;"))


(defun :mactabin (obj)
  ;; pour la table des bits invisibles :
  ;; Calcule dans le registre "aux" un index de Table associe' a` "obj".
  ;; Calcule dans le registre "mask" le masque associe'e a` "obj".
  (:wt1 "{register TableElem aux, mask;")
  (:wt2 "aux = (TableElem) ((TableElem) " (:opr obj) 
	" - (TableElem) " (:opr 'BCONS) ");")
  (:wt2 "aux >>= PTR2_SHIFT;")
  ;; Calcule dans "mask" l'index de bits au niveau caracte`re.
  (:wt2 "mask = 1; mask <<= (aux & ELEM_MASK);")
  ;; Calcule dans "aux" l'index de caracte`re.
  (:wt2 "aux >>= ELEM_SHIFT;"))

(defun :next-chunk (op incr borne lab)
  ;; Incre'mente "op" de "incr" Ptr et teste si le re'sultat ne
  ;; de'passe pas "borne".
  (:wt1 (:opm op) " += " (:fixpos incr) ";")
  (:cmp-ptr-and-branch op "<" borne lab))

(defun :incrink (arg1 arg2)
  ;; incre'mente arg1, si le re'sultat de'passe 1024,
  ;; mise a` 0 de arg1 et incre'mentation de arg2.
  (let* ((labok (:gen-new-symbol 'incrink_))
	 (:local-labels-module (cons labok :local-labels-module)))
    (:wt1 "{register int aux;")
    (:wt2 "aux = (int) (" (:fix arg1) " + 1);")
    (:wt2 "if (aux < 1024) {")
    (:wt3 (:opw arg1) " = (Ptr) ((UFix) aux);")
    (:wt2 " } else {")
    (:wt3 (:opw arg1) " = (Ptr) 0;")
    (:wt3 (:opw arg2) " = (Ptr) ((UFix) (" (:fix arg2) " + 1));}}")))


(defun :swpcons (curfreel curcons freelu freelm)
  (:wt1 "{ register int reg_count, i;")
  (:wt1 "  register TableElem  aux, reg_mask, reg_bask;")
  (:wt1 "  register Table regbtbgc, regbtbin;")
  (:wt1 "  register Ptr regecons;")
  (:wt1 "  reg_count = 0;")
  (:wt1 "  regbtbin = GIbtbin;")
  (:wt1  " regecons = GIecons;")
  (:wt1 "  aux = (TableElem) ((TableElem) " (:opr curcons) 
	" - (TableElem) " (:opr 'BNUMB) ");")
  (:wt1 "  aux >>= PTR2_SHIFT + ELEM_SHIFT;")
  (:wt1 "  regbtbgc = &GIbtbgc[aux];")
  (:wt1 "  do {")
  (:wt2 "reg_mask = 1;")
  (:wt2 "reg_bask = *regbtbgc;")
  (:wt2 "for (i=0; i<TABLE_ELEM_NB_OF_BIT; i++) {")
  (:wt3 "if (reg_bask & reg_mask) {")
  (:wt3 "} else {")
  (:wt4 (:opr `(CDR ,curcons)) " = " (:opr curfreel) ";")
  (:wt4 (:opr `(CAR ,curcons)) " = " (:opr 'nil) ";")
  (:wt4 (:opr curfreel) " = " (:opr curcons) ";")
  (:wt4 "reg_count++;")
  (:wt3 "}")
  (:wt3 (:opr curcons) " += 2;")
  (:wt3 "reg_mask <<= 1;")
  (:wt2 "}")
  (:wt2 "*regbtbin++ &= reg_bask;")
  (:wt2 "*regbtbgc++ = 0;")
  (:wt1 "} while (" (:opr curcons) " < regecons);")
  (:wt1 (:opw freelm) " = (Ptr) (reg_count >> 10);")
  (:wt1 (:opw freelu) " = (Ptr) (reg_count & 0x3FF);")
  (:wt1 "}"))

(defun :gcmark ()
  ;; suppose que l'e'tiquette juste au dessus est "mark"!!
  (let ((marki  (:gen-new-symbol 'gcmark_))
	(markc  (:gen-new-symbol 'gcmark_))
	(markr  (:gen-new-symbol 'gcmark_))
	(markt  (:gen-new-symbol 'gcmark_))
	(markl  (:gen-new-symbol 'gcmark_))
	(markv  (:gen-new-symbol 'gcmark_))
	(markv2 (:gen-new-symbol 'gcmark_)) 
	(markv4 (:gen-new-symbol 'gcmark_)))
    (let ((:local-labels-module 
	        (mcons marki markr markt markl :local-labels-module)))
 
  (:instruction marki)
       (:instruction (list 'BFLISP 'A1 markr))              ; je ne sais pas marquer.
       (:mactabgc 'A1)
       (:wn2 "if ((" (:opr 'btbgc) "[aux] & mask) != 0)")
       (:goto-label-at markr "")
       (:wt2 (:opr 'btbgc) "[aux] |= mask;}")
       (:instruction (list 'BTCONS 'A1 markl))     ; on privilegie les listes.
       (:instruction (list 'BTVECT 'A1 markv))     ; marquage spe'cialise' vecteurs
       (:instruction (list 'BTSTRG 'A1 markt))     ; marquage spe'cialise' chai^nes
   (:instruction markr)
       (:instruction (list 'RETURN))     
   (:instruction markt)                          ;;; marquage d'un type (vect/strg)
       (:instruction (list 'MOV '(TYP A1) 'A1))
       (:instruction (list 'BRA marki))
   (:instruction markl)
       (:instruction (list 'CHKSTK 'ESTACK 'ERRFSGC))  ;;; marque la liste dans A1
       (:instruction (list 'PUSH '(CDR A1)))       ; sauve le reste
       (:instruction (list 'MOV  '(CAR A1) 'A1))   ; l'e'le'ment de liste a` marquer.
       (:instruction (list 'PUSH `(@ ,markc)))
       (:instruction (list 'BRA marki))            ; re'curse sur le CAR     
   (:instruction markc)
       (:instruction (list 'POP  'A1))             ; re'cupe`re le reste
       (:instruction (list 'BRA 'mark))            ; ite`re sur les CDR
   (:instruction markv)                            ;;; marque le vecteur dans A1
       (:instruction (list 'PUSH 'A3))             ; A3/A4 inchange's dans MARK.
       (:instruction (list 'HGSIZE 'A1 'A3))       ; nombre d'e'le'ments du vecteur.
       (:instruction (list 'PUSH 'A1))             ; le vecteur (en &0)
       (:instruction (list 'CHKSTK 'ESTACK 'ERRFSGC))  ; erreur fatale!!
       (:instruction (list 'BRA markv4))           ; de'marre bien la boucle.
   (:instruction markv2)
       (:instruction (list 'HPXMOV '(& 0) 'A3 'A1)); e'le'ment suivant.
       (:instruction (list 'PUSH 'A3))
       (:instruction (list 'CALL 'mark))           ; marque l'e'le'ment quelconque.
       (:instruction (list 'POP 'A3))
   (:instruction markv4)
       (:instruction (list 'SOBGEZ 'A3 markv2))    ; on boucle sur le nb d'e'le'me.
       (:instruction (list 'POP 'A1))              ; le vecteur
       (:instruction (list 'POP 'A3))              ; A3/A4 inchange's dans MARK.
       (:instruction (list 'MOV '(TYP A1) 'A1))
       (:instruction (list 'BRA 'mark))

)))


; .Section "Les Fonctions auxiliaires de ge'ne'ration du CALLG"


(defun :callg-generate (arg1 arg2 arg3)
  ;; (ICALLG <stack> <name> <larg>)
  ;;    <stack> = number of objects in the stack
  ;;    <name>  = name of the external function
  ;;    <larg> = (typeret arg1 typearg1 arg2 typearg2 ...)
  (let ((narg (div (sub arg1 2) 2))
	(name (if (eq (chrnth 0 arg2) #/_)
		  (substring arg2 1)
		  arg2))
	(typeret (nextl arg3))
	(listfixvector ())
	(listfloatvector ()))
    (:wt1 "{" (:callg-C-type typeret) " callg_retv;")
    (with ((outchan :include-channel))
	  (:wt0 "extern " (:callg-C-type typeret) 
		" " name "(void);"))
    (let ((i 1) (larg arg3))
      ;; arguments declarations.
      (repeat narg
	      (:wt1 " " (:callg-C-type (cadr larg)) 
		    " callg_arg" i ";")
	      (setq larg (cddr larg))
	      (setq i (add1 i))))
    (let ((i 1) (larg arg3))
      ;; arguments loading.
      (repeat narg
	      (:wn1 " callg_arg" i " = ")
	      (:callg-LL2C-convert (car larg) (cadr larg))
	      (selectq (cadr larg)
		       (7 (newl listfixvector (car larg)))
		       (8 (newl listfloatvector (car larg))))
	      (setq larg (cddr larg))
	      (setq i (add1 i))))
    ;; fixvector and floatvector transformations.
    (mapc (lambda (fxv)
	    (:wt1 " Lfixvector_to_Cfixvector (" (:opr fxv) ");"))
	  listfixvector)
    (mapc (lambda (flv)
	    (:wt1 " Lfloatvector_to_Cfloatvector (" (:opr flv) ");"))
	  listfloatvector)
    ;; call the function.
    (:wn1 " callg_retv = ((" (:callg-C-type typeret) ") " 
	  name "(")
    (when (gt narg 0)
	  (let ((i 1) (larg arg3))
	    (repeat (sub1 narg)
		    (if (memq (cadr larg) '(5 6))
			(:wn0 "&callg_arg" i ",")
		        (:wn0 "callg_arg" i ","))
		    (setq larg (cddr larg))
		    (setq i (add1 i)))
	    (if (memq (cadr larg) '(5 6))
		(:wn0 "&callg_arg" i)
	      (:wn0 "callg_arg" i))))
    (:wt0 "));")
    ;; fixvector and floatvector reset.
    (mapc (lambda (fxv)
	    (:wt1 " Cfixvector_to_Lfixvector (" (:opr fxv) ");"))
	  listfixvector)
    (mapc (lambda (flv)
	    (:wt1 " Cfloatvector_to_Lfloatvector (" (:opr flv) ");"))
	  listfloatvector)
    ;; returned value conversion.
    (:callg-C2LL-convert typeret)
    (:wt1 "}")
    (:no-register-use)))

(defun :callg-C-type (type)
  ;; get a C type from a CALLG type.
  (selectq type
	   (0     "Ptr")     ; external, t
	   ((1 5) "long")    ; fix, rfix
	   ((2 6) "double")  ; float, rfloat
	   ((3 4) "Ptr")     ; string, vector
	   ((7 8) "Ptr")     ; fixvector, floatvector
	   (t (:print-error "modtoc: CALLG C-type, type unknow: " type))))

(defun :callg-C2LL-convert (typeret)
  ;; convert in Lisp a returned C value (in A1).
  (selectq typeret
	   (0 ; pointer
	    (:wt1 " " (:opr 'a1) " = ((Ptr) callg_retv);"))
	   (1 ; fix
	    (:wt1 " " (:opr 'a1) " = ((Ptr) ((UFix) callg_retv));"))
	   (2 ; float
	    (:wt1 " " (:opr 'a1) " = Cfloat_to_Lfloat(callg_retv);"))
	   (3 ; string
	    (:wt1 " " (:opr 'a1) " = Cstring_to_Lstring((char *) callg_retv);"))
	   (t 
	    (:print-error "modtoc: CALLG C->LL, type unknow: " typeret))))

(defun :callg-LL2C-convert (arg type)
  ;; charge un argument d'un appel a` une fonction C.
  (selectq type
	   (0     ;; external (le LOC est fait a` la fin) ou T
	          (if (and (consp arg) (eq (car arg) 'vag))
		      (:wt0 "llrt_vag(" (:opr (cadr arg)) ");")
		    (:wn0 "((Ptr) "   (:opr arg) ");")))
	   ((1 5) ;; fix ou rfix
	          (:wt0 "((Fix) " (:opr arg) ");"))
	   ((2 6) ;; float ou rfloat
	          (:wt0 "Lfloat_to_Cfloat(" (:opr arg) ");"))
	   ((3 4) ;; string vector
	          (:wt0 "((Ptr) (" (:opr arg) "->Val)+2);"))
	   ((7 8) ;; fixvector floatvector
	          (:wt0 "((Ptr) (" (:opr arg) "->Val)+2);"))	    
	   (t
              (:print-error "modtoc: CALLG LL->C, type unknow: " type))))

	   
; .Section "Les Fonctions auxiliaires de ge'ne'ration des autres instructions"

(defun :get-real-ll-name (label)
  (or (cassq label :llm3-ll-name)
      label))

(defun :get-llm3-function (label)
  (cassq label :llm3-functions))

(defun :get-module-function (label)
  (or (:get-llm3-function label)
      (cassq label :module-functions)))

(defun :get-trace-function (label)
  (cassq label :trace-functions))

(defun :make-module-function (label)
  ;; Retourne le nom C de l'e'tiquette interne <label>
  (or (:get-module-function label)
      (let ((gen (:gen-new-label :prefix-module-function)))
	(newl :module-functions (cons label gen))
	gen)))

(defun :make-trace-function (label)
  ;; Retourne le nom C de l'e'tiquette externe tracee <label>
  ;; imprime un message pour e'viter les "multiple symbols"
  (let ((gen (:get-trace-function label)))
    (if gen
	(:print-error "modtoc: multiple defined traced symbol: " label)
        (progn (setq gen (:gen-new-label :prefix-trace-function))
	       (newl :trace-functions (cons label gen))))
    gen))


(defun :goto-label-at (label endstrg)
   (:goto-label (list '@ label) endstrg))

(defun :goto-label (label endstrg)
  ;; Un branchement correspond :
  ;;  - a` un branchment vers une e'tiquette locale
  ;;  - a` un appel tailrec
  ;;  - a` un retour au se'quenceur de CO
  (let ((at-label-p (and (consp label) (eq (car label) '@))))
     (cond ((and at-label-p
                 (memq (cadr label) :local-labels-module))
	    (when (memq (cadr label) :local-procedure-label-list)
		  (setq :backward-references-p t))
            (:wt1 "goto " :prefix-local-label (cadr label) ";" endstrg))
           ((and ; (not :llm3-module-p)
                 ; les modules LLM3 le font tout seul. Quand c,a se
                 ; produit, le -O4 devient tre`s mauvais.
                 at-label-p
                 (eq (cadr label) :current-name))
            ; appel tail-rec
            (setq :tailrec-p t)
            (:wt1 "goto " :tailrec-label ";" endstrg))
           (t (if (and at-label-p
                       (assq (cadr label) :extern-llm3-predefined))
                  (progn 
                    ; ge'ne'ration en ligne des petits retours.
                    (selectq (cadr label)
                      (popj0  (:wn1 "{"))
                      (popj1  (:wn1 "{" (:opm 'sp) " += (Fix) 1;"))
                      (popj2  (:wn1 "{" (:opm 'sp) " += (Fix) 2;"))
                      (popj3  (:wn1 "{" (:opm 'sp) " += (Fix) 3;"))
                      (popj4  (:wn1 "{" (:opm 'sp) " += (Fix) 4;"))
                      (popj5  (:wn1 "{" (:opm 'sp) " += (Fix) 5;"))
                      (popj6  (:wn1 "{" (:opm 'sp) " += (Fix) 6;"))
                      (popj7  (:wn1 "{" (:opm 'sp) " += (Fix) 7;"))
                      (popj8  (:wn1 "{" (:opm 'sp) " += (Fix) 8;"))
                      (popj9  (:wn1 "{" (:opm 'sp) " += (Fix) 9;"))
                      (popja4 (:wn1 "{" (:opw 'a4) " = (" (:opm 'sp) "++)->Val; "
				    (:opm 'sp) " += (Fix) " (:opr 'a4) ";"))
                      (t (error ':goto-label 'modtoc label)))
                    (:wt0 " aRet = (" (:opm 'sp) "++)->Val; goto lRet;}" endstrg))
                  (:wt1 "{aRet = " (:opr label) "; goto lRet;}" endstrg))))))


(defun :call-internal (lab)
  ;; un appel de fonction Lisp (peut utiliser l'e'tiquette qui suit).
  (if (listp :next-instruction)
      (let ((f (:gen-new-symbol 'call_)))
	(:wt1 "(--" (:opm 'sp) ")->Val = ((Ptr) " (:lab f) ");")
	(:goto-label lab "")
	(:function-entry-point f))
      (:wt1 "(--" (:opm 'sp) ")->Val = ((Ptr) " (:lab :next-instruction) ");")
      (:goto-label lab "")))


(defun :gen-module-name (module)
  ;; Fabrique un nom de module simple pour C en enlevant
  ;; tous les caracte`res bizarres ...
  (symbol () (mapcan (lambda (x) (if (or (digitp x) (letterp x))
				     (ncons x)
				     ()))
		     (explode module))))

(defun :gen-new-symbol (prefix)
  ;; engendre une nouvelle e'tiquette (symbol)
  (symbol () (:gen-new-label prefix)))

(defun :gen-new-label (prefix)
  ;; Fabrique un nouveau nom pre'fixe' par <prefix>
  ;; l'"_" sert a` re'gler le conflit de noms quand des
  ;; noms de modules se terminent par un chiffre.
  (catenate prefix :C-module-name "_" (incr :gen-new-label-counter)))

(defun :gen-tailrec-label (label)
  ;; Fabrique l'e'tiquette d'une proce'dure C appele'e en tailrec
  (catenate :prefix-local-label label))

(defun :cmp-int-and-branch (arg1 cond arg2 label)
  ;; compare arithme'tiquement les 2 adresses <arg1> et <arg2>.
  ;; Se branche a` <label> si la condition <cond> est ve'rifie'e.
  ;; Travaille en mode naturel : si <arg1> <cond> <arg2> alors goto <label>.
  (:wn1 "if ((long) " (:opr arg1) " " cond " (long) " (:opr arg2) ")")
  (:goto-label-at label ""))

(defun :cmp-ptr-and-branch (arg1 cond arg2 label)
  ;; Compare les 2 adresses de pointeurs <arg1> et <arg2> non signe's.
  ;; Se branche a` <label> si la condition <cond> est ve'rifie'e.
  ;; Travaille en mode naturel : si <arg1> <cond> <arg2> alors goto <label>.
  (:wn1 "if (" (:opr arg1) " " cond " " (:opr arg2) ")")
  (:goto-label-at label ""))

(defun :cmp-type-inside (arg btype etype label)
  ;; Test de type avec 2 bornes.
  (:wn1 "if ((" (:opr arg) " >= " (:opr btype) ") && ("
        (:opr arg) " < " (:opr etype) "))")
  (:goto-label-at label ""))

(defun :cmp-type-outside (arg btype etype label)
  ;; Test de type avec 2 bornes.
  (:wn1 "if ((" (:opr arg) " < " (:opr btype) ") || (" 
        (:opr arg) " >= " (:opr etype) "))")
  (:goto-label-at label ""))

(defun :fix-arith (exp1 op exp2 dest ovfl)
  ;; re'alise l'ope'ration : <exp1> <op> <exp2> -> <dest>  signe'e
  ;; branchement a` <lab> si de'bordement
  (if (null ovfl)
      (:wt1 (:opw dest) " = (Ptr) ((UFix) (" (:fix exp1) " " op 
	    " " (:fix exp2) "));")
      (:wt1 "{register int aux;")
      (:wt2 "aux = (int) (" (:fix exp1) " " op " " (:fix exp2) ");")
      (:wt2 (:opw dest) " = (Ptr) ((UFix) aux);")
      (:wn1 "if ((aux > FIX_MAX) || (aux < FIX_MIN))")
      (:goto-label-at ovfl "}")))

(defun :fix-logic (exp1 op exp2 dest)
  ;; re'alise l'ope'ration : <exp1> <op> <exp2> -> <dest> non signe'e
  (:wt1 (:opw dest) " = (Ptr) (" (:ufix exp1)
        " " op " " (:ufix exp2) ");"))

(defun :cmp-fix-and-branch (op1 cond op2 lab)
  ;; Compare les 2 nombres entiers <arg1> et <arg2>.
  ;; Se branche a` <label> si la condition <cond> est ve'rifie'e.
  ;; Travaille en mode naturel : si <arg1> <cond> <arg2> alors goto <label>.
  (:wn1 "if (" (:fix op1) " " cond " " (:fix op2) ")")
  (:goto-label-at lab ""))

(defun :float-arith (op1 fnt op2)
  ;; op2 = op1 fnt op2
  (:wt1 "<<ret>> " (:opw op2) " = llrt_" fnt " (" (:opr op2) ", " (:opr op1) ");"))

(defun :float-funct-2 (fnt arg1 arg2)
  ;; arg2 = fnt (arg1)
  (:wt1 "<<ret>> " (:opw arg2) " = llrt_" fnt "(" (:opr arg1) ");"))

(defun :float-funct-3 (fnt arg1 arg2 arg3)
  ;; arg3 = fnt (arg1, arg2)
  (:wt1 "<<ret>> " (:opw arg3) " = llrt_" fnt 
	"(" (:opr arg1) ", " (:opr arg2) ");"))

(defun :cmp-float-and-branch (op1 cond op2 lab)
  ;; Compare les 2 nombres flottants <arg1> et <arg2>.
  ;; Se branche a` <label> si la condition <cond> est ve'rifie'e.
  ;; Travaille en mode naturel : si <arg1> <cond> <arg2> alors goto <label>.
  (:wn1 "if (llrt_" cond " (" (:opr arg1) ", " (:opr arg2) ") != 0) ")
  (:goto-label-at lab ""))

(defun :call-ptr-test-direct (comp)
  ;; re'alise une simulation d'un appel a` une fonction de comparaison
  ;; sur pointeurs qui n'a pu se compiler "open".
  (when :llm3-module-p
	(error ':call-ptr-test-direct "in a LLM3 module" comp))
  (:wt1 (:opw 'a1) " = (" (:opr 'a1) " " comp " " (:opr 'a2) ") ? "
	(:opr ''t) " : " (:opr 'nil) ";"))

(defun :call-fix-test-direct (comp)
  ;; re'alise une simulation d'un appel a` une fonction de comparaison
  ;; nume'rique signe'e sur 16 bits qui n'a pu se compiler "open".
  (when :llm3-module-p
	(error ':call-fix-test-direct "in a LLM3 module" comp))
  (:wt1 (:opw 'a1) " = (" (:fix 'a1) " " comp " " (:fix 'a2) ") ? "
	(:opr 'a1) " : " (:opr 'nil) ";"))

(defun :call-type-test-direct (btype etype)
  ;; re'alise une simulation d'un appel a` une fonction de test de type
  ;; qui n'a pu se compiler ouvert (en pseudo bool uniquement).
  (when :llm3-module-p
	(error ':call-type-test-direct "in a LLM3 module" (cons btype etype)))
  (:wt1 "if ((" (:opr 'a1) " < " (:opr btype) ") || ("
	(:opr 'a1) " >= " (:opr etype) ")) "
	(:opw 'a1) " = " (:opr 'nil) ";"))

(defun :call-rt-direct-0 (name)
  ;; re'alise une simulation d'un appel a` une fonction simple
  ;; sans arguments == pre'servation des registres.
  (when :llm3-module-p
	(error ':call-rt-direct-0 "in a LLM3 module" name))
  (:wt1 "<<ret>> " (:opw 'a1) " = " name " ();"))

(defun :call-rt-direct-1 (name)
  ;; re'alise une simulation d'un appel a` une fonction simple sur
  ;; les listes qui n'a pu se compiler "open".
  ;; ne pre'serve pas les registres!
  (when :llm3-module-p
	(error ':call-rt-direct-1 "in a LLM3 module" name))
  (:wt1 (:opw 'a1) " = " name " (" (:opr 'a1) ", " (:opr 'BCONS) ");"))

(defun :call-rt-direct-2 (name)
  ;; re'alise une simulation d'un appel a` une fonction simple sur
  ;; les listes qui n'a pu se compiler "open".
  ;; ne pre'serve pas les registres!
  (when :llm3-module-p
	(error ':call-rt-direct-2 "in a LLM3 module" name))
  (:wt1 (:opw 'a1) " = " name " (" (:opr 'a1) ", " (:opr 'a2) ", "
	(:opr 'BCONS) ", " (:opr 'nil) ");"))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;;	All the printing Functions
;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;
;;; Printing on the terminal
;;;

(defun :print-msg lpr
  ;; imprime un message
  (with ((outchan ()))
	(with ((rmargin (add1 (slen (outbuf)))))
	      (apply 'print lpr))))

(defun :print-error lpr
  ;; imprime une erreur
  (with ((outchan ()))
	(with ((rmargin (add1 (slen (outbuf)))))
	      (apply 'print "** " lpr))))

;;;
;;; Printing n the C channel
;;;

(defun :princ1 (char)
  ;; a regular SUBR1 (and not a SUBRN)
  (princn char 1))

(defun :princn (char nb)
  ;; a regular SUBR2 (and not a SUBRN)
  (princn char nb))

(defun :prin1 (arg1)
  ;; a regular SUBR1 (and not a SUBRN)
  (prin arg1))

(defun :prin2 (arg1 arg2)
  ;; a regular SUBR2 (and not a SUBRN)
  (prin arg1 arg2))

(defun :prin3 (arg1 arg2 arg3)
  ;; a regular SUBR3 (and not a SUBRN)
  (prin arg1 arg2 arg3))

(defmacro :wn0 lpr
  ;; generates a list of "prin" and other evaluation
  (let ((largs (mapcar (lambda (x)
			 (cond ((stringp x) `(prin ,x))
			       ((consp x)
				(cond ((memq (car x) 
					     '(:opr :opw :opm :strg :int 
					       :fix :fixpos :fixincr
					       :ufix :lit))
				       x)
				      (t `(prin ,x))))
			       (t `(prin ,x))))
		       lpr)))
    ;; merge all the "prin" if needed
    (let ((local largs))
      (while local
	(cond ((and (consp (car local))
		    (eq (caar local) 'prin)
		    (consp (cadr local))
		    (eq (caadr local) 'prin))
	       (rplacd (last (car local)) (cdadr local))
	       (rplacd local (cddr local)))
	      (t (setq local (cdr local))))))
    ;; use smaller functions (to avoid the SUBRN protocol)
    (mapc (lambda (expr)
	    (when (consp expr)
		  (when (eq (car expr) 'prin)
			(rplaca expr
				(selectq (length (cdr expr))
				    (1    ':prin1)
				    (2    ':prin2)
				    (3    ':prin3)
				    (t    'prin))))))
	  largs)
    ;; returns the form.
    `(progn ,@largs)))

(defmacro :wn1 lpr
  ;; print: TAB ... 
  `(progn (:princ1 #\tab) (:wn0 ,@lpr)))

(defmacro :wn2 lpr
  ;; print: TAB TAB ...
  `(progn (:princn #\tab 2) (:wn0 ,@lpr)))

(defmacro :wn3 lpr
  ;; print: TAB TAB TAB ... 
  `(progn (:princn #\tab 3) (:wn0 ,@lpr)))

(defmacro :wn4 lpr
  ;; print: TAB TAB TAB TAB ... 
  `(progn (:princn #\tab 4) (:wn0 ,@lpr)))

(defmacro :wt0 lpr
  ;; print: ... RC
  `(progn (:wn0 ,@lpr) (:terpri)))

(defmacro :wt1 lpr
  ;; print: TAB ... RC
  `(progn (:princ1 #\tab) (:wn0 ,@lpr) (:terpri)))

(defmacro :wt2 lpr
  ;; print: TAB TAB ... RC
  `(progn (:princn #\tab 2) (:wn0 ,@lpr) (:terpri)))

(defmacro :wt3 lpr
  ;; print: TAB TAB TAB ... RC
  `(progn (:princn #\tab 3) (:wn0 ,@lpr) (:terpri)))

(defmacro :wt4 lpr
  ;; print: TAB TAB TAB TAB ... RC
  `(progn (:princn #\tab 4) (:wn0 ,@lpr) (:terpri)))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;;	The actual loader functions
;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defvar :previous-instruction ())	;; used by :instruction
(defvar :next-instruction ())		;; used by :call-internal

(defun :loader (list-of-instructions)
  ;; Manage a "pipe of instructions". At any times, 3 instructions are 
  ;; visible:
  ;;	- :previous-instruction
  ;; 	- the current one
  ;;	- :next-instruction
  (let ((current-instruction ()))
    (let ((:previous-instruction ())
	  (:next-instruction ()))
    ;; clear the really local labels (fixnums) between 2 calls of the loader
    ;; function. But keep them in a list in order to decalre them in the
    ;; include file.
    (mapc (lambda (x)
	    (if (consp x)
		(cond ((symbolp (car x)))
		      ((fixp (car x)) (rplaca x ':local))
		      (t (:print-error "modtoc: bad module function" x)))
	        (:print-error "modtoc: bad module function" x)))
	  :module-functions)
    ;; call the LAP optimizer.
    (when :peephole-optimize-p
	  (setq list-of-instructions
		(funcall ':peephole-optimize list-of-instructions)))
    ;; call the label optimizer.
    (setq :local-labels-module
	  (if :optimize-local-labels-p
	      (funcall ':find-local-labels list-of-instructions)
	      ()))
    ;; start the translation.
    (setq :next-instruction (nextl list-of-instructions))
    (while (consp list-of-instructions)
      (setq :previous-instruction current-instruction
	    current-instruction   :next-instruction
	    :next-instruction     (nextl list-of-instructions))
      (:instruction current-instruction))
    ;; call the last one.
    (setq :previous-instruction current-instruction
	  current-instruction :next-instruction
	  :next-instruction ())
    (:instruction current-instruction))))

 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;;	Statistics on the generated code
;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


; Pas bien terrible tout c,a mais cela permet d'avoir une petite apperc,ue
; des effets des optimisations.

(defvar :stats-global-nb-of-procs   0.)
(defvar :stats-nb-of-procs          0.)
(defvar :stats-global-sum           0.)

(defvar :stats-vector-size          32)
(defvar :stats-vector               ())

(defvar :stats-preloaded-registers  0.)
(defvar :stats-unloaded-registers   0.)

(defun :stats-start ()
   (setq :stats-nb-of-procs          0.)
   (setq :stats-preloaded-registers  0.)
   (setq :stats-unloaded-registers   0.)
   (setq :stats-vector (makevector :stats-vector-size 0.)))

(defun :stats-stop ()
   (with ((outchan ()))
         (let ((sum 0.) 
               n 
               (halfsize (div :stats-vector-size 2)))
              (print "Nb of C procedures: " :stats-nb-of-procs)
              (incr :stats-global-nb-of-procs :stats-nb-of-procs)
              (for (i 0 1 (sub1 halfsize))
                   (setq n (vref :stats-vector i))
                   (incr sum (* n i))
                   (incr :stats-global-sum (* n i))
                   (outpos 2) (prin i) (outpos 7) (prin n)
                   (setq n (vref :stats-vector halfsize))
                   (incr sum (* n halfsize))
                   (incr :stats-global-sum (* n halfsize))
                   (outpos 12) (prin halfsize) (outpos 17) (print n)
                   (setq halfsize (add1 halfsize)))
              (print "Average per C procedures: " (/ sum :stats-nb-of-procs))
              (print "Preloaded registers:      " :stats-preloaded-registers)
              (print "Unloaded  registers:      " :stats-unloaded-registers)
              (print))))

(defun :stats-global ()
  (when :stats-on-C-size-p
        (with ((outchan ()))
              (print)
              (print "Global nb of C procedures: "
                     :stats-global-nb-of-procs)
              (print " average per C procedures: "
                     (/ :stats-global-sum :stats-global-nb-of-procs)))))




(defun :typefn-to-ftype (caller typefn)
  (selectq typefn
	   (subr0  1)
	   (subr1  2)
	   (subr2  3)
	   (subr3  4)
	   (nsubr  5)
	   (fsubr  6)
;;	   (expr   7)
;;	   (fexpr  8)
;;	   (macro  9)
;;	   (dmacro 10)
	   (msubr  11)
	   (dmsubr 12)
	   (t (error ':typefn-to-ftype caller typefn))))

(defun :ftype-to-typefn (caller ftype)
  (selectq ftype
	   (  1  'subr0)
	   (  2  'subr1)
	   (  3  'subr2)
	   (  4  'subr3)
	   (  5  'nsubr)
	   (  6  'fsubr)
;;	   (  7  'expr)
;;	   (  8  'fexpr)
;;	   (  9  'macro)
;;	   ( 10  'dmacro)
	   ( 11  'msubr)
	   ( 12  'dmsubr)
	   (t (error ':ftype-to-typefn caller ftype))))

