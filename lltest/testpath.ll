;;;
;;; testpath.ll:  Pathnames tests.
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testpath.ll,v $
;;; $Date: 2016/05/21 10:36:08 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (featurep 'testcomm) (libload testcomm t))
(unless (featurep 'pathname) (libload path.ll t))

(print  "  [Pathnames test]")
(testfn () (probepathf #u"path.lt"))

;;the same with local syntax

(let* ((tmpfile (temporary-file-pathname "test")) (x (openo tmpfile)))
   (with ((outchan x)
          (inchan  (openi (probepathf #u"path.lt"))))
         (let ((#:system:print-for-read t))
            (flet ((old-prin (x) x))
               (synonymq old-prin #:pathname:prin)
               (flet ((#:pathname:prin (x)
                         (let (#:system:print-for-read)
                            (old-prin x))))
                  (untilexit EOF (print (read)))))))
   (close x)
   (print  "  [Pathnames test with local syntax]")
   (testfn () tmpfile)
   (deletefile tmpfile)
   ())                                ()


