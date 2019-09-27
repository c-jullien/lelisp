;;;; .EnTete	"Le-Lisp version 15.26.2" " " "wincolor.ll"
;;;; .Date	"03/20/95"
;;;; .EnPied	"wincolor.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"ELIGIS, C. Jullien"
;;;; .Annexe I	""

(defvar #:sys-package:colon '#:display:windows)

;;; This file implements a color matcher (R G B) in the standard color palette

;;; On Windows, the system color  palette depends on resolution, device driver,
;;; graphic mode and graphic card set on the system. That means that a standard
;;; color palette for a system cand be a mutable color on other system.
;;;
;;; Ex (match-color 24576 24576 24576) -> 24576 24576 26122
;;;						      ^^^^^

(defvar :*palette-entries* ())

(defun :get-palette-entries ()
   (or :*palette-entries*
       (setq :*palette-entries*
             (let ((v (#:display:windows:system-parameters)))
                  (mapcar #'(lambda (m)
                               (send m v))
                          '(palette_entry_00
                            palette_entry_01
                            palette_entry_02
                            palette_entry_03
                            palette_entry_04
                            palette_entry_05
                            palette_entry_06
                            palette_entry_07
                            palette_entry_08
                            palette_entry_09
                            palette_entry_10
                            palette_entry_11
                            palette_entry_12
                            palette_entry_13
                            palette_entry_14
                            palette_entry_15
                            palette_entry_16
                            palette_entry_17
                            palette_entry_18
                            palette_entry_19))))))

(defun :create-all-palette-colors ()
   (mapc #'(lambda (c)
              (make-color (vref c 0) (vref c 1) (vref c 2)))
         (:get-palette-entries)))

(defun :match-color-delta (r g b delta)
   ;; A better matcher could be to minimize the delta for the sum of RGB values.
   (let ((colors (:get-palette-entries)))
        (tag found
             (mapc #'(lambda (color)
                        (if (and (<= (abs (sub r (vref color 0))) delta)
                                 (<= (abs (sub g (vref color 1))) delta)
                                 (<= (abs (sub b (vref color 2))) delta))
                            (exit found color)
                            ()))
                   colors)
             ())))

(defun :match-color (r g b)
   (let ((delta 128)
         (color ))
        (until (setq color (:match-color-delta r g b delta))
               (incr delta 128))))

;; Just for testing :
;;
;;
;; (defun foo ()
;;    (:match-color 24000 24000 24000))
