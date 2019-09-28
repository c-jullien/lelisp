(defmacro onexit (tag function . body)
          `(lock (lambda (tag value)
                         (cond
                             ((null tag) value)
                             ((eq tag ',tag)
                              (funcall ',function value))
                             (t 
                              (evexit tag value))))
                 ,.body))

                         
(defmacro foreach (symbol liste . body)
          `(mapc (lambda (,symbol) ,.body)
                 ,liste))


(de msymbol (x y)
    (symbol (mlink x) y))

(ceyx-load ministream cxyacc lex-kit lex-kit-bib)
