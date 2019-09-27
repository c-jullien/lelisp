;;;
;;; MESSAGES:  The Multiligual Messages Facility for Le-Lisp
;;;
;;; $Source: /usr/cvs/lelisp/llib/messages.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(unless (>= (version) 15.2)
        (error 'load 'erricf 'messages))

(defvar #:sys-package:colon 'messages)

(add-feature 'messages)


;;;
;;; "Global variables and internal useful macros"
;;;

(defvar :list-of-languages ())  ; the list of language names

(defvar :current-language ())   ; the name of the current language

(defvar :default-language       ; the language to be retrieved from when a
        'english)               ; message is not defined in the
                                ; current language

(defvar :list-of-notremovable-language ; the allready presents languages
        '(french english))

(defvar :working-language ())  ; a (temporary) working language

(defmacro :language-name-p (lang)
  `(memq ,lang :list-of-languages))   

;;;
;;; "Functions on languages"
;;;

(defun record-language (lang)
  (if (symbolp lang)
      (unless (:language-name-p lang)
	      (newl :list-of-languages lang)
	      lang)
      (:error-nal 'record-language lang)))

(defun remove-language (lang)
  ;; remove all the messages associated with lang.
  (if (symbolp lang)
      (if (not (:language-name-p lang))
	  (:error-bal 'remove-language lang)
	  (setq :working-language lang)
	  ;; The above "setq" pemits to use ":working-language"
	  ;; instead of "lang" in the lambda expr given to "mapoblist";
	  ;; the version 15.2 don't allow closure, and if we use "lang"
	  ;; complice will consider all the references to the variable
	  ;; "lang" as dynamic references (n.d.c)
	  (mapoblist (lambda (symb)
		       (when (getprop symb :working-language)
			     (remprop symb :working-language))))
	  ;; remove the name of the language
	  (unless (memq lang :list-of-notremovable-language)
		  (setq :list-of-languages
			(delq lang :list-of-languages)))
	  ;; and returns lang 
	  lang)
      (:error-nal 'remove-language lang)))

(defun message-languages ()
  ;; to avoid a physical modification of the list
  (copy :list-of-languages))

(defun get-all-messages (lang)
  (if (symbolp lang)
      (if (not (:language-name-p lang))
	  (:error-bal 'get-all-messages lang)
	  (setq :working-language lang)
	  ;; The above "setq" pemits to use ":working-language"
	  ;; instead of "lang" in the lambda expr given to "mapoblist";
	  ;; the version 15.2 don't allow closure, and if we use "lang"
	  ;; complice will consider all the references to the variable
	  ;; "lang" as dynamic references (n.d.c)
	  (mapcoblist (lambda (symb)
			(when (getprop symb :working-language)
			      (list symb)))))
      (:error-nal 'get-all-messages lang)))

(defvar #:system:fatal-errors
  (when (boundp '#:system:fatal-errors)
	#:system:fatal-errors))

(defun current-language &nobind
  ;; get/set the current-language
  (selectq (arg)
      (0 :current-language)
      (1 (let ((lang (arg 0)))
	   (if (symbolp lang)
	       (if (:language-name-p lang)
		   (progn
		     (setq ; maj langage courant
		      :current-language lang
		      ;; compatibility
		      #:system:foreign-language (neq lang 'french))
		     ;; special case: fatal errors
		     (mapc (lambda(s)
			     (set s (or (getprop s :current-language)
					(string s))))
			   #:system:fatal-errors)
		     lang)
		   (:error-bal 'current-language lang))
	     (:error-nal 'current-language lang))))
      (t (error 'current-language 'errwna 0))))

(defun default-language &nobind
  ;; get/set the default-language
  (selectq (arg)
      (0 :default-language)
      (1 (let ((lang (arg 0)))
	   (if (symbolp lang)
	       (if (:language-name-p lang)
		   ;; update default language
		   (setq :default-language lang)
		   (:error-bal 'default-language lang))
	       (:error-nal 'default-language lang))))
      (t (error 'default-language 'errwna 0))))

;;;
;;; "Functions on messages"	    
;;;

;;; The current implementation uses P-Lists !!! (Yes I know ...)

(defun get-message (msg)
  ;; returns a message
  (if (symbolp msg)
      (or (getprop msg :current-language)
	  (getprop msg :default-language)
	  (string msg))
      (:error-nam 'get-message msg)))

                     
(defun get-message-p (msg)
  ;; returns a message or ()
  (and (symbolp msg)
       (or (getprop msg :current-language)
	   (getprop msg :default-language))))
                     
(defun put-message (msg lang val)
  (:put-message msg lang val 'put-message))

(defun :put-message (msg lang val fnt)
  ;; in order to allow clear error messages
  ;; fnt = put-message or defmessage
  (if (variablep msg)
      (if (symbolp lang)
	  (if (:language-name-p lang)
	      (if (stringp val)
		  (progn (putprop msg val lang) msg)
		  (:error-bam fnt val))
	      (:error-bal fnt lang))
	  (:error-nal fnt lang))
      (:error-nam fnt msg)))

(defun remove-message (msg lang)
  (if (variablep msg)
      (if (symbolp lang)
	  (if (:language-name-p lang)
	      (progn (remprop msg lang) msg)
	      (:error-nal 'remove-message lang))
	  (:error-bal 'remove-message lang))
      (:error-nam 'remove-message msg)))

(defmacro defmessage (msg . ldef)
  `(progn ,@(mapcar (lambda (def)
		      (if (and def
			       (consp  def)
			       (eq (length def) 2))
			  `(:put-message ',msg
					 ',(car def)
					 ',(cadr def)
					 'defmessage)
			  (error 'defmessage 'errsxt def)))
		    ldef)
	  ',msg))

(defun #:sharp:m ()
  ;; in order to export the #macro, it's preferable to use this function
  ;; instead of the defsharp macro (which is not a macro but a fexpr!)
  (let ((symb (read)))
    (if (variablep symb)
	(ncons `(get-message ',symb))
        (:error-nam '|#M| symb))))

;;; The .lo files generated by complice don't add the || in the
;;; name #:sharp:|M|. The following synonym permits to use
;;;; both #M... and #m...

(synonym (symbol 'sharp "M") '#:sharp:m)

;;;
;;; "Error machinery"
;;;

(defmacro :error-nal (fnt wrong)
  `(error ,fnt 'error-wrong-language ,wrong))

(defmacro :error-bal (fnt wrong)
  `(error ,fnt 'error-not-recorded-language ,wrong))

(defmacro :error-nam (fnt wrong)
  `(error ,fnt 'error-wrong-message ,wrong))

(defmacro :error-bam (fnt wrong)
  `(error ,fnt 'error-not-string-message ,wrong))


;;;
;;; "Initializations"
;;;


(record-language 'french)
(record-language 'english)

(if #:system:foreign-language
    (current-language 'english)
    (current-language 'french))

;;; this will be in effect when the error machinery will use
;;; the multilingual facility...

(defmessage error-wrong-language 
  (french  "l'argument n'est pas un nom de langue")
  (english "not a language name"))

(defmessage error-not-recorded-language
  (french  "l'argument n'est pas une langue enregistre'e")
  (english "not a recorded language"))

(defmessage error-wrong-message
  (french  "l'argument n'est pas un nom de message")
  (english "not a message name"))

(defmessage error-not-string-message
  (french  "l'argument n'est pas une chai^ne de message")
  (english "not a message string"))
