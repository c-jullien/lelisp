#
#	Makefile for 'testdll.dll'	1997/08/28
#

#	-D_ISO			For ISO/IEC 9899:1990 C Compilers
#	-D_WINDOWS		For Windows 3.x

#	Directories :

SYSDIR	= ..\..\..\win95
OBJDIR	= $(SYSDIR)\o

#	Tools:

CC	= cl
LD	= link
RC	= rc

#	Flags:

MFLAGS	= -D_ISO -D_WINDOWS -DWIN32 -D_DLL -D_NT -DSTRICT
CFLAGS	= -nologo -c -Gs -W3 $(MFLAGS)
LIBDIR	= d:\DevStudio\VC\lib
LIBS	= $(LIBDIR)\kernel32.lib $(LIBDIR)\user32.lib 	 \
	  $(LIBDIR)\comdlg32.lib $(LIBDIR)\oldnames.lib  $(LIBDIR)\libc.lib
DEBUG	= # /CodeView
LDFLAGS	= -dll -nologo -machine:ix86 -def:testdl32.def -out:$(SYSDIR)\testdll.dll

#	External definition with DLL

all:	$(SYSDIR)\testdll.dll $(SYSDIR)\testdll.ll

#	testdll

$(SYSDIR)\testdll.dll: $(OBJDIR)\testdll.obj testdl32.def
	@$(LD) $(LDFLAGS) $(OBJDIR)\testdll.obj

$(OBJDIR)\testdll.obj: testdll.c
	@$(CC) $(CFLAGS) -Fo$@ testdll.c

#	iabs

$(SYSDIR)\iabs.dll: $(OBJDIR)\iabs.obj testdl32.def
	@$(LD) $(LDFLAGS) $(OBJDIR)\iabs.obj

$(OBJDIR)\iabs.obj: iabs.c
	@$(CC) $(CFLAGS) -Fo$@ iabs.c

testdll.lo:	testdll.ll testdll.lm
	@echo "testdll.lo is not up to date. Please use compilwl"

$(SYSDIR)\testdll.ll:	testdll.ll
	@copy testdll.ll $(SYSDIR)

$(SYSDIR)\testdll.lm:	testdll.lm
	@copy testdll.lm $(SYSDIR)

$(SYSDIR)\testdll.lo:	testdll.lo
	@copy testdll.lo $(SYSDIR)
