/* GELL 15.26: source file for the module: "stak" */
/*             translation done:           "Wed June 16 93 18:18:06 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "stak.h" 

static Ptr GLstak_1() { /* check-stak */
   {    register Ptr aRet, *rLit;
        rLit = GYstak;
        GIa2 = (Ptr) 7;
        GIa1 = rLit[0];
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstak_2() { /* meter-stak */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstak; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLstak_3);
        (--rSp)->Val = rLit[2];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstak_3() { /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (Ptr) 6;
        GIa2 = (Ptr) 12;
        GIa1 = (Ptr) 18;
        (--rSp)->Val = ((Ptr) GLstak_5);
        {aRet = ((Ptr) GLstak_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstak_5() { /* call_stak_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstak; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[4];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstak_7() { /* test-stak */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLstak_8); goto lRet;}
        GIa3 = (Ptr) 6;
        GIa2 = (Ptr) 12;
        rA1 = (Ptr) 18;
        {aRet = ((Ptr) GLstak_6); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLstak_9() { /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa3 = (Ptr) 6;
        GIa2 = (Ptr) 12;
        rA1 = (Ptr) 18;
        (--rSp)->Val = ((Ptr) GLstak_11);
        {aRet = ((Ptr) GLstak_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstak_11() {        /* call_stak_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLstak_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstak_8() { /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLstak_9); goto lRet;}}
        rA1 = GYstak[5];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstak_6() { /* stak */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstak; rSp = GIsp;
        (--rSp)->Val = rLit[6]->Val;
        rLit[6]->Val = GIa3;
        (--rSp)->Val = rLit[7]->Val;
        rLit[7]->Val = GIa2;
        (--rSp)->Val = rLit[8]->Val;
        rLit[8]->Val = GIa1;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = ((Ptr) GLstak_6);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstak_13);
        {aRet = ((Ptr) GLstak_14); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstak_13() {        /* call_stak_12 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstak; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[8]->Val = (rSp + 6)->Val;
        rLit[7]->Val = (rSp + 7)->Val;
        rLit[6]->Val = (rSp + 8)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstak_14() {        /* stak-aux */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYstak; rSp = GIsp; rA4 = GIa4;
l_GLstak_14:
        if ((Fix) (rLit[7]->Val) < (Fix) (rLit[8]->Val))        goto l_101;
        GIa1 = rLit[6]->Val;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA4 = rLit[8]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = rLit[7]->Val;
        (--rSp)->Val = rLit[6]->Val;
        (--rSp)->Val = rLit[8]->Val;
        rLit[8]->Val = rA4;
        (--rSp)->Val = rLit[6]->Val;
        rLit[6]->Val = (rSp + 2)->Val;
        (--rSp)->Val = rLit[7]->Val;
        rLit[7]->Val = (rSp + 4)->Val;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstak_16);
        goto l_GLstak_14;
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLstak_16() {        /* call_stak_15 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYstak; rSp = GIsp; rA4 = GIa4;
        GIdlink = (rSp + 1)->Val;
        rLit[7]->Val = (rSp + 6)->Val;
        rLit[6]->Val = (rSp + 7)->Val;
        rLit[8]->Val = (rSp + 8)->Val;
        rSp += (Fix) 11;
        (--rSp)->Val = GIa1;
        rA4 = rLit[7]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = rLit[6]->Val;
        (--rSp)->Val = rLit[8]->Val;
        (--rSp)->Val = rLit[8]->Val;
        rLit[8]->Val = rA4;
        (--rSp)->Val = rLit[6]->Val;
        rLit[6]->Val = (rSp + 2)->Val;
        (--rSp)->Val = rLit[7]->Val;
        rLit[7]->Val = (rSp + 4)->Val;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstak_18);
        {aRet = ((Ptr) GLstak_14); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLstak_18() {        /* call_stak_17 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYstak; rSp = GIsp; rA4 = GIa4;
        GIdlink = (rSp + 1)->Val;
        rLit[7]->Val = (rSp + 6)->Val;
        rLit[6]->Val = (rSp + 7)->Val;
        rLit[8]->Val = (rSp + 8)->Val;
        rSp += (Fix) 11;
        (--rSp)->Val = GIa1;
        rA4 = rLit[6]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = rLit[8]->Val;
        (--rSp)->Val = rLit[7]->Val;
        (--rSp)->Val = rLit[8]->Val;
        rLit[8]->Val = rA4;
        (--rSp)->Val = rLit[6]->Val;
        rLit[6]->Val = (rSp + 2)->Val;
        (--rSp)->Val = rLit[7]->Val;
        rLit[7]->Val = (rSp + 4)->Val;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[13];
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstak_20);
        {aRet = ((Ptr) GLstak_14); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLstak_20() {        /* call_stak_19 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstak; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[7]->Val = (rSp + 6)->Val;
        rLit[6]->Val = (rSp + 7)->Val;
        rLit[8]->Val = (rSp + 8)->Val;
        rSp += (Fix) 11;
        (--rSp)->Val = rLit[6]->Val;
        rLit[6]->Val = GIa1;
        (--rSp)->Val = rLit[7]->Val;
        rLit[7]->Val = (rSp + 2)->Val;
        (--rSp)->Val = rLit[8]->Val;
        rLit[8]->Val = (rSp + 4)->Val;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstak_22);
        {aRet = ((Ptr) GLstak_14); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstak_22() {        /* call_stak_21 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstak; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[8]->Val = (rSp + 6)->Val;
        rLit[7]->Val = (rSp + 7)->Val;
        rLit[6]->Val = (rSp + 8)->Val;
        rSp += (Fix) 11;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDstak_23() {        /* trace check-stak */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstak,15,16,17);
  lRet:  return (aRet);}}

static Ptr GDstak_24() {        /* trace meter-stak */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstak,18,16,17);
  lRet:  return (aRet);}}

static Ptr GDstak_25() {        /* trace test-stak */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstak,19,16,20);
  lRet:  return (aRet);}}

