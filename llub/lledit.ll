; .EnTete "Le-Lisp (c) version 15.2" " " "Noyau d'editeur: Edit"
; .EnPied "edit.ll" "%" " "
; .SuperTitre "Edit"
;
; .Centre "*****************************************************************"
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; .Centre "$Header: /usr/cvs/lelisp/llub/lledit.ll,v 1.1 2006/12/09 10:41:07 jullien Exp $"

(unless (>= (version) 15.2)
     (error 'load 'erricf 'edit))

; .Section "Edit"
; .SSection "Contenu."
;      Edit est le noyau pouvant e^tre partage' par plusieurs type d'e'diteur
; de texte. Ceci permet de gagner de la place symbole pour des editeurs
; de type PEPE. Un exemple d'utilisation se trouve dans le fichier medite.ll
;      Reste a` faire:
;  - Trouver la sous-expression de niveau N qui contient le curseur.
;  - Rajouter une marque auxilliaire non disponible par cle'.
;  - Reflechir au undo.
;  - Reflechir a la vrai mark qui ne soit pas un positionnement absolu.

; .SSection "De'claration."
(defvar #:sys-package:colon 'edit)

(add-feature 'edit)

(defstruct buffer
   (buffer  (vector #:edit:null-strg))
   (modif   3)
   (nolgn   0)
   (markx   ())
   (marky   ())
   (ldo     0) )

(defstruct #.#:sys-package:colon
   (pbuffer (#:buffer:make))
   (curx    0)
   (cury    0) )


; .SSection "Les variables globales."
(defvar :search-strg ())

(defvar :null-strg (makestring 1 0))

(defvar :kill-buffer ())

(defvar :warning #[
      "Argument is not an editor."              ; 0
      "You're at the beginning of the buffer."  ; 1
      "You're at the end of the buffer."        ; 2
      "Null search string."                     ; 3
      "Can't find it."                          ; 4
      "Mark not set."                           ; 5
      "Non-existant kill buffer."               ; 6
      "New file."                               ; 7
      "File not found."                         ; 8
      "Can't write file"                        ; 9
      "Mark set."                               ; 10
      "Read-only buffer."                       ; 11
   ])

; .SSection "Les macros locales."
(defmacro :eolp (e)
   `(eq (:curx ,e) (sref (:s ,e) 0)) )

(defmacro :bolp (e)
   `(eq (:curx ,e) 0) )

(defmacro :eobp (e)
   `(eq (:cury ,e) (:nlgn ,e)) )

(defmacro :bobp (e)
   `(eq (:cury ,e) 0) )

(defmacro :buf (e . a)
   (if a
      `(#:buffer:buffer (:pbuffer ,e) ,(car a))
      `(#:buffer:buffer (:pbuffer ,e)) ))

(defmacro :modif (e . a)
   (if a
      `(#:buffer:modif (:pbuffer ,e) ,(car a))
      `(#:buffer:modif (:pbuffer ,e)) ))

(defmacro :nlgn (e . a)
   (if a
      `(#:buffer:nolgn (:pbuffer ,e) ,(car a))
      `(#:buffer:nolgn (:pbuffer ,e)) ))

(defmacro :set-the-mark (e x y)
   `(let ( (b (:pbuffer ,e)) )
      (#:buffer:markx b ,x)
      (#:buffer:marky b ,y) ))

(defmacro :markx (e)
   `(#:buffer:markx (:pbuffer ,e)) )

(defmacro :marky (e)
   `(#:buffer:marky (:pbuffer ,e)) )

(defmacro :ldo (e . a)
   (if a
      `(#:buffer:ldo (:pbuffer ,e) ,(car a))
      `(#:buffer:ldo (:pbuffer ,e)) ))

(defmacro :s (e)
   `(vref (:buf ,e) (:cury ,e)) )

(defmacro fmax (x y)
   `(let ((:k ,y))
      (or (ge ,x :k) :k) ))

(defmacro fmin (x y)
   `(let ((:k ,y))
      (or (le ,x :k) :k) ))

(defmacro :ncpname (cn)
   `(neq (typecn ,cn) 'cpname) )

(defmacro :msg (n)
   `(vref :warning ,n) )

; .SSection "Le moteur d'e'dition."
(defun trap-edit (n e a)
   (ifn (subtypep (type-of e) '#.#:sys-package:colon)
      (error 'trap-edit (:msg 0) e)
      (prog1
         (selectq n
            (00 (:buf-new e))
            (01 (:buf-link e a))
            (02 (:buf-unlink e))

            (03 (:cur-top e))
            (04 (:cur-buttom e))
            (05 (:cur-begline e))
            (06 (:cur-endline e))
            (07 (:cur-left e))
            (08 (:cur-right e))
            (09 (:cur-up e))
            (10 (:cur-down e))
            (11 (:cur-ygoto e a))
            (12 (:cur-xgoto e a))

            (13 (:char-insert e a))
            (14 (:char-delete e))
            (15 (:char-delete-back e))

            (16 (:word-insert e a))
            (17 (:word-delete e))
            (18 (:word-delete-back e))
            (19 (:word-first-char e))
            (20 (:word-last-char e))
            (21 (:word-left e))
            (22 (:word-search e a))
            (23 (:word-reverse-search e a))
            (24 (:word-get-symbol e))

            (25 (:line-insert e))
            (26 (:line-new e a))
            (27 (:line-break e))
            (28 (:line-return e))
            (29 (:line-delete e))
            (30 (:line-get e))
            (31 (:line-bol e))
            (32 (:line-eol e))

            (33 (:mark-set e))
            (34 (:mark-exchange e))
            (35 (:mark-copy e))
            (36 (:mark-delete e))

            (37 (:file-read e a))
            (38 (:file-insert e a))
            (39 (:file-print e a))

            (40 (:begin-expr e))

            (41 (:char-transpose e))
            (42 (:buf-readonly e))
            (43 (:buf-readwrite e))

	    (44 (:matchnext e))
	    (45 (:matchprevious e))

            (99 (:undo e)) )


         (:ldo e n) )))

; .SSection "Utilisation ge'ne'rale du buffer."
(defun :buf-new (e)
   (:buf e (vector :null-strg))
   (:nlgn e (:curx e (:cury e 0)))
   (:set-the-mark e () ())
   (:modif e 3) )

(defun :buf-link (e a)
   (ifn (subtypep (type-of a) '#.#:sys-package:colon)
      (error 'trap-edit (:msg 0) e)
      (:curx e (:curx a))
      (:cury e (:cury a))
      (:pbuffer e (:pbuffer a))
      (:modif e (:modif a)) ))

(defun :buf-unlink (e)
   (:pbuffer e (#:buffer:make))
   (:curx e (:cury e 0)) )

(defun :buf-readonly (e)
   (:modif e (rem (:modif e) 2)) )

(defun :buf-readwrite (e)
   (:modif e (add 2 (rem (:modif e) 2))) )

(defun :check-modif (e)
   (let ( (m (:modif e)) )
      (when (le m 1) (exit eoc (:msg 11)))
      (:modif e 5) ))

; .SSection "De'placement du curseur."
(defun :cur-top (e)
   (:curx e (:cury e 0)) )

(defun :cur-buttom (e)
   (:cury e (:nlgn e))
   (:curx e (sref (:s e) 0)) )

(defun :cur-begline (e)
   (:curx e 0) )

(defun :cur-endline (e)
   (:curx e (sref (:s e) 0)) )

(defun :cur-left (e)
   (ifn (:bolp e)
      (:curx e (sub1 (:curx e)))
      (when (:bobp e) (exit eoc (:msg 1)))
      (:cur-up e)
      (:cur-endline e) ))

(defun :cur-right (e)
   (ifn (:eolp e)
      (:curx e (add1 (:curx e)))
      (when (:eobp e) (exit eoc (:msg 2)))
      (:cur-begline e)
      (:cur-down e) ))

(defun :cur-up (e)
   (when (:bobp e) (exit eoc (:msg 1)))
   (:cury e (sub1 (:cury e)))
   (when (gt (:curx e) (sref (:s e) 0)) (:cur-endline e)) )

(defun :cur-down (e)
   (when (:eobp e) (exit eoc (:msg 2)))
   (:cury e (add1 (:cury e)))
   (when (gt (:curx e) (sref (:s e) 0)) (:cur-endline e)) )

(defun :cur-ygoto (e y)
   (:cury e (fmax (fmin y (:nlgn e)) 0))
   (:curx e (fmax (fmin (:curx e) (sref (:s e) 0)) 0)) )

(defun :cur-xgoto (e x)
   (:curx e (fmax (fmin x (sref (:s e) 0)) 0)) )

; .SSection "Ope'ration sur un caracte`re."
(defun :char-new (e n)
   (:check-modif e)
   (let ( (s (:s e)) )
      (when (le (slength s) (add (sref s 0) n))
         (setq s
            (bltstring
               (makestring (add (slength s) (fmax n 11)) #\SP) 0 s 0 ))
         (vset (:buf e) (:cury e) s) )
      (bltstring s (add1 (add (:curx e) n)) s (add1 (:curx e)))
      (sset s 0 (add (sref s 0) n)) ))

(defun :char-insert (e cn)
   (:char-new e 1)
   (sset (:s e) (add1 (:curx e)) cn)
   (:cur-right e) ))

(defun :char-delete (e)
   (:check-modif e)
   (let ( (s (:s e)) (x (add1 (:curx e))) (y (:cury e)) )
      (cond
         ((eq (sref s 0) 0)
            (when (eq y (:nlgn e)) (exit eoc (:msg 2)))
            (bltvector (:buf e) y (:buf e) (add1 y))
            (:nlgn e (sub1 (:nlgn e))) )
         ((eq (sub1 x) (sref s 0))
            (when (eq y (:nlgn e)) (exit eoc (:msg 2)))
            (let ( (ss (vref (:buf e) (add1 y))) )
               (bltvector (:buf e) (add1 y) (:buf e) (add y 2))
               (:nlgn e (sub1 (:nlgn e)))
               (unless (eq (sref ss 0) 0)
                  (setq s
                     (catenate
                        (substring s 0 (add1 (sref s 0)))
                        (substring ss 1 (sref ss 0)) ))
                  (vset (:buf e) y s)
                  (sset s 0 (add (sref s 0) (sref ss 0))) )))
         (t (bltstring s x s (add1 x))
            (sset s 0 (sub1 (sref s 0))) ))))

(defun :char-delete-back (e)
   (when (and (:bobp e) (:bolp e)) (exit eoc (:msg 1)))
   (:cur-left e)
   (:char-delete e) )

(defun :char-transpose (e)
   (:check-modif e)
   (let ( (s (:s e)) (x (:curx e)) c1 c2 )
      (when (and (ge (sref s 0) 2) (ge x 2))
         (setq c1 (sref s x) c2 (sref s (sub1 x)))
         (sset s x c2)
         (sset s (sub1 x) c1) )))

; .SSection "Ope'ration sur un mot."
(defun :word-insert (e ns)
   (:char-new e (slen ns))
   (bltstring (:s e) (add1 (:curx e)) ns 0)
   (:cur-xgoto e (add (:curx e) (slength ns))) )

(defun :word-delete (e)
   (let ( (s (:s e)) (x (:curx e)) )
      (cond
         ((or (eq x (sref s 0)) (:ncpname (sref s (add1 x))))
            (:char-delete e)
            (:word-delete e) )
         (t (until (or (eq x (sref s 0)) (:ncpname (sref s (add1 x))))
               (:char-delete e) )))))

(defun :word-delete-back (e)
   (let ( (s (:s e)) (x (:curx e)) )
      (cond
         ((or (eq x 0) (:ncpname (sref s x)))
            (:char-delete-back e)
            (:word-delete-back e) )
         (t (until (or (eq x 0) (:ncpname (sref s x)))
               (setq x (sub1 x))
               (:char-delete-back e) )))))

(defun :word-first-char (e)
   (let ( (n (:curx e)) (s (:s e)) )
      (cond
         ((and (:bobp e) (eq n 0)) ())
         ((or (eq n (sref s 0)) (:ncpname (sref s (add1 n))))
            (:cur-left e)
            (:word-first-char e) )
         (t (until (or (eq n 0) (:ncpname (sref s (add1 n))))
               (setq n (sub1 n)) )
            (:cur-xgoto e (ifn (:ncpname (sref s (add1 n))) 0 (add1 n))) ))))

(defun :word-last-char (e)
   (let ( (n (:curx e)) (s (:s e)) )
      (cond
         ((and (:eobp e) (eq n (sref s 0))) ())
         ((or (eq n (sref s 0)) (:ncpname (sref s (add1 n))))
            (:cur-right e)
            (:word-last-char e) )
         (t (until (or (eq n (sref s 0)) (:ncpname (sref s (add1 n))))
               (setq n (add1 n)) )
            (:cur-xgoto e n) ))))

(defun :word-left (e)
   (:cur-left e)
   (:word-first-char e) )

(defun :word-searchp (s)
   (when (or (neq (slength s) 0) :search-strg)
      (if (eq (slength s) 0)
         :search-strg
         (setq :search-strg s) )))

(defun :word-search (e s)
   (unless (setq s (:word-searchp s)) (exit eoc (:msg 3)))
   (let ( (x (index s (:s e) (add1 (:curx e))))
          (ox (:curx e)) (oy (:cury e)) )
      (if (and x (le x (sref (:s e) 0)))
         (:cur-xgoto e (add (sub1 x) (slength s)))
         (:cur-begline e)
         (:cur-down e)
         (setq x (:word-search2 (index s (:s e) 0) e s))
         (when (stringp x)
            (:cur-ygoto e oy)
            (:cur-xgoto e ox) )
         (exit eoc x) )))

(defun :word-search2 (x e s)
   (cond
      ((and x (le x (sref (:s e) 0)))
         (:cur-xgoto e (add (sub1 x) (slength s))) )
      ((:eobp e) (:msg 4))
      (t (:cur-down e)
         (:word-search2 (index s (:s e) 0) e s) )))

(defun :word-reverse-search (e s)
   (unless (setq s (:word-searchp s)) (exit eoc (:msg 3)))
   (let ( (x (index s (:s e) 0)) (ox (:curx e)) (oy (:cury e)) (vx ()) )
      (untilexit trouve
         (while (and x (le (add x (slength s)) (add1 (:curx e))))
            (setq vx x x (index s (:s e) (add1 x))) )
         (when vx (exit trouve (:cur-xgoto e (sub1 vx))))
         (when (:bobp e)
            (:cur-ygoto e oy)
            (:cur-xgoto e ox)
            (exit eoc (:msg 4)) )
         (:cur-up e)
         (:cur-endline e)
         (setq x (index s (:s e) 0) vx ()) )))

(defun :word-get-symbol (e)
   (let ( (x (:curx e)) (y (:cury e)) n m)
      (with ( (typecn #/: 'cpname) (typecn #/# 'cpname) (typecn #/| 'cpname) )
         (:word-first-char e)
         (setq n (add1 (:curx e)))
         (:word-last-char e)
         (setq m (:curx e))
         (:cur-ygoto e y)
         (:cur-xgoto e x)
         (substring (:s e) n (add1 (sub m n))) )))

; .SSection "Ope'ration sur une ligne."
(defun :line-new (e n)
   (:line-new2 e n (add1 (:cury e))) )

(defun :line-new2 (e n y)
   (:check-modif e)
   (let ( (buf (:buf e)) )
      (:nlgn e (add (:nlgn e) n))
      (when (le (vlength buf) (:nlgn e))
         (setq buf
            (makevector (add (vlength buf) (or (ge n 10) 10))
                        :null-strg ))
         (bltvector buf 0 (:buf e) 0)
         (:buf e buf) )
      ; C'est le seul bltvector qui etend le vecteur...
      (:bltvector buf y n) ))

; Pour savoir si le bltvector marche dans les deux sens.
(defvar :bltvector-flag ())

(defun :bltvector (b1 pos n)
   ; Toujours 3 arguments.
   (if :bltvector-flag
      (bltvector b1 (add pos n) b1 pos)
      (let* ( (i (sub1 (vlength b1))) (j (sub i n)) )
         (repeat (add1 (sub j pos))
            (vset b1 i (vref b1 j))
            (setq i (sub1 i) j (sub1 j)) ))))

(defun :line-break (e)
   (let ( buf (y (add1 (:cury e))) (x (:curx e)) (s (:s e)) )
      (:line-new2 e 1 y)
      (setq buf (:buf e))
      (cond
         ((eq x 0) (vset buf y s) (vset buf (sub1 y) :null-strg))
         ((eq x (sref s 0)) (vset buf y :null-strg))
         (t (sset (vset buf y (substring s x)) 0 (sub (sref s 0) x))
            (sset s 0 x) ))))

(defun :line-return (e)
   (:line-break e)
   (:cur-right e) )

(defun :line-delete (e)
   (when (neq (:ldo e) 29) (setq :kill-buffer ()))
   (:line-delete2 e) )

(defun :line-delete2 (e)
   (:check-modif e)
   (let ( (s (:s e)) (x (:curx e)) (ks 0) (kb :kill-buffer) )
      (if (eq x (sref s 0))
         (:char-delete e)
         (setq ks (substring s x (add1 (sub (sref s 0) x))))
         (sset ks 0 (sub1 (slength ks)))
         (sset s 0 x) )
      (unless kb (setq :kill-buffer (setq kb (:make))))
      (if (eq ks 0)
         (:line-new2 kb 1 (add1 (:nlgn kb)))
         (vset (:buf kb) (:nlgn kb) ks)
         () )))

(defun :line-insert (e)
   (let ( (kb :kill-buffer) )
      (unless kb (exit eoc (:msg 6)))
      (let ( (n (add1 (:nlgn kb))) )
         (:line-break e)
         (:line-new e n)
         (bltvector (:buf e) (add1 (:cury e)) (:buf kb) 0 n)
         (:copy-kill-buffer (:buf :kill-buffer) (:nlgn :kill-buffer))
         (:char-delete e)
         (:cur-begline e)
         (repeat n (:cur-down e))
         (:char-delete-back e) )))

(defun :line-get (e)
   (let ( (s (:s e)) )
      (substring s 1 (sref s 0)) ))

(defun :line-bol (e)
   (let ( (in (inbuf)) (s (:s e)) n )
      (if (and (eq (:nlgn e) (:cury e)) (eq (:curx e) (sref s 0)) )
         (exit eoc (:msg 2))
         (setq n (sref s 0))
         (bltstring in 0 s 1 n)
         (sset in n #\CR)
         (sset in (setq n (add1 n)) #\LF)
         (:cur-begline e)
         (:cur-down e)
         (inmax (add1 n)) )))

(defun :line-eol (e)
   (let ( (out (outbuf)) )
      (:word-insert e (substring out 0 (outpos)))
      (:line-return e)
      (fillstring out 0 #\SP (rmargin))
      (outpos (lmargin)) ))

; .SSection "Couper - Copier - Coller"
(defun :mark-set (e)
   (:set-the-mark e (:curx e) (:cury e))
   (:msg 10) )

(defun :mark-exchange (e)
   (let ( (x (:markx e)) (y (:marky e)) )
      (unless x (exit eoc (:msg 5)))
      (:set-the-mark e (:curx e) (:cury e))
      (:cur-ygoto e y)
      (:cur-xgoto e x) ))

(defun :mark-copy (e)
   (let ( (m (:modif e)) )
      (:modif e 5)
      (:mark-delete e)
      (:line-insert e)
      (:modif e m)
      "Copied" ))

(defun :mark-delete (e)
   (when (or (gt (:cury e) (:marky e))
             (and (eq (:cury e) (:marky e)) (gt (:curx e) (:markx e))) )
      (:mark-exchange e) )
   (:mark-exchange e)
   (:line-return e)
   (:mark-exchange e)
   (:line-return e)
   (ifn :kill-buffer
      (setq :kill-buffer (:make))
      (:buf-new :kill-buffer) )
   (let ( (y (:cury e)) (d (:marky e)) )
      (:line-new2 :kill-buffer (sub d y) 1)
      (bltvector (:buf :kill-buffer) 0 (:buf e) y (sub d y))
      (bltvector (:buf e) y (:buf e) d)
      (:nlgn e (sub (:nlgn e) (sub d y)))
      (unless (eq (sref (:s e) 0) 0) (:line-delete2 e))
      (:char-delete e)
      (:char-delete-back e)
      (:mark-set e) 
      () )))

(defun :copy-kill-buffer (v n)
   (when (ge n 0)
      (vset v n (copy (vref v n)))
      (:copy-kill-buffer v (sub1 n)) ))

; .SSection "Utilisation du buffer comme fichier."

(defun :file-read (e f)
   (when (le (:modif e) 1) (exit eoc (:msg 11)))
   (:modif e 3)
   (let ( buf (rep ()) )
      (if f
         (setq buf (:file-in-list f) rep f)
         (setq buf (vector :null-strg) rep (:msg 7)) )
      (:buf-new e)
      (:buf e buf)
      (:nlgn e (sub1 (vlength buf)))
      rep ))

(defun :file-insert (e f)
   (let ( y n buf )
      (unless f (exit eoc (:msg 8)))
      (setq buf (:file-in-list f))
      (:line-new e (vlength buf))
      (bltvector (:buf e) (add1 (:cury e)) buf 0)
      f ))

(defun :file-in-list (f)
   (let ( (l ()) )
      (with ( (inchan (openi f)) )
         (untilexit eof
            (bol)
            (newl l (catenate " " (substring (inbuf) 0 (sub (inmax) 2))))
            (sset (car l) 0 (sub (inmax) 2)) ))
      (apply 'vector (nreverse (cons :null-strg l))) ))

(defun :file-print (e f)
   (unless (catcherror () (renamefile f (catenate f "SV")))
      (exit eoc (:msg 9)) )
   (:dofile-print e f)
   (catenate "write file " f) )

(defun :dofile-print (e f)
   (with ( (outchan (openo f)) (rmargin (slength (outbuf))) )
      (let ( (i 0) (buf (:buf e)) s )
         (repeat (:nlgn e)
            (setq s (vref buf i))
            (bltstring (outbuf) 0 s 1 (sref s 0))
            (outpos (sref s 0))
            (terpri)
            (setq i (add1 i)) ))
      (:modif e (add 1 (div (:modif e) 2)))
      (close (outchan)) ))

; .SSection "Le mode Lisp."
(defun :begin-expr (e)
   (:cur-begline e)
   (untilexit fin
      (cond
         ((eq (sref (:s e) 0) 0) (:cur-up e))
         ((eq (typecn (sref (:s e) 1)) 'csep) (:cur-up e))
         (t (exit fin)) )))

(defun :matchnext (e)
   (let ( (x (:curx e)) (y (:cury e)) (s ()) )
      (when (stringp (setq s (tag eoc (:match-next e ()))))
         (:cur-ygoto e y)
         (:cur-xgoto e x)
         (exit eoc s) )))

(defun :match-next (e l)
   (:match-next-char e)
   (selectq (sref (:s e) (:curx e))
      (#/( (:match-next-push e l #/())
      (#/[ (:match-next-push e l #/[))
      (#/{ (:match-next-push e l #/{))
      (#/) (:match-next-pop l #/())
      (#/] (:match-next-pop l #/[))
      (#/} (:match-next-pop l #/{)) ))

(defun :match-next-push (e l cn)
   (:match-next e (cons cn l))
   (when l (:match-next e l)) )

(defun :match-next-pop (l cn)
   (when (and l (neq (car l) cn))
      (exit eoc "Parenthesis mismatch.") ))

(defun :match-next-char (e)
   (let ( (nx ()) (cx (:curx e)) (x ()) (s (:s e)) )
      (until nx
         (setq x (scanstring s "()[]{}""#;|" (add1 cx)))
         (if (or (null x) (gt x (sref s 0)))
            (setq nx 0)
            (selectq (sref s x)
               (#/" (setq cx (:skip s """" x)))
               (#/| (setq cx (:skip s "|" x)))
               (#/; (setq nx 0))
               (#/# (if (neq (sref s (add1 x)) #//)
                       (setq cx (add1 x))
                       (setq cx (add x 2)) ))
               (t (setq nx x)) )))
      (cond
         ((neq nx 0) (:cur-xgoto e nx))
         ((:eobp e) (exit eoc "Fin du buffer"))
         (t (:cur-begline e)
            (:cur-down e)
            (:match-next-char e) ))))

(defun :skip (s scn x)
   (setq x (index scn s (add1 x)))
   (if (and x (le x (sref s 0)))
      x
      (exit eoc "Newline in string") ))

(defun :matchprevious (e)
   (let ( (x (:curx e)) (y (:cury e)) (s ()) )
      (when (stringp (setq s (tag eoc (:match-prev e ()))))
         (:cur-ygoto e y)
         (:cur-xgoto e x)
         (exit eoc s) )))

(defun :match-prev (e l)
   (let ( (x ()) )
      (:match-prev-char e)
      (selectq (sref (:s e) (add1 (:curx e)))
         (#/) (:match-prev-push e l #/())
         (#/] (:match-prev-push e l #/[))
         (#/} (:match-prev-push e l #/{))
         (#/( (:match-next-pop l #/())
         (#/[ (:match-next-pop l #/[))
         (#/{ (:match-next-pop l #/{))
         (t ))))

(defun :match-prev-push (e l cn)
   (:match-prev e (cons cn l))
   (when l (:match-prev e l)) )

(defun :match-prev-char (e)
   (:cur-left e)
   (let ( (cx 0) (px 0) (nx ()) (x ()) (s (:s e)) )
      (until nx
         (setq x (scanstring s "()[]{}""#;|" (add1 cx)))
         (if (or (null x) (gt x (add1 (:curx e))))
            (setq nx px)
            (selectq (sref s x)
               (#/" (setq cx (:skip s """" x)))
               (#/| (setq cx (:skip s "|" x)))
               (#/# (if (neq (sref s (add1 x)) #//)
                       (setq cx (add1 x))
                       (setq cx (add x 2)) ))
               (#/; (setq nx px))
               (t (setq px x cx x)) )))
      (cond
         ((neq nx 0) (:cur-xgoto e (sub1 nx)))
         ((:bobp e) (exit eoc "Debut du buffer"))
         (t (:cur-up e)
            (:cur-endline e)
            (:match-prev-char e) ))))


; .SSection "Pour compacter un grand coup."

; .SSection "La plus belle de toute."

(defun :undo (e))
