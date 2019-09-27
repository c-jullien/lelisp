; .EnTete "Programmer en Ceyx" "" "Annexe II: Le Plan Carte'sien"
; .Annexe II "Le Plan Carte'sien"
; .Auteur "Jean-Marie Hullot, Bertrand Serlet, Jean Vuillemin"
; .i
; Ce chapitre est un exemple d'utilisation de mode`les non auto-type's
; c'est a` dire de'finis par defmodel, defrecord ... Nous rappelons
; que les Records Ceyx sont imple'mente's comme des arbres e'quilibre's
; de cellules cons.
; 
; Toutes les fonctions de'crites ici sont utilisables sous Ceyx a`
; condition d'avoir charge' le fichier coord.ll de la bibliothe`que
; Ceyx, qui n'est d'ailleurs pas autre chose que ce chapitre:
; .r
; 
; .DebLL 1
; ? (ceyx-load coord)
; = coord.ll
; .FinLL
; .pp
; 
; Nous pre'sentons ici des structures permettant de repre'senter
; des coordonne'es et des rectangles dans le plan carte'sien et
; les proprie'te's se'mantiques e'le'mentaires de ces structures.
; 
; .Section "Les Coordonne'es"

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Mode`le: Coord\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; Coord|(x y)
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; x|number
; y|number
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; *|(coord ratio)
; +|(coord dxy)
; +*|(coord homvect)
; -|(coord dxy)
; max|(coord1 coord2)
; min|(coord1 coord2)
; translate|(coord dx dy)
; x|obj
; y|obj
; _
; .T&
; c s
; l s.
; \fBSous Mode`les\fR
; Dxy
; Ratio
; .TE
; .ps +2

; Nous nous plac/ons dans un repe`re de coordonne'es de type e'cran,
; c'est a` dire que l'axe des x est horizontal de la gauche vers la
; droite et l'axe des y vertical du haut vers le bas. Les \fIcoordonne'es\fR
; sont repre'sente'es par des records a` deux champs:

(defrecord Coord (x~number 0) (y~number 0))

(defmake {Coord} Coord (x y))


; \fBExemples:\fR
; 
; .DebLL 1
; ? (setq c01 (Coord 0 1))
; = (0 . 1)
; ? ({Coord}:x c01)
; = 0
; ? ({Coord}:y c01)
; = 1
; .FinLL
; .pp

; Le min et le max sur les coordonne'es:

(de {Coord}:min (coord1 coord2)
    (Coord (min ({Coord}:x coord1) ({Coord}:x coord2))
           (min ({Coord}:y coord1) ({Coord}:y coord2))))
    
(de {Coord}:max (coord1 coord2)
    (Coord (max ({Coord}:x coord1) ({Coord}:x coord2))
           (max ({Coord}:y coord1) ({Coord}:y coord2))))
    
; \fBExemples:\fR
; 
; .DebLL 1
; ? (setq c1 (Coord 1 3) c2 (Coord 4 2))
; = (4 . 2)
; ? ({Coord}:min c1 c2)
; = (1 . 2)
; ? ({Coord}:max c1 c2)
; = (4 . 3)
; ? c1
; = (1 . 3)
; ? c2
; = (4 . 2)
; .FinLL
; .pp
; 
; Pour translater une coordonne'e de dx, dy:

(de {Coord}:translate (coord dx dy)
    ({Coord}:x coord (+ ({Coord}:x coord) dx))
    ({Coord}:y coord (+ ({Coord}:y coord) dy))
    coord)

; \fBExemples:\fR
; 
; .DebLL 1
; ? ({Coord}:translate c1 7 5)
; = (8 . 8)
; ? c1
; = (8 . 8)
; .FinLL
; .pp
; 
; .bp
; .Section "Les Vecteurs"

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Mode`le: Vect\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s
; l l.
; \fBFonctions de Cre'ation\fR
; mkvect|(xorg yorg xext yext)
; Vect|(org ext)
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; org|(Cons ...)
; xorg|number
; yorg|number
; ext|(Cons ...)
; xext|number
; yext|number
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; *|(vect ratio)
; +|(vect dxy)
; +*|(vect homvect)
; dx|(vect)
; dy|(vect)
; ext|obj
; null|(vect)
; org|obj
; translate|(vect dx dy)
; xext|obj
; xorg|obj
; yext|obj
; yorg|obj
; _
; .T&
; c s
; l s.
; \fBSous Mode`le\fR
; HomVect
; .TE
; .ps +2

; Les vecteurs sont repre'sente's par
; un couple de coordonne'es dont l'une est appele'e
; origine et l'autre extre^mite':

(defrecord Vect org~(Alter Coord x (Field xorg number 0)
                                 y (Field yorg number 0))
                ext~(Alter Coord x (Field xext number 0)
                                 y (Field yext number 0)))


(defmake {Vect} Vect (org ext))
(defmake {Vect} mkvect (xorg yorg xext yext))

; \fBExemples:\fR
; 
; .DebLL 1
; ? (setq vect (Vect c1 c2))
; = ((8 . 8) 4 . 2)
; ? ({Vect}:org vect)
; = (8 . 8)
; ? ({Vect}:xorg vect)
; = 8
; ? ({Vect}:yext vect)
; = 2
; .FinLL
; .pp
; 
; Nous conside`rerons dans la suite que le vecteur est ferme' en son
; origine et ouvert en son extre^mite', c'est a` dire que son
; extre^mite' ne lui appartient pas. Ainsi un vecteur est-il vide
; si et seulement si son origine et son extre^mite' sont
; confondues:

(de {Vect}:null (vect)
    (and (= ({Vect}:xorg vect) ({Vect}:xext vect))
         (= ({Vect}:yorg vect) ({Vect}:yext vect))))

; \fBExemples:\fR
; 
; .DebLL 1
; ? ({Vect}:null vect)
; = ()
; ? ({Vect}:null (Vect (Coord 3 4) (Coord 3 4)))
; = 4
; .FinLL
; .pp
; 
; La diffe'rence des coordonne'es en x et en y:

(de {Vect}:dx (vect)
    (- ({Vect}:xext vect) ({Vect}:xorg vect)))

(de {Vect}:dy (vect)
    (- ({Vect}:yext vect) ({Vect}:yorg vect)))

(cxcp-inline ({Vect}:dx vect))
(cxcp-inline ({Vect}:dy vect))


; \fBExemples:\fR
; 
; .DebLL 1
; ? vect
; = ((8 . 8) 4 . 2)
; ? ({Vect}:dx vect)
; = -4
; ? ({Vect}:dy vect)
; = -6
; .FinLL
; .pp

; Translation d'un vecteur de dx, dy:

(de {Vect}:translate (vect dx dy)
    ({Coord}:translate ({Vect}:org vect) dx dy)
    ({Coord}:translate ({Vect}:ext vect) dx dy)
    vect)

; .bp
; .Section "Les Rectangles"

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Mode`le: Rect\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s
; l l.
; \fBFonctions de Cre'ation\fR
; mkrect|(x y w h)
; Rect|(coord1 coord2)
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; org|(Cons ...)
; xorg|number
; yorg|number
; ext|(Cons ...)
; xext|number
; yext|number
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; *|(vect ratio)
; +|(vect dxy)
; +*|(vect homvect)
; <-Rect|(rect1 rect2)
; <-inter|(rect1 rect2)
; contains-coord|(rect coord)
; contains-rect|(rect1 rect2)
; ext|obj
; height|(vect)
; inter|(rect1 rect2)
; inter?|(rect1 rect2)
; mkinter|(rect1 rect2)
; null|(vect)
; org|obj
; translate|(vect dx dy)
; union|(rect1 rect2)
; width|(vect)
; xext|obj
; xorg|obj
; yext|obj
; yorg|obj
; _
; .T&
; c s
; l s.
; \fBSous Mode`le\fR
; ClipRect
; .TE
; .ps +2

; Les \fIrectangles\fR sont de'termine's par leur coin supe'rieur gauche
; et leur coin infe'rieur droit. Ils sont imple'mente's 
; de la me^me manie`re que des \fBVect\fR.

(defmodel Rect Vect)

(de Rect (coord1 coord2)
    (Vect ({Coord}:min coord1 coord2) ({Coord}:max coord1 coord2)))

(defmake {Rect} Rect)

(de mkrect (x y w h)
    (mkvect x y (+ x w) (+ y h)))

(defmake {Rect} mkrect)

(defaccess Rect)

; \fBExemples:\fR
; 
; .DebLL 1
; ? (setq rect1 (Rect (Coord 0 0) (Coord 10 10)))
; = ((0 . 0) 10 . 10)
; ? (setq rect2 (Rect (Coord 20 20) (Coord 10 10)))
; = ((10 . 10) 20 . 20)
; .FinLL
; .pp
; Quelques synonymes:

(synonymq {Rect}:null {Vect}:null)
(synonymq {Rect}:width {Vect}:dx)
(synonymq {Rect}:height {Vect}:dy)
(synonymq {Rect}:translate {Vect}:translate)


; \fBExemples:\fR
; 
; .DebLL 1
; ? ({Rect}:org rect1)
; = (0 . 0)
; ? ({Rect}:width rect1)
; = 10
; ? ({Rect}:height rect2)
; = 10
; ? rect2
; = ((10 . 10) 20 . 20)
; ? ({Rect}:+ rect2 (Coord 1 1))
; = ((11 . 11) 21 . 21)
; .FinLL
; .pp
; Pour de'terminer si un \fBRect\fR contient une \fBCoord\fR:

(de {Rect}:contains-coord (rect coord)
    (not
     (or (< ({Coord}:x coord) ({Rect}:xorg rect))
         (>= ({Coord}:x coord) ({Rect}:xext rect))
         (< ({Coord}:y coord) ({Rect}:yorg rect))
         (>= ({Coord}:y coord) ({Rect}:yext rect)))))

(cxcp-inline ({Rect}:contains-coord rect coord))

; \fBExemples:\fR
; 
; .DebLL 1
; ? rect1
; = ((0 . 0) 10 . 10)
; ? ({Rect}:contains-coord rect1 (Coord 0 0))
; = t
; ? ({Rect}:contains-coord rect1 (Coord 5 5))
; = t
; ? ({Rect}:contains-coord rect1 (Coord 30 40))
; = ()
; ? ({Rect}:contains-coord rect1 (Coord 10 10))
; = ()
; ? ({Rect}:contains-coord rect1 (Coord 3 10))
; = ()
; .FinLL
; .pp
; Pour de'terminer si un \fBRect\fR en contient un autre:

(de {Rect}:contains-rect (rect1 rect2)
    (and
      ({Rect}:contains-coord rect1 ({Rect}:org rect2))
      ({Rect}:contains-coord rect1 ({Coord}:+ (Coord -1 -1)
                                              ({Rect}:ext rect2)))))

(cxcp-inline ({Rect}:contains-rect rect1 rect2))

; \fBExemples:\fR
; 
; .DebLL 1
; ? rect1
; = ((0 . 0) 10 . 10)
; ? rect2
; = ((6 . 6) 16 . 16)
; ? ({Rect}:contains-rect rect1 rect2)
; = ()
; ? ({Rect}:contains-rect rect1 (Rect (Coord 3 3) (Coord 10 10)))
; = t
; .FinLL
; .pp
; Rame`ne en valeur le rectangle enveloppant de deux rectangles:

(de {Rect}:union (rect1 rect2)
    (Rect 
        ({Coord}:min ({Rect}:org rect1) ({Rect}:org rect2))
        ({Coord}:max ({Rect}:ext rect1) ({Rect}:ext rect2))))

; Rame`ne nil ou le rectangle intersection de deux rectangles.

(de {Rect}:inter (rect1 rect2)
   (if ({Rect}:inter? rect1 rect2)
    ({Rect}:mkinter rect1 rect2)
    ()))

(de {Rect}:inter? (rect1 rect2)
   (and (< (max ({Rect}:xorg rect1) ({Rect}:xorg rect2))
           (min ({Rect}:xext rect1) ({Rect}:xext rect2)))
        (< (max ({Rect}:yorg rect1) ({Rect}:yorg rect2))
           (min ({Rect}:yext rect1) ({Rect}:yext rect2)))))

(de {Rect}:mkinter (rect1 rect2)
    (Rect
       ({Coord}:max ({Rect}:org rect1) ({Rect}:org rect2))
       ({Coord}:min ({Rect}:ext rect1) ({Rect}:ext rect2))))

(cxcp-inline ({Rect}:inter? rect1 rect2))
(cxcp-inline ({Rect}:mkinter rect1 rect2))

; \fBExemples\fR:
; 
; .DebLL 1
; ? rect1
; = ((0 . 0) 10 . 10)
; ? rect2
; = ((11 . 11) 21 . 21)
; ? ({Rect}:union rect1 rect2)
; = ((0 . 0) 21 . 21)
; ? ({Rect}:inter? rect1 rect2)
; = ()
; ? ({Rect}:translate rect2 -5 -5)
; = ((-5 . -5) 16 . 16)
; ? rect2
; = ((6 . 6) 16 . 16)
; ? ({Rect}:inter rect1 rect2)
; = ((6 . 6) 10 . 10)
; .FinLL
; .pp

; Quelques ope'rations de modification en place:

(de {Rect}:<-Rect (rect1 rect2)
    ({Rect}:xorg rect1 ({Rect}:xorg rect2))
    ({Rect}:yorg rect1 ({Rect}:yorg rect2))
    ({Rect}:xext rect1 ({Rect}:xext rect2))
    ({Rect}:yext rect1 ({Rect}:yext rect2))
    rect1)

(cxcp-inline ({Rect}:<-Rect rect1 rect2))

(de {Rect}:<-inter (rect1 rect2)
    (cond
       ((null ({Rect}:inter? rect1 rect2))
        ({Rect}:xext rect1 ({Rect}:xorg rect1))
        ({Rect}:yext rect1 ({Rect}:yorg rect1))
        rect1)
       (t ({Rect}:xorg rect1
                (max ({Rect}:xorg rect1) ({Rect}:xorg rect2)))
          ({Rect}:yorg rect1
                (max ({Rect}:yorg rect1) ({Rect}:yorg rect2)))
          ({Rect}:xext rect1
                (min ({Rect}:xext rect1) ({Rect}:xext rect2)))
          ({Rect}:yext rect1
                (min ({Rect}:yext rect1) ({Rect}:yext rect2)))
          rect1)))


; Les rectangles de clip, utilise's surtout pour inclure dans d'autres
; structures par (Include {ClipRect}).

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Mode`le: #:Rect:ClipRect\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRClipRect.
; T}
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; cliporg|(Cons ...)
; clipxorg|number
; clipyorg|number
; clipext|(Cons ...)
; clipxext|number
; clipyext|number
; .TE
; .ps +2


(defmodel ({Rect}:ClipRect ClipRect)
          (Cons
             (Field cliporg (Cons
                              (Field clipxorg number 0)
                              (Field clipyorg number 0)))
             (Field clipext (Cons
                              (Field clipxext number 0)
                              (Field clipyext number 0)))))

; .Section "Transformations"
; .SSection "De'finition"
; Pour voir une coordonne'e comme une translation:

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Mode`le: #:Coord:Dxy\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRDxy.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; Dxy|(dx dy)
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; dx|number
; dy|number
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; dx|obj
; dy|obj
; .TE
; .ps +2


(defmodel ({Coord}:Dxy Dxy)
          (Alter Coord
                 x (Field dx number 0)
                 y (Field dy number 0)))

(defaccess {Dxy})
(defmake {Dxy} Dxy (dx dy))

; Pour voir une coordonne'e comme une homothe'tie:

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Mode`le: #:Coord:Ratio\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRRatio.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; Ratio|(ratiox ratioy)
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; ratiox|number
; ratioy|number
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; ratiox|obj
; ratioy|obj
; .TE
; .ps +2


(defmodel ({Coord}:Ratio Ratio)
          (Alter Coord
                 x (Field ratiox number 1)
                 y (Field ratioy number 1)))

(defaccess {Ratio})
(defmake {Ratio} Ratio (ratiox ratioy))

; Pour voir un vecteur comme la composition d'une translation
; et d'une homothe'tie:

; .ps -2
; .TS
; center box tab (|);
; c s
; c c.
; T{
; .ps +1
; \fBLe Mode`le: #:Vect:HomVect\fR
; .ps -1
; T}
;  | 
; _
; _
; .T&
; c s.
; T{
; \fBAbre'viation: \fRHomVect.
; T}
; _
; .T&
; c s
; l l.
; \fBFonction de Cre'ation\fR
; HomVect|(dxy ratio)
; _
; .T&
; c s
; l l.
; \fBChamps\fR
; dxy|(Cons ...)
; dx|number
; dy|number
; ratio|(Cons ...)
; ratiox|number
; ratioy|number
; _
; .T&
; c s
; l l.
; \fBProprie'te's Se'mantiques\fR
; dx|obj
; dxy|obj
; dy|obj
; ratio|obj
; ratiox|obj
; ratioy|obj
; .TE
; .ps +2

(defmodel ({Vect}:HomVect HomVect)
          (Alter Vect
                 org (Field dxy (Include {Dxy}))
                 ext (Field ratio (Include {Ratio}))))

(defaccess {HomVect})
(defmake {HomVect} HomVect (dxy ratio))

; .SSection "Application des Transformations"

(de {Coord}:+ (coord dxy) 
    ({Coord}:x coord (+ ({Coord}:x coord) ({Dxy}:dx dxy)))
    ({Coord}:y coord (+ ({Coord}:y coord) ({Dxy}:dy dxy)))
    coord)


(de {Coord}:- (coord dxy) 
    ({Coord}:x coord (- ({Coord}:x coord) ({Dxy}:dx dxy)))
    ({Coord}:y coord (- ({Coord}:y coord) ({Dxy}:dy dxy)))
    coord)

(de {Coord}:* (coord ratio) 
    ({Coord}:x coord (* ({Coord}:x coord) ({Ratio}:ratiox ratio)))
    ({Coord}:y coord (* ({Coord}:y coord) ({Ratio}:ratioy ratio)))
    coord)

(de {Coord}:+* (coord homvect)
    ({Coord}:+ coord ({HomVect}:dxy homvect))
    ({Coord}:* coord ({HomVect}:ratio homvect))
    coord)

(de {Vect}:+ (vect dxy)
    ({Coord}:+ ({Vect}:org vect) dxy)
    ({Coord}:+ ({Vect}:ext vect) dxy)
    vect)

(de {Vect}:* (vect ratio)
    ({Coord}:* ({Vect}:org vect) ratio)
    ({Coord}:* ({Vect}:ext vect) ratio)
    vect)

(de {Vect}:+* (vect homvect)
    ({Vect}:+ vect ({HomVect}:dxy homvect))
    ({Vect}:* vect ({HomVect}:ratio homvect))
    vect)

(synonymq {Rect}:+ {Vect}:+)
(synonymq {Rect}:* {Vect}:*)
(synonymq {Rect}:+* {Vect}:+*)

