(synonymq loader-sav loader)
(synonymq loaderesolve-sav loaderesolve)


(loader-sav '((fentry loaderesolve subr0)
	      (mov '(lambda () (loaderesolve-sav '((end)))) a1)
	      (mov '0 a4)
	      (jmp #:llcp:ffuncall)
	      (end)))

(when (typefn '#:ld68k:ins)
(loader-sav '((fentry loader nsubr)
	      (mov '(lambda (#:ld68k:lobj . #:ld68k:talkp)
		      (when (consp #:ld68k:talkp)
			    (setq #:ld68k:talkp (car #:ld68k:talkp)))
		      (let ((#:loader:pccurrent (#:system:ccode))
			    (#:ld68k:llabels) (#:ld68k:llabels-nr)
			    (#:ld68k:llitt)
			    (#:ld68k:fntname 'loader)
			    #:ld68k:codop
			    #:ld68k:arg1
			    #:ld68k:arg2
			    #:ld68k:arg3
			    #:ld68k:localstack
			    #:ld68k:valaux
			    #:ld68k:f
			    (#:ld68k:nwl 0)
			    #:ld68k:local-cons-llitt)
			(catcherror t
				    (tag #:ld68k:tagerr
					 (while #:ld68k:lobj
					   (when (gtadr #:loader:pccurrent
							#:ld68k:ecode)
						 (with ((outchan ()))
						       (print errfcod)
						       (exit #:system:toplevel-tag)))
					   (setq #:ld68k:nwl 0)
					   (#:ld68k:ins (nextl #:ld68k:lobj))
					   (when #:ld68k:talkp (terpri)))
					 (#:ld68k:ins '(endl)))
				    (#:system:ccode #:loader:pccurrent)
				    (if (and #:ld68k:stopcopy
					     (typefn '#:ld68k:patch-cons-llitt))
					(#:ld68k:patch-cons-llitt))
				    (setq #:ld:cons-llitt
					  (nconc #:ld68k:local-cons-llitt
						 #:ld:cons-llitt)))
			())) a1)
	      (jmp #:llcp:ffuncall)
	      (end)))
)

(newl #:module:compiled-list 'loader)
