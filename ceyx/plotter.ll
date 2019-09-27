; .EnTete "Programmer en Ceyx" "" "Annexe VI: Les Traceurs"
; .Annexe VI "Les Traceurs"
; .Titre "Logiciel de Guidage des Traceurs HP7221"
; .Auteur "O. Guillaumin, J.-M. Hullot et B. Serlet"

(ceyx-load coord)
(ceyx-load stream)

; .Section "De'finition d'une Machine Virtuelle de Trac/age"

; .SSection "Introduction"

; Le but de ce court fichier est de donner une spe'cification unifie'e
; de deux dispositifs de sortie: l'e'cran colorix et le plotter HP.
; .br
; Une tre`s petite partie de ce code est de'pendante du syste`me.
; Elle est indique'e par
; .br
; \fB;** System dependant\fR.

; .SSection "Le type ge'ne'rique"

(deftclass OutputDevice)

; Le dispositif de sortie courant de sortie:

(defvar *output-device* (omakeq OutputDevice))

; .SSection "Fonctions de renvoi des messages"

; Les fonctions suivantes de'finissent des abre'viations pour travailler
; sur le dispositif de sortie courant, qui est cense' e^tre dans la variable
; \fB*output-device*\fR.

(de display-init () (send 'display-init *output-device*))
(de display-end () (send 'display-end *output-device*))
(de display-frame (rect color)
    (send 'display-frame *output-device* rect color))
(de display-box (rect color)
    (send 'display-box *output-device* rect color))
(de display-vector (rect color)
    (send 'display-vector *output-device* rect color))
(de display-text (rect lines rot color)
    (send 'display-text *output-device* rect lines rot color))

; .SSection "Se'mantiques par de'faut pour faciliter la mise au point"

(de {OutputDevice}:display-init (device)
    (print 'display-init device))
(de {OutputDevice}:display-end (device)
    (print 'display-end device))
(de {OutputDevice}:display-frame (device rect color)
    (print 'display-frame device rect color))
(de {OutputDevice}:display-box (device rect color)
    (print 'display-box device rect color))
(de {OutputDevice}:display-vector (device rect color)
    (print 'display-vector device rect color))
(de {OutputDevice}:display-text (device rect lines rot color)
    (print 'display-text device rect lines rot color))

; .Section "LES TRACEURS; LE TRACEUR HP7221"

; Ces utilitaires de'crivent une machine virtuelle bien re'elle cette fois ci:
; le traceur HP servant a` faire des sorties papier ou sur transparents.
; Ce traceur est donc utile pour dessiner du Lucifer ou du Luciflip.
; Une premie`re version en Le_Lisp a e'te' re'alise'e par JMH,
; et BS l'a mise au gou^t de la version 4 de Ceyx.

; .SSection "Le type ge'ne'rique de tous les traceurs HP 7221"

; On de'finit d'abord un enregistrement auxiliaire me'morisant 
; chaque fichier destine' a` e^tre plotte'.
(deflrecord PlotterFile
                color 
                name
                chan
                empty)

; Le type  Plotter ge'ne'ral:

(deftclass {OutputDevice}:Plotter
              files~(List {PlotterFile})
              curchan       ; le canal courant
              (nb-colors 0)    ; le nombre de couleurs du Plotter 
         )

; Le Plotter HP7221 lui-me^me:
(deftclass {Plotter}:HP7221)

; Une instance de Plotter, pour savoir a` qui l'on s'adresse
(defvar *plotter* (omakeq HP7221))

; Les couleurs sont des constantes pour qu'on ne soit pas oblige' de
; les quoter.
(defvar bleu 'bleu noir 'noir vert 'vert rouge 'rouge
        violet 'violet dore 'dore brun 'brun citron 'citron)

; .SSection "Les Fonctions de plus bas niveau d'envoi des caracte`res"

; Toutes ces fonctions utilisent le plotter courant : \fB*plotter*\fR.

; .SSSection "Envoi d'un octet, d'un caracte`re, d'une chai^ne"
(de {HP7221}:princn (x)
    (with ((outchan ({Plotter}:curchan *plotter*)))
          (princn x) (flush)))

(de {HP7221}:princh (char)
    (with ((outchan ({Plotter}:curchan *plotter*)))
          (princh char) (flush)))

(de {HP7221}:prinstring (string)
    (with ((outchan ({Plotter}:curchan *plotter*)))
          (prinflush string)))

; .SSSection "Envoi de se'quences d'e'chappement"

(de {HP7221}:prin-ESC (string)
    ({HP7221}:princn 27)
    ({HP7221}:prinstring string))

; .SSSection "Envoi de coordonne'es au format HP"

(de {HP7221}:out-sbn (n)
    ({HP7221}:princn (if (< n 32) (+ n 64) n)))

(de {HP7221}:out-2-sbn (n)
    ({HP7221}:out-sbn (div n 64)) ({HP7221}:out-sbn (rem n 64)))

(de {HP7221}:out-mbn (n)
    (cond
      ((< n 16) ({HP7221}:princn (+ n 96)))
      ((< n 1024)
         ({HP7221}:princn (+ (div n 64) 96))
         ({HP7221}:out-sbn (rem n 64)))
      ((<= n 32767)
         ({HP7221}:princn (+ (div n 4096) 96))
         ({HP7221}:out-2-sbn (rem n 4096)))
      (t ({HP7221}:error "MBN out of range" n))))

(de {HP7221}:out-mbp (nx ny)
    (let ((n (max nx ny)) (nxr (rem nx 128)) (nxs (rem nx 1024)))
         (cond
            ((< n 4) ({HP7221}:princn (+ ny 96 (* 4 nx))))
            ((< n 32)
               ({HP7221}:princn (+ (div nx 2) 96))
               ({HP7221}:out-sbn (+ ny (* 32 (rem nx 2)))))
            ((< n 256)
               ({HP7221}:princn (+ (div nx 16) 96))
               ({HP7221}:out-sbn (+ (div ny 64) (* 4 (rem nx 16))))
               ({HP7221}:out-sbn (rem ny 64)))
            ((< n 2048)
               ({HP7221}:princn (+ (div nx 128) 96))
               ({HP7221}:out-sbn (div nxr 2))
               ({HP7221}:out-sbn (+ (div ny 64) (* 32 (rem nxr 2))))
               ({HP7221}:out-sbn (rem ny 64)))
            ((< n 16384)
               ({HP7221}:princn (+ (div nx 1024) 96))
               ({HP7221}:out-sbn (div nxs 16))
               ({HP7221}:out-sbn (+ (div ny 4096) (* 4 (rem nxs 16))))
               ({HP7221}:out-2-sbn (rem ny 4096)))
            (t ({HP7221}:error "MBP out of range" n)))))

(de {HP7221}:out-pmb (x y)
    ({HP7221}:out-pmb1 x 64) ({HP7221}:out-pmb1 y 32))

(de {HP7221}:princn-2 (n flag)
    ({HP7221}:princn (+ (div n 32) flag))
    ({HP7221}:princn (+ (rem n 32) flag)))

(de {HP7221}:princn-3 (n flag)
    ({HP7221}:princn (+ (div n 1024) flag))
    ({HP7221}:princn-2 (rem n 1024) flag))

(de {HP7221}:out-pmb1 (nx flag)
    (if (< nx 0)
        (cond
          ((> nx -17) ({HP7221}:princn (+ nx 32 flag)))
          ((> nx -513) ({HP7221}:princn-2 (+ nx 1024) flag))
          ((> nx -16385)
              (incr nx 16384) (incr nx 16384)
              ({HP7221}:princn-3 nx flag))
          (t ({HP7221}:error "PMB out of range" nx)))
        (cond
           ((< nx 16) ({HP7221}:princn (+ nx flag)))
           ((< nx 512) ({HP7221}:princn-2 nx flag))
           ((< nx 16384) ({HP7221}:princn-3 nx flag))
           (t ({HP7221}:error "PMB out of range" nx)))))

; .SSection "Actions Physiques sur le Traceur"
; .SSSection "Mise en Route et Arre^t"

(de {HP7221}:on ()
    ; en route
    ({HP7221}:prin-ESC ".(")
    ; configuration
    ({HP7221}:prin-ESC ".@;4:")
    ; handshake mode 2
    ({HP7221}:prin-ESC ".I1528;20;18:~_"))

(de {HP7221}:off ()
    ; store-pen
    ({HP7221}:princh "v")
    ({HP7221}:out-sbn 0)
    ; pen range'!
    ({HP7221}:princh "p")
    ({HP7221}:out-mbp 3040 2000)
    ({HP7221}:princh "}")
    ({HP7221}:prin-ESC ".)"))

(de {HP7221}:error (y z)
    ({HP7221}:close)
    (syserror 'Plotter y z))

; .SSSection "Se'lection de Divers Parame`tres"

; Se'lection du crayon

(de {HP7221}:select-pen (couleur)
    (let ((code))
         (setq code (cassq couleur '((blanc . 0) (bleu . 1) (noir . 2)
                                     (vert . 3) (rouge . 4))))
         (unless code
                 (setq code (cassq couleur
                                   '((violet . 5) (dore . 6) 
                                     (brun . 7) (citron . 8))))
                 (unless code
                         ({HP7221}:error "not a color" couleur))
                 (when (eq ({Plotter}:nb-colors *plotter*) 8)
                       (setq code 2)))
         ({HP7221}:princh "v")
         ({HP7221}:out-sbn code)))

; Se'lection de la taille de la fonte

(de {HP7221}:font-size (space line)
    ({HP7221}:prinstring "~%")
    ({HP7221}:out-mbp space line))

; .SSSection "Avance et De'coupe du papier"

(de {HP7221}:cutter-disable (*plotter*)
    ({HP7221}:prinstring "~)"))

(de {HP7221}:cutter-enable (*plotter*)
    ({HP7221}:prinstring "~("))

(de {HP7221}:advance-full-page (*plotter*)
    ({HP7221}:prinstring "~+"))

(de {HP7221}:advance-half-page (*plotter*)
    ({HP7221}:prinstring "~-"))


; .SSection "De'placements du Crayon et Dessin"
; .SSSection "De'placements absolus"

; x et y sont des coordonne'es standards:
; pour passer aux coordonne'es hp, il faut changer de sens l'axe des y.

(de {HP7221}:move (x y)
    ({HP7221}:princh "p")
    ({HP7221}:out-mbp x (- 2000 y))
    ({HP7221}:princh "}"))

(de {HP7221}:draw (x y)
    ({HP7221}:princh "q")
    ({HP7221}:out-mbp x (- 2000 y))
    ({HP7221}:princh "}"))

; .SSSection "De'placements Relatifs"

(de {HP7221}:imove (x y)
    ({HP7221}:princh "r")
    ({HP7221}:out-pmb x y)
    ({HP7221}:princh "}"))

(de {HP7221}:idraw (x y)
    ({HP7221}:princh "s")
    ({HP7221}:out-pmb x y)
    ({HP7221}:princh "}"))


(de {HP7221}:up (x)    ({HP7221}:imove 0 x))
(de {HP7221}:down (x)  ({HP7221}:imove 0 (- x)))
(de {HP7221}:left (x)  ({HP7221}:imove (- x) 0))
(de {HP7221}:right (x) ({HP7221}:imove x 0))


(de {HP7221}:wup (x)    ({HP7221}:idraw 0 x))
(de {HP7221}:wdown (x)  ({HP7221}:idraw 0 (- x)))
(de {HP7221}:wleft (x)  ({HP7221}:idraw (- x) 0))
(de {HP7221}:wright (x) ({HP7221}:idraw x 0))

; .SSSection "Dessin de Figures"


; Le rectangle (simplement le cadre)
(de {HP7221}:frame (x y xdim ydim)
    ({HP7221}:move x y)
    ({HP7221}:wright xdim) ({HP7221}:wdown ydim)
    ({HP7221}:wleft xdim) ({HP7221}:wup ydim))

; Le rectangle plein
(de {HP7221}:rect (x y xdim ydim)
    (if (<= xdim ydim)
        (if (< xdim 8)
            ({HP7221}:frame x y xdim ydim)
            ({HP7221}:frame x y 4 ydim)
            ({HP7221}:rect (+ x 8) y (- xdim 8) ydim))
        (if (< ydim 8)
            ({HP7221}:frame x y xdim ydim)
            ({HP7221}:frame x y xdim 4)
            ({HP7221}:rect x (+ y 8) xdim (- ydim 8)))))

; Le vecteur
(de {HP7221}:vector (x1 y1 xdim ydim)
    ({HP7221}:move x1 (+ y1 ydim)) ({HP7221}:idraw xdim (- ydim)))

; Le cercle
(de {HP7221}:circle (r)
    ({HP7221}:princh "t")
    ({HP7221}:out-mbn r)
    ({HP7221}:princh "}"))

; .SSSection "Ecriture de Texte"

; Rotation du texte d'un angle de 0,90,180 ou 270 degres (angle= 0 ,1,2 ou 3)
(de {HP7221}:Rot (angle)
    ({HP7221}:prinstring "ww")
    ({HP7221}:princn (+ (* angle 4) 96)))

; Ecrit la LISTE de lignes de texte dans la boi^te de taille xdim,ydim
; (coordonne'es standard (non hp)) situee en x,y.
; Le texte s'e'crit suivant l'angle angle (compris entre 0 et 3)
(de {HP7221}:plot-text (x y xdim ydim liste angle)
    (let ((nbligne (length liste))      ; nombre de lignes a` e'crire
          (width 0)                     ; largeur max des lignes
          (largeur (if (oddp angle) ydim xdim))   ; largeur boite
          (hauteur (if (oddp angle) xdim ydim))   ; hauteur boite
          (margeg)                      ; marge a` gauche
          (margeh)                      ; marge au dessus du texte
          (chasse)                      ; taille horiz des caracte`res
          (ecartligne))                 ;taille verticale des caracteres
         ; on calcule la longueur maximale des lignes
         (let ((liste liste))
              (while liste
                     (setq width (max (plength (nextl liste)) width))))
         (setq ecartligne (div hauteur (+ nbligne 1))
               margeh (div (* ecartligne 4) 3)
               ; pour l'esthe'tique
               chasse (min (div ecartligne 2) (div largeur (+ width 6)))
               margeg (div (- largeur (* chasse width)) 2))
         ; on se'lectionne la fonte
         ({HP7221}:font-size chasse ecartligne)
         ; on calcule ou` commencer a` e'crire le 1er caracte`re
         (selectq angle
                  (0 ({HP7221}:move (+ margeg x) (+ y margeh)))
                  (1 ({HP7221}:move (+ margeh x) (+ y ydim (- margeg))))
                  (2 ({HP7221}:move (- (+ x xdim) margeg) (+ y ydim (- margeh))))
                  (3 ({HP7221}:move (- (+ x xdim) margeh) (+ y margeg)))
                  (t ({HP7221}:error "Angle should be 0,1,2,3" angle)))
         ; on positionne l'angle de rotation
         ({HP7221}:Rot angle)
         ({HP7221}:prinstring "~'") ; label-on
         ; on envoie pour chaque ligne de texte les caracteres suivis de CR LF
         (while liste
                ({HP7221}:prinstring (nextl liste))
                ({HP7221}:princn 13)  ; CR
                ({HP7221}:princn 10)) ; LF
         ({HP7221}:princn 3) ; label-off
         ({HP7221}:Rot 0)))

; .SSection "Re'ponse aux Messages de la Machine Virtuelle Standard"

; Rappelons que la machine virtuelle doit re'pondre aux messages
; de la machine virtuelle standard, a` savoir:
; .br
; - display-init (device) allumant la machine
; .br
; - display-end (device) e'teignant la machine
; .br
; - display-frame (device rect color) affichage d'un cadre
; .br
; - display-box (device rect color) affichage d'une boite pleine
; .br
; - display-vector (device rect color) affichage d'un vecteur
; .br
; - display-text (device rect lines rot color) affichage de lignes de texte

; On utilise des fichiers situe's dans un directory de fichiers
; temporaires
; Cette variable est de'pendante du syste`me: il ne faudrait pas ...
; .br
; ;** System dependant
(defvar *temporary-files-dir* (concat "/tmp/" (gensym)))

; On utilise le package des rectangles:

(de {HP7221}:display-init (*plotter*)
    (let ((colors ({Plotter}:nb-colors *plotter*))
          (list '(bleu noir vert rouge)) (name))
         (when (= 0 colors)
               (prinflush "Number of colors (4 or 8) ")
               (until (or (eq (setq colors (read)) 4) (eq colors 8)))
               ({Plotter}:nb-colors *plotter* colors))
         (when (= 8 colors) (setq list (mcons violet dore brun citron list)))
         (while list
                (setq name (concat *temporary-files-dir* (car list)))
                (oconsq Plotter files *plotter*
                        (omakeq PlotterFile
                                color (nextl list)     name name
                                chan (openo name)      empty t))))
    (output nil))

; La recopie du fichier et le controle de flux de'pendent du syste`me
; .br
; ;** System dependant
(de {HP7221}:display-end (*plotter*)
    ({HP7221}:close)
    ({Plotter}:curchan *plotter* (outchan))
    ({HP7221}:on) (flush)
    (let ((files ({Plotter}:files *plotter*)) (file))
         (while files
                (unless ({PlotterFile}:empty (setq file (nextl files)))
                        ; on rouvre le fichier en lecture
                        ; et on l'imprime sur la tty
                        (comline (catenate "stty start \ stop \;cat "
                                           ({PlotterFile}:name file)
                                           ";stty start \ stop \")))))
   ({Plotter}:curchan *plotter* (outchan))
   ({HP7221}:off) (flush)
   (terpri)
   (print "PPlot termine") ; une sucette a qui comprendra pourquoi!
   ({Plotter}:files *plotter* nil)
   'Done)

(de {HP7221}:display-frame (*plotter* rect color)
    ({HP7221}:change-color color)
    ({HP7221}:frame ({Rect}:xorg rect) ({Rect}:yorg rect)
                     ({Rect}:width rect) ({Rect}:height rect)))

(de {HP7221}:display-box (*plotter* rect color)
    ({HP7221}:change-color color)
    ({HP7221}:rect ({Rect}:xorg rect) ({Rect}:yorg rect)
                    ({Rect}:width rect) ({Rect}:height rect)))

(de {HP7221}:display-vector (*plotter* rect color)
    ({HP7221}:change-color color)
    ({HP7221}:vector ({Rect}:xorg rect) ({Rect}:yorg rect)
                      ({Rect}:width rect) ({Rect}:height rect)))

(de {HP7221}:display-text (*plotter* rect ltext angle color)
    (let ((xdim ({Rect}:width rect)) (ydim ({Rect}:height rect)))
         (unless (or (<= xdim 0) (<= ydim 0) (null ltext))
                 ({HP7221}:change-color color)
                 ({HP7221}:plot-text
                     ({Rect}:xorg rect) ({Rect}:yorg rect)
                     xdim ydim ltext
                     (cassq angle '((0 . 0) (1 . 3) (2 . 2) (3 . 1)))))))

; Permet l'e'criture dans le fichier approprie'
(de {HP7221}:change-color (color) 
    (let ((files ({Plotter}:files *plotter*)) (file))
         (while files 
                (if (eq ({PlotterFile}:color (car files)) color)
                    (setq file (nextl files))
                    (nextl files)))
         (unless file ({HP7221}:error "Not a color" color))
         ({Plotter}:curchan *plotter* ({PlotterFile}:chan file))
         (when ({PlotterFile}:empty file)
               ({HP7221}:select-pen color)
               ({PlotterFile}:empty file nil))))

; ferme tous les fichiers ouverts en e'criture
(de {HP7221}:close ()
    (let ((files ({Plotter}:files *plotter*)))
         (while files (close ({PlotterFile}:chan (nextl files)))))
    (output nil))

; .Section "COLORIX, COLORY & Co"

(deftclass {OutputDevice}:Screen)

; .SSection "Colory, soit encore l'ancien Colorix"

; ATTENTION: CETTE PARTIE DE CODE N'A JAMAIS ETE TESTEE

(deftclass {OutputDevice}:Colory)

; Une instance de Colory
(defvar *colory* (omakeq Colory))

(de {Colory}:color (color)
    (cassq '((bleu . 11) (noir . 4095) (vert . 176) (rouge . 2816)
             (violet . #.(- 4095 176)) (dore . 4032) (brun . 4095)
             (citron . 4032) (blanc . 0))))

(de {Colory}:display-init (device)
    (COLORIX 10 0) (repeat 1000 nil)
    (COLORIX 6 0) 
    (COLYREM 0 0 255 255 255)
    (COLYFLUSH 0 0 255 255 255))
    

(de {Colory}:display-end (device))

(de {Colory}:display-frame (device rect color)
    (COLSHAPE ({Rect}:xorg rect) ({Rect}:yorg rect)
              ({Rect}:width rect) ({Rect}:height rect)
              ({Colory}:color color)))

(de {Colory}:display-box (device rect color)
    (COLBOX ({Rect}:xorg rect) ({Rect}:yorg rect)
            ({Rect}:width rect) ({Rect}:height rect)
            ({Colory}:color color)))

(de {Colory}:display-vector (device rect color)
    ({Colory}:vector ({Rect}:xorg rect) ({Rect}:yorg rect)
                     ({Rect}:width rect) ({Rect}:height rect)
                     ({Colory}:color color)))

(de {Colory}:vector (xmin ymin width height color)
    (cond
        ((<= width 1) (COLSHAPE xmin ymin 1 height))
        ((<= height 1) (COLSHAPE xmin ymin width 1))
        (t ({Colory}:vector xmin ymin (div width 2) (div height 2) color)
           ({Colory}:vector (+ xmin (div width 2)) (+ ymin (div width 2))
                            (- width (div width 2)) (- height (div height 2))
                            color))))

(de {Colory}:display-text (device rect lines angle color)
    ({Colory}:text ({Rect}:xorg rect) ({Rect}:yorg rect)
                   ({Rect}:width rect) ({Rect}:height rect)
                   lines ({Colory}:color color)))

(de {Colory}:text (x y width height liste color)
    (let ((maxlength 0)                 ; width max des lignes
          (margeg)                      ; marge a` gauche
          (margeh))                     ; marge au dessus du texte
         ; on calcule la longueur maximale des lignes
         (let ((liste liste))
              (while liste
                   (setq maxlength (max (plength (nextl liste)) maxlength))))
         (setq margeg (div (- width (* 10 maxlength)) 2)
               margeh (div (- height (* 11 (length liste))) 2))
         (when (and (> margeg 0) (> margeh 0))
               (incr x margeg)
               (while liste
                      (COLTEXT (nextl liste) x (incr y margeh) color 1)))))


