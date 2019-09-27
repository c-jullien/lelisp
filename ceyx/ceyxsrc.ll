; .Chapitre 1 "Ceyx en Ceyx"
; .Auteur "Jean-Marie Hullot"
; .Section "Pre'paration de Le_Lisp"
; .SSection "La Distinction Majuscules Minuscules"
; Parce que Ceyx veut diffe'rencier les majuscules des minuscules!

(setq #:system:read-case-flag t)


(dmc |{| ()
     (with ((typecn #/: 'cpkgc))   
        (let ((a (with ((typecn #/} 'csep)) (read))))
             (cond
               ((<> #/} (readcn)) 
                (error '|{| "pas d'accolade fermante" a))
               ((not (symbolp a)) 
                (error '|{| "abbre'viation incorrecte" a))
               ((<> #/: (peekcn))
                (plink a))
               (t ; cas {---}:foo:..
                (readcn)
                (let ((r (read)))
                   (if (symbolp r)
                       (symbol (concatpkgc (plink a) (packagecell r)) r)
                       (error '|{| 'errsxt (list a r)))))))))

(loaderesolve)

; .SSection "Les Espaces de Noms"

; Pour de'terminer si un package est plus bas qu'un autre dans
; la hie'rarchie des packages, nous de'finissons la fonction <=p

(de <=p (pkg1 pkg2)
    (if (eq pkg1 pkg2) t
        (if (eq pkg1 '||) nil
            (<=p (packagecell pkg1) pkg2))))

; Pour e'tablir des liens dans l'arbre des packages:

(de plink l
    (if (= (length l) 2)
        (putprop (car l) (cadr l) 'plink)
	(get-plink (car l))))

(de get-plink (x)
    (or (getprop x 'plink)
        x))
        
; Pour de'finir une abbre'viation:

(df defabbrev (symbol abbrev)
    (unless (or (eq abbrev '||) (eq symbol abbrev))
            (put-abbrev symbol abbrev)
            (plink abbrev symbol)))

(de get-labbrev (symb) (getprop symb 'labbrev))

(de put-abbrev (symb abbrev)
    (let ((labbrev (get-labbrev symb)))
         (unless (memq abbrev labbrev)
                 (putprop symb
                          (cons abbrev labbrev)
                          'labbrev))))


(loaderesolve)

; L'espace de noms ou on range les fonctions internes de Ceyx:

(defabbrev Ceyx Ceyx)


(defabbrev {Ceyx}:system CeyxSys)


; Pour la compilation par cxcp

(defvar {Ceyx}:cxcp-access ())

(defvar {Ceyx}:cxcp-inline ())

(de {Ceyx}:cxcp-access (name access)
    (setq {Ceyx}:cxcp-access (addalist {Ceyx}:cxcp-access name access)))

(de {Ceyx}:cxcp-inline (name lprotect)
    (setq {Ceyx}:cxcp-inline (addalist {Ceyx}:cxcp-inline name lprotect)))

(de addalist (alist key val)
    (let ((pair (assq key alist)))
         (ifn pair (newl alist (cons key val))
                   (rplacd pair val))
         alist))

; .SSection "Re'cupe'ration Fonctionnelle Hie'rarchique"

(defmacro hfuncall (pkg sem . argslist)
    `(funcall ({Ceyx}:getfn ,pkg ,sem) ,@argslist))

(defmacro semcall (pkg sem . argslist)
    `(funcall ({Ceyx}:getfn (plink ,pkg) ,sem) ,@argslist))


; .SSection "Les Objets Tagge's"


(defmacro tcar (x) `(car ,x))
(defmacro tcdr (x) `(cdr ,x))
(defmacro trplaca (x y) `(rplaca ,x ,y))
(defmacro trplacd (x y) `(rplacd ,x ,y))
(defmacro tdisplace (x y) `(displace ,x ,y))

(defmacro model (obj . arg)
      (if (consp arg) `(put-model ,obj ,(car arg))
                      `(get-model ,obj)))

(synonymq  get-model type-of)
(synonymq  type type-of)

(defmacro repr (obj . arg)
      (if (consp arg) `(put-repr ,obj ,(car arg))
                      `(get-repr ,obj)))


(de put-model (obj modelname)
    (if (tconsp obj) (trplaca obj modelname)
        (syserror 'model "Not a tcons:" obj)))

(de get-repr (obj)
    (if (tconsp obj) (tcdr obj) obj))

(de put-repr (obj modelname)
    (if (tconsp obj) (trplacd obj modelname)
        (syserror 'model "Not a tcons:" obj)))


; .SSection "La Construction send"

(de {Ceyx}:getfn (pkg symb)
    (or (getfn pkg symb '||)
        (getfn '* symb)))

(de send-error (sem argslist)
    (let ((fun (getfn '* sem)))
	 (if fun
	     (apply fun argslist)
	     (syserror 'send "Undefined semantic" 
		 (list (get-model (car argslist)) sem)))))

; .SSection "Fonctions Auxiliaires"

(de listvector (vect)
    (let ((l) (len (vlength vect)) (n 0))
         (until (= n len) 
                (newl l (vref vect n))
                (incr n))
         (nreverse l)))




(de <- (x y)
    (cond
      ((and (tconsp x) (tconsp y))
       (tdisplace x y))
      ((and (consp x) (consp y))
       (displace x y))
      (t (syserror '<- "Cannot execute" (list x y)))))


; .Section "Les Mode`les"
; .SSection "De'finition de la Classe des Mode`les"
; .DebLL
; (deftclass Model init fieldstruct)
; .FinLL

(de Model (type fieldstruct)
    (tcons type (vector () fieldstruct)))

(defabbrev Model Model)

(de {Model}:init l
    (ifn (cdr l)
         (vref (tcdr (car l)) 0)
         (vset (tcdr (car l)) 0 (cadr l))))

(de {Model}:fieldstruct l
    (ifn (cdr l)
         (vref (tcdr (car l)) 1)
         (vset (tcdr (car l)) 1 (cadr l))))

(de {Model}:set-access (model laccess) ())

(de {Model}:set-init (model) ({Model}:init model))

(de {Model}:find-field (model name) ())

(de {Model}:flat-fields (model) ())

; .SSection "Le Mode`le Champ de Mode`le"
; .DebLL
; (deftclass {Model}:Field name access)
; .FinLL

(de {Model}:Field (name model init)
    (tcons '{Model}:Field
           (vector init model name ())))

(defabbrev {Model}:Field {Model}:Field)

(de {{Model}:Field}:name l
    (ifn (cdr l)
         (vref (tcdr (car l)) 2)
         (vset (tcdr (car l)) 2 (cadr l))))

(de {{Model}:Field}:access l
    (ifn (cdr l)
         (vref (tcdr (car l)) 3)
         (vset (tcdr (car l)) 3 (cadr l))))

(de {{Model}:Field}:set-access (field laccess)
    (unless (symbolp ({Model}:fieldstruct field))
            (send 'set-access ({Model}:fieldstruct field) laccess))
    ({{Model}:Field}:access field 
                           ({CeyxSys}:insert-access laccess)))

(de {{Model}:Field}:set-init (field)
    (if (symbolp ({Model}:fieldstruct field))
        ()
        ({Model}:init field 
            (send 'set-init ({Model}:fieldstruct field))))
    ({Model}:init field))

(de {{Model}:Field}:find-field (field name)
    (cond
      ((eq name ({{Model}:Field}:name field)) field)
      ((symbolp ({Model}:fieldstruct field)) ())
      (t (send 'find-field ({Model}:fieldstruct field) name))))

(de {{Model}:Field}:flat-fields (field)
    (cons field
          (if (symbolp ({Model}:fieldstruct field)) ()
              (send 'flat-fields ({Model}:fieldstruct field)))))

; .SSection "Le Mode`le Predicate"
; .DebLL
; (deftclass {Model}:Predicate)
; .FinLL

(de {Model}:Predicate (fun init)
    (let ((model (Model '{Model}:Predicate fun)))
         ({Model}:init model init)
         model))


; .SSection "Le Mode`le List"
; .DebLL
; (deftclass {Model}:List)
; .FinLL

(de {Model}:List (model)
    (Model '{Model}:List model))

; .SSection "Le Mode`le Cons"
; .DebLL
; (deftclass {Model}:Cons)
; .FinLL

(de {Model}:Cons (model1 model2)
    (Model '{Model}:Cons (cons model1 model2)))

(defabbrev {Model}:Cons {Model}:Cons)

(de {{Model}:Cons}:set-access (model laccess)
    (send 'set-access (car ({Model}:fieldstruct model))
                      (append laccess (list 'car)))
    (send 'set-access (cdr ({Model}:fieldstruct model))
                      (append laccess (list 'cdr))))

(de {{Model}:Cons}:set-init (model)
    ({Model}:init model (cons (send 'set-init 
                                      (car ({Model}:fieldstruct model)))
                                (send 'set-init 
                                      (cdr ({Model}:fieldstruct model)))))
    ({Model}:init model))


(de {{Model}:Cons}:find-field (model name)
    (or
      (send 'find-field (car ({Model}:fieldstruct model)) name)
      (send 'find-field (cdr ({Model}:fieldstruct model)) name)))

(de {{Model}:Cons}:flat-fields (cons)
    (nconc (send 'flat-fields (car ({Model}:fieldstruct cons)))
           (send 'flat-fields (cdr ({Model}:fieldstruct cons)))))

; .SSection "Le Mode`le Vector"
; .DebLL
; (deftclass {Model}:Vector)
; .FinLL

(de {Model}:Vector lmodel
    (Model '{Model}:Vector
            (apply 'vector lmodel)))

(defabbrev {Model}:Vector {Model}:Vector)

(de {{Model}:Vector}:set-access (model laccess)
    (let ((vfield ({Model}:fieldstruct model))
          (n 0))
         (until (= n (vlength vfield))
                (send 'set-access (vref vfield n)
                                  (append laccess (list n)))
                (incr n))))

(de {{Model}:Vector}:set-init (model)
    ({Model}:init model
                   (apply 'vector
                          (mapcar
                             (lambda (x) (send 'set-init x))
                             (listvector ({Model}:fieldstruct model)))))
    ({Model}:init model))

(de {{Model}:Vector}:find-field (model name)
    (let ((vfield ({Model}:fieldstruct model))
          (n 0)
          (field))
         (tag found
              (until (= n (vlength vfield))
                     (if (setq field (send 'find-field (vref vfield n) name))
                         (exit found field)
                         (incr n)))
              ())))


(de {{Model}:Vector}:flat-fields (vector)
    (let ((vfield ({Model}:fieldstruct vector))
          (result)
          (n 0))
         (until (= n (vlength vfield))
                (setq result
                      (nconc result
                             (send 'flat-fields (vref vfield n))))
                (incr n))
         result))

; .SSection "Le Mode`le Tcons"
; .DebLL
; (deftclass {Model}:Tcons)
; .FinLL

(de {Model}:Tcons (symbol field)
    (Model '{Model}:Tcons (tcons symbol field)))

(defabbrev {Model}:Tcons {Model}:Tcons)

(de {{Model}:Tcons}:set-access (model laccess)
    (send 'set-access (tcdr ({Model}:fieldstruct model))
                      (append laccess (list 'tcdr))))

(de {{Model}:Tcons}:set-init (model)
    ({Model}:init model (tcons (tcar ({Model}:fieldstruct model))
                                 (send 'set-init 
                                      (tcdr ({Model}:fieldstruct model)))))
    ({Model}:init model))


(de {{Model}:Tcons}:find-field (model name)
    (send 'find-field (tcdr ({Model}:fieldstruct model)) name))

(de {{Model}:Tcons}:flat-fields (tcons)
    (send 'flat-fields (tcdr ({Model}:fieldstruct tcons))))

; Pour les noms de mode`les:

(de {symbol}:set-init (model) ())
(de {symbol}:set-access (model laccess) ())
(de {symbol}:find-field (model name) ())
(de {symbol}:flat-fields (model) ())

; .Section "Les Constructions de Base Ceyx"
; .SSection "De'finition de Mode`les"

(defmacro defmodel l
       (unless (= (length l) 2)
               (syserror 'defmodel "require 2 arguments" l))
       (let ((namedescr (car l))
             (model (cadr l)))
            (if (eq (setq model ({CeyxSys}:parse-model model)) 
                    '{CeyxSys}:parse-model-error)
                (syserror 'defmodel "Bad syntax for model argument" l)
                (defmodel-expander namedescr model ()))))

(defmacro deftype l
       (unless (= (length l) 2)
               (syserror 'defmodel "require 2 arguments" l))
       (let ((namedescr (car l))
             (model (cadr l)))
            (if (eq (setq model ({CeyxSys}:parse-model model)) 
                    '{CeyxSys}:parse-model-error)
                (syserror 'deftype "Bad syntax for model argument" l)
                (defmodel-expander namedescr model t))))


(de defmodel-expander (namedescr model tag)
    (when (symbolp namedescr) (setq namedescr (list namedescr)))
    (let ((expansion)
          (name (car namedescr))
          (abbrev (cadr namedescr)))
         ; Pb avec ^L
         ; (when (and (objval name) #:system:redef-flag)
         ;       (print "New definition for model: " name))
         (when (symbolp model)
               (ifn (objval model)
                    (syserror (if tag 'defmodel 'deftype)
                              "Undefined model"
                              (list namedescr model))
                    (setq model (copy (objval model)))))
         (when tag
               (if (<=p (model model) '{Model}:Tcons)
                   (trplaca ({Model}:fieldstruct model) name)
                   (setq model ({Model}:Tcons name model))))
         (send 'set-access model ())
         (send 'set-init model)
         (newl expansion `(defabbrev ,name ,abbrev))
         (newl expansion
               `(objval ',name ',model))
         (newl expansion `',name)
         `(progn 'compile ,@(nreverse expansion))))

; .SSection "Le Parser de Mode`les"


(de {CeyxSys}:parse-model (sexpr)
    (let ((model))
         (tag {CeyxSys}:parse-model-error
              (setq model ({CeyxSys}:parse-model-internal sexpr))
              (unless (symbolp model)
                      (send 'set-init model)
                      (send 'set-access model ()))
              model)))
              

(defmacro {CeyxSys}:parse-model-error ()
       `(exit {CeyxSys}:parse-model-error
                            '{CeyxSys}:parse-model-error))

(de {CeyxSys}:parse-model-internal (sexpr)
    (cond
      ((symbolp sexpr) sexpr)
      ((or (tconsp sexpr)
           (null (consp sexpr)))
       ({CeyxSys}:parse-model-error))
      (t (let ((keyword (car sexpr)))
              (ifn (symbolp keyword)
                   ({CeyxSys}:parse-model-error)
                   (ifn (setq keyword ({CeyxSys}:get-model-keyword keyword))
                        ({CeyxSys}:parse-model-error)
                        (hfuncall keyword 'parse-model sexpr)))))))

(de {CeyxSys}:put-model-keyword (symbol val)
    (putprop symbol val '{CeyxSys}:Model-KeyWord))

(de {CeyxSys}:get-model-keyword (symbol)
    (getprop symbol '{CeyxSys}:Model-KeyWord))

(defabbrev {Model}:Predicate {Model}:Predicate)

(de {{Model}:Predicate}:parse-model (l)
    ({Model}:Predicate (cadr l) (eval (caddr l))))

(de {{Model}:Cons}:parse-model (l)
    ({Model}:Cons ({CeyxSys}:parse-model-internal (cadr l)) 
                  ({CeyxSys}:parse-model-internal (caddr l))))

(de {{Model}:Vector}:parse-model (l)
    (apply '{Model}:Vector (mapcar '{CeyxSys}:parse-model-internal (cdr l))))

(defabbrev {Model}:List {Model}:List)

(de {{Model}:List}:parse-model (l)
    ({Model}:List ({CeyxSys}:parse-model-internal (cadr l))))

(de {{Model}:Field}:parse-model (l)
    ({Model}:Field (cadr l) 
            (or ({CeyxSys}:parse-model-internal (caddr l)) '*)
            (eval (cadddr l))))


(loaderesolve)

({CeyxSys}:put-model-keyword 'Predicate '{Model}:Predicate)
({CeyxSys}:put-model-keyword 'List '{Model}:List)
({CeyxSys}:put-model-keyword 'Cons '{Model}:Cons)
({CeyxSys}:put-model-keyword 'Vector '{Model}:Vector)
({CeyxSys}:put-model-keyword 'Field '{Model}:Field)

({CeyxSys}:put-model-keyword 'predicate '{Model}:Predicate)
({CeyxSys}:put-model-keyword 'list '{Model}:List)
({CeyxSys}:put-model-keyword 'cons '{Model}:Cons)
({CeyxSys}:put-model-keyword 'vector '{Model}:Vector)
({CeyxSys}:put-model-keyword 'field '{Model}:Field)


; .SSection "Instantiation de Mode`les"

(defmacro defmake (modelname mkname . args)
       (ifn (and (symbolp modelname) (objval modelname))
          (syserror 'defmake "Not a model name"
                             (list modelname args))
         (ifn args
           `(add-make-function ',modelname ',mkname)
           (setq args (car args))            
           (let ((arglist (flat args)))
               (unless
                 (tag unknown-field
                   (while arglist
                      (unless (send 'find-field (objval modelname)
                                                (nextl arglist))
                              (exit unknown-field ())))
                   t)
                 (syserror 'defmake "Some argument is not a field name"
                           (list modelname args))))
       `(progn 'compile
                (add-make-function ',modelname ',mkname)
                ({Ceyx}:cxcp-inline ',mkname ())
                (de ,mkname ,args ,(send 'makeq (objval modelname)
                                 (mapcar (lambda (x) (cons x x))
                                         (flat args))))))))

           

(de add-make-function (modelname name)
    (let ((mkfuns (getprop modelname 'make-functions)))
         (unless (memq name mkfuns)
                 (putprop modelname
                          (cons name mkfuns)
                          'make-functions))))

(de {symbol}:makeq (field lfieldname) ())

(de {{Model}:Field}:makeq (field lfieldname)
    (cond
       ((cassq ({{Model}:Field}:name field) lfieldname))
       ((or (symbolp ({Model}:fieldstruct field))
            (null ({Model}:assq-fields ({Model}:fieldstruct field)
                                        lfieldname)))
        (let ((init ({Model}:init field)))
             (cond
               ((null init) ())
               ((symbolp init) `',init)
               ((numberp init) init)
               (t `(copy ',init)))))
       (t (send 'makeq ({Model}:fieldstruct field) lfieldname))))

(de {{Model}:Predicate}:makeq (model lfieldname)
    (let ((init ({Model}:init model)))
         (cond
           ((null init) ())
           ((symbolp init) `',init)
           ((numberp init) init)
           (t `(copy ',init)))))

(de {{Model}:List}:makeq (model lfieldname) ())

(de {{Model}:Cons}:makeq (model lfieldname)
    (ifn ({Model}:assq-fields model lfieldname)
         `(copy ',({Model}:init model))
         `(cons
            ,(send 'makeq (car ({Model}:fieldstruct model)) lfieldname)
            ,(send 'makeq (cdr ({Model}:fieldstruct model)) lfieldname))))
    
(de {{Model}:Tcons}:makeq (model lfieldname)
    (ifn ({Model}:assq-fields model lfieldname)
         `(copy ',({Model}:init model))
         `(tcons
             ',(tcar ({Model}:fieldstruct model))
             ,(send 'makeq (tcdr ({Model}:fieldstruct model)) lfieldname))))

(de {{Model}:Vector}:makeq (model lfieldname)
    (ifn ({Model}:assq-fields model lfieldname)
         `(copy ',({Model}:init model))
         `(vector ,@(mapcar
                       (lambda (x) (send 'makeq x lfieldname))
                       (listvector ({Model}:fieldstruct model))))))

(de {Model}:assq-fields (model lfieldname)
    (tag found
         (while lfieldname
                (when (send 'find-field model (car (nextl lfieldname)))
                      (exit found t)))))

; .SSection "Acce`s aux Champs"

(defmacro defaccess (modelname . lfieldname)
     (ifn (and (symbolp modelname) (objval modelname))
          (syserror 'defaccess "First argument is not a model name"
                               (cons modelname lfieldname))
          (let ((expansion))
               (unless lfieldname 
                  (setq lfieldname
                        (mapcar '{{Model}:Field}:name
                                (send 'flat-fields (objval modelname)))))
               (while lfieldname
                      (newl expansion
                            (defaccess-expander modelname 
                                                (nextl lfieldname))))
              `(progn 'compile ,@(nreverse expansion) ',modelname))))
                           
(de defaccess-expander (modelname fieldname)
    (let ((field (send 'find-field (objval modelname) fieldname)))
         (ifn field
              (syserror 'defaccess "Not a field name"
                                   (list modelname fieldname))
              `(progn 'compile
                 (de ,(symbol modelname fieldname) obj
                   (,({CeyxSys}:find-access-fun
                          ({{Model}:Field}:access field)) obj))
                 ({Ceyx}:cxcp-access 
                          ',(symbol modelname fieldname)
                          ',({{Model}:Field}:access field))))))

(de {CeyxSys}:make-get-function (access exp)
    (cond
      ((null access) exp)
      ((numberp (car access))
       ({CeyxSys}:make-get-function (cdr access) `(vref ,exp ,(car access))))
      ((eq (car access) 'car)
       ({CeyxSys}:make-get-function (cdr access) `(car ,exp)))
      ((eq (car access) 'cdr)
       ({CeyxSys}:make-get-function (cdr access) `(cdr ,exp)))
      ((eq (car access) 'tcar)
       ({CeyxSys}:make-get-function (cdr access) `(tcar ,exp)))
      ((eq (car access) 'tcdr)
       ({CeyxSys}:make-get-function (cdr access) `(tcdr ,exp)))
      (t (syserror '{CeyxSys}:make-get-function "Bad access list" access))))

(de {CeyxSys}:make-put-function (access exp val)
    (ifn access ()
         (setq exp ({CeyxSys}:make-get-function access exp))
         (rplaca exp (selectq (car exp) 
                              (car 'rplaca)
                              (cdr 'rplacd)
                              (tcar 'trplaca)
                              (tcdr 'trplacd)
                              (vref 'vset)
                              (t (syserror '{CeyxSys}:make-put-function
                                           "Unknown selector"
                                           (list (car exp))))))
         (nconc exp (list val))
         exp))


(defvar {CeyxSys}:access-alist
        '((() . {CeyxSys}:null-access)))

(de {CeyxSys}:null-access (l)
    (ifn (cdr l) (car l)
         (syserror '{CeyxSys}:null-access
                   "Non writable field" l)))

(de {CeyxSys}:insert-access (lkeys)
    (ifn lkeys ()
        (or (car (assoc lkeys {CeyxSys}:access-alist))
            (let ((fun (symbol '{CeyxSys} (gensym))))
	        (eval `(de ,fun (x)
   			(if (cdr x)
			    ,({CeyxSys}:make-put-function 
                                        lkeys '(car x) '(cadr x))
			    ,({CeyxSys}:make-get-function lkeys '(car x)))))
	        (newl {CeyxSys}:access-alist (cons lkeys fun))
	        lkeys))))

(de {CeyxSys}:find-access-fun (lkeys)
    (or (cassoc lkeys {CeyxSys}:access-alist)
        (progn ({CeyxSys}:insert-access lkeys)
               (cassoc lkeys {CeyxSys}:access-alist))))


; .SSection "Discrimination"

(de is-in (x modelname)
    (or (and (objval modelname)
             (send 'match (objval modelname) x))
        (memq modelname '(|| Ceyx))))

(de {symbol}:match (model val)
    (if (objval model) (send 'match (objval model) val)
        (syserror 'match "Unknown model" model)))

(de {{Model}:Field}:match (field val)
    (setq field ({Model}:fieldstruct field))
    (send 'match field val))

(de {{Model}:Predicate}:match (pred val)
    (funcall ({Model}:fieldstruct pred) val))

(de {{Model}:List}:match (list val)
    (or (null val)
        (progn 
           (setq list ({Model}:fieldstruct list))
           (and (consp val)
            (null (cdr (last val)))
            (tag nomatch
                 (while val 
                        (unless (send 'match list (nextl val))
                                (exit nomatch ())))
                 t)))))

(de {{Model}:Cons}:match (cons val)
    (setq cons ({Model}:fieldstruct cons))
    (and (consp val)
         (send 'match (car cons) (car val))
         (send 'match (cdr cons) (cdr val))))

(de {{Model}:Vector}:match (vector val)
    (setq vector ({Model}:fieldstruct vector))
    (and (vectorp val)
         (<= (vlength vector) (vlength val))
         (tag nomatch
              (let ((n 0))
                   (until (= n (vlength vector))
                          (if (send 'match (vref vector n)
                                           (vref val n))
                              (incr n)
                              (exit nomatch ()))))
              t))) 
         
(de {{Model}:Tcons}:match (tcons val)
    (and (tconsp val)
         (<=p (tcar val) (tcar ({Model}:fieldstruct tcons)))))


; .Section "Les MacroMode`les"
; .DebLL
; (deftclass {Model}:Macro)
; .FinLL

(de {Model}:Macro (type model)
    (send 'set-access model ())
    (send 'set-init model)
    model)

(defmacro defmacromodel (name args . body)
    (let ((expansion)
          (fullname (symbol '{Model}:Macro name)))
         (newl expansion `(defabbrev ,fullname ,(symbol '{Model} name)))
         (newl expansion
               `({CeyxSys}:put-model-keyword ',name ',fullname))
         (setq name (symbol '{Model} name))
         (newl expansion
               `(de ,(symbol fullname 'parse-model) (expr)
                    (apply ',name 
                           (mapcar '{CeyxSys}:parse-model
                           (cdr expr)))))
         (newl expansion
               `(de ,name 
                    ,args ({Model}:Macro ',fullname (progn ,@body))))
         `(progn 'compile ,@(nreverse expansion))))


(defmacromodel Alter (model . lfield)
    (when (symbolp model) (setq model (objval model)))
    (send 'alter model lfield))

(defmacromodel Include (model)
    (when (symbolp model) (setq model (objval model)))
    (send 'alter model ()))

(defmacromodel Extend (model . lfield)
    (when (symbolp model) (setq model (objval model)))
    (send 'extend model lfield))

(de {Model}:alter (model lfield)
    (setq model (copy model))
    (let ((fieldname)
          (nfield)
          (ofield))
         (while lfield
                (setq fieldname (nextl lfield)
                      nfield (nextl lfield)
                      ofield (send 'find-field model fieldname))
                (ifn ofield (syserror '{Model}:alter
                                      "Unknown field"
                                      (list model fieldname))
                     (if (<=p (model nfield) '{Model}:Field)
                         (<- ofield nfield)
                         ({Model}:fieldstruct ofield nfield))))
          model))

(de {Model}:extend (model lfield)
    (setq model (copy model))
    (let ((fieldname)
          (xvect)
          (ofield))
         (while lfield
                (setq fieldname (nextl lfield)
                      xvect (nextl lfield)
                      ofield (send 'find-field model fieldname))
                (ifn ofield (syserror '{Model}:extend
                                      "Unknown field"
                                      (list model fieldname))
                     (send 'extend-with
                           ({Model}:fieldstruct ofield)
                           xvect)))
          model)))

(de {Model}:extend-with (model vector)
    (syserror '{Model}:extend "Not a {Model}:Vector, cannot extend" ()))

(de {{Model}:Vector}:extend-with (model vector)
    (ifn (<=p (model vector) '{Model}:Vector)
         (syserror '{Model}:extend
                   "Cannot extend {Model}:Vector with a"
                   (model vector))
         (let ((lfield
                (append (listvector ({Model}:fieldstruct model))
                        (listvector ({Model}:fieldstruct vector)))))
              (<- model (apply '{Model}:Vector lfield)))))

; .Section "Les Mode`les Primitifs"

(df defcomment (symb string)
    (putprop symb string 'comment))


(defmodel * (Predicate always-true ()))
(defmodel Ceyx (Predicate always-true ()))

(de always-true (x) t)


(defmodel null (Predicate null ()))
(defmodel symbol (Predicate symbolp 'nil))
(defmodel fix (Predicate fixp 0))
(defmodel float (Predicate floatp 0.))
(defmodel number (Predicate numberp 0))
(defmodel string (Predicate stringp ""))
(defmodel atom (Predicate atomp nil))
(defmodel cons (Cons (Field car) (Field cdr)))
(defmodel vector (Predicate vectorp #[]))
(defmodel integer (Predicate numberp 0))

; .Section "Le Bootstrap"

(deftype Model (Field repr (Vector (Field init) (Field fieldstruct))))
(deftype {Model}:Field
           (Extend Model repr (Vector (Field name) (Field access))))
(deftype {Model}:Predicate Model)
(deftype {Model}:List Model)
(deftype {Model}:Cons Model)
(deftype {Model}:Vector Model)
(deftype {Model}:Tcons Model)
          
