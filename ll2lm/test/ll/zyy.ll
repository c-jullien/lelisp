(defmacro mydef (x y)
  `(eval-when (load eval compile)
	      (setq ,x ,y))
)

(mydef u-zyy1 33)
