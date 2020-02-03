; Ce module contient des extensions de LL15.22 permettant
; d'utiliser les bibliothe`ques de LLIB avec Ce-Lisp.


; .Section "Les fonctions utiles de startup.ll"

(defun subversion ()
  ;; donne la version de maintenance de 15.2 de l'anne'e en cours.
  3)

(defun herald ()
  ;; Change le herald du lelispbin pour tenir compte de la nouvelle date
  ;; dans les distributions de maintenance.
  ;; On le redefinit me^me quand la date est la meme que dans llm3,
  ;; parce que ttymsg n'est pas la me^me que print.
  ;; Comme c,a les distributions
  ;; de maintenance se comportent exactement de la me^me fac,on.
  (with ((outchan ()))
	(print "; Le-Lisp (by INRIA) version 15.25 "
	       "(07/Jul/93)   [" (system) "]"))
  ())

(defun explodech (s)
  (mapcar 'ascii (explode s)))

(defun implodech (l)
  (implode (mapcar 'cascii l)))

(defun lhoblist (s)
  ;; retourne tous les symboles qui de'butent par la chai^ne s
  (maploblist (lambda (x) (index s x 0))))


; .Section "Pour exe'cuter du code compile' par Complice"

(loader '(
            (fentry #:llcp:nlist subr0)
            (pop a3)
            (mov nil a1)
            (bra 4)
         3  (pop a2)
            (jcall xcons)
         4  (sobgez a4 3)
            (bri a3)
            (fentry #:llcp:errwna subr2)    ; A1 <- fnt; A2 <- bad-nb-arg
            (mov a2 a3)
            (mov 'errwna a2)
            (jmp error)
            (end) )
)



; .Section "Construction de l'environnement standard"
 
; Si cet indicateur = T, un INITTY est re'alise' apre`s
; chaque restore-core d'images fabrique'es par SAVE-STD.

(defvar #:system:initty-after-restore-flag t)

; Si cet indicateur = T, un INIBITMAP est re'alise' apre`s
; chaque restore-core d'images fabrique'es par SAVE-STD.

(defvar #:system:inibitmap-after-restore-flag t)

(de core-init-std (msg)
    ;; rea'lise la se'quence d'initialisation apre`s un restore-core.
    ;; msg est le message de bienvenue.
    (when #:system:initty-after-restore-flag 
          (initty))
    (when #:system:inibitmap-after-restore-flag 
          (inibitmap))
    (herald)
    (let ((f (catenate (getenv "HOME") "/.lelisp")))
      (when (probefile f)
	    (loadfile f t)))
    (print "; " msg " : " #:system:save-std-date)
    (sortl (list-features)))

; Cette variable contient les diffe'rents GCINFO au moment
; des "save-std".

(defvar #:system:save-std-gcinfo-list (list (cons 'initial (gcinfo t))))

(defvar #:system:save-std-date ())

(de save-std (nom msg . user-functions)
    ;; Sauve une image standard de type "save-core" de nom NOM.
    ;; MSG sera la bannie`re de rappel de l'image.
    ;; USER-FUNCTIONS sont des fonctions a` lancer optionellement
    ;; apre`s save-core et apre`s restore-core.  Si seulement une
    ;; fonction est fournie, elle est utilise' au save-core et restore-core.
    ;; Si aucune n'est fournie, les valeurs par de'faut sont "core-init-std".
    (print "Attendez, je sauve : " msg)
    (unless (featurep 'date)
	    (if (featurep 'module)
		(loadmodule 'date t)
	      (libload "date")))
    (setq #:system:save-std-date (date))
    (gc)
    (newl #:system:save-std-gcinfo-list (cons nom (gcinfo)))
    (setq #:system:real-terminal-flag t ; On force a` un terminal
	  #:system:line-mode-flag ())   ; normal avant save-core
    (prompt '|? |)                      ; y compris le prompt standard
    (let* ((save-fn (or (car user-functions) 'core-init-std))
	  (restore-fn (or (cadr user-functions) save-fn 'core-init-std)))
      (if (save-core (catenate #:system:core-directory 
			       nom
			       #:system:core-extension))
	  (funcall save-fn msg)
	(funcall restore-fn msg))))


; .Section "Pour e^tre averti des ref non re'solues"


(defun #:llcp:ext-not-resolved ()
    (error '#:llcp:ext-not-resolved " look at defCcheck " ()))


; .Section "Les cpmac utiles"

(df  defmacro-open (name . fval)
     (setfn (symbol name 'macro-open) 'expr fval)
     name)

(de  make-macro-open (nom fval)
     (setfn (symbol nom 'macro-open) 'expr fval)
     nom)

(de  macro-openp (nom)
     (getfn1 nom 'macro-open))

(de  remove-macro-open (nom)
     (when (getsymb1 nom 'macro-open)
           (remob (getsymb1 nom 'macro-open))))



; .Section "Pour e'viter les proble`mes"

(defun compiler largs
   (with ((outchan ()))
	 (print ";GELL 15.26 warning,  call to (compiler ...)")))

(defun compile-all-in-core largs
   (with ((outchan ()))
	 (print ";GELL 15.26 warning,  call to (compile-all-in-core ...)")))

(defun loader largs
   (with ((outchan ()))
	 (print ";GELL 15.26 warning,  call to (loader ...)")))


