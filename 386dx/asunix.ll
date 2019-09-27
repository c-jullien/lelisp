;;;; .EnTete	"Le-Lisp version 15.24" " " "asunix.ll"
;;;; .Date	"1997/09/12"
;;;; .EnPied	"asunix.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"ELIGIS, C. Jullien"
;;;; .Annexe I	""

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
