
;;.EnTete "Le_Lisp V15" "CPMOD2.LL" "module du compilateur"
;;.sp 4
;;.SuperTitre "Le Compilateur Le_Lisp"
;;.Titre "Les modules: Deuxie`me passe"
;;.Auteur "Bernard Serpette"


;;.Section "CPMOD2.LL"
;;.SSection "Contenu"
; Le package du compilateur.
(defvar #:sys-package:colon 'complice)

;;.SSection "Le point d'entre'e
;;.SSSection "MAKEMODULE-PASS-TWO"
(de makemodule-pass-two (mod)
   (let ( (def (readdefmodule mod)) )
      '(mapc
         (lambda (f)
            (unless (cassoc f :list-of-loaded-file)
               (newl :list-of-loaded-file (ncons f))
               (libloadfile f t) ))
         (getdefmodule def 'include) )
      (let ( (lfnt (:get-all-def-in-files (getdefmodule def 'files)
                                          (getdefmodule def 'export) ))
             (import (getdefmodule def 'cpimport))
             (export (getdefmodule def 'cpexport))
             (functions (getdefmodule def 'cpfunctions)) )
         (mapc
            (lambda ((m . l))
               (mapc (lambda ((f . ty)) (putprop f ty ':ftype)) l) )
            import )
         (mapc
            (lambda ((f ty fvar . bind))
               (putprop f ty ':ftype)
               (when fvar (putprop f fvar ':fvar))
               (when bind (putprop f bind ':bind)) )
            export )
         (mapc
            (lambda ((f ty . bind))
               (putprop f ty ':ftype)
               (when bind (putprop f bind ':bind)) )
            functions )
         (:generate-in-file lfnt mod
            (mapcar 'car (getdefmodule def 'cpexport)) )
 ;            (or (getdefmodule def 'real-export) (getdefmodule def 'export)) )
         (mapc
            (lambda ((m . l))
               (mapc (lambda ((f . ty)) (remprop f ':ftype)) l) )
            import )
         (mapc
            (lambda ((f . l))
               (mapc (lambda (i) (remprop f i)) '(:bind :fvar :ftype)) )
            export )
         (mapc
            (lambda ((f . l))
               (mapc (lambda (i) (remprop f i)) '(:bind :ftype)) )
            export ))))

;;.SSSection ":GENERATE-IN-FILE"
(de :generate-in-file (lfnt file lfentry)
   (let ( (o (obase)) (pv (printlevel)) (pg (printlength)) (ou (outchan))
          (#:system:print-for-read t) (rm (rmargin)) (lm (lmargin)) (aux)
          (fnt-local (:complement lfentry lfnt)) )
      (let ( (s #:system:obj-extension) (f (string file)) )
         (setq file (if (eq (index s f) (sub (slen f) (slen s)))
                        f
                        (catenate f s))))
      (outchan (openo file))
      (obase 10) (printlevel 1000) (printlength 30000)
      (rmargin (add1 (slen (outbuf)))) (lmargin 0)
      (print `(loader '((title ,(concat file)))))
      (protect
         (mapc
            (lambda (m)
               (cond
                  ((consp m) (print m))
                  ((null (get m ':ftype)))
                  (t (let ( (lap (:pass-two m fnt-local ())) )
                        (if (memq m lfentry)
                           (when (setq aux (get m ':fvar))
                              (print `(putprop ',m ',aux ':fvar)) )
                           (setq lap (cdr lap)) )
                        (princn #/()
                        (prin 'loader) (princn #/') (princn #/()
                        (mapc 'print lap)
                        (princn #/)) (princn #/))
                        (terpri) ))))
            lfnt )
         (print '(loader '((end))))
         (close (outchan))
         (rmargin rm) (lmargin lm)
         (obase o) (printlevel pv) (printlength pg) (outchan ou) )))


;;.SSSection ":LAP-PRINT"
(de pretty-lap (l f)
   (cond
      ((null f) l)
      ((eq f 0) (print "(loader '(") (pretty-lap-lisp l) (print "))"))
      (t (pretty-lap-llm3 l)) ))

(de pretty-lap-lisp (l)
   (let ( (#:system:print-for-read t) )
      (while l
         (ifn (consp (car l))
            (when (car l)
               (when (neq (outpos) 0) (terpri))
               (prin (car l))
               (if (ge (outpos) 9) (terpri) (outpos 10)) )
            (when (eq (outpos) 0) (outpos 10))
            (print (car l)) )
         (nextl l) )))

(de pretty-lap-llm3 (l)
   (let ( (#:system:print-for-read t) )
      (while l
         (ifn (consp (car l))
            (when (car l)
               (when (neq (outpos) 0) (terpri))
               (prin (car l))
               (if (ge (outpos) 9) (terpri) (outpos 10)) )
            (when (eq (outpos) 0) (outpos 10))
            (prin (caar l))
            (outpos 20)
            (when (cdar l) (prin-llm3-op (cadar l)))
            (mapc (lambda (m) (princn #/,) (prin-llm3-op m)) (cddar l))
            (terpri) )
         (nextl l) )))

(de prin-llm3-op (op)
   (cond
      ((not (consp op)) (prin op))
      ((eq (car op) 'cvalq) (prin (cadr op)))
      ((eq (car op) '|@|) (princn #/@) (prin (cadr op)))
      ((eq (car op) 'quote) (princn #/') (prin (cadr op)))
      ((eq (car op) '&) (princn #/&) (prin (cadr op)))
      (t (prin (car op)) (prin (cdr op))) ))

;;.SSection "Relai pour le peephole optimiseur"
(defun :peephole (l) (#:compiler:peephole l))
