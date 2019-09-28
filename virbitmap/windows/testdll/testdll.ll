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

(defvar testdll (catenate #:system:system-directory "testdll.dll"))

;;; Standard tests

(defextern dllfloat      testdll (floatvector fix) fix)
(defextern dllstring     testdll (string fix) fix)
(defextern dllabs        testdll (fix) fix)
(defextern dllminus1     testdll () fix)
(if (memq (system) '(win32 win64 win95 nt386))
    (defextern dllsquarefloat testdll (float) float))
    
