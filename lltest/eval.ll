;.DebLL
;.ComLL "; package spe'cial"
(DEFVAR #:sys-package:colon 'eval)
;.EspLL
;.ComLL "; boucle principale"
;.EspLL
(DE :TOPLEVEL ()
    (TAG :ERROR
         (PRINT "<Toplevel>")
         (LET ((STACK) (IT))
              (SETQ IT (:EVAL (WITH ((PROMPT ":? ")) (READ))))
              (PRINT ":= " IT)))
    (:TOPLEVEL))
;.EspLL
;.ComLL "; traitement des erreurs de l'interpre`te"
;.EspLL
(DEFVAR #:system:error-flag t)
(DEFVAR #:system:debug t)
;.EspLL
(DE :ERROR (f m a)
    (WHEN #:system:error-flag
          (PRINT "** " f " : " m " : " a))
    (EXIT :ERROR))
;.EspLL
;.ComLL "    ; e'valuation d'une forme quelconque"
;.EspLL
(DE :EVAL (forme)
    (COND
      ((SYMBOLP forme)
         (IF (BOUNDP forme)
             (SYMEVAL forme)
             (:ERROR 'EVAL 'ERRUDV forme)))
      ((OR (FIXP forme) (FLOATP forme))
          forme)
      ((ATOM forme)
          (IF (GETFN (TYPE-OF forme) 'EVAL ())
              (:FUNCALL (GETFN (TYPE-OF forme) 'EVAL ()) forme)
              forme))
      (T (LET ((fonct (CAR forme)) (lval (CDR forme)))
           (COND
              ((SYMBOLP fonct)
                  (COND ((TYPEFN fonct)
                            (:EVALINTERNAL forme
                                           fonct
                                           (TYPEFN fonct) 
                                           (VALFN fonct)
                                           lval))
                        ((AND (TCONSP forme) 
                              (GETFN fonct 'EVAL ()))
                            (:FUNCALL (GETFN fonct 'EVAL ()) forme))
                        (T (:ERROR 'EVAL 'ERRUDF fonct))))
              ((ATOM fonct)
                  (:ERROR 'EVAL 'ERRUDF fonct))
              ((EQ (CAR fonct) 'LAMBDA)
                  (:EVALINTERNAL forme fonct 'EXPR (CDR fonct) lval))
              ((EQ (CAR fonct) 'FLAMBDA)
                  (:EVALINTERNAL forme fonct 'FEXPR (CDR fonct) lval))
              ((EQ (CAR fonct) 'MLAMBDA)
                  (:EVALINTERNAL forme fonct 'MACRO (CDR fonct) lval))
              (T (:ERROR 'EVAL 'ERRUDF fonct)))))))
;.EspLL
;.ComLL "; e'valuation d'une fonction suivant son type"
;.EspLL
(DE :EVALINTERNAL (forme fonct ftype fval lval)
    (IF (OR (AND (ATOM lval) lval)
            (AND (CONSP lval) (CDR (LAST lval))))
        (:ERROR fonct 'ERRBAL (IF (ATOM lval) lval (CDR (LAST lval))))
        (SELECTQ ftype
          (SUBR0 (IF (= (LENGTH lval) 0)
                     (CALL fval () () ())
                     (:ERROR fonct 'ERRWNA 0)))
          (SUBR1 (IF (= (LENGTH lval) 1)
                     (CALL fval (:EVAL (CAR lval)) () ())
                     (:ERROR fonct 'ERRWNA 1)))
          (SUBR2 (IF (= (LENGTH lval) 2)
                     (CALL fval (:EVAL (CAR lval)) 
                                (:EVAL (CADR lval))
                                ())
                     (:ERROR fonct 'ERRWNA 2)))
          (SUBR3 (IF (= (LENGTH lval) 3)
                     (CALL fval (:EVAL (CAR lval)) 
                                (:EVAL (CADR lval))
                                (:EVAL (CADDR lval)))
                     (:ERROR fonct 'ERRWNA 3)))
          (NSUBR (CALLN fval (:EVLIS lval)))
          (MSUBR (CALL fval forme () ()))
          (DMSUBR (DISPLACE forme (CALL fval (CDR forme) () ())))
          (FSUBR 
             ; toutes les FSUBRS sont interpre'te'es directement
             ; car elles peuvent re appeler EVAL.
             ; Seules les plus importantes sont de'finies ici.
             (SELECTQ fonct
                 (QUOTE  (car lval))
                 (LAMBDA forme)
                 (IF     (IF (:EVAL (CAR lval))
                             (:EVAL (CADR lval))
                             (:EVAL (CADDR lval))))
                 (PROGN  (:EPROGN lval))
                 (DE     (SETFN (CAR lval) 'EXPR   (CDR lval)))
                 (DF     (SETFN (CAR lval) 'FEXPR  (CDR lval)))
                 (DM     (SETFN (CAR lval) 'MACRO  (CDR lval)))
                 (DMD    (SETFN (CAR lval) 'DMACRO (CDR lval)))
                 (SETQ   (WHILE (CDDR lval)
                                (SET (NEXTL lval)
                                     (:EVAL (NEXTL lval))))
                         (SET (NEXTL lval) (:EVAL (CAR lval))))
                 (T      (:ERROR 'EVAL 'ERRUDF fonct))))
          (EXPR    (:EVALAMBDA fval (:EVLIS lval)))
          (FEXPR   (:EVALAMBDA fval lval))
          (MACRO   (:EVAL (:EVALAMBDA fval forme)))
          (DMACRO  (:EVAL (DISPLACE forme
                                (:EVALAMBDA fval (CDR forme)))))
          (T       (:ERROR 'EVAL 'ERRUDF fonct)))))
;.EspLL
;.ComLL "; construit la liste des valeurs des e'valuations"
;.ComLL "; de tous les e'le'ments de l"
;.EspLL
(DE :EVLIS (l)
    (IF (NULL l)
        ()
        (CONS (:EVAL (CAR l)) (:EVLIS (CDR l)))))
;.EspLL
;.ComLL "; e'value le corps l"
;.EspLL
(DE :EPROGN (l)
    (IF (NULL (CDR l))
        (:EVAL (CAR l))
        (:EVAL (CAR l))
        (:EPROGN (CDR l))))
;.EspLL
;.ComLL "; applique une F-VAL de type : (<lvar> <s1> ... <sN>)"
;.ComLL "; a` la liste d'arguments lval ;"
;.EspLL
(DE :EVALAMBDA (fval lval)
    (:PUSH ())
    (:BINDVAR (CAR fval) lval)
    (PROTECT (:EPROGN (CDR fval))
             (:UNBINDVAR)))
;.EspLL
;.ComLL "; re'alise une liaison d'arbre ge'ne'ralise'e
;.EspLL
(DE :BINDVAR (lvar lval)
    (COND ((NULL lvar)
              (WHEN lval 
                    (:ERROR 'EVAL 'ERRWNA lval)))
          ((VARIABLEP lvar)
              (:PUSH (IF (BOUNDP lvar) (SYMEVAL lvar) '<undef>))
              (:PUSH lvar)
              (SET lvar lval))
          ((CONSP lvar)
               (IF (ATOM lval)
                   (:ERROR 'EVAL 'ERRILB (LIST lvar lval))
                   (:BINDVAR (CAR lvar) (CAR lval))
                   (:BINDVAR (CDR lvar) (CDR lval))))
          (T (:ERROR 'EVAL 'ERRBPA lvar))))
;.EspLL
(DE :UNBINDVAR ()
    (UNTILEXIT :DONE
               (SET (OR (:POP) (EXIT :DONE)) (:POP))))
;.EspLL
;.ComLL "; avec les fonctions de manipulation de pile"
;.EspLL
(DE :PUSH l (WHILE l (NEWL stack (NEXTL l))))
;.EspLL
(DE :POP () (NEXTL stack))
;.EspLL
;.ComLL "; et pour les fanatiques, un ve'ritable :APPLY"
;.ComLL "; applique la fonction fonct aux arguments lval"
;.EspLL
(DE :APPLY (fonct lval)
    (COND
      ((SYMBOLP fonct)
          (:APPLYINTERNAL fonct
                          (TYPEFN fonct) 
                          (VALFN fonct)
                          lval))
      ((ATOM fonct)
          (:ERROR ':APPLY 'ERRUDF fonct))
      ((EQ (CAR fonct) 'LAMBDA)
          (:APPLYINTERNAL fonct 'EXPR fonct lval))
      ((EQ (CAR fonct) 'FLAMBDA)
          (:APPLYINTERNAL fonct 'FEXPR fonct lval))
      ((EQ (CAR fonct) 'MLAMBDA)
          (:APPLYINTERNAL fonct 'MACRO fonct lval))
      (T (:ERROR ':APPLY 'ERRUDF fonct))))
;.EspLL
;.ComLL "; application d'une fonction suivant son type"
;.EspLL
(DE :APPLYINTERNAL (fonct ftype fval lval)
    (SELECTQ ftype
       (SUBR0 (IF (= (LENGTH lval) 0)
                  (CALL fval () () ())
                  (:ERROR fonct 'ERRWNA 0)))
       (SUBR1 (IF (= (LENGTH lval) 1)
                  (CALL fval (CAR lval) () ())
                  (:ERROR fonct 'ERRWNA 1)))
       (SUBR2 (IF (= (LENGTH lval) 2)
                  (CALL fval (CAR lval) (CADR lval) ())
                  (:ERROR fonct 'ERRWNA 2)))
       (SUBR3 (IF (= (LENGTH lval) 3)
                  (CALL fval (CAR lval)
                             (CADR lval)
                             (CADDR lval))
                  (:ERROR fonct 'ERRWNA 3)))
       (NSUBR  (CALLN fval lval))
       (MSUBR  (:EVAL (CALL fval (CONS fonct lval) () ())))
       (DMSUBR (:EVAL (CALL fval lval () ())))
       (FSUBR  (CALL fval lval () () ))
       (EXPR   (:EVALAMBDA fval lval))
       (FEXPR  (:EVALAMBDA fval (LIST lval)))
       (MACRO  (:EVAL (:EVALAMBDA fval (CONS fonct lval))))
       (DMACRO (:EVAL (DISPLACE forme (:EVALAMBDA fval lval))))
       (T (:ERROR ':APPLY 'ERRUDF fonct))))
;.EspLL
;.ComLL "; application a` la FUNCALL
;.EspLL
(DE :FUNCALL (fonct . larg)
    (:APPLY fonct larg))
;.FinLL

