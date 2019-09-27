# Toutes ces variables de makefile sont indispensables, car se
#  redefinissent  d'un syste`me a` l'autre.

# Pour savoir pour qui on travaille
SYSTEM=sun
LLDIR=../..
LLSYSDIR=$(LLDIR)/$(SYSTEM)
LLSYSDIRo=$(LLSYSDIR)/o

############################################################
# pour tout compiler
all: x11

clean: cleano cleanx11 purge

############################################################
# Pour la compilation C
CFLAGS=-O
LDFLAGS=-r -o
CFLAGS-LOCAL= -I$(LLDIR)/common -I. 

$(LLSYSDIRo)/x11.o: $(LLSYSDIRo)/x11lib.o $(LLSYSDIRo)/x11share.o $(LLSYSDIRo)/x11draw.o
	$(LD) $(LDFLAGS) x11.o \
		$(LLSYSDIRo)/x11lib.o \
		$(LLSYSDIRo)/x11share.o \
		$(LLSYSDIRo)/x11draw.o 
	mv x11.o $(LLSYSDIRo)

$(LLSYSDIRo)/x11share.o: x11share.c x11.h
	$(CC) $(CFLAGS) $(CFLAGS-LOCAL) -c x11share.c
	mv x11share.o $(LLSYSDIRo)

$(LLSYSDIRo)/x11draw.o: x11draw.c x11.h
	$(CC) $(CFLAGS) $(CFLAGS-LOCAL) -c x11draw.c
	mv x11draw.o $(LLSYSDIRo)

$(LLSYSDIRo)/x11lib.o: x11lib.c x11.h
	$(CC) $(CFLAGS) $(CFLAGS-LOCAL) -c x11lib.c
	mv x11lib.o $(LLSYSDIRo)


cleano:
	/bin/rm $(LLSYSDIRo)/x11.o $(LLSYSDIRo)/x11lib.o $(LLSYSDIRo)/x11share.o $(LLSYSDIRo)/x11draw.o
############################################################
# Pour la compilation Lisp
CMDDIR=/usr/local/bin
COMPLICE=$(CMDDIR)/complice
CMPLCFLAGS=-parano nil -w t -p \"$(LLDIR)/llib/\" -p \"$(LLDIR)/llmod/\" \
	-p \"$(LLDIR)/llobj/\" -p \"./\"
.SUFFIXES: .lo .lm
.lm.lo:
	@echo Generating $@ because of $?
	$(COMPLICE) $* $(CMPLCFLAGS) -e '(defun getglobal (s) 1)' -e '(defun defextern-cache (s))'

SRCDIR= .

x11:  x11_def.lo x11init.lo x11.lo 

x11.lo: x11.lm x11init.lo

x11_def.lo: $(SRCDIR)/x11_def.ll x11_def.lm
x11struct.lo: $(SRCDIR)/x11struct.ll x11struct.lm
x11bitmap.lo: $(SRCDIR)/x11bitmap.ll x11bitmap.lm  x11_def.lo x11struct.lo
x11menu.lo: $(SRCDIR)/x11menu.ll x11menu.lm  x11_def.lo x11struct.lo
x11color.lo: $(SRCDIR)/x11color.ll x11color.lm x11_def.lo x11struct.lo
x11event.lo:  $(SRCDIR)/x11event.ll x11event.lm  x11_def.lo x11struct.lo
x11draw.lo:  $(SRCDIR)/x11draw.ll x11draw.lm x11_def.lo x11struct.lo
x11graph.lo:  $(SRCDIR)/x11graph.ll x11graph.lm  x11_def.lo x11struct.lo
x11window.lo:  $(SRCDIR)/x11window.ll x11window.lm  x11_def.lo x11struct.lo \
	x11event.lo
x11init.lo:  $(SRCDIR)/x11init.ll x11init.lm x11menu.lo x11color.lo \
	x11bitmap.lo x11event.lo x11draw.lo x11graph.lo x11window.lo \
	x11_def.lo x11struct.lo ../../llobj/virutil.lo ../../llobj/virwindow.lo

x11.lm: x11.lc
	cp x11.lc x11.lm
x11_def.lm: x11_def.lc
	cp x11_def.lc x11_def.lm
x11struct.lm: x11struct.lc
	cp x11struct.lc x11struct.lm
x11bitmap.lm: x11bitmap.lc
	cp x11bitmap.lc x11bitmap.lm
x11menu.lm: x11menu.lc
	cp x11menu.lc x11menu.lm
x11color.lm: x11color.lc
	cp x11color.lc x11color.lm
x11event.lm: x11event.lc
	cp x11event.lc x11event.lm
x11draw.lm: x11draw.lc
	cp x11draw.lc x11draw.lm
x11graph.lm: x11graph.lc
	cp x11graph.lc x11graph.lm
x11window.lm: x11window.lc
	cp x11window.lc x11window.lm
x11init.lm: x11init.lc
	cp x11init.lc x11init.lm

cleanx11:
	/bin/rm x11*.lo *~
purge:
	/bin/rm *~ #* *.bak

