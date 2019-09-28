; Le bitmap virtuel sur virtty

(let ((#:system:path (cons (catenate #:system:virbitmap-directory "bvtty/")
			   #:system:path)))
  (if (featurep 'loader)
      (loadmodule "bvtty")
    (libloadfile "bvtty" t)))

