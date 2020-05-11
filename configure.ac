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

AC_INIT([lelisp],[15.26],[jullien@eligis.com])

dnl where to find install.sh, config.sub, and config.guess

AC_CONFIG_AUX_DIR(./conf)

dnl use common/config.h.in template.

AC_CONFIG_HEADER(common/config.h)

dnl make sure we are using a recent autoconf version

AC_PREREQ([2.69])

NAME=Le-Lisp
VERSION=15.26
SOURCE=`pwd`

dnl check LIBTOOL options (see aclocal.m4)

dnl AC_PROG_LIBTOOL

TARGET=default
AC_MSG_CHECKING(for portable C version)
AC_ARG_ENABLE([portable],
  [AS_HELP_STRING([--enable-portable],
    [enable portable version [default=no]])],
  [],
  [enable_portable=no])
AS_IF([test "$enable_portable" = "yes"],
      [TARGET=C
       AC_MSG_RESULT(yes)],
      [AC_MSG_RESULT(no)])

AC_MSG_CHECKING(for enabled bignum)
AC_ARG_ENABLE([bignum],
  [AS_HELP_STRING([--enable-bignum],
    [enable bignum [default=yes]])],
  [],
  [enable_bignum=yes])
AS_IF([test "$enable_bignum" = "yes"],
      [BIGNUM=kern.o
       AC_DEFINE([HAVE_BIGNUM], [1], [Define if bignum is wanted.])
       AC_MSG_RESULT(yes)],
      [BIGNUM=
       AC_MSG_RESULT(no)])

AC_MSG_CHECKING(for enabled X11 graphics)
AC_ARG_ENABLE([x11],
  [AS_HELP_STRING([--enable-x11],
    [enable X11 [default=yes]])],
  [],
  [enable_x11=yes])
AS_IF([test "$enable_x11" = "yes"],
      [AC_DEFINE([HAVE_X11], [1], [Define if X11 is wanted.])
       AC_MSG_RESULT(yes)],
      [AC_MSG_RESULT(no)])

dnl Canonicalize the host and os so we can do some tricky things.

dnl AC_CANONICAL_HOST

AC_CANONICAL_TARGET

SYSTEM_TYPE="$target_vendor-$target_os"
MACHINE_TYPE="$target_cpu"
AC_SUBST(SYSTEM_TYPE)
AC_DEFINE_UNQUOTED([SYSTEM_TYPE], ["$SYSTEM_TYPE"], [Define the system type])
AC_SUBST(MACHINE_TYPE)
AC_DEFINE_UNQUOTED([MACHINE_TYPE], ["$MACHINE_TYPE"], [Define the machine type])

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
dnl AS_IF([test "$ED" = "no"],
dnl      [AC_MSG_ERROR(Can\'t find ed.)])
AC_SUBST(ED)

AC_CHECK_FUNC([sin],,    [AC_CHECK_LIB(m,  sin)])
AC_CHECK_FUNC([dlopen],, [AC_CHECK_LIB(dl, dlopen)])

dnl Checks for header files.

AC_HEADER_STDC
AC_HEADER_STAT
AC_HEADER_TIME

AC_CHECK_HEADER([ctype.h])
AC_CHECK_HEADER([dirent.h])
AC_CHECK_HEADER([dir.h])
AC_CHECK_HEADER([dlfcn.h])
AC_CHECK_HEADER([elf.h])
AC_CHECK_HEADER([errno.h])
AC_CHECK_HEADER([fcntl.h])
AC_CHECK_HEADER([io.h])
AC_CHECK_HEADER([malloc.h])
AC_CHECK_HEADER([math.h])
AC_CHECK_HEADER([process.h])
AC_CHECK_HEADER([pwd.h])
AC_CHECK_HEADER([setjmp.h])
AC_CHECK_HEADER([signal.h])
AC_CHECK_HEADER([starlet.h])
AC_CHECK_HEADER([stdint.h])
AC_CHECK_HEADER([stdio.h])
AC_CHECK_HEADER([stdlib.h])
AC_CHECK_HEADER([string.h])
AC_CHECK_HEADER([sys/ioctl.h])
AC_CHECK_HEADER([sys/mman.h])
AC_CHECK_HEADER([sys/param.h])
AC_CHECK_HEADER([sys/resource.h])
AC_CHECK_HEADER([sys/select.h])
AC_CHECK_HEADER([sys/stat.h])
AC_CHECK_HEADER([sys/time.h])
AC_CHECK_HEADER([sys/times.h])
AC_CHECK_HEADER([sys/types.h])
AC_CHECK_HEADER([termios.h])
AC_CHECK_HEADER([time.h])
AC_CHECK_HEADER([unistd.h])
AC_CHECK_HEADER([values.h])

dnl Checks for X Window System.

AC_PATH_X
AC_PATH_XTRA
AS_IF([test "X$no_x" = "Xyes"],
      [X11OBJS=],
      [X11OBJS=x11.o])
AC_SUBST(X11OBJS)

dnl Checks for typedefs, structures, and compiler characteristics.

AC_C_CONST

AC_TYPE_SIZE_T
AC_TYPE_MODE_T
AC_STRUCT_TM

AC_C_INLINE
AS_IF([test "$ac_cv_c_inline" != no],
  [AC_DEFINE([HAVE_INLINE], [1], [Define if C supports inline keyword.])
   AC_SUBST(_INLINE_KEYWORD)
   AC_DEFINE_UNQUOTED(_INLINE_KEYWORD,
                      $ac_cv_c_inline,
		      [Define if C supports inline keyword])],
  [AC_SUBST(_INLINE_KEYWORD)
   AC_DEFINE_UNQUOTED(_INLINE_KEYWORD,
                      [/* no inline */],
		      [Define if C supports inline keyword])])

AS_IF([test "$ac_cv_c_inline" != no],
  [AC_DEFINE([HAVE_INLINE], [1], [Define if C supports inline keyword.])
   AC_SUBST(_INLINE_KEYWORD)
   AC_DEFINE_UNQUOTED(_INLINE_KEYWORD,
                      $ac_cv_c_inline,
		      [Define if C supports inline keyword])],
  [AC_SUBST(_INLINE_KEYWORD)
   AC_DEFINE_UNQUOTED(_INLINE_KEYWORD,
                      [/* no inline */],
		      [Define if C supports inline keyword])])

AC_C_RESTRICT
AS_IF([test "$ac_cv_c_restrict" != no],
  [AC_DEFINE([HAVE_RESTRICT], [1], [Define if C supports restrict.])
   AC_SUBST(_RESTRICT_KEYWORD)
   AC_DEFINE_UNQUOTED(_RESTRICT_KEYWORD,
                      $ac_cv_c_restrict,
		      [Define if C supports restrict keyword])],
  [AC_SUBST(_RESTRICT_KEYWORD)
   AC_DEFINE_UNQUOTED(_RESTRICT_KEYWORD,
                      [/* no restrict */],
		      [Define if C supports inline keyword])])

dnl get type size

AC_CHECK_SIZEOF(void *, 4)
AC_CHECK_SIZEOF(long,   4)
AC_CHECK_SIZEOF(size_t, 4)

MODEL=
AC_CACHE_CHECK([for 64-bit], [ac_cv_cc_64bit],
    [AC_RUN_IFELSE([AC_LANG_SOURCE(
                     [[int main() {
                        return (sizeof(void*) == 8) ? 0 : 1;
                      }]])],
		     [ac_cv_cc_64bit=yes],
		     [ac_cv_cc_64bit=no],
		     [ac_cv_cc_64bit=unknown])])
AS_IF([test "$ac_cv_cc_64bit" != no],
      [MODEL=64],
      [MODEL=32])
AC_SUBST(MODEL)

dnl Save cache

AC_CACHE_SAVE

AC_PROG_GCC_TRADITIONAL

AC_CHECK_FUNC([sigsetjmp],
              AC_DEFINE([HAVE_SIGSETJMP], [1], [Define if sigsetjmp exists.]))
AC_MSG_CHECKING(for sigsetjmp defined in setjmp.h)
AC_COMPILE_IFELSE([AC_LANG_PROGRAM(
                    [[#include <setjmp.h>]],
                    [[int main(int argc, char **argv) {
                       sigjmp_buf env;
                       exit(sigsetjmp(env,1));
                      }]])],
		  [AC_SUBST(HAVE_SIGSETJMP)
		   AC_MSG_RESULT(yes)],
		  [AC_MSG_RESULT(no)])

AC_FUNC_SELECT_ARGTYPES

dnl Checks for library functions.

AC_CHECK_FUNCS( \
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

AC_CHECK_FUNC([sigsetjmp],
              AC_DEFINE([HAVE_SIGSETJMP], [1], [Define if sigsetjmp exists.]))
AC_MSG_CHECKING(for sigsetjmp defined in setjmp.h)
AC_COMPILE_IFELSE([AC_LANG_PROGRAM(
                    [[#include <setjmp.h>]],
                    [[int main(int argc, char **argv) {
                       sigjmp_buf env;
                       exit(sigsetjmp(env,1));
                      }]])],
		  [AC_SUBST(HAVE_SIGSETJMP)
		   AC_MSG_RESULT(yes)],
		  [AC_MSG_RESULT(no)])

dnl Optimization and Warnings options

ARCH=""

dnl Local options

AEXT="a"
AROPTS="-q"

dnl gcc -nostdlib -Wl,--export-dynamic -Wl,-r

AS_CASE([${target_cpu}-${target_os}],
  [*cygwin*], [
    AX_CHECK_COMPILE_FLAG([-Wl,--export-all-symbols],
      [AS_VAR_APPEND([LDEXPORT], [" -Wl,--export-all-symbols"])])
  ],
  [*darwin*], [
    AX_CHECK_COMPILE_FLAG([-Wl,-export_dynamic],
      [AS_VAR_APPEND([LDEXPORT], [" -Wl,-export_dynamic"])])
    AX_CHECK_COMPILE_FLAG([-Wl,-no_pie],
      [AS_VAR_APPEND([LDEXPORT], [" -Wl,-no_pie"])])
  ],
  [*], [
    AX_CHECK_COMPILE_FLAG([-Wl,--export-dynamic],
      [AS_VAR_APPEND([LDEXPORT], [" -Wl,--export-dynamic"])])
  ])

AX_CHECK_COMPILE_FLAG([-Wl,-r -nostdlib],
                      [AS_VAR_APPEND([LDRFLAGS], [" -Wl,-r -nostdlib"])])

AX_CHECK_COMPILE_FLAG([-Wall],
                      [AS_VAR_APPEND([CFLAGS], [" -Wall"])])
AX_CHECK_COMPILE_FLAG([-Werror -Wstrict-prototypes],
                      [AS_VAR_APPEND([CFLAGS], [" -Wstrict-prototypes"])])
AX_CHECK_COMPILE_FLAG([-Werror -finline-functions],
                      [AS_VAR_APPEND([CFLAGS], [" -finline-functions"])])
AX_CHECK_COMPILE_FLAG([-Werror -fomit-frame-pointer],
                      [AS_VAR_APPEND([CFLAGS], [" -fomit-frame-pointer"])])
AX_CHECK_COMPILE_FLAG([-Werror -funroll-loops],
                      [AS_VAR_APPEND([CFLAGS], [" -funroll-loops"])])
AX_CHECK_COMPILE_FLAG([-Werror -fcommon],
                      [AS_VAR_APPEND([CFLAGS], [" -fcommon"])])

BUILDARGS="-f Makeport FLT=31 bootstrap"

AS_CASE([${target_cpu}-${target_os}],
  [*86*solaris*], [
     AS_IF([test "$TARGET" = "default"],
           [TARGET=solaris386])
  ],
  [*solaris*], [
     AS_IF([test "$TARGET" = "default"],
           [TARGET=solaris
            AS_VAR_APPEND([CFLAGS], [" -m32"])])
  ],
  [x86_64*linux*], [
     AS_IF([test "$TARGET" = "default"],
           [TARGET=linux
            AS_VAR_APPEND([CFLAGS], [" -m32"])])
  ],
  [*86*linux*], [
     AS_IF([test "$TARGET" = "default"],
           [TARGET=linux])
  ],
  [*aarch64*linux*], [
     TARGET=C
     AX_CHECK_COMPILE_FLAG([-Werror -mcpu=cortex-a72],
                           [AS_VAR_APPEND([CFLAGS], [" -mcpu=cortex-a72"])])
  ],
  [*armv7*linux*], [
     TARGET=C
     AX_CHECK_COMPILE_FLAG([-Werror -march=armv7-a],
                           [AS_VAR_APPEND([CFLAGS], [" -march=armv7-a"])])
     AX_CHECK_COMPILE_FLAG([-Werror -mfloat-abi=hard],
                           [AS_VAR_APPEND([CFLAGS], [" -mfloat-abi=hard"])])
  ],
  [*arm*linux*], [
     TARGET=C
  ],
  [sparc*linux*], [
     TARGET=linuxsparc
     AX_CHECK_COMPILE_FLAG([-Werror -Wl,--no-relax],
                           [AS_VAR_APPEND([LDRFLAGS], [" -Wl,--no-relax"])])
  ],
  [*x86_64*cygwin*], [
     TARGET=C
  ],
  [*amd64*netbsd*], [
     AS_IF([test "$TARGET" = "default"],
           [TARGET=netbsd])
  ],
  [*86*netbsd*], [
     AS_IF([test "$TARGET" = "default"],
           [TARGET=netbsd])
  ],
  [*darwin*], [
     AS_IF([test "$TARGET" = "default"],
           [AS_IF([test `uname -r | cut -d '.' -f 1` -lt 18],
	          [TARGET=x86macos],
		  [TARGET=C])])
  ],
  [i386*freebsd*], [
     AS_IF([test "$TARGET" = "default"],
           [TARGET=freebsd])
  ],
  [*cygwin*], [
     dnl X11 requires: xorg-server xproto libX11-devel
     TARGET=cygwin
  ],
  [powerpc*aix*], [
     AS_IF([test "$TARGET" = "default"],
           [TARGET=rs6000])
  ],
  [*], [
     TARGET=C
  ])

AS_IF([test "$TARGET" = "C"],
      [AS_IF([test x"$MODEL" = x64],
             [AS_VAR_APPEND([CFLAGS], [" -DLLC64BITS"])])])

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

AC_CONFIG_FILES([C/config],   [chmod +x C/config])
AC_CONFIG_FILES([C/complice], [chmod +x C/complice])

AC_CONFIG_FILES([Makefile C/Makeport C/Makefile llib/startup.ll])
AC_OUTPUT

dnl Ensure previoulsy generated .c files are most up to date for the bootstrap
touch C/C3/*.c

AS_ECHO("--------------------------------------------------------------------")
AS_ECHO("Configuration:")
AS_ECHO("")
AS_ECHO(" Name:          ${NAME}")
AS_ECHO(" Version:       ${VERSION}")
AS_ECHO(" Source:        ${srcdir}")
AS_ECHO(" OS:            ${target_os}")
AS_ECHO(" Target:        ${TARGET}")
AS_ECHO(" ARCH:          ${target_cpu}")
AS_ECHO(" Compiler:      ${CC} ${CCVERSION}")
AS_ECHO(" Flags:         ${CFLAGS} ${ARCH}")
AS_ECHO(" Libraries:     ${EXTRALIBS}")
AS_ECHO(" Build:         ${build}")
AS_ECHO(" Host:          ${host}")
AS_ECHO(" Target:        ${target}")
AS_ECHO(" Install:       ${prefix}")
AS_ECHO("")
AS_ECHO("See src/config.h for further configuration information.")
AS_ECHO("--------------------------------------------------------------------")
