.TH LELISP L "December 1, 1993" "Le-Lisp v15.2"
.SH NAME
lelisp, lelispX11, cmplc++\  \- starts the Le-Lisp system
.SH SYNOPSIS
.B lelisp
[
.B \-r 
file ] [cons]
.SH DESCRIPTION
Starts the Le-Lisp system.  After displaying a banner identifying the
system, it puts the user into an interactive loop characterized by the
display of the prompt "?".  The function (END) terminates a Le-Lisp
session and returns the user to the shell.  The command
.I lelispX11
is identical to 
.I lelisp
but starts Le-Lisp using an image in which the X11 libraries are
already loaded, and the
.IR "Virtual Bitmap "
has been initialized to
.BR |X11|.
(See
.BR INIBITMAP 
in the Le-Lisp Reference Manual.)  The command
.I cmplc++
is similar to the command
.I lelisp
but uses a different compiler:
.I lelisp
integrates the smaller dynamic compiler, while
.I cmplc++
uses the module compiler,
.BR complice,
that generates more efficient code.  (Again, see the Le-Lisp Reference Manual
and the command 
.I complice(l).)

On certain machines it is possible to build executable memory images
called
.BR EXECORE.
In order to do so, use the Le-Lisp
.BR Makefile
and set the Makefile variable 
.B EXE
to
.B exe
in the following way:
.br
.B % make lelisp EXE=exe
.br
The two options of the
.I lelisp
command have no real use in EXECORE mode.

.SH OPTIONS
.TP
.B \-r " file"
The option
.B \-r
makes it possible to restore the memory image named
.BR file
when the Le-Lisp interpreter starts up.  This memory image must
exist and have been created by the same Le-Lisp system; otherwise, the
error message 
.I "incompatible memory image"
will be displayed and the session will not be started.

.TP
.B cons
This optional argument,
.B cons,
is a number that specifies, in units of 8 Kcons, the size of the zone
allocated to cons cells.  The default value of the argument is 4,
corresponding to a zone of 32 Kcons - that is, 256 Kbytes.


.SH "CONSTRUCTION"
It is possible to rebuild the default memory images, or to build others.
This operation is carried out by means of the command
.BR make(1),
associated with the file 
.BR lelisp/<machine>/Makefile.

A variety of systems are offered in the standard Le-Lisp
.BR Makefile  
including those described in this manual page, or for certain
implementations, their equivalent with 64 bit allocated floating point
numbers instead of the default 31-bit immediate floating point
numbers; there may also be configurations for other integrated
windowing systems, depending on the machine on which Le-Lisp is
distributed.  Consult the 
.BR Makefile 
or the Installation Guide which came with your Le-Lisp distribution for 
more details.

With the
.BR Makefile
you can build your own Le-Lisp systems by creating a binary, a
configuration file, and finally a memory image. 
This must be done when you need to statically integrate foreign
language object files in a Le-Lisp image.  To create new images, we
advise the user to create another
.BR Makefile
which manages the compilation of the C or Fortran files, and that uses
the Le-Lisp
.BR Makefile 
to build a new binary and possibly a new memory image.  To help you
make a new image, the Le-Lisp 
.BR Makefile
offers a certain number of 
.I "makefile variables"
which can be redefined to meet your needs.  This makes it feasible to
use the Le-Lisp
.BR Makefile 
without having to modify it, and thus keeping it independent of
new versions of Le-Lisp.  The variables available for redefinition are:
.TP
.BI USERBIN
names a new Le-Lisp binary.
.TP
.BI USERXBIN
has the same effect but also links with the X11 libraries.
.TP
.BI USERO
contains the list of ".o" files resulting from a C or Fortran compilation.
.TP
.BI USERFLAGS
lets you specify additional compilation flags.
.TP
.BI USERLELISP
lets you choose a new name for the memory image. By default, the
binary name is the value of the variable USERXBIN.  To use a different
binary, you should redefine the variable USERLELISPBIN.
.TP
.BI USERLELISPBIN
renames the Le-Lisp binary used to build a memory image, USERLELISP.
.TP
.BI USERCONF
specifies the Le-Lisp file that will configure the memory image.
In the standard distribution,  these files are in the directory
.I lelisp/<machine>/conf/*conf.ll .
.TP
.BI USERSIZE
contains the list of sizes of Le-Lisp memory zones.  (See the Le-Lisp
Reference Manual for more detail.)  By default, they are the same
size as for a standard
.I lelisp.
.BI USERCFILE
declares the pathname of C source file so that it can be compiled with
the correct compilation options; these options allow the object to be
linked with a Le-Lisp binary.
.BI USEROFILE
declares the pathname of the object file produced by compiling
$(USERCFILE).
.BI USERXCFILE
just like USERCFILE, but compiles with the options necessary for X11.
.BI USERXOFILE
just like USEROFILE, but with X11.
.BI USERCFLAGS
declares your own compiler options to be passed to the C compiler when
compiling a C source file declared using $(USERCFILE) or $(USERXCFILE).

.SH "EXAMPLES"
We will begin by building the standard image
.I cmplc
on a sun4:
.RS
.ft B
.nf
% pwd
/usr/ilog/lelisp/sun4
% make cmplc
./config cmplc lelispbin cmplcconf.ll -stack 6 -code 1500 -heap 256 -number 0 -vector 4 -string 5  -symbol 5 -cons 4 -float 0
; Le-Lisp (by INRIA) version 15.23  (14/Feb/90)  [sun4]
= (Version:  15.23)
 ...
May Le-Lisp be with you
% ls lelisp
lelisp
%
.fi
.ft R
.RE

Now we will build an image with 64 bit allocated floating point
numbers using a Sony machine with a MC68881 processor:
.RS
.ft B
.nf
% make lelisp64
./config lelisp64 lefpu64bin lelispconf.ll -stack 6 -code 600 -heap 256  -number 0 -vector 4 -string 5  -symbol 5 -cons 4 -float 0 -float 16
; Le-Lisp (by INRIA) version 15.23  (14/Feb/90)  [sony]
= (Version:  15.23)
 ...
May Le-Lisp be with you
% ls lelisp64
lelisp64
%
.fi
.ft R
.RE
.sp 3
Now let's look at an example using 
.BR Makefile
variables.
.br
Let's say we have two C files,
.IR ex1.c 
and 
.IR ex2.c,
in a directory, /usr/home, that we want to link with a Le-Lisp iamge.
We will name this image  
.I examplelisp.
It will use a binary named
.I lexamplebin
which has the compiled C files linked in.  This image is described by
the configuration file
.I exampleconf.ll .
We will use the standard zone sizes.
.RS
.ft B
.nf
% cd /usr/home
% cat makefile
DIR=/usr/home
LLDIR=/usr/ilog/lelisp
MACHINE=sun4

# building the core
examplelisp: lexamplebin exampleconf.ll
	( cd $(LLDIR)/$(MACHINE) ; \\
	$(MAKE) $(DIR)/examplelisp USERLELISP=$(DIR)/examplelisp \\
		USERLELISPBIN=$(DIR)/lexamplebin \\
		USERCONF=$(DIR)/exampleconf.ll \\
	)

# building the binary
lexamplebin: ex1.o ex2.o
	(cd $(LLDIR)/$(MACHINE) ; \\
	$(MAKE) $(DIR)/lexamplebin USERBIN=$(DIR)/lexamplebin \\
		USERO="$(DIR)/ex1.o $(DIR)/ex2.o" \\
	)

# our C files
ex1.o: ex1.c
 	(cd $(LLDIR)/$(MACHINE) ; \\
 	$(MAKE) $(DIR)/ex1.o \\
 	USEROFILE=$(DIR)/ex1.o USERCFILE=$(DIR)/ex1.c \\
 	USERCFLAGS="-Dex1_path=$(DIR)" \\
 	)
ex2.o: ex2.c
 	(cd $(LLDIR)/$(MACHINE) ; \\
 	$(MAKE) $(DIR)/ex1.o \\
 	USEROFILE=$(DIR)/ex1.o USERCFILE=$(DIR)/ex1.c \\
 	)


% cat exampleconf.ll
; configuring the system
(progn
  (load-stm #:system:name ; name of the core
	    t             ; minimal environment
	    ()            ; no editor in this image
	    t             ; standard environment
	    t             ; the loader
	    t             ; the standard compiler
  )
  (add-feature (if (eq 0.0 0.0)
                 '31BITFLOATS
                 '64BITFLOATS))
  )

% make examplelisp
cc -O -c ex1.c
cc -O -c ex2.c
(cd /nfs/current/lelisp/sun4 ; \\
make /usr/home/lexamplebin USERBIN=/usr/home/lexamplebin \\
USERO="/usr/home/ex1.o /usr/home/ex2.o" )

/bin/cc -O -sun4 -DNBSYST=35 -DBSD4x -DBSD42 -DTIMEUNIT=60. -DINRIA \\
\-DSUN4 -DSUNOS40 -Bstatic -DCLOAD -DFOREIGN -DFILEINI=\\"../llib/startup.ll\\"\
\-I../common -DSYSNAME=\\"Le-Lisp\\" -o /usr/home/lexamplebin \\
o/llmain.o o/llstdio.o o/llfloat.o o/llnumb.o o/lelisp.o lelisp31bin.o \\
/usr/home/ex1.o /usr/home/ex2.o -z -x -lm -lc

( cd /nfs/current/lelisp/sun4 ; \\
make /usr/home/examplelisp USERLELISP=/usr/home/examplelisp \\
        USERLELISPBIN=/usr/home/lexamplebin \\
        USERCONF=/usr/home/exampleconf.ll )

\./config /usr/home/examplelisp /usr/home/lexamplebin \\
\/usr/home/exampleconf.ll -stack 6 -code 1500 -heap 256  \\
\-number 0 -vector 4 -string 5  -symbol 5 -cons 4 -float 0
; Le-Lisp (by INRIA) version 15.23  (14/Feb/90)  [sun4]
 ...
May Le-Lisp be with you
%
.fi
.ft R
.RE
.sp 3
As a final example, we will make an EXECORE system on an IBM RT.
.RS
.ft B
.nf
% make lelisp EXE=exe
        /bin/cc -O -DNBSYST=26 -DS5 -DTIMEUNIT=60. -DIBMRT   -DNOCLOAD -DFOREIGN  -DFILEINI=\\"../llib/startup.ll\\" -I../common -DSYSNAME=\\"Le-Lisp\\" -DSTAMP=\\"$$\\" -DEXECORE -c ../common/lelisp.c
        mv lelisp.o o/lelispexe.o
        /bin/cc -O -DNBSYST=26 -DS5 -DTIMEUNIT=60. -DIBMRT   -DNOCLOAD -DFOREIGN  -DFILEINI=\\"../llib/startup.ll\\" -I../common -DSYSNAME=\\"Le-Lisp\\" -c execore.c
        /bin/cc -O -DNBSYST=26 -DS5 -DTIMEUNIT=60. -DIBMRT   -DNOCLOAD -DFOREIGN  -DFILEINI=\\"../llib/startup.ll\\" -I../common -DSYSNAME=\\"Le-Lisp\\" -z -x -o lelisp31exebin \\
        o/llmain.o o/llstdio.o o/llfloat.o o/llnumb.o o/lelispexe.o execore.o  lelisp31bin.o \\
        -lm -lc -lld
        ln lelisp31exebin lelispexebin
	./config lelisp lelispexebin lelispconf.ll -stack 6 -code 1500 -heap 256  -number 0 -vector 4 -string 5  -symbol 5 -cons 4 -float 0
; Le-Lisp (by INRIA) version 15.23  (14/Feb/90)  [ibmrt]
= (Version:  15.23)
  ...
May Le-Lisp be with you
%
.fi
.ft R
.RE
.sp 3
.SH "SEE ALSO"
config(l), complice(l), make(1),
.br
Le-Lisp V15.2, the Reference Manual, Je'ro^me Chailloux et al.,
INRIA, Rocquencourt, 78153 Le Chesnay Cedex.

.SH FILES
lelisp
.br
		shell script that starts the Le-Lisp system.
.br
lelisp/<machine>/llcore/lelisp.core
.br
		memory image associated with the command
.I lelisp.
.br
lelisp/<machine>/lelispbin
.br
		Le-Lisp binary.
.br
.br
lelisp/<machine>/leX11bin
.br
		Le-Lisp binary that includes the
.I X11 
binaries.
.br
lelisp/<machine>/Makefile
.br
		Le-Lisp makefile.
.sp 2
In mode 
.BR EXECORE:
.br
lelisp
.br
		an executable memory image.
