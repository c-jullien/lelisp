
;;.EnTete "Le_Lisp V15" "CP.LL" "Entre'e du compilateur"
;;.sp 4
;;.SuperTitre "Le Compilateur Le_Lisp"
;;.Titre "Les fonctions utilisateur"
;;.Auteur "Bernard Serpette"


;;.Section "CP.LL"
;;.SSection "Contenu"
; Le package du compilateur
(defvar #:sys-package:colon 'complice)

; Pour prevenir l'exterieur.
(add-feature 'compiler)
(add-feature 'complice)

;;.SSection "Les entre'es du compilateur"
;;.SSSection "DONT-COMPILE"
(df dont-compile l
   (mapc ':dont-compile-one-fonction l) )

(de :dont-compile-one-fonction (f)
   (putprop f f 'dont-compile)
   (make-macro-open f
      `(larg (list 'eval (list 'quote (cons ',f larg)))) ))

;;.SSSection "COMP  -  COMPILER"
(df compile (a . f)
   (compiler a (nextl f) (nextl f) (nextl f)) )

(de compiler (lfnt . lflags)
   (mapc ':dont-compile-one-fonction (nextl lflags))
   (unless (consp lfnt) (setq lfnt `(,lfnt)))
   ; (loader `((title ,(car lfnt)))) fait casser le GC
   (:compiler-aux lfnt (nextl lflags) (nextl lflags))
   (if :error-occured
      (progn (loader '((abort))) 'abort)
      (loader '((end)))
      lfnt ))

(de :compiler-aux (lfnt cptalk? ldtalk?)
   (setq :outchan (outchan))
   ; Les trois passes du compileur.
   (let ( (lfnt (:pass-one lfnt)) )
      (mapc (lambda (f) (:warningf 'compiler 4 f)) (cdr lfnt))
      (unless :error-occured
         (let ( (lfnt (car lfnt)) )
            (mapc
               (lambda (f)
                  (putprop f (cons (typefn f) (valfn f)) ':save)
                  (setq f (:pass-two f () cptalk?))
                  (unless :error-occured (loader f ldtalk?)) )
               lfnt )
            (mapc
               (lambda (f)
                  (when :error-occured
                     (let ( (l (get f ':save)) )
                        (when l (setfn f (car l) (cdr l))) ))
                  (mapc
                     (lambda (i) (remprop f i))
                     '(:save :bind :ftype) ))
               lfnt )))))

;;.SSSection "COMPILE-ALL-IN-CORE"
(de compile-all-in-core l
   (let ( (old ()) (f1 (nextl l)) (f2 (nextl l)) (:warning-flag (car l))
          (:outchan (outchan)) )
      (mapoblist
         (lambda (m)
            (unless (getprop m 'dont-compile)
               (when (setq old (get m 'resetfn))
                  (setfn m (car old) (cdr old)) )
               (when (memq (typefn m) '(expr fexpr macro dmacro))
                  (compiler m t f1 f2) ))))))

;;.SSSection "COMPILEFILES"
(de compilefiles (lfilesin . fileout)
   (unless (consp lfilesin) (setq lfilesin `(,lfilesin)))
   (setq fileout (if (consp fileout) (car fileout) (car lfilesin)))
   (setq :list-of-loaded-file () :outchan (outchan))
   (let ( (#:system:print-with-abbrev-flag ()) )
      (let ( (lfnt (:get-all-def-in-files lfilesin ())) )
         (let ( (fermtr (:pass-one lfnt)) )
            (mapc
               (lambda (f) (:warningf 'compilefiles 4 f))
               (cdr fermtr) )
            (unless :error-occured
               (mapc
                  (lambda (m) (:warningf 'compilefiles 9 m))
                  (:complement lfnt (car fermtr)) )
               (:generate-in-file lfnt fileout lfnt) )
            (mapc
               (lambda (f)
                  (mapc
                     (lambda (i) (remprop f i))
                     '(:bind :fvar :ftype) ))
               (car fermtr) )))))

;;.SSSection "COMPILEMODULE"
(de compilemodule (mod . other?)
   (setq :list-of-loaded-file () :outchan (outchan))
   (let ( (#:system:print-with-abbrev-flag ()) )
      (let ( (lmod (makemodule mod)) )
         (unless :error-occured
            (if (car other?)
               (mapc
                  (lambda (m) (unless :error-occured (makemodule-pass-two m)))
                  lmod )
               (makemodule-pass-two mod) )))))
