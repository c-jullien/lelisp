; .bp
; .NH
; IMPLEMENTATION DE LEX-KIT.
; .NH 2
; Les structures de donne'es et constructeurs de base.
; .PP
; Comme tous les bons process pipables, une instance d'un analyseur lexical
; contient ce qu'il lui faut pour travailler dans des champs ade'quats.
; Il y a d'abord son \fBin-stream\fR, qui re'pond aux 
; messages \fBreadcn\fR et \fBpeekcn\fR :
; c'est par exemple un terminal ou un pousseur (multiplexeur) de flux.
; Il y a ensuite son \fBerr-stream\fR, flux de sortie
; pour l'e'criture des messages d'erreur :

(deftclass Lexical in-stream err-stream)

; .PP
; Comme on l'a vu dans cxyacc,
; un analyseur lexical re'pond au message \fBnext-lexres\fR, en rendant un \fBlexres\fR,
; objet d'un lrecord ceyx a` deux champs: le champ \fBtoken\fR contenant le
; token lu (ID, STRING...), le champ \fBvalue\fR contenant la valeur lue.
; Exemple : (omakeq lexres token 'ID value 'toto)
; .PP
; De fait un token est rendu en 2 fois comme nous le verrons plus loin:
; une \fBconversion\fR peut d'effectuer pour transformer par exemple
; l'identificateur de valeur begin en mot-clef begin.
; .NH 2
; De'finition d'analyseurs lexicaux.
; .PP
; La de'finition d'un lexical se fait par appel de la fonction
; \fBlex-kit\fR, qui prend comme arguments successifs le nom de l'analyseur,
; un avaleur de blancs, et
; les fonctions de reconnaissance d'unite's lexicales
; que nous verrons plus loin.
; Elle fabrique une tclass fille de Lexical et ayant pour nom
; le nom de l'analyseur donne' en argument.
; Par exemple
; pour fabriquer la classe d'analyseurs \fBlex1\fR reconnaissant
; des identificateurs, des chai^nes et des entiers, il suffit d'exe'cuter :
; .IP 5
; \s-2(lex-kit lex1 nil ID STRING NATURAL)\s0
; .PP
; Le nil en deuxie`me argument signifie que la reconnaissance des blancs est
; standard, ce qui signifie que les caracte`res BLANC, TAB, CR et LF sont
; ignore's. On peut fabriquer d'autres avaleurs de blancs a` l'aide
; du \fBkit-comment\fR de'crit plus loin. Si on veut ignorer les
; commentaires situe's entre "%" et la fin de ligne, on e'crit ainsi :
; .IP 5
; \s-2(lex-kit lex1 in-stream err-stream comment-% ID STRING NATURAL)\s0
; .LP
; .PP
; Lex-kit de'finit aussi bien su^r la se'mantique cherche'e \fBnext-lexres\fR
; du lexical, qui prend le lexical comme argument.
; On peut e'galement de'finir une se'mantique \fBerror\fR charge'e de
; s'occuper des erreurs lexicales, prenant comme arguments
; le lexical et les messages a` imprimer. Voici la se'mantique par de'faut :

(demethod {Lexical}:error (lexical . msgs) (err-stream)
   (sendq prin ({Lexical}:err-stream lexical) 
               "** erreur lexicale : " (model lexical) " : ")
   (while msgs
          (sendq prin err-stream (nextl msgs) " "))
   (sendq terpri err-stream)
   ({Cxyacc}:create-error))

; .PP
; L'appel de {Cxyacc}:create-error de'clenche une erreur syntaxique
; sans message, qui peut activer elle-me^me une re'cupe'ration par
; cxyacc.
; Il est souvent utile de rede'finir cette se'mantique pour
; indiquer au moins sur quel caracte`re la re'cupe'ration peut se faire!
; .LP
; Pour fabriquer maintenant une instance de lex1, il suffit d'exe'cuter :
; .IP 5
; \s-2(omakeq lex1 in-stream un-in-stream err-stream un-err-stream)\s0
; .NH 2
; Avaleurs de blancs.
; .PP
; Le second argument de lex-kit est toujours e'value'. S'il vaut nil, on
; avale les blancs de manie`re standard. Sinon il doit rendre le nom de la
; fonction a` appliquer au in-stream pour avaler les blancs de'sire's.
; Nous fournissons un \fBkit-comment\fR, qui prend comme arguments un
; caracte`re de de'but de commentaire, et fabrique une fonction
; qui avale les blancs et les commentaires
; commenc,ant par ce caracte`res et se terminant par CR ou LF.
; Pour '%' par exemple, cette fonction s'appelle \fB{Lexical}:comment-%\fR
; Attention: si on donne soi-me^me une fonction, il faut quoter son nom!

(dmd kit-comment (char)
    (let ((nom (msymbol 'Lexical (concat 'comment- (list char)))))
      `(de ,nom (in-stream)
          (while
            (cond
               ((memq (sendq peekcn in-stream)
                      '(#\sp #\tab #\cr #\lf))
                 (sendq readcn in-stream))
               ((eq (sendq peekcn in-stream) ,char)
                (until (eq (sendq readcn in-stream) #\cr))
                t)
               (t nil))))))))
          
; .NH 2
; Kits d'unite's lexicales
; .PP
; Une unite' lexicale \fBFOU\fR se de'finit a` l'aide d'une fonction
; \fB{lexres}:FOU\fR
; qui prend comme argument le flux d'entre'e du lexical. Cette
; fonction doit rendre nil si le token n'est pas reconnu ET NE MANGER
; AUCUN CARACTERE dans ce cas (utiliser au besoin pushcn!). Elle
; doit rendre sinon
; un lexres avec dans le champ token le nom du token reconnu
; i.e. ID, STRING ou NATURAL, et la valeur convenable dans le champ value.
; Si aucun token n'est reconnu, le lexical renvoie automatiquement
; le lexres de champ token CHAR et de champ value le code ascii du caracte`re
; lu.
; En cas d'erreur lexicale, un kit doit simlement faire :
; .IP 5
; \s-2(sendq error lexical arg1 arg2 ... argn)\s0
; .LP
; ou` les argi sont les arguments a` passer a` la fonction
; d'erreur (par de'faut {Lexical}: error) pour affichage ou traitement.
; L'analyseur lexical provoque alors une erreur syntaxique pour Cxyacc,
; que celui-ci peut re'cupe'rer de fac,on standard.
; .NH 2
; Un utilitaire pour fabriquer des pie`ces du kit.
; .PP
; Ici \fBtoken\fR est le nom du token a reconnai^tre,
; \fBdeb\fR est un pre'dicat a`
; appliquer au premier caracte`re pour de'terminer l'acceptation du token;
; les caracte`res sont accepte's tant que le pre'dicat \fBsuite\fR est vrai,
; et la fonction \fBfonction\fR est applique'e a` la liste des caracte`res lus.
; Ne produit jamais d'erreur. (cf lex-kit-bib pour des exemples
; d'utilisation.)

(dmd kit-accepte-sequence (token deb suite fonction)
     `(de ,(msymbol 'lexres token) (in-stream)
          (when (,deb (sendq peekcn in-stream))
                (let ((value (list (sendq readcn in-stream))))
                     (while (,suite (sendq peekcn in-stream))
                            (newl value (sendq readcn in-stream)))
                     (omakeq lexres token ',token
                             value (,fonction (reverse value))))))))


; .NH 2
; Le proble`me des mots-clef.
; .PP
; Les unite's lexicales reconnues jusqu'a maintenant sont tre`s
; simples, mais on a aussi besoin de certaines conversions, par exemple
; de reconnai^tre des identificateurs particuliers
; comme des mots-clef. Pour cela on peut de'finir des se'mantiques de
; conversion effectuant des traductions de lexres. Ces se'mantiques seront
; attache'es aux tokens: par exemple on veut convertir les re'sultats
; "ID begin" et "ID debut" en re'sultats "BEGIN begin" et
; "BEGIN debut" dans un pascal bilingue, et en ECRINS on transforme
; "SYMBOL ||" en "LEFT2 parallele"
; Pour cela on e'crirait :
; .DS I
; \s-2({Lexical}:add-lex-convq pascal ID begin BEGIN begin)
; ({Lexical}:add-lex-convq pascal ID debut BEGIN debut)
; ({Lexical}:add-lex-convq ecrins SYMBOL ||2LEFT1 parallele)\s0
; .DE
; .LP
; Il est parfois meilleur d'utiliser une version non quote'e si les
; arguments sont aussi calcule's par programme. On e'crit alors:
; .IP 5
; \s-2({Lexical}:add-lex-conv 'pascal 'ID 'begin 'BEGIN 'begin)\s0
; .LP
; Voici le code de add-lex-conv et add-lex-convq :

(de {Lexical}:add-lex-conv (lexical oldtoken oldvalue newtoken newvalue)
    (let ((symb (msymbol lexical oldtoken)))
         (unless (boundp symb) (set symb nil))
         (set symb 
              (acons oldvalue 
                  (omakeq lexres token newtoken value newvalue)
                  (eval symb)))
         newtoken))))

(dmd {Lexical}:add-lex-convq (lexical oldtoken oldvalue newtoken newvalue)
     `({Lexical}:add-lex-conv 
                ',lexical ',oldtoken ',oldvalue ',newtoken ',newvalue))
; .PP
; Afin de faciliter encore la de'finition des mots clefs d'un me^me token,
; on ajoute une abre'viation, dans laquelle tout est quote' sauf
; le premier argument.
; Exemple :
; .IP 5
; \s-2({Lexical}:add-lex-convs pascal ID begin BEGIN begin
;                                        debut BEGIN debut)\s0
; .LP
; Voici donc add-lex-convs :

(defmacro {Lexical}:add-lex-convs (lexical oldtoken . rest)
          (while rest
		 (eval `({Lexical}:add-lex-conv ',lexical ',oldtoken
				',(nextl rest) ',(nextl rest) ',(nextl rest))))))))

; .LP
; Voici la fonction de conversion elle-me^me :

(de {Lexical}:lex-kit-conv (lexical lexres)
    (olet (lexres (token value) lexres)
        (cond
           ((and (boundp (setq token (msymbol (model lexical) token)))
                 (setq token (assq value (eval token)))
                 (cdr token))) ; laid de prendre token, mais efficace...
           (t lexres)))))))
            
         
; .NH 2
; le code de lex_kit.

(dmd lex-kit (nom avaleur . unites-list)
   (eval
      `(deftclass ,(msymbol 'Lexical nom)))
   (eval
      `(de ,(msymbol nom 'next-lexres) (lexical)
          (let ((in-stream ({Lexical}:in-stream lexical)))
              ,(let ((avalfonc (eval avaleur)))
                  (ifn avalfonc
                     '(while (memq (sendq peekcn in-stream)
                                   '(#\sp #\tab #\cr #\lf))
                             (sendq readcn in-stream))
                      `(,avalfonc in-stream)))
              (let ((nextcn (sendq peekcn in-stream)))
                   (onexit {Lexical}:error 
                          (lambda (msgs)
                              (eval `(sendq error lexical ,.msgs)))
                      ({Lexical}:lex-kit-conv lexical
                        (cond
                          ,@(mapcar (lambda (unite)
                                             (list (list
                                                   (msymbol 'lexres unite)
                                                   'in-stream)))
                                     unites-list)
                           (t (omakeq lexres
                                      token '{lexres}:CHAR
                                      value
                                      (sendq readcn in-stream))))))))))
    (kwote nom)))))

(defmacro onexit (tag function . body)
          `(lock (lambda (tag value)
                         (cond
                             ((null tag) value)
                             ((eq tag ',tag)
                              (funcall ',function value))
                             (t 
                              (evexit tag value))))
                 ,.body))

                         
(defmacro foreach (symbol liste . body)
          `(mapc (lambda (,symbol) ,.body)
                 ,liste))


(de msymbol (x y)
     (symbol (mlink x) y)))))
