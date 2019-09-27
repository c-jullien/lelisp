;;;
;;; ABBREV:  abbreviations' management.
;;;
;;; $Source: /usr/cvs/lelisp/llib/abbrev.ll,v $
;;; $Date: 2016/05/21 10:36:04 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------



(unless (>= (version) 15.2)
        (error 'load 'erricf 'abbrev))
(add-feature 'abbrev)
(defvar #:sys-package:colon 'abbrev)


;;; Abreviations are stored in a global a-list named:
;;;	#:system:abbrevs-alist
;;; which valu is:
;;;	((symbol . abbrev) ... (symbol . abbrev))

(defvar #:system:abbrevs-alist
  (when (boundp '#:system:abbrevs-alist)
	#:system:abbrevs-alist))

(defmessage :errsxtacc        (french "mauvaise abre'viation {}")
                              (english "bad {} abbreviation"))
(defmessage :errsxtclosingacc (french "} en dehors d'une abre'viation {}")
                              (english "} not within {}"))
(defmessage :errnotanabbrev   (french "l'argument n'est pas une abre'viation")
                              (english "not an abbreviation"))

(defmacro defabbrev (symb abbrev)
  `(put-abbrev ',symb ',abbrev))

(defun put-abbrev (symb abbrev)
  ;; if the abbreviataion exists, it valu is modified.
  (until (symbolp symb)
	 (setq symb (error 'put-abbrev 'errsym symb)))
  (until (symbolp abbrev)
	 (setq abbrev (error 'put-abbrev 'errsym abbrev)))
  (let ((old (assq symb #:system:abbrevs-alist)))
    (if (consp old)
	(rplacd old abbrev)
        (setq #:system:abbrevs-alist
	      (acons symb abbrev #:system:abbrevs-alist))))
  symb)

(defun rem-abbrev (symb)
  (until (symbolp symb)
	 (setq symb (error 'rem-abbrev 'errsym symb)))
  (setq #:system:abbrevs-alist (delq (assq symb #:system:abbrevs-alist)
				     #:system:abbrevs-alist))
  symb)

(defun get-abbrev (symb)
  (until (and (symbolp symb)
	      (abbrevp symb))
	 (setq symb (error 'get-abbrev ':errnotanabbrev symb)))
  (cassq symb #:system:abbrevs-alist))

(defun abbrevp (symb)
  (if (consp (assq symb #:system:abbrevs-alist))
      t
      ()))

(defun has-an-abbrev (symb)
  (car (rassq symb #:system:abbrevs-alist)))

;;;
;;; Abbreviation reader.
;;;

(eval-when (load eval compile)

     (dmc |}| ()
	  (error '|}| ':errsxtclosingacc ()))

     (dmc |{| ()
	  (let ((l (read-delimited-list #/})))
	    (until (and (consp l)
			(symbolp (car l))
			(null (cdr l)))
		   (setq l (error '|{| ':errsxtacc l)))
	    (setq l (get-abbrev (car l)))
	    (reread (if l (explode l) '(#/| #/|))))
	  (with ((typecn #/: 'cpkgc))
		(read)))
)


;;;
;;; Abbreviations printer.
;;;

(defvar #:system:print-with-abbrev-flag
  (if (boundp '#:system:print-with-abbrev-flag)
      #:system:print-with-abbrev-flag
      t))

(defun #:symbol:prin (symb)
  ;; print a symbol
  (if (and #:system:print-with-abbrev-flag
	   (has-an-abbrev (packagecell symb)))
      (progn (let ((#:system:print-for-read ())) (pratom '|{|))
	     (pratom (has-an-abbrev (packagecell symb)))
	     (let ((#:system:print-for-read ())) (pratom '|}:|))
	     (let ((#:system:print-package-flag ())) (pratom symb)))
      (pratom symb)))


