; la description VIRTTY du tampon SHELL d'emacs
;
; A utiliser par (initty 'emacs) lorsqu'on est sous lelisp dans le
; shell-mode d'emacs

(setq #:system:line-mode-flag t)
(setq #:system:real-terminal-flag ())

(de #:tty:emacs:tyinstring (s)
    (let ((c ())
          (sl (slen s))
          (n 0))
	 (tag ligne-trop-longue
              (until (eq (setq c (tyi)) #^J)
		     (sset s n c)
                     (when (ge (setq n (add1 n)) sl)
                           (exit ligne-trop-longue))))
         n))

(de #:tty:emacs:tynewline ()
    (tycn #^J))

(de #:tty:emacs:tyattrib (x)
    (tyo (if x ">>" "<<")))

(defvar #:tty:emacs:tyattrib ())

(setq #:sys-package:tty '#:tty:emacs)

