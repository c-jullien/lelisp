
(setq #:sys-package:colon 'crunch)

(defvar :no-warning ())

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; warning mechanism

(defun :getmsg (m)
  (if (and (symbolp m)
	    (get-message-p m))
      `(get-message ',m)
    `',m))

;; warning & error flag
(defvar :w-flag ())
(defvar :e-flag ())

; n = warning number
; a = error's argument
; msgargs = message's arguments
(defmacro :warning (n a . msgargs)
  (setq n (add 100 (if (numberp n) n (eval n))))
  (let ((msg (concat (sub n 100))))
    `(progn
       (unless (memq ,n :w-flag)(newl :w-flag ,n))
       (unless (and (le #:crunch:verbose 0)
		    (memq ,n :no-warning))
	       (printerror ,(catenate "W." n)
			   ,(if msgargs
				`(format () ,(:getmsg msg) ,@msgargs)
			      `',msg)
			   ,a))
       )))

(defmacro :error (n a . msgargs)
  (setq n (add 100 (if (numberp n) n (eval n))))
  (let ((msg (concat (sub n 100))))
    `(progn (unless (memq ,n :e-flag)(newl :e-flag ,n))
	    (syserror ,(catenate "E." n) 
		      ,(if msgargs
			   `(format () ,(:getmsg msg)  ,@msgargs)
			 `',msg)
		      ,a)) ))

(defmacro :advise (msg a . msgargs)
  (setq msg (progn (when (numberp msg)(setq msg (concat msg)))
		   (:getmsg msg)))
  `(when (ge #:crunch:verbose 1)
     (print (catenate ".. "
		      ,(if msgargs
			   `(format () ,msg ,@msgargs)
			 msg)
		      " : ")
	    ,a) ))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; WARNING, ERROR, and ADVISE documented messages

(defmessage |0|
  (french
"plusieurs analyses dans une me^me session peuvent engendrer des re'sultats faux")
  (english 
"more than one analysis in a session may give incorrect results")
)

(defmessage |1|
  (french 
"fonction inconnue : je ne la trouve nulle part")
  (english 
"unknown function: I can't find it anywhere")
)

(defmessage |2|
  (french 
"abbre'viation inconnue : je ne la trouve nulle part")
  (english 
"unknown abbrev: I can't find it anywhere")
)

(defmessage |3|
  (french 
"sharp-macro inconnue : je ne la trouve nulle part")
  (english 
"unknown sharp macro: I can't find it anywhere")
)

(defmessage |4|
  (french 
"je ne trouve pas la structure parent ~A pour")
  (english 
"parent structure package ~A not found for")
)

(defmessage |5|
  (french 
"fonction(s) inconnue(s) et exporte'e(s) par l'utilisateur")
  (english 
"unknown exported user function(s)")
)

(defmessage |6|
  (french 
"je ne trouve pas la structure ~A, pendant l'exe'cution de")
  (english 
"structure ~A not found when running")
)

(defmessage |9|
  (french
"le me^me nom de module : ~A, apparai^t dans plusieurs re'pertoires du projet")
  (english
"the module ~A appears in several project directories")
)

(defmessage |10|
  (french
"les projets ~A et ~A utilisent le me^me nom de module")
  (english
"the projects ~A and ~A share a module name")
)

(defmessage |11|
  (french 
"la fonction ~A doit e^tre de'finie dans un EVAL-WHEN(COMPILE) dans le module")
  (english 
"function ~A must be defined inside an EVAL-WHEN(COMPILE) in module")
)

(defmessage |12|
  (french 
"l'abbre'viation ~A doit e^tre de'finie dans un EVAL-WHEN(COMPILE) dans le module")
  (english 
"abbreviation ~A must be defined inside an EVAL-WHEN(COMPILE) in module")
)

(defmessage |13|
  (french 
"sharp-macro ~A doit e^tre de'finie dans un EVAL-WHEN(COMPILE) dans le module")
  (english 
"sharp macro ~A must be defined inside an EVAL-WHEN(COMPILE) in module")
)

(defmessage |14|
  (french 
"la structure ~A doit e^tre de'finie dans un EVAL-WHEN(COMPILE) dans le module")
  (english 
"structure ~A must be defined inside an EVAL-WHEN(COMPILE) in module")
)

(defmessage |15|
  (french
"oupps! ce module semble avoir e'te' modifie'. Vous devez l'analyser <from scratch>")
  (english
"this module seems have been modified; you must analyze it from scratch")
)

(defmessage |16|
  (french
"la fonction  ~A n'est pas dans un EVAL-WHEN(COMPILE), je mets ce module dans la clef INCLUDE")
  (english
"function ~A is not in an EVAL-WHEN(COMPILE); putting module in INCLUDE key"))

(defmessage |17|
  (french
"l'abre'viation ~A n'est pas dans un EVAL-WHEN(COMPILE), je mets ce module dans la clef INCLUDE")
  (english
"abbrev ~A is not in an EVAL-WHEN(COMPILE); putting module in INCLUDE key")
)

(defmessage |18|
  (french
"sharp-macro ~A n'est pas dans un EVAL-WHEN(COMPILE), je mets ce module dans la clef INCLUDE")
  (english
"sharp macro ~A is not in an EVAL-WHEN(COMPILE); putting module in INCLUDE key")
)

(defmessage |19|
  (french
"la structure ~A n'est pas dans un EVAL-WHEN(COMPILE), je mets ce module dans la clef INCLUDE")
  (english
"structure ~A is not in an EVAL-WHEN(COMPILE); putting module in INCLUDE key")
)

(defmessage |20|
  (french 
"erreur durant l'analyse re'cursive. Vous devez relancer l'analyse de ce module")
  (english 
"Error during recursive analysis. You must reanalyze this module")
)

(defmessage |21|
  (french
"de'pendance circulaire entre plusieurs modules. Vous devez empe^cher cela")
  (english
"Circular dependancy between modules. Please redesign.")
)

(defmessage |22|
  (french
"erreur dans ""~a"", pendant une erreur de lecture rattrape'e; analyse partielle du module")
  (english
"error in ""~A"" during recoverable read error - only partial analysis of module")
)

(defmessage |23|
  (french
"fonction ~A : type de fonction inconnu")
  (english
"function ~A : unknown function type")
)

(defmessage |24|
  (french
"mauvaise construction dans ~A")
  (english
"bad construction in ~A")
)

(defmessage |25|
  (french
"plusieurs modules ~A de'finissent")
  (english
"several modules ~A define")
)

(defmessage |26|
  (french
"module introuvable; ve'rifier l'environnement d'analyze")
  (english
"module not found; check the analysis environment")
)

(defmessage |27|
  (french
"fichier introuvable; ve'rifier l'environnement d'analyse et la de'finition du projet")
  (english
"file not found; check analysis environment and project definition")
)

(defmessage |28|
  (french
"le module ""~A"" utilise des de'finitions de ""~A"" non exporte'es")
  (english
"module ""~A"" uses unexported definitions from ""~A""")
)

(defmessage |29|
  (french
"forme inconnue : je ne la trouve nulle part")
  (english 
"unknown form: I can't find it anywhere")
)

(defmessage |31|
  (french
"plusieurs modules ~A de'finissent la fonction")
  (english
"several modules ~A define function")
)

(defmessage |32|
  (french
"plusieurs modules ~A de'finissent l'abbre'viation")
  (english
"several modules ~A define abbrev")
)

(defmessage |33|
  (french
"plusieurs modules ~A de'finissent la sharp-macro")
  (english
"several modules ~A define sharp macro")
)

(defmessage |34|
  (french
"plusieurs modules ~A de'finissent la structure")
  (english
"several modules ~A define structure")
)

(defmessage |35|
  (french
"~A sont des fichiers de module qui ne sont pas charge's (via INCLUDE) dans l'environnement (voir doc.) ; module concerne'")
  (english
"~A are module files and are not INCLUDed in environment (see doc.); module")
)

(defmessage |36|
  (french
"champs FILES vide pour le module")
  (english
"empty FILES field inside module")
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; only ADVISE & printerror messages

(defmessage UNRECOVERABLE
  (french
"erreur irrattrapable; on saute l'expression")
  (english
"unrecoverable error; skipping expression")
)

(defmessage REQUIREDMODULES
  (french
"le(s) module(s) ~A de'ja` importe' est pris pour de'finir")
  (english
"already imported modules ~A are taken to define")
)

(defmessage INCLUDEDFILE
  (french
"le(s) fichier(s) impose's sous la clef INCLUDE ~A, sont charge's pour de'finir")
  (english
"user INCLUDED file(s) ~A, are loaded to define")
)

(defmessage FOUNDINTERNALFUNCTION
  (french 
"la fonction ~A est de'finie (mais pas exporte'e) dans le module (qui est donc importe')")
 (english 
"function ~A is defined but not exported in the imported module")
)

(defmessage FOUNDFUNCTION
  (french 
"la fonction ~A est exporte'e par le module (qui est donc importe')")
  (english
"function ~A is exported by the imported module")
)

(defmessage FOUNDSTRUCT
  (french 
"la structure ~A, est exporte'e par le module (qui est donc importe')")
  (english
"structure ~A is exported by imported module")
)

(defmessage FOUNDPARENTSTRUCT
  (french 
"la structure ~A, parent de ~A, est exporte'e par le module (qui est donc importe')")
  (english
"structure package ~A, the superclass of ~A, is exported by imported module")
)

(defmessage FOUNDABBREV
  (french
"l'abre'viation ~A est de'finie dans le module (qui est donc importe')")
  (english
"abbreviation ~A is defined in imported module")
)

(defmessage FOUNDSHARP
  (french
"la sharp-macro ~A est de'finie dans le module (qui est donc importe')")
  (english
"sharp macro ~A is defined in imported module")
)

(defmessage UPDATEANALYZE
  (french 
"mise a` jour de l'analyse du module ~A, en exportant en plus")
  (english 
"updating module analysis for ~A adding exports")
)

(defmessage UPDATEMODULE
  (french
"mise a` jour du fichier descripteur de module")
  (english 
"updating module description file")
)

(defmessage UPDATEREF
  (french
"mise a` jour du fichier des re'fe'rences")
  (english 
"updating reference file")
)

(defmessage READFILE
  (french
"lecture de(s) fichier(s)")
  (english
"reading file(s)")
)

(defmessage READFILEFAILED
  (french
"lecture du fichier echoue'e")
  (english
"file read failed")
)

(defmessage SCANNING
  (french
"exploration des functions")
  (english
"scanning functions")
)

(defmessage SCAN-1
  (french
"analyse de")
  (english
"analysis of")
)

(defmessage NO-OOPTION
  (french
"pas d'option -o pre'cise'e, l'e'criture se fera sur")
  (english
"no -o option specified; output will be")
)

(defmessage NONEEDWRITE
  (french
"inutile de re'e'crire le fichier")
  (english
"no need to rewrite file")
)

(defmessage LOADMODULE
  (french
"chargement du module")
  (english
"loading module")
)

(defmessage LOADFILE
  (french
"chargement de(s) fichier(s)")
  (english
"loading file(s)")
)

(defmessage DONE
  (french
"c'est fait.")
  (english
"done.")
)

(defmessage LOADFILEFAILED
  (french
"chargement des fichiers echoue'")
  (english
"loading files failed")
)

(defmessage CPENV
  (french
"e'valuation du champ CPENV du module")
  (english
"evaluating CPENV field of module")
)

(defmessage CPENVFAILED
  (french
"e'valuation de CPENV echoue'e")
  (english
"evaluating CPENV failed")
)

(defmessage WFLAG
  (french
"**! Il y a eu des warnings lors de l'analyse")
  (english
"**! There were warnings during the analysis")
)

(defmessage EFLAG
  (french
"**! Il y a eu des erreurs lors de l'analyse")
  (english
"**! There were errors during the analysis")
)

(defmessage SEEMS
  (french
"Vos ~A semblent")
  (english
"Your ~A seems")
)

(defmessage UNKNOWNPRJ
  (french
"projet inconnu")
  (english
"unknown project")
)

(defmessage NOLST
  (french
"pas de fichier de liste de fichiers: ~A, dans le re'pertoire")
  (english
"No list file : ~A, in directory")
)
