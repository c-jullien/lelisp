; .EnTete "Le-Lisp (c) version 15.2" " " "Me'me'"
; .EnPied "meme.ll" "%" " "
; .SuperTitre "L'e'diteur me'me'"
;
; .Auteur "Bernard Serpette"
;
; .Centre "*****************************************************************"
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; .Centre "$Header: /usr/cvs/lelisp/llub/meme.ll,v 1.1 2006/12/09 10:41:07 jullien Exp $"

(unless (>= (version) 15.2)
     (error 'load 'erricf 'meme))

; .Section "L'e'diteur Me'me'"
; .SSection "Contenu."
; On de'finit ici un petit e'diteur a` la Emacs. Il est multi-e'cran,
; chaque e'cran posse`de sa ligne propre ligne d'information (wholine),
; tous les e'crans partagent la me^me ligne de dialogue (qui est lui me^me
; un e'diteur) et il est possible d'e'valuer une expression dans un e'cran.

; .SSection "De'clarations"
(defvar #:sys-package:colon '#:edit:editor:meme)

(add-feature 'meme)

(defstruct #.#:sys-package:colon
   (wholine)
   (wholinemap)
   (locx 0)
   (locy 0) )

; .SSection "Les variables globales"
; La liste des e'crans.
(defvar :list-editor ())

; .SSection "Fonction de lancement"
(defun meme f
   (let ( (e ()) )
      (if (and (null f) :list-editor)
         (setq e (car :list-editor))
         (setq :list-editor
            (ncons (setq e (:make-meme-editor 0 0 (tyxmax) (tyymax)))) )
         (when (setq f (car f))
            (let ( (rf (probepathf f)) )
               (ifn rf
                  (:file e f)
                  (FILE-READ e rf)
                  (:file e rf) ))))
      (:rdpscreen e)
      (edit-command-redisplay e ())
      (untilexit meme
         (tag no-redisplay (edit-command-redisplay e (tyi)))
         (setq e (car :list-editor)) )
      (tycursor 0 (tyymax))
      'meme ))

(dmc ^E ()
   (if (eq (peekcn) 13)
      '(meme)
      `(meme ',(concat (readstring))) ))

; .SSection "Interface avec le re'affichage"
(defun :edit-drawcursor (e x y f)
   (when f
      (let ( (who (:wholine e)) (whomap (:wholinemap e)) )
         (fillstring who 7 #\SP)
         (when (ge (#:buffer:modif (:pbuffer e)) 4) (sset who 8 #/*))
         (if (le (#:buffer:modif (:pbuffer e)) 1)
            (bltstring who 10 "(RO)" 0)
            (bltstring who 10 "(RW)" 0) )
         (bltstring who 15 (:file e) 0)
         (unless (eqstring who whomap)
            (bltstring whomap 0 who 0)
            (tycursor (:locx e) (add (:locy e) (:h e)))
            (with ((tyattrib t)) (tyo whomap)) )
         (tycursor (add x (:locx e)) (add y (:locy e))) )))

(defun :edit-redisplaystring (e x y s pos n)
   (tycursor (add x (:locx e)) (add y (:locy e)))
   (repeat n
      (tyo (sref s pos))
      (setq pos (add1 pos)) ))

(defun :edit-redisplaycleol (e x y n)
   (tycursor (add x (:locx e)) (add y (:locy e)))
   (tycleol) )

(defun :rdpscreen (ne)
   (tycls)
   (mapc
      (lambda (e)
         (WIN-CLEAR e)
         (fillstring (:wholinemap e) 0 #\SP)
         (unless (eq e ne)
            (edit-command-redisplay e ()) ))
      :list-editor ))

(defun :tycls (e)
   (let ( (y (:locy e)) (x (:locx e)) )
      (repeat (:h e)
         (tycursor x y)
         (tycleol)
         (setq y (add1 y)) )))

; .SSection "Fonction de cre'ation et nouvelles cle's"
(defun :make-meme-editor (x y w h)
   (let ( (e (:make)) (who (makestring w #\SP)) )
      (init-editor e e w (sub1 h))
      (:drawcursor e ':edit-drawcursor)
      (:redisplaystring e ':edit-redisplaystring)
      (:redisplaycleol e ':edit-redisplaycleol)
      (:query e ':edit-query)
      (:locx e x)
      (:locy e y)
      (bltstring who 0 "Editor:" 0)
      (:wholine e who)
      (:wholinemap e (makestring w #\SP))
      (local-bind-to-ekey e #/c '(trap-meme . 0))
      (local-bind-to-key  e #^L '(trap-meme . 1))
      (local-bind-to-xkey e #/1 '(trap-meme . 2))
      (local-bind-to-xkey e #/2 '(trap-meme . 3))
      (local-bind-to-xkey e #/n '(trap-meme . 4))
      (local-bind-to-xkey e #/p '(trap-meme . 5))
      (local-bind-to-xkey e #^V '(trap-meme . 6))
      e ))

(defun trap-meme (e n)
   (selectq n
      (0 (:state e 0) (exit meme))
      (1 (:rdpscreen e))
      (2 (:unsplit-editor e))
      (3 (:split-editor e))
      (4 (:next-editor e))
      (5 (:previous-editor e))
      (6 (:visit-file e (:edit-query e "Visit File: " t))) ))

(defun :visit-file (e f)
   (when f
      (:split-editor e)
      (BUF-UNLINK e)
      (:file e (or (probepathf f) f))
      (FILE-READ e (probepathf f))
      (:tycls e) ))

(defun :previous-editor (e)
   (let ( (l (nreverse :list-editor)) )
      (setq :list-editor (cons (setq e (car l)) (nreverse (cdr l))))
      (edit-command-redisplay e ())
      (exit no-redisplay) ))

(defun :next-editor (e)
   (setq :list-editor
      (nreverse (cons (car :list-editor) (nreverse (cdr :list-editor)))) )
   (setq e (car :list-editor))
   (edit-command-redisplay e ())
   (exit no-redisplay) )

(defun :unsplit-editor (e)
   (init-editor e e (tyxmax) (sub1 (tyymax)))
   (:locx e 0)
   (:locy e 0)
   (setq :list-editor (ncons e))
   (:rdpscreen e)
   (exit no-redisplay (edit-command-redisplay e ())) )

(defun :split-editor (e)
   (if (le (:h e) 2)
      (exit eoc "Your window is too small")
      (let ( ne (h (:h e)) (w (:w e)) nh )
         (setq nh (div (add1 h) 2) h (sub h nh))
         (init-editor e e w h)
         (setq ne
            (:make-meme-editor (:locx e) (add1 (add h (:locy e))) w nh) )
         (BUF-LINK ne e)
         (:file ne (:file e))
         (rplacd :list-editor (cons ne (cdr :list-editor)))
         (fillstring (:wholinemap e) 0 #\SP)
         (:tycls ne)
         (edit-command-redisplay ne ()) )))

; .SSection "Interface avec un simple editeur de ligne."
; Sachant qu'a` chaque commande on demande d'effacer l'e'diteur de ligne
; on optimise en gardant l'e'tat courant de l'e'diteur de ligne (i.e.
; contient un message ou pas)
(defvar :clean-query? t)

(defun :edit-query (e msg fg)
   (if fg
      (let ( (ne (:make)) (n (slen msg)) )
         (init-editor ne ne (tyxmax) 1)
         (:drawcursor ne ':query-drawcursor)
         (:redisplaystring ne ':edit-redisplaystring)
         (:redisplaycleol ne ':edit-redisplaycleol)
         (:locx ne n)
         (:locy ne (tyymax))
         (local-bind-to-key ne #^G '(:trap-query . 0))
         (local-bind-to-key ne #^M '(:trap-query . 1))
         (tycursor 0 (tyymax))
         (tyo msg)
         (tycleol)
         (setq :clean-query? ())
         (prog1 
            (untilexit query (edit-command-redisplay ne (tyi)))
            (:xcursor e -1) ))
      (unless (and (null msg) :clean-query?)
         (tycursor 0 (tyymax))
         (tycleol)
         (ifn msg
            (setq :clean-query? t)
            (tyo msg)
            (setq :clean-query? ()) )
         (:xcursor e -1) )))

(defun :query-drawcursor (e x y f)
   (when f (tycursor (add x (:locx e)) (add y (:locy e)))) )

(defun :trap-query (e n)
   (selectq n
      (0 (exit query ()))
      (1 (exit query (LINE-GET e))) ))
