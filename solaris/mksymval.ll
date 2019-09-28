; .EnTete "Le_Lisp Version 15" " " "Fabrication de la table des symboles"

; .sp 2
; .SuperTitre "Fabrication de la table des symboles"
; .Auteur "Je'ro^me Chailloux"
; .INRIA

; .Centre "*****************************************************************"
; .Centre "Ce fichier est en lecture seule hors du projet Le_Lisp de l'INRIA"
; .Centre "*****************************************************************"

(unless (>= (version) 15.2)
        (error 'load 'ERRICF 'mksymval))

; Ce programme permet de cre'er un fichier contenant la table des 
; symboles pre'de'finis en Lisp (les .SYMBOL).
;  Avec cette table il va e^tre possible de traduire, pour certains
; expanseurs, les ope'randes LLM3 de type .symb en valeur imme'diates.
;  Le fichier produit se nomme : SYMVAL.LL et a la te^te suivante :
; 
;    (df defvalsymb (symb val) (putprop symb val '#:symval:val))
;    (dmd getvalsymb (symb) (mcons 'getprop symb '('#:symval:val)))
;    (defvalsymb .void 0)
;    (defvalsymb .undef 1)
;    (defvalsymb .newnil 2)
;    (defvalsymb .t 3)
;    (defvalsymb .syspkgc 4)
;    (defvalsymb .itsoft 5)
;    ..........

; .Section "Les valeurs des assemblages conditionnels LLM3"

(defvalue STATLLM3 ())     ; il faut des stats LLM3
(defvalue 31BITFLOATS T)   ; flottants sur 31 bits.
(defvalue TABLGC T)        ; le GC utilise une table de bits si 31BITFLOATS
(defvalue GCSTPCP ())      ; le GC n'est pas un stop et copy

(defvalue SIGBLOCK 1)      ; no need to reinstate signals inside the handler

(defvalue COMPILO 0)       ; =0 pre'sence du compilateur
(defvalue DEBUG   0)       ; =0 pas de DEBUG de l'initalisateur
(defvalue GCDEBUG 0)       ; =0 pas de DEBUG du GC
(defvalue SEDEBUG 0)
(defvalue DIVOVFL 0)       ; =0 le hard teste le de'bordement de la division
(defvalue TRUEOVFL 1)      ; =1 teste les vrais de'bordements arithme'tiques
(defvalue STOPCOPY 0)      ; =0 pas de GC stop & cop


(setq #:system:read-case-flag ())

(de mksymval ()
    (let ((nsymb -1)                   ; le nume'ro du symbole
	  (in-if-stack '(t)))
         (with ((outchan (openo "symval.ll")))
               (print '(df defvalsymb (symb val)
                           (putprop symb val '#:symval:val)))
               (print '(dmd getvalsymb (symb)
                           `(getprop ,symb '#:symval:val)))
               (#:llm3:process-list-of-files 
                     '#:mksymval:process
                     #:llm3:files)
	       (print `(setq #:symval:last ,nsymb))
               (close (outchan)))))

(de #:mksymval:process (ligne)
    (when (consp ligne)
	  (selectq (cadr ligne)
		   ((MAKFNT MAKCST)
		    (when (car in-if-stack)
			  (print
			   "(defvalsymb ." (caddr ligne)
			   " " (incr nsymb) ")")))
		   (ENDC (nextl in-if-stack))
		   (IFNE (newl in-if-stack
			       (and (symbolp (caddr ligne))
				    (neq (getvalue (caddr ligne)) 0))))
		   (IFEQ
		    (newl in-if-stack 
                       (and (symbolp (caddr ligne))
			    (eq (getvalue (caddr ligne)) 0))))
		   (t nil))))



