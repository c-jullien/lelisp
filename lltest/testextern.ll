;;;
;;; testextern.ll:  external calls tests
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testextern.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(unless (>= (version) 15.25)
        (error 'load 'erricf 'testextern))

(unless (featurep 'testcomm)(libload testcomm))
(unless (featurep 'pathname)(libload path ()))
(unless (or (featurep '64bitfloats)
	    (eq 0.0 0.0))
	(add-feature '64bitfloats))

(eval-when (eval)
	   (libload testextmin)
)

(defvar cfilc
  (enough-namestring
    (merge-pathnames #u"testext.c"
                     (make-pathname ()()
                       (pathname-directory #:system:lltest-directory))
   )))
(if #:system:cloadp
    (defvar cfilo "o/testext.o")
  (defvar cfilo "o/testext.sh"))
(if (probefile cfilo)
    (deletefile cfilo))
(setq #:sys-package:colon 'testextern)

(when (and (or #:system:cloadp #:system:getinlibp)
	   (eq (getglobal "cons_en_c") 0))
      (print "; compiling " cfilc)
      (when (probefile cfilo)(deletefile cfilo))
      (comline (catenate "make " cfilo))
      (when (probefile cfilo)
	    (cond (#:system:cloadp
		   (print "; cloading " cfilo)
		   (cload cfilo))
		  (t
		   (print "; loading shared library " cfilo)
		   (load-shared-lib cfilo)))))

#.(when #:system:vmsp
'(defmacro :defextern (name largs . ret)
   (if #:system:getinlibp
       `(defextern ,name "testext.exe" ,largs ,@ret)
     `(defextern ,name ,largs ,@ret)
     ))
)

#.(when (or #:system:unixp #:system:dosp)
'(defmacro :defextern (name largs . ret)
   (if (and #:system:getinlibp (eq (getglobal "cons_en_c") 0))
       `(defextern ,name "o/testext.sh" ,largs ,@ret)
     `(defextern ,name ,largs ,@ret)
     ))
)

(when #:system:getinlibp
      (defextern ll_get_lispcall () external)
      (defextern ll_get_getsym () external)
      (defextern ll_get_pusharg () external)
      (defextern ll_get_pushargd () external)
      (defextern ll_get_lfix_to_cfix () external)
      (defextern ll_get_cfix_to_lfix () external)
      (defextern ll_get_lfloat_to_cfloat () external)
      (defextern ll_get_cfloat_to_lfloat () external)

      (:defextern extern_init_lispcall
		  (external external external external
			    external external external external))
      (extern_init_lispcall
       (ll_get_getsym)
       (ll_get_pusharg)
       (ll_get_pushargd)
       (ll_get_lispcall)
       (ll_get_lfix_to_cfix)
       (ll_get_cfix_to_lfix)
       (ll_get_lfloat_to_cfloat)
       (ll_get_cfloat_to_lfloat))
      )

#.(when (or (neq (getglobal "tlno") 0) #:system:getinlibp)
'(progn
;; functions are in testext.c
;; which must be loaded by CLOAD or by static link.

;; (print "; doing defexterns ...")
(:defextern _tlno () fix)          ; we try with  _
(:defextern tlfix (fix) fix)       ; and not with _

(:defextern tlfloat (float) fix)   ;
(:defextern tlfloat_ (float) fix)  ;
(:defextern tlfloat_1 (float) fix) ; test names of 8 common char.
(:defextern tlfloat_2 (float float) fix)

(defextern-cache t) ; test of DEFEXTERN-CACHE

(:defextern _trfix (rfix))         ; we try with  _
(:defextern _tlstring (string) fix); we try with  _

(:defextern _tlstring3 (string string string) fix)
				  ; test names of 8 common char.
(:defextern tlvector (vector fix) fix)
				  ; test without _


(:defextern trfloat (rfloat) float)
(:defextern trfloat1 (rfloat) float)

(:defextern ttabint (fix fixvector))
(:defextern t_tabintonly (fixvector))
;; Impossible with 64 bits floats tabs.
#.(unless (featurep '64bitfloats)
'(progn
	(:defextern ttabflt (fix floatvector))
	(:defextern tflt_lispcall (fix floatvector))
	(:defextern tflt_getsym (fix floatvector))
	))

(:defextern tlt (t) fix)

(:defextern tlexternal (external) fix)
(:defextern t_l_to_c_float (t) float)
(:defextern tcfloat_to_lfloat (float) t)
(:defextern t_l_to_l_float (t) t)
(:defextern tsymb_to_lfloat (t) t)
(:defextern tsymb_to_lfloat1 (t) t)

(:defextern tlfix_cfix (t) fix)
(:defextern tcfix_lfix (fix) t)

(:defextern tcfloat (fix) float)
(:defextern tcfloat2 (float float) float)
(:defextern f_s_to_d () float)

(:defextern tcstring (fix) string)
(:defextern tc_string (fix) string)
(:defextern conv1_tcstring (string) string)
(:defextern conv2_tcstring (string string) string)
;; hope : (defextern _tcvector (vector fix) vector)
(:defextern tct (fix) t)
(:defextern tcexternal (fix) external)

(:defextern tlnadic (fix fix fix fix fix fix fix fix fix fix fix) fix)
(:defextern tnbmaxi (fix fix fix fix fix fix fix fix
		     fix fix fix fix fix fix fix fix
		     fix fix fix fix fix fix fix fix
		     fix fix fix fix fix fix fix fix ))
(:defextern tnbmaxf (float float float float float float float float
		     float float float float float float float float
		     float float float float float float float float
		     float float float float float float float float ))
(:defextern tnbmaxri (rfix rfix rfix rfix rfix rfix rfix rfix
		      rfix rfix rfix rfix rfix rfix rfix rfix
		      rfix rfix rfix rfix rfix rfix rfix rfix
		      rfix rfix rfix rfix rfix rfix rfix rfix ))
(:defextern tnbmaxrf (rfloat rfloat rfloat rfloat rfloat rfloat rfloat rfloat
		      rfloat rfloat rfloat rfloat rfloat rfloat rfloat rfloat
		      rfloat rfloat rfloat rfloat rfloat rfloat rfloat rfloat
		      rfloat rfloat rfloat rfloat rfloat rfloat rfloat rfloat))

(:defextern tnbsmaxi (fix fix fix fix fix fix fix fix
		      fix fix fix fix fix fix fix fix
		      fix fix fix fix fix fix fix fix
		      fix fix fix fix fix fix fix fix ))
(:defextern tnbsmaxf (float float float float float float float float
		      float float float float float float float float
		      float float float float float float float float
		      float float float float float float float float ))
(:defextern tnbsmaxri (rfix rfix rfix rfix rfix rfix rfix rfix
		       rfix rfix rfix rfix rfix rfix rfix rfix
		       rfix rfix rfix rfix rfix rfix rfix rfix
		       rfix rfix rfix rfix rfix rfix rfix rfix ))
(:defextern tnbsmaxrf (rfloat rfloat rfloat rfloat rfloat rfloat rfloat rfloat
		       rfloat rfloat rfloat rfloat rfloat rfloat rfloat rfloat
		       rfloat rfloat rfloat rfloat rfloat rfloat rfloat rfloat
		      rfloat rfloat rfloat rfloat rfloat rfloat rfloat rfloat))

(:defextern trfixrfloat (rfix rfloat) float)
;; Impossible with 64 bits floats tabs.
#.(unless (featurep '64bitfloats)
	  '(:defextern ttabother (fix fix fixvector float float fix
				     floatvector fixvector fix fix))
	  )

(:defextern struct_un (fix float string) external)
(:defextern tltout (fix float string vector fix) fix)
(:defextern tlmalloc (fix) external)

(defextern getsym (string) t)
(:defextern cons_en_c (t t) t)

(:defextern vect_to_list (vector fix) t)

(:defextern cfib (fix) fix)
(:defextern init_fib ())

(:defextern tpafloat () t) ; test pusharg + lispcall float.
                          ; Result type is T because a float is on the stack.
                          ; Conversion C-LISP is already done with PUSHARG.
                          ; In case of result type float, conversion should
                          ; be done 2 times.
(:defextern tpamultifloat (float) t)
(:defextern tlcstring () string)         ; test returning a string from lisp
                                        ; OK with a string because C coerce prt
                                        ; in other ptr type . 
(:defextern tpastring () fix)		; test pusharg string
(:defextern tpamultistrg (string) t)     ; test several pusharg string
(:defextern malloc_for_test (fix) external)
(:defextern string_in_malloc (external) string)

(defextern-cache ()) ; end of multiple getglobal

;(:defextern malloc_for_test (fix) external llmalloc_for_test)
;(:defextern string_in_malloc (external) string llstring_for_test)

;(:defextern llmalloc_for_test1 (fix) adress malloc_for_test)
;(:defextern llstring_in_malloc1 (adress) string string_in_malloc)


;; Impossible with 64 bits floats tabs.
(:defextern crac (fix)) ; Test GC during PUSHARG
(:defextern crac2 (fix)); Test GC during 2 PUSHARG
(:defextern croc (fix)) ; Test GC during GETSYM
(:defextern cric (fix)) ; Test GC during LISPCALL

(:defextern c_i1 (fixvector fix))
(:defextern c_i2 (fixvector t t fix string))

#.(unless (featurep '64bitfloats)
'(progn
	(:defextern c_f1 (floatvector fix))
	(:defextern c_f2 (floatvector t t fix string))
))

(:defextern test_float_lispcall () t) ; Test lispcall with floats 
(:defextern test_lispcall_div (fix fix) t); test div via lispcall

(:defextern test_openi (string) t)      ; test openi call by LISPCALL
(:defextern test_openo (string) t)      ; test openo call by LISPCALL
(:defextern test_read_in_file () t)     ; test read_in_file call by LISPCALL
(:defextern test_flush () t)            ; test flush call by LISPCALL
(:defextern test_close (fix) t)         ; test close call by LISPCALL
(:defextern test_deletefile (string) t) ; test deletefile call by LISPCALL
(:defextern test_renamefile
  (string string) t)                   ; test renamefile call by LISPCALL
(:defextern test_copyfile
  (string string) t)                   ; test copyfile call by LISPCALL
(:defextern test_probefile (string) t)  ; test probefile call by LISPCALL
(:defextern test_runtime () t)          ; test runtime call by LISPCALL
(:defextern test_sleep (float) t)       ; test sleep call by LISPCALL
(:defextern test_date () t)             ; test date call by LISPCALL
(:defextern test_getenv (string) t)     ; test getenv call by LISPCALL
(:defextern test_float (fix) t)         ; test float call by LISPCALL
(:defextern test_fix (float) t)         ; test fix call by LISPCALL
(:defextern test_string (float) t)      ; test string call by LISPCALL
(:defextern test_version () t)          ; test version call by LISPCALL
(:defextern test_getglobal (string) t)  ; test getglobal call by LISPCALL
(:defextern test_fadd (float float) t)  ; test fadd call by LISPCALL
(:defextern test_power (float float) t) ; test power call by LISPCALL

(:defextern cboucle())                  ; test 4 breaks in C

(:defextern do_not_kill1 () fix)
(:defextern c_kill1 () fix)
(:defextern c_kill2 (fix fix fix fix fix) fix)

(:defextern tcllfloat (float) t)
(:defextern tllcfloat (t) float)
(:defextern tcllfloat1 (float float float) t)
(:defextern tllcfloat1 (t t t) t)
(:defextern tclcfloat  (float t float) t)

(:defextern tllcfix (t t) fix)
(:defextern t1llcfix (t t) fix)
(:defextern tcclfix (fix fix) t)
(:defextern tcclfix1 (fix fix) t)
(:defextern tcllfix (fix t) t)
(:defextern tlllfix (t t) t)


;; (print "; done.")
(if (probefile cfilo)
    (deletefile cfilo))
(gc t)

(de #:testgc:gcalarm () (setq gcalarm t))

(de fib (n)
    (cond ((eq n 1) 1)
          ((eq n 2) 1)
          (t (add (cfib (sub1 n)) (cfib (sub n 2))))))

(de llcrac (s) )    ; just call lisp
(de llcrac2 (s1 s2) ; just call lisp
    (unless (and (eqstring s1 "Hello")
		 (eqstring s2 "World"))
	    (print "** ERROR in strings transmission by LISPCALL")))
(de llcroc () )     ; just call lisp
(de llcric ()(makestring 1 #/a)); just to use strings

(de ll_f1 (fvec lg)
    (c_f1 fvec lg))
(de ll_f2 (fvec lg)
    (let ((v (makevector lg 0.)))
      (c_f2 v v fvec lg "ok")
      (setq ll_f2 v)))
(de ll_f3 (v s)
    (rplacd mem s)
    (rplaca mem v))

(de ll_i1 (fint lg)
    (c_i1 fint lg))
(de ll_i2 (fint lg)
    (let ((v (makevector lg 0)))
      (c_i2 v v fint lg "ok")
      (setq ll_i2 v)))
(de ll_i3 (v s)
    (rplacd mem s)
    (rplaca mem v))


;; test not break the stack (rs6000)
(de kill_or_not_kill1 ()
     (with ((outchan (openo "/tmp/llfread")))
	   (print "une ligne")
	   )
     (with ((inchan (openi "/tmp/llfread")))
	   (readcn))
     (deletefile "/tmp/llfread"))

(de ll_kill2 (a1 a2 a3 a4 a5)
    (c_kill2 a1 a2 a3 a4 (* 2 a5))
)

)); end of testext.c case


(eval-when (eval load)
(testfn ()
	(catenate #:system:lltest-directory 
                  "extern.lt"))
)
