; .NH 2
; Quelques de'finitions locales pour des mini-streams.

(deftclass InputStream)


(de {InputStream}:readcn args (readcn))
(de {InputStream}:peekcn args (peekcn))

(deftclass OutputStream)

(de {OutputStream}:prin args
  (apply 'prin (cdr args))))
(de {OutputStream}:print args (apply 'print (cdr args)))
(de {OutputStream}:terpri args (terpri))

(setq stdin (omakeq InputStream))
(setq stderr (omakeq OutputStream))

