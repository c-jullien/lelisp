;;;
;;; testkern.ll:   tests of KerN functions
;;;
;;; $Source: /usr/cvs/lelisp/lltest/testkern.ll,v $
;;; $Date: 2016/05/21 10:36:07 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------

;;;
;;;	Common functions.
;;;
(defvar #:sys-package:colon 'testenv)
(unless (featurep 'q)
        (loadmodule "bnq"))

(defstruct testenv
  (name "")		;; tested function name
  (flag ())		;; to know if we continue the test.
  (hist "")		;; the form witch produce error.
  (depend "")		;; The test dependency.
)

;;; global numbers.
(defvar NumbVect (makearray 5 2 ()))
(defvar NumbProto ())
(defvar Ntmp2 ())
(defvar NtmpBig ())

(defmacro RN (n)
   `(aref Numbvect ,n 0))
(defmacro SN (n)
   `(aref NumbVect ,n 1))

;;; size of used numbers.
(defvar TESTLENGTH 16)      ;; form 4(n + 1)
(defvar DTL (/ TESTLENGTH 2))
(defvar QTL (/ TESTLENGTH 4))

;;; test numbers
(defvar TestCount 0)

(defun ResetTest (n)
   ;; reset of nieme number at prototype value.
   (BnAssign (RN n) 0 NumbProto 0 TESTLENGTH)
   (BnAssign (SN n) 0 NumbProto 0 TESTLENGTH) )

(defun Check (n)
   ;; Verifie than the n calculated values matches the simulated values.
   (tag diff
      (for (i 0 1 (1- n))
         (if (CheckSubRange i 0 TESTLENGTH) (exit diff 1)) )
      () ))

(defun CheckSubRange (x nd nl)
   ;; Verifie equality of sub-part numbers (RN(x), nd, nl) et (SN(x), nd, nl)
   (tag diff
      (while (neq nl 0)
         (decr nl)
         (if (neq (BnCompareDigits (RN x) nd (SN x) nd) 0)
            (exit diff (1+ nd)) )
         (incr nd) )
      () ))

(defun ShowDiff0 (e r1 r2)
   (ErrorPrint e)
   (if (neq r1 r2)
      (print "---- Result is " r1 " and must be " r2 "----") )
   (:flag e) )

(defun ShowDiff1 (e r1 r2 n nd nl)
   (ErrorPrint e)
   (if (neq r1 r2)
      (print "---- Result is " r1 " and must be " r2 "----") )
   (ShowOutRange 0 n nd nl)
   (ShowSubNumber 0 n nd nl)
   (:flag e) )

(defun ShowDiff2 (e r1 r2 n nd nl m md ml)
   (ErrorPrint e)
   (if (neq r1 r2)
      (print "---- Result is " r1 " and must be " r2 "----") )
   (ShowOutRange 0 n nd nl)
   (ShowOutRange 1 m md ml)
   (ShowSubNumber 0 n nd nl)
   (ShowSubNumber 1 m md ml)
   (:flag e) )

(defun ShowDiff3 (e r1 r2 n nd nl m md ml o od ol)
   (ErrorPrint e)
   (if (neq r1 r2)
      (print "---- Result is " r1 " and must be " r2 "----") )
   (ShowOutRange 0 n nd nl)
   (ShowOutRange 1 m md ml)
   (ShowOutRange 2 o od ol)
   (ShowSubNumber 0 n nd nl)
   (ShowSubNumber 1 m md ml)
   (ShowSubNumber 2 o od ol)
   (:flag e) )

(defun ShowDiff4 (e r1 r2 n nd nl m md ml o od ol p pd pl)
   (ErrorPrint e)
   (if (neq r1 r2)
      (print "---- Result is " r1 " and must be " r2 "----") )
   (ShowOutRange 0 n nd nl)
   (ShowOutRange 1 m md ml)
   (ShowOutRange 2 o od ol)
   (ShowOutRange 3 p pd ol)
   (ShowSubNumber 0 n nd nl)
   (ShowSubNumber 1 m md ml)
   (ShowSubNumber 2 o od ol)
   (ShowSubNumber 3 p pd pl)
   (:flag e) )

(defun ShowSubNumber (x n nd nl)
   (format t "[~A, ~A, ~A] =" n nd nl)
   (prin "	")
   (RangeNumberPrint "" (RN x) nd nl)
   (when (CheckSubRange x nd nl)
      (RangeNumberPrint " Before:	" NumbProto nd nl)
      (RangeNumberPrint " Simulated:	" (SN x) nd nl) ))

(defun RangeNumberPrint (s n nd nl)
   (let ( (first t) cnt )
      (with ( (obase 16) )
         (prin s " {")
         (while (neq nl 0)
            (decr nl)
            (ifn first (prin ", ") (setq first ()))
            (BnAssign Ntmp2 0 n (+ nd nl) 1)
            (setq cnt 0)
            (while (< cnt BN_DIGIT_SIZE)
               (BnShiftLeft Ntmp2 0 1 Ntmp2 1 4)
               (prin (BnGetDigit Ntmp2 1))
               (incr cnt 4) ))
         (print "}"))))

(defvar msg "---- Modification Out of Range of number ")
(defun ShowOutRange (x n nd nl)
   (let ( (i 0) (bol ()) )
      (while (setq i (CheckSubRange x i (- TESTLENGTH i)))
         (if (or (<= i nd) (> i (+ nd nl)))
            (if bol
               (prin " " (1- i))
               (setq bol t)
               (prin msg n " at index: (" (1- i)) )))
      (when bol (print ").")) ))

(defun ErrorPrint (e)
   (print "*** Error in compute : " (:hist e))
   (print "  Depend on " (:depend e)) )

;;;
;;;	no redefinisable functions test
;;;
(defvar genlengthvec #[9 8 1 0 2000 32000])
(defvar gentypevec   #[0 1 2 3 4 5])

(defun Generique (e)
)
#|
	int i;
	int length, length2;
	BigNumType type, type2;
	int fix;
	BigNum n;

	
   for(i=0; i < 6; i++) {
	type = gentypevec[i];
	length = genlengthvec[i];
	n = BnCreate(type, length);
	if((type2 = BnGetType(n)) != type) {
		sprintf(e->hist,"BnGetType(BnCreate(%d, %d));", type, length);
		if(ShowDiff0(e, type, type2)) return(TRUE);
	}
	if((length2 = BnGetSize(n)) != length) {
		sprintf(e->hist,"BnGetSize(BnCreate(%d, %d));", type, length);
		if(ShowDiff0(e, length, length2)) return(TRUE);
	}
	if(BnFree(n) == 0) {
		sprintf(e->hist, "BnFree(BnCreate(%d, %d));", type, length);
		if(ShowDiff0(e, 1, 0)) return(TRUE);
	}
	BnSetType((n = BnAlloc(length)), type);
	if((type2 = BnGetType(n)) != type) {
		sprintf(e->hist,"BnGetType(BnAlloc(%d, %d));", type, length);
		if(ShowDiff0(e, type, type2)) return(TRUE);
	}
	if((length2 = BnGetSize(n)) != length) {
		sprintf(e->hist,"BnGetSize(BnAlloc(%d, %d));", type, length);
		if(ShowDiff0(e, length, length2)) return(TRUE);
	}
	if(BnFree(n) == 0) {
		sprintf(e->hist, "BnFree(BnAlloc(%d, %d));", type, length);
		if(ShowDiff0(e, 1, 0)) return(TRUE);
	}
   }
   return(FALSE);
}
|#
;;;
;;; 1:	BnSetToZero
;;;
(defun ___BnSetToZero___ (n nd nl)
   (for (i 0 1 (1- nl))
      (BnSetDigit n (+ nd i) 0) ))

(defun TestBnSetToZero (e)
   (:depend e "()")
   (for (nd 0 1 TESTLENGTH)
      (for (nl 0 1 (- TESTLENGTH nd))
         (incr TestCount)
         (ResetTest 0)
         (   BnSetToZero    (RN 0) nd nl)
         (___BnSetToZero___ (SN 0) nd nl)
         (when (Check 1)
            (:hist e (format () "(~A n ~A ~A)" (:name e) nd nl))
            (if (ShowDiff1 e 0 0 "n" nd nl) (exit diff 1)) ))))

;;;
;;; 2:	BnAssign
;;;
(defun ___BnAssign___ (m md n nd nl)
   (BnSetToZero NtmpBig 0 nl)
   (BnAdd NtmpBig 0 nl n nd nl 0)
   (BnSetToZero m md nl)
   (BnAdd m md nl NtmpBig 0 nl 0) )

(defun TestBnAssign (e)
   (:depend e "(BnSetToZero, BnAdd)")
   (for (md 0 1 TESTLENGTH)
      (for (nd 0 1 TESTLENGTH)
         (for (nl 0 1 (- TESTLENGTH (max nd md)))
            (incr TestCount)
            (ResetTest 0)
            (   BnAssign    (RN 0) md (RN 0) nd nl)
            (___BnAssign___ (SN 0) md (SN 0) nd nl)
            (when (Check 1)
               (:hist e (format () "(~A n ~A n ~A ~A)" (:name e) md nd nl))
               (if (ShowDiff1 e 0 0 "n" md nl) (exit diff 1)) )))))

;;;
;;; 3:	BnNumDigits
;;;
(defun ___BnNumDigits___ (n nd nl)
   (while (and (neq nl 0) (neq (BnIsDigitZero n (+ nd (decr nl))) 0)))
   (add nl 1) )

(defun TestBnNumDigits (e)
   (:depend e "(BnIsDigitZero)")
   (for (nd0  0 2 TESTLENGTH) ; pas de 2!
      (for (nl0 0 1 (- TESTLENGTH nd0))
         (for (nd 0 2 TESTLENGTH)
            (for (nl 0 1 (- TESTLENGTH nd))
               (incr TestCount)
               (ResetTest 0)
               (BnSetToZero (RN 0) nd0 nl0)
               (BnSetToZero (SN 0) nd0 nl0)
               (setq l1    (BnNumDigits    (RN 0) nd nl))
               (setq l2 (___BnNumDigits___ (SN 0) nd nl))
               (when (or (Check 1) (neq l1 l2))
                  (:hist e (format () "(~A n ~A ~A)" (:name e) nd nl))
                  (if (ShowDiff1 e l1 l2 "n" nd nl) (exit diff 1)) ))))))

;;;
;;; 4:	BnNumLeadingZeroBitsInDigit
;;;
(defun ___BnNumLeadingZeroBitsInDigit___ (n nd)
   (let ( (p 0) )
      (if (neq (BnIsDigitZero n nd) 0)
         BN_DIGIT_SIZE
         (BnAssign Ntmp2 0 n nd 1)
         (BnShiftLeft Ntmp2 0 1 Ntmp2 1 1)
         (while (neq (BnIsDigitZero Ntmp2 1) 0)
            (BnShiftLeft Ntmp2 0 1 Ntmp2 1 1)
            (incr p) )
         p )))

(defun TestBnNumLeadingZeroBitsInDigit (e)
  (:depend e "(BnShiftLeft, BnIsDigitZero)")
  (ResetTest 0)
  (for (nd 0 1 (1- TESTLENGTH))
      (incr TestCount)
      (setq l1 (   BnNumLeadingZeroBitsInDigit    (RN 0) nd))
      (setq l2 (___BnNumLeadingZeroBitsInDigit___ (SN 0) nd))
      (when (or (Check 1) (neq l1 l2))
         (:hist e (format () "(~A n ~A)" (:name e) nd))
         (if (ShowDiff1 e l1 l2 "n" nd 1) (exit diff 1)) )))

;;;
;;; 5:	BnIsDigitZero
;;;
(defun ___BnIsDigitZero___ (n nd)
   (if (and (neq (BnDoesDigitFitInWord n nd) 0)
            (eq (BnGetDigit n nd) 0) )
       1
       0 ))

(defun TestBnIsDigitZero (e)
   (:depend e "()")
   (ResetTest 0)
   (for (nd 0 1 (1- TESTLENGTH))
      (incr TestCount)
      (setq l1 (   BnIsDigitZero    (RN 0) nd))
      (setq l2 (___BnIsDigitZero___ (SN 0) nd))
      (when (or (Check 1) (and (neq l1 l2) (or (= 0 l1) (= 0 l2))))
         (:hist e (format () "(~A n ~A)" (:name e) nd))
         (if (ShowDiff1 e l1 l2 "n" nd 1) (exit diff 1)) )))

;;;
;;; 6:	BnIsDigitNormalized
;;;
(defun ___BnIsDigitNormalized___ (n nd)
   (BnAssign Ntmp2 0 n nd 1)
   (BnShiftLeft Ntmp2 0 1 Ntmp2 1 1)
   (if (eq (BnIsDigitZero Ntmp2 1) 0) 1 0) )

(defun TestBnIsDigitNormalized (e)
   (:depend e "(BnShiftLeft, BnIsDigitZero)")
   (ResetTest 0)
   (for (nd 0 1 (1- TESTLENGTH))
      (incr TestCount)
      (setq l1 (   BnIsDigitNormalized    (RN 0) nd))
      (setq l2 (___BnIsDigitNormalized___ (SN 0) nd))
      (when (or (Check 1) (and (neq l1 l2) (or (= 0 l1) (= 0 l2))))
         (:hist e (format () "(~A n ~A)" (:name e) nd))
         (if (ShowDiff1 e l1 l2 "n" nd 1) (exit diff 1)) )))

;;;
;;; 7:	BnIsDigitOdd
;;;
(defun ___BnIsDigitOdd___ (n nd)
   (BnAssign Ntmp2 0 n nd 1)
   (BnShiftRight Ntmp2 0 1 Ntmp2 1 1)
   (if (eq (BnIsDigitZero Ntmp2 1) 0) 1 0) )

(defun TestBnIsDigitOdd (e)
   (:depend e "(BnShiftRight, BnIsDigitZero)")
   (ResetTest 0)
   (for (nd 0 1 (1- TESTLENGTH))
      (incr TestCount)
      (setq l1 (   BnIsDigitOdd    (RN 0) nd))
      (setq l2 (___BnIsDigitOdd___ (SN 0) nd))
      (when (or (Check 1) (and (neq l1 l2) (or (= 0 l1) (= 0 l2))))
         (:hist e (format () "(~A n ~A)" (:name e) nd))
         (if (ShowDiff1 e l1 l2 "n" nd 1) (exit diff 1)) )))

;;;
;;; 8:	BnCompareDigits
;;;
(defun ___BnCompareDigits___ (n nd m md)
   (BnAssign Ntmp2 0 n nd 1)
   (BnComplement Ntmp2 0 1)
   (if (neq (BnAdd Ntmp2 0 1 m md 1 0) 0)
      -1
      (BnComplement Ntmp2 0 1)
      (if (eq (BnIsDigitZero Ntmp2 0) 0) 1 0) ))

(defun TestBnCompareDigits (e)
   (:depend e "(BnComplement, BnAdd, BnIsDigitZero)")
   (ResetTest 0)
   (ResetTest 1)
   (for (nd 0 1 (1- TESTLENGTH))
      (for (md 0 1 (1- TESTLENGTH))
         (incr TestCount)
         (setq l1 (   BnCompareDigits    (RN 0) nd (RN 1) md))
         (setq l2 (___BnCompareDigits___ (SN 0) nd (SN 1) md))
         (when (or (Check 2) (neq l1 l2))
            (:hist e (format () "(~A n ~A m ~A)" (:name e) nd md))
            (if (ShowDiff2 e l1 l2 "n" nd 1 "m" md 1) (exit diff 1)) ))))

;;;
;;; 9:	BnComplement
;;;
(defun ___BnComplement___ (n nd nl)
   (BnSetDigit Ntmp2 0 0)
   (BnSubtractBorrow Ntmp2 0 1 0)
   (for (i 0 1 (1- nl))
      (BnXorDigits n (+ nd i) Ntmp2 0) ))

(defun TestBnComplement (e)
   (:depend e "(BnSubtractBorrow, BnXorDigits)")
   (for (nd 0 1 TESTLENGTH)
      (for (nl 0 1 (- TESTLENGTH nd))
         (incr TestCount)
         (ResetTest 0)
         (   BnComplement    (RN 0) nd nl)
         (___BnComplement___ (SN 0) nd nl)
         (when (Check 1)
            (:hist e (format () "(~A n ~A ~A)" (:name e) nd nl))
            (if (ShowDiff1 e 0 0 "n" nd nl) (exit diff 1)) ))))

;;;
;;; 10:	BnAndDigits
;;;
(defun ___BnAndDigits___ (n nd m md)
   (BnAssign Ntmp2 0 n nd 1)
   (BnOrDigits Ntmp2 0 m md)
   (BnXorDigits Ntmp2 0 m md)
   (BnXorDigits n nd Ntmp2 0) )

(defun TestBnAndDigits (e)
   (:depend e "(BnOrDigits, BnXorDigits)")
   (ResetTest 1)
   (for (nd 0 1 (1- TESTLENGTH))
      (for (md 0 1 (1- TESTLENGTH))
         (incr TestCount)
         (ResetTest 0)
         (   BnAndDigits    (RN 0) nd (RN 1) md)
         (___BnAndDigits___ (SN 0) nd (SN 1) md)
         (when (Check 2)
            (:hist e (format () "(~A n ~A m ~A)" (:name e) nd md))
            (if (ShowDiff2 e 0 0 "n" nd 1 "m" md 1) (exit diff 1)) ))))

;;;
;;; 11:	BnOrDigits
;;;
(defun ___BnOrDigits___ (n nd m md)
   (BnAssign Ntmp2 0 n nd 1)
   (BnAndDigits Ntmp2 0 m md)
   (BnXorDigits Ntmp2 0 m md)
   (BnXorDigits n nd Ntmp2 0) )

(defun TestBnOrDigits (e)
   (:depend e "(BnAndDigits, BnXorDigits)")
   (ResetTest 1)
   (for (nd 0 1 (1- TESTLENGTH))
      (for (md 0 1 (1- TESTLENGTH))
         (incr TestCount)
         (ResetTest 0)
         (   BnOrDigits    (RN 0) nd (RN 1) md)
         (___BnOrDigits___ (SN 0) nd (SN 1) md)
         (when (Check 2)
            (:hist e (format () "(~A n ~A m ~A)" (:name e) nd md))
            (if (ShowDiff2 e 0 0 "n" nd 1 "m" md 1) (exit diff 1)) ))))

;;;
;;; 12:	BnXorDigits
;;;
(defun ___BnXorDigits___ (n nd m md)
   (BnAssign Ntmp2 0 n nd 1)
   (BnAndDigits Ntmp2 0 m md)
   (BnComplement Ntmp2 0 1)
   (BnOrDigits n nd m md)
   (BnAndDigits n nd Ntmp2 0) )

(defun TestBnXorDigits (e)
   (:depend e "(BnAndDigits, BnComplement, BnOrDigits)")
   (ResetTest 1)
   (for (nd 0 1 (1- TESTLENGTH))
      (for (md 0 1 (1- TESTLENGTH))
         (incr TestCount)
         (ResetTest 0)
         (   BnXorDigits    (RN 0) nd (RN 1) md)
         (___BnXorDigits___ (SN 0) nd (SN 1) md)
         (when (Check 2)
            (:hist e (format () "(~A n ~A m ~A)" (:name e) nd md))
            (if (ShowDiff2 e 0 0 "n" nd 1 "m" md 1) (exit diff 1)) ))))

;;;
;;; 13:	BnShiftLeft
;;;
(defun ___BnShiftLeft___ (n nd nl m md s)
   (BnSetDigit m md 2)
   (BnSetDigit Ntmp2 0 1)
   (repeat s
      (BnSetToZero NtmpBig 0 2)
      (BnMultiplyDigit NtmpBig 0 2 Ntmp2 0 1 m md)
      (BnAssign Ntmp2 0 NtmpBig 0 1) )
   (BnSetToZero NtmpBig 0 (1+ nl))
   (BnMultiplyDigit NtmpBig 0 (1+ nl) n nd nl Ntmp2 0)
   (BnAssign n nd NtmpBig 0 nl)
   (BnAssign m md NtmpBig nl 1) )

(defun TestBnShiftLeft (e)
   (:depend e "(BnSetToZero, BnMultiplyDigit)")
   (ResetTest 1)
   (for (nd 0 1 TESTLENGTH)
      (for (nl 0 1 (- TESTLENGTH nd))
         (for (md 0 1 1)
            (for (s 0 1 (1- BN_DIGIT_SIZE))
               (incr TestCount)
               (ResetTest 0)
               (   BnShiftLeft    (RN 0) nd nl (RN 1) md s)
               (___BnShiftLeft___ (SN 0) nd nl (SN 1) md s)
               (when (Check 2)
                  (:hist e (format () "(~A n ~A ~A m ~A ~A)" (:name e)
                                  nd nl md s))
                  (if (ShowDiff2 e 0 0 "n" nd nl "m" md 1)
                     (exit diff 1) )))))))

;;;
;;; 14:	BnShiftRight
;;;
(defun ___BnShiftRight___ (n nd nl m md s)
   (if (or (eq nl 0) (eq s 0))
      (BnSetDigit m md 0)
      (BnAssign NtmpBig 0 n nd nl)
      (BnShiftLeft NtmpBig 0 nl NtmpBig nl (- BN_DIGIT_SIZE s))
      (BnAssign n nd NtmpBig 1 nl)
      (BnAssign m md NtmpBig 0 1) ))

(defun TestBnShiftRight (e)
   (:depend e "(BnShiftLeft)")
   (ResetTest 1)
   (for (nd 0 1 TESTLENGTH)
      (for (nl 0 1 (- TESTLENGTH nd))
         (for (md 0 1 1)
            (for (s 0 1 (1- BN_DIGIT_SIZE))
               (incr TestCount)
               (ResetTest 0)
               (   BnShiftRight    (RN 0) nd nl (RN 1) md s)
               (___BnShiftRight___ (SN 0) nd nl (SN 1) md s)
               (when (Check 2)
                  (:hist e (format () "(~A n ~A ~A m ~A ~A)" (:name e)
                                  nd nl md s))
                  (if (ShowDiff2 e 0 0 "n" nd nl "m" md 1)
                     (exit diff 1) )))))))

;;;
;;; 15:	BnAddCarry
;;;
(defun ___BnAddCarry___ (n nd nl r)
   (if (eq r 0)
      0
      (BnComplement n nd nl)
      (setq r (BnSubtractBorrow n nd nl 0))
      (BnComplement n nd nl)
      (if (eq r 0) 1 0) ))

(defun TestBnAddCarry (e)
   (:depend e "(BnComplement, BnSubtractBorrow)")
   (for (nd 0 1 TESTLENGTH)
      (for (nl 0 1 (- TESTLENGTH nd))
         (for (r 0 1 1)
            (incr TestCount)
            (ResetTest 0)
            (setq l1 (   BnAddCarry    (RN 0) nd nl r))
            (setq l2 (___BnAddCarry___ (SN 0) nd nl r))
            (when (or (Check 1) (neq l1 l2))
              (:hist e (format () "(~A n ~A ~A)" (:name e) nd nl r))
              (if (ShowDiff1 e l1 l2 "n" nd nl) (exit diff 1)) )))))

;;;
;;; 16:	BnAdd
;;;
(defun ___BnAdd___ (n nd nl m md ml r)
   (BnComplement m md ml)
   (setq r (BnSubtract n nd ml m md ml r))
   (BnComplement m md ml)
   (BnAddCarry n (+ nd ml) (- nl ml) r) )

(defun TestBnAdd (e)
   (:depend e "(BnComplement, BnSubtract, BnAddCarry)")
   (ResetTest 1)
   (for (nd 0 1 TESTLENGTH)
      (for (nl 0 1 (- TESTLENGTH nd))
         (for (md 0 1 (- TESTLENGTH nl))
            (for (ml 0 1 nl)
               (for (r 0 1 1)
                  (incr TestCount)
                  (ResetTest 0)
                  (setq l1 (   BnAdd    (RN 0) nd nl (RN 1) md ml r))
                  (setq l2 (___BnAdd___ (SN 0) nd nl (SN 1) md ml r))
                  (when (or (Check 2) (neq l1 l2))
                     (:hist e (format () "(~A n ~A ~A m ~A ~A ~A)" (:name e)
                                  nd nl md ml r ))
                     (if (ShowDiff2 e l1 l2 "n" nd nl "m" md ml)
                        (exit diff 1) ))))))))

;;;
;;; 17:	BnSubtractBorrow
;;;
(defun ___BnSubtractBorrow___ (n nd nl r)
   (if (eq r 1)
      1
      (BnComplement n nd nl)
      (setq r (BnAddCarry n nd nl 1))
      (BnComplement n nd nl)
      (if (eq r 0) 1 0) ))

(defun TestBnSubtractBorrow (e)
   (:depend e "(BnComplement, BnAddCarry)")
   (for (nd 0 1 TESTLENGTH)
      (for (nl 0 1 (- TESTLENGTH nd))
         (for (r 0 1 1)
            (incr TestCount)
            (ResetTest 0)
            (setq l1 (   BnSubtractBorrow    (RN 0) nd nl r))
            (setq l2 (___BnSubtractBorrow___ (SN 0) nd nl r))
            (when (or (Check 1) (neq l1 l2))
              (:hist e (format () "(~A n ~A ~A)" (:name e) nd nl r))
              (if (ShowDiff1 e l1 l2 "n" nd nl) (exit diff 1)) )))))

;;;
;;; 18:	BnSubtract
;;;
(defun ___BnSubtract___ (n nd nl m md ml r)
   (BnComplement m md ml)
   (setq r (BnAdd n nd ml m md ml r))
   (BnComplement m md ml)
   (BnSubtractBorrow n (+ nd ml) (- nl ml) r) )

(defun TestBnSubtract (e)
   (:depend e "(BnComplement, BnAdd, BnSubtractBorrow)")
   (ResetTest 1)
   (for (nd 0 1 TESTLENGTH)
      (for (nl 0 1 (- TESTLENGTH nd))
         (for (md 0 1 (- TESTLENGTH nl))
            (for (ml 0 1 nl)
               (for (r 0 1 1)
                  (incr TestCount)
                  (ResetTest 0)
                  (setq l1 (   BnSubtract    (RN 0) nd nl (RN 1) md ml r))
                  (setq l2 (___BnSubtract___ (SN 0) nd nl (SN 1) md ml r))
                  (when (or (Check 2) (neq l1 l2))
                     (:hist e (format () "(~A n ~A ~A m ~A ~A ~A)" (:name e)
                                  nd nl md ml r ))
                     (if (ShowDiff2 e l1 l2 "n" nd nl "m" md ml)
                        (exit diff 1) ))))))))

;;;
;;; 19:	BnMultiplyDigit
;;;
(defun ___BnMultiplyDigit___ (p pd pl n nd nl m md)
   (let ( (ret 0) (ret 0) )
      (BnAssign Ntmp2 0 m md 1)
      (BnAssign NtmpBig 0 n nd nl)
      (BnSetToZero NtmpBig nl 1)
      (while (eq (BnIsDigitZero Ntmp2 0) 0)
         (when (neq (BnIsDigitOdd Ntmp2 0) 0)
            (setq r (BnAdd p pd pl NtmpBig 0 (1+ nl) 0))
            (when (and (= ret 0) (= r 1)) (setq ret 1)) )
         (BnShiftRight Ntmp2 0 1 Ntmp2 1 1)
         (BnShiftLeft NtmpBig 0 (1+ nl) Ntmp2 1 1) )
      ret ))

(defun TestBnMultiplyDigit (e)
   (:depend e "(BnSetToZero, BnIsDigitZero, BnIsDigitOdd, BnAdd, BnShiftRight, BnShiftLeft)")
   (ResetTest 1)
   (ResetTest 2)
   (for (pd 0 2 TESTLENGTH) ; pas de 2!
      (for (pl 0 2 (- TESTLENGTH pd)) ; pas de 2!
         (for (nd 0 1 (- TESTLENGTH pl))
            (for (nl 0 1 (1- pl))
               (for (md 0 2 (1- TESTLENGTH)) ; pas de 2!
                  (incr TestCount)
                  (ResetTest 0)
                  (setq l1 (   BnMultiplyDigit    (RN 0) pd pl (RN 1) nd nl
                                                               (RN 2) md ))
                  (setq l2 (___BnMultiplyDigit___ (SN 0) pd pl (SN 1) nd nl
                                                               (SN 2) md ))
                  (when (or (Check 3) (neq l1 l2))
                     (:hist e (format () "(~A p ~A ~A n ~A ~A m ~A)" (:name e)
                                              pd pl nd nl md ))
                     (if (ShowDiff3 e l1 l2 "p" pd pl "n" nd nl "m" md 1)
                        (exit diff 1) ))))))))

;;;
;;; 20:	BnDivideDigit
;;;
(defun TestBnDivideDigit (e)
   (:depend e "(BnSetToZero, BnMultiplyDigit, BnCompareDigits)")
   (ResetTest 2)
   (ResetTest 3)
   (for (nd 0 1 (- TESTLENGTH 2))
      (for (nl 2 1 (- TESTLENGTH nd))
         (for (md 0 1 (1- TESTLENGTH))
            (for (qd 0 1 (- TESTLENGTH nl))
               (for (rd 0 1 1)
                  (when (and (= (BnIsDigitZero (RN 3) md) 0)
                             (= -1 (BnCompareDigits (RN 2) (1- (+ nd nl))
                                                    (RN 3) md )))
                     (incr TestCount)
                     (ResetTest 0)
                     (ResetTest 1)
                     (BnDivideDigit (RN 0) qd (RN 1) rd
                                    (RN 2) nd nl (RN 3) md )
                     (BnAssign (SN 0) qd (RN 0) qd (1- nl))
                     (BnAssign (SN 1) rd (RN 1) rd 1)
                     (BnSetToZero (SN 2) nd nl)
                     (BnAssign (SN 2) nd (SN 1) rd 1)
                     (setq l2 (BnMultiplyDigit (SN 2) nd nl (SN 0) qd (1- nl)
                                               (SN 3) md ))
                     (when (or (Check 4) (neq l2 0))
                        (:hist e (format () "(~A q ~A r ~A n ~A ~A m ~A)"
                                     (:name e) qd rd nd nl md ))
                        (if (ShowDiff4 e 0 l2 "q" qd (1- nl) "r" rd 1
                                              "n" nd nl      "m" md 1 )
                           (exit diff 1) )))))))))

;;;
;;;	Main
;;;
(defvar AllTest #[
	Generique				"generic functions"
	TestBnSetToZero				"BnSetToZero"
	TestBnAssign				"BnAssign"
	TestBnNumDigits				"BnNumDigits"
	TestBnNumLeadingZeroBitsInDigit		"BnNumLeadingZeroBitsInDigit"
	TestBnIsDigitZero			"BnIsDigitZero"
	TestBnIsDigitNormalized			"BnIsDigitNormalized"
	TestBnIsDigitOdd			"BnIsDigitOdd"
	TestBnCompareDigits			"BnCompareDigits"
	TestBnComplement			"BnComplement"
	TestBnAndDigits				"BnAndDigits"
	TestBnOrDigits				"BnOrDigits"
	TestBnXorDigits				"BnXorDigits"
	TestBnShiftLeft				"BnShiftLeft"
	TestBnShiftRight			"BnShiftRight"
	TestBnAddCarry				"BnAddCarry"
	TestBnAdd				"BnAdd"
	TestBnSubtractBorrow			"BnSubtractBorrow"
	TestBnSubtract				"BnSubtract"
	TestBnMultiplyDigit			"BnMultiplyDigit"
	TestBnDivideDigit			"BnDivideDigit"
])

(df test s
   (let ( (e (:make)) (n (length s)) )
      ;; Initialisation of test environnement.
      (:flag e 1)
      (:depend e "()")
      ;; Allocation of the 2 global numbers.
      (setq Ntmp2 (BnAlloc 2))
      (setq NtmpBig (BnAlloc (* 2 TESTLENGTH)))
      (setq NumbProto (BnAlloc TESTLENGTH))
      ;; Creation of prototype number.
      (BnSetDigit NumbProto 0 0)		    ; the 2 firsts at zero
      (BnSetDigit NumbProto 1 0)
      (for (i 0 1 (1- QTL))			    ; first fourth is the
         (BnSetDigit NumbProto (+ i 2) (1+ i)) )    ; continuation 1, 2, 3, ...
      ;;The 2nd fourth is the 1th shift of BN_DIGIT_SIZE - 2. 0x4000 0x8000 ...
      (BnAssign NumbProto (1+ QTL) NumbProto 2 (1- QTL))
      (BnShiftLeft NumbProto (1+ QTL) (1- QTL) NumbProto 0 (- BN_DIGIT_SIZE 2))
      ;; The 2nd half is the logical inverse of the first.
      (BnAssign NumbProto DTL NumbProto 0 DTL)
      (BnComplement NumbProto DTL DTL)
      ;; Allocation of used numbers.
      (for (i 0 1 4)
         (setf (RN i) (BnCreate 'n TESTLENGTH))
         (setf (SN i) (BnCreate 'n TESTLENGTH)) )
      (when (eq n 0)
         (print "(test [v] [a] [NOTEST])") )
      ;; We go now
      (setq SizeAllTest (/ (vlength AllTest) 2))
      (while s
         (selectq (car s)
            (m (:flag e (cadr s)) (nextl s))
            (a (for (i 0 1 (1-  SizeAllTest)) (dotest e i)))
            (v (for (i 0 1 (1- SizeAllTest)) (seetest i)))
            (t (setq nbtest (car s))
               (if (or (< nbtest 0) (>= nbtest SizeAllTest))
                  (print "test no " nbtest " is invalide")
                  (dotest e nbtest) )))
         (nextl s) ))
   (print "        [End of test]") ())

(defun dotest (e n)
   (seetest n)
   (let ((tt 0)(res ()))
     (setq TestCount 0)
     (:name e (vref AllTest (1+ (* n 2))))
     (when (and (tag diff
		     (setq tt
			   (time '(setq res
					(funcall (vref AllTest (* n 2))
						 e)) )
			   )
		     res)
		(> (:flag e) 1))
	   (exit 0) )
     (print TestCount " tests were performed in " tt " secs.") ))

(defun seetest (n)
  (print n ".	[" (vref AllTest (1+ (* n 2))) " test]"))
