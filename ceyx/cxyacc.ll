; .bp
; .NH
; IMPLEMENTATION DE CXYACC.
; .NH 2
; Structures de donne'es et utilitaires de base.
; .PP
; \fBCxyacc\fR est une tclass a` deux champs : le \fBlexical\fR, qui contient
; un objet capable de re'pondre au message \fBnext-lexres\fR, et le
; flux de sortie \fBerr-stream\fR ou` s'impriment les messages d'erreur :

(deftclass Cxyacc lexical err-stream)

; .PP
; Un analyseur lexical re'pond au message \fBnext-lexres\fR, en rendant un \fBlexres\fR,
; objet d'un lrecord ceyx a` deux champs: le champ \fBtoken\fR contenant le
; token lu (ID, STRING...), le champ \fBvalue\fR contenant la valeur lue.
; Exemple: (omakeq lexres token 'ID value 'toto)

(deflrecord lexres token value)

; Les tables de l'analyseur engendre' par cxyacc sont garde'es dans un lrecord appele'
; \fBCxyacc-tables\fR :

(deflrecord Cxyacc-tables
       cyexca cyact cypact cypgo cyr1 cyr2 cychk cydef 
       CYERRCODE CYLAST CYNPROD)

; La fonction \fBadd-token-value\fR utilise'e lors du chargement d'un analyseur
; re'alise la liaison nom du token - valeur nume'rique, en mettant cette valeur
; dans un atome ayant pour nom le token et package' sous l'analyseur :

(dmd {Cxyacc}:add-token-value (cxyacc token valeur)
   `(set (msymbol ',cxyacc ',token) ,valeur))

; Notons que le token spe'cial \fB*EOI*\fR sera toujours lie' a` 0.
; .PP
; En attendant les vrais vecteurs, voici une autre fonction qui sert au
; chargement :

(de {Cxyacc}:vector (liste)
    (let ((vec (makevector (length liste) 0)))
         (for (i 0 1 (1- (length liste)))
              (vset vec i (nextl liste)))
         vec))

; Le traitement d'erreur par de'faut :

(demethod {Cxyacc}:error (cxyacc . msgs) (err-stream)
      (sendq prin err-stream
                  "** cxyacc : " (model cxyacc) " : ")
      (while msgs
          (sendq prin err-stream
            (nextl msgs) " "))
      (sendq terpri err-stream))
          


; .NH 2
; Le moteur d'exe'cution.
; .LP
; Le lanceur :

(de {Cxyacc}:parse (cxyacc)
    (olet (Cxyacc-tables
              (cyexca cyact cypact cypgo cyr1
               cyr2 cychk cydef CYERRCODE CYNPROD CYLAST)
              (eval (msymbol (model cxyacc) '$tables)))
      (let((cystate 0)
           (cychar -1)
           (cynerrs 0)
           (cyerrflag 0)
           (CYFLAG -1000)
           (cyn 0)
           (cym 0)
           (cyj 0)
           (saved-v-stack nil)
           (v-stack nil)
           (s-stack nil)
           (cylval)
           (cyval))
       (newl s-stack cystate)
       (newl v-stack cyval)
       (tag {Cxyacc}:*end*
         ({Cxyacc}:newstate)))))

; les fonctions auxiliaires du moteur :

(de {Cxyacc}:newstate ()
   (setq cyn (vref cypact cystate))
   (if (<= cyn CYFLAG)
      ({Cxyacc}:default)
      ({Cxyacc}:nextcychar)
      (if (or (minusp (setq cyn (+ cyn cychar))) (>= cyn CYLAST)) 
         ({Cxyacc}:default)
         (setq cyn (vref cyact cyn))
         (ifn (= (vref cychk cyn) cychar)
             ({Cxyacc}:default)
             (setq cychar -1
                   cyval cylval
                   cystate cyn)
             (when (> 0 cyerrflag) 
	           (decr cyerrflag))
             (newl s-stack cystate)
             (newl v-stack cyval)
	     ({Cxyacc}:newstate)))))

(de {Cxyacc}:default ()
   (selectq (setq cyn (vref cydef cystate))
      (-2
         ({Cxyacc}:nextcychar)
         (setq cyxi 0)
         (until
             (and (= (vref cyexca cyxi) -1)
                  (= (vref cyexca (1+ cyxi)) cystate))
             (incr cyxi 2))
	 (until (or (minusp (vref cyexca (incr cyxi 2)))
                    (= (vref cyexca cyxi) cychar)))
         (when (minusp (setq cyn (vref cyexca (1+ cyxi))))
              (exit {Cxyacc}:*end* cyval)))
      (0
         (when (= cyerrflag 0)
               (sendq error cxyacc "erreur de syntaxe"))
         ({Cxyacc}:errlab))
      (t nil))
         (setq saved-v-stack v-stack)
         (let ((nbt (vref cyr2 cyn)))
             (repeat nbt (nextl s-stack))
             (repeat (1- nbt)(nextl v-stack))
             (setq cyval (car v-stack))
             (when (> nbt 0)(nextl v-stack)))
        (setq cym cyn
              cyn (vref cyr1 cyn)
              cyj (+ (vref cypgo cyn) (car s-stack) 1))
        (unless (and (< cyj CYLAST)
   	             (= (vref cychk
                                     (setq cystate (vref cyact cyj)))
                        (- cyn)))
              (setq cystate (vref cyact (vref cypgo cyn))))
        (sendq semantic-action cxyacc cym saved-v-stack)
        (newl s-stack cystate)
        (newl v-stack cyval)
        ({Cxyacc}:newstate))

(de {Cxyacc}:errlab ()
         (incr cynerrs)
	 (selectq cyerrflag
            ((0 1 2)
               (setq cyerrflag 3)
	       (until (null s-stack)
	             (setq cyn (+ (vref cypact (car s-stack))
                                  CYERRCODE))
	             (when (and (plusp cyn)
                                (< cyn CYLAST)
                                (= (vref cychk (vref cyact cyn))
                                   CYERRCODE))
                          (setq cystate (vref cyact cyn))
                          (newl s-stack cystate)
                          (newl v-stack cyval)
                          ({Cxyacc}:newstate))
                     (setq cyn (vref cypact (car s-stack)))
	             (nextl s-stack)	; pop state stack
	             (nextl v-stack))	; pop value stack
	             (exit {Cxyacc}:*end* nil))	; abort
             (3
   	        (when (zerop cychar) (exit {Cxyacc}:*end* nil))
                (setq cychar -1)
                ({Cxyacc}:newstate)); try again in same state
             (t nil)))	    		

(de {Cxyacc}:nextcychar ()
      (when (minusp cychar)
           (let ((cylexres (sendq next-lexres
                           ({Cxyacc}:lexical cxyacc))))
               (setq cychar
                     (if (eq ({lexres}:token cylexres) '{lexres}:CHAR)
                        ({lexres}:value cylexres)
                        (eval (msymbol (model cxyacc)
                                       ({lexres}:token cylexres)))))
               (setq cylval ({lexres}:value cylexres)))
           (when (minusp cychar)
                 (setq cychar 0))))

; Pour retrouver les $i :

(dmd peek-val (x)
	(selectq x
          (0 '(car saved-v-stack))
          (1 '(cadr saved-v-stack))
          (2 '(caddr saved-v-stack))
          (t `(nth ,x saved-v-stack))))

; .NH 2
; Les fonctions auxiliaires des actions se'mantiques.
; .LP
; Les analogues de YYACCEPT, YYABORT, YYERROR :

(dmd {Cxyacc}:accept (res)
   `(exit {Cxyacc}:*end* ,res))

(dmd {Cxyacc}:abort ()
   `(exit {Cxyacc}:*end*))

(dmd {Cxyacc}:create-error ()
    `({Cxyacc}:errlab))

; les analogues de yyerrok et yyclearin :

(dmd {Cxyacc}:errok ()
  '(setq cyerrflag 0))

(dmd {Cxyacc}:clearin  ()
    '(setq cychar -1))
