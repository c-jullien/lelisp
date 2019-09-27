; .EnTete "Programmer en Ceyx" "" "Annexe V: Les Flux Line'aires"
; .Annexe V "Les Flux Line'aires"
; .Auteur "Jean-Marie Hullot"
; .i
; Ce chapitre est un exemple d'utilisation de classes auto-type'es
; c'est a` dire de types de'finis par deftclass. On y trouvera
; aussi des exemples d'utilisation de la construction defrule.
; On trouvera ici des exemples tre`s caracte'ristiques de
; l'utilisation de la construction send.
; 
; Toutes les fonctions de'crites ici sont utilisables sous Ceyx a`
; condition d'avoir charge' le fichier stream.ll de la bibliothe`que
; Ceyx, qui n'est d'ailleurs pas autre chose que ce chapitre:
; .r
; 
; .DebLL 1
; ? (ceyx-load stream)
; = stream.ll
; .FinLL
; .pp
; Le premier but suivi avec l'introduction des flux est
; la prise de contro^le sur les entre'es sorties de Lisp.
; Le principe de la manoeuvre est d'intercaler
; entre le clavier, sur lequel Le_Lisp prend son input et l'e'cran, sur
; lequel il visualise son output, autant de machines virtuelles
; interme'diaires qu'il est ne'cessaire pour de'composer le traitement
; d'une application donne'e.

(ceyx-load defrule)

; .Section "Les Flux"
; Nous de'finissons une classe ge'ne'rique \fBStream\fR
; posse'dant deux champs:
;     - \fIsource\fR, qui pointe sur un objet fournissant de l'input a` la
; stream, d'une manie`re qui reste a` de'terminer,
;     - \fIdestination\fR, qui pointe sur un objet vers lequel la stream
; dirige son output, d'un manie`re qui reste elle-aussi a` de'terminer.

(deftclass Stream
                source
                destination)

(defmake {Stream} Stream ())

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: #:Tclass:Stream\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRStream.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; Stream|()
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; class-attributes|(Vector ...)
; source|*
; destination|*
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; close|(stream)
; connect|(stream1 stream2)
; destination|obj
; open|(stream)
; source|obj
; _
; .T&
; c s
; l s.
; \fBSous Mode`le\fR
; LinearStream
; .TE
; .ps +2


; Connecter stream1 avec stream2 consiste a` faire pointer la destination
; de stream1 sur stream2 et la source de stream2 sur stream1:

(de {Stream}:connect (stream1 stream2)
    ({Stream}:destination stream1 stream2)
    ({Stream}:source stream2 stream1)
    t)

;  Les proprie'te's par de'faut d'ouverture et de fermeture de flux:

(de {Stream}:open (stream))
(de {Stream}:close (stream))

; \fBExemples:\fR
; 
; .DebLL 1
; ? (setq stream1 (Stream))
; = #(#:Tclass:Stream . #[() ()])
; ? (setq stream2 (Stream))
; = #(#:Tclass:Stream . #[() ()])
; ? (sendq connect stream1 stream2)
; = t
; ? (sendq source stream1)
; = ()
; ? (eq stream1 (sendq source stream2))
; = t
; ? (eq stream2 (sendq destination stream1))
; = t
; ? (sendq destination stream2)
; = ()
; .FinLL
; .pp
; Pour connecter temporairement une source ou une destination:

(defmacro with-source (stream source . body)
     `(let ((st ,stream))
           (let ((osource ({Stream}:source st)))
                (protect
                  (progn
                     ({Stream}:source st ,source)
                     ,@body)
                  ({Stream}:source st osource)))))

(defmacro with-destination (stream destination . body)
     `(let ((st ,stream))
           (let ((odestination ({Stream}:destination st)))
                (protect
                  (progn
                     ({Stream}:destination st ,destination)
                     ,@body)
                  ({Stream}:destination st odestination)))))


; .Section "Les Flux Line'aires"
; .SSection "De'finition"

; Jusqu'a` une pe'riode re'cente, les entre'es sorties ont essentiellement
; e'te' oriente'es caracte`res. Pour traiter ce type d'entre'es sorties
; Ceyx propose la notion de flux line'aire.

(deftclass {Stream}:LinearStream)

; Nous allons de'finir par la suite plusieurs mode`les de flux line'aires
; qui vont tous suivre une me^me ide'e de construction, l'imple'mentation
; e'tant elle particulie`re a` chaque cas. L'ide'e conductrice est la
; suivante: une \fBLinearStream\fR posse`de un buffer de stockage de dimension
; fixe ou illimite'e selon les cas et maintient sur ce buffer deux pointeurs:
; 
;     - un pointeur dit de lecture \fIinpos\fR,
;     - un pointeur dit d'e'criture \fIoutpos\fR.
; 
; Nous repre'sentons picturalement le buffer et ses deux pointeurs, dans le
; cas d'un flux de caracte`res de taille 10 par:
; 
; .ps -2
; .TS
; tab (|);
; | c | c c c c c c c c c 
;  | c | c | c | c | c | c | c | c | c | c|
; | c | c c c c c c c c c .
; W| | | | | | | | | 
; _
;  | | | | | | | | | 
; _
; R| | | | | | | | | 
; .TE
; .ps +2
; 
; ou` R de'signe le pointeur de lecture et W le pointeur d'e'criture.
; Pour e'crire un caracte`re dans ce flux, il suffit de lui envoyer le
; message \fInew\fR avec le code ascii du caracte`re comme argument.
; Ceci a  a pour effet d'introduire ce caracte`re dans le flux a` la
; position outpos et de de'caler outpos d'un cran vers la droite
; 
; .DebLL 1
; ? (sendq new stream #/a)
; = 97
; .FinLL
; .pp
; 
; .ps -2
; .TS
; tab (|);
; c | c | c c c c c c c c 
;  | c | c | c | c | c | c | c | c | c | c|
; | c | c c c c c c c c c .
;  |W| | | | | | | | 
; _
; a| | | | | | | | | 
; _
; R| | | | | | | | | 
; .TE
; .ps +2
; 
; Ecrivons un nouveau caracte`re dans ce flux:
; 
; .DebLL 1
; ? (sendq new stream #/b)
; = 98
; .FinLL
; .pp
; 
; .ps -2
; .TS
; tab (|);
; c c | c | c c c c c c c 
;  | c | c | c | c | c | c | c | c | c | c|
; | c | c c c c c c c c c .
;  | |W| | | | | | | 
; _
; a|b| | | | | | | | 
; _
; R| | | | | | | | | 
; .TE
; .ps +2
; 
; Pour lire un caracte`re dans le flux il suffit de lui envoyer le message
; \fInext\fR sans arguments. Le code ascii du caracte`re a` la place inpos
; dans le flux est alors renvoye' en valeur et le pointeur de lecture est
; avance' d'un cran:
; 
; .DebLL 1
; ? (sendq next stream)
; = 97
; .FinLL
; .pp
; 
; .ps -2
; .TS
; tab (|);
; c c | c | c c c c c c c 
;  | c | c | c | c | c | c | c | c | c | c|
; c | c | c c c c c c c c .
;  | |W| | | | | | | 
; _
; a|b| | | | | | | | 
; _
;  |R| | | | | | | | 
; .TE
; .ps +2
; 
; Un nouvel appel a` \fInext\fR nous met dans la situation:
; 
; .DebLL 1
; ? (sendq next stream)
; = 98
; .FinLL
; .pp
; .ps -2
; .TS
; tab (|);
; c c | c | c c c c c c c 
;  | c | c | c | c | c | c | c | c | c | c|
; c c | c | c c c c c c c .
;  | |W| | | | | | | 
; _
; a|b| | | | | | | | 
; _
;  | |R| | | | | | | 
; .TE
; .ps +2
; 
; Le pointeur de lecture est alors e'gal au pointeur d'e'criture.
; Nous dirons que le flux est vide, dans le sens ou il n'y a plus
; rien a` lire.
; 
; .DebLL 1
; ? (sendq null stream)
; = 2
; .FinLL
; .pp
; 
; Comme il n'y a plus rien a` lire, le flux va re'agir au message \fInext\fR
; en relayant ce message sur  sa source. Nous introduisons pour ce
; faire un second flux stream1, tel que la source de stream vaille
; stream1. Et nous e'crivons les caracte`res c et d dans ce flux:
; 
; .bp
; STREAM1
; 
; .ps -2
; .TS
; tab (|);
; c c | c | c c 
;  | c | c | c | c | c|
; | c | c c c c .
;  | |W| | 
; _
; c|d| | | 
; _
; R| | | | 
; .TE
; .ps +2
; 
; 
; STREAM
; 
; .ps -2
; .TS
; tab (|);
; c c | c | c c c c c c c 
;  | c | c | c | c | c | c | c | c | c | c|
; c c | c | c c c c c c c .
;  | |W| | | | | | | 
; _
; a|b| | | | | | | | 
; _
;  | |R| | | | | | | 
; .TE
; .ps +2
; 
; Si nous envoyons maintenant \fInext\fR a` stream, ce message est relaye'
; sur sa source stream1, et le re'sultat est e'crit dans stream puis lu.
; 
; .DebLL 1
; ? (sendq next stream)
; = 99
; .FinLL
; 
; STREAM1
; 
; .ps -2
; .TS
; tab (|);
; c c | c | c c 
;  | c | c | c | c | c|
; c | c | c c c .
;  | |W| | 
; _
; c|d| | | 
; _
;  |R| | | 
; .TE
; .ps +2
; 
; STREAM
; 
; .ps -2
; .TS
; tab (|);
; c c c | c | c c c c c c 
;  | c | c | c | c | c | c | c | c | c | c|
; c c c | c | c c c c c c .
;  | | |W| | | | | | 
; _
; a|b|c| | | | | | | 
; _
;  | | |R| | | | | | 
; .TE
; .ps +2
; 
; Une autre ope'ration inte'ressante sur les flux line'aires, consiste
; a` tranfe'rer l'information contenue dans un flux dans un autre flux.
; Cette ope'ration est re'alise'e en envoyant le message \fIbltstream\fR
; aux deux flux stream1 et stream. L'ope'ration \fIbltstream\fR est
; imple'mente'e comme une re`gle Ceyx, de manie`re que la fac/on 
; dont s'effectue le transfert de'pende a` la foix du type de
; stream et de stream1, permettant ainsi une imple'mentation
; optimale pour chaque situation du transfert. Par de'faut, le
; tranfert s'effectue au caracte`re par caracte`re.
; 
; .DebLL 1
; ? (sendq new stream1 #/e)
; = 101
; ? (sendq new stream1 #/f)
; = 102
; .FinLL
; 
; STREAM1
; 
; .ps -2
; .TS
; tab (|);
; c c c c | c | 
;  | c | c | c | c | c|
; c | c | c c c .
;  | | | |W
; _
; c|d|e|f| 
; _
;  |R| | | 
; .TE
; .ps +2
; 
; 
; STREAM
; 
; .ps -2
; .TS
; tab (|);
; c c c | c | c c c c c c 
;  | c | c | c | c | c | c | c | c | c | c|
; c c c | c | c c c c c c .
;  | | |W| | | | | | 
; _
; a|b|c| | | | | | | 
; _
;  | | |R| | | | | | 
; .TE
; .ps +2
; 
; Nous transfe'rons le contenu de stream1 dans stream:
; 
; .DebLL 1
; ? (sendq bltstream stream1 stream)
; = 4
; .FinLL
; 
; STREAM1
; 
; .ps -2
; .TS
; tab (|);
; c c c c | c | 
;  | c | c | c | c | c|
; c c c c | c | .
;  | | | |W
; _
; c|d|e|f| 
; _
;  | | | |R
; .TE
; .ps +2
; 
; 
; STREAM
; 
; .ps -2
; .TS
; tab (|);
; c c c c c c | c | c c c 
;  | c | c | c | c | c | c | c | c | c | c|
; c c c | c | c c c c c c .
;  | | | | | |W| | | 
; _
; a|b|c|d|e|f| | | | 
; _
;  | | |R| | | | | | 
; .TE
; .ps +2
; 
; 
; Pour nettoyer un flux, c'est a`dire pour remettre a` ze'ro les
; pointeurs de lecture et d'e'criture, on lui envoie le message
; \fIclear\fR:
; 
; .DebLL 1
; ? (sendq clear stream1)
; = 0
; .FinLL
; 
; STREAM1
; 
; .ps -2
; .TS
; tab (|);
; | c | c c c c 
;  | c | c | c | c | c|
; | c | c c c c .
; W| | | | 
; _
;  | | | | 
; _
; R| | | | 
; .TE
; .ps +2
; 
; 
; STREAM
; 
; .ps -2
; .TS
; tab (|);
; c c c c c c | c | c c c 
;  | c | c | c | c | c | c | c | c | c | c|
; c c c | c | c c c c c c .
;  | | | | | |W| | | 
; _
; a|b|c|d|e|f| | | | 
; _
;  | | |R| | | | | | 
; .TE
; .ps +2
; 
; 
; Nous de'finissons un certain nombre d'autres ope'rations sur les flux
; line'aires:
; 
; \(bu \fIflush\fR qui consiste a`
; transfe'rer le contenu d'un flux dans sa destination, puis a`
; remettre a` ze'ro son buffer en lui envoyant le message clear;
; 
; \(bu \fInext?\fR qui permet de tester s'il y a quelque chose a` lire
; dans le flux ou dans un des flus chai^ne's en source et, si oui, de
; le lire.
; 
; \(bu \fIpeek\fR qui fait un \fInext\fR sans de'placer le pointeur de 
; lecture.
; 
; \(bu \fIreturn\fR qui remat a` ze'ro le pointeur de lecture et permet ainsi
; de recommencer une lecture.

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: #:Tclass:Stream:LinearStream\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRLinearStream.
; T}
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; class-attributes|(Vector ...)
; source|*
; destination|*
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; bltstream|(x y)
; bltstream!1|(x y)
; bltstream!2|(x y)
; bltstream!3|(x y)
; bltstream!4|(stream dest)
; bltstream!5|(stream dest)
; destination|obj
; eos|(stream)
; flush|(stream)
; next?|(stream)
; class-attributes|obj
; source|obj
; _
; .T&
; c s
; l s.
; \fBSous Mode`les\fR
; CharStream
; InChannel
; InputBuffer
; ListStream
; OutChannel
; OutputBuffer
; .TE
; .ps +2
; 
; Les bltstream!n sont des se'mantiqes interme'diares engendre'es par le
; defrule.

(de {LinearStream}:flush (stream)
    (sendq bltstream stream ({Stream}:destination stream))
    (sendq clear stream))

; En cas de de'dordement, on fait par de'faut un flush.

(de {LinearStream}:eos (stream)
    (sendq flush stream))

(defrule bltstream (x~{LinearStream} y~{LinearStream})
    (until (sendq null x)
           (sendq new y (sendq next x))))


; Pour voir s'il y a quelque chose a` lire et si oui le lire:

(de {LinearStream}:next? (stream)
    (if (sendq null stream)
        (sendq next? ({Stream}:source stream))
        (sendq next stream)))

; .SSection "Les Cas Limites"
; Les objets qu'on retrouve souvent aux extre^mite's de chai^nes
; de flux line'aires:
; 
; \(bu () joue le ro^le de /dev/null

(de {null}:new (null val) ())

(de {null}:next (null)
    (syserror '{null}:next "Nothing in nil" ()))

(de {null}:flush (null))

(defrule bltstream (x~null y~{LinearStream})
    nil)

; \(bu le canal d'entre'e, tyi, tys dans le jargon des flux.

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: #:Tclass:Stream:LinearStream:InChannel\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRInChannel.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; InChannel|()
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; class-attributes|(Vector ...)
; source|*
; destination|*
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; bltstream|(x y)
; destination|obj
; flush|(channel)
; next|(channel)
; next?|(channel)
; class-attributes|obj
; source|obj
; .TE
; .ps +2

(deftclass {LinearStream}:InChannel)
(defmake {InChannel} InChannel ())
(de {InChannel}:next (channel) (tyi))
(de {InChannel}:next? (channel) (tys))
(de {InChannel}:flush (channel) ())

(defrule bltstream (x~{InChannel} y~{LinearStream})
         nil)

; \(bu le canal de sortie, tyo, tyflush dans le jargon des flux.

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: #:Tclass:Stream:LinearStream:OutChannel\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fROutChannel.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; OutChannel|()
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; class-attributes|(Vector ...)
; source|*
; destination|*
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; destination|obj
; flush|(channel)
; new|(channel val)
; class-attributes|obj
; source|obj
; .TE
; .ps +2


(deftclass {LinearStream}:OutChannel)
(defmake {OutChannel} OutChannel ())
(de {OutChannel}:new (channel val) (tyo val))
(de {OutChannel}:flush (channel) (tyflush))
(de {OutChannel}:newline (channel)
    (when #:system:real-terminal-flag (tyo #\return))
    (tyo #\lf)
    (tyflush))

; .SSection "Les Flux de Caracte`res"
; Il s'agit de flux dont le buffer est imple'mente' comme un chai^ne
; de caracte`res.

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: #:Tclass:Stream:LinearStream:CharStream\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRCharStream.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; CharStream|(size)
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; class-attributes|(Vector ...)
; source|*
; destination|*
; string|*
; size|fix
; inpos|fix
; outpos|fix
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; clear|(stream)
; current|(stream)
; init|(stream size)
; inpos|obj
; new|(stream val)
; next|(stream)
; null|(stream)
; outpos|obj
; peek|(stream)
; return|(stream)
; size|obj
; string|obj
; .TE
; .ps +2


(deftclass {LinearStream}:CharStream
                string
                size~fix
                (inpos~fix 0)
                (outpos~fix 0))

(de CharStream (size)
    (sendq init (omakeq CharStream) size))

(defmake {CharStream} CharStream)

(de {CharStream}:init (stream size)
    (ochangeq CharStream stream
                string (makestring size #\sp)
                size size))


(de {CharStream}:clear (stream) 
     (fillstring ({CharStream}:string stream)
                 0
                 #\sp
                 ({CharStream}:size stream))
     ({CharStream}:inpos stream 0)
     ({CharStream}:outpos stream 0))

(de {CharStream}:null (stream)
    (= ({CharStream}:inpos stream) ({CharStream}:outpos stream)))

(de {CharStream}:current (stream)
    (chrnth ({CharStream}:inpos stream) ({CharStream}:string stream)))

(de {CharStream}:next (stream)
    (ifn (= ({CharStream}:inpos stream)
            ({CharStream}:outpos stream))
         (prog1
            ({CharStream}:current stream)
            ({CharStream}:inpos stream (1+ ({CharStream}:inpos stream))))
         ({CharStream}:new stream
                      (sendq next ({Stream}:source stream)))
         ({CharStream}:next stream)))

(de {CharStream}:peek (stream)
    (prog1
      ({CharStream}:next stream)
      ({CharStream}:inpos stream (1- ({CharStream}:inpos stream)))))

(de {CharStream}:return (stream)
    ({CharStream}:inpos stream 0))

(de {CharStream}:new (stream val)
    (cond
      ((= ({CharStream}:outpos stream)
          ({CharStream}:size stream))
       (sendq eos stream)
       ({CharStream}:new stream val))
      (t (chrset ({CharStream}:outpos stream)
                 ({CharStream}:string stream)
                 val)
         ({CharStream}:outpos stream (1+ ({CharStream}:outpos stream)))
         val)))


; .bp
; .SSection "Les Flux sous Forme de Liste"
; Ici le buffer est imple'mente' sous forme de liste. Ces flux 
; peuvent donc stocker un nombre arbitraire d'objets. De plus
; il peuvent stocker des objets quelconques et pas seulement des
; caracte`res.

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: #:Tclass:Stream:LinearStream:ListStream\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRListStream.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; ListStream|()
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; class-attributes|(Vector ...)
; source|*
; destination|*
; list|*
; inpos|*
; outpos|*
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; clear|(stream)
; current|(stream)
; init|(stream)
; inpos|obj
; list|obj
; new|(stream val)
; next|(stream)
; null|(stream)
; outpos|obj
; peek|(stream)
; return|(stream)
; .TE
; .ps +2

(deftclass {LinearStream}:ListStream
                list
                inpos
                outpos)

(de ListStream ()
    (sendq init (omakeq {ListStream})))

(defmake {ListStream} ListStream)

(de {ListStream}:init (stream)
    (let ((buffer (list ())))
         (ochangeq {ListStream} stream
                list buffer
                inpos buffer
                outpos buffer)))

(demethod {ListStream}:clear (stream) (list)
    (rplacd list ())
    ({ListStream}:outpos stream list)
    ({ListStream}:inpos stream list))

(de {ListStream}:null (stream)
    (eq ({ListStream}:inpos stream)
        ({ListStream}:outpos stream)))

(de {ListStream}:current (stream)
    (car ({ListStream}:inpos stream)))

(de {ListStream}:next (stream)
    (ifn (eq ({ListStream}:inpos stream)
             ({ListStream}:outpos stream))
         (prog1
            (car ({ListStream}:inpos stream))
            ({ListStream}:inpos stream (cdr ({ListStream}:inpos stream))))
         ({ListStream}:new stream 
                           (sendq next ({Stream}:source stream)))
         ({ListStream}:next stream)))

(demethod {ListStream}:peek (stream) (inpos)
   (prog1
    ({ListStream}:next stream)
    ({ListStream}:inpos stream inpos)))

(de {ListStream}:return (stream)
    ({ListStream}:inpos stream ({ListStream}:list stream)))

(de {ListStream}:new (stream val)
    (rplaca ({ListStream}:outpos stream) val)
    (rplacd ({ListStream}:outpos stream) (list ()))
    ({ListStream}:outpos stream (cdr ({ListStream}:outpos stream))))

; .bp
; .SSection "Le Tampon d'Entre'e Le_Lisp"
; Pour manipuler le tampon d'entre'e Le_Lisp comme un flux line'aire:

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: #:Tclass:Stream:LinearStream:InputBuffer\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRInputBuffer.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; InputBuffer|()
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; class-attributes|(Vector ...)
; source|*
; destination|*
; inpos|fix
; inmax|fix
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; bltstream|(stream dest)
; bol|(stream)
; clear|(stream)
; close|(stream)
; inmax|obj
; inpos|obj
; new|(stream val)
; newl|(stream l)
; next|(stream)
; null|(stream)
; open|(stream)
; peek|(stream)
; return|(stream)
; .TE
; .ps +2

(deftclass {LinearStream}:InputBuffer
                (inpos~fix 0)
                (inmax~fix 0))

(defmake {InputBuffer} InputBuffer)

(de InputBuffer () (omakeq {InputBuffer} source (InChannel)))

(de {InputBuffer}:open (stream)
    (inpos 0) (inmax 0))

(de {InputBuffer}:close (stream)
    (inpos 0) (inmax 0))

(de {InputBuffer}:clear (stream)
    ({InputBuffer}:inpos stream (inpos 0))
    ({InputBuffer}:inmax stream (inmax 0)))
    
(de {InputBuffer}:null (stream)
    (= (inmax) (inpos)))

(de {InputBuffer}:next (stream)
    (ifn (= (inpos) (inmax))
         (prog1 (inbuf (inpos))
                (inpos (1+ (inpos))))
         ({InputBuffer}:new stream (sendq next ({Stream}:source stream)))
         ({InputBuffer}:next stream)))

(de {InputBuffer}:peek (stream)
    (prog1
      ({InputBuffer}:next stream)
      (inpos (1- (inpos)))))

(de {InputBuffer}:return (stream)
    (inpos 0))

(de {InputBuffer}:new (stream val)
    (chrset (inmax) (inbuf) val)
    (inmax (1+ (inmax))))
    
; Pour faire l'ouput d'une liste de codes ascii dans le tampon d'entre'e:

(de {InputBuffer}:newl (stream l)
    (while l ({InputBuffer}:new stream (nextl l))))

(defrule bltstream (stream~InputBuffer dest~{LinearStream})
    (let ((n (inpos)))
      (until (= n (inmax))
           (sendq new dest (inbuf n))
           (inpos (inmax))
           (incr n))))

(de {InputBuffer}:bol (stream)
    ({InputBuffer}:peek stream))

; .bp
; .SSection "Le Tampon de Sortie Le_Lisp"
; Pour manipuler le tampon de sortie Le_Lisp comme un flux line'aire:

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: #:Tclass:Stream:LinearStream:OutputBuffer\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fROutputBuffer.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; OutputBuffer|()
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; class-attributes|(Vector ...)
; source|*
; destination|*
; outpos|fix
; lmargin|fix
; rmargin|fix
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; bltstream|(stream dest)
; clear|(stream)
; close|(stream)
; eol|(stream)
; getl|(obuf)
; lmargin|obj
; new|(stream val)
; null|(stream)
; open|(stream)
; outpos|obj
; rmargin|obj
; .TE
; .ps +2

(deftclass {LinearStream}:OutputBuffer
                (outpos~fix 0)
                (lmargin~fix 0)
                (rmargin~fix 79))

(defmake {OutputBuffer} OutputBuffer)

(de OutputBuffer () (omakeq {OutputBuffer} destination (OutChannel)))

(de {OutputBuffer}:open (stream)
    (lmargin ({OutputBuffer}:lmargin stream))
    (rmargin ({OutputBuffer}:rmargin stream))
    (clrbufout))

(de clrbufout ()
    ; pourquoi le fillstring merde-t-il sur outbuf?
    (let ((n 0)) (repeat (rmargin) (outbuf n #\sp) (incr n)))
    (outpos (lmargin)))


(de {OutputBuffer}:close (stream)
    ({OutputBuffer}:lmargin stream (lmargin))
    ({OutputBuffer}:rmargin stream (rmargin)))

(de {OutputBuffer}:clear (stream)
    (clrbufout))

(de {OutputBuffer}:null (stream)
    (= (outpos) 0))

(de {OutputBuffer}:new (stream val)
    (cond
       ((= (outpos) (rmargin))
        (eol)
        ({OutputBuffer}:new stream val))
       (t (outbuf (outpos) val)
          (outpos (1+ (outpos))))))

(defrule bltstream (stream~OutputBuffer dest~LinearStream)
    (let ((n 0))
         (until (= n (outpos))
                (sendq new dest (outbuf n))
                (incr n))))

; Pour re'cupe'rer le contenu du buffer de sortie comme une liste:

(de {OutputBuffer}:getl (obuf)
    (let ((l ())
          (n 0))
         (until (= n (outpos))
                (newl l (outbuf n))
                (incr n))
         (nreverse l)))

(de {OutputBuffer}:eol (stream)
    (sendq flush stream)
    (sendq newline ({Stream}:destination stream)))


; .Section "Flux d'Entre'e, de Sortie, d'Erreur"

(defvar {Lisp}:OutputBuffer (OutputBuffer))
(defvar {Lisp}:InputBuffer  (InputBuffer))

; Nous conservons dans des variables globales un flux d'entre'e courant,
; un flux de sortie courant, et un flux d'erreur courant. Ils sont
; initialise's avec le buffer d'entre'e Le_Lisp pour le premier et
; avec le buffer de sortie LeLisp pour les deux autres.

(defvar {CeyxSys}:instream {Lisp}:InputBuffer)
(defvar {CeyxSys}:outstream {Lisp}:OutputBuffer)
(defvar {CeyxSys}:errorstream {Lisp}:OutputBuffer)

(de {Ceyx}:bol () (sendq bol (instream)))
(de {Ceyx}:eol () (sendq eol (outstream)))

; Pour modifier le flux d'entre'e courant, on utilisera la fonction instream
; qui, appele'e avec un argument qui doit e^tre une stream:
;   - ferme l'ancien flux courant,
;   - ouvre le flux passe' en argument,
;   - et le met dans la valeur de la variable {CeyxSys}:instream.
; 
; Appele'e sans argument, cette fonction rame`ne en valeur le flux
; d'entre'e courant, c'est a` dire la valeur de la variable 
; {CeyxSys}:instream.

(de instream arg
    (ifn arg {CeyxSys}:instream
             (sendq close {CeyxSys}:instream)
             (setq {CeyxSys}:instream (car arg))
             (sendq open {CeyxSys}:instream)
             {CeyxSys}:instream))


(de outstream arg
    (ifn arg {CeyxSys}:outstream
             (sendq close {CeyxSys}:outstream)
             (setq {CeyxSys}:outstream (car arg))
             (sendq open {CeyxSys}:outstream)
             {CeyxSys}:outstream))

(de errorstream arg
    (ifn arg {CeyxSys}:errorstream
             (sendq close {CeyxSys}:errorstream)
             (setq {CeyxSys}:errorstream (car arg))
             (sendq open {CeyxSys}:errorstream)
             {CeyxSys}:errorstream))


