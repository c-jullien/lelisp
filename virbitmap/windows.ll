(unless (featurep 'pathname) (loadmodule "path"))

(defmessage #:windows:BVWINDOWS   (english " WINDOWS Virtual Bitmap: ")
                                  (french  " Fene^trage Virtuel WINDOWS: "))
(defmessage #:windows:LOADWINDOWS (english " Loading Windows module, ")
                                  (french  " Chargement du module Windows, "))
(defmessage #:windows:INTERPRETED (english " interpreted, ")
                                  (french  " interprete', "))
(defmessage #:windows:NOTYET      (english " Not yet implemented.")
                                  (french  " Pas encore implemente'."))

(prinflush "Le-Lisp " (version) (get-message '#:windows:BVWINDOWS))

(prinflush (get-message '#:windows:LOADWINDOWS))

(if (neq (getglobal 'windows_bitprologue) 0)
    (let ((#:system:path
            (cons (namestring
                      (make-pathname
                            (pathname-host #:system:virbitmap-directory)
                            (pathname-device #:system:virbitmap-directory)
                            (pathname-directory (catenate
                                                    #:system:virbitmap-directory
                                                    "windows\"))))
                  #:system:path)))
         (if (featurep 'loader)
             (loadmodule "win")
             (prinflush (get-message '#:windows:INTREPRETED))
             (loadmodule "win" () t)))
   (terpri)
   (print (get-message '#:windows:NOTYET)))

;;;
;;; Met a` jour la variable :

(setq #:sys-package:bitmap '#:display:windows)

; Positionne la liste des evenements de la session graphique Le-Lisp
;(setq #:display:windows:events-list
;      (list 'down-event 'up-event 'ascii-event 'drag-event
;            'enterwindow-event 'leavewindow-event))

;  Positionne l'indicateur qui determine l'etat de Le-Lisp par rapport au 
;  Window Manager, pour les manipulation de fenetres.
;  --> t  : Le-Lisp ne tient pas compte du Window Manager
;  --> () : Le-Lisp tient compte du Window Manager

;(setq #:display:windows:override-redirect ())

; pour ne perdre de place
(remob '#:windows:LOADWINDOWS)
(remob '#:windows:BVWINDOWS)
(remob '#:windows:INTERPRETED)
(remob '#:windows:NOTYET)

(print "ok.")
