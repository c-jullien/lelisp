;;;
;;; testcomm.ll:  common for all tests
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testcomm.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testcomm))
(setq #:sys-package:colon 'testcomm)

;;; .Section "Numerical consts"
(defvar pi 3.14159265358979323)
(defvar pi/2 (/ pi 2.))
(defvar pi/4 (/ pi 4.))
(defvar eNeper 2.718281828459045)

;;; .Section "Comparison floats/complexes"
(defvar :epsilon 
        ;; value of flotting precision
        (if (eq 0. 0.)
            (power 10. -6)        ; 31 bits
            (power 10. -14)))     ; 64 bits
(defvar :flt-error-flag ())

(de :equalp (x y)
    ;; test 2 values ( with epsilon on floats and  complexes numbers ).
    (car
        (catcherror t
            (cond ((or (floatp x) (floatp y)) 
                   (not (setq :flt-error-flag
			      (> (abs (- (float x) (float y))) :epsilon))))
                  ((and (numberp x) (numberp y)) 
                    (if (and (typefn 'complexp) (complexp x) (complexp y))
                        (and (:equalp (realpart x) (realpart y))
                             (:equalp (imagpart x) (imagpart y)))
                        (= x y)))
                  (t (equal x y))))))


; .Section " Common functions for test"
(de testfn (?speaki . file)
    ;; if no file then read on current input
    ;;
    ;; test function
    ;; ?speaki = t  ; for a log result
    ;;
    (if file
        (with ((inchan (openi (car file))))
              (dotestfn))
        (dotestfn)
        (exit eof)))

(defvar :error-occured ())

(de dotestfn ()
    ;; globals for easy debug
    ;; - testfnlu     : expression to test
    ;; - testfnval    : therical value
    ;; - testfnres    : calculate value
    (let ((#:sys-package:itsoft 'test))
      (setq #:system:redef-flag t)      ; no messages
      (setq :error-occured ())
      (untilexit eof
                 ; processing errors
                 (setq testfnlu (tread))
                 (if (and (consp testfnlu) (eq (car testfnlu) 'test-serie))
                     (progn
		       ; it's a title.
                       (if (cddr testfnlu)
                           (setq ?speaki (caddr testfnlu)))
                       (ifn ?speaki
                            (print "      " (cadr testfnlu))
                            (terpri) (print (cadr testfnlu)) (terpri)))
		     (progn 
		       ; not a title.
		       (setq testfnres (tread))
		       ; print before any side effects.
		       (when ?speaki
			     (prin "          " testfnlu " = ")
			     (:prinfr testfnres)
			     (print))
		       (setq testfnval (catcherror t (eval testfnlu)))
		       (setq :flt-error-flag ())
		       (unless (:equalp (car testfnval) testfnres)
			       (setq :error-occured t)
			       (prin (if :flt-error-flag
					 "*FLT*"  "*****")
				     (if #:system:foreign-language
					 " the value of: "
				         " la valeur de : "))
			       (:prinfr testfnlu)
			       (prin (if #:system:foreign-language
					 " should be: "
				         " devrait e^tre : "))
			       (:prinfr testfnres)
			       (prin (if #:system:foreign-language
					 " and not:  "
				         " et non pas :  "))
			       (:prinfr (car testfnval))
			       (terpri)) )))))

(defun :prinfr (obj)
  (let ((#:system:print-for-read t))
    (prin obj)))

(de testcp (?speaki . file)
    ;; if no file then read on current input
    ;;
    ;; ?speaki = t  for a log result
    ;; ?speakc = t  for compiler test
    ;;
    ;; globals for easy debug
    ;; - testcplu     : expression to test
    ;; - testcpval    : therical value
    ;; - testcpres    : calculate value
    (setq #:system:redef-flag t)      ; no messages
    ;    (debug t)
    (terpri)
    (print "===== WITH #:compiler:open-p")
    (terpri)
    (let ((#:compiler:open-p t))
         (testcp1))
    (terpri)
    (print "===== WITHOUT #:compiler:open-p")
    (terpri)
    (let ((#:compiler:open-p ()))
         (testcp1)))

(de testcp1 ()
    (if file
        (with ((inchan (openi (car file))))
              (dotestcp1))
        (dotestcp1)
        (exit eof)))

(de dotestcp1 ()
    ; pour le lancer plusieurs fois.
    (let ((#:sys-package:itsoft 'test) (cpfn))
      (untilexit eof
                 ; pour egalement traiter les erreurs
                 (setq testcplu (tread))
                 (if (and (consp testcplu)
                          (eq (car testcplu) 'test-serie))
                     (progn
                       (if (cddr testcplu)
                           (setq ?speaki (caddr testcplu)))
                       (ifn ?speaki
                            (print "      " (cadr testcplu))
                            (terpri) (print (cadr testcplu)) (terpri)))
                   (setq testcpres (tread))
                   (unless (and (consp testcpres)
                                (symbolp (car testcpres))
                                (or (memq (car testcpres) '(lambda flambda))
                                    (eq (index "err" 
                                               (string (car testcpres)) 0) 0)))
                           (when ?speaki 
                                 (print "        " 
                                        testcplu " ?= " testcpres))
                           (setq cpfn 'cp-foo-fnt)
                           (remfn cpfn)
                           (eval (list 'de cpfn () testcplu))
                           (setq testcpval
                                 (catcherror () 
                                             (compiler cpfn () () ())
                                             'ok))
                           (if (or (atom testcpval)
                                   (nequal testcpval '(ok)))
                               (print
				(if #:system:foreign-language
				    "*** error in compilation of "
				    "*** erreur dans la compilation de ")
                                      testcplu)
                             (setq testcpval 
                                   (catcherror () (funcall cpfn)))
			     (setq :flt-error-flag t)
                             (ifn (:equalp (car testcpval) testcpres)
                                  (progn (prin (if :flt-error-flag
						   "*FLT*"  "*****")
					       (if #:system:foreign-language
						" value of "
					        " la valeur de ") testcplu)
                                         (prin (if #:system:foreign-language
					        " should be "
						" devrait e^tre ") testcpres)
                                         (prin (if #:system:foreign-language
						" not " 
					        " pas ")
                                                (car testcpval))))))))))

(de #:test:syserror (f m a)
    ; return list (name-error fnt)
    (err (list (list m f a))))

(de tread ()
    (car (catcherror t (read))))

(add-feature 'testcomm)


