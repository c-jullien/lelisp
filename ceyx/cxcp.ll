; .EnTete "CXCP" "Pre'compilateur Ceyx" "cxcp"
; .Chapitre C "LE PRECOMPILATEUR CEYX"
; .Auteur "Bertrand Serlet"
; .INRIA
; .Section "Objectifs"
; Afin d'obtenir une efficacite' maximale lors de l'exe'cution,
; il est pre'fe'rable, lorsque le programme Ceyx est au point,
; de compiler \fIinline\fR et \fIopen\fR les fonctions d'acce`s aux champs.
; On e'vite aussi en outre de cette fac/on de payer le prix des ve'rifications
; dynamiques de type.

; Une autre possibilite' offerte par ce compilateur est l'expansion
; en macro, le temps de la compilation, 
; en prote'geant e'ventuellement les variables d'une double e'valuation.

; Sur demande, ce pre'compilateur compile aussi les SEND d'une fac/on
; meilleure (en temps), au prix d'une expansion de la taille du code compile'.

; Enfin, ce pre'compilateur e'tant conc/u comme une couche au dessus
; du compilateur Le_Lisp de J. Chailloux, il e'vite le me'lange des 
; diffe'rents niveaux de compilation. 
; Plusieurs macros (mapc, mapcar ...), pourront - si Je'ro^me le veut -
; repasser dans le compilateur. C'est aussi la porte ouverte a`
; un type-checker a` la ML, et a` des optimisations de haut niveaux plus
; fantaisistes ...
; Des possibilites restent a` ajouter (attribut memo sur une fonction,
; execute and compile ...)

; .Section "Appel du pre'compilateur"

; .SSection "Compilation d'une, plusieurs, ou toutes les fonctions"

; Syntaxe:
; .br
; - (CXCP fn [ind1 [ind2 [ind3]]])                ; une fonction
; .br
; - (CXCP (fn1 fn2 ... fnk) [ind1 [ind2 [ind3]]]) ; plusieurs fonctions
; .br
; - (CXCP T [ind2]) ou (CXCP)                     ; toutes les fonctions

; Les indicateurs optionnels ind1, ind2, ind3 ont le me^me sens
; que pour la fonction compiler du compilateur Le_Lisp.

(df cxcp args
  (let ((arg1 (car args)) (rest (cdr args)))
       (when (or (null arg1) (eq arg1 t))
             (setq arg1 (maploblist '#:cxcp:compilable)
                   rest (cons t rest)))
       (when (and arg1 (symbolp arg1))
             (setq arg1 (list arg1)))
       (when arg1 
             (#:cxcp:compiler arg1 (car rest) (cadr rest) (caddr rest)))
       (when (or (null args) (eq (car args) t))
             ; il reste a compiler les fonctions expansees in-line
             (compile-all-in-core))))

; .SSection "Optimisation des SEND: execute-and-compile"

; Afin d'optimiser les SEND, il faut d'abord les faire tourner sur
; un peu de code.

; Syntaxe: (ECXCP <exp> <arg>1 ... <arg>n)
; .br
; ou` <exp> est une expression a e'valuer, et <arg>i les me^mes arguments
; que pour CXCP

; La variable #:cxcp:ecxcp indique le nombre de clauses a partir duquel
; on ne veut plus faire de selectq
(defvar #:cxcp:ecxcp 5)

(df ecxcp (exp . args)
  (let ((oldtype (typefn 'send)) (oldval (valfn 'send))
        (#:system:redef-flag t))
       ; On rede'finit le send
       (setfn '#:cxcp:send oldtype oldval)
       (dmd send (sem arg1 . args)
            (if (and (consp sem) (eq (car sem) 'quote))
                `(#:cxcp:sendcase '(()) ,sem ,arg1 ,.args)
                `(#:cxcp:send ,sem ,arg1 ,.args)))
       (de #:cxcp:sendcase (ltypes sem . args)
           (let ((type (tcar (car args))))
                ; on met le nouveau type en te^te de liste
                (rplacd ltypes (cons type
                                     (if (memq type (cdr ltypes))
                                         (delq type (cdr ltypes))
                                         (cdr ltypes))))
                (apply (getfn type sem '||) args)))
       ; on evalue
       (eval exp)
       ; on remet le send initial, et on redefinit #:cxcp:sendcase
       (setfn 'send oldtype oldval)
       (dmd #:cxcp:sendcase (ltypes sem arg1 . args)
            (cond
                 ((> (length (cadr ltypes)) #:cxcp:ecxcp)
                  ; ca expanserait trop, on fait juste un send
                  `(send ,sem ,arg1 ,@args))
                 ((#:cxcp:danger arg1)
                  (let ((gen (gensym)))
                       `(let ((,gen ,arg1)) 
                             (#:cxcp:sendcase ,ltypes ,sem ,gen ,.args))))
                 (t
                   (let ((al)) ; aliste (fonction . types)
                        (mapc (lambda (type)
                                      (let ((x (getfn type (cadr sem) '||)) (y))
                                           (setq y (assq x al))
                                           (if y (rplacd y (nconc1 (cdr y) type))
                                               (setq al (nconc1 al 
                                                                (cons x (list type)))))))
                              (cdadr ltypes))
                        `(selectq (car ,arg1)
                             ,@(mapcar (lambda (paire)
                                               (list (cdr paire)
                                                     (mcons (car paire) arg1 args)))
                                       al)
                             (t (send ,sem ,arg1 ,.args)))))))
       (prog1 (eval `(cxcp ,.args))
              (dmd #:cxcp:sendcase (ltypes sem arg1 . args)
                   `(send ,sem ,arg1 ,.args)))))

(de #:cxcp:compilable (x)
  (and (null (getprop x 'dont-compile))
       (memq (typefn x) 
             '(expr fexpr macro dmacro))))

; Pour la mise au point
(defvar #:cxcp:debug ())
; .SSection "Compilation d'un ou plusieurs packages Ceyx"

; Syntaxe:
; .br
; - (CXCP-PACKAGE pack [ind1 [ind2 [ind3]]])              ; un package
; .br
; - (CXCP-PACKAGE (pack1 ... packn) [ind1 [ind2 [ind3]]]) ; plusieurs packages
; Toutes les fonctions du(des) package(s) et des sous-packages, sont
; compilees.

(df cxcp-package (arg1 . rest)
  (when (symbolp arg1) (setq arg1 (list arg1)))
  (let ((lpacks)) 
       (foreach x arg1 (newl lpacks (mlink x)))
       (#:cxcp:compiler
        (maploblist (lambda (x) (and (#:cxcp:compilable x)
                                     (#:cxcp:in-packs x lpacks))))
        (car rest) (cadr rest) (caddr rest))))

(de #:cxcp:in-packs (x lpacks)
  (and (neq x '||)
       (or (memq x lpacks) (#:cxcp:in-packs (packagecell x) lpacks))))

; .SSection "De'claration de l'expansion inline"

; L'expansion inline a` la demande pour une fonction
; est une primitive appartenant pluto^t au compilateur
; lui me^me, mais inclus ici pour plus de facilite'.

; Syntaxe:
; (CXCP-INLINE fn1 ... fnk) , fni est soit un nom de fonction,
; soit une liste dont le premier e'le'ment est le nom de la fonction 
; et les suivants les noms des variables a` prote'ger en
; double e'valuation.

; ATTENTION: Aucune ve'rification n'est faite sur la validite'
; de l'expansion inline. 
; Des cas triviaux ou` l'expansion inline simple n'est pas
; suffisante sont:
; .br
; - les cas de double e'valuation
; .br
; - les cas d'appels avec effets de bords.
; .br
; - les cas d'appel de FSUBR.
; .br
; Un exemple typique est la fonction xcons:
; .DebLL
; (de xcons (a b) (cons b a))
; .FinLL
; Pour cette fonction, l'expansion inline est fausse si l'ordre des effets
; de bord des arguments d'appel importe.
; Un autre cas difficile:
; .DebLL
; (de foo () (omakeq foo foo))
; .FinLL
; qui devrait generer:
; .DebLL
; (dmd foo () `(omakeq foo ,foo))
; .FinLL
; Ce cas difficile est en fait re'solu par l'application
; du macro-expanseur avant tout traitement.
; Un misfeature de l'expanseur, dans le cas ou il doit proteger en double 
; e'valuation certaines variables, est de ge'ne'rer du code incorrect
; pour les expr ayant des argument de la forme (a . b)

(df cxcp-inline args
  (foreach arg args 
      (if (symbolp arg)
          ({Ceyx}:cxcp-inline arg ())
          ({Ceyx}:cxcp-inline (car arg) (cdr arg)))))

; On stocke sur la plist de la fonction, la liste des
; variables a` prote'ger, pre'ce'de'e du nom de la fonction.


; .Section "Code de la fonction interne de compilation"

; .SSection "Utilitaires"

; L'ite'ration pour l'e'le'memt "x" de'crivant la liste "liste".
(defmacro foreach (x liste . body)
  `(let ((,x) (*foreach* ,liste))
        (while *foreach* (setq ,x (nextl *foreach*)) ,.body)))

; .SSection "Lancement de la compilation"

; La compilation d'une liste de fonctions:
(de #:cxcp:compiler (l ind1 ind2 ind3)
  (let ((oldval (valfn 'send)) (oldtype (typefn 'send)))
       ; On enle`ve toutes les fonctions de l qui sont dans les fonctions
       ; d'acce`s ou a` macroizer.
       (foreach pair {Ceyx}:cxcp-access (delq (car pair) l))
       (foreach pair {Ceyx}:cxcp-inline (delq (car pair) l))
       ; On ge'ne`re les fonctions d'acce`s
       (mapc
            (lambda (pair) (#:cxcp:make-access-macro (car pair) (cdr pair)))
            {Ceyx}:cxcp-access)
       ; On ge'ne`re les fonctions macroize'es
       (mapc (lambda (pair)
                     (when (eq (typefn (car pair)) 'expr) 
                           (#:cxcp:make-inline-macro (car pair) (cdr pair))))
             {Ceyx}:cxcp-inline)
       ; On compile pour de bon
       (protect
               (mapc (lambda (f) (compiler f ind1 ind2 ind3)) l)
               ; On enle`ve les macros (seulement si le flag de debug est a ())
               (unless #:cxcp:debug
                       (mapc (lambda (x) (remob (symbol x 'macro-open)))
                             (or (mapcar 'car {Ceyx}:cxcp-access)
                                 (mapcar 'car {Ceyx}:cxcp-inline)))))))

; .SSection "Ge'ne'ration des fonctions d'acce`s"

(de #:cxcp:make-access-macro (name access)
  (make-macro-open name
       `((inst . val)
         (if (consp val)
             ,(#:cxcp:make-put-function access 'inst 'val)
             ,(#:cxcp:make-get-function access 'inst)))))

(de #:cxcp:make-get-function (access exp)
  (cond
       ((null access) exp)
       ((numberp (car access))
        (#:cxcp:make-get-function (cdr access) 
         `(list 'vref ,exp ,(car access))))
       ((eq (car access) 'car)
        (#:cxcp:make-get-function (cdr access)
         `(list 'car ,exp)))
       ((eq (car access) 'cdr)
        (#:cxcp:make-get-function (cdr access) 
         `(list 'cdr ,exp)))
       ((eq (car access) 'tcar)
        (#:cxcp:make-get-function (cdr access)
         `(list 'tcar ,exp)))
       ((eq (car access) 'tcdr)
        (#:cxcp:make-get-function (cdr access) 
         `(list 'tcdr ,exp)))
       (t (syserror '#:cxcp:make-get-function "Bad access list" access))))

(de #:cxcp:make-put-function (access exp val)
  (unless access (syserror 'cxcp "access list too short" access))
  (setq exp (cdr (#:cxcp:make-get-function access exp))
        acces (cadar exp) exp (cdr exp))
  `(mcons ',(cassq acces '((car . rplaca) (cdr . rplacd)
                           (tcar . trplaca) (tcdr . trplacd)
                           (vref . vset)))
          ,@exp ,val))

; .SSection "Ge'ne'ration de l'expansion inline"

(de #:cxcp:make-inline-macro (name protect)
  (let ((body (valfn name)) (larg) (exp))
       (setq larg (nextl body))
       (ifn (equal larg (flat larg))
            (print "**** cxcp-inline : Desole, je ne peux pas expanser : "
                   name)
            (setq exp (#:cxcp:inliner-aux
                       (if (cdr body) (cons 'progn body) (car body))
                       larg))
            (foreach x protect
                (setq exp `(if (#:cxcp:danger ,x)
                               (list 'let (list (list ',x ,x))
                                     (cons ',name 
                                           ,(#:cxcp:inline-copy-args larg x)))
                               ,exp)))
            (make-macro-open name `(,larg ,exp)))))


(de #:cxcp:inline-copy-args (l x)
  (cond
       ((null l) ())
       ((eq l x) (kwote x))
       ((symbolp l) l)
       (t `(cons ,(#:cxcp:inline-copy-args (car l) x)
                 ,(#:cxcp:inline-copy-args (cdr l) x)))))

; L'expansion pour une liste de S-expr.
; retourne une liste de sexpr.
(de #:cxcp:inliner-aux-body (lbody larg)
  (mapcar (lambda (x) (#:cxcp:inliner-aux x larg)) lbody))

(de #:cxcp:inliner-aux (body larg)
  (setq body (#:compiler:macroexpand body))
  (cond
       ((null body) ())
       ((atomp body) (if (memq body larg) body (kwote body)))
       ; la FSUBR la plus triviale !
       ((eq (car body) 'quote) (kwote body))
       ((memq (car body) '(lambda mlambda flambda))
        ; La portee syntaxique est delicate, ici !
        (mcons 'list (kwote (car body)) (kwote (cadr body))
               (#:cxcp:inliner-aux-body (cddr body)
                (#:cxcp:inliner-delq larg (cadr body)))))
       ((consp (car body))
        ; Attention, ca peut etre faux!
        (unless (memq (caar body) '(lambda mlambda flambda))
                (print "; **** Inline expansion for " name
                       " can be wrong in " body))
        (cons 'list (#:cxcp:inliner-aux-body body larg)))
       (t (mcons 'list (kwote (car body)) 
                 (#:cxcp:inliner-aux-body (cdr body) larg)))))

(de #:cxcp:inliner-delq (larg lvar)
  (cond
       ((null lvar) larg)
       ((symbolp lvar) (delq lvar larg))
       (t (#:cxcp:inliner-delq
           (#:cxcp:inliner-delq larg (car lvar)) (cdr lvar)))))

(de #:cxcp:danger (x) 
  (setq x (#:compiler:macroexpand x))
  (cond
       ((atomp x) ())
       ((eq (car x) 'quote) ())
       ((memq (car x) '($car $cdr $vref $logand $logor $logxor $add $add1 
                             $minus $sub $sub1 and eq or = <> equal not))
        (any '#:cxcp:danger (cdr x)))
       (t t)))

