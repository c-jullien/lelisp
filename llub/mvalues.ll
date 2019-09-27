; .EnTete "Le-Lisp (c) version 15.2" "" "Simulation des Valeurs Multiples"
; .EnPied "mvalues.ll" "%" " "
; .SuperTitre "Simulation des Valeurs Multiples en Lisp"
;
; .Centre "*****************************************************************"
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; .Centre "$Header: /usr/cvs/lelisp/llub/mvalues.ll,v 1.1 2006/12/09 10:41:07 jullien Exp $"

(unless (>= (version) 15.2)
     (error 'load 'erricf 'mvalues))

(setq #:sys-package:colon 'multiple-value)

; La constante multiple-value-limit

;;;;;;    (defvar multiple-value-limit 21)  ;;;;; unique modification fg
(defvar :limit 21)

; Le tampon ou` sont stocke'es les valeurs en attente

(defvar :values (makelist :limit ()))

; Le nombre de valeurs rendues

(defvar :number 0)

; Le tampon our les multiple-value-(bind)/(setq)

(defvar :bullshit)

; Rendre des Valeurs Multiples

(de values l
    (:values-aux l :values 0)
    (car l))

(de values-list (l)
    (:values-aux l :values 0)
    (car l))

(de :values-aux (l v n)
    (cond ((null l)
           (while v 
                  (rplaca v ())
                  (nextl v))
           (setq :number n))
          ((null v)
           (error 'values '"extra multiple values" l))
          (t
            (rplaca v (car l))
            (:values-aux (cdr l) (cdr v) (add1 n)))))

; Re'cupe'rer la liste des valeurs multiples rendues par une forme.

(dmd multiple-value-list (f)
    `(progn (setq :number 0)
            (let ((:v ,f))      ; Ce v est dans la pile
                 (if (= 0 :number)
                     (list :v)  ; Et si 0 valeur: pas pre'cise' dans la doc!
                     (firstn :number :values)))))

; Passer les valeurs multiples en arguments

(df multiple-value-call (fct . lparam)
    (let ((l ()) v)
         (setq fct (eval fct))
         (while lparam
                (setq :number 0)
                (setq v (eval (nextl lparam)))
                (if (= 0 :number)
                    (newl l v)  ; Et si 0 valeur: pas pre'cise' dans la doc!
                    (setq l (nconc (nreverse (firstn :number :values)) l))))
         (apply fct (nreverse l))))             

; Le prog1 multiple

(df multiple-value-prog1 (f . lf)
    (prog1
          (eval f)
          (let ((l (firstn :number :values)))  ; En LLM3: dans la pile!!
               (apply 'progn lf)
               (values-list l))))


; Lier temporairement des valeurs multiples

(dmd multiple-value-bind (var form . progn)
    `(progn ,form
            (letvq (,@var . :bullshit) :values
                   ,@progn)))

; Lier globalement des valeurs multiples

(dmd multiple-value-setq (var form)
    `(progn ,form
            (desetq (,@var . :bullshit) :values)))

