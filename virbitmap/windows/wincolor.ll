;;;; .EnTete	"Le-Lisp version 15.2x" " " "wincolor.ll"
;;;; .Date	"10/19/93"
;;;; .EnPied	"wincolor.ll"
;;;; .Version	"1.10"
;;;; .Auteur 	"C. Jullien"
;;;; .Annexe I	""

(eval-when (eval)
	   (unless (getdef '#:display:windows:winbitmap)
		   (libload #u"windows/winstruct")))

(defvar #:sys-package:colon '#:display:windows)

(defmessage errnomorecolors
            (french "plus de couleurs disponibles")
            (english "no more colors available"))
                       ;;;a^ ;colours pour les anglais

(unless (boundp ':default-colors)
	(defvar :default-colors
                '(("black"         0     0     0)
                  ("white"     32767 32767 32767)
                  ("red"       32767     0     0)
                  ("green"         0 32767     0)
                  ("blue"          0     0 32767)
                  ("yellow"    32767 32767     0)
                  ("cyan"          0 32767 32767)
                  ("magenta"   32767     0 32767)
                  ("grey"      16384 16384 16384)
                  ("lightgrey" 24576 24576 24576)
                  ("wheat"     32767 32767 26112) )))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; les couleurs ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(defun :make-color (display color r g b)
   (let ((c (windows_make_color ;(:windows-display display)
                     (logshift r -7)
                     (logshift g -7)
                     (logshift b -7)
                     0)))
        (when (eq c -1)
              (error ':make-color 'errnomorecolors (list r g b)))
        (:do-color display color c r g b)))

(defun :make-mutable-color (display color r g b)
   (let ((c (windows_make_color ;(:windows-display display)
                     (logshift r -7)
                     (logshift g -7)
                     (logshift b -7)
                     1)))
        (when (eq c -1)
              (error ':make-mutable-color 'errnomorecolors (list r g b)))
        (:do-color display color c r g b)))

(defun :make-named-color (display color s)
   (let (r g b)
        (if (any #'(lambda (c)
                      (when (equal (car c) s)
                            (setq r (cadr c))
                            (setq g (caddr c))
                            (setq b (cadddr c))))
                 :default-colors)
            (:make-color display color r g b)
            (error ':make-named-color "not named-color" s))))


(defun :do-color (display color wincolor r g b)
   (when (#:display:window display)
         (windows_select_palette
                  (:window-graph-env (#:display:window display))))
   (or (any #'(lambda (c) (when (eq (:wincolor c) wincolor) c))
            (#:display:colors display))
       (progn
              (#:color:red   color r)
              (#:color:green color g)
              (#:color:blue  color b)
              (:wincolor color wincolor)
              color)))


;;;
;;; Kills a color.
;;; Does nothing in a b/w display.

(defun :kill-color (display c)
   (when (gt (:depth display) 1)
         (windows_kill_color ;(:windows-display display)
                  (:wincolor c))))


(defun :red-component (display color red)
   (windows_color_component
          ; (:windows-display display)
            (:wincolor color)
            (logshift red -7)
            (logshift (#:color:green color) -7)
            (logshift (#:color:blue color) -7)
            0))

(defun :green-component (display color green)
   (windows_color_component
          ; (:windows-display display)
            (:wincolor color)
            (logshift (#:color:red color) -7)
            (logshift green -7)
            (logshift (#:color:blue color) -7)
            1))

(defun :blue-component (display color blue)
    (windows_color_component
           ; (:windows-display display)
           (:wincolor color)
           (logshift (#:color:red color) -7)
           (logshift (#:color:green color) -7)
           (logshift blue  -7)
           2))

;;;
;;; Given a color named NAME, returns the RGB values or () if it fails.

(defun :name-to-rgb (display name rgb)
   (any #'(lambda (c)
             (when (equal (car c) name)
                   (vset rgb 0 (cadr c))
                   (vset rgb 1 (caddr c))
                   (vset rgb 2 (cadddr c))
                   rgb))
        :default-colors))

;;;
;;; Given a colored pixel value, returns corresponding RGB values.
;;;

(defun :get-rgb-values (display pixel rgb)
   (let ((color (any #'(lambda (c)
                          (when (eq (send 'extend c) pixel)
                                c))
                       (#:display:colors display))))
        (when
              (vset rgb 0 (#:color:red   color))
              (vset rgb 1 (#:color:green color))
              (vset rgb 2 (#:color:blue  color))
              rgb)))
