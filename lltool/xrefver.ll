;;; .EnTete "Le-Lisp (c) version 15.2" " " "Ve'rification des XREF"
;;; .EnPied "xrefver.ll" "%" " "
;;; .SuperTitre "Ve'rification des XREF"
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltool/xrefver.ll,v 1.4 2017/06/11 11:58:30 jullien Exp $"

(unless (>= (version) 15)
        (error 'load 'erricf 'xrefver))

; Ce programme permet de ve'rifier l'e'dition de lien dans les
; diffe'rents modules LLM3, c'est-a`-dire la bonne utilisation 
; des XREF et XDEF.
;  Il teste en particulier si :
;  - tous les XDEF sont bien de'finis
;  - tous les XREF ont bien le nom du module idoine
;  - les BRA/CALL sont bien locaux
;  - les JCALL/JMP sont bien globaux.
;  - les PURE/IMPURE dans XREF

; Il resterait a` faire :
;  - test de P/I dans les de'clarations
;  - test de tous les branchements conditionnels
;  - e'limination des XREFx inutiles.

; Avec le programme ../lltool/llm3.ll c'est vraiment un jeu d'enfant.

(setq #:system:read-case-flag ())

(de xrefver ()
    (let ((file ())     ; nom du fichier
          (nlig -1))    ; nume'ro de la ligne dans le fichier
        (print "Premiere passe")
        (#:llm3:process-list-of-files '#:xrefver:process1 
                                      #:llm3:files
                                      '#:xrefver:newfile)
        (print "Seconde passe") 
        (#:llm3:process-list-of-files '#:xrefver:process2
                                      #:llm3:files
                                      '#:xrefver:newfile)
        (print "derniere passe")
        (mapc (lambda (x)
                      (print "pas la peine de XDEF pour " (cdr x)
                                    " dans " (car x)))
              (sort (lambda (x y) (alphalessp (car x) (car y)))
                    (mapcoblist (lambda (x)
                       (when (and (or (getprop x 'xdefp) (getprop x 'xdefi))
                                  (null (getprop x 'used)))
                             (list (cons (or (getprop x 'xdefp)
                                             (getprop x 'xdefi))
                                         x)))))))))

(de #:xrefver:newfile (nf)
    ; on commence un nouveau fichier
    (print "           " nf ".llm3")
    (setq file nf)
    (setq nlig -1))

(de #:xrefver:process1 (ligne)
    ; fabrique la table des LABEL et des XDEF
    (incr nlig)
    (when (consp ligne)
          (when (car ligne)
                (putprop (car ligne) file 'label))
          (when (eq (cadr ligne) 'FENTRY)
                (putprop (caddr ligne) file 'label))
          (when (eq (cadr ligne) 'XDEFP)
                (putprop (caddr ligne) file 'xdefp))
          (when (eq (cadr ligne) 'XDEFI)
                (putprop (caddr ligne) file 'xdefi))))

(de #:xrefver:process2 (ligne)
    ; ve'rification du code lui-me^me
    (incr nlig)
    (when (consp ligne)
          (when (eq (cadr ligne) 'XREFP)
                (putprop (cadddr ligne)
                         (cons file (getprop (cadddr ligne) 'used))
                         'used)
                (when (null (getprop (cadddr ligne) 'xdefp))
                      (print file "-" nlig " : " (cadddr ligne)
                            (if (getprop (caddr ligne) 'xdefi)
                                " a ete defini en XDEFI"
                                " pas de definition de XDEFP")))
                (when (neq (caddr ligne) (getprop (cadddr ligne) 'xdefp))
                      (print file "-" nlig " :"
                             " pas un XDEFP dans " (caddr ligne)
                             " mais dans " (getprop (cadddr ligne) 'xdef)
                             " pour " ligne)))
          (when (eq (cadr ligne) 'XREFI)
                (putprop (cadddr ligne)
                         (cons file (getprop (cadddr ligne) 'used))
                         'used)
                (when (null (getprop (cadddr ligne) 'xdefi))
                      (print file "-" nlig " : " (cadddr ligne)
                            (if (getprop (caddr ligne) 'xdefp)
                                " a ete defini en XDEFP"
                                " pas de definition de XDEFI")))
                (when (neq (caddr ligne) (getprop (cadddr ligne) 'xdefi))
                      (print file "-" nlig " :"
                             " pas un XDEFI dans " (caddr ligne)
                             " mais dans " (getprop (cadddr ligne) 'xdefi)
                             " pour " ligne)))
          (when (memq (cadr ligne) '(CALL BRA))
                (when (neq file (getprop (caddr ligne) 'label))
                      (print file "-" nlig " : "
                             "c'est un XREF " ligne)))

          (when (memq (cadr ligne) '(JCALL JMP))
                (when (null (getprop (caddr ligne) 'used))
                      (print file "-" nlig " : "
                             "XREF non declare dans " ligne)))))


