# This makefile was generated by the ILOG Analyzer.
# Version     : 2.060001         Date : Thu Jan  13 94 16:08:57 
# SubVersion  : 1
# It enables to build modules from Lisp source files for 
# - project : windows
#
######
# Directories
######

ROOTDIR=/nfs/lelisp15/work/modana/
SYSTEM=sun4
LLDIR=/usr/ilog/lelisp/

######
# Make use of standard complice
######

COMPLICE=$(LLDIR)$(SYSTEM)/complice

######
# Complice options
######

COMPLICEFLAGS=\
	-e "(set (symbol (quote system)(quote path)) (list  \"\" \
	\"$(LLDIR)$(SYSTEM)/\" \
	\"/nfs/lelisp15/work/virbitmap/windows/\" \
	\"/nfs/lelisp15/work/sun4/\" \"/nfs/lelisp15/work/llib/\" \
	\"/nfs/lelisp15/work/llobj/\" \"/nfs/lelisp15/work/llmod/\" \
	\"/nfs/lelisp15/work/llub/\" \"/nfs/lelisp15/work/modana/\" \
	))" 

######
# LL Objects involved
######

LLOBJS=/nfs/lelisp15/work/virbitmap/windows/win_def.lo \
	/nfs/lelisp15/work/virbitmap/windows/winwindo.lo \
	/nfs/lelisp15/work/virbitmap/windows/winstruc.lo \
	/nfs/lelisp15/work/virbitmap/windows/winmenu.lo \
	/nfs/lelisp15/work/virbitmap/windows/wininit.lo \
	/nfs/lelisp15/work/virbitmap/windows/wingraph.lo \
	/nfs/lelisp15/work/virbitmap/windows/winevent.lo \
	/nfs/lelisp15/work/virbitmap/windows/windraw.lo \
	/nfs/lelisp15/work/virbitmap/windows/wincolor.lo \
	/nfs/lelisp15/work/virbitmap/windows/winbitma.lo \
	/nfs/lelisp15/work/virbitmap/windows/win.lo 

######
# Generic entries
######

all: $(LLOBJS)

clean:
	rm -f $(LLOBJS)


info:
	@echo complice=$(COMPLICE)
	@echo compliceflags=$(COMPLICEFLAGS)

i:
	@$(COMPLICE) $(COMPLICEFLAGS) -v -i

######
# Module dependencies
######

/nfs/lelisp15/work/virbitmap/windows/win_def.lo win_def.lo : \
	/nfs/lelisp15/work/virbitmap/windows/win_def.lm \
	/nfs/lelisp15/work/virbitmap/windows/win_def.ll 
	$(COMPLICE) win_def $(COMPLICEFLAGS) \
	-o /nfs/lelisp15/work/virbitmap/windows/ 

/nfs/lelisp15/work/virbitmap/windows/winwindo.lo winwindo.lo \
	: /nfs/lelisp15/work/virbitmap/windows/winwindo.lm \
	/nfs/lelisp15/work/llib/virstruct.ll \
	/nfs/lelisp15/work/llib/virmacros.ll \
	/nfs/lelisp15/work/virbitmap/windows/win_def.lm 
	$(COMPLICE) winwindo $(COMPLICEFLAGS) \
	-o /nfs/lelisp15/work/virbitmap/windows/ 

/nfs/lelisp15/work/virbitmap/windows/winstruc.lo winstruc.lo \
	: /nfs/lelisp15/work/virbitmap/windows/winstruc.lm \
	/nfs/lelisp15/work/llib/virstruct.ll 
	$(COMPLICE) winstruc $(COMPLICEFLAGS) \
	-o /nfs/lelisp15/work/virbitmap/windows/ 

/nfs/lelisp15/work/virbitmap/windows/winmenu.lo winmenu.lo : \
	/nfs/lelisp15/work/virbitmap/windows/winmenu.lm \
	/nfs/lelisp15/work/virbitmap/windows/winmenu.ll \
	/nfs/lelisp15/work/llib/virstruct.ll 
	$(COMPLICE) winmenu $(COMPLICEFLAGS) \
	-o /nfs/lelisp15/work/virbitmap/windows/ 

/nfs/lelisp15/work/virbitmap/windows/wininit.lo wininit.lo : \
	/nfs/lelisp15/work/virbitmap/windows/wininit.lm \
	/nfs/lelisp15/work/virbitmap/windows/wininit.ll \
	/nfs/lelisp15/work/llib/virmacros.ll \
	/nfs/lelisp15/work/llib/virstruct.ll \
	/nfs/lelisp15/work/virbitmap/windows/winevent.lm \
	/nfs/lelisp15/work/virbitmap/windows/wingraph.lm \
	/nfs/lelisp15/work/virbitmap/windows/wincolor.lm \
	/nfs/lelisp15/work/virbitmap/windows/win_def.lm 
	$(COMPLICE) wininit $(COMPLICEFLAGS) \
	-o /nfs/lelisp15/work/virbitmap/windows/ 

/nfs/lelisp15/work/virbitmap/windows/wingraph.lo wingraph.lo \
	: /nfs/lelisp15/work/virbitmap/windows/wingraph.lm \
	/nfs/lelisp15/work/virbitmap/windows/wingraph.ll \
	/nfs/lelisp15/work/llib/virmacros.ll \
	/nfs/lelisp15/work/llib/virstruct.ll \
	/nfs/lelisp15/work/virbitmap/windows/win_def.lm 
	$(COMPLICE) wingraph $(COMPLICEFLAGS) \
	-o /nfs/lelisp15/work/virbitmap/windows/ 

/nfs/lelisp15/work/virbitmap/windows/winevent.lo winevent.lo \
	: /nfs/lelisp15/work/virbitmap/windows/winevent.lm \
	/nfs/lelisp15/work/virbitmap/windows/winevent.ll \
	/nfs/lelisp15/work/llib/virstruct.ll \
	/nfs/lelisp15/work/llib/virmacros.ll \
	/nfs/lelisp15/work/virbitmap/windows/win_def.lm 
	$(COMPLICE) winevent $(COMPLICEFLAGS) \
	-o /nfs/lelisp15/work/virbitmap/windows/ 

/nfs/lelisp15/work/virbitmap/windows/windraw.lo windraw.lo : \
	/nfs/lelisp15/work/virbitmap/windows/windraw.lm \
	/nfs/lelisp15/work/virbitmap/windows/windraw.ll \
	/nfs/lelisp15/work/llib/virstruct.ll \
	/nfs/lelisp15/work/virbitmap/windows/win_def.lm \
	/nfs/lelisp15/work/virbitmap/windows/wingraph.lm 
	$(COMPLICE) windraw $(COMPLICEFLAGS) \
	-o /nfs/lelisp15/work/virbitmap/windows/ 

/nfs/lelisp15/work/virbitmap/windows/wincolor.lo wincolor.lo \
	: /nfs/lelisp15/work/virbitmap/windows/wincolor.lm \
	/nfs/lelisp15/work/virbitmap/windows/wincolor.ll \
	/nfs/lelisp15/work/llib/virstruct.ll \
	/nfs/lelisp15/work/virbitmap/windows/win_def.lm 
	$(COMPLICE) wincolor $(COMPLICEFLAGS) \
	-o /nfs/lelisp15/work/virbitmap/windows/ 

/nfs/lelisp15/work/virbitmap/windows/winbitma.lo winbitma.lo \
	: /nfs/lelisp15/work/virbitmap/windows/winbitma.lm \
	/nfs/lelisp15/work/llib/virstruct.ll \
	/nfs/lelisp15/work/virbitmap/windows/win_def.lm 
	$(COMPLICE) winbitma $(COMPLICEFLAGS) \
	-o /nfs/lelisp15/work/virbitmap/windows/ 

/nfs/lelisp15/work/virbitmap/windows/win.lo win.lo : \
	/nfs/lelisp15/work/virbitmap/windows/win.lm \
	/nfs/lelisp15/work/llib/virstruct.ll \
	/nfs/lelisp15/work/llib/virmacros.ll \
	/nfs/lelisp15/work/virbitmap/windows/winmenu.lm \
	/nfs/lelisp15/work/virbitmap/windows/winevent.lm \
	/nfs/lelisp15/work/virbitmap/windows/wingraph.lm \
	/nfs/lelisp15/work/virbitmap/windows/windraw.lm \
	/nfs/lelisp15/work/virbitmap/windows/wincolor.lm \
	/nfs/lelisp15/work/virbitmap/windows/wininit.lm \
	/nfs/lelisp15/work/virbitmap/windows/win_def.lm 
	$(COMPLICE) win $(COMPLICEFLAGS) \
	-o /nfs/lelisp15/work/virbitmap/windows/ 


