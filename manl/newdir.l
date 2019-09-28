.TH NEWDIR L "30 September 1990" "Le_Lisp v15.2"
.SH NAME
newdir \- updates absolute path names in the LeLisp system
.SH SYNOPSIS
.B /usr/local/lelisp/vax/newdir [path]
.SH DESCRIPTION
Updates the absolute path names defined in the following files of the
standard distribution of LeLisp:
.BR llib/startup.ll, 
.BR <machine>/complice, 
.BR <machine>/config.

This command should be called from the <machine> directory of the standard
distribution of LeLisp.  This directory has the same name as the machine
in use, such as vaxunix, sony, sun, etc.  The option
.I path
makes it possible to install the software in a directory other than the
one indicated by the command
.I pwd.
This 
.I path
should be an absolute path name up to the <machine> subdirectory
of the LeLisp directory.  This feature is particularly useful
during an installation across symbolic links.

It is necessary to use the command once and only once for every
installation of LeLisp in a new directory other than that specified
in the installation guide (by default, "/usr/ilog/lelisp/").

This command requires write access to the files that must be updated.

.SH "SEE ALSO"
complice(l),
.br
Le_Lisp V15.2, the Reference Manual, Je'ro^me Chailloux et al.,
INRIA, Rocquencourt, 78153 Le Chesnay Cedex.
