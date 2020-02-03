#  Fabrique tous les *.c et les *.h de la version C de Le-Lisp
#  i.e. fabrique l'expanseur et expanse tous les *.llm3
###################################################################

DIRL=/nfs/work/lelisp

EXPLLM3 = -flag 31BITFLOATS t -source $(DIRL)/llm3/ -dest ./ 

llm3=	$(DIRL)/llm3/llinit.llm3 $(DIRL)/llm3/toperr.llm3 $(DIRL)/llm3/gc.llm3 \
	$(DIRL)/llm3/physio.llm3 $(DIRL)/llm3/read.llm3   $(DIRL)/llm3/macroch.llm3 \
	$(DIRL)/llm3/print.llm3  $(DIRL)/llm3/eval.llm3   $(DIRL)/llm3/fspecs.llm3 \
	$(DIRL)/llm3/cntrl.llm3  $(DIRL)/llm3/carcdr.llm3 $(DIRL)/llm3/symbs.llm3 \
	$(DIRL)/llm3/fntstd.llm3 $(DIRL)/llm3/number.llm3 $(DIRL)/llm3/specnb.llm3 \
	$(DIRL)/llm3/string.llm3 $(DIRL)/llm3/chars.llm3 \
	$(DIRL)/llm3/extend.llm3 $(DIRL)/llm3/bllsht.llm3

c=	../Cllm3/llinit.c  ../Cllm3/toperr.c ../Cllm3/gc.c \
	../Cllm3/physio.c  ../Cllm3/read.c   ../Cllm3/macroch.c \
	../Cllm3/print.c  ../Cllm3/eval.c   ../Cllm3/fspecs.c \
	../Cllm3/cntrl.c  ../Cllm3/carcdr.c  ../Cllm3/symbs.c \
	../Cllm3/fntstd.c ../Cllm3/number.c  ../Cllm3/specnb.c \
	../Cllm3/string.c  ../Cllm3/chars.c \
	../Cllm3/extend.c ../Cllm3/bllsht.c


all:	localabel llcore/expandC.core expansion


localabel:	$(llm3) macCopt.ll
		dolocalabel $(DIRL)


llcore/expandC.core:	macC.ll ../../lltool/expand.ll \
			../../lltool/llm3.ll ../../lltool/macllm3.ll
		faire.llexpand


../Cllm3/llinit.c:  $(DIRL)/llm3/llinit.llm3  ; @touch ../Cllm3/llinit.c
../Cllm3/toperr.c:  $(DIRL)/llm3/toperr.llm3  ; @touch ../Cllm3/toperr.c
../Cllm3/gc.c:      $(DIRL)/llm3/gc.llm3      ; @touch ../Cllm3/gc.c
../Cllm3/physio.c:  $(DIRL)/llm3/physio.llm3  ; @touch ../Cllm3/physio.c
../Cllm3/read.c:    $(DIRL)/llm3/read.llm3    ; @touch ../Cllm3/read.c
../Cllm3/macroch.c: $(DIRL)/llm3/macroch.llm3 ; @touch ../Cllm3/macroch.c
../Cllm3/print.c:   $(DIRL)/llm3/print.llm3   ; @touch ../Cllm3/print.c
../Cllm3/eval.c:    $(DIRL)/llm3/eval.llm3    ; @touch ../Cllm3/eval.c
../Cllm3/fspecs.c:  $(DIRL)/llm3/fspecs.llm3  ; @touch ../Cllm3/fspecs.c
../Cllm3/cntrl.c:   $(DIRL)/llm3/cntrl.llm3   ; @touch ../Cllm3/cntrl.c
../Cllm3/carcdr.c:  $(DIRL)/llm3/carcdr.llm3  ; @touch ../Cllm3/carcdr.c
../Cllm3/symbs.c:   $(DIRL)/llm3/symbs.llm3   ; @touch ../Cllm3/symbs.c
../Cllm3/fntstd.c:  $(DIRL)/llm3/fntstd.llm3  ; @touch ../Cllm3/fntstd.c
../Cllm3/number.c:  $(DIRL)/llm3/number.llm3  ; @touch ../Cllm3/number.c
../Cllm3/specnb.c:  $(DIRL)/llm3/specnb.llm3  ; @touch ../Cllm3/specnb.c
../Cllm3/string.c:  $(DIRL)/llm3/string.llm3  ; @touch ../Cllm3/string.c
../Cllm3/chars.c:   $(DIRL)/llm3/chars.llm3   ; @touch ../Cllm3/chars.c
../Cllm3/extend.c:  $(DIRL)/llm3/extend.llm3  ; @touch ../Cllm3/extend.c
../Cllm3/bllsht.c:  $(DIRL)/llm3/bllsht.llm3  ; @touch ../Cllm3/bllsht.c

expansion:	$(c)
		llexpand $(EXPLLM3) $?
		@touch expansion


