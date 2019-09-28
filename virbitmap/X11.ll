(unless (featurep 'pathname)(loadmodule "path"))

(defmessage #:x11:LINKX11 (english "linking X11lib, ")
                          (french "Lien de X11lib, "))
(defmessage #:x11:BVX11   (english " X11 Virtual Bitmap: ")
                          (french " Fene^trage Virtuel X11: "))
(defmessage #:x11:LOADX11 (english "loading x11 module, ")
                          (french "chargement du module x11, "))
(defmessage #:x11:INTERPRETED (english "interpreted, ")
                              (french "interprete', "))

;;;
;;; Test if LeLisp Binary is already linked with X11 or not
;;; if not, try a dynamic link if when offered by the system
;;;
(unless (or (neq 0 (getglobal 'x11_create_window))
	    (neq 0 (getglobal '_x11_create_window)))
      (print (get-message '#:x11:LINKX11))
      (unless (featurep 'callext)
	      (loadmodule "callext"))
      (cload (enough-namestring #u"o/x11.o -lX11")) ) 

(prinflush "Le-Lisp " (version) (get-message '#:x11:BVX11))

(prinflush (get-message '#:x11:LOADX11))

(let ((#:system:path
       (cons (directory-namestring
              (make-pathname
	       ()
	       ()
               (append (pathname-directory #:system:virbitmap-directory)
                       (pathname-directory #u"X11/"))))
	     #:system:path)))
  (if (featurep 'loader)
      (loadmodule "x11")
    (prinflush (get-message '#:x11:INTERPRETED))
    (loadmodule "x11" () t)))

;;;
;;; Met a jour la variable :

(setq #:sys-package:bitmap '#:display:x11)


;  Positionne la liste des evenements de la session graphique Le-Lisp 
(setq #:display:x11:events-list
      (list 'down-event 'up-event 'ascii-event 'drag-event
	    'enterwindow-event 'leavewindow-event))

;  Positionne l'indicateur qui determine l'etat de Le-Lisp par rapport au 
;  Window Manager, pour les manipulation de fenetres.
;  --> t  : Le-Lisp ne tient pas compte du Window Manager
;  --> () : Le-Lisp tient compte du Window Manager
(setq #:display:x11:override-redirect ())

; pour ne pas perdre de place
(remob '#:x11:LOADX11)
(remob '#:x11:BVX11)
(remob '#:x11:LINKX11)
(remob '#:x11:INTERPRETED)

(print "ok.")
