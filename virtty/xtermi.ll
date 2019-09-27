; Le_Lisp version 15.2 : compilation du terminal virtuel : xtermi

(setq #:sys-package:tty '#:tty:xtermi)

(defvar #:tty:xtermi:xmax 79)
(defvar #:tty:xmax 79) ;  compatibilite' v15

(defvar #:tty:xtermi:ymax 23)
(defvar #:tty:ymax 23) ;  compatibilite' v15

(de #:tty:xtermi:tycursor (col line)
    (let ((#:sys-package:tty 'tty))
      (#:tty:tyo 27 91)
      (incr line)
      (incr col)
      (tyod line 0)
      (#:tty:tyo 59)
      (tyod col 0)
      (#:tty:tyo 72)))

(de #:tty:xtermi:tycls ()
    (let ((#:sys-package:tty 'tty))
      (#:tty:tyo 27 91 72 27 91 50 74)))

(de #:tty:xtermi:tycleol ()
    (let ((#:sys-package:tty 'tty))
      (#:tty:tyo 27 91 75)))

(de #:tty:xtermi:tycleos ()
    (let ((#:sys-package:tty 'tty))
      (#:tty:tyo 27 91 74)))

(de #:tty:xtermi:tydelch ()
    (let ((#:sys-package:tty 'tty))
      (#:tty:tyo 27 91 80)))

(de #:tty:xtermi:tybs ()
    (let ((#:sys-package:tty 'tty))
      (#:tty:tyo 27 91 80)))

(de #:tty:xtermi:tyinsln ()
    (let ((#:sys-package:tty 'tty))
      (#:tty:tyo 27 91 76)))

(de #:tty:xtermi:tydelln ()
    (let ((#:sys-package:tty 'tty))
      (#:tty:tyo 27 91 77)))

(de #:tty:xtermi:tyattrib (x)
    (let ((#:sys-package:tty 'tty))
      (if x (#:tty:tyo 27 91 55 109) (#:tty:tyo 27 91 109))))

(defvar #:tty:xtermi:tyattrib ())
(defvar #:tty:tyattrib ()) ;  compatibilite' v15

(de #:tty:xtermi:tygraphicset (x)
    (let ((#:sys-package:tty 'tty))
      (if x (#:tty:tyo 27 #/( #/0) (#:tty:tyo 27 #/( #/B))))))

(defvar #:tty:xtermi:tygraphicset ())

(de #:tty:xtermi:tyinsch (arg)
    (let ((#:sys-package:tty 'tty))
      (#:tty:tyo 27 91 64 arg)))

(de #:tty:xtermi:typrologue ()
    (let ((#:sys-package:tty 'tty))
      (#:tty:tyo 27 91 114 27 27 91 109 27 91 50 74 27 91 72 27 91 63 55 104 27 91 63 
                 49 59 51 59 52 59 54 108)
      (tycls)))

(de #:tty:xtermi:tyepilogue ()
    (let ((#:sys-package:tty 'tty))
      (tycursor 0 (sub1 #:tty:xtermi:ymax))))

(defvar #:tty:xtermi:tyshowcursor t)
(defvar #:tty:tyshowcursor t) ;  compatibilite' v15

(defvar #:tty:block 128)
(defvar #:tty:lrcorner 129)
(defvar #:tty:urcorner 130)
(defvar #:tty:ulcorner 131)
(defvar #:tty:llcorner 132)
(defvar #:tty:crossing 133)
(defvar #:tty:hline1 134)
(defvar #:tty:hline2 135)
(defvar #:tty:hline3 136)
(defvar #:tty:hline4 137)
(defvar #:tty:hline5 138)
(defvar #:tty:leftt 139)
(defvar #:tty:rightt 140)
(defvar #:tty:bottomt 141)
(defvar #:tty:topt 142)
(defvar #:tty:vline 143)

(defvar #:tty:xtermi:spchar
  #[97 106 107 108 109 110 111 112 113 114 115 116 117 118 119 120])

(de #:tty:xtermi:tyo (c1 . rest)
    (if (ge c1 #$90)
        (progn
          (unless (tyattrib)
                  (tyattrib t)))
      (when (tyattrib)
            (tyattrib ())))
    (setq c1 (logand c1 #$7f))
    (if (lt c1 #$20)
        (progn
          (setq c1 (logand c1 #$f))
          (unless (tygraphicset)
                  (tygraphicset t))
          (setq c1 (vref #:tty:xtermi:spchar c1)))
      (when (tygraphicset)
            (tygraphicset ())))
    (#:tty:tyo c1)
    (while rest
      (#:tty:xtermi:tyo (nextl rest))))

(de #:tty:xtermi:tyod (x n)
    ; Affiche l'entier <x> sur au moins <n> caracte`res
    (when (or (gt n 1) (gt x 9)) (#:tty:tyod (div x 10) (sub1 n)))
    (#:tty:tyo (add #/0 (rem x 10))))

(defvar #:tty:keytree '((27 (91 (65 . up) (66 . down)
                                (67 . right) (68 . left)
                                (49 (49 (126 . f1))
                                    (50 (126 . f2))
                                    (51 (126 . f3))
                                    (52 (126 . f4))
                                    (53 (126 . f5))
                                    (54 (126 . f6))
                                    (55 (126 . f7))
                                    (56 (126 . f8))
                                    (57 (126 . f9)))))))

