(unless (featurep 'pathname)(loadmodule "path"))

(defmessage #:ps:BVPS   (english " PS Virtual Bitmap V1.76: ")
                          (french " Fene^trage Virtuel PS V1.76: "))
(defmessage #:ps:LOADPS (english "loading ps module, ")
                          (french "chargement du module ps, "))
(defmessage #:ps:INTERPRETED (english "interpreted, ")
                              (french "interprete', "))

(prinflush "Le-Lisp " (version) (get-message '#:ps:BVPS))

(prinflush (get-message '#:ps:LOADPS))

(let ((#:system:path
       (cons (directory-namestring
              (make-pathname
	       ()
	       ()
               (append (pathname-directory #:system:virbitmap-directory)
                       (pathname-directory #u"PS/"))))
	     #:system:path)))
  (unless (getdef '#:stringio:out:syserror)
	  (loadmodule 'stringio))
  (if (featurep 'loader)
      (loadmodule "ps")
    (prinflush (get-message '#:ps:INTERPRETED))
    (loadmodule "ps" () t)))

(print "ok.")
