; llinit
; toperr
; gc             teste
; physio
; read           teste
; macroch        teste
; print          
; eval           teste
; fspecs         teste
; cntrl          teste
; carcdr         teste
; symbs          teste
; fntstd         teste
; number
; specnb
; string         teste
; chars          teste
; extend         teste
; bllsht         teste



(loadfile "llm3tolo.ll" t)


(setq list-of-llm3-files '(

;gc
;read 
;macroch
;eval 
;fspecs 
;cntrl 
;carcdr
;symbs
;fntstd 
;string
;chars
;extend
;bllsht

))

(llm3tolo list-of-llm3-files)

(loadfile "modtoc.ll" t)
(loadfile "modopt.ll" t)
(loadfile "modpeep.ll" t)



(setq #:modtoc:llm3-module-p t)
(setq #:modtoc:peephole-optimize-p       t)
(setq #:modtoc:optimize-local-labels-p   t)

(setq #:modtoc:stats-on-C-size-p         t)
(setq #:modtoc:peephole-debug            ())
(setq #:modtoc:doit-debug                ())
(setq #:modtoc:C-verbose-mode            ())

(defun llm3-module-to-c (lmod)
  (mapc (lambda (mod)
	  (module-to-c mod)
	  (comline (catenate "cc -O4 -c " mod ".c"))
	  (comline (catenate "mv " mod ".o /nfs/work/lelisp/GELL/sun4/o")))
	lmod))


(llm3-module-to-c list-of-llm3-files)





