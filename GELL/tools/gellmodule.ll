(setq #:system:read-case-flag t)

(setq gelldir "/nfs/work/lelisp/GELL/")

(if (eq (system) '|Chp9700|)
    (let ((#:system:path (mcons (catenate gelldir "C/")
				"/nfs/work/lelisp/llib/"
				"/nfs/work/lelisp/llobj/"
				"/nfs/work/lelisp/llmod/"
				#:system:path)))
      (loadmodule 'virbit)))

(unless (typefn 'module-to-c)
	(if (eq (system) '|Chp9700|)
	    (let ((#:system:path (mcons (catenate gelldir "C/")
					#:system:path)))
	      (loadmodule 'modtoc))
	  (loadfile (catenate gelldir "C/modtoc.lo")  t))
	
	(setq #:modtoc:peephole-optimize-p       t
	      #:modtoc:optimize-local-labels-p   t
	      #:modtoc:stats-on-C-size-p         ()
	      #:modtoc:peephole-debug            ()
	      #:modtoc:doit-debug                ()
	      #:modtoc:C-verbose-mode            ()))

(loadfile (catenate gelldir "tools/gellutil.ll")  t)

