# Variables INDISPENSABLES!
SYSTEM=sun
CMDDIR=/usr/local/bin
COMPLICE=$(CMDDIR)/complice

all: bvtty.lo bandetty.lo

bvtty.lo: bvtty.lm bvtty.ll
	$(COMPLICE) bvtty

bandetty.lo: bandetty.lm bandetty.ll
	$(COMPLICE) bandetty
