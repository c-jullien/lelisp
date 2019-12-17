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
        (error 'load 'erricf 'macro386))

;;;                       DEBUT DES MACROS
;;;
;;;
;;;	les fonctions qui sont soit des macros sous Windows (masm les gere)
;;;	soit leur expansion (asm unix ne les comprend pas)
;;;

; test link unix

; ***********************************************

(defvar *liste-xref* ())

;;;
;;; alloue un nvx flottant et renvoie son adresse dans rwork
;;;

(defun alloc-float ()
   (unless 31BITFLOATS
     (expgenasm2 'CMP 'FFLOAT 0)	  ; FFLOAT=0 => plus de flottant
     ["	jne	short laf" @] 		  ; non, OK: il reste des floats
     (xrefp 'GCFLOAT)
     ["	call	near ptr gcfloat"]	  ; oui, on fait du menage
     ["laf" @ ":"]			  ; on met a jour le float
     (expgenasm2 'MOV 'RWORK 'FFLOAT)
     ["	mov	" 'rwork ",dword ptr [" 'rwork "]"] ; RWORK <- next float
     (expgenasm2 'XCHG 'RWORK 'FFLOAT)	  ; echange RWORK et FFLOAT
   )
)

;;;
;;; Logiquement, les registres;
;;;
;;; ESI, EDI, EBX, EBP, ESP
;;;
;;; devraient etre preserves contrairement a:
;;;
;;; EAX, ECX et EDX
;;;
;;;

;;         .align  4
;; _testabi:
;;         pushl   %ebp
;;         movl    %esp,%ebp
;;         subl    $8,%esp
;; 
;; /       3 push (16 - (3 * 4)) => -4) => 0xXXXXXXXC
;;         subl    $4,%esp
;;         pushl   %eax
;;         pushl   %ecx
;;         pushl   %edx
;; 
;; /       2 push (16 - (2 * 4)) => -8) => 0xXXXXXXXC
;;         subl    $8,%esp
;;         pushl   $lab_m__1
;;         pushl   $11
;;         calll   _ttyout
;;         addl    $16,%esp
;; 
;;         popl    %edx
;;         popl    %ecx
;;         popl    %eax
;;         addl    $4,%esp
;; 
;;         addl    $8,%esp
;;         popl    %ebp
;;         retl

;;
;; This section deals with C calling convention.
;;

(defvar *current-stack-bias* nil)
(defvar *pushed-floats* 0)

(defun call-C-function (name)
   (let ((realname (get-c-name name)))
        (xrefp realname)
        ["	call	near ptr " realname]))

(defun lisptoc (args nbargs)
  ;;	Going to C, args is not used
  (setq *pushed-floats* 0) ;; reset number of floats pushed on stack
  (cond
   ((getenv "ALIGN_STACK")
    ["	align	4"]
    ["	push	ebp"]
    ["	mov	ebp,esp"]
    ["	sub	esp,8"]
    ;;   3 push (16 - (3 * 4)) => -4) => 0xXXXXXXXC
    ["	sub	esp,4"]
    ["	push	eax"]
    ["	push	ecx"]
    ["	push	edx"])
   (t
    ;; ["	pushf"]
    ["	;; Prepare a C function call"
        (if args " with " "")
        (if args args "")
        (if args " arguments." "")]
    ["	push	eax"]
    ["	push	ebx"]
    ["	push	ecx"]
    ["	push	edx"]
    ["	push	esi"]
    ["	push	edi"]))
  ;; Now optionnaly align stack to meet OS ABI call (as with macOS).
  (when (getenv "ALIGN_STACK")
    ["	align	4"]
    (setq *current-stack-bias* 4)
    ["	sub	esp," *current-stack-bias*]))

(defun ctolisp (args nbargs)
   ;; Should use *pushed-floats* to adjust stack
   (when (use-not-retn-p)
         (let ((n 0))
              (when (> *pushed-floats* 0)
                    (setq n (* *pushed-floats* 8))
                    (setq *pushed-floats* 0))
              (when (and (numberp args) (> args 0))
                    (setq n (+ n (* args 4))))
              (when *current-stack-bias*
                    (setq n (+ n *current-stack-bias*))
                    (setq *current-stack-bias* nil))
              (when (> n 0)
                    ["	add	esp," n])))
  (cond
   ((getenv "ALIGN_STACK")
    ["	pop	edx"]
    ["	pop	ecx"]
    ["	pop	eax"]
    ["	add	esp,4"]
    ;;
    ["	add	esp,8"]
    ["	pop	ebp"])
   (t
    ["	pop	edi"]
    ["	pop	esi"]
    ["	pop	edx"]
    ["	pop	ecx"]
    ["	pop	ebx"]
    ["	pop	eax"]))
  ["	;; We are back to Lisp!"])

;;; Execute les expressions exp dans le contexte d'un appel C.
;;; Quand ret == t, une valeur est retournee dans rwork.
;;; Tous les registres Lisp sont restores
(defmacro with-C (ret . exp)
  `(protect
      (lisptoc ,ret 0)
      ,@exp
      (ctolisp ,ret 0)))

;;;	fin des fonctions - macros

;;;
;;;  fonctions utiles pour appeler le systeme (C)
;;;

(defun systemxx1 (fctname cc?)
   ;; appelle une routine systeme avec argument chaine
   ;;                      type strg, #strg   code erreur
   ;;                            \1               cc?
   (code)
   (when (eq fctname '_corest)
         (xrefi 'SPLISP)
         (xrefi 'SPEXT)
         ["	mov	splisp,esp"]
         ["	mov	esp,spext"])
   (prepare-index-rwork \1 0)
   (with-C 1
      ["	push	dword ptr [crwork]"]  ; adresse debut reel string
      (call-C-function fctname)
      (when cc?
            ["	mov	dword ptr [crwork],eax"]))
   (when (eq fctname '_corest)
         ["	mov	esp,splisp"])
   (when cc?
         ["	mov	" 'rwork ",dword ptr [crwork]"]
         (expgenasm2 'MOV cc? 'rwork)))


(defun systemxx2 (fctname)
   ;;
   ;; fonction d'interfacage type   strg1,#strg,strg2,#strg2   code erreur
   ;;                                \1          \2                \3
   (when (pile? \1)
         (error 'systemxx2 'ERRBPA (list fctname \1 \2 \3)))
   (code)
   (with-C 2
      (prepare-index-rwork \2 0)
      ["	push	dword ptr [crwork]"]  ; adresse debut reel string
      (prepare-index-rwork \1 0)
      ["	push	dword ptr [crwork]"]  ; adresse debut reel string
      (call-C-function fctname)
      ["	mov	dword ptr [crwork],eax"])
   ["	mov	" 'rwork ",dword ptr [crwork]"]
   (expgenasm2 'MOV \3 'rwork))

(defun systema1 (fctname cc?)
   ;; appel d'une fonction C a 1 argument (32 bits)
   ;; type       arg1         cc
   ;;             \1          \2
   (code)
   (cond
         ((pile? \1)
          (expgenasm2 'MOV 'rwork \1)
          ["	mov	dword ptr [crwork]," 'rwork]
          (with-C 1
             ["	push	dword ptr [crwork]"]
             (call-C-function fctname)
             (when cc?
                   ["	mov	dword ptr [crwork],eax"]))
          (when cc?
                ["	mov	" cc? ",dword ptr [crwork]"]))
         (t
          (with-C 1
             (expgenasm1 'push \1)
             (call-C-function fctname)
             (when cc?
                   ["	mov	dword ptr [crwork],eax"]))
          (when cc?
                ["	mov	" cc? ",dword ptr [crwork]"]))))

(defun expgenbra (op etiq)
   (when etiq
         ["	" op  "	near ptr "  (get-real-name etiq)]))

(defmacro inceti ()
   ;; incremente le compteur d'etiquette propre aux macros
   `(setq mac_lab (incr mac_lab)) )

(defmacro eti ()
   ;; genere une etiquette propre aux macros
   `(catenate "mac" mac_lab) )

(defun bt2 (inf sup)
   ;; branch if True : regarde si \1 est compris entre inf et sup.
   ;;
   (when XDEBUG ["	    ;DEBUT MACRO BT2"])
   (setq *cmp-opt* ())
   (inceti)
   (cond
         ((register? inf)
          (expgenasm2 'CMP \1 inf)
          ["	jb	short l" (eti)]) ; au dessous de inf: perdu
         (t
          (expgenasm2 'CMP inf \1)
          ["	ja	short l" (eti)])) ; au dessous de inf: perdu
   (cond		             ; au dessous de sup: gagne
         (*cmp-opt*
           (expgenasm2 'CMP sup 'RWORK)
           (expgenbra 'JA \2) )
         ((register? sup)
          (expgenasm2 'CMP \1 sup)
          (expgenbra 'JB \2) )
         (t
            (expgenasm2 'CMP sup \1)
            (expgenbra 'JA \2) ) )
   ["l" (eti) ":"]
   (when XDEBUG     ["	    ;FIN MACRO BT2"]))

(defun bf2 (inf sup)
   ;; Branch if False : regarde si \1 n'est pas compris entre [inf et sup[
   ;;
   (when XDEBUG     ["	    ;DEBUT MACRO BF2"])
   (setq *cmp-opt* ())
   (cond
         ((register? inf)
          (expgenasm2 'CMP \1 inf)
          (expgenbra 'JB \2))           ; au dessous de inf: gagne
         (t
          (expgenasm2 'CMP inf \1)
          (expgenbra 'JA \2)))           ; au dessous de inf: gagne
   (cond			                   ; au dessus de sup: gagne
         (*cmp-opt*
          (expgenasm2 'CMP sup 'RWORK)
          (expgenbra 'JBE \2) )
         ((register? sup)
          (expgenasm2 'CMP \1 sup)
          (expgenbra 'JAE \2) )
         (t
          (expgenasm2 'CMP sup \1)
          (expgenbra 'JBE \2) ) )
   (when XDEBUG     ["	    ;FIN MACRO BF2"]))

(defun CNBxx (cond cond1)
   ;; \1 cond? \2 alors goto \3
   ;; comparaison sur 16 bits
   ;;
   ;; cond1 sert si les operandes ont ete echanges (le 1er etait un immmediat)
   ;;
   (expgenasm2 'CMP \1 \2 t)
   (if *danger*
        (expgenbra cond1 \3)
        (expgenbra cond \3)))

(defun code ()
   (let ((seg-name 'CODE))
        (unless (eq segment seg-name)
                (outchan *asm-chan*)
                (setq segment seg-name))))

(defun XDEFx ()
   (setq \1 (get-real-name \1))
   (with ((outchan *equ-chan*))
         (cond ((symbole? \1)
                ["	public	" (symbole? \1)])
               ((pgetvalue \1))
               ((register? \1))
               (t
                (putprop \1 fichier 'state)
                (newl *liste-xref* \1)
                ["	public	" \1 ] ))))

(defun clean_symbol ()
   (mapc #'(lambda (x)
                   (when (neq (getprop x 'state) 'register)
                         (remprop x 'state)))
         *liste-xref*)
   (setq *liste-xref* ()))

(defun xrefi (arg)
   (setq arg (get-c-name (get-real-name arg)))
   (with ((outchan *equ-chan*))
         (cond ((symbole? arg)
                (unless (and 
                             (memq (getprop (symbole? arg) 'state)
                                   (list 'register fichier))
                             ;; patch for SWPCONS [CJ]
                             (not (memq arg '(bcons bsymb))))
                        (putprop (symbole? arg) fichier 'state)
                        (newl *liste-xref* (symbole? arg))
                        (with ((outchan *dat-chan*))
                              ["	extrn	" (symbole? arg) ":dword"])))
               ((pgetvalue arg))
               ((register? arg))
               (t
                  (unless (memq (getprop arg 'state)
                                (list 'register fichier))
                          (putprop arg fichier 'state)
                          (newl *liste-xref* arg)
                          (with ((outchan *dat-chan*))
                                ["	extrn	" arg ":dword"]))))))

(defun xrefp (arg)
   (setq arg (get-real-name arg))
   (unless (memq (getprop arg 'state) (list 'register fichier))
           (putprop arg fichier 'state)
           (newl *liste-xref* arg)
           (with ((outchan *equ-chan*))
                 ["	extrn	" arg ":near"])))

(defun nxxx (incr borne)
   ; passe a l'objet suivant d'une zone et regarde si on reste dans cette zone
   (expgenasm2 'ADD \1 incr)     ; objet suivant
   (expgenasm2 'CMP borne \1)    ; encore dans la zone
   (expgenbra  'JA \2))           ; oui si borne>\1

(defun GetParm (arg size . trap?)
   ; trap? <> () => on trappe les erreurs sur RWORK
   (unless (or (neq arg 'RWORK) (register? 'RWORK))
           (with ((outchan ())
                  (inchan ()))
                 (tybeep)
                 (print "!!!!!!!!!!!!!!!!!!!!!!!! PERDU "
                        \0 " " \1 "," \2 "," \3 "," \4 "," \5 "," \6))
           ["	mov	0,0         ; perdu !!!!"])
   (cond
      ((immvalue? arg)
	(setq *immediat* t)
	(let ((n (immvalue? arg) ))
             (cond
                   ((eq n #$8000)
                    "32768")
                   ((and (fixp n) (lt n 0))
                    (catenate "(65536+" n ")"))
                   (t
                     n))))
      ((stringp arg)
       (if size
           (catenate "word ptr [" arg "]")
           (catenate "dword ptr [" arg "]")))
      ((register? arg)
       (if size
           (concat arg 'X)
           arg))
      ((pile? arg)
       (setq *memory* (add1 *memory*))
       (catenate (unless size "d")
                 "word ptr ["
                 (if *BP-set*
                     "ebp"
                     "esp")
                 (unless (and (fixp (cadr arg)) (zerop (cadr arg)))
                         (catenate "+4"
                                   (unless (and (fixp (cadr arg))
                                                (= 1  (cadr arg)))
                                           (catenate "*" (cadr arg)))))
                 "]")
      )
      ((label? arg)
       (when size
             (error 'GetParm 'ERRBPA (list \0 \1 \2 \3 \4)))
       (setq *immediat* t)
       (selectq syst
         (unix   (if (eq (car arg) '|@|)
                     (catenate "offset code:" (get-real-name (cadr arg)))
                     (catenate "offset data:" (get-real-name (cadr arg)))))
         (win32  (catenate "offset FLAT:" (get-real-name (cadr arg))))
         (win64  (catenate "offset FLAT:" (get-real-name (cadr arg))))
         (win95  (catenate "offset FLAT:" (get-real-name (cadr arg))))))
      ((symbole? arg)
       (setq *memory* (add1 *memory*))
       (catenate "dword ptr ["(symbole? arg) "]"))
      ((consp arg)
       ;; c'est forcement un indirect
       ;; SIZE etant un mot reserve par l'assembleur
       (when (eq (car arg) 'SIZE)
             (rplaca arg 'HSIZE)) ;; on le remplace par HSIZE qui ne l'est pas
       (lets ((memtmp *memory*)	;; sauve le vieux *memory*
				;; il peut etre modifie par le GetParm qui suit
              ;;
              ;; bug feature 386asm:
              ;; dword ptr [val+ offset truc] = offset truc + val
              ;; on aurait prefere dword ptr [truc+val] d'ou le petit hack
              ;; cf in string.llm3 : hssize a3,%ocheap dans makevect
              ;;
              (tmp (if (label? (cadr arg))	; hack: (val %truc) = [truc]
                       (cadadr arg)
                       (GetParm (cadr arg) ()) )))
             (setq *memory* (add1 memtmp)); met a jour *memory*
             (cond
                   ((symbolp tmp)
                    (catenate (unless size "d")
                              "word ptr ["
                              (unless (and (fixp  (getval (car arg)))
                                           (zerop (getval (car arg))))
                                      (catenate (getval (car arg)) "+"))
                              (getval tmp)
                              "]"))
                   (t
                    ;; (if size (catenate "word ptr [" (car arg) "+" tmp "]")
                    ;;     (catenate "dword ptr [" (car arg) "+" tmp "]"))
                    (when (car trap?)
                          (error 'GetParm 'errbpa (list \0 \1 \2 \3 \4)) )
                    ["	mov	" 'rwork |,| tmp]
                    (setq *rwork-used* t)
                    (catenate (unless size "d")
                              "word ptr ["
                              (unless (and (fixp  (getval (car arg)))
                                           (zerop (getval (car arg))))
                                      (catenate (getval (car arg)) "+"))
                              (getval 'rwork)
                           "]")
                    ;; (if size (catenate "word ptr [" (car arg) "+" 'rwork "]")
                    ;;     (catenate "dword ptr [" (car arg) "+" 'rwork "]"))
                    ))))

      ((vectorp arg)
       ;; [base index scale imm size]
       ;; genere size PTR [base+index*scale+imm]
       (lets ((memtmp *memory*)
              (memsav (add1 *memory*))
              (s_push ())            ; si on a pushe, il faut popper
              (tmp (GetParm (vref arg 0) ()))
              (index (vref arg 1))
              (scale (vref arg 2))
              (imm   (vref arg 3))
              (size   (vref arg 4)))
             (cond
               ((eq memtmp *memory*)
                ;;  la base n'est pas en memoire
                ;;  on reset le flag (cf index=memory)
                (setq memtmp ()))
               (t
                 ;; else
		 (setq memtmp t)
                 (when (car trap?)
                       (error 'GetParm 'errbpa (list \0 \1 \2 \3 \4)) )
                 ["	mov	" 'rwork |,| tmp]; on la met dans un registre
                 (setq *rwork-used* t)
                 (setq tmp 'RWORK)))
           (prog1
             (cond
               ((register? index)
                (catenate size
                          " ptr ["
                          (getval tmp)
                          (unless (and (fixp scale) (zerop scale))
                                  (catenate "+"
                                            (getval index)
                                            (unless (= 1 scale)
                                                    (catenate "*" scale))))
                          (unless (and (fixp imm) (zerop imm))
                                  (catenate "+" imm))
                          "]"))
               ((immvalue? index)
                (catenate
                   size
                   " ptr ["
                   (getval tmp)
                   (unless (and (fixp  (+ (* (immvalue? index) scale) imm))
                                (zerop (+ (* (immvalue? index) scale) imm)))
                     (catenate "+" (+ (* (immvalue? index) scale) imm)))
                   "]"))
               (t
                ;; l'index est en memoire
                (when (car trap?)
                  (error 'GetParm 'errbpa (list \0 \1 \2 \3 \4)) )
                (cond
                  (memtmp
                   ;; attention au RWORK
                   ["	push	edi"] ; ce sera EDI car index est tjrs <> BCONS
                   ["	mov	edi," 'rwork]	; on sauve RWORK
                   ;; on n'oublie pas de mettre a jour index si celui-ci est
                   ;; sur la pile pour tenir compte du PUSH EDI
                   (when (pile? index)
                     (rplaca (cdr index) (+ 1 (cadr index))))
                   ;; RWORK recoit l'index
                   (expgenasm2 'MOV 'RWORK index)
                   ["	lea	" 'rwork ",[edi+" 'rwork "*" scale "+" imm "]"]
                   ["	pop	edi"]
                   (setq *rwork-used* t); le laisser ici: expgenasm2 le reset !
                   (if (eqstring (string size) "byte")
                       (catenate "byte ptr [" (getval 'rwork) "]")
                       (catenate "dword ptr [" (getval 'rwork) "]")))
                  (t
                   ;; else RWORK n'est pas utilise
                   (expgenasm2 'MOV 'RWORK index)
                   (setq *rwork-used* t) ; le laisser ici: expgenasm2 le reset!
                   (catenate size
                             " ptr ["
                             (getval tmp)
                             (unless (and (fixp scale) (zerop scale))
                               (catenate "+"
                                         (getval 'rwork)
                                         (unless (= 1 scale)
                                           (catenate "*" scale))))
                             (unless (and (fixp imm) (zerop imm))
                               (catenate "+" imm))
                             "]")))))
             (setq *memory* memsav))))
      (t
       ;; cas poubelle: les variables LLM3
       (setq *memory* (add1 *memory*)) ; c'est forcement une variable
       (if size
           (catenate "word ptr [" (get-c-name (get-real-name arg)) "]")
           (catenate "dword ptr [" (get-c-name (get-real-name arg)) "]") ))))

(defun expgenasm1 (op arg . 16bit?)
   (setq *rwork-used* ())
   ["	" op "	" (GetParm arg (car 16bit?))] )

(defvar MSK31FLOAT   "80000000h")	; Masque   pour les floats 31 bits
(defvar ROT31FLOAT   1)			; Decalage pour les floats 31 bits
(defvar *rwork-used* ())
(defvar *cmp-opt*    ())

(defun expgenasm2 (op arg1 arg2 . 16bits?)
   (let ((x1)
         (wflag)
         (imm1)
         (x2) )
        (setq *memory* 0)
        (setq *immediat* ())
        (setq *rwork-used* ())
        (cond
              ;; le coin des optimisations
              ((and (eq op 'MOV)			; MOV EAX,0=XOR EAX,EAX
                    (register? arg1)
                    (eq (immvalue? arg2) 0))
               ["	xor	" arg1 |,| arg1])
              ((and (eq op 'CMP)			; CMP EAX,0=OR EAX,EAX
                    (register? arg1)
                    (eq (immvalue? arg2) 0))
               (if (car 16bits?)
                   ["	or	" (concat arg1 "x") |,| (concat arg1 "x")]
                   ["	or	" arg1 |,| arg1] ) )
              ((and (eq op 'CMP)			; CMP 0,EAX=OR EAX,EAX
                    (register? arg2)
                    (eq (immvalue? arg1) 0))
               (if (car 16bits?)
                   ["	or	" (concat arg2 "x") |,| (concat arg2 "x")]
                   ["	or	" arg2 |,| arg2] ) )
              (t
                 ; x1 recoit traduction 386 de arg1
                 (setq x1 (GetParm arg1 (car 16bits?)))
                 (setq imm1 *immediat*) ; on regarde si la dest est un imm
                 (setq wflag *rwork-used*)
                 ; pour MOVZX le 2nd operande doit etre 16 bits
                 (when (eq op 'MOVZX)
                       (setq 16bits? '(t))) ; le 2eme operande = 16 bits
                 ; on recupere la traduction 386 de arg2
                 (setq x2 (GetParm arg2 (car 16bits?) wflag))
                 ; si le premier argument est un entier on permute !
                 (when (setq *danger* imm1)
                       (setq x1 (prog1 x2 (setq x2 x1))) ) ; permute x1 et x2
                 (cond
                   ((lt *memory* 2)
                    ;; c'est tout bon (pas d'op memoire/memoire)
                    ["	" op "	" x1 |,| x2])
                   (wflag
                     ;; c'est une operation memoire/memoire: on est oblige
                     ;; d'utiliser un registre temporaire et d'operer en 2 temps
                     ;; arg1 utilise RWORK
                     ;; on va pusher et poper
                     ;; il faut donc updater en consequence arg2 si
                     ;; celui-ci est  sur la pile (& n).
                     (when (pile? arg2)
                       ;; (& n) devient (& (n + 1))
                       (rplaca (cdr arg2) (+ 1 (cadr arg2)))
                       (setq x2 (GetParm arg2 (car 16bits?))) )
                     (cond
                       ((eq op 'MOV)
                        ["	push	" x2]
                        ["	pop	" x1
                                (if (memq \0 '(MOVXSP XSPMOV)) "[+4]" "")])
                       (t
                        ;; pas le MOV
                        ["	push	edi"]
                        ["	mov	edi," x2]
                        [op "	" x1 ",edi"]
                        ["	pop	edi"])))
                   (t
                    (if (car 16bits?)
                        ["	mov	" 'rworkx |,| x2]
                        ["	mov	" 'rwork |,| x2] )
                    (setq *cmp-opt* t)    ; cf bt2 or bf2
                    (if (car 16bits?)
                        ["	" op "	" x1 |,| 'rworkx]
                        ["	" op "	" x1 |,| 'rwork])))))))


(defun expgenasmf7 (op arg)
   ;; sert a generer les instructions 387
   ;; attention arg n'est pas utiliser en tant que tel mais plutot comme cela:
   ;; QWORD PTR [arg] !!!
   ;;
   (setq *memory* 0)
   (if 31BITFLOATS
       (let ((accusingle2 (get-c-name 'accusingle2)))
            (unless (eqstring *asm-file* "ll386.asm")
                    (xrefi accusingle2))
            (macunpack32float accusingle2 arg)
            ["	" op "	dword ptr [" accusingle2 "]"])
       (let ((x (GetParm arg ()))
             (accusingle2 (get-c-name 'accusingle2)))
            (cond
                  ((eq *memory* 0)
                   ;; si l'operande est un registre
                   ["	" op "	qword ptr [" x "]"])
                  (t
                   ;; else
                   ["	mov	" 'rwork |,| x]	; sinon on passe par RWORK
                   ["	" op "	qword ptr [" 'rwork "]"])))))

(defun macunpack32float (dest source)
   (unless (equal dest source)
           (expgenasm2 'MOV dest source))
   (expgenasm2 'SHL dest ROT31FLOAT))

(defun macpack32float (dest source)
   (cond
         ((register? dest)
          (unless (equal dest source)
                  (expgenasm2 'mov dest source))
          (expgenasm2 'shr dest ROT31FLOAT)
          (expgenasm2 'or  dest MSK31FLOAT))
         (t
          (expgenasm2 'shr source ROT31FLOAT)
          (expgenasm2 'or  source MSK31FLOAT)
          (unless (equal dest source)
                  (expgenasm2 'MOV dest source)))))

(defun push-float1 (arg)
   (incr *pushed-floats*)
   (cond
         (31BITFLOATS
          (let ((accusingle (get-c-name 'accusingle1))
                (accudouble (get-c-name 'accudouble1)))
               (unless (eqstring *asm-file* "ll386.asm")
                       (xrefi accusingle)
                       (xrefi accudouble))
               (macunpack32float arg arg)
               ["	mov	" accusingle "," arg ]
               ["	fld	dword ptr [" accusingle   "]"]
               ["	fstp	qword ptr [" accudouble   "]"]
               ["	push	dword ptr [" accudouble "+4]"]
               ["	push	dword ptr [" accudouble   "]"]))
         ((register? arg)
          ["	push	[" arg "+4]"]
          ["	push	[" arg "]"])
         (t
          (expgenasm2 'MOV 'RWORK arg)
          ["	push	[" 'rwork "+4]"]
          ["	push	[" 'rwork "]"])))

(defun push-float2 (arg)
   (incr *pushed-floats*)
   (cond
         (31BITFLOATS
          (let ((accusingle (get-c-name 'accusingle2))
                (accudouble (get-c-name 'accudouble2)))
               (unless (eqstring *asm-file* "ll386.asm")
                       (xrefi accusingle)
                       (xrefi accudouble))
               (macunpack32float arg arg)
               ["	mov	" accusingle "," arg ]
               ["	fld	dword ptr [" accusingle   "]"]
               ["	fstp	qword ptr [" accudouble   "]"]
               ["	push	dword ptr [" accudouble "+4]"]
               ["	push	dword ptr [" accudouble   "]"]))
         ((register? arg)
          ["	push	[" arg "+4]"]
          ["	push	[" arg "]"])
         (t
          (expgenasm2 'MOV 'RWORK arg)
          ["	push	[" 'rwork "+4]"]
          ["	push	[" 'rwork "]"]))))

;; c-called indique si passe par fonction C lorsqu'on utilise le 387.

(defun expstorefloat (arg c-called)
  (cond
    (31BITFLOATS
     (cond
       (c-called
        (let ((accusingle2 (get-c-name 'accusingle2)))
          (unless (eqstring *asm-file* "ll386.asm")
            (xrefi accusingle2))
          ["	fstp	dword ptr [" accusingle2 "]"]
          (macpack32float arg accusingle2)))
       (t
        (setq *memory* 0)
        (getparm arg ())
        (cond
          ((eq *memory* 0)
           (let ((accusingle2 (get-c-name 'accusingle2)))
             (unless (eqstring *asm-file* "ll386.asm")
               (xrefi accusingle2))
             ["	fstp	dword ptr [" accusingle2 "]"]
             ["	fwait"]
             (macpack32float arg accusingle2)))
          (t
           ["	fstp	" (GetParm arg ())]
           ["	fwait"]
           (macpack32float arg arg))))))
    ((or (register? arg) (eq 'RWORK arg))
     ["	fstp	qword ptr [" arg "]"]
     ["	fwait"])
    (t
     (expgenasm2 'MOV 'RWORK arg)
     ["	fstp	qword ptr [" 'rwork "]"]
     ["	fwait"])))

(defun expsetfloat (arg c-called)
   (cond
         (31BITFLOATS
          (expstorefloat arg c-called))
         (t
          (alloc-float)
          (expgenasm2 'mov arg 'rwork)
          (expstorefloat 'rwork c-called))))
