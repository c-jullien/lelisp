; .EnTete "Le_Lisp version 15.2" " " "Makefile en Le-Lisp"

; .Titre "Makefile en Le-Lisp"
; .Auteur "Pascal Kuczynski"
; .Centre "$Header: /usr/cvs/lelisp/llub/makefile.ll,v 1.1 2006/12/09 10:41:07 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'makefile))

(defvar #:sys-package:colon 'makefile)

(add-feature 'makefile)

; ide'e: disposer d'un me'canisme de Makefile a` la UNIX en Le-Lisp.
; On a donc une macro "make" qui selon les dates des fichiers qui lui
; sont fournient par la macri "makefile" execute ou non les
; expression afferantes.

; Syntaxe:
; (Makefile
;     (<file>  ( <file>* )
;         <S-expr>*
;         )*
;     )

; exemple: On veut un makefile lisp qui decide si les modules FOO et BAR
; doiventt etre recompile's ou non:
; (Makefile 
;    (#u"foo.lo" (#p"foo.ll" #p"foo.lm")
;            (compilemodule foo))
;    (#p"bar.lo" (#p"bar.ll" #p"bar-bis.ll" #p"bar.lm")
;            (compilemodule bar)))
;
; (make #p"foo.lo")  ou  (make #p"bar.lo")  ou  (make #p"foo.lo" #p"bar.lo")

(defvar date_null (create-date))
(#:date:year date_null 0)
(#:date:month date_null 0)
(#:date:day date_null 0)
(#:date:hour date_null 0)
(#:date:minute date_null 0)
(#:date:second date_null 0)

(defmacro makefile lentry
  ;; verifiacation de la structure lentry
  `(setq #:makefile:makefile ',lentry))

(defmacro make lentry
  `(or
     ,@(mapcar #'(lambda(e)
		   (:make-guts e #:makefile:makefile))
	       lentry)))

(de :make-guts (entry makefile)
    (when (setq entry (:member entry makefile))
	  (let ((ref (pathname (car entry)))
		(dep (cadr entry))
		(code (cddr entry)))
	    `(let ((file-ref-date (if (probefile ,ref)
				      (date-of-file ,ref)
				    date_null)))
	       (when (or ,@(mapcar #'(lambda(f)
				       (:dep? makefile
					      f 
					      'file-ref-date))
				   dep))
		     ,@code)
	       ))))

(de :dep? (makefile f d)
    `(or ,(:make-guts f makefile)
	 (and (probefile ,(setq f (pathname f)))
	      (<date ,d (date-of-file ,f)))))

(de :member (x l)
  (and (consp l)
       (if (equal x (caar l))
	   (car l)
	 (:member x (cdr l)))))
