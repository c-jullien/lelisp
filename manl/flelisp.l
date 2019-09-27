.TH LELISP L "1 de'cembre 1993" "Le-Lisp v15.2"
.SH NOM
lelisp, lelispX11, cmplc++\  \- lance le syste`me Le-Lisp
.SH SYNOPSIS
.B lelisp
[
.B \-r 
file ] [cons]
.SH DESCRIPTION
Lance le syste`me Le-Lisp. Apre`s impression d'une bannie`re identifiant le 
syste`me, on se trouve sous une boucle de dialogue, caracte'rise'e par 
l'impression du caracte`re d'invite "? ".
La fonction (END) termine la session Lisp et retourne au shell.
La commande 
.I lelispX11
est identique a`
.I lelisp
mais lance un Lisp
ou` les librairies X11 sont pre'charge'es, et le 
.IR "Bitmap Virtuel"
a e'te' initialise' a`
.BR |X11|.
(voir
.BR INIBITMAP 
du manuel de re'fe'rence Le-Lisp). La commande
.I cmplc++
est identique a` la commande
.I lelisp
au compilateur pre`s: 
.I lelisp
inte`gre le petit compilateur dynamique, alors que
.I cmplc
dispose du compilateur modulaire
.BR complice,
lequel engendre un code plus efficace (cf le manuel de re'fe'rence
Le-Lisp et la commande
.I complice(l).)
De plus, la commande
.I cmplc++
est configure'e avec des zones de donne'es lisp beaucoup plus grandes.

Sur certaines machines il est possible de fabriquer des images
me'moires directement exe'cutables dites
.BR EXECORE.
Il convient pour cela d'utiliser le 
.BR Makefile
Le-Lisp, en affectant la variable de Makefile
.B EXE
avec
.B exe
de la manie`re suivante:
.br
.B % make lelisp EXE=exe
.br
Les deux options de la commande
.I lelisp
n'ont pas raison d'e^tre en mode EXECORE.

.SH OPTIONS
.TP
.B \-r " file"
L'option 
.B \-r
permet de restaurer l'image me'moire de nom
.BR file ,
a` l'entre'e de l'interpre`te Le-Lisp.
Cette image doit avoir e'te' cre'e'e par le me^me syste`me Le-Lisp, sinon 
le message d'erreur
.I "image me'moire non compatible"
est imprime' et Le-Lisp termine imme'diatement.

.TP
.B cons
L'argument optionnel 
.B cons
est un nombre qui pre'cise, en 8Kcons, la taille de la zone alloue'e aux 
cellules de listes. La valeur par de'faut de cet argument est 4, ce qui 
correspond a` une zone de 32Kcons soit 256 Koctets.


.SH "FABRICATION"
Il est possible de re-fabriquer les images me'moire par de'faut, ou
d'en fabriquer d'autres. Cette ope'ration se re'alise a` l'aide de la
commande 
.BR make(1),
associe'e au fichier
.BR lelisp/<machine>/Makefile.

Un certain nombre de syste`mes sont propose's en standard dans le
.BR Makefile  
de la distribution Le-Lisp, tels que ceux de'crits dans ce manuel, ou,
pour certains portages, leurs e'quivalents avec les flottants
sur 64 bits au lieu des 31 bits par de'faut, ou encore, avec d'autres
syste`mes de fene^trage inte'gre's toujours selon les machines sur
lesquelles est distribue' Le-Lisp. Consultez le
.BR Makefile 
en question, ou le document d'installation fourni avec le support de
distribution de Le-Lisp pour en savoir plus.

L'utilisateur a e'galement la possibilite' avec ce
.BR Makefile
de se fabriquer ses propres
syste`mes Le-Lisp, en re-cre'ant un binaire, un configurateur et
finalement une image me'moire. C'est notamment le cas, de`s qu'il faut
inte'grer statiquement, des fichiers compile's issus d'autres langages
de programmation (C ou FORTRAN) dans une image Le-Lisp. Pour cela il
est conseille' a` l'utilisateur de cre'er son propre
.BR Makefile
ge'rant la compilation de ses fichiers C ou FORTRAN, lequel
utilisera le
.BR Makefile 
Le-Lisp pour fabriquer un nouveau binaire et e'ventuellement une
nouvelle image me'moire. Pour ce faire, le 
.BR Makefile
Le-Lisp offre un certain nombre de 
.I "variables de makefile"
pre^tes a` e^tre rede'finies pour les besoins de l'utilisateur. Cela
permet d'exploiter le
.BR Makefile 
Le-Lisp sans avoir a` le modifier, et donc rester inde'pendant des
nouvelles versions de le-Lisp. 
Les variables suceptibles d'e^tre utilise'es sont:
.TP
.BI USERCFILE
de'signe le chemin et le nom d'un fichier source C, afin
de le compiler avec les bonnes options de compilation, 
et permettant ainsi de linker le re'sultat dans un binaire Le-Lisp.
.BI USEROFILE
pour imposer le nom et le chemin d'acce`s du fichier 
re'sultat de la compilation de $(USERCFILE).
.BI USERXCFILE
idem USERCFILE, mais avec les options de compilation pour X11, en plus.
.BI USERXOFILE
est a` USERXCFILE, ce que USEROFILE est a` USERCFILE.
.BI USERCFLAGS
permet a` l'utilisateur d'ajouter ces propres options lors 
de la compilation des fichiers $(USERCFILE) ou $(USERXCFILE).
.BI USERBIN
permet de choisir un nouveau nom de binaire Le-Lisp. 
.TP
.BI USERXBIN
la me^me chose avec les librairies X11 en plus.
.TP
.BI USERO
contient la liste des fichiers ".o" issus de la compilation C ou
FORTRAN.
.TP
.BI USERFLAGS
permet a` l'utilisateur de spe'cifier des flags de compilation
supple'mentaires.
.TP
.BI USERLELISP
permet de choisir un nom pour l'image me'moire engendre'e. La
fabrication de cette image me'moire utilise par de'faut le nom du
binaire de'crit par la variable USERXBIN. Pour utiliser un autre
binaire, rede'finir la variable USERLELISPBIN.
.TP
.BI USERLELISPBIN
permet de renommer le binaire Le-Lisp utilise' pour fabriquer une
image me'moire USERLELISP
.TP
.BI USERCONF
permet de spe'cifier le fichier lelisp qui va configurer l'image
me'moire. En standard ces fichiers sont dans le re'pertoire
.I lelisp/<machine>/conf/*conf.ll .
.TP
.BI USERSIZE
contient la liste des tailles des zones me'moire de Le-Lisp (cf manuel
de re'fe'rence Le-Lisp). Par de'faut ce sont les me^me tailles que
pour une image
.I lelisp
standard.


.SH "EXAMPLES"
Commencons par la fabrication d'images standard.
.br
Engendrer une image
.I cmplc
sur une sun4:
.RS
.ft B
.nf
% pwd
/usr/ilog/lelisp/sun4
% make cmplc
./config cmplc lelispbin cmplcconf.ll -stack 6 -code 1500 -heap 256 -number 0 -vector 4 -string 5  -symbol 5 -cons 4 -float 0
; Le-Lisp (by INRIA) version 15.23  (14/Fev/90)  [sun4]
= (Version:  15.23)
 ...
Que Le-Lisp soit avec vous
% ls lelisp
lelisp
%
.fi
.ft R
.RE

Et une image avec flottant sur 64 bits et processeur flottant MC68881
sur une sony: 
.RS
.ft B
.nf
% make lelisp64
./config lelisp64 lefpu64bin lelispconf.ll -stack 6 -code 600 -heap 256  -number 0 -vector 4 -string 5  -symbol 5 -cons 4 -float 0 -float 16
; Le-Lisp (by INRIA) version 15.23  (14/Fev/90)  [sony]
= (Version:  15.23)
 ...
Que Le-Lisp soit avec vous
% ls lelisp64
lelisp64
%
.fi
.ft R
.RE
.sp 3
Voyons maintenant un exemple d'utilisation des variables de 
.BR Makefile.
.br
Nous avons 2 fichiers C, 
.IR ex1.c 
et 
.IR ex2.c 
dans un re'pertoire /usr/home/ que nous de'sirons inte'grer dans une
image Le-Lisp. Nous nommerons cette image 
.I examplelisp,
qui utilisera un binaire nomme' 
.I lexamplebin
inte'grant les fichiers C compile's. Cette image est de'crite par le
configurateur 
.I exampleconf.ll .
Les tailles utilise'es sont les tailles standard.
.RS
.ft B
.nf
% cd /usr/home
% cat makefile
DIR=/usr/home
LLDIR=/usr/ilog/lelisp
MACHINE=sun4

# la fabrication du core
examplelisp: lexamplebin exampleconf.ll
	( cd $(LLDIR)/$(MACHINE) ; \\
	$(MAKE) $(DIR)/examplelisp USERLELISP=$(DIR)/examplelisp \\
		USERLELISPBIN=$(DIR)/lexamplebin \\
		USERCONF=$(DIR)/exampleconf.ll \\
	)

# la fabrication du binaire
lexamplebin: ex1.o ex2.o
	(cd $(LLDIR)/$(MACHINE) ; \\
	$(MAKE) $(DIR)/lexamplebin USERBIN=$(DIR)/lexamplebin \\
		USERO="$(DIR)/ex1.o $(DIR)/ex2.o" \\
	)

# mes fichiers C
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
; configuration du syste`me lexample
(progn
  (load-stm #:system:name ; le nom du core
	    t             ; environnemnet minimal
	    ()            ; pas d'editeur dans cette image
	    t             ; l'environnement standard
	    t             ; le chargeur
	    t             ; le compilateur standard
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
; Le-Lisp (by INRIA) version 15.23  (14/Fev/90)  [sun4]
 ...
Que Le-Lisp soit avec vous.
%
.fi
.ft R
.RE
.sp 3
Finalement, un exemple de syste`me EXECORE sur IBMRT:
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
; Le-Lisp (by INRIA) version 15.23  (14/Fev/90)  [ibmrt]
= (Version:  15.23)
  ...
Que Le-Lisp soit avec vous
%
.fi
.ft R
.RE
.sp 3
.SH "VOIR AUSSI"
config(l), complice(l), make(1),
.br
Le-Lisp V15.2, le manuel de re'fe'rence, Je'ro^me Chailloux et al.,
INRIA, Rocquencourt, 78153 Le Chesnay Cedex.

.SH FICHIERS
lelisp
.br
		script shell permettant de lancer le syste`me
.br
lelisp/<machine>/llcore/lelisp.core
.br
		image me'moire associe'e a` la commande 
.I lelisp.
.br
lelisp/<machine>/lelispbin
.br
		binaire Le-Lisp.
.br
.br
lelisp/<machine>/leX11bin
.br
		binaire Le-Lisp inte'grant les librairies 
.I X11.
.br
lelisp/<machine>/Makefile
.br
		makefile Le-Lisp.
.sp 2
En mode 
.BR EXECORE:
.br
lelisp
.br
		image me'moire directement exe'cutable.
