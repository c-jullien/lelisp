(defextern x11_set_dash (external external fix fixvector fix))

(setq #:sys-package:colon '#:display:x11)

(defmacro :graph-env-address (ge)
  `(vref (#:graph-env:extend ,ge) 1))

(defmacro :display-address (di)
  `(#:display:extend ,di))

(defun :current-line-style (display graph-env line-style)
  (let ((style (vref (:line-style-vector display) line-style))
	(dash #[3]))
    (x11_set_line_style (:display-address display)
			(:graph-env-address graph-env)
			(vref style 0)
			(vref style 1))
    (when (gt (vlength style) 2) (setq dash (vref style 2)))
    (x11_set_dash  (:display-address display)
		   (:graph-env-address graph-env)
		   0 dash (vlength dash))))

