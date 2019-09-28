.TH COMPLICE L "30 Septembre 1990" "Le_Lisp v15.2"
.SH NOM
complice \- compilateur modulaire Le_Lisp
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
compile les modules Le_Lisp
.I module1...moduleN.
.I Complice
cherche les descriptions de ces modules (fichier 
.IR moduleI.lm )
dans le path Le_Lisp de l'utilisateur (variable globale #:SYSTEM:PATH), et
cre'e des fichiers binaires Le_Lisp (fichiers
.IR module.lo )
dans le directory courant.
Les messages d'erreur et les avertissements a` la compilation sont imprime's
au terminal.
Si aucun message d'erreur n'est imprime' les modules ont e'te' compile's 
correctement.

.SH "OPTIONS"
.TP
.B \-parano " flagp"
permet de positionner la variable globale Le_Lisp #:COMPLICE:PARANO-FLAG a`
la valeur de 
.I flagp.
.I Flagp
doit e^tre l'un des deux symboles T ou NIL.
Par de'faut cette variable vaut NIL, 
.I complice
suppose que les fonctions appele'es par FUNCALL et APPLY n'utilisent aucune
variable de l'environnement dynamique de leur appelant.

.TP
.B \-cons " n"
permet de lancer le compilateur en imposant la taille de la zone des cellules
a` 
.I n.
.I n
est exprime' en 8Kcons. Voir la commande 
.I lelisp(l).

.TP
.B \-callext " flagp"
permet de redefinir ou non les accesseurs aux symboles externes (GETGLOBAL et
DEFEXTERN-CACHE), selon la valeur de
.I flagp.
Si 
.I flagp
vaut NIL (cas par de'faut), alors les accesseurs sont rede'finis de fac,on 
a` ce que la compilation puisse de faire sans la pre'sence des symboles 
externes (i.e. sans se linker avec du code C par exemple). Sinon,
les fonction GETGLOBAL et DEFEXTERN-CACHE conservent leurs de'finitions
et la connection externe se re'alise, me^me pendant la compilation.

.TP
.B \-cmplc "cmd"
pour utiliser une autre commande de lancement que "cmplc++" utilise'e
par de'faut. Attention: cette commande doit lancer un core 
qui inte'gre le 
.I module 
.I complice 
du compilateur modulaire.

.TP
.B \-lldir "path"
pour utiliser un lelisp de'crit par le chemin "path".

.TP
.B \-e " S-expr"
permet d'influencer sur l'environnement de compilation en e'valuant
une forme lisp.
La forme lisp
.I S-expr
est e'value'e avant de re'aliser la compilation du module.

.TP
.B \-hh
exploite une table interne optimisant la recherche des fichiers
de description modulaire (.lm).
Cette option acce'le`re la compilation lorsque les de'pendances
modulaires sont nombreuses.

.TP
.B \-i
rentre sous le toplevel interactif de complice. Ceci permet de lancer
un syste`me Le_Lisp dont le compilateur (fonctions COMPILE et
COMPILE-ALL-IN-CORE) est 
.I complice.
Les autres options e'ventuellement passe'es a` la commande
.I complice,
sont e'galement traite'es.
En standard, la commande
.I complice(l)
utilise l'image 
.I cmplc++
(voir la commande 
.I lelisp(l))
.br
Cette image est prise dans le re'pertoire decrit dans la commande 
.I complice(l)
elle-me^me. Ce chemin est mis a` jour par la commande 
.I newdir(l).


L'appel simple\ :
\ \ \ \ complice
correspond a` l'appel\ :
\ \ \ \ complice -i

.TP
.B \-g " flagp"
permet de faire afficher l'e'tat de la me'moire lisp 
a` l'aide de la commande (GC T), apre`s la compilation.

.TP
.B \-o " diro"
permet de stocker les fichiers re'sultats de la compilation des modules
dans le directory
.I diro.
Par de'faut ces fichiers sont cre'e's dans le directory courant.

.TP
.B \-p " dirp"
permet de rajouter le directory
.B dirp
en te^te du path utilisateur Le_Lisp. Cette option peut apparai^tre plusieurs 
fois dans la ligne de commande, ce qui permet d'ajouter plusieurs 
directories au path. (ne pas oublier le "/" en fin).

.TP
.B \-r " flagp"
permet de positionner la variable globale Le_Lisp #:SYSTEM:READ-CASE-FLAG 
qui influence la lecture des caracte`res minuscules/majuscules, 
a` la valeur de
.I flagp.
.I Flagp
doit e^tre l'un des deux symboles T ou NIL.
Par de'faut cette variable vaut NIL.

.TP
.B \-v
permet de passer 
.I complice
en mode verbeux.
Les formes Le_lisp e'value'es dans l'environnement du compilateur
avant compilation, sont notamment imprime'es a` l'e'cran.

.TP
.B \-w " flagp"
permet de positionner la variable globale Le_Lisp #:COMPLICE:WARNING-FLAG a`
la valeur de 
.I flagw.
.I Flagw
doit e^tre l'un des deux symboles T ou NIL.
Par de'faut cette variable vaut T, 
.I complice
imprime des messages d'avertissement.

.SH "EXEMPLE"
La librairie Le-Lisp est elle-me^me entie`rement compile'e 
avec la commande
.I complice(l).
Ces compilations sont ge're'es par un 
.I makefile(1)
range' dans le re'pertoire de la machine:
.I Makemod.
Ce fichier
.I Makemod
contro^le les de'pendances des modules de la librairie entre eux, 
ainsi que l'ordre de compilation de ces modules. Chaque module est
compile' avec la commande
.I complice(l)
orne'e des options ade'quates a` ce module.

.SH "VOIR AUSSI"
lelisp(l), cmplc++(l),
.br
Le_Lisp V15.2, le manuel de re'fe'rence, Je'ro^me Chailloux et al.,
INRIA, Rocquencourt, 78153 Le Chesnay Cedex.

.SH FICHIERS
cmplc++
.br
	commande de lancement du syste`me inte'grant le compilateur complice.
.br
/tmp/cp$$
.br
	fichiers temporaires cre'es durant la compilation.
