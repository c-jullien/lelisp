(synonymq coerce-namestring identity)

(defun getext (m)
  (mapc (lambda (f) (packagecell f 'dont-touch-me))
	(getdefmodule (readdefmodule m) 'export) ))

(getext 'files)
(getext 'module)

(de loadfile (file redef?)
  (let ((#:system:loaded-from-file file)
	(#:system:redef-flag redef?)
	(#:sys-package:colon #:sys-package:colon)
	(#:system:in-read-flag ())
	(inchan (inchan)) )
    (inchan (openi file))
    (protect
      (untilexit eof (eval (read)))
      (let ((in (inchan))) (when in (close in)))
      (inchan inchan) )
    file))

(loadfile
   (catenate #:system:llib-directory 'files #:system:lelisp-extension)
   ())
