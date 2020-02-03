#|
Elaboration file for project:
Project name      : virbitmap
Root directory    : /nfs/work/lelisp/
Runtime directory : /nfs/work/lelisp/
Bin directory     : /nfs/work/lelisp/Chp9700/
System directory  : /nfs/work/lelisp/GELL/Cvirbitmap/
Directories       : 
   /nfs/work/lelisp/virbitmap/X11/
   /nfs/work/lelisp/llmod/
   /nfs/work/lelisp/llobj/
Modules lists     : (none)
Modules           : (x11_def x11bitmap x11color x11draw x11event x11graph 
x11init x11menu x11struct x11window virutil virmenu vircolor virbit virevent 
virdraw virgraph virwindow virinit virbitmap)
Modules required  : ()
Exclude modules   : ()
Required projects : 
   lisp
[CRUNCH] Crunch directory  : /nfs/work/lelisp/GELL/Cvirbitmap/
[COMPLICE] LLOBJS directories : 
[COMPLICE] COMPLICEFLAGS      : 
[GELL] Elaboration directories    : 
   /nfs/work/lelisp/Celab/
[GELL] Required elaboration files : 
[GELL] C source directories       : 
   /nfs/work/lelisp/GELL/Cvirbitmap/
[GELL] C object directories       : 
   /nfs/work/lelisp/Chp9700/
[GELL] Required C objects         : 
[GELL] GELLFLAGS                  : 
   ()
[GELL] USERFLAGS                  : 
   ()

Date : Fri Nov  27 92 12:33:00 
|#

(print "=== Loading elaboration file for project virbitmap")

(libloadfile "x11struct.le" t)
(libloadfile "x11_def.le" t)
(libloadfile "virutil.le" t)
(libloadfile "x11bitmap.le" t)
(libloadfile "x11event.le" t)
(libloadfile "x11window.le" t)
(libloadfile "virdraw.le" t)
(libloadfile "virmenu.le" t)
(libloadfile "virgraph.le" t)
(libloadfile "virwindow.le" t)
(libloadfile "vircolor.le" t)
(libloadfile "virbit.le" t)
(libloadfile "x11draw.le" t)
(libloadfile "x11graph.le" t)
(libloadfile "x11color.le" t)
(libloadfile "x11init.le" t)
(libloadfile "virevent.le" t)
(libloadfile "virinit.le" t)
(libloadfile "virbitmap.le" t)
(libloadfile "x11menu.le" t)

;; Cleaning core image...
(gell-clean-core-image)

