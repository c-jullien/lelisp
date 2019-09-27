; .EnTete "Le-Lisp (c) version 15.2" " " "Les crochets de Le_Lisp_80"
; .EnPied "croch.ll" "%" " "
; .SuperTitre "Les crochets de Le_Lisp_80"
;
; .Auteur "Je'ro^me Chailloux"
;
; .Centre "*****************************************************************"
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"
;
; .Centre "$Header: /usr/cvs/lelisp/llub/croch.ll,v 1.1 2006/12/09 10:41:06 jullien Exp $"

(unless (>= (version) 15.2)
     (error 'load 'erricf 'croch))

; <<< \fBAttention\fR : ce macro-caracte`re est incompatible avec les
; nombres rationnels a` pre'cision variables >>>

; Une version adapte'e du macro-caracte`re crochet
; pre'sent dans Le_Lisp_80 version 12.

;         [a b c d e]        =>           (LIST A B C D E F)
;         [a !b]             =>           (CONS A B)
;         [a b c !d]         =>           (MCONS A B C D)
;         [a !b !c !d]       =>           (CONS A (APPEND B C D))
;         [!a b !c]          =>           (APPEND A (CONS B C))
;         [!a !b c]          =>           (APPEND A B (LIST C))
 
; .Section "Le macro-caracte`re crochet  [ ] et !"

; .SSection "Les macros caracte`res eux-me^mes"
 
(dmc |]| ()
     (error '|]| 'errsxt "pas dans un [ ]"))
 
(dmc |[| ()
     (flet ((|!| () '|!|)
            (|]| () '|]|))
           (let ((begin (list 'list)))
                (readbracket begin begin (read))
                begin)))
 
; .SSection "Lecture d'un ["
 
(de readbracket (begin current new)
    (cond ((eq new '|]|))
          ((neq new '|!|)
           (readbracket begin (cdr (rplacd current (list new))) (read)))
          (t (let ((elemseq (list (read))))
               (if (memq elemseq '(|!| |]|))
                   (error '|!| 'errsxt elemseq)
                   (if (eq begin current)
                       (sequence (cdr (rplac begin 'append elemseq)) (read))
                       (rplaca begin
                               (if (eq current (cdr begin)) 'cons 'mcons))
                       (let ((nextseq (read)))
                            (if (eq nextseq '|]|)
                                (rplacd current elemseq)
                                (sequence
                                     (cdadr (rplacd current
                                            (list (cons 'append elemseq))))
                                     nextseq)))))))))))
 
(de sequence (last next)
    (if (eq next '|!|)
        (sequence (cdr (rplacd last (list (read)))) (read))
        (when (neq next '|]|)
              (let ((begin (list 'list next)))
                   (rplacd last (list begin))
                   (readbracket begin (cdr begin) (read)))))))
 
