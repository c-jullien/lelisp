;;;; TAIGA
;;;; 05/92
;;;; Auteurs: Cyril Cambien & Stephane Leroy
;;;; Primitives d'extraction des champs dans un fichier au format indexable

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


