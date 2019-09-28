(unless (featurep 'pathname) (loadmodule "path"))

(defmessage #:pm:BVPM        (english " PM Virtual Bitmap: ")
                             (french  " Fene^trage Virtuel PM: "))
(defmessage #:pm:LOADPM      (english " Loading pm module, ")
                             (french  " Chargement du module pm, "))
(defmessage #:pm:INTERPRETED (english " interpreted, ")
                             (french  " interprete', "))

(prinflush "Le-Lisp " (version) (get-message '#:pm:BVPM))

(prinflush (get-message '#:pm:LOADPM))

(let ((#:system:path
       (cons (namestring
              (make-pathname
               (pathname-host #:system:virbitmap-directory)
               (pathname-device #:system:virbitmap-directory)
               (pathname-directory (catenate #:system:virbitmap-directory
                                             "pm\"))))
             #:system:path)))
     (if (featurep 'loader)
         (loadmodule "pm")
         (prinflush (get-message '#:pm:INTREPRETED))
         (loadmodule "pm" () t)))

;;;
;;; Met a` jour la variable :

(setq #:sys-package:bitmap '#:display:pm)

; Positionne la liste des evenements de la session graphique Le-Lisp
;(setq #:display:pm:events-list
;      (list 'down-event 'up-event 'ascii-event 'drag-event
;            'enterwindow-event 'leavewindow-event))

; pour ne perdre de place
(remob '#:pm:LOADPM)
(remob '#:pm:BVPM)
(remob '#:pm:INTERPRETED)

(print "ok.")

