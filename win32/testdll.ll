;;;; .EnTete	"Le-Lisp version 15.25" " " "testdll.ll"
;;;; .Date	"2003/05/23"
;;;; .EnPied	"testdll.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"ELIGIS, C. Jullien"
;;;; .Annexe I	""

;;; Check current version.

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testdll))

;;; Compute the location for the DLL

(defvar dllname (catenate #:system:system-directory "testdll.dll"))

;;; Standard tests

(defextern dllfloat      dllname (floatvector fix) fix)
(defextern dllstring     dllname (string fix) fix)
(defextern dllabs        dllname (fix) fix)
(defextern dllminus1     dllname () fix)

(if (memq (system) '(win32 win64 win95 nt386))
    (defextern dllsquarefloat dllname (float) float))
