; Le bitmap virtuel sur virtty

(let ((#:system:path (cons 
                        (if (or #:system:unixp #:system:dosp)
                            (catenate #:system:virbitmap-directory "bvtty/")
                           "lelisp$disk:[virbitmap.bvtty]")
                           #:system:path)))  

  (if (featurep 'loader)
      (loadmodule "bvtty")
    (loadmodule "bvtty" () t)))
