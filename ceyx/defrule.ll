; .Chapitre n "Les Re`gles"

(deftrecord Rule
            name~symbol
            targ~fix
            uarg~fix
            table~RuleTable
            (count~fix 0))

(de Rule (name targ uarg)
    (omakeq Rule
            name name
            targ targ
            uarg uarg
            table (RuleTable '* '|| 0)))

(defmake {Rule} Rule)

(deftrecord RuleTable
            model~symbol
            msg~symbol
            ltable~(List RuleTable)
            level~fix)

(defmake {RuleTable} RuleTable (model msg level))

(demethod {RuleTable}:sem (table) (model msg)
      (symbol model msg))

(demethod {RuleTable}:find (table model) (ltable)
      (tag found
           (while ltable
                  (if (eq model ({RuleTable}:model (car ltable)))
                      (exit found (car ltable))
                      (nextl ltable)))))

(demethod {RuleTable}:find-or-add (table model rule level) (msg ltable)
      (or (send 'find table model)
          (let ((newtable
                   (RuleTable model
                              (send 'tablemsg rule table level)
                              level)))
               (ifn ltable 
                    ({RuleTable}:ltable table (list newtable))
                    (nconc1 ltable newtable))
               newtable)))

(demethod {Rule}:tablemsg (rule table level) (name count)
     (cond
       ((= 1 level) name)
       ((send 'ltable table) (send 'msg (car (send 'ltable table))))
       (t (send 'count rule (incr count))
          (concat name "!" count))))

(demethod {Rule}:find-or-add (rule lmodel) (name table targ)
     (unless (= (length lmodel) targ)
             (syserror 'defrule
                       (catenate name " has " targ "typed arguments")
                       lmodel))
     (let ((model) (level 0))
          (while lmodel
                 (setq model (nextl lmodel)
                       table (send 'find-or-add table model 
                                                rule (incr level))))
          table))

(demethod {Rule}:def (rule lmodel args body) (table)
   (let ((expansion)
         (def))
        (send 'find-or-add rule lmodel)
        (while lmodel
               (setq table (send 'find table (car lmodel))
                     def (send 'def table (nextl lmodel) args body))
               (when def (newl expansion def)))
        (nreverse expansion)))

(demethod {RuleTable}:def (table model args body) (level ltable)
    (let ((sem (send 'sem table)))
         (cond
           ((eq level 0))
           ((eq level 1)
            (ifn ltable
                 `(de ,sem ,args ,@body)
                 (unless (typefn sem)
                 `(de ,sem ,args
                      (if (setq {Rule}:sem
                                (or 
                                  (getfn (type ,(cadr args))
                                         ',(send 'msg (car ltable))
                                         '||)
                                    (getfn ',(packagecell model)
                                           ',(send 'msg table)
                                           '||)))
                          (funcall {Rule}:sem ,@args)
                          (syserror 'send
                                    "Rule undefined for types"
                                    (list 
                                          ',(send 'msg table)
                                          (type ,(car args))
                                          (type ,(cadr args)))))))))
          ((eq level 2)
            `(de ,sem ,args ,@body))
          (t (syserror 'defrule "2 typed args only for the moment")))))

(defmacro defrule (name args . body)
    (when (eq (setq args ({CeyxSys}:parse-fields args))
              'parse-model-error)
          (syserror 'defrule "Bad syntax for arguments" (list name args)))
    (let ((rule)
          (targs)
          (uargs)
          (lmodel (reverse (mapcar '{Model}:fieldstruct args)))
          (expansion))
         (setq args (mapcar '{{Model}:Field}:name args))
         (while (eq (car lmodel) '*)
                (nextl lmodel))
         (setq lmodel (nreverse lmodel))
         (ifn lmodel
              (syserror 'defrule "At least one typed argument" 
                        (list name args))
              (setq targs (length lmodel)
                    uargs (- (length args) (length lmodel))))
         (unless (<= targs 2)
                 (syserror 'defrule 
                           "Au plus deux arguments types actuellement"
                           name))
         (setq rule (or (getprop name '{Ceyx}:rule)
                        (putprop name (Rule name targs uargs) '{Ceyx}:rule)))

         `(progn 'compile
                 ,@({Rule}:def rule lmodel args body)
                 ',name)))

(df undefrule (rulename)
    (let ((rule (getprop rulename '{Ceyx}:rule))
          (ltable))
         (when rule
              (setq ltable (send 'ltable (send 'table rule)))
              (while ltable (send 'undef (nextl ltable)))
              (remprop rulename '{Ceyx}:rule))))

(demethod {RuleTable}:undef (table) (ltable)
       (remfn (send 'sem table))
       (while ltable (send 'undef (nextl ltable))))

