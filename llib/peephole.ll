;;;
;;; PEEPHOLE:  The standard peephole optimizer.
;;;
;;; $Source: /usr/cvs/lelisp/llib/peephole.ll,v $
;;; $Date: 2016/05/21 10:36:06 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(unless (>= (version) 15.2)
        (error 'load 'erricf 'peephole))
 
(defvar #:sys-package:colon 'compiler)


;;; Peephole optimizer for LLCP and Complice. It handles:
;;;   - JRST hacks
;;;   - branch tensioning
;;;   - extra RETURN removal
;;;   - ADJSTK merge

;;; Take care of infinite loop.

;;; Works in a REVERTED list of LAP instructions.


;;;
;;; Global Variables
;;;

(unless (boundp ':ph-debug)
        (defvar :ph-debug ()))  ; to display the work

(unless (boundp ':ph-stat)      ; to print statistics
        (defvar :ph-stat ()))

#+ :ph-stat (defvar :ph-call 0.0)  ; nb of calls to peephole
#+ :ph-stat (defvar :ph-len1 0.0)  ; length of the LAP list before
#+ :ph-stat (defvar :ph-len2 0.0)  ; length of the LAP list after

#+ :ph-stat (defvar :ph-lab0 0.0)
#+ :ph-stat (defvar :ph-lab1 0.0)
#+ :ph-stat (defvar :ph-lab2 0.0)
#+ :ph-stat (defvar :ph-lab3 0.0)

#+ :ph-stat (defvar :ph-opt0 0.0)
#+ :ph-stat (defvar :ph-opt1 0.0)
#+ :ph-stat (defvar :ph-opt2 0.0)

#+ :ph-stat (defvar :ph-tns1 0.0)

#+ :ph-stat (defvar :ph-bra0 0.0)
#+ :ph-stat (defvar :ph-bra1 0.0)
#+ :ph-stat (defvar :ph-bra2 0.0)
#+ :ph-stat (defvar :ph-bra3 0.0)

#+ :ph-stat (defvar :ph-psh0 0.0)
#+ :ph-stat (defvar :ph-psh1 0.0)
#+ :ph-stat (defvar :ph-psh2 0.0)
#+ :ph-stat (defvar :ph-psh3 0.0)

#+ :ph-stat (defvar :ph-mov0 0.0)
#+ :ph-stat (defvar :ph-mov1 0.0)

#+ :ph-stat (defvar :ph-ret0 0.0)
#+ :ph-stat (defvar :ph-ret1 0.0)
#+ :ph-stat (defvar :ph-ret2 0.0)
#+ :ph-stat (defvar :ph-ret3 0.0)
#+ :ph-stat (defvar :ph-ret4 0.0)

#+ :ph-stat (defvar :ph-adj1 0.0)

#+ :ph-stat (defun :ph-stat-print ()
      (print "total nb of calls  :ph-call= " :ph-call)
      (print "length before     :ph-len1 = " :ph-len1)
      (print "lengt after       :ph-len2 = " :ph-len2)
      (print "   et = ()            :ph-lab0 = " :ph-lab0)
      (print "   et1: et2:          :ph-lab1 = " :ph-lab1)
      (print "   et1: return        :ph-lab2 = " :ph-lab2)
      (print "   et1: bra et2       :ph-lab3 = " :ph-lab3)
      (print "total nb opt et:   :ph-opt0 = " :ph-opt0)
      (print "   bra xx xx:         :ph-opt1 = " :ph-opt1)
      (print "   regular            :ph-opt2 = " :ph-opt2)
      (print "branch tensionning :ph-tns1 = " :ph-tns1)
      (print "total nb of bra    :ph-bra0 = " :ph-bra0)
      (print "   bra xx...xx:return :ph-bra1 = " :ph-bra1)
      (print "   bra bra/jmp/ret    :ph-bra2 = " :ph-bra2)
      (print "   regular            :ph-bra3 = " :ph-bra3)
      (print "total nb of push @ :ph-psh0 = " :ph-psh0)
      (print "   @ ret removed      :ph-psh1 = " :ph-psh1)
      (print "   @ lab modified     :ph-psh2 = " :ph-psh2)
      (print "   regular            :ph-psh3 = " :ph-psh3)
      (print "total nb of mov @  :ph-mov0 = " :ph-mov0)
      (print "   @ lab modified     :ph-mov1 = " :ph-mov1)
      (print "total nb of return :ph-ret0 = " :ph-ret0)
      (print "   ret bra/jmp/ret    :ph-ret1 = " :ph-ret1)
      (print "   jcall ret          :ph-ret2 = " :ph-ret2)
      (print "   call ret           :ph-ret3 = " :ph-ret3)
      (print "   regular            :ph-ret4 = " :ph-ret4)
      (print " ajdstk 'n adjstk 'n  :ph-adj1 = " :ph-adj1)
    )


#+ :ph-debug (defun :voir-lap (l)
	       ;; to be pretty
	       (pprint (mcons 'tagbody (reverse l))))

;;; List of functions for which it's not allowed to perform
;;; a JRST Hack. These are not regular functions!

(defvar :no-jrst-hack
    '(#:llcp:nlist #:llcp:cbindl #:llcp:cbinds #:llcp:tagbody
      #:llcp:with-interrupts #:llcp:without-interrupts
      #:llcp:schedule #:llcp:block #:llcp:protect #:llcp:tag))

;;;
;;; Exported function
;;;

(defun :peephole (lap)
  ;; peep-hole optimizer on a LAP list
  #+ :ph-stat (incr :ph-call)
  (let ((:aph ())
	(:ret 29999)  ; address of the 1rst label "return"
	(:retp ())    ; flag: :ret has been used.
	(:loop 29998) ; address of an infinite loop
	(:loopp)      ; flag: :lop has beeb used.
	(et1)         ; work label
	(et2)         ;    same
	(l)           ; a working list
	(la)          ;    same
	(ld))         ;    same
    ;;
    ;; I - First pass
    ;;===============
    ;;
    ;; Build an A-list of equivalent labels
    ;;     (etiq1 . etiq2) ou (etiq1 . :ret) ou (etiq1 . :loop)
    ;;
    ;; and if I see:
    ;;       et1:        et1:               et1:
    ;;       et2:          (BRA et2)          (RETURN)
    ;; I realize the equivalence et1 = et2 (or return) and I remove
    ;; et1 to keep only the used labels.
    ;; More, I remove all the labels = ().
    #+ :ph-debug (:voir-lap lap)
    #+ :ph-stat (incr :ph-len1 (length lap))
    (setq l lap)
    (while (consp l)
      (setq la (car l) ld (cdr l))
      (cond ((and (consp ld) (null (car ld)))
	     #+ :ph-stat (incr :ph-lab0)
	     ;; for Bernard ...
	     (rplacd l (cdr ld)))
	    ((null la)
	     #+ :ph-stat (incr :ph-lab0)
	     ;; for Bernard again ...
	     (if (consp ld)
		 (rplac l (car ld) (cdr ld))
	         (setq l ())))
	    ((atom la)
	     ;; generated label (by the compiler)
	     (ifn (and (car ld) (atom (car ld)))
		  (setq l ld)
		  #+ :ph-stat (incr :ph-lab1)
		  (setq :aph (acons (car ld) la :aph))
		  (rplacd l (cdr ld))))
	    ((eq (car la) 'RETURN)
	     (ifn (and (car ld) (atom (car ld)))
		  ;; not a label followed by (return)
		  (setq l ld)
		  ;; a label followed by (return)
		  #+ :ph-stat (incr :ph-lab2)
		  (setq :aph (acons (car ld) :ret :aph))
		  (rplacd l (cdr ld))))
	    ((eq (car la) 'BRA)
	     (ifn (and (car ld) (atom (car ld)))
		  (setq l ld)
		  #+ :ph-stat (incr :ph-lab3)
		  (setq :aph (acons (car ld)
				    (if (eq (car ld) (cadr la))
					:loop
				        (cadr la))
				    :aph))
		  (rplacd l (cdr ld))))
	    (t (setq l ld))))
    #+ :ph-debug (:voir-lap lap)
    ;;
    ;; II - SOlve the label table
    ;;===========================
    ;;
    #+ :ph-debug (pprint :aph)
    (let ((al :aph))
      (while (consp al)
	(if (setq et2 (cassq (cdar al) :aph))
	    (rplacd (car al)
		    (if (neq et2 (caar al))
			;; loop test: re: go re
			et2
		        :loop))
	  (setq al (cdr al)))))
    #+ :ph-debug (pprint :aph)
    ;;
    ;; III - Simplify the LAP list
    ;;============================
    ;;
    (setq l lap)
    (while (consp l)
      (setq la (car l) ld (cdr l))
      (cond 
       ;;
       ;; a label
       ;;
       ((atom la)
	#+ :ph-stat (incr :ph-opt0)
	(cond ((and (consp (car ld))
		    (eq (caar ld) 'BRA)
		    (or (eq (cadar ld) la)
			(eq (cassq (cadar ld) :aph) la)))
	       ;; (BRA xx) xx == xx
	       #+ :ph-stat (incr :ph-opt1)
	       (rplacd l (cdr ld)))
	      (t #+ :ph-stat (incr :ph-opt2)
		 (setq l ld))))
       ;;
       ;; BRA
       ;;
       ((eq (car la) 'BRA)
	#+ :ph-stat (incr :ph-bra0)
	(cond ((eq (setq et2 (cassq (cadr la) :aph)) :ret)
	       ;; (BRA xx) ... xx (RETURN) == (RETURN)
	       #+ :ph-stat (incr :ph-bra1)
	       (rplaca l '(RETURN)))
	      ((and (consp (car ld))
		    (memq (caar ld) '(BRA JMP RETURN)))
	       ;; unreachable code.
	       ;; (RETURN) (BRA xxx) == (RETURN)
	       ;; (BRA xx) (BRA yy)  == (BRA xx)
	       ;; (JMP xx) (BRA yy)  == (JMP xx)
	       #+ :ph-stat (incr :ph-bra2)
	       (rplac l (car ld) (cdr ld)))
	      (et2
	       ;; a label to be changed
	       #+ :ph-stat (incr :ph-tns1)
	       (rplaca (last la) et2)
	       (when (eq et2 :loop)
		     (setq :loopp t))
	       (setq l ld))
	      (t #+ :ph-stat (incr :ph-bra3)
		 (setq l ld))))
       ;;
       ;; PUSH
       ;;
       ((and (eq (car la) 'PUSH)
	     (consp (cadr la))
	     (eq (caadr la) '|@|))
	#+ :ph-stat (incr :ph-psh0)
	(setq et1 (cassq (cadadr la) :aph))
	(cond ((eq et1 :ret)
	       #+ :ph-stat (incr :ph-psh1)
	       (rplac l (car ld) (cdr ld)))
	      (et1 (rplaca (cdadr la) et1)
		   #+ :ph-stat (incr :ph-psh2)
		   (setq l ld))
	      (t #+ :ph-stat (incr :ph-psh3)
		 (setq l ld))))
       ;;
       ;; MOV
       ;;
       ((and (eq (car la) 'MOV)
	     (consp (cadr la))
	     (eq (caadr la) '|@|))
	#+ :ph-stat (incr :ph-mov0)
	(setq et1 (cassq (cadadr la) :aph))
	(when et1
	      #+ :ph-stat (incr :ph-mov1)
	      (rplaca (cdadr la) et1)
	      (when (eq et1 :ret) (setq :retp t)))
	(setq l ld))
       ;;
       ;; RETURN
       ;;
       ((and (eq (car la) 'RETURN)
	     (consp (car ld)))
	#+ :ph-stat (incr :ph-ret0)
	(cond ((memq (caar ld) '(BRA JMP RETURN))
	       ;; unreachable code.
	       ;; (RETURN) (RETURN) == (RETURN)
	       ;; (BRA xx) (RETURN) == (BRA xx)
	       ;; (JMP xx) (RETURN) == (JMP xx)
	       #+ :ph-stat (incr :ph-ret1)
	       (rplac l (car ld) (cdr ld)))
	      ((and (eq (caar ld) 'JCALL)
		    (not (memq (cadar ld) :no-jrst-hack)))
	       ;; (JCALL xx) (RETURN) == (JMP xx)
	       ;; except for #:llcp:nlist
	       #+ :ph-stat (incr :ph-ret2)
	       (rplac l (car ld) (cdr ld))
	       (rplaca (car l) 'JMP))
	      ((eq (caar ld) 'CALL)
	       ;; (CALL xx) (RETURN) == (BRA xx)
	       ;; no limitation for local labels
	       #+ :ph-stat (incr :ph-ret3)
	       (rplac l (car ld) (cdr ld))
	       (rplaca (car l) 'BRA))
	      (t #+ :ph-stat (incr :ph-ret4)
		 (setq l ld))))
       ;;
       ;; ADJSTK
       ;;
       ((and (eq (car la) 'ADJSTK)
	     (consp (car ld))
	     (eq (caar ld) 'ADJSTK)
	     (consp (cadr la))
	     (eq (caadr la) 'QUOTE)
	     (fixp (cadadr la))
	     (consp (cadar ld))
	     (eq (caadar ld) 'QUOTE)
	     (fixp (cadr (cadar ld))))
	;; (ADJSTK 'n) (ADJSTK 'n)
	#+ :ph-stat (incr :ph-adj1)
	(rplaca (cdadar ld)
		(add (cadadr la) (cadr (cadar ld))))
	(rplac l (car ld) (cdr ld)))
       ;;
       ;; a branch address
       ;;
       ((and (fixp (setq et1 (car (last (cdr la)))))
	     (neq et1 :ret)
	     (setq et2 (cassq et1 :aph)))
	;; (Byyy .. xx)    == (Byyy .. zz)
	#+ :ph-stat (incr :ph-tns1)
	(rplaca (last la)
		(cond ((eq et2 :ret) (setq :retp t) :ret)
		      ((eq et2 :loop) (setq :loopp t) :loop)
		      (t et2))))
       ;;
       ;; no optimization
       ;;
       (t (setq l ld))))
    (when :retp
	  ;; I used the return label :ret
	  (setq lap (mcons '(return) :ret lap)))
    (when :loopp
	  ;; I used the loop label :loop
	  (setq lap (mcons `(bra ,:loop) :loop lap)))
    #+ :ph-debug (:voir-lap lap)
    #+ :ph-stat (incr :ph-len2 (length lap))
    lap))

