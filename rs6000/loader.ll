
"Le_Lisp version 15.2" " " "Le chargeur me'moire RS6000"
; .sp 2
; .SuperTitre "Le Chargeur Me'moire RS6000"
; .Auteur "Bernard & Bernard"
; .INRIA

; .Centre "****************************************************************"
; .Centre "Ce fichier est en lecture seule hors du projet ICSLA de l'INRIA"
; .Centre "****************************************************************"

; Assemble et charge pour un RS6000 une liste d'instructions LLM3
; en 1 seule passe.  Le code est non-relogeable

;;; Reste a` faire:
;;; Les litte'raux par inde'xation sur le registre de de'but de zone.
;;; Revoir le SOBGEZ

(unless (>= (version) 15.2)
        (error 'load 'erricf 'laprs6000))

(defvar #:sys-package:colon 'ldrs6000)

(defvar :31bitfloats (eq 0. 0.))

(add-feature 'loader)

;; On definit :icacheflush tres to^t car sur les machines
;; dote'es d'au moins 64 MEGAS de RAM,
;; le code de la fonction reste dans le cache DATA
;; alors qu'on en a de'ja` besoin.
;; L'execution du code suivant la definition de cette fonction suffira
;; a vider le cache DATA; :icacheflush sera donc operationnelle
;; de's sa premiere utilisation.
;; NOTE: :icacheflush sert justement a vider le cache DATA lors
;; du chargement des .lo . BK.

;; Le Bootstrap de :icacheflush
(unless (eq (typefn ':icacheflush) 'subr2)
   (let ( (pc (#:system:ccode)) )
      ;; # 14 <- begin adr
      ;; # 15 <- end adr
      ;; .icacheflush:	clcs	3,0xe		# min size line cache.
      ;; 		sf	14,3,14		# recule d'une ligne.
      ;; clfcont:	clf	14,3		# invalide une ligne.
      ;; 		cmp	0,14,15
      ;; 		blt	clfcont
      ;;		lil     14,0
      ;;		clf     14,15		# invalide le dernier.
      ;; 		l	0,0(1)		# return.
      ;; 		ai	1,1,4
      ;; 		mtlr	0
      ;;		br
      (mapc
         (lambda (n)
            (memory pc n)
            (setq pc (addadr pc 2)) )
         '(#$7C68 #$02A6 #$9461 #$FFFC
           #$7c6e #$0426 #$7dc3 #$7010 #$7c0e #$18ec #$7c0e #$7800
           #$4180 #$fff8 #$39c0 #$0000 #$7c0e #$78ec #$8001 #$0000
           #$3021 #$0004 #$7c08 #$03a6 #$4e80 #$0020) )
      (setfn ':icacheflush 'subr2 (addadr 8 (#:system:ccode)))
      (#:system:ccode pc) ))

(defmessage #:loader:ERRRLNR
  (french "Il reste des re'fe'rences locales non re'solues")
  (english "There are unresolved local references"))

(defmessage #:loader:ERRENR
  (french "Il reste des ENTRY non re'solues")
  (english "There are unresolved ENTRY points"))

(defmessage #:loader:ERRMTG
  (french "Module trop gros")
  (english "Module too long"))

(defmessage #:loader:ERRLOADER
  (french "Erreur de chargement dans: ")
  (english "Loader error in: "))

(defmessage #:loader:ERRMDU
  (french "Module de'ja` charge', rechargement du module")
  (english "Module already in use, loading again"))

;;.Section "De'finition de la machine cible"
(defmacro :f_r3 (rt ra rb op1 op2)
   `(:1long (logor ,(logshift op1 10)
                   (logor (logshift (:regval ,rt) 5) (:regval ,ra)) )
           (logor (logshift (:regval ,rb) 11)
                  ,(logshift op2 1) )))

(defmacro :f_rx3 (rt ra rb op1 op2)
   `(:1long (logor ,(logshift op1 10)
                   (logor (logshift (:regval ,rt) 5) (:regval ,ra)) )
           (logor (logshift (:regval ,rb) 6)
                  ,(logshift op2 1) )))

(defmacro :f_iiir2 (rt ra im1 im2 im3 op)
   `(:1long (logor ,(logshift op 10)
                   (logor (logshift (:regval ,rt) 5) (:regval ,ra)) )
           (logor  (logshift ,im1 11)
		   (logor (logshift ,im2 6)
                   (logshift ,im3 1) ))))

(defmacro :f_r3i2 (rt ra rb im2 im3 op)
   `(:1long (logor ,(logshift op 10)
                   (logor (logshift (:regval ,rt) 5) (:regval ,ra)) )
           (logor  (logshift (:regval ,rb) 11)
		   (logor (logshift ,im2 6)
                   (logshift ,im3 1) ))))

(defmacro :f_ir2 (rt ra im op)
   `(:1long (logor ,(logshift op 10)
                   (logor (logshift (:regval ,rt) 5) (:regval ,ra)) )
            ,im ))

(defmacro :f_ir1 (ra im op)
   `(:1long (logor ,(logshift op 10) (:regval ,ra))
            ,im ))

(defmacro :f_2ii (im1 im2)
   `(:1long ,im1 ,im2) )

(defmacro :f_r2 (rt ra op1 op2)
   `(:1long (logor ,(logshift op1 10) (:regval ,rt))
            (logor (logshift (:regval ,ra) 11) ,op2) ))

(defmacro :f_ibl (op im lk)
  `(:1long (logor ,(logshift op 10) (:hight-br ,im))
	   (logor (:low ,im) ,lk) ))

(defun :r_a     (rt ra rb) (:f_r3  rt ra rb 31 10))
(defun :r_ai    (rt ra im) (:f_ir2 rt ra im 12))
(defun :r_and   (rt ra rb) (:f_r3 ra rt rb 31 28))
(defun :r_andil (rt ra im) (:f_ir2 ra rt im 28))
;(defun :r_andiu (rt ra im) (:f_ir2 rt ra im 29))
(defun :r_b     (im      ) (:f_ibl 18 im 0))
(defun :r_beq   (lab     ) (:f_2ii #$4182 lab))
(defun :r_bge   (lab     ) (:f_2ii #$4080 lab))
(defun :r_bgt   (lab     ) (:f_2ii #$4181 lab))
(defun :r_bl    (im      ) (:f_ibl 18 im 1))
(defun :r_ble   (lab     ) (:f_2ii #$4081 lab))
(defun :r_blt   (lab     ) (:f_2ii #$4180 lab))
(defun :r_bne   (lab     ) (:f_2ii #$4082 lab))
(defun :r_br    (        ) (:f_2ii #$4E80 32))
(defun :r_brl   (        ) (:f_2ii #$4E80 33))
(defun :r_cmp   (ra rb   ) (:f_r2 ra rb 31 0))
(defun :r_cmpi  (ra im   ) (:f_ir1 ra im 11))
(defun :r_cmpl  (ra rb   ) (:f_r2 ra rb 31 64))
(defun :r_cmpli (ra im   ) (:f_ir1 ra im 10))
(defun :r_cror  (i1 i2 i3) (:f_r3 i1 i2 i3 19 449))
(defun :r_divs  (rt ra rb) (:f_r3 rt ra rb 31 363))
(defun :r_exts  (ra rs   ) (:f_ir2 rs ra 1844 31))
(defun :r_fa    (rt ra rb) (:f_r3 rt ra rb 63 21))
(defun :r_fcmpu (ra rb   ) (:f_r2 ra rb 63 0))
(defun :r_fd    (rt ra rb) (:f_r3 rt ra rb 63 18))
(defun :r_fm    (rt ra rb) (:f_rx3 rt ra rb 63 25))
(defun :r_frsp  (rt ra   ) (:f_r2  rt ra 63 24))
(defun :r_fs    (rt ra rb) (:f_r3 rt ra rb 63 20))
(defun :r_l     (rt im ra) (:f_ir2 rt ra im 32))
(defun :r_lbz   (rt im ra) (:f_ir2 rt ra im 34))
(defun :r_lbzx  (rt ra rb) (:f_r3 rt ra rb 31 87))
(defun :r_lfs   (rt im ra) (:f_ir2 rt ra im 48))
(defun :r_lfd   (rt im ra) (:f_ir2 rt ra im 50))
(defun :r_lil   (rt im   ) (:f_ir2 rt 0 im 14))
(defun :r_liu   (rt im   ) (:f_ir2 rt 0 im 15))
(defun :r_lx    (rt ra rb) (:f_r3 rt ra rb 31 23))
(defun :r_mflr  (ra      ) (:f_ir2 ra 8 678 31))
(defun :r_mfmq  (ra      ) (:f_ir2 ra 0 678 31))
(defun :r_mtlr  (ra      ) (:f_ir2 ra 8 934 31))
(defun :r_muli  (rt ra im) (:f_ir2 rt ra im 07))
(defun :r_muls  (rt ra rb) (:f_r3 rt ra rb 31 235))
(defun :r_neg   (rt ra   ) (:f_ir2 rt ra 208 31))
(defun :r_or    (rt ra rb) (:f_r3 ra rt rb 31 444))
(defun :r_oril  (ra rs im) (:f_ir2 rs ra im 24))
(defun :r_oriu  (ra rs im) (:f_ir2 rs ra im 25))
(defun :r_rlnm  (rt ra rb i1 i2) (:f_r3i2 ra rt rb i1 i2 23))
(defun :r_rlinm (rt ra im1 im2 im3) (:f_iiir2 ra rt im1 im2 im3 21))
(defun :r_sf    (rt ra rb) (:f_r3  rt ra rb 31 8))
;(defun :r_sfi   (rt ra im) (:f_ir2 rt ra im 8))
(defun :r_si    (rt ra im) (:f_ir2 rt ra (- 0 im) 12))
;(defun :r_sl    (rt ra rb) (:f_r3 ra rt rb 31 24))
(defun :r_sli   (rt ra im) (:f_r3 ra rt im 31 184))
;(defun :r_sr    (rt ra rb) (:f_r3 ra rt rb 31 536))
(defun :r_st    (rt im ra) (:f_ir2 rt ra im 36))
(defun :r_stb   (rt im ra) (:f_ir2 rt ra im 38))
(defun :r_stbx  (rt ra rb) (:f_r3 rt ra rb 31 215))
(defun :r_stfs  (rt im ra) (:f_ir2 rt ra im 52))
;(defun :r_stfd  (rt im ra) (:f_ir2 rt ra im 54))
(defun :r_stu   (rt im ra) (:f_ir2 rt ra im 37))
(defun :r_stx   (rt ra rb) (:f_r3 rt ra rb 31 151))
(defun :r_xor   (rt ra rb) (:f_r3 ra rt rb 31 316))
(defun :r_xoril (ra rs im) (:f_ir2 rs ra im 26))

;;.Section "Les registres"
(defmacro :register? (obj)
  `(and (symbolp ,obj) (:regval ,obj)) )

(defun :regval (r)
  (if (symbolp r)
      (getprop r ':regval)
    r ))

(defmacro :defregister (reg val)
  `(putprop ',reg ',val ':regval) )

(:defregister X0       0)
(:defregister SP       1)
(:defregister X1       3)
(:defregister X2       4)
(:defregister X3       5)
(:defregister X4       6)
(:defregister CP      13)
(:defregister A1      14)
(:defregister A2      15)
(:defregister A3      16)
(:defregister A4      17)
(:defregister RBFLOAT 18)
(:defregister RBVECT  19)
(:defregister RBSTRG  20)
(:defregister RNIL    21)
(:defregister NIL     21)
(:defregister RBSYMB  21)
(:defregister RBCONS  22)
(:defregister RBVAR   23)
(:defregister RADLINK 24)
(:defregister RALLINK 25)
(:defregister RAITCOUNT 26)
;(:defregister FFLOAT  27)

(:defregister F1  1) ; registres de travail pour les flottants
(:defregister F2  2)

;;.Section "Les constantes"
(defmacro :direct-access? (obj)
  `(and (symbolp ,obj) (getprop ,obj ':val)) )

(defmacro :defconstant (name val)
  `(putprop ',name ',val ':val) )

(:defconstant car   0)
(:defconstant cdr   4)
(:defconstant cval  0)
(:defconstant plist 4)
(:defconstant fval  8)
(:defconstant pkgc  12)
(:defconstant oval  16)
(:defconstant alink 20)
(:defconstant pname 28)
(:defconstant val   0)
(:defconstant typ   4)

;;.Section "Les instructions LLM3"
;;.SSection "Les fonctions d'acce`s"
;;.SSSection "Les transferts de pointeurs"
(defun :MOV (source destination)
  (if (:register? destination)
      (:load-reg source destination)
      (:movdest (:prepsrc source 'X1) destination) ))

(defun :load-reg (opsrc regdest)
  (unless (eq (:prepsrc opsrc regdest) regdest)
	  (:r_oril regdest opsrc 0) ))

;;.SSSection "Fonctions d'acce's aux cellules de liste"
(defun :CAR (op) (:MOV `(CAR ,op) op))
(defun :CDR (op) (:MOV `(CDR ,op) op))

;;.SSSection "Fonctions d'acce's dans le tas"
(defun :HPXMOV (vect ind dest)
  (let ( (n (:fix? ind)) )
    (:r_l 'X1 0 (:prepsrc vect 'X1))
    (cond
     ((and n (lt n #$1FFE))
      ;; The'oriquement le cas > #$2000 peut se faire avec un 'cau'
      ;;   pour se mettre dans la page de 64K puis un 'l', mais j'imagine
      ;;   que ce cas est improbable...
      (if (:register? dest)
	  (:r_l dest (add 8 (logshift n 2)) 'X1)
	(:r_l 'X1 (add 8 (logshift n 2)) 'X1)
	(:movdest 'X1 dest) ))
     (t (:r_ai 'X2 (:prepsrc ind 'X2) 2)
	(:r_sli 'X2 'X2 2)
	(if (:register? dest)
	    (:r_lx dest 'X1 'X2)
	  (:r_lx 'X1 'X1 'X2)
	  (:movdest 'X1 dest) )))))

(defun :HPMOVX (val vect ind)
  (let ( (n (:fix? ind)) )
    (:r_l 'X1 0 (:prepsrc vect 'X1))
    (cond
     ((and n (lt n #$1FFE))
      (:r_st (:prepsrc val 'X3) (add 8 (logshift n 2)) 'X1) )
     (t (:r_ai 'X2 (:prepsrc ind 'X2) 2)
	(:r_sli 'X2 'X2 2)
	(:r_stx (:prepsrc val 'X3) 'X1 'X2) ))))

(defun :HBXMOV (strg ind dest)
  (let ( (n (:fix? ind)) )
    (:r_l 'X1 0 (:prepsrc strg 'X1))
    (cond
     ((and n (lt n #$7FF8))
      (if (:register? dest)
	  (:r_lbz dest (add n 8) 'X1)
	(:r_lbz 'X1 (add n 8) 'X1)
	(:movdest 'X1 dest) ))
     (t (:r_ai 'X2 (:prepsrc ind 'X2) 8)
	(if (:register? dest)
	    (:r_lbzx dest 'X1 'X2)
	  (:r_lbzx 'X1 'X1 'X2)
	  (:movdest 'X1 dest) )))))

(defun :HBMOVX (val strg ind)
  (let ( (n (:fix? ind)) )
    (:r_l 'X1 0 (:prepsrc strg 'X1))
    (cond
     ((and n (lt n #$7FF8))
      (:r_stb (:prepsrc val 'X2) (add n 8) 'X1) )
     (t (:r_ai 'X2 (:prepsrc ind 'X2) 8)
	(:r_stbx (:prepsrc val 'X3) 'X1 'X2) ))))

(defun :HGSIZE (op dest)
  (:r_l 'X1 0 (:prepsrc op 'X1))
  (if (:register? dest)
      (:r_l dest 4 'X1)
    (:r_l 'X1 4 'X1)
    (:movdest 'X1 dest) ))

;;.SSection "Les comparaisons et tests de type"
(defun :cmprel (cmp lab)
  (let ( (lab (:get-relative-label-value 'BB lab)) )
    (selectq cmp (eq (:r_beq lab))
	     (ne (:r_bne lab))
	     (ge (:r_bge lab))
	     (gt (:r_bgt lab))
	     (le (:r_ble lab))
	     (lt (:r_blt lab)) )))

(defun :rev-op-cmp (cmp)
  (selectq cmp (ge 'le) (gt 'lt) (le 'ge) (lt 'gt) (t cmp)) )

(defun :compare-and-branch (op1 cmp op2 label)
  (let ( (n1 (:fix? op1)) (n2 (:fix? op2)) )
    (cond
     (n1 (:r_cmpli (:prepsrc op2 'X1) n1)
	 (:cmprel (:rev-op-cmp cmp) label) )
     (n2 (:r_cmpli (:prepsrc op1 'X1) n2)
	 (:cmprel cmp label) )
     (t  (:r_cmpl
	  (:prepsrc op1 'X1)
	  (:prepsrc op2 'X2))
	 (:cmprel cmp label) ))))

(defun :compare-signed-and-branch (op1 cmp op2 label)
;;; modif a propager dans macrs6000 !!!
  (let ( (n2 (:fix? op2)) )
    (cond
     (n2 (:r_cmpi (:prepsrc op1 'X1) n2)
	 (:cmprel cmp label) )
     (t  (:r_cmp (:prepsrc op1 'X1) (:prepsrc op2 'X2))
	 (:cmprel cmp label) ))))

(defun :bt2xx (arg btype etype label)
  (let ( (cont (:genlab)) (arg (:prepsrc arg 'X3)) )
    (:compare-and-branch arg 'lt btype cont)
    (:compare-and-branch arg 'lt etype label)
    (:new-label cont) ))

(defun :bf2xx (arg btype etype label)
  (let ( (arg (:prepsrc arg 'X3)) )
    (:compare-and-branch arg 'lt btype label)
    (:compare-and-branch arg 'ge etype label) ))

;;.SSSection "Les comparaisons de pointeurs"
(defun :CABEQ (op1 op2 lab) (:compare-and-branch op1 'eq op2 lab))
(defun :CABNE (op1 op2 lab) (:compare-and-branch op1 'ne op2 lab))

;;.SSSection "Les tests de type"
(defun :BTNIL   (op lab) (:compare-and-branch op 'eq 'RNIL lab))
(defun :BFNIL   (op lab) (:compare-and-branch op 'ne 'RNIL lab))
(defun :BTCONS  (op lab) (:compare-signed-and-branch op 'ge 'RBCONS lab))
(defun :BFCONS  (op lab) (:compare-signed-and-branch op 'lt 'RBCONS lab))
(defun :BTFIX   (op lab) (:compare-and-branch op 'lt 'RBFLOAT lab))
(defun :BFFIX   (op lab) (:compare-and-branch op 'ge 'RBFLOAT lab))
(defun :BTFLOAT (op lab)
  (if :31bitfloats
      (:compare-signed-and-branch op 'lt ''0 lab)
    (:bt2xx op 'RBFLOAT 'RBVECT lab)))
(defun :BFFLOAT (op lab)
  (if :31bitfloats
      (:compare-signed-and-branch op 'ge ''0 lab)
    (:bf2xx op 'RBFLOAT 'RBVECT lab)))

(defun :BTVECT  (op lab) (:bt2xx op 'RBVECT 'RBSTRG lab))
(defun :BFVECT  (op lab) (:bf2xx op 'RBVECT 'RBSTRG lab))
(defun :BTSTRG  (op lab) (:bt2xx op 'RBSTRG 'RBSYMB lab))
(defun :BFSTRG  (op lab) (:bf2xx op 'RBSTRG 'RBSYMB lab))
(defun :BTSYMB  (op lab) (:bt2xx op 'RBSYMB 'RBCONS lab))
(defun :BFSYMB  (op lab) (:bf2xx op 'RBSYMB 'RBCONS lab))
(defun :BTVAR   (op lab) (:bt2xx op 'RBVAR  'RBCONS lab))
(defun :BFVAR   (op lab) (:bf2xx op 'RBVAR  'RBCONS lab))

;;.SSSectin "Les comparaisons entie`res"
(defun :compare-num-and-branch (op1 cmp op2 label)
  (let ( (n1 (:fix? op1)) (n2 (:fix? op2)) )
    (cond
     (n1 (:r_exts 'X1 (:prepsrc op2 'X1))
	 (:r_cmpi 'X1 n1)
	 (:cmprel (:rev-op-cmp cmp) label) )
     (n2 (:r_exts 'X1 (:prepsrc op1 'X1))
	 (:r_cmpi 'X1 n2)
	 (:cmprel cmp label) )
     (t  (:r_exts 'X1 (:prepsrc op1 'X1))
	 (:r_exts 'X2 (:prepsrc op2 'X2))
	 (:r_cmp 'X1 'X2)
	 (:cmprel cmp label) ))))

(defun :CNBEQ (op1 op2 lab) (:compare-and-branch op1 'eq op2 lab))
(defun :CNBNE (op1 op2 lab) (:compare-and-branch op1 'ne op2 lab))
(defun :CNBLT (op1 op2 lab) (:compare-num-and-branch op1 'lt op2 lab))
(defun :CNBLE (op1 op2 lab) (:compare-num-and-branch op1 'le op2 lab))
(defun :CNBGT (op1 op2 lab) (:compare-num-and-branch op1 'gt op2 lab))
(defun :CNBGE (op1 op2 lab) (:compare-num-and-branch op1 'ge op2 lab))

;;.SSSection "Les comparaisons flottantes"
(defun :rol-float (op dest)
  ;; On suppose 'op' est un registre flottant.
  (cond (:31bitfloats
	 (:r_frsp op op)    ; stfs ne le transforme pas en float !!!!
	 (:r_stfs op 0 'CP)
	 (:r_l 'X1 0 'CP)
	 (:r_rlinm 'X1 'X1 31 1 31)
	 (if (:register? dest)
	     (:r_oriu dest 'X1 #$8000)
	     (:r_oriu 'X1 'X1 #$8000)
	     (:movdest 'X1 dest)))
	(t (print "error"))))
;	 (if (not (:register? dest))
;	     (:r_stfd op 0 (:prepsrc dest 'X3))
;	   (let ( (nogc (:genlab)) (dreg (if (:register? dest) dest 'X3)))
;	     (:load-reg 'FFLOAT dreg)
;	     (:compare-and-branch dreg 'ne '(QUOTE 0) nogc)
;	     (:JCALL 'GCFLOAT)
;	     (:load-reg 'FFLOAT dreg)
;           (:new-label nogc)
;	     (:r_l 'X1 0 dreg)
;	     (:movdest 'X1 'FFLOAT)
;	     (:r_stfd op 0 dreg)
;	     (unless (eq dreg dest) (:movdest dreg dest)))))))

(defun :unrol-float (op dest)
  ;; On suppose que 'dest' est un registre flottant.
  (cond (:31bitfloats
	 (if (:register? op)
	     (:r_a 'X1 op op)
	     (:r_a 'X1 (:prepsrc op 'X1) 'X1) )
	 (:r_stu 'X1 0 'CP)
	 (:r_lfs dest 0 'CP))
	(t
	 (:r_lfd dest 0 (:prepsrc op 'X1)))))

(defun :compare-float-and-branch (op1 cmp op2 lab)
  (:unrol-float op1 'F1)
  (:unrol-float op2 'F2)
  (:r_fcmpu 'F1 'F2)
  (:cmprel cmp lab) )

(defun :CFBEQ (op1 op2 lab) (:compare-float-and-branch op1 'eq op2 lab))
(defun :CFBNE (op1 op2 lab) (:compare-float-and-branch op1 'ne op2 lab))
(defun :CFBGT (op1 op2 lab) (:compare-float-and-branch op1 'gt op2 lab))
(defun :CFBGE (op1 op2 lab) (:compare-float-and-branch op1 'ge op2 lab))
(defun :CFBLT (op1 op2 lab) (:compare-float-and-branch op1 'lt op2 lab))
(defun :CFBLE (op1 op2 lab) (:compare-float-and-branch op1 'le op2 lab))

;;.SSection "Le contro^le et la pile"
;;.SSSection "Contro^le"
(defun :BRA (lab)
  (let ( (lab (:get-relative-label-value 'B lab)) )
    (:r_b lab) ))

(defun :JMP (lab)
  (:BRI `(FVALQ ,lab)) )

(defun :BRI (op)
  (:r_mtlr (:prepsrc op 'X3))
  (:r_br) )

(defun :BRX (tab ind)
  (let ( (label (:genlab)) ad )
    (let ( (val (:get-label-value 'LAB label)) )
      (:r_liu  'X2     (if (fixp val) 0   (car val)))
      (:r_oril 'X2 'X2 (if (fixp val) val (cdr val))) )
    (:r_sli 'X1 (:prepsrc ind 'X1) 2)
    (:r_a 'X1 'X1 'X2)
    (:r_l 'X0 0 'X1)
    (:r_mtlr 'X0)
    (:r_br)
    (:new-label label)
    (while tab
      (setq ad (:get-label-value 'BRX (cadr (nextl tab))))
      (if (fixp ad)
	  (:1long 0 ad)
	(:1long (car ad) (cdr ad)) ))))

(defun :SOBGEZ (n lab)
  ;; !!! Pourquoi si diffe'rent par rapport a` LLM3 !!!
  (:r_exts 'X1 (:prepsrc n 'X1))
  (:r_si 'X1 'X1 1)
  (:movdest 'X1 n)
  (:r_cmpi 'X1 0)
  (:r_bge (:get-relative-label-value 'BB lab))
  (if (:register? n)
      (:r_andil n 'X1 #$FFFF)
    (:r_andil 'X1 'X1 #$FFFF)
    (:movdest 'X1 n) ))

(defun :NOP ()
  (:r_cror #$f #$f #$f) )

;;.SSSection "Pile de contro^le"
(defun :CALL (lab)
  (:r_bl (:get-relative-call-value lab)))

(defun :JCALL (lab)
  (:MOV `(FVALQ ,lab) 'X3)
  (:r_si 'X3 'X3 8)
  (:r_mtlr 'X3)
  (:r_brl) )

(defun :RETURN ()
  (:POP 'X0)
  (:BRI 'X0) )

;;.SSSection "Pile de donne'es"
(defun :PUSH (op)
  (:r_stu (:prepsrc op 'X1) -4 'SP) )

(defun :POP (op)
  (cond
   ((:register? op)
    (:r_l op 0 'SP)
    (:r_ai 'SP 'SP 4) )
   (t (:r_l 'X1 0 'SP)
      (:r_ai 'SP 'SP 4)
      (:movdest 'X1 op) )))

(defun :ADJSTK (spindex)
  (let ( (n (:fix? spindex)) )
    (cond
     ((and n (not (ge n #$2000)) (not (le n -8192)))
      (:r_ai 'SP 'SP (mul 4 n)) )
     (t (:r_exts 'X1 (:prepsrc spindex 'X1))
	;; !! Ce shift n'est pas arithme'tique.
	(:r_sli 'X1 'X1 2)
	(:r_a 'SP 'SP 'X1) ))))

(defun :STACK (op)
  (:movdest 'SP op) )

(defun :SSTACK (op)
  (:load-reg op 'SP) )

(defun :MOVXSP (op spindex)
  (let ( (n (:fix? spindex)) )
    (cond
     ((and n (not (ge n #$2000)) (not (le n -8192)))
      (:r_st (:prepsrc op 'X1) (mul 4 n) 'SP) )
     (t (:r_sli 'X3 (:prepsrc spindex 'X1) 2)
	(:r_stx (:prepsrc op 'X2) 'SP 'X3) ))))

(defun :XSPMOV (spindex op)
  (let ( (n (:fix? spindex)) )
    (cond
     ((and n (not (ge n #$2000)) (not (le n -8192)))
      (:MOV `(|&| ,n) op) )
     (t (:r_sli 'X1 (:prepsrc spindex 'X1) 2)
	(if (:register? op)
	    (:r_lx op 'SP 'X1)
	  (:r_lx 'X1 'SP 'X1)
	  (:movdest 'X1 op) )))))

;;.SSection "Les entiers sur 16 bits"
;;.SSSection "Les instructions de calcul"
(defun :arithm-imm (fnt dest src n)
  (selectq fnt (add (:r_ai    dest src n))
	   (sub (:r_si    dest src n))
	   (mul (:r_muli  dest src n))
	   (and (:r_andil dest src n))
	   (or  (:r_oril  dest src n))
	   (xor (:r_xoril dest src n)) ))

(defun :arithm (fnt dest src1 src2)
  (selectq fnt (add (:r_a    dest src1 src2))
	   (sub (:r_sf   dest src1 src2))
	   (mul (:r_muls dest src1 src2))
	   (and (:r_and  dest src1 src2))
	   (or  (:r_or   dest src1 src2))
	   (xor (:r_xor  dest src1 src2)) ))

(defun :direct-arithm2 (op1 fnt op2)
  (let ( (n (:fix? op1)) )
    (if n
	(:arithm-imm fnt 'X2 (:prepsrc op2 'X2) n)
      (:arithm     fnt 'X2 (:prepsrc op1 'X1) (:prepsrc op2 'X2)) )
    (:mov-arithm-dest 'X2 op2) ))

(defun :mov-arithm-dest (reg dest)
  (if (:register? dest)
      (:r_andil dest reg #$FFFF)
    (:r_andil 'X1 reg #$FFFF)
    (:movdest 'X1 dest) ))

(defun :INCR (op)      (:direct-arithm2 ''1 'add op ))
(defun :DECR (op)      (:direct-arithm2 ''1 'sub op ))
(defun :PLUS (op1 op2) (:direct-arithm2 op1 'add op2))
(defun :DIFF (op1 op2) (:direct-arithm2 op1 'sub op2))

(defun :TIMES (op1 op2)
  (let ( (n (:fix? op1)))
    (unless n (:r_exts 'X1 (:prepsrc op1 'X1)))
    (:r_exts 'X2 (:prepsrc op2 'X2))
    (if n
	(:arithm-imm 'mul 'X2 'X2 n)
      (:arithm     'mul 'X2 'X1 'X2) )
    (:mov-arithm-dest 'X2 op2) ))

(defun :QUO (op1 op2)
  (:r_exts 'X1 (:prepsrc op1 'X1))
  (:r_exts 'X2 (:prepsrc op2 'X2))
  (:r_divs 'X1 'X2 'X1)
  (:mov-arithm-dest 'X1 op2) )

(defun :REM (op1 op2)
  (:r_exts 'X1 (:prepsrc op1 'X1))
  (:r_exts 'X2 (:prepsrc op2 'X2))
  (:r_divs 'X1 'X2 'X1)
  (:r_mfmq 'X1)
  (:mov-arithm-dest 'X1 op2) )

(defun :NEGATE (op)
  (:r_exts 'X1 (:prepsrc op 'X1))
  (:r_neg 'X1 'X1)
  (:mov-arithm-dest 'X1 op) )

;;.SSSection "Les instructions logiques"
(defun :logop (op1 fnt op2)
  (let ( (n (:fix? op1)) (r2 (:prepsrc op2 'X2)) )
    (if n
	(:arithm-imm fnt r2 r2 n)
      (:arithm     fnt r2 (:prepsrc op1 'X1) r2) )
    (unless (eq r2 op2) (:movdest r2 op2)) ))

(defun :LAND (op1 op2) (:logop op1 'and op2))
(defun :LOR  (op1 op2) (:logop op1 'or  op2 ))
(defun :LXOR (op1 op2) (:logop op1 'xor op2))

(defun :LSHIFT (nshift op)
  (let ( (n (:fix? nshift)) )
    (if n
	(if (:register? op)
            (:r_rlinm op op (logand n #$1F) 16 31)
	  (:r_rlinm 'X2 (:prepsrc op 'X2) (logand n #$1F) 16 31)
	  (:movdest 'X2 op) )
      (:r_andil 'X1 (:prepsrc nshift 'X1) #$1F)
      (if (:register? op)
	  (:r_rlnm op op 'X1 16 31)
	(:r_rlnm 'X2 (:prepsrc op 'X2) 'X1 16 31)
	(:movdest 'X2 op) ))))

;;.SSection "Les nombres flottants"
(defun :generatecall2subr (op1 fnt op2)
  (let ((ret (:genlab)))
    (:PUSH op2)
    (:PUSH `(|@| ,ret))
    (when (and (consp op1) (eq (car op1) '|&|))
	  (setq op1 `(|&| ,(add 2 (cadr op1)))))
    (:PUSH op1)
    (:JMP fnt)
    (:new-label ret)
    (:POP op2)
    ))

(defun :arith-float (op1 fnt op2)
  (cond (:31bitfloats
       (:unrol-float op1 'F1)
       (:unrol-float op2 'F2)
       (selectq fnt (fadd (:r_fa 'F1 'F2 'F1))
		    (fsub (:r_fs 'F1 'F2 'F1))
		    (fdiv (:r_fd 'F1 'F2 'F1))
		    (fmul (:r_fm 'F1 'F2 'F1)) )
       (:rol-float 'F1 op2) )
	(t (let (( fnt (symbol 'llcp fnt)))
	   (:generatecall2subr op1 fnt op2)))))

(defun :FPLUS  (op1 op2) (:arith-float op1 'fadd op2))
(defun :FDIFF  (op1 op2) (:arith-float op1 'fsub op2))
(defun :FQUO   (op1 op2) (:arith-float op1 'fdiv op2))
(defun :FTIMES (op1 op2) (:arith-float op1 'fmul op2))

;;.SSection "Les pseudos-Instructions de LLM3"
(defun :TITLE (nom)
   (setq :module nom) )

(defun :FENTRY (nom type)
   ;;; enle`ve les indicateurs (a` ve'rifier ?!?!?)
   ;; Fait le push de l'adresse de retour contenue dans le Link Register.
   (:r_mflr 'X3)
   (:r_stu 'X3 -4 'SP)
   (remprop nom '#:system:loaded-from-file)
   (if #:ld:special-case-loader
      (newl #:ld:special-case-loader (list nom type (copylist :PCcurrent)))
      (remprop nom '#:llcp:ftype)
      (remprop nom '#:llcp:fval)
      (setfn nom type :PCcurrent) )
  (:new-label nom) )

(defun :ENTRY (nom)
   (unless (eq (caar :labels) nom)
      ;; Il n'y a pas de FENTRY juste au dessus.
      (:r_mflr 'X0)
      (:r_stu 'X0 -4 'SP)
      (:new-label nom) ))

(defun :LOCAL (nom)
   (:declare-label nom) )

(defun :ENDL ()
   (:end-local-label) )

(defun :END ()
   (when #:ld:special-case-loader
      (while (and (consp #:ld:special-case-loader)
                  (consp (car #:ld:special-case-loader)) )
         (apply 'setfn (nextl #:ld:special-case-loader)) ))
   (:clean-llitt)
   (:end-global-label) )

(defun :ABORT ())

(defun :EVAL (forme)
   (catcherror t (eval forme)) )

;;.Section "Traitement des ope'randes"
(defun :fix? (n)
   (if (and (consp n) (eq (car n) 'QUOTE))
      (let ( (val (cadr n)) )
         (if (fixp val)
            val
            () ))
      () ))

(defun :prepsrc (op reg)
   (cond
      ((eq op 'nil)
           ;; ope'rande nil
       'RNIL)
      ((:register? op)
         ;; Le seul cas ou` l'on ne ge'ne`re pas de code.
         op )
      ((symbolp op)
         ;; Un mot me'moire.
         (cond
	    ((eq op 'DLINK  ) (:r_l reg 0 'RADLINK))
	    ((eq op 'LLINK  ) (:r_l reg 0 'RALLINK))
	    ((eq op 'ITCOUNT) (:r_l reg 0 'RAITCOUNT))
            ((memq op '(CBINDN TAG LOCK PROT))
               (let ( (adr (symeval (symbol 'llcp op))) )
                  (:r_liu reg (car adr))
                  (:r_oril reg reg (cdr adr)) ))
            (t ;; ne doit jamais arriver pour le compilo
               ;; sauf en cas de nouvelles de'finitions.
               (let ( (f (getfn1 'ld-dir op)) )
                  (if f (funcall f op)
		    (:error ":PREPSRC" "Bad operand1" op)) )))
         reg )
      ((not (consp op))
         ;; Un entier, un flottant, une chai^ne ou un vecteur.
         (:error ":PREPSRC" "Bad operand2" op) )
      (t (let* ( (access (car op)) (op (cadr op)) n )
            (cond
               ((setq n (:direct-access? access))
                  ;; Acce's indirect inde'xe'.
                  (:r_l reg n op) )
               ((eq access 'QUOTE)
                  (:load-litt op reg) )
               ((eq access 'CVALQ)
                  (:load-litt op reg)
		  (:r_l reg 0 reg))
               ((eq access 'FVALQ)
                  (:load-litt op reg)
                  (:r_l reg (:direct-access? 'fval) reg) )
               ((eq access '&)
                  (:r_l reg (mul 4 op) 'SP) )
               ((eq access '@)
                  (let ( (val (:get-label-value 'LAB op)) )
                     (:r_liu  reg (if (fixp val) 0   (car val)))
                     (:r_oril reg reg (if (fixp val) val (cdr val))) ))
               ((eq access 'EVAL)
                  (:prepsrc (eval op) reg) )
               (t (:error ":PREPSRC" "Bad operand3" op)) )
            reg ))))

(defun :movdest (regsrc opdest)
   (cond
      ((:register? opdest)
         (:r_oril opdest regsrc 0) )
      ((symbolp opdest)
         ;; Un mot me'moire.
         (cond
 	    ((eq opdest 'DLINK  ) (:r_st regsrc 0 'RADLINK))
	    ((eq opdest 'LLINK  ) (:r_st regsrc 0 'RALLINK))
	    ((eq opdest 'ITCOUNT) (:r_st regsrc 0 'RAITCOUNT))
            (t (:error ":MOVDEST" "Bad operand4" opdest)) ))
      ((not (consp opdest))
         ;; Un entier, un flottant, une chai^ne ou un vecteur.
         (:error ':movdest "Bad operand5" opdest) )
      (t (let* ( (access (car opdest)) (op (cadr opdest)) n )
            (cond
               ((setq n (:direct-access? access))
                  ;; Acce's indirect inde'xe'.
                  (:r_st regsrc n op) )
               ((eq access 'CVALQ)
                  (:load-litt op 'X3)
                  (:r_st regsrc 0 'X3) )
               ((eq access '&)
                  (:r_st regsrc (mul 4 op) 'SP) )
               ((eq access 'EVAL)
                  (:movdest regsrc (eval op)) )
               (t (:error ":MOVDEST" "Bad operand6" op)) )))))

(defun :load-litt (obj reg)
   (cond
      ((null obj)
         (:r_oril reg 'RNIL 0) )
      ((fixp obj)
         (if (ge obj 0)
            ;; Un entier sur 15 bits.
            (:r_lil reg obj)
            ;; Un nombre n'egatif.
            (:r_liu reg 1)
            (:r_ai reg reg obj) ))
      ((floatp obj)
         ;!!!
         (if  :31bitfloats
	      (:load-litt32 obj reg 0 0)
	      (:load-litt32 obj reg 'RBFLOAT 'RBVECT)
	      (:add-litt obj)))
      ((vectorp obj)
         (:add-litt obj)
         (:load-litt32 obj reg 'RBVECT 'RBSTRG) )
      ((stringp obj)
         (:add-litt obj)
         (:load-litt32 obj reg 'RBSTRG 'RBSYMB) )
      ((symbolp obj)
         (:add-litt obj)
         (:load-litt32 obj reg 'RBSYMB 'RBCONS) )
      ((consp obj)
         ;; Pas de STOP AND COPY!!
         (:add-litt obj)
         (:load-litt32 obj reg 'RBCONS ()) )
      (t (:error ":LOAD-LITT" "Bad litteral" obj)) ))

(defun :add-litt (obj)
    ; rajoute un litte'ral a` la table des litte'raux :saved-by-loader
    (cond ((memq obj :saved-by-loader))
          (t (newl :saved-by-loader obj))))

(defun :load-litt32 (obj reg breg ereg)
   ;; On peut optimiser en cherchant des de'placement par rapport
   ;;   aux de'buts de zones.
   (let ( (ad (loc obj)) )
      (:r_liu  reg (car ad))
      (:r_oril reg reg (cdr ad)) ))

(defun :clean-llitt ()
     ; nettoie et sauve la table des litte'raux :saved-by-loader
     ; dans :global-saved-by-loader sous forme d'un vecteur si
     ; si il n'y a pas eu de TITLE dans :module sinon.
     ; ne doit e^tre fait qu'au END.
     (let ((l :saved-by-loader)
           (i -1)
           v)
          (while l
                 (if (and (symbolp (car l))
                          (or (boundp (car l))
                              (typefn (car l))))
                     (setq :saved-by-loader
                           (delq (nextl l) :saved-by-loader))
                    (nextl l)))
         (when (gt (length :saved-by-loader) 0)
                  (setq v (makevector (length :saved-by-loader) ()))
                  (while :saved-by-loader
                         (vset v (setq i (add i 1)) (nextl :saved-by-loader)))
                  (if :module
		      (progn
			(when (get :module ':saved-by-loader)
                              (printerror 'loader
                                          '#:loader:ERRMDU
                                          :module))
			(putprop :module v ':saved-by-loader))
                      (newl :global-saved-by-loader v)))
         (setq :module ()) ))

;;.Section "Traitements des e'tiquettes"
(defvar :labels (if (boundp ':labels) :labels ()))
(defvar :labels-not-resolved
  (if (boundp ':labels-not-resolved) :labels-not-resolved ()))
(defvar :local-symb-labels
  (if (boundp ':local-symb-labels) :local-symb-labels ()))

(defvar :gen 0)
(defun :genlab ()
   (setq :gen (sub1 :gen)))

(defun :declare-label (name)
   (newl :local-symb-labels name) )

(defun :new-label (name)
   (let ( (slot (assq name :labels-not-resolved)) fn-adr )
      (newl :labels (cons name (copylist :PCcurrent)))
      (setq :labels-not-resolved (delete slot :labels-not-resolved))
      (setq slot (cdr slot))
      (while slot
         (setq fn-adr (nextl slot))
         (selectq (nextl fn-adr)
            (BB     (:solve-bb   fn-adr))
            (B      (:solve-b    fn-adr))
            (CALL   (:solve-call fn-adr))
            (LAB    (:solve-lab  fn-adr))
            (BRX    (:solve-brx  fn-adr)) ))))

(defun :solve-bb (adr)
   (let ( (depl (subadr :PCcurrent adr)) )
      (when (consp depl)
         (:error ":SOLVE-BB" '#:loader:ERRMTG depl) )
      (memory (addadr adr 2) depl) ))

(defun :hight (adr)
   (if (consp adr) (car adr) 0) )

(defun :hight-br (adr)
   ;; Tester le debordement !!!
   (cond
      ((consp adr) (logand (car adr) #$3FF))
      ((lt adr 0) #$3FF)
      (t 0) ))

(defun :low (adr)
   (if (consp adr) (cdr adr) adr) )

(defun :solve-b (adr)
   (let ( (hight (memory adr))
          (low (memory (addadr adr 2)))
          (depl (subadr :PCcurrent adr)) )
      (memory         adr    (logor hight (:hight-br depl)))
      (memory (addadr adr 2) (logor low   (:low   depl))) ))

(defun :solve-call (adr)
   (let ( (hight (memory adr))
          (low (memory (addadr adr 2)))
          (depl (subadr (subadr :PCcurrent adr) 8)) )
      (memory         adr    (logor hight (:hight-br depl)))
      (memory (addadr adr 2) (logor low   (:low   depl))) ))

(defun :solve-lab (adr)
   (memory (addadr adr 2) (:hight :PCcurrent))
   (memory (addadr adr 6) (:low   :PCCurrent)) )

(defun :solve-brx (adr)
   (memory         adr    (:hight :PCcurrent))
   (memory (addadr adr 2) (:low   :PCcurrent)) )

(defun :label-not-resolved (name solvefn)
   (let ( (slot (assq name :labels-not-resolved))
          (val (cons solvefn (copylist :PCcurrent))) )
      (if slot
         (rplacd slot (cons val (cdr slot)))
         (newl :labels-not-resolved (list name val)) )))

(defun :get-label-value (solvefn lab)
   (let ( (adr (cassq lab :labels)) )
      (if adr
         adr
         (:label-not-resolved lab solvefn)
         0 )))

(defun :get-relative-label-value (solvefn lab)
   (let ( (adr (cassq lab :labels)) )
      (if adr
         (subadr adr :PCcurrent)
         (:label-not-resolved lab solvefn)
         0 )))

(defun :get-relative-call-value (lab)
   (let ( (adr (cassq lab :labels)) )
      (if adr
         (subadr (subadr adr :PCcurrent) 8)
         (:label-not-resolved lab 'CALL)
         0 )))

(defun :end-local-label ()
   (let ( (l :labels) nm l1 l2 )
      (while (or (fixp (setq nm (caar l))) (memq nm :local-symb-labels))
         (setq l (cdr l)) )
      (setq :labels l l1 l l2 (cdr l))
      (while l2
         (ifn (or (fixp (setq nm (caar l2))) (memq nm :local-symb-labels))
            (setq l1 l2 l2 (cdr l2))
            (rplacd l1 (setq l2 (cdr l2))) ))
      (setq l :labels-not-resolved)
      (while (or (fixp (setq nm (caar l))) (memq nm :local-symb-labels))
         (:error "ENDL" '#:loader:ERRRLNR (car l))
         (setq l (cdr l)) )
      (setq :labels-not-resolved l l1 l l2 (cdr l))
      (while l2
         (ifn (or (fixp (setq nm (caar l2))) (memq nm :local-symb-labels))
            (setq l1 l2 l2 (cdr l2))
            (:error "ENDL" '#:loader:ERRRLNR (car l))
            (rplacd l1 (setq l2 (cdr l2))) ))
      (setq :local-symb-labels ()) ))

(defun :end-global-label ()
   (setq :labels ())
   (when :labels-not-resolved
      (:error "END" '#:loader:ERRENR :labels-not-resolved)
      (setq :labels-not-resolved ()) ))

;;.Section "Fonctions de chargement me'moire"
(defun :1long (n1 n2)
   (:1word n1)
   (:1word n2) )

(defun :1word (n)
    (when :talkp
          (when (> :nwl 5)
                (setq :nwl 0)
                (terpri)
                (outpos 30)
                (:prinhexl :PCcurrent)
                (prin "  "))
          (incr :nwl)
          (prin " ")
          (:prinhex n))
    (if (gtadr :PCcurrent :Ecode)
	(error 'loader 'ERRFCOD ())
      (memory :PCcurrent n)
      (setq :PCcurrent (incradr :PCcurrent 2))))

(defun :prinhexl (n)
   ; imprime sur 8 chiffres hexa l'adresse n.
   (cond
      ((consp n)
          (:prinhex (car n))
          (:prinhex (cdr n)) )
      ((fixp n)
          (:prinhex 0)
          (:prinhex n) )
      (t (:error ':prinhexl 'ERRNDA n)) ))

(defun :prinhex (n)
    ; imprime sur 4 chiffres hexa le nb n.
    (unless (fixp n) (error ':prinhex 'ERRNIA n))
    (:prinhexb (logand (logshift n -8) #$FF))
    (:prinhexb (logand n #$FF)) )

(de :prinhexb (n)
    ; imprime sur 2 chiffres hexa le nb n
    (cond ((not (fixp n)) (error ':prinhexb 'ERRNIA n))
          ((< n 0) (setq n 255))
          ((< n 16) (princn #/0)))
    (with ((obase 16)) (prin n)))

;;.Section "Fonctions principales"
(defun :error (fct msg op)
   (setq :labels ())
   (setq :labels-not-resolved ())
   (setq :local-symb-labels ())
   (printerror 'loader '#:loader:ERRLOADER fct)
   (error fct msg op) )

(defun :ins (obj)
   ;; Tri des e'tiquettes et des instructions.
    (when :talkp
          (terpri)
          (if (consp obj) (outpos 4))
          (prin obj)
          (when (>= (outpos) 30) (terpri))
          (outpos 30)
          (:prinhexl :PCcurrent)
          (prin "  "))
   (cond
      ((null obj) obj)
      ((consp obj) (:machins (cadr obj) (cddr obj) (car obj)))
      (t           (:new-label obj)) ))

(defun :machins (op1 lop codop)
   (cond
      ;; Tri effectue' sur occurence statique dans ~llobj/*.lo.
      ((eq codop 'MOV)     (:mov     op1 (car lop)           )) ; 30.69%
      ((eq codop 'PUSH)    (:push    op1                     )) ; 23.99%
      ((eq codop 'JMP)     (:jmp     op1                     )) ;  5.28%
      ((eq codop 'EVAL)    (:eval    op1                     )) ;  4.99%
      ((eq codop 'JCALL)   (:jcall   op1                     )) ;  4.35%
      ((eq codop 'ADJSTK)  (:adjstk  op1                     )) ;  4.33%
      ((eq codop 'BRA)     (:bra     op1                     )) ;  3.73%
      ((eq codop 'CALL)    (:call    op1                     )) ;  3.42%
      ((eq codop 'RETURN)  (:return                          )) ;  2.75%
      ((eq codop 'CABNE)   (:cabne   op1 (car lop) (cadr lop))) ;  2.27%
      ((eq codop 'ENTRY)   (:entry   op1                     )) ;  2.19%
      ((eq codop 'BTNIL)   (:btnil   op1 (car lop)           )) ;  1.64%
      ((eq codop 'HPXMOV)  (:hpxmov  op1 (car lop) (cadr lop))) ;  1.45%
      ((eq codop 'FENTRY)  (:fentry  op1 (car lop)           )) ;  1.13%
      ((eq codop 'POP)     (:pop     op1                     )) ;  1.06%
      ((eq codop 'PLUS)    (:plus    op1 (car lop)           )) ;  0.89%
      ((eq codop 'BFNIL)   (:bfnil   op1 (car lop)           )) ;  0.86%
      ((eq codop 'CABEQ)   (:cabeq   op1 (car lop) (cadr lop))) ;  0.64%
      ((eq codop 'BFCONS)  (:bfcons  op1 (car lop)           )) ;  0.52%
      ((eq codop 'STACK)   (:stack   op1                     )) ;  0.50%
      ((eq codop 'HPMOVX)  (:hpmovx  op1 (car lop) (cadr lop))) ;  0.48%
      ((eq codop 'XSPMOV)  (:xspmov  op1 (car lop)           )) ;  0.38%
      ((eq codop 'DIFF)    (:diff    op1 (car lop)           )) ;  0.31%
      ((eq codop 'LOR)     (:lor     op1 (car lop)           )) ;  0.31%
      ((eq codop 'LSHIFT)  (:lshift  op1 (car lop)           )) ;  0.18%
      ((eq codop 'BFFIX)   (:bffix   op1 (car lop)           )) ;  0.16%
      ((eq codop 'CNBEQ)   (:cnbeq   op1 (car lop) (cadr lop))) ;  0.11%
      ((eq codop 'CNBLE)   (:cnble   op1 (car lop) (cadr lop))) ;  0.11%
      ((eq codop 'HBXMOV)  (:hbxmov  op1 (car lop) (cadr lop))) ;  0.11%
      ((eq codop 'CNBLT)   (:cnblt   op1 (car lop) (cadr lop))) ;  0.11%
      ((eq codop 'BFSYMB)  (:bfsymb  op1 (car lop)           )) ;  0.10%
      ((eq codop 'CNBGE)   (:cnbge   op1 (car lop) (cadr lop))) ;  0.09%
      ((eq codop 'BRI)     (:bri     op1                     )) ;  0.09%
      ((eq codop 'HGSIZE)  (:hgsize  op1 (car lop)           )) ;  0.09%
      ((eq codop 'BTCONS)  (:btcons  op1 (car lop)           )) ;  0.09%
      ((eq codop 'END)     (:end                             )) ;  0.07%
      ((eq codop 'TITLE)   (:title   op1                     )) ;  0.06%
      ((eq codop 'LAND)    (:land    op1 (car lop)           )) ;  0.06%
      ((eq codop 'TIMES)   (:times   op1 (car lop)           )) ;  0.06%
      ((eq codop 'QUO)     (:quo     op1 (car lop)           )) ;  0.05%
      ((eq codop 'CNBGT)   (:cnbgt   op1 (car lop) (cadr lop))) ;  0.04%
      ((eq codop 'SOBGEZ)  (:sobgez  op1 (car lop)           )) ;  0.04%
      ((eq codop 'HBMOVX)  (:hbmovx  op1 (car lop) (cadr lop))) ;  0.04%
      ((eq codop 'BTSYMB)  (:btsymb  op1 (car lop)           )) ;  0.03%
      ((eq codop 'BFSTRG)  (:bfstrg  op1 (car lop)           )) ;  0.02%
      ((eq codop 'BTFIX)   (:btfix   op1 (car lop)           )) ;  0.02%
      ((eq codop 'CNBNE)   (:cnbne   op1 (car lop) (cadr lop))) ;  0.02%
      ((eq codop 'BFVAR)   (:bfvar   op1 (car lop)           )) ;  0.02%
      ((eq codop 'REM)     (:rem     op1 (car lop)           )) ;  0.01%
      ((eq codop 'BFVECT)  (:bfvect  op1 (car lop)           )) ;  0.01%
      ((eq codop 'FQUO)    (:fquo    op1 (car lop)           )) ;  0.01%
      ((eq codop 'BTVAR)   (:btvar   op1 (car lop)           )) ;  0.01%
      ((eq codop 'BTSTRG)  (:btstrg  op1 (car lop)           )) ;  0.01%
      ((eq codop 'FTIMES)  (:ftimes  op1 (car lop)           )) ;  0.00%
      ((eq codop 'BFFLOAT) (:bffloat op1 (car lop)           )) ;  0.00%
      ((eq codop 'BTFLOAT) (:btfloat op1 (car lop)           )) ;  0.00%
      ((eq codop 'FPLUS)   (:fplus   op1 (car lop)           )) ;  0.00%
      ((eq codop 'FDIFF)   (:fdiff   op1 (car lop)           )) ;  0.00%
      ((eq codop 'CFBGT)   (:cfbgt   op1 (car lop) (cadr lop))) ;  0.00%
      ;; Ces instructions n'apparaissent pas dans les fichiers ~/llobj/*.lo.
      ((eq codop 'ABORT)   (:abort                           ))
      ((eq codop 'ENDL)    (:endl                            ))
      ((eq codop 'LOCAL)   (:local   op1                     ))
      ((eq codop 'CAR)     (:car     op1                     ))
      ((eq codop 'CDR)     (:cdr     op1                     ))
      ((eq codop 'BTVECT)  (:btvect  op1 (car lop)           ))
      ((eq codop 'CFBEQ)   (:cfbeq   op1 (car lop) (cadr lop)))
      ((eq codop 'CFBNE)   (:cfbne   op1 (car lop) (cadr lop)))
      ((eq codop 'CFBLT)   (:cfblt   op1 (car lop) (cadr lop)))
      ((eq codop 'CFBLE)   (:cfble   op1 (car lop) (cadr lop)))
      ((eq codop 'CFBGE)   (:cfbge   op1 (car lop) (cadr lop)))
      ((eq codop 'DECR)    (:decr    op1                     ))
      ((eq codop 'INCR)    (:incr    op1                     ))
      ((eq codop 'LXOR)    (:lxor    op1 (car lop)           ))
      ((eq codop 'NEGATE)  (:negate  op1                     ))
      ((eq codop 'BRX)     (:brx     op1 (car lop)           ))
      ((eq codop 'MOVXSP)  (:movxsp  op1 (car lop)           ))
      ((eq codop 'NOP)     (:nop                             ))
      ((eq codop 'SSTACK)  (:sstack  op1                     ))
      (t                   (:error ":MACHINS" "Bad instruction" codop)) ))

(defvar :PCcurrent (if (boundp ':PCcurrent) :PCcurrent 0))
(defvar :nwl (if (boundp ':nwl) :nwl 0))
(defvar :Ecode (if (boundp ':Ecode) :Ecode (#:system:ecode)))
(defvar :talkp  (if (boundp ':talkp) :talkp ()))
(defvar :module  (if (boundp ':module) :module ()))
(defvar :saved-by-loader  (if (boundp ':saved-by-loader) :saved-by-loader ()))
(defvar :global-saved-by-loader
     (if (boundp ':global-saved-by-loader) :global-saved-by-loader ()))
(defvar #:ld:special-case-loader
     (if (boundp '#:ld:special-case-loader) #:ld:special-case-loader ()))

(defun loader (l . talkp)
   (setq :PCcurrent (#:system:ccode))
   (setq :nwl 0)
   (setq :talkp (car talkp))
   (setq :gen 0)
   (protect
      (while l
         (:ins (nextl l)) ))
  (:ins '(ENDL))
  (when :talkp (terpri))
  (:icacheflush (vag (#:system:ccode)) (vag :PCcurrent))
  (#:system:ccode :PCcurrent) )

