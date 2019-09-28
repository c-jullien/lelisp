;;; .EnTete "Le-Lisp (c) version 15.2" """Fabrication de la table des symboles"
;;; .EnPied "mksymval.ll" "%" " "
;;; .SuperTitre "Fabrication de la table des symboles"
;;; 
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;; 
;;; .Centre "$Header: /usr/cvs/lelisp/lltool/mksymval.ll,v 1.4 2017/06/11 11:58:30 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'mksymval))

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

(setq #:system:read-case-flag ())

(de mksymval ()
    (let ((nsymb -1))                   ; le nume'ro du symbole
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
    (when (and (consp ligne) (memq (cadr ligne) '(MAKFNT MAKCST)))
          (print "(defvalsymb ." (caddr ligne) " " (incr nsymb) ")")))



