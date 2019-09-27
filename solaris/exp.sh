#!/bin/sh
./save/lelisp31bin -stack 12 -code 1500 -heap 256 -number 0 -vector 4 -string 5 -symbol 5 -cons 4 -float 0 <<EOF
(libloadfile "../lltool/llm3.ll" t)        ; de'finition des instructions LLM3
(libloadfile "../lltool/expand.ll" t)      ; expanseur des fichiers LLM3
(libloadfile "../lltool/macllm3.ll" t)     ; de'finition des macros LLM3
(loadfile "macsol.ll" t)                   ; de'finition des traductions
(loadfile "symval.ll" t)                   ; pour les ._
(setq #:expand:s-dir "./s31/")
(#:expand:expand-list-of-files (cons 'llsolaris #:llm3:files))
(end)
EOF
rm o31/*.o
rm lelisp31bin.o
make -f Makeport
make lelisp31bin
rm -f lelispbin
make lelispbin

