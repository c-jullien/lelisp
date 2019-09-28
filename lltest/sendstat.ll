(#:send-debug:init)

(de ltest ()
    (list #:send-debug:send-count 
          #:send-debug:get0-count
          #:send-debug:get1-count
          #:send-debug:loop-count))

(de test1 ()
    (#:send-debug:init)
    (ltest))

(de #:fix:foo (n) (list n n))

(de test2 (n)
    (#:send-debug:init)
    (repeat n (send 'foo 3))
    (ltest))

(de send-stat ()
    (let ((s  #:send-debug:send-count)
          (g  (+ #:send-debug:get0-count #:send-debug:get1-count))
          (l  #:send-debug:loop-count))
       (print "Nb d'appels a` SEND : " s)
       (print "Nb d'appels a` GETFN1 interne : " g)
       (print "Nb de EQ internes : "  l)
       (print "Rapport GETFN1/SEND : " (/ g s))
       (print "Rapport LOOP/SEND : " (/ l s))
       (print "Rapport LOOP/GETFN1 : " (/ l g))))

  
   
