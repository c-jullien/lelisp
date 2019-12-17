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

(defvar #:sys-package:colon 'taiga)

(defvar :*buflen* 1000)
(defvar :*buffer* (makestring :*buflen* 32))
(defvar :*file*)
(defvar :*nbread*)
(defvar :*nb-pos*)

;;; lecture d'une ligne

(defun next-line ()
   (setq :*nbread* (rw-read-line :*file* :*buffer* :*buflen*))
   (if (rw-eofp :*file*) (exit eof))
   :*buffer*)
   
;;; lecture identifiant

(defun get-nb ()
   (next-line)
   (until (eq (index "# DATE" :*buffer*) 0)
          (next-line))
   (substring (next-line) 0 (sub1 :*nbread*)))

;;; lecture du nombre de r‚ponses

(defun get-nrep ()
   (next-line)
   (until (eq (index "# REP" :*buffer*) 0)
          (next-line))
   (let ((nb (substring (next-line) 0 (sub1 :*nbread*))))
        (stratom (slength nb) nb ())))

;;; lecture d'un groupe de lignes

(defun read-lines ()
   (let ((s (substring (next-line) 0 (sub1 :*nbread*))))
        (next-line)
        (until (le :*nbread* 1)
              (setq s (catenate s " " (substring :*buffer* 0 (sub1 :*nbread*))))
              (next-line))
        s))

(defun read-lines2 ()
   (let ((s (substring (next-line) 0 (sub1 :*nbread*))))
        (next-line)
        (until (le :*nbread* 1)
               (setq s (catenate s (substring :*buffer* 0 (sub1 :*nbread*))))
               (next-line))
        s))

(defun read-list ()
   (let ((s ()))
        (next-line)
        (until (le :*nbread* 1)
               (newl s (substring :*buffer* 0 (sub1 :*nbread*)))
               (next-line))
        s))
        
;;; extraction zone ORIGINE

(defun get-or ()
   (next-line)
   (until (eq (index "# ORIGINE" :*buffer*) 0)
          (next-line))
   (read-lines))

;;; extraction zone TXT

(defun get-tx2 ()
   (next-line)
   (until (eq (index "# TXT" :*buffer*) 0)
          (next-line))
   (read-lines2))

;;; extraction de TXT en ins‚rant un blanc entre chaque ligne

(defun get-tx ()
   (next-line)
   (until (eq (index "# TXT" :*buffer*) 0)
          (next-line))
   (read-lines))

;;; extraction de la zone INDEX

(defun get-idx ()
   (let ((idx))
        (next-line)
        (until (eq (index "# INDEX" :*buffer*) 0)
               (next-line))
        (read-list)))


