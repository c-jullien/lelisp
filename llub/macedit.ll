; .EnTete "Le-Lisp (c) version 15.2" " " "Macedit"
; .EnPied "macedit.ll" "%" " "
; .SuperTitre "Les macros de l'e'diteur"
;
; .Auteur "Bernard Serpette"
;
; .Centre "*****************************************************************"
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; .Centre "$Header: /usr/cvs/lelisp/llub/macedit.ll,v 1.1 2006/12/09 10:41:07 jullien Exp $"

(unless (>= (version) 15.2)
     (error 'load 'erricf 'macedit))

; .Section "Les macros de l'e'diteur"
; Ce fichier contient toutes les macros concernant la structure edit. Il
; doit e^tre charge' pour toutes extensions interpre'te'es, il doit e^tre
; aussi pre'sent dans l'environnement de compilation (cle' include des
; modules).

(defstruct buffer
   (buffer  (vector #:edit:null-strg))
   (modif   3)
   (nolgn   0)
   (markx   ())
   (marky   ())
   (ldo     0) )

(defstruct edit
   (pbuffer (#:buffer:make))
   (curx    0)
   (cury    0) )

(defmacro buf-new             (e)   `(trap-edit 00 ,e ()))
(defmacro buf-link            (e a) `(trap-edit 01 ,e ,a))
(defmacro buf-unlink          (e)   `(trap-edit 02 ,e ()))
(defmacro buf-readonly        (e)   `(trap-edit 42 ,e ()))
(defmacro buf-readwrite       (e)   `(trap-edit 43 ,e ()))

(defmacro cur-top             (e)   `(trap-edit 03 ,e ()))
(defmacro cur-buttom          (e)   `(trap-edit 04 ,e ()))
(defmacro cur-begline         (e)   `(trap-edit 05 ,e ()))
(defmacro cur-endline         (e)   `(trap-edit 06 ,e ()))
(defmacro cur-left            (e)   `(trap-edit 07 ,e ()))
(defmacro cur-right           (e)   `(trap-edit 08 ,e ()))
(defmacro cur-up              (e)   `(trap-edit 09 ,e ()))
(defmacro cur-down            (e)   `(trap-edit 10 ,e ()))
(defmacro cur-ygoto           (e a) `(trap-edit 11 ,e ,a))
(defmacro cur-xgoto           (e a) `(trap-edit 12 ,e ,a))

(defmacro char-insert         (e a) `(trap-edit 13 ,e ,a))
(defmacro char-delete         (e)   `(trap-edit 14 ,e ()))
(defmacro char-delete-back    (e)   `(trap-edit 15 ,e ()))
(defmacro char-transpose      (e)   `(trap-edit 41 ,e ()))

(defmacro word-insert         (e a) `(trap-edit 16 ,e ,a))
(defmacro word-delete         (e)   `(trap-edit 17 ,e ()))
(defmacro word-delete-back    (e)   `(trap-edit 18 ,e ()))
(defmacro word-first-char     (e)   `(trap-edit 19 ,e ()))
(defmacro word-last-char      (e)   `(trap-edit 20 ,e ()))
(defmacro word-left           (e)   `(trap-edit 21 ,e ()))
(defmacro word-search         (e a) `(trap-edit 22 ,e ,a))
(defmacro word-reverse-search (e a) `(trap-edit 23 ,e ,a))
(defmacro word-get-symbol     (e)   `(trap-edit 24 ,e ()))

(defmacro line-insert         (e)   `(trap-edit 25 ,e ()))
(defmacro line-new            (e a) `(trap-edit 26 ,e ,a))
(defmacro line-break          (e)   `(trap-edit 27 ,e ()))
(defmacro line-return         (e)   `(trap-edit 28 ,e ()))
(defmacro line-delete         (e)   `(trap-edit 29 ,e ()))
(defmacro line-get            (e)   `(trap-edit 30 ,e ()))
(defmacro line-bol            (e)   `(trap-edit 31 ,e ()))
(defmacro line-eol            (e)   `(trap-edit 32 ,e ()))

(defmacro mark-set            (e)   `(trap-edit 33 ,e ()))
(defmacro mark-exchange       (e)   `(trap-edit 34 ,e ()))
(defmacro mark-copy           (e)   `(trap-edit 35 ,e ()))
(defmacro mark-delete         (e)   `(trap-edit 36 ,e ()))

(defmacro file-read           (e a) `(trap-edit 37 ,e ,a))
(defmacro file-insert         (e a) `(trap-edit 38 ,e ,a))
(defmacro file-print          (e a) `(trap-edit 39 ,e ,a))

(defmacro begin-expr          (e)   `(trap-edit 40 ,e ()))
(defmacro next-expr           (e)   `(trap-edit 44 ,e ()))
(defmacro previous-expr       (e)   `(trap-edit 45 ,e ()))
