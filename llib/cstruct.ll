; .EnTete "Le-Lisp (c) version 15.2" " " "Les structures C"
; .EnPied " " "%" " "
; .Chapitre S "Les structures C"
;
; .Centre "*****************************************************************"
; .Centre " Ce fichier est en lecture seule hors du projet ALE de l'INRIA.  "
; .Centre " (c) Le-Lisp est une marque de'pose'e de l'INRIA                 "
; .Centre "*****************************************************************"

; .Centre "$Header: /usr/cvs/lelisp/llib/cstruct.ll,v 1.3 2017/06/10 19:47:42 jullien Exp $"

#|
Ce chapitre de'crit la manipulation des structures C en Lisp sur les machines
UNIX a` mots de 32 bits adressant l'octet.

Il est possible de manipuler en Lisp, de la me^me manie`re que les structures
Lisp, des objets alloue's par des programmes C.

L'utilisation des fonctions de'crites ci-dessous demande quelques 
pre'cautions\ :
  - Lorsque l'on stocke un objet Lisp dans une structure C il faut toujours
garder un pointeur Lisp sur cet objet afin que le Garbage Collector
(qui ne va pas visiter le contenu des structures C) ne re'cupe`re pas l'objet.
  - Il vaut mieux ne pas stocker de chai^nes de caracte`res Lisp dans les 
structures C. Le Garbage Collector risquant de de'placer la chai^ne de 
caracte`res dans le tas Lisp, Le pointeur C ne serait plus a` jour.
Il est pre'fe'rable d'allouer une chai^ne de caracte`res dans le tas C
et d'y recopier la chai^ne Lisp (voir la fonction CSTRING)

Il faut aussi noter que
la lecture et l'e'criture des champs des structures C ne sont pas
des ope'rations tre`s efficaces. Si l'on de'sire manipuler intensivement
les structures C il vaut mieux e'crire les parties de
programmes concerne'es directement en C.

L'interface avec les objets C
utilise les primitives d'appel de proce'dures externes, 
de'crites au chapitre 14 du manuel de re'fe'rence. Elles permettent
notamment de de'finir en Lisp diverses fonctions de'crites a` la fin
de ce chapitre et permettant\ :
  - l'allocation de structures C dans une zone me'moire externe a` Le_Lisp
(fonctions MALLOC et SIZEOF).
  - la libe'ration de ces structures (fonction FREE)
  - l'acce`s indexe' au niveau du caracte`re, du petit entier et du pointeur
en lecture et en e'criture dans les structures C (fonctions LONG/SHORT/CHARREF
et LONG/SHORT/CHARSET).

.Section "De'finition de Structures C en Lisp"
.Fonction "(DEFCSTRUCT <nom> (<taille1> <champ1>)...(<tailleN> <champN>)) \ \ \ [MACRO a` N arguments]"
de'finit une structure C. <nom> est un symbole qui est le nom de la structure
C. Les arguments
<champI> sont des symboles nommant les champs, les arguments <tailleI> 
sont des symboles de'crivant la taill me'moire du i-e`me champ. 
Les symboles <tailleI> peuvent prendre l'une des trois valeurs suivantes\ :
  - LONG\ : le champ a alors la taille d'un pointeur
  - SHORT\ : le champ a alors la taille d'un entier court
  - CHAR\ : le champ a alors la taille d'un caracte`re.

DEFCSTRUCT positionne enfin l'indicateur SIZEOF sur la PLIST du symbole
<nom>, qui indique, en nombre de caracte`res, la taille me'moire occupe'e
par une instance de la structure C (voir la fonction SIZEOF).

.Fonction "(#:<nom>:MAKE)    [SUBR a` 0 argument]"
Alloue dans le tas C et retourne en valeur une nouvelle instance de
la structure C <nom>. La fonction #:<nom>:MAKE est la fonction de
cre'ation spe'cifique a` la structure <nom>. Elle est automatiquement
de'finie par la fonction DEFCSTRUCT. L'objet cre'e' est un pointeur hors de
la zone me'moire re'serve'e a` l'interpre`te Lisp, repre'sente' sous la forme
d'un CONS de deux petits entiers.

.DefLL "#:<nom>:MAKE"
    (DE #:<nom>:MAKE ()
        (_MALLOC (SIZEOF '<nom>)))
.FinLL

.Fonction "(#:<nom>:<champI> <o> [<e>])    [SUBR a` 1 ou 2 arguments]"
<nom> est le nom d'une structure C de'finie par la fonction pre'ce'dente,
<champI> est le nom d'un champ de cette
structure. Les fonctions #:<nom>:<champI> sont les fonctions d'acce`s aux
champs des instances de la structure C <nom>. Elles sont de'finies
automatiquement par la fonction DEFCSTRUCT.

.Fonction "(SIZEOF <nom>) \ \ \ [SUBR a` 1 argument]"
<nom> est un symbole repre'sentant le nom d'une structure C pre'de'finie 
pre'cedemment par la fonction DEFCSTRUCT. Retourne en valeur la taille 
me'moire utilise'e en me'moire par une instance de la structure C <nom>.
Cette taille peut e^tre fourni a` la fonction _MALLOC pour allouer un vecteur
d'objets C de type nom. Pour allouer un seul objet C on peut utiliser la 
fonction #:<nom>:MAKE.

.pp
\fIExemple\ :\fP
 Voici la de'claration C et la de'claration Lisp de la me^me structure 
FontInfo\ :
.DebLL
typedef struct _FontInfo {
	Font id;
	short height, width, baseline, fixedwidth;
	unsigned char firstchar, lastchar;
	short *widths;		/* pointer to width array in OpenFont */
} FontInfo;

(defcstruct FontInfo
       (long id)
       (short height)
       (short width)
       (short baseline)
       (short fixedwidth)
       (char firstchar)
       (char lastchar)
       (long widths))
.FinLL

Voici la traduction en Lisp d'un programme C manipulant cette structure
(on voit que la manipulation du vecteur de petits entiers fontinfo->widths
ne'cessite la fonction _WORDREF, de'crite plus bas)\ :
.DebLL
show_font (fontinfo) FontInfo *fontinfo; {
char c;
       printf("Height %d, Width %d, Baseline %d\n",
                    fontinfo->height,
                    fontinfo->width,
                    fontinfo->baseline);
       if (fontinfo->fixedwidth)
          printf("Fixedwidth font.");
          else
            for (c = fontinfo->firstchar; c <= fontinfo->lastchar; c++){
                printf("  %c %d pixels\n", fontinfo->widths[c]);
}

(de show_font (fontinfo)
    (prinf "Height ~D, Width ~D, Baseline ~D"
           (#:FontInfo:height fontinfo)
           (#:FontInfo:width fontinfo)
           (#:FontInfo:baseline fontinfo))
    (terpri)
    (if (neqn (#:FontInfo:fixedwidth fontinfo) 0)
        (print "Fixedwidth font.")
        (for (c (#:FontInfo:firstchar fontinfo)
                1
                (#:FontInfo:lastchar fontinfo))
             (prinf "  ~C ~D pixels" 
                    c
                    (_shortref (#:FontInfo:widths fontinfo) (add c c)))
             (terpri))))

.FinLL
.pp
Ces fonctions sont de'finies en Lisp de la manie`re suivante\ :

|#
(unless (>= (version) 15.2)
        (error 'load 'erricf 'cstruct))

(add-feature 'cstruct)

(when (eq 0 (getglobal '|_charref|))
      (cload (catenate #:system:system-directory "o/cstruct.o")))

(setq #:sys-package:colon 'cstruct)

(dmd defcstruct (name . fields)
     (let ((i 0) res)
          (setq fields
                (mapcar (lambda (field)
                                (prog1 (cons i field)
                                       (incr i (cassq (car field)
                                                      '((char . 1)
                                                        (short . 2)
                                                        (long . 4))))))
                        fields))
          (while fields
                 (newl res
                       (:field-accessor name (nextl fields))))
          `(progn ,@res 
                  (putprop ',name ,i 'sizeof)
                  (de ,(symbol name 'make) ()
                      (|_malloc| ,i))
                  ',name)))

(de :field-accessor (name (index size field-name))
    `(de ,(symbol name field-name) (o . v)
         (ifn v
              (,(concat "_" size "ref") o ,index)
              (,(concat "_" size "set") o ,index (car v)))))

(de sizeof (cstruct)
    (getprop cstruct 'sizeof))

#|
.Section "Les Fonctions Primitives de Manipulation des Objets C"
L'interface avec les structures C est base'e sur les fonctions primitives
suivantes. Ces fonctions peuvent e^tre utiles pour la manipulation des
vecteurs d'objets C, comme de'crit dans l'exemple ci-dessous. On leur 
pre'fe`rera lorsque cela est possible les fonctions de la section 
pre'ce'dente.

.Fonction "(_MALLOC <size>) \ \ \ [SUBR a` 1 argument]"
Alloue <size> octets dans le tas C et retourne un pointeur externe (CONS de 
deux petits entiers pointant sur la zone alloue'e.

.Fonction "(_FREE <external>) \ \ \ [SUBR a` 1 argument]"
Rend au tas C les pointeur externe <external>. <External> doit evoir e'te'
alloue' par la fontionc _MALLOC, ou bien par une proce'dure C utilisant
la fonction C malloc.

.Fonction "(_CHARREF <external> <index>) \ \ \ [SUBR a` 2 arguments]
.Fonction "(_SHORTREF <external> <index>) \ \ \ [SUBR a` 2 arguments]
.Fonction "(_LONGREF <external> <index>) \ \ \ [SUBR a` 2 arguments]
<external> est un pointeur dans le tas C, ou bien sur une structure C rec,ue
d'un programme C exte'rieur a` Le_Lisp. Retourne les 8(CHAR), 16(SHORT) ou 
32(LONG) bits pris a` l'adresse <external>+<index>, <index> e'tant exprime'e
en octets.

.Fonction "(_CHARSET <external> <index> <value>) \ \ \ [SUBR a` 3 arguments]
.Fonction "(_SHORTSET <external> <index> <value>) \ \ \ [SUBR a` 3 arguments]
.Fonction "(_LONGSET <external> <index> <value>) \ \ \ [SUBR a` 3 arguments]
<external> est un pointeur dans le tas C, ou bien sur une structure C rec,ue
d'un programme C exte'rieur a` Le_Lisp. Stocke les 8(CHAR), 16(SHORT) ou 
32(LONG) bits les moins significatifs de la valeur <value> a` l'adresse
<external>+<index>, <index> e'tant exprime'e en octets.

.Fonction "(_CSTRING <string>) \ \ \ [SUBR a` 1 argument]"
Alloue (add1 (LEN <string>)) caracte`res dans le tas C, y recopie le contenu
de la chai^ne Lisp <string> et retourne un pointeur sur la zone me'moire 
alloue'e. Cette fonction permet de recopier dans le tas C les chai^nes de
caracte`res Lisp, ce uqi est ne'cessaire si l'on de'sire passer a` C des
chai^ne qui ne doivent pas e^tre de'place'es elors des re'cupe'rations.
.DebLL
ex:
; La proce'dure C XMenuInsertSelection rec,oit rec,oit une chai^ne de
; caracte`res de'crivant le nom d'un item a` rajouter au menu. Cette chai^ne
; ne doit pas bouger lors des re'cupe'rations Lisp. Il faut donc la recopier 
; dans le tas C avant de la passer a` la proce'dure

/* fichier C */
int XMenuInsertSelection (menu, pane, selection, data, label, active)
XMenu *menu;
int pane, selection;
caddr_d data;
char *label;
int active;
\&...

#\&| fichier Lisp |\&#

(defextern _XMenuInsertSelection (external fix fix t external fix) fix)
; on donne le type external a` l'argument label (char *)

(de make-menu strings 
 ...
    (_XMenuInsertSelection menu 0 0 0 (_cstring (nextl strings)) 1)
 ...
.FinLL

.pp
Malloc et Free sont les fonctions C du manuel de re'fe'rence UNIX (3).
Les autres fonctions
sont des de'finitions externes des fonctions C de'crites ci-dessous\ :
.DebLL
charref (s, n) char *s; {
    return * (char *) (s + n);
}

shortref (s, n) char  *s; {
    return * (short *) (s + n);
}

longref (s, n) char  *s; {
    return * (int *) (s + n);
}

charset (s, n, v) char *s; {
    *(char *) (s + n) = v;
}

shortset (s, n, v) char   *s; {
    *(short *) (s + n) = v;
}

longset (s, n, v) char   *s; {
    *(int *) (s + n) = v;
}

char *cstring (lispstring, length) char *lispstring; {
char *s = (char *)malloc (length+1);
     strncpy (s, lispstring, length+1);
     return s;
}
.FinLL
|#

(defextern |_malloc| (fix) external)
(defextern |_free| (external))

(defextern |_charref| (external fix))
(defextern |_shortref| (external fix))
(defextern |_longref| (external fix) external)
(defextern |_charset| (external fix fix))
(defextern |_shortset| (external fix fix))
(defextern |_longset| (external fix external))

(defextern |_cstring| (string fix) external)
