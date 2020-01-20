/********************************************************
 *  Les flags de compilations specifiques au rs6000
 */
/* pour CC
 */
#define IC_CFLAGS 

/* Pour LL
 */
#define ILLPAGESIZE 4096

/* Pour LD
 */
/* On doit preparer les fichiers avant de les linker definitivement.
 IMACRO_OBJNAME($@) contient la liste des fichiers XX.o utilise's
 pour le link final des binaires.
 $# contient le nombre de fichiers de cette liste.
 $# est incremente' de 1 pour crt0.o qui n'apparait pas mais existe.
 ce nombre est stocker dans la var. shell 'nbypass'.
 Ce nombre est passer dans le flag de link : -bgcbypass:N
 Le linker ne fera pas de GC sur le code de ces N fichiers
 Le flag de link -bfl est utilise' conjointement a -bgcbypass:N
 pour specifier au linker qu'il doit chercher les fichiers a `bypasser`
 sur sa ligne de commande.
 */

/* pour pouvoir jouer avec le $nbypass lors du link*/
#define IMACRO_EVALOBJNAME(name) IMACRO_OBJNAME($(name))

/* attention : il y a un espace apres le `\' */
#define IBEFORELD ( set $(LLCRT0) $(IMACRO_OBJNAME($@)) ; nbypass=$$# ; \ 
#define IAFTERLD )

/*
 * l'ancien link dynamic a proscrire:
 * #define ILDLIBS  -bnogc -lm -lld -lodm -lcfg
 */
/* maintenant on sait qu'il faut faire:
 -Wl,-M -bloadmap:make.map -bbindcmds:make.bind
        pour avoir une trace du link
 -z     pour etre en DEMAND PAGE
 -bro   pour etre certain de ne pas avoir de reloc sur la .text section.
 -bnso  pour linker les librairies en STATIC.
 -bimport:/lib/syscalls.exp   pour linker les syscalls de libc en STATIC.
 -bfl   pour optimiser le GC sur le code.
 -bgcbypass:N pour ne pas faire de GC sur le code des N 1ers fichiers.o 
              de la ligne de commande.
 -lIM	pour Motif qui realise des syscall utilisant cette librairie
 */
#define ILDLIBS -lm
#define ILDFLAGS -z -bro -bnso -bimport:/lib/syscalls.exp -bfl -bgcbypass:$$$$nbypass $(LOCALVARS) $(CLIB)

/* pour X11 */
#define IX11_LDLIBS $(XLIB) -lX11 -liconv -lIM
#define IX11_LDFLAGS $(_X11R4FLAGS)
#ifdef IMAKEFILE
/**/### 
/**/### special case for ISYSTEM
/**/### 
/**/# to play with X11R4 (default)
_X11R4FLAGS=
/**/# to play with X11R5
_X11R5FLAGS=-bimport:/usr/bin/X11/smt.exp

/**/# to use -bgcbypass
LLCRT0=llcrt0.o
#endif


/* pour MOTIF 
 * MOTIF obsolete since AIDA make it
 #define IMOTIF_LDLIBS $(MOTIFLIB) -lXm $(MXtLIB) -lXt -liconv
 #define IMOTIF_CFLAGS $(MOTIFOPTIONS) $(MXtINCLUDE) $(MOTIFINCLUDE)
 */

/* pour le link du test em librairie partage'e */
#define ILINKSHARED $(CC) -T512 -H512 -e tlno -bexport:../lltest/testrs6000 -bM:SRE -o testext.sh testext.o -lm; rm -f testext.o; $(MV) testext.sh o
