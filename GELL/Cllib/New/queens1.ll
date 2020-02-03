
(defvar NB 0)
(defvar COL 0)
(defvar DM 0)
(defvar DP 0)
(defvar NBSOL 0)


(defmacro place (k i)
  `(and (eq (vref COL (sub1 ,i)) 0)
	(eq (vref DM  (add (sub1 NB) (sub ,k ,i))) 0)
	(eq (vref DP  (sub (add ,k ,i) 2)) 0)))

(defmacro placer (k i)
  `(progn
     (vset COL (sub1 ,i) ,k)
     (vset DM (add (sub1 NB) (sub ,k ,i)) ,k)
     (vset DP (sub (add ,k ,i) 2) ,k)))

(defmacro vider (k i)
  `(progn
     (vset COL (sub1  ,i) 0)
     (vset DM (add (sub1  NB) (sub ,k ,i)) 0)
     (vset DP (sub (add ,k ,i) 2) 0)))


(defun hr (k)
  (if (gt k NB)
    (setq  NBSOL (add1 NBSOL))
    (do ((i 1 (add1 i)))
	((gt i  NB))
	(when (place k i)
	  (placer  k i)
	  (hr (add1 k))
	  (vider   k i)))))

(defun start ()
  (setq NBSOL 0)
  (prinflush "Combien de reines ? ")
  (setq NB  (with ((prompt " ")) (read)))
  (setq COL (makevector NB 0))
  (setq DM  (makevector (sub1 (mul 2  NB)) 0))
  (setq DP  (makevector (sub1 (mul 2  NB)) 0))
  (prin "Temps ecoule : ")
  (print (time '(hr 1)))
  (print "Nombre de solutions: " NBSOL)
  )
