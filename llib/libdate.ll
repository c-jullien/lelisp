;;;
;;; LIBDATE:  The complete library on Dates.
;;;
;;; $Source: /usr/cvs/lelisp/llib/libdate.ll,v $
;;; $Date: 2016/05/21 10:36:05 $
;;; $Revision: 1.2 $
;;;
;;; ------------------------------------------------------------
;;; This file is part of Le-Lisp version 15, developped by INRIA
;;;
;;;
;;; (c) 1987-1993  Le-Lisp is a trademark of INRIA.
;;; ------------------------------------------------------------


(unless (>= (version) 15.2)
        (error 'load 'erricf 'date))

(defvar #:sys-package:colon 'date)

;;; Add to the Basic Date Librairy:
;;;
;;; - dates comparaisons
;;; - long format
;;; - number of days.

(unless (featurep 'date)
	(loadmodule 'date))

;;;
;;; Data
;;;


;;; Names of Months

(defmessage :ljanv   (french "janvier")   (english "January"))
(defmessage :lfevr   (french "fevrier")   (english "February"))
(defmessage :lmars   (french "mars")      (english "March"))
(defmessage :lavr    (french "avril")     (english "April"))
(defmessage :lmai    (french "mai")       (english "May"))
(defmessage :ljuin   (french "juin")      (english "June"))
(defmessage :ljuil   (french "juillet")   (english "July"))
(defmessage :laout   (french "aout")      (english "August"))
(defmessage :lsept   (french "septembre") (english "September"))
(defmessage :loct    (french "octobre")   (english "October"))
(defmessage :lnov    (french "novembre")  (english "November"))
(defmessage :ldec    (french "decembre")  (english "December"))

(defvar long-month-names '((1 . :ljanv) (2 . :lfevr) (3 . :lmars)
			   (4 . :lavr)  (5 . :lmai)  (6 . :ljuin)
			   (7 . :ljuil) (8 . :laout) (9 . :lsept)
			   (10 . :loct) (11 . :lnov) (12 . :ldec)))


;;; Names of the days

(defmessage :llun   (french "lundi")     (english "Monday"))
(defmessage :lmar   (french "mardi")     (english "Tuesday"))
(defmessage :lmer   (french "mercredi")  (english "Wednesday"))
(defmessage :ljeu   (french "jeudi")     (english "Thursday"))
(defmessage :lven   (french "vendredi")  (english "Friday"))
(defmessage :lsam   (french "samedi")    (english "Saturday"))
(defmessage :ldim   (french "dimanche")  (english "Sunday"))

(defvar long-day-names '((1 . :llun) (2 . :lmar) (3 . :lmer) (4 . :ljeu)
			 (5 . :lven)(6 . :lsam)(7 . :ldim)))



;;;
;;; Converters
;;;

;;; Long format (48 characters)

(defun long-string-date (date)
  (ifn (datep date) (error 'long-string-date 'errbpa date))
  (let ((year (:year date))
	(month-name (get-message (cassq (:month date) long-month-names)))
	(day (:day date))(hour (:hour date))
	(min (:minute date))(sec (:second date))
	(msec (:msecond date))
	(day-name (get-message (cassq (:week-day date) long-day-names)))
	(result (makestring 48 #\sp)))
    (bltstring result (- 3 (div (slength day-name) 3)) day-name 0)
    (bltstring result (- 12 (slength day)) day 0)
    (bltstring result (- 16 (div (slength month-name) 3)) month-name 0)
    (bltstring result (- 27 (slength year)) year 0)
    (bltstring result 30 "00h 00mn 00s 000ms" 0)
    (bltstring result (- 32 (slength hour)) hour 0)
    (bltstring result (- 36 (slength min)) min 0)
    (bltstring result (- 41 (slength sec)) sec 0)
    (bltstring result (- 46 (slength msec)) msec 0)
    result))

;;; Test: 1rst day in Rome of the Gregorian Calendar
;;; (eq (week-day-number #[1582 10 15 () () ()]) 5)

;;;
;;; Comparisons
;;;

(defun eqdate (date1 date2)
  (and (datep date1) (datep date2) (eqvector date1 date2)))

(synonymq =date eqdate)

(defun /=date (date1 date2) (not (eqdate date1 date2)))

(synonymq <>date /=date)

(defun <?date (date1 date2 equal?)
  (ifn (datep date1) (error '<date 'errbpa date1))
  (ifn (datep date2) (error '<date 'errbpa date2))
  (tag date-cmp
       (for (i 0 1 6)
	    (cond
	     ((< (or (vref date1 i) 0)
		 (or (vref date2 i) 0))
	      (exit date-cmp t))
	     ((> (or (vref date1 i) 0)
		 (or (vref date2 i) 0))  (exit date-cmp ()))))
       equal?))

(defun <date  (date1 date2) (<?date date1 date2 ()))
(defun <=date (date1 date2) (<?date date1 date2 t))
(defun >date  (date1 date2) (<?date date2 date1 ()))
(defun >=date (date1 date2) (<?date date2 date1 t))

;;;
;;; "Arithmetics"
;;;

;;; needs Ration to be exact.
 
(defvar tropic-year-length     36524220/100000)        ; 365.24220
(defvar gregorian-year-length  36524250/100000)        ; 365.24250
(defvar tropic-month-length    (/ tropic-year-length 12))
(defvar moon-month-length      29530588/1000000)        ; 29.530588

;;;
;;; Transform Date in Days (since 1rst Jan 0 0:00)
;;;

(defun date-to-number (date)
  (ifn (datep date) (error 'date-to-number 'errbpa date))
  (let ((year (:year date))(month (:month date))
	(day (:day date))(hour (:hour date))
	(min (:minute date))(sec (:second date))
	(msec (or (:msecond date) 0)))
    (+ (* 365 year)
       (leap-number year)
       (year-day-number date)
       (* hour 1/24)
       (* min 1/1440)
       (* sec 1/86400)
       (* msec 1/86400000)
       -1)))

;;;
;;; Transform Days in date (0 = 1rst Jan 0 0:00)
;;;

(defun number-to-date (n)
  (let ((date (makevector 8 0)))
    (typevector date 'date)
    (let ((year (fix (/ n tropic-year-length))))
      (:year date year)
      (setq n (- n (* year 365) (leap-number year))))
    (adjust-year)
    (let ((month (1+ (fix (/ n tropic-month-length)))))
      (:month date month)
      (setq n (- n (year-day-number date))))
    (let ((day (1+ (fix n))))
      (:day date day)
      (setq n (1+ (- n day))))
    (adjust-day)
    (:week-day date (week-day-number date))
    (let ((hour (fix (* 24 n))))
      (:hour date hour)
      (setq n (- n (* hour 1/24))))
    (let ((min (fix (* 1440 n))))
      (:minute date min)
      (setq n (- n (* min 1/1440))))
    (let ((sec (fix (* 86400 n))))
      (:second date sec)
      (setq n (- n (* sec 1/86400))))
    (let ((msec (fix (* 86400000 n))))
      (:msecond date msec)
      (setq n (- n (* msec 1/86400000))))
    date))

(defun adjust-year ()
  (cond
   ((< n 0)
    (:year date (1- (:year date)))
    (setq n (+ n (if (leap-year-p (:year date)) 366 365)))
    (adjust-year))
   ((or (>= n 367) (and (>= n 366) (not (leap-year-p (:year date)))))
    (setq n (- n (if (leap-year-p (:year date)) 366 365)))
    (:year date (1+ (:year date)))
    (adjust-year))))

(defun adjust-day ()
  (cond
   ((< n 0)
    (let ((adjust (1+ (fix (abs n)))))
      (:day date (- (:day date) adjust))
      (setq n (+ n adjust))))
   ((>= n 1)
    (let ((adjust (fix n)))
      (:day date (+ (:day date) adjust))
      (setq n (- n adjust)))))
  (adjust-month))

(defun adjust-month ()
  (cond
   ((< (:day date) 1)
    (:month date (prev-month (:month date)))
    (:day date
	  (+ (:day date) (month-length (:month date) (:year date))))
    (adjust-month))
   ((> (:day date) (month-length (:month date) (:year date)))
    (:day date
	  (- (:day date) (month-length (:month date) (:year date))))
    (:month date (next-month (:month date)))
    (adjust-month))))

(defun prev-month (m)
  (if (eqn m 1) 12 (sub1 m)))

(defun next-month (m)
  (if (eqn m 12) 1 (add1 m)))

;;;
;;; Utilities
;;;

;;; Date of File

(defextern getfdate (fixvector string))

(defun date-of-file (path)
  (unless (or (pathnamep path)
	      (stringp path))
	  (error 'date-of-file 'ERRPATHNOTPATH path))
  (unless (probefile path)
	  (error 'date-of-file 'errfile path))
  (let ((d (create-date)))
    (getfdate d (coerce-namestring path))
    d))

(defvar #:date:date-min
  (if (boundp '#:date:date-min)
      #:date:date-min
      (create-date)))


(unless (boundp '#:date:date-min)
	(#:date:year #:date:date-min 0)
	(#:date:month #:date:date-min 0)
	(#:date:day #:date:date-min 0)
	(#:date:hour #:date:date-min 0)
	(#:date:minute #:date:date-min 0)
	(#:date:second #:date:date-min 0))

