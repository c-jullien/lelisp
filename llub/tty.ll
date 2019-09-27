(defvar #:sys-package:bitmap '#:bitmap:virtty)
(defvar #:sys-package:colon '#:bitmap:virtty)

(defstruct window
    left top width height title hilited visible
    screen)

(de :make-window (w)
    (#:window:screen w (:make-framed-screen wi he (string ti) hi))
    (:redisplay w (sub1 le) (sub1 to) (add 2 wi) (add 2 he)))

(de :make-framed-screen (w h ti hi)
    (let ((s (makestring (mul (add w 2) (add h 2)) #/.)))
         (bltscreen s :blankscreen 
                    (add w 2) (add h 2)
                    (add1 (bitxmax)) (add1 (bitymax))
                    1 1
                    0 0 
                    w h)
         (unless (= hi 0)
                 (fillstring s 0 #/= (add 2 w)))
         (bltstring s 1 ti 0 (slength ti))
         s))

(dmd :normalizeq (var mini maxi)
    `(progn
           (setq ,var (min ,var ,maxi))
           (setq ,var (max ,var ,mini))))

;  Les fonctions sur les bitmap

(defvar #:bitmap:name #:sys-package:tty)
(defvar #:bitmap:xmax (sub1 (tyxmax)))
(defvar #:bitmap:ymax (tyymax))

(de bitxmax ()
    #:bitmap:xmax)

(de bitymax ()
    #:bitmap:ymax)


;  Les globales

(defvar :screen                 ; la me'moire d'e'cran
    (makestring (mul (add1 (bitxmax)) (add1 (bitymax))) #\sp))
(defvar :oscreen                ; pour le redisplayscreen
    (copy :screen))
(defvar :blankscreen            ; un bel e'cran tout blanc
    (copy :screen))             ; pour effacer facilement

