(de initty term
    ; on cherche et on charge le vrai nom de terminal
    (setq #:tty:name 
          (symbol () 
                  (cond ((consp term) 
                         ; l'argument fourni
                         (car term))
                        ((getenv "TERM"))
                        ((system)))))
    ; on regarde si l'on n'aurait pas de'ja` fait initty
    ; sur le me^me terminal physique.
    (unless (and #:sys-package:tty
                 (equal (string #:tty:name) (string #:sys-package:tty)))
            (let ((file (catenate #:system:virtty-directory
                                  #:tty:name
                                  #:system:lelisp-extension)))
                 ; on essaye de charger le fichier relatif au terminal
                 (if (probefile file)
                     (loadfile file t)
                     (or (consp (catcherror t 
                                 ; on charge le traducteur termcap -> virtty
                                 (libload termcap)
                                 ; on effectue la traduction
                                 ; ne pas foutre en l'air le FUNCALL
                                 (funcall '#:termcap:compile #:tty:name file)
                                 ; on decharge le traducteur
                                 (mapc 'remob (oblist 'termcap))
                                 ; on charge le fichier traduit
                                 (loadfile file t)))
                         (consp (catcherror t 
                                 ; on charge le traducteur terminfo -> virtty
                                 (libload terminfo)
                                 ; on effectue la traduction
                                 ; ne pas foutre en l'air le FUNCALL
                                 (funcall '#:terminfo:compile #:tty:name file)
                                 ; on decharge le traducteur
                                 (mapc 'remob (oblist 'terminfo))
                                 ; on charge le fichier traduit
                                 (loadfile file t)))))
            #:tty:name)))
