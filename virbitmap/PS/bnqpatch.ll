;;;
;;; BNQ library conflicts with PS generation
;;;
;;; Set the variable #:display:ps:no-ratio to T during 
;;; PS generation.
;;;
;;; Load this patch after BNQ

(defvar #:display:ps:no-ratio)

(redefun #:r:q:/:prin (q)
         (if #:display:ps:no-ratio
             (prin (float q))
           (self q)))

