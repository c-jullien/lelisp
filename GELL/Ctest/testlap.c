/* GELL 15.26: source file for the module: "testlap" */
/*             translation done:           "Tue Mar   9 93 16:45:11 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "testlap.h" 

static Ptr GLtestlap_1() {      /* #:llcp:nlist */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = (rSp++)->Val;
        rA1 = GInil;
        goto l_4;
l_3:
        GIa2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (GIa2, rA1);
        rA1 = rA1;
l_4:
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_3;}
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_2() {      /* #:llcp:errwna */
   {    register Ptr aRet;
        GIa3 = GIa2;
        GIa2 = GYtestlap[0];
         GIa1 = llrt_call_error ();
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_3() {      /* foo-1-1 */
   {    register Ptr aRet;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_4() {      /* foo-1-2 */
   {    register Ptr aRet;
        GIa3 = GIa2;
        GIa4 = GIa3;
        GIa1 = GIa4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_5() {      /* foo-1-3 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[1];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_6() {      /* foo-1-4 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[2];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_7() {      /* foo-1-5 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[3];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_8() {      /* foo-1-6 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[4];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_9() {      /* foo-1-7 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[5];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_10() {     /* foo-1-8 */
   {    register Ptr aRet;
        GIa1 = GIa1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_11() {     /* foo-1-9 */
   {    register Ptr aRet;
        GIa1->Val = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_12() {     /* foo-1-10 */
   {    register Ptr aRet;
        GIa1 = (GIa1 + 1)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_13() {     /* foo-1-11 */
   {    register Ptr aRet;
        (GIa1 + 1)->Val = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_14() {     /* foo-1-12 */
   {    register Ptr aRet;
        GIa1 = (GIa1 + 1)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_15() {     /* foo-1-13 */
   {    register Ptr aRet;
        (GIa1 + 1)->Val = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_16() {     /* foo-1-14 */
   {    register Ptr aRet;
        GIa1 = (GIa1 + 2)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_17() {     /* foo-1-15 */
   {    register Ptr aRet;
        (GIa1 + 2)->Val = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_18() {     /* foo-1-16 */
   {    register Ptr aRet;
        GIa1 = (GIa1 + 3)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_19() {     /* foo-1-18 */
   {    register Ptr aRet;
        GIa1 = (GIa1 + 4)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_20() {     /* foo-1-19 */
   {    register Ptr aRet;
        (GIa1 + 4)->Val = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_21() {     /* foo-1-20 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[6];
        {aRet = ((Ptr) GLtestlap_22); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_23() {     /* 22 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[7];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_22() {     /* 11 */
   {    register Ptr aRet;
        GIa2 = ((Ptr) GLtestlap_23);
        {aRet = GIa2; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_24() {     /* foo-1-22 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[8]->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_25() {     /* foo-1-23 */
   {    register Ptr aRet;
        GYtestlap[8]->Val = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_26() {     /* foo-1-24 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[8]->Val;
        GYtestlap[8]->Val = (GIa1 + 1)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_27() {     /* foo-2-1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = GInil;
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_28() {     /* foo-2-2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp -= (Fix) 4;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 3;
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_29() {     /* foo-2-3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp -= (Fix) 100;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 99;
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_30() {     /* foo-2-4 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        GIa1 = GInil;
        rA4 = (Ptr) 2;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA4;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtestlap_31() {     /* foo-2-5 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = (Ptr) 9;
        {register Fix aux; aux = (Fix) ((rSp + 1)->Val); rSp += aux;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_32() {     /* foo-2-6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 2;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_33() {     /* foo-2-7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 1;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_34() {     /* foo-2-8 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 1;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_35() {     /* foo-2-9 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 2;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_36() {     /* foo-2-9b */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 2;
        {register Ptr aux;
                aux = (rSp++)->Val;
                (rSp + 1)->Val = aux;}
        GIa1 = (rSp++)->Val;
        GYtestlap[8]->Val = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_37() {     /* foo-2-10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GYtestlap[8]->Val;
        (--rSp)->Val = GIa1;
        GYtestlap[8]->Val = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_38() {     /* foo-2-11 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GYtestlap[9];
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_39() {     /* foo-2-12 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtestlap_40);
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_40() {     /* 20 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[9];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_41() {     /* foo-2-13 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = ((Ptr) GLtestlap_42);
        (--rSp)->Val = GIa2;
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_42() {     /* 20 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[9];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_43() {     /* foo-2-14 */
   {    register Ptr aRet;
        {aRet = ((Ptr) GLtestlap_44); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_45() {     /* 15 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[9];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_44() {     /* 25 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtestlap_45);
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_46() {     /* foo-2-15 */
   {    register Ptr aRet;
        {aRet = ((Ptr) GLtestlap_47); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_48() {     /* 15 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[9];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_47() {     /* 25 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = ((Ptr) GLtestlap_48);
        (--rSp)->Val = GIa2;
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_49() {     /* foo-2-18 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GInil;
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_50() {     /* foo-2-19 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (GYtestlap[10] + 2)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_51() {     /* foo-3-2 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_1000;
        rA1 = GYtestlap[11];
        { aRet = (rSp++)->Val; goto lRet;}
l_1000:
        if ((long) rA1 >= (long) GIbcons)       {aRet = ((Ptr) GLtestlap_52); goto lRet;}
        rA1 = GYtestlap[12];
        { aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_52() {     /* 1001 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[13];
l_1002:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_53() {     /* foo-3-3 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLtestlap_54); goto lRet;}
        if ((long) GIa1 < (long) GIbcons)       {aRet = ((Ptr) GLtestlap_55); goto lRet;}
        GIa1 = GYtestlap[13];
        { aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_54() {     /* 1003 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[11];
        { aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_55() {     /* 1004 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[12];
        { aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_56() {     /* foo-3-4 */
   {    register Ptr aRet, *rLit;
        rLit = GYtestlap;
        rLit[8]->Val = GIa1;
        if (rLit[8]->Val != GInil)      goto l_1005;
        {aRet = ((Ptr) GLtestlap_54); goto lRet;}
l_1005:
        if ((long) rLit[8]->Val < (long) GIbcons)       {aRet = ((Ptr) GLtestlap_55); goto lRet;}
        {aRet = ((Ptr) GLtestlap_52); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_57() {     /* foo-3-5 */
   {    register Ptr aRet, *rLit;
        rLit = GYtestlap;
        rLit[8]->Val = GIa1;
        if (rLit[8]->Val == GInil)      {aRet = ((Ptr) GLtestlap_54); goto lRet;}
        if ((long) rLit[8]->Val >= (long) GIbcons)      {aRet = ((Ptr) GLtestlap_52); goto lRet;}
        {aRet = ((Ptr) GLtestlap_55); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_58() {     /* foo-3-6 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if (rSp->Val == GInil)  goto l_10;
        if ((rSp + 1)->Val == GInil)    goto l_20;
        rA1 = (Ptr) 0;
l_30:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_10:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_59() {     /* foo-3-7 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if (rSp->Val != GInil)  goto l_10;
        if ((rSp + 1)->Val != GInil)    goto l_20;
        rA1 = (Ptr) 0;
l_30:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_10:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_60() {     /* foo-3-8 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if ((long) rSp->Val >= (long) GIbcons)  goto l_10;
        if ((long) (rSp + 1)->Val >= (long) GIbcons)    goto l_20;
        rA1 = (Ptr) 0;
l_30:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_10:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_61() {     /* foo-3-9 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_10;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     goto l_20;
        rA1 = (Ptr) 0;
l_30:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_10:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_62() {     /* foo-3-10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        { aRet = (rSp++)->Val; goto lRet;}
        GIa1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_63() {     /* foo-3-11 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        rA1 = (Ptr) 0;
        { aRet = (rSp++)->Val; goto lRet;}
        rA1 = rNil;
        { aRet = (rSp++)->Val; goto lRet;}
        rA1 = rNil;
        rA1 = rNil;
        { aRet = (rSp++)->Val; goto lRet;}
        rA1 = rNil;
        { aRet = (rSp++)->Val; goto lRet;}
        rA1 = rA1;
        { aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_64() {     /* foo-4-1 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GYtestlap[7])        goto l_1001;
        if (GIa2 == GYtestlap[7])       goto l_1002;
        if (rA1 != GIa2)        goto l_1003;
        rA1 = GInil;
        { aRet = (rSp++)->Val; goto lRet;}
l_1001:
        rA1 = (Ptr) 1;
        { aRet = (rSp++)->Val; goto lRet;}
l_1002:
        rA1 = (Ptr) 2;
        { aRet = (rSp++)->Val; goto lRet;}
l_1003:
        rA1 = (Ptr) 3;
l_1004:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_65() {     /* foo-4-2 */
   {    register Ptr aRet;
        if (GIa1 < GIbfloat)    {aRet = ((Ptr) GLtestlap_66); goto lRet;}
        {aRet = ((Ptr) GLtestlap_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_68() {     /* foo-4-3 */
   {    register Ptr aRet;
        if (GIa1 >= GIbfloat)   {aRet = ((Ptr) GLtestlap_67); goto lRet;}
        {aRet = ((Ptr) GLtestlap_66); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_66() {     /* 1005 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[7];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_67() {     /* 1006 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[6];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_69() {     /* foo-4-4 */
   {    register Ptr aRet;
        if (GIa1 == GYtestlap[8]->Val)  {aRet = ((Ptr) GLtestlap_66); goto lRet;}
        {aRet = ((Ptr) GLtestlap_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_70() {     /* foo-4-5 */
   {    register Ptr aRet;
        if (GIa1 == GYtestlap[14])      {aRet = ((Ptr) GLtestlap_66); goto lRet;}
        {aRet = ((Ptr) GLtestlap_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_71() {     /* foo-4-6 */
   {    register Ptr aRet, *rLit;
        rLit = GYtestlap;
        rLit[8]->Val = GIa1;
        rLit[15]->Val = GIa1;
        if (rLit[8]->Val == rLit[15]->Val)      {aRet = ((Ptr) GLtestlap_66); goto lRet;}
        {aRet = ((Ptr) GLtestlap_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_72() {     /* foo-4-7 */
   {    register Ptr aRet, *rLit;
        rLit = GYtestlap;
        rLit[8]->Val = GIa1;
        rLit[15]->Val = GIa2;
        if (rLit[8]->Val == rLit[15]->Val)      {aRet = ((Ptr) GLtestlap_66); goto lRet;}
        {aRet = ((Ptr) GLtestlap_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_73() {     /* foo-4-8 */
   {    register Ptr aRet, *rLit;
        rLit = GYtestlap;
        rLit[8]->Val = GIa1;
        rLit[15]->Val = GIa2;
        if (rLit[8]->Val != rLit[15]->Val)      {aRet = ((Ptr) GLtestlap_67); goto lRet;}
        {aRet = ((Ptr) GLtestlap_66); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_74() {     /* foo-4-9 */
   {    register Ptr aRet, *rLit;
        rLit = GYtestlap;
        rLit[8]->Val = GIa1;
        rLit[15]->Val = GIa1;
        if (rLit[8]->Val != rLit[15]->Val)      {aRet = ((Ptr) GLtestlap_67); goto lRet;}
        {aRet = ((Ptr) GLtestlap_66); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_75() {     /* foo-4-10 */
   {    register Ptr aRet;
        GYtestlap[8]->Val = GIa1;
        if (GIa2 == GYtestlap[8]->Val)  {aRet = ((Ptr) GLtestlap_66); goto lRet;}
        {aRet = ((Ptr) GLtestlap_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_76() {     /* foo-4-11 */
   {    register Ptr aRet;
        GYtestlap[8]->Val = GIa1;
        if (GYtestlap[8]->Val == GIa2)  {aRet = ((Ptr) GLtestlap_66); goto lRet;}
        {aRet = ((Ptr) GLtestlap_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_77() {     /* foo-4-12 */
   {    register Ptr aRet;
        GYtestlap[8]->Val = GIa1;
        if (GIa2 != GYtestlap[8]->Val)  {aRet = ((Ptr) GLtestlap_67); goto lRet;}
        {aRet = ((Ptr) GLtestlap_66); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_78() {     /* foo-4-13 */
   {    register Ptr aRet;
        GYtestlap[8]->Val = GIa1;
        if (GYtestlap[8]->Val != GIa2)  {aRet = ((Ptr) GLtestlap_67); goto lRet;}
        {aRet = ((Ptr) GLtestlap_66); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_79() {     /* foo-4-14 */
   {    register Ptr aRet;
        if (llrt_floatp (GIa1) != 0) 
        {aRet = ((Ptr) GLtestlap_66); goto lRet;}
        {aRet = ((Ptr) GLtestlap_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_80() {     /* foo-4-15 */
   {    register Ptr aRet;
        if (llrt_floatp (GIa1) == 0) 
        {aRet = ((Ptr) GLtestlap_67); goto lRet;}
        {aRet = ((Ptr) GLtestlap_66); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_81() {     /* foo-4-16 */
   {    register Ptr aRet;
        if ((GIa1 >= GIbstrg) && (GIa1 < GIbsymb))      {aRet = ((Ptr) GLtestlap_66); goto lRet;}
        {aRet = ((Ptr) GLtestlap_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_82() {     /* foo-4-17 */
   {    register Ptr aRet;
        if ((GIa1 < GIbstrg) || (GIa1 >= GIbsymb))      {aRet = ((Ptr) GLtestlap_67); goto lRet;}
        {aRet = ((Ptr) GLtestlap_66); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_83() {     /* foo-4-18 */
   {    register Ptr aRet;
        if ((GIa1 >= GIbsymb) && (GIa1 < GIbcons))      {aRet = ((Ptr) GLtestlap_66); goto lRet;}
        {aRet = ((Ptr) GLtestlap_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_84() {     /* foo-4-19 */
   {    register Ptr aRet;
        if ((GIa1 < GIbsymb) || (GIa1 >= GIbcons))      {aRet = ((Ptr) GLtestlap_67); goto lRet;}
        {aRet = ((Ptr) GLtestlap_66); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_85() {     /* foo-4-20 */
   {    register Ptr aRet;
        if ((GIa1 >= GIbvect) && (GIa1 < GIbstrg))      {aRet = ((Ptr) GLtestlap_66); goto lRet;}
        {aRet = ((Ptr) GLtestlap_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_86() {     /* foo-4-21 */
   {    register Ptr aRet;
        if ((GIa1 < GIbvect) || (GIa1 >= GIbstrg))      {aRet = ((Ptr) GLtestlap_67); goto lRet;}
        {aRet = ((Ptr) GLtestlap_66); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_87() {     /* foo-4-22 */
   {    register Ptr aRet;
        if ((GIa1 >= GIbvar) && (GIa1 < GIbcons))       {aRet = ((Ptr) GLtestlap_66); goto lRet;}
        {aRet = ((Ptr) GLtestlap_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_88() {     /* foo-4-23 */
   {    register Ptr aRet;
        if ((GIa1 < GIbvar) || (GIa1 >= GIbcons))       {aRet = ((Ptr) GLtestlap_67); goto lRet;}
        {aRet = ((Ptr) GLtestlap_66); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_89() {     /* foo-4-24 */
   {    register Ptr aRet;
        if (GYtestlap[16] == GYtestlap[16])     {aRet = ((Ptr) GLtestlap_66); goto lRet;}
        {aRet = ((Ptr) GLtestlap_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_90() {     /* foo-4-24-1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        if (rSp->Val == (rSp + 1)->Val) goto l_20;
        GIa1 = (Ptr) 0;
l_10:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        GIa1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_91() {     /* foo-4-25 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        if (rSp->Val != (rSp + 1)->Val) goto l_20;
        GIa1 = (Ptr) 0;
l_10:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        GIa1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_92() {     /* foo-4-26 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((Ptr) 12 == (rA1 + 1)->Val) goto l_10;
        if ((rA1 + 1)->Val == (Ptr) ((UFix) 0xfff4))    goto l_20;
        rA1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        rA1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        rA1 = (Ptr) ((UFix) 0xffff);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_93() {     /* foo-4-26-2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (Ptr) 1;
        if ((Ptr) 1 == (Ptr) ((UFix) 0xffff))   { aRet = (rSp++)->Val; goto lRet;}
        GIa1 = GInil;
l_10:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_94() {     /* foo-4-26-3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (Ptr) 1;
        if ((Ptr) ((UFix) 0xffff) == (Ptr) ((UFix) 0xffff))     { aRet = (rSp++)->Val; goto lRet;}
        GIa1 = GInil;
l_10:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_95() {     /* foo-4-27 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((Ptr) 12 != (rA1 + 1)->Val) goto l_10;
        rA1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        if ((rA1 + 1)->Val != (Ptr) ((UFix) 0xfff4))    goto l_20;
        rA1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        rA1 = (Ptr) ((UFix) 0xffff);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_96() {     /* foo-4-27-2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (Ptr) 1;
        if ((Ptr) 1 != (Ptr) ((UFix) 0xffff))   { aRet = (rSp++)->Val; goto lRet;}
        GIa1 = GInil;
l_10:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_97() {     /* foo-4-27-3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (Ptr) 1;
        if ((Ptr) ((UFix) 0xffff) != (Ptr) ((UFix) 0xffff))     { aRet = (rSp++)->Val; goto lRet;}
        GIa1 = GInil;
l_10:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_98() {     /* foo-4-28 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if (rSp->Val < GIbfloat)        goto l_20;
        rA1 = (Ptr) 0;
l_10:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        if ((rSp + 1)->Val < GIbfloat)  goto l_30;
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_30:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_99() {     /* foo-4-29 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if (rSp->Val >= GIbfloat)       goto l_20;
        rA1 = (Ptr) 0;
l_10:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        if ((rSp + 1)->Val >= GIbfloat) goto l_30;
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_30:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_100() {    /* foo-4-30 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rSp->Val) != 0) 
        goto l_20;
        rA1 = (Ptr) 0;
l_10:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        if (llrt_floatp ((rSp + 1)->Val) != 0) 
        goto l_30;
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_30:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_101() {    /* foo-4-31 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rSp->Val) == 0) 
        goto l_20;
        rA1 = (Ptr) 0;
l_10:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        if (llrt_floatp ((rSp + 1)->Val) == 0) 
        goto l_30;
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_30:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_102() {    /* foo-4-32 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if ((rSp->Val >= GIbsymb) && (rSp->Val < GIbcons))      goto l_20;
        rA1 = (Ptr) 0;
l_10:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        if (((rSp + 1)->Val >= GIbsymb) && ((rSp + 1)->Val < GIbcons))  goto l_30;
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_30:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_103() {    /* foo-4-33 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if ((rSp->Val < GIbsymb) || (rSp->Val >= GIbcons))      goto l_20;
        rA1 = (Ptr) 0;
l_10:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        if (((rSp + 1)->Val < GIbsymb) || ((rSp + 1)->Val >= GIbcons))  goto l_30;
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_30:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_104() {    /* foo-4-34 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if ((rSp->Val >= GIbstrg) && (rSp->Val < GIbsymb))      goto l_20;
        rA1 = (Ptr) 0;
l_10:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        if (((rSp + 1)->Val >= GIbstrg) && ((rSp + 1)->Val < GIbsymb))  goto l_30;
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_30:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_105() {    /* foo-4-35 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if ((rSp->Val < GIbstrg) || (rSp->Val >= GIbsymb))      goto l_20;
        rA1 = (Ptr) 0;
l_10:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        if (((rSp + 1)->Val < GIbstrg) || ((rSp + 1)->Val >= GIbsymb))  goto l_30;
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_30:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_106() {    /* foo-4-36 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if ((rSp->Val >= GIbvect) && (rSp->Val < GIbstrg))      goto l_20;
        rA1 = (Ptr) 0;
l_10:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        if (((rSp + 1)->Val >= GIbvect) && ((rSp + 1)->Val < GIbstrg))  goto l_30;
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_30:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_107() {    /* foo-4-37 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if ((rSp->Val < GIbvect) || (rSp->Val >= GIbstrg))      goto l_20;
        rA1 = (Ptr) 0;
l_10:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        if (((rSp + 1)->Val < GIbvect) || ((rSp + 1)->Val >= GIbstrg))  goto l_30;
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_30:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_108() {    /* foo-4-38 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if ((rSp->Val >= GIbvar) && (rSp->Val < GIbcons))       goto l_20;
        rA1 = (Ptr) 0;
l_10:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        if (((rSp + 1)->Val >= GIbvar) && ((rSp + 1)->Val < GIbcons))   goto l_30;
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_30:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_109() {    /* foo-4-39 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if ((rSp->Val < GIbvar) || (rSp->Val >= GIbcons))       goto l_20;
        rA1 = (Ptr) 0;
l_10:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_20:
        if (((rSp + 1)->Val < GIbvar) || ((rSp + 1)->Val >= GIbcons))   goto l_30;
        rA1 = (Ptr) 1;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_30:
        rA1 = (Ptr) 2;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_110() {    /* foo-4-40 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (llrt_floatp (GIa2) == 0) 
        goto l_10;
        GIa1 = GIa2;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_111() {    /* foo-4-41 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (llrt_floatp (GIa3) == 0) 
        goto l_10;
        GIa1 = GIa3;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_112() {    /* foo-4-42 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (llrt_floatp (GIa2) != 0) 
        goto l_10;
        GIa1 = GIa2;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_113() {    /* foo-4-43 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (llrt_floatp (GIa3) != 0) 
        goto l_10;
        GIa1 = GIa3;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_114() {    /* foo-5-1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (rSp++)->Val;
        if (GIa1 == GIa2)       { aRet = (rSp++)->Val; goto lRet;}
        GIa1 = GInil;
l_10:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_115() {    /* foo-5-2 */
   {    register Ptr aRet;
         GIa1 = llrt_cons (GIa1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_116() {    /* foo-5-3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GYtestlap[6])       { aRet = (rSp++)->Val; goto lRet;}
        GIa1 = GYtestlap[7];
l_2001:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_117() {    /* foo-5-4 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLtestlap_116);
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_118() {    /* foo-5-5 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtestlap_119);
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtestlap_120);
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtestlap[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_120() {    /* 1001 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYtestlap[17] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_119() {    /* 1002 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        GIa2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_121() {    /* foo-5-6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtestlap_119);
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtestlap_120);
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtestlap[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_122() {    /* dlq2 */
   {    register Ptr aRet, rSp, rA2, rA3;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
l_GLtestlap_122:
        if (rA2 != GInil)       goto l_1010;
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
l_1010:
        rA3 = rA2->Val;
        if (rA3 != GIa1)        goto l_1011;
        rA2 = (rA2 + 1)->Val;
        {aRet = (GYtestlap[18] + 2)->Val; goto lRet;}
l_1011:
        (--rSp)->Val = rA3;
        rA2 = (rA2 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtestlap_124);
        goto l_GLtestlap_122;
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestlap_124() {    /* call_testlap_123 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_125() {    /* foo-6-1 */
   {    register Ptr aRet;
        (GIa2->Val + 2 + (Fix) (GIa3))->Val = GIa1;
        GIa1 = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_126() {    /* foo-6-2 */
   {    register Ptr aRet;
        GIa3 = (GIa1->Val + 2 + (Fix) (GIa2))->Val;
        GIa1 = GIa3;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_127() {    /* foo-6-3 */
   {    register Ptr aRet;
        (GIa2->Val + 2 + (Fix) 1)->Val = GIa1;
        GIa1 = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_128() {    /* foo-6-4 */
   {    register Ptr aRet;
        GIa3 = (GIa1->Val + 2 + (Fix) 1)->Val;
        GIa1 = GIa3;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_129() {    /* foo-6-5 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa3;
        ((rSp + 1)->Val->Val + 2 + (Fix) (rSp->Val))->Val = (rSp + 2)->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_130() {    /* foo-6-6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa3;
        rSp->Val = ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_131() {    /* foo-6-7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        (rSp->Val->Val + 2 + (Fix) 1)->Val = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_132() {    /* foo-6-8 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        rSp->Val = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_133() {    /* foo-6-9 */
   {    register Ptr aRet;
        (GIa2->Val + 2 + (Fix) 52)->Val = GIa1;
        GIa1 = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_134() {    /* foo-6-10 */
   {    register Ptr aRet;
        GIa3 = (GIa1->Val + 2 + (Fix) 52)->Val;
        GIa1 = GIa3;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_135() {    /* foo-6-11 */
   {    register Ptr aRet;
        (GIa2->Val + 2 + (Fix) 16377)->Val = GIa1;
        GIa1 = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_136() {    /* foo-6-12 */
   {    register Ptr aRet;
        GIa3 = (GIa1->Val + 2 + (Fix) 16377)->Val;
        GIa1 = GIa3;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_137() {    /* foo-6-13 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 16377;
        GIa3 = (GIa1->Val + 2 + (Fix) (GIa2))->Val;
        GIa1 = GIa3;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_138() {    /* foo-7-1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 0;
        (rSp + (Fix) 2)->Val = GIa1;
        GIa3 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_139() {    /* foo-7-2 */
   {    register Ptr aRet, *rLit, rSp, rA3;
        rLit = GYtestlap; rSp = GIsp; rA3 = GIa3;
        (--rSp)->Val = rLit[19];
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[20];
        (--rSp)->Val = rLit[21];
        (--rSp)->Val = rLit[22];
        GIa2 = rLit[23];
        GIa2 = (rSp + (Fix) 3)->Val;
        rA3 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        GIa1 = GIa2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLtestlap_140() {    /* foo-7-3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 0;
        (rSp + (Fix) ((rSp + 2)->Val))->Val = GIa1;
        GIa3 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_141() {    /* foo-7-4 */
   {    register Ptr aRet, *rLit, rSp, rA3;
        rLit = GYtestlap; rSp = GIsp; rA3 = GIa3;
        (--rSp)->Val = rLit[19];
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[20];
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[22];
        GIa2 = rLit[23];
        GIa2 = (rSp + (Fix) ((rSp + 1)->Val))->Val;
        rA3 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        GIa1 = GIa2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLtestlap_142() {    /* foo-7-5 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        (rSp + (Fix) (GIa4))->Val = GIa1;
        GIa3 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_143() {    /* foo-7-6 */
   {    register Ptr aRet, *rLit, rSp, rA3;
        rLit = GYtestlap; rSp = GIsp; rA3 = GIa3;
        (--rSp)->Val = rLit[19];
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[20];
        (--rSp)->Val = rLit[21];
        (--rSp)->Val = rLit[22];
        GIa2 = rLit[23];
        rA3 = (Ptr) 3;
        GIa2 = (rSp + (Fix) (rA3))->Val;
        rA3 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        GIa1 = GIa2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLtestlap_144() {    /* foo-8-2 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) + (Fix) (1)));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_145() {    /* foo-8-3 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) + (Fix) (GIa2)));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_146() {    /* foo-8-4 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) + (Fix) 6));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_147() {    /* foo-8-5 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) + (Fix) -1006));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_148() {    /* foo-8-6 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) + (Fix) 8));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_149() {    /* foo-8-7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) + (Fix) ((rSp + 1)->Val)));
        GIa1 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_150() {    /* foo-8-8 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) + (Fix) 6));
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_151() {    /* foo-8-9 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) + (Fix) -1006));
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_152() {    /* foo-8-10 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) + (Fix) (GYtestlap[8]->Val)));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_153() {    /* foo-8-11 */
   {    register Ptr aRet, *rLit;
        rLit = GYtestlap;
        rLit[8]->Val = (Ptr) ((UFix) ((Fix) (rLit[8]->Val) + (Fix) 8));
        GIa1 = rLit[8]->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_154() {    /* foo-8-12 */
   {    register Ptr aRet;
         GIa1 = llrt_fadd (GIa1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_155() {    /* foo-8-13 */
   {    register Ptr aRet;
         GIa1 = llrt_fadd (GIa1, GYtestlap[24]);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_156() {    /* foo-8-14 */
   {    register Ptr aRet;
         GIa1 = llrt_fadd (GIa1, GYtestlap[25]);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_157() {    /* foo-8-15 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIsp = rSp; rSp->Val = llrt_fadd (rSp->Val, (rSp + 1)->Val);
        GIa1 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_158() {    /* foo-8-16 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIsp = rSp; rSp->Val = llrt_fadd (rSp->Val, GYtestlap[24]);
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_159() {    /* foo-8-17 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIsp = rSp; rSp->Val = llrt_fadd (rSp->Val, GYtestlap[25]);
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_160() {    /* foo-8-18 */
   {    register Ptr aRet;
         GIa1 = llrt_fadd (GIa1, GYtestlap[8]->Val);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_161() {    /* foo-8-19 */
   {    register Ptr aRet, *rLit;
        rLit = GYtestlap;
         rLit[8]->Val = llrt_fadd (rLit[8]->Val, rLit[26]);
        GIa1 = rLit[8]->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_162() {    /* foo-8-20 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        GIa2 = rA2; rA2 = llrt_fadd (rA2, GIa1);
        GIa2 = rA2; rA2 = llrt_fadd (rA2, GIa1);
        GIa1 = rA2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLtestlap_163() {    /* foo-8-21 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        rA2 = GIa1;
        GIa2 = rA2; rA2 = llrt_fadd (rA2, GYtestlap[8]->Val);
        GIa2 = rA2; rA2 = llrt_fadd (rA2, GIa1);
        GIa1 = rA2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLtestlap_164() {    /* foo-9-2 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) - (Fix) (1)));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_165() {    /* foo-9-3 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) - (Fix) (GIa2)));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_166() {    /* foo-9-4 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) - (Fix) 6));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_167() {    /* foo-9-5 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) - (Fix) -1006));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_168() {    /* foo-9-7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) - (Fix) ((rSp + 1)->Val)));
        GIa1 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_169() {    /* foo-9-8 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) - (Fix) 6));
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_170() {    /* foo-9-9 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) - (Fix) -1006));
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_171() {    /* foo-9-10 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) - (Fix) (GYtestlap[8]->Val)));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_172() {    /* foo-9-11 */
   {    register Ptr aRet, *rLit;
        rLit = GYtestlap;
        rLit[8]->Val = (Ptr) ((UFix) ((Fix) (rLit[8]->Val) - (Fix) 8));
        GIa1 = rLit[8]->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_173() {    /* foo-9-12 */
   {    register Ptr aRet;
         GIa1 = llrt_fsub (GIa1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_174() {    /* foo-9-13 */
   {    register Ptr aRet;
         GIa1 = llrt_fsub (GIa1, GYtestlap[24]);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_175() {    /* foo-9-14 */
   {    register Ptr aRet;
         GIa1 = llrt_fsub (GIa1, GYtestlap[25]);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_176() {    /* foo-9-15 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIsp = rSp; rSp->Val = llrt_fsub (rSp->Val, (rSp + 1)->Val);
        GIa1 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_177() {    /* foo-9-16 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIsp = rSp; rSp->Val = llrt_fsub (rSp->Val, GYtestlap[24]);
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_178() {    /* foo-9-17 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIsp = rSp; rSp->Val = llrt_fsub (rSp->Val, GYtestlap[25]);
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_179() {    /* foo-9-18 */
   {    register Ptr aRet;
         GIa1 = llrt_fsub (GIa1, GYtestlap[8]->Val);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_180() {    /* foo-9-19 */
   {    register Ptr aRet, *rLit;
        rLit = GYtestlap;
         rLit[8]->Val = llrt_fsub (rLit[8]->Val, rLit[26]);
        GIa1 = rLit[8]->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_181() {    /* foo-9-20 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        GIa2 = rA2; rA2 = llrt_fsub (rA2, GIa1);
        GIa2 = rA2; rA2 = llrt_fsub (rA2, GIa1);
        GIa1 = rA2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLtestlap_182() {    /* foo-9-21 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        rA2 = GIa1;
        GIa2 = rA2; rA2 = llrt_fsub (rA2, GYtestlap[8]->Val);
        GIa2 = rA2; rA2 = llrt_fsub (rA2, GIa1);
        GIa1 = rA2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLtestlap_183() {    /* foo-10-1 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (0) - (Fix) (GIa1)));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_184() {    /* foo-10-2 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa2;
        rSp->Val = (Ptr) ((UFix) ((Fix) (0) - (Fix) (rSp->Val)));
        (rSp + 1)->Val = (Ptr) ((UFix) ((Fix) (0) - (Fix) ((rSp + 1)->Val)));
        rA1 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (GIa2)));
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_185() {    /* foo-10-3 */
   {    register Ptr aRet, *rLit;
        rLit = GYtestlap;
        rLit[8]->Val = (Ptr) ((UFix) ((Fix) (0) - (Fix) (rLit[8]->Val)));
        GIa1 = rLit[8]->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_186() {    /* foo-10-4 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) * (Fix) (GIa2)));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_187() {    /* foo-10-5 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) * (Fix) 10));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_188() {    /* foo-10-6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) * (Fix) ((rSp + 1)->Val)));
        GIa1 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_189() {    /* foo-10-7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) * (Fix) -10));
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_190() {    /* foo-10-7-b */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) * (Fix) 8));
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_191() {    /* foo-10-7-c */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) * (Fix) -16));
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_192() {    /* foo-10-8 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) / (Fix) (GIa2)));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_193() {    /* foo-10-9 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) / (Fix) 12));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_194() {    /* foo-10-9-b */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) / (Fix) 32));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_195() {    /* foo-10-9-c */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) / (Fix) -32));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_196() {    /* foo-10-9-d */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) / (Fix) 128));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_197() {    /* foo-10-9-e */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) / (Fix) -128));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_198() {    /* foo-10-9-f */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) / (Fix) 1));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_199() {    /* foo-10-9-g */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) / (Fix) -1));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_200() {    /* foo-10-10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) / (Fix) ((rSp + 1)->Val)));
        GIa1 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_201() {    /* foo-10-11 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) / (Fix) -12));
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_202() {    /* foo-10-12 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) % (Fix) (GIa2)));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_203() {    /* foo-10-13 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) % (Fix) 12));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_204() {    /* foo-10-14 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) % (Fix) ((rSp + 1)->Val)));
        GIa1 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_205() {    /* foo-10-15 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) ((Fix) (rSp->Val) % (Fix) -12));
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_206() {    /* foo-10-16 */
   {    register Ptr aRet;
         GIa1 = llrt_fmul (GIa1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_207() {    /* foo-10-17 */
   {    register Ptr aRet;
         GIa1 = llrt_fmul (GIa1, GYtestlap[27]);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_208() {    /* foo-10-18 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIsp = rSp; rSp->Val = llrt_fmul (rSp->Val, (rSp + 1)->Val);
        GIa1 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_209() {    /* foo-10-19 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIsp = rSp; rSp->Val = llrt_fmul (rSp->Val, GYtestlap[28]);
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_210() {    /* foo-10-20 */
   {    register Ptr aRet;
         GIa1 = llrt_fdiv (GIa1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_211() {    /* foo-10-21 */
   {    register Ptr aRet;
         GIa1 = llrt_fdiv (GIa1, GYtestlap[29]);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_212() {    /* foo-10-22 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIsp = rSp; rSp->Val = llrt_fdiv (rSp->Val, (rSp + 1)->Val);
        GIa1 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_213() {    /* foo-10-23 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIsp = rSp; rSp->Val = llrt_fdiv (rSp->Val, GYtestlap[30]);
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_214() {    /* foo-11-1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (Ptr) 1;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_215() {    /* foo-11-2 */
   {    register Ptr aRet, rA1, rA2;
        rA1 = GIa1; rA2 = GIa2;
        rA2 = (Ptr) 1;
        goto l_20;
l_10:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (1)));
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) * (Fix) (rA1)));
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (1)));
l_20:
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_10;}
        rA1 = rA2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtestlap_216() {    /* foo-11-3 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA1;
        rA2 = (Ptr) 1;
        goto l_20;
l_10:
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) * (Fix) (rA1)));
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (1)));
l_20:
        {register Fix aux;
                aux = (Fix) (rSp->Val) - 1;
                rSp->Val = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_10;}
        rA1 = rA2;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtestlap_217() {    /* foo-11-4 */
   {    register Ptr aRet, *rLit, rA1, rA2;
        rLit = GYtestlap; rA1 = GIa1; rA2 = GIa2;
        rLit[8]->Val = rA1;
        rA2 = (Ptr) 1;
        goto l_20;
l_10:
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) * (Fix) (rA1)));
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (1)));
l_20:
        {register Fix aux;
                aux = (Fix) (rLit[8]->Val) - 1;
                rLit[8]->Val = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_10;}
        rA1 = rA2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtestlap_218() {    /* foo-12 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLtestlap_220);
        {aRet = ((Ptr) GLtestlap_221); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_220() {    /* call_testlap_219 */
   {    register Ptr aRet;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_221() {    /* foo-12-1 */
   {    register Ptr aRet;
        {aRet = ((Ptr) GLtestlap_222); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_223() {    /* foo-12-4 */
   {    register Ptr aRet;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_224() {    /* foo-12-3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((long) GIa1 < (long) GIbcons)       { aRet = (rSp++)->Val; goto lRet;}
        GIa1 = (GIa1 + 1)->Val;
l_1001:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_222() {    /* foo-12-2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtestlap_226);
        {aRet = ((Ptr) GLtestlap_224); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_226() {    /* call_testlap_225 */
   {    register Ptr aRet;
        GIa2 = (GIsp++)->Val;
         GIa1 = llrt_cons (GIa1, GIa2);
        {aRet = ((Ptr) GLtestlap_223); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_227() {    /* foo-12-6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtestlap_228);
        (--rSp)->Val = ((Ptr) GLtestlap_229);
        GIa2 = ((Ptr) GLtestlap_229);
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtestlap_229);
        {aRet = ((Ptr) GLtestlap_229); goto lRet;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_229() {    /* foo-12-7 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) + (Fix) 1));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_228() {    /* foo-12-88 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtestlap_229);
        GIa2 = ((Ptr) GLtestlap_229);
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtestlap_229);
        {aRet = ((Ptr) GLtestlap_229); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_230() {    /* foo-12-8 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLtestlap_232);
        {aRet = ((Ptr) GLtestlap_233); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_232() {    /* call_testlap_231 */
   {    register Ptr aRet;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_233() {    /* foo-12-9 */
   {    register Ptr aRet;
        {aRet = ((Ptr) GLtestlap_234); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_235() {    /* foo-12-12 */
   {    register Ptr aRet;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_236() {    /* foo-12-11 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((long) GIa1 < (long) GIbcons)       { aRet = (rSp++)->Val; goto lRet;}
        GIa1 = (GIa1 + 1)->Val;
l_1001:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_234() {    /* foo-12-10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtestlap_238);
        {aRet = ((Ptr) GLtestlap_236); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_238() {    /* call_testlap_237 */
   {    register Ptr aRet;
        GIa2 = (GIsp++)->Val;
         GIa1 = llrt_cons (GIa1, GIa2);
        {aRet = ((Ptr) GLtestlap_235); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_239() {    /* foo-12-13 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtestlap; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtestlap_240);
        (--rSp)->Val = (rLit[31] + 2)->Val;
        GIa2 = (rLit[31] + 2)->Val;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = (rLit[31] + 2)->Val;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_240() {    /* foo-12-14-1 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtestlap; rSp = GIsp;
        (--rSp)->Val = (rLit[31] + 2)->Val;
        GIa2 = (rLit[31] + 2)->Val;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = (rLit[31] + 2)->Val;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_241() {    /* toto1 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_242() {    /* foo-12-14 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 0;
        {aRet = ((Ptr) GLtestlap_241); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_243() {    /* toto */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_244() {    /* foo-12-15 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 0;
        {aRet = ((Ptr) GLtestlap_243); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_245() {    /* foo-13-1 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1;
        GIa2 = ((Ptr) GXpopj0);
        {aRet = GIa2; goto lRet;}
        GIa1 = (Ptr) 0;
l_20:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_246() {    /* foo-13-2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 1;
        rSp->Val = ((Ptr) GXpopj1);
        {aRet = rSp->Val; goto lRet;}
        GIa1 = (Ptr) 0;
l_20:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_247() {    /* foo-13-3 */
   {    register Ptr aRet;
        {aRet = ((Ptr) GLtestlap_248); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_249() {    /* 10 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[32];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_250() {    /* 11 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[33];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_248() {    /* 20 */
   {    register Ptr aRet;
        {aRet = (Ptr) (brx_testlap_251[(int) (GIa1)]); goto lRet;}
        GIa1 = GYtestlap[34];
l_12:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_252() {    /* 13 */
   {    register Ptr aRet;
        GIa1 = GYtestlap[35];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_253() {    /* foo-13-4 */
   {    register Ptr aRet;
        {aRet = ((Ptr) GLtestlap_254); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_255() {    /* 10 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 123;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_254() {    /* 20 */
   {    register Ptr aRet;
        {aRet = (Ptr) (brx_testlap_256[(int) ((GIa1 + 1)->Val)]); goto lRet;}
        GIa1 = (Ptr) 456;
l_40:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_257() {    /* 30 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 789;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_258() {    /* foo-13-5 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) 0xffff);
        {aRet = (Ptr) (brx_testlap_259[(int) (GIa1)]); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_260() {    /* 0 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_261); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_261() {    /* 1 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_262); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_262() {    /* 2 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_263); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_263() {    /* 3 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_264); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_264() {    /* 4 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_265); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_265() {    /* 5 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_266); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_266() {    /* 6 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_267); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_267() {    /* 7 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_268); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_268() {    /* 8 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_269); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_269() {    /* 9 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_270); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_270() {    /* 10 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_271); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_271() {    /* 11 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_272); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_272() {    /* 12 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_273); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_273() {    /* 13 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_274); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_274() {    /* 14 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_275); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_275() {    /* 15 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_276); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_276() {    /* 16 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_277); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_277() {    /* 17 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_278); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_278() {    /* 18 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_279); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_279() {    /* 19 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_280); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_280() {    /* 20 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_281); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_281() {    /* 21 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_282); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_282() {    /* 22 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_283); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_283() {    /* 23 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_284); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_284() {    /* 24 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_285); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_285() {    /* 25 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_286); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_286() {    /* 26 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_287); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_287() {    /* 27 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_288); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_288() {    /* 28 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_289); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_289() {    /* 29 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_290); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_290() {    /* 30 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_291); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_291() {    /* 31 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_292); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_292() {    /* 32 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_293); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_293() {    /* 33 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_294); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_294() {    /* 34 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_295); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_295() {    /* 35 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_296); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_296() {    /* 36 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_297); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_297() {    /* 37 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_298); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_298() {    /* 38 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_299); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_299() {    /* 39 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_300); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_300() {    /* 40 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_301); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_301() {    /* 41 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_302); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_302() {    /* 42 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_303); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_303() {    /* 43 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_304); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_304() {    /* 44 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_305); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_305() {    /* 45 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_306); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_306() {    /* 46 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_307); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_307() {    /* 47 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_308); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_308() {    /* 48 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_309); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_309() {    /* 49 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_310); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_310() {    /* 50 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_311); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_311() {    /* 51 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_312); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_312() {    /* 52 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_313); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_313() {    /* 53 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_314); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_314() {    /* 54 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_315); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_315() {    /* 55 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_316); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_316() {    /* 56 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_317); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_317() {    /* 57 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_318); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_318() {    /* 58 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_319); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_319() {    /* 59 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_320); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_320() {    /* 60 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_321); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_321() {    /* 61 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_322); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_322() {    /* 62 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_323); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_323() {    /* 63 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_324); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_324() {    /* 64 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_325); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_325() {    /* 65 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_326); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_326() {    /* 66 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_327); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_327() {    /* 67 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_328); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_328() {    /* 68 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_329); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_329() {    /* 69 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_330); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_330() {    /* 70 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_331); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_331() {    /* 71 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_332); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_332() {    /* 72 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_333); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_333() {    /* 73 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_334); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_334() {    /* 74 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_335); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_335() {    /* 75 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_336); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_336() {    /* 76 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_337); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_337() {    /* 77 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_338); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_338() {    /* 78 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_339); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_339() {    /* 79 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_340); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_340() {    /* 80 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_341); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_341() {    /* 81 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_342); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_342() {    /* 82 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_343); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_343() {    /* 83 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_344); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_344() {    /* 84 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_345); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_345() {    /* 85 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_346); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_346() {    /* 86 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_347); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_347() {    /* 87 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_348); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_348() {    /* 88 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_349); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_349() {    /* 89 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_350); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_350() {    /* 90 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_351); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_351() {    /* 91 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_352); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_352() {    /* 92 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_353); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_353() {    /* 93 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_354); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_354() {    /* 94 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_355); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_355() {    /* 95 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_356); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_356() {    /* 96 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_357); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_357() {    /* 97 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_358); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_358() {    /* 98 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_359); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_359() {    /* 99 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_360); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_360() {    /* 100 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_361); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_361() {    /* 101 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_362); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_362() {    /* 102 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_363); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_363() {    /* 103 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_364); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_364() {    /* 104 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_365); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_365() {    /* 105 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_366); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_366() {    /* 106 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_367); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_367() {    /* 107 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_368); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_368() {    /* 108 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_369); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_369() {    /* 109 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_370); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_370() {    /* 110 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_371); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_371() {    /* 111 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_372); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_372() {    /* 112 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_373); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_373() {    /* 113 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_374); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_374() {    /* 114 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_375); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_375() {    /* 115 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_376); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_376() {    /* 116 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_377); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_377() {    /* 117 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_378); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_378() {    /* 118 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_379); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_379() {    /* 119 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_380); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_380() {    /* 120 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_381); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_381() {    /* 121 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_382); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_382() {    /* 122 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_383); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_383() {    /* 123 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_384); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_384() {    /* 124 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_385); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_385() {    /* 125 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_386); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_386() {    /* 126 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_387); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_387() {    /* 127 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_388); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_388() {    /* 128 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_389); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_389() {    /* 129 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        {aRet = ((Ptr) GLtestlap_390); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_390() {    /* 130 */
   {    register Ptr aRet;
        GIa2 = (Ptr) ((UFix) ((Fix) (GIa2) + (Fix) 1));
        GIa1 = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_391() {    /* foo-14-1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        GIa4 = rSp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa1;
        rSp -= (Fix) 100;
        GIa2 = (rSp++)->Val;
        rSp = GIa4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_392() {    /* foo-14-2 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rSp->Val = rSp;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA1;
        rA1 = GInil;
        rSp = (rSp + 2)->Val;
        GIa2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_393() {    /* foo-15-1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GIa2)       goto l_10;
        GIa1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_394() {    /* foo-15-2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        if ((rSp + 1)->Val == rSp->Val) goto l_10;
        GIa1 = (Ptr) 0;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_395() {    /* foo-15-3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYtestlap[8]->Val = GIa1;
        if ((Ptr) 0 == GYtestlap[8]->Val)       goto l_10;
        GIa1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_396() {    /* foo-15-4 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == (Ptr) ((UFix) 0xfff8))      goto l_10;
        GIa1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_397() {    /* foo-15-5 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        if (GIa2 != rSp->Val)   goto l_10;
        GIa1 = (Ptr) 0;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_398() {    /* foo-15-6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        if ((Fix) (GIa1) < (Fix) (rSp->Val))    goto l_10;
        GIa1 = (Ptr) 0;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_399() {    /* foo-15-7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        if ((Fix) (GIa1) <= (Fix) (rSp->Val))   goto l_10;
        GIa1 = (Ptr) 0;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_400() {    /* foo-15-8 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        if ((Fix) (GIa1) > (Fix) (rSp->Val))    goto l_10;
        GIa1 = (Ptr) 0;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_401() {    /* foo-15-9 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        if ((Fix) (GIa1) >= (Fix) (rSp->Val))   goto l_10;
        GIa1 = (Ptr) 0;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_402() {    /* foo-15-10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYtestlap[8]->Val = GIa1;
        if ((Fix) (GYtestlap[8]->Val) >= (Fix) 0)       goto l_10;
        GIa1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_403() {    /* foo-15-11 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((Fix) (GIa1) > (Fix) 0)     goto l_10;
        GIa1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_404() {    /* foo-15-12 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((Fix) (GIa1) < (Fix) 0)     goto l_10;
        GIa1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_405() {    /* foo-15-13 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((Fix) (GIa1) >= (Fix) 0)    goto l_10;
        GIa1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_406() {    /* foo-15-14 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((Fix) (GIa1) <= (Fix) 0)    goto l_10;
        GIa1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_407() {    /* foo-16-1 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) (GIa1) & (UFix) (GIa2));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_408() {    /* foo-16-2 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) (GIa1) & (UFix) 1285);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_409() {    /* foo-16-3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) (rSp->Val) & (UFix) 1285);
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_410() {    /* foo-16-4 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) (rSp->Val) & (UFix) (GIa2));
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_411() {    /* foo-16-5 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        GIa1 = (Ptr) ((UFix) (GIa1) & (UFix) (rSp->Val));
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_412() {    /* foo-16-6 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) (GIa1) | (UFix) (GIa2));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_413() {    /* foo-16-7 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) (GIa1) | (UFix) 1285);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_414() {    /* foo-16-8 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) (rSp->Val) | (UFix) 1285);
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_415() {    /* foo-16-9 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) (rSp->Val) | (UFix) (GIa2));
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_416() {    /* foo-16-10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        GIa1 = (Ptr) ((UFix) (GIa1) | (UFix) (rSp->Val));
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_417() {    /* foo-16-11 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) (GIa1) ^ (UFix) (GIa2));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_418() {    /* foo-16-12 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) (GIa1) ^ (UFix) 1285);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_419() {    /* foo-16-13 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) (rSp->Val) ^ (UFix) 1285);
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_420() {    /* foo-16-14 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((UFix) (rSp->Val) ^ (UFix) (GIa2));
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_421() {    /* foo-16-15 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        GIa1 = (Ptr) ((UFix) (GIa1) ^ (UFix) (rSp->Val));
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_422() {    /* foo-17-1 */
   {    register Ptr aRet;
        {register Fix aux;
                aux = (Fix) (GIa2);
                if (aux >= 0)aux = (UFix) (GIa1) << aux;
                else        aux = (UFix) (GIa1) >> -aux;
                GIa1 = (Ptr) ((UFix) aux);}
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_423() {    /* foo-17-2 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = GIa1;
        GIa3 = GIa2;
        {register Fix aux;
                aux = (Fix) (GIa3);
                if (aux >= 0)aux = (UFix) (rA4) << aux;
                else        aux = (UFix) (rA4) >> -aux;
                rA4 = (Ptr) ((UFix) aux);}
        GIa1 = rA4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLtestlap_424() {    /* foo-17-3 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        {register Fix aux;
                aux = (Fix) (GIa1);
                if (aux >= 0)aux = (UFix) (rA2) << aux;
                else        aux = (UFix) (rA2) >> -aux;
                rA2 = (Ptr) ((UFix) aux);}
        GIa1 = rA2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLtestlap_425() {    /* foo-17-4 */
   {    register Ptr aRet;
        GIa1 = (Ptr) (UFix) ((UFix) (GIa1) << 2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_426() {    /* foo-17-5 */
   {    register Ptr aRet;
        GIa1 = (Ptr) (UFix) ((UFix) (GIa1) >> 2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_427() {    /* foo-17-6 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA1 = (Ptr) 32767;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 16);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 15);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 14);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 13);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 12);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 11);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 10);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 9);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 8);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 7);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 6);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 5);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 4);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 3);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 2);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) >> 1);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 0);
        (--rSp)->Val = rA2;
        rA1 = (Ptr) 2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 0);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 1);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 2);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 3);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 4);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 5);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 6);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 7);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 8);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 9);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 10);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 11);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 12);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 13);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 14);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 15);
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA2 = (Ptr) (UFix) ((UFix) (rA2) << 16);
        (--rSp)->Val = rA2;
        GIa4 = (Ptr) 34;
        {aRet = (GYtestlap[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtestlap_428() {    /* foo-17-7 */
   {    register Ptr aRet, rA3, rA4;
        rA3 = GIa3; rA4 = GIa4;
        rA4 = (Ptr) 15;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) 0);
        rA3 = (Ptr) 1;
        {register Fix aux;
                aux = (Fix) (rA4);
                if (aux >= 0)aux = (UFix) (rA3) << aux;
                else        aux = (UFix) (rA3) >> -aux;
                rA3 = (Ptr) ((UFix) aux);}
        GIa1 = rA3;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLtestlap_429() {    /* foo-18-1 */
   {    register Ptr aRet;
        *((char *) (GIa1->Val + 2) + (Fix) (GIa2)) = (char) GIa3;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_430() {    /* foo-18-2 */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((unsigned char) *(((char *) (GIa1->Val + 2)) + (Fix) (GIa2)));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_431() {    /* foo-18-3 */
   {    register Ptr aRet;
        *((char *) (GIa1->Val + 2) + (Fix) 3) = (char) (Ptr) 104;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_432() {    /* foo-18-4 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        rSp->Val = (Ptr) ((unsigned char) *(((char *) (GIa1->Val + 2)) + (Fix) 3));
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_433() {    /* foo-18-5 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa3;
        *((char *) ((rSp + 2)->Val->Val + 2) + (Fix) ((rSp + 1)->Val)) = (char) rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_434() {    /* foo-18-6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        (rSp + 1)->Val = (Ptr) ((unsigned char) *(((char *) ((rSp + 1)->Val->Val + 2)) + (Fix) (rSp->Val)));
        rSp += (Fix) 1;
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_435() {    /* foo-18-7 */
   {    register Ptr aRet;
        GIa1 = (GIa1->Val + 1)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_436() {    /* foo-18-8 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA1;
        rSp->Val = (rSp->Val->Val + 1)->Val;
        (rSp + 1)->Val = ((rSp + 1)->Val->Val + 1)->Val;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        if (rA1 == GIa2)        { aRet = (rSp++)->Val; goto lRet;}
        rA1 = GInil;
l_9:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_437() {    /* foo-18-9 */
   {    register Ptr aRet;
        GIa1 = (GYtestlap[36]->Val + 1)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_438() {    /* foo-18-10 */
   {    register Ptr aRet;
        GIa1 = (GYtestlap[37]->Val + 1)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_439() {    /* foo-19-1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (llrt_feq (GIa1, GIa2) != 0)         goto l_10;
        GIa1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_440() {    /* foo-19-2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        if (llrt_feq ((rSp + 1)->Val, rSp->Val) != 0)   goto l_10;
        GIa1 = (Ptr) 0;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_441() {    /* foo-19-3 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtestlap; rSp = GIsp;
        rLit[8]->Val = GIa1;
        if (llrt_feq (rLit[38], rLit[8]->Val) != 0)     goto l_10;
        GIa1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_442() {    /* foo-19-4 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (llrt_feq (GIa1, GYtestlap[39]) != 0)        goto l_10;
        GIa1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_443() {    /* foo-19-5 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        if (llrt_fne (GIa2, rSp->Val) != 0)     goto l_10;
        GIa1 = (Ptr) 0;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_444() {    /* foo-19-6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        if (llrt_flt (GIa1, rSp->Val) != 0)     goto l_10;
        GIa1 = (Ptr) 0;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_445() {    /* foo-19-7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        if (llrt_fle (GIa1, rSp->Val) != 0)     goto l_10;
        GIa1 = (Ptr) 0;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_446() {    /* foo-19-8 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        if (llrt_fgt (GIa1, rSp->Val) != 0)     goto l_10;
        GIa1 = (Ptr) 0;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_447() {    /* foo-19-9 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        if (llrt_fge (GIa1, rSp->Val) != 0)     goto l_10;
        GIa1 = (Ptr) 0;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_10:
        GIa1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_448() {    /* foo-20-1 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = GInil;
        goto l_nlist_testlap_450;
l_nlist_testlap_449:
        GIa2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (GIa2, rA1);
l_nlist_testlap_450:
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_testlap_449;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_451() {    /* foo-20-2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GYtestlap[40];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa1 = (Ptr) 12;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_452() {    /* foo-20-3 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtestlap; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[40];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa1 = (Ptr) 12;
        GIa2 = rLit[40];
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_453() {    /* foo-20-4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtestlap; rSp = GIsp;
        (--rSp)->Val = (Ptr) 10;
        (--rSp)->Val = rLit[8]->Val;
        rLit[8]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[42];
        (--rSp)->Val = rLit[43];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = rLit[8]->Val;
        GIdlink = (rSp + 1)->Val;
        rLit[8]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_454() {    /* foo-21-1 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 0;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_455() {    /* foo-21-2 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 0;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_456() {    /* foo-21-2-1 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 0;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_457() {    /* foo-21-3 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 0;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_458() {    /* fiblap */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
l_GLtestlap_458:
        if ((Fix) (rA1) > (Fix) 2)      goto l_100;
        rA1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_100:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLtestlap_460);
        goto l_GLtestlap_458;
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_460() {    /* call_testlap_459 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = GIa2;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtestlap_462);
        {aRet = ((Ptr) GLtestlap_458); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_462() {    /* call_testlap_461 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) + (Fix) (GIa2)));
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_463() {    /* dlq */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
l_GLtestlap_463:
        if ((long) rA2 >= (long) GIbcons)       goto l_1001;
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
l_1001:
        if (GIa1 != rA2->Val)   goto l_1003;
        rA2 = (rA2 + 1)->Val;
        goto l_GLtestlap_463;
l_1003:
        (--rSp)->Val = rA2->Val;
        rA2 = (rA2 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtestlap_465);
        goto l_GLtestlap_463;
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLtestlap_465() {    /* call_testlap_464 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestlap_466() {    /* screat */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        GIa1 = (Ptr) 6;
        GIa2 = (Ptr) 88;
        (--rSp)->Val = ((Ptr) GLtestlap_468);
        {aRet = (GYtestlap[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_468() {    /* call_testlap_467 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        *((char *) (GIa1->Val + 2) + (Fix) ((rSp + 1)->Val)) = (char) (Ptr) 97;
        *((char *) (GIa1->Val + 2) + (Fix) (rSp->Val)) = (char) (Ptr) 98;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_469() {    /* invector */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa1 = GIa4;
        GIa2 = GInil;
        (--rSp)->Val = ((Ptr) GLtestlap_471);
        {aRet = (GYtestlap[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestlap_471() {    /* call_testlap_470 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA3 = (Ptr) 0;
        goto l_1005;
l_1002:
        GIa2 = (rSp++)->Val;
        (GIa1->Val + 2 + (Fix) (rA3))->Val = GIa2;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
l_1005:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_1002;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLtestlap_472() {    /* scl-nil */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) + (Fix) (GIa1)));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestlap_473() {    /* scl-t */
   {    register Ptr aRet;
        GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) + (Fix) (GIa1)));
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDtestlap_474() {    /* trace #:llcp:nlist */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,46,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_475() {    /* trace #:llcp:errwna */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,49,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_476() {    /* trace foo-1-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,51,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_477() {    /* trace foo-1-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,53,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_478() {    /* trace foo-1-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,54,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_479() {    /* trace foo-1-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,55,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_480() {    /* trace foo-1-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,56,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_481() {    /* trace foo-1-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,4,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_482() {    /* trace foo-1-7 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,57,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_483() {    /* trace foo-1-8 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,58,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_484() {    /* trace foo-1-9 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,59,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_485() {    /* trace foo-1-10 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,60,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_486() {    /* trace foo-1-11 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,61,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_487() {    /* trace foo-1-12 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,62,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_488() {    /* trace foo-1-13 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,63,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_489() {    /* trace foo-1-14 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,64,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_490() {    /* trace foo-1-15 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,65,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_491() {    /* trace foo-1-16 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,66,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_492() {    /* trace foo-1-18 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,67,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_493() {    /* trace foo-1-19 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,68,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_494() {    /* trace foo-1-20 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,69,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_495() {    /* trace foo-1-22 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,70,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_496() {    /* trace foo-1-23 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,71,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_497() {    /* trace foo-1-24 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,72,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_498() {    /* trace foo-2-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,73,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_499() {    /* trace foo-2-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,74,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_500() {    /* trace foo-2-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,75,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_501() {    /* trace foo-2-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,76,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_502() {    /* trace foo-2-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,77,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_503() {    /* trace foo-2-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,78,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_504() {    /* trace foo-2-7 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,79,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_505() {    /* trace foo-2-8 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,80,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_506() {    /* trace foo-2-9 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,81,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_507() {    /* trace foo-2-9b */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,82,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_508() {    /* trace foo-2-10 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,83,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_509() {    /* trace foo-2-11 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,84,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_510() {    /* trace foo-2-12 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,85,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_511() {    /* trace foo-2-13 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,86,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_512() {    /* trace foo-2-14 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,87,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_513() {    /* trace foo-2-15 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,88,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_514() {    /* trace foo-2-18 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,89,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_515() {    /* trace foo-2-19 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,90,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_516() {    /* trace foo-3-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,91,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_517() {    /* trace foo-3-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,92,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_518() {    /* trace foo-3-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,93,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_519() {    /* trace foo-3-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,94,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_520() {    /* trace foo-3-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,95,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_521() {    /* trace foo-3-7 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,96,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_522() {    /* trace foo-3-8 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,97,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_523() {    /* trace foo-3-9 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,98,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_524() {    /* trace foo-3-10 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,99,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_525() {    /* trace foo-3-11 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,100,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_526() {    /* trace foo-4-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,101,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_527() {    /* trace foo-4-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,102,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_528() {    /* trace foo-4-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,103,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_529() {    /* trace foo-4-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,104,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_530() {    /* trace foo-4-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,105,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_531() {    /* trace foo-4-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,106,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_532() {    /* trace foo-4-7 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,107,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_533() {    /* trace foo-4-8 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,108,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_534() {    /* trace foo-4-9 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,109,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_535() {    /* trace foo-4-10 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,110,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_536() {    /* trace foo-4-11 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,111,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_537() {    /* trace foo-4-12 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,112,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_538() {    /* trace foo-4-13 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,113,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_539() {    /* trace foo-4-14 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,114,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_540() {    /* trace foo-4-15 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,115,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_541() {    /* trace foo-4-16 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,116,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_542() {    /* trace foo-4-17 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,117,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_543() {    /* trace foo-4-18 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,118,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_544() {    /* trace foo-4-19 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,119,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_545() {    /* trace foo-4-20 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,120,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_546() {    /* trace foo-4-21 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,121,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_547() {    /* trace foo-4-22 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,122,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_548() {    /* trace foo-4-23 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,123,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_549() {    /* trace foo-4-24 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,16,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_550() {    /* trace foo-4-24-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,124,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_551() {    /* trace foo-4-25 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,125,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_552() {    /* trace foo-4-26 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,126,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_553() {    /* trace foo-4-26-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,127,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_554() {    /* trace foo-4-26-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,128,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_555() {    /* trace foo-4-27 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,129,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_556() {    /* trace foo-4-27-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,130,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_557() {    /* trace foo-4-27-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,131,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_558() {    /* trace foo-4-28 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,132,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_559() {    /* trace foo-4-29 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,133,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_560() {    /* trace foo-4-30 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,134,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_561() {    /* trace foo-4-31 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,135,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_562() {    /* trace foo-4-32 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,136,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_563() {    /* trace foo-4-33 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,137,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_564() {    /* trace foo-4-34 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,138,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_565() {    /* trace foo-4-35 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,139,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_566() {    /* trace foo-4-36 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,140,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_567() {    /* trace foo-4-37 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,141,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_568() {    /* trace foo-4-38 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,142,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_569() {    /* trace foo-4-39 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,143,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_570() {    /* trace foo-4-40 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,144,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_571() {    /* trace foo-4-41 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,145,47,146);
  lRet:  return (aRet);}}

static Ptr GDtestlap_572() {    /* trace foo-4-42 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,147,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_573() {    /* trace foo-4-43 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,148,47,146);
  lRet:  return (aRet);}}

static Ptr GDtestlap_574() {    /* trace foo-5-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,149,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_575() {    /* trace foo-5-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,150,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_576() {    /* trace foo-5-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,151,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_577() {    /* trace foo-5-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,152,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_578() {    /* trace foo-5-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,153,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_579() {    /* trace foo-5-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,154,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_580() {    /* trace dlq2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,18,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_581() {    /* trace foo-6-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,155,47,146);
  lRet:  return (aRet);}}

static Ptr GDtestlap_582() {    /* trace foo-6-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,156,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_583() {    /* trace foo-6-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,157,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_584() {    /* trace foo-6-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,158,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_585() {    /* trace foo-6-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,159,47,146);
  lRet:  return (aRet);}}

static Ptr GDtestlap_586() {    /* trace foo-6-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,160,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_587() {    /* trace foo-6-7 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,161,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_588() {    /* trace foo-6-8 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,162,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_589() {    /* trace foo-6-9 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,163,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_590() {    /* trace foo-6-10 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,164,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_591() {    /* trace foo-6-11 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,165,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_592() {    /* trace foo-6-12 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,166,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_593() {    /* trace foo-6-13 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,167,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_594() {    /* trace foo-7-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,168,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_595() {    /* trace foo-7-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,169,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_596() {    /* trace foo-7-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,170,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_597() {    /* trace foo-7-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,171,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_598() {    /* trace foo-7-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,172,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_599() {    /* trace foo-7-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,173,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_600() {    /* trace foo-8-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,174,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_601() {    /* trace foo-8-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,175,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_602() {    /* trace foo-8-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,176,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_603() {    /* trace foo-8-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,177,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_604() {    /* trace foo-8-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,178,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_605() {    /* trace foo-8-7 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,179,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_606() {    /* trace foo-8-8 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,180,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_607() {    /* trace foo-8-9 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,181,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_608() {    /* trace foo-8-10 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,182,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_609() {    /* trace foo-8-11 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,183,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_610() {    /* trace foo-8-12 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,184,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_611() {    /* trace foo-8-13 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,185,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_612() {    /* trace foo-8-14 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,186,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_613() {    /* trace foo-8-15 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,187,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_614() {    /* trace foo-8-16 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,188,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_615() {    /* trace foo-8-17 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,189,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_616() {    /* trace foo-8-18 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,190,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_617() {    /* trace foo-8-19 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,191,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_618() {    /* trace foo-8-20 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,192,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_619() {    /* trace foo-8-21 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,193,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_620() {    /* trace foo-9-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,194,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_621() {    /* trace foo-9-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,195,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_622() {    /* trace foo-9-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,196,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_623() {    /* trace foo-9-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,197,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_624() {    /* trace foo-9-7 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,198,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_625() {    /* trace foo-9-8 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,199,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_626() {    /* trace foo-9-9 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,200,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_627() {    /* trace foo-9-10 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,201,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_628() {    /* trace foo-9-11 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,202,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_629() {    /* trace foo-9-12 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,203,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_630() {    /* trace foo-9-13 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,204,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_631() {    /* trace foo-9-14 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,205,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_632() {    /* trace foo-9-15 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,206,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_633() {    /* trace foo-9-16 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,207,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_634() {    /* trace foo-9-17 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,208,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_635() {    /* trace foo-9-18 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,209,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_636() {    /* trace foo-9-19 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,210,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_637() {    /* trace foo-9-20 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,211,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_638() {    /* trace foo-9-21 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,212,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_639() {    /* trace foo-10-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,213,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_640() {    /* trace foo-10-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,214,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_641() {    /* trace foo-10-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,215,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_642() {    /* trace foo-10-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,216,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_643() {    /* trace foo-10-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,217,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_644() {    /* trace foo-10-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,218,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_645() {    /* trace foo-10-7 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,219,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_646() {    /* trace foo-10-7-b */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,220,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_647() {    /* trace foo-10-7-c */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,221,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_648() {    /* trace foo-10-8 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,222,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_649() {    /* trace foo-10-9 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,223,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_650() {    /* trace foo-10-9-b */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,224,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_651() {    /* trace foo-10-9-c */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,225,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_652() {    /* trace foo-10-9-d */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,226,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_653() {    /* trace foo-10-9-e */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,227,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_654() {    /* trace foo-10-9-f */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,228,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_655() {    /* trace foo-10-9-g */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,229,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_656() {    /* trace foo-10-10 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,230,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_657() {    /* trace foo-10-11 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,231,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_658() {    /* trace foo-10-12 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,232,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_659() {    /* trace foo-10-13 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,233,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_660() {    /* trace foo-10-14 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,234,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_661() {    /* trace foo-10-15 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,235,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_662() {    /* trace foo-10-16 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,236,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_663() {    /* trace foo-10-17 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,237,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_664() {    /* trace foo-10-18 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,238,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_665() {    /* trace foo-10-19 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,239,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_666() {    /* trace foo-10-20 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,240,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_667() {    /* trace foo-10-21 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,241,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_668() {    /* trace foo-10-22 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,242,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_669() {    /* trace foo-10-23 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,243,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_670() {    /* trace foo-11-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,244,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_671() {    /* trace foo-11-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,245,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_672() {    /* trace foo-11-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,246,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_673() {    /* trace foo-11-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,247,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_674() {    /* trace foo-12 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,248,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_675() {    /* trace foo-12-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,249,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_676() {    /* trace foo-12-8 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,250,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_677() {    /* trace foo-12-13 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,251,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_678() {    /* trace foo-12-14 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,252,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_679() {    /* trace foo-12-15 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,253,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_680() {    /* trace foo-13-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,254,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_681() {    /* trace foo-13-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,255,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_682() {    /* trace foo-13-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,256,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_683() {    /* trace foo-13-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,257,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_684() {    /* trace foo-13-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,258,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_685() {    /* trace foo-14-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,259,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_686() {    /* trace foo-14-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,260,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_687() {    /* trace foo-15-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,261,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_688() {    /* trace foo-15-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,262,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_689() {    /* trace foo-15-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,263,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_690() {    /* trace foo-15-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,264,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_691() {    /* trace foo-15-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,265,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_692() {    /* trace foo-15-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,266,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_693() {    /* trace foo-15-7 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,267,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_694() {    /* trace foo-15-8 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,268,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_695() {    /* trace foo-15-9 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,269,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_696() {    /* trace foo-15-10 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,270,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_697() {    /* trace foo-15-11 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,271,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_698() {    /* trace foo-15-12 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,272,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_699() {    /* trace foo-15-13 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,273,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_700() {    /* trace foo-15-14 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,274,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_701() {    /* trace foo-16-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,275,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_702() {    /* trace foo-16-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,276,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_703() {    /* trace foo-16-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,277,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_704() {    /* trace foo-16-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,278,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_705() {    /* trace foo-16-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,279,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_706() {    /* trace foo-16-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,280,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_707() {    /* trace foo-16-7 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,281,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_708() {    /* trace foo-16-8 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,282,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_709() {    /* trace foo-16-9 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,283,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_710() {    /* trace foo-16-10 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,284,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_711() {    /* trace foo-16-11 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,285,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_712() {    /* trace foo-16-12 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,286,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_713() {    /* trace foo-16-13 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,287,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_714() {    /* trace foo-16-14 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,288,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_715() {    /* trace foo-16-15 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,289,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_716() {    /* trace foo-17-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,290,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_717() {    /* trace foo-17-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,291,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_718() {    /* trace foo-17-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,292,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_719() {    /* trace foo-17-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,293,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_720() {    /* trace foo-17-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,294,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_721() {    /* trace foo-17-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,295,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_722() {    /* trace foo-17-7 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,296,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_723() {    /* trace foo-18-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,297,47,146);
  lRet:  return (aRet);}}

static Ptr GDtestlap_724() {    /* trace foo-18-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,298,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_725() {    /* trace foo-18-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,299,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_726() {    /* trace foo-18-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,300,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_727() {    /* trace foo-18-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,301,47,146);
  lRet:  return (aRet);}}

static Ptr GDtestlap_728() {    /* trace foo-18-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,302,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_729() {    /* trace foo-18-7 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,303,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_730() {    /* trace foo-18-8 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,304,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_731() {    /* trace foo-18-9 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,305,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_732() {    /* trace foo-18-10 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,306,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_733() {    /* trace foo-19-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,307,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_734() {    /* trace foo-19-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,308,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_735() {    /* trace foo-19-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,309,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_736() {    /* trace foo-19-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,310,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_737() {    /* trace foo-19-5 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,311,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_738() {    /* trace foo-19-6 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,312,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_739() {    /* trace foo-19-7 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,313,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_740() {    /* trace foo-19-8 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,314,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_741() {    /* trace foo-19-9 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,315,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_742() {    /* trace foo-20-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,316,47,317);
  lRet:  return (aRet);}}

static Ptr GDtestlap_743() {    /* trace foo-20-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,318,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_744() {    /* trace foo-20-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,319,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_745() {    /* trace foo-20-4 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,43,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_746() {    /* trace foo-21-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,320,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_747() {    /* trace foo-21-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,321,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_748() {    /* trace foo-21-2-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,322,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_749() {    /* trace foo-21-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,323,47,48);
  lRet:  return (aRet);}}

static Ptr GDtestlap_750() {    /* trace fiblap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,324,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_751() {    /* trace dlq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,325,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_752() {    /* trace screat */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,326,47,50);
  lRet:  return (aRet);}}

static Ptr GDtestlap_753() {    /* trace invector */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,327,47,317);
  lRet:  return (aRet);}}

static Ptr GDtestlap_754() {    /* trace scl-nil */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,328,47,52);
  lRet:  return (aRet);}}

static Ptr GDtestlap_755() {    /* trace scl-t */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestlap,329,47,52);
  lRet:  return (aRet);}}

