;;;
;;; LLM3TOLO:  LLM3 -> *.lo Translator
;;;
;;; $Source: /usr/cvs/lelisp/C/llm3tolo.ll,v $
;;; $Date: 2017/06/10 19:42:49 $
;;; $Revision: 1.1 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;; and maintained by ILOG.
;;;
;;; Inquiries to:     ILOG S.A.
;;;                   2 Avenue Gallieni, BP 85,
;;;                   F-94253 Gentilly Cedex, France.
;;;                   email: lelisp@ilog.fr
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(unless (>= (version) 15.2)
        (error 'load 'erricf 'llm3tolo))

(defvar #:sys-package:colon 'expand)


;;; 
;;; This module translate an LLM3 file in a pseudo file *.lo, in order
;;; to use "modtoc" to generate C code.
;;;

(loadfile "../lltool/llm3.ll" t)
(loadfile "../lltool/expand.ll" t)

;;; don't load ../lltool/macllm3.ll, all the macros are on-line.
;;; (loadfile "../../lltool/macllm3.ll" t)

;;;
;;; Conditionnal assembly values
;;;

;;; 1 - For the expander

(defvalue STATLLM3    ())     ; statistiques LLM3
(defvalue 31BITFLOATS t)      ; flottants sur 31 bits.

; .SSection "Les assemblages conditionnels du code LLM3"

(defvalue COMPILO  0)
(defvalue DEBUG    0)
(defvalue GCDEBUG  0)
(defvalue SEDEBUG  0)
(defvalue STOPCOPY 0)
(defvalue DIVOVFL  1)      ; =0 le hard teste le de'bordement de la division
(defvalue TRUEOVFL 1)      ; =1 teste les vrais de'bordements arithme'tiques


; .Section "Utilisation des registres"

; Les cinq registres rapides LLM3 (A1, A2, A3, A4 et SP) sont des variables
; globales C.

; .Section "Les Valeurs des symboles d'acce`s"

; .SSection "Aux proprie'te's naturelles des symboles"

(defvalue   CVAL       0)
(defvalue   PLIST      1)
(defvalue   FVAL       2)
(defvalue   PKGC       3)
(defvalue   OVAL       4)
(defvalue   ALINK      5)
(defvalue   PFTYPE     6)
(defvalue   PNAME      7)
(defvalue   FINSYMB    8)

; .SSection "Aux chai^nes de caracte`res et aux tableaux"

(defvalue   VAL        0)
(defvalue   TYP        1)

; .SSection "Aux cellules de liste"

(defvalue   CAR        0)
(defvalue   CDR        1)

; .SSection "Valeurs des ftypes"

(defvalue   FUNDEF     0)
(defvalue   SUBR0      1)
(defvalue   SUBR1      2)
(defvalue   SUBR2      3)
(defvalue   SUBR3      4)
(defvalue   SUBRN      5)
(defvalue   SUBRF      6)
(defvalue   EXPR       7)
(defvalue   FEXPR      8)
(defvalue   MACRO      9)
(defvalue   DMACRO     10)
(defvalue   SUBRM      11)
(defvalue   SUBRDM     12)

; .SSection "Les types des caracte`res"

(defvalue  TCNULL      0)         ; CNULL
(defvalue  TCBCOM      1)         ; debut commentaire
(defvalue  TCECOM      2)         ; fin de commentaire
(defvalue  TCQUOTE     3)         ; quote char
(defvalue  TCLPAR      4)         ; par ouvrante 
(defvalue  TCRPAR      5)         ; par fermante
(defvalue  TCDOT       6)         ; le point (des listes)
(defvalue  TCSEP       7)         ; un se'parateur
(defvalue  TCSPKGC     8)         ; se'parateurs de packages
(defvalue  TCSPLICE    9)         ; splice macro caractere
(defvalue  TCMACRO    10)         ; macro caractere
(defvalue  TCSTRING   11)         ; se'parateur de chaines
(defvalue  TCPNAME    12)         ; pname normal
(defvalue  TCSYMB     13)         ; symbole normal
(defvalue  TCMSYMB    14)         ; symbole mono caractere

; .SSection "Les types d'unite's syntaxiques"

(defvalue  TCOBJ       3)         ; objet lisp
(defvalue  TCLIST      4)         ; liste lisp

; .Section "Des constantes"
(defvalue       MINFIX           #$8001)  ; -32767
(defvalue       MAXFIX           32767)
(defvalue       MINUS0           #$8000)


; .Section "La traduction proprement dite"

(defvar #:llm3:dir-source     ; le directory des sources LLM3
        "../llm3/")
(defvar :lo-dir "./")
(newl #:system:path :lo-dir)

(defvar :list-ins ())
(defvar :gen-count 0)

(defun :expand-list-of-files (lfile)
    ; expanse une liste de fichiers LLM3
    (while lfile
       (print "expand: expansion of the file: " (car lfile))
       (let ((o (openo (catenate :lo-dir (car lfile) ".lm"))))
            (close o))
       (with ((inchan (#:llm3:openi-llm3 (car lfile)))
              (outchan (openo (catenate :lo-dir
                                         (car lfile) ".lo")))
	      (rmargin (add1 (slen (outbuf))))) ; GELL engendre de longues lignes ....
             (:expand-one-file)
             (close (outchan)))
       (nextl lfile)))

(defun :expand-one-file ()
             (catcherror t
                    (let ((#:status:print-flag t)
                          (genlab-counter 0)
                          (in-if-stack    '(t))
                          (flag-pseudo    ()))
		         (setq :list-ext (list 'EVALAN 'EVALT))
                         (setq :list-ins ())
			 (setq :gen-count 0)
                         (#:llm3:process-one-file ':create-list)
                         (:clean-lap (nreverse :list-ins))
                         )))


(defun :create-list (i)
  (newl :list-ins i))

(defun single-name (n)
    (setq n (string n))
    (let ((st 0) (ed (slen n)))
         (while (index "/" n st) (setq st (1+ (index "/" n st))))
         (when (index "." n st) (setq ed (index "." n st)))
         (substring n st (- ed st))))



(defun llm3tolo (lst)
  ;; traduction d'une liste de fichiers
  (#:expand:expand-list-of-files (mapcar 'single-name lst))
  
'   (mapc
      (lambda (file)
         (let ( (f (single-name file)) )
            (comline (catenate "mv " f ".h ../Cllm3"))
            (comline (catenate "mv " f ".s ../Cllm3/" f ".c")) ))
      lst )
 lst)



; La liste des noms exporte's ou importe's de ce pseudo module.
(defvar :list-ext ())

(defun :new-list-ext (obj)
   (unless (memq obj :list-ext)
	   (newl :list-ext obj)))

(defun :clean-lap (l)
   (setq :list-lap ())
   (let ((lap))
      (while l
             (if (consp (car l))
                 (progn 
                        (if (eq (cadar l) 'ADR)
                            (newl lap `(LADR ,(caar l) ,(caddar l)))
			    (when (caar l)
				  (newl lap (caar l)))
			    (newl lap (:translate (cdar l) l))))
                 (print "******* bad-ins" (car l)))
              (nextl l))
      (:print-lap (nreverse lap))))

(defun :translate (ins lins)
   (if (consp ins)
       (cond 
             ((eq (car ins) 'LABEL)
              `(EVAL ()))
             ((eq (car ins) 'JCALL)
              (:translate `(CALL ,(cadr ins)) lins))
             ((eq (car ins) 'JMP)
              (:translate `(BRA ,(cadr ins)) lins))
             ((eq (car ins) 'FENTRY)
	      (:new-list-ext (cadr ins))
              `(LENTRY ,@(mapcar ':translate1 (cdr ins))))
             ((eq (car ins) 'BRX)
              (let ((name (cadr ins))
                    (ind (caddr ins))
                    (cins lins)
                    (l))
                   (nextl cins)
                   (while (and (consp (car cins))
                               (eq (cadar cins) 'ADR))
                          (newl l `(@ ,(caddr (nextl cins)))))
                   (rplacd lins  cins)
		   `(BRX ,(nreverse l) ,ind)))
             ((and (memq (car ins) '(PLUS DIFF TIMES QUO REM))
                   (eq (cadddr ins) (caadr lins)))
	      ; fait sauter les etiquettes OVFL juste en dessous
	      (list (car ins) (:translate1 (cadr ins)) (:translate1 (caddr ins))))
             ((and (memq (car ins) '(INCR DECR))
                   (eq (caddr ins) (caadr lins)))
	      ; fait sauter les etiquettes OVFL juste en dessous
	      (list (car ins) (:translate1 (cadr ins))))
             ((eq (car ins) 'IFNE)
	      (when (eq (getvalue (cadr ins)) 0)
		    (let ((cins lins))
		      (while (nequal (nextl cins) '(() ENDC)))
		      (rplacd lins cins)))
	      '(ENDC))
             ((eq (car ins) 'IFEQ)
	      (when (neq (getvalue (cadr ins)) 0)
		    (let ((cins lins))
		      (while (nequal (nextl cins) '(() ENDC)))
		      (rplacd lins cins)))
	      '(ENDC))
	     ((eq (car ins) 'CALL)
	      (let ((et (concat "ret_call_" (cadr ins) "_" (incr :gen-count))))
		(rplacd lins (mcons `(() BRA ,(cadr ins)) 
				    `(,et LABEL)
				    (cdr lins)))
		(:translate `(PUSH (@ ,et)) lins)))
	     ((eq (car ins) 'BRA)
	      (cond ((eq (cadr ins) 'EVALA1)
		     (rplacd lins (cons '(() BRA EVALAN) (cdr lins)))
		     (:translate '(BFNIL EVALST EVALT) lins))
		    ((eq (cadr ins) 'EVALCAR)
		     (rplacd lins (cons '(() BRA EVALA1) (cdr lins)))
		     (:translate '(MOV (CAR A1) A1) lins))
		    (t (mapcar ':translate1 ins))))
                    
             (t (cond ((eq (car ins) 'XDEFP)
                       (:new-list-ext (cadr ins)))
                      ((eq (car ins) 'FENTRY)
                       (:new-list-ext (cadr ins)))
                      ((eq (car ins) 'XREFP)
                       (:new-list-ext (caddr ins))))
                (mapcar ':translate1 ins)))))

(defun :translate1 (item)
   (if (consp item)
       (cond ((eq (car item) '|#|)
              (if (fixp (cadr item))
                  (kwote (cadr item))
                  (let ((v (getvalue (cadr item))))
                       (if v
                           (kwote v)
                           (print "************* bizarre" item)))))
             (t item))
       (or (getvalue item)
           item)))

(defun :print-lap (l)
    (print "(loader '(")
    (print (list 'LISTEXT :list-ext))
    (print '(ENTRY STARTMODULE subr0))
    (mapc ':print-ins l)
    (print "))"))


(defun :print-ins (ins)
    (if (atom ins)
        (print ins)
        (prin "	")
	(let ((#:system:print-for-read t)) 
	     (print ins))))

                         
