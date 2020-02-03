/* GELL 15.26: source file for the module: "gextmin" */
/*             translation done:           "Tue Aug  24 93 14:04:25 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "gextmin.h" 

static Ptr GLgextmin_1() {      /* (_cmoinsun) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgextmin; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[0];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgextmin_2() {      /* (ctest ABCdefghijkl 2.5 1234 (setq v #[(a b) 7777])) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgextmin; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[2];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDgextmin_3() {      /* trace (_cmoinsun) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgextmin,3,4,5);
  lRet:  return (aRet);}}

static Ptr GDgextmin_4() {      /* trace (ctest ABCdefghijkl 2.5 1234 (setq v #[(a b) 7777])) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgextmin,6,4,5);
  lRet:  return (aRet);}}

