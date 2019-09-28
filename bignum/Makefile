#  Copyright     Digital Equipment Corporation & INRIA     1988, 1989
#  Last modified_on Wed Dec  6 15:04:03 GMT+1:00 1989 by herve 
#       modified_on Thu Nov  2 14:23:14 GMT+1:00 1989 by gangnet 
#       modified_on Wed Jul  5 10:23:54 GMT+2:00 1989 by bertin 
#       modified_on Tue Jun 13 20:29:43 GMT+2:00 1989 by shand 

CC = cc
LIB = BigNum.a
OBJECT = o/bn.o o/KerN.o o/bzf.o o/bz.o 
KERNH = h/BigNum.h 
CFLAGS = -c `cat .Version` -I./h -O #-g -pg
LKFLAGS = -O #-g

SENDMAIL=/usr/lib/sendmail
SENDMAILFLAGS=

# extra entries:
# all     - make all the staff
# tidy    - cleanup directories
# scratch - start from scratch

all: testKerN bztest 
	echo All is done !

tidy:
	rm -f ,* .,* *~ #*# .emacs_[0-9]* *.BAK *.CKP core a.out
	rm -f */,* */.,* */*~ */#*# */.emacs_[0-9]* */*.BAK */*.CKP

scratch:tidy 
	rm -f o/*.o

# build the BigNum library
$(LIB): o $(OBJECT)
	-rm -f $(LIB)
	ar cr $(LIB) $(OBJECT)
	ranlib $(LIB)

# build the directory o if doesn't already exist
o:
	mkdir o

# How to choose the machine dependante version. All produce KerN.o
o/KerN.o: c/KerN.c Makefile o
	echo "The Default is KerN written in C with digits on 32 bits"
	echo "-DDIGITon32BITS" >.Version
	$(MAKE) C32 CC="$(CC)" CFLAGS="$(CFLAGS)"

C16: o scratch
	echo "-DDIGITon16BITS" >.Version
	$(CC) $(CFLAGS) c/KerN.c
	mv KerN.o o
#	make CC=$(CC) CFLAGS="$(CFLAGS)"

C32: o 
	echo "-DDIGITon32BITS" >.Version
	$(CC) $(CFLAGS) c/KerN.c
	mv KerN.o o
#	make CC=$(CC) CFLAGS="$(CFLAGS)"

68K: o scratch
	echo "-DDIGITon32BITS" >.Version
	as s/68KerN.s -o o/KerN.o
	make CC=$(CC) CFLAGS="$(CFLAGS)"

vax: o scratch
	echo "-DDIGITon32BITS" >.Version
	as s/vaxKerN.s -o o/KerN.o
	make CC=$(CC) CFLAGS="$(CFLAGS)"

ns: o scratch
	echo "-DDIGITon32BITS" >.Version
	as s/nsKerN.s -o o/KerN.o
	make CC=$(CC) CFLAGS="$(CFLAGS)"

mips: o scratch
	echo "-DDIGITon32BITS" >.Version
	as -w s/mipsKerN.s -o o/KerN.o
	make CC=$(CC) CFLAGS="$(CFLAGS)"

pyramid: o scratch
	echo "-DDIGITon32BITS" >.Version
	as s/pyramidKerN.s -o o/KerN.o
	make CC=$(CC) CFLAGS="$(CFLAGS)"

sparc: o scratch
	echo "-DDIGITon32BITS" >.Version
	as s/sparcKerN.s -o o/KerN.o
	make CC=$(CC) CFLAGS="$(CFLAGS)"

# Level N
o/bn.o: c/bn.c $(KERNH) o
	$(CC) $(CFLAGS) c/bn.c
	mv bn.o o

# Level Z
o/bz.o: c/bz.c h/BigZ.h $(KERNH) o
	$(CC) $(CFLAGS) c/bz.c
	mv bz.o o

# Some functions build with BigZ
o/bzf.o: c/bzf.c h/BigZ.h $(KERNH) o
	$(CC) $(CFLAGS) c/bzf.c
	mv bzf.o o

# Tests Of KerN
testKerN: Makefile o/KerN.o o/testKerN.o
	$(CC) o/testKerN.o o/KerN.o $(LKFLAGS) -o testKerN

o/testKerN.o: c/testKerN.c $(KERNH) h/BntoBnn.h o
	$(CC) $(CFLAGS) c/testKerN.c
	mv testKerN.o o

# Tests Of BigZ
bztest: o/bztest.o $(LIB)
	$(CC) o/bztest.o $(LIB) $(LKFLAGS) -o bztest

o/bztest.o: c/bztest.c h/BigZ.h $(KERNH) o
	$(CC) $(CFLAGS) c/bztest.c
	mv bztest.o o

# documentation
doc: doc/bn.ps doc/bnf.ps 
docprl: doc/bnprl.ps

doc/bn.dvi: doc/bn.tex doc/bnbody.tex
	cd doc;\
	latex bn;\
	makeindex bn;\
	sed -e "s/\\item Bz/\\newpage \\Bz/g" < bn.ind > bn.index;\
	mv bn.index bn.ind;\
	latex bn;\
	cd ..

doc/bn.ps: doc/bn.dvi
	cd doc;\
	aptex -noprint bn;\
	mv aptex*.ps bn.ps;\
	cd ..

doc/bnf.dvi: doc/bnf.tex
	cd doc;\
	latex bnf;\
	cd ..

doc/bnf.ps: doc/bnf.dvi
	cd doc;\
	aptex -noprint bnf;\
	mv aptex*.ps bnf.ps;\
	cd ..

doc/bnprl.dvi: doc/bnprl.tex doc/bnbody.tex
	cd doc;\
	latex bnprl;\
	makeindex bnprl;\
	sed -e "s/\\item Bz/\\newpage \\Bz/g" < bnprl.ind > bnprl.index;\
	mv bnprl.index bnprl.ind;\
	latex bnprl;\
	cd ..

doc/bnprl.ps: doc/bnprl.dvi
	cd doc;\
	aptex -noprint bnprl;\
	mv aptex*.ps bnprl.ps;\
	cd ..

# build shell archives
shar: bignum01

# If you modify the list of files in the package kit, don't forget 
# to update doc/intro and README.

bignum01: README Makefile \
      doc/bn.tex doc/bnbody.tex doc/bnf.tex doc/intro\
      c/KerN.c c/bn.c c/bz.c c/bzf.c \
      c/bztest.c c/testKerN.c \
      h/BigNum.h h/BigZ.h h/BntoBnn.h \
      s/vaxKerN.s s/68KerN.s s/nsKerN.s s/68KerN.mot.s \
      s/mipsKerN.s s/pyramidKerN.s s/sparcKerN.s
	makekit -s90k -nbignum -t"Now do 'mkdir o; make'" \
            README Makefile\
            doc doc/bn.tex doc/bnbody.tex doc/bnf.tex \
                doc/intro doc/makeidx.sty \
            c c/KerN.c c/bn.c c/bz.c c/bzf.c \
              c/bztest.c c/testKerN.c \
            h h/BigNum.h h/BigZ.h h/BntoBnn.h \
            s s/vaxKerN.s s/68KerN.s s/nsKerN.s s/68KerN.mot.s \
              s/mipsKerN.s s/pyramidKerN.s s/sparcKerN.s

# send shell archives
USER=herve@decprl.dec.com
FROM=herve@decprl.dec.com (Jean-Claude Herve)
mail: bignum01 Makefile
	echo "From: $(FROM)" >sendmail_header
	echo To: $(USER) >>sendmail_header
	cp sendmail_header tosend
	echo "Subject: BigNum package from Digital PRL" >>tosend
	ls bignum[0-9][0-9] | sed -e "s/^bignum0*/    BigNum - Part /" > _flist1
	ls bignum[0-9][0-9] | sed -e "s/^/    /" > _flist2
	ls bignum[0-9][0-9] | sed -e "s/^/    \/bin\/sh /" > _flist3
	sed \
		-e "s/modified_on/modified_on/g" \
		-e "s/NN/"`ls bignum?? | wc -l | sed -e "s/ //g"`"/g" \
		-e "/^INCLUDE1/r _flist1" \
		-e "/^INCLUDE2/r _flist2" \
		-e "/^INCLUDE3/r _flist3" \
		-e "/^INCLUDE./d" \
		<doc/intro >>tosend
	$(SENDMAIL) $(SENDMAILFLAGS) $(USER) <tosend
	for i in `ls bignum[0-9][0-9]`; \
	    do cp sendmail_header tosend; \
	    echo $$i | sed -e "s/^bignum0*/Subject: BigNum - Part /" >>tosend; \
	    echo "# Remove all text above and including this line." >>tosend; \
	    sed -e "s/modified_on/modified_on/g" <$$i >>tosend; \
	    $(SENDMAIL) $(SENDMAILFLAGS) $(USER) <tosend; \
	    done
	rm -f sendmail_header tosend _flist[123] bignum[0-9][0-9]

