; .bp
; .NH
; LEX-KIT-BIB, UNE BIBLIOTHEQUE POUR LEX-KIT.
; .NH 2
; Quelques utilitaires :

(dmd minuscule? (x)
   `(let ((x ,x))
       (and (>= x #/a)(<= x #/z))))

(dmd majuscule? (x)
   `(let ((x ,x))
       (and (>= x #/A)(<= x #/Z))))

(dmd lettre? (x)
   `(let ((x ,x))
       (or (and (>= x #/a)(<= x #/z))
           (and (>= x #/A)(<= x #/Z))))))

(dmd chiffre? (x)
    `(let ((x ,x))
       (and (>= x #/0)(<= x #/9)))))

(dmd lettre-ou-chiffre? (x)
   `(let ((x ,x))
       (or (and (>= x #/a)(<= x #/z))
           (and (>= x #/A)(<= x #/Z))
           (and (>= x #/0)(<= x #/9)))))

(dmd lettre-ou-chiffre-ou-_? (x)
   `(let ((x ,x))
       (or (and (>= x #/a)(<= x #/z))
           (and (>= x #/A)(<= x #/Z))
           (and (>= x #/0)(<= x #/9))
           (= x #/_))))
	
(dmd lettre-ou-chiffre-ou-_-ou-prime? (x)
   `(let ((x ,x))
       (or (and (>= x #/a)(<= x #/z))
           (and (>= x #/A)(<= x #/Z))
           (and (>= x #/0)(<= x #/9))
           (= x #/_)
           (= x #/'))))

; .NH 2
; Quelques kits classiques.
; .PP
; Rappel: on fabrique ici les fonctions {lexres}:ID etc...

(kit-accepte-sequence ID lettre? lettre-ou-chiffre? concat)

(kit-accepte-sequence IDS lettre? lettre-ou-chiffre-ou-_? concat)

(kit-accepte-sequence IDSP lettre? lettre-ou-chiffre-ou-_-ou-prime? concat)

(kit-accepte-sequence NATURAL chiffre? chiffre? implode)

(de {lexres}:STRING (in-stream)
     (when (= (sendq peekcn in-stream) #/")
         (let ((value (list (sendq readcn in-stream)))
               (nextcn))
            (until (and (=(setq nextcn (sendq readcn in-stream)) #/")
                        (<> (sendq peekcn in-stream) #/"))
                   (newl value nextcn))    
            (newl value nextcn)        
            (omakeq lexres token 'STRING value (implode (nreverse value))))))

; .NH 2
; Kit pour les exposants de Meije.
; .PP
; Ils ont la forme ^54 ou ^-2. Peut declencher une erreur
; lexicale si ce qui suit ^ est mauvais.

(de {lexres}:EXPOS (in-stream)
   (when (= (sendq peekcn in-stream) #/^)
       (sendq readcn in-stream)
       (let ((value (when (= (sendq peekcn in-stream) #/-)
                        (sendq readcn in-stream) '(#/-))))
           (ifn (chiffre? (sendq peekcn in-stream)) 
                (exit {Lexical}:error (list "erreur lexicale dans un exposant"))
                (newl value (sendq readcn in-stream))
                (while (chiffre? (sendq peekcn in-stream))
                      (newl value (sendq readcn in-stream)))
                (omakeq lexres token 'EXPOS value (implode (reverse value)))))))

