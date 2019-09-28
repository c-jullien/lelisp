#  Le Makefile du systeme Le_Lisp [68k]
#  ne construit que les fichiers assembleurs utilisant la
#  syntaxe Motorola.
###################################################################
#  ce makefile est utilise par ../$(SYSTEM)/makefile
###################################################################
#
# binaire par defaut:
FLT=31
BIN=s$(FLT)

# La machine a base de 68k: par defaut: sun
# C'est aussi: lelisp/$(SYSTEM)
SYSTEM=sun

# pour choisir sur quel systeme on re'alise l'expansion:
# [par defaut c'est $(SYSTEM)]
HOST=$(SYSTEM)

s=	$(BIN)/llinit.s  $(BIN)/toperr.s $(BIN)/gc.s \
	$(BIN)/physio.s  $(BIN)/read.s   \
	$(BIN)/macroch.s $(BIN)/print.s  $(BIN)/eval.s\
	$(BIN)/fspecs.s  $(BIN)/cntrl.s  \
	$(BIN)/carcdr.s  $(BIN)/symbs.s  $(BIN)/fntstd.s \
	$(BIN)/number.s  $(BIN)/specnb.s \
	$(BIN)/string.s  $(BIN)/chars.s  $(BIN)/extend.s $(BIN)/bllsht.s

# On peut choisir le Lisp qui va realiser l'expansion. Voir $(SYSTEM)/makefile.
# BOOTLISP=mylelisp
# BOOTLISP="/usr/local/bin/complice -i"
BOOTLISP=/usr/ilog/lelisp/$(HOST)/lelisp

# Entree par defaut:
all: $(BIN)

# extra flags
MAKE=make
SHELL=/bin/sh
MAKEFLAG=-e
EXPANDFLAGS=

# Entree pour tout faire:
tout: s31 s64

# Entree pour tout effacer: assemble's, assembleur et marques.
clean:
	rm -f s31/*.s s64/*.s
	rm -f ../$(HOST)/llcore/expd68k.core
	rm -f .exp* expanseur

# Entre'e flottants 31 bits, calculs flottants par fpu 68881.
s31::
	@$(MAKE) $(MAKEFLAG) expanseur .expfpu31 BIN=s31 

.expfpu31: $(s)
	@echo ...Generating $@ because of $?
	$(SHELL) ./llexpand -flag MC68881 t -flag 31BITFLOATS t \
		-dest ./s31/ $(EXPANDFLAGS) \
		-system $(HOST) -bootlisp '$(BOOTLISP)' \
		-files "`for i in $? ; do \
			    basename $$i .s ; \
			    done`"
	@touch .expfpu31

# Entre'e flottants 64 bits, calculs flottants par fpu 68881.
s64::
	@$(MAKE) $(MAKEFLAG) expanseur .expfpu64 \
		BIN=s64 EXPANDFLAGS="$(EXPANDFLAGS)"

.expfpu64: $(s)
	@echo ...Generating $@ because of $?
	$(SHELL) ./llexpand -flag MC68881 t -flag 31BITFLOATS \(\) \
		-dest ./s64/ $(EXPANDFLAGS) \
		-system $(HOST) -bootlisp '$(BOOTLISP)' \
		-files "`for i in $? ; do \
			    basename $$i .s ; \
			    done`"
	@touch .expfpu64

# L'expanseur: LLM3 -> Assembleur Motorola
expanseur: 	llexpand ../$(HOST)/llcore/expd68k.core 
	@echo ...Generating $@ because of $?
	@touch  expanseur

../$(HOST)/llcore/expd68k.core: ../lltool/llm3.ll ../lltool/expand.ll \
		../lltool/macllm3.ll mac68k.ll
	@echo ...Generating $@ because of $?
	$(SHELL) ./faire.llexpand -bootlelisp '$(BOOTLISP)' -system '$(HOST)

$(BIN)/llinit.s:  ../llm3/llinit.llm3 	;	rm -f $(BIN)/llinit.s
$(BIN)/toperr.s:  ../llm3/toperr.llm3 	;	rm -f $(BIN)/toperr.s
$(BIN)/gc.s:      ../llm3/gc.llm3     	;	rm -f $(BIN)/gc.s
$(BIN)/physio.s:  ../llm3/physio.llm3 	;	rm -f $(BIN)/physio.s
$(BIN)/read.s:    ../llm3/read.llm3   	;	rm -f $(BIN)/read.s
$(BIN)/macroch.s: ../llm3/macroch.llm3	;	rm -f $(BIN)/macroch.s
$(BIN)/print.s:   ../llm3/print.llm3  	;	rm -f $(BIN)/print.s
$(BIN)/eval.s:    ../llm3/eval.llm3   	;	rm -f $(BIN)/eval.s
$(BIN)/fspecs.s:  ../llm3/fspecs.llm3 	;	rm -f $(BIN)/fspecs.s
$(BIN)/cntrl.s:   ../llm3/cntrl.llm3  	;	rm -f $(BIN)/cntrl.s
$(BIN)/carcdr.s:  ../llm3/carcdr.llm3 	;	rm -f $(BIN)/carcdr.s
$(BIN)/symbs.s:   ../llm3/symbs.llm3  	;	rm -f $(BIN)/symbs.s
$(BIN)/fntstd.s:  ../llm3/fntstd.llm3 	;	rm -f $(BIN)/fntstd.s
$(BIN)/number.s:  ../llm3/number.llm3 	;	rm -f $(BIN)/number.s
$(BIN)/specnb.s:  ../llm3/specnb.llm3 	;	rm -f $(BIN)/specnb.s
$(BIN)/string.s:  ../llm3/string.llm3 	;	rm -f $(BIN)/string.s
$(BIN)/chars.s:   ../llm3/chars.llm3  	;	rm -f $(BIN)/chars.s
$(BIN)/extend.s:  ../llm3/extend.llm3 	;	rm -f $(BIN)/extend.s
$(BIN)/bllsht.s:  ../llm3/bllsht.llm3 	;	rm -f $(BIN)/bllsht.s

