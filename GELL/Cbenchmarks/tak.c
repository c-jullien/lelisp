/* GELL 15.26: source file for the module: "tak" */
/*             translation done:           "Wed June 16 93 18:18:05 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "tak.h" 

static Ptr GLtak_1() {  /* check-tak */
   {    register Ptr aRet, *rLit;
        rLit = GYtak;
        GIa2 = (Ptr) 7;
        GIa1 = rLit[0];
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtak_2() {  /* meter-tak */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtak; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtak_3);
        (--rSp)->Val = rLit[2];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtak_3() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (Ptr) 6;
        GIa2 = (Ptr) 12;
        GIa1 = (Ptr) 18;
        (--rSp)->Val = ((Ptr) GLtak_5);
        {aRet = ((Ptr) GLtak_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtak_5() {  /* call_tak_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtak; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[4];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtak_7() {  /* test-tak */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLtak_8); goto lRet;}
        GIa3 = (Ptr) 6;
        GIa2 = (Ptr) 12;
        rA1 = (Ptr) 18;
        {aRet = ((Ptr) GLtak_6); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLtak_9() {  /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa3 = (Ptr) 6;
        GIa2 = (Ptr) 12;
        rA1 = (Ptr) 18;
        (--rSp)->Val = ((Ptr) GLtak_11);
        {aRet = ((Ptr) GLtak_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtak_11() { /* call_tak_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLtak_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtak_8() {  /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLtak_9); goto lRet;}}
        rA1 = GYtak[5];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtak_6() {  /* tak */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
l_GLtak_6:
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtak_13);
        goto l_GLtak_6;
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtak_13() { /* call_tak_12 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtak_15);
        {aRet = ((Ptr) GLtak_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtak_15() { /* call_tak_14 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtak_17);
        {aRet = ((Ptr) GLtak_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtak_17() { /* call_tak_16 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtak_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GDtak_18() { /* trace check-tak */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtak,6,7,8);
  lRet:  return (aRet);}}

static Ptr GDtak_19() { /* trace meter-tak */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtak,9,7,8);
  lRet:  return (aRet);}}

static Ptr GDtak_20() { /* trace test-tak */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtak,10,7,11);
  lRet:  return (aRet);}}

