##########################################################
# ce makefile permet de recompiler les tests de benchmarks
##########################################################

SYSTEM=sun4

CMDDIR=../$(SYSTEM)
COMPLICE=$(CMDDIR)/complice
CMPLCFLAGS= -parano nil

TOOLS= checkmet.lo
FILES=	boyer.lo browse.lo ctak.lo dderiv.lo deriv.lo destru.lo \
	div.lo fft.lo fib20.lo puzzle.lo stak.lo tak.lo takl.lo \
	takr.lo traverse.lo triang.lo

all: $(TOOLS) $(FILES)

.SUFFIXES: .lo .ll .lm

.ll.lo: $(TOOLS)
	$(COMPLICE) $(CMPLCFLAGS) $*

checkmet.lo: checkmet.ll checkmet.lm
	$(COMPLICE) $(CMPLCFLAGS) checkmet
