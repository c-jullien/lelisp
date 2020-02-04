#	Le Makefile du systeme GELL 15.24 sur Linux
#
#	% make clean		efface tout
#
#	% make lelispbin	../common + ../llm3
#	% make telispbin	../common + ../llm3 + ../testlap+testext
#	% make belispbin	../common + ../llm3 + ../benchmarks
#	% make celispbin	../common + ../llm3 + ../llib
#	% make celispX11bin	../common + ../llm3 + ../llib + BVX11
#
#       % make source		pour avoir llc.s qui est crucial
###################################################################

DIRL    = $(shell cd ../..; pwd)
DIRG    = $(DIRL)
DIRS    = $(DIRL)/linux/C
DIRO    = .
DIRM    = ../../C

CC      = gcc

OPT0=   -O1
OPT=	-O2
OPT4=	-O4

# OPT0= -p
# OPT= -p
# OPT4= -p

CFLAGS=  -I$(DIRS) \
	-DNBSYST=70 -DBSD4x -DINRIA -DLINUX  \
	-DFOREIGN \
        -DFILEINI=\"$(DIRL)/llib/startup.ll\" \
	-I$(DIRG)/common

#	-pipe -dalign  -fsingle

# CFLAGS=  -I$(DIRS) \
# 	-DNBSYST=33 -DBSD4x -DBSD42 \
# 	-DINRIA -DSUNOS40 -DSUN4 -Bstatic \
# 	-DFOREIGN \
# 	-DFILEINI=\"$(DIRL)/llib/startup.ll\" \
# 	-pipe -temp=/usr/share/tmp

CF=	-I$(DIRG)/GELL/C -I$(DIRL)/common

#	-pipe -dalign  -fsingle -libmil

# CF=	-I$(DIRG)/GELL/C -I$(DIRL)/common
# 	-pipe -temp=/usr/share/tmp

CFX11=	-I$(DIRL)/virbitmap/X11 -I/usr/include/X11R4

CFM11=	-I$(DIRL)/virbitmap/X11 -I/usr/include/X11R4 -I/usr/include/Motif1.1 \
	-I$(DIRL)/virbitmap/X11/intrinsic \
	-I$(DIRL)/virbitmap/X11/intrinsic/motif \
	-DSYSV -DSNAPSHOT -DMALLOC_0_RETURNS_NULL \
	-DXT_BV -DMOTIF_BV -D_NO_PROTO -DMOTIF1_1

CSRC=	-S -I$(DIRG)/GELL/C -I$(DIRL)/common

LDFLAGS=

LDX11=	-lX11
LDM11=	-lXm -lXt $(LDX11)

LDLIBS=	-lm -lc

LINT= -a -b -c -h -x -I$(DIRG)/C

# ------------------------------------------------------------------------
#	Ne rien modifier apres cette ligne (commum a` tous les portages)
# ------------------------------------------------------------------------


# ====================================================================
#
#	Les binaires Le-Lisp GELL
#
# ====================================================================

#
#	1) les listes des diffe'rents objets
#

cobj=	o/llmain.o o/lelisp.o o/Getgloba.o o/llstdio.o o/llfloat31.o \
	o/llc.o 

mobj=	o/llinit.o  o/toperr.o  o/gc.o     o/physio.o o/read.o   \
	o/macroch.o o/print.o   o/eval.o   o/fspecs.o o/cntrl.o  \
	o/carcdr.o  o/symbs.o   o/fntstd.o o/number.o o/specnb.o \
	o/string.o  o/chars.o   o/extend.o o/bllsht.o

LLobjO=	o/LLobjO.o
obj=	$(cobj) $(mobj) 

tobj=	To/testlap.o To/testext.o

LLibO=	Lo/LLibO.o
lobj=	Lo/startll.o Lo/initc.o Lo/messages.o Lo/toplevel.o Lo/files.o \
	Lo/module.o Lo/defs.o Lo/genarith.o \
	Lo/virtty.o Lo/vt100.o Lo/path.o Lo/llpatch.o \
	Lo/setf.o Lo/defstruct.o Lo/abbrev.o Lo/microceyx.o \
	Lo/debug.o Lo/trace.o Lo/pretty.o Lo/libcir.o \
	Lo/sort.o Lo/array.o Lo/callext.o Lo/format.o Lo/date.o \
	Lo/libdate.o Lo/hash.o Lo/stringio.o Lo/sets.o Lo/schedule.o \
	Lo/resetfn.o Lo/queens.o

bobj=	Lo/startll.o Lo/initc.o Lo/format.o \
	Bo/fib20.o Bo/tak.o Bo/stak.o Bo/ctak.o Bo/takl.o Bo/takr.o \
	Bo/boyer.o Bo/browse.o Bo/destru.o Bo/traverse.o Bo/deriv.o \
	Bo/dderiv.o Bo/div.o Bo/fft.o Bo/puzzle.o Bo/triang.o \
	Bo/checkmet.o

X11obj=	o/evloop.o o/x11draw.o o/x11lib.o o/x11share.o

M11obj=	o/evloop.o o/x11draw.o o/x11xt.o o/x11share.o \
	o/widget.o o/Aidashell.o o/aidawid.o \
	o/motif.o o/newmotif.o

vobj=	Vo/x11color.o Vo/x11graph.o Vo/x11struct.o Vo/x11_def.o \
	Vo/x11draw.o Vo/x11init.o Vo/x11window.o Vo/x11bitmap.o \
	Vo/x11event.o Vo/x11menu.o \
	Vo/virutil.o Vo/virmenu.o Vo/vircolor.o \
	Vo/virbit.o Vo/virevent.o Vo/virdraw.o Vo/virgraph.o \
	Vo/virwindow.o Vo/virinit.o Vo/virbitmap.o \
	Vo/ttywindow.o Lo/evloop.o

#
#	2) Et c'est parti ...
#

all:	lelispbin

tout:	lelispbin telispbin celispbin belispbin celispX11bin

#
#	3) fabrication des binaires
#


LLobjO:	$(obj)
	$(LD) -r $(obj) -o $(LLobjO)

LLibO:	$(lobj)
	$(LD) -r $(lobj) -o $(LLibO)

lelispbin: $(LLobjO)
	$(CC) $(CFLAGS) $(OPT) $(LDFLAGS) $(LLobjO) $(LDLIBS) \
		-o $(DIRO)/lelispbin

telispbin: $(LLobjO) $(tobj)
	$(CC) $(CFLAGS) $(OPT) $(LDFLAGS) $(LLobjO) $(tobj) $(LDLIBS) \
		-o $(DIRO)/telispbin

belispbin: $(LLobjO) $(bobj)
	$(CC) $(CFLAGS) $(OPT) $(LDFLAGS) $(LLobjO) $(bobj) $(LDLIBS) \
		-o $(DIRO)/belispbin

celispbin: $(LLobjO) $(LLibO)
	$(CC) $(CFLAGS) $(OPT) $(LDFLAGS) $(LLobjO) $(LLibO) $(LDLIBS) \
		-o $(DIRO)/celispbin
	$(DIRM)/makesymcache $(DIRO)/celisp

pelispbin: $(LLobjO) $(LLibO) $(pobj)
	$(CC) $(CFLAGS) $(OPT) $(LDFLAGS) $(LLobjO) \
		$(LLibO) $(pobj) $(LDLIBS) \
		-o $(DIRO)/pelispbin
	$(DIRM)/makesymcache $(DIRO)/pelisp

celispX11bin: $(LLobjO) $(LLibO) $(X11obj) $(vobj) 
	$(CC) $(CFLAGS) $(OPT) $(LDFLAGS) $(LLobjO) $(LLibO) $(X11obj) \
		$(vobj) $(LDX11) $(LDLIBS) \
		-o $(DIRO)/celispX11bin
	$(DIRM)/makesymcache $(DIRO)/celispX11

#
#	($cobj) : les *.o de $(DIRL)/common dans ./o/* pour (Zelispbin)
#

o/llmain.o: $(DIRL)/common/llmain.c
	$(CC) $(CFLAGS) $(OPT) -c $(DIRL)/common/llmain.c
	mv llmain.o o/llmain.o
o/lelisp.o: $(DIRL)/common/lelisp.c
	$(CC) $(CFLAGS) $(OPT) -c $(DIRL)/common/lelisp.c
	mv lelisp.o o/lelisp.o
o/Getgloba.o: $(DIRS)/Getgloba.c
	$(CC) $(CFLAGS) $(OPT) -c $(DIRS)/Getgloba.c
	mv Getgloba.o o/Getgloba.o
o/llstdio.o: $(DIRL)/common/llstdio.c
	$(CC) $(CFLAGS) $(OPT) -c $(DIRL)/common/llstdio.c
	mv llstdio.o o/llstdio.o
o/llfloat.o: $(DIRL)/common/llfloat.c
	$(CC) $(CFLAGS) $(OPT) -c $(DIRL)/common/llfloat.c
	mv llfloat.o o/llfloat.o
o/llfloat31.o: ../C/llfloat31.c
	$(CC) $(CFLAGS) $(OPT) -I../C -c ../C/llfloat31.c
	mv llfloat31.o o/llfloat31.o
o/llc.o: ../C/llc.c
	$(CC) $(CF) $(OPT0) -c ../C/llc.c
	mv llc.o o

#
#	($mobj) : les *.o des sources LLM3 dans ./o/* pour (Zelispbin)
#

o/llinit.o:  ../Cllm3/llinit.c  
	$(CC) $(CF) $(OPT4) -c ../Cllm3/llinit.c  
	mv llinit.o  o
o/toperr.o:  ../Cllm3/toperr.c  
	$(CC) $(CF) $(OPT4) -c ../Cllm3/toperr.c  
	mv toperr.o  o
o/gc.o:      ../Cllm3/gc.c      
	$(CC) $(CF) $(OPT4) -c ../Cllm3/gc.c      
	mv gc.o      o
o/physio.o:  ../Cllm3/physio.c  
	$(CC) $(CF) $(OPT4) -c ../Cllm3/physio.c  
	mv physio.o  o
o/read.o:    ../Cllm3/read.c    
	$(CC) $(CF) $(OPT4) -c ../Cllm3/read.c    
	mv read.o    o
o/macroch.o: ../Cllm3/macroch.c 
	$(CC) $(CF) $(OPT4) -c ../Cllm3/macroch.c 
	mv macroch.o o
o/print.o:   ../Cllm3/print.c   
	$(CC) $(CF) $(OPT4) -c ../Cllm3/print.c   
	mv print.o   o
o/eval.o:    ../Cllm3/eval.c    
	$(CC) $(CF) $(OPT4) -c ../Cllm3/eval.c    
	mv eval.o    o
o/fspecs.o:  ../Cllm3/fspecs.c  
	$(CC) $(CF) $(OPT4) -c ../Cllm3/fspecs.c  
	mv fspecs.o  o
o/cntrl.o:   ../Cllm3/cntrl.c   
	$(CC) $(CF) $(OPT4) -c ../Cllm3/cntrl.c   
	mv cntrl.o   o
o/carcdr.o:  ../Cllm3/carcdr.c  
	$(CC) $(CF) $(OPT4) -c ../Cllm3/carcdr.c  
	mv carcdr.o  o
o/symbs.o:   ../Cllm3/symbs.c   
	$(CC) $(CF) $(OPT4) -c ../Cllm3/symbs.c   
	mv symbs.o   o
o/fntstd.o:  ../Cllm3/fntstd.c  
	$(CC) $(CF) $(OPT4) -c ../Cllm3/fntstd.c  
	mv fntstd.o  o
o/number.o:  ../Cllm3/number.c  
	$(CC) $(CF) $(OPT4) -c ../Cllm3/number.c  
	mv number.o  o
o/specnb.o:  ../Cllm3/specnb.c  
	$(CC) $(CF) $(OPT4) -c ../Cllm3/specnb.c  
	mv specnb.o  o
o/string.o:  ../Cllm3/string.c  
	$(CC) $(CF) $(OPT4) -c ../Cllm3/string.c  
	mv string.o  o
o/chars.o:   ../Cllm3/chars.c   
	$(CC) $(CF) $(OPT4) -c ../Cllm3/chars.c   
	mv chars.o   o
o/extend.o:  ../Cllm3/extend.c  
	$(CC) $(CF) $(OPT4) -c ../Cllm3/extend.c  
	mv extend.o  o
o/bllsht.o:  ../Cllm3/bllsht.c  
	$(CC) $(CF) $(OPT4) -c ../Cllm3/bllsht.c  
	mv bllsht.o  o


#
#	$(tobj) : les *.o du testlap dans ./To/* pour (telispbin)
#

To/testlap.o: ../Ctest/testlap.c
	$(CC) $(CF) $(OPT) -c ../Ctest/testlap.c
	mv testlap.o To
To/testext.o:	../../lltest/testext.c
	$(CC) $(CF) $(OPT) -c ../../lltest/testext.c
	mv testext.o To


#
#	$(lobj) : les *.o de llib dans ./Lo/* pour (celispbin)
#

Lo/startll.o: ../Cllib/startll.c
	$(CC) $(CF) $(OPT) -c ../Cllib/startll.c
	mv startll.o Lo
Lo/initc.o: ../Cllib/initc.c
	$(CC) $(CF) $(OPT) -c ../Cllib/initc.c
	mv initc.o Lo
Lo/messages.o: ../Cllib/messages.c
	$(CC) $(CF) $(OPT) -c ../Cllib/messages.c
	mv messages.o Lo
Lo/toplevel.o: ../Cllib/toplevel.c
	$(CC) $(CF) $(OPT) -c ../Cllib/toplevel.c
	mv toplevel.o Lo
Lo/files.o: ../Cllib/files.c
	$(CC) $(CF) $(OPT) -c ../Cllib/files.c
	mv files.o Lo
Lo/module.o: ../Cllib/module.c
	$(CC) $(CF) $(OPT) -c ../Cllib/module.c
	mv module.o Lo
Lo/defs.o: ../Cllib/defs.c
	$(CC) $(CF) $(OPT) -c ../Cllib/defs.c
	mv defs.o Lo
Lo/genarith.o: ../Cllib/genarith.c
	$(CC) $(CF) $(OPT) -c ../Cllib/genarith.c
	mv genarith.o Lo
Lo/virtty.o: ../Cllib/virtty.c
	$(CC) $(CF) $(OPT) -c ../Cllib/virtty.c
	mv virtty.o Lo
Lo/vt100.o: ../Cllib/vt100.c
	$(CC) $(CF) $(OPT) -c ../Cllib/vt100.c
	mv vt100.o Lo
Lo/path.o: ../Cllib/path.c
	$(CC) $(CF) $(OPT) -c ../Cllib/path.c
	mv path.o Lo
Lo/llpatch.o: ../Cllib/llpatch.c
	$(CC) $(CF) $(OPT) -c ../Cllib/llpatch.c
	mv llpatch.o Lo
Lo/setf.o: ../Cllib/setf.c
	$(CC) $(CF) $(OPT) -c ../Cllib/setf.c
	mv setf.o Lo
Lo/defstruct.o: ../Cllib/defstruct.c
	$(CC) $(CF) $(OPT) -c ../Cllib/defstruct.c
	mv defstruct.o Lo
Lo/abbrev.o: ../Cllib/abbrev.c
	$(CC) $(CF) $(OPT) -c ../Cllib/abbrev.c
	mv abbrev.o Lo
Lo/microceyx.o: ../Cllib/microceyx.c
	$(CC) $(CF) $(OPT) -c ../Cllib/microceyx.c
	mv microceyx.o Lo
Lo/debug.o: ../Cllib/debug.c
	$(CC) $(CF) $(OPT) -c ../Cllib/debug.c
	mv debug.o Lo
Lo/trace.o: ../Cllib/trace.c
	$(CC) $(CF) $(OPT) -c ../Cllib/trace.c
	mv trace.o Lo
Lo/pretty.o: ../Cllib/pretty.c
	$(CC) $(CF) $(OPT) -c ../Cllib/pretty.c
	mv pretty.o Lo
Lo/libcir.o: ../Cllib/libcir.c
	$(CC) $(CF) $(OPT) -c ../Cllib/libcir.c
	mv libcir.o Lo
Lo/sort.o: ../Cllib/sort.c
	$(CC) $(CF) $(OPT) -c ../Cllib/sort.c
	mv sort.o Lo
Lo/array.o: ../Cllib/array.c
	$(CC) $(CF) $(OPT) -c ../Cllib/array.c
	mv array.o Lo
Lo/callext.o: ../Cllib/callext.c
	$(CC) $(CF) $(OPT) -c ../Cllib/callext.c
	mv callext.o Lo
Lo/format.o: ../Cllib/format.c
	$(CC) $(CF) $(OPT) -c ../Cllib/format.c
	mv format.o Lo
Lo/date.o: ../Cllib/date.c
	$(CC) $(CF) $(OPT) -c ../Cllib/date.c
	mv date.o Lo
Lo/libdate.o: ../Cllib/libdate.c
	$(CC) $(CF) $(OPT) -c ../Cllib/libdate.c
	mv libdate.o Lo
Lo/hash.o: ../Cllib/hash.c
	$(CC) $(CF) $(OPT) -c ../Cllib/hash.c
	mv hash.o Lo
Lo/stringio.o: ../Cllib/stringio.c
	$(CC) $(CF) $(OPT) -c ../Cllib/stringio.c
	mv stringio.o Lo
Lo/sets.o: ../Cllib/sets.c
	$(CC) $(CF) $(OPT) -c ../Cllib/sets.c
	mv sets.o Lo
Lo/schedule.o: ../Cllib/schedule.c
	$(CC) $(CF) $(OPT) -c ../Cllib/schedule.c
	mv schedule.o Lo
Lo/evloop.o: ../Cllib/evloop.c
	$(CC) $(CF) $(OPT) -c ../Cllib/evloop.c
	mv evloop.o Lo
Lo/resetfn.o: ../Cllib/resetfn.c
	$(CC) $(CF) $(OPT) -c ../Cllib/resetfn.c
	mv resetfn.o Lo
Lo/queens.o: ../Cllib/queens.c
	$(CC) $(CF) $(OPT4) -c ../Cllib/queens.c
	mv queens.o Lo


#
#	$(bobj) : les *.o des benchmarks dans ./Bo/* pour (belispbin)
#

Bo/checkmet.o: ../Cbenchmarks/checkmet.c
	$(CC) $(CF) $(OPT) -c ../Cbenchmarks/checkmet.c
	mv checkmet.o Bo 
Bo/fib20.o: ../Cbenchmarks/fib20.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/fib20.c
	mv fib20.o Bo 
Bo/tak.o: ../Cbenchmarks/tak.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/tak.c
	mv tak.o Bo 
Bo/stak.o: ../Cbenchmarks/stak.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/stak.c
	mv stak.o Bo 
Bo/ctak.o: ../Cbenchmarks/ctak.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/ctak.c
	mv ctak.o Bo 
Bo/takl.o: ../Cbenchmarks/takl.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/takl.c
	mv takl.o Bo 
Bo/takr.o: ../Cbenchmarks/takr.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/takr.c
	mv takr.o Bo 
Bo/boyer.o: ../Cbenchmarks/boyer.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/boyer.c
	mv boyer.o Bo 
Bo/browse.o: ../Cbenchmarks/browse.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/browse.c
	mv browse.o Bo 
Bo/destru.o: ../Cbenchmarks/destru.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/destru.c
	mv destru.o Bo 
Bo/traverse.o: ../Cbenchmarks/traverse.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/traverse.c
	mv traverse.o Bo 
Bo/deriv.o: ../Cbenchmarks/deriv.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/deriv.c
	mv deriv.o Bo 
Bo/dderiv.o: ../Cbenchmarks/dderiv.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/dderiv.c
	mv dderiv.o Bo 
Bo/div.o: ../Cbenchmarks/div.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/div.c
	mv div.o Bo 
Bo/fft.o: ../Cbenchmarks/fft.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/fft.c
	mv fft.o Bo 
Bo/puzzle.o: ../Cbenchmarks/puzzle.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/puzzle.c
	mv puzzle.o Bo 
Bo/triang.o: ../Cbenchmarks/triang.c
	$(CC) $(CF) $(OPT4) -c ../Cbenchmarks/triang.c
	mv triang.o Bo 



#
#	$(X11obj) $(M11obj) : les *.o de X11, M11 dans ./Vo/*
#

# C code

o/evloop.o: ../../common/evloop.c
	$(CC) $(CFLAGS) $(CF) $(OPT) -c ../../common/evloop.c
	mv evloop.o o
o/x11draw.o: ../../virbitmap/X11/x11draw.c
	$(CC) $(CF) $(CFX11) $(OPT) -c ../../virbitmap/X11/x11draw.c
	mv x11draw.o o
o/x11lib.o: ../../virbitmap/X11/x11lib.c
	$(CC) $(CF) $(CFX11) $(OPT) -c ../../virbitmap/X11/x11lib.c
	mv x11lib.o o
o/x11share.o: ../../virbitmap/X11/x11share.c
	$(CC) $(CF) $(CFX11) $(OPT) -c ../../virbitmap/X11/x11share.c
	mv x11share.o o
o/x11xt.o: ../../virbitmap/X11/intrinsic/x11xt.c
	$(CC) $(CF) $(CFM11) $(OPT) -c ../../virbitmap/X11/intrinsic/x11xt.c
	mv x11xt.o o
o/widget.o: ../../virbitmap/X11/intrinsic/widget.c
	$(CC) $(CF) $(CFM11) $(OPT) -c ../../virbitmap/X11/intrinsic/widget.c
	mv widget.o o
o/Aidashell.o: ../../virbitmap/X11/intrinsic/Aidashell.c
	$(CC) $(CF) $(CFM11) $(OPT) -c ../../virbitmap/X11/intrinsic/Aidashell.c
	mv Aidashell.o o
o/aidawid.o: ../../virbitmap/X11/intrinsic/aidawid.c
	$(CC) $(CF) $(CFM11) $(OPT) -c ../../virbitmap/X11/intrinsic/aidawid.c
	mv aidawid.o o
o/motif.o: ../../virbitmap/X11/intrinsic/motif/motif.c
	$(CC) $(CF) $(CFM11) $(OPT) -c ../../virbitmap/X11/intrinsic/motif/motif.c
	mv motif.o o
o/newmotif.o: ../../virbitmap/X11/intrinsic/motif/newmotif.c
	$(CC) $(CF) $(CFM11) $(OPT) -c ../../virbitmap/X11/intrinsic/motif/newmotif.c
	mv newmotif.o o

Vo/x11color.o: ../Cvirbitmap/x11color.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/x11color.c
	mv x11color.o Vo
Vo/x11graph.o: ../Cvirbitmap/x11graph.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/x11graph.c
	mv x11graph.o Vo
Vo/x11struct.o: ../Cvirbitmap/x11struct.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/x11struct.c
	mv x11struct.o Vo
Vo/x11_def.o: ../Cvirbitmap/x11_def.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/x11_def.c
	mv x11_def.o Vo
Vo/x11draw.o: ../Cvirbitmap/x11draw.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/x11draw.c
	mv x11draw.o Vo
Vo/x11init.o: ../Cvirbitmap/x11init.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/x11init.c
	mv x11init.o Vo
Vo/x11window.o: ../Cvirbitmap/x11window.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/x11window.c
	mv x11window.o Vo
Vo/x11bitmap.o: ../Cvirbitmap/x11bitmap.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/x11bitmap.c
	mv x11bitmap.o Vo
Vo/x11event.o: ../Cvirbitmap/x11event.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/x11event.c
	mv x11event.o Vo
Vo/x11menu.o: ../Cvirbitmap/x11menu.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/x11menu.c
	mv x11menu.o Vo

# Le-Lisp code

Vo/virutil.o: ../Cvirbitmap/virutil.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/virutil.c
	mv virutil.o Vo
Vo/virmenu.o: ../Cvirbitmap/virmenu.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/virmenu.c
	mv virmenu.o Vo
Vo/vircolor.o: ../Cvirbitmap/vircolor.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/vircolor.c
	mv vircolor.o Vo
Vo/virbit.o: ../Cvirbitmap/virbit.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/virbit.c
	mv virbit.o Vo
Vo/virevent.o: ../Cvirbitmap/virevent.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/virevent.c
	mv virevent.o Vo
Vo/virdraw.o: ../Cvirbitmap/virdraw.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/virdraw.c
	mv virdraw.o Vo
Vo/virgraph.o: ../Cvirbitmap/virgraph.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/virgraph.c
	mv virgraph.o Vo
Vo/virwindow.o: ../Cvirbitmap/virwindow.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/virwindow.c
	mv virwindow.o Vo
Vo/virinit.o: ../Cvirbitmap/virinit.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/virinit.c
	mv virinit.o Vo
Vo/virbitmap.o: ../Cvirbitmap/virbitmap.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/virbitmap.c
	mv virbitmap.o Vo
Vo/ttywindow.o: ../Cvirbitmap/ttywindow.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/ttywindow.c
	mv ttywindow.o Vo

Vo/gellpatch.o: ../Cvirbitmap/gellpatch.c
	$(CC) $(CF) $(OPT) -c ../Cvirbitmap/gellpatch.c
	mv gellpatch.o Vo

#
#	clean: Histoire de tout refaire
#

clean:
	rm -f   $(LLobjO) $(obj) $(tobj) $(LLibO) $(lobj) $(bobj) \
		$(X11obj) $(M11obj) $(vobj)


