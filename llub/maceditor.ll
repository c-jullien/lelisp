; .EnTete "Le-Lisp (c) version 15.2" " " "Maceditor"
; .EnPied "maceditor.ll" "%" " "
; .SuperTitre "Les macros (2) de l'e'diteur"
;
; .Auteur "Bernard Serpette"
;
; .Centre "*****************************************************************"
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; .Centre "$Header: /usr/cvs/lelisp/llub/maceditor.ll,v 1.1 2006/12/09 10:41:07 jullien Exp $"

(unless (>= (version) 15.2)
     (error 'load 'erricf 'maceditor))

; .Section "Les macros de l'e'diteur"
; Ce fichier contient toutes les macros concernant la structure #:edit:editor.
; Il doit e^tre charge' pour toutes extensions interpre'te'es, il doit e^tre
; aussi pre'sent dans l'environnement de compilation (cle' include des
; modules).
(defvar #:sys-package:colon '#:edit:editor)

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

(defmacro win-clear      (e)   `(trap-editor 100 ,e ()))

(defmacro win-right      (e)   `(trap-editor 101 ,e ()))
(defmacro win-left       (e)   `(trap-editor 102 ,e ()))
(defmacro win-down       (e)   `(trap-editor 103 ,e ()))
(defmacro win-up         (e)   `(trap-editor 104 ,e ()))
(defmacro win-next       (e)   `(trap-editor 105 ,e ()))
(defmacro win-previous   (e)   `(trap-editor 106 ,e ()))
(defmacro win-cur-top    (e)   `(trap-editor 107 ,e ()))
(defmacro win-ygoto      (e a) `(trap-editor 108 ,e ,a))
(defmacro win-xgoto      (e a) `(trap-editor 109 ,e ,a))

(defmacro cur-win-top    (e)   `(trap-editor 110 ,e ()))
(defmacro cur-win-buttom (e)   `(trap-editor 111 ,e ()))
(defmacro cur-win-ygoto  (e a) `(trap-editor 112,e ,a))
(defmacro cur-win-xgoto  (e a) `(trap-editor 113,e ,a))

(defmacro query-readfile   (e) `(trap-editor 116 ,e ()))
(defmacro query-writefile  (e) `(trap-editor 117 ,e ()))
(defmacro query-insertfile (e) `(trap-editor 118 ,e ()))
(defmacro query-search     (e) `(trap-editor 119 ,e ()))
(defmacro query-rsearch    (e) `(trap-editor 120 ,e ()))
(defmacro savefile         (e) `(trap-editor 121 ,e ()))
(defmacro query-goto-line  (e) `(trap-editor 122 ,e ()))

(defmacro exp-eval         (e) `(trap-editor 124 ,e ()))
(defmacro exp-eval-print   (e) `(trap-editor 125 ,e ()))
