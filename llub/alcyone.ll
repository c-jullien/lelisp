; .EnTete "Le-Lisp (c) version 15.2" " " "Alcyone"
; .EnPied "alcyone.ll" "%" " "
; .SuperTitre "Alcyone"
;
; .Auteur "Jean Marie Hullot"
;
; .Centre "*****************************************************************"
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; .Centre "$Header: /usr/cvs/lelisp/llub/alcyone.ll,v 1.1 2006/12/09 10:41:06 jullien Exp $"

; mise au niveau des vecteurs type's par JER et MAT le 20/1/86

(unless (>= (version) 15.2)
        (error 'load 'erricf 'alcyone))

; Tous les symboles pre'ce'de's de : seront cre'e's dans le package ALCYONE

(defvar #:sys-package:colon 'alcyone)

; .Section "Les Structures"

; .SSection "La fonction de cre'ation"

(de :Struct (name init lfield)
    (typevector (vector name init lfield) ':Struct))

; .SSection "Les fonctions d'acce`s"

(defmacro :Struct:name (struct . val)
    (ifn val
         `(vref ,struct 0)
         `(vset ,struct 0 ,(car val))))

(defmacro :Struct:init (struct . val)
    (ifn val
         `(vref ,struct 1)
         `(vset ,struct 1 ,(car val))))

(defmacro :Struct:lfield (struct . val)
    (ifn val
         `(vref ,struct 2)
         `(vset ,struct 2 ,(car val))))
 
; .SSection "La fonction de de'finition de structure"

(defmacro defstruct (name . lfield)
    ; pose de la valeur initiale () par défaut
    (setq lfield
          (mapcar (lambda (x)
                          (if (symbolp x) (list x)
                              (list (car x) (eval (cadr x)))))
                  lfield))
    (let ((struct (:Struct name () lfield))
          (expansion)
          (index 0))
         ; construction de la liste comple`te des champs en allant
         ; inspecter les pe`res.
         (let ((name1 name)
               (lfield lfield))
              (until (or (eq (packagecell name1) '||)
                         (null (objval (packagecell name1))))
                     (setq name1 (packagecell name1))
                     (incr index 
                           (length (:Struct:lfield (objval name1))))
                     (setq lfield 
                           (append (:Struct:lfield (objval name1))
                                   lfield)))
        ; mise en place de la valeur initiale
              (:Struct:init struct
                  (typevector (apply 'vector (mapcar 'cadr lfield))
                              name)))
        ; expansion de la mise en place sur l'objval
        (newl expansion `(objval ',name ',struct))
        ; expansion des fonctions d'acce`s
        (while lfield
               (newl expansion
                     `(defmacro ,(symbol name (caar lfield)) 
                                         (struct . val)
                           (ifn val
                                `(vref ,struct ,',index)
                                `(vset ,struct ,',index ,(car val)))))
                (nextl lfield)
                (incr index))
        ; expansion de la valeur renvoye'e par defstruct
        (newl expansion `',name)
        ; l'expansion du defstruct
        `(progn ,@(nreverse expansion)))))))))

; .SSection "La fonction de cre'ation ge'ne'rique"

(de new (type)
    (ifn (objval type)
         (error 'new :error:not-a-struct type)
         (typevector (copy (:Struct:init (objval type))) type)))

; .SSection "De'finition de fonctions de cre'ations"

(defmacro defmake (structname funname args)
    (ifn (objval structname)
         (error 'defmake :error:not-a-struct structname)
         `(de ,funname ,args
              (let ((:struct (new ',structname)))
                   ,@(if (symbolp args)
                         (list (:defmake-aux args structname))
                         (mapcar ':defmake-aux args))
                    :struct))))

(de :defmake-aux (pname structname)
    `(,(or (:find-access-fun structname pname)
           (error 'defmake :error:no-such-field pname))
      :struct ,pname))

(de :find-access-fun (structname pname)
  (if (eq structname '||) ()
    (let ((struct (objval structname)))
         (ifn struct ()
              (if (assq pname (:Struct:lfield struct))
                  (symbol structname pname)
                  (:find-access-fun (packagecell structname) pname))))))
 
; .SSection "De'finition de Me'thodes"

(defmacro defmethod ((structname fun) args access . body)
  (ifn (objval structname)
     (error 'defmethod :error:not-a-struct structname)
     (when access
          (setq body
                `((let ,(:make-method-let structname
                                          (car args) access)
                       ,@body))))
    `(de ,(symbol structname fun) ,args ,@body)))

(de :make-method-let (structname self access)
    (let ((let-list) (fun))
         (while access
             (setq fun (:find-access-fun structname (car access)))
             (newl let-list
                   (if fun 
                     `(,(car access) (,fun ,self))
                     `(,(car access) (send ',(car access) ,self))))
              (nextl access))
          (nreverse let-list)))

; .SSection "Les Erreurs"

(defvar :error:not-a-struct "Not a structure")
(defvar :error:no-such-field "No such Field")

; .SSection "BootStrap"

(defstruct #:Alcyone:Struct name init lfield)

