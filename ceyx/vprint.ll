; .Chapitre n "Vprint: Une Machine de Formattage en CEYX"
; .Auteur "Ge'rard Berry, Jean-Marie Hullot"

(ceyx-load stream)

; .Section "La Machine d'Impression"

(deftclass Vprint
		queue-size)

(defvar {Vprint}:printer)
(defvar {Vprint}:level (printlevel))
(defvar {Vprint}:queue)
(defvar {Vprint}:queue-back)
(defvar {Vprint}:stack)
(defvar {Vprint}:stack-back)
(defvar {Vprint}:outbuf)
(defvar {Vprint}:outbuf-back)
(defvar {Vprint}:lmargin-at-cutpoint)
(defvar {Vprint}:something-written)
(defvar {Vprint}:something-written-at-cutpoint)

(de {Vprint}:gen (size)
    (let ((queue))
         (repeat size (newl queue (VprintCommand () ())))
         (nconc queue queue)
         (setq {Vprint}:printer (omakeq Vprint queue-size size)
               {Vprint}:queue queue)
         {Vprint}:printer))

(de {Vprint}:reset ()
    (setq {Vprint}:queue-back ()
          {Vprint}:stack ()
          {Vprint}:stack-back ()
          {Vprint}:outbuf-back ()))

(de {Vprint}:connect-outbuf (outbuf)
    (setq {Vprint}:outbuf outbuf))

; .Section "Les Blocs d'Impression"

(deftype VprintBlock *)

(dmd VprintBlock (model margin)
    `(tcons ,model ,margin))

(dmd {VprintBlock}:margin (block . arg)
    (ifn (consp arg) `(tcdr ,block)
         `(trplacd ,block ,(car arg))))

(deftype ({VprintBlock}:HorizBlock HorizBlock) VprintBlock)
(deftype ({VprintBlock}:MixedBlock MixedBlock) VprintBlock)
(deftype ({VprintBlock}:VerticBlock VerticBlock) VprintBlock)
(deftype ({VprintBlock}:VerticMixedBlock VerticMixedBlock) VprintBlock)

; .Section "Les Commandes Ele'mentaires de la Machine"

(deftype VprintCommand *)

(de VprintCommand (model arg)
    (tcons model arg))

(dmd {VprintCommand}:arg (command . arg)
    (ifn (consp arg) `(tcdr ,command)
         `(trplacd ,command ,(car arg))))

(deftype ({VprintCommand}:*PushBlock *PushBlock) VprintCommand)
(deftype ({VprintCommand}:*PopBlock *PopBlock) VprintCommand)
(deftype ({VprintCommand}:*Patom *Patom) VprintCommand)
(deftype ({VprintCommand}:*Princn *Princn) VprintCommand)
(deftype ({VprintCommand}:*Princh *Princh) VprintCommand)
(deftype ({VprintCommand}:*Terpri *Terpri) VprintCommand)
(deftype ({VprintCommand}:*Indent *Indent) VprintCommand)
(deftype ({VprintCommand}:*Cutpoint *Cutpoint) VprintCommand)

(de {*PushBlock}:apply (command)
     ({Vprint}:push-block ({VprintCommand}:arg command)))

(de {*PopBlock}:apply (command)
    ({Vprint}:pop-block))

(de {*Patom}:apply (command)
   (*patom ({VprintCommand}:arg command)))
         

(de {*Princn}:apply (command)
    (*princn ({VprintCommand}:arg command)))

(de {*Princh}:apply (command)
     (*princh ({VprintCommand}:arg command)))

(dmd *patom (atom) 
      `(tag noprin (setq {Vprint}:something-written t) (prin ,atom)))
(dmd *princn (charn)
      `(tag noprin (setq {Vprint}:something-written t) (princn ,charn)))
(dmd *princh (char)
      `(tag noprin (setq {Vprint}:something-written t) (princh ,char)))

(de {*Terpri}:apply (command)
     ({Vprint}:terpri))

(de {*Indent}:apply (command)
    ({VprintBlock}:margin
            (car {Vprint}:stack)
            (lmargin (+ ({VprintCommand}:arg command) (lmargin)))))


(de {*Cutpoint}:apply (command)
      (sendq cutpoint
              (car {Vprint}:stack)
              ({VprintCommand}:arg command)))

(cxcp-inline {*PushBlock}:apply {*PopBlock}:apply 
             {*Princn}:apply {*Princh}:apply {*Terpri}:apply
             {*Indent}:apply {*Cutpoint}:apply)

(de {VerticBlock}:cutpoint (block arg)
       ({Vprint}:terpri))

(de {MixedBlock}:cutpoint (block arg)
       (if ({Vprint}:cutpoint?)
            ({VprintBlock}:prin-separator arg)
            ({Vprint}:set-cutpoint)
            ({VprintBlock}:prin-separator arg))))

(de {VerticMixedBlock}:cutpoint (block arg)
       (if ({Vprint}:cutpoint?)
          ({Vprint}:back-to-cutpoint nil)
        (cond 
           ({Vprint}:something-written
            (lmargin ({VprintBlock}:margin (car {Vprint}:stack)))
            (sendq flush {Vprint}:outbuf)
            (sendq newline ({Stream}:destination {Vprint}:outbuf)))
           (t
;   A FAIRE: CLEAN-BUFFER!!!
              (outpos ({VprintBlock}:margin (car {Vprint}:stack)))))
        (setq {Vprint}:something-written nil)))))

(de {HorizBlock}:cutpoint (block arg)
       (if ({Vprint}:cutpoint?)
            (if (neq {Vprint}:stack {Vprint}:stack-back)
                ({VprintBlock}:prin-separator arg)
                ({Vprint}:set-cutpoint)
                ({VprintBlock}:prin-separator arg))
            ({Vprint}:set-cutpoint)
            ({VprintBlock}:prin-separator arg)))))

(dmd {VprintBlock}:prin-separator (arg)
   `(if ,arg (*patom ,arg) (*princn #\sp)))


; .Section "Se'mantiques de Base"

(dmd {Vprint}:tyo-queue (command)
  `(progn
      (<- (car {Vprint}:queue) ,command)
      (nextl {Vprint}:queue)
      (setq {Vprint}:queue-left {Vprint}:queue)))

(dmd {Vprint}:flush-queue ()
      `(progn (setq {Vprint}:queue-left {Vprint}:queue-back)
              (until (eq {Vprint}:queue-left {Vprint}:queue)
                (sendq apply (nextl {Vprint}:queue-left)))))

(dmd {Vprint}:push-block (blockmodel)
    `(newl {Vprint}:stack
           (VprintBlock ,blockmodel (lmargin))))

(dmd {Vprint}:pop-block ()
    `(progn
        (when (eq {Vprint}:stack {Vprint}:stack-back)
              ({Vprint}:reset-cutpoint))
        (nextl {Vprint}:stack)
        (when {Vprint}:stack
           (lmargin ({VprintBlock}:margin (car {Vprint}:stack))))))

(dmd {Vprint}:cutpoint? ()
   `(progn {Vprint}:outbuf-back))

(dmd {Vprint}:set-cutpoint ()
   `(setq {Vprint}:queue-back {Vprint}:queue-left
          {Vprint}:stack-back {Vprint}:stack
          {Vprint}:outbuf-back (outpos)
          {Vprint}:lmargin-at-cutpoint (lmargin)
          {Vprint}:something-written-at-cutpoint {Vprint}:something-written)))

(dmd {Vprint}:reset-cutpoint ()
    `(setq {Vprint}:outbuf-back ()
           {Vprint}:stack-back ()))

(de {Vprint}:back-to-cutpoint (not-from-VerticMixedBlock)
        (setq {Vprint}:stack {Vprint}:stack-back)
        ; ulte'rieurement deviendra un sendq
        (selectq (model (car {Vprint}:stack))
             ({MixedBlock}
                 (model (car {Vprint}:stack) '{VerticMixedBlock})
                 (lmargin {Vprint}:lmargin-at-cutpoint)
                 ({VprintBlock}:margin (car {Vprint}:stack) 
                                       {Vprint}:lmargin-at-cutpoint)
                 (setq {Vprint}:something-written
                           {Vprint}:something-written-at-cutpoint
                       not-from-VerticMixedBlock nil))
             (t
                 (lmargin ({VprintBlock}:margin (car {Vprint}:stack)))))
        (cond 
           ((or {Vprint}:something-written not-from-VerticMixedBlock)
            (outpos {Vprint}:outbuf-back)
            (sendq flush {Vprint}:outbuf)
            (sendq newline ({Stream}:destination {Vprint}:outbuf)))
           (t
;   A FAIRE: CLEAN-BUFFER!!!
              (outpos (lmargin))))
        (setq {Vprint}:something-written nil)
        ({Vprint}:reset-cutpoint)
        ({Vprint}:flush-queue))

(dmd {Vprint}:terpri ()
           `(if ({Vprint}:cutpoint?)
              ({Vprint}:back-to-cutpoint t)
              (setq {Vprint}:something-written nil)
              (sendq flush {Vprint}:outbuf)
              (sendq newline ({Stream}:destination {Vprint}:outbuf)))))))

; en attendant mieux

(de {Vprint}:eol (printer) (exit noprin ({Vprint}:terpri)))
; 

(defvar {Vprint}:command (omakeq VprintCommand))

(dmd {Vprint}:sendq-command (name arg)
    `(progn
        (model {Vprint}:command ',name)
        ({VprintCommand}:arg {Vprint}:command ,arg)
        ({Vprint}:tyo-queue {Vprint}:command)
        (,(symbol name 'apply) {Vprint}:command)))


; Quelques abbreviations

(de begin-hblock () ({Vprint}:sendq-command {*PushBlock} '{HorizBlock}))
(de begin-xblock () ({Vprint}:sendq-command {*PushBlock} '{MixedBlock}))
(de begin-vblock () ({Vprint}:sendq-command {*PushBlock} '{VerticBlock}))
(de end-block () ({Vprint}:sendq-command {*PopBlock} ()))

(de vpatom (atom) ({Vprint}:sendq-command {*Patom} atom))
(de vprincn (charn) ({Vprint}:sendq-command {*Princn} charn))
(de vprinch (charn) ({Vprint}:sendq-command {*Princh} charn))
(de vcutpoint optional-arglist
     ({Vprint}:sendq-command {*Cutpoint} (car optional-arglist)))
(de vindent (n) ({Vprint}:sendq-command {*Indent} n))
(de vterpri () ({Vprint}:sendq-command {*Terpri} ()))

; .Section "Le Pretty Printer"

(setq p ({Vprint}:gen 250))

({Vprint}:connect-outbuf (OutputBuffer))

(de {OutChannel}:newline (tty)
    (when #:system:real-terminal-flag (tyo #\return))
    (tyo #\lf)
    (tyflush))

(de {Vprint}:open (printer)
    ({Vprint}:reset))

(de {Vprint}:close (printer) ())

(dmd with-vprint-output body
    `(flet ((eol () ({Ceyx}:eol)))
          (let (({Vprint}:curlevel 0)
                ({Vprint}:length (printlength))
                ({Vprint}:line (printline)))
              (with ((outstream {Vprint}:printer))
                   (hblock 0 ,@body)
                   (vterpri)))))))

(de vprint args
    (let ((x (car args))
          ({Vprint}:level (if (cadr args) (cadr args) {Vprint}:level)))
         (with-vprint-output (vprin x))))

(dmd vpretty l
    `(vprint (getdef ',(car l)) ,(cadr l))))

(defvar {Vprint}:indent 3)

(dmd hblock (indent . body)
    `(progn
        (begin-hblock)
        (vindent ,indent)
        ,@body
        (end-block)))

(dmd xblock (indent . body)
    `(progn
        (begin-xblock)
        (vindent ,indent)
        ,@body
        (end-block)))

(dmd vblock (indent . body)
    `(progn
        (begin-vblock)
        (vindent ,indent)
        ,@body
        (end-block)))

(de vplist (l)
   (let (({Vprint}:curlength 1))
    (vprin (nextl l))
    (while (and (consp l) (< {Vprint}:curlength {Vprint}:length))
           (vcutpoint) (vprin (nextl l))
           (incr {Vprint}:curlength))
    (cond
       ((consp l) (vcutpoint) (vpatom "..."))
       (l
          (vcutpoint)
          (vprincn #/.)
          (vcutpoint)
          (vprin l))
       (t ()))))

(deftype ({Vprint}:Vformat Vformat) *)

(dmd deformat (symbol args . body)
    (if (and (symbolp args) (null body))
        `(putprop ',args (getprop ',symbol 'vformat) 'vformat)
        `(progn
           (putprop ',symbol (symbol '{Vformat} ',symbol) 'vformat)
           (de ,(symbol '{Vformat} symbol) ,args ,@body))))

(deformat data (l)
    (hblock 1 (vprincn #/() (vplist l) (vprincn #/))))

(deformat quote (l)
    (vprincn #/')
    (vprin (cadr l)))

(deformat progn (l)
    (xblock {Vprint}:indent
            (vprincn #/()
            (vplist l)
            (vprincn #/))))


(deformat if (l)
    (xblock (+ 2 (plength (car l)))
            (vprincn #/()
            (vprin (nextl l))
            (vprincn #\sp)
            (vprin (nextl l))
            (vcutpoint)
            (xblock 0 (vplist l))
            (vprincn #/))))
                    

(deformat defun (l)
    (xblock (+ 2 (plength (car l)))
            (hblock (+ 3 (plength (car l)))
                    (vprincn #/()
                    (vprin (nextl l))
                    (vprincn #\sp)
                    (vprin (nextl l))
                    (vcutpoint)
                    (vprin (nextl l)))
            (vcutpoint)
            (xblock 0 (vplist l))
            (vprincn #/))))

(deformat cond (l)
    (xblock {Vprint}:indent
            (vprincn #/()
            (vprin (nextl l))
            (while l
               (vcutpoint)
               (xblock 1
                   (vprincn #/()
                   (vplist (nextl l))
                   (vprincn #/))))
            (vprincn #/))))

(deformat selectq (l)
    (xblock {Vprint}:indent
            (vprincn #/()
            (vprin (nextl l))
            (vprincn #\sp)
            (vprin (nextl l))
            (while l
                (vcutpoint)
                (xblock 1
                   (vprincn #/()
                   (vplist (nextl l))
                   (vprincn #/))))
            (vprincn #/))))

(deformat setq (l)
    (xblock {Vprint}:indent
            (vprincn #/()
            (vprin (nextl l))
            (while l
                   (vcutpoint)
                   (xblock 2
                           (vprin (nextl l))
                           (vcutpoint)
                           (vprin (nextl l))))
            (vprincn #/))))

(de vprin (x)
   (let (({Vprint}:curlevel (1+ {Vprint}:curlevel)))
    (if (> {Vprint}:curlevel {Vprint}:level)
        (vprincn #/#)
        (cond
          ((tconsp x) (sendq vprin x))
          ((null x) (vpatom "()"))
          ((stringp x) (vprincn #/") (vpatom x) (vprincn #/"))
          ((atom x) (vpatom x))
          ((consp x)
           (if (symbolp (car x))
               (selectq (ptype (car x))
                    (1 ({Vformat}:progn x))
                    (2 ({Vformat}:if x))
                    (3 ({Vformat}:defun x))
                    (4 ({Vformat}:cond x))
                    (5 ({Vformat}:selectq x))
                    (6 ({Vformat}:setq x))
                    (t (let ((vformat (getprop (car x) 'vformat)))
                            (ifn vformat
                                 ({Vformat}:data x)
                                 (funcall vformat x)))))
               ({Vformat}:data x)))
          (t (syserror 'vprin "Type Lisp Inconnu"))))))


(de {*}:vprin (obj) (prin obj))

