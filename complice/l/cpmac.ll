; .EnTete "Le-Lisp (c) version 15.2" " " "Les Macros du Compilateur"
; .EnPied " " "%" " "
; .sp 2
; .SuperTitre "Les Macros du Compilateur"          
;
; .Centre "*****************************************************************"
; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"

; .Centre "$Header: /usr/cvs/lelisp/complice/l/cpmac.ll,v 1.2 2016/05/22 05:38:14 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'cpmac))

; Les macros de l'interpre`te (DM et DMD) sont une tre`s bonne chose 
; pour le compilateur qui ne va compiler que le re'sultat des
; expansions. Cette technique est si bonne qu'on va rede'finir 
; des fonctions standard sous forme de macros spe'ciales, les
; \fImacros du compilateur\fR. Il en existe de 2 sortes\ :
; .br
; - les macros ferme'es (:macro-close) qui sont toujours exe'cute'es
; .br
; - les macros ouvertes (:macro-open) qui ne sont exe'cute'es que si
; l'indicateur global :OPEN-P est vrai.
 

; .Section "Les Variables Globales"

; Tous les symboles pre'fixe's par : seront cre'e's dans le
; package COMPILER.

(defvar #:sys-package:colon 'compiler)
(defvar :exported-env (if (boundp ':exported-env) :exported-env ()))
 
; #:compiler:open-p : indique que les compilations open
; (voir la section suivante) sont autorise'es.
; Une compilation open peut donner des re'sultats
; diffe'ents de ceux de l'interpre`te en cas de mauvais type d'arguments.

(defvar :open-p t)

; .Section "De'finitions des Macros"

(df  defmacro-open (name . fval)
     (setfn (symbol name 'macro-open) 'expr fval)
     name)

(de  make-macro-open (nom fval)
     (setfn (symbol nom 'macro-open) 'expr fval)
     nom)

(de  macro-openp (nom)
     (getfn1 nom 'macro-open))

(de  remove-macro-open (nom)
     (when (getsymb1 nom 'macro-open)
           (remob (getsymb1 nom 'macro-open))))

; .Section "Les Fonctions Exporte'es"

; (de :macro-expand-error (l)
;     ; peut (et doit) e^tre rede'finie
;     (error ':macro-expand-error "erreur durant la macroexpansion" l))

(de :macroexpand (l)
    ; expanse la forme <l>.
    (if (and (consp l) (symbolp (car l)))
        (let ((x ()) (cl (car l)) (cd (cdr l)))
	  (setq x (catcherror ()
                (cond
                  ((and :open-p (setq x (getfn1 cl 'macro-open)))
                     ; Macros ouvertes du compilateur.
                     ; Si elle retourne (), la macro est surcharge'e
                     ; et n'est plus effective.
                     (or (apply x (cdr l))
                         l))
                  ; Les macros internes pre'de'finies
                  ((:macroexpand-internal cl (cdr l)))
                  ((eq (typefn cl) 'macro)
                     ; Macros utilisateurs.
                     (apply (cons 'lambda (valfn cl)) l) )
                  ((eq (typefn cl) 'dmacro)
                     ; Displace macros utilisateurs.
                     (apply (cons 'lambda (valfn cl)) (cdr l)) )
                  ((eq (typefn cl) 'msubr)
                     ; Macros syste`mes ou utilisateurs compile'es.
                     (call (valfn cl) l () ()) )
                  ((eq (typefn cl) 'dmsubr)
                     ; Displace macros syste`mes ou utilisateurs compile'es.
                     (call (valfn cl) (cdr l) () ()) )
                  (t l) )))
             (cond
                ; Une macro a produit une erreur (catcherror)
                ((atom x) (:macro-expand-error cl))
                ; Test si la macro expansion a fait quelquechose
                ; et me^me pour les vicieux qui travaillent directement
                ; sur la forme a` expanser.
                ((and (consp (car x))
                      (or (neq l (car x))
                          (neq cl (caar x))
                          (neq cd (cdar x))))
                 (:macroexpand (car x)))
                ; Sinon on retourne le me^me objet.
                (t (car x))))
        l))


; .Section "Les Expansions internes"

(de :macroexpand-internal (fnt l)
    (or (and :open-p (:macroexpand-internal-open fnt l))
        (:macroexpand-internal-close fnt l) ))

(de :macroexpand-internal-close (fnt l)
    (selectq fnt
      (COND       (:mc:cond l))
      (UNLESS    `(if (not ,(car l)) (progn ,@(cdr l))))
      (WHEN      `(if ,(car l) (progn ,@(cdr l))))
      (IFN       `(if (not ,(car l)) ,@(cdr l)))
      (NEQ       `(not (eq ,@l)))
      (NEQUAL    `(not (equal ,@l)))
      (NULL      `(not ,@l))
      (ATOMP     `(atom ,@l))
      (DECR      `(setq ,(car l) (,(if (cdr l) '- '1-) ,@l)))
      (INCR      `(setq ,(car l) (,(if (cdr l) '+ '1+) ,@l)))
      (NEWL      `(setq ,(car l) (cons ,(cadr l) ,(car l))))
      (NEXTL     `(prog1
                    ,(if (cdr l)
                        `(setq ,(cadr l) (car ,(car l)))
                        `(car ,(car l)))
                    (setq ,(car l) (cdr ,(car l))) ))
      (NEWR      `(setq ,(car l)
			(let ((:newr ,(cadr l)))
			    (nconc ,(car l) (ncons :newr)))))
      (DYNAMIC-LET (:mc:dynamic-let l))
      (DYNAMIC    (:mc:dynamic l))
      (RETURN    `(return-from () ,@l))
      (MAP        (:map l 'map  'null))
      (MAPL       (:map l 'map  'null))
      (MAPLIST    (:map l 'map  'cons))
      (MAPCON     (:map l 'map  'nreconc))
      (MAPC       (:map l 'mapc 'null))
      (MAPCAR     (:map l 'mapc 'cons))
      (MAPCAN     (:map l 'mapc 'nreconc))
      (EVERY      (:map l 'mapc 'every))
      (ANY        (:map l 'mapc 'any))
      (MAPVECTOR  (:mapvector l))
      (UNTILEXIT `(tag ,(car l) (while t ,@(cdr l))))
      (LOOP      `(while t ,@l))
      (CATCHERROR (:mc:catcherror l))
      (ERRSET     (:mc:errset l))
      (ERR       `(exit #:system:error-tag ,@l))
      (EVAL-WHEN  (:mc:eval-when l))
      (DESETQ    `(deset ',(car l) ,(cadr l)))
      (DEFPROP   `(putprop ',(car l) ',(cadr l) ',(caddr l)))
      (PSETQ      (if (cddr l)
                     `(setq ,(car l)
                         (prog1 ,(cadr l) (psetq ,.(cddr l))) )
                     `(setq ,(car l) ,(cadr l))) )
      (SETQQ      (if (cddr l)
                     `(progn
                         (setq ,(car l) ',(cadr l))
                         (setqq ,.(cddr l)) )
                     `(setq ,(car l) ',(cadr l)) ))
      (LETVQ     `((lambda (,(car l)) ,@(cddr l)) ,(cadr l)))
      (PROG2     `(progn ,(car l) (prog1 ,@(cdr l))))
      (LOGNOT    `(logxor ,(car l) -1))
      (ADD1      `(add ,(car l) 1))
      (SUB1      `(sub ,(car l) 1))
      (TIME      (:mc:time (car l)))
      (t ()) ))

(de :macroexpand-internal-open (fnt l)
   (selectq fnt
      (CAAR   `(car (car ,.l)))
      (CADR   `(car (cdr ,.l)))
      (CDAR   `(cdr (car ,.l)))
      (CDDR   `(cdr (cdr ,.l)))
      (CAAAR  `(car (car (car ,.l))))
      (CAADR  `(car (car (cdr ,.l))))
      (CADAR  `(car (cdr (car ,.l))))
      (CADDR  `(car (cdr (cdr ,.l))))
      (CDAAR  `(cdr (car (car ,.l))))
      (CDADR  `(cdr (car (cdr ,.l))))
      (CDDAR  `(cdr (cdr (car ,.l))))
      (CDDDR  `(cdr (cdr (cdr ,.l))))
      (CAAAAR `(car (car (car (car ,.l)))))
      (CAAADR `(car (car (car (cdr ,.l)))))
      (CAADAR `(car (car (cdr (car ,.l)))))
      (CAADDR `(car (car (cdr (cdr ,.l)))))
      (CADAAR `(car (cdr (car (car ,.l)))))
      (CADADR `(car (cdr (car (cdr ,.l)))))
      (CADDAR `(car (cdr (cdr (car ,.l)))))
      (CADDDR `(car (cdr (cdr (cdr ,.l)))))
      (CDAAAR `(cdr (car (car (car ,.l)))))
      (CDAADR `(cdr (car (car (cdr ,.l)))))
      (CDADAR `(cdr (car (cdr (car ,.l)))))
      (CDADDR `(cdr (car (cdr (cdr ,.l)))))
      (CDDAAR `(cdr (cdr (car (car ,.l)))))
      (CDDADR `(cdr (cdr (car (cdr ,.l)))))
      (CDDDAR `(cdr (cdr (cdr (car ,.l)))))
      (CDDDDR `(cdr (cdr (cdr (cdr ,.l)))))
      (t ()) ))

 ; Ceci enleve' (dans la passe') une erreur des plus vicieuses.
 ; A vous de la trouver!!

 ; (:macroexpand '(trouver l erreur))

; .Section "Fonctions Spe'cialis'es (ordre alpha)"


(de :mc:catcherror ((s . l))
    (cond
      ((eq s t)
         `(let ((#:system:error-flag t))
               (tag #:system:error-tag (ncons (progn ,@l))) ))
      ((null s)
         `(let ((#:system:error-flag ())
                (#:system:print-msgs 0)
                (#:system:debug ()))
               (tag #:system:error-tag (ncons (progn ,@l))) ))
      (t `(let ((#:system:error-flag ,s))
               (let ((#:system:print-msgs 
                       (if #:system:error-flag #:system:print-msgs 0))
                     (#:system:debug
                       (if #:system:error-flag #:system:debug ()) ))
                    (tag #:system:error-tag
                         (ncons (progn ,@l))) )))))

(de :mc:cond (l)
    (if (null (cdr l))
        (if (cdar l)
            (if (eq (caar l) t)
                `(progn ,@(cdar l))
                `(if ,(caar l) (progn ,@(cdar l))) )
            (or (caar l) 'nil) )
        (if (cdar l)
            `(if ,(caar l) (progn ,@(cdar l)) (cond ,@(cdr l)))
            `(or ,(caar l) (cond ,@(cdr l))) )))

(de :mc:dynamic (l)
    ;; un reference variable dynamique.
    (when (featurep 'complice) (putprop (car l) t dynamic-flag))
    (car l))

(de :mc:dynamic-let (l)
    ;; produire une liaison dynamique.
    ;; llcp le fait par de'faut, mais on doit l'indiquer a` complice.
    (when (featurep 'complice)
	  (mapc (lambda ((var val))(putprop var t dynamic-flag))
		(car l)))
    `(let ,(car l) ,@(cdr l)))

;;; Par compatibilite', complice regard loaded-from-file pour de'cider
;;; s'il faut lier dynamiquement.
(defvar dynamic-flag '#:complice:globalvar)

(de :mc:eval-when ((S* . E*))
   (let ( (ret 'nil) )
      (when (memq 'load S*)  (setq ret `(progn ,@E*)))
      (when (memq 'compile S*)
            (unless (member E* :exported-env)
                    ;; Do a copy to prevent destructive macroexpansion.
                    (newl :exported-env (copy E*))
                    (eprogn E*) ))
      (when (memq 'local-compile S*) (eprogn E*))
      ret ))

(de :mc:errset ((l s))
    `(let ((#:system:error-flag ,s))
          (tag #:system:error-tag (ncons ,l)) ))

; .Section "Les spe'cialistes de l'expansion des fonctionnelles"

(de :map ((fnt . larg) targ tret)
    (let ((n (length larg)) (glarg ()) (res '#:system:map:r))
         (repeat n 
                 (newl glarg (symbol '#:system:map (concat "arg" (decr n)))))
         `((lambda ,glarg
            ,(:map-result
               (:map-while
                  (:map-next-res (:map-funcall (:map-next-arg glarg targ)
                                               fnt)
                                 tret
                                 res)
                  tret
                  (mapcar (lambda (m) `(consp ,m)) glarg))
               tret res ))
            ,@larg )))

(de :mapvector ((fnt v))
    `(let* ((#:system:map:r 0)
            (#:system:map:v ,v)
            (#:system:map:n (vlength #:system:map:v)))
           (while (lt #:system:map:r #:system:map:n)
                  ,(:map-funcall '((vref #:system:map:v #:system:map:r)) fnt)
                  (setq #:system:map:r (add1 #:system:map:r)))))

(de :map-next-arg (larg type-arg)
   (mapcar
      (lambda (m)
         `(prog1 ,(if (eq type-arg 'map) m `(car ,m)) (setq ,m (cdr ,m))) )
      larg ))

(de :map-funcall (corps fnt)
    (cond ((not (consp fnt)) (mcons 'funcall fnt corps))
          ((memq (car fnt) '(function quote))
             (if (and (symbolp (cadr fnt))
                      (memq (typefn (cadr fnt)) '(() fexpr fsubr)) )
                (mcons 'funcall fnt corps)
                (cons (cadr fnt) corps) ))
          ((eq (car fnt) 'lambda) (cons fnt corps))
          ((eq (car fnt) 'flambda) (cons (cons 'lambda (cdr fnt)) corps))
          ; Ge'ne're une erreur a` l'interpre'tation.
          ((eq (car fnt) 'mlambda) (mcons 'funcall fnt corps))
          (t (mcons 'funcall fnt corps)) ))

(de :map-next-res (exp type-result res)
    (selectq type-result
             (null exp)
             (cons `(setq ,res (cons ,exp ,res)))
             (nreconc `(setq ,res (nreconc ,exp ,res)))
             (t `(setq ,res ,exp)) ))

(de :map-while (exp type-result glarg)
    (selectq type-result
             ((null cons nreconc) `(while (and ,@glarg) ,exp))
             (every `(while (and ,@glarg ,exp)))
             (any `(while (and ,@glarg (not ,exp)))) ))

(de :map-result (exp type-result res)
    (selectq type-result
             (null exp)
             ((cons nreconc) `((lambda (,res) ,exp (nreverse ,res)) ()))
             (every `((lambda (,res) ,exp ,res) t))
             (any `((lambda (,res) ,exp ,res) ())) ))

(defun :mc:time (e)
   (if (and (consp e) (eq (car e) 'quote))
      `(let ( (:time (runtime)) ) ,(cadr e) (fsub (runtime) :time))
      `(let ( (:time (runtime)) ) (eval ,e) (fsub (runtime) :time))))

