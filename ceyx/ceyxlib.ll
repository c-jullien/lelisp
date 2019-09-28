; .Chapitre 2 "La Bibliothe`que Ceyx"

; .Section "Les Records,les Classes et les Arbres"
; .SSection "Le Macrocaracte`re ~"

(dmc |~| () (cons '|~| (read)))

(de {CeyxSys}:tilda (name model) (list '{CeyxSys}:tilda model name))
(de {CeyxSys}:tildap (x) (and (consp x) (eq (car x) '{CeyxSys}:tilda)))

; tilde peut e^tre un tilda ou un symbol

(de {CeyxSys}:tilda-name (tilde) (if (symbolp tilde) tilde (caddr tilde)))

(de {CeyxSys}:tilda-model (tilde model) 
    (setq model (if (symbolp tilde) model (cadr tilde)))
    (if (symbolp model) (plink model) model))

(de {CeyxSys}:parse-tilda (l)
    (ifn (consp l) l
         (cond
           ((symbolp (car l))
            (cond
              ((and (consp (cdr l)) (consp (cadr l)) (eq (caadr l) '|~|))
               (cons ({CeyxSys}:tilda (car l) 
                                      ({CeyxSys}:parse-model-internal
                                                 (cdadr l)))
                     ({CeyxSys}:parse-tilda (cddr l))))
              (t (cons (car l) ({CeyxSys}:parse-tilda (cdr l))))))
           (t (cons ({CeyxSys}:parse-tilda (car l))
                    ({CeyxSys}:parse-tilda (cdr l)))))))
            
(de {CeyxSys}:parse-fields (lfield)
    (tag {CeyxSys}:parse-model-error
         (mapcar '{CeyxSys}:parse-field ({CeyxSys}:parse-tilda lfield))))

(de {CeyxSys}:parse-field (x)
         (if (or (symbolp x) ({CeyxSys}:tildap x))
             ({Model}:Field ({CeyxSys}:tilda-name x)
                            ({CeyxSys}:tilda-model x '*)
                            ())
             (if (and (consp x)
                      (or (symbolp (car x)) ({CeyxSys}:tildap (car x))))
                 ({Model}:Field ({CeyxSys}:tilda-name (car x))
                                ({CeyxSys}:tilda-model (car x) '*)
                                (eval (cadr x)))
                 ({CeyxSys}:parse-model-error))))

; .SSection "Les Records"

(defmacromodel Record lfield
    (cond
      ((null lfield) (syserror 'Record "At least one field for records" ()))
      (t ({CeyxSys}:expand-record lfield))))

(de {CeyxSys}:expand-record (lfield)
    (setq lfield (copy lfield))
    (if (= (length lfield) 1) (car lfield)
        (let ((l1 lfield)
              (l2)
              (n (div (length lfield) 2)))
             (repeat (1- n) (nextl lfield))
             (setq l2 (cdr lfield))
             (rplacd lfield ())
             ({Model}:Cons ({CeyxSys}:expand-record l1)
                            ({CeyxSys}:expand-record l2)))))

(defmacro defrecord (namedescr . lfield)
    (defrecord-expander namedescr lfield ()))

(defmacro deftrecord (namedescr . lfield)
    (defrecord-expander namedescr lfield t))

; Attention au defrecord a` un champ, il faudra patcher

(de defrecord-expander (namedescr lfield tag)
    (when (symbolp namedescr) 
          (setq namedescr (list namedescr (symbol '|| namedescr))))
    (when (eq (setq lfield ({CeyxSys}:parse-fields lfield))
              '{CeyxSys}:parse-model-error)
          (syserror (if tag 'deftrecord 'defrecord)
                    "Bad syntax for fields"
                    (car namedescr)))
    (unless lfield (syserror (if tag 'deftrecord 'defrecord)
                             "At least one field for Records"
                             (car namedescr)))
    (unless tag
            (when (= (length lfield) 1)
                  (setq lfield (append lfield
                                       ({CeyxSys}:parse-fields '(%cdr%))))))
                                    
    (let ((expansion)
          (model (apply '{Model}:Record lfield)))
         (newl expansion (defmodel-expander
                              namedescr
                              model
                              tag))
         (newl expansion `(defaccess ,(car namedescr)))
         (newl expansion `',(car namedescr))
         `(progn 'compile ,@(nreverse expansion))))

; .SSection "Les Classes"

(defmodel Class (Field class-attributes (Vector)))
(deftype Tclass (Field class-attributes (Vector)))

(defmacro defclass (namedescr . lfield)
    (defclass-expander namedescr lfield ()))

(defmacro deftclass (namedescr . lfield)
    (defclass-expander namedescr lfield t))


(de defclass-expander (namedescr lfield tag)
    (when (symbolp namedescr)
          (setq namedescr (list namedescr (symbol '|| namedescr))))
    (when (eq (setq lfield ({CeyxSys}:parse-fields lfield))
              '{CeyxSys}:parse-model-error)
          (syserror (if tag 'deftclass 'defclass)
                    "Bad syntax for fields"
                    (car namedescr)))
    (let ((name (car namedescr))
          (model)
          (expansion))
         (when (eq (packagecell name) '||)
               (rplaca namedescr
                       (setq name (symbol (if tag 'Tclass 'Class) name))))
         (unless (and (objval (packagecell name))
                      (<=p (packagecell name)
                           (if tag 'Tclass 'Class)))
                 (syserror (if tag 'deftclass 'defclass)
                           "Not a class"
                           (packagecell name)))
         (setq model (send 'extend (objval (packagecell name))
                                   (list 'class-attributes
                                         (apply '{Model}:Vector 
                                                lfield))))
         (newl expansion (defmodel-expander
                                    namedescr
                                    model
                                    tag))
         (when lfield
            (newl expansion `(defaccess ,(car namedescr)
                                     ,@(mapcar '{{Model}:Field}:name 
                                               lfield))))
         (newl expansion `',name)
         `(progn 'compile ,@(nreverse expansion))))

; .SSection "Les Arbres"

(defmacromodel Tree (sons . lfield)
     ({Model}:Cons
             ({Model}:Field 'sons sons ())
             ({Model}:Field 'tree-attributes
                            (apply '{Model}:Vector lfield)
                            ())))

(deftype Tree (Tree ()))

(defaccess Tree)

(defmacro deftree (namedescr . lfield)
     (deftree-expander namedescr lfield))

(de deftree-expander (namedescr lfield)
    (when (symbolp namedescr)
          (setq namedescr (list namedescr (symbol '|| namedescr))))
    (when (eq (setq lfield ({CeyxSys}:parse-fields lfield))
              '{CeyxSys}:parse-model-error)
          (syserror 'deftree
                    "Bad syntax for fields"
                    (car namedescr)))
    (let ((name (car namedescr))
          (model)
          (expansion))
         (when (eq (packagecell name) '||)
               (rplaca namedescr
                       (setq name (symbol 'Tree name))))
         (unless (and (objval (packagecell name))
                      (<=p (packagecell name) 'Tree))
                 (syserror 'deftree
                           "Not a Tree"
                           (packagecell name)))
         (setq model (send 'extend (objval (packagecell name))
                                   (list 'tree-attributes
                                         (apply '{Model}:Vector 
                                                lfield))))
         (newl expansion (defmodel-expander
                                    namedescr
                                    model
                                    t))
         (when lfield
            (newl expansion `(defaccess ,(car namedescr)
                                     ,@(mapcar '{{Model}:Field}:name 
                                               lfield))))
         (newl expansion `(defabbrev ,name ,(cadr namedescr)))
         (newl expansion `',name)
         `(progn 'compile ,@(nreverse expansion))))

(defmacro defcons (namedescr . lfield)
      (defcons-expander namedescr lfield))

; Reste a` imposer qu'il y ait des noms dans la liste des fils

(de defcons-expander (namedescr lfield)
    (when (symbolp namedescr)
          (setq namedescr (list namedescr (symbol '|| namedescr))))
    (let ((sons)
          (flag-List))
         (ifn (symbolp (car lfield))
              (setq sons (car lfield)
                    lfield (cdr lfield))
              (ifn (car lfield)
                   (setq sons () lfield (cdr lfield))
              (if (and (consp (cadr lfield))
                       (eq (caadr lfield) '|~|))
                  (setq sons (list (car lfield) (cadr lfield))
                        lfield (cddr lfield)
                        flag-List t)
                  (setq sons (list (car lfield))
                        lfield (cdr lfield)
                        flag-List t))))
         (when
           (or
             (eq (setq sons (if sons ({CeyxSys}:parse-fields sons) ()))
                 '{CeyxSys}:parse-model-error)
             (eq (setq lfield ({CeyxSys}:parse-fields lfield))
                 '{CeyxSys}:parse-model-error))
           (syserror 'defcons
                           "Bad syntax"
                           (car namedescr)))
         (let ((name (car namedescr))
               (model)
               (expansion))
              (unless (and (objval (packagecell name))
                           (<=p (packagecell name) 'Tree))
                 (syserror 'defcons
                           "Not a Tree"
                           (packagecell name)))
              (setq model (send 'extend (objval (packagecell name))
                                        (list 'tree-attributes
                                              (apply '{Model}:Vector 
                                                     lfield))))
              (setq model (send 'alter model
                                       (list 'sons
                                              (if flag-List
                                                  (car sons)
                                                  (ifn sons
                                                    ({CeyxSys}:parse-model
                                                     '(Field sons (Vector)))
                                                    (apply '{Model}:Vector
                                                           sons))))))
              (newl expansion (defmodel-expander
                                    namedescr
                                    model
                                    t))
              (when (or sons lfield)
                (newl expansion `(defaccess ,(car namedescr)
                                     ,@(mapcar '{{Model}:Field}:name
                                               (append sons lfield)))))
              (newl expansion `(defabbrev ,name ,(cadr namedescr)))
              (newl expansion `(defmake ,name ,(cadr namedescr)
                                        ,(if flag-List
                                             ({{Model}:Field}:name (car sons))
                                             (mapcar '{{Model}:Field}:name
                                                     sons))))
              (newl expansion `',name)
              `(progn 'compile ,@(nreverse expansion)))))




; 


(defmacro omakeq (model . args)
  (let ((modelname model)
        (lfieldname))
       (ifn (plink model)
           (syserror 'omakeq "Not a model name" modelname)
           (setq model (objval (plink model)))
           (unless model (syserror 'omakeq "Not a Model name" modelname))
           (setq lfieldname ({CeyxSys}:make-alist args))
           (send 'makeq model lfieldname))))


(de {CeyxSys}:make-alist (args)
    (let ((make-alist))
         (while args
                (newl make-alist (cons (nextl args) (nextl args))))
         (nreverse make-alist)))


(de omake (modelname)
    (ifn (plink modelname)
         (syserror 'omake "Not a model name" modelname)
         (copy ({Model}:init (objval (plink modelname))))))


(defmacro ogetq (model fieldname obj)
   (let ((modelname model)
         (field))
        (ifn (plink model)
             (syserror 'ogetq "Not a model name" (list modelname fieldname))
             (setq model (objval (plink model))))
        (unless model (syserror 'ogetq "Not a Model name" modelname))
        (setq field (send 'find-field model fieldname))
        (ifn field
             (syserror 'ogetq "Not a field" (list modelname fieldname))
             ({CeyxSys}:make-get-function
                           ({{Model}:Field}:access field)
                           obj))))

(de oget (modelname fieldname obj)
    (eval `(ogetq ,modelname ,fieldname ',obj)))


(defmacro oputq (model fieldname obj val)
   (let ((modelname model)
         (field))
       (ifn (plink model)
             (syserror 'oputq "Not a model name" (list modelname fieldname))
             (setq model (objval (plink model))))
        (unless model (syserror 'oputq "Not a Model name" modelname))
        (setq field (send 'find-field model fieldname))
        (ifn field
             (syserror 'oputq "Not a field" (list modelname fieldname))
             ({CeyxSys}:make-put-function
                           ({{Model}:Field}:access field)
                           obj val))))

(de oput (modelname fieldname obj val)
    (eval `(oputq ,modelname ,fieldname ',obj ',val)))


(defmacro omatchq (modelname obj)
    (ifn (plink modelname)
         (syserror 'omatchq "Not a model name" modelname)
          (unless (objval (plink modelname))
                  (syserror 'omatchq "Not a Model name" modelname))
         `(send 'match (objval ',(plink modelname)) ,obj)))

(de omatch (modelname obj)
    (ifn (plink modelname)
         (syserror 'omatch "Not a model name" modelname)
         (send 'match (objval (plink modelname)) obj)))
(defmacromodel Or lmodel
    (ifn lmodel
         (syserror 'Or "At least one component for Or" ())
         (let ((model (car lmodel))
               (model1 (car lmodel)))
             ({Model}:Predicate
              ;  a voir pour la compilation
              `(lambda (x)
                   (or ,@(let ((expansion))
                              (while lmodel 
                                     (setq model
                                           (if (symbolp (car lmodel))
                                               `(objval ',(nextl lmodel))
                                               `',(nextl lmodel)))
                                     (newl expansion 
                                        `(send 'match
                                           ,model
                                           x)))
                              (nreverse expansion))))
              ({Model}:init (if (symbolp model1) (objval model1) model1))))))
              


; A REVOIR

(defmacro ochangeq (objname obj . setq-list)
       (let ((oputq-list)
             (inst (if (symbolp obj) obj (gensym))))
            (while setq-list
               (newl oputq-list
                     `(oputq ,objname ,(nextl setq-list)
                             ,inst ,(nextl setq-list))))
            `(let ((,inst ,obj))
                  ,@(nreverse oputq-list)
                  ,inst)))


;*********
; LE OFUNQ
;*********


(defmacro ofunq (model field obj fun . args)
      (let ((inst (if (symbolp obj) obj (gensym))))
           `(let ((,inst ,obj))
                 (oputq ,model ,field ,inst
                        (,fun (ogetq ,model ,field ,inst) ,@args))
                 ,inst)))

;--------------------------
; quelques cas particuliers
;--------------------------

(defmacro oconsq (model field obj val)
      `(ofunq ,model ,field ,obj xcons ,val))

;********
; LE OLET
;********

(defmacro olet ((type lfields instance) . body)
      (setq lfields 
            (mapcar '(lambda (x) (if (symbolp x) (list x x) x))
                    lfields))
      (if (symbolp instance)
          (let ((let-list))
               (while lfields
                      (newl let-list
                            (list (cadar lfields)
                                  `(ogetq ,type ,(caar lfields)
                                    ,instance)))
                      (nextl lfields))
               `(let ,(nreverse let-list) ,@body))
           (let ((let-list)
                 (inst (gensym)))
                (while lfields
                  (newl let-list
                        (list (cadar lfields)
                              `(ogetq ,type ,(caar lfields) ,inst)))
                  (nextl lfields))
                `(let ((,inst ,instance))
                      (let ,(nreverse let-list) ,@body)))))


;************
; LE DEMETHOD
;************

(defmacro dem (name args dargs . body)
    `(de ,name ,args
         (olet (,(packagecell name) ,dargs ,(car args)) ,@body)))

(synonym 'demethod 'dem)



;***********
; LE DEFBITS
;***********

; quand un record ou une classe a un champ de type integer,
; il est possible de decomposer conceptuellement ce champ en champs de bits.


; Syntaxe : (defbits <fonction_acces_au_champ_de_bits>
;                    <fonction_d'acces_au_champ_entier>
;                    <position> <taille> {<indic>})
; <fonction_d'acces_au_champ_entier> est une fonction d'acces
; a 1 (lecture) ou 2 (ecriture) argument(s)
; <position> est un entier >=0 et <=15
; <taille> est un entier <=16 ou le mot clef boolean
; defbits genere alors une fonctions d'acces a 1 ou 2 argument(s)
; de noms <fonction_d'acces_au_champ_de_bits>
; si taille= 'boolean, la fonction d'acces accepte en ecriture (t/nil),
; et en lecture donne t/nil

; patch en attendant le cablage dans Le_Lisp
(defmacro bitfield (instance position size . value)
          (if (consp value)
              `(deposit-byte ,instance ,position ,size ,(car value))
              `(load-byte ,instance ,position ,size)))

(defmacro bitfieldbool (instance position size . value)
          (if value
              `(bitfield ,instance ,position ,size (if ,(car value) 1 0))
              `(<> 0 (bitfield ,instance ,position ,size))))

(defmacro defbits (bitaccess access position size)
      (let ((bitfield 'bitfield))
           (when (eq size 'boolean) (setq bitfield 'bitfieldbool size 1))
           (unless (and (numberp size) (numberp position))
                   (syserror 'defbits "syntax"
                        "(defbits <bitaccess> <access> <position> <size>)"))
           `(defmacro ,bitaccess (instance . value)
               (if value
                   (if (symbolp instance)
                       `(,',access ,instance 
                                   (,',bitfield
                                       (,',access ,instance) ,,position
                                       ,,size ,(car value)))
                       ; on protege l'instance d'une double evaluation
                       `(let ((instance ,instance))
                             (,',access instance
                                        (,',bitfield
                                            (,',access instance) ,,position
                                            ,,size ,(car value)))))
                   `(,',bitfield (,',access ,instance) ,,position ,,size)))))

; le sendq temporaire
(defmacro sendq (msg . l)
     `(send ',msg ,@l))

; Le send fonctionnel pour les map
(dmd sendf (func . args)
     (let ((gensym (gensym)))
          `(lambda (,gensym) (send ,func ,gensym ,.args))))

; Le meme en version quotee
(dmd sendfq (func . args)
     `(sendf ',func ,.args))      


(synonym 'deflmodel 'defmodel)
(synonym 'deftmodel 'deftype)
(synonym 'deflrecord 'defrecord)
(synonym 'deflclass 'defclass)
(synonym 'mlink 'plink)

(de msymbol (a b) (symbol (plink a) b))

(loader '((end)))


         


         
