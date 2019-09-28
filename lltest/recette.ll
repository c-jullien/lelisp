;;;
;;; recette.ll : technical suite
;;;
;;; $Source: /usr/cvs/lelisp/lltest/recette.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;; This file is the standard entry of technical suite Le-Lisp.
(print ";;;")
(print ";;;=================================================================")
(print ";;;= ONLY ERRORS CONCERNING THE ROUNDING OF FLOATING POINT NUMBERS =")
(print ";;;=             MAY APPEAR WHEN RUNNING THESE TESTS               =")
(print ";;;=================================================================")
(print ";;;")

; 32 bits or 64 bits ?
(add-feature (if (eq 0.0 0.0)
                 '31BITFLOATS
                 '64BITFLOATS))

(unless (featurep 'date)
	(loadmodule 'date))
(unless (featurep 'format)
	(loadmodule 'format))

(defvar #:recette:n 0.0)

(de imprimetype (l)
    (terpri)
    (setq #:recette:n (+ #:recette:n .1))
    (print ";;;")
    (print ";;; " l)
    (print ";;;"))

(de imprimetest (l)
    (terpri 2)
    (print (format ()";;;~4,1F)- ~A." (incr #:recette:n) l))
    (terpri)
    (llprintime)
    (llpringcinfo)
    (terpri))

(de llprintime ()
    (print ";;; date: " (date) "  runtime: " (runtime))
    )

(de llpringcinfo ()
    (let ((gcinfo (cdr (gc t)))
	  (format ";~2T~6A~1A ~3T~6@A,~4T~3D GC.")
	  (z ())
	  (K "K")
	  (B " ")
	  )
      (print (format () ";;; gcinfo: ~3D manual GC. Remain:"
		     (nth 7 gcinfo)))
      (print (format () format
		     (if (listp (setq z (nth 9 gcinfo))) (car z) z)
		     (if (listp z) K B)
		     'cons
		     (nth 0 gcinfo)))
      (print (format () format
		     (if (consp (setq z (nth 11 gcinfo))) (car z) z)
		     (if (consp z) K B)
		     'symbol
		     (nth 1 gcinfo)))
      (print (format () format
		     (if (consp (setq z (nth 13 gcinfo))) (car z) z)
		     (if (consp z) K B)
		     'string
		     (nth 2 gcinfo)))
      (print (format () format
		     (if (consp (setq z (nth 15 gcinfo))) (car z) z)
		     (if (consp z) K B)
		     'vector
		     (nth 3 gcinfo)))
      (when (featurep '64bitfloats)
	    (print (format () format
			   (if (consp (setq z (nth 17 gcinfo))) (car z) z)
			   (if (consp z) K B)
			   'float
			   (nth 4 gcinfo))))
      (print (format () format
		     (if (consp (setq z (nth 21 gcinfo))) (car z) z)
		     (if (consp z) K B)
		     'heap
		     (nth 6 gcinfo)))
      (print (format () format
		     (if (consp (setq z (nth 23 gcinfo))) (car z) z)
		     (if (consp z) K B)
		     'code
		     0))
    ))

(print)
(print ";;;         initial gcinfo: ")(llpringcinfo)
(print)

               ;;;;;;;;;;;;;;;;;;;;;;;
               ;;  Here begin tests ;;
               ;;;;;;;;;;;;;;;;;;;;;;;

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
(imprimetype " testing kernel")
;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(compile-all-in-core) ; save space
(imprimetest "Interpreter test")
(libload "testfn" t)

(compile-all-in-core) ; save space
(imprimetest "Floating numbers test")
(libload "testfloat" t)
(compile-all-in-core)

(compile-all-in-core) ; save space
(imprimetest "Generic arithmetic test")
(unless (featurep 'genr)
	(loadmodule "genr"))
(libload "testgenr" t)

(compile-all-in-core) ; save space
(imprimetest "Reading test")
(libload "testread" t)

(compile-all-in-core) ; save space
(imprimetest "Writing test")
(libload "testprint" t)


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
(imprimetype " testing standard modules")
;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(when (featurep 'loader)
(compile-all-in-core) ; save space
      (imprimetest "Loader test")
      (libload "testlap" t)
      )

(when (featurep 'compiler)
(compile-all-in-core) ; save space
      (imprimetest "First compiler test")
      (when (eq (typefn 'compiler) 'expr)
	    (llcp-std ()))
      (libload "testcp" t)
      )

(when (featurep 'compiler)
(compile-all-in-core) ; save space
      (imprimetest "Second compiler test")
      (libload "testcpl" t)
      )

(when (featurep 'compiler)
(compile-all-in-core) ; save space
      (imprimetest "Peep Hole Optimiser test")
      (libload "testpeep" t)
      )

(compile-all-in-core) ; save space
(imprimetest "Files test")
(libload "testfiles" t)

(compile-all-in-core) ; save space
(imprimetest "Path test")
(unless (featurep 'pathname)
	(loadmodule "path"))
(libload "testpath" t)

(compile-all-in-core) ; save space
(imprimetest "Messages test")
(unless (featurep 'messages)
	(loadmodule "messages"))
(libload "testmsgs" t)

(compile-all-in-core) ; save space
(imprimetest "MicroCeyx test")
(unless (featurep 'microceyx)
	(loadmodule "microceyx"))
(libload "testmcx" t)

(compile-all-in-core) ; save space
(imprimetest "Module test")
(libload "testmodule" t)

(compile-all-in-core) ; save space
(imprimetest "Date test")
(libload "testdate" t)

(compile-all-in-core) ; save space
(imprimetest "Trace test")
(unless (featurep 'debug)
        (loadmodule "trace"))
(libload "testtrace" t)

(compile-all-in-core) ; save space
(imprimetest "Format test")
(unless (featurep 'format)
        (loadmodule "format"))
(libload "testformat" t)

;;; If CLOAD is not implemented on the system, callext tests must be done
;;; with letestextbin
(when (or #:system:cloadp
	  (getglobal "_tlno")
	  (getglobal "tlno"))
      (compile-all-in-core) ; save space
      (imprimetest "Callext test")
      (unless (featurep 'callext)
	      (loadmodule "callext"))
      (with ((printlength 5))
	    (libload "testextern" t))
      )

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
(imprimetype " testing not standard modules")
;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
(compile-all-in-core) ; save space

(imprimetest "Complexs test")
(unless (featurep 'complex)
	(loadmodule "complex"))
(libload "testcomplex" t)
#|
 OLD RATIO LIBRARY BREAK TESTS OF NEW RATIO LIBRARY
(compile-all-in-core) ; save space
(imprimetest "Rationnals test (old version: ratio)")
(unless (featurep 'ratio)
	(loadmodule "ratio"))
(libload "testratio" t)

(imprimetest "Numeriques Benchs (old version)")
(bench)
(when (featurep 'compiler)
      (compile-all-in-core)
      (print)
      (bench))
|#

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
(imprimetype "Performance measures")
;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
(when (featurep 'loader) ; it's too long under interpreter
      ; Reaching Benchmarks 
      (newl #:system:path
	    (namestring (make-pathname
		         (pathname-host
                                  (pathname #:system:directory))
                         (pathname-device
                                  (pathname #:system:directory))
			 (append (pathname-directory
				  (pathname #:system:directory))
				 (list "benchmarks")))))
      (compile-all-in-core) ; save space
      (imprimetest "Benchmarks")
      (libload "benchmarks" ())
      (do-test)
      )


#|
   KERN TESTS APPEARS VERY LATE.
   THEY BREAK OTHER GENERIC ARITHMETICS TESTS.
|#
(compile-all-in-core) ; save space
(imprimetest "KerN test")
(libload "testkern" t)
(test 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20)

(compile-all-in-core) ; save space
(imprimetest "Rationnals test (new version: bnq)")
(unless (featurep 'q)
	(loadmodule "bnq"))
(libload "testbignum" t)

(imprimetest "Numerique Benchs (new version)")
(libload "benchbignum" t)
(bench)
(when (featurep 'compiler)
      (compile-all-in-core))
(bench)

(compile-all-in-core) ; save space
(imprimetest "Setf test")
(unless (featurep 'setf)
        (loadmodule "setf"))
(libload "testsetf" t)

(compile-all-in-core) ; save space
(imprimetest "E/S strings test (Stringio)")
(unless (featurep 'stringio)
	(loadmodule "stringio"))
(libload "teststrgio" t)

(compile-all-in-core) ; save space
(imprimetest "Circulare functions test")
(unless (featurep 'libcir)
	(loadmodule 'libcir))
(libload "testcir" t)

(compile-all-in-core) ; save space
(imprimetest "Hash-Table test")
(unless (featurep 'hash-table)
	(loadmodule "hash"))
(libload "testhash" t)
;;; (setq #:hash-table:debug t)
;;; (:test)
;;; (:subexpr)

(when (and (boundp '#:ld68k:MC68020)
           #:ld68k:MC68020
	   (featurep 'loader))
(compile-all-in-core) ; save space
      (imprimetest "Relative back jump test on 68K")
      (libload "testbrarel" t))

(imprimetest "End of Suites")
(terpri)
(print "================================================================")
(print "================================================================")
(terpri)
(end)
