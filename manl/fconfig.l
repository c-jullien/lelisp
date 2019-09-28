.TH CONFIG L "30 Septembre 1990" "Le-Lisp v15.2"
.SH NOM
config \- construit une image me'moire Le-Lisp
.SH SYNOPSIS
.B lelisp/<machine>/config
name bin conf [llcore [<tailles-lelispbin>]]
.SH DESCRIPTION
Construit l'image me'moire et le script shell de lancement d'un syste`me Le_
Lisp de nom 
.I name.

.TP
.I bin 
est le nom du binaire Le-Lisp a` utiliser. En ge'ne'ral ce nom est
.I lelispbin.
On utilise parfois des binaires contenant l'interpre`te Le-Lisp et des
programmes C ou FORTRAN. Ceci permet de construire une image me'moire
contenant des programmes de'finissables comme
.I "fonctions externes"
de l'interpre`te Le-Lisp (voir le manuel de re'fe'rence, section 14 et 
la commande 
.I lelisp(l)).
.TP
.I conf
est un fichier Le-Lisp qui de'crit la construction de l'image me'moire.
En principe les fichiers de configuration standard sont dans le
re'pertoire 
.I conf,
sous le re'pertoire de la machine.
.TP
.I llcore
Cette option influence uniquement la ge'ne'ration de la commande de
lancement du syste`me Le-Lisp en cours de fabrication.
Si cet argument est omis, la commande de lancement de l'image
fabrique'e exigera que le core soit range' dans
le re'pertoire lelisp/<machine>/llcore. Mais, si le configurateur
de'cide d'un autre emplacement, il conviendra, par cohe'rence avec la
commande de lancement, de pre'ciser a` l'aide de cette option
le chemin absolu du re'pertoire ou`
le core est range'.

.I Config 
lance le binaire
.I lelispbin
qui lit d'abord le fichier 
.I startup.ll
de la bibliothe`que Le-Lisp,
puis
e'value les formes Lisp du fichier 
.I conf.
L'e'valuation de ces formes doit cre'er une image me'moire de nom
.I name.core
range'e habituellement dans le sous-re'pertoire
.I llcore 
de la machine. voir l'option 
.I llcore.
.br
Durant l'e'valuation du fichier 
.I conf
la variable globale Lisp #:SYSTEM:NAME a pour valeur le symbole Lisp
.I name.
Ceci permet d'utiliser le me^me fichier de configuration pour construire
des syste`mes de noms diffe'rents (avec diffe'rentes tailles de zones par 
exemple).

.I Config
cre'e ensuite un script shell de nom
.I name
qui permet de lancer le binaire
.I lelispbin
en restaurant l'image me'moire construite.

On peut optionnellement donner des arguments qui de'crivent la taille des
diffe'rentes zones me'moire de l'interpre`te. Ces arguments sont
passe's tels quels a` 
.IR lelispbin .

.SH EXEMPLE
Construire un syste`me de nom 
.I lelisp
avec le binaire
.I lelispbin,
le fichier de configuration standard
.I Lelispconf.ll
et une zone code de 400 koctets.
.br
\% cd lelisp/<machine>
.br
\% ./config lelisp lelispbin Lelispconf.ll -code 400

Le fichier 
.I Lelispconf.ll
contient les formes Lisp suivantes\ :
.nf
(progn
  (load-stm #:system:name t t t t t)
  (add-feature (if (eq 0.0 0.0)
                   '31BITFLOATS
                 '64BITFLOATS))
  )
.fi
.SH "VOIR AUSSI"
lelisp(l),
.br
Le-Lisp V15.2, le manuel de re'fe'rence, Je'ro^me Chailloux et al.,
INRIA, Rocquencourt, 78153 Le Chesnay Cedex.
