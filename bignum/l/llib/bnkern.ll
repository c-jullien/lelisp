;;; On exporte la de'finition des globales.
(eval-when (load compile eval)
   (defvar BN_DIGIT_SIZE 16)
   (defvar BN_WORD_SIZE 15) )

;;; Arithmetique Machine: fichier bnkern.ll
(unless (>= (version) 15.2)
	(error 'load 'erricf 'bnkern))
(add-feature 'kern)

(defvar #:ex:regret 0)

;;.Section "Primitives e'crites en assembleur ou en C"
(defun BnSetToZero (nn nd nl)
   (fillvector nn nd 0 nl) )

(defun BnAssign (mm md nn nd nl)
   (bltvector mm md nn nd nl) )

(defun BnSetDigit (nn nd d)
   (vset nn nd d) )

(defun BnGetDigit (nn nd)
   (vref nn nd) )

(defun BnNumDigits (nn nd nl)
   (if (eq nl 0)
      1
      (setq nl (add nd nl))
      (while (and (gt (setq nl (sub1 nl)) nd) (eq 0 (vref nn nl))))
      (add1 (sub nl nd)) ))

(defun BnNumLeadingZeroBitsInDigit (nn nd)
    (let ((i 0) (c (vref nn nd)))
         (if (eq c 0)
             BN_DIGIT_SIZE
             (while (ge c 0) (setq c (logshift c 1) i (add1 i)))
             i )))

(defun BnDoesDigitFitInWord (nn nd)
   (if (ge (vref nn nd) 0) 1 0) )

(defun BnIsDigitZero (nn nd)
   (if (eq 0 (vref nn nd)) 1 0) )

(defun BnIsDigitNormalized (nn nd)
   (if (lt (vref nn nd) 0) 1 0) )

(defun BnIsDigitOdd (nn nd)
   (logand (vref nn nd) 1) )

(defun BnCompareDigits (mm md nn nd)
   (ex? (vref mm md) (vref nn nd)) )

(defun BnComplement (nn nd nl)
   (setq nl (add nd nl))
   (while (ge (setq nl (sub1 nl)) nd)
      (vset nn nl (lognot (vref nn nl))) ))

(defun BnAndDigits (mm md nn nd)
   (vset mm md (logand (vref mm md) (vref nn nd))) )

(defun BnOrDigits (mm md nn nd)
   (vset mm md (logor (vref mm md) (vref nn nd))) )

(defun BnXorDigits (mm md nn nd)
   (vset mm md (logxor (vref mm md) (vref nn nd))) )

(defun BnShiftLeft (mm md ml nn nd nbi)
   (let ( (bout (add md ml)) (rnbi (sub nbi BN_DIGIT_SIZE)) (res 0) save )
      (while (lt md bout)
         (vset mm md (logor (logshift (setq save (vref mm md)) nbi) res))
         (setq res (logshift save rnbi) md (add1 md)) )
      (vset nn nd res) ))

(defun BnShiftRight (mm md ml nn nd nbi)
   (setq nbi (sub 0 nbi))
   (let ( (i (add md ml)) (lnbi (add nbi BN_DIGIT_SIZE)) (res 0) save )
      (while (ge (setq i (sub1 i)) md)
         (vset mm i (logor (logshift (setq save (vref mm i)) nbi) res))
         (setq res (logshift save lnbi)) )
      (vset nn nd res) ))

(defun BnAddCarry (nn nd nl car)
   (let ( (bout (add nd nl)) )
      (setq car (if (eq car 0) 1 0))
      (while (and (eq car 0) (lt nd bout))
         (vset nn nd (setq car (add1 (vref nn nd))))
         (setq nd (add1 nd)) )
      (if (eq car 0) 1 0) ))

(defun BnAdd (mm md ml nn nd nl car)
   (let ( (bout (add nd nl)) (bout2 (add md ml)) )
      (setq #:ex:regret car)
      (while (lt nd bout)
         (vset mm md (ex+ (vref mm md) (vref nn nd)))
         (setq md (add1 md) nd (add1 nd)) )
      (setq car (if (eq #:ex:regret 0) 1 0))
      (while (and (eq car 0) (lt md bout2))
         (vset mm md (setq car (add1 (vref mm md))))
         (setq md (add1 md)) )
      (if (eq car 0) 1 0) ))

(defun BnSubtractBorrow (nn nd nl car)
   (let ( (bout (add nd nl)) )
      (when (eq car 0) (setq car -1))
      (while (and (eq car -1) (lt nd bout))
         (vset nn nd (setq car (sub1 (vref nn nd))))
         (setq nd (add1 nd)) )
      (if (eq car -1) 0 1) ))

(defun BnSubtract (mm md ml nn nd nl car)
   (let ( (bout (add nd nl)) (bout2 (add md ml)) )
      (setq #:ex:regret car)
      (while (lt nd bout)
         (vset mm md (ex+ (vref mm md) (lognot (vref nn nd))))
         (setq md (add1 md) nd (add1 nd)) )
      (setq car (if (eq #:ex:regret 0) -1 1))
      (while (and (eq car -1) (lt md bout2))
         (vset mm md (setq car (sub1 (vref mm md))))
         (setq md (add1 md)) )
      (if (eq car -1) 0 1) ))

(defun BnMultiplyDigit (pp pd pl mm md ml nn nd)
   (let ( (c (vref nn nd)) )
      (cond
         ((eq c 0) 0)
         ((eq c 1) (BnAdd pp pd pl mm md ml 0))
         (t (let ( (bout (add md ml)) (bout2 (add pd pl)) )
               (setq #:ex:regret 0)
               (while (lt md bout)
                  (vset pp pd (ex* (vref mm md) c (vref pp pd)))
                  (setq pd (add1 pd) md (add1 md)) )
               (while (and (neq #:ex:regret 0) (lt pd bout2))
                  (vset pp pd (ex+ (vref pp pd) 0))
                  (setq pd (add1 pd)) )
               #:ex:regret )))))

(defun BnDivideDigit (qq qd rr rd nn nd nl d dd)
   (let ( (i (add nd nl)) (j (sub1 (add qd nl))) (c (vref d dd)) )
      (setq #:ex:regret (vref nn (setq i (sub1 i))))
      (while (ge (setq i (sub1 i)) nd) 
         (setq j (sub1 j))
         (vset qq j (ex/ (vref nn i) c)) )
      (vset rr rd #:ex:regret) ))

;;.Section "Allocations propres a` Le-Lisp"
(defun BnAlloc (i)
   (makevector i 0) )

(defun BnCreate (Ad i)
   (let ( (n (makevector i 0)) )
      (typevector n Ad)
      n ))

(defun BnFree (n) 1)

(defun BnGetType (n)
   (typevector n) )

(defun BnSetType (n Ad)
   (typevector n Ad) )

(defun BnGetSize (n)
   (vlength n) )

(defvar #:KerN:tampon (BnCreate 'n 2))
(defun #:n:prin (s)
   (let ( cnt )
      (with ( (obase 16) )
         (for (i (sub1 (BnGetSize s)) -1 0)
            (BnAssign #:KerN:tampon 0 s i 1)
            (setq cnt 0)
            (while (< cnt BN_DIGIT_SIZE)
               (BnShiftLeft #:KerN:tampon 0 1 #:KerN:tampon 1 4)
               (prin (BnGetDigit #:KerN:tampon 1))
               (incr cnt 4) )))))
