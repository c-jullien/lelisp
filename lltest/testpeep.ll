;;; .EnTete "Le-Lisp (c) version 15.2" " " "Test du Peep Hole Optimiseur"
;;; .EnPied "testpeep.ll" "%" " "
;;;
;;; .SuperTitre "Test du Peep Hole Optimiseur"
;;;
;;;
;;; .Centre "*****************************************************************"
;;; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
;;; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
;;; .Centre "*****************************************************************"
;;;
;;; .Centre "$Header: /usr/cvs/lelisp/lltest/testpeep.ll,v 1.2 2016/05/22 05:38:15 jullien Exp $"

(unless (>= (version) 15.2)
        (error 'load 'erricf 'testpeep))


(unless (getdef '#:compiler:peephole)
        (loadmodule "peephole")
        (add-feature 'peephole))

(de foo1 l l)
(compile foo1 t)
(foo1 1 2 3)

(pprint (reverse (#:compiler:peephole (reverse '(

          (fentry foo subr1)
100
          (btnil a1 120)
104
          (cabeq a1 '1 201)
          (cabeq a1 '2 301)
          (cabeq a1 '99 990)
          (bfcons a1 102)
          (mov (car a1) a1)
          (bra 120)
()
()
()
101
102
          (mov nil a1)
          (push a1)
          (push a1)
          (push a1)
          (push a1)
          (push a1)
          (adjstk '2)
          (adjstk '3)
          (bra 119)
103
          (bra 104)

119
          (return)
          (return)
          (return)
120
          (return)
          (return)

201       (bra 202)
()
202
          (push (@ 204))
          (push (@ 203))
          (push a1)
          (mov '1 a4)
          (jmp list)
()
203
          (push a1)
          (mov '1 a4)
          (jmp list)
204
          (bra 120)


301       (mov nil a2)
          (jcall cons)
          (bra 120)

;         Labyrinthe de la MORT!

980       (mov a1 a1)
          (bra 993)
981       (mov a1 a1)
          (bra 992)
982       (mov a1 a1)
          (bra 991)
983       (mov a1 a1)          
990       (bra 993)
991       (bra 990)
992       (bra 991)
993       (bra 992)

))))))

(pprint (reverse (#:compiler:peephole (reverse '(
          
          (fentry foo subr0)
          (mov (@ 100) a1)
          (bri a1)
100
          (return)
          (nop)))))))

          
(when (typefn '#:compiler:ph-stat-print)
      (#:compiler:ph-stat-print))

