(defun find-redef ()
  (maploblist (lambda (x)
                (getprop x '#:gell-resetfn:body-property))))
