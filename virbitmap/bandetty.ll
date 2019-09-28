(let ((#:system:path (cons (catenate #:system:virbitmap-directory "bvtty/")
			   #:system:path)))
  (if (featurep 'loader)
      (loadmodule "bandetty")
    (libloadfile "bandetty" t)))


