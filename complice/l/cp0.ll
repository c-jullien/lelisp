
;;.EnTete "Le_Lisp V15" "CP0.LL" "Tronc commun du compilateur"
;;.sp 4
;;.SuperTitre "Le Compilateur Le_Lisp"
;;.Titre "Les fonctions ge'ne'rales communes"
;;.Auteur "Bernard Serpette"

;;.Section "CP0.LL"
;;.SSection "Contenu"
;;     Ce fichier contient les fonctions utilitaires pour le compilateur.

;;.SSection "Initialisations"

; Le package du compilateur
(defvar #:sys-package:colon 'complice)

(synonym 'declare 'comment)

;;.SSection "Relai pour la macroexpansion"
(defun :macroexpand (l)
   (#:compiler:macroexpand l) )

;;.SSection "Fonctions ge'ne'rales"
;;.SSSection "FLAT"
(de :flatt (l) (flat-auxillaire l ()))

(de flat-auxillaire (l r)
   (cond
      ((null l) r)
      ((atom l) (cons l r))
      (t (flat-auxillaire (car l) (flat-auxillaire (cdr l) r))) ))

;;.SSSection "COUNT"
(de :count (at l)
   (cond
      ((not (consp l)) (if (eq at l) 1 0))
      ((eq (car l) at) (add1 (:count at (cdr l))))
      (t (:count at (cdr l))) ))

;;.SSSection "COMPLEMENT"
(de :complement (l1 l2)
   (cond
      ((not (consp l2)) ())
      ((memq (car l2) l1) (:complement l1 (cdr l2)))
      (t (cons (car l2) (:complement l1 (cdr l2)))) ))

(de :setcassq (var val env)
   (let ( (l (assq var env)) )
      (when (consp l) (rplacd l val)) ))

;;.SSSection "UNION"
; (de union (l1 l2)
;    (cond
;       ((null l2) l1)
;       ((memq (car l2) l1) (union l1 (cdr l2)))
;       (t (union (cons (car l2) l1) (cdr l2))) ))

;;.SSSecion "DEFVAR GLOBALVARP"
(df :defvar (name . l)
   (ifn (variablep name)
      (error 'defvar 'errnva name)
      (putprop name 't ':globalvar)
      (when #:system:loaded-from-file
         (putprop name #:system:loaded-from-file '#:system:loaded-from-file) )
      (if (consp l) (set name (eval (car l))) (set name nil))
      name ))
(synonymq defvar :defvar)

(defun :globalvarp (symb)
   (if (or (get symb ':globalvar)
           (memq (packagecell symb) '(system sys-package)) )
      symb
      () ))

;;.SSection "Recherche des de'finitions de fonctions"
;;.SSSection ":GET-ALL-DEF-IN-FILES"
;;      Charge les fichiers <lfiles> et rame`ne une liste contenant
;;les expressions lisp n'e'tant pas des de'finitions de fonctions et
;;les noms des fonctions de'finies (seulement les fonctions de type EXPRs
;;FEXPRs MACROs ou DMACROs).

(defvar :list-of-loaded-file ())

(de :get-all-def-in-files (lfiles export)
   (let ( (us) (ldef ())
          (#:system:loaded-from-file)
          (#:system:redef-flag t)
          (#:sys-package:colon #:sys-package:colon)
          (#:system:in-read-flag ())
          (inchan (inchan)) )
      (if (setq ldef (cassoc lfiles :list-of-loaded-file))
         ldef
         (mapc
            (lambda (f) 
               (ifn (setq us (probepathf f))
                  (error 'compilefiles 'ERRFILE f)
                  (inchan (openi us))
                  (setq #:system:loaded-from-file us)
                  (setq ldef (:cp-read-files1 ldef export))
                  (let ( (in (inchan)) )
                     (when (and in (neq in inchan)) (close in)) )
                  (inchan inchan) ))
            lfiles )
         (setq ldef (nreverse ldef))
         (newl :list-of-loaded-file (cons lfiles (:copy1 ldef)))
         ldef )))

(defun :copy1 (l)
  (cond
      ((null l) l)
      (t (cons (car l) (:copy1 (cdr l)))) ))

;;.SSSection ":CP-READ-FILES1"
(de :cp-read-files1 (lfnt export)
   (untilexit eof
      (setq lfnt (:cp-read-files2 (read) lfnt export () 'scan)) )
   lfnt )

(defvar :exportable-definition ())
(defvar :synonym-definition ())
(de :cp-read-files2 (us l export exportable process-mode)
   (cond
      ((not (consp us)) l)
      ((memq (car us) '(de df defun dm dmd defmacro))
         (when (and exportable (not (memq (cadr us) :exportable-definition)))
            (newl :exportable-definition (cadr us)) )
         (when (neq process-mode 'compile) (eval us))
         (cons (cadr us) l) )
      ((and (eq (car us) 'eval-when) (memq 'load (cadr us)))
       ;; don't evaluate this clause.
         (mapc
            (lambda (m)
	      (setq l (:cp-read-files2 m l export exportable 'compile)))
	    (cddr us))
        (:cp-read-files2 `(eval-when ,(remq 'load (cadr us)) ,@(cddr us))
           l export exportable process-mode ))
      ((eq (car us) 'setfn)
         (when (neq process-mode 'compile) (eval us))
         (ifn (and (consp (cadr us)) (eq (caadr us) 'quote))
            (cons us l)
            (setq us (cadadr us))
            (when (and exportable (not (memq us :exportable-definition)))
               (newl :exportable-definition us) )
            (cons us l) ))
      ((eq (car us) 'progn)
         (mapc
            (lambda (m)
	      (setq l (:cp-read-files2 m l export exportable process-mode)))
            (cdr us) )
         l )
      ((eq (car us) 'exportable-definition)
         (setq exportable (:get-exportable export (caddr us) (cadr us)))
         (mapc
            (lambda (m)
	      (setq l (:cp-read-files2 m l export exportable process-mode)))
            (cdddr us) )
         l )
      ((eq (car us) 'synonym)
         (when (neq process-mode 'compile) (eval us))
         (when (and (consp (cadr us)) (eq (caadr us) 'quote))
            (newl :synonym-definition (cadadr us)) )
         (cons us l) )
      ((neq us (setq :x (:macroexpand us)))
         (:cp-read-files2 :x l export exportable  process-mode))
      ((eq (car us) 'defvar)
         (putprop (cadr us) 't ':globalvar)
         (when (neq process-mode 'compile) (eval us))
         (newl #:compiler:exported-env `((putprop ',(cadr us) 't ':globalvar)))
         (cons us l) )
      (t (when (neq process-mode 'compile) (eval us))
         (cons us l)) ))

(defun :get-exportable (export type name)
   (when (and (consp type) (eq (car type) 'quote)
              (consp name) (eq (car name) 'quote) )
      (:get-exportable-aux export (cadr type) (cadr name)) ))

(defun :get-exportable-aux (export type name)
   (cond
      ((not (consp export)) ())
      ((not (consp (car export)))
         (:get-exportable-aux (cdr export) type name) )
      ((and (eq (caar export) type) (memq name (cdar export)))
         t )
      (t (:get-exportable-aux (cdr export) type name)) ))
