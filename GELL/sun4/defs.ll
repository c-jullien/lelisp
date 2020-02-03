; .EnTete "Le_Lisp (c) version 15.2" " " "Les fonctions de de'finition"
; .EnPied "defs.ll" "D-%" " "
; .Annexe D "Les Fonctions de De'finition et Macros Syste`me"
; .nr % 1
;
; .Centre "*****************************************************************"
; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
; .Centre " Il est maintenu par ILOG SA, 2 Avenue Gallie'ni, 94250 Gentilly "
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; $Header: /nfs/work/v15.2/llib/RCS/defs.ll,v 7.1 91/01/07 12:37:33 kuczynsk Rel $

(unless (>= (version) 15.2)
        (error 'load 'erricf 'defs))
 
; Toutes les variables doivent e^tre prote'ge'es :

(defvar #:sys-package:colon 'system)

(defvar :redef-flag t)

(defmessage :errtwicedef (french "fonction rede'finie")
                         (english "redefined function"))
(defmessage :errnocomp   (french "fonction incompatible")
                         (english "incompatible function"))
(defmessage :errnulinc   (french "incre'ment nul")
                         (english "null increment"))
; .Section "Tests des Macros Fonctions"
 
(de macroexpand (:x)
    ; expanse un appel tant que l'on tombe sur une macro
    (cond ((atom :x) :x)
          ((symbolp (car :x))
             (cond ((eq (typefn (car :x)) 'macro)
                    (macroexpand (apply (cons 'lambda (valfn (car :x))) :x)))
                   ((eq (typefn (car :x)) 'dmacro)
                    (macroexpand 
                       (apply (cons 'lambda (valfn (car :x))) (cdr :x))))
                   ((eq (typefn (car :x)) 'msubr)
                    (macroexpand 
                       (call (valfn (car :x)) :x () ())))
                   ((eq (typefn (car :x)) 'dmsubr)
                    (macroexpand 
                       (call (valfn (car :x)) (cdr :x) () ())))
                   ((eq (car :x) 'quote) :x)
                   (t (let ( (l ()) )
                         (while (consp :x) (newl l (macroexpand (nextl :x))))
                         (prog1 (nreverse l) (rplacd l :x)) ))))
          (t (let ( (:l ()) )
                (while (consp :x) (newl :l (macroexpand (nextl :x))))
                (prog1 (nreverse :l) (rplacd :l :x)) ))))

(de macroexpand1 (:x)
    ; expanse une macro un coup pour voir
    (cond ((eq (typefn (car :x)) 'macro)
             (apply (cons 'lambda (valfn (car :x))) :x))
          ((eq (typefn (car :x)) 'dmacro)
             (apply (cons 'lambda (valfn (car :x))) (cdr :x)))
          ((eq (typefn (car :x)) 'msubr)
             (call (valfn (car :x)) :x () ()))
          ((eq (typefn (car :x)) 'dmsubr)
             (call (valfn (car :x)) (cdr :x) () ()))
          (t :x)))
 
; .Section "WITH : les variables fonction"
 
; Liaison dynamique des EXPR en lecture/e'criture.

(dmd with (:l . :body)
    (let ((:var (let ((n -1))
                     (mapcar (lambda (x)
                                     (symbol 'with (concat "arg" (incr n))))
                             :l))))
         `(let (,@(mapcar (lambda (:var :l) 
                                  (list :var 
                                        (or (consp (firstn (1- (length :l))
                                                           :l))
                                            (error 'with 'errsxt :l))))
                          :var
                          :l))
               (protect
                       (progn ,@:l ,@:body)
                       ,@(mapcar (lambda (:var :l)
                                         (append1 (firstn (1- (length :l))
                                                          :l) 
                                             :var))
                                 ; En inversant les 2 listes, on restaure
                                 ; les valeurs dans l'ordre inverse
                                 ; de leur liaison.
                                 (nreverse :var); economie de cons
                                 (reverse :l) )))))

; .Section "Les fonctions auxiliaires de test"
 
(de :def-check-all (namelarg fnt)
    ; teste s'il y a bien deux arguments au moins
    (unless (consp (cdr namelarg))
            (error fnt 'errnla (cdr namelarg)))
    (let ((name (car namelarg)) (larg (cadr namelarg)))
         ; teste toute une de'finition :
         ; de nom : name
         ; de liste d'argument : larg
         ; le nom de la fonction de de'finition est : fnt
         ; 1 - test le nom
         (unless (variablep name)
                 (error fnt 'errbdf name))
         ; 2 - test la liste des parame`tres
         (:def-check-larg larg name ())
         ; 3 - test la rede'finition
         (when (and (not :redef-flag) 
                    (typefn name))
               (printerror  fnt ':errtwicedef name))
         ; 4 - detrace si la fonction e'tait trace'e
         (when (memq name #:trace:trace)
               (eval `(untrace ,name)))
         ; 5 - sauve l'ancienne de'finition
         (when (and :previous-def-flag 
                    (typefn name))
               (putprop name
                   (getdef name)
                   ':previous-def))
         ; 6 - positionne l'indicateur loaded-from-file
         (when :loaded-from-file
               (putprop name
                   :loaded-from-file
                   ':loaded-from-file))))

(de :def-check-larg (l fnt lpar)
    ; provoque l'erreur ERRBPA pour la fonction "fnt" si la liste "l"
    ; contient autre chose que des parame`tres symboliques.
    ; "lpar" est l'e'quivalent plat de la liste d'arguments et
    ; permet de tester si tous les arguments sont identiques.
    (:def-check-larg-aux l fnt))

(de :def-check-larg-aux (l fnt)
    (cond ((null l) t)
          ((variablep l)
               (if (memq l lpar)
                   (error fnt 'errbpa l)
                   (newl lpar l)))
          ((consp l)
             (if (and (:def-check-larg-aux (car l) fnt)
                      (:def-check-larg-aux (cdr l) fnt))
                 t
                 ()))
          (t (error fnt 'errbpa l))))
 
; .Section "Rede'finitions"

(de :resetfn (symbol typefn lambda)
    (let ((l ()))
         (newl l `(fentry ,symbol ,typefn))
         (when (eq typefn 'fsubr)
               (newl l `(push ',lambda)))
         (when (memq typefn '(subr1 subr2 subr3 fsubr))
               (newl l '(push a1)))
         (when (memq typefn '(subr2 subr3))
               (newl l '(push a2)))
         (when (eq typefn 'subr3)
               (newl l '(push a3)))
         (unless (eq typefn 'fsubr)
                 (newl l `(mov ',lambda a1)))
         (unless (eq typefn 'nsubr)
                 (newl l
                       `(mov ',(selectq typefn
                                   (subr0 0) (subr1 1) (subr2 2) (subr3 3)
                                   (fsubr 2))
                             a4)))
         (if (eq typefn 'fsubr)
             (newl l '(jmp apply))
             (newl l '(jmp #:llcp:ffuncall)))
         (newl l '(end))
         (loader (nreverse l) ())))

(de resetfn (symbol typefn valfn)
    (let ((otypefn (typefn symbol)))
         (if (and (memq otypefn '(subr0 subr1 subr2 subr3 nsubr fsubr))
                  (featurep 'loader)) ; il faut le loader
             (cond ((eq otypefn typefn))
                   ((and (eq 'expr typefn)
                       (selectq otypefn
                           (subr0
                                 (null (car valfn)))
                           (subr1
                                 (and (consp (car valfn)) 
                                      (null (cdr (car valfn)))))
                           (subr2
                                 (and (consp (car valfn))
                                      (consp (cdr (car valfn)))
                                      (null (cddr (car valfn)))))
                           (subr3
                                 (and (consp (car valfn)) 
                                      (consp (cdr (car valfn))) 
                                      (consp (cddr (car valfn))) 
                                      (null (cdddr (car valfn)))))
                           (nsubr
                                 (or (variablep (car valfn))
                                     (variablep (cdr (last (car valfn))))
                                     (ge (length (car valfn)) 4)))))
                  (:resetfn ':bidon otypefn (cons 'lambda valfn))
                  (setfn symbol (typefn ':bidon) (valfn ':bidon))
                  (putprop symbol (cons typefn valfn) 'resetfn))
                 ((and (eq 'fexpr typefn)
                       (eq 'fsubr otypefn))
                  (:resetfn symbol otypefn (cons 'flambda valfn))
                  (putprop symbol (cons typefn valfn) 'resetfn))
                 (t
                   (when (and (null #:system:redef-flag)
                              (null (getprop symbol 'autoload)))
                         (printerror 'resetfn ':errnocomp  symbol))
                   (setfn symbol typefn valfn)))
           (setfn symbol typefn valfn)
           (when (and (featurep 'compiler)
                      (macro-openp symbol))
                 (remove-macro-open symbol))))
  symbol)

; .Section "Rede'finition des fonctions de de'finition"

(setfn 'de 'fexpr 
    '(:l
       (:def-check-all :l 'de)
       (resetfn (car :l) 'expr (cdr :l))))
 
(setfn 'df 'fexpr 
    '(:l
       (:def-check-all :l 'df)
       (resetfn (car :l) 'fexpr (cdr :l))))
 
(setfn 'dm 'fexpr 
    '(:l
       (:def-check-all :l 'dm)
       (setfn (car :l) 'macro (cdr :l))))
 
(setfn 'dmd 'fexpr 
    '(:l
       (:def-check-all :l 'dmd)
       (setfn (car :l) 'dmacro (cdr :l))))
 
(setfn 'defmacro 'fexpr 
    '(:l
       (:def-check-all :l 'defmacro)
       (setfn (car :l) 'dmacro (cdr :l))))

(setfn 'defun 'fexpr 
    '(:l
       (:def-check-all :l 'defun)
       (resetfn (car :l) 'expr (cdr :l))))
 
(setfn 'ds 'fexpr 
    '(:l
       (:def-check-all :l 'ds)
       (setfn (car :l) (cadr :l) (caddr :l))))
 
; .Section "Les LET en tout genre"

; .SSection "LETN  :  des LET avec nom"

(dmd letn (:name :larg . :body)
      `(flet ((,:name ,(mapcar 'car `,:larg) ,@:body))
             (,:name ,@(mapcar 'cadr `,:larg)))))))))

; .SSection "LETS/SLET/LET*  :  le LET sequeniel"

(dmd slet (l . :body)
     (cond ((null l) `(let () ,@:body))
           ((cdr l) `(let (,(car l)) (lets ,(cdr l) ,@:body)))
           (t `(let (,(car l)) ,@:body))))

(synonym 'lets 'slet)
(synonym 'let* 'slet)

; .SSection "DYNAMIC-LET, DYNAMIC : le LET dynamique a` la v16"

;;; Ce sont des definitions interprete' (cf cpmac pour les versions compile'es)
(synonym 'dynamic-let 'let)

(df dynamic (name)
    ;; refe'rence  dynamique  (pour le defsetf, cf setf.ll)
    (symeval name))

; .Section "Simulation des structures de contro^le a` la PASCAL"

; syntaxe : (for (var init step end) e1 ... eN) <suite_de_S-expressions>)
;  La variable var est de'clare'e localement au corps du for par un let
; et varie de init a` end (inclus).
; Le re'sultat est la valeur de (progn  e1 ... eN)

(de :generate-for (stepvar endvar)
    ; fabrique un corps de FOR
    `(let ((,:var ,init)
           ,@(if stepvar `((,stepvar ,step)) (setq stepvar step) ())
           ,@(if endvar  `((,endvar  ,end))  (setq endvar  end)  ()))
          (cond ((> ,stepvar 0)
                 (while (<= ,:var ,endvar)
                        ,@:body
                        (incr ,:var ,stepvar)))
                ((< ,stepvar 0)
                 (while (>= ,:var ,endvar)
                        ,@:body
                        (incr ,:var ,stepvar)))
                (t (error 'for ':errnulinc 0)))
         ,@res))

(dmd for ((:var init step end . res) . :body)
     (unless (variablep :var)
             (error 'for 'errnva :var))
     (unless (and init step end)
          (error 'for 'errsxt (list :var init step end)))
     (if (numberp step)
         (let ((test (cond ((> step 0) '<=)
                           ((< step 0) '>=)
                           (t (error 'for ':errnulinc 0)))))
              (if (or (numberp end) (symbolp end))
                  `(let ((,:var ,init))
                        (while (,test ,:var ,end)
                               ,@:body
                               (incr ,:var ,step))
                        ,@res)
                  (let ((endvar '#:system:for:arg2))
                       `(let ((,:var ,init)
                              (,endvar ,end))
                             (while (,test ,:var ,endvar)
                                    ,@:body
                                    (incr ,:var ,step))
                             ,@res))))
         (if (or (numberp end) (symbolp end))
             (if (symbolp step)
                 (:generate-for () ())
                 (:generate-for '#:system:for:arg1 ()))
             (if (symbolp step)
                 (:generate-for () '#:system:for:arg2)
                 (:generate-for '#:system:for:arg1 '#:system:for:arg2)))))


; .Section "Fermetures"
;        (closure <lvar> <fnt>)     a` la "lisp-machine"
;            <lvar> liste de variables a` clo^turer
;            <fnt>  une fonction LAMBDA ou LAMBDA-NAMED

(de closure (lvarclot :f)
    (let ((listval (mapcar '(lambda (val) (list 'quote (eval val))) lvarclot))
          (:lvar (cadr :f))
          (:body (cddr :f)))
        `(lambda ,:lvar
             ((lambda ,lvarclot
                  (protect (progn ,@:body)
                       ,@(mapcar '(lambda (slot :var)
                                      `(rplaca (cdr ,`(quote ,slot))
                                               ,:var))
                                 listval  lvarclot)))
              ,@listval))))

;-----          Utilisation des fermetures

 ; (setfn 'nextint 'expr
 ;        (let ((n 1))
 ;             (cdr (closure '(n) '(lambda () (setq n (1+ n))))))))))

 ; (setfn 'fib 'expr
 ;        (let ((x 1) (y 1))
 ;             (cdr (closure '(x y)
 ;                      '(lambda () (setq y (prog1 (+ x y) (setq x y)))))))))

; .Section "Simulation des structures de contro^le a` la FORTRAN!"

;-----    PROG/PROG*/RETURN/DO/DO*

(de :generate-tagbody (:body)
    (when :body
          (if (every 'consp :body)
              :body
              (list (cons 'tagbody :body)))))
  
(de :generate-block (:body :l)
    ; ?!?!? ve'rifier que dans les parties valeurs, test et valeur de retour
    ; ?!?!? des DO... il n'est pas possible d'avoir des RETURN/RETURN-FROM
    ; ?!?!? pbs e'galement si RETURN apparait dans une macro!
    (if (tag ok (:generate-block-aux :body))
        `(block () ,:l)
        :l))

(de :generate-block-aux (:body)
    (cond ((atom :body) ())
          ((memq (car :body) '(return return-from)) (exit ok t))
          (t (any ':generate-block-aux :body))))

(dmd prog :l
     ; autorise la forme (prog)
     (:generate-block (cdr :l)
          (if (car :l)
              `(let ,(car :l) ,@(:generate-tagbody (cdr :l)))
              `(progn ,@(:generate-tagbody (cdr :l))))))

(dmd prog* :l
     ; autorise la forme (prog*)
     (:generate-block (cdr :l)
          (if (car :l)
              `(let* ,(car :l) ,@(:generate-tagbody (cdr :l)))
              `(progn ,@(:generate-tagbody (cdr :l))))))

(dmd do (:lvar (:test . :result) . :body)
     (:generate-block :body
             `(let ,(mapcar (lambda (x)
                                   (list (car x) (cadr x)))
                           :lvar)
                   (until ,:test
                          ,@(:generate-tagbody :body)
                          ,@(let ((:x (mapcan
                                        (lambda (x)
                                           (when (consp (cddr x))
                                                 (list (car x) (caddr x))))
                                        :lvar)))
                                (when :x `((psetq ,@:x)))))
                   (progn ,@:result))))

(dmd do* (:lvar (:test . :result) . :body)
     (:generate-block :body
             `(let* ,(mapcar (lambda (x)
                                   (list (car x) (cadr x)))
                           :lvar)
                   (until ,:test
                          ,@(:generate-tagbody :body)
                          ,@(let ((:x (mapcan
                                        (lambda (x)
                                           (when (consp (cddr x))
                                                 (list (car x) (caddr x))))
                                        :lvar)))
                                (when :x `((setq ,@:x)))))
                   (progn ,@:result))))

; .Section "BACKTRACK : on se croirait en prolog"

(dmd backtrack (:name :lvar . :body)
     (unless (symbolp :name)
             (error 'backtrack 'errnaa :name))
     `(tag backtrack
           ,@(if (null :lvar)
                 (mapcar (lambda (e)
                           `(tag ,:name ,e (exit backtrack)))
                          :body)
                 `((let ((:backtrack (list ,@:lvar)))
                        ,@(mapcan (lambda (e)
                                    `((tag ,:name
                                           ,e (exit backtrack))
                                      (desetq ,:lvar 
                                              :backtrack)))
                                   :body))))))

; .Section "le catch-all-but  disparu au profit de lock ..."

(dmd catch-all-but (tag . :body)
    `(lock (lambda (tag val)
              (cond ((null tag) val)
                    ((memq tag ',tag) (evexit tag val))
                    (t (error 'catch-all-but errudt tag))))
           ,@:body))

