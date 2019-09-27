# Pour generer le kernel lelisp llm3

MAKE=nmake
SYST=win95

default:
	@echo 	Please, select 'os231', 'os231fpu', 'os264', 'os264fpu',
	@echo "		       'dos31', 'dos31fpu', 'dos64' or 'dos64fpu',"
	@echo "	 	       'unx31', 'unx31fpu', 'unx64', 'unx64fpu',"
	@echo "	 	       'uxs31', 'uxs31fpu', 'uxs64', 'uxs64fpu'."

dos31:		c$(SYST)
	@cd msdos
	@$(MAKE) asm31
	@cd ..

dos31fpu:	c$(SYST)
	@cd msdos
	@$(MAKE) asm31fpu
	@cd ..

dos64:		c$(SYST)
	@cd msdos
	@$(MAKE) asm64
	@cd ..

dos64fpu:	c$(SYST)
	@cd msdos
	@$(MAKE) asm64fpu
	@cd ..

os231:		c$(SYST)
	@cd os2
	@$(MAKE) asm31
	@cd ..

os231fpu:	c$(SYST)
	@cd os2
	@$(MAKE) asm31fpu
	@cd ..

os264:		c$(SYST)
	@cd os2
	@$(MAKE) asm64
	@cd ..

os264fpu:	c$(SYST)
	@cd os2
	@$(MAKE) asm64fpu
	@cd ..

unx31:		c$(SYST)
	@(cd unix; $(MAKE) masm31)

unx31fpu:	c$(SYST)
	@(cd unix; $(MAKE) masm31fpu)

unx64:		c$(SYST)
	@(cd unix; $(MAKE) masm64)

unx64fpu:	c$(SYST)
	@(cd unix; $(MAKE) masm64fpu)

uxs31:		c$(SYST)
	@(cd unix; $(MAKE) as31)

uxs31fpu:	c$(SYST)
	@(cd unix; $(MAKE) as31fpu)

uxs64:		c$(SYST)
	@(cd unix; $(MAKE) as64)

uxs64fpu:	c$(SYST)
	@(cd unix; $(MAKE) as64fpu)

#########################################################################
# Pour nettoyer

clean:
	@$(MAKE) clean$(SYST)

cleandos:
	@cd msdos
	-@$(MAKE) clean
	@cd ..

cleanos2:
	@cd os2
	-@$(MAKE) clean
	@cd ..

cleanaix386:
	@(cd unix; $(MAKE) clean)

cleanix386:
	@(cd unix; $(MAKE) clean)

cleansun386i:
	@(cd unix; $(MAKE) clean)

cleansco386i:
	@(cd unix; $(MAKE) clean)

#########################################################
# l'expanseur

cmsdos:
	@cd msdos
	@$(MAKE) llexpand.cor
	@cd ..

cos2:
	@cd os2
	@$(MAKE) llexpand.cor
	@cd ..

caix386:
	@(cd unix; $(MAKE) llexpand.core)

cix386:
	(cd unix; $(MAKE) llexpand.core)

csco386:
	@(cd unix; $(MAKE) llexpand.core)

csun386i:
	@(cd unix; $(MAKE) llexpand.core)
