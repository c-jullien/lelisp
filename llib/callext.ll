;;;
;;; CALLEXT:  foreign functions calls.
;;;
;;; $Source: /usr/cvs/lelisp/llib/callext.ll,v $
;;; $Date: 2016/05/21 10:36:04 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;[bs 06/03/96] rajout du type fstring pour les chaine Fortran. Je ne sais
;; pas s'il faut aussi accepter que Fortran ramene une chaine...

(unless (>= (version) 15.2)
        (error 'load 'erricf 'callext))

(defvar #:sys-package:colon 'callext)

(add-feature 'callext)

(defmessage :ERRNOTYET
  (french  "non imple'mente' dans le syste`me")
  (english "not implemented in this system"))

(defmessage :ERRNOTLIB
  (french  "Librairie inexistante")
  (english "No such librarie"))

;;;
;;; "The external calls"
;;;

(defun #:system:cached-getglobal (s)
  (let ((res ))
    (cond ((null #:system:defextern-cache)
	   (setq res (getglobal (string s)))
	   (if (and (fixp res) (lt res 0)) ; for small adresses
	       (cons 0 res)                ; 32732 to 65535
	     res))                         ; 
	  (t
	   (setq res (cons 0 0))
	   (newl #:system:getglobal-cache
		 (cons (string s) res))
	   res))))

(defun loaded-shared-libs ()
  (if (not #:system:getinlibp)
      (error 'loaded-shared-libs ':ERRNOTYET (system)))
  (let ((l (plist 'getinlib))
	(res))
    (while l (if (consp (cadr l)) (newl res (car l)))
	   (nextl l) (nextl l))
    res))

(defun load-shared-lib (l)
  (if (not #:system:getinlibp)
      (error 'load-shared-lib ':ERRNOTYET (system)))
  (if (map-lib l)
      l
    ()))

(defun unload-shared-lib (l)
  (if (not #:system:getinlibp)
      (error 'unload-shared-lib ':ERRNOTYET (system)))
  (let (( lib (symbol () l)))
    (cond ((eq
	    (ll_rem_shared_lib (or (getprop 'getinlib lib) 0))
	    0)
	   (remprop 'getinlib lib)
	   l)
	  (t
	   ()))))

(defun map-lib (l)
  (let (( lib (symbol () l)))
  (cond ((getprop 'getinlib lib))
	(t
	 (let (( handle (ll_add_shared_lib (string l))))
	   (if (neq handle 0) ;;; 0 -> not found
	       (putprop 'getinlib handle lib)))))))

(defun getinlib (s l types)
;;; if l is #:llshared-lib:XXX
;;; then eval l
;;;  (if (and (symbolp l) (eq 'llshared-lib (packagecell l)))
;;;      (setq l (symeval l)))
;;;
  (cond ((and #:system:getinlibp #:system:unixp) ;; unix systems
	 (let ((handle (map-lib (eval l))))
	   (if handle
	       (llunixgetinlib (string s) handle (string (eval l)))
	     (error 'defextern ':ERRNOTLIB l))))
	(#:system:getinlibp                      ;; other systems
	 (llgetinlib (string s)
		  (string (eval l))
		  (apply 'vector (mapcar ':conv-ll-to-extern types))
		  (length types)))
	(t
	 (error 'getinlib ':ERRNOTYET (system)))))

;;;
;;; "The simple DEFEXTERN"
;;;
(dmd defextern l
     (let (ll_name
	   c_name
	   lib
	   ltypes
	   rtype
	   (list-ltypes '(fix rfix float rfloat string fstring
			  vector fixvector floatvector external adress t ))
	   )
       (setq ll_name 
	     (if (consp (car l))
		 (eval (car l))
	       (car l)))
       (nextl l)
       (setq ltypes (car l))
       (setq lib ltypes)
       (nextl l)
       (if (listp lib)
	   (let (( types ltypes ) (count 0))
	     (while types
	       (if (memq (car types) list-ltypes )
		   (incr count))
	       (nextl types))
	     (if (eq count (length lib))
		 (setq lib ()))))

       (cond ((consp lib)  ; une fonction donnant les ltypes ???
	      (setq ltypes (eval lib))
	      (let (( types ltypes ) (count 0))
		(if (consp types)
		    (while types
		      (if (memq (car types) list-ltypes )
			  (incr count))
		      (nextl types))
		 (if (eq count (length lib))
		 (setq lib ())))))) 

       (cond (lib
	      (setq lib ltypes)
	      (if (eq (slen lib) 0) ; empty string,
		  (setq lib ()))    ; so, no library.
	      (setq ltypes (nextl l))))

       (let (( good-ltypes ()) ( types ltypes) )
	 (if (listp types)
	     (while types
	       (if (memq (car types) list-ltypes )
		   (setq good-ltypes t))
	       (nextl types)))
	 (if (and (not good-ltypes) (listp ltypes))
	     (setq ltypes (eval ltypes))))

       (if (not (listp ltypes))
	   (error (catenate 'defextern " " ll_name) 'erroob ltypes))
	 
       (setq rtype (or (car l) 'fix))
       (setq c_name (or (cadr l) ll_name))
       (if (consp rtype)
	   (setq rtype (eval rtype)))
       (if (consp c_name)
	   (setq c_name (eval c_name)))

       (if (consp rtype)
	   (error (catenate 'defextern " " ll_name) 'errbal rtype))
       (if (consp c_name)
	   (error (catenate 'defextern " " ll_name) 'errbal c_name))
       (:build ll_name
	       (if lib
		   (getinlib c_name lib ltypes)
		 (#:system:cached-getglobal c_name))
	       lib
	       ltypes
	       rtype
	       c_name) ))

(defun buildextern (name adress ltyp typ)
  ;; defined an external procedure
  (:build name adress () ltyp typ name))

;; Flag for backward compatibility
(defvar #:system:callextern-notesttypes
  (when (boundp '#:system:callextern-notesttypes)
	#:system:callextern-notesttypes))

(defun :build (name adr lib ltype type cname)
  ;; name  = the name of Lisp the function.
  ;; adr   = the address of that function
  ;; lib   = the name of a library (optional)
  ;; ltype = the list of types
  ;; type  = the returned type
  ;; cname = the name of the C function
  (let ((lvar (:build-parameter-list ltype 1))
	(body ())
	(call ()))
    ;; generate the type tests
    (unless #:system:callextern-notesttypes
      (mapc (lambda (type var)
              (selectq type
                ((external adress)
                 (newl body `(unless (or (fixp ,var)
                                         (and (consp ,var)
                                              (fixp (car ,var))
                                              (fixp (cdr ,var))))
                               (error ',name 'errnda ,var))))
                ((fix rfix)
                 (newl body `(ifn (numberp ,var)
                                 (error ',name 'errnna ,var)
                               (setq ,var (fix ,var)))))
                ((float rfloat)
                 (newl body `(ifn (numberp ,var)
                                 (error ',name 'errnna ,var)
                               (setq ,var (float ,var)))))
                ((string fstring)
                 (newl body `(unless (stringp ,var)
                               (error ',name 'errnsa ,var))))
                ((vector fixvector floatvector)
                 (newl body `(unless (vectorp ,var)
                               (error ',name 'errvec ,var))))
                (t ())))
            ltype lvar)
      (setq body (nreverse body)))
    ;; the call of the function
    (setq call
	  `(,(if lib 'calllibextern 'callextern)
	    (precompile ,(if (numberp adr) adr (kwote adr))
			()
			()
			(eval
			 (kwote
			  ,(if lib
			       `(getinlib
				    ,(kwote cname)
				    ,(kwote lib)
				    ,(kwote ltype))
			       `(#:system:cached-getglobal
				    ,(kwote cname))))))
	    ;; type number of the returned value
	    ,(:conv-extern-to-ll type)
	    ;; plist (parametre1 numero-type1 ...)
	    ,@(mapcan (lambda (type var)
			(if (or (eq type 'external) (eq type 'adress))
			    `((vag ,var) ,(:conv-ll-to-extern type))
			    `(,var ,(:conv-ll-to-extern type))))
		      ltype lvar)))
    (when (or (eq type 'external) (eq type 'adress))
	  (setq call `(loc ,call)))
    (if (and (numberp adr) (zerop adr))
	(error 'defextern 'errudf name)
        `(defun ,name ,lvar ,@(append1 body call)))))

(defun :build-parameter-list (ltype n)
  ;; build the list of parameter names.
  (when ltype
	(cons (symbol ':callext (concat "arg" n))
	      (:build-parameter-list (cdr ltype) (add1 n)))))


(defvar |InvokeIndirectFunction| (getglobal '|InvokeIndirectFunction|))

(defmacro calllibextern l
   (if #:system:getinlibp
      (let ( (adr (car l)) (ret (cadr l)) (args (cddr l)) )
         (selectq (system)
            ((nt386 win32 win64 win95) `(callextern ,adr ,ret ,@args))
            ((msdos rs6000 )
              `(callextern |InvokeIndirectFunction| ,ret (vag ,adr) 0 ,@args) )
           (t (mcons 'callextern adr ret args)) ))
      (error 'calllibextern ':ERRNOTYET (system)) ))


(defun :conv-ll-to-extern (type)
  ;; All these numbers are used in llxxx.llm3
  (selectq type
	   ((external adress) 0)
	   (fix 1)
	   (float 2)
	   (string 3)
           (fstring (if (memq (system) '(vaxvms alphavms)) 9 3))
	   (vector 4)
	   (rfix 5)                 ; FIX by reference (FORTRAN)
	   (rfloat 6)               ; FLOAT by reference (FORTRAN)
	   (fixvector 7)
	   (floatvector 
	    (if (eq 0.0 0.0)        ; Impossible to implement 
		8                   ;   in case of 64 bitfloats.
	        (error 'defextern
		       'errgen
		       "floatvector (64BITFLOATS)")))
	   ((t) 0)                  ; T stop the clauses
	   (t (error 'defextern 'erroob type))))

(defun :conv-extern-to-ll (type)
  ;; All these numbers are used in llxxx.llm3
  ;; We don't know how to return a vector: how to compute it size!
  (selectq type
	   ((external adress) 0)
	   (fix 1)
	   (float 2)
	   (string 3)
	   ((t) 0)
	   (t (error 'defextern 'errgen type))))

;;;
;;; "The multiple DEFEXTERN"
;;;

; Flag to indicate the use of multiple getglobal
;  () : if no multiple getglobal
;  t  : if multiple getglobal
(defvar #:system:defextern-cache
  (when (boundp '#:system:defextern-cache)
	#:system:defextern-cache))

; in case of use of the multiple getglobal, #:system:getglobal-cache
; contains the list of C functions to connect in one shot.
(defvar #:system:getglobal-cache
  (when (boundp '#:system:getglobal-cache)
	#:system:getglobal-cache))

; Use of the multiple getglobal :
;  1- (defextern-cache t)  to active the multiple getglobal
;  2- (defextern ...       as usual
;  2'-(defextern ...       etc
;  3- (defextern-cache ()) perform all the defexterns and reset the list to ()

(defun defextern-cache &nobind
  (selectq (arg)
	   (0 #:system:defextern-cache)
	   (1
	    (if (and (null (arg 0))
		     #:system:defextern-cache)
		(protect
		    (getglobal-flush-cache)
		    (setq #:system:defextern-cache ()))
	        (setq #:system:defextern-cache (arg 0))))
	   (t (error 'defextern-cache 'errwna 1))))

(defun getglobal-flush-cache ()
  (when #:system:getglobal-cache
	;; sort the list because some systems need that
	(setq #:system:getglobal-cache
	      (sort (lambda(x y) (alphalessp (car x)(car y)))
		    #:system:getglobal-cache))
	;; build the list to be given to C
	(protect
	   (let ((name-list (mapcar (lambda (pair) (string (car pair)))
				    #:system:getglobal-cache))
		 (errors ()))
	     ;; here we go
	     (llmgetglo name-list ())
	     ;; update and verification
	     (setq errors (:flush-cache #:system:getglobal-cache name-list))
	     (if errors
		 (let* ((:getglobal-cache-bis
			 (sort #'(lambda(x y) (alphalessp (car x)(car y)))
			       (mapcan #'(lambda(n)
					   (when (memq (car n) errors)
						 (list n)))
				       #:system:getglobal-cache)) )
			(name-list (mapcar (lambda (pair)
					     (let ((s (string (car pair))))
					       (if (eq (sref s 0) #/_)
						   (substring s 1)
						   s)))
					   :getglobal-cache-bis))
			(real-errors ()))
		   (llmgetglo name-list ())
		   (setq real-errors
			 (:flush-cache :getglobal-cache-bis name-list))
		   (when real-errors
			 (mapc #'(lambda(i)(remfn (symbol () i)))
			       real-errors)
			 (error 'defextern
				'errudf
				real-errors))
		   )) )
	   (setq #:system:getglobal-cache ()))
	))

(defun :flush-cache (lpairs lvalues)
  (let (errors)
    (mapc (lambda (pair value)
	    (if (eq 0 value)
		(newl errors (car pair))
	        (setq value (loc value))
		(rplac (cdr pair)
		       (if (fixp value) 0 (car value))
		       (if (fixp value) value (cdr value)))))
	  lpairs
	  lvalues)
    errors))
    

;;;
;;; "Dynamically load external code"
;;;

(defvar #:system:recloadp ()) ; able to REload several times the same code

(defun cload (s)
  (if #:system:cloadp
      (if #:system:recloadp
	  (#:system:ccode (llcload (string s) 1
				   (#:system:ccode) (#:system:ecode)))
	  (#:system:ccode (llcload (string s) 0
				   (#:system:ccode) (#:system:ecode))))
      (error 'cload ':ERRNOTYET (system))))

;;;
;;; "Initializations"
;;;

(defextern llmgetglo (t t))  ;returns always 0

(defextern llgetinlib (string  ; name of linked function
		       string  ; name of librarie where is defined this fct
		       vector  ; vector of C types of arguments
		       fix)    ; # args
  external))    ;returns the address

#.(when (and #:system:getinlibp #:system:unixp)
   '(defextern llunixgetinlib (string external string) external) )

#.(when #:system:getinlibp
   '(progn
      (defextern ll_add_shared_lib (string) external)
      (defextern ll_rem_shared_lib (external) fix) ))

#.(when #:system:cloadp
   '(defextern llcload (string fix external external) external)
   ;returns the address
)

; The tests of lelisp.c :
#|     to be remove in case of test

(defextern-autoflush ())
   (defextern _cchdir (string) fix)
   (defextern _chome () string)
   (defextern _cmoinsun () fix)
   (defextern _ctest (string float fix vector) float)
(defextern-autoflush t)
   (setq vect #[a b])
   (_ctest "FooBar" 123.45 123 vect)
|#
