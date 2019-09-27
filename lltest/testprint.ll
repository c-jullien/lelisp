;;;
;;; testprint.ll:  PRINT functions tests
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testprint.ll,v $
;;; $Date: 2016/05/21 10:36:08 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(unless (>= (version) 15.2)
        (error 'load 'errifc 'testprint))

(setq #:sys-package:colon 'testprint)

(unless (boundp ':speak?)
	(defvar :speak? ()))    ; test is speaky ??

(setq #:system:print-for-read ())

(unless (featurep 'pathname)(loadmodule "path"))
(setq pfile (temporary-file-pathname "tmpprint.ll"))
(when (probefile pfile) (deletefile pfile))

; .Section "Test of standard PRINT"

(print "        [PRINT functions]")

(df :testprint (printform formattendue)
    (let ((file pfile)
          (relu))
      (setq formattendue (eval formattendue))
      (with ((outchan (openo file)))
	    (eval printform)
	    (terpri)
	    (close (outchan)))
      (with ((inchan (openi file)))
	    (setq relu (car (catcherror () (readstring))))
	    (close (inchan)))
      (when :speak?
	    (print (format ()
			   "~S ~35T must print ~50T<~A>"
			   printform
			   formattendue)))
      (unless (equal relu formattendue)
	      (prin " ** " printform " must print ")
	      (let ((#:system:print-for-read t))
		(prin formattendue))
	      (prin " and not ")
	      (let ((#:system:print-for-read t))
		(print relu)))
      (deletefile file)))

(:testprint (print "asd") "asd")
(:testprint (print 'asd)  "asd")
(:testprint (let ((#:system:print-for-read t)) (print "asd"))   """asd""")
(:testprint (let ((#:system:print-for-read t)) (print '|0129|)) "|0129|")
(:testprint (let ((#:system:print-for-read t))
	      (print (symbol () '4e3))) "|4000.|")
(:testprint (let ((#:system:print-for-read t))
	      (print (symbol () '4e+3))) "|4000.|")
(:testprint (let ((#:system:print-for-read t))
	      (print (symbol () '4E+3))) "|4000.|")
(:testprint (let ((#:system:print-for-read t))
	      (print (symbol () '4000e-3))) "|4.|")

(:testprint (print 1 2 3)       "123")
(:testprint (print 'a 2 "%%")   "a2%%")
(:testprint (print '#(1.2))     "#(1.2)")
(:testprint (print '#("a"))     "#(a)")
(:testprint (let ((#:system:print-for-read t)) (print 1 2 3))   "1 2 3")
(:testprint (let ((#:system:print-for-read t)) (print 'a 2 "%%"))"a 2 ""%%""")

(:testprint (print) "")
(:testprint (apply 'print ()) "")
(:testprint (prin) "")

(:testprint (prin 34) "34")
(:testprint (progn (prin "foo")(terpri)) "foo")

(:testprint (terpri) "")

(:testprint (prinflush 123) "123")
(:testprint (prinflush "123") "123")

(:testprint (princn #/a) "a")
(:testprint (princh '|=|) "=")
(:testprint (with ((lmargin 0) (rmargin 10) (printline 1))
                  (princn #/a 20))
            "aaaaaaa...")
(:testprint (with ((lmargin 0) (rmargin 10) (printline 1))
                  (prin 'foo) (princh "a" 20))
            "fooaaaa...")

(:testprint (with ((printlength 2))(print '(1 2 3 4))) "(1 2 ...")
(:testprint (with ((printlevel 2)) (print '(1 (2 (3 (4)))))) "(1 (2 &))")

(de #:tf:flush ()
    (setq #:tf:outbuf (copy (outbuf))))

(:testprint (with ((lmargin 0)
		   (rmargin (add1 (slen (outbuf)))))
		  (repeat (slen (outbuf)) (princn #/a)))
	    (makestring (slen (outbuf)) #/a))

(:testprint (with ((rmargin 5) (print 1 2 3 "UUUUU")))
	    "123")

(:testprint (with ((rmargin 5) 
		   (let ((#:system:print-for-read ()))
		     (print (explode "UUUUUU")))))
		  "(85 ")

(print "        [PRINT floats]")

(:testprint (print 123.45)      "123.45")
(:testprint (print 123.456)     "123.456")
(:testprint (print 0.0)         "0.")
(:testprint (print 0.)          "0.")
(:testprint (print .0)          "0.")
(if (eq 0. 0.) ; 31BITFLOATS
    (:testprint (print 12345.6) "12345.6")
    (:testprint (print 12345678.9) "1.23457e+07"))

(cond
 ((eq (sref (string 1e5) 1) #/.)
  (:testprint (print 1e+5)        "1.e+05")
  (:testprint (print 1e+8)        #.(if (eq 0.0 0.0)
					"1.e+08"
				      "100000000.") )
  (:testprint (print 1e-5)        "1.e-05"))
 ((memq (sref (string 1e5) 1) '(#/e #/E))
  (:testprint (print 1e+5)        "1e+05")
  (:testprint (print 1e+8)        #.(if (eq 0.0 0.0)
					"1e+08"
				      "100000000.") )
  (:testprint (print 1e-5)        "1e-05"))
 ((eq (sref (string 1e5) 1) #/0)
  (:testprint (print 1e+5)        "100000.")
  (:testprint (print 1e+8)        #.(if (eq 0.0 0.0)
					"1e+08"
				      "100000000.") )
  (:testprint (print 1e-5)        "1e-05"))
 (t 
  (print "** testprint: ouupps: impression bizare des flottants avec exposant")
 ))

(cond
 ((eq (sref (string 0.4) 0) #/0); 0.4
  (:testprint (print .4) "0.4")
  (:testprint (print 0.4) "0.4")
  (:testprint (print .04) "0.04")
  (:testprint (print 0.04) "0.04"))
 ((eq (sref (string 0.4) 0) #/.); .4
  (:testprint (print .4) ".4")
  (:testprint (print 0.4) ".4")
  (:testprint (print .04) ".04")
  (:testprint (print 0.04) ".04"))
 (t (print "** testprint: ouupps: impression bizare des flottants < 1")) )

(if (< (slen (string 4.)) 3)
  (:testprint (print 4.) "4."))

(let ((str (string (power -12. 3.2)) ))
  (cond
   ((eq (sref str 0) #/0)       ; 0.
    (:testprint (print (power -12. 3.2)) "0."))
   ((and (> (slen str) 0)
	(eq (sref str 0) #/-)) ; -NaN.
    (:testprint (print (power -12. 3.2)) "-NaN."))
   ((and (> (slen str) 3)
	 (eq (sref str 3) #/.)) ; NaN.
    (:testprint (print (power -12. 3.2)) "NaN."))
   ((and (> (slen str) 4)
	 (eq (sref str 4) #/.)) ; NaNQ.
    (:testprint (print (power -12. 3.2)) "NaNQ."))
   (t                           ; NaN
    (:testprint (print (power -12. 3.2)) "NaN"))
   ))

; .Section "ABREV print tests"

(when (featurep 'abbrev)
      (print "        [ABREV print tests]")
      (unless (abbrevp 'ffoo)
              (defabbrev ffoo #:bar:gee)))

(when (featurep 'abbrev)
      (:testprint (prin '{ffoo}:fuu) "{ffoo}:fuu")
      (:testprint (prin '{ffoo}:fuu:#[1 2]) "#:bar:gee:fuu:#[1 2]")
      (:testprint (let ((#:system:print-for-read t))
                       (prin '{ffoo}:"abc"))
                  "#:bar:gee:""abc""")
      (:testprint (with ((lmargin 0)
                         (rmargin 20)
                         (printline 1))
                        (prin '({ffoo}:fuu {ffoo}:fee {ffoo}:fii)))
                  "({ffoo}:fuu {ffo...")
      (:testprint (with ((lmargin 0)
                         (rmargin 25)
                         (printline 1))
                        (prin '({ffoo}:fuu {ffoo}:fee {ffoo}:fii)))
                  "({ffoo}:fuu {ffoo}:fe...")
      (flet ((#:null:prin (x) (pratom 'nil)))
            (:testprint (prin ()) "nil")))


; .Section PRETTY-PRINT tests"

(print "        [PRETTY-PRINT tests]")

(defvar :liste-de-lignes ())

(de :eol ()
    (newl :liste-de-lignes (substring (outbuf) 0 (outpos)))
    (fillstring (outbuf) 0 #\sp (outpos))
    (outpos 0))


(de :testpprint ()
    (let ((lu)
          (val)
          (the))
         ;(with ((rmargin 60) (lmargin 0))
          (with ((inchan  (openi (catenate #:system:lltest-directory
					   "print.lt"))))
               (untilexit eof
		   (setq lu (read))
                   (when (eq lu ()) (exit eof))
                   (setq the (read))
                   (when :speak?
                         (print lu " = " the))
                   (setq :liste-de-lignes ())
                   (let ((#:sys-package:itsoft
			  (cons 'testprint #:sys-package:itsoft)))
		     (pprint lu))
                   (setq val (reverse :liste-de-lignes))
                   (when (nequal val the)
                         (print " ** le PPRINT de "
			        lu " est " the " pas " val))
		   ))))

(:testpprint)

(print "        [End of test print]")
