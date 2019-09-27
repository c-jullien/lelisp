;;;
;;; La liste des tests automatiques du BV en couleur.

;;; .Centre "$Header: /usr/cvs/lelisp/lltest/tbvcolor.ll,v 1.1 2006/12/09 11:22:16 jullien Exp $"




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

  

                 (test-serie "Tests des mutables")



(eq (display-depth (current-display)) 1)                   ()

;; Sur l'ancien BV, les mutables colors avaient des champs faux.
(type-of (setq :mu (make-mutable-color 111 3333 777)))     color
(red-component :mu)                                        111
(green-component :mu)                                      3333
(blue-component :mu)                                       777




                 (test-serie "Tests de subst-colors")


(type-of (setq :black (make-named-color "black"))) color
(type-of (setq :white (make-named-color "white"))) color
(type-of (setq :red (make-named-color "red")))     color
(progn (setq :by1 (create-bytemap 35 35))
       (type-of :by1))                    #:bitmap:bytemap
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
(progn (subst-colors :by1 (list (cons :red :white) (cons :white :red))) ; swap.
       ())                                ()
(byteref :by1 12 17)                      #.:xw
(byteref :by1 20 11)                      #.:xr
(byteref :by1 10 13)                      #.:xb



                 (test-serie "Tests de create-bytemap avant bitprologue")


(progn (print "Warning message must occur now...")
       (type-of (setq :by2 (create-bytemap 2 2 #[#*0102 #*0304]))))
                                                          #:bitmap:bytemap
(send 'bytes :by2)                                        #[#*0102 #*0304]
(byteref :by2 0 0)                                        1
(byteref :by2 1 0)                                        2
(byteref :by2 0 1)                                        3
(byteref :by2 1 1)                                        4
(typep (send 'extend :by2) 'cons)                         ()
(bitmap-prologue (current-display) :by2)
                            (errbpa bitmap-prologue #.:by2)
(progn (setq :by4 ())
       (setq :bs1 (bitmap-save))
       ;; A partir d'ici : plus de display.
       (current-display))                                 ()
(type-of (setq :by3 (create-bytemap 2 2 #[#*0102 #*0304])))
                                                          #:bitmap:bytemap
(type-of (send 'extend :by3))                             cons
(bitmap-prologue (current-display) :by3)
                            (#:display:no-current-display bitmap-prologue ())
(progn (bitmap-restore :bs1)
       ;; A patir d'ici : il y a nouveau un display.
       ())                                                ()
(progn (setq :by4 (bitmap-prologue (current-display) :by3))
       (type-of :by4))                                    #:bitmap:bytemap
(typep (send 'extend :by4) 'cons)                         ()
(byteref :by4 0 0)                                        1
(byteref :by4 1 0)                                        2
(byteref :by4 0 1)                                        3
(byteref :by4 1 1)                                        4



             (test-serie "name-to-rgb")


(< (vref (name-to-rgb "red") 0) 30000)                    ()
(vref (name-to-rgb "red") 1)                              0
(vref (name-to-rgb "red") 2)                              0
(vref (name-to-rgb "blue") 1)                              0
(vref (name-to-rgb "blue") 0)                              0
(< (vref (name-to-rgb "blue") 2) 30000)                    ()



             (test-serie "get-rgb-values")

(< (vref (get-rgb-values (send 'extend :red)) 0) 30000)    ()
(vref (get-rgb-values (send 'extend :red)) 1)              0
(vref (get-rgb-values (send 'extend :red)) 2)              0
