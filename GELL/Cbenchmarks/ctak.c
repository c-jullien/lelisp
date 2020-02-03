/* GELL 15.26: source file for the module: "ctak" */
/*             translation done:           "Wed June 16 93 18:18:07 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "ctak.h" 

static Ptr GLctak_1() { /* check-ctak */
   {    register Ptr aRet, *rLit;
        rLit = GYctak;
        GIa2 = (Ptr) 7;
        GIa1 = rLit[0];
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLctak_2() { /* meter-ctak */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYctak; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLctak_3);
        (--rSp)->Val = rLit[2];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLctak_3() { /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (Ptr) 6;
        GIa2 = (Ptr) 12;
        GIa1 = (Ptr) 18;
        (--rSp)->Val = ((Ptr) GLctak_5);
        {aRet = ((Ptr) GLctak_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLctak_5() { /* call_ctak_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYctak; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[4];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLctak_7() { /* test-ctak */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLctak_8); goto lRet;}
        GIa3 = (Ptr) 6;
        GIa2 = (Ptr) 12;
        rA1 = (Ptr) 18;
        {aRet = ((Ptr) GLctak_6); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLctak_9() { /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa3 = (Ptr) 6;
        GIa2 = (Ptr) 12;
        rA1 = (Ptr) 18;
        (--rSp)->Val = ((Ptr) GLctak_11);
        {aRet = ((Ptr) GLctak_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLctak_11() {        /* call_ctak_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLctak_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLctak_8() { /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLctak_9); goto lRet;}}
        rA1 = GYctak[5];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLctak_6() { /* ctak */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GYctak[6];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLctak_13);
        {aRet = ((Ptr) GLctak_14); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLctak_13() {        /* call_ctak_12 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLctak_14() {        /* ctak-aux */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3;
        rLit = GYctak; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
l_GLctak_14:
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rA2 = rLit[6];
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLctak_15);
        (--rSp)->Val = rLit[6];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLctak_17);
        goto l_GLctak_14;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLctak_17() {        /* call_ctak_16 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLctak_15); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLctak_15() {        /* 103 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLctak_18);
        (--rSp)->Val = GYctak[6];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        rA4 = (rSp + 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 5)->Val;
        GIa2 = (rSp + 7)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLctak_20);
        {aRet = ((Ptr) GLctak_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLctak_20() {        /* call_ctak_19 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLctak_18); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLctak_18() {        /* 104 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLctak_21);
        (--rSp)->Val = GYctak[6];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        rA4 = (rSp + 8)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 7)->Val;
        GIa2 = (rSp + 6)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLctak_23);
        {aRet = ((Ptr) GLctak_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLctak_23() {        /* call_ctak_22 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLctak_21); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLctak_21() {        /* 105 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLctak_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GDctak_24() {        /* trace check-ctak */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYctak,8,9,10);
  lRet:  return (aRet);}}

static Ptr GDctak_25() {        /* trace meter-ctak */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYctak,11,9,10);
  lRet:  return (aRet);}}

static Ptr GDctak_26() {        /* trace test-ctak */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYctak,12,9,13);
  lRet:  return (aRet);}}

