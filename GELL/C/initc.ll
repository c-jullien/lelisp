; .EnTete "Le_Lisp Version 15.2" " " "GELL 15.26 : manager of elaboration files"
; .EnPied "initc.ll" "%" "initc.ll"
; .sp 2
; .SuperTitre "GELL 15.26: manager of elaboration files"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'initc ))


(defvar #:sys-package:colon '|defC|)

#|

Chaque module compile' par "modtoc" engendre, outre un fichier *.c et
un fichier *.h, un fichier *.le dit "d'e'laboration" qui permettra
apre`s une e'dition de liens statique des fichiers *.c, de faire
correspondre les objets C aux objets LL. Ce fichier d'e'laboration
contient en plus des formes a` e'valuer, en concordance avec la
se'mantique actuelle de chargement des modules de la version 15, des
appels a` des fonctions spe'ciales : defCelaborate, defCsetfn et
defCcheck.

Le moule d'un fichier d'e'laboration est :

         (defCelaborate     pour initialiser la table statique du module,
			    tester le time stamp,
                            et tester les rede'finitions

         ....               des expressions a` e'valuer

         (defCsetfn <symbol> <elab-fnt> <index>)


         ....               des expressions a` e'valuer

         (defCcheck          pour ve'rifier les liens

Apre`s la restauration d'une image me'moire GELL, la fonction :
         initialize-elaborated-modules
doit impe'rativement e^tre appele'e.

L'e'laboration est contro^le'e par un certain nombre de variables
globales que l'on peut re'de'finir avant de charger un fichier
d'e'laboration.

          gell-silent-elaboration-p
          gell-prefix-added-by-C
          gell-getglobal-special-cache


|#

(unless (boundp 'gell-silent-elaboration-p)
	; pour pouvoir surcharger avant de charger le fichier
	(defvar gell-silent-elaboration-p ()))


; .Section "Syntaxe des symboles externes de C"

#|

Les noms des symboles externes de C sont parfois modifie's
automatiquement par les compilateurs C. La variable suivante est
pre'vue pour rendre ces modifications invisibles (sans aucun
recompilation).

|#

(unless (boundp 'gell-prefix-added-by-C)
	; pour pouvoir surcharger avant de charger le fichier
	(defvar gell-prefix-added-by-C ""))

(defun :C-name (name)
  ;; conversion du nom <name> pour C
  (if (eqstring gell-prefix-added-by-C "") 
      name
      (catenate gell-prefix-added-by-C name)))


(defextern llrt_set_regular_fval (t external fix) fix)
(defextern llrt_set_lit_table (external vector fix) fix)
(defextern llrt_check_timestamp (external string) fix)
(defextern llrt_set_trace_fval_p (t external external) fix)

(defun local_llrt_set_lit_table (arg1 arg2 arg3)
  ;; a local function to avoid the bootstrap pb 
  ;; This function has to be called with a CALL and not a JCALL
  (llrt_set_lit_table arg1 arg2 arg3))

; .Section "Le cache special du Getglobal"

#|

Tout le temps d'e'laboration e'tant passe' dans le GETGLOBAL, GELL
peut utiliser, s'il existe, un cache (A-liste) des adresses utiles
pour l'e'laboration, qui est contenau dans la variable suivante :

|#

(unless (boundp 'gell-getglobal-special-cache)
	; pour pouvoir surcharger avant de charger le fichier
        (defvar gell-getglobal-special-cache ()))

(defun :gell-getglobal-special-cache (strg)
  (let ((val (cassoc strg gell-getglobal-special-cache)))
    (or val
	(getglobal strg)
	(getglobal (:C-name strg)))))


; .Section "Appel de la fonction d'e'laboration"

#|

Chaque module contient une table statique de description qui lui est
propre.  Elle a` la forme "GZmodule". Cette table (en C) permet
d'associer les adresses des proce'dures C a` des symboles Lisp. Ces
association ne peuvent pas e^tre re'alise'es d'un seul coup car les
modules Le-Lisp 15 permettent la re'de'finition multiple de fonctions
(le coup du "synonymq") mais doivent suivre scrupuleusement la
temporalite' du chargeur.

|#

(unless (boundp ':module-table-name)
	(defvar :module-table-name ()))     ; le nom de la description du module.
(unless (boundp ':module-table-adr)
	(defvar :module-table-adr ()))      ; l'adr de la description du module.
(unless (boundp ':list-module-table-adr)
	(defvar :list-module-table-adr ())) ; la liste de ces addresses.
(unless (boundp ':module-date)
	(defvar :module-date ()))           ; la date de fabrication du module.

(defun :internal-error (msg badarg)
    (with ((outchan ()))
          (print "***** GELL 15.26: " msg " " badarg)
          (exit eof)))

(defun defCelaborate (name date lfnt vlit)
    (if (stringp name)
	(setq :module-table-name name)
        (:internal-error "defCelaborate: the name of the module is not a string:" name))
    (if (stringp date)
	(setq :module-date date)
        (:internal-error "defCelaborate: the date is not a string:" date))
    (when (not (vectorp vlit))
	  (:internal-error "defClit: the literal table is not a vector:" vlit))
    (let ((adr (:gell-getglobal-special-cache (:C-name name))))
         (if (eq adr 0)
             (:internal-error "defCelaborate: module C not linked:" name)
	     (newl :list-module-table-adr adr)
	     (setq :module-table-adr adr)))
    (llrt_check_timestamp :module-table-adr date)
    (llrt_set_lit_table :module-table-adr vlit (vlength vlit))
    ;; to save from GC et reinitialize after restore-core
    (newl :init-module-list (list name :module-table-adr vlit (vlength vlit)))
    (mapc ':defCelaborate-check lfnt))


(defun :defCelaborate-check (onef)
   (let ((symb  (car onef))
         (ntype (cdr onef)))
        (when (typefn symb)
	      (remprop symb '#:system:loaded-from-file)
	      (remprop symb 'autoload)
	      (unless  gell-silent-elaboration-p
		       (with ((outchan ()))
			     (print ";;  function    redefined: " symb
				    ", old:" (typefn symb)
				    " new:" ntype))))))

(defun defCsetfn (symbol name index)
   (when (null (symbolp symbol))
	 (:internal-error "defCsetfn: bad symbo name:" symbol))
   (when (null (eqstring name :module-table-name))
         (:internal-error "defCsetfn: bad module table name:" name))
   (llrt_set_regular_fval symbol :module-table-adr index))


; .Section "La table des litte'raux"

#| 

Les constantes litte'rales pre'sentes dans un module Lisp sont
stocke'es dans un vecteur Lisp, qui est cre'e' a` la lecture du
fichier d'e'laboration. C utilise, pour chaque module, un vecteur qui
lui est propre qui contient une copie du vecteur Lisp. Cette copie est
obligatoire car le vecteur Lisp peut e^tre de'place' dans le tas. En
revanche les adresses des objets qu'il contient sont toujours fixes en
Le-Lisp. L'acce`s a` une constante litte'rale est donc indirect
indexe'.

Au lancement d'une application sauve'e par RESTORE-CORE, il faudra de
nouveau recopier dans tous les vecteurs C, les vecteurs Lisp des
constantes car le SAVE-CORE ne sauve pas les zones statiques C.

|#

; :INIT-MODULE-LIST contains infos about the elaborated modules. It
; looks like  ((<adr>  <vect> <size>) ... (<adr> <vect> <size>))
;        <adr> is the adress of the module table
;        <vect> is a LL vector containing the quoted datas.
;        <size> its length.
; is used :
;    - to protect the vector from GC
;    - to reinitialize the litteral bases after a restore-core.
; After a restore-core, the litteral-bases of all the modules
; elaborated have to be reseted.

(unless (boundp ':init-module-list)
	(defvar :init-module-list ()))


; This function, very fast, has to be called after any restore-core
; in order to reinitialize all the literals bases of the modules.

; !! This function has to be local (never exported), has to be called with
; !! a local argument (no dynamic variable) and cannot use any objects of
; !! the literal tables (quoted constants or calls to global functions),
; !! because these tables are not reseted at that time.

(defun initialize-elaborated-modules (init-module-list)
   (mapc (lambda (x)
	   (local_llrt_set_lit_table (cadr x) (caddr x) (cadddr x)))
	 init-module-list))


; .Section "Test des re'fe'rences non re'solues"

#|

Un des malheurs fre'quents qui arrivent lorsqu'on re'alise une
application en GELL est l'oubli de chargement d'un module ou
l'oubli de son e'laboration. Il y a donc des appels de type
(FVALQ symbol) qui provoquent une erreur de la machine (dans le
cas le plus favorable ...). Cela arrive e'galement en cas de
rede'fintion de fonctions de type SUBR dans des modules surcharge's
en interpre'te'.

La fonction defCcheck qui est mise en fin du fichier d'e'laboration
contient la liste des symboles Lisp sur lesquels a e'te' re'alise'
un acce`s de type FVALQ. Cette liste (cumule'e pour tous les
modules en C) est stocke'e dans la variable suivante.

|#

(unless (boundp ':unresolved-symbols)
	(defvar :unresolved-symbols ()))

(defun :resolved-symbol-p (symb)
   (if (memq (typefn symb)
	     '(subr0 subr1 subr2 subr3 nsubr fsubr msubr dmsubr))
       t
       ()))

(defun defCcheck (lst)
    (mapc (lambda (symb) (unless (memq symb :unresolved-symbols)
				 (newl :unresolved-symbols symb)))
	  lst)
    (:check-for-unresolved-references)
    'defCcheck)

(defun check-for-unresolved-references ()
  (let ((gell-silent-elaboration-p ()))
    (:check-for-unresolved-references)))


(defun :check-for-unresolved-references ()
   ; nettoie la liste des symboles non re'solus et imprime
   ; ceux qui ne le sont pas ...
   (setq :unresolved-symbols 
	 (mapcan (lambda (x) (unless (:resolved-symbol-p x)
				(unless gell-silent-elaboration-p
				    (with ((outchan ()))
					  (print ";;; function not resolved: " x
						 ", current type: " (typefn x))))
				(ncons x)))
		 :unresolved-symbols)))



; .Section "Nettoyage et fabrication des images me'moires"


(defun gell-clean-core-image ()
   (mapoblist (lambda (x)
;                (remprop x '#:complice:fvar)
                (remprop x '#:system:loaded-from-file)
              ))
   'gell-clean-core-image)

(defun gell-save-core (core-file-name msg startfnt)
  (gell-clean-core-image)
  (gc)
  (gc)
  (setq #:system:save-std-date (if (featurep 'date) (date) ()))
  (let ((init-module-list :init-module-list))
    ;; to be sure to have a local variable (without using
    ;; the litteral table).
    (if (save-core core-file-name)
	(end)
        (initialize-elaborated-modules init-module-list)
	(setq #:system:initty-after-restore-flag ())
	(setq #:system:inibitmap-after-restore-flag ())
	(funcall startfnt msg))))

(defun gell-save-std (nom msg . user-functions)
  (gell-clean-core-image)
  (print ";; Wait, I am saving : " msg)
  (gc)
  (gc)
  (setq #:system:save-std-date (if (featurep 'date) (date) ()))
  (let* ((save-fn (car user-functions))
	 (restore-fn (or (cadr user-functions) save-fn 'core-init-std))
	 (init-module-list :init-module-list)
	 ;; to be sure to have a local variable (without using
	 ;; the litteral table).
	 )
    (if (save-core (catenate #:system:core-directory 
			     nom
			     #:system:core-extension))
	(if save-fn (funcall save-fn msg) (end))
        (initialize-elaborated-modules init-module-list)
	(setq #:system:initty-after-restore-flag ())
	(setq #:system:inibitmap-after-restore-flag ())
	(funcall restore-fn msg))))
