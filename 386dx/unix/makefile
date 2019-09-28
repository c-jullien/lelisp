# Pour generer ..\$(SYSTEM)\ll$(FLT)bin.o (kernel lelisp llm3)

DIRECTORY=`if [ "\`uname -r\`" = "4.0" ]; then echo svr4i386 ; else echo ix386 ; fi`
SYSTEM=linux
ASFLAGS=
CVT=cvtomf
DIR=$(EXT)$(FLT)$(FPU)
DIR3=../../llm3
LISPEXE=/usr/local/lelisp/$(SYSTEM)/lelisp31bin

EXPAND=	../es386.ll	../exp386.ll		../expand.ll	\
	../llm3.ll	../mac386.ll		../macro386.ll	\
	../masm2as.ll	../faire.llexpand	../llexpand

KERNEL=	$(DIR)/ll386.o		$(DIR)/llinit.o		$(DIR)/toperr.o \
	$(DIR)/gc.o		$(DIR)/physio.o		$(DIR)/read.o   \
	$(DIR)/macroch.o	$(DIR)/print.o		$(DIR)/cntrl.o  \
	$(DIR)/carcdr.o		$(DIR)/symbs.o		$(DIR)/fntstd.o \
	$(DIR)/number.o		$(DIR)/specnb.o		$(DIR)/string.o \
	$(DIR)/chars.o		$(DIR)/fspecs.o		$(DIR)/eval.o   \
	$(DIR)/extend.o		$(DIR)/bllsht.o

default:
	@echo "	Please, select 'masm31', 'masm31fpu', 'masm64', 'masm64fpu',"
	@echo   "	               'as31',   'as31fpu',   'as64', or 'as64fpu'."

masm31:
	@make	"AS=masm"  "FLT=31" "FPU="    "USE387=no387" "EXT=asm" \
		SYSTEM=$(DIRECTORY) ../../$(DIRECTORY)/lelisp31llm3.o

masm31fpu:
	@make	"AS=masm"  "FLT=31" "FPU=fpu" "USE387=387"   "EXT=asm" \
		SYSTEM=$(DIRECTORY) ../../$(DIRECTORY)/lelisp31llm3.o

masm64:
	@make	"AS=masm"  "FLT=64" "FPU="    "USE387=no387" "EXT=asm" \
		SYSTEM=$(DIRECTORY) ../../$(DIRECTORY)/lelisp64llm3.o

masm64fpu:
	@make	"AS=masm"  "FLT=64" "FPU=fpu" "USE387=387"   "EXT=asm" \
		SYSTEM=$(DIRECTORY) ../../$(DIRECTORY)/lelisp64llm3.o

as31:
	@make	"AS=as"    "FLT=31" "FPU="    "USE387=no387" "EXT=s" \
		SYSTEM=$(DIRECTORY) ../../$(DIRECTORY)/lelisp31llm3.o

as31fpu:
	@make	"AS=as"    "FLT=31" "FPU=fpu" "USE387=387"   "EXT=s" \
		SYSTEM=$(DIRECTORY) ../../$(DIRECTORY)/lelisp31llm3.o

as64:
	@make	"AS=as"    "FLT=64" "FPU="    "USE387=no387" "EXT=s" \
		SYSTEM=$(DIRECTORY) ../../$(DIRECTORY)/lelisp64llm3.o

as64fpu:
	@make	"AS=as"    "FLT=64" "FPU=fpu" "USE387=387"   "EXT=s" \
		SYSTEM=$(DIRECTORY) ../../$(DIRECTORY)/lelisp64llm3.o

#########################################################################
# Pour nettoyer

clean:
	rm -f	../msdos/asm31/*.asm	../msdos/asm31/*.o
	rm -f	../msdos/asm31/*.BAK	../msdos/asm31/*.dat
	rm -f	../msdos/asm31/*.equ	../msdos/asm31fpu/*.asm
	rm -f	../msdos/asm31fpu/*.obj	../msdos/asm31fpu/*.BAK
	rm -f	../msdos/asm31fpu/*.dat	../msdos/asm31fpu/*.equ
	rm -f	../msdos/asm64/*.asm	../msdos/asm64/*.obj
	rm -f	../msdos/asm64/*.BAK	../msdos/asm64/*.dat
	rm -f	../msdos/asm64/*.equ	../msdos/asm64fpu/*.asm
	rm -f	../msdos/asm64fpu/*.obj	../msdos/asm64fpu/*.BAK
	rm -f	../msdos/asm64fpu/*.dat	../msdos/asm64fpu/*.equ
	rm -f	../os2/asm31/*.asm	../os2/asm31/*.obj
	rm -f	../os2/asm31/*.BAK	../os2/asm31/*.dat
	rm -f	../os2/asm31/*.equ	../os2/asm31fpu/*.asm
	rm -f	../os2/asm31fpu/*.obj	../os2/asm31fpu/*.BAK
	rm -f	../os2/asm31fpu/*.dat	../os2/asm31fpu/*.equ
	rm -f	../os2/asm64/*.asm	../os2/asm64/*.obj
	rm -f	../os2/asm64/*.BAK	../os2/asm64/*.dat
	rm -f	../os2/asm64/*.equ	../os2/asm64fpu/*.asm
	rm -f	../os2/asm64fpu/*.obj	../os2/asm64fpu/*.BAK
	rm -f	../os2/asm64fpu/*.dat	../os2/asm64fpu/*.equ
	rm -f	asm31/*.asm		asm31/*.o
	rm -f	asm31/*.BAK		asm31/*.dat
	rm -f	asm31/*.equ		asm31fpu/*.asm
	rm -f	asm31fpu/*.o		asm31fpu/*.BAK
	rm -f	asm31fpu/*.dat		asm31fpu/*.equ
	rm -f	asm64/*.asm		asm64/*.o
	rm -f	asm64/*.BAK		asm64/*.dat
	rm -f	asm64/*.equ		asm64fpu/*.asm
	rm -f	asm64fpu/*.o		asm64fpu/*.BAK
	rm -f	asm64fpu/*.dat		asm64fpu/*.equ
	rm -f	s31/*.s			s31/*.o
	rm -f	s31/*.BAK		s31fpu/*.s
	rm -f	s31fpu/*.o		s31fpu/*.BAK
	rm -f	s64/*.s			s64/*.o
	rm -f	s64/*.BAK		s64fpu/*.s
	rm -f	s64fpu/*.o		s64fpu/*.BAK
	rm -f	*.BAK			../*.BAK
	rm -f	*.core

##########################################################################
# Pour generer $(system)/ll$(FLT)bin.o (kernel lelisp llm3)

../../$(SYSTEM)/lelisp$(FLT)llm3.o: $(KERNEL)
	ld -r $(KERNEL) -o ../../$(SYSTEM)/lelisp$(FLT)llm3.o

#########################################################
# les fichiers objects du llm3 pour as

$(EXT)$(FLT)$(FPU)/bllsht.o:	$(EXT)$(FLT)$(FPU)/bllsht.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/carcdr.o:	$(EXT)$(FLT)$(FPU)/carcdr.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/chars.o:	$(EXT)$(FLT)$(FPU)/chars.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/cntrl.o:	$(EXT)$(FLT)$(FPU)/cntrl.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/eval.o:	$(EXT)$(FLT)$(FPU)/eval.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/extend.o:	$(EXT)$(FLT)$(FPU)/extend.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/fntstd.o:	$(EXT)$(FLT)$(FPU)/fntstd.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/fspecs.o:	$(EXT)$(FLT)$(FPU)/fspecs.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/gc.o:	$(EXT)$(FLT)$(FPU)/gc.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/ll386.o:	$(EXT)$(FLT)$(FPU)/ll386.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/llinit.o:	$(EXT)$(FLT)$(FPU)/llinit.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/macroch.o:	$(EXT)$(FLT)$(FPU)/macroch.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/number.o:	$(EXT)$(FLT)$(FPU)/number.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/physio.o:	$(EXT)$(FLT)$(FPU)/physio.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/print.o:	$(EXT)$(FLT)$(FPU)/print.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/read.o:	$(EXT)$(FLT)$(FPU)/read.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/specnb.o:	$(EXT)$(FLT)$(FPU)/specnb.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/string.o:	$(EXT)$(FLT)$(FPU)/string.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/symbs.o:	$(EXT)$(FLT)$(FPU)/symbs.$(EXT)
	$(AS) -o $@ $<

$(EXT)$(FLT)$(FPU)/toperr.o:	$(EXT)$(FLT)$(FPU)/toperr.$(EXT)
	$(AS) -o $@ $<

#########################################################
# les fichiers assembleurs du llm3
$(DIR)/bllsht.$(EXT):	$(DIR3)/bllsht.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/carcdr.$(EXT):	$(DIR3)/carcdr.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/chars.$(EXT):	$(DIR3)/chars.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/cntrl.$(EXT):	$(DIR3)/cntrl.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/eval.$(EXT):	$(DIR3)/eval.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/extend.$(EXT):	$(DIR3)/extend.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/fntstd.$(EXT):	$(DIR3)/fntstd.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/fspecs.$(EXT):	$(DIR3)/fspecs.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/gc.$(EXT):	$(DIR3)/gc.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/ll386.$(EXT):	../ll386.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/llinit.$(EXT):	$(DIR3)/llinit.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/macroch.$(EXT):	$(DIR3)/macroch.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/number.$(EXT):	$(DIR3)/number.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/physio.$(EXT):	$(DIR3)/physio.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/print.$(EXT):	$(DIR3)/print.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/read.$(EXT):	$(DIR3)/read.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/specnb.$(EXT):	$(DIR3)/specnb.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/string.$(EXT):	$(DIR3)/string.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/symbs.$(EXT):	$(DIR3)/symbs.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

$(DIR)/toperr.$(EXT):	$(DIR3)/toperr.llm3 llexpand.core
	@(cd ..; ./llexpand -$(SYSTEM) -$(AS) -$(FLT) -$(USE387) $(@F))

llexpand.core:	$(EXPAND) $(LISPEXE)
	@rm -f $@
	@(cd ..;./llexpand -end)
