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

(print "=== Loading GELL initialization file for project virbitmap")

;; Adding new path for elaboration files.
(setq elabdirs (append
                   '("/nfs/work/lelisp/Celab/" "/nfs/work/lelisp/Celab/")
                   elabdirs))

;; Files requested for elaboration at beginning of makecore.
(setq lelispelabfiles (append lelispelabfiles '()))

;; Files requested for elaboration after load-aida
(setq aidafiles (append aidafiles '()))

;; Files requested for elaboration after patches.
(setq patchelabfiles (append patchelabfiles '()))

;; Cleaning core image...
(gell-clean-core-image)

