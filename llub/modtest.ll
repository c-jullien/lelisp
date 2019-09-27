;;;
;;; Allows in v15, v16 test-module flavor.
;;; 
;;;
;;; Initial author : A. Meller
;;;
;;; $Header: /usr/cvs/lelisp/llub/modtest.ll,v 1.1 2006/12/09 10:41:07 jullien Exp $
;;;
;;; 
(defmessage errnotestfile
  (french "Pas de spe'cification TESTFILE dans le module")
  (english "No TESTFILE specification in module"))

(defun test-module (mod . verbose)
      (unless (featurep 'testcomm)
              (libload "testcomm"))
      ;; process the tests files associated with MOD
      (let ((files (getdefmodule (readdefmodule mod) 'testfile)))
	(if files
	    (if (consp files)
		(mapc (lambda (file) (process-test-file file verbose))
		      files)
	      (process-test-file files verbose))
	  (error 'test-module 'errnotestfile mod))))

(defun process-test-file (file verbose)
  (tag eof 
       (testfn (and verbose (car verbose))
	       (probepathf file))))

