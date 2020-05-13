#! /bin/sh
# configure Le-Lisp
autoheader || fail "autoheader"
aclocal -I m4 --force || fail "aclocal"
autoconf -f || fail "autoconf"
