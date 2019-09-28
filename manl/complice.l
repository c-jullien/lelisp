.TH COMPLICE L "30 September 1990" "Le-Lisp v15.2"
.SH NAME
complice \- Le-Lisp module compiler
.SH SYNOPSIS
.B complice
[
.B \-parano
flagp ] [
.B \-cons
n ] [
.B \-callext
flagp ] [
.B \-cmplc
cmd ] [
.B \-lldir
path ] [
.B \-e
S-expr ] [
.B \-hh
] [
.B \-i
] [
.B \-g
flagp ] [
.B \-o
diro ] [
.B \-p
dirp ] [
.B \-r
flagp ] [
.B \-v
] [
.B \-w
flagp ]
[ module1 ... moduleN ]

.SH DESCRIPTION
.I Complice
compiles the Le-Lisp modules
.I module1...moduleN.
.I Complice
searches for the descriptions of these modules (the file
.IR moduleI.lm )
in the Le-Lisp path of the user, relying on the global variable
#:SYSTEM:PATH, and creates binary Le-Lisp files, such as
.IR module.lo, 
in the current directory. 
The error messages and warnings from the compilation appear on the
terminal.  If no error message appears on the terminal, then the
modules have been compiled successfully.

.SH "OPTIONS"
.TP
.B \-parano " flagp"
sets the Le-Lisp global variable
#:COMPLICE:PARANO-FLAG  to the value 
.I flagp.
.I Flagp
should be a boolean value, one of the two values T or ().  By default,
the variable has a value of (), so 
.I complice
assumes that the functions called by FUNCALL and APPLY use no
dynamically bound variables.

.TP
.B \-cons " n"
starts the compiler and sets the size of the
cons cell zone to 
.I n.
.I n
is expressed in 8Kcons.  For details, see the command
.I lelisp(l).

.TP
.B \-callext " flagp"
sets or disables the compile-time redefinition of the external symbol
accessors GETGLOBAL and DEFEXTERN-CACHE.
.I flagp
should be a boolean value, either T or ().  If
.I flagp
is () (the default value), the accessors are redefined such that the
compilation can proceed without a compilation core linked with the
foreign code, so the external symbols need not be present during
compilation.  (However, they must be present for module execution.)
If the value of
.I flagp
is T, these external symbol accessors are not redefined, and external
symbols are retrieved during compilation.

.TP
.B \-cmplc "cmd"
to use a command other than "cmplc++", which is used by default.
This command must exec a core with 
.I complice 
.I module
loaded.

.TP
.B \-lldir "path"
to search for Le-Lisp in a new directory, named by
.I "path".

.TP
.B \-e " S-expr"
influences the compilation environment by evaluating
a Le-Lisp form. The Le-Lisp form
.I S-expr
is evaluated before the actual compilation of the module.

.TP
.B \-hh
uses an internal module description file cache when looking for module
description files, whose extension is .lm.  This option can speed up
the compilation of modules with many dependencies.

.TP
.B \-i
returns to the interactive top level of Complice.  This makes it possible
to start a Le-Lisp session in which the functions 
COMPILE and COMPILE-ALL-IN-CORE use the 
.I complice
compiler.
The arguments that follow this option are passed as is to the evaluator.
(For more details, see the command
.I lelisp(l).) 
Normally, the command
.I complice(l)
uses the image
.I cmplc++.
(Again, see the command
.I lelisp(l).)
.br
This image is found in the directory described in the 
.I complice(l)
command itself.  The path is updated by the command
.I newdir(l).


The simple call:
\ \ \ \ complice
corresponds to the call:
\ \ \ \ complice -i

.TP
.B \-g " flagp"
prints the state of Le-Lisp's memory using the command (GC T) after
the compilation.

.TP
.B \-o " diro"
stores the files resulting from the compilation of
modules in the directory
.I diro.
By default, these files are created in the current directory.

.TP
.B \-p " dirp"
adds the directory
.B dirp
to the head of the Le-Lisp user path, stored in the variable
#:SYSTEM:PATH.  This option can appear more than once in the command
line.  This feature makes it possible to add several directories to
the path.

.TP
.B \-r " flagp"
positions the global Le-Lisp variable #:SYSTEM:READ-CASE-FLAG to
.I flagp.
This variable decides whether the reader will be case sensitive or not.
If 
.I flagp
is T, symbols in the program conserve their case.  If
.I flagp
is (), symbols in the program are read in lower case.  The default
value is ().

.TP
.B \-v
puts
.I complice
in verbose mode.  The Le-Lisp forms evaluated in the compiler environment
are displayed on the screen.

.TP
.B \-w " flagp"
sets the Le-Lisp global variable 
#:COMPLICE:WARNING-FLAG to the value 
.I flagw.
.I Flagw
should be a boolean value, one of the value T or ().
By default, its value is T, and 
.I complice
displays warning messages.

.SH "EXAMPLE"
The Le-Lisp library itself is entirely compiled using the command 
.I complice(l).
These compilations are managed by a 
.I makefile(1)
called
.I Makemod,
located in the <machine> directory.
This file, 
.I Makemod,
controls the dependencies among the modules of the library as well as
the order of compilation of the modules.  Each module is 
compiled with the command
.I complice(l)
and the options appropriate to that particular module.

.SH "SEE ALSO"
lelisp(l), cmplc++(l),
.br
Le-Lisp V15.2, the Reference Manual, Je'ro^me Chailloux et al.,
INRIA, Rocquencourt, 78153 Le Chesnay Cedex.

.SH FILES
cmplc++
.br
        command to startup the Complice compiler system in interactive mode.
.br
/tmp/cp$$
.br
        temporary files created during compilation.
