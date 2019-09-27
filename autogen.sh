#! /bin/sh
# configure Le-Lisp
aclocal -I m4 --force || fail "aclocal"
autoconf -f || fail "autoconf"

