; .EnTete "Le_Lisp Version 15" " " "Fabrication de la table des etiquettes"

; .sp 2
; .SuperTitre "Fabrication de la table des etiquettes"
; .Auteur "Greg Nuyens"
; .INRIA

; .Centre "*****************************************************************"
; .Centre "Ce fichier est en lecture seule hors du projet Le_Lisp de l'INRIA"
; .Centre "*****************************************************************"

(unless (= (version) 15.2)
        (error 'load "fichier non compatible" 'mklabelval))

; Ce programme permet de cre'er un fichier contenant la table des 
; etiquettes utilise's dans les fichiers LLM3. (les ADR, @foo, %foo).
;  Avec cette table il va e^tre possible de traduire, pour certains
; expanseurs, les ope'randes LLM3 de type @foo et %foo en 'offsets'.
;  Le fichier produit se nomme : LABELVAL.LL 
; 
;  Le fichier commence les etiquette a l'addresse de la derniere symbole
;  qui est la valeur de #:symval:last

(setq #:system:read-case-flag ())

(de mklabelval ()
    (let ((nlabel #:symval:last))                   ; le nume'ro de 'etiquette
         (with ((outchan (openo "labelval.ll")))
               (#:llm3:process-list-of-files 
                     '#:mklabelval:process
                     #:llm3:files)
	       (print `(setq #:labelval:last ,nlabel))
               (close (outchan)))))

(de #:mklabelval:process (ligne)
    (when (consp ligne)
	  (mapc '#:mklabelval:process-operand (cddr ligne))))

(de #:mklabelval:process-operand (op)
	(when (and
		  (consp op)
		  (memb (cadr op) '(|%| |@|))
		  (not (getprop (cadr op) '#:mklabelval:seen)))
          (print "(defvalsymb " (cadr op) " " (incr nlabel) ")")
	  (putprop (cadr op) '#:mklabelval:seen t)))



