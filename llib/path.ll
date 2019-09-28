;;;
;;; PATH:  Virtual Pathnames
;;;
;;; $Source: /usr/cvs/lelisp/llib/path.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


;;; This file contains the code which handles the virtual pathname
;;; scheme for Le-Lisp. It contains also the special handlers for the
;;; VMS and UNIX operating systems . So it must be re-compiled
;;; during a new installation on a different OS.

;;; 91/05/17 : Adaptation to OS/2. (Georges Schumacher)
;;; 91/12/06 : Unification MSDOS OS/2. (Georges Schumacher)

;;; 91/06/20 : Implementation of a new way to expand wild-cards. It uses
;;; the C functions opendir, readir, closedir (as referenced by POSIX) to
;;; read directories. This implementation should run on every machines
;;; supporting POSIX. (Georges Schumacher)

;;; Notice for the implementors of Le-Lisp on other operating systems:
;;; 
;;; if you want to extend this module for an other O.S. 
;;; than UNIX ou VMS, which name
;;; as the result of (system) is `newsys`, you have to write a driver for
;;; your OS.  This driver must contain the following functions:

;;; 1) #:newsys:namestring : this function takes a pathname as argument
;;; and  evaluates to the external name of the pathname for the O.S.

;;; 2) #:newsys:pathname :  this function takes an external string as an
;;; argument and gives a pathname 

;;;  #:newsys:temporary-file-pathname : This function takes a string
;;;  as an argument, and builds a pathname which should be a temporary
;;;  file   pathname, as /tmp/foo for UNIX

;;; 3) #:newsys:user-homedir-pathname : This function has no argument and
;;; gives the pathname which represents the "home-directory" of the
;;; current user . If there is no such facility in the current O/S,
;;; this function gives a valid directory.
;;;    #:newsys:control-file-pathname : take an arg. which is name
;;; of a product, the fonction return path of the init-file.
;;; A secondary arg. permit to modify the default algorithm for
;;; the name of this file.
;;;    #:newsys:temporary-file-pathname : accept one arg. which is
;;; a file name. return path of this file in a temporary place of 
;;; the system.

;;; 4) #:newsys:pathname-check : control validity of the pathname passed
;;; as arg. on 'newsys'

;;; 6) #:newsys:directory-namestring: This function accepts a pathname as
;;; an argument and gives the external string which represents the
;;; directory part of the pathname 

;;;    #:newsys:file-namestring : this function takes a pathname as
;;; argument and gives the external string representing the name type
;;; et version fields of the pathname. If your OS doesn't provide ant
;;; mechanism for version support, you are supposed to emulate it in
;;; the most convenient way.

;;;    #:newsys:host-namestring : takes a pathname as argument, and gives
;;; the external string representing the host on which resides the
;;; file... if your host doesn't support network access , you must
;;; return the empty string

;;;    #:newsys:device-namestring : takes a pathname as argument and 
;;; returns the external string which represents the physical device 
;;; on which the file system resides. If this facility doesn't exist,
;;; returns the empty string

;;; 8) #:newsys:true-pathname : predicate to know real pathname

;;; 9) #:newsys:current-directory : this function will get/set the
;;; working directory of  Lisp process, and also that of the
;;; shell/process (if there is one)

;;; 10) #:newsys:directoryp : predicate to know if a pathname
;;; is a directory or not

;;; 11) #:newsys:wild : this function will return the list of all pathname
;;; in the file systeme, which can be found according to the pattern
;;; which is the argument .


;;;  You may also write a function #:newsys:check-pathname which will
;;;  check that its argument is a valid pathname for your operating
;;;  system . (i.e. No special character,etc..) 
;;;  this function returns () if the syntax is illegal
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(unless (>= (version) 15.2)
	 (error 'load 'erricf 'pathname))

;;;
;;; Errors messages
;;;

(defmessage ERRPATHVERSION
  (french "Version n'est pas un nume'rique")
  (english "Version is not numerical"))

(defmessage ERRPATHNOTPATH
  (french "l'argument n'est pas un pathname")
  (english "not a pathname"))

(defmessage ERRPATHFIELDS
  (french "Attention: un des champs Host, Device ou Version n'est pas vide")
  (english "Warning : Host, Device or Version fields are not empty"))

(defmessage ERRPATHNOTVMS
  (french "Pas une spe'cification VMS")
  (english "not a VMS specification"))

(defmessage ERRPATHNOTBSD
  (french "Pas une spe'cification BSD")
  (english "not a BSD specification"))

(defmessage ERRPATHNOTSYS5
  (french "Pas une spe'cification SYS5")
  (english "not a SYS5 specification"))

(defmessage ERRPATHNOTAEGIS
  (french "Pas une spe'cification AEGIS")
  (english "not an AEGIS specification"))

(defmessage ERRPATHNOTDOS
  (french  "Pas une spe'cification DOS")
  (english "not a DOS specification"))

(defmessage ERRPATHBADNAME
  (french "Champ NAME incorrect")
  (english "Bad NAME field"))

(defmessage ERRPATHREADDIR
  (french  "Ne peut acce'der au re'pertoire")
  (english "Can not access directory"))

(defmessage ERRPATHMATCH
  (french  "Mauvais joker dans le filtre")
  (english "Bad wild-card in pattern"))

(setq #:sys-package:colon 'pathname)
(add-feature 'pathname)


;;;
;;; Previous name of :wild-string was :wild, but :wild is a keyword too,
;;; and we were never sure which of both was used.
;;;

(when (boundp ':wild) ; in case of previous definition.
      (makunbound ':wild))

(defvar :wild-string "*")

;;;
;;; The wilcarding is different from an implementation to another.
;;; (for the moment !?!?)

#+ (or #:system:unixp #:system:dosp #:system:vmsp)

;;; new wildcarding

(progn
  (defvar :wild-length (slen :wild-string))
  (defvar :one-char-string  "?")
  (defvar :one-char-length (slen :one-char-string))
)

;;;
;;; Big PB: the root is "" in UNIX systems and "000000" in VMS

(defvar :root-string
  #.(cond (#:system:vmsp "000000")
	  (t "")))

(defvar :dot ".")

(defvar :slash "/")      ; directory separator on UNIX

(defvar :up-string "..") ; father directory in UNIX

(defvar :colon ":")  ; device marker on VMS

(defvar :backslash "\")  ; directory separator on DOS systems

;;;
;;; the mechanism which calls easily new operating systems
;;;

;; verification

(eval-when (local-compile)
  (defmacro :system () `',(or #:system:unixp
			      #:system:dosp
			      #:system:vmsp)
    )
)

(eval-when (load local-compile)
  (defmessage ERRPATHSYSTEM
    (french "mauvais syste`me. Vous devez recompiler le module <path> sur")
    (english "bad system. You have to recompile <path> module on"))
  (if (neq (or #:system:unixp
	       #:system:dosp
	       #:system:vmsp)
	   (:system))
      (error 'path 'ERRPATHSYSTEM (system)) )
)

;; mechanism

(defmacro to-system (cmd . larg)
  (cond
   (#:system:unixp
    `(,(symbol 'unix cmd) ,@larg))
   (#:system:vmsp
    `(,(symbol 'vms cmd) ,@larg))
   (#:system:dosp
    `(,(symbol 'dos cmd) ,@larg))
   (t 
    `(,(symbol (system) cmd) ,@larg))
   ))
;;;
;;;


; 1) definition of a  pathname

(defstruct pathname
           host		; name of the host of the file-system
	   device       ; physical device
           directory    ; list of directories
	   name         ; file name
           type         ; extension 
           version      ; version number, or ()

 )

;;; particular case:
;;; a pathname begining with "//" is implementation dependant
;;; ex: APOLLO
(defmacro :slashslashp ()
  `(and #:system:unixp
	(eq (system) 'apollo)))

;;;
;;; The predicate for pathnames 
;;;

(defun pathnamep (p)
  (eq (type-of p) 'pathname)))


;;;
;;; A macro to ensure that an object is a pathname.
;;; Achtung : Pas de eval-when ici !!!
;;;

(defmacro :assert (:x :f)
  `(unless (pathnamep ,:x)
	   (error ,:f 'ERRPATHNOTPATH ,:x))
  )


;;;
;;; Another one for the field NAME
;;;

(defmacro :assert-name (:x :f)
  `(unless (or (null ,:x) (stringp ,:x) (eq ,:x ':wild))
	   (error ,:f 'ERRPATHBADNAME ,:x)))


;;;1) Let's convert a pathname in an external string

;;;
;;; Given any object (string, symbol, pathname) returns corresponding string.

(defun namestring (p)
  (cond
   ((stringp p)
    p)
   ((symbolp p)
    (string p))
   ((not (pathnamep p))
    (error 'namestring 'errbpa p))
   (t (to-system "namestring" p)) ))

#. (cond
(#:system:unixp '
;; 1.1) UNIX case
(defun #:unix:namestring (p)
  (catenate 
   (#:unix:device-namestring p) ; pour apollo
   (#:unix:directory-namestring p)
   (#:unix:file-namestring p)) )
)
(#:system:vmsp '
;; 1.2) VMS case
(defun #:vms:namestring (p)
    (catenate
      (#:vms:host-namestring p)
      (#:vms:device-namestring p)
      (#:vms:directory-namestring p)
      (#:vms:file-namestring p)) )
)
(#:system:dosp '
;; 1.3) DOS case
(defun #:dos:namestring (p)
   (catenate (#:dos:device-namestring p)
             (#:dos:directory-namestring p)
             (#:dos:file-namestring p)))
))

;;;
;;; the get functions in the common-lisp flavour
;;;

(defun pathname-host(p)
  (unless (pathnamep p) (setq p (pathname p)))
  (:host p))

(defun pathname-device (p)
  (unless (pathnamep p) (setq p (pathname p)))
  (:device p))

(defun pathname-directory (p)
  (unless (pathnamep p) (setq p (pathname p)))
  (:directory p))

(defun pathname-name (p)
  (unless (pathnamep p) (setq p (pathname p)))
  (:name p))

(defun pathname-type (p)
  (unless (pathnamep p) (setq p (pathname p)))
  (:type p))

(defun pathname-version (p)
  (unless (pathnamep p) (setq p (pathname p)))
  (:version p))


;;;
;;; the set functions in the common-lisp flavour
;;;

(defun set-pathname-host (p h)
  (:assert p 'set-pathname-host)
  (unless (or (null h) (stringp h))
	  (error 'set-pathname-host 'errnsa h))
  (:host p h))

(defun set-pathname-device (p d)
  (:assert p 'set-pathname-device)
  (unless (or (null d) (stringp d))
	  (error 'set-pathname-device 'errnsa d))
  (:device p d))

(defun set-pathname-directory (p d)
  (:assert p 'set-pathname-directory)
  (unless (listp d)
	  (error 'set-pathname-directory 'errnla d))
  (let ((d2 d) x)
    (while d2
      (setq x (nextl d2))
      (unless (or (stringp x) (memq x '(:current :up :wild :root)))
	      (error 'set-pathname-directory 'errbpa x))))
  (:directory p d))

(defun set-pathname-name (p n)
  (:assert p 'set-pathname-name)
  (:assert-name n 'set-pathname-name)
  (:name p n))

(defun set-pathname-type (p x)
  (:assert p 'set-pathname-type)
  (unless (or (null x) (stringp x))
	  (error 'set-pathname-type 'errnsa x))
  (:type p x))

(defun set-pathname-version (p v)
  (:assert p 'set-pathname-version)
  (unless (or (numberp v)(null v))
	  (error 'set-pathname-version 'errpathversion v))
  (:version p v))

;;;
;;; Full copy of a pathname.
;;;

(defun copy-pathname (p)
  (let ((q (new 'pathname)))
    (:host q (:host p))
    (:device q (:device p))
    (:directory q (copylist (:directory p)))
    (:name q (:name p))
    (:type q (:type p))
    (:version q (:version p))
    q)))



;;;2)  and now, let's convert an external namestring into a pathname..
;;;    that is  more difficult 

;;;
;;; Given any object (string, symbol or pathname), returns corresponding
;;; pathname.

(defun pathname (f)
  (if (pathnamep f)
      f
    (when (symbolp f)
	  (setq f (string f)))
    (cond
     ((not (stringp f))
      (error 'pathname 'errbpa f))
     ((equal f "")(new 'pathname))
     (t (to-system "pathname" f))) ))


;;2.1)  UNIX case

(defmacro #:unix:search-slash (s . n)
  `(chrpos #// ,s ,@n))

;;; if the string begins with: 
;;;     /    it is an absolute pathname.
;;;     ../  you want to go upward in the hierarchy.
;;;     ./   or nothing, it is relative to the  current directory. 
;;;     //xxx Apollo's feature: describes node name before absolute pathname.
;;; if it contains :
;;;     /    it starts with a directory part,
;;;     foo//bar  equivalents to foo/bar,
;;;     otherwise there is only a filename
;;; if filename ends with :
;;;     .xx   there is only the type field
;;;     .xx.N there is type xx and version number N
;;;     .xx.yy there is type yy
;;;     ..N   there is only the version number
;;;                             

(defun #:unix:pathname (s)
  (let (( p (new 'pathname))
	(s1 (string s))
	(s2 ())
	(s3 ())
	(s4 ())
	(loccurs ())
	l
	d)
    (if (eq (slen s1) 0)
	p                             ; empty path
        (cond 
	 ((eq (sref s1 0) #//)          ; absolute pathname
	  (if (and (gt (slen s1) 1)       ; cas particulier du //
		   (eq (sref s1 1) #//)
		   (:slashslashp))
	      ;; with device specification?
	      (let (dev)
		(while (null dev)
		  (setq l (#:unix:search-slash s1 2))
		  (setq s2 (substring s1 2 (if (fixp l)
					       (sub l 2)
					     (setq l (slen s1)))))
		  (cond ((eqstring s2 :up-string)
			 (setq s1 (substring s1 3)))
			((eqstring s2 :dot)
			 (setq s1 (substring s1 2)))
			((eqstring s2 :wild-string)
			 (setq dev ':wild) )
			(t
			 (setq dev s2) )))
		(setq s1 (substring s1 (add1 l)))
		(unless (eq (slen dev) 0)
			(set-pathname-device p dev))
		)
	    (setq s1 (substring s1 1))
	    )
	  (setq d (ncons ':root)) )     ; relative pathname
	 (( eq (index "../" s1) 0)
	  (setq s1 (substring s1 3))
	  (setq d (ncons ':up)) )
	 (( eq (index "./" s1) 0)       ; beginning with current directory
	  (setq s1 (substring s1 2))
	  (setq d (ncons ':current)) )
	 (( #:unix:search-slash s1)     ; otherwise
	  (setq d (ncons ':current)) ))

	;; we have parsed the beginning of the string, and we do
	;; actually know if we are an absolute or relative
	;; specification...

	;; we must now parse the directory specification
	
	(while (setq l (#:unix:search-slash s1))
	  (setq s2 (substring s1 0 l))
	  (cond ((eqstring s2 :up-string)
		 (unless (eq (car d) ':root)
			 (newl d ':up))
		 )
		((eqstring s2 :dot)
		 (unless (eq (car d) ':root)
			 (newl d ':current)))
		((eqstring s2 :wild-string)
		 (newl d ':wild))
		((eqstring s2 :root-string)
		 )
		(t
		 (newl d s2)))
	  (setq s1 (substring s1 (add1 l))))
	(setq d (nreverse d))

	;; But unfortunately, the keyword :root doesn't exist...
	(when (eq (car d) ':root)
	      (if (cdr d)
		  (nextl d)
		  (setq d (ncons :root-string))))
	(:directory p d)
	
	;; here, there are  only the name, type and version fields left
	(unless  (eqn (slen s1) 0)
		 (let ((point (:lastindex s1 (sub1 (slen s1))))
		       (point2 ()))
		   (cond
		    ;; no extension nor version
		    ((null point)
		     (:name* p s1))
		    ;; extention & version
		    ((setq s2 (substring s1 (add1 point))
			   point2 (:lastindex s1 (sub1 point)))
		     (let ((version (stratom (slen s2) s2 ())))
		       (if (or (fixp version)
			       (eqstring (string version) :wild-string))
			   (progn
			     (if (fixp version)
				 (:version p version)
			       (:version p ':wild))
			     (:type* p (substring s1
						  (add1 point2)
						  (sub point (add1 point2))))
			     (:name* p (substring s1 0 point2)) )
			 (:type* p s2)
			 (:name* p (substring s1 0 point)) )
		       ))
		    ;; extension only
		    (t
		     (:type* p s2)
		     (:name* p (substring s1 0 point)) )
		    )))
	p)))

#+#:system:vmsp
;;;2.2 the same for VMS
;;;
;;;the syntaxe is much more complex, but probably easier to parse...
;;;we don't support rooted directory syntax!!!
;;;we don't support the [...] syntax because it has no equivalent in UNIX
;;;for wild carding, we only support
;;; - in a directory specification
;;; * as a full word in directory, file type or version

(defun #:vms:pathname (s)
  (let ((p (new 'pathname))
	(s1 (string s))
	(l ())		;to maintain directory list
	(ll ()))	;just a local variable

    ;;a- is it a decnet file ?
    ;;no wildcard allowed for node or device spec
    (when (setq l (index "::" s1 ))
	  (:host p (substring s1 0 l))
	  (setq s1 (substring s1 (add l 2))))

    ;;b- on which physical device ?
    (when (setq l (index :colon s1 ))
	  (:device p (substring s1 0 l))
	  (setq s1 (substring s1 (add1 l))))

    ;;c- is there a directory part ?
    ;;    it is possible to have a wildcard
    (when (and (neq (slen s1) 0)(eq (sref s1 0) #/[))
	  (setq s1 (substring s1 1))
	  (when (eq (sref s1 0) #/.)
		(setq s1 (substring s1 1))
		(:directory p (ncons ':current)))
	  (when (eq (sref s1 0) #/*)
		(:directory p (ncons ':current)))
	  (while (index "]" s1)
	    (if (setq l (scanstring s1 ".]"))
		(progn (setq ll (substring s1 0 l))
		       (:directory p
				   (cons (cond ((equal ll "-") ':up)
					       ((equal ll :wild-string) ':wild)
					       ((equal ll "")  ':current)
					       ((equal ll "000000") ':root)
					       ( t ll))
					 (:directory p))))
	        (error '#:vms:pathname 'ERRSXT s))
	    (setq s1 (substring s1 (add1 l))))		  
	  (:directory p (nreverse (:directory p))))

    ;;e- is there a file name ?
    (if (or (eq (slen s1)0)
	    (eq (sref s1 0) #/.))
	(setq s1 (substring s1 1))
        (setq ll (substring s1 0
			    (if (setq l (index :dot s1 )) 
				l 
			        (setq l (slen s1)))))
	(:name p (if (equal ll :wild-string) ':wild ll))
	(setq s1 (substring s1 (min (add1 l) (slen s1)))))

    ;;e- is there a type ?
    (unless (eq (slen s1) 0)
	    (setq ll (substring s1 0
				(if (setq l (index ";" s1 ))
				    l
				    (setq l (slen s1)))))
	    (:type p (if (equal ll :wild-string) ':wild ll))
	    (setq s1 (substring s1 (min (add1 l)(slen s1)))))

    ;;f- is there a version ?
    (unless (eq (slen s1) 0)
	    (:version p
		      (if (equal s1 :wild-string) ':wild
			(or (fixp (stratom (slen s1) s1 ()))))
		      ))p ))))

(defun :type* (p s)
  (:type p (if (eqstring s :wild-string)':wild s)))

(defun :name* (p s)
  (:name p (if (eqstring s :wild-string) ':wild s)))

(defun :lastindex (strg i)
  (cond 
   ((lt i 0) ())
   ((eq (sref strg i) #/.) i)
   (t (:lastindex strg (sub1 i)))))

(defun file-is-dir (p)
  (let ((path (copy-pathname (pathname p))))
    (:version path ())
    (if (and (:device path) (neq (car (:directory path)) ':root)
	     (nequal (car (:directory path)) "000000"))
	(:directory path (cons :root-string (:directory path))))
    (cond ((and (stringp (:name path)) (null (:type path)))
	   (ifn (:directory path)
		(:directory path (list ':current)))
	   (:directory path
		       (append (:directory path)
			       (list (:name path))))
	   (:name path ())
	   (:type path ())
	   (if (pathnamep p)
	       path
	     (coerce-namestring path)))
	  (t
	   path))))
	   
 
#+ #:system:dosp
;;;2.3 the same for DOS
;;;
;;; if the string begins with
;;;     - letters followed by a :, there is a device name.
;;;     - a / or a \, it is an absolute pathname.
;;;     - ../ or ..\, you want to go upward in the hierarchy.
;;;     - ./ or .\ or nothing, it is relative to the current directory. If it
;;;       contains / or \, it starts with a directory part, otherwise there is
;;;       only a filename.
;;;     - . : there is only the type field.
;;;

(defun #:dos:pathname (s)
  (let ((p (new 'pathname))
	(s1 (string s))
	(s2 ())
	l
	d)

    ;; Is there a device ?
    (when (setq l (index :colon s1))
	  (:device p (substring s1 0 l))
	  (setq s1 (substring s1 (add1 l))))

    ;; Is there a directory part ?
    (if (eq (slen s1) 0)
	p                                      ; empty path
        (cond
	 ((memq (sref s1 0) '(#// #/\))   ; absolute pathname
		(setq s1 (substring s1 1))
		(setq d (ncons ':root)))
	  ((or (eq (index "../" s1) 0)
	       (eq (index "..\" s1) 0))    ; up
                  (setq s1 (substring s1 3))
                  (setq d (ncons ':up)))
                 ((or (eq (index "./" s1) 0)
                      (eq (index ".\" s1) 0))     ; current directory
	   (setq s1 (substring s1 2))
	   (setq d (ncons ':current)))
	  ((or (index :slash s1) (index :backslash s1))
	   (setq d (ncons ':current))))

	 ;; We have parsed the beginning of the string, and we do
	 ;; actually know if we are an absolute or relative
	 ;; specification...
	 ;; We must now parse the directory specification
	 (while (setq l (or (index :slash s1) (index :backslash s1)))
	   (setq s2 (substring s1 0 l))
	   (cond ((eqstring s2 "..")
		  (unless (eq (car d) ':root)
			  (newl d ':up)))
		 ((eqstring s2 :dot)
		  (unless (eq (car d) ':root)
			  (newl d ':current)))
		 ((eqstring s2 :wild-string)
		  (newl d ':wild))
		 ((eqstring s2 :root-string))
		 (t (newl d s2)))
	   (setq s1 (substring s1 (add1 l))))
	 (setq d (nreverse d))

	 ;; But unfortunately, the keyword :root doesn't exist...
	 (when (eq (car d) ':root)
	       (if (cdr d)
		   (nextl d)
		   (setq d (ncons :root-string))))
	 (:directory p d)

	 ;; Here, there are only the name and type fields left
	 (let ((slen (slen s1)))
	   (unless (eqn slen 0)
		   (let ((point (:lastindex s1 (sub1 slen))))
		     (if (null point)
			 (:name* p s1)
		       (let* ((s2 (substring s1 (add1 point))))
			 (:type* p s2)
			 (:name* p (substring s1 0 point)))))))
	 p)))

;;;
;;; Given a pathname, returns its canonical form,
;;; which allows comparaison between pathnames.

(defun :c-pathname (p)
  (setq p (copy-pathname p))
  (let (
	(dir (:directory p))
	(dir2 ())
	(x ())
	)
    (when dir
	  ;; Clean up
	  (when (stringp (car dir))
		(setq dir2 (ncons ':root))
		(when (eqstring (car dir) :root-string)
		      (nextl dir))
		)
	  ;; Now if the path is absolute then dir2 = '(:root)
	  ;; dir contains a correct list (without "" ...)
	  (while dir
	    (setq x (nextl dir))
	    (selectq x
		     (:up
		      (unless (eq (car dir2) ':root)
			      (newl dir2 ':up)))
		     (:current
		      )
		     (t
		      (newl dir2 x))))
	  ;; upward compatibility
	  (setq dir2 (reverse dir2))
	  (if (eq (car dir2) ':root)
	      (if (cdr dir2)
		  (nextl dir2)
		  (setq dir2 (ncons :root-string)))
	    (when (and (neq (car dir2) ':up) (pathname-directory p))
		  (newl dir2 ':current)))
	  (set-pathname-directory p dir2))
    p))


;;;
;;; A equal for the pathnames.
;;; #u"/a/./b"  =  #u"/a/b"
;;; #u"/a/../b" <> #u"/b" because of symbolic links in unix.

(defun equal-pathname (p1 p2)
  (:assert p1 'equal-pathname)
  (:assert p2 'equal-pathname)
  (setq p1 (copy-pathname p1))
  (setq p2 (copy-pathname p2))
  (let ((name1 (:name p1))
	(type1 (:type p1))
	(name2 (:name p2))
	(type2 (:type p2)))
  ;;homegeneite: "" => ()
  (when (and name1 (eqn (slen name1) 0))
	(:name p1 ()))
  (when (and name2 (eqn (slen name2) 0))
	(:name p2 ()))
    ;; homegeneite: "" => ()
  (when (and type1 (eqn (slen type1) 0))
	(:type p1 ()))
  (when (and type2 (eqn (slen type2) 0))
	(:type p2 ()))
  (equal (:c-pathname p1) (:c-pathname p2))))

;;; 3)
;;; Now, some funny functions...
;;; let'us give a standard way to get the user home-directory.. this
;;; will be useful for the layered product, as DEC says...
  
(defun user-homedir-pathname()
  (to-system "user-homedir-pathname"))

;;;
;;; now, let'us build the run-time control file for a layered product

(defun control-file-pathname &nobind
  (when (or (lt (arg) 1)
	    (gt (arg) 2))
	(error 'control-file-pathname 'errwna (arg)))
  (let ((appli (string (arg 0)))
	(ini (when (eqn (arg) 2)
		   (cond ((pathnamep (arg 1)) (arg 1))
			 ((or (stringp (arg 1))
			      (symbolp (arg 1)))
			   (pathname (arg 1)))
			  (t
			   (error 'control-file-pathname
				  'ERRPATHNOTPATH
				  (arg 1))) )
		   )) )
    (cond
     (ini
      (putprop (symbol () appli)
	       ini
	       'control-file-pathname) )
     ((setq ini (getprop (symbol () appli) 'control-file-pathname))
      (merge-pathnames ini
		       (user-homedir-pathname)))
     (t
      (to-system "control-file-pathname" appli) ))
    ))

;;;  here is a standard way to create temporary files...
;;;  this is mainly useful for test programms, and other utilities..

(defun temporary-file-pathname (seed)
  (to-system "temporary-file-pathname" seed))

#. (cond
(#:system:unixp '(progn
;; 3.1) UNIX case
(defun #:unix:user-homedir-pathname()
  (#:unix:pathname (catenate (getenv "HOME") :slash)))

(defun #:unix:control-file-pathname (p)
  ;; /home/kuczynski/.lelisp
  (let ((pp (user-homedir-pathname)))
    (:type pp p)
    pp))

(defun #:unix:temporary-file-pathname (seed)
  (pathname (catenate "/tmp/" seed)))
))

(#:system:vmsp '(progn
;; 3.2) VMS case
(defun #:vms:user-homedir-pathname()
  (#:vms:pathname (vaxvms_trnlnm "sys$login" "")))

(defun #:vms:control-file-pathname (p)
  ;; sys$login:.lelisp
  (let ((pp (user-homedir-pathname)))
    (:type pp p)
    pp))
;; special initialize for lelisp on VMS
(control-file-pathname 'lelisp "sys$login:startup.ll")

(defun #:vms:temporary-file-pathname (seed)
  (pathname (catenate "sys$scratch:" seed)))
))

(#:system:dosp '(progn
;; 3.3) DOS case
(defun #:dos:user-homedir-pathname()
  (let ((home (or (getenv "HOME")(getenv "LELISP") "")))
    (#:dos:pathname (catenate home :backslash))))

(defun #:dos:control-file-pathname (p)
  ;; \home\kuczynski\lelisp.ini
  (let ((pp (user-homedir-pathname)))
    (:name pp p)
    (:type pp "ini")
    pp))

(defun #:dos:temporary-file-pathname (seed)
  (pathname (catenate #:system:directory "\tmp\" seed)))
)))

;;; 4) a bit more complex : a function that checks that a pathname
;;; adheres to the syntaxe of all operating systems which support
;;; le-lisp... of course, this is not a finite problem...  so there is
;;; no guarantee, but just a help to write portable code...

;;; first the fields device and host are not supported by all O.S and
;;; have a very special syntax and semantic, depending on the O.S.. so
;;; no check needs to be performed for these fields..


(defun #:bsd:pathname-check (p) t)
(defun #:sys5:pathname-check(p) 
  (let ((l (mcons (:type p)(:name p)(:directory p))))
    (every (lambda(x) (if x (le (slen (string x)) 14) t)) l )
    )))

(defun #:aegis:pathname-check(p) t)

(defun #:vms:pathname-check (p)
  (let ((l (mcons (:type p)(:name p) (:directory p))))
    (and
     ;;no more than 8 subdirectories
     (le (length (:directory p)) 8)
     ;;only  32 characters each
     (every (lambda(x) (if x (le (slen (string x)) 32) t)) l )
     ;;many characters are illegal...
     (every
      (lambda(x)
	(not (spanstring x 
			 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890_-$")))
      l)
     ;;version is a number
     (if (:version p) (fixp (:version p))
       t)
     ))))))

(defun #:dos:pathname-check (p)
   (and
    ;; no more than 8 characters for a basename and at least one.
    (if (:name p)
	(and (stringp (:name p))
	     (le (slen (:name p)) 8)
	     (ge (slen (:name p)) 1))
        t)
    ;; no more than 3 characters for types.
    (if (:type p)
	(and (stringp (:type p)) (le (slen (:type p)) 3))
        t)
    ;; The syntax of a directory name is basename.ext where basename
    ;; has not more than 8 characters and ext more than 3 characters.
    (every #'(lambda (x)
	       (if x
		   (let (len pos)
		     (and (setq len (le (slen (string x)) 12))
			  (if (setq pos (index :dot x 0))
			      (and (le pos 8)
				   (ge pos 1)
				   (le (- len pos) 4))
			      t)))
		   t))
	   (:directory p))
    (let ((l (mcons (:type p) (:name p) (:directory p))))
      (every #'(lambda (x)
		 (not (spanstring x
				  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890_-$.\")))
                      l))))

(defun portable-pathname-p (p)
  (with ((outchan t))
	(:assert p 'portable-pathname-p)
	(when (and (or (:host p)(:device p)(:version p))
		   #:system:error-flag)
	      (printerror 'portable-pathname-p 
			  'ERRPATHFIELDS
			  p))
	(not (or (:host p)
		 (:device p)
		 (:version p)
		 (or
		  (unless (#:vms:pathname-check p) 
			  (and #:system:error-flag
			       (printerror 'portable-pathname-p 
					   'ERRPATHNOTVMS
					   p)))
		  (unless (#:bsd:pathname-check p) 
			  (and #:system:error-flag
			       (printerror 'portable-pathname-p 
					   'ERRPATHNOTBSD
					   p)))
		  (unless (#:sys5:pathname-check p) 
			  (and #:system:error-flag
			       (printerror 'portable-pathname-p 
					   'ERRPATHNOTSYS5
					   p)))
		  (unless (#:aegis:pathname-check p)
			  (and #:system:error-flag
			       (printerror 'portable-pathname-p 
					   'ERRPATHNOTAEGIS
					   p)))
		  (unless (#:dos:pathname-check p)
			  (and #:system:error-flag
			       (printerror 'portable-pathname-p
					   'ERRPATHNOTDOS
					   p)))
		  )))
	))


;;; 5) a method to print pathames in a fair way
;;;default printing is
;;; #p:the-string-in-the-os-syntaxe, or the typed vector syntax...

(defun :prin (p)
  (if #:system:print-for-read
      (progn
	(let (( #:system:print-for-read ()))
	  (prin "#:" '#.#:sys-package:colon ":#[ "))
	(mapvector
	 (lambda(x)
	   (prin x)
	   (princn #/ ))
	 p)
	(princn #/] ))
    (prin (catenate "#p"""  (namestring p) """"))) 
  p)

(defsharp p ()
  (ncons (pathname(read))))

(defsharp u ()
  (ncons (#:unix:pathname (read))))


;;; default values for parsing and merging as defined bye CLtL
;;;
(defvar *default-pathname-defaults* #p"")
(defvar *portable-pathname* ())


(defun make-pathname liste-of-elements
  (let ((p (new 'pathname)))
    (:host p 
	   (or (car liste-of-elements) 
	       (:host *default-pathname-defaults*)))
    (:device p
	     (or (cadr liste-of-elements)
		 (:device *default-pathname-defaults*)))
    (:directory p
		(or (caddr liste-of-elements)
		    (:directory *default-pathname-defaults*)))
    (:name p
	   (let ((name (cadddr liste-of-elements)))
	     (ifn name
		  (:name *default-pathname-defaults*)
		  (:assert-name name 'make-pathname)
		  name)))
    (:type p
	   (or (car (cddddr liste-of-elements))
	       (:type *default-pathname-defaults*)))
    (:version p
	      (or (fixp (cadr (cddddr liste-of-elements)))
		  (:version  *default-pathname-defaults*)))
    p)))

;;; 6) coerce to string
;;;
(defun file-namestring (p)
  (:assert p 'file-namestring)
  (to-system "file-namestring" p) )

(defun directory-namestring (p)
  (:assert p 'directory-namestring)
  (to-system "directory-namestring" p))

(defun host-namestring (p)
  (:assert p 'host-namestring)
  (to-system "host-namestring" p))
 
(defun device-namestring (p)
  (:assert p 'device-namestring)
  (to-system "device-namestring" p))

#. (cond
(#:system:unixp '(progn
;; 6.1) UNIX case

(defun #:unix:host-namestring (p)
    "")
(defun #:unix:device-namestring (p)
  (or (and (:slashslashp)
	   (:device p)
	   (catenate "//" (:device p)))
      ""))

(defun #:unix:directory-namestring (p)
  (ifn (:directory p) ""
       (let ((y (stringp (car (:directory p)))) )
	 (setq y (if (and y (gt (slen y) 0)) :slash ""))
	 (mapc (lambda(x) (setq y
				(catenate y 
					  (cond ((stringp x) x)
						((eq x ':up) :up-string)
						((eq x ':wild) :wild-string)
						((eq x ':current) :dot))
					  :slash)))
	       (:directory p))
	 y)))

(defun #:unix:file-namestring (p)
  (catenate
   (cond ((stringp (:name p)))
	 ((not (:name p)) "")
	 ((eq (:name p) ':wild) :wild-string))
   (when (:type p) :dot)
   (cond ((stringp (:type p))(:type p))
	 ((not (:type p))"")
	 ((eq (:type p) ':wild) :wild-string))
   (when (:version p) :dot)
   (cond ((fixp (:version p))(string (:version p)))
	 ((eq (:version p) ':wild) :wild-string)
	 (t ""))))
))

(#:system:vmsp '(progn
;; 6.2) VMS case

(defun #:vms:host-namestring (p)
  (if (:host p)
      (catenate (:host p) "::")
      ""))

(defun #:vms:device-namestring(p)
  (if (:device p)
      (catenate (:device p) :colon)
      ""))

(defun #:vms:directory-namestring (p)
  (let ((y "["))
    (if (:directory p)
	(progn 
	  (mapc (lambda(x) 
		  (setq y 
			(cond ((stringp x)
			       (if (or (eq (sref y (sub1 (slen y))) #/[)
				       (eq (sref y (sub1 (slen y))) #/.))
				   (catenate y x)
				   (catenate y :dot x)))
			      ((eq x ':wild)
			       (if (or (eq (sref y (sub1 (slen y))) #/[)
				       (eq (sref y (sub1 (slen y))) #/.))
				   (catenate y :wild-string)
				 (catenate y ".*")))
			      ((eq x ':current) (catenate y :dot))
			      ((eq x ':up) (catenate y "-"))
			      ((eq x ':root) (catenate y "000000"))
			      )))
		(:directory p))
	  (if (eq (sref y (sub1 (slen y))) #/.)
	      (sset y (sub1 (slen y)) #/])
	      (setq y (catenate y "]")))
	  (if (eqstring y "[]") "" y)
	  )
      "")))

(defun #:vms:file-namestring (p)
  (catenate
   (cond
    ((stringp (:name p)) (:name p))
    ((eq (:name p) ':wild) :wild-string)
    ((not (:name p)) "")
    (t (error 'file-namestring 'ERRSXT (:name p))))
   (if (:type p) :dot "")
   (cond
    ((stringp (:type p)) (:type p))
    ((eq (:type p) ':wild) :wild-string)
    ((not (:type p)) "")
    (t (error 'file-namestring 'ERRSXT (:type p))))
   (if (:version p)
       (catenate ";"
	       (if (fixp (:version p))
		   (string (:version p))
		 (if (eq (:version p) ':wild) :wild-string)))
     "")))
))

(#:system:dosp '(progn
;; 6.3) DOS case
(defun #:dos:host-namestring (p) "")

(defun #:dos:device-namestring (p)
  (if (:device p)
      (catenate (:device p) :colon)
      ""))

(defun #:dos:directory-namestring (p)
  (if (:directory p)
      (let ((q :backslash)
	    (y (stringp (car (:directory p)))))
	(setq y (if (and y (gt (slen y) 0)) :backslash ""))
	(mapc #'(lambda(x)
		  (setq y
			(catenate y
				  (cond ((stringp x) x)
					((eq x ':up) "..")
					((eq x ':wild) :wild-string)
					((eq x ':current) :dot))
				  q)))
	      (:directory p))
	y)
    ""))

(defun #:dos:file-namestring (p)
  (catenate (cond ((stringp (:name p)))
		  ((not (:name p)) "")
		  ((eq (:name p) ':wild) :wild-string))
	    (when (:type p) :dot)
	    (cond ((stringp (:type p)) (:type p))
		  ((not (:type p))"")
		  ((eq (:type p) ':wild) :wild-string))
	    (when (:version p) :dot)
	    (cond ((fixp (:version p)) (string (:version p)))
		  ((eq (:version p) ':wild) :wild-string)
		  (t ""))))
)))

;;; 7) merge & combine PATHNAME
;;;
;;; to complete a pathname with fields from another pathname
;;;
(defun merge-pathnames ( p default)
  (:assert p 'merge-pathnames)
  (:assert default 'merge-pathnames)
  (let ((p1 (new 'pathname)))
    (:host p1
	   (or (:host p)
	       (:host default)))
    (:device p1
	     (or (:device p)
		 (:device default)))
    (:directory p1
		(or (:directory p)
		    (:directory default)))
    (:name p1
	   (or (:name p)
	       (:name default)))
    (:type p1
	   (or (:type p)
	       (:type default)))
    (:version p1
	      (or (:version p)
		  (:version default)))
    p1))


;;;
;;; Combination of two pathnames.
;;; Returns a new pathname equal to p2 if it is absolute, else a combination.
;;; This function ignores symbolic links of unix, that is :
;;; (combine-pathnames #u"/a/b/" #u"../c") -> #u"/a/c"

(defun combine-pathnames (p1 p2)
  (:assert p1 'combine-pathnames)
  (:assert p2 'combine-pathnames)
  (let ((dir2 (:directory p2))
	(p1 (:c-pathname p1))
	(p2 (:c-pathname p2))
	dir x
	)
    (ifn (and (symbolp (car dir2)) (neq (car dir2) ':root))
	 ;; dir2 is absolute
	 (setq dir dir2)
	 ;; dir2 is relative
	 (setq dir (reverse (:directory p1)))
	 (while (eq (car dir2) ':up)
	   (nextl dir2)
	   (selectq (car dir)
		    (:up
		     (newl dir ':up))
		    (:current
		     (setq dir (cons ':up (cdr dir))))
		    (t
		     (nextl dir)))
	   (unless dir (setq dir (ncons :root-string)))
	   )
	 (when (eq (car dir2) ':current)
	       (nextl dir2)
	       )
	 (setq dir (nreconc dir dir2))
	 (when (and (equal (car dir) :root-string) (cdr dir))
	       (nextl dir))
	 )
    (unless (:host p2) (:host p2 (:host p1)))
    (unless (:device p2) (:device p2 (:device p1)))
    (:directory p2 dir)
    p2))
			     

(defun enough-namestring (p . defaults)
  (cond
   ((not  defaults ) (setq defaults *default-pathname-defaults*))
   ((not (pathnamep (setq  defaults (car defaults))))
    (setq defaults (pathname defaults))))
  (let ((p1 (new 'pathname)))
    (unless (equal (:host defaults)
		   (:host p))
	    (:host p1 (:host p)))
    (unless (equal (:device defaults)
		   (:device p))
	    (:device p1 (:device p)))
    (unless (equal (:directory defaults)
		   (:directory p))
	    (:directory p1 (:directory p)))
    (unless (equal (:name defaults)
		   (:name p))
	    (:name p1 (:name p)))
    (unless (equal (:type defaults)
		   (:type p))
	    (:type p1 (:type p)))
    (unless (equal (:version defaults)
		   (:version p))
	    (:version p1 (:version p)))
    (namestring p1)))))
             

;;; 8) this part of the code handles the true pathname facility of CLtL..
;;; The hidden mechanism may be different , depending on the operating
;;; system . UNIX has environnment variables which may be put as the
;;; beginning of a word.. VMS has logfical name translations.. etc...

(defun true-pathname (p)
  ;; P is a pathname or a string
  (when (stringp p)(setq p (pathname p)))
  (:assert p 'true-pathname)
  (to-system "true-pathname" p)
  )

#. (cond
(#:system:unixp '
;; 8.1) UNIX case

(defun #:unix:true-pathname (p)
  ;; the convention assumed here is that environnement variables
  ;; have been inserted somewhere in the pathname... as the first
  ;; element of the directory list (which will start with :current,)
  ;; or instead of the name of the file... we recognize it because
  ;; it starts with a "$" sign... so we use (getenv) to see if by
  ;; chance...... 
  (let ((new-p (new 'pathname))
	(new-s ()))
    (if
	(and (eq (car (:directory p)) ':current)
	     (stringp (cadr (:directory p)))
	     (eq (sref (cadr (:directory p)) 0) #/$)
	     (setq new-s (getenv (substring  (cadr (:directory p))
					     1)))
	     (setq new-s (string new-s)))
	(:directory new-p 
		    (cons 
		     (ifn (eq (sref new-s 0)#//)
			  new-s
			  (substring new-s 1))
		     (cddr (:directory p))))
      (:directory new-p (:directory p)))
    (if (and (stringp (:name p))
	     (eq (sref (:name p) 0 ) #/$)
	     (setq new-s (string (getenv (substring (:name p) 1)))))
	(:name new-p new-s)
        (:name new-p (:name p)))
    (:type new-p (:type p))
    (:version new-p (:version p))
    (#:unix:pathname (#:unix:namestring new-p))))
)

(#:system:vmsp '
;; 8.2) VMS case
;; the kernel for  VMS... but it doesn't work yet  since it requires
;; the help of an internal operating system routine 

(defun #:vms:true-pathname (p)
  ;; On VAX/VMS the normal way is to use logical names...
  ;; so what we do is to build the external string, and call the
  ;; system service.. then we build the new pathname
  (let ((v (vaxvms_trnlnm (namestring p) "")))
    (pathname (if (eq (slen v) 0) p v)) ))
)

(#:system:dosp '
;; 8.3) DOS case
(defun #:dos:true-pathname (p)
  ;; the convention assumed here is that environnement variables
  ;; have been inserted somewhere in the pathname... as the first
  ;; element of the directory list (which will start with :current,)
  ;; or instead of the name of the file... we recognize it because
  ;; it starts and ends with a "%" sign... so we use (getenv) to see if by
  ;; chance......
  (let ((new-p (new 'pathname))
	(new-s ())
	pos)
    (if (and (stringp (:device p))
	     (eq (sref (:device p) 0) #/%)
	     (setq pos (> (1- (slen (:device p))) 1))
	     (eq (sref (:device p) pos) #/%)
	     (setq new-s
		   (getenv (substring (:device p) 1 (1- pos))))
	     (setq new-s (string new-s)))
	(:device new-p new-s)
        (:device new-p (:device p)))
    (if (and (eq (car (:directory p)) ':current)
	     (stringp (cadr (:directory p)))
	     (eq (sref (cadr (:directory p)) 0) #/%)
	     (setq pos (> (1- (slen (cadr (:directory p)))) 1))
	     (eq (sref (cadr (:directory p)) pos) #/%)
	     (setq new-s
		   (getenv (substring (cadr (:directory p)) 1 (1- pos))))
	     (setq new-s (string new-s))
	     (if (neq (sref new-s 1) #/:)
		 t
	         (:device new-p (substring new-s 0 1))
		 (setq new-s (substring new-s 2))))
	(:directory new-p
		    (cons (ifn (or (eq (sref new-s 0) #//)
				   (eq (sref new-s 0) #/\))
				   new-s
				   (substring new-s 1))
			       (caddr (:directory p))))
		    (:directory new-p (:directory p)))
        (if (and (stringp (:name p))
                 (eq (sref (:name p) 0) #/%)
                 (setq pos (> (1- (slen (:name p))) 1))
                 (eq (sref (:name p) pos) #/%)
                 (setq new-s
                       (string (getenv (substring (:name p) 1 (1- pos))))))
            (:name new-p new-s)
	  (:name new-p (:name p)))
        (:type new-p (:type p))
        (:version new-p (:version p))
        (#:dos:pathname (#:dos:namestring new-p))))
))

;;; 9) now, much greater... 
;;; a get/set working directory, the portable way
;;;
(defun current-directory &nobind
  ;; P is a pathname, a string, or ()
  (if (gt (arg) 1)
      (error 'current-directory 'errwna 0)
      (let ((p (if (eq (arg) 0) () (arg 0))))
	(to-system "current-directory" p))
      ))

#. (cond
(#:system:unixp '
;; 9.1) UNIX case
(defun #:unix:current-directory (p)
  (cond ((not p)
	 (let ((the_string (makestring 1024 #/ ))
	       (ret-length 0))
	   (setq ret-length (llgetwd the_string 1024))
	   (unless (eq (sref the_string (sub1 ret-length)) #//)
		   (sset the_string ret-length #//)
		   (setq ret-length (add1 ret-length)))
	   (substring the_string 0 ret-length)))
	((or (pathnamep p) (stringp p))
	 (let ((the_directory 
		(or (stringp p)
		    (catenate (device-namestring p)
			      (directory-namestring p)))))
	   (cchdir the_directory)
	   ))
	(t (error 'current-directory 'ERRBPA p))))
)

(#:system:vmsp '(progn
;; 9.2) VMS case
'(defun #:vms:getwd ()
  (let ((p0 (vaxvms_trnlnm "SYS$DISK" "")))
    (catenate p0 
	      (if (eq (sref p0 (sub1 (slen p0))) #/: ) "" 
		:colon)
	        (vaxvms_setddir "" ""))))

'(defun #:vms:current-directory (p)
  (ifn p (#:vms:getwd) 
       (cond
	((stringp p)(setq p (#:vms:pathname p)))
	((pathnamep p))
	(t (error 'current-directory 'ERRBPA p)))
       (vaxvms_setddir
	(#:vms:device-namestring p)
	(#:vms:directory-namestring p))
       (let ((p1 (#:vms:getwd)))
	 (comline (catenate "set default " p1))
	 p1)))

(defun #:vms:getwd ()
  (let ((the_string (makestring 1024 #/ ))
	(ret-length 0))
    (setq ret-length (llgetwd the_string 1024))
    (substring the_string 0 ret-length)))
    

(defun #:vms:current-directory (p)
  (ifn p (#:vms:getwd) 
       (setq p (file-is-dir p))
       (cond
	((stringp p))
	((pathnamep p) (setq p (coerce-namestring p)))
	(t (error 'current-directory 'ERRBPA p)))
       (cchdir p))
  (#:vms:getwd))
))

(#:system:dosp '
;; 9.3) DOS case
(defun #:dos:current-directory (p)
  (cond ((not p)
	 (let ((the_string (makestring 1024 #/ ))
	       (ret-length 0))
	   (setq ret-length (llgetwd the_string 1024))
	   (unless (eq (sref the_string (sub1 ret-length)) #/\)
                       (sset the_string ret-length #/\ )
		       (incr  ret-length))
		   (substring the_string 0 ret-length)))
	   ((or (pathnamep p) (stringp p))
	    (let ((the_directory (or (stringp p)
				     (catenate (device-namestring p)
					       (directory-namestring p)))))
	      (cchdir the_directory)
	      ))
	   (t (error 'current-directory 'ERRBPA p))))))
)
)

;;; 10) The predicat about directory
;;;
(defun directoryp (pp)
  (cond
   ((pathnamep pp)
    (to-system "directoryp" pp))
   ((stringp pp)
    (let ((r (to-system "directoryp" pp)))
      (when r (namestring r))) )
   (t
    (error 'directoryp 'errbpa pp) )))

#. (cond
(#:system:unixp '
;; 10.1) UNIX case
(defun #:unix:directoryp (p)
  ;; always return a directory path (terminate by "/")
  (cond ((stringp p)
	 (ifn (#:unix:search-slash p 0)
	      (setq p (catenate "./" p)))
	 (setq p (pathname p)))
	(t           ; It's a pathname
	 (ifn (pathname-directory p)
	      (set-pathname-directory p '(:current)))))
  (if (eq (lldirectoryp (namestring p)) 0)
      (if (or (#:pathname:name p)
	      (#:pathname:type p)
	      (#:pathname:version p) )
	  (make-pathname (#:pathname:host p)
			 (#:pathname:device p)
			 (append (#:pathname:directory p)
				 (list (file-namestring p)))
			 () () () )
	p)
    ()))
)

(() ' ;;#:system:vmsp '
;; 10.2) VMS case
(defun #:vms:directoryp (p)
  ;; To test if a pathname is an existing directory.
  ;; Il we have [a.b.c], we have to test the existence of
  ;; [a.b]c.dir
  ;; If we have only  [a], we have to look at [000000]a.dir
  ;; must return a directory ([...foo])
  (if (pathnamep p)
      (setq p (copy-pathname p))
    (setq p (pathname p)))
  (unless (or (equal (#:pathname:type p) "dir")
	      (equal (#:pathname:type p) "DIR"))
	  (let ((d (car (last (#:pathname:directory p)))))
	    (#:pathname:directory p
				  (nreverse
				   (cdr (nreverse (#:pathname:directory p)))))
	    (#:pathname:name p d)
	    (#:pathname:type p "DIR")
	    (unless (#:pathname:directory p)
		    (#:pathname:directory p (ncons :root-string))) ))
  (when (probefile p)
	(#:pathname:type p ())
	(#:pathname:version p ())
	(#:pathname:directory p
			      (append (#:pathname:directory p)
				      (list (file-namestring p))))
	(#:pathname:name p ())
	p) )
)

(#:system:vmsp '
(defun #:vms:directoryp (p)
  (let ((pp (file-is-dir p)))
    (let ((dirp (llopendir (coerce-namestring pp))))
    (cond ((neq 0 dirp)
	   (llclosedir dirp)
	   p)
	  (t
	   ())))))

;(let ((pp (file-is-dir p)))
;  (let ((pwd (current-directory))
;	(dirp (cchdir (coerce-namestring pp))))
;    (current-directory pwd)
;    (if (eq dirp 0)
;	p
;      ()))))

;  (let ((dirp (llopendir (coerce-namestring p))))
;    (cond ((neq 0 dirp)
;	   (llclosedir dirp)
;	   p)
;	  (t
;	   ()))))

)

(#:system:dosp '
;; 10.3) DOS case
(defun #:dos:directoryp (p)
  (cond ((stringp p)
	 (setq p (pathname p))
	 (unless (#:pathname:directory p)
		 (#:pathname:directory p (ncons ':current))))
	(t           ; It's a pathname
	 (ifn (pathname-directory p)
	      (set-pathname-directory p '(:current)))))
  (if (eqn (lldirectoryp (namestring p)) 0)
      (if (or (#:pathname:name p)
	      (#:pathname:type p)
	      (#:pathname:version p) )
	  (make-pathname (#:pathname:host p)
			 (#:pathname:device p)
			 (append (#:pathname:directory p)
				 (list (file-namestring p)))
			 () () () )
	p)
    ()))

))

;;; 11) And Now, ladies and gentlemen.... The wild carding process
;;; very special ....
;;; the following code uses a pathname or an external string as
;;; argument and returns all wildcarding possibilities... it is the
;;; user's responsability to do what it needs with it...

(defun file-in-pattern (p)
  (cond ((eqstring (file-namestring p) "")
	 (let ((d (:directory p))
	       (l (length (:directory p))))
	   (:name p (car (last d)))
	   (:directory p (firstn (decr l) d)))
	 (if (null (:directory p))
	     (:directory p (ncons :root-string)))))
  p)

(defun expand-pathname (p)
  ;;p is a pathname or a string which follows the full convention of
  ;;the host system
  (let ((pattern (cond ((stringp p) (pathname p))
		       ((pathnamep p) (copy-pathname p))
		       (t (error 'expand-pathname
				 'ERRPATHNOTPATH
				 p))) ))
    (to-system "wild" pattern)) )

(defun map-expand-pathname (funct p)
  ;; apply "funct" to all files after expansion of pattern "p"
  (let ((pattern (cond ((stringp p) (pathname p))
		       ((pathnamep p) (copy-pathname p))
		       (t (error 'map-expand-pathname
				 'ERRPATHNOTPATH
				 p))) ))
    (to-system "map-wild" funct pattern)) )


#. (cond
(#:system:unixp '(progn
;; 11.1) UNIX case
(defun #:unix:wild (the-path)
  (if (directoryp the-path)
      (cons the-path ())
      (setq the-path (file-in-pattern the-path))
      (let ((ref (#:c-wild:match-compile (file-namestring the-path))))
	(mapcan #'(lambda (elt)
		    (#:c-wild:get-entries elt ref ()))
		(#:c-wild:expand-tree the-path))))
  )

(defun #:unix:map-wild (the-funct the-path)
  (if (directoryp the-path)
      (cons the-path ())
      (setq the-path (file-in-pattern the-path))
      (let ((ref (#:c-wild:match-compile (file-namestring the-path))))
	(mapc #'(lambda (dir)
		  (#:c-wild:get-entries dir ref the-funct))
	      (#:c-wild:expand-tree the-path))) )
  )
  
(defextern lldirectoryp (string)        fix)
(defextern llgetwd      (string fix)    fix)
(defextern llopendir    (string)        external)
(defextern llreaddir    (external)      string)
(defextern llclosedir   (external)      )
(defextern cchdir       (string)        fix)

))

(#:system:vmsp '(progn
;; 11.2) VMS case

(defun #:vms:map-wild (the-funct the-path)
  (if (directoryp the-path)
      (cons the-path ())
      (setq the-path (file-in-pattern the-path))
      (let ((ref (file-namestring the-path)))
        (mapc #'(lambda (dir)
                  (#:c-wild:get-entries dir ref the-funct))
              (#:c-wild:expand-tree the-path))) )
  )


(defun #:vms:wild (the-path)
  (setq the-path (coerce-namestring the-path))
  (setq the-path (pathname the-path))
  (if (directoryp the-path)
      (cons the-path ())
      (setq the-path (file-in-pattern the-path))
      (let ((ref (file-namestring the-path)))
	(mapcan #'(lambda (elt)
		    (#:c-wild:get-entries elt ref ()))
		(#:c-wild:expand-tree the-path))))
  )



'(defextern vaxvms_trnlnm  "" (string string) string)
'(defextern vaxvms_trnlnm  "" (string) string)
'(vaxvms_trnlnm "LELISP$DISK")
'(defextern vaxvms_wild    "" (string)        t)
'(defextern vaxvms_setddir "" (string string) string)
'(defextern lldirectoryp (string)        fix)
(defextern vaxvms_trnlnm (string string) string)
(defextern llgetwd      (string fix)    fix)
(defextern llopendir    (string)        external)
(defextern llreaddir    (string)      string)
(defextern llclosedir   (external)      )
(defextern cchdir       (string)        fix)

))

(#:system:dosp '(progn
;; 11.3) DOS case
(defun #:dos:wild (the-path)
  (if (directoryp the-path)
      (cons the-path ())
    (setq the-path (file-in-pattern the-path))
    (let ((ref (#:c-wild:match-compile (file-namestring the-path))))
      (mapcan #'(lambda (elt)
		  (#:c-wild:get-entries elt ref ()))
	      (#:c-wild:expand-tree the-path))))
  )

(defun #:dos:map-wild (the-funct the-path)
  (if (directoryp the-path)
      (cons the-path ())
    (setq the-path (file-in-pattern the-path))
    (let ((ref (#:c-wild:match-compile (file-namestring the-path))))
      (mapc #'(lambda (dir)
		(#:c-wild:get-entries dir ref the-funct))
	    (#:c-wild:expand-tree the-path))) )
  )

       (defextern lldirectoryp (string)        fix)
       (defextern llgetwd      (string fix)    fix)
       (defextern llopendir    (string)        external)
       (defextern llreaddir    (external)      string)
       (defextern llclosedir   (external)      )
       (defextern cchdir       (string)        fix)
)
))

(defun #:c-wild:expand-tree (p)
   (let ((dir (pathname-directory p)))
        (if dir
            (let ((new-p (new 'pathname)))
                 (cond ((eq (car dir) ':current)
                        (:directory new-p (list ':current))
                        (#:c-wild:wild-tree (list new-p) (cdr dir)))
                       ((eq (car dir) ':up)
                        (:directory new-p (list ':up))
                        (#:c-wild:wild-tree (list new-p) (cdr dir)))
                       (t (:host   new-p (pathname-host   p))
                          (:device new-p (pathname-device p))
                          (:directory new-p (list':root))
                          (#:c-wild:wild-tree (list new-p)
					      (if (or (eq (car dir) ':root)
						      (eqstring (car dir) ""))
						  (cdr dir)
						dir)))))
            (list p))))

(defun #:c-wild:wild-tree (l tree)
  (if (and l tree)
      (mapcan
       #'(lambda (sub-path)
	   (#:c-wild:wild-tree
	    (if (directoryp (catenate (directory-namestring sub-path)
				      (car tree)))
		(progn (#:c-wild:append-dir sub-path sub-path (car tree))
		       (list sub-path))
	      (#:c-wild:get-directories sub-path
					(#:c-wild:match-compile (car tree))))
	    (cdr tree)))
       l)
    l))

(defmacro #:c-wild:append-dir (new-path old-path new-dir)
   `(:directory ,new-path (append1 (:directory ,old-path) ,new-dir)))


;[BPS] voila le code qu'il y avait qq part sur VMS. Le llreaddir "*.DIR;1"
; est loin d'e^tre catyholique (de'clare' comme external). So back to the
;old version
;(defun #:c-wild:get-directories (path ref)
;  (setq path (file-is-dir path))
;   (let ((pwd (current-directory))
;	  (name) (dirp))
;     (if (eqstring (namestring path) "")
;	 (setq name pwd)
;       (setq name (if (eq 0 (cchdir (namestring  path)))
;		       (current-directory)
;		     "")))
;     (setq dirp (llopendir name))
;        (if (and (fixp dirp) (eqn dirp 0))
;            (printerror 'expand-pathname 'ERRPATHREADDIR path)
;            (protect
;                (let (
;                      l dirent new-name new-p)
;                     (until (eqstring (setq dirent (llreaddir "*.DIR;1")) "")
;                            (setq new-name (catenate name dirent))
;                            (when (and (directoryp new-name)
;				       (#:c-wild:match-step dirent ref 0))
;                                  (newl l
;                                        (prog1 (setq new-p (new 'pathname))
;                                               (:host new-p (:host path))
;                                               (:device new-p (:device path))
;					       (:type new-p ())
;					       (:version new-p ())
;                                               (#:c-wild:append-dir
;                                                 new-p path dirent)))))
;		     (nreverse l))
;                (llclosedir dirp)  (current-directory pwd)   ))))

(defun #:c-wild:get-directories (path ref)
   (let ((dirp (llopendir (namestring path))))
        (if (and (fixp dirp) (eqn dirp 0))
            (printerror 'expand-pathname 'ERRPATHREADDIR path)
            (protect
                (let ((name (namestring path))
                      l dirent new-name new-p)
                     (until (eqstring (setq dirent (llreaddir dirp)) "")
                            (setq new-name (catenate name dirent))
                            (when (and (directoryp new-name)
                                       (not (eqstring dirent "."))
                                       (not (eqstring dirent ".."))
                                       (#:c-wild:match-step dirent ref 0))
                                  (newl l
                                        (prog1 (setq new-p (new 'pathname))
                                               (:host new-p (:host path))
                                               (:device new-p (:device path))
                                               (#:c-wild:append-dir
                                                 new-p path dirent)))))
                     (nreverse l))
                (llclosedir dirp)))))

;[BPS] voila le code qu'il y avait dans work depuis longtemps...
;je comprends pas trop les modifs de bk, mais je suppose que son code
;(qui suit) est spe'cifique VMS...
(defun #:c-wild:get-entries (path pattern fct-or-nil)
  ;; take a pathname "path", a pattern "pattern", and
  ;; a flag "fct-or-nil" which is a function for MAP-EXPAND-PATHNAME
  ;; or () for EXPAND-PATHNAME
   (let (name dirp pwd)
        (if (:directory path)
            (progn (setq name (namestring path))
                   (setq dirp (llopendir name)))
	  (progn (setq name "")
		 (setq dirp (llopendir "."))))
        (if (and (fixp dirp) (eqn dirp 0))
            (printerror 'expand-pathname 'ERRPATHREADDIR path)
	  (setq pwd (current-directory))
	  (protect (let (l entry)
		     (current-directory name)
		     (until (eqstring (setq entry (llreaddir dirp)) "")
			    (when (and (#:c-wild:match-step entry pattern 0)
				       (probefile entry)
				       )
				  (if fct-or-nil
				      (with ((current-directory pwd))
					    (funcall fct-or-nil
						     (pathname
						      (catenate name entry))))
				    (newl l (pathname (catenate name entry))))
				  ))
		     (unless fct-or-nil (nreverse l)))
		   (current-directory pwd)
		   (llclosedir dirp)))))

;(defun #:c-wild:get-entries (path pattern fct-or-nil)
;  ;; take a pathname "path", a pattern "pattern", and
;  ;; a flag "fct-or-nil" which is a function for MAP-EXPAND-PATHNAME
;  ;; or () for EXPAND-PATHNAME
;   (let (name dirp pwd)
;        (if (:directory path)
;            (setq name (namestring path))
;	  (setq name ""))
;	  (setq pwd (current-directory))
;	  (protect (let (l entry)
;		     (current-directory name)
;		     (until (eqstring (setq entry (llreaddir pattern)) "")
;			    (when (or (probefile entry)	(directoryp entry))
;				  (if fct-or-nil
;				      (with ((current-directory pwd))
;					    (funcall fct-or-nil
;						     (pathname
;						      (catenate name entry))))
;				    (newl l (pathname (catenate name entry))))
;				  ))
;		     (unless fct-or-nil (nreverse l)))
;		   (current-directory pwd))
;))

(defun #:c-wild:match-compile (reference)
   (if (stringp reference)
       (let ((len-ref (slen reference))
             (pos  0)
             (pos1 0)
             ref)
            (while (lt pos len-ref)
                   (cond ((#:c-wild:test-match len-ref
					       :wild-length
					       pos
					       reference
					       :wild-string)
                          (#:c-wild:set-in-ref pos
					       pos1
					       ref
					       reference
					       ':wild
					       :wild-length))
                         ((#:c-wild:test-match len-ref
					       :one-char-length
					       pos
					       reference
					       :one-char-string)
                          (#:c-wild:set-in-ref pos
					       pos1
					       ref
					       reference
					       ':one-char
					       :one-char-length))
                         (t (incr pos))))
            (unless (eqn pos pos1)
                    (newl ref (substring reference pos1)))
            (nreverse ref))
      (list reference)))

(defmacro #:c-wild:test-match (len1 len2 pos str1 str2)
   `(and (le ,pos (sub ,len1 ,len2))
         (substring-equal ,len2 ,str2 0 ,str1 ,pos)))

(defmacro #:c-wild:set-in-ref (pos pos1 ref str jok len)
   `(progn (unless (eqn ,pos ,pos1)
                   (newl ,ref (substring ,str ,pos1 (sub ,pos ,pos1))))
           (newl ,ref ,jok)
           (setq ,pos (add ,pos ,len))
           (setq ,pos1 ,pos)))

(defun #:c-wild:match-step (str ref pos)
  ;; matche a string "str" with a reference pattern "ref" from position "pos"
   (let ((val (car ref))
         (str-len (slen str)))
        (cond ((stringp val)
               (let ((ref-len (slen val)))
                    (and (le ref-len (sub (slen str) pos))
                         (substring-equal ref-len val 0 str pos)
                         (#:c-wild:match-step str
					      (cdr ref)
					      (add pos ref-len)))))
              ((null val)
               (eqn pos str-len))
              ((symbolp val)
               (selectq val
                 (:one-char (and (ge (sub str-len pos) 1)
                                 (#:c-wild:match-step str
						      (cdr ref)
						      (add1 pos))))
                 (:wild (or (null (cdr ref))
                            (#:c-wild:match-sweep-string str (cdr ref) pos)))
                 (t     (error 'expand-pathname 'ERRPATHMATCH val)))))))

(defun #:c-wild:match-sweep-string (str ref pos)
   (let ((val (car ref))
         pos-substr)
        (when (setq pos-substr (index val str pos))
              (or (#:c-wild:match-step str
				       (cdr ref)
				       (add pos-substr (slen val)))
                  (#:c-wild:match-sweep-string str ref (add1 pos-substr))))))

;;; for documentation compatibility
(defun wildcard (x)
  (expand-pathname x))


;;; this function coerces an external string, and when required,
;;; checks the syntaxe of the pathname

(defun coerce-namestring (file-name)
  (if (pathnamep file-name)
      (progn          
	(when *portable-pathname* (portable-pathname-p file-name))
	(namestring file-name))  
      file-name))


