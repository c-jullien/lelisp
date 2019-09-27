.TH NEWDIR L "30 Septembre 1990" "Le_Lisp v15.2"
.SH NOM
newdir \- met a` jour les paths absolus du syste`me Le_Lisp.
.SH SYNOPSIS
.B /usr/local/lelisp/vax/newdir [path]
.SH DESCRIPTION
Met a` jour les paths absolus de'finis dans les fichiers suivants de la 
distribution Le_Lisp\ :
.BR llib/startup.ll, 
.BR <machine>/complice, 
.BR <machine>/config.

Cette commande doit e^tre lance'e depuis le re'pertoire de la machine
de la distribution Le_Lisp. Ce re'pertoire est du me^me nom que la machine
utilise'e (vaxunix, sony, sun, etc.). L'option 
.I path
permet de forcer une installation dans un re'pertoire qui n'est pas
celui que nous indique la commande
.I pwd.
Ce 
.I path
doit e^tre un chemin absolu, jusqu'au re'pertoire <machine> de
Le-Lisp. Ce trait est particulie`rement utile lors d'une installation
au travers de liens symboliques.

Il faut lancer cette commande une fois et une seule a` chaque installation
de Le_Lisp dans un nouveau re'pertoire autre que celui spe'cifie' dans
la notice d'installation (par de'faut "/usr/ilog/lelisp/")

Cette commande ne'cessite les droits d'acce`s en e'criture sur les fichiers
a` mettre a` jour.

.SH "VOIR AUSSI"
complice(l),
.br
Le_Lisp V15.2, le manuel de re'fe'rence, Je'ro^me Chailloux et al.,
INRIA, Rocquencourt, 78153 Le Chesnay Cedex.
