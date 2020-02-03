#|
 "Le_Lisp version 15.2" " " "Utilitaires pour construire les fichiers pour GELL"
.EnPied " " " " " "

$Header: application.ll,v 4.42 90/02/01 16:51:39 ing Exp $
.Chapitre Appli "Utilitaires pour construire les fichiers pour GELL"

.Section "Utilitaires pour construire les fichiers pour GELL"
|#


(setq #:sys-package:colon 'gell)


;; les modules a exclude sont quand meme dans le binaire, mais pas
;; dans les fichiers d'elaboration.

(defvar :modules-to-exclude
  (if (boundp ':modules-to-exclude) :modules-to-exclude))

;; (setq #:system:read-case-flag t)

(defun :read-modules-list (input)
  (with ((inchan (openi input)))
        (read)))

;; la procedure qui lance la traduction en C de tous les modules
;; spe'cifie's dans le fichier input.

(defun :translate-modules-to-c (input outputdirectory)
  (let ((modules (:read-modules-list input)))
    (if (probefile outputdirectory)
        (with ((current-directory outputdirectory))
              (print (current-directory))
              (mapc (lambda (file)
                      (let ((#:system:path 
                             (cons 
                              (directory-namestring (pathname file))
                              #:system:path)))
                        (module-to-c (pathname-name (pathname file)))))
                    modules))
      (error 'translate-modules-to-c 'baddirectory outputdirectory))))

(defun :translate-one-module-to-c (file outputdirectory)
  (if (probefile outputdirectory)
      (with ((current-directory outputdirectory))
            (print (current-directory))
            (let ((#:system:path 
                   (cons 
                    (directory-namestring (pathname file))
                    #:system:path)))
              (module-to-c (pathname-name (pathname file)))))
    (error 'translate-one-module-to-c 'baddirectory outputdirectory)))

(defun :make-make-c (output gelldir input outputdirectory)
  (with ((outchan (openo output))
         (rmargin 256))
        (prinf "~Atools/gellmodules ~A ~A" gelldir input outputdirectory)
        (terpri))
  (close))

(defun :make-modules-file (input output)
  '(unless (probefile input)
          ;; pas de modules.list
          (with ((outchan (openo input)))
                (mapc (lambda (x)
                        (print (pathname-name x)))
                      (wildcard #u"*.lm"))
                (when (outchan)
                      (close (outchan)))))
  (with ((inchan (openi input))
         (outchan (openo output))
	 (rmargin 256)
	 (printline 10000))
        (print "(")
        (untilexit eof
                   (setq module (read))
                   (when (and module
                              t ;; (not (memq module :modules-to-exclude))
                              )
                         (setq filename (pathname (probepatho module)))
                         (prinf "~@60A ; ~@A" 
                                (namestring 
                                 (make-pathname
                                  (pathname-host filename)
                                  (pathname-device filename)
                                  (pathname-directory filename)
                                  (pathname-name filename)
                                  () ()))
                                module)
                         (terpri)))
        (print ")"))
  (close))


(defun :make-elab-file (input output directory comment)
  (let ((modules (:read-modules-list input)))
    (with ((outchan (openo output))
	   (rmargin 256)
	   (printline 10000))
          (print comment)
	  (print "(print ""=== Loading " output """)")
	  (mapc (lambda (file)
                  (unless (memq (symbol () (pathname-name (pathname file)))
                                :modules-to-exclude)
                          (prinf ;; "(libloadfile ""~A~A.le"" t)"
                                 ;; directory
                           "(libloadfile ""~A.le"" t)"
                           (pathname-name (pathname file)))
                          (terpri)))
		modules)
	  (print 
	   "(gell-clean-core-image)")))
  (close))


(defun :make-make-file (input output cdir odir omainname depname columns)
  (let ((modules (:read-modules-list input))
        (cmainname (catenate "C_" omainname))
        (cdepname (catenate "C_" depname))
        )
    (with ((outchan (openo output))
	   (rmargin 256)
	   (printline 10000))

          (print "#####################")
          (print "# Makefile generated automatically for GELL ")
          (print "# Gelling files in  : " input)
          (print "# O main name is    : " omainname)
          (print "#")
          (print "# GELL directory is : " gelldir)
          (print "# C directory is    : " cdir)
          (print "# O directory is    : " odir)
          (print "# depname is        : " depname)
          (print "# Date              : " (date))
          (print "#####################")
          (terpri)
           
          ;;object principal	
          (print "###")
          (print "### Definitions of variables")
          (print "###")
          (terpri)
          (prinf "~A= $(DIRO)/~A.o" omainname omainname)
          (terpri)
          (terpri)
          
          (print "# C files...")
          (prinf "~A= " cdepname)
          (let* ((columns 3)
                 (count columns))
            ;; la dependance
            (mapc (lambda (file)
                    ;; formattage 4 entre'es par ligne.
                    (when (eqn count columns)
                          (princn 92)
                          (terpri)
                          (princn #\TAB)
                          (setq count 0))
                    (prinf "~A~A " cdir
                           (namestring 
                            (make-pathname () () ()
                                           (pathname-name (pathname file)) 
                                           "c" ())) " ")
                    (incr count))
                  modules)
            (terpri 3))

          (print "# Object files...")
          (prinf "~A= " depname)
          (let ((count columns))
            ;; la dependance
            (mapc (lambda (file)
                    ;; formattage 4 entre'es par ligne.
                    (when (eqn count columns)
                          (princn 92)
                          (terpri)
                          (princn #\TAB)
                          (setq count 0))
                    (prinf "~A~A " odir
                           (namestring 
                            (make-pathname () () ()
                                           (pathname-name (pathname file)) 
                                           "o" ())) " ")
                    (incr count))
                  modules)
            (terpri 3))

          (print "###")
          (print "### Main entries")
          (print "###")
          (terpri)
          (prinf "ALL: C_SOURCES C_OBJECTS" cdepname)
          (terpri)
          (terpri)
          (prinf "C_SOURCES: $(~A)" cdepname)
          (terpri)
          (terpri)
          (prinf "C_OBJECTS: $(~A)" omainname)
          (terpri)
          (terpri)
          (prinf "~A: $(~A)" omainname omainname)
          (terpri)
          (terpri)
          (prinf "$(~A): $(~A)" omainname depname)
          (terpri)
          (princn #\TAB)
          (prinf "$(LD) -r $(~A) -o $(~A)" depname omainname)
          (terpri)
          (terpri)



          ;; les entre'es pour construire les .c
          (print "###")
          (print "### Sources .c files construction")
          (print "###")
          (print "GELLDIR=" gelldir)
          (terpri)

          (mapc (lambda (file)
		  (let* ((name (pathname-name (pathname file)))
			 (cname (format 
				 () "~A~A" cdir
				 (namestring 
				  (make-pathname () () () name "c" ())))))
		    (prinf "~A: ~A.lo" cname file)
		    (terpri)
		    (princn #\TAB)
		    (prinf "$(GELLDIR)/tools/gellmodule ~A ~A"
                           file cdir)
		    (terpri)
		    (terpri)
                    ))
		modules)
	  (terpri)


          ;; les entre'es pour construire les .o
          (print "###")
          (print "### Objet files construction")
          (print "###")
          (terpri)

          (mapc (lambda (file)
		  (let* ((name (pathname-name (pathname file)))
			 (oname (format 
				 () "~A~A" odir
				 (namestring 
				  (make-pathname () () () name "o" ()))))
			 (cname (format 
				 () "~A~A" cdir
				 (namestring 
				  (make-pathname () () () name "c" ())))))
		    (prinf "~A: ~A" oname cname)
		    (terpri)
		    (princn #\TAB)
		    (prinf "$(CC) $(CF) $(OPT) -c ~A" cname)
		    (terpri)
		    (princn #\TAB)
		    (prinf "mv ~A ~A" (file-namestring (pathname oname)) odir)
		    (terpri)))
		modules)
	  (terpri)
  
          )
    (close)))
