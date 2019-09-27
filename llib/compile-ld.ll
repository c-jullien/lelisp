;;; Used only for the compilation of load68k.lm
(print "Loading compileloader")
(defvar #:internal:maxhole)
;;; remove all the definitions relating to loader for the image that is
;;; compiling the loader (lap68k in 15.22)
;;; , so that resetfn doesn't call a half-compatible
;;; loader.
(mapc '(lambda (a) (print "removing " a)(remfn a))
      (append '(user-interrupt syserror)
	      (getdefmodule (readdefmodule 'loader) 'export)))
(print "Loaded compileloader")
