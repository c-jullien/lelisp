#!/bin/sh

for I in macsol.ll lllinuxsparc.llm3 loader.l? lelisp31bin
do
  echo $I
  cp $I save
done

tar cvzf ./save/llas.tar.gz ./s31/*
