; Ce fichier de commande permet d'avoir des statistiques sur
; l'environnement standard. 
 
(defvar #:llcp:stat-flag t) 
(defvar #:compiler:ph-stat t) 
 
(load-std () t t t t t) 
 
(debug t) 
 
(llcp-std ()) 
(#:compiler:ph-stat-print) 
(#:llcp:stat-print) 
 
(defvar #:testcpl:speak1 t) 
(defvar #:testcpl:speak2 t) 
(libload "testcpl" t) 
(#:compiler:ph-stat-print) 
(#:llcp:stat-print) 
 
;(libload "testcp" t) 
;(#:compiler:ph-stat-print) 
;(#:llcp:stat-print) 
; 
;(libload "format" t) 
;(compile-all-in-core) 
;(#:compiler:ph-stat-print) 
;(#:llcp:stat-print) 
;(libload "testformat" t) 
; 
;(libload "ratio" t) 
;(compile-all-in-core) 
;(#:compiler:ph-stat-print) 
;(#:llcp:stat-print) 
;(libload "testratio" t) 
; 
;(libload "complex" t) 
;(compile-all-in-core) 
;(#:compiler:ph-stat-print) 
;(#:llcp:stat-print) 
;(libload "testcomplex" t) 
; 
(end) 
