; .EnTete "Programmer en Ceyx" "" "Annexe IV: Le Flip"
; .Annexe IV "Le Flip"
; .Titre "Description de Transparents en Ceyx"
; .Auteur "Jean-Marie Hullot, Bertrand Serlet"
; .i
; Ce chapitre est un exemple d'utilisation des arbres, c`est a` dire
; des structures de'finies par deftree et defcons.
; 
; Toutes les fonctions de'crites ici sont utilisables sous Ceyx a`
; condition d'avoir charge' le fichier leflip.ll de la bibliothe`que
; Ceyx, qui n'est d'ailleurs pas autre chose que ce chapitre.
; .r
; 
; .DebLL 1
; ? (ceyx-load leflip)
; = leflip
; .FinLL

(ceyx-load coord)

; .Section "Introduction"
; Nous pre'sentons une version Ceyx du langage de descriptions de
; transparents conc/u par Gilles Kahn. Nous de'finissons une
; syntaxe abstraite, des fonctions Lisp de construction de
; de ces objets, et un interpre'teur graphique permettant
; de tracer les flips sur plotter.
; 
; Le langage Flip est un petit langage ge'ome'trique permettant de de'couper
; une feuille de papier
; en bandes horizontales (l'ope'rateur horiz a` nombre
; variable d'arguments), en bandes verticales (l'ope'rateur vertic
; a` nombre variable d'arguments), en re'gions rectangulaires
; atomiques contenant du texte (l'ope'rateur aligner a` nombre
; variable de chai^nes de caracte`res arguments) et en re'gions rectangulaires
; atomiques contenant une diagonale d'une certaine couleur
; (l'ope'rateur diag a` un argument, sa couleur).
; Chaque bande ou re'gion posse`de une proportion qui permet de calculer
; sa taille propre dans sa bande me`re, elle peut e^tre encadre'e d'une
; certaine couleur, peinte d'une certaine couleur, le texte peut
; y e^tre e'crit d'une certaine couleur. De plus on peut tourner
; les re'gions d'un multiple de 90\(de.

; .bp
; .Section "Description du Langage"
; .SSection "Les Couleurs"
(defmodel color (Predicate is-color nil))

(de is-color (x) 
    (memq x '(nil rouge vert bleu noir blanc
                  citron dore brun violet)))

(defvar rouge 'rouge)
(defvar vert 'vert)
(defvar bleu 'bleu)
(defvar noir 'noir)
(defvar blanc 'blanc)
(defvar citron 'citron)
(defvar dore 'dore)
(defvar brun 'brun)
(defvar violet 'violet)

; .Section "Les Constructeurs du Langage"
(deftree Flip
         (proportion~fix 1)
         (rotation~fix 0)
         (cadre~color ())
         (texte~color ())
         (peinture~color ()))

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: #:Tree:Flip\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRFlip.
; T}
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; sons|*
; tree-attributes|(Vector ...)
; proportion|fix
; rotation|fix
; cadre|color
; texte|color
; peinture|color
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; cadre|obj
; display|(flip context)
; display-flip|(flip context)
; horiz-display|(sons context)
; peinture|obj
; proportion|obj
; rotation|obj
; texte|obj
; vertic-display|(sons context)
; _
; .T&
; c s
; l s.
; \fBSous Mode`les\fR
; aligner
; couvrir
; diag
; horiz
; vertic
; .TE
; .ps +2
; .bp
(defcons {Flip}:horiz sons~(List {Flip}))

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: #:Tree:Flip:horiz\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRhoriz.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; horiz|sons
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; sons|(List ...)
; tree-attributes|(Vector ...)
; proportion|fix
; rotation|fix
; cadre|color
; texte|color
; peinture|color
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; display-flip|(flip context)
; sons|obj
; .TE
; .ps +2


(defcons {Flip}:vertic sons~(List {Flip}))

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: #:Tree:Flip:vertic\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRvertic.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; vertic|sons
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; sons|(List ...)
; tree-attributes|(Vector ...)
; proportion|fix
; rotation|fix
; cadre|color
; texte|color
; peinture|color
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; display-flip|(flip context)
; sons|obj
; .TE
; .ps +2
; .bp

(defcons {Flip}:couvrir sons~(List {Flip}))

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: #:Tree:Flip:couvrir\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRcouvrir.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; couvrir|sons
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; sons|(List ...)
; tree-attributes|(Vector ...)
; proportion|fix
; rotation|fix
; cadre|color
; texte|color
; peinture|color
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; display-flip|(flip context)
; sons|obj
; .TE
; .ps +2


(defcons {Flip}:aligner sons~(List string))

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: #:Tree:Flip:aligner\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRaligner.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; aligner|sons
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; sons|(List ...)
; tree-attributes|(Vector ...)
; proportion|fix
; rotation|fix
; cadre|color
; texte|color
; peinture|color
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; display-flip|(flip context)
; sons|obj
; .TE
; .ps +2
; .bp

(defcons {Flip}:diag (color~color))

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Type: #:Tree:Flip:diag\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRdiag.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; diag|(color)
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; sons|(Vector ...)
; color|color
; tree-attributes|(Vector ...)
; proportion|fix
; rotation|fix
; cadre|color
; texte|color
; peinture|color
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; color|obj
; display-flip|(flip context)
; .TE
; .ps +2

; .SSection "Fonctions spe'cialise'es Flip"

(de peindre (color flip)
    ({Flip}:peinture flip color)
    flip)

(de encadrer (color flip)
    ({Flip}:cadre flip color)
    flip)

(de ecrire (color flip)
    ({Flip}:texte flip color)
    flip)

(de tourne (n flip)
    ({Flip}:rotation flip (prod-rot n ({Flip}:rotation flip)))
    flip)

(synonymq tilt tourne)

(de % (n flip)
    ({Flip}:proportion flip n)
    flip)

; Fonction utilitaire:

(defmacro prod-rot (n p) `(rem (+ ,n ,p) 4))

; .Section "Visualisation des Flips"

; Pour pouvoir e^tre trace' sur papier ou sur e'cran, un flip
; doit pouvoir re'pondre au message 'display
; en relanc/ant les fonctions display-frame, display-box, display-vector,
; et display-text avec les parame`tres approprie's.

; Le display se fait dans un certain contexte, et nous de'finissons
; donc d'abord le record flip-context.

; .SSection "De'finition du Contexte"

; Ce contexte utilise la boite rectangulaire dans laquelle on trace le
; flip. Ce type "Rect" est de'fini dans le package "coord"


(defrecord flip-context 
             rect~Rect                ; cadre dans lequel on fait le display
             (rot ~integer 0)         ; 0/1/2/3 : la rotation courante
             (colortext~color 'noir)  ; couleur courante du texte,par defaut
             )

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Mode`le: flip-context\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; rect|Rect
; rot|integer
; colortext|color
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; colortext|obj
; rect|obj
; rot|obj
; .TE
; .ps +2


; .SSection "Re'ponse au Message display"

; Cette fonction renvoie apres modification du contexte
; le message display-flip.


(de {Flip}:display (flip context) 
    (when ({Flip}:peinture flip)
          (display-box ({flip-context}:rect context) ({Flip}:peinture flip)))
    (olet (flip-context (rot colortext) context)
          ; on change le contexte
          ({flip-context}:rot context (prod-rot rot ({Flip}:rotation flip)))
          ({flip-context}:colortext context (or ({Flip}:texte flip) colortext))
          (send 'display-flip flip context)
          ; on retablit le contexte
          ({flip-context}:rot context rot) ({flip-context}:colortext context colortext))
    (when ({Flip}:cadre flip)
          (display-frame ({flip-context}:rect context) ({Flip}:cadre flip))))

(demethod {vertic}:display-flip (flip context) (sons)
    (selectq ({flip-context}:rot context)
             (0 ({Flip}:horiz-display sons context))
             (1 ({Flip}:vertic-display sons context))
             (2 ({Flip}:horiz-display (reverse sons) context))
             (3 ({Flip}:vertic-display (reverse sons) context))))

(demethod {horiz}:display-flip (flip context) (sons)
    (selectq ({flip-context}:rot context)
             (0 ({Flip}:vertic-display sons context))
             (1 ({Flip}:horiz-display (reverse sons) context))
             (2 ({Flip}:vertic-display (reverse sons) context))
             (3 ({Flip}:horiz-display sons context))))

(de {Flip}:horiz-display (sons context)
    (let ((sigmaprop 0) (son) (prop 0) (rect ({flip-context}:rect context))
          (xorg) (xext) (sons2 sons))
         (setq xorg ({Rect}:xorg rect) xext ({Rect}:xext rect))
         (while sons2 (incr sigmaprop ({Flip}:proportion (nextl sons2))))
         (while sons
                ({Rect}:xorg rect (scale-affine xorg xext prop sigmaprop))
                (setq son (nextl sons))
                (incr prop ({Flip}:proportion son))
                ({Rect}:xext rect (scale-affine xorg xext prop sigmaprop))
                (send 'display son context))
         ({Rect}:xorg rect xorg) ({Rect}:xext rect xext)))

(de {Flip}:vertic-display (sons context)
    (let ((sigmaprop 0) (son) (prop 0) (rect ({flip-context}:rect context))
          (yorg) (yext) (sons2 sons))
         (setq yorg ({Rect}:yorg rect) yext ({Rect}:yext rect))
         (while sons2 (incr sigmaprop ({Flip}:proportion (nextl sons2))))
         (while sons
                ({Rect}:yorg rect (scale-affine yorg yext prop sigmaprop))
                (setq son (nextl sons))
                (incr prop ({Flip}:proportion son))
                ({Rect}:yext rect (scale-affine yorg yext prop sigmaprop))
                (send 'display son context))
         ({Rect}:yorg rect yorg) ({Rect}:yext rect yext)))

(demethod {couvrir}:display-flip (flip context) (sons)
          (while sons (send 'display (nextl sons) context)))

(demethod {aligner}:display-flip (flip context) (sons)
          (display-text ({flip-context}:rect context) sons
                        ({flip-context}:rot context)
                        ({flip-context}:colortext context)))

(de {diag}:display-flip (flip context)
    (let ((rect ({flip-context}:rect context)))
         (if (evenp ({flip-context}:rot context))
             (display-vector rect ({diag}:color flip))
             (display-vector
                 (Vect (Coord ({Rect}:xorg rect) ({Rect}:yext rect))
                       (Coord ({Rect}:xext rect) ({Rect}:yorg rect)))
                 ({diag}:color flip)))))

(de {Flip}:display-flip (flip context) nil)

; Fonction auxiliaire qui devrait sans doute se trouver ailleurs

; en particulier dans le package coord.
(de scale-affine (x1 x2 prop sigmaprop)
    (+ (scale x1 (- sigmaprop prop) sigmaprop)
       (scale x2 prop sigmaprop)))

; .SSection "Display sur plotter ou sur e'cran"

; On utilise les fonctions display-init et display-end de l'output
; device virtuel.

; Pour pouvoir plotter un flip sur hp, on charge la 
; bibliothe`que "plotter".

; Format transparent:

(de plot (flip)
    (ceyx-load plotter)
    (let ((*output-device* *plotter*))
         (display-init)
         (send 'display flip (omakeq {flip-context}
                                      rect (Rect (Coord 0 0)
                                                 (Coord 1300 2000))))
         (display-end)))

; Format grande page pour grand plotter:

(de bigplot (flip)
    (ceyx-load plotter)
    (let ((*output-device* *plotter*))
         (display-init)
         (send 'display flip (omakeq {flip-context}
                                      rect (Rect (Coord 0 0)
                                                 (Coord 3040 2000))))
         (display-end)))

; Format en continu papier rouleau sur grand plotter

(de multiplot (flips)
    (ceyx-load plotter)
    (send 'cutter-enable *plotter*)
    (while flips (plot (nextl flips)) (send 'advance-half-page *plotter*))
    (send 'cutter-disable *plotter*))

