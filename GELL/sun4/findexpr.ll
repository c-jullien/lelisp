
(defun findexpr ()
  (with ((outchan (openo "findexpr.txt")))
	(let ((l))
	  (mapoblist (lambda (x)
		       (when (memq (typefn x) '(expr fexpr))
			     (newl l x))))
	  (setq l (sortp l))
	  (mapc (lambda (x)
'		  (print)
		  (print "; ============ " x)
'		  (print)
'		  (pprint (getdef x))
		  )
		l))))


(findexpr)

