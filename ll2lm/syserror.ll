;;;
;;; the SYSERROR mecanism to continue to analyze.
;;; to update current environment
;;;
(setq #:sys-package:colon 'crunch)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; mechanism errors
;;;
;; the main SYSERROR 
(defun :syserror (f m a)
  (setq :lasterror m)
  (cond
   ;; interesting case of NOT AN ABBREV
   ((memq m '(#:abbrev:errnotanabbrev #:user:errnotanabbrev))
    (:errnotanabbrev:syserror f '#:abbrev:errnotanabbrev a))
   ;; big one case of UNDEFINED FUNCTION
   ((eq m 'errudf)
    (:errudf:syserror f m a))
   ;; case of MICROCEYX
   ((eq m '#:microceyx:errnotarecordoratclass)
    (:errnotarecordoratclass:syserror f m a))
   ;; case of false EOF DURING READ 
   ((and (eq m 'errsxt) (eq a 11))
    (:errsxt:syserror f m a))
   ;; case of unknow form. see also DEFDEFINER
   ((eq m 'errunk)
    (:errunk:syserror f m a))
   ;; another error...
   (t
    ;; si on fait SUPER-ITSOFT, les erreurs bouclantes :
    ;;  (until (??? foo)(setq foo (error ...)))
    ;; nous font declencher la TOPLEVEL error #:crunch:restore:syserror!
    ;;
    ;; on regle ca selon :noerror
    (if #:crunch:noerror
	;; on relance l'erreur, sans le package crunch
	(super-itsoft 'crunch 'syserror (list f m a))
      ;; on re-declenche donc une error normale, mais sans ITSOFT !
      (let ((#:sys-package:itsoft ()))
	(error f m a)))
    )))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; specialized SYSERRORs
;;; abbrev case
(defun :errnotanabbrev:syserror (f m a)
  (let ((mod ()))
    (cond
     ;; allready meet case
     ((:unknow-thing-p m a) 'unknow-abbrev) ;nothing to do
     ;; we found rigth module
     ((setq mod (other-from a))
      (unless (:user-included-p a mod 'abbrevp); user-included module loaded
					; else we import it for it's CPENV
	      (#:crunch:advise FOUNDABBREV mod a)
	      (let ((#:crunch:default-multiple-defined-message 32))
		(setq mod (:load-cpenvs a mod)))
	      (:add-import a mod)
	      (if (abbrevp a)
		  a
		(if :include
		    (progn (:advise 17 mod a)
			   (:add-include a mod)
			   (:load-files mod)
			   (if (abbrevp a)
			       a
			     (:warning 15 mod)
			     'unknow-abbrev))
		  (:add-unknow-thing m a)
		  (:warning 12 mod a)
		  'unknow-abbrev)))
      )
     ;; else it's realy an error
     (t
      (:add-unknow-thing m a)
      (:warning 2 a)
      'unknow-abbrev
      ))))

;;; functions case
(defun :errudf:syserror (f m a)
  ;; normaly, #:crunch:toplevel-error is allways T
  (let ((mod ()))
    (cond
     ;; allready meet case
     ((:unknow-thing-p m a)
      (if #:crunch:toplevel-error
	  (:error 1 a)
	(:warning 1 a)))
     ;; we found rigth module
     ((setq mod (func-from a))
      (unless (:user-included-p a mod 'typefn); user-included module loaded
					; else we import it for it's CPENV
	      (#:crunch:advise FOUNDFUNCTION mod a)
	      (let ((#:crunch:default-multiple-defined-message 31))
		(setq mod (:load-cpenvs a mod)))
	      (:add-import a mod)
					; verification
	      (unless (typefn a)
		      (if :include
					; not in CPENV, but INCLUDEFLAG
			  (progn
			    (:advise 16 mod a)
			    (:add-include a mod)
			    (:load-files mod)
			    (unless (typefn a)(:error 15 mod)) )
					; not in CPENV, not INCLUDED
			(:add-unknow-thing m a)
			(:error 11 mod a))) )
      (if (and :toplevel-error
	       (consp :lastread)
	       (valfn (car :lastread)))
	  (exit retrytoplevel :lastread)
	a)
      )
     ;; find internal definition
     ((setq mod (intern-from a))
      (when (cdr mod) (#:crunch:advise 31 a mod))
      (unless (:user-included-p a mod 'typefn); user-included module loaded
					; else we import it for it's CPENV
	      (#:crunch:advise FOUNDINTERNALFUNCTION mod a)
	      (let ((#:crunch:verbose 0)
		    (#:crunch:default-multiple-defined-message 31))
		(setq mod (#:crunch:load-cpenvs a mod)))
	      (#:crunch:add-import a mod)
					; preparation to update modules <mod>
	      (mapc (lambda(m)
		      (let ((lf (assq m {llmodule}:allupmod)))
			(if lf (rplacd lf (cons a (cdr lf)))
			  (newl {llmodule}:allupmod (list m a)))))
		    mod)
	      (unless (typefn a)
		      (if :include
			  (progn
			    (:advise 16 mod a)
			    (:add-include a mod)
			    (:load-files mod)
			    (unless (typefn a)(:error 15 mod)) )
			(:add-unknow-thing m a)
			(:error 11 mod a))) )
      (if (and :toplevel-error
	       (consp :lastread)
	       (valfn (car :lastread)))
	  (exit retrytoplevel :lastread)
	a)
      )
     ;; special case sharp-macro: we are going from :DEFSHARP
     ((eq f '|#|)
      (cond
       ;; case of (DEFSHARP <c> ...)
       ((setq mod (other-from a))
	(unless (:user-included-p a mod 'typefn); user-included module loaded
					; else we import it for it's CPENV
		(#:crunch:advise FOUNDSHARP mod a)
		(let ((#:sys-package:sharp :sys-package:sharp)
		      (#:crunch:default-multiple-defined-message 33))
		  (setq mod (:load-cpenvs a mod)))
		(:add-import a mod)
		(if (typefn a)
		    a
		  (if :include
		      (progn
			(:advise 18 mod a)
			(:add-include a mod)
			(let ((#:sys-package:sharp :sys-package:sharp))
			  (:load-files mod))
			(if (typefn a)
			    a
			  (:warning 15 mod)
			  ()))
		    (:add-unknow-thing 'errusm a)
		    (:warning 13 mod a)
		    ()
		    )) )
	)

       ;; case of (DEFUN #:sharp:<c> ...)
       ((neq (packagecell a) :sys-package:sharp)
	;; realy we are inside a read-error
	(let ((:toplevel-error ()))
	  (#:crunch:errudf:syserror f m (symbol :sys-package:sharp a))
	  ;; if we return, that means we find a good new definition for <a>
	  ;(exit retryread (reread `(#/# ,(cascii a)))(read))
	  ))
       (t
	(:add-unknow-thing 'errusm a)
	(:warning 3 a)
	()
	)
       ))
     ;; classic undefined fct
     (t
      (:add-unknow-thing m a)
      (:error 1 a)
      )) )
  )

;;; EOF case
(defun :errsxt:syserror(f m a)
  (if #:crunch:read-error
      (progn (:warning 22
		       (getdefmodule #:crunch:current-defmod 'defmodule)
		       #:crunch:read-error)
	     (exit eof))
    (printerror f m a)
    (exit eof))
  )

;;; special PARENT DEFSTRUCT case
;; no internal case  about structure, because too much!
(defun :errstc (name a m)
  (let ((mod ())
	(s (list 'structure a)))
    (cond
     ;; allready meet case
     ((:cunknow-thing-p m s)
      (:warning 4 name a))
     ;; we found rigth module
     ((setq mod (struct-from s))
      (#:crunch:advise FOUNDPARENTSTRUCT mod a name)
      (let ((#:crunch:default-multiple-defined-message 34))
	(setq mod (:load-cpenvs a mod)))
      (:add-import s mod)
      (unless (getprop a 'defstruct)
	      (if :include
		  (progn
		    (:advise 19 mod a)
		    (:add-include a mod)
		    (:load-files mod)
		    (unless (getprop a 'defstruct)(:error 15 mod))) 
		(:add-cunknow-thing m a)
		(:warning 14 mod a))
	      ))
     ;; really undefined structure
     (t
      (:add-cunknow-thing m s)
      (:warning 4 name a)
      )
     )))

;;; special CEYX case
(defun :errnotarecordoratclass:syserror  (name m a)
  (let ((mod ())
	(s (list 'structure a)))
    (cond
     ;; allready meet case
     ((:cunknow-thing-p m s)
      (:warning 6 name a)
      ':unknow-structure)
     ;; we found rigth module
     ((setq mod (struct-from s))
      (#:crunch:advise FOUNDSTRUCT mod a name)
      (let ((#:crunch:default-multiple-defined-message 34))
	(setq mod (:load-cpenvs a mod)))
      (:add-import s mod)
      (ifn (getprop a 'defstruct)
	   (if :include
	       (progn
		 (:advise 19 mod a)
		 (:add-include a mod)
		 (:load-files mod)
		 (if (getprop a 'defstruct)
		     a
		   (:error 15 mod)) )
	     (:add-cunknow-thing m a)
	     (:warning 14 mod a)
	     ':unknow-structure)
	   a))
     ;; really undefined structure
     (t
      (:add-cunknow-thing m s)
      (:warning 6 name a)
      ':unknow-structure
      )
     )))

;;; unknown form case
(defun :errunk:syserror (f m a)
  (let ((mod ()))
    (cond
     ;; allready meet case
     ((:unknow-thing-p m a) (:warning 29 a))
     ;; we found rigth module
     ((setq mod (other-from a))
      ; simplest case : we can't verify if new definition for <a> is rigth
      ; because we haven't predicat for that!!
      ; so we just try to load corresponding CPENV
      (let ((#:crunch:default-multiple-defined-message 32))
	(setq mod (:load-cpenvs a mod)))
      (:add-import a mod) )
     ;; else it's realy an error
     (t
      (:add-unknow-thing m a)
      (:error 29 a)
      ) )))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; complementary functions
;;;

;;; defabbrev par defaut
(defabbrev unknow-abbrev unknow-abbrev)

;;; defstruct paar defaut
(defstruct :unknow-structure)

;; sharp-macro error
(defmessage errusm (french "sharp macro inconnue")
                   (english "undefined sharp macro"))

;; add a module name in the modules list to import
(defun :add-import(f mods)
  (newl :modules-to-import (cons f mods)))

;; add a module name in the modules list to include
(defun :add-include(f mods)
  (newl :modules-to-include (cons f mods)))

;; add a THING (fct, or abbrev or ...) in global
(defun :add-unknow-thing (m a)
  (let ((la (assq m :unknow-things)))
    (if la
	(rplacd la (cons a (cdr la)))
      (newl :unknow-things (list m a)) )))
;; idem with assoc
(defun :add-cunknow-thing (m a)
  (let ((la (assoc m :unknow-things)))
    (if la
	(rplacd la (cons a (cdr la)))
      (newl :unknow-things (list m a)) )))

;; allready meeted
(defun :unknow-thing-p (m a)
  (memq a (cassq m :unknow-things)))
;; idem with equal
(defun :cunknow-thing-p (m a)
  (memq a (cassoc m :unknow-things)))

;; add a unknow sharp macro
'(defun :add-unknow-sharp (c)
  (unless (memq c :unknow-sharp)
	  (newl :unknow-sharp c)))

;; predicat : return files that are in a FILES field of a module of projects
;;            ((m1 . f11 f12 ...)(m2 . f21 f22 ...)...)
;; (!!WARNING!! this spend a long time)
(defun :files-of-module-p (files)
;!?!? a optimiser en introduisant le champs files des modules dans la base
  (setq files (mapcan (lambda(f)
			(let ((x (probepathf f)))
			  (when x
				(ncons (file-namestring (pathname x))))))
		      files))
  (when files
	(mapcan (lambda(m)
		  (let ((x (intersection files
					 (mapcar (lambda(f)
						   (file-namestring (pathname f)))
						 (getdefmodule (readdefmodule m)
							       'files))
					 'equal) ))
		    (when x
			  (ncons (cons m x))) ))
		#:crunch:all-modules))
  )

;; user included modules
(defun :user-included-p (f mod test)
  (let ((m (intersection (mapcan (lambda(m)(if (probepathm m)
					       (mapcar 'probepathf
						       (getdefmodule
							(:readdefmodule m)
							'files))
					     (ncons (probepathf m)) ))
				 mod)
			 #:crunch:includes
			 'equal) ))
    (when m
	  (:advise INCLUDEDFILE f m)
	  (mapc ':load-file-1bis m)
	  (unless (funcall test f)(:error 15 m))
	  (when (cdr m)
		(cond ((eq test 'typefn)
		       (:warning 31 f m))
		      ((eq test 'abbrevp)
		       (:warning 32 f m))
		      ((:warning 25 f m))
		      ))
	  t)))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; the LOADING functions
;;;

(defun :readdefmodule (m)
  (let ((#:system:in-read-flag ())      ;pour ruser le lecteur qui ne sait pas
					;lire 1 fich pendant 1 err de lecture
	c)
    (setq c (catcherror t (readdefmodule m)))
    (if c (car c)
      (:error 26 m))))

#| apparemment pas utile?!?!
;;; to load modules <lmod>
(defun :load-modules (lmod)
  (mapc (lambda(m)
	  (unless (memq m :loaded-modules)
	          ;pour ruser le lecteur qui ne sait pas lire un fichier
	          ;pendant 1 erreur de lecture
		  (let ((#:system:in-read-flag ()))
		    (#:crunch:advise LOADMODULE m)
		    (newl :loaded-modules m)
		    (loadmodule m))))
	lmod))
|#
;;; to load module's include
(defun :load-include (mod . defmod)
  (mapc ':load-file-1bis (or (car defmod)
			     (getdefmodule (:readdefmodule mod) 'include))
	))
			
;;; to load module's files
(defun :load-files (lmod)
  (mapc ':load-file lmod))

(defun :load-file (mod)
  (cond
   ((probepathm mod)
    ;; it's a module
    (mapc ':load-file-1 (getdefmodule (:readdefmodule mod) 'files))
    )
   ((probepathf mod)
    ;; assuming it's a file
    (:load-file-1 mod))
   (t
    ;; it's nothing!
    (printerror 'loadfile '#:module:errnmd mod))
   ))

(defun :load-file-1(f)
  (setq f (symbol ()(pathname-name (pathname f))))
  (:load-file-1bis f))

(defun :load-file-1bis (f)
  (unless (memq f :loaded-files)
	  (newl :loaded-files f)
	  (#:crunch:advise LOADFILE f)
	  (unless (catcherror t
			      (let ((#:sys-package:itsoft ())
				    (#:system:in-read-flag ())
					;pour ruser le lecteur qui ne sait pas 
					;lire un fichier ds 1 err de lecture
				    )
				(libloadfile f t)))
		  (setq :loaded-files (delq f :loaded-files))
		  (printerror 'loadfile
			      'LOADFILEFAILED
			      f)
		  (setq #:crunch:read-error 'loadfile)
		  )
	  (#:crunch:advise DONE f)
	  ))

;;; to load CPENV field of modules list <lmod>
;;; If multiple modules are required, verify with imposed imports
(defun :load-cpenvs (expr lmod)
  (ifn (cdr lmod)
       (:load-cpenv (car lmod))
      (:advise 25 expr lmod)
      (let ((lgm (or (intersection lmod
				   (getdefmodule #:crunch:current-defmod
						 'import))
		     lmod)))
	(unless (eq lgm lmod)
		(:advise REQUIREDMODULES expr lgm)
		(setq lmod lgm))
	(when (cdr lgm)
	      (funcall ':warning #:crunch:default-multiple-defined-message
		       (kwote expr) (kwote lgm)))
	(mapc ':load-cpenv lgm)) )
  lmod)

;;; to load CPENV field of module <mod>
;;; don't forget to load INCLUDE field in the same time
(defun :load-cpenv (mod . defmod)
  (setq mod (symbol () (pathname-name (pathname mod))))
  (unless (memq mod :loaded-cpenv)
	  (newl :loaded-cpenv mod)
	  (let ((defmod (or (car defmod)
			    (:readdefmodule mod))))
	    ;; loaded INCLUDE files
;;;;;;;;;;;; NO !! complice doesn't load include field of imported modules
;;;;;;;;;;;; (:load-include mod (getdefmodule defmod 'include))
	    ;; loaded import modules's CPENV
	    (mapc ':load-cpenv (getdefmodule defmod 'import))
	    ;; loaded current module's CPENV
	    (#:crunch:advise CPENV mod)
	    (mapc (lambda(expr)
		    (when (consp expr)
			  (let ((#:system:in-read-flag ())
				(#:sys-package:itsoft
				 (remq 'crunch #:sys-package:itsoft))
				)
			    (unless (catcherror t
						(eprogn expr)
						)
				    (setq :loaded-cpenv
					  (delq mod :loaded-cpenv))
				    (printerror 'eval
						'CPENVFAILED
						expr)
				    (setq #:crunch:read-error
					  (get-message 'CPENV))
				    )
			    )))
		  (getdefmodule defmod 'cpenv))
	    (#:crunch:advise DONE mod)
	    )))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; macro-sharp mechanism
;;;
(eval-when (load eval compile)
(defmacro :defsharp (c)
  (let ((schar (symbol #:sys-package:sharp c)) )
    `(defun ,(symbol ':sharp c) :args
       (if (typefn ',schar)
	   (apply ',schar :args)
	 (let* ((#:sys-package:itsoft (remq 'crunch #:sys-package:itsoft))
		(c (:errudf:syserror '|#| 'errudf ',schar))
		)
	   (if c
	       (apply ',schar :args)
	     ;; return () when unknow
	     ()
	     ))))
    ))

)

(:defsharp | |)
(:defsharp |!|)
(:defsharp |"|)
(:defsharp |#|)
(:defsharp |$|)
(:defsharp |%|)
(:defsharp |&|)
(:defsharp |'|)
(:defsharp |(|)
(:defsharp |)|)
(:defsharp |*|)
(:defsharp |+|)
(:defsharp |,|)
(:defsharp |-|)
(:defsharp |.|)
(:defsharp |/|)
(:defsharp |0|)
(:defsharp |1|)
(:defsharp |2|)
(:defsharp |3|)
(:defsharp |4|)
(:defsharp |5|)
(:defsharp |6|)
(:defsharp |7|)
(:defsharp |8|)
(:defsharp |9|)
(:defsharp |:|)
(:defsharp |;|)
(:defsharp |<|)
(:defsharp |=|)
(:defsharp |>|)
(:defsharp |?|)
(:defsharp |@|)
(:defsharp |A|)
(:defsharp |B|)
(:defsharp |C|)
(:defsharp |D|)
(:defsharp |E|)
(:defsharp |F|)
(:defsharp |G|)
(:defsharp |H|)
(:defsharp |I|)
(:defsharp |J|)
(:defsharp |K|)
(:defsharp |L|)
(:defsharp |M|)
(:defsharp |N|)
(:defsharp |O|)
(:defsharp |P|)
(:defsharp |Q|)
(:defsharp |R|)
(:defsharp |S|)
(:defsharp |T|)
(:defsharp |U|)
(:defsharp |V|)
(:defsharp |W|)
(:defsharp |X|)
(:defsharp |Y|)
(:defsharp |Z|)
(:defsharp |[|)
(:defsharp |\|)
(:defsharp |]|)
(:defsharp |^|)
(:defsharp |_|)
(:defsharp |`|)
(:defsharp |a|)
(:defsharp |b|)
(:defsharp |c|)
(:defsharp |d|)
(:defsharp |e|)
(:defsharp |f|)
(:defsharp |g|)
(:defsharp |h|)
(:defsharp |i|)
(:defsharp |j|)
(:defsharp |k|)
(:defsharp |l|)
(:defsharp |m|)
(:defsharp |n|)
(:defsharp |o|)
(:defsharp |p|)
(:defsharp |q|)
(:defsharp |r|)
(:defsharp |s|)
(:defsharp |t|)
(:defsharp |u|)
(:defsharp |v|)
(:defsharp |w|)
(:defsharp |x|)
(:defsharp |y|)
(:defsharp |z|)
(:defsharp |{|)
(:defsharp ||||)
(:defsharp |}|)
(:defsharp |~|)
