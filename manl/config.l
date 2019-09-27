.TH CONFIG L "30 September 1990" "Le-Lisp v15.2"
.SH NAME
config \- builds a LeLisp memory image.
.SH SYNOPSIS
.B lelisp/<machine>/config
name bin conf [llcore [<sizes-lelispbin>]]
.SH DESCRIPTION
Builds the memory image and the shell script to start a LeLisp system
with the name
.I name.

.TP
.I bin 
is the name of the LeLisp binary to use.  Usually, this name is
.I lelispbin.
Sometimes binaries using the LeLisp interpreter and programs in C or
Fortran are used.  This command makes it possible to build a memory image
containing programs defined as
.I "external functions"
from the LeLisp interpreter.  (For more details, see the LeLisp Reference
Manual, Chapter 14, and the command
.I lelisp(l)).
.TP
.I conf
is a LeLisp file that describes the construction of the memory image.
The standard configuration files are usually in the subdirectory
.I conf,
a subdirectory of the <machine> directory.
.TP
.I llcore
is an option that influences only the generation of the start up
command for the LeLisp system that is being built.  If this option
is omitted, then the core must be located in the directory
lelisp/<machine>/llcore to be consistent with  
the start up command of the memory image being built.
However, if during configuration, you 
decide to locate it elsewhere, then you must use this option to
specify the absolute path name of the directory where the core is
located in order to be consistent with the start up command.

.I Config 
starts up the binary
.I lelispbin
which first of all reads the file
.I startup.ll
in the LeLisp library, then evaluates the Lisp forms in the file
.I conf.
The evaluation of these forms should create a memory image with the
name
.I name.core
usually located in the subdirectory
.I llcore 
of the <machine> directory.  See also the option 
.I llcore.
.br
During the evaluation of the file
.I conf
the global Lisp variable
#:SYSTEM:NAME 
has the value of the Lisp symbol 
.I name.
This makes it possible to use the same configuration file to build
systems with different names (for example, systems with different
size zones).

.I Config
then creates a shell script with the name
.I name
that makes it possible to start up the binary
.I lelispbin
to restore the memory image built this way.

Optionally, you can give arguments that describe the size of the
different memory zones of the interpreter.  These arguments are passed
as such to 
.IR lelispbin .

.SH EXAMPLE
To build a system with the name
.I lelisp
with the binary
.I lelispbin,
the standard configuration file
.I Lelispconf.ll
and a code zone of 400 kbytes.
.br
\% cd lelisp/<machine>
.br
\% ./config lelisp lelispbin Lelispconf.ll -code 400

The file
.I Lelispconf.ll
contains the following Lisp forms\ :
.nf
(progn
  (load-stm #:system:name t t t t t)
  (add-feature (if (eq 0.0 0.0)
                   '31BITFLOATS
                 '64BITFLOATS))
  )
.fi
.SH "SEE ALSO"
lelisp(l),
.br
Le-Lisp V15.2, the Reference Manual, Je'ro^me Chailloux et al.,
INRIA, Rocquencourt, 78153 Le Chesnay Cedex.
