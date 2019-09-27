;;; .EnTete "Le-Lisp (c) version 15.2" " " "Statistiques LLM3"
;;; .EnPied "statdyn.ll" "%" " "
;;; .SuperTitre "Les statistiques dynamiques LLM3"
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltool/statdyn.ll,v 1.4 2017/06/11 11:58:30 jullien Exp $"
(unless (>= (version) 15)
	(error 'load 'erricf 'statdyn))

; .Section "Les instructions et les ope'randes concerne's"

(defvar #:statdyn:lobj
        ; la liste des compteurs internes
        (append #:llm3:linst     ; les instructions
	        #:llm3:loper     ; les ope'randes
        )))

;.Section "Fabrication du fichier EXTEND.LLM3 pour les statistiques"

(de fextend () 
    ; une abbrev bien pratique
    (#:statdyn:faire.extend.llm3))

(print "(fextend) pour creer le fichier extend.llm3")

(de #:statdyn:faire.extend.llm3 ()
    ; fabrique un fichier extend.llm3 pour les stats
    (with ((outchan (openo "extend.llm3")))
          (print ";*********************************************************")
          (print ";")
          (print ";       Le_Lisp  LLM3  : 13/14  :  les fonctions locales")
          (print ";")
          (print ";*********************************************************")
          (print ";")
          (print ";        Le Site Local")
          (print ";")
          (print ";*********************************************************")
          (print "")
          (print "          TITLE     EXTEND  ; LLM3 : les fonctions locales")
          (print "")
          (print "          XREFP     READ,INISYMB")
          (print "          XREFP     READ,INICST")
          (print "          XREFI     LLINIT,MSTACK")
          (print "          XREFP     TOPERR,ERRFS")
          (print "          XREFP     GC,GCCONS")
          (print "          XREFP     GC,GCFLOAT")
          (print "          XREFP     GC,GCNUMB")
          (print "          XREFI     LLINIT,HASHTAB")
          (print "          XREFP     TOPERR,POPJ")
          (print "          XREFP     PRINT,PROBJ")
          (print "          XREFP     PRINT,PROBJT")
          (print "          XREFP     TOPERR,ERRNAA")
          (print "          XREFP     TOPERR,ERRNIA")
          (print "          XREFP     TOPERR,ERRNLA")
          (print "          XREFP     TOPERR,ERRNVA")
          (print "          XREFP     TOPERR,ERRWNA")
          (print "          XREFP     EVAL,EVALCAR")
          (print "          XREFP     EVAL,EVALA1")
          (print "          XREFP     EVAL,APPLY")
          (print "          XREFI     LLINIT,.UNDEF")
          (print "          XREFI     LLINIT,.T")
          (print "          XREFI     LLINIT,.VOID")
          (print "          XREFI     EVAL,.QUOTE")
          (print "          XREFP     BLLSHT,LOC")
          (print "          XREFI     CNTRL,TABTYPFN")
          (print " ")
          (print "          XDEFP     INI_EXT")
          (print "          PURE")
          (print " ")
          (print " ")
          (print ";")
          (print ";         Cre'ation des symboles")
          (print ";         =====================")
          (print ";")
          (print "          PURE")
          (print " ")
          (print "")
          (print "INI_EXT   LABEL      ")
          (print "")
          (print "          MAKFNT   STATLLM3,#8,""statllm3"" ")
          (print "          MAKFNT   STATCLR,#7,""statclr"" ")
          (print " ")
          (print "          RETURN ")
          (print "")
          (print "          FENTRY      STATLLM3,SUBR0")
          (print "          MOV         #0,A4")
          (mapc (lambda (x)
                    (print "          INCR      A4")
                    (print "          MOV       Z" x ",A1")
                    (print "          CONVTOK   #0,A1,A1")
                    (print "          PUSH      A1"))
                #:statdyn:lobj)
          (print "          JMP         LIST")
          (print "")
          (print "")
          (print "          FENTRY      STATCLR,SUBR0")
          (print "          MOV         #0,A1")
          (mapc (lambda (x)
                        (print "          MOV       A1,Z" x))
                #:statdyn:lobj)
          (print "          RETURN")
          (print "")
          (print "          IMPURE")
          (print "")
          ; les donnees
          (mapc (lambda (x) 
                        (print "          XDEFI      Z" x)
                        (prin "Z" x " ") (outpos 14) (print "ADR       0"))
                #:statdyn:lobj)
          (print "")
          (print "          END")
          (print "")
          (print "")
))))))

;.Section "Fabrication des statistiques"


(de #:statdyn:do (e f cumulp)
    (with ((outchan (openo (catenate f ".n"))))
     (unless cumulp (statclr))
     (eval e)
     (slet ((s (statllm3))
	    (slinst (length #:llm3:linst))
	    (totinst (apply '+ (firstn slinst s))))
         (#:statdyn:printable
	       "Occurrences dynamiques des instructions (alpha)"
               "Nombre d'instructions (en K instructions) : "
               (sort (lambda (x y) (alphalessp (car x) (car y)))
		     (mapcar 'list
		             #:llm3:linst
		             s))
	       totinst)
         (#:statdyn:printable
	       "Occurrences dynamiques des instructions"
               "Nombre d'instructions (en K instructions) : "
               (sort (lambda (x y)
			     (if (= (cadr x) (cadr y))
				 (alphalessp (car x) (car y))
				 (> (cadr x) (cadr y))))
		     (mapcar 'list
		             #:llm3:linst
		             s))
	       totinst)
         (#:statdyn:printable
	       "Occurrences dynamiques des ope'randes"
               "Nombre d'ope'randes (en K ope'randes) : "
	       (mapcar 'list
		       #:llm3:loper
		       (nthcdr slinst s))
	       (apply '+ (nthcdr slinst s)))
         (let ((al) (code 0) (stack 0) (memadr 0) (obj 0) (objind 0))
              (setq al (mapcar 'cons
		               #:statdyn:lobj
		               s))
              (setq stack (#:statdyn:gettypspec al 'stack))
              (setq memadr (cassq 'memadr al))
              (setq obj (apply '+
			   (mapcar (lambda (x) (cassq x al))
				   (append #:llm3:mem-access
				           '(gftype sftype gptype sptype)))))
              (setq objind (#:statdyn:gettypspec al 'objind))
              (#:statdyn:printable
	           "Acce`s me'moire dynamiques"
	           "Nombre d'acce`s me'moire (en K acce`s) : "
                   (list (list 'code totinst)
		         (list 'stack stack)
		         (list 'memadr memadr)
		         (list 'obj obj)
		         (list 'objind objind))
	           (+ totinst stack memadr obj objind))

	 ))))))))))))

(de #:statdyn:gettypspec (al prop)
    ; retourne la somme de toutes les objets de al
    ; ayant la proprie'te' spe'ciale prop
    (apply '+
           (mapcar
              (lambda (x)
	              (if (memq prop (getprop x '#:llm3:typspec))
		          (cassq x al)
	                  0))
              #:llm3:linst))))

; .Section "Impression d'un tableau complet"

(de #:statdyn:printable (titre msg l m)
    ; titre du tableau
    ; msg = type de m
    ; l est la liste des items
    ; m est le total
    (terpri 2)
    (print ".Centre "" " titre """")
    (print ".DebLL 6")
    (terpri 2)
    (print msg m)
    (terpri 2)
    (let ((c 0) (n))
         (setq c 0)
         (while l
                (when (/= (cadar l) 0)
                      (prin (incr c))
                      (outpos 5)
                      (mapc 'princn (mapcar 'uppercase (explode (caar l))))
                      (outpos 15)
                      (prin (cadar l))
                      (outpos 22)
                      (#:statdyn:prinpc (cadar l) m)
                      (terpri))
                (nextl l)))
    (print ".FinLL")))

(de #:statdyn:prinpc (n m)
    ; imprime le pourcentage de n/m  sous la forme  xx.x %
    (if (zerop m)
        (prin 0 " %")
        (setq n (scale n 1000 m))
        (prin (div n 10) "." (rem n 10) " %")))



(de fib (n) 
    (cond ((eq n 1) 1)
	  ((eq n 2) 1)
	  (t (+ (fib (1- n)) (fib (- n 2)))))))

