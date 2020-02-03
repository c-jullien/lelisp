/* GELL 15.26: source file for the module: "llpboot" */
/*             translation done:           "Thu Jul   8 93 17:12:48 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "llpboot.h" 

static Ptr GLllpboot_1() {      /* setfn */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYllpboot; rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[0];
        (--rSp)->Val = ((Ptr) GLllpboot_3);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLllpboot_3() {      /* call_llpboot_2 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYllpboot; rSp = GIsp;
        GIa2 = rLit[2];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLllpboot_5);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLllpboot_5() {      /* call_llpboot_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYllpboot; rSp = GIsp;
        GIa2 = rLit[3]->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLllpboot_7);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLllpboot_7() {      /* call_llpboot_6 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYllpboot; rSp = GIsp;
        rLit[3]->Val = GIa1;
        GIa3 = (rSp + 2)->Val;
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLllpboot_8() {      /* #:llpatch:new-rmargin */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYllpboot; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 0)        goto l_101;
        rA4 = rNil;
        goto l_102;
l_101:
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
l_102:
        if (rA4 == rNil)        {aRet = ((Ptr) GLllpboot_9); goto lRet;}
        if (rLit[6]->Val == rNil)       {aRet = ((Ptr) GLllpboot_10); goto lRet;}
        if (rA4 >= GIbfloat)    {aRet = ((Ptr) GLllpboot_10); goto lRet;}
        if ((Fix) (rA4) < (Fix) 256)    {aRet = ((Ptr) GLllpboot_10); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = ((Ptr) GLllpboot_11);
        rA4 = (Ptr) 0;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLllpboot_11() {     /* 108 */
   {    register Ptr aRet, rA3;
        rA3 = GIa3;
        rA3 = (GIa1->Val + 1)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        (--GIsp)->Val = rA3;
        GIa4 = (Ptr) 1;
        {aRet = (GYllpboot[8] + 2)->Val; goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLllpboot_10() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = GIa4;
        GIa4 = (Ptr) 1;
        {aRet = (GYllpboot[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLllpboot_9() {      /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GXpopja4);
        GIa4 = (Ptr) 0;
        {aRet = (GYllpboot[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDllpboot_12() {     /* trace setfn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYllpboot,9,10,11);
  lRet:  return (aRet);}}

static Ptr GDllpboot_13() {     /* trace #:llpatch:new-rmargin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYllpboot,12,10,13);
  lRet:  return (aRet);}}

