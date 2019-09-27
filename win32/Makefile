#  Le Makefile de fabrication des diffe'rents syste`mes
#  Le-Lisp version 15.26.12 (Christian Jullien) Eligis 2008/10/11
# $Id: Makefile,v 1.28 2017/08/12 05:59:23 jullien Exp $

.SUFFIXES:	.$(SUFFIXES) .f

# la permiere entree pour tout demarrer

all:	default

SYSTEM		= win32

MAKE		= nmake
ANALYSE		= # -analyze:WX- -wd6385 -wd6054
CC		= cl $(ANALYSE)
LD		= link
AS		= ml
HC		= hcrtf -xn
RC		= rc

# Pour faire du debug

DEBUG		= # -Zi

!if "$(DEBUG)" == "-Zi"
LDDEBUG		= -debug
!endif

# System configuration

LDBASE		= 0x800000		# Start location
LDSTACK		= 0x400000		# Reserved Windows system stack

################################
# Les noms des binaires standard
################################

FLT		= 31
BIN		= lelisp31

##########################################################################
# Les options de'pendant du syste`me
##########################################################################
#

# le nom du systeme

CSYSTEM		= WIN32
LLNAMESYST	= #-D$(CSYSTEM)

# pour ajouter divers CFLAGS en lelisp

LL_LLFLAGS	=

# Les flags de compilation C pour Le-Lisp

# pour les includes C propres a Le-Lisp:

LLINCLUDE	= -I..\common -I..\$(SYSTEM)\C -I.

LL_CFLAGS	= $(LLNAMESYST) $(LLINCLUDE) $(LL_LLFLAGS)

################################################
# Les flags d'edition de liens pour Le-Lisp
#

# Les repertoires des librairies du linker

# les flags pour debug

# par defaut sans avoir a le preciser
LIBS		=

# Les flags pour le link mode text

LDTFLAGS	= -nologo $(LDDEBUG) -subsystem:console \
		  -entry:mainCRTStartup \
		  -opt:noref -base:$(LDBASE) -stack:$(LDSTACK) -dynamicbase:no

# Les flags pour le link mode graphique

LDWFLAGS	= -nologo $(LDDEBUG) -subsystem:windows \
		  -entry:WinMainCRTStartup \
		  -opt:noref -base:$(LDBASE) -stack:$(LDSTACK) -dynamicbase:no

# Les librairies des Bignums

LDKERN		= kern.lib

# Les librairies du linker pour C mode texte

LDTLIBS		= user32.lib kernel32.lib wsock32.lib advapi32.lib

# Les librairies du linker pour C mode graphique

LDWLIBS		= gdi32.lib user32.lib kernel32.lib wsock32.lib advapi32.lib

##############################################
# Les flags de compilation C pour C sur WIN32

# s'il faut des includes particuliers pour LL sur ISYSTEM

INCLUDES	=

# les flags de compilation necessaires sur NT

LLSTACK		= # -DLLSTACK

C_CFLAGS	= -nologo -c -Ox -Gs -W4 $(DEBUG) $(CONSOLE) \
		  -DWIN32 -D_NT -D_DIRECTORY -D_ISO

##############################################
# Les flags generaux de compilation C
CFLAGS		= $(C_CFLAGS) $(LL_CFLAGS) -wd4702

##########################################
# les flags de compilation C pour WINDOWS

# Uncomment next _LISP_CONSOLE flag if you always want an external text console.

WCONSOLE	= -D_CONSOLE_BUFFER=512 # -D_LISP_CONSOLE
WINDOW		= -D_WINDOWS -DWIN32 -DLLWINDOWS $(WCONSOLE) #-DNOWIDGETS
WINDIR		=..\virbitmap\windows
WINFLAGS	= -I$(WINDIR) $(WINDOW) -wd28278 -wd28159 -wd28251

########################################
# les flags d'assemblage

ASFLAGS		= -nologo -coff -c # -Mx -t

#########################################################################
##
## les fichiers C utilise's pour fabriquer les binaires
##
#########################################################################
# les fichiers .h communs a presque tous
LLH		= ..\common\lelisp.h ..\$(SYSTEM)\C\Machine.h

# les fichiers .asm communs a tous

ll31_obj 	= \
	o31fpu\ll386.obj	\
	o31fpu\llinit.obj	\
	o31fpu\toperr.obj	\
	o31fpu\gc.obj		\
	o31fpu\physio.obj	\
	o31fpu\read.obj		\
	o31fpu\macroch.obj	\
	o31fpu\print.obj	\
	o31fpu\cntrl.obj	\
	o31fpu\carcdr.obj	\
	o31fpu\symbs.obj	\
	o31fpu\fntstd.obj	\
	o31fpu\number.obj	\
	o31fpu\specnb.obj	\
	o31fpu\string.obj	\
	o31fpu\chars.obj	\
	o31fpu\fspecs.obj	\
	o31fpu\eval.obj		\
	o31fpu\extend.obj	\
	o31fpu\bllsht.obj

ll64_obj 	= \
	o64fpu\ll386.obj	\
	o64fpu\llinit.obj	\
	o64fpu\toperr.obj	\
	o64fpu\gc.obj		\
	o64fpu\physio.obj	\
	o64fpu\read.obj		\
	o64fpu\macroch.obj	\
	o64fpu\print.obj	\
	o64fpu\cntrl.obj	\
	o64fpu\carcdr.obj	\
	o64fpu\symbs.obj	\
	o64fpu\fntstd.obj	\
	o64fpu\number.obj	\
	o64fpu\specnb.obj	\
	o64fpu\string.obj	\
	o64fpu\chars.obj	\
	o64fpu\fspecs.obj	\
	o64fpu\eval.obj		\
	o64fpu\extend.obj	\
	o64fpu\bllsht.obj

# les fichiers .c communs a tous

common_cobj	= \
	o\llmain.obj		\
	o\llstdio.obj		\
	o\llfloat.obj		\
	o\lelisp.obj		\
	o\evloop.obj		\
	o\getgloba.obj		\
	o\Cload.obj		\
	o\dir.obj

common_wcobj	= \
	o\llmain.obj		\
	o\llstdio.obj		\
	o\llfloat.obj		\
	o\lelispw.obj		\
	o\evloop.obj		\
	o\getgloba.obj		\
	o\Cload.obj		\
	o\dir.obj

extra_cobj	= \
	o\plombe.obj		\
	o\nt386.obj		\
	o\dosterm.obj		\
	o\Cfix.obj

cobj		= $(extra_cobj) $(common_cobj)
elem		= o\voidelem.obj
cflt31		= o\llflt31.obj
cflt64		= o\llflt64.obj

# les fichiers C pour le bitmap WINDOWS

extra_cobjwin	=	\
	o\plombe.obj		\
	o\nt386.obj		\
	o\winterm.obj		\
	o\Cfix.obj     		\
	o\widgets.obj

cobjwin		= $(extra_cobjwin) $(common_wcobj)

wincobj		= \
	o\winbitma.obj		\
	o\wincolor.obj		\
	o\windraw.obj		\
	o\winevent.obj		\
	o\wingraph.obj		\
	o\winwindo.obj  	\
	o\lelisp.res

#########################################################################
##
## Les outils Le-Lisp
##
#########################################################################

tools:	complice.exe config.exe llexec.exe

#########################################################################
##
## fabrication du binaire complice.exe
##
#########################################################################

complice.exe: c\complice.c
	@$(CC) $(CFLAGS) c\$*.c
	@$(LD) $(LDTFLAGS) -out:$*.exe $*.obj $(LDTLIBS)
	@del $*.obj

#########################################################################
##
## fabrication du binaire llexec.exe
##
#########################################################################

llexec.exe: c\llexec.c
	@$(CC) -O2 -Fellexec.exe c\$*.c

#########################################################################
##
## fabrication du binaire config.exe
##
#########################################################################

config.exe: c\Config.c
	@$(CC) $(CFLAGS) c\Config.c
	@$(LD) $(LDTFLAGS) -out:$*.exe $*.obj $(LDTLIBS)
	@del *.obj

config64.exe: c\config.c
	@$(CC) $(CFLAGS) c\Config.c
	@$(LD) $(LDTFLAGS) -out:$*.exe config.obj $(LDTLIBS) bufferoverflowU.lib
	@del *.obj

#########################################################################
##
## fabrication des ressources a` partir du .RC
##
#########################################################################

o\lelisp.res: $(WINDIR)\lelisp.rc
	@$(RC) -r -d_NT -i$(WINDIR) -foo\lelisp.res $(WINDIR)\lelisp.rc

#########################################################################
##
## fabrication de tous les binaires possibles
## selon les options disponibles sur cette machine
##
#########################################################################

lelisp31bin.exe: $(ll31_obj) $(elem) $(cobj) $(cflt31) nlist.exe
	@echo Linking $*.exe ..
	@$(LD) $(LDTFLAGS) -out:$*.exe -map:$*.map \
	       $(cobj) $(cflt31) $(ll31_obj) $(elem) $(LDTLIBS) $(LDKERN)
	@nlist -$(SYSTEM) $*.map elem.asm
	@$(AS) $(ASFLAGS) -Foo\elem.obj elem.asm
	@del elem.asm
	@$(LD) $(LDTFLAGS) -out:$*.exe -map:$*.map \
	       $(cobj) $(cflt31) $(ll31_obj) o\elem.obj $(LDTLIBS) $(LDKERN)
	@del o\elem.obj
	@del $*.map

lelisp64bin.exe: $(ll64_obj) $(elem) $(cobj) $(cflt64) nlist.exe
	@echo Linking $*.exe ..
	@$(LD) $(LDTFLAGS) -out:$*.exe -map:$*.map \
	       $(cobj) $(cflt64) $(ll64_obj) $(elem) $(LDTLIBS) $(LDKERN)
	@nlist -$(SYSTEM) $*.map elem.asm
	@$(AS) $(ASFLAGS) -Foo\elem.obj elem.asm
	@del elem.asm
	@$(LD) $(LDTFLAGS) -out:$*.exe -map:$*.map \
	       $(cobj) $(cflt64) $(ll64_obj) o\elem.obj $(LDTLIBS) $(LDKERN)
	@del o\elem.obj
	@del $*.map

lelisp31binw.exe: $(ll31_obj) $(elem) $(cobjwin) $(wincobj) $(cflt31) nlist.exe lelisp.hlp
	@echo Linking $*.exe ..
	@$(LD) $(LDWFLAGS) -out:$*.exe -map:$*.map \
	       $(cobjwin) $(wincobj) $(cflt31) $(ll31_obj) $(elem) $(LDWLIBS) \
	       $(LDKERN)
	@nlist -win32 $*.map elem.asm
	@$(AS) $(ASFLAGS) -Foo\elem.obj elem.asm
	@del elem.asm
	@$(RC) -r -d_NT -i$(WINDIR) -fo lelisp.tmp $(WINDIR)\lelisp.rc
	@del lelisp.tmp
	@$(LD) $(LDWFLAGS) -out:$*.exe -map:$*.map \
	       $(cobjwin) $(wincobj) $(cflt31) $(ll31_obj) o\elem.obj $(LDWLIBS) \
	       $(LDKERN)
	@del o\elem.obj
	@del $*.map

lelisp64binw.exe: $(ll64_obj) $(elem) $(cobjwin) $(wincobj) $(cflt64) nlist.exe o\lelisp.res
	@echo Linking $*.exe ..
	@$(LD) $(LDWFLAGS) -out:$*.exe -map:$*.map \
	       $(cobjwin) $(wincobj) $(cflt64) $(ll64_obj) $(elem) $(LDWLIBS) \
	       $(LDKERN)
	@nlist -$(SYSTEM) $*.map elem.asm
	@$(AS) $(ASFLAGS) -Foo\elem.obj elem.asm
	@del elem.asm
	@$(RC) -r -d_NT -i$(WINDIR) -fo lelisp.tmp $(WINDIR)\lelisp.rc
	@del lelisp.tmp
	@$(LD) $(LDWFLAGS) -out:$*.exe -map:$*.map \
	       $(cobjwin) $(wincobj) $(cflt64) $(ll64_obj) o\elem.obj $(LDWLIBS) \
	       $(LDKERN)
	@del o\elem.obj
	@del $*.map

lelisprwbin.exe: $(ll31_obj) $(elem) $(cobj) $(cflt31) o\rw.obj nlist.exe
	@echo Linking $*.exe ..
	@$(LD) $(LDTFLAGS) -out:$*.exe -map:$*.map $(cobj) \
	       $(cflt31) $(ll31_obj) o\rw.obj $(elem) $(LDTLIBS) $(LDKERN)
	@nlist -$(SYSTEM) $*.map elem.asm
	@$(AS) $(ASFLAGS) -Foo\elem.obj elem.asm
	@del elem.asm
	@$(LD) $(LDTFLAGS) -out:$*.exe -map:$*.map $(cobj) \
	       $(cflt31) $(ll31_obj) o\rw.obj o\elem.obj $(LDTLIBS) $(LDKERN)
	@del o\elem.obj
	@del $*.map

##########################################################
# Les entre'es classiques
##########################################################

DEFAULTS	= lelisp cmplc++ lelispw cll2lm

ALLCORES	= lelisp   cmplc   cmplc++  lelisps  ceyx   lelisp31  lelisp64 \
		  lelispw

ALLBINS		= lelisp31bin.exe lelisp64bin.exe lelisp31binw.exe lelisp64binw.exe

# Pour faire les systemes clients : $(DEFAULTS)
# % make
default: $(DEFAULTS)
allcore: $(ALLCORES)
allbin:	$(ALLBINS)

# Pour nettoyer tout ce qui est fabrique' par ce makefile: Les binaires,
# les commandes standard.
# % make clean
clean: cleanbin cleancor cleano
cleanbin:
	-@del $(ALLBINS) > nul

cleancor:
	-@for %%i in ($(ALLCORES)) do @del %%i.bat > nul
	-@del llcore\?*.cor > nul

cleano:
	-@del o\?*.obj > nul
	-@del o\?*.res > nul

cleantools:
	-@del complice.exe > nul
	-@del config.exe   > nul

# pour TOUT nettoyer
clear:
	-@del lelisp*bin.exe
	-@del llcore\*.cor
	-@del o\?*.obj > nul
	-@del o\?*.res > nul

# Pour effacer tout ce qui n'est pas indispensable a` une utilisation minimale
#  de Le-Lisp.  Attention, plus aucun binaire, plus aucune image me'moire de
#  Le-Lisp ne sera faisable de`s que cette commande aura e'te' lance'e!
#
# Il est e'vident qu'aucune maintenance ne pourra etre effectue'e
# sans une distribution COMPLETE de Le-Lisp.

minimal:
	@echo Are you sure that you want a minimal Le-Lisp (Ctrl-Break to stop)
	@pause > nul
	@-del ..\TAR* ..\LL*FILES
	@-for %%i in (benchmarks ceyx common f77 info lltest manl) do rmdir /s /q ..\%%i
	@-del *.obj /s
	@-del ml.*
	@-del *.lnk
	@-del *.pdb
	@-rmdir /s /q C
	@-rmdir /s /q conf
	@-rmdir /s /q recette
	@-rmdir /s /q o o31fpu o64fpu
	@-rmdir /s /q llcore
	@-del Make*
	@-del LISEZ.MOI README nlist.exe kern.lib allfonts
	@echo Done.

#########################################################################
#                 Les fichiers .c
#########################################################################

o\llmain.obj: ..\common\llmain.c $(LLH)
	@$(CC) $(CFLAGS) -Foo\llmain.obj ..\common\llmain.c

o\lelisp.obj: ..\common\lelisp.c $(LLH)
	@$(CC) $(CFLAGS) -Foo\lelisp.obj ..\common\lelisp.c

o\llstdio.obj: ..\common\llstdio.c $(LLH)
	@$(CC) $(CFLAGS) -Foo\llstdio.obj ..\common\llstdio.c

o\getgloba.obj: ..\$(SYSTEM)\C\Getgloba.c $(LLH)
	@$(CC) $(CFLAGS) -Foo\Getgloba.obj ..\$(SYSTEM)\C\Getgloba.c

o\Cload.obj: ..\$(SYSTEM)\C\Cload.c $(LLH)
	@$(CC) $(CFLAGS) -Foo\Cload.obj ..\$(SYSTEM)\C\Cload.c

o\evloop.obj: ..\common\evloop.c $(LLH)
	@$(CC) $(CFLAGS) -Foo\evloop.obj ..\common\evloop.c

o\llfloat.obj: ..\common\llfloat.c $(LLH)
	@$(CC) $(CFLAGS) -Foo\llfloat.obj ..\common\llfloat.c

o\llflt31.obj: ..\common\llfloat31.c $(LLH)
	@$(CC) $(CFLAGS) -Foo\llflt31.obj ..\common\llfloat31.c

o\llflt64.obj: ..\common\llfloat64.c $(LLH)
	@$(CC) $(CFLAGS) -Foo\llflt64.obj ..\common\llfloat64.c

o\cstruct.obj: ..\common\cstruct.c
	@$(CC) $(CFLAGS) -Foo\cstruct.obj ..\common\cstruct.c

o\nt386.obj: ..\$(SYSTEM)\C\nt386.c $(LLH)
	@$(CC) $(CFLAGS) -Foo\nt386.obj ..\$(SYSTEM)\C\nt386.c

o\dir.obj: ..\$(SYSTEM)\C\dir.c $(LLH)
	@$(CC) $(CFLAGS) -Foo\dir.obj ..\$(SYSTEM)\C\dir.c

o\Cfix.obj: c\Cfix.c $(LLH)
	@$(CC) $(CFLAGS) -Foo\Cfix.obj c\Cfix.c

o\dosterm.obj: ..\$(SYSTEM)\C\dosterm.c $(LLH)
	@$(CC) $(CFLAGS) -Foo\dosterm.obj ..\$(SYSTEM)\C\dosterm.c

o\rw.obj: ..\386dx\rw.c $(LLH)
	@$(CC) $(CFLAGS) -Foo\rw.obj  ..\386dx\rw.c

#########################################################################
#                 La table des symboles pour le Getglobal
#########################################################################

o\voidelem.obj:
	@echo 	.386					   >  elem.asm
	@echo _DATA	SEGMENT	DWORD USE32 PUBLIC 'DATA'  >> elem.asm
	@echo _DATA	   ENDS				   >> elem.asm
	@echo 	ASSUME  CS:FLAT, DS:FLAT, SS:FLAT, ES:FLAT >> elem.asm
	@echo PUBLIC	_elem				   >> elem.asm
	@echo _DATA	SEGMENT  DWORD USE32 PUBLIC 'DATA' >> elem.asm
	@echo _elem	DD	00H			   >> elem.asm
	@echo 		DD	00H			   >> elem.asm
	@echo _DATA	   ENDS				   >> elem.asm
	@echo END					   >> elem.asm
	@$(AS) $(ASFLAGS) -Foo\voidelem.obj elem.asm
	@del elem.asm

flt.asm: ..\386dx\flt.c
	@$(CC) $(CFLAGS) -S ..\386dx\flt.c
	@echo lfloat_to_cfloat macro is in flt.asm

# Pour le bitmap virtuel et le terminal WINDOWS

o\lelispw.obj: ..\common\lelisp.c $(LLH)
	@$(CC) $(CFLAGS) $(WINFLAGS) -Foo\lelispw.obj ..\common\lelisp.c

o\winterm.obj: $(WINDIR)\winterm.c $(WINDIR)\winvirbi.h
	@$(CC) $(CFLAGS) $(WINFLAGS) -Fo$*.obj $(WINDIR)\winterm.c

o\widgets.obj: $(WINDIR)\widgets.c $(WINDIR)\winvirbi.h
	@$(CC) $(CFLAGS) $(WINFLAGS) -Fo$*.obj $(WINDIR)\widgets.c

o\winbitma.obj: $(WINDIR)\winbitma.c $(WINDIR)\winvirbi.h
	@$(CC) $(CFLAGS) $(WINFLAGS) -Fo$*.obj $(WINDIR)\winbitma.c

o\wincolor.obj:	$(WINDIR)\wincolor.c  $(WINDIR)\winvirbi.h
	@$(CC) $(CFLAGS) $(WINFLAGS) -Fo$*.obj $(WINDIR)\wincolor.c

o\windraw.obj:	$(WINDIR)\windraw.c   $(WINDIR)\winvirbi.h
	@$(CC) $(CFLAGS) $(WINFLAGS) -Fo$*.obj $(WINDIR)\windraw.c

o\winevent.obj:	$(WINDIR)\winevent.c  $(WINDIR)\winvirbi.h
	@$(CC) $(CFLAGS) $(WINFLAGS) -Fo$*.obj $(WINDIR)\winevent.c

o\wingraph.obj:	$(WINDIR)\wingraph.c  $(WINDIR)\winvirbi.h
	@$(CC) $(CFLAGS) $(WINFLAGS) -Fo$*.obj $(WINDIR)\wingraph.c

o\winwindo.obj:	$(WINDIR)\winwindo.c $(WINDIR)\winvirbi.h
	@$(CC) $(CFLAGS) $(WINFLAGS) -Fo$*.obj $(WINDIR)\winwindo.c

#########################################################################
#
#                 L'aide en ligne
#
#########################################################################

lelisp.hlp: ..\virbitmap\windows\lelisp.rtf ..\virbitmap\windows\lelisp.hpj
	@if exist lelisp.ph del lelisp.ph
	@$(HC) ..\virbitmap\windows\lelisp.hpj
	@copy ..\virbitmap\windows\lelisp.hlp . > nul

#####################################################################
#       D'autres fichiers C
#
#
# Pour tester les callexterns (sans Cload)

lelispextbin.exe: llextb$(FLT).exe
	@copy llextb$(FLT).exe lelispextbin.exe
	@del  llextb$(FLT).*

lelispextbinw.exe: lextb$(FLT)w.exe
	@copy lextb$(FLT)w.exe lelispextbinw.exe
	@del  lextb$(FLT)w.*

llextb31.exe: $(elem) $(cobj) $(cflt31) o\testext.obj nlist.exe
	@echo Linking llextb31.exe ..
	@$(LD) $(LDTFLAGS) -out:llextb31.exe -map:llextb31.map \
	       $(cobj) $(ll31_obj) $(cflt31) o\testext.obj $(elem) $(LDTLIBS) \
	       $(LDKERN)
	@nlist -$(SYSTEM) llextb31.map elem.asm
	@$(AS) $(ASFLAGS) -Foo\elem.obj elem.asm
	@del elem.asm
	@$(LD) $(LDTFLAGS) -out:llextb31.exe -map:llextb31.map \
	       $(cobj) $(ll31_obj) $(cflt31) o\testext.obj o\elem.obj $(LDTLIBS) \
	       $(LDKERN)
	@del o\elem.obj
	@del llextb31.map

lextb31w.exe: $(elem) $(cobjwin) $(wincobj) $(cflt31) o\testext.obj nlist.exe
	@echo Linking lextb31w.exe ..
	@$(LD) $(LDWFLAGS) -out:lextb31w.exe -map:lextb31w.map \
	       $(cobjwin) $(wincobj) $(cflt31) $(ll31_obj) o\testext.obj $(elem) \
	       $(LDWLIBS) \
	       $(LDKERN)
	@nlist -$(SYSTEM) lextb31w.map elem.asm
	@$(AS) $(ASFLAGS) -Foo\elem.obj elem.asm
	@del elem.asm
	@$(LD) $(LDWFLAGS) -out:lextb31w.exe -map:lextb31w.map \
	       $(cobjwin) $(wincobj) $(cflt31) $(ll31_obj) o\testext.obj o\elem.obj \
	       $(LDWLIBS) \
	       $(LDKERN)
	@del o\elem.obj
	@del lextb31w.map

llextb64.exe: $(elem) $(cobj) $(cflt64) o\testext.obj nlist.exe
	@echo Linking llextb64.exe ..
	@$(LD) $(LDTFLAGS) -out:llextb64.exe -map:llextb64.map \
	       $(cobj) $(ll64_obj) $(cflt64) o\testext.obj $(elem) $(LDTLIBS) \
	       $(LDKERN)
	@nlist -$(SYSTEM) llextb64.map elem.asm
	@$(AS) $(ASFLAGS) -Foo\elem.obj elem.asm
	@del elem.asm
	@$(LD) $(LDTFLAGS) -out:llextb64.exe -map:llextb64.map \
	       $(cobj) $(ll64_obj) $(cflt64) o\testext.obj o\elem.obj $(LDTLIBS) \
	       $(LDKERN)
	@del o\elem.obj
	@del llextb64.map

lextb64w.exe: $(elem) $(cobjwin) $(wincobj) $(cflt64) o\testext.obj nlist.exe
	@echo Linking lextb64w.exe ..
	@$(LD) $(LDWFLAGS) -out:lextb64w.exe -map:lextb64w.map \
	       $(cobjwin) $(wincobj) $(cflt64) $(ll64_obj) o\testext.obj $(elem) \
	       $(LDWLIBS) \
	       $(LDKERN)
	@nlist -$(SYSTEM) lextb64w.map elem.asm
	@$(AS) $(ASFLAGS) -Foo\elem.obj elem.asm
	@del elem.asm
	@$(LD) $(LDWFLAGS) -out:lextb64w.exe -map:lextb64w.map \
	       $(cobjwin) $(wincobj) $(cflt64) $(ll64_obj) o\testext.obj o\elem.obj \
	       $(LDWLIBS) \
	       $(LDKERN)
	@del o\elem.obj
	@del lextb64w.map

o\testext.obj: ..\lltest\testext.c
	@$(CC) $(CFLAGS) -Foo\testext.obj ..\lltest\testext.c

# Les librairies du linker pour Fortran

# Cette  entree  est  generique,  elle  n'a  ete  testee  qu'avec les
# compilateurs  f2c d'ATT et Fortran (DEC/Microsoft).  Les conditions
# pour   quelle  fonctionne  sont  que  les  modules  Fortran  soient
# compatibles  avec  Visual  C++  et  que  les  noms  generes  par le
# compilateur  aient les memes conventions d'appel que le C.  Le-Lisp
# ne pourra utiliser du code Fortan que si le C sait,  lui ausi,  les
# utiliser.

# AT&T freeware f2c (part of Le-Lisp advanced distribution)

FORTRAN_DIR	= ..\f77
FORTRAN_LDLIBS	= $(FORTRAN_DIR)\f2cvc50.lib
LDFORTRAN	=
FFLAGS		= -A -g $(CFLAGS) -I$(FORTRAN_DIR) # -verbose
F77		= $(FORTRAN_DIR)\f77

# Digital Visual Fortran

#FORTRAN_DIR	=d:\DevStudio\df\lib
#FORTRAN_LDLIBS	= $(FORTRAN_DIR)\dfor.lib $(FORTRAN_DIR)\dfconsol.lib \
#	        $(FORTRAN_DIR)\dfport.lib
#LDFORTRAN	=
#FFLAGS		= -Ox
#F77		= fl32

# Microsoft PowerStation 32

#FORTRAN_DIR	= d:\fpsnt\lib
#FORTRAN_LDLIBS	= $(FORTRAN_DIR)\libf.lib $(FORTRAN_DIR)\console.lib
#LDFORTRAN	=
#FFLAGS		= -Ox
#F77		= fl32

.f.obj:
	$(F77) -c $(FFLAGS) $<

# FORTRAN in text mode

lfextbin.exe: $(elem) $(cobj) o31fpu\ll386.obj $(cflt31) o\testfortran.obj nlist.exe
	@echo Linking lfextbin.exe ..
	@$(LD) $(LDTFLAGS) $(LDFORTRAN) -out:lfextbin.exe -map:lfextbin.map \
	       $(cobj) $(cflt31) $(ll31_obj) \
	       o\testfortran.obj $(elem) \
	       $(LDTLIBS) $(FORTRAN_LDLIBS) $(LDKERN)
	@nlist -$(SYSTEM) lfextbin.map elem.asm
	@$(AS) $(ASFLAGS) -Foo\elem.obj elem.asm
	@del elem.asm
	@$(LD) $(LDTFLAGS) $(LDFORTRAN) -out:lfextbin.exe -map:lfextbin.map \
	       $(cobj) $(cflt31) $(ll31_obj) \
	       o\testfortran.obj o\elem.obj \
	       $(LDTLIBS) $(FORTRAN_LDLIBS) $(LDKERN)
	@del o\elem.obj
	@del lfextbin.map

# FORTRAN in Windows mode

lfexwbin.exe: $(elem) $(cobjwin) $(wincobj) $(cflt64) o\testfortran.obj nlist.exe
	@echo Linking lfexwbin.exe ..
	@$(LD) $(LDWFLAGS) $(LDFORTRAN) -out:lfexwbin.exe -map:lfexwbin.map \
	       $(cobjwin) $(wincobj) $(cflt31) $(ll31_obj) \
	       o\testfortran.obj $(elem) \
	       $(LDWLIBS) $(FORTRAN_LDLIBS) $(LDKERN)
	@nlist -$(SYSTEM) lfexwbin.map elem.asm
	@$(AS) $(ASFLAGS) -Foo\elem.obj elem.asm
	@del elem.asm
	@$(LD) $(LDWFLAGS) $(LDFORTRAN) -out:lfexwbin.exe -map:lfexwbin.map \
	       $(cobjwin) $(wincobj) $(cflt31) $(ll31_obj) \
	       o\testfortran.obj o\elem.obj \
	       $(LDWLIBS) $(FORTRAN_LDLIBS) $(LDKERN)
	@del o\elem.obj
	@del lfexwbin.map

o\testfortran.obj: ..\lltest\testfortran.f
	@$(F77) -c $(FFLAGS) -Foo\testfortran.obj ..\lltest\testfortran.f

# pour les tests de pilotage de Le-Lisp par C
fromcbin.exe: $(elem) o\lelisp.obj o\getgloba.obj o\llstdio.obj o\llfloat.obj \
	      o\fromc.obj nlist.exe
	@echo Linking fromcbin.exe ..
	@$(CC) $(CFLAGS) -Ox \
	       o\lelisp.obj o\getgloba.obj o\llstdio.obj o\llfloat.obj o\fromc.obj elem.obj \
	       $(LDLIBS) ll.def -Fmll.map -o fromcbin.exe
	@nlist -$(SYSTEM) fromcbin.map elem.asm
	@$(AS) $(ASFLAGS) -Foo\elem.obj elem.asm
	@del elem.asm
	@$(CC) $(CFLAGS) -Ox \
	       o\lelisp.obj o\getgloba.obj o\llstdio.obj o\llfloat.obj o\fromc.obj elem.obj \
	       $(LDLIBS) ll.def -o fromcbin.exe
	@del fromcbin.map
	@del o\elem.obj

o\fromc.obj: ..\lltest\fromc.c
	@$(CC) $(CFLAGS) -Foo\fromc.obj ..\lltest\testext.c

################################################
# FABRICATION DES IMAGES
#
# si rien n'est precise' on range les cores dans .\llcore
# si on veut les ranger ailleurs, en conformite' avec le configurateur
# % make lelisp LLCORE=\tmp
LLCORE		=

################################################
# Les tailles par de'faut des zones de donne'es

# tailles des flottants pour les xxxx31bin.exe
SIZEF31		= 0

# tailles des flottants pour les xxxx64bin.exe
SIZEF64		= 16

# tailles des flottants pour les xxxxbin.exe

# par defaut: les flottants sont sur 31 bits
FLOAT		= $(SIZEF31)

# normal avec plutot des CONS <~ 1.5 Mega-octets
STACK_C		= 6
CODE_C		= 400
HEAP_C		= 128
NUMBER_C	= 0
VECTOR_C	= 1
STRING_C	= 5
SYMBOL_C	= 5
CONS_C		= 10
SZCONS		= -stack $(STACK_C) -code $(CODE_C) -heap $(HEAP_C) \
		  -number $(NUMBER_C) -vector $(VECTOR_C) -string $(STRING_C) \
		  -symbol $(SYMBOL_C) -cons $(CONS_C) -float $(FLOAT)

# normal avec plutot du code  <~ 1.5 Mega-octets
STACK_D		= 6
CODE_D		= 600
HEAP_D		= 256
NUMBER_D	= 0
VECTOR_D	= 4
STRING_D	= 5
SYMBOL_D	= 5
CONS_D		= 4
SZCODE		= -stack $(STACK_D) -code $(CODE_D) -heap $(HEAP_D) \
		  -number $(NUMBER_D) -vector $(VECTOR_D) -string $(STRING_D) \
		  -symbol $(SYMBOL_D) -cons $(CONS_D) -float $(FLOAT)

# gros  <~ 2.8 Mega-octets
STACK_P		= 8
CODE_P		= 1200
HEAP_P		= 512
NUMBER_P	= 0
VECTOR_P	= 8
STRING_P	= 12
SYMBOL_P	= 11
CONS_P		= 8
SZBG		= -stack $(STACK_P) -code $(CODE_P) -heap $(HEAP_P) \
		  -number $(NUMBER_P) -vector $(VECTOR_P) -string $(STRING_P) \
		  -symbol $(SYMBOL_P) -cons $(CONS_P) -float $(FLOAT)

# petit ~ 800k octets
STACK_M		= 6
CODE_M		= 1
HEAP_M		= 128
NUMBER_M	= 0
VECTOR_M	= 1
STRING_M	= 3
SYMBOL_M	= 3
CONS_M		= 5
SZM		= -stack $(STACK_M) -code $(CODE_M) -heap $(HEAP_M) \
		  -number $(NUMBER_M) -vector $(VECTOR_M) -string $(STRING_M) \
		  -symbol $(SYMBOL_M) -cons $(CONS_M) -float $(FLOAT)

# caml
SIZEZ		= -stack 64 -code 1200 -heap 1024 -number 0 \
		  -vector 30 -string 40 -symbol 8 -cons 15 -float $(FLOAT)

# Tailles courantes
SIZE		= $(SZCODE)
SIZEM		= $(SZM)
SIZEH		= $(SZBG)
SIZEA		= $(SZCODE)

##########################################################
# Les points d'entre'e permettant de faire les syste`mes
##########################################################

### lelisp "systeme standard modulaire"
lelisp:  lelisp.bat

lelisp.bat: llcore\lelisp.cor

llcore\lelisp.cor: conf\Lelisp.cnf lelisp$(FLT)bin.exe
	@echo  $(LLCORE) $(SIZE) > conf\lelisp.lcf
	@.\config -t lelisp lelisp$(FLT)bin.exe Lelisp.cnf

### lelisp- "systeme standard interprete"
lelisp-: lelisp-.bat

lelisp-.bat: llcore\lelisp-.cor

llcore\lelisp-.cor: conf\Lelisp-.cnf lelisp$(FLT)bin.exe
	@echo $(LLCORE) $(SIZEM) > conf\lelisp-.lcf
	@.\config -t lelisp- lelisp$(FLT)bin.exe Lelisp-.cnf

### lelisp++ "gros systeme standard modulaire"
lelisp++: lelisp++.bat

lelisp++.bat: llcore\lelisp++.cor

llcore\lelisp++.cor: conf\Lelisp.cnf lelisp$(FLT)bin.exe
	@echo $(LLCORE) $(SIZEH) > conf\lelisp++.lcf
	@.\config -t lelisp++ lelisp$(FLT)bin.exe Lelisp.cnf

### lelisps "systeme standard compile"
lelisps: lelisps.bat

lelisps.bat: llcore\lelisps.cor

llcore\lelisps.cor: conf\Lelisps.cnf lelisp$(FLT)bin.exe
	@echo $(LLCORE) $(SZCONS) > conf\lelisps.lcf
	@.\config -t lelisps lelisp$(FLT)bin.exe Lelisps.cnf

### cmplc "systeme complice modulaire"
cmplc: cmplc.bat

cmplc.bat: llcore\cmplc.cor

llcore\cmplc.cor: conf\Cmplc.cnf lelisp$(FLT)bin.exe
	@echo $(LLCORE) $(SIZE) > conf\cmplc.lcf
	@.\config -t cmplc lelisp$(FLT)bin.exe Cmplc.cnf

### cmplc++ "gros systeme complice modulaire"
cmplc++: cmplc++.bat

cmplc++.bat: llcore\cmplc++.cor

llcore\cmplc++.cor: conf\Cmplc.cnf lelisp$(FLT)bin.exe
	@echo $(LLCORE) $(SIZEH) > conf\cmplc++.lcf
	@.\config -t cmplc++ lelisp$(FLT)bin.exe Cmplc.cnf

### ll2lm "analyzer system"
cll2lm: cll2lm.bat

cll2lm.bat: llcore\cll2lm.core

llcore\cll2lm.core: conf/Cll2lm.cnf lelisp$(FLT)bin.exe
	@echo $(SIZEA) > conf\Cll2lm.lcf
	@.\config -t cll2lm lelisp$(FLT)bin.exe Cll2lm.cnf

### ceyx "systeme standard modulaire avec CEYX"
ceyx: ceyx.bat

ceyx.bat: llcore\ceyx.cor

llcore\ceyx.cor: conf\Ceyx.cnf lelisp$(FLT)bin.exe
	@echo $(LLCORE) $(SIZE) > conf\ceyx.lcf
	@.\config -t ceyx lelisp$(FLT)bin.exe Ceyx.cnf

### lelispw "systeme standard modulaire avec BV sur WINDOWS"
lelispw: lelispw.bat

lelispw.bat: llcore\lelispw.cor

llcore\lelispw.cor: conf\Lelispw.cnf lelisp$(FLT)binw.exe
	@echo $(LLCORE) $(SIZE) > conf\lelispw.lcf
	@.\config -w lelispw lelisp$(FLT)binw.exe Lelispw.cnf

### lelisp: systeme standard modulaire sur 64bitfloats
lelisp64: lelisp64.bat

lelisp64.bat: llcore\lelisp64.cor

llcore\lelisp64.cor: conf\Lelisp.cnf  lelisp64bin.exe
	@echo $(LLCORE) $(SIZE) -float $(SIZEF64) > conf\lelisp64.lcf
	@.\config -t lelisp64 lelisp64bin.exe Lelisp.cnf

#########################################################################
# une entre'e ge'ne'riques pour les utilisateurs exigeants
# tous les fichiers etant parametre's, on peut refaire son propre binaire
# (on peut meme redifinir le compilo: ex: CC=\bin\f77
# ex:
# % nmake myllbin USERBIN=myllbin USERO="foo.obj bar.obj"
# pour eventuellement changer de mode flottants
USERBINO	= $(ll31_obj) $(cflt31)
# pour le nom du binaire
USERBIN		= myllbin
USERWINBIN	= myllbinw

# les fichiers *.obj utilisateurs
USERO		=
# pour avoir des flags supplementaires
USERFLAGS	=

# le binaire le plus simple
$(USERBIN).exe: $(elem) $(cobj) $(USERBINO) $(USERO) nlist.exe
	@echo Linking $(USERBIN).exe ..
	@$(LD) $(LDTFLAGS) -out:$(USERBIN).exe -map:$(USERBIN).map \
	       $(cobj) $(USERBINO) $(USERO) $(elem) $(LDTLIBS) $(LDKERN)
	@nlist -$(SYSTEM) $(USERBIN).map elem.asm
	@$(AS) $(ASFLAGS) -Foo\elem.obj elem.asm
	@del elem.asm
	@$(LD) $(LDTFLAGS) -out:$(USERBIN).exe -map:$(USERBIN).map \
	       $(cobj) $(USERBINO) $(USERO) o\elem.obj $(LDTLIBS) $(LDKERN)
	@del o\elem.obj
	@del $(USERBIN).map

# le binaire qui integre WINDOWS
$(USERWINBIN).exe: $(elem) $(cobjwin) $(wincobj) $(USERBINO) $(USERO) nlist.exe
	@$(LD) $(LDWFLAGS) -out:$(USERWINBIN).exe -map:$(USERWINBIN).map \
	       $(cobjwin) $(wincobj) $(USERO) $(USERBINO) $(elem) $(LDWLIBS) \
	       $(LDKERN)
	@nlist -$(SYSTEM) $(USERWINBIN).map elem.asm
	@$(AS) $(ASFLAGS) -Foo\elem.obj elem.asm
	@del elem.asm
	@$(RC) -r -d_NT -i$(WINDIR) -fo lelisp.tmp $(WINDIR)\lelisp.rc
	@del lelisp.tmp
	@$(LD) $(LDWFLAGS) -out:$(USERWINBIN).exe -map:$(USERWINBIN).map \
	       $(cobjwin) $(wincobj) $(USERO) $(USERBINO) o\elem.obj $(LDWLIBS) \
	       $(LDKERN)
	@del o\elem.obj
	@del $(USERWINBIN).map

# Une entre'e ge'ne'rique pour aider l'utilisateur
#  a` faire des cores lie's a` son binaire
#
# Le nom de la commande lancant le systeme
USERLELISP	= monll
#
# Le configurateur qui dit ce qu'on met dans ce core
# Attention: ce fichier doit etre adresse' par un path absolu
#            ou etre range' dans lelisp\$(SYSTEM)\conf
USERCONF	= $(USERLELISP).cnf
#
# Le re'pertoire ou` ranger les cores: par de'faut lelisp\$(SYSTEM)\llcore
#  Attention si on en change $(USERCONF) doit l'inte'grer
USERLLCORE	=
#
# Le binaire de l'utilisateur pour fabriquer ce systeme
#  par defaut c'est le USERWINBIN classique integrant WINDOWS
#  mais on peut aussi avoir:
#  USERLELISPBIN	=" \$(USERBIN)" pour ne pas integrer WINDOWS
#   ou
#  USERLELISPBIN	=\home\moi\monbin pour faire ce qu'on veut
#
USERLELISPBIN	= $(USERWINBIN)
USERSIZE	= $(SIZE)

$(USERLELISP): $(USERLELISP).bat

$(USERLELISP).bat: $(USERLLCORE)\$(USERLELISP).cor

$(USERLLCORE)\$(USERLELISP).cor: $(USERLELISPBIN)
	@echo $(USERLLCORE) $(USERSIZE) > conf\$(USERLELISP).lcf
	@.\config -t $(USERLELISP) $(USERLELISPBIN) $(USERCONF)
