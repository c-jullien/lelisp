; .EnTete "Le_Lisp version 15.2" " " "Optimiseur de modules"

; .Titre "Optimiseur de modules"
; .Auteur "Pascal Kuczynski"
; .Centre "$Id: lmcache.ll,v 1.1 2006/12/09 10:41:04 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'lmcache))

(defvar #:sys-package:colon 'lmcache)

(add-feature 'lmcache)

;;; l'ide'e est d'optimiser la lecture des infos contenues
;;; dans les modules (.lm).
;;; Pour cela, on redefini READDEFMODULE, de facon a ce qu'il regarde
;;; d'abord dans la base, avant de reprendre l'ancienne definition.

;;; la liste des defmodules
(defvar :defmodule ())
;;; verbose mode
(defvar :verbose ())

(defmacro :pr l
  `(when :verbose (print ,@l)) )

(unless (typefn ':oldreaddefmodule)
	(synonymq :oldreaddefmodule readdefmodule))

(de :readdefmodule (f)
    (let ((s (symbol () (pathname-name f))))
      ;; recherche du path du module
      (let ((r (:get-defmodule s)))
	(or ;; deja dans la base
	    r
	    ;; sinon on l'y met
	    (when (setq r (:oldreaddefmodule f))
		  (setq :defmodule (:put-defmodule s r))
		  r))
	)))

(defmacro :put-defmodule (lm defm)
  `(acons ,lm ,defm :defmodule))

(defmacro :get-defmodule (lm)
  `(cassq ,lm :defmodule))


(de :at-end l
    (:pr "; lmcache: " (length :defmodule) " modules were cached in this session")
    (super-itsoft '#.#:sys-package:colon 'at-end l))

(de lmcacheinit ()
    (synonymq readdefmodule :readdefmodule)
    (newl #:sys-package:itsoft '#.#:sys-package:colon)
)

(de lmcacheend ()
    (synonymq readdefmodule :oldreaddefmodule)
    (setq #:sys-package:itsoft
	  (delete '#.#:sys-package:colon #:sys-package:itsoft))
    )

; init at load-time? No
;(eval-when (load eval)
;(lmcacheinit)
;)
