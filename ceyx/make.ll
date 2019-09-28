; .EnTete "Programmer en Ceyx" "" "Annexe I: Le Kit de Distribution"
; .Annexe I "Le Kit de Distribution"
; .Auteur "Jean-Marie Hullot, Bertrand Serlet"

(setq #:system:read-case-flag t)

; .Section "Installation"
; Vous venez de recevoir le kit de distribution Ceyx version 5.
; Vous devez avoir au minimum dans ce kit les fichiers suivants:
; 
; \(bu \fBmake.ll\fR, c'est a` partir de ce fichier que sera
; engendre'e une image me'moire standard de Ceyx. C'est le fichier
; que vous e^tes en train de lire.
; 
; Dans le cas d'une distribution \fIavec les sources\fR:
; 
; \(bu \fBceyx.ll\fR, ce fichier contient tout le noyau de Ceyx, correspondant
; aux chapitres 1 et 2 du manuel.
; 
; \(bu \fBcxcp.ll\fR, qui contient le pre'compilateur Ceyx de'crit au chapitre
; 3 du manuel.
; 
; \(bu \fBceyxlib.ll\fR, qui contient la biliothe`que initiale Ceyx de'crite au 
; chapitre 4.
; 
; Dans le cas d'une distribution \fIsans les sources\fR:
; 
; \(bu \fBceyx.ll\fR, qui regroupe les trois fichiers pre'ce'dents en format
; loader.
; 
; 
; 
; Une distribution standard contient e'galement ge'ne'ralement les fichiers
; 
; \(bu \fBdefrule.ll\fR, qui contient la construction defrule pour de'finir des
; re`gles (cf. chapitre 4).
; 
; \(bu \fBdescribe.ll\fR, qui contient un certains nombres d'utilitaires
; de'finis au chapitre 1.
; 
; \(bu \fBcoord.ll\fR, dans lequel sont range'es des structures de manipulations
; d'objets e'le'mentaires dans le plan carte'sien. Ce fichier est
; inclus in extenso dans l'annexe II.
; 
; \(bu \fBunion.ll\fR, dans lequel nous de'finissons une structure d'ensembles
; ordonne's. Ce fichier est inclus in extenso dans l'annexe III.
; 
; \(bu \fBleflip.ll\fR, imple'mentation du langage Flip. Ce fichier est
; inclus in extenso dans l'annexe IV.
; 
; \(bu \fBstream.ll\fR, dans lequel sont de'finies des structures permettant
; de jouer avec les entre'es sorties. Ce fichier est inclus in extenso dans
; l'annexe V.
; 
; \(bu \fBvprint.ll\fR, qui est le code du formatteur dont la documentation
; est donne'e dans le rapport \fI"Vprint, Le Composeur Ceyx"\fR.
; 
; D'autres fichiers peuvent se trouver la`, regardez ce qu'ils font,
; ge'ne'ralement chaque fichier est auto-documente'.
; 
; Avant toute chose, vous devez mettre dans la valeur de la variable
; #:Ceyx:directory, l'emplacement ou` vous voulez installer Ceyx
; sur votre machine. Il peut e^tre exprimer par rapport a`
; l'installation LeLisp.

(defvar #:Ceyx:directory (catenate #:system:directory "ceyx/"))

; Ceci e'tant fait, vous n'avez plus qu'a`:
; 
; \(bu appeler lelisp,
; 
; \(bu charger le fichier make.ll par (load "make.ll"),
; 
; \(bu appeler (make-ceyx).
; 
; et ainsi une image me'moire de nom ceyx.core est construite.
; Notez que l'image me'moire construite ne contient 
; que les fichiers de base ceyx.ll, ceyxlib.ll, cxcp.ll
; (ou seulement ceyx.ll qui contient les trois pour les
; distributions sans le source). Les autres
; peuvent e^tre charge's a` la demande avec la fonction ceyx-load.

; La fonction make-ceyx est de'finie ci-dessous:

(de make-ceyx name
   (setq name (if (consp name) (car name) 'ceyx))
   (print "Avant chargement : " (gc t))
   (ceyx-load ceyx)
   (ceyx-load compat)
   (ceyx-autoload describe describe mdescribe tracesems help)
   (ceyx-autoload defrule defrule)
   (print "Avant compilation : " (gc t))
   (cxcp)
   (print "Apres compilation : " (gc t))
   (save-std name "Ceyx - Version 15.2"))

; .Section "Divers"


; Pour charger seulement une fois les fichiers de la librairie:

(df ceyx-load args
    (mapc (lambda (x)
             (unless (get x 'ceyx-loaded)
                 (print "Loading from Ceyx library " x)
                 (loadfile (catenate #:Ceyx:directory x ".ll") t)
          (putprop x t 'ceyx-loaded)))
          args))

(df ceyx-autoload (file . symbs)
    (eval (mcons 'autoload (catenate #:Ceyx:directory file ".ll") symbs)))


