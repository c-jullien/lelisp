;;;
;;; PEPE: the minimal editor (using VIRTTY)
;;;
;;; $Source: /usr/cvs/lelisp/llib/pepe.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

(unless (>= (version) 15.21)
        (error 'load 'erricf 'pepe))

(defvar #:sys-package:colon 'pepe)

(add-feature 'pepe)

;;; PEPE  is the minimal editor of Le-Lisp version 15.2
;;; It can edit files or any Le-Lisp expression, and
;;; uses the minimal features of VIRTTY.

;;; A buffer is a list of strings, each one represents a line.
;;; It's pretty simple but creates a new string for each typed character.

;;; PEPE, (PEPE Est Un Petit Emacs)
;;;  - is written in Lisp
;;;  - is extensible
;;;  - independant of the terminal (virtty)
;;;  - uses the asynchronous redisplay (redisplayscreen)


;;;
;;; Global Variables
;;;

;;; Because of theses variables, PEPE is not reentrant

(defvar :buffer ())         ; the current buffer
(defvar :xcursor 0)         ; current X
(defvar :ycursor 0)         ; current Y
(defvar :column 0)          ; curent column
(defvar :ydisplay 0)        ; number of the 1rst visible line
(defvar :file "tmp")        ; name of the current file
(defvar :commands ())       ; commands' list
(defvar :escommands ())     ; escape-commands' list
(defvar :modbuf ())         ; flag if the bugger is modified
(defvar :kill ())           ; the string of the last "kill"
(defvar :searchstrg "")     ; the last searched string.

;;; New DEFVAR for the compiler

(defvar :x)			; local copy of  Xcursor
(defvar :y)			; local copy of Ycursor
(defvar :l)			; current pointer in the line
(defvar :s)			; curent length of :l
(defvar :fm)			; current line
(defvar :char)			; current character


(defvar :oscreen)		; old screen
(defvar :nscreen)		; new screen

(defvar :xy)		        ; save :-xmax-1

(defvar :pos)		        


;;; Szies

(defvar :xmax)
(defvar :xmax+1)
(defvar :xmax/2+2)
(defvar :xmax/2-2)
(defvar :xmax+1*ymax)
(defvar :-xmax+1)
(defvar :ymax)
(defvar :ymax+1)
(defvar :ymax-1)
(defvar :ymax/2)
(defvar :ymax/4)


;;;
;;; Main Loop
;;;


(df pepe (:f)
    ;; the FSUBR of the following function
    (pepefile :f))

(defun pepefile (:f)
  ;; edit a file
  (let ((:xmax         (tyxmax))
	(:ymax         (tyymax))
	(:xmax+1       (add1 (tyxmax)))
	(:-xmax+1      (sub 0 (add1 (tyxmax))))
	(:xmax-1       (sub1 (tyxmax)))
	(:xmax/2+2     (add (div (tyxmax) 2) 2))
	(:xmax/2-2     (sub (div (tyxmax) 2) 2))
	(:ymax+1       (add1 (tyymax)))
	(:ymax-1       (sub1 (tyymax)))
	(:ymax/2       (div (tyymax) 2))
	(:ymax/4       (div (tyymax) 4))
	(:xmax+1*ymax  (mul (add1 (tyxmax)) (tyymax))))
    (let ((:oscreen (makestring (mul :xmax+1 :ymax+1) #\SP))
	  (:nscreen (makestring (mul :xmax+1 :ymax+1) #\SP)))
      (:clrscreen)
      (ifn :f
	   (unless :buffer (setq :buffer (list "")))
	   (setq :file "tmp" :xcursor 0 :ycursor 0 :column 0 :ydisplay 0
		 :modbuf ())
	   (cond
	    ((equal :f t)		; scratch file
	     (setq :buffer (list "")))
	    ((atom :f)		        ; a real file
	     (tag eoc (setq :buffer (:readfile :f)))
	     (setq :file (string :f)))
	    (t			        ; expressions
	     (setq :buffer (list ""))
	     (let ((#:sys-package:itsoft ':eval))
	       (eval :f))
	     (setq :buffer (nreverse :buffer)))))
      (typrologue)
      ;;
      ;; the real top level
      ;;
      (untilexit pepe
		 (tag eoc
		      (:redisplay)
		      (tycursor :xcursor :ycursor)
		      (:pepecmd (tyi))))
      ;; exit from the editor.
      (tycursor 0 :ymax)
      (tycleol)
      (tycursor 0 :ymax-1)
      (tycleol)
      (tyepilogue)
      (tyflush)
      'pepe))))))

(defun :eval:eol ()
  ;; get the printed line, if we have to edit the value
  ;; of an evaluation.
  (newl :buffer (substring (outbuf) 0 (outpos)))
  (fillstring (outbuf) 0 #\SP (outpos))
  (outpos (lmargin)))


;;;
;;; Commands' interpreter
;;;

(defun :pepecmd (c)
  ;; interprets the command <c>
  ;; the commads' A-list is in :commands
  (let ((l (cassq c :commands)))
    (if l (eprogn l)
      ;; not a command
      (if (lt c 32)
	  (:deadend)
	  (:insertchar c))))
    (when (setq c (tys))
          (:pepecmd c)))

(defun :escommand ()
  ;; interprets the escape-command <esc> X
  ;; the escape-commands's  A-List is in :escommands
  (let ((c (tyi)))
    ;; upper case
    (when (and (ge c #/a) (le c #/z))
	  (setq c (sub c 32)))
    (let ((l (cassq c :escommands)))
      (if l (eprogn l) (:deadend)))))

;;;
;;; Display functions
;;;

;;; With few exceptions, these functions don't use the VIRTTY functions
;;; but the "redisplayscreen" facility.

(defun  :redisplay ()
  ;; redisplays all the visible screen
  (fillstring :nscreen 0 #\SP)
  (let ((y :-xmax+1)
	(:pos (add :xmax+1*ymax :xmax/2-2))
	(s (length :buffer))
	(lib1 "Pepe: ")
	(l (nthcdr :ydisplay :buffer)))
    ;; displays the text
    (repeat :ymax
	    (bltstring :nscreen (setq y (add y :xmax+1))
		       (car l) 0 :xmax+1)
	    (when (and (car l) (gt (slen (nextl l)) :xmax+1))
		  (sset :nscreen (add y :xmax) #/\)))
	    ;; displays the who-line
	    (fillstring :nscreen :xmax+1*ymax #\SP :xmax)
	    (:fillminibuf 0 lib1)
	    (:fillminibuf (slen lib1) :file)
	    (:fillminibufnb s)
	    (sset :nscreen (setq :pos (sub1 :pos)) #//)
	    (:fillminibufnb (add1 (add :ydisplay :ycursor)))
	    (:fillminibuf :xmax/2-2 (if :modbuf " <M> " "    "))
	    (:trueredisplay)))

(defmacro :trueredisplay ()
  `(redisplayscreen :nscreen :oscreen :xmax+1 :ymax+1))

(defmacro :fillminibuf (x strg)
  ;; write in the "who-line" from <x> the string <string>
  `(bltstring :nscreen (add :xmax+1*ymax ,x) ,strg 0))

(defun  :fillminibufnb (nb)
  ;; write in :nscreen from <:pos> the numerical value <nb>
  (sset :nscreen (setq :pos (sub1 :pos)) (add #/0 (rem nb 10)))
  (when (ge nb 10)
	(:fillminibufnb (div nb 10))))

(defun  :clrscreen () 
  ;; clear the screen
  (tycursor 0 0) 
  (tycls)
  (fillstring :oscreen 0 #\SP))


;;;
;;; Dialog functions
;;;

(defun :more ()
  ;; ask if the prints have to be continued
  (slet ((prmpt " More? ")
	 (lenpr (slen prmpt)))
	(:fillminibuf :xmax/2+2 prmpt)
	(:trueredisplay) 
	(tycursor (add :xmax/2+2 lenpr) :ymax)
	(unless (chrpos (tyi) " YyOoTt") (exit eoc))
	(:fillminibuf :xmax/2+2 (makestring lenpr #\SP))))

(defun :readname (strg)
  ;; reads a string in the terminal
  ;; <strg> is the prompt string
  (:fillminibuf :xmax/2+2 strg)
  (let ((l) (c) (p (add :xmax/2+2 (slen strg))))
    (:trueredisplay)
    (tycursor p :ymax)
    (while (neq (setq c (tyi)) #^M)
      (cond ((eq c #^G) (exit eoc ()))
	    ((eq c #\BS) 
	     (:fillminibuf (setq p (sub1 p)) " ") 
	     (setq p (sub1 p))
	     (nextl l))
	    (t (:fillminibuf p (list c)) (newl l c)))
      (:trueredisplay)
      (tycursor (setq p (add1 p)) :ymax))
    (if l (string (nreverse l)) (exit eoc "")))))


;;;
;;; Auxiliary functions
;;;

(defmacro :deadend ()
  ;; no more possible move .....
  `(progn (tybeep) (exit eoc)))

(defmacro :currentline ()
  ;; returns the current line
  `(nth (add :ydisplay :ycursor) :buffer))

(defmacro :currentlines ()
  ;; returns the list of lines from the curent line
  `(nthcdr (add :ydisplay :ycursor) :buffer))

(defmacro :cursor (x y)
  ;; change the cursor position
  `(setq :xcursor ,x :ycursor ,y))


;;;
;;; Usefull predicates
;;;

(defmacro :bolp ()
  ;; begin of line
  `(eqn :xcursor 0)))

(defmacro :eolp ()
  ;; end of line
  `(ge :xcursor (slen (:currentline))))

(defmacro :bobp ()
  ;; begin of buffer
  `(and (eqn :ydisplay 0) (eqn :ycursor 0)))

(defmacro :eobp ()
  ;; end of buffer
  `(ge (add1 (add :ydisplay :ycursor)) (length :buffer)))

(defmacro :bosp ()
  ;; begin of screen
  `(eqn :ycursor 0))

(defmacro :eosp ()
  ;; end of screen
  `(ge :ycursor :ymax-1))


;;;
;;; Basic Commands
;;;

(defun :left ()
  ;; 1 char to the left
  (ifn (:bolp)
       (setq :column (setq :xcursor (sub1 :xcursor)))
       (:up) (:endline)))

(defun :right ()
  ;; 1 char to the right
  (ifn (:eolp)
       (if (ge :xcursor :xmax)
	   (:deadend)
	   (setq :column (setq :xcursor (add1 :xcursor))))
       (:begline) 
       (:down)))

(defun :endline ()
  ;; go to end of line
  (setq :xcursor (imin (slen (:currentline)) :xmax)
	:column :xcursor))

(defun :begline ()
  ;; go to begin of line
  (setq :xcursor 0 :column 0)))

(defun :up ()
  ;; 1 line up
  (if (:bobp)
      (:deadend)
      (ifn (:bosp)
	   (setq :ycursor (sub1 :ycursor)
		 :xcursor (imin :column
				(slen (:currentline))))
	   (setq :ydisplay (sub :ydisplay (add1 :ymax/4))
		 :ycursor (add :ycursor :ymax/4))
	   (when (lt :ydisplay 0)
		 (setq :ydisplay 0 :ycursor 0)))
      (setq :xcursor (imin :column (slen (:currentline))))))

(defun :down ()
  ;; 1 line down
  (if (:eobp)
      (:deadend)
      (if (:eosp)
	  (setq :ydisplay (add :ydisplay (add1 :ymax/4))
		:ycursor (sub :ycursor :ymax/4))
	  (setq :ycursor (add1 :ycursor)))
      (setq :xcursor (imin :column (slen (:currentline))))))

(defun :nextscreen ()
  ;; go to next screen
  (when (gt (add :ydisplay :ymax-1) (length :buffer))
	(:deadend))
  (setq :ydisplay (add :ydisplay :ymax-1))
  (:begline))

(defun :prevscreen ()
  ;; go to previous screen
  (when (lt (setq :ydisplay (sub :ydisplay  :ymax-1)) 0) 
	(setq :ydisplay 0))
  (:begline))

(defun :insertchar (c)
  ;; insert the character ,c> at the crrent position
  (let* ((l (:currentlines))
	 (s (catenate " "  (car l))))
    (if (ge :xcursor :xmax)
	(:deadend)
        (bltstring s 0 s 1 :xcursor)
	(sset s :xcursor c)
	(rplaca l s))
    (setq :column (setq :xcursor (add1 :xcursor)))
    (setq :modbuf t)))

(defun :deletechar ()
  ;; delete 1 character at the current cursor
  (let ((l (:currentlines)) 
	(s))
    (if (:eolp)
	(rplac l (catenate (car l) (cadr l)) (cddr l))
        (setq s (makestring (sub1 (slen (car l))) #\SP))
	(bltstring s 0 (car l) 0 :xcursor)
	(bltstring s :xcursor (car l) (add1 :xcursor))
	(rplaca l s)))
  (setq :modbuf t))

(defun :breakline ()
  ;; break the line in 2 parts at the cursor position
  (let ((l (:currentlines)))
    (ifn (:eolp)
	 (rplac l (substring (car l) 0 :xcursor)
		(cons (substring (car l) :xcursor) (cdr l)))
	 (rplacd l (cons "" (cdr l))))
    (setq :modbuf t)))

(defun :killine ()
  ;; kill the current line
  (setq :modbuf t)
  (cond ((:bobp)
	 (setq :kill (nextl :buffer))
	 (when (null :buffer)
	       (setq :buffer (list ""))))
	((:eobp)
	 (let ((l (nthcdr (sub1 (add :ydisplay :ycursor)) :buffer)))
	   (setq :kill (cadr l))
	   (rplacd l (cddr l))
	   (:up)))
	(t (let ((l (:currentlines)))
	     (setq :kill (car l))
	     (rplac l (cadr l) (cddr l)))))
  (when (lt (slen (:currentline)) :xcursor)
	(:endline))))


;;;
;;; Search Functions
;;;


(defun  :search ()
  ;; search a string in the current buffer
  (let ((s (tag eoc (:readname " String? ")))
	(f (:currentlines))
	(y 0)
	(r))
    (cond ((null s) (exit eoc))
	  ((eqstring s "") (setq s :searchstrg))
	  (t (setq :searchstrg s)))
    (setq r (index s (nextl f) :xcursor))
    (untilexit search
               (cond
		(r (:gotoabs (add r (slen s)) y)
		   (exit search))
		((null f) (:deadend))
		(t (setq r (index s (nextl f) 0)
			 y (add1 y)))))))

(defun :gotoabs (x y)
  ;; go to <x> <y> position in the buffer.
  ;; <y> is relative to :ycursor
  ;; If outside the visible screen, change the current screen.
  (setq :xcursor x :column x)
  (let ((y (add :ycursor y)))
    (if (gt y :ymax-1)
	(setq :ydisplay (sub (add :ydisplay y) :ymax/2)
	      :ycursor :ymax/2)
        (setq :ycursor y))))


(defun :matchparent (c)
  ;; match the parenthesis (Lisp mode). <c> is a parenthesis
  ;; or a bracket.
  (slet ((:fm (:currentlines))
	 (:x :xcursor)
	 (:y 0)
	 (:l (nextl :fm))
	 (:s (slen :l))
	 (:char))
	(until (eqn (:curlexnext) c))
	(:gotoabs :x :y)))

(defun :curlexnext ()
  (selectq (:curchar)
	   (#/( (until (eqn (:curlexnext) #/))) #/()
	   (#/[ (until (eqn (:curlexnext) #/])) #/[)
	   (#/| (until (eqn (:curchar) #/|))    #/|)
           (#/" (until (eqn (:curchar) #/"))    #/")
           (#/# (selectq (:curchar)
                     ((#/( #/[ #/") (:curlexnext))
                     (#// (:curchar) #//)
                     (t :char)))
           (#/; (setq :x :s) (:curlexnext))
           (t :char)))

(defun :curchar ()
  (while (ge :x :s)
    (if (null :fm)
	(:deadend)
        (setq :x 0
	      :y (add1 :y)
	      :l (nextl :fm)
	      :s (slen :l))))
  (setq :char (sref :l :x)
	:x    (add1 :x))
  :char)


;;;
;;; Functions on files
;;;

(defun :readfile (f)
  ;; read a file, returns a list (non empty) of lines
  (let ((ll)
	(in (probefile f)))
    (if in
	;; an existing file
	(with ((inchan (openi f)))
	      (inmax 0)
	      (untilexit eof (newl ll (readstring)))
	      (if (consp ll) (nreverse ll) (list "")))
      ;; a new file
      (tybeep)          ;  to indicate a creation
      (list ""))))

(defun :writefile (f)
  ;; write a file
  (let ((out (catcherror () (openo f))))
    (unless (consp out) (:deadend))
    (with ((outchan (car out))
	   (lmargin 0)
	   (rmargin (sub1 (slen (outbuf)))))
	  (let ((:xcursor :xcursor)
		(:ycursor :ycursor)
		(#:system:print-for-read ()))
	    (:cursor 0 :ymax)
	    (mapc 'print :buffer))
	  (close (outchan)))    ; Redde Caesari quae sunt Caesaris !
    (setq :modbuf ())))

(defun  :insertfile ()
  ;; Insert a file a the cursor position
  (let ((l (:currentlines)))
    (rplacd l (nconc (:readfile (:readname " File? "))
		     (cdr l)))
    (setq :modbuf t)))

(defun :backup ()
  ;; change the name of :file   with :file.BAK
  ;; to be used before a :write
  (when (probefile :file)
	(let ((i (index "." :file)) (:backup))
	  (setq :backup 
		(catenate (if i (substring :file 0 i) :file) ".BAK"))
	  (renamefile :file :backup))))

(defun  :help ()
  ;; display the help screen
  (let ((:ycursor :ycursor)
	(y :-xmax+1)
	(in))
    (unless (catcherror () 
			(setq in (openi (catenate #:system:llib-directory
						  (if #:system:foreign-language
						      "pepeahelp"
						      "pepehelp")
						  #:system:lelisp-extension))))
	    (:deadend))
    (:clrscreen)
    (with ((inchan in))
	  (fillstring :nscreen 0 #\SP)
	  (untilexit eof
		     (bltstring :nscreen (setq y (add y :xmax+1))
				(readstring) 0 :xmax+1)))
    (:fillminibuf 0 "HELP File"))
  ;; wait any input character to go
  (tag eoc (:more))
  (:clrscreen))


;;;
;;; Others Functions
;;;

(defun :evalbuffer ()
  ;; Evaluates all the buffer (without leave PEPE)
  (let ((#:sys-package:itsoft ':evalbuffer)
	(:buffer :buffer) ; sauve the buffer
	(:xy :-xmax+1))
    (with ((lmargin 0)
	   (rmargin :xmax-1))
	  (tycursor 0 0) 
	  (tyflush)
	  (catcherror (untilexit eoc (print "=> " (eval (read)))))
	  (teread)
	  (:more))))

(defun :evalbuffer:bol ()
  ;; new input line for :evalbuffer
  (ifn :buffer
       (exit eoc)
       (let* ((l (nextl :buffer)) 
	      (n (slen l)))
	 (bltstring (inbuf) 0 l)
	 (sset (inbuf) n #\CR)
	 (sset (inbuf) (setq n (add1 n)) #\LF)
	 (inmax (setq n (add1 n))))))

(defun  :evalbuffer:syserror (f m b)
  (printerror f m b)
  (exit eoc))

(defun  :evalbuffer:eol ()
  ;; feed a new line for :evalbufer
  (fillstring :nscreen (setq :xy (add :xy :xmax+1)) #\SP :xmax+1)
  (bltstring :nscreen :xy (outbuf) 0 (outpos))
  (fillstring (outbuf) 0 #\SP (outpos))
  (outpos (lmargin))
  (when (ge :xy (mul :xmax+1 :ymax-1))
	(:more) 
	(setq :xy :-xmax+1)))


;;;
;;; Key Initialization
;;;

(dmd defkey (k . f)  `(newl :commands (cons ,k ',f)))

(progn

        (defkey  #^A          (:begline))
        (defkey  #:tty:left   (:left))
        (defkey  #^C          (exit pepe))
        (defkey  #^D          (:deletechar))
        (defkey  #^E          (:endline))
        (defkey  #:tty:right  (:right))
        (defkey  #^G          (:deadend))
        (defkey  #^H          (:left) 
                              (:cursor :xcursor :ycursor) 
                              (:deletechar))
        (defkey  #^K          (:killine))
        (defkey  #^L          (:clrscreen))
        (defkey  #^M          (:breakline) (:right))
        (defkey  #:tty:down   (:down))
        (defkey  #^O          (:breakline))
        (defkey  #:tty:up     (:up))
        (defkey  #^S          (:search))
        (defkey  #^V          (:clrscreen) (:nextscreen))
        (defkey  #^Y          (:breakline)
                              (:cursor :xcursor :ycursor)
                              (mapc ':insertchar 
                                    (pname :kill)))
        (defkey  #$7F         (:left) 
                              (:cursor :xcursor :ycursor) 
                              (:deletechar))
        (defkey  27           (:escommand))
)

(df defesckey (k . f)     (newl :escommands (cons k f)))

(progn

        (defesckey  #/E    (:evalbuffer))
        (defesckey  #/F    (setq :file 
                                 (:readname " File name? ")))
        (defesckey  #/I    (:insertfile))
        (defesckey  #/R    (setq :file (:readname " File? ")
                                 :buffer (:readfile :file)
                                 :xcursor 0 :ycursor 0
                                 :column 0 :ydisplay 0
                                 :modbuf ()))
        (defesckey  #/S    (:backup) (:writefile :file))
        (defesckey  #/V    (:clrscreen) (:prevscreen))
        (defesckey  #/W    (:writefile (:readname " File? ")))
        (defesckey  #/X    (apply (or (getfn '#.#:sys-package:colon 
                                             (concat (:readname
                                                         " Function? ")))
                                      ':deadend)
                                  ()))
        (defesckey  #/Z    (:writefile :file)
                           (tycursor 0 :ymax)
                           (loadfile :file t)
                           (exit pepe))
        (defesckey  #/)    (:matchparent #/())
        (defesckey  #/]    (:matchparent #/[))
        (defesckey  #/<    (:clrscreen)
                           (setq :ydisplay 0 :xcursor 0 :ycursor 0 :column 0))
        (defesckey  #/>    (:clrscreen)
                           (setq :ycursor (length :buffer)
                                 :ydisplay (imax 0 (sub :ycursor :ymax/2))
                                 :ycursor (sub1 (sub :ycursor :ydisplay)))
                           (:endline))
        (defesckey  #/?    (:help))
))

;;;
;;; Collect the space used by PEPE
;;;

(defun  pepend ()
  ;; remove all the PEPE's functions
  (mapc 'remob (oblist '#.#:sys-package:colon))
  ;; no more feature
  (rem-feature 'pepe)
  ;; PEPE is aulotload again.
  (libautoload pepe pepe pepefile))
