;;;.EnTete "Le-Lisp (c) version 15.2" "" "Visualisation du format interne LLM3"
;;;.EnPied "llm3int.ll" "%" " "
;;;.SuperTitre "Visualisation du format interne LLM3"
;;;
;;;.Centre "*****************************************************************"
;;;.Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;;.Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;;.Centre "*****************************************************************"
;;;
;;;.Centre "$Header: /usr/cvs/lelisp/lltool/llm3int.ll,v 1.4 2017/06/11 11:58:30 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'llm3int))

; Ce programme permet de cre'er un fichier contenant le format
; interne de travail des instructions LLM3 engendre' par le
; lecteur contenu dans le fichier llm3.ll.

(setq #:system:read-case-flag ())

(de llm3int ()
    (with ((outchan (openo "testllm3.int")))
          (#:llm3:process-list-of-files 
                     '#:llm3int:process
                     '(testllm3))
               (close (outchan)))))

(de #:llm3int:process (ligne)
    (let ((#:system:print-for-read t))
         (print ligne)))



