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

(defvar #:sys-package:colon 'rw)

(defvar *seek-cur* 1)
(defvar *seek-end* 2)
(defvar *seek-set* 0)
(defvar ERRBPA "Erreur RW")

; .Section "Tools

(defmacro :check-type (arg type)
  `(ifn (,type ,arg)
        (error 'rw-??? ERRBPA ,arg)))

; .Section "Liaisons avec le C (defexterns)

(if (eq (getenv "BITMAP") 'windows)
    (let ((:rwlib (catenate #:system:system-directory "rw.dll")))
         (defextern rw_open        :rwlib (string string) fix)
         (defextern rw_close       :rwlib (fix) fix)
         (defextern rw_flush       :rwlib (fix) fix)
         (defextern rw_eofp        :rwlib (fix) fix)
         (defextern rw_errorp      :rwlib (fix) fix)
         (defextern rw_read_char   :rwlib (fix) fix)
         (defextern rw_unread_char :rwlib (fix fix) fix)
         (defextern rw_read_buf    :rwlib (fix string fix) fix)
         (defextern rw_read_line   :rwlib (fix string fix) fix)
;;       (defextern rw_read_word   :rwlib (fix t) fix)
         (defextern rw_read_short  :rwlib (fix) fix)
         (defextern rw_write_char  :rwlib (fix fix) fix)
         (defextern rw_write_buf   :rwlib (fix string fix) fix)
         (defextern rw_write_line  :rwlib (fix string fix) fix)
         (defextern rw_write_word  :rwlib (fix fix fix) fix)
         (defextern rw_get_page    :rwlib (fix) fix)
         (defextern rw_get_offset  :rwlib (fix) fix)
         (defextern rw_seek        :rwlib (fix fix fix fix) fix))
    (progn
         (defextern rw_open        (string string) fix)
         (defextern rw_close       (fix) fix)
         (defextern rw_flush       (fix) fix)
         (defextern rw_eofp        (fix) fix)
         (defextern rw_errorp      (fix) fix)
         (defextern rw_read_char   (fix) fix)
         (defextern rw_unread_char (fix fix) fix)
         (defextern rw_read_buf    (fix string fix) fix)
         (defextern rw_read_line   (fix string fix) fix)
         (defextern rw_read_word   (fix t) fix)
;;       (defextern rw_read_short  (fix) fix)
         (defextern rw_write_char  (fix fix) fix)
         (defextern rw_write_buf   (fix string fix) fix)
         (defextern rw_write_line  (fix string fix) fix)
         (defextern rw_write_word  (fix fix fix) fix)
         (defextern rw_get_page    (fix) fix)
         (defextern rw_get_offset  (fix) fix)
         (defextern rw_seek        (fix fix fix fix) fix)))

; .Section "Manipulation sur les fichiers

;;; Ouverture d'un fichier de nom <filename> de mode d'ouverture <mode>
;;; (le mode est a la syntaxe C Ex: "r" "w+" "a" "rb+",...)
;;; renvoie un handler sur le fichier ouvert

(defun rw-open (filename mode)
   (:check-type filename (lambda (f) (or (stringp f) (pathnamep f))))
   (:check-type mode stringp)
   (let ((handle (rw_open (namestring filename) mode)))
        (if (< handle 0)
            (error 'rw-open "erreur ouverture fichier"
                   (cons filename mode))
            handle)))

;;; Fermeture du fichier de handler <handle>

(defun rw-close (handle)
   (:check-type handle fixp)
   (rw_close handle))

(defun rw-eofp (handle)
   (:check-type handle fixp)
   (eq (rw_eofp handle) 1))

(defun rw-errorp (handle)
   (:check-type handle fixp)
   (eq (rw_eofp handle) 1))

;;; Vide sur disque le buffer du fichier de handler <handle>

(defun rw-flush (handle)
   (:check-type handle fixp)
   (rw_flush handle))

; .Section "Lecture


;;; lecture d'un caracte`re

(defun rw-read-char (handle)
   (:check-type handle fixp)
   (rw_read_char handle))

;;; annule la lecture d'un caractere

(defun rw-unread-char (handle c)
   (:check-type handle fixp)
   (rw_unread_char handle c))

;;; lecture dans une chaine s de n caracteres du fichier <handle>
;;; si la fin de fichier a e'te' rencontre' on peut lire moins de n car
;;; la fonction renvoie le nbre de car effectivement lus
;;; si la chaine s est plus longue que le nbre de car lus, les autres
;;; car de s ne sont pas modifie's

(defun rw-read-buf (handle s n)
   (:check-type handle fixp)
   (:check-type s stringp)
   (:check-type n fixp)
   (rw_read_buf handle s n))


;;; lecture dans une chaine s de la prochaine ligne dans le fichier <handle>
;;; en lisant au plus n caracteres.
;;; si la fin de fichier a e'te' rencontre' on peut lire moins de n car
;;; la fonction renvoie le nbre de car effectivement lus
;;; si la chaine s est plus longue que le nbre de car lus, les autres
;;; car de s ne sont pas modifie's

(defun rw-read-line (handle s n)
   (:check-type handle fixp)
   (:check-type s stringp)
   (:check-type n fixp)
   (rw_read_line handle s n))

;;; lecture du prochain mot de 64 bits sur le fichier <handle>
;;; <db> est un cons dont le CAR est rempli avec la partie haute du
;;; mot et le CDR avec la partie basse

(defun rw-read-word (handle db)
   (:check-type handle fixp)
   (:check-type db consp)
   (if (eq (getenv "BITMAP") 'windows)
       (let ((car (rw_read_short handle))
             (cdr (rw_read_short handle)))
            (rplaca db car)
            (rplacd db cdr))
       (rw_read_word handle db)))
       
; .Section "Ecriture

;;; Ecriture du caractere <char> 

(defun rw-write-char (handle c)
   (:check-type handle fixp)
   (:check-type c fixp)
   (rw_write_char handle c))

;;; Ecriture des <n> premiers car de la chaine <s> dans le fichier <handle>

(defun rw-write-buf (handle s n)
   (:check-type handle fixp)
   (:check-type s stringp)
   (:check-type n fixp)
   (rw_write_buf handle s n))

;;; Ecriture des <n> premiers car de la chaine <s> dans le fichier <handle>
;;; et ajout d'une fin de ligne

(defun rw-write-line (handle s n)
   (:check-type handle fixp)
   (:check-type s stringp)
   (:check-type n fixp)
   (rw_write_line handle s n))

;;; Ecriture d'un mot de 64 bits dans le fichier handle
;;; <hi> est la partie haute
;;; <lo> est la partie basse

(defun rw-write-word (handle hi lo)
   (:check-type handle fixp)
   (:check-type hi     fixp)
   (:check-type lo     fixp)
   (rw_write_word handle hi lo))

; .Section "Positionnement

;;; Renvoie le numero compte' a partir de 0 de la page
;;; courante du fichier <handle>

(defun rw-get-page (handle)
   (:check-type handle fixp)
   (rw_get_page handle))

;;; Renvoie l'offset dans la page courante pour le fichier <handle>

(defun rw-get-offset (handle)
   (:check-type handle fixp)
   (rw_get_offset handle))

;;; Positionnement dans le fichier <handle> en se de'plac,ant
;;; de <page> pages et de <offset> octets
;;; si origin vaut *seek-cur*
;;;	le deplacement est par rapport a la position courante dans le fichier
;;; si origin vaut *seek-end*
;;;	le deplacement est par rapport a la fin du fichier
;;; si origin vaut *seek-set*, 
;;;	le deplacement est par rapport au de'but du fichier

(defun rw-seek (handle page offset origin)
   (:check-type handle fixp)
   (:check-type page   fixp)
   (:check-type offset fixp)
   (:check-type origin fixp)
   (rw_seek handle page offset origin))
