/* GELL 15.26: source file for the module: "virevent" */
/*             translation done:           "Tue Aug  24 93 10:48:56 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "virevent.h" 

static Ptr GLvirevent_1() {     /* which-window */
   {    register Ptr aRet, *rLit;
        rLit = GYvirevent;
        if (rLit[0]->Val != GInil)      goto l_102;
        GIa3 = rLit[0]->Val;
        GIa2 = rLit[1];
        GIa1 = rLit[2];
         GIa1 = llrt_call_error ();
l_102:
        (--GIsp)->Val = ((Ptr) GLvirevent_2);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirevent_2() {     /* 103 */
   {    register Ptr aRet;
        GIa1 = (GIa1->Val + 2 + (Fix) 1)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirevent_3() {     /* parse-event */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYvirevent; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA1;
        GIa4 = (rA1->Val + 2 + (Fix) 3)->Val;
        rLit[4]->Val = GIa4;
        GIa3 = (rA1->Val + 2 + (Fix) 4)->Val;
        rLit[5]->Val = GIa3;
        rA1 = (rA1->Val + 2 + (Fix) 0)->Val;
        if (rA1 != rLit[6])     goto l_102;
        rA2 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        goto l_101;
l_102:
        if (rA1 == rLit[7])     goto l_104;
        if (rA1 != rLit[8])     goto l_103;
l_104:
        rA2 = (Ptr) 257;
        goto l_101;
l_103:
        if (rA1 == rLit[9])     goto l_106;
        if (rA1 != rLit[10])    goto l_105;
l_106:
        rA2 = (Ptr) 258;
        goto l_101;
l_105:
        rA2 = (Ptr) 256;
l_101:
        rLit[11]->Val = rA2;
        rA1 = rA2;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirevent_4() {     /* parse-mouse */
   {    register Ptr aRet, *rLit, rA1, rA2;
        rLit = GYvirevent; rA1 = GIa1; rA2 = GIa2;
        GIa4 = (rA1->Val + 2 + (Fix) 3)->Val;
        rLit[12]->Val = GIa4;
        GIa3 = (rA1->Val + 2 + (Fix) 4)->Val;
        rLit[13]->Val = GIa3;
        rA2 = (rA1->Val + 2 + (Fix) 2)->Val;
        rLit[14]->Val = rA2;
        rA1 = rA2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirevent_5() {     /* event-mode */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rLit[0]->Val == GInil)      {aRet = ((Ptr) GLvirevent_6); goto lRet;}
        if (rSp->Val != (Ptr) 0)        goto l_103;
        GIa1 = (rLit[0]->Val->Val + 2 + (Fix) 5)->Val;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_103:
        (--rSp)->Val = ((Ptr) GLvirevent_7);
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = rLit[0]->Val;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_7() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        (rLit[0]->Val->Val + 2 + (Fix) 5)->Val = rA4;
        rLit[17]->Val = rA4;
        GIa1 = rA4;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_6() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
l_102:
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_8() {     /* eventp */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYvirevent; rSp = GIsp; rNil = GInil;
        if (rLit[0]->Val == rNil)       goto l_101;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = rLit[0]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_101:
        GIa1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_9() {     /* read-event */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rLit[0]->Val == GInil)      {aRet = ((Ptr) GLvirevent_10); goto lRet;}
        if (rSp->Val != (Ptr) 1)        goto l_103;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_104;
l_103:
        rA4 = rLit[19]->Val;
l_104:
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLvirevent_11);
        (--rSp)->Val = rLit[20];
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_11() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirevent_13);
        {aRet = ((Ptr) GLvirevent_3); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_13() {    /* call_virevent_12 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {GIa4 = (rSp++)->Val; rSp += (Fix) GIa4; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_10() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
l_102:
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_14() {    /* peek-event */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rLit[0]->Val == GInil)      {aRet = ((Ptr) GLvirevent_15); goto lRet;}
        if (rSp->Val != (Ptr) 1)        goto l_103;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_104;
l_103:
        rA4 = rLit[19]->Val;
l_104:
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLvirevent_16);
        (--rSp)->Val = rLit[21];
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_16() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirevent_18);
        {aRet = ((Ptr) GLvirevent_3); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_18() {    /* call_virevent_17 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {GIa4 = (rSp++)->Val; rSp += (Fix) GIa4; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_15() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
l_102:
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_19() {    /* local-read-event */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirevent; rSp = GIsp;
        if (rLit[0]->Val == GInil)      {aRet = ((Ptr) GLvirevent_20); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirevent_21);
        (--rSp)->Val = rLit[19]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_21() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLvirevent_22);
        GIa4 = (Ptr) 0;
        {aRet = (GYvirevent[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_22() {    /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirevent; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[4]->Val;
        (--rSp)->Val = rLit[5]->Val;
        (--rSp)->Val = rLit[4];
        (--rSp)->Val = rLit[5];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_20() {    /* 101 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirevent_23() {    /* flush-event */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYvirevent; rSp = GIsp; rNil = GInil;
        if (rLit[0]->Val == rNil)       goto l_101;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[24];
        (--rSp)->Val = rLit[0]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_101:
        GIa1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_24() {    /* add-event */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        if (rLit[0]->Val == rNil)       goto l_101;
        if (rSp->Val != (Ptr) 1)        goto l_103;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = rLit[0]->Val;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_103:
        if (rSp->Val != (Ptr) 3)        goto l_106;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        (rLit[19]->Val->Val + 2 + (Fix) 3)->Val = rA4;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (rLit[19]->Val->Val + 2 + (Fix) 4)->Val = rA4;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -2));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (rLit[19]->Val->Val + 2 + (Fix) 0)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[19]->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_106:
        GIa1 = rNil;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa1 = rNil;
l_102:
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_25() {    /* grab-event */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirevent_27);
        {aRet = (GYvirevent[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_27() {    /* call_virevent_26 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirevent; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLvirevent_28); goto lRet;}
        GIa2 = rLit[27];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirevent_30);
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_30() {    /* call_virevent_29 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirevent; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_104;
        GIa3 = rSp->Val;
        GIa2 = rLit[29];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = ((Ptr) GLvirevent_31);
        (--rSp)->Val = rLit[30];
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_31() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_28() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirevent; rSp = GIsp;
        if (rLit[0]->Val == GInil)      {aRet = ((Ptr) GLvirevent_32); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirevent_33);
        (--rSp)->Val = rLit[31];
        (--rSp)->Val = rLit[0]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_33() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_32() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_34() {    /* ungrab-event */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYvirevent; rSp = GIsp; rNil = GInil;
        if (rLit[0]->Val == rNil)       goto l_101;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[31];
        (--rSp)->Val = rLit[0]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_101:
        GIa1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_35() {    /* itsoft-event */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYvirevent; rSp = GIsp; rNil = GInil;
        if (rLit[0]->Val == rNil)       goto l_101;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[32];
        (--rSp)->Val = rLit[0]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_101:
        GIa1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_36() {    /* read-mouse */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rLit[0]->Val == GInil)      {aRet = ((Ptr) GLvirevent_37); goto lRet;}
        if (rSp->Val != (Ptr) 1)        goto l_103;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_104;
l_103:
        rA4 = rLit[19]->Val;
l_104:
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLvirevent_38);
        (--rSp)->Val = rLit[3];
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_38() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirevent_40);
        {aRet = ((Ptr) GLvirevent_4); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_40() {    /* call_virevent_39 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {GIa4 = (rSp++)->Val; rSp += (Fix) GIa4; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_37() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
l_102:
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_41() {    /* allow-event */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYvirevent; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rA1;
        rA2 = rLit[1];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        rA2 = rLit[34];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirevent_43);
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirevent_43() {    /* call_virevent_42 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirevent; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_105;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_104;
l_105:
        GIa3 = rSp->Val;
        GIa2 = rLit[35];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if (((rSp + 1)->Val >= GIbsymb) && ((rSp + 1)->Val < GIbcons))  goto l_107;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[36];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        (--rSp)->Val = ((Ptr) GLvirevent_44);
        (--rSp)->Val = rLit[33];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_44() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_45() {    /* disallow-event */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYvirevent; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rA1;
        rA2 = rLit[1];
        rA1 = rLit[37];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        rA2 = rLit[34];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirevent_47);
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirevent_47() {    /* call_virevent_46 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirevent; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_105;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_104;
l_105:
        GIa3 = rSp->Val;
        GIa2 = rLit[35];
        rA1 = rLit[37];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if (((rSp + 1)->Val >= GIbsymb) && ((rSp + 1)->Val < GIbcons))  goto l_107;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[36];
        rA1 = rLit[37];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        (--rSp)->Val = ((Ptr) GLvirevent_48);
        (--rSp)->Val = rLit[37];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_48() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirevent_49() {    /* allowed-event-p */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYvirevent; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rA1;
        rA2 = rLit[1];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        rA2 = rLit[34];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirevent_51);
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirevent_51() {    /* call_virevent_50 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirevent; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_105;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_104;
l_105:
        GIa3 = rSp->Val;
        GIa2 = rLit[35];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if (((rSp + 1)->Val >= GIbsymb) && ((rSp + 1)->Val < GIbcons))  goto l_107;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[36];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        (--rSp)->Val = ((Ptr) GLvirevent_52);
        (--rSp)->Val = rLit[38];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_52() {    /* 110 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_108;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_108:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirevent_53() {    /* #:display:event-mode */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[15];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_54() {    /* #:display:eventp */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[18];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_55() {    /* #:display:read-event */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[20];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_56() {    /* #:display:peek-event */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[21];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_57() {    /* #:display:flush-event */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[24];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_58() {    /* #:display:add-event */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[25];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_59() {    /* #:display:grab-event */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[30];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_60() {    /* #:display:ungrab-event */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[31];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_61() {    /* #:display:isoft-event */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[40];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_62() {    /* #:display:allow-event */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[33];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_63() {    /* #:display:disallow-event */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[37];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_64() {    /* #:display:allowed-event-p */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[38];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirevent_65() {    /* #:display:read-mouse */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirevent; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[3];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GDvirevent_66() {    /* trace which-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,2,41,42);
  lRet:  return (aRet);}}

static Ptr GDvirevent_67() {    /* trace event-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,15,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_68() {    /* trace eventp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,18,41,42);
  lRet:  return (aRet);}}

static Ptr GDvirevent_69() {    /* trace read-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,20,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_70() {    /* trace peek-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,21,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_71() {    /* trace local-read-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,44,41,42);
  lRet:  return (aRet);}}

static Ptr GDvirevent_72() {    /* trace flush-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,24,41,42);
  lRet:  return (aRet);}}

static Ptr GDvirevent_73() {    /* trace add-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,25,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_74() {    /* trace grab-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,30,41,45);
  lRet:  return (aRet);}}

static Ptr GDvirevent_75() {    /* trace ungrab-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,31,41,42);
  lRet:  return (aRet);}}

static Ptr GDvirevent_76() {    /* trace itsoft-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,32,41,42);
  lRet:  return (aRet);}}

static Ptr GDvirevent_77() {    /* trace read-mouse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,3,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_78() {    /* trace allow-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,33,41,46);
  lRet:  return (aRet);}}

static Ptr GDvirevent_79() {    /* trace disallow-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,37,41,46);
  lRet:  return (aRet);}}

static Ptr GDvirevent_80() {    /* trace allowed-event-p */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,38,41,46);
  lRet:  return (aRet);}}

static Ptr GDvirevent_81() {    /* trace #:display:event-mode */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,47,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_82() {    /* trace #:display:eventp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,48,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_83() {    /* trace #:display:read-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,49,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_84() {    /* trace #:display:peek-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,50,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_85() {    /* trace #:display:flush-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,51,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_86() {    /* trace #:display:add-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,52,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_87() {    /* trace #:display:grab-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,53,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_88() {    /* trace #:display:ungrab-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,54,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_89() {    /* trace #:display:isoft-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,55,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_90() {    /* trace #:display:allow-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,56,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_91() {    /* trace #:display:disallow-event */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,57,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_92() {    /* trace #:display:allowed-event-p */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,58,41,43);
  lRet:  return (aRet);}}

static Ptr GDvirevent_93() {    /* trace #:display:read-mouse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirevent,59,41,43);
  lRet:  return (aRet);}}

