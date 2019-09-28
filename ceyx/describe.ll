; .Chapitre n "A l'Aide!"
; .Section "La Construction describe"

(deftrecord ModelDescriptor
		name~symbol
		comment~string
		labbrev~(List symbol)
		make~(List symbol)
		fields~(List {Model}:Field)
		sems~(List symbol)
                submodels~(List symbol))

(de ModelDescriptor (name)
    (omakeq ModelDescriptor name name
                            comment (getprop name 'comment)
                            labbrev (get-labbrev name)
                            make (getprop name 'make-functions)
                            fields (when (objval name)
                                         (send 'flat-fields (objval name)))
                            sems (list-sems name)
                            submodels (list-submodels name)))

(defmake {ModelDescriptor} ModelDescriptor)

(de list-sems (pkg)
    (isortl
       (let ((funs))
            (mapc (lambda (x)
                          (and
                             (eq (packagecell x) pkg)
                             (is-fun x)
                             (newl funs (string (pname x)))))
                  (oblist pkg))
            funs)))

(de funs-of-pname (symb)
    (let ((lsymb (oblist '|| symb))
          (lfun))
        (while lsymb (when (is-fun (car lsymb)) (newl lfun (car lsymb)))
                     (nextl lsymb))
        lfun))
         

(de is-fun (symb) (not (eq (valfn symb) 0)))

(de arglist (fun) (nth 2 (getdef fun)))

(de list-submodels (model)
    (mapcar (lambda (x) (symbol model x))
            (isortl
               (let ((submodels))
                    (mapc (lambda (x)
                                  (and 
                                    x
                                    (eq (packagecell x) model)
                                    (objval x)
                                    (newl submodels (string (pname x)))))
                          (oblist model))
                     submodels))))

(de isortl (l)
    (let ((l1 (list ())))
         (while l (alpha-insert l1 (nextl l)))
         (cdr l1)))

(de alpha-insert (l string)
    (ifn (cdr l)
         (rplacd l (list string))
         (if (alphalessp string (cadr l))
             (rplacd l (cons string (cdr l)))
             (alpha-insert (cdr l) string))))


(demethod {ModelDescriptor}:print (md) 
               (name comment labbrev make fields sems submodels)
    (terpri)
    (ifn (objval name)
         (print "          Package: " name)
         (if (eq (model (objval name)) '{Model}:Tcons)
             (print "          Type: " name)
             (print "          Modele: " name)))
    (when comment
          (terpri)
          (print comment))
    (when labbrev
          (terpri)
          (lmargin (+ (lmargin) 5))
          (print "Abreviations:")
          (while labbrev (prin (nextl labbrev) " "))
          (terpri)
          (lmargin (- (lmargin) 5)))
    (when make
          (terpri)
          (lmargin (+ (lmargin) 5))
          (print "Fonctions de Cre'ation:")
          (while make
                 (print (car make) " " (arglist (nextl make))))
          (lmargin (- (lmargin) 5)))
    (when fields
          (terpri)
          (lmargin (+ (lmargin) 5))
          (print "Champs:")
          (while fields
                 (prin (send 'name (car fields)))
                 (let ((model (send 'fieldstruct (nextl fields))))
                      (ifn model (terpri)
                            (prin " ~ ")
                            (if (symbolp model) (print model)
                                (print "(" (string (pname (model model)))
                                       " ...)")))))
          (lmargin (- (lmargin) 5)))
    (when sems
          (terpri)
          (lmargin (+ (lmargin) 5))
          (print "Proprietes Semantiques:")
          (while sems
                 (print (car sems) " " (arglist (symbol name (nextl sems)))))
          (lmargin (- (lmargin) 5)))
    (when (and (objval name) submodels)
          (terpri)
          (lmargin (+ (lmargin) 5))
          (print "Sous Modeles:")
          (while submodels (print (string (pname (nextl submodels)))))
          (lmargin (- (lmargin) 5)))
    (terpri)
    name)

(de describe-model (model)
    (unless (symbolp model) (syserror 'describe-model "Not a model name"
                                      model))
    (setq model (plink model))
    (send 'print (ModelDescriptor model)))

(df mdescribe l
    (let ((model (car l))
          (n (or (cadr l) 1)))
         (unless (fixp n) (setq n 1))
         (unless (and (symbolp model) (objval (setq model (plink model))))
                 (syserror 'mdescribe "For models only" model))
         (describe-model model)
         (when (> (decr n) 0)
               (let ((submodels (list-submodels model)))
                    (when submodels
                          (while submodels
                            (print "----------")
                            (eval `(mdescribe ,(nextl submodels) ,n))))))))

          

(df apropos (pkg)
    (send 'print (ModelDescriptor pkg)))


(de describe (obj . model)
    (with ((printlevel 3)
           (printlength 10))
          (ifn model (send 'describe obj) (instance-describe obj (car model)))
          t))

(de {*}:describe (obj)
    (ifn (tconsp obj)
         (print obj " est de type " (type obj))
         ({tcons}:describe obj)))


(de {symbol}:describe (obj)
    (print obj " est de type symbol")
     (when (boundp obj) (print "Valeur: " (eval obj)))
    (when (is-fun obj) (print "Fonction: " obj " " (arglist obj)))
    (when (neq (plink obj) obj) (print obj " est une abbreviation pour: "
                             (plink obj)))
    (when (objval obj) (print obj " a une definition de mode`le:")
          (describe-model obj)))


(de {tcons}:describe (obj)
    (ifn (objval (model obj))
         (print obj " est de type tcons ")
         (instance-describe obj (model obj))))

(de instance-describe (obj model)
         (setq model (plink model))
         (print obj " est une instance du modele " model)
         (let ((fields (send 'flat-fields (objval model))))
              (when fields
                    (print "Ses diffe'rents champs valent:")
                    (mapc (lambda (x)
                            (print (send 'name x)
                                   ": "
                                   (oget model (send 'name x) obj)))
                          fields))))


(demethod {ModelDescriptor}:tbl (md) 
              (name comment labbrev make fields sems submodels)
     (terpri)
     (print ".ps -2")
     (print ".TS")
     (print "center box tab (|);")
     (print "c s")
     (print "c c.")
     (print "T{")
     (print ".ps +1")
     (ifn (objval name)
          (print "\fBL'espace de noms: " name "\fR")
          (if (eq (model (objval name)) '{Model}:Tcons)
              (print "\fBLe Type: " name "\fR")
              (print "\fBLe Mode`le: " name "\fR")))
     (print ".ps -1")
     (print "T}")
     (print " | ")
     (when comment
           (print ".T&")
           (print "c s")
           (print "c c.")
           (print "T{")
           (print ".i")
           (print comment)
           (print ".r")
           (print "T}")
           (print " | "))
     (print "_")
     (when labbrev
           (print "_")
           (print ".T&")
           (print "c s.")
           (print "T{")
           (prin "\fB" (if (cdr labbrev) "Abre'viations: "
                                         "Abre'viation: ")
                 "\fR")
           (while (cdr labbrev) (prin (nextl labbrev) ", "))
           (print (nextl labbrev) ".")
           (print "T}"))
     (when make
           (print "_")
           (print ".T&")
           (print "c s")
           (print "l l.")
           (print "\fB" (if (cdr make) "Fonctions" "Fonction")
                  " de Cre'ation\fR")
           (while make
                  (print (car make) "|" (arglist (nextl make)))))
     (when fields
           (print "_")
           (print ".T&")
           (print "c s")
           (print "l l.")
           (print "\fB" (if (cdr fields) "Champs" "Champ") "\fR")
           (while fields
                  (prin (send 'name (car fields)) "|")
                  (let ((model (send 'fieldstruct (nextl fields))))
                       (ifn model (print "*")
                            (if (symbolp model)
                                (print model)
                                (print "(" (string (pname (model model)))
                                       " ...)"))))))
     (when sems
           (print "_")
           (print ".T&")
           (print "c s")
           (print "l l.")
           (print "\fB" (if (cdr sems) "Proprie'te's Se'mantiques"
                                       "Proprie'te' Se'mantique")
                  "\fR")
           (while sems
                  (print (car sems) "|" 
                         (arglist (symbol name (nextl sems))))))
     (when (and (objval name) submodels)
           (print "_")
           (print ".T&")
           (print "c s")
           (print "l s.")
           (print "\fB" (if (cdr submodels) "Sous Mode`les" "Sous Mode`le")
                  "\fR")
           (while submodels (print (string (pname (nextl submodels))))))
     (print ".TE")
     (print ".ps +2"))
           

(df tbl-describe (model)
    (unless (symbolp model) (syserror 'tbl-describe
                                      "For Model names only"
                                      model))
    (setq model (plink model))
    (send 'tbl (ModelDescriptor model)))


(de help ()
    (print "(describe <obj>) decrit n'importe quel objet Lisp"
           "(apropos <symbol>) liste les fonctions du package <symbol>"
           "(mdescribe <symbol>) decrit le modele de nom <symbol>"
           "(mdescribe <symbol> <n>) la meme chose a la profondeur <n>")
    t)

; .Section "Le Me'canisme de Trace"

(df tracesems l
    (let ((sems))
         (while l (setq sems (append sems (funs-of-pname (nextl l)))))
         (apply 'trace sems)))

(df untracesems l
    (let ((sems))
         (while l (setq sems (append sems (funs-of-pname (nextl l)))))
         (apply 'untrace sems)))


(df undefmodel (symb)
    (objval symb ()))

(df unde (symb)
    (remfn symb))


(defmacro file-input (file . body)
    `(with ((inchan (openi ,file)))
          ,@body))

(defmacro file-output (file . body)
    `(with ((outchan (openo ,file)))
          ,@body))

(defmacro file-append (file . body)
    `(with ((outchan (opena ,file)))
          ,@body))


