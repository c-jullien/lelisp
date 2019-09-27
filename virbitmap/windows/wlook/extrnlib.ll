;;;; .EnTete	"Le-Lisp version 15.25" " " "extrnlib.ll"
;;;; .Date	"1998/05/11"
;;;; .EnPied	"extrnlib.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"ELIGIS, C. Jullien"
;;;; .Annexe I	""

;;; Check current version.

(unless (>= (version) 15.2)
        (error 'load 'erricf 'extrnlib))

;; Set the default package

(defvar #:sys-package:colon '#:display:windows)

;;; Compute the location for the DLL

(unless (boundp ':extrnlib)
        (defvar :extrnlib (catenate #:system:system-directory "extrnlib.dll")))

;;; Standard dialog-boxes

(defextern |WDGGetColor|       :extrnlib (vector) t)
(defextern |WDGOpenFile|       :extrnlib (string fix) fix)
(defextern |WDGGetText|        :extrnlib (string string) fix)
(defextern |WDGMessageBox|     :extrnlib (string fix fix fix) fix)
(defextern |WDGGetFont|        :extrnlib (string) fix)

;;; Clip-board section

(defextern |WDGOpenClipboard|  :extrnlib () fix)
(defextern |WDGIsAvailable|    :extrnlib (string) fix)
(defextern |WDGCloseClipboard| :extrnlib () fix)
(defextern |WDGGetClipboard|   :extrnlib (string string) fix)
(defextern |WDGSetClipboard|   :extrnlib (string string) fix)

;;; Get Windows Resource Information

(defextern |WDGResources|      :extrnlib (vector))

;;; Implementation

(defun :assure-extrnlib-loaded ()
   ;; what to do to assure that extrnlib is linked
   )

(defvar :work-string-length (if (boundp ':work-string-length) 
                                :work-string-length         
                                2048))

(defvar :work-string (makestring :work-string-length 0))

(defun :ask-file (pathname)
  (:assure-extrnlib-loaded)
  (let ((askpath (pathname pathname))
        (workpath )
        (file-str-path ))
       (setq workpath (make-pathname 
                            (pathname-host askpath)
                            (pathname-device askpath)
                            (pathname-directory askpath)))
       (set-pathname-host askpath ())
       (set-pathname-device askpath ())
       (set-pathname-directory askpath ())
       (setq file-str-path (namestring askpath))
       (with ((current-directory workpath))
             (let ((limit (min (slen  file-str-path)
                               (sub1 :work-string-length)))	
                   s)	
                  (bltstring :work-string 0 file-str-path 0 limit)
                  (sset :work-string limit 0) ;; C needs zeroed string buffer
                  (when (eqn 1 (|WDGOpenFile|
                                        :work-string :work-string-length))
                        (setq s (substring :work-string 0 
                                           (chrpos 0 :work-string)))
                        (for (i 0 1 (sub1 (slen s)))
                             (sset s i (lowercase (sref s i))))
                        s)))))

(defun :ask-string (msg default . open-flag)
   (:assure-extrnlib-loaded)
   (let ((s ()))
        (fillstring :work-string 0 0)
        (bltstring :work-string 0
                   (string (if (consp default) (car default) default)) 0)
        (when (eqn 1 (|WDGGetText| msg :work-string))
              (setq s (substring :work-string 0 (chrpos 0 :work-string)))
              (when (gt (slen s) 0)
                    s))))

(defun :ask-font ()
  (:assure-extrnlib-loaded)
  (let ((s ()))
       (fillstring :work-string 0 0)
       (when (eqn 1 (|WDGGetFont| :work-string))
             (setq s (substring :work-string 0 (chrpos 0 :work-string)))
             (when (gt (slen s) 0)
                   s))))

(defun :ask-color ()
   (:assure-extrnlib-loaded)
   (let ((color (makevector 3 0)))
        (when (eq (|WDGGetColor| color) 1)
              color)))

(defvar :return-button-box #[ok cancel abort retry ignore yes no])

(defvar :icons
        '((hand        . 0)		;; actually a STOP icon
          (question    . 1)		;; question mark
          (exclamation . 2)		;; exclamation mark
          (asterisk    . 3)))		;; actually an INFORMATION icon

(defvar :buttons
        '((ok                 . 0)
          (ok-cancel          . 1)
          (abort-retry-ignore . 2)
          (yes-no-cancel      . 3)
          (yes-no             . 4)
          (retry-cancel       . 5)))

(defun :message-box (message icon button modal)
   (:assure-extrnlib-loaded)
   (setq icon   (cassoc icon   :icons))
   (setq button (cassoc button :buttons))
   (setq modal  (if modal 1 0))
   (when (and icon button)
      (let ((ret (|WDGMessageBox| (string message) icon button modal)))
           (when (neq ret -1)
                 (vref :return-button-box ret)))))

;; only :store and :get-selection should be known outside...

(defun :store-selection (display buffer)
   (:assure-extrnlib-loaded)
   (|WDGSetClipboard| buffer "TEXT"))

(defun :get-selection (display)
   (:assure-extrnlib-loaded)
   (let (size (clipboard ()))
        (when (neq 0 (|WDGOpenClipboard|))
              (setq size (|WDGIsAvailable| "TEXT"))
              (when (and (> size 0) (<= size 32767))
                    ;; let's be sure there is a zero (1+ ...)
                    (setq clipboard (makestring (1+ size) 0))
                    (when (neq 0 (|WDGGetClipboard| clipboard "TEXT"))
                          (|WDGCloseClipboard|)
                          (substring clipboard 0 (chrpos 0 clipboard)))))))

;;; Get Windows Resource Information

;; Vector corresponding to SYSTEM, GDI, USER free resource + Free memory in Ko

(defvar :resources-info #[100 100 100 100])

(defun :get-resources-info ()
   (:assure-extrnlib-loaded)
   (|WDGResources| :resources-info)
   :resources-info)
