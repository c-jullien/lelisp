; .EnTete "Le-Lisp (c) version 15.2" " " "Le fichier initial"
; .EnPied "startup.ll" "A-%" " "
; .Annexe A "Le Fichier Initial"
;
; .Centre "*****************************************************************"
; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
; .Centre " Il est maintenu par ILOG SA, 2 Avenue Gallie'ni, 94250 Gentilly "
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; .Centre "$Header: /nfs/work/lelisp/llib/RCS/startup.ll,v 6.44 91/10/14 14:59:39 kuczynsk Exp $"


; Il est ne'cessaire de charger ce fichier avant toute utilisation
; du syste`me Le-Lisp version 15.2 a` cause de la rede'finition de
; la boucle principale (toplevel).


(if (>= (version) 15.2)
    (list "Version: " (version))
    (error 'load 'erricf 'startup))



  ;; Ces 2 fcts sont a modifier a` chaque distribution ce maintenance.
  (de subversion ()
      ;; donne la version de maintenance de 15.2 de l'anne'e en cours.
      1)

  (de herald ()
      ;; Change le herald du lelispbin pour tenir compte de la nouvelle date
      ;; dans les distributions de maintenance.
      ;; On le redefinit me^me quand la date est la meme que dans llm3,
      ;; parce que ttymsg n'est pas la me^me que print.
      ;; Comme c,a les distributions
      ;; de maintenance se comportent exactement de la me^me fac,on.
      (with ((outchan ()))
	    (print "; Le-Lisp (by INRIA) version 15.25 "
		   "(30/oct/91)   [" (system) "]"))
      nil)
  (list "Subversion: " (subversion)) )

; .Section "Les variables globales internes du syste`me"


  
   (defvar #:system:loaded-from-file 'startup)
   ; et maintenant refaisons le pour mettre 'startup
   ; dans #:system:loaded-from-file .....
   (defvar #:system:loaded-from-file 'startup)
   (defvar #:system:in-read-flag #:system:in-read-flag)
   (defvar #:system:print-for-read #:system:print-for-read)
   (defvar #:system:print-package-flag #:system:print-package-flag)
   (defvar #:system:print-case-flag #:system:print-case-flag)
   (defvar #:system:real-terminal-flag #:system:real-terminal-flag)
   (defvar #:system:line-mode-flag #:system:line-mode-flag)
   (defvar #:system:gensym-counter #:system:gensym-counter)
   (defvar #:system:gensym-string #:system:gensym-string)
   (defvar #:system:read-case-flag #:system:read-case-flag)
   ;
   ;           A Editer selon la configuration
   ;
   (defvar #:system:foreign-language ())  ; pour les messages.
   (defvar #:system:unixp ())             ; =T c'est un syste`me UNIX.
   
   (defvar #:system:print-with-abbrev-flag t)

; .Section "Les variables de'pendantes du syste`me"

; Toutes ces variables re'sident dans le package "SYSTEM:"
; et contiennent les noms absolus des pre'fixes et suffixes
; des bibliothe`ques Le-Lisp.

; Pour les syste`mes UNIX la variable #:SYSTEM:DIRECTORY
; permet de calculer tous les autres directory.
; Elle est mise a jour par "newdir"

  #.(defvar unix                  ; liste des syste`mes UN*X
      '(vaxunix vme pe32unix bell sps9 sm90 unigraph cetia
		micromega metheus apollo cadmus sun hp9300
		metaviseur ibmrt pyramid sequent gouldpn
		|tektronix 43xx| |C| dpx1000 sun4 convex
                macaux decstation mips magnum sony sonyr3000 m88k
		aix386 ix386 sco386 sun386i rs6000 hp9400
		iris4d ix386r4))
  
  (if (memq (system) '#.unix)
      (progn (defvar #:system:directory "/nfs/work/v15.2/")
	     (defvar #:system:unixp t)
	     "unix system"
	     )
    (progn (defvar #:system:unixp ())
	   "Not a unix system"
	   )
    ))


  ; les machine sachant realiser des links dynamiques
  (defvar #:system:cloadp
    (and #:system:unixp
         (memq (system)
	       '(vaxunix sun sun4 sequent gouldpn sony sonyr3000
		 mips magnum decstation hp9300 hp9400))))
  ; Catalogue (pre'fixe) contenant la bibliothe`que syste`me Le-Lisp
  (unless (boundp '#:system:llib-directory)
	  (defvar #:system:llib-directory
	    #.(selectq (system)
		       (#.unix   (catenate #:system:directory "llib/"))
		       (vaxvms   "lelisp$disk:[LLIB]")
		       (multics  ">lib>Le_Lisp>lelispv15.2>llib>")
		       (pcdos    "\lelisp\llib\")
                      (t        ""))) )

 ; Catalogue (pre'fixe) contenant la bibliothe`que utilisateur Le-Lisp
 (unless (boundp '#:system:llub-directory)
   (defvar #:system:llub-directory
           #.(selectq (system)
                      (#.unix   (catenate #:system:directory "llub/"))
                      (vaxvms   "lelisp$disk:[LLUB]")
                      (multics  ">lib>Le_Lisp>lelispv15.2>llub>")
                      (pcdos    "\lelisp\llub\")
		       (t        ""))) )
  
  ; Catalogue (pre'fixe) contenant la bibliothe`que des tests du syste`me
  (unless (boundp '#:system:lltest-directory)
	  (defvar #:system:lltest-directory
	    #.(selectq (system)
		       (#.unix   (catenate #:system:directory "lltest/"))
		       (vaxvms   "lelisp$disk:[LLTEST]")
		       (multics  ">lib>Le_Lisp>lelispv15.2>lltest>")
		       (pcdos    "\lelisp\lltest\")
                      (t        ""))) )

 ; Catalogue (pre'fixe) contenant les modules syste`me Le-Lisp.
 (unless (boundp '#:system:llmod-directory)
   (defvar #:system:llmod-directory
           #.(selectq (system)
                      (#.unix   (catenate #:system:directory "llmod/"))
                      (vaxvms   "lelisp$disk:[LLMOD]")
                      (multics  ">lib>Le_Lisp>lelispv15.2>llmod>")
                      (pcdos    "\lelisp\llmod\")
		       (t        ""))) )
  
  ; Catalogue (pre'fixe) contenant les fichiers syste`me format objet Le-Lisp.
  (unless (boundp '#:system:llobj-directory)
	  (defvar #:system:llobj-directory
	    #.(selectq (system)
		       (#.unix   (catenate #:system:directory "llobj/"))
		       (vaxvms   "lelisp$disk:[LLOBJ]")
		       (multics  ">lib>Le_Lisp>lelispv15.2>llobj>")
		       (pcdos    "\lelisp\llobj\")
                      (t        ""))) )

 ; Catalogue (pre'fixe) contenant les de'finitions des terminaux virtuels
 (unless (boundp '#:system:virtty-directory)
   (defvar #:system:virtty-directory
           #.(selectq (system)
                      (#.unix   (catenate #:system:directory "virtty/"))
                      (vaxvms   "lelisp$disk:[VIRTTY]")
                      (multics  ">lib>Le_Lisp>lelispv15.2>virtty>")
                      (pcdos    "\lelisp\virtty\")
		       (t        ""))) )
  
  ; Catalogue (pre'fixe) contenant les de'finitions des bitmaps virtuels
  (unless (boundp '#:system:virbitmap-directory)
	  (defvar #:system:virbitmap-directory
	    #.(selectq (system)
		       (#.unix   (catenate #:system:directory "virbitmap/"))
		       (vaxvms   "lelisp$disk:[VIRBITMAP]")
		       (multics  ">lib>Le_Lisp>lelispv15.2>virbitmap>")
		       (pcdos    "\lelisp\virbit\")
                      (t        ""))) )

 ; Catalogue (pre'fixe) syste`me de Le-Lisp spe'cifique a` une machine
 (unless (boundp '#:system:system-directory)
   (defvar #:system:system-directory
           #.(selectq (system)
                      (#.unix   (catenate #:system:directory
                                   (let ((name (car (memq (system) '#.unix))))
                                      (selectq name
                                              (|tektronix 43xx| "tektro")
                                              (t name)))
                                   "/"))
                      (vaxvms   "lelisp$disk:[VAX]")
                      (multics  ">lib>Le_Lisp>lelispv15.2>multics>")
                      (pcdos    "\lelisp\pcdos\")
		       (t        ""))) )
  
 ; Catalogue (pre'fixe) contenant les images-me'moire standard
 (unless (boundp '#:system:core-directory)
   (defvar #:system:core-directory
           #.(selectq (system)
                      (#.unix   (catenate #:system:directory
					  (let ((name (car (memq (system)
							  '#.unix))))
					    (selectq name
                                              (|tektronix 43xx| "tektro")
                                              (t name)))
					  "/llcore/"))
                      (vaxvms   "lelisp$disk:[LLCORE]")
                      (multics  ">lib>Le_Lisp>lelispv15.2>multics>core>")
                      (pcdos    "\lelisp\pcdos\core\")
                      (t        ""))) )

 ; Liste des Catalogue (pre'fixe) contenant des fichiers Le-Lisp.

   (defvar #:system:path (list 
         ""
         #:system:llib-directory
         #:system:llub-directory
         #:system:llmod-directory
         #:system:llobj-directory
         #:system:lltest-directory
         #:system:virtty-directory 
         #:system:virbitmap-directory
         #:system:system-directory
         ))

 ; Extension (suffixe) des fichiers source Le-Lisp

   (defvar #:system:lelisp-extension
           #.(selectq (system)
                      (#.unix   ".ll")
                      (vaxvms   ".ll")
                      (multics  ".ll")
                      (pcdos    ".ll")
                      (t        "")))

 ; Extension (suffixe) des fichiers de description de module Le-Lisp,

   (defvar #:system:mod-extension
           #.(selectq (system)
                      (#.unix   ".lm")
                      (vaxvms   ".lm")
                      (multics  ".lm")
                      (pcdos    ".lm")
                      (t        "")))

 ; Extension (suffixe) des fichiers format objet Le-Lisp

   (defvar #:system:obj-extension
           #.(selectq (system)
                      (#.unix   ".lo")
                      (vaxvms   ".lo")
                      (multics  ".lo")
                      (pcdos    ".lo")
                      (t        "")))

 ; Extension (suffixe) des fichiers images-me'moire

   (defvar #:system:core-extension
           #.(selectq (system)
                      (#.unix   ".core")
                      (vaxvms   ".cor")
                      (multics  ".core")
                      (pcdos    ".cor")
                      (t        "")))

 ; Fichier contenant la base de donne'es "termcap"

   (defvar #:system:termcap-file
           #.(selectq (system)
                      (#.unix   "/etc/termcap")
                      (vaxvms   "lelisp$disk:[VIRTTY]termcap.db")
                      (multics  ">lib>Le_Lisp>lelispv15.2>virtty>termcap.data")
                      (pcdos    "\lelisp\termcap")
                      (t        "")))

 ; Catalogue (pre'fixe) contenant la base de donne'es "terminfo"

   (defvar #:system:terminfo-directory
           #.(selectq (system)
                      (#.unix   "/usr/lib/terminfo/")
                      (vaxvms   "lelisp$disk[terminfo]")
                      (multics  ">lib>Le_Lisp>lelispv15.2>virtty>terminfo>")
                      (pcdos    "\lelisp\terminfo\")
                      (t        "")))

 ; Nom de l'e'diteur a` appeler par ^F

   (defvar #:system:editor
           #.(selectq (system)
                      (pe32unix "emin")
                      (bell     "vi")
                      (sps9     "redit")
                      ((sm90 micromega metheus apollo pe32unix)
                                "emin")
                      (#.unix   "emacs")
                      (vaxvms   "edit")
                      (multics  "emacs -task")
                      (t        "")))

; .Section "Les codes ASCII symboliques pour la macro #\"

(mapc
    (lambda (x y) (putprop x y '#:sharp:value))
   '(null bell bs  tab lf  return cr  esc sp  del rubout)
   '(#^@  #^G  #^H #^I #^J #^M    #^M #^[ #/  127 127))

; .Section "Quelques autres fonctions"
; Toutes ces fonctions doivent e^tre re-e'crites en LLM3.

(de explodech (s)
    (mapcar 'ascii (explode s)))

(de implodech (l)
    (implode (mapcar 'cascii l)))

(de lhoblist (s)
    ; retourne tous les symboles qui de'butent par la chai^ne s
    (maploblist (lambda (x) (index s x 0))))

; .Section "Les macros-caracte`res standard"
 
(dmc ^L ()
     ; ^L  :  pour charger un fichier d'extension #:system:lelisp-extension
     (list 'libloadfile (readstring) t))

(dmc ^A ()
   ; Pour charger un module.
   (list 'loadmodule (readstring)))
 
(dmc ^E ()
     (cond ((eq (peekcn) 13) 
              ; juste ^E suivi de 'return'
              '(pepefile ()))
           ((memq (peekcn) '(#/( #^P))
              ; expression : de'bute par ( ou ^P))
              (list 'pepefile (kwote (read))))
           (t ; un nom de fichier (symbole)
              (list 'pepefile (kwote (concat (readstring)))))))
(dmc ^F ()
    (let ((lu (readline)))
      (ifn lu
	   (list 'comline #:system:editor)
	   (lets ((fct (implode lu))
		  (file (getprop fct '#:system:loaded-from-file))
		  ;; pour prendre resetfn en compte.
		  (type (or (car (getprop fct 'resetfn)) (typefn fct))))
		 (ifn (memq type '(expr fexpr macro dmacro))
		      (list 'pretty fct)
		      (if file
			  (list 'progn
				(list 'comline
				      (catenate #:system:editor " " file))
				(list 'load file t))
			(setq file
			      (catenate 
			       (gensym) #:system:lelisp-extension))
			(list 'progn
			      (list 'prettyf file fct)
			      (list 'comline
				    (catenate #:system:editor " " file))
			      (list 'load file t)
			      (list 'remprop
				    (kwote fct)
				    ''#:system:loaded-from-file)
			      (kwote fct))))))))

(dmc ^P ()
     (cons 'pretty 
           (implode (pname (catenate "(" (readstring) ")")))))

(dmc |!| ()                         ;  pour appeler le shell
     (let ((l (readstring)))
       (comline (if (equal l "")
		    #.(selectq (system)
			       (#.unix "$SHELL")
			       (vaxvms "spawn")
			       (t "not implemented..."))
		  l))))


;;; Definitions to allow path syntax before path is loaded.
(defsharp u () (list (read)))
(defsharp p () (list (read)))

; .Section "Load primitif"

(defvar  #:system:redef-flag ()) ; Pour ne pas avertir des redefinitions.

 ; (de eof (n)
 ;     ; traitement standard de la fin de fichier.
 ;     (close n)
 ;     (inchan ())
 ;     (if #:system:in-read-flag
 ;         (error 'read 'errsxt 11)
 ;         (exit eof n)))

(de loadfile (file redef?)
   (let ((#:system:loaded-from-file file)
         (#:system:redef-flag redef?)
         (#:sys-package:colon #:sys-package:colon)
         (#:system:in-read-flag ())
         (inchan (inchan)) )
      (inchan (openi file))
      (protect
         (untilexit eof (eval (read)))
         (let ((in (inchan))) (when in (close in)))
         (inchan inchan) )
       file ))

; .Section "La liste des fichiers de l'environnement standard"

(de all-the-files ()
    '(      ;
            ; 0 - modules necessaires
            ;
        ; l'ordre est tres important 
        (toplevel llpatch messages path files module defs genarith)
	    ;
            ; 1 - Syste`me minimum
            ;
        (virtty virbitmap)
            ;
            ; 2 - Emacs ou PEPE
            ;
        (pepe)
            ;
            ; 3 - Environnement standard
            ;
        (setf defstruct sort array callext trace date
	      pretty debug ttywindow abbrev microceyx)
            ;
            ; 4 - Le chargeur
            ;
        (loader)
            ;
            ; 5 - Compilateur
            ;
        (cpmac llcp peephole)))

; .Section "Construction de l'environnement standard"
 
; Si cet indicateur = T, un INITTY est re'alise' apre`s
; chaque restore-core d'images fabrique'es par SAVE-STD.

(defvar #:system:initty-after-restore-flag t)

; Si cet indicateur = T, un INIBITMAP est re'alise' apre`s
; chaque restore-core d'images fabrique'es par SAVE-STD.

(defvar #:system:inibitmap-after-restore-flag t)

(de core-init-std (msg)
    ; rea'lise la se'quence d'initialisation apre`s un restore-core.
    ; msg est le message de bienvenue.
    (when #:system:initty-after-restore-flag 
          (initty))
    (when #:system:inibitmap-after-restore-flag 
          (inibitmap))
    (herald)
    (if (featurep 'path)
	(let ((f (control-file-pathname 'lelisp)))
	  (when (probefile f)
		(loadfile f t)))
      #.(selectq (system)
		 (#.unix
		  '(let ((f (catenate (getenv "HOME") "/.lelisp")))
		     (when (probefile f)
			   (loadfile f t))))
		 (vaxvms
		  '(let ((f "sys$login:startup.ll"))
		     (when (probefile f)
			   (loadfile  f t))))
		 (os2
		  '(let ((f (catenate (getenv "HOME") "\lelisp.ini")))
		     (when (probefile f)
			   (loadfile f t))))
		 (t ()))
      )
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

    (print #.(if #:system:foreign-language
		 "Wait, I am saving : "
	       "Attendez, Je sauve : ")
	   msg)
    (unless (featurep 'date)
	    (if (featurep 'module)
		(loadmodule 'date)
	      (libload "date")))
    (setq #:system:save-std-date (date))
    (gc)
    (newl #:system:save-std-gcinfo-list (cons nom (gcinfo)))
    (setq #:system:real-terminal-flag t ; On force a` un terminal
	  #:system:line-mode-flag ())   ; normal avant save-core
    (prompt |? |)                       ; y compris le prompt standard
    (let* ((save-fn (or (car user-functions) 'core-init-std))
	  (restore-fn (or (cadr user-functions) save-fn 'core-init-std)))
      (if (save-core (catenate #:system:core-directory 
			       nom
			       #:system:core-extension))
	  (funcall save-fn msg)
	(funcall restore-fn msg))))

(de load-std (nom . load-std)
    ; charge l'image standard
    ; 'nom' indique s'il faut faire une image me'moire (et c,a devient le nom)
    ; 'load-std' est la liste des indicateurs

    ;; On charge l'environnement demande'
  (let (loaded-list)
   (let ((#:module:interpreted-list ()))
    (mapc (lambda (lf i)
	    (when i
		  (mapc (lambda (x)
			  (print "Loading " (probepathf x))
			  (libloadfile x t)
			  (newl #:module:interpreted-list x)
			  )
			(or (consp i) lf))))
          (all-the-files)
          (cons t load-std))
    (setq loaded-list #:module:interpreted-list))
   (setq #:module:interpreted-list loaded-list))
  ;; On explique comment compiler
  (when (featurep 'compiler)
	  (if #:system:foreign-language
	      (print
	       " (llcp-std '<name>)  to compile standard environment")
	    (print
	     " (llcp-std '<nom>)  pour compiler l'environnement standard")))
  ;; on sauve eventuellement
  (when nom
	  (save-std nom
		    (if #:system:foreign-language
			"Standard interpreted System"
		      "Syste`me standard interpre'te'")))
    'load-std
    )


(de llcp-std (nom . flags)
    ; compilation de l'environnement standard
    ; et fabrication du core "nom"
    (when (featurep 'compiler)
          ; essaie de de'gager un peu le compile-all-in-core
	  (mapc #'(lambda(f)
		    (and (eq (typefn f) 'expr)
			 (print "I compile " f)
			 (let ((#:ld:special-case-loader t))
			   (compiler f t (car flags) (cadr flags)))) )
		'(pprint #:symbol:prin #:compiler:peephole
		  #:compiler:macroexpand loader compiler
		  pepefile #:system:cached-getglobal) )

          (print "I compile everything else.")
          (compile-all-in-core (car flags) (cadr flags))
	  )
    (mapc 'remob symb-to-rem)
    (when nom
	  (save-std nom
		    #- #:system:foreign-language "Syste`me standard compile'"
		    #+ #:system:foreign-language "Compiled standard system"
		    )))


;;;
;;; Applique remfn sur tous les symboles de la liste interp qui  ne sont pas
;;; pre'sents dans la liste compil.

(defun rm-before-compile (compil interp)
  (mapc (lambda (symb)
	  (unless (memq symb compil)
		  ;(print "I remfn "
		  ;       (typefn symb)
		  ;       " "
		  ;       symb)
		  (remprop symb '#:system:loaded-from-file)
		  (remfn symb)))
	interp))


;;;
;;; Une fois le loader charge' en compile',
;;; rend la liste des fonctions interpre'es de'finies par le loader et ses
;;; imports.

(defun list-interp-func ()
  (let ((loader-imports (mapcar (lambda (mod)
				  (catenate #:system:llib-directory
					    mod
					    #:system:lelisp-extension))
				#:module:interpreted-list))
	res)
    ; Le chargement du loader interprete' laisse
    ; /xxxxxx/llib/lapxxx.ll sur la plist de ses fonctions
    ; et non pas /xxxxxx/llib/loader.ll. Donc ...
      (nsubst (getprop 'loader '#:system:loaded-from-file)
	      (catenate #:system:llib-directory 'loader
			#:system:lelisp-extension)
	      loader-imports)
    ;
       (mapoblist (lambda (symb)
		    (and (memq (typefn symb) '(expr fexpr macro dmacro))
			 (member (getprop symb '#:system:loaded-from-file)
				 loader-imports)
			 (newl res symb))))
       res))


(defun list-compil-func ()
  (mapcan (lambda (symb)
	    (getdefmodule (readdefmodule symb) 'export))
	  #:module:compiled-list))

(defvar symb-to-rem
  '(all-the-files load-std load-stm load-cpl load- loadmsg
    list-compil-func list-interp-func
    rm-before-compile symb-to-rem))

(de load- (compilo nom . load-stm)
    ;; 'nom' indique s'il faut faire une image me'moire (et c,a devient le nom)
    ;; 'load-stm' est la liste des indicateurs:
    ;;            (min editeur environ loader compilateur)
    ; Il faut au minimum le code  de module
    (let ((#:system:error-flag ()))
      (libload module t))     ; llib/module.ll
    (let ((load (cdddr load-stm))
	  (comp (cdr (cdddr load-stm)))
	  (list-interpreted-functions ())
	  (necessary (cdar (all-the-files))) ; TOPLEVEL est traite' a` part!!
	  )
      (when load-stm
	    (setq load (when (car load)      ; le LOADER est traite'
			     (rplaca load ());  a part !!
			     t))
	    (setq comp (when (car comp)      ; le COMPILATEUR est traite'
			     (rplaca comp ());  a part !!
			     t))
	    )
      (setq load-stm (cons comp load-stm))   ;
      ;; si le compilateur doit etre charge'...
      (when comp
	    (let ((l (last (all-the-files))))
	      (rplaca (all-the-files)
		      (if (eq (car compilo) 'complice)
			  '(complice)
			(car l)))
	      (rplaca l ()))
	    ;;     ...alors le loader e'galement
	    (when (not load)
		  (printerror 'loader "Impossible to compile without loader!"
			      (cdr load-stm))
		  ; (setq load '(t)) pour charger loader interprete'!
		  (setq load t)) )
      ;; si le loader doit etre charge'
      (ifn load (setq list-interpreted-functions (list-interp-func))
	 (let ((#:system:error-flag ()))
	   (loadmodule 'loader))   ; <system>/loader.lm --> llib/lapxxx.ll
	 (setq list-interpreted-functions (list-interp-func))
	 (if (consp load) (libload fxld t)
	   (let ((#:ld:special-case-loader t)) (loadmsg 'loader t))
	 ))
      ;; On charge les fichiers indispensables.
      (mapc (lambda (m) (if (memq m #:module:compiled-list)
			    (loadmsg m "already loaded.")
			  (loadmsg m) ))
	    necessary)
      (let ((#:ld:special-case-loader t)) (loadmsg 'toplevel))
      ;; Et maintenant le reste.
      (mapc (lambda (lf i)
	      (when (and i lf)
		    (mapc (lambda (m)
                             (if (or (memq m #:module:compiled-list)
				     (memq m #:module:interpreted-list) )
				 (loadmsg m "already loaded.")
			       (loadmsg m) ))
			  (or (consp i) lf))))
	    (all-the-files)
	    load-stm)
      ;; On vire ce qu'il y a en trop.
      (unless (and comp (consp load))
	 (rm-before-compile (list-compil-func) list-interpreted-functions))
      (mapc 'remob symb-to-rem)
      (when (featurep 'compiler) (compile-all-in-core))
      (when nom (save-std nom (cdr compilo)))
      ))

(defmacro load-stm (nom . load-stm)
    ; charge l'image standard
    `(load- '(llcp . ,(if #:system:foreign-language
                             "Standard modular system"
                           "Syste`me standard modulaire"))
	    ,nom ,@load-stm))

(defmacro load-cpl (nom . load-cpl)
    ; charge l'image complice
    `(load- '(complice . ,(if #:system:foreign-language
			     "Complice modular System"
			   "Syste`me Complice modulaire"))
	    ,nom ,@load-cpl))

; .Section "Fin de chargement de l'environnement minimum"

(loadfile
   (catenate #:system:llib-directory 'files #:system:lelisp-extension)
   () )

(loadfile
   (catenate #:system:llib-directory 'messages #:system:lelisp-extension)
   () )

(loadfile
   (catenate #:system:llib-directory 'toplevel #:system:lelisp-extension)
   () )

(loadfile
   (catenate #:system:llib-directory 'defs #:system:lelisp-extension)
   () )

; si on peut s'en passer...
(loadfile
   (catenate #:system:llib-directory 'genarith #:system:lelisp-extension)
   () )

;; encore qq definitions du bootstrap
(defmacro loadmsg (name . flg)
  `(progn
     (prin "Loading " (probepathm ,name) " ... ")(flush)
     (if (stringp ,(car flg))
	 (prin ,(car flg))
       (loadmodule ,name ,@flg)
       (prin "done."))
     (terpri)
     ))

; .Section "Les fonctions Autoloads"
 ; 0 - les fonctions standard

(libautoload virtty initty)
;(libautoload virbitmap inibitmap)
(libautoload topwin topwindow)

 ; 1 - les utilitaires

(libautoload module loadmodule readdefmodule)
(libautoload defstruct defstruct)
(libautoload array makearray aref aset)
(libautoload sort sort sortl sortn sortp)
(libautoload callext defextern cload defextern-cache #:system:cached-getglobal)
(libautoload trace trace untrace step)
(libautoload debug debug)
(libautoload schedule parallel parallelvalues tryinparallel)
(libautoload pretty pretty pprint prettyf)
(libautoload format format prinf)
 
 ; 2 - les e'diteurs

(libautoload minimore more morend)
(libautoload edlin edlin edlinend)
(libautoload pepe pepe pepefile)
 
 ; 3 - les jeux

(libautoload hanoi hanoi)
(libautoload whanoi whanoi)
(libautoload vdt vdt)

; .Section "Final de l'initialisation"
 

(defvar #:system:loaded-from-file ())
(remob 'unix)
(rmargin 78)

(print " (load-std sav min pepe env ld llcp)  to load standard environment,")
(print " (load-stm sav min pepe env ld llcp)  to load modular  environment,")
(print " (load-cpl sav min meme env ld cmpl)  to load complice environment.")

(input ())

(probepathf 'startup)

) ; fin du progn silencieux


