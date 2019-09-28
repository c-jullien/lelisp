;;;; .EnTete	"Le-Lisp version 15.2x" " " "win.ll"
;;;; .Date	"08/28/93"
;;;; .EnPied	"win.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"C. Jullien"
;;;; .Annexe I	""

(eval-when (eval)
     (libloadfile 'winstruct ())
     (libloadfile 'win_def   ())
     (libloadfile 'winbitmap ())
     (libloadfile 'winmenu   ())
     (libloadfile 'wincolor  ())
     (libloadfile 'winevent  ())
     (libloadfile 'windraw   ())
     (libloadfile 'wingraph  ())
     (libloadfile 'winwindow ())
     (libloadfile 'wininit   ())
)
