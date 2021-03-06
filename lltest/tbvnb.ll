;;;
;;; La liste des tests automatiques du BV en noir et blanc.

;;; .Centre "$Header: /usr/cvs/lelisp/lltest/tbvnb.ll,v 1.1 2006/12/09 11:22:16 jullien Exp $"




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

  

                 (test-serie "Tests spe'cifiques noir et blanc")


(display-depth (current-display))                   1





                 (test-serie "Tests de subst-colors")


(type-of (setq :black (make-named-color "black"))) color
(type-of (setq :white (make-named-color "white"))) color
(type-of (setq :red (make-named-color "red")))     color
(progn (setq :by1 (create-bytemap 35 35))
       (type-of :by1))                    bitmap
(progn (setq :xr (send 'extend :red)
	     :xw (send 'extend :white)
	     :xb (send 'extend :black)
	     )
       ())                                ()
(byteset :by1 12 17 :xr)                  #.:xr
(byteref :by1 12 17)                      #.:xr
(byteset :by1 20 11 :xw)                  #.:xw
(byteref :by1 20 11)                      #.:xw
(byteset :by1 10 13 :xb)                  #.:xb
(byteref :by1 10 13)                      #.:xb
;; En noir et blanc, subst-colors est sans effet.
(progn (subst-colors :by1 (list (cons :red :white) (cons :white :red))) ; swap.
       ())                                ()
(byteref :by1 12 17)                      #.:xr
(byteref :by1 20 11)                      #.:xw
(byteref :by1 10 13)                      #.:xb




            (test-serie "Tests de create-bytemap avant bitprologue")


(type-of (setq :by2 (create-bytemap 2 2 #[#*0100 #*0001]))) bitmap
(byteref :by2 0 0)                                        1
(byteref :by2 1 0)                                        0
(byteref :by2 0 1)                                        0
(byteref :by2 1 1)                                        1
(typep (send 'extend :by2) 'cons)                         ()
(bitmap-prologue (current-display) :by2)
                            (errbpa bitmap-prologue #.:by2)
(progn (setq :by4 ())
       (setq :bs1 (bitmap-save))
       ())                                                ()
(progn ;; A partir d'ici : plus de display.
  (print "Warning message must occur now...")
  (setq :by3 (create-bytemap 2 2 #[#*0100 #*0001]))
  (type-of :by3))                                         #:bitmap:bytemap
(type-of (send 'extend :by3))                             cons
(bitmap-prologue (current-display) :by3)
                            (#:display:no-current-display bitmap-prologue ())
(progn (bitmap-restore :bs1)
       ;; A partir d'ici : il y a nouveau un display.
       ())                                                ()
(progn (setq :by4 (bitmap-prologue (current-display) :by3))
       (type-of :by4))                                    bitmap
(typep (send 'extend :by4) 'cons)                         ()
(byteref :by4 0 0)                                        1
(byteref :by4 1 0)                                        0
(byteref :by4 0 1)                                        0
(byteref :by4 1 1)                                        1



             (test-serie "get-rgb-values")

;;;
;;; Sur sun3 n/b, rendent ().

(get-rgb-values (send 'extend :black))                     #[0 0 0]
;; Doit rendre environs #[32767 32767 32767]
(< (vref (get-rgb-values (send 'extend :white)) 0) 30000)  ()
(< (vref (get-rgb-values (send 'extend :white)) 1) 30000)  ()
(< (vref (get-rgb-values (send 'extend :white)) 2) 30000)  ()
