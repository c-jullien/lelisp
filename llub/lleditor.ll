; .EnTete "Le-Lisp (c) version 15.2" " " "Editor"
; .EnPied "editor.ll" "%" " "
; .SuperTitre "Editor"
;
; .Centre "*****************************************************************"
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; .Centre "$Header: /usr/cvs/lelisp/llub/lleditor.ll,v 1.1 2006/12/09 10:41:07 jullien Exp $"

(unless (>= (version) 15.2)
     (error 'load 'erricf 'editor))

; .Section "Editor"
; .SSection "Contenu."
;      Ge`re le display d'un editeur de type Edit.
;      Ge`re une table d'association caracte`re-fonction.
;      Ge`re le lancement d'une cle'.
;      De'finit les commandes demandant un argument.
;      Definit le redisplay.
;      Il n'y a donc pas de fontion toplevel.
; 
;      Un positionnement est valide pour le redisplay dans les conditions
; suivantes :
;      xpos <= bx <= xpos + w
;      ypos <= by <= ypos + h
;      Le comportement par de'faut du redisplay quand les coordonne'es en
; haut a` gauche de l'e'cran sont invalides par rapport aux coordonne'es
; du caracte`re courant est d'ajuster la colonne et/ou la ligne du curseur
; au milieu de l'e'cran.
;      Reste a` faire :
;  - Connecter le compacteur.
;  - Faire qu'une commande soit une suite de cle pour le undo et le ^U.
;  - Faire les macros.
;  - Faire les autoloads

; .SSection "De'claration"
(defvar #:sys-package:colon '#:edit:editor)

(add-feature 'editor)

(defstruct #.#:sys-package:colon
   (sender ())
   (query  ':edit-query)
   (file   "test.ll")
   (drawcursor ':edit-drawcursor)
   (redisplaystring ':edit-redisplaystring)
   (redisplaycleol ':edit-redisplaycleol)
   (screen ())
   (cmd    ())
   (ecmd   ())
   (xcmd   ())
   (state  0)
   (w      80)
   (h      20)
   (xcursor 0)
   (ycursor 0)
   (xpos   0)
   (ypos   0) )

(de :prin (e) (prin "<" (:w e) "," (:h e) ">"))

; .SSection "Les macros locales."
(defmacro fmax (x y)
   `(let ((:k ,y))
      (or (ge ,x :k) :k) ))

(defmacro fmin (x y)
   `(let ((:k ,y))
      (or (le ,x :k) :k) ))

(defmacro :nlgn (e)
   `(#:buffer:nolgn (:pbuffer ,e)) )

(defmacro :buf (e)
   `(#:buffer:buffer (:pbuffer ,e)) )

(defmacro :s (e)
   `(vref (:buf ,e) (:cury ,e)) )

(defmacro :modif (e . a)
   (if a
      `(#:buffer:modif (:pbuffer ,e) ,(car a))
      `(#:buffer:modif (:pbuffer ,e)) ))

(defun :add-charp (cn)
   (chrpos cn
         " !""#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~" ))

; .SSection "Le moteur d'e'dition."
(defun trap-editor (n e a)
   (ifn (subtypep (type-of e) '#.#:sys-package:colon)
      (error 'trap-editor "Argument is not an editor." e)
      (selectq n
         (100 (:win-clear e))

         (101 (:win-right e))
         (102 (:win-left e))
         (103 (:win-down e))
         (104 (:win-up e))
         (105 (:win-next e))
         (106 (:win-previous e))
         (107 (:win-cur-top e))
         (108 (:win-ygoto e a))
         (109 (:win-xgoto e a))

         (110 (:cur-win-top e))
         (111 (:cur-win-buttom e))
         (112 (:cur-win-ygoto e a))
         (113 (:cur-win-xgoto e a))

         (114 (:state e 1))
         (115 (:state e 2))

         (116 (:query-readfile e))
         (117 (:query-writefile e))
         (118 (:query-insertfile e))
         (119 (:query-search e))
         (120 (:query-rsearch e))
         (121 (:savefile e))
         (122 (:query-goto-line-number e))

         (123 (exit eoc "This key has no global fonction"))

         (124 (:exp-eval e))
         (125 (:exp-eval-print e)) )))

; .SSection "Initialisation de la fene^tre de visualisation."
(defun init-editor (e obj w h)
   (:screen e (makestring (mul w h) #\SP))
   (:modif e (add 1 (mul 2 (div (:modif e) 2))))
   (:sender e obj)
   (:w e w)
   (:h e h) )

(defun :win-clear (e)
   (:modif e (add 1 (mul 2 (div (:modif e) 2))))
   (fillstring (:screen e) 0 #\SP) )

; .SSection "De'placement de la fene^tre de visualisation."
(defun :win-right (e)
   (unless (eq (:xpos e) 0)
      (:xpos e (sub1 (:xpos e)))
      (unless (lt (:curx e) (add (:xpos e) (:w e)))
         (:curx e (add (:xpos e) (div (:w e) 2))) )))

(defun :win-left (e)
   (:xpos e (add1 (:xpos e)))
   (unless (le (:xpos e) (:curx e))
      (:curx e (add (:xpos e) (div (:w e) 2))) ))

(defun :win-down (e)
   (unless (eq (:ypos e) 0)
      (:ypos e (sub1 (:ypos e)))
      (unless (lt (:cury e) (add (:ypos e) (:h e)))
         (:cury e (add (:ypos e) (div (:h e) 2))) )))

(defun :win-up (e)
   (unless (and (eq (:cury e) (:ypos e)) (eq (:cury e) (:nlgn e)))
      (:ypos e (add1 (:ypos e)))
      (unless (le (:ypos e) (:cury e))
         (:cury e (fmin (add (:ypos e) (div (:h e) 2)) (:nlgn e))) )))

(defun :win-next (e)
   (:ypos e (fmin (add (:ypos e) (div (mul 3 (:h e)) 4)) (:nlgn e)))
   (:cury e (:ypos e))
   (:curx e (:xpos e)) )

(defun :win-previous (e)
   (:ypos e (fmax (sub (:ypos e) (div (mul 3 (:h e)) 4)) 0))
   (:cury e (:ypos e))
   (:curx e (:xpos e)) )

(defun :win-cur-top (e)
   (:ypos e (:cury e)) )

(defun :win-ygoto (e a)
   (when (and (ge a 0) (le a (:nlgn e)))
      (:ypos e a)
      (unless (and (le (:ypos e) (:cury e))
                   (lt (:cury e) (add (:ypos e) (:h e))) )
         (CUR-YGOTO e (add (:ypos e) (div (:h e) 2))) )))

(defun :win-xgoto (e a))

; .SSection "De'placement du curseur dans la fene^tre de visualisation."
(defun :cur-win-top (e)
   (:curx e (:xpos e))
   (:cury e (:ypos e)) )

(defun :cur-win-buttom (e)
   (:cury e (fmin (add (:ypos e) (sub1 (:h e))) (:nlgn e)))
   (:curx e (fmin (add (:xpos e) (sub1 (:w e))) (sref (:s e) 0))) )

(defun :cur-win-ygoto (e y)
   (CUR-YGOTO e (add (:ypos e) y)) )

(defun :cur-win-xgoto (e x)
   (CUR-XGOTO e (add (:xpos e) x)) )

; .SSection "Les commandes demandant un argument"
(defun :query-readfile (e)
   (let ( (f (funcall (:query e) e "Read file: " t)) )
      (when f
         (ifn (setq f (probepathf f))
            "File not found."
            (:file e f)
            (FILE-READ e f) ))))

(defun :query-writefile (e)
   (let ( (f (funcall (:query e) e "Write file: " t)) )
      (when f
         (if (equal f "") (setq f (:file e)) (:file e f))
         (:writefile2 e f) )))

(defun :savefile (e)
   (:writefile2 e (:file e)) )

(defun :writefile2 (e f)
   (let ( (write? (catcherror () (opena f))) )
      (ifn write?
         (catenate "Can't write file " f)
         (close (car write?))
         (FILE-PRINT e f) )))

(defun :query-insertfile (e)
   (let ( (f (funcall (:query e) e "Insert file: " t)) )
      (when f
         (ifn (setq f (probepathf f))
            "File not found."
            (FILE-INSERT e f) ))))

(defun :query-search (e)
   (let ( (s (funcall (:query e) e "Search for : " t)) )
      (when s (WORD-SEARCH e s)) ))

(defun :query-rsearch (e)
   (let ( (s (funcall (:query e) e "Reverse search for : " t)) )
      (when s (WORD-REVERSE-SEARCH e s)) ))

(defun :query-goto-line-number (e)
   (let ( (n (funcall (:query e) e "Goto line : " t)) )
      (when n
         (setq n (implode (explode n)))
         (if (fixp n)
            (CUR-YGOTO e n)
            "Bad line number" ))))

; .SSection "Le redisplay."
(defun edit-redisplay (e)
   (:edit-redisplayscreen e (:buf e) (:nlgn e) (:screen e)
      (:w e) (:h e) (:ypos e) (:xpos e)
      (:redisplaystring e) (:redisplaycleol e) ))

(defun :edit-redisplayscreen (e buf maxln map w h ln bx f1 f2)
   (let ( s max1 ibx max2 x0 (y0 0) i (n 0) )

      (repeat h
         ; Init chaine source et marge de comparaison dans chaine but.
         (if (or (gt ln maxln) (eq (setq s (vref buf ln)) 0))
            (setq max1 n)
            (setq max1 (add n (fmin w (fmax 0 (sub (sref s 0) bx))))) )
         ; Init des marges et compteurs.
         (setq max2 (add n w) x0 0 i n ibx (add1 bx))
         ; On avance au premier caracte`re diffe'rent.
         (while (and (gt max1 n) (eq (sref map n) (sref s ibx)))
            (setq n (add1 n) ibx (add1 ibx)) )
         (setq x0 (add x0 (sub n i)))
         ; Si diffe'rence affiche TOUT le reste de la chaine source.
         (unless (eq max1 n)
           (setq i (sub max1 n))
           (bltstring map n s ibx i)
           (funcall f1 e x0 y0 s ibx i)
           (setq x0 (add x0 i) n max1) )
         ; On avance tant qu'il y a des caracte`es d'espacement.
         (setq i n)
         (while (and (gt max2 n) (eq (sref map n) #\SP))
            (setq n (add1 n)))
         (setq x0 (add x0 (sub n i)))
         ; Si diffe'rent envoie UNE demande d'effacement de ligne.
         (unless (eq max2 n)
           (setq i (sub max2 n))
           (fillstring map n #\SP i)
           (funcall f2 e x0 y0 i)
           (setq n max2) )
         ; Ligne suivante.
         (setq ln (add1 ln) y0 (add1 y0)) )))

(defun :edit-redisplaystring (e x y s pos n)
   (tycursor x y)
   (repeat n
      (tyo (sref s pos))
      (setq pos (add1 pos)) ))

(defun :edit-redisplaycleol (e x y n)
   (tycursor x y)
   (tycleol) )

(defun :win-check (e)
   (let ( (yp (:ypos e)) (xp (:xpos e)) (bx (:curx e)) (by (:cury e))
          (w (:w e)) (h (:h e)) )
      ; (CUR-YGOTO e by)
      ; (setq by (:cury e))
      ; (CUR-XGOTO e bx)
      ; (setq bx (:curx e))
      (unless (and (le xp bx) (lt bx (add xp w)))
              (:xpos e (fmax (sub bx (div w 2)) 0)) )
      (unless (and (le yp by) (lt by (add yp h)))
              (:ypos e (fmax (sub by (div h 2)) 0)) )))

; .SSection "Les commandes"
; .SSSection "Les tables d'association cle/fonction"
(defvar editor-simple-command  (makevector 128 123))
(defvar editor-escape-command (makevector 128 123))
(defvar editor-extend-command (makevector 128 123))

(defun bind-to-key (cle fnt)
   (if (fixp cle)
      (vset editor-simple-command cle fnt)
      (error 'bind-to-key "Bad key" cle) ))

(defun bind-to-ekey (cle fnt)
   (if (fixp cle)
      (vset editor-escape-command cle fnt)
      (error 'bind-to-ekey "Bad key" cle) ))

(defun bind-to-xkey (cle fnt)
   (if (fixp cle)
      (vset editor-extend-command cle fnt)
      (error 'bind-to-xkey "Bad key" cle) ))

(defun local-bind-to-key (e cle fnt)
   (ifn (subtypep (type-of e) '#.#:sys-package:colon)
      (error 'local-bind-to-key "N'est pas un editeur" e)
      (:cmd e (cons (cons cle fnt) (:cmd e))) ))

(defun local-bind-to-ekey (e cle fnt)
   (ifn (subtypep (type-of e) '#.#:sys-package:colon)
      (error 'local-bind-to-ekey "N'est pas un editeur" e)
      (:ecmd e (cons (cons cle fnt) (:ecmd e))) ))

(defun local-bind-to-xkey (e cle fnt)
   (ifn (subtypep (type-of e) '#.#:sys-package:colon)
      (error 'local-bind-to-xkey "N'est pas un editeur" e)
      (:xcmd e (cons (cons cle fnt) (:xcmd e))) ))

; .SSSection "Le traitement des commandes"
(defun edit-command (e cn)
   (ifn (subtypep (type-of e) '#.#:sys-package:colon)
      (error 'edit-command "N'est pas un editeur" e)
      (tag eoc
         (selectq (:state e)
            (0 (:edit-simple-command e cn))
            (1 (:edit-escape-command e cn))
            (2 (:edit-extend-command e cn)) ))))

(defun :edit-simple-command (e cn)
   (let ( (cmd (cassq cn (:cmd e))) )
      (cond
         (cmd (:edit-all-command cmd e))
         ((not (fixp cn)))
         ((:add-charp cn) (char-insert e cn))
         ((lt cn (vlength editor-simple-command))
            (:edit-all-command (vref editor-simple-command cn) e) ))))

(defun :edit-escape-command (e cn)
   (let ( (cmd (cassq cn (:ecmd e))) )
      (:state e 0)
      (cond
         (cmd (:edit-all-command cmd e))
         ((not (fixp cn)))
            ((lt cn (vlength editor-escape-command))
            (:edit-all-command (vref editor-escape-command cn) e) ))))

(defun :edit-extend-command (e cn)
   (let ( (cmd (cassq cn (:xcmd e))) )
      (:state e 0)
      (cond
         (cmd (:edit-all-command cmd e))
         ((not (fixp cn)))
         ((lt cn (vlength editor-extend-command))
            (:edit-all-command (vref editor-extend-command cn) e) ))))

(defun :edit-all-command (fnt e)
   (cond
      ((fixp fnt)
         (if (lt fnt 100)
            (trap-edit fnt e ())
            (trap-editor fnt e ()) ))
      ((symbolp fnt) (funcall fnt e))
      ((not (consp fnt)))
      ((eq (car fnt) 'lambda) (funcall fnt e))
      ((symbolp (car fnt))
         (funcall (car fnt) e (cdr fnt)) )))

; .SSection "Commande puis redisplay"
(defun edit-command-redisplay (e cn)
   (let ( (rep ()) (ox (:xpos e)) (oy (:ypos e)) ocx ocy ncx ncy )
      (when cn (funcall (:query e) e () ()))
      (:modif e (mul 2 (div (:modif e) 2)))
      (ifn cn
         (:modif e (add 1 (:modif e)))
         (setq rep (edit-command e cn))
         (when (stringp rep) (funcall (:query e) e rep ())) )
      (:win-check e)
      (setq ocx (:xcursor e) ocy (:ycursor e))
      (:xcursor e (setq ncx (sub (:curx e) (:xpos e))))
      (:ycursor e (setq ncy (sub (:cury e) (:ypos e))))
      (cond
         ((or (neq oy (:ypos e)) (neq ox (:xpos e)) (eq (rem (:modif e) 2) 1))
            (funcall (:drawcursor e) e ocx ocy ())
            (edit-redisplay e)
            (funcall (:drawcursor e) e ncx ncy t) )
         ((lt ocx 0)
            (funcall (:drawcursor e) e ncx ncy t) )
         ((or (neq ocx ncx) (neq ocy ncy))
            (funcall (:drawcursor e) e ocx ocy ())
            (funcall (:drawcursor e) e ncx ncy t) ))))

(defun :edit-drawcursor (e x y f)
   (when f (tycursor x y)) )

(defun :edit-query (obj msg fg) ())

; .SSection "Evaluation dans un e'diteur"
(defvar :cure)
(defmacro edit-eval-redisplay (e exp)
   `(let ( (#:system:redef-flag t)
           (#:sys-package:itsoft
              (cons '#.#:sys-package:colon #:sys-package:itsoft) )
           (:cure ,e) )
         (prog1 (tag eoc ,exp)
                (edit-command-redisplay :cure ()) )))

(defun :bol ()
   (let ( (e :cure) )
      (if (fixp (inchan))
         (super-itsoft '#.#:sys-package:colon 'bol ())
         (line-bol e) )))

(defun :eol ()
   (let ( (e :cure) )
      (if (fixp (outchan))
         (super-itsoft '#.#:sys-package:colon 'eol ())
         (line-eol e) )))

(defun :syserror (:f :m :b)
   (exit eoc
      (if (debug)
         (let ( (#:sys-package:itsoft (cdr #:sys-package:itsoft)) )
            (super-itsoft '#.#:sys-package:colon 'syserror (list :f :m :b)))
         (edit-print-query :cure
            (let ( (#:sys-package:itsoft 'edit-print-query) )
               (tag edit-print-query (printerror :f :m :b)) )))))

(defun edit-print-query (e msg)
   (let ( (#:sys-package:itsoft 'edit-print-query) )
      (setq msg (tag edit-print-query (print msg))) )
   (funcall (:query e) e msg ()) )

(defun #:edit-print-query:eol ()
   (exit edit-print-query
      (prog1
         (substring (outbuf) 0 (outpos))
         (outpos (lmargin)) )))

(defun :exp-eval (e)
   (BEGIN-EXPR e)
   (edit-eval-redisplay e (eval (read))) )


(defun :exp-eval-print (e)
   (BEGIN-EXPR e)
   (edit-print-query e (edit-eval-redisplay e (eval (read)))) )

; .SSection "Les commandes par de'faut"
(bind-to-key #^A 005)
(bind-to-key #^B 007)
(bind-to-key #^D 014)
(bind-to-key #^E 006)
(bind-to-key #^F 008)
(bind-to-key #^H 015)
(bind-to-key #^K 029)
(bind-to-key #^M 028)
(bind-to-key #^N 010)
(bind-to-key #^O 027)
(bind-to-key #^P 009)
(bind-to-key #^R 120)
(bind-to-key #^S 119)
(bind-to-key #^T 041)
(bind-to-key #^V 105)
(bind-to-key #^W 036)
(bind-to-key #^X 115)
(bind-to-key #^Y 025)
(bind-to-key #^Z 104)
(bind-to-key #\esc 114)
(bind-to-key #\del 015)

(bind-to-ekey #/b 021)
(bind-to-ekey #/d 017)
(bind-to-ekey #/e 124)
(bind-to-ekey #/f 020)
(bind-to-ekey #/h 018)
(bind-to-ekey #/n 122)
(bind-to-ekey #/p 125)
(bind-to-ekey #/s 119)
(bind-to-ekey #/v 106)
(bind-to-ekey #/w 035)
(bind-to-ekey #/z 103)
(bind-to-ekey #/) 44)
(bind-to-ekey #/( 45)
(bind-to-ekey #/> 004)
(bind-to-ekey #/< 003)
(bind-to-ekey #/, 110)
(bind-to-ekey #/. 111)
(bind-to-ekey #/! 107)
(bind-to-ekey #\esc 024)

(bind-to-xkey #/s 121)
(bind-to-xkey #/R 042)
(bind-to-xkey #/W 043)
(bind-to-xkey #^A 033)
(bind-to-xkey #^I 118)
(bind-to-xkey #^R 116)
(bind-to-xkey #^W 117)
(bind-to-xkey #^X 034)

