# Toutes ces variables de makefile sont indispensables, car se
#  redefinissent  d'un syste`me a` l'autre.

.SUFFIXES: $(SUFFIXES) .ccf

# pour rejoindre lelisp
LLDIR	=..\..

# Pour savoir pour qui on travaille
SYSTEM	= win95
LLSYSDIR= $(LLDIR)\$(SYSTEM)

# Pour la compilation C
CC	= cl
CFLAGS	= -nologo -c -Ox -Gs -G5 -Op -W3 -Ze -DLLSTACK
LDFLAGS	=
LDLIBS	=
LIB	=
CFLAGSLOCAL= -I$(LLDIR)\common -I$(LLSYSDIR)\c -I.
SRCDIR	=.

# Pour la compilation Lisp
CMDDIR	= $(LELISP)\$(SYSTEM)
COMPLICE= $(CMDDIR)\complice
CMPFLAGS=-parano nil -w t -p \"../../llib/\" -p \"../../llmod/\" \
	 -p \"../../llobj/\" -p \"./\"

WARNOFF	= -wd28278

MODULES	= win.lo	\
	  winbitma.lo	\
	  wincolor.lo	\
	  windraw.lo	\
	  winevent.lo	\
	  wingraph.lo	\
	  wininit.lo	\
	  winmenu.lo	\
	  winstruc.lo	\
	  winwindo.lo	\
	  win_def.lo

all:	cmplcflg.ccf $(MODULES)

win.lo:	      win.lm wininit.lo
	$(COMPLICE) $* -config cmplcflg.ccf

win_def.lo:  $(SRCDIR)\win_def.ll  win_def.lm
	$(COMPLICE) $* -config cmplcflg.ccf

winstruc.lo: $(SRCDIR)\winstruc.ll winstruc.lm
	$(COMPLICE) $* -config cmplcflg.ccf

winbitma.lo: $(SRCDIR)\winbitma.ll winbitma.lm win_def.lo winstruc.lo
	$(COMPLICE) $* -config cmplcflg.ccf

winmenu.lo:  $(SRCDIR)\winmenu.ll  winmenu.lm  win_def.lo winstruc.lo
	$(COMPLICE) $* -config cmplcflg.ccf

wincolor.lo: $(SRCDIR)\wincolor.ll wincolor.lm win_def.lo winstruc.lo
	$(COMPLICE) $* -config cmplcflg.ccf

winevent.lo: $(SRCDIR)\winevent.ll winevent.lm win_def.lo winstruc.lo
	$(COMPLICE) $* -config cmplcflg.ccf

windraw.lo:  $(SRCDIR)\windraw.ll  windraw.lm  win_def.lo winstruc.lo
	$(COMPLICE) $* -config cmplcflg.ccf

wingraph.lo: $(SRCDIR)\wingraph.ll wingraph.lm win_def.lo winstruc.lo
	$(COMPLICE) $* -config cmplcflg.ccf

winwindo.lo: $(SRCDIR)\winwindo.ll winwindo.lm win_def.lo winstruc.lo winevent.lo
	$(COMPLICE) $* -config cmplcflg.ccf

wininit.lo:  $(SRCDIR)\wininit.ll  wininit.lm  winmenu.lo wincolor.lo \
	winbitma.lo winevent.lo windraw.lo wingraph.lo winwindo.lo \
	win_def.lo winstruc.lo ..\..\llobj\virutil.lo ..\..\llobj\virwindow.lo
	$(COMPLICE) $* -config cmplcflg.ccf

# widgets extensions

widgets.lo: $(SRCDIR)\widgets.ll   widgets.lm win_def.lo winstruc.lo winevent.lo
	$(COMPLICE) $* -config cmplcflg.ccf

$(LLSYSDIR)\win.lib: $(LLSYSDIR)\o\winbitma.obj $(LLSYSDIR)\o\wincolor.obj \
		     $(LLSYSDIR)\o\windraw.obj  $(LLSYSDIR)\o\winevent.obj \
		     $(LLSYSDIR)\o\wingraph.obj $(LLSYSDIR)\o\winwindo.obj
	@if exist $(LLSYSDIR)\win.lib del $(LLSYSDIR)\win.lib
	@lib /nologo $(LLSYSDIR)\win.lib +$(LLSYSDIR)\o\winbitma.obj;
	@lib /nologo $(LLSYSDIR)\win.lib +$(LLSYSDIR)\o\wincolor.obj;
	@lib /nologo $(LLSYSDIR)\win.lib +$(LLSYSDIR)\o\windraw.obj;
	@lib /nologo $(LLSYSDIR)\win.lib +$(LLSYSDIR)\o\winevent.obj;
	@lib /nologo $(LLSYSDIR)\win.lib +$(LLSYSDIR)\o\wingraph.obj;
	@lib /nologo $(LLSYSDIR)\win.lib +$(LLSYSDIR)\o\winwindo.obj;

$(LLSYSDIR)\o\winbitma.obj: winbitma.c winvirbi.h
	$(CC) $(CFLAGS) $(CFLAGSLOCAL) $(LIB) -Fo$@ winbitma.c

$(LLSYSDIR)\o\wincolor.obj: wincolor.c winvirbi.h
	$(CC) $(CFLAGS) $(CFLAGSLOCAL) $(LIB) -Fo$@ wincolor.c

$(LLSYSDIR)\o\windraw.obj: windraw.c winvirbi.h
	$(CC) $(CFLAGS) $(CFLAGSLOCAL) $(LIB) -Fo$@ windraw.c

$(LLSYSDIR)\o\winevent.obj: winevent.c winvirbi.h
	$(CC) $(CFLAGS) $(CFLAGSLOCAL) $(LIB) -Fo$@ winevent.c

$(LLSYSDIR)\o\wingraph.obj: wingraph.c winvirbi.h
	$(CC) $(CFLAGS) $(CFLAGSLOCAL) $(LIB) -Fo$@ wingraph.c

$(LLSYSDIR)\o\winwindo.obj: winwindo.c winvirbi.h
	$(CC) $(CFLAGS) $(CFLAGSLOCAL) $(LIB) -Fo$@ winwindo.c

cmplcflg.ccf: Makefile
	@echo $(CMPFLAGS) > cmplcflg.ccf
	@echo -e "(de getglobal (s) 1)" >> cmplcflg.ccf
	@echo -e "(de defextern-cache (s))" >> cmplcflg.ccf

cleanwin:
	del win*.lo *.BAK

clean:
	del *.lo *.BAK

purge:
	del *.BAK
