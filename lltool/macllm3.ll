;;;
;;; MACLLM3:  LLM3/part3: The LLM3 macros.
;;;
;;; $Source: /usr/cvs/lelisp/lltool/macllm3.ll,v $
;;; $Date: 2016/05/21 14:44:51 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15)
        (error 'load 'erricf 'macllm3 ))
 
;;; In order to create an expander memory-image, load the
;;; following files in this order:
;;;
;;; 1 - The LLM3 constants            ../lltool/llm3.ll
;;; 2 - The generic expander          ../lltool/expand.ll
;;; 3 - The predefined macros         ../lltool/macllm3.ll
;;; 4 - The machine specific macros   ../XXX/macXXX.ll


(defvar #:system:read-case-flag ())

(defvar #:sys-package:colon 'expand)


;;;
;;; Labels generator
;;;

(defun :macllm3-new-label ()
  (let ((#:system:gensym-string "lab"))
    (gensym)))

;;;
;;; Macros using NIL
;;;


(definstruct BTNIL (operand label)
  (:CABEQ operand 'NIL label))

(definstruct BFNIL (operand label)
  (:CABNE operand 'NIL label))

(definstruct MOVNIL (dest)
  (:MOV 'NIL dest))

(definstruct NCONS (operand)
  (:XCONS 'NIL operand))


;;;
;;; Macros using the stack pointer SP
;;;

 ;         STACK   ea          save the SP
 ;         SSTACK  ea          restore the SP
 ;         POP     ea          pop an element
 ;         TOPST   ea          get the top of the stack
 ;         XTOPST  ea          exchange with top of stack
 ;         ADJSTK  arg         adjust stack   SP = SP + arg

(definstruct  STACK (dest)
  (:MOV 'SP dest))

(definstruct  SSTACK (source)
  (:MOV source 'SP))

(definstruct  POP (dest)
  (:POPR 'SP dest))

(definstruct  TOPST (dest)
  (:TOPSTR 'SP dest))

(definstruct  XTOPST (operand)
  (:XTOPSTR 'SP operand))

(definstruct  ADJSTK (operand)
  (:ADJSTKR 'SP operand))


;;;
;;; GC macros
;;;


(definstruct  GCSTART ()
  ;; start of the GC
  ())

(definstruct  GCSTOP  ()
  ;; end of the GC
  ())

(definstruct INCRINK (nbu nbk)
  ; incre'mente <nbu>, si cela de'passe 1024 (1k)
  ; raz de <nbu> et incre'mentation de <nbk>
  (let ((lab (:macllm3-new-label)))
       (:INCR nbu nil)
       (:CNBLT nbu '(|#| 1024) lab)
       (:MOV '(|#| 0) nbu)
       (:INCR nbk nil)
   (:lab lab))
  (:NOP))

(definstruct HOVNI (bheap cheap eheap adr)
  ;; dump the HEAP in case of HEAP-OVNI.
  ;; By default, this macro does nothing.
  ())

;  SWPCONS : balayage de la zone CONS apre`s marquage
;  pour reconstruire la liste libre et compter le
;  nombre de CONS libe'res'  (cf: ../llm3/gc.llm3).

(definstruct SWPCONS (curfreel curcons freelu freelm)
  (let ((lab1 (:macllm3-new-label))
	(lab2 (:macllm3-new-label)))
   (:lab lab1)
       (:TCMARK curcons lab2)                  ; c'etait marque : au suivant
       (:MOV    curfreel (list 'CDR curcons))  ; chaine
       (:MOVNIL (list 'CAR curcons))           ; clean, clean
       (:MOV    curcons curfreel)              ; nouveau FREE
       (:CLINVSBL  curfreel)                   ; plus invisible.
       (:INCRINK freelu freelm)                ; comptage par k
   (:lab lab2)
       (:NXCONS curcons lab1)))                ; au suivant



;   GCMARK : marquage d'un objet Lisp quelconque qui se trouve dans A1
;   Au retour A3 et A4 doivent e^tre inchange'es. (cf ../llm3/gc.llm3).
;   Dans cette de'finition ESTACK demande une tole'rance de 2 pointeurs!


(definstruct  GCMARK  ()
  (let ((mark   (:macllm3-new-label))
	(markr  (:macllm3-new-label))
	(markt  (:macllm3-new-label))
	(markl  (:macllm3-new-label))
	(markv  (:macllm3-new-label))
	(markv2 (:macllm3-new-label))
	(markv4 (:macllm3-new-label)))
   (:lab mark)       
       (:BFLISP 'A1 markr)              ; je ne sais pas marquer.
       (:BTMARK 'A1 markr)              ; marque' c'est marque'!
       (:STMARK 'A1)                    ; sinon c,a l'est.
       (:BTCONS 'A1 markl)              ; on privilegie les listes.
       (:BTVECT 'A1 markv)              ; marquage spe'cialise' vecteurs
       (:BTSTRG 'A1 markt)              ; marquage spe'cialise' chai^nes
   (:lab markr)
       (:RETURN)     
   (:lab markl)
       (:CHKSTK 'ESTACK 'ERRFSGC)       ;;; marque la liste contenue dans A1
       (:PUSH '(CDR A1))                ; sauve le reste
       (:MOV  '(CAR A1) 'A1)            ; l'e'le'ment de liste a` marquer.
       (:CALL mark)                     ; re'curse sur le CAR
       (:POP  'A1)                      ; re'cupe`re le reste
       (:BRA mark)                      ; ite`re sur les CDR
   (:lab markv)                         ;;; marque le vecteur dans A1
       (:PUSH 'A3)                      ; A3/A4 inchange's dans MARK.
       (:HGSIZE 'A1 'A3)                ; nombre d'e'le'ments du vecteur.
       (:PUSH 'A1)                      ; le vecteur (en &0)
       (:CHKSTK 'ESTACK 'ERRFSGC)       ; erreur fatale!!
       (:BRA markv4)                    ; de'marre bien la boucle.
   (:lab markv2)
       (:HPXMOV '(& 0) 'A3 'A1)         ; e'le'ment suivant.
       (:PUSH 'A3)
       (:CALL mark)                     ; marque l'e'le'ment quelconque.
       (:POP 'A3)
   (:lab markv4)
       (:SOBGEZ 'A3 markv2)             ; on boucle sur le nb d'e'le'ments.
       (:POP 'A1)                       ; le vecteur
       (:POP 'A3)                       ; A3/A4 inchange's dans MARK.
   (:lab markt)                         ;;; marquage d'un type (vect ou strg)
       (:MOV '(TYP A1) 'A1)
       (:BRA mark)))

; .Section "Macros de Gestion d'adresses"

; ADDADR:  A3|A1 + A4|A2 -> A3|A1

(definstruct ADDADR ()
  (:EPLUS 'A1 'A2 '(|#| 0) 'A2 'A1)
  (:EPLUS 'A3 'A4 'A2 'A2 'A3))

; SUBADR: A3|A1 - A4|A2 -> A3|A1

(definstruct SUBADR ()
  (let ((lab1 (:macllm3-new-label))
	(lab2 (:macllm3-new-label))
	(lab3 (:macllm3-new-label)))
       (:PUSH 'A3)
       (:LXOR '(|#| #$FFFF) 'A2)
       (:LXOR '(|#| #$FFFF) 'A4)
       (:EPLUS 'A2 '(|#| 1) '(|#| 0) 'A3 'A2)
       (:EPLUS 'A4 '(|#| 0) 'A3 'A3 'A4)
       (:POP 'A3)
       (:EPLUS 'A1 'A2 '(|#| 0) 'A2 'A1)
       (:EPLUS 'A3 'A4 'A2 'A2 'A3)))


