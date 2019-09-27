
;;.EnTete "Le_Lisp V15" "CPPRED.LL" "Deuxie`me passe du compilateur"
;;.sp 4
;;.SuperTitre "Le Compilateur Le_Lisp"
;;.Titre "Les pre'dicats ouverts"
;;.Auteur "Bernard Serpette"

;;.Section "CPPRED.LL"
;;.SSection "Contenu"
;;     Contient toutes les pre'dicats directement compilables. La fonction
;;principale est :CPPRED qui est utilise'e comme un pre'dicat dans la fonction
;;:PRED; ATTENTION elle doit donc renvoyer 't' si le pre'dicat a' e'te'
;;compile'.

;;.SSection "Les variables globales"
; le package du compilateur
(defvar #:sys-package:colon 'complice)

;;.SSection "les chose simples."
(de :cppred ((fnt . l) ind etiq)
   (selectq fnt
      (atom      (:s-pred (if ind 'bfcons  'btcons ) (car l) etiq))
      (variablep (:s-pred (if ind 'btvar   'bfvar  ) (car l) etiq))
      (consp     (:s-pred (if ind 'btcons  'bfcons ) (car l) etiq))
      (symbolp   (:s-pred (if ind 'btsymb  'bfsymb ) (car l) etiq))
;     (numberp   (:s-pred (if ind 'btnumb  'bfnumb ) (car l) etiq))
      (fixp      (:s-pred (if ind 'btfix   'bffix  ) (car l) etiq))
      (floatp    (:s-pred (if ind 'btfloat 'bffloat) (car l) etiq))
      (vectorp   (:s-pred (if ind 'btvect  'bfvect ) (car l) etiq))
      (stringp   (:s-pred (if ind 'btstrg  'bfstrg ) (car l) etiq))
      (eq        (:d-pred (if ind 'cabeq 'cabne) (car l) (cadr l) etiq))
      (eqn       (:d-pred (if ind 'cnbeq 'cnbne) (car l) (cadr l) etiq))
      (neqn      (:d-pred (if ind 'cnbne 'cnbeq) (car l) (cadr l) etiq))
      (ge        (:d-pred (if ind 'cnbge 'cnblt) (car l) (cadr l) etiq))
      (gt        (:d-pred (if ind 'cnbgt 'cnble) (car l) (cadr l) etiq))
      (le        (:d-pred (if ind 'cnble 'cnbgt) (car l) (cadr l) etiq))
      (lt        (:d-pred (if ind 'cnblt 'cnbge) (car l) (cadr l) etiq))
      (feqn      (:d-pred (if ind 'cfbeq 'cfbne) (car l) (cadr l) etiq))
      (fneqn     (:d-pred (if ind 'cfbne 'cfbeq) (car l) (cadr l) etiq))
      (fge       (:d-pred (if ind 'cfbge 'cfblt) (car l) (cadr l) etiq))
      (fgt       (:d-pred (if ind 'cfbgt 'cfble) (car l) (cadr l) etiq))
      (fle       (:d-pred (if ind 'cfble 'cfbgt) (car l) (cadr l) etiq))
      (flt       (:d-pred (if ind 'cfblt 'cfbge) (car l) (cadr l) etiq))
      (or        (:pred-or-and l ind etiq ind))
      (and       (:pred-or-and l ind etiq (not ind)))
      (memq      (:memq l ind etiq))
      (t ()) ))

;;.SSection "Le Ge'ne'rateur"
;;.SSSection "DEFPRED"
;Bdefpred
(dmd defpred (fnt . corps) `(de ,(symbol ':pred fnt) ,.corps))

;;.SSection "Les pre'dicats de base (1 argument)"
;;.SSSection ":S-PRED"
(de :s-pred (cop l etiq)
   (:with-no-tail-and-return (:alloc-reg () ())
      (:code `(,cop ,(:read-op (:exp l)) ,etiq)) )
   t )

;;.SSection "Les pre'dicats de base (2 arguments)"
;;.SSSection ":D-PRED"
(de :d-pred (cop op1 op2 etiq)
   (:with-no-tail-and-return (:alloc-reg () ())
      (setq op1 (:protect-op (:exp op1)))
      (setq :return? (:alloc-reg op1 ()) op2 (:read-op (:exp op2))) )
   (when (and (consp op2) (fixp (car op2)))
       (setq op2 (:read-op (cons (car op2) (cdr op2)))) )
   (unless (:protected-op? op1) (setq op1 (:pop2 (:alloc-reg op2 ()) op2)))
   (:code `(,cop ,(:read-op op1) ,op2 ,etiq)) 
   t )

;;.SSection "Les autres!"
;;.SSSection ":PRED-OR-AND"
(de :pred-or-and (l ind etiq fg)
   (if (null l)
      ;; Les cas de'ge'ne're's de (or)=nil et (and)=t
      (if (eq ind fg)
         ;; (or)=nil
         (unless ind (:code `(bra ,etiq)))
         ;; (and)=t
         (when ind (:code `(bra ,etiq))) )
      ;; Les cas ge'ne'raux.
      (let ( (lr (:get-all-reg)) )
         (ifn fg
            (let ( (et (:genlab)) )
               (while (cdr l)
                  (:pred (nextl l) (not ind) et)
                  (:adjust-saved-reg lr) )
               (:pred (car l) ind etiq)
               (:adjust-saved-reg lr)
               (:adjust-reg lr)
               (:code et) )
            (while l
               (:pred (nextl l) ind etiq)
               (:adjust-saved-reg lr) )
            (:adjust-reg lr) )))
   t )

;;.SSSection "MEMQ"
(de :memq ((x l) ind etiq)
   (ifn (and (consp l) (eq (car l) 'quote))
      (:with-no-tail
         (:code
            `(,(if ind 'bfnil 'btnil) ,(:exp-subr 'memq `(,x ,l)) ,etiq) ))
      (:with-no-tail-and-return (:alloc-reg () ())
         (setq x (:mov (:exp x) :return?)) )
      (:memq-p x (cadr l) ind etiq) )
   t )

(de :memq-p (reg l ind etiq)
   (ifn ind
      (let ( (et (:genlab)) )
         (while (cdr l) (:code `(cabeq ,reg ',(nextl l) ,et)))
         (when (consp l) (:code `(cabne ,reg ',(car l) ,etiq)))
         (:code et) )
      (while l (:code `(cabeq ,reg ',(nextl l) ,etiq))) ))
