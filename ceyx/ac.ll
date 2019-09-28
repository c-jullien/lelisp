
(dmc |{| ()
     (with ((typecn #/: 'cpkgc))   
        (let ((a (with ((typecn #/} 'csep)) (read))))
             (cond
               ((<> #/} (readcn)) 
                (error '|{| "pas d'accolade fermante" a))
               ((not (symbolp a)) 
                (error '|{| "abbre'viation incorrecte" a))
               ((<> #/: (peekcn))
                (plink a))
               (t ; cas {---}:foo:..
                (readcn)
                (let ((r (read)))
                   (if (symbolp r)
                       (symbol (concatpkgc (plink a) (packagecell r)) r)
                       (error '|{| 'errsxt (list a r)))))))))

;  (de concatpkgc1 (pkgc1 pkgc2)
;      ; concatene les packages <pkgc1> et <pkgc2>
;      (if pkgc2
;          (symbol (concatpkgc1 pkgc1 (packagecell pkgc2)) pkgc2)
;          pkgc1))
 
        


