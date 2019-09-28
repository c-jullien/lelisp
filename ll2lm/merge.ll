;;;
;;; merging 2 references files
;;;
;;; $Id: merge.ll,v 1.1 2006/12/09 11:22:08 jullien Exp $
;;;

(setq #:sys-package:colon '{llmodule})

(defun :merge-ref (prj prj1 prj2)
  (let ((f1 ({rtproject}:ref-file prj1))
	(f2 ({rtproject}:ref-file prj2))
	)
    (unless (probefile f1)
	    (error '-merge 'errfile f1))
    (unless (probefile f2)
	    (error '-merge 'errfile f2))
    (let ((mr1 (standardmodulereferences))
	  (mr2 (standardmodulereferences))
	  (f 'nconc)
	  i )
      ({llmodulereferences}:read-from-file mr1 f1)
      ({llmodulereferences}:read-from-file mr2 f2)

      (when (setq i (intersection ({llmodulereferences}:modulesimport mr1)
				  ({llmodulereferences}:modulesimport mr2)
				  (lambda(x y)(eq (car x)(car y))) ))
	    (#:crunch:warning 10 i
			      ({llmodulereferences}:projectname mr1)
			      ({llmodulereferences}:projectname mr2))
	    (setq f ':nconc))

      ({llmodulereferences}:projectname mr1 ({rtproject}:name prj))

      ({llmodulereferences}:modulesimport
       mr1
       (funcall f
		({llmodulereferences}:modulesimport mr1)
		({llmodulereferences}:modulesimport mr2)))

      ({llmodulereferences}:modulesexport
       mr1
       (funcall f
		({llmodulereferences}:modulesexport mr1)
		({llmodulereferences}:modulesexport mr2)))

      ({llmodulereferences}:modulesotherdef
       mr1
       (funcall f
		({llmodulereferences}:modulesotherdef mr1)
		({llmodulereferences}:modulesotherdef mr2)))

      ({llmodulereferences}:modulesinternal
       mr1
       (funcall f
		({llmodulereferences}:modulesinternal mr1)
		({llmodulereferences}:modulesinternal mr2)))

      ({llmodulereferences}:write-to-file mr1 ({rtproject}:ref-file prj))
      )))

(de :nconc (l1 l2)
    (union l1 l2 (lambda(x y)(eq (car x)(car y)))))
      
