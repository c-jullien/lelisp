;;;; Author:    C. Jullien
;;;; License:   Simplified BSD license
;;;; GIT:       "$Id$"

;;; Copyright (c) 1988-2020, Eligis
;;;
;;; Redistribution and use in source and binary forms, with or without
;;; modification, are permitted provided that the following conditions are met:
;;; 
;;; 1. Redistributions of source code must retain the above copyright
;;;    notice, this list of conditions and the following disclaimer.
;;; 2. Redistributions in binary form must reproduce the above
;;;    copyright notice, this list of conditions and the following
;;;    disclaimer in the documentation and/or other materials provided
;;;    with the distribution.
;;; 
;;; THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
;;; "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
;;; TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
;;; PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
;;; CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
;;; EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
;;; PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
;;; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
;;; WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
;;; OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
;;; ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

;;; Ve'rification de la version.

(unless (>= (version) 15.2)
        (error 'load 'erricf 'expand))

;;; Tous les symboles pre'ce'de's de ':' seront de'finis dans le package EXPAND.

(defvar #:sys-package:colon 'expand)

;;; Ce programme permet d'expanser des fichiers LLM3.
;;; Il suppose charge' le fichier LLTOOL/LLM3.LL

(setq #:system:read-case-flag ())

(defvar *size-float* 4)
(defvar *asm-dir*    "") ; le repertoire contenant les fichiers a la syntaxe masm
(defvar *asm-file*   ()) ; le nom du fichier contenant le code
(defvar *asm-chan*   ()) ; le channel associe a *asm-file*
(defvar *equ-file*   ()) ; le nom du fichier contenant les externs et equ
(defvar *equ-chan*   ()) ; le channel associe a *equ-file*
(defvar *dat-file*   ()) ; le nom du fichier contenant les data
(defvar *dat-chan*   ()) ; le channel associe a *dat-file*

(defvar *def-file*   "../ll386.def")

;;; liste des mots reserves MASM ou des noms de fichiers

(defvar *reserved-symbol*
        '(comment  eval     if       ds       llinit   gc       physio
          read     macroch  tsymb    send     print    eval     fspecs
          cntrl    carcdr   symbs    fntstd   number   specnb   chars
          string   extend   bllsht   name     loop     while))

(defun get-real-name (etiq)
   ;; sert a recuperer le vrai nom d'une etiquette pour eviter les
   ;; pbs des etiquettes ayant des noms = a des noms reserves
   ;;
   ;; c'est bien un CONCAT et pas un CATENATE (beuh...)
   ;;
   (if (memq etiq *reserved-symbol*)
       (concat etiq "000")
       etiq))

;;; Les fonctions d'appel

(df expand1 (file)
    (#:expand:expand-list-of-files1 file))

(defun expandn ()
   (#:expand:expand-list-of-filesn #:llm3:files))

;;; .Section "Boucle toplevel de lecture et d'expansion"

(defun mac ()
   ; expanse une liste de fichiers LLM3
   (with ((inchan ())
          (outchan ()))
         (catcherror t
                     (let ((#:status:print-flag ())
                           (genlab-counter 0)
                           (in-if-stack    '(t))
                           (flag-pseudo    ()))
                          (setq *equ-chan* ())
                          (setq fichier 'foo)
                          (when (not (boundp 'segment))
                                (setq segment '()))
                          (#:llm3:process-one-file '#:expand:apply-mac)))))

(defun #:expand:expand-list-of-files1 (file)
   (setq fichier
         (if (chrpos #/. file) (substring file 0 (chrpos #/. file)) file))
   (print fichier ".llm3"
          (makestring (- 8 (slength fichier)) #/ )
          " -> " fichier ".asm")
   (setq *asm-dir*  (catenate syst
                              "/asm"
                              (if 31BITFLOATS 31 64)
                              "fpu"))
   (setq *asm-file* (catenate fichier ".asm"))
   (setq *equ-file* (catenate fichier ".equ"))
   (setq *dat-file* (catenate fichier ".dat"))
   (setq *asm-chan* (openo (catenate *asm-dir* "/" *asm-file*)))
   (setq *equ-chan* (openo (catenate *asm-dir* "/" *equ-file*)))
   (setq *dat-chan* (openo (catenate *asm-dir* "/" *dat-file*)))
   (setq *size-float* (if 31BITFLOATS 4 8))
   (with ((inchan (#:llm3:openi-llm3 fichier))
          (outchan *asm-chan*))
         (catcherror t
                     (let ((#:status:print-flag t)
                           (genlab-counter 0)
                           (in-if-stack    '(t))
                           (flag-pseudo    ()))
                          (#:llm3:process-one-file '#:expand:apply-mac))))
   (close *asm-chan*)
   (close *equ-chan*)
   (close *dat-chan*)
   (clean_symbol))

(defun #:expand:expand-list-of-filesn (lfile)
   (mapc #'#:expand:expand-list-of-files1 lfile))

(defvar *memory*)  ; flag leve si l'operande est un operande memoire
                   ; *memory* = 0 ou 1 pas de pb
                   ; *memory* > 1 : pb on a affaire a deux operandes memoire
                   ;                 => on passe par un registre intermediaire
(defvar *BP-set*)  ; flag leve si on a fait un MOV EBP,ESP
(defvar *immediat*); operande = immediat
(defvar *danger*)  ; le 1er operande (= destination) est un immediat -> on
                   ; permute les arguments (cf cabne #5,A1,toto)


(defun #:expand:apply-mac (l)
   ;; expanse une ligne
   (when (cadr l)
         ; il y a un codop, ve'rification du bon nb d'arguments
         (let ((n (getprop (cadr l) '#:llm3:narg)))
              (cond ((null n)
                     (#:expand:err "macro indefinie" (cadr l) l))
                    ((or (and (numberp n) (<> n (length (cddr l))))
                         (and (consp n) (not (memq (length (cddr l)) n))))
                     (#:expand:err "mauvais nb d'arguments" (cadr l) l)))))
     (let ((*label (car l))
           (*opcod (cadr l))
           (*arg0 (cadr l))
           (*arg1 (caddr l))
           (*arg2 (cadddr l))
           (*arg3 (car (cddddr l)))
           (*arg4 (cadr (cddddr l)))
           (*arg5 (caddr (cddddr l)))
           (*arg6 (cadddr (cddddr l)))
           (genlab ())
           (f (getfn1 'expand (cadr l))))

          (setq *label (get-real-name *label))
          (setq *BP-set* ())
          (setq *memory* 0)
          (setq *immediat* ())
          (setq *danger* ())

          (defprop RWORK REGISTER STATE)  ; RWORK redevient un registre !

          (cond
                ((eq *opcod 'ENDC)
                 (nextl in-if-stack))
                ((eq *opcod 'IFNE)
                 (newl in-if-stack
                       (and (car in-if-stack)
                            (symbolp *arg1)
                            (neq (getvalue *arg1) 0))))
                ((eq *opcod 'IFEQ)
                 (newl in-if-stack
                       (and (car in-if-stack)
                            (symbolp *arg1)
                            (eq (getvalue *arg1) 0))))
                (f (when (car in-if-stack)
                    (unless (or (not *label)
                                (pgetvalue *label)
                                (register? *label))
                          (cond

                                ((eq *opcod 'ADR)
                                 (prin (get-c-name (get-real-name *label)))
                                 (flush))

                                ((eq *opcod 'LABEL)
                                 (if (equal segment (if (eq syst 'msdos)
                                                        "_TEXT"
                                                        'CODE))
                                     (if label_0
                                         (print *label "	label	near")
                                         (setq label_0 t)
                                         (setq proc_cou *label)
                                         (print *label "	proc	near"))
                                     (print *label "	label	dword"))) ;data

                                (t (print *label "	label	near"))))
                    (when (getvalue 'STATLLM3)
                          (#:expand:prin-statop *opcod)
                          (mapc (lambda (op type)
                                        (when type
                                               (#:expand:prin-statarg op)))
                                     (cddr l)
                                     (or (consp (getprop *opcod
                                                         '#:llm3:typarg))
                                         (cirlist (getprop *opcod
                                                       '#:llm3:typarg))))
                               (mapc '#:expand:prin-spec-pro
                                     (getprop *opcod '#:llm3Ltypspec)))
                    (funcall f)
                    (when (getvalue 'STATLLM3)
                          (mapc '#:expand:prin-spec-epi
                                (getprop *opcod '#:llm3Ltypspec)))))
                (t
		  (syserror 'expand 'errudf l)))))

(defun #:expand:err (m a l)
   (syserror 'expand m (list a l)))

;;; Les de'finitions des macros

(df defvalue (nom val)
    ; de'finition d'une valeur de l'expanseur.
    ; teste les rede'finitions.
    (let ((oval (getprop nom '#:expand:value)))
         (if (and oval (nequal val (car oval)))
             (error 'defvalue
                    "redefinition de valeur : "
                    (list nom oval val))
             (putprop nom val '#:sharp:value)
             (putprop nom (list val) '#:expand:value))))

(defmacro redefvalue (nom val)
    ; rede'finition d'une valeur de l'expanseur.
    `(progn
            (remob ',nom)
            (defvalue ,nom ,val)))

(dmd getvalue (nom)
     `(car (getprop ,nom '#:expand:value)))

(dmd getregister (nom)
     `(getprop ,nom '#:expand:register))

(defun getval (nom)
   (if (getvalue 'LLM3-NAMES)
       (string nom)
       (cond
             ((getregister nom))
             ((getvalue nom))
             (t nom))))

(defun pgetvalue (nom)
     ; re'cupe`re la valeur du symbole <nom>
     (let ((val (getprop (when (symbolp nom) nom) '#:expand:value)))
          (when (consp val) (car val))))

(df defregister (nom value)
    (putprop nom 'register 'state)
    (putprop nom value '#:expand:register))

(df defins (nom  . corps)
    ;;          (print "defins:" nom " " corps)
    (setfn (symbol 'expand nom) 'expr (cons () corps)))

(df defmac (nom . corps)
    (setfn (symbol 'expand nom) 'expr
              `(mapc '#:expand:apply-mac ,corps)))

;;; Les fonctions de test classiques

(defun use-not-retn-p ()
   (eq (getvalue 'RETN) 0))

(defun float-stack-p ()
   (eq (getvalue 'FLOATSTACK) 0))

(defun register? (reg)
   ;; est-ce un registre
   (and (symbolp reg) (eq (getprop reg 'state) 'register)))

(defun eqreg (regllm3 reg386)
     (and (symbolp regllm3) (eq (getprop regllm3 '#:expand:register) reg386)))

(defun indirect? (reg)
   ;; est-ce une indirection memoire ((VAL A1) ou (& n))
   (and (consp reg)
        (not (memq (car reg) '(|@| |%| |#| |.|)))))

(defun pile? (reg)
   ;; est-ce un acces sur pile
   (when (and (consp reg) (eq (car reg) '|&|))
         (cadr reg)))

(defun immvalue? (reg)
   ;; est-ce une valeur immediate (# n)
   (or (fixp reg)
       (and (stringp reg) (eqstring reg MSK31FLOAT))
       (and (consp reg)
            (eq (car reg) '|#|)
            (cond ((numberp (cadr reg))     (cadr reg))
                  ((eq (chrnth 0 (cadr reg)) #/$)
                   (with ((obase 16)) caadr reg))
                  ((equal (lastn 1 (explodech (cadr reg))) '(h))
                   (cadr reg))
                  (t                (pgetvalue (cadr reg)))))))

(defun label? (reg)
   ;; est-ce une etiquette (@ ou % etiq)
   (when (and (consp reg) (memq (car reg) '(|@| |%|)))
         (cadr reg)))


(defun symbole? (arg)
   ;; est-ce un symbole Lisp (. truc)
   (when (and (consp arg) (eq (car arg) '|.|))
         (concat "z" (get-real-name (cadr arg)))))

(defun variable? (arg)
   ;; une variable est un symbole non registre: exemple BLLM3
   (and (symbolp arg) (not (register? arg))))

;;; Des macros caracte`res pour entrer des appels au print

(dmc |\| ()
     (concat '*arg (read)))

(defun |[| ()
   (with ((typecn #/, cmsymb)
          (typecn #/: cmsymb)
          (typecn #/@ cmsymb))
         (flet ((|]| () (exit croch)))
               (let ((l (list 'printinst)))
                    (untilexit croch
                               (setq o (read))
                               (cond ((numberp o) (setq o (concat "*arg" o)))
                                     ((eq o '|,|) (setq o ","))
                                     ((eq o '|:|) (setq o ":"))
                                     ((eq o '|@|) (setq o '(#:expand:genlab))))
                               (newl l o))
                    (nreverse l)))))

(defun printinst l
    (while l
           (cond ((atom (car l))
                    (#:expand:prin-at (nextl l)))
                 (t (#:expand:prin-cons (nextl l)))))
    (terpri))

;;; Ce qui suit permet de conserver les memes "defins" entre les systemes

(defvar *c-name-list*
   ;;     KEY           C name
       '((accusingle1   accusingle1)
         (accusingle2   accusingle2)
         (accudouble1   accudouble1)
         (accudouble2   accudouble2)
         (apfile        apfile)
         (apfileb       apfileb)
         (_btbin        btbin)
         (_bcons        bcons)
         (_btbgc        btbgc)
         (_bsymb        bsymb)
         (cdate         cdate)
         (cdleep        cdleep)
         (cfbeq         cfbeq)
         (cfbgt         cfbgt)
         (cfblt         cfblt)
         (cline         cline)
         (csleep        csleep)
         (cvatof        cvatof)
         (cvatos        cvatos)
         (cvstoa        cvstoa)
         (fclos         fclos)
         (fcopy         fcopy)
         (fdele         fdele)
         (fdiff         fdiff)
         (fixc          fixc)
         (floatc        floatc)
         (fprobe        fprobe)
         (fplus         fplus)
         (fquo          fquo)
         (frena         frena)
         (ftimes        ftimes)
         (getenvrn      getenvrn)
         (getgloba      getgloba)
         (inbf          inbf)
         (inbfb         inbfb)
         (infile        infile)
         (infileb       infileb)
         (itloop        itloop)
         (ll_intest     ll_intest)
         (llmkdir       llmkdir)
         (llovni        llovni)
         (llrmdir       llrmdir)
         (llrt_acos     llrt_acos)
         (llrt_asin     llrt_asin)
         (llrt_atan     llrt_atan)
         (llrt_cos      llrt_cos)
         (llrt_cvatof   llrt_cvatof)
         (llrt_cvftoa   llrt_cvftoa)
         (llrt_exp      llrt_exp)
         (llrt_log      llrt_log)
         (llrt_log10    llrt_log10)
         (llrt_power    llrt_power)
         (llrt_sin      llrt_sin)
         (llrt_sqrt     llrt_sqrt)
         (oufile        oufile)
         (oufileb       oufileb)
         (out           out)
         (outf          outf)
         (outfl         outfl)
         (outflb        outfl)
         (runtime       runtime)
         (setalarm      setalarm)
         (ttycrlf       ttycrlf)
         (ttyin         ttyin)
         (ttyinstr      ttyinstr)
         (ttyout        ttyout)
         (ttys          ttys)
         ()))

;; get-c-name permet d'unifier les differentes versions lors des appels C

(defun get-c-name (name)
   ;; (when (assq name *c-name-list*)
   ;;       (print ";; Used C name: " name))
   (let ((underscored (or (getenv "UNDERSCORED")
                          (member (system)
                                  '(win32 win95 win64 x86macos cygwin)))))
        ;; Take care of open mode for 'binary' file (as in Windows).
        (setq name
              (selectq name 
                       (infileb
                        (if (member (system) '(win32 win95 win64))
                            'infileb
                            'infile))
                       (oufileb
                        (if (member (system) '(win32 win95 win64))
                            'oufileb
                            'oufile))
                       (apfileb
                        (if (member (system) '(win32 win95 win64))
                            'apfileb
                            'apfile))
                       (t name)))
	(let ((x (cadr (assq name *c-name-list*))))
             (cond
                   ((and x underscored)
                    (concat '_ x))
                   (x x)
                   (t name)))))
