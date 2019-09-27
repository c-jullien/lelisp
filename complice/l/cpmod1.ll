
;;.EnTete "Le_Lisp V15" "CPMOD1.LL" "module du compilateur"
;;.sp 4
;;.SuperTitre "Le Compilateur Le_Lisp"
;;.Titre "Les modules: Premie`re passe"
;;.Auteur "Bernard Serpette"


;;.Section "CPMOD1.LL"
;;.SSection "Contenu"
; Le package du compilateur.
(defvar #:sys-package:colon 'complice)
(defvar #:rehash:verbose ())
(de :loadmodule (mod mac)
    (when #:rehash:verbose
	  (printerror 'complice
		      (catenate "loading module: " mod
				". macro not defined inside EVAL-WHEN")
		      mac))
    (loadmodule mod ()))

;;.SSection "Le point d'entre'e
;;.SSSection "MAKEMODULE  -  :MAKEMODULE-AUX"
(de makemodule (mod)
   (let ( (:done (ncons mod)) )
      (:makemodule mod) ))

(defun :makemodule (mod)
   (let ( (allmod (:makemodule-aux mod (readdefmodule mod) ())) )
      (ifn allmod
         ; Tout est fait!
         :done
         ; C'est une liste de modules croise's.
         (:warningf 'makemodule 10 allmod)
         (:make-list-of-module allmod)
         ; On ressaye de faire les choses proprement.
         (setq :list-of-loaded-file ())
         (mapc ':makemodule allmod)
         :done )))

(de :makemodule-aux (mod def allmod)
   (if (memq mod allmod)
      ; Cas des modules croise's. Rend une nouvelle liste.
      (cons (car allmod) (cdr allmod))
      ; Rajoute ce nouveau module pour le test.
      (setq allmod (cons mod allmod))
      (let ( (import (getdefmodule def 'import)) (nallmod allmod) (ndef) )
         (mapc
            (lambda (mod)
               (setq ndef (readdefmodule mod))
               (setq nallmod
                  (if (getdefmodule ndef 'cpexport)
                     ; Ce module est de'ja pre'e'tablit. -> la me^me liste.
                     nallmod
                     ; Sinon recurse.
                     (:makemodule-aux mod ndef nallmod) )))
            import )
         (ifn (eq nallmod allmod)
            ; Ce module fait partie d'une chaine de modules croise's.
            nallmod
            ; On peut le construire simplement.
            (:make-single-module mod def import)
            ; Il est donc pre'e'tablit.
            (cdr allmod) ))))

;;.SSection "Les fonctions de cre'ation"
;;.SSSection ":MAKE-LIST-OF-MODULE  -  :MAKE-SINGLE-MODULE"
(de :make-list-of-module (allmod)
   (let ( (lfile (:get-all-files allmod)) (defmod ()) (now :no-warning) )
      (setq :no-warning (cons 6 now))
      (mapc (lambda (f) (libloadfile f t)) lfile)
      (mapc
         (lambda (m)
            (setq defmod (readdefmodule m))
            (:make-single-module m defmod (getdefmodule defmod 'import)) )
         allmod )
      (setq :no-warning now) ))

(defun :get-all-files (lmod)
   (let ( (l ()) )
      (mapc
         (lambda (m)
            (mapc
               (lambda (f) (unless (memq f l) (newl l f)))
               (getdefmodule (readdefmodule m) 'files) ))
         lmod )
      (nreverse l) ))
#|         (mapc
            (lambda (E*)
               (unless (member E* #:compiler:exported-env)
                       ;; Do a copy to prevent destructive macroexpansion.
                       (newl #:compiler:exported-env (copy E*))
                       (eprogn E*) ))
            (getdefmodule (readdefmodule m) 'cpenv) ))
|#
(de :make-single-module (mod defmod import)
   ; Pour savoir plus tard ce que l'on a fait. Beuark!
   (unless (memq mod :done) (newl :done mod))
   (mapc
      (lambda (f)
         (unless (cassoc f :list-of-loaded-file)
            (newl :list-of-loaded-file (ncons f))
            (libloadfile f t) ))
      (getdefmodule defmod 'include) )
   (setq #:compiler:exported-env ())
   (let ( (closure-cpenv ()) ldef aux rexport (done ())
          (export (getdefmodule defmod 'export)) )
      (mapc
         (lambda (m)
            (unless (memq m done)
               (newl done m)
               (mapc
                  (lambda (l)
                     (if (consp l)
                        (eprogn l)
                        (unless (memq l done)
                           (newl done l)
                           (newl closure-cpenv l)
                           (mapc
                              (lambda (ll) (when (consp ll) (eprogn ll)))
                              (getdefmodule (readdefmodule l) 'cpenv) ))))
                  (getdefmodule (readdefmodule m) 'cpenv) )
               (unless (memq m closure-cpenv) (newl closure-cpenv m)) ))
         import )
      (setq :exportable-definition ())
      (setq :synonym-definition ())
      (setq ldef (:get-all-def-in-files (getdefmodule defmod 'files)
                                       (getdefmodule defmod 'export) ))
      (setq rexport (nconc :exportable-definition export))
      (:switch-on import ldef)

      (let ( (clos (:pass-one rexport)) )
         ; On re'gle le cas des fonctions internes.
         (setq defmod
            (:make-single-module1 mod defmod ldef (car clos) rexport) )
         ;; On re'gle le cas des fonctions importe'es.
         (setq defmod
            (:make-single-module2 mod defmod (cdr clos)))
         ;; On re'gle le cas de l'environnement de compilation.
         (setq defmod
            (setdefmodule defmod 'cpenv
               (nconc (nreverse closure-cpenv)
                      (nreverse #:compiler:exported-env) )))
         ;; On imprime la de'finition de module.
         (printdefmodule defmod mod)
         ; On efface tous les indicateurs.
         (mapc
            (lambda (f)
               (mapc
                  (lambda (i) (remprop f i))
                  '(:bind :fvar :ftype) ))
            (car clos) )
         (:switch-off import) )))

(de :make-single-module1 (mod defmod ldef clos export)
   (let ( (cpexport ()) (cpfunctions ()) )
      (mapc
         (lambda (f)
            (cond
               ((memq f export)
                  ; Une fonction exporte'e: On garde TOUT.
                  (unless (or (memq f ldef) (memq f :synonym-definition))
                     (:warningf mod 4 f) )
                  (newl cpexport
                     (mcons f
                        (get f ':ftype)
                        (get f ':fvar)
                        (get f ':bind) )))
               ((memq f ldef)
                  ; Une fonction locale: On ne garde que :bind
                  (newl cpfunctions
                     (mcons f (get f ':ftype) (get f ':bind)) ))
               (t ; C'est une expr non importe'e.
                  (:warningf mod 6 f) ))
            (setq ldef (delq f ldef)))
         clos )
      (mapc
         (lambda (m)
            (unless
               (or (not (symbolp m))
                   (memq (typefn m) '(macro dmacro))
                   (macro-openp m) )
               (:warningf mod 2 m) ))
         ldef )
      (setdefmodule
        (setdefmodule defmod 'cpexport cpexport)
        'cpfunctions cpfunctions )))

(de :make-single-module2 (mod defmod ext)
   (let ( (cpimport ()) )
      (mapc
         (lambda (f)
            (let ( (m (get f ':switched)) )
               (ifn m
                  (:warningf mod 6 f)
                  (let ( (ftyp (get f ':ftype)) (l (assq m cpimport)) )
                     (if l
                        (rplacd l (cons (cons f ftyp) (cdr l)))
                        (newl cpimport (list m (cons f ftyp))) )))))
         ext )
      (setdefmodule defmod 'cpimport cpimport) ))

;;.SSSection ":SWITCH-ON"
(de :switch-on (lmod ldef)
   ; Pose les indicateurs de la 1ere passe pour le module mod.
   (mapc
      (lambda (mod)
         (let ( (cpexport (getdefmodule (readdefmodule mod) 'cpexport)) )
            (mapc
               (lambda ((fnt ftype fvar . bind))
                  (if (memq fnt ldef)
                     (:warningf fnt 11 mod)
                     (putprop fnt ftype ':ftype)
                     (when (memq ftype '(msubr dmsubr))
                        (unless (typefn fnt) (:loadmodule mod fnt)) )
                     (putprop fnt mod ':switched)
                     (when fvar (putprop fnt fvar ':fvar)) ))
               cpexport )))
      lmod ))

;;.SSSection ":SWITCH-OFF"
(de :switch-off (lmod)
   ; Defait les indicateurs de la 1ere passe pour le module mod.
   (mapc
      (lambda (mod)
         (let ( (cpexport (getdefmodule (readdefmodule mod) 'cpexport)) )
            (mapc
               (lambda ((fnt . bllsht))
                  (remprop fnt ':ftype)
                  (remprop fnt ':switched)
                  (when (memq (typefn fnt) '(expr fexpr ()))
                     (remprop fnt ':fvar) ))
            cpexport )))
      lmod ))
