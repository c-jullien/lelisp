;;;
;;; DATE:  basic functions on Dates.
;;;
;;; $Source: /usr/cvs/lelisp/llib/date.ll,v $
;;; $Date: 2016/05/21 10:36:04 $
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

(add-feature 'date)


;;;
;;; Auxiliary Functions
;;;

(defun week-day-number (date)
  ;; computes the number (1-7) of the day of the week.
  (ifn (datep date) (error 'week-day-number 'errbpa date))
  (let ((year (:year date))
	(month (:month date))
	(day (:day date))
	(result 5))
    ;; the 1rst of January 00 was a Satuurday!
    (setq result
	  (add result 
	       (add year
		    (add (leap-number year)
			 (year-day-number date)))))
    (setq result (modulo result 7))
    (if (eq result 0) 7 result)))

(defun year-day-number (date)
  ;; computes the number of the day in an year
  (ifn (datep date) (error 'year-day-number 'errbpa date))
  (let ((year (:year date))(month (:month date))(day (:day date)))
    (when (gt month 1)
	  (for (i 1 1 (sub1 month))
	       (setq day (add day (month-length i year)))))
    day))

(defun month-length (month year)
  (add (cassq month month-lengths)
       (if (and (eq month 2) (leap-year-p year)) 1 0)))

(defun leap-year-p (year)
  ;; returns T if year is a leap-year
  (if (eq (modulo year 4) 0)
      (if (eq (modulo year 100) 0)
	  (if (eq (modulo year 400) 0) t ())
	  t)
      ()))

(defun leap-number (year)
  ;; the number of leap-years since year 0
  (let ((previous (if (gt year 0) (sub1 year) year)))
    (add (div previous 4)
	 (sub (add (div previous 400)
		   (if (gt year 0) 1 0))
	      (div previous 100)))))
	      ))))

;;;
;;; "Interface"
;;;

;;; The date-structure represents a date.
;;; #:date:make is never used.

(defstruct date
    year month day hour minute second msecond week-day)

(defmessage :ERRYEAR (french  "mauvaise annee")
                     (english "bad year"))
(defmessage :ERRMONTH(french  "mauvais mois")
                     (english "bad month"))
(defmessage :ERRDAY  (french  "mauvais jour")
                     (english "bad day"))
(defmessage :ERRHOUR (french  "mauvaise heure")
                     (english "bad hour"))
(defmessage :ERRMIN  (french  "mauvaise minute")
                     (english "bad minute"))
(defmessage :ERRSEC  (french  "mauvaise seconde")
                     (english "bad second"))
(defmessage :ERRMSEC (french  "mauvaise milli-seconde")
                     (english "bad millisecond"))
(defmessage :ERRWDAY (french  "mauvais jour de semaine")
                     (english "bad day of the week"))
(defun create-date ()
  ;; create a date and verify all the values.
  (let ((date (date)))
    (typevector date 'date)
    (unless (fixp (:year date))
	    (error 'date ':ERRYEAR date))
    (when (or (not (fixp (:month date)))
	      (lt (:month date) 1) (gt (:month date) 12))
	  (error 'date ':ERRMONTH date))
    (when (or (not (fixp (:day date)))
	      (lt (:day date) 1) (gt (:day date) 31))
	  (error 'date ':ERRDAY date))
    (when (or (not (fixp (:hour date)))
	      (lt (:hour date) 0) (gt (:hour date) 23))
	  (error 'date ':ERRHOUR date))
    (when (or (not (fixp (:minute date)))
	      (lt (:minute date) 0) (gt (:minute date) 59))
	  (error 'date ':ERRMIN date))
    (unless (:second date) (:second date 0))
    (when (or (not (fixp (:second date)))
	      (lt (:second date) 0) (gt (:second date) 59))
	  (error 'date ':ERRSEC date))
    (unless (:msecond date) (:msecond date 0))
    (when (or (not (fixp (:msecond date)))
	      (lt (:msecond date) 0) (gt (:msecond date) 999))
	  (error 'date ':ERRMSEC date))
    (unless (:week-day date)
	    (:week-day date (week-day-number date)))
    (when (or (not (fixp (:week-day date)))
	      (lt (:week-day date) 1) (gt (:week-day date) 7))
	  (error 'date ':ERRWDAY  date))
    date))

(defun #:date:prin (date)
  ;; prints a date
  (if #:system:print-for-read
      (let ((#:system:print-for-read ()))
	(prin "#:date:#["
	      (:year date) " "
	      (:month date) " "
	      (:day date) " "
	      (:hour date) " "
	      (:minute date) " "
	      (:second date) " "
	      (:msecond date) " "
	      (:week-day date) "]"))
      (prin (short-string-date date))))

;;;
;;; "Data"
;;;

;;; Months

(defmessage :janv (french "janv")  (english "Jan"))
(defmessage :fevr (french "fevr")  (english "Feb"))
(defmessage :mars (french "mars")  (english "Mar"))
(defmessage :avr  (french "avr")   (english "Apr"))
(defmessage :mai  (french "mai")   (english "May"))
(defmessage :juin (french "juin")  (english "Jun"))
(defmessage :juil (french "juil")  (english "Jul"))
(defmessage :aout (french "aout")  (english "Aug"))
(defmessage :sept (french "sept")  (english "Sep"))
(defmessage :oct  (french "oct")   (english "Oct"))
(defmessage :nov  (french "nov")   (english "Nov"))
(defmessage :dec  (french "dec")   (english "Dec"))

(defvar short-month-names '((1 . :janv)(2 . :fevr)(3 . :mars)
    (4 . :avr)(5 . :mai)(6 . :juin)(7 . :juil)(8 . :aout)
    (9 . :sept)(10 . :oct)(11 . :nov)(12 . :dec)))

;;; Days
(defmessage :lun (french "lun")    (english "Mon"))
(defmessage :mar (french "mar")    (english "Tue"))
(defmessage :mer (french "mer")    (english "Wed"))
(defmessage :jeu (french "jeu")    (english "Thu"))
(defmessage :ven (french "ven")    (english "Fri"))
(defmessage :sam (french "sam")    (english "Sat"))
(defmessage :dim (french "dim")    (english "Sun"))

(defvar short-day-names '((1 . :lun) (2 . :mar) (3 . :mer) (4 . :jeu)
			  (5 . :ven)(6 . :sam)(7 . :dim)))


;;; Length of the months
(defvar month-lengths '((1 . 31) (2 . 28)  (3 . 31)  (4 . 30)
			(5 . 31) (6 . 30)  (7 . 31)  (8 . 31)
			(9 . 30) (10 . 31) (11 . 30) (12 . 31)))


;;;
;;; Conveters
;;;
 
;;; The short format (24 characters)

(defun short-string-date (date)
  (ifn (datep date) (error 'short-string-date 'errbpa date))
  (let ((year (modulo (:year date) 100))
	(month-name (get-message (cassq (:month date) short-month-names)))
	(day (:day date))(hour (:hour date))
	(min (:minute date))(sec (:second date))
	(day-name (get-message (cassq (:week-day date) short-day-names)))
	(result (makestring 24 #\sp)))
    (selectq (current-language)
	     (english
	      (bltstring result 0 day-name 0)
	      (bltstring result (sub 11 (slength day)) day 0)
	      (bltstring result 4 month-name 0))
	     (t
	      (bltstring result 0 day-name 0)
	      (bltstring result (sub 6 (slength day)) day 0)
	      (bltstring result 7 month-name 0)))
    (bltstring result (sub 14 (slength year)) year 0)
    (bltstring result 15 "00:00:00" 0)
    (bltstring result (sub 17 (slength hour)) hour 0)
    (bltstring result (sub 20 (slength min)) min 0)
    (bltstring result (sub 23 (slength sec)) sec 0)
    result))

;;;
;;; Utilities
;;;

(defun datep (date)
  (if (and (vectorp date)
	   (eq (typevector date) 'date))
      t
      ()))
