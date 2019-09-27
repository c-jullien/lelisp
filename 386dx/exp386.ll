;;; .EnTete    "Le-Lisp version 15.21" " " "exp386.ll"
;;; .Date      "2003/05/23"
;;; .EnPied    "exp386.ll"
;;; .Copyright "ELIGIS"

;;; Verification de la version

(unless (>= (version) 15.2)
        (error 'load 'erricf 'mac386))

(let ((x (getenv "EXPANDSYSTEM")))
     (when (eq x 'cygwin)
	   (defun system () 'cygwin)))

;;; Les valeurs par defaut.

(defvar 31BITFLOATS  t)			; le type des flottants.
(defvar expunix      #:system:unixp)	; t pour Unix, () pour OS/2 ou DOS.
(defvar unix-as-flag ())		; l'assembleur a utiliser (pour UNIX)
(defvar syst         (cond
                           ((eq (system) 'win32)     'win32)
                           ((eq (system) 'win64)     'win64)
                           ((eq (system) 'win95)     'win95)
                           ((eq (system) 'cygwin)    'unix)
                           (expunix                  'unix)
                           (t                        (system))))

(defun expand-files ()
   (let ((file (getenv "EXPFILE")))
        (if file
            (loadfile file t)
            (expand-shell))))

(defun init-expand ()
   (selectq syst
      (win32     (setq       expunix         ())
                 (setq       unix-as-flag    ())
                 (redefvalue FLOATSTACK       0)
                 (redefvalue RETN             0)
                 (redefvalue UNDERSCORED      0)
                 (redefvalue SAVEDSTACK       0)
                 (redefvalue IT_LOOP          1))
      (win64     (setq       expunix         ())
                 (setq       unix-as-flag    ())
                 (redefvalue FLOATSTACK       0)
                 (redefvalue RETN             0)
                 (redefvalue UNDERSCORED      0)
                 (redefvalue SAVEDSTACK       0)
                 (redefvalue IT_LOOP          1))
      (win95     (setq       expunix         ())
                 (setq       unix-as-flag    ())
                 (redefvalue FLOATSTACK       0)
                 (redefvalue RETN             0)
                 (redefvalue UNDERSCORED      0)
                 (redefvalue SAVEDSTACK       0)
                 (redefvalue IT_LOOP          1))
      (cygwin    (setq       expunix          t)
                 (setq       unix-as-flag     t)
                 (redefvalue FLOATSTACK       0)
                 (redefvalue RETN             0)
		 (redefvalue UNDERSCORED      0)
                 (redefvalue SAVEDSTACK       0)
                 (redefvalue IT_LOOP          0))
      (unix      (setq       expunix          t)
                 (setq       unix-as-flag     t)
                 (redefvalue FLOATSTACK       0)
                 (redefvalue RETN             0)
		 (if (or (getenv "UNDERSCORED")
			 (eq (system) 'cygwin))
                     (redefvalue UNDERSCORED  0)
                     (redefvalue UNDERSCORED  1))
                 (redefvalue SAVEDSTACK       0)
                 (redefvalue IT_LOOP          0))))

(mapc #'(lambda (x)
           (print "Loading " x "...")
           (loadfile x t))
      '(expand.ll macro386.ll mac386.ll llm3.ll masm2as.ll))

(when (featurep 'complice)
      (print "Compiling ...")
      (compile-all-in-core))
