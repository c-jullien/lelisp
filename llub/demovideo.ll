
(libload schedule)

(de demo ()
    (ifn (featurep 'window)
         (error 'demo "Pas de fenetres" ())
         (let ((w1) (w2) (w3))
              (protect (progn (setq w1 (create-window '#:window:tty
                                           1 1  76 21 "Hanoi 1" 0 1)
                                    w2 (create-window '#:window:tty 
                                           1 25 76 21 "Hanoi 2" 0 1)
                                    w3 (create-window '#:window:tty 
                                           1 49 76 20 "Hanoi 3" 0 1))
                              (bitmap-refresh)
                              (progn (with ((current-window w3)) (hanoi 8))
                                     (with ((current-window w2)) (hanoi 7))
                                     (with ((current-window w1)) (whanoi 9))))
                       (kill-window w1)
                       (kill-window w2)
                       (kill-window w3)))))


(print "(demo) pour voir.")

