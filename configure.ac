dnl
dnl Autoconf script for Le-Lisp
dnl $Id: configure.ac,v 1.12 2017/10/07 16:07:06 jullien Exp $
dnl
dnl use autoconf-2.68 (works also with autoconf-2.13)
dnl

dnl
dnl The portable 'C' ports are known to work on:
dnl
dnl - aarch64-unknown-freebsd12.0
dnl - aarch64-unknown-linux-gnu
dnl - armv7l-unknown-linux-gnueabihf
dnl - i386-pc-nto-qnx6.5.0
dnl - i686-unknown-cygwin
dnl - i686-unknown-linux-gnu
dnl - mips64-unknown-linux-gnueabihf
dnl - powerpc-ibm-aix7.1.3.0
dnl - powerpc64-unknown-linux-gnu           CFLAGS=-m32
dnl - powerpc64le-unknown-linux-gnu
dnl - sparc-sun-solaris2.10                 CFLAGS=-m32
dnl - sparc64-unknown-linux-gnu             CFLAGS=-m32
dnl - x86_64-apple-darwin10.8.0
dnl - x86_64-apple-darwin16.7.0
dnl - x86_64-apple-darwin19.0.0
dnl - x86_64-pc-linux-gnu
dnl - x86_64-unknown-cygwin
dnl - x86_64-unknown-freebsd10.0
dnl - x86_64-unknown-netbsd5.1
dnl - x86_64-unknown-netbsd6.1
dnl
dnl Works with some limitations
dnl - i386-unknown-openbsd5.8               No core because of SAR
dnl - x86_64-unknown-openbsd5.8             No core because of SAR
dnl

dnl Process this file with autoconf to produce a configure script

AC_INIT([lelisp], [15.26], [jullien@eligis.com])

dnl where to find install.sh, config.sub, and config.guess

AC_CONFIG_AUX_DIR(./conf)

dnl use common/config.h.in template.

AC_CONFIG_HEADER(common/config.h)

dnl make sure we are using a recent autoconf version

AC_PREREQ(2.63)

NAME=Le-Lisp
VERSION=15.26
SOURCE=`pwd`

dnl check LIBTOOL options (see aclocal.m4)

dnl AC_PROG_LIBTOOL

AC_MSG_CHECKING(for portable C version)
AC_ARG_ENABLE(portable,
[  --enable-portable       enable portable C version [default=no]],,enable_portable=no)
if test "$enable_portable" = "y" || test "$enable_portable" = "yes"
then
   enable_portable=yes
   PORTABLE_C=yes
   AC_MSG_RESULT(yes)
else
   PORTABLE_C=no
   AC_MSG_RESULT(no)
fi

AC_MSG_CHECKING(for enabled bignum)
AC_ARG_ENABLE(bignum,
[  --enable-bignum         enable bignum (default=yes]],,enable_bignum=yes)
if test "$enable_bignum" = "y" || test "$enable_bignum" = "yes"
then
   enable_bignum=yes
   BIGNUM=kern.o
   AC_DEFINE(HAVE_BIGNUM)
   AC_MSG_RESULT(yes)
else
   BIGNUM=
   enable_bignum=no
   AC_MSG_RESULT(no)
fi

AC_MSG_CHECKING(for enabled X11 graphics)
AC_ARG_ENABLE(x11,
[  --enable-x11            enable X11 [default=yes]],,enable_x11=yes)
if test "$enable_x11" = "y" || test "$enable_x11" = "yes"
then
   enable_x11=yes
   AC_DEFINE(HAVE_X11)
   AC_MSG_RESULT(yes)
else
   enable_x11=no
   AC_MSG_RESULT(no)
fi


dnl Canonicalize the host and os so we can do some tricky things.

dnl AC_CANONICAL_HOST

AC_CANONICAL_SYSTEM

SYSTEM_TYPE="$target_vendor-$target_os"
MACHINE_TYPE="$target_cpu"
AC_SUBST(SYSTEM_TYPE)
AC_DEFINE_UNQUOTED(SYSTEM_TYPE, "$SYSTEM_TYPE")
AC_SUBST(MACHINE_TYPE)
AC_DEFINE_UNQUOTED(MACHINE_TYPE, "$MACHINE_TYPE")

dnl Checks for C compiler

AC_PROG_CC

dnl Checks for specific system

AC_CHECK_PROGS([AR], gcc-ar ar gar, no)
AS_IF([test "$AR" != "no"],
      [AC_SUBST(AR)],
      [AC_MSG_ERROR(Can\'t find gcc-ar, ar or gar.)])

AC_CHECK_PROGS([STRIP], gcc-strip strip gstrip, no)
AS_IF([test "$STRIP" != "no"],
      [AC_SUBST(STRIP)],
      [AC_MSG_ERROR(Can\'t find gcc-strip, strip or strip.)])

AC_CHECK_PROGS([RANLIB], gcc-ranlib ranlib, no)
AS_IF([test "$RANLIB" != "no"],
      [AC_SUBST(RANLIB)],
      [RANLIB="echo INFO: no ranlib on this system"])

AC_CHECK_PROGS([MAKE], gmake gnumake make, no)
AS_IF([test "$MAKE" != "no"],
      [AC_SUBST(MAKE)],
      [AC_MSG_ERROR(Can\'t find gmake, gnumake or make.)])

AC_CHECK_PROGS([LDCONFIG], ldconfig, no)
AS_IF([test "$LDCONFIG" != "no"],
      [AC_SUBST(LDCONFIG)],
      [LDCONFIG="echo INFO: no ldconfig on this system"])

AC_CHECK_PROGS(ED, ed, no)
#if test $ED = no; then
#  AC_MSG_ERROR(Can\'t find ed.)
#fi
AC_SUBST(ED)

AC_CHECK_FUNC([sin],,            [AC_CHECK_LIB(m,      sin)])
AC_CHECK_FUNC([dlopen],,         [AC_CHECK_LIB(dl,     dlopen)])

dnl Checks for header files.

AC_HEADER_STDC
AC_HEADER_STAT
AC_HEADER_TIME

AC_CHECK_HEADER(ctype.h)
AC_CHECK_HEADER(dirent.h)
AC_CHECK_HEADER(dir.h)
AC_CHECK_HEADER(dlfcn.h)
AC_CHECK_HEADER(elf.h)
AC_CHECK_HEADER(errno.h)
AC_CHECK_HEADER(fcntl.h)
AC_CHECK_HEADER(io.h)
AC_CHECK_HEADER(malloc.h)
AC_CHECK_HEADER(math.h)
AC_CHECK_HEADER(process.h)
AC_CHECK_HEADER(pwd.h)
AC_CHECK_HEADER(setjmp.h)
AC_CHECK_HEADER(signal.h)
AC_CHECK_HEADER(starlet.h)
AC_CHECK_HEADER(stdint.h)
AC_CHECK_HEADER(stdio.h)
AC_CHECK_HEADER(stdlib.h)
AC_CHECK_HEADER(string.h)
AC_CHECK_HEADER(sys/ioctl.h)
AC_CHECK_HEADER(sys/mman.h)
AC_CHECK_HEADER(sys/param.h)
AC_CHECK_HEADER(sys/resource.h)
AC_CHECK_HEADER(sys/select.h)
AC_CHECK_HEADER(sys/stat.h)
AC_CHECK_HEADER(sys/time.h)
AC_CHECK_HEADER(sys/times.h)
AC_CHECK_HEADER(sys/types.h)
AC_CHECK_HEADER(termios.h)
AC_CHECK_HEADER(time.h)
AC_CHECK_HEADER(unistd.h)
AC_CHECK_HEADER(values.h)

dnl Checks for X Window System.

AC_PATH_X
AC_PATH_XTRA
AS_IF([test "X$no_x" = "Xyes"], [X11OBJS=], [X11OBJS=x11.o])
AC_SUBST(X11OBJS)

dnl Checks for typedefs, structures, and compiler characteristics.

AC_C_CONST
AC_C_RESTRICT
AC_C_INLINE

AC_TYPE_SIZE_T
AC_TYPE_MODE_T
AC_STRUCT_TM

if test "$ac_cv_c_inline" != no
then
  AC_DEFINE(HAVE_INLINE)
  AC_SUBST(HAVE_INLINE)
  AC_SUBST(_INLINE_KEYWORD)
  AC_DEFINE_UNQUOTED(_INLINE_KEYWORD, $ac_cv_c_inline)
else
  AC_SUBST(_INLINE_KEYWORD)
  AC_DEFINE_UNQUOTED(_INLINE_KEYWORD, /* no inline */)
fi

dnl get type size

AC_CHECK_SIZEOF(void *, 4)
AC_CHECK_SIZEOF(long,   4)
AC_CHECK_SIZEOF(size_t, 4)

AC_CACHE_CHECK([for 64-bit], [ac_cv_cc_64bit],
    [AC_TRY_RUN([
	int main() {
	return( (SIZEOF_VOID_P == 8) ? 0 : 1 );
	}],
    [ac_cv_cc_64bit=yes],
    [ac_cv_cc_64bit=no],
    [ac_cv_cc_64bit=unknown])])

if test "$ac_cv_cc_64bit" != no
then
  MODEL=64
else
  MODEL=32
fi

dnl Save cache

AC_CACHE_SAVE

AC_PROG_GCC_TRADITIONAL
AC_TYPE_SIGNAL
AC_FUNC_SELECT_ARGTYPES

dnl Checks for library functions.

AC_CHECK_FUNCS(
 alarm		\
 fork		\
 gethostname	\
 getpagesize	\
 gettimeofday	\
 getuid		\
 kill		\
 mmap		\
 realpath	\
 select		\
 setitimer	\
 sigaction	\
 siglongjmp	\
 sleep		\
 snprintf	\
 socket		\
 strtod		\
 sysconf	\
 system		\
 tcgetattr	\
 time		\
 times		\
 unsetenv	\
 wait
)

AC_CHECK_FUNC(sigsetjmp, AC_DEFINE(HAVE_SIGSETJMP),
AC_MSG_CHECKING(for sigsetjmp defined in setjmp.h)
AC_TRY_COMPILE([#include <setjmp.h>],
[int main(int argc, char **argv)
{
  sigjmp_buf env;
  exit(sigsetjmp(env,1));
}],[AC_DEFINE(HAVE_SIGSETJMP) AC_MSG_RESULT(yes)],
AC_MSG_RESULT(no)))

dnl OS specifics, sets {EXE,OBJ}EXT

AC_EXEEXT
AC_OBJEXT

dnl Optimization and Warnings options

ARCH=""

dnl Local options

AEXT="a"
AROPTS="-q"

dnl gcc -nostdlib -Wl,--export-dynamic -Wl,-r

case "${target_cpu}-${target_os}" in
  *cygwin*)
     TARGET=cygwin
     AX_CHECK_COMPILE_FLAG([-Wl,--export-all-symbols],
                           [LDEXPORT="$LDEXPORT -Wl,--export-all-symbols"])
     ;;
  *darwin*)
     AX_CHECK_COMPILE_FLAG([-Wl,-export_dynamic],
                           [LDEXPORT="$LDEXPORT -Wl,-export_dynamic"])
     AX_CHECK_COMPILE_FLAG([-Wl,-no_pie],
                           [LDEXPORT="$LDEXPORT -Wl,-no_pie"])
     ;;
  *)
     AX_CHECK_COMPILE_FLAG([-Wl,--export-dynamic],
                           [LDEXPORT="$LDEXPORT -Wl,--export-dynamic"])
     ;;
esac

AX_CHECK_COMPILE_FLAG([-Wl,-r -nostdlib],     [LDRFLAGS="$LDRFLAGS -Wl,-r -nostdlib"])
AX_CHECK_COMPILE_FLAG([-Wall],                [CFLAGS="$CFLAGS -Wall"])
AX_CHECK_COMPILE_FLAG([-Wstrict-prototypes],  [CFLAGS="$CFLAGS -Wstrict-prototypes"])
AX_CHECK_COMPILE_FLAG([-finline-functions],   [CFLAGS="$CFLAGS -finline-functions"])
AX_CHECK_COMPILE_FLAG([-fomit-frame-pointer], [CFLAGS="$CFLAGS -fomit-frame-pointer"])
AX_CHECK_COMPILE_FLAG([-funroll-loops],       [CFLAGS="$CFLAGS -funroll-loops"])
AX_CHECK_COMPILE_FLAG([-fcommon],             [CFLAGS="$CFLAGS -fcommon"])

BUILDARGS="-f Makeport FLT=31 bootstrap"

case "${target_cpu}-${target_os}" in
  *86*solaris*)
     if test $PORTABLE_C = no
     then
       TARGET=solaris386
     fi
     ;;
  *solaris*)
     if test $PORTABLE_C = no
     then
       TARGET=solaris
       CFLAGS="$CFLAGS -m32"
     fi
     ;;
  x86_64*linux*)
     if test $PORTABLE_C = no
     then
       TARGET=linux
       CFLAGS="$CFLAGS -m32"
     fi
     ;;
  *86*linux*)
     TARGET=linux
     ;;
  *aarch64*linux*)
     TARGET=C
     AX_CHECK_COMPILE_FLAG([-mcpu=cortex-a72], [CFLAGS="$CFLAGS -mcpu=cortex-a72"])
     ;;
  *armv7*linux*)
     TARGET=C
     AX_CHECK_COMPILE_FLAG([-march=armv7-a -mfloat-abi=hard], [CFLAGS="$CFLAGS -march=armv7-a -mfloat-abi=hard"])
     ;;
  *arm*linux*)
     TARGET=C
     ;;
  sparc*linux*)
     TARGET=linuxsparc
     AX_CHECK_COMPILE_FLAG([-Wl,--no-relax], [LDRFLAGS="$LDRFLAGS -Wl,--no-relax"])
     ;;
  *x86_64*cygwin*)
     PORTABLE_C=yes
     ;;
  *amd64*netbsd*)
     TARGET=netbsd
     ;;
  *86*netbsd*)
     TARGET=netbsd
     ;;
  *darwin*)
     if test $PORTABLE_C = no
     then
       if test `uname -r | cut -d '.' -f 1` -lt 18
       then
         TARGET=x86macos
       else
         PORTABLE_C=yes
       fi
     fi
     ;;
  i386*freebsd*)
     if test $PORTABLE_C = no
     then
       TARGET=freebsd
     fi
     ;;
  *cygwin*)
     # X11 requires: xorg-server xproto libX11-devel
     TARGET=cygwin
     ;;
  powerpc*aix*)
     if test $PORTABLE_C = no
     then
       TARGET=rs6000
     fi
     ;;
  *)
     PORTABLE_C=yes
     ;;
esac

if test $PORTABLE_C = yes
then
  TARGET=C
fi

if test $TARGET = C
then
  if test x"$MODEL" == x64; then CFLAGS="$CFLAGS -DLLC64BITS"; fi
fi

BOOTLISP="$SOURCE/$TARGET/cmplc++"

AC_SUBST(AEXT)
AC_SUBST(AR)
AC_SUBST(ARCH)
AC_SUBST(AROPTS)
AC_SUBST(BIGNUM)
AC_SUBST(BOOTLISP)
AC_SUBST(BUILDARGS)
AC_SUBST(CFLAGS)
AC_SUBST(EXTRALIBS)
AC_SUBST(LDFLAGS)
AC_SUBST(LDRFLAGS)
AC_SUBST(LDEXPORT)
AC_SUBST(NOPRINTDIR)
AC_SUBST(SOURCE)
AC_SUBST(TARGET)
AC_SUBST(VERSION)

AC_OUTPUT(Makefile C/Makeport C/Makefile C/config C/complice llib/startup.ll)

chmod a+x C/config C/complice
chmod a-w C/config C/complice

dnl Ensure previoulsy generated .c files are most up to date for the bootstrap
touch C/C3/*.c

echo \
"------------------------------------------------------------------------
Configuration:

 Name:		${NAME}
 Version:	${VERSION}
 Source:        ${srcdir}
 OS:            ${target_os}
 Target:        ${TARGET}
 ARCH:          ${target_cpu}
 Compiler:	${CC} ${CCVERSION}
 Flags:         ${CFLAGS} ${ARCH}
 Libraries:     ${EXTRALIBS}
 Build:         ${build}
 Host:          ${host}
 Target:        ${target}
 Install:       ${prefix}

See common/config.h for further configuration information.
------------------------------------------------------------------------"
