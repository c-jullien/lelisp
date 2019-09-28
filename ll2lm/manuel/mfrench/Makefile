FTEX= ch1.ftex ch2.ftex ch3.ftex ch4.ftex ch5.ftex ch6.ftex anx1.ftex anx2.ftex
DVI= ch1.dvi ch2.dvi ch3.dvi ch4.dvi ch5.dvi ch6.dvi anx1.dvi anx2.dvi

all: lpr

#SUFFIXES: dvi,ftex

lpr: analyzer.dvi
	lpr -d analyzer.dvi
clean:
	rm -f *.dvi *.aux *.idx *.ix *.log *.lot *.tex *.toc
	rm -f foo.*

$(DVI) : 
	@rm -f foo.*
	@echo "\documentstyle[11pt,fr,verbatimfiles]{ibook}" >foo.ftex
	@echo "\Begin" 				>> foo.ftex
	@cat $(@:.dvi=.ftex) 			>> foo.ftex
	@echo "\tableofcontents"		>> foo.ftex
	@echo "\listoftables"			>> foo.ftex
	@echo "\End" 				>> foo.ftex
	flatex foo
	mv foo.dvi $@

analyzer.dvi : analyzer.ftex
	flatex analyzer

analyzer.ftex : $(FTEX)
