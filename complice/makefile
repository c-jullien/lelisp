# make	 	cree le fichier o/complice.lo standard

SYSTEM	= linux
SYSDIR	= $(PWD)/../$(SYSTEM)
DATE	= `date`
FLAGS	= -parano nil -w t -o o -p "m/" -p "l/"
CMPLC	= SYSDIR=$(SYSDIR) ./ncomplice
CAT	= cat

obj= o/cpcommon.lo o/cp1.lo o/cpmod2.lo o/cp2.lo o/cp.lo

all: o/complice.lo

o/complice.lo: $(obj)
	echo "; Version compilee le $(DATE)" > o/complice.lo
	cat $(obj) >> o/complice.lo

o/cpcommon.lo: l/cp0.ll l/cperror.ll
	$(CMPLC) $(FLAGS) cpcommon

o/cp1.lo: l/cp1.ll l/cpmod1.ll
	$(CMPLC) $(FLAGS) cp1

o/cp2.lo: l/cp2.ll l/cpenv.ll l/cpfnt.ll l/cppred.ll
	$(CMPLC) $(FLAGS) cp2

o/cpmod2.lo: l/cpmod2.ll
	$(CMPLC) $(FLAGS) cpmod2

o/cp.lo: l/cp.ll
	$(CMPLC) $(FLAGS) cp
