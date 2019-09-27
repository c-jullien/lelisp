
;;.EnTete "Le_Lisp V15" "CP1.LL" "Premie`re passe du compilateur"
;;.sp 4
;;.SuperTitre "Le Compilateur Le_Lisp"
;;.Titre "La premie`re passe"
;;.Auteur "Bernard Serpette"

;;.Section "CP1.LL"
;;.SSection "Contenu"
;;     Le point d'entre'e de ce fichier est la fonction \fB:pass-one\fR
;;qui de'termine la fermeture transitive (moins les fonctions applique'es
;;par funcall) de son premier argument.
;;
;;     Principales variables de \fBpass-one\fR:
;;
;;     \fB:allfnt\fR est la fermeture transitive en contruction. Ne contient
;;que des fonctions de type \fB?expr\fR.
;;     \fB:extfnt\fR contient les fonctions inde'finies appele'es, les
;;les fonctions de type \fB?subr?\fR ayant une valeur sous l'indicateur
;;\fB:ftype\fR et les fonctions de type \fB?expr\fR ayant une valeur sous
;;l'indicateur \fB:switched\fR.
;;     \fB:lvar-al\fR ::= (.. (fnti . (... (var . val) ...)) ..) ou` fnti
;;appelle fnti-1, var est une variable instancie'e dans fnti et ou val
;;vaut () si var est lexicale, cval sinon.
;;     \fB:fvar-al\fR ::= (.. ({fnti} . (... var ...)) ..) ou` fnti
;;appelle fnti-1, var est une variable libre utilise'e par une des fonctions
;;appele'e par fnti (fnti comprise).
;;
;;     \fB:pass-one\fR utilise la pliste des fonctions pour communiquer avec
;;les passes suivantes:
;;      :ftype -> le futur type fonctionnel de la fonction.
;;      :fvar  -> liste des variables devant e^tre lie'es avant l'appel de la
;;fonction (variables libres de la fonction, cf. :fvar-al). Si c'est 'parano
;;alors la fonction est "paranoiaque"
;;      :bind  -> liste de liste repre'sentant les variables ayant une porte'e
;;dynamique.

;;.SSection "Les variables globales"
; Le package du compilateur
(defvar #:sys-package:colon 'complice)

; Si on devient parano.
(unless (boundp ':parano-flag)
   (defvar :parano-flag t) )

; Pour aller plus vite.
(defvar :x ())

; Le nom de la fonction en cours de premie`re passe (pour :error et :warning)
(defvar :f ':pass-one)

;;.SSection "Premie`re passe du compilateur"
;;.SSSection ":PASS-ONE"
(de :pass-one (xrefnt)
   (setq :error-occured ())
   (let ( (:allfnt ()) (:lvar-al ()) (:fvar-al ()) (:extfnt ())
          (#:sys-package:itsoft #:sys-package:itsoft) )
      (newl #:sys-package:itsoft '#.#:sys-package:colon)
      (tag #:system:error-tag
         (mapc (lambda (f) (when (symbolp f) (:parse f))) xrefnt) )
      ; Toutes les variables qui ont reussi a` percer.
      (mapc
         (lambda (f)
            (when (symbolp f)
               (mapc (lambda (var) (:warningf f 0 var)) (get f ':fvar)) ))
         xrefnt )
      (cons :allfnt :extfnt) ))

;;.SSSection ":PARSE"
; (de f (n) (let ((m 'oui)) (f1 n)))
; (de f1 (n) (if n m (let ((m 'non)) (f t))))
(de :parse (:f)
   (cond
      ((setq :x (get :f 'resetfn))
         ; Une fausse fonction interpre`te.
         (setfn :f (car :x) (cdr :x))
         (remprop :f 'resetfn)
         (:parse :f) )
      ((not (memq (typefn :f) '(macro dmacro expr fexpr)))
	 ; Ne sait compiler que les exprs/fexprs.
	 (:warning 3 (list :f (typefn :f))) )
      ((cassq :f :lvar-al)
         ; Appel recursif a` :f.
         (:parse-free-var (:get-fvar :f :lvar-al :fvar-al))
         (:env-open :f) )
      ((or (memq :f :allfnt) (get :f ':switched))
         ; On est de'ja passe' ici.
         (:parse-free-var (get :f ':fvar))
         (when (and (get :f ':switched) (not (memq :f :extfnt)))
            (newl :extfnt :f) ))
      (t ; Ah quelle est douce la premie`re fois...
         (remprop :f ':fvar)
         (:setftype :f)
         (newl :allfnt :f)
         (newl :lvar-al (ncons :f))
         (newl :fvar-al ())
         (:parse-lambda (valfn :f))
         (when (car :fvar-al) (putprop :f (car :fvar-al) ':fvar))
         (nextl :fvar-al)
         (remprop :f ':rec-env)
         (:setbind :f (nreverse (cdr (nextl :lvar-al)))) )))

;;.SSSection ":PARSE-LAMBDA"
(de :parse-lambda ((lvar . l))
   (if (and lvar (neq lvar '&nobind))
      (let ( (al (:make-al (:flatt lvar))) (sv) (prev (car :lvar-al)) )
         (rplacd (setq sv (last al)) (cdr prev))
         (rplacd prev al)
         (:parse-progn l)
         (until (eq (cdr prev) al) (nextl prev))
         (rplacd prev (cons al (cdr sv)))
         (rplacd sv ()) )
      (rplacd (car :lvar-al) (cons () (cdar :lvar-al)))
      (:parse-progn l) ))

;;.SSSection ":PARSE-PROG*"
(de :parse-progn (l)
   (mapc ':parse-exp l) )

(de :parse-prog3 (f l)
   (ifn l
      (:warning 5 f)
      (:parse-exp (car l))
      (:parse-prog2 f (cdr l)) ))

(de :parse-prog2 (f l)
   (ifn l
      (:warning 5 f)
      (:parse-exp (car l))
      (:parse-prog1 f (cdr l)) ))

(de :parse-prog1 (f l)
   (if (or (null l) (cdr l))
      (:warning 5 f)
      (:parse-exp (car l)) ))

;;.SSSection ":PARSE-EXP"
(de :parse-exp (l)
   (cond
      ((constantp l))
      ; Le cas des constantes numeriques sous formes de tcons.
      ((numberp l))
      ; Libre? Lie'e? Habitez-vous chez vos parents?
      ((symbolp l) (unless (:local? l) (:try-to-bind l)))
      ; Le copyrigth Lambda-calculus.
      ((consp (car l)) (:parse-anonymous-exp (car l) (cdr l)))
      ((:parse-std-function? (car l) (cdr l)))
      ((neq l (setq :x (:macroexpand l))) (:parse-exp :x))
      ; La paranoia n'est pas toujours egoiste. BEN SI
      ; ((setq :x (getfn1 ':parsefnt (car l))) (funcall :x (cdr l)))
      ; 30%?.....
      (t (:parse-exp-subr (typefn (car l)) (car l) (cdr l))) ))

;;.SSSection ":PARSE-EXP-SUBR"
(de :parse-exp-subr (type fnt larg)
   (cond
      ((setq :x (get fnt 'resetfn))
         ; Une fausse fonction interpre`te.
         (setfn fnt (car :x) (cdr :x))
         (remprop fnt 'resetfn)
         (:parse fnt)
         (:parse-subr (get fnt ':ftype) fnt larg) )
      ((memq type '(expr fexpr))
         (:parse fnt)
         (:parse-subr (get fnt ':ftype) fnt larg) )
      (t (when (and (get fnt ':ftype) (not (memq fnt :extfnt)))
            (newl :extfnt fnt) )
         (:parse-subr (or type (get fnt ':ftype)) fnt larg) )))

;;.SSSection ":PARSE-SUBR"
(de :parse-subr (type fnt larg)
   (let ( (fvar (get fnt ':fvar)) )
      (when fvar
         (if (symbolp fvar)
            (:paranoia2)
            (:parse-free-var fvar) ))
      (selectq type
         (fsubr  type)
         (subr0 (when larg (:warning 5 fnt)))
         (subr1 (:parse-prog1 fnt larg))
         (subr2 (:parse-prog2 fnt larg))
         (subr3 (:parse-prog3 fnt larg))
         (nsubr (:parse-progn larg))
         (t ; Caisse?
            (:warning 3 (list fnt type))
            (:parse-exp `(eval '(,fnt ,@larg))) ))))

;;.SSSection ":PARSE-ANONYMOUS-EXP"
(de :parse-anonymous-exp (lamb larg)
   (selectq (car lamb)
      (lambda (:parse-progn larg) (:parse-lambda (cdr lamb)))
      (flambda (:parse-lambda (cdr lamb)))
      (mlambda (:error 2 lamb))
      (t (:error 1 lamb)) ))

;;.SSSection ":PARSE-STD-FUNCTION?"
(de :parse-std-function? (fnt larg)
   (selectq fnt
      ((if and or while until repeat progn prog1 protect evexit evtag
             setq defvar return schedule with-interrupts
             without-interrupts)
         (:parse-progn larg)
         fnt )
      ((funcall apply) (:paranoia1 (car larg)) (:parse-progn larg) fnt)
      (lock (:parse-lock (car larg) (cdr larg)) fnt)
      (tagbody (:parse-tagbody larg) fnt)
      ((quote comment mlambda) fnt)
      ((lambda flambda) (:paranoia2) (:parse-funarg fnt larg) fnt)
      (declare (mapc ':declaration larg) fnt)
      (selectq
         (:parse-exp (car larg))
         (mapc (lambda (l) (:parse-progn (cdr l))) (cdr larg))
         fnt )
      (letv (:parse-letv larg) fnt)
      (deset (:parse-deset larg) fnt)
      ((tag exit unexit block return-from) (:parse-progn (cdr larg)) fnt)
      ((unwind unexit) (:paranoia3 (cons fnt larg)) fnt)
      ((eval symeval evlis set)
         (:paranoia3 (cons fnt larg))
         (:parse-progn larg)
         fnt )
      (precompile (:parse-exp (car larg)) fnt)
      (flet
         (ifn :parano-flag
            ; Si on est pas parano c'est une GRAVE erreur.
            (:error 5 larg)
            ; Sinon on passe a` l'e'valuateur.
            (:parse-exp `(eval '(flet ,@larg))) )
         fnt )
      (t ()) ))

;;.SSSection ":MAKE-AL"
(de :make-al (l)
   (map (lambda (m) (rplaca m (ncons (car m)))) l)
   l )

;;.SSSection ":LOCAL?"
(de :local? (var)
   (assq var (cdar :lvar-al)) )

;;.SSSection ":PARSE-FREE-VAR"
(de :parse-free-var (lvar)
   (if (variablep lvar)
      ; Un appel vers une fonction paranoiaque.
      (:paranoia2)
      ; Sinon on construit les variables libres.
      (mapc ':try-to-bind lvar) ))

;;.SSSection "TRY-TO-BIND"
(de :try-to-bind (var)
   (unless (:globalvarp var)
      (:try-to-bind-aux var :lvar-al :fvar-al) ))

(de :try-to-bind-aux (var l f)
   (when l
      (let ( (a (assq var (cdar l))) )
         (if a
            (rplacd a 'cval)
            (mapc (lambda (m) (:rec-bind var m)) (get (caar l) ':rec-env))
            (unless (or (variablep (car f)) (memq var (car f)))
               (rplaca f (cons var (car f))) )
            (:try-to-bind-aux var (cdr l) (cdr f)) ))))

;;.SSSection ":GET-FVAR"
(de :get-fvar (f lv fv)
   (if (eq (caar lv) f)
      (car fv)
      (:get-fvar f (cdr lv) (cdr fv)) ))

;;.SSSection ":ENV-OPEN"
(de :env-open (f)
   ; doit sauvegarder l'environnement ouvert de l'environnement courant
   ; a` <f>.
   (putprop f
      (cons (:env-open-aux f :lvar-al) (get f ':rec-env))
      ':rec-env ))

(de :env-open-aux (f l)
   (if (eq (caar l) f)
      (ncons (cons f (:env-open-aux2 (cdar l))))
      (cons
         (cons (caar l) (:env-open-aux2 (cdar l)))
         (:env-open-aux f (cdr l)) )))

(de :env-open-aux2 (l)
   (cond
      ((null l) l)
      ((variablep (caar l)) (cons (car l) (:env-open-aux2 (cdr l))))
      (t (:env-open-aux2 (cdr l))) ))

;;.SSSection ":REC-BIND"
(de :rec-bind (var env)
   (cond
      ((null env) var)
      ((:setcassq var 'cval (cdar env)))
      (t (let ( (l (get (caar env) ':fvar)) )
            (unless (memq var l)
               (putprop (caar env) (cons var l) ':fvar) )
            (:rec-bind var (cdr env)) ))))

;;.SSSection ":PARANOIA1  -  :PARANOIA2  -  :PARANOIA3"
(de :paranoia1 (l)
   (:warning 7 l)
   (:paranoia2) )

(de :paranoia2 ()
   ; La fonction courante devient paranoiaque soit par un appel explicite
   ; a` l'evaluateur (eval funcall ...), soit par un appel a une fonction
   ; de'ja' paranoiaque.
   (when :parano-flag
      (map
         (lambda (((fnt . lvar) . b) lfvar)
            (rplaca lfvar 'parano)
            (mapc
               (lambda (v) (when (variablep (car v)) (rplacd v 'cval)))
               lvar ))
         :lvar-al
         :fvar-al )))

(de :paranoia3 (l)
   (:warning 8 l)
   (:paranoia2) )

;;.SSSection ":SETFTYPE"
(de :setftype (f)
   (putprop f
      (selectq (typefn f)
         (fexpr 'fsubr)
         (macro 'msubr)
         (dmacro 'dmsubr)
         (t (let ( (l (car (valfn f))) )
               (if (or (variablep l) (cdr (last l)) (ge (length l) 4))
                  'nsubr
                  (concat 'subr (length l)) ))))
      ':ftype ))

;;.SSSection ":SETBIND"
(de :setbind (f lvar)
   (let ( (l (:setbind-aux lvar)) )
      (when l (putprop f l ':bind)) ))

(de :setbind-aux (l)
   (when l
      (let ( (bind (:make-bind (car l))) (rec (:setbind-aux (cdr l))) )
         (if rec
            (cons bind rec)
            (when bind (ncons bind)) ))))

(de :make-bind (l)
   (when l
      (ifn (eq (cdar l) 'cval)
         (:make-bind (cdr l))
         (cons (caar l) (:make-bind (cdr l))) )))

;;.SSection "Principales fonctions de filtrage"
(de :parse-funarg (lamb corps)
   (let ( (fnt (symbol :f (gensym))) )
      (setfn fnt (if (eq lamb 'lambda) 'expr 'fexpr) corps)
      (:parse fnt)
      (rplacd
         (car :lvar-al)
         `(((,(get fnt ':bind) . cval))
           ((,(get fnt ':ftype) . cval))
           ,.(cdar :lvar-al) ))
      (setq :allfnt (delq fnt :allfnt))
      (remob fnt) ))

(de :parse-lock (f larg)
   (if (and (consp f) (memq (car f) '(lambda quote)))
      (progn
         (when (eq (car f) 'quote) (setq f (cadr f)))
         (ifn (or (variablep f) (and (consp f) (eq (car f) 'lambda)))
            (:error 1 f)
            (:parse-exp `(,f () (progn ,@larg))) ))
      (:paranoia1 f) (:parse-exp f) (:parse-progn larg) ))

(de :parse-tagbody (l)
   (cond
      ((not (consp l)) l)
      ((not (consp (car l))) (:parse-tagbody (cdr l)))
      (t (:parse-exp (car l)) (:parse-tagbody (cdr l))) ))

(de :parse-letv ((lvar lval . corps))
   (ifn (and (consp lvar) (eq (car lvar) 'quote))
      (:error 7 lvar)
      (:parse-exp `((lambda (,(cadr lvar)) ,@corps) ,lval)) ))

(de :parse-deset ((lvar lval))
   (if (and (consp lvar) (eq (car lvar) 'quote))
      (progn
         (:parse-exp lval)
         (rplacd (car :lvar-al) (cons () (cdar :lvar-al)))
         (:parse-progn (:flatt (cadr lvar))) )
      (:paranoia3 (mcons 'deset lvar lval))
      (:parse-exp lvar)
      (:parse-exp lval) ))

(de :declaration ((type . larg))
   (selectq type
      (special
         (mapc
            (lambda (m)
               (let ( (a (assq m (cdar :lvar-al))) )
                  (if a (rplacd a 'cval) (:warning 1 m)) ))
            larg )
         type )
      (cpcall
         (mapc
            (lambda (m) (:parse m))     ; m paranoiaque ???
            (cdr larg) )
         type )
      (t type) ))
