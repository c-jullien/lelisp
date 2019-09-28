
;;; Pour realiser le 1er vrai branchement a` C, tel que dans 
;;;  l'environnement C de de'part.
(defextern _do_longjmp (fix))

;;; Pour re'aliser un exemplde de Lisp appele' par C et
;;;  qui en plus rappelle C.
(defextern _test_c_from_lisp_from_c (fix fix))

(de test_lisp_from_c ()
  (terpri)
  (print "  Le-Lisp: execution en lisp, et callextern vers C.")
  (_test_c_from_lisp_from_c 2 7)
  (terpri)
  (print "  Le-Lisp: On repart dans C avec son environnement initial.")
  (_do_longjmp 2)
  )

;;; Pour lancer l'exemple
(de demo ()(_do_longjmp 1))
(demo)
