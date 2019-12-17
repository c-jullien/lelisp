;;;; Author:    C. Jullien
;;;; License:   Simplified BSD license
;;;; GIT:       "$Id$"

;;; Copyright (c) 1988-2020, Eligis
;;;
;;; Redistribution and use in source and binary forms, with or without
;;; modification, are permitted provided that the following conditions are met:
;;; 
;;; 1. Redistributions of source code must retain the above copyright
;;;    notice, this list of conditions and the following disclaimer.
;;; 2. Redistributions in binary form must reproduce the above
;;;    copyright notice, this list of conditions and the following
;;;    disclaimer in the documentation and/or other materials provided
;;;    with the distribution.
;;; 
;;; THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
;;; "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
;;; TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
;;; PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
;;; CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
;;; EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
;;; PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
;;; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
;;; WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
;;; OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
;;; ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

;;; Ve'rification de la version.

(unless (>= (version) 15.2)
        (error 'load 'erricf 'asunix))

;;; Tous les symboles pre'ce'de's de ':' seront de'finis dans le package ASUNIX.

(defvar #:sys-package:colon 'asunix)

(defun translate-to-as ()
   (initty)
   (typrologue)
   (tycls)
   (tycursor 20 5)
   (tyattrib t)
   (tyo "TRADUCTION EN SYNTAXE AS")
   (tyattrib ())
   (tycursor 5  10)
   (tyo "Actions:")
   (tycursor 15 12)
   (tyo "- FILE    ;; traduit le fichier de nom 'file'")
   (tycursor 15 13)
   (tyo "- ALL     ;; traduit tout")
   (tycursor 15 14)
   (tyo "- STOP    ;; retourne a lisp")
   (tycursor 15 15)
   (tyo "- END     ;; sort de lisp")
   (untilexit loop
              (tycursor 20 20)
              (tyo "Action: ")
              (tyflush)
              (with ((inchan ())
                     (prompt ""))
                    (let ((file (read)))
                         (selectq file
                                  (all  (tycls)
                                        (tycursor 25 0)
                                        (tyattrib t)
                                        (tyo "TRADUCTION COMPLETE DES FICHIERS")
                                        (tyattrib ())
                                        (tycursor 0 2)
                                        (tyflush)
                                        (translate-all)
                                        (tycursor 0 23)
                                        (tyo "Appuyez sur une touche ..")
                                        (tyi)
                                        (exit loop))
                                  (end  (tycls)
                                        (tyflush)
                                        (end))
                                  (stop (exit loop))
                                  (t    (tycursor 0 22)
                                        (tyflush)
                                        (funcall 'translate file)
                                        (tycursor 0 22)
                                        (tycleol)
                                        (tycursor 28 20)
                                        (tycleol)
                                        (tyflush))))))
   (tycls)
   (tyflush)
   'done)

(loadfile "masm2as.ll" t)

(translate-to-as)
