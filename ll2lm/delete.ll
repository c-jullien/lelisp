;;;
;;; deleting module from references file
;;;
;;; $Id: delete.ll,v 1.1 2006/12/09 11:22:08 jullien Exp $
;;;

(setq #:sys-package:colon '{llmodule})

(defun :delete-modules (ref-file lmod)
  (let ((mr (if (probefile ref-file)
		({llmodulereferences}:read-from-file (standardmodulereferences)
						     ref-file)
	      (error 'sh-analyze 'errfile ref-file)))
	(rw ()))
    (mapc (lambda(m)
	    (let ((im (assq m ({llmodulereferences}:modulesimport mr))))
	      (when im
		    (setq rw t)
		    ({llmodulereferences}:modulesimport
		     mr
		     (delete im ({llmodulereferences}:modulesimport mr)))
		    (mapc (lambda(l) (delete m l))
			  ({llmodulereferences}:modulesimport mr))))
	    (let ((ex (assq m ({llmodulereferences}:modulesexport mr))))
	      (when ex
		    (setq rw t)
		    ({llmodulereferences}:modulesexport
		     mr
		     (delete ex ({llmodulereferences}:modulesexport mr)))))
	    (let ((od (assq m ({llmodulereferences}:modulesotherdef mr))))
	      (when od
		    (setq rw t)
		    ({llmodulereferences}:modulesotherdef
		     mr
		     (delete od ({llmodulereferences}:modulesotherdef mr)))))
	    (let ((in (assq m ({llmodulereferences}:modulesinternal mr))))
	      (when in
		    (setq rw t)
		    ({llmodulereferences}:modulesinternal
		     mr
		     (delete in ({llmodulereferences}:modulesinternal mr)))))
	    )
	  lmod)
    (if rw
	({llmodulereferences}:write-to-file mr ref-file)
      (#:crunch:advise "nothing to delete from" ref-file))))

    
