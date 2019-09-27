;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(setq #:sys-package:colon '{llmodule})

#|
;;; <module> est une chaine de caracteres (nom du module evidemment...)
;; Lit un module.
;; #:system:path doit permettre de le trouver.
(de read-llmodule (f . dont-readinclude)
    (:readmodule f (car dont-readinclude)))

(de :readmodule (module dont-readinclude?)
    (let ((file (probepathm module)))
      (if file
	  (let* ((list (:readdefmodule file))
		 (module (makellmodule file list)))
            (unless dont-readinclude?
                    (:readinclude module))
	    module
	    )
	(error ':readmodule "module not found" module)
	)))
|#

;;;
;;; proteger les variables SVP
;;;

(de :readdefmodule (file)
    (let* ((filename (or (probepathm file) file))
           (list) )
      (ifn filename
           (#:crunch:print "Reading [1] " file " ABORTED")
           (#:crunch:print "Reading [1] " file "...")
           (setq list (#:crunch:readdefmodule filename))
;	   (#:crunch:print "done")
	   )
      list
      ))
	    
#|
(de :readinclude (llmodule)
    (mapc (lambda (f) 
            (when (probepathf f)
                  (libloadfile f ())))
          (:include llmodule))
    )
|#

;;;
;;;
;;;

#|
(de :write-to-file (llmodule)
    (let ((file (:file llmodule)))
      (setq file (namestring (merge-pathnames (pathname file) 
                                              (pathname ".lm"))))
      (#:crunch:print "Writing to " file "...")
      (let ((chan (openo file)))
        (with ((outchan chan)
               (lmargin 0)
               (rmargin 78)
               (printlength 2000)
               (printlevel 1000))
              (pprint llmodule)
              (prinflush))
        (close chan)
        )
      ))
|#

;;;;;;
;;; Load a module only when it is necessary
;;;;;;

(defvar #:system:load-when-necessary
  (if (boundp '#:system:load-when-necessary) 
      #:system:load-when-necessary
    t))

(defun #:crunch:loadmodule (module)
  (if #:system:load-when-necessary
      (let ((name (pathname-name (namestring module))))
        (if (or (memq name #:module:compiled-list)
                (memq name #:module:interpreted-list))
            module
          (loadmodule module)))
    (loadmodule module)))


;;;;;;
;;; In order to detect a read error in a file
;;;;;;

(defvar #:crunch:last-file-read
  (if (boundp '#:crunch:last-file-read) #:crunch:last-file-read))
  
;; ----------- exported_function : "#:crunch:readdefmodule"

(defun #:crunch:readdefmodule (file)
  (setq #:crunch:last-file-read (list 'readdefmodule (probepathm file)))
  (readdefmodule file))

;; ----------- exported_function : "#:crunch:openi"

(defun #:crunch:openi (file)
  (let ((chan (#:crunch:find-channel file)))
    (if chan
        (close chan))
    (setq #:crunch:last-file-read file)
    (openi file)))

;; ----------- exported_function : "#:crunch:find-channel"

(defun #:crunch:find-channel (file)
  (let ((id 0))
    (any (lambda (pair)
           (if (eqstring (namestring file) (cadr pair))
               id
             (incr id)
             ()))
          (channel))))
;; ----------- exported_function : "#:crunch:last-file-read"

(defun #:crunch:last-file-read ()
  #:crunch:last-file-read)
