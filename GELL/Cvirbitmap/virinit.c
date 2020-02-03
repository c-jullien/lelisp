/* GELL 15.26: source file for the module: "virinit" */
/*             translation done:           "Tue Aug  24 93 10:49:16 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "virinit.h" 

static Ptr GLvirinit_1() {      /* inibitmap */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        GIa2 = (rSp + (Fix) (rA4))->Val;
        {aRet = ((Ptr) GLvirinit_2); goto lRet;}
l_101:
        GIa1 = rLit[0];
        (--rSp)->Val = ((Ptr) GLvirinit_4);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_4() {      /* call_virinit_3 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        rA2 = GIa1;
        if (rA2 != GInil)       {aRet = ((Ptr) GLvirinit_2); goto lRet;}
        rA2 = GYvirinit[2]->Val;
        {aRet = ((Ptr) GLvirinit_2); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLvirinit_2() {      /* 102 */
   {    register Ptr aRet;
        GIa1 = GInil;
        (--GIsp)->Val = ((Ptr) GLvirinit_6);
        {aRet = (GYvirinit[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_6() {      /* call_virinit_5 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        rLit[4]->Val = rA1;
        GIa2 = rLit[5]->Val;
        rA1 = llrt_call_cassq (rA1, GIa2, GIbcons, rNil);
        if (rA1 != rNil)        {aRet = ((Ptr) GLvirinit_7); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirinit_8);
        (--rSp)->Val = rLit[6]->Val;
        (--rSp)->Val = rLit[4]->Val;
        (--rSp)->Val = rLit[7]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_8() {      /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirinit_10);
        {aRet = (GYvirinit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_10() {     /* call_virinit_9 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_107;
        GIa2 = rLit[10];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_11);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[12];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLvirinit_11); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_11() {     /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rSp += (Fix) 1;
        rA2 = rLit[5]->Val;
        rA1 = rLit[4]->Val;
        rA1 = llrt_call_cassq (rA1, rA2, GIbcons, rNil);
        if (rA1 != rNil)        {aRet = ((Ptr) GLvirinit_7); goto lRet;}
        GIa3 = rLit[5]->Val;
        rA2 = rLit[14]->Val;
        rA1 = rLit[4]->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_13);
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirinit_13() {     /* call_virinit_12 */
   {    register Ptr aRet;
        GYvirinit[5]->Val = GIa1;
        {aRet = ((Ptr) GLvirinit_7); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_7() {      /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYvirinit[4]->Val;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_14() {     /* bitprologue */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA1 = rNil;
        goto l_nlist_virinit_16;
l_nlist_virinit_15:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virinit_16:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virinit_15;}
        (--rSp)->Val = rA1;
        if (rA1 == rNil)        goto l_101;
        rSp->Val = (rA1 + 1)->Val;
        rA4 = rA1->Val;
        goto l_102;
l_101:
        rA4 = rNil;
l_102:
        if (rSp->Val == rNil)   goto l_103;
        rA3 = rSp->Val;
        rSp->Val = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        goto l_104;
l_103:
        rA3 = rNil;
l_104:
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA4;
        if (rLit[5]->Val == rNil)       {aRet = ((Ptr) GLvirinit_17); goto lRet;}
        if (rA4 != rNil)        goto l_108;
        rA2 = rLit[5]->Val;
        rA2 = rA2->Val;
        rSp->Val = rA2->Val;
l_108:
        rA2 = rLit[5]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_cassq (rA1, rA2, GIbcons, rNil);
        (--rSp)->Val = rA1;
        if (rA1 == rNil)        {aRet = ((Ptr) GLvirinit_18); goto lRet;}
        rA2 = rLit[16];
        (--rSp)->Val = ((Ptr) GLvirinit_20);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_20() {     /* call_virinit_19 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirinit; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLvirinit_18); goto lRet;}
        GIa2 = rLit[18];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_22);
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_22() {     /* call_virinit_21 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLvirinit_18); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_24);
        {aRet = (GYvirinit[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_24() {     /* call_virinit_23 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLvirinit_25); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_18() {     /* 109 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirinit;
        GIa1 = rLit[18];
        (--GIsp)->Val = ((Ptr) GLvirinit_27);
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_27() {     /* call_virinit_26 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLvirinit_25); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_25() {     /* 110 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (rA4->Val + 2 + (Fix) 0)->Val = (rSp + 2)->Val;
        (rA4->Val + 2 + (Fix) 1)->Val = (rSp + 1)->Val;
        (rA4->Val + 2 + (Fix) 2)->Val = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_28);
        (--rSp)->Val = rLit[21];
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_28() {     /* 111 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        GIa2 = rLit[23]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[23]->Val = rA1;
        (rSp->Val->Val + 2 + (Fix) 6)->Val = rLit[10];
        if (rLit[24]->Val != GInil)     {aRet = ((Ptr) GLvirinit_29); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirinit_29);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_29() {     /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_17() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_30() {     /* #:display:bitprologue */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[21];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_31() {     /* bitmap-save */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirinit; rSp = GIsp;
        (--rSp)->Val = GIa4;
        if (rSp->Val != (Ptr) 0)        {aRet = ((Ptr) GLvirinit_32); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirinit_33);
        (--rSp)->Val = rLit[24]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_33() {     /* 103 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLvirinit_34); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_32() {     /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        if (rA4 != rLit[10])    goto l_104;
        rA4 = rLit[23]->Val;
        {aRet = ((Ptr) GLvirinit_34); goto lRet;}
l_104:
        rA4 = rSp->Val;
        GIa1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_36);
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_36() {     /* call_virinit_35 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_107;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[29];
        rA1 = rLit[30];
        GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        {aRet = ((Ptr) GLvirinit_34); goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_34() {     /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLvirinit_37); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_37() {     /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_109;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_37);
        {aRet = ((Ptr) GLvirinit_38); goto lRet;}
l_109:
        rSp += (Fix) 1;
        if (rLit[24]->Val != GInil)     {aRet = ((Ptr) GLvirinit_39); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirinit_39);
        rA4 = rLit[23]->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_39() {     /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_38() {     /* #:display:save-a-display */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirinit; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[18];
        (--rSp)->Val = ((Ptr) GLvirinit_41);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_41() {     /* call_virinit_40 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GLvirinit_42);
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 14)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rNil;
        rA4 = (Ptr) 2;
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_42() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 15)->Val;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLvirinit_43); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_43() {     /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLvirinit_44); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_45);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLvirinit_46);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (GYvirinit[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_46() {     /* 107 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYvirinit[27] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_45() {     /* 106 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLvirinit_43); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_44() {     /* 105 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirinit_47);
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 16)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = GInil;
        rA4 = (Ptr) 2;
        {aRet = (GYvirinit[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_47() {     /* 108 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirinit_48);
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 17)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = GInil;
        rA4 = (Ptr) 2;
        {aRet = (GYvirinit[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_48() {     /* 109 */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 18)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rNil;
l_110:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_111;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA2 = rSp->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_110;
l_111:
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirinit_49);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 19)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rNil;
        rA4 = (Ptr) 2;
        {aRet = (GYvirinit[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_49() {     /* 112 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirinit_50);
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 20)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = GInil;
        rA4 = (Ptr) 2;
        {aRet = (GYvirinit[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_50() {     /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = ((rSp + 7)->Val->Val + 2 + (Fix) 26)->Val;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLvirinit_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_51() {     /* 114 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLvirinit_52); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_53);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (GYvirinit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_53() {     /* 116 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLvirinit_51); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_52() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        GIa3 = ((rSp + 9)->Val->Val + 2 + (Fix) 7)->Val;
        (--rSp)->Val = GIa3;
        GIa2 = ((rSp + 10)->Val->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirinit_54);
        (--rSp)->Val = rLit[35];
        rA4 = ((rSp + 13)->Val->Val + 2 + (Fix) 10)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 14)->Val->Val + 2 + (Fix) 13)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 15)->Val->Val + 2 + (Fix) 12)->Val;
        (--rSp)->Val = rA4;
        if ((rSp + 16)->Val != rLit[24]->Val)   goto l_118;
        rA4 = rLit[10];
        goto l_119;
l_118:
        rA4 = GInil;
l_119:
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 5;
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_54() {     /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_56);
        {aRet = ((Ptr) GLvirinit_57); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_56() {     /* call_virinit_55 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (rSp + 10)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (rSp + 10)->Val = rA1;
        rA1 = ((rSp + 12)->Val->Val + 2 + (Fix) 10)->Val;
        rA2 = (rSp + 11)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_59);
        {aRet = (GYvirinit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirinit_59() {     /* call_virinit_58 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 11)->Val = rA1;
        (--rSp)->Val = rA1;
        {aRet = ((Ptr) GLvirinit_60); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_60() {     /* 120 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLvirinit_61); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rSp->Val->Val + 2 + (Fix) 9)->Val;
        if (rA4 != GInil)       {aRet = ((Ptr) GLvirinit_62); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_62);
        {aRet = (GYvirinit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_62() {     /* 123 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLvirinit_60); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_61() {     /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = ((rSp + 12)->Val->Val + 2 + (Fix) 13)->Val;
        GIa2 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_64);
        {aRet = (GYvirinit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_64() {     /* call_virinit_63 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 8)->Val = GIa1;
        GIa1 = ((rSp + 12)->Val->Val + 2 + (Fix) 12)->Val;
        GIa2 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_66);
        {aRet = (GYvirinit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_66() {     /* call_virinit_65 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 8)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirinit_67);
        GIa4 = (Ptr) 0;
        {aRet = (GYvirinit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_67() {     /* 124 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirinit_68);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirinit_69);
        {register Ptr aux;
                aux = (rSp + 17)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_69() {     /* 127 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirinit_70);
        GIa4 = (Ptr) 0;
        {aRet = (GYvirinit[38] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_70() {     /* 128 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirinit_72);
        {aRet = (GYvirinit[39] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_72() {     /* call_virinit_71 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 11)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_74);
        {aRet = (GYvirinit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_74() {     /* call_virinit_73 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 11)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirinit_75);
        GIa4 = (Ptr) 0;
        {aRet = (GYvirinit[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_75() {     /* 129 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirinit_77);
        {aRet = (GYvirinit[39] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_77() {     /* call_virinit_76 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 11)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_79);
        {aRet = (GYvirinit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_79() {     /* call_virinit_78 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 11)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirinit_80);
        GIa4 = (Ptr) 0;
        {aRet = (GYvirinit[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_80() {     /* 130 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirinit_82);
        {aRet = (GYvirinit[39] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_82() {     /* call_virinit_81 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 11)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_84);
        {aRet = (GYvirinit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_84() {     /* call_virinit_83 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 11)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirinit_85);
        GIa4 = (Ptr) 0;
        {aRet = (GYvirinit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_85() {     /* 131 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirinit_87);
        {aRet = (GYvirinit[39] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_87() {     /* call_virinit_86 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 11)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_89);
        {aRet = (GYvirinit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_89() {     /* call_virinit_88 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 11)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirinit_90);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_90() {     /* 132 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirinit_92);
        {aRet = (GYvirinit[44] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_92() {     /* call_virinit_91 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLvirinit_93);
        {aRet = ((Ptr) GLvirinit_68); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_68() {     /* 125 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirinit_94);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_94() {     /* 133 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_93() {     /* 126 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 1;
        rA4 = ((rSp + 12)->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 == GInil)       {aRet = ((Ptr) GLvirinit_95); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirinit_96);
        (--rSp)->Val = rLit[30];
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_96() {     /* 136 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_95);
        {aRet = ((Ptr) GLvirinit_97); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_95() {     /* 135 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
l_137:
        if ((long) rSp->Val < (long) GIbcons)   goto l_138;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (rSp->Val->Val + 2 + (Fix) 8)->Val = GInil;
        rSp += (Fix) 1;
        goto l_137;
l_138:
        rSp += (Fix) 1;
        ((rSp + 12)->Val->Val + 2 + (Fix) 5)->Val = (rSp + 1)->Val;
        ((rSp + 12)->Val->Val + 2 + (Fix) 8)->Val = (rSp + 3)->Val;
        ((rSp + 12)->Val->Val + 2 + (Fix) 7)->Val = (rSp + 2)->Val;
        ((rSp + 12)->Val->Val + 2 + (Fix) 14)->Val = (rSp + 11)->Val;
        ((rSp + 12)->Val->Val + 2 + (Fix) 16)->Val = (rSp + 9)->Val;
        ((rSp + 12)->Val->Val + 2 + (Fix) 15)->Val = (rSp + 10)->Val;
        ((rSp + 12)->Val->Val + 2 + (Fix) 16)->Val = (rSp + 9)->Val;
        ((rSp + 12)->Val->Val + 2 + (Fix) 17)->Val = (rSp + 8)->Val;
        ((rSp + 12)->Val->Val + 2 + (Fix) 18)->Val = (rSp + 7)->Val;
        ((rSp + 12)->Val->Val + 2 + (Fix) 19)->Val = (rSp + 6)->Val;
        ((rSp + 12)->Val->Val + 2 + (Fix) 20)->Val = (rSp + 5)->Val;
        ((rSp + 12)->Val->Val + 2 + (Fix) 26)->Val = (rSp + 4)->Val;
        ((rSp + 12)->Val->Val + 2 + (Fix) 21)->Val = rSp->Val;
        GIa1 = (rSp + 12)->Val;
        rSp += (Fix) 13;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_57() {     /* #:display:save-colortable */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLvirinit_98); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_98() {     /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLvirinit_99); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_100);
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 5;
        {aRet = (GYvirinit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_100() {    /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLvirinit_98); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_99() {     /* 102 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_101() {    /* bitmap-restore */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirinit_103);
        {aRet = (GYvirinit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_103() {    /* call_virinit_102 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[29];
        rA1 = rLit[46];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = rLit[47];
        (--rSp)->Val = rLit[48]->Val;
        rLit[48]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[49];
        (--rSp)->Val = rLit[50];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLvirinit_104); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_104() {    /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_104;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_104);
        {aRet = ((Ptr) GLvirinit_105); goto lRet;}
l_104:
        rSp += (Fix) 1;
        rA1 = (rSp + 8)->Val;
        GIdlink = (rSp + 1)->Val;
        GYvirinit[48]->Val = (rSp + 6)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_105() {    /* #:display:restore-a-display */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirinit; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[18];
        (--rSp)->Val = ((Ptr) GLvirinit_107);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_107() {    /* call_virinit_106 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if (rA1 != rNil)        goto l_102;
        rA3 = rSp->Val;
        rA2 = rLit[32];
        rA1 = rLit[46];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        if ((long) rA4 < (long) rBcons) goto l_105;
        rA4 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        if (rLit[35] == rA4->Val)       goto l_104;
l_105:
        rA3 = rSp->Val;
        rA2 = rLit[51];
        rA1 = rLit[46];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = (rSp->Val->Val + 2 + (Fix) 14)->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 15)->Val;
        (--rSp)->Val = (rA3 + 1)->Val;
        rA2 = ((rSp + 2)->Val->Val + 2 + (Fix) 15)->Val;
        (--rSp)->Val = rA2->Val;
        rA1 = ((rSp + 3)->Val->Val + 2 + (Fix) 16)->Val;
        (--rSp)->Val = rA1;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 17)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 18)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 19)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 20)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) 26)->Val;
        (--rSp)->Val = rA4;
        rA1 = ((rSp + 9)->Val->Val + 2 + (Fix) 25)->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 10)->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 10)->Val->Val + 2 + (Fix) 8)->Val;
        rA2 = ((rSp + 10)->Val->Val + 2 + (Fix) 7)->Val;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 11)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA1;
        ((rSp + 16)->Val->Val + 2 + (Fix) 14)->Val = rNil;
        ((rSp + 16)->Val->Val + 2 + (Fix) 15)->Val = rNil;
        ((rSp + 16)->Val->Val + 2 + (Fix) 26)->Val = rNil;
        ((rSp + 16)->Val->Val + 2 + (Fix) 16)->Val = rNil;
        ((rSp + 16)->Val->Val + 2 + (Fix) 17)->Val = rNil;
        ((rSp + 16)->Val->Val + 2 + (Fix) 18)->Val = rNil;
        ((rSp + 16)->Val->Val + 2 + (Fix) 19)->Val = rNil;
        ((rSp + 16)->Val->Val + 2 + (Fix) 20)->Val = rNil;
        ((rSp + 16)->Val->Val + 2 + (Fix) 25)->Val = rNil;
        ((rSp + 16)->Val->Val + 2 + (Fix) 21)->Val = rNil;
        (--rSp)->Val = ((Ptr) GLvirinit_108);
        (--rSp)->Val = rLit[46];
        {register Ptr aux;
                aux = (rSp + 18)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_108() {    /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        GIa2 = rLit[23]->Val;
        rA1 = (rSp + 16)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[23]->Val = rA1;
        ((rSp + 16)->Val->Val + 2 + (Fix) 6)->Val = rLit[10];
        (--rSp)->Val = ((Ptr) GLvirinit_109);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_109() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirinit_110);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirinit_111);
        {register Ptr aux;
                aux = (rSp + 21)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_111() {    /* 110 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 7)->Val;
        rA4 = (rA4 + 1)->Val;
        (rSp + 8)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_112);
        rA4 = (Ptr) 0;
        {aRet = (GYvirinit[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_112() {    /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = ((rSp + 20)->Val->Val + 2 + (Fix) 14)->Val;
        GIa2 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_114);
        {aRet = ((Ptr) GLvirinit_115); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_114() {    /* call_virinit_113 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        ((rSp + 20)->Val->Val + 2 + (Fix) 10)->Val = (rSp + 8)->Val;
        rA4 = (rSp + 7)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        (rSp + 8)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_117);
        {aRet = (GYvirinit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_117() {    /* call_virinit_116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = ((rSp + 20)->Val->Val + 2 + (Fix) 17)->Val;
        GIa2 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_119);
        {aRet = ((Ptr) GLvirinit_115); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_119() {    /* call_virinit_118 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        ((rSp + 20)->Val->Val + 2 + (Fix) 13)->Val = (rSp + 8)->Val;
        rA4 = ((rSp + 20)->Val->Val + 2 + (Fix) 11)->Val;
        (rA4->Val + 2 + (Fix) 4)->Val = (rSp + 8)->Val;
        rA4 = (rSp + 7)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        (rSp + 8)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_121);
        {aRet = (GYvirinit[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_121() {    /* call_virinit_120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = ((rSp + 20)->Val->Val + 2 + (Fix) 17)->Val;
        GIa2 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_123);
        {aRet = ((Ptr) GLvirinit_115); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_123() {    /* call_virinit_122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 20)->Val->Val + 2 + (Fix) 12)->Val = (rSp + 8)->Val;
        GIa4 = ((rSp + 20)->Val->Val + 2 + (Fix) 11)->Val;
        (GIa4->Val + 2 + (Fix) 5)->Val = (rSp + 8)->Val;
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLvirinit_124); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_124() {    /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLvirinit_125); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = rLit[55]->Val;
        rLit[55]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[56];
        (--rSp)->Val = rLit[50];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirinit_126);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        rA4 = ((rSp + 12)->Val->Val + 2 + (Fix) 0)->Val;
        if (rA4 == rNil)        goto l_117;
        rA1 = ((rSp + 12)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_127);
        {aRet = (rLit[58] + 2)->Val; goto lRet;}
l_117:
        rA4 = ((rSp + 12)->Val->Val + 2 + (Fix) 4)->Val;
        if (rA4 == rNil)        goto l_119;
        rA1 = ((rSp + 12)->Val->Val + 2 + (Fix) 1)->Val;
        GIa2 = ((rSp + 12)->Val->Val + 2 + (Fix) 2)->Val;
        GIa3 = ((rSp + 12)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_127);
        {aRet = (rLit[59] + 2)->Val; goto lRet;}
l_119:
        rA1 = ((rSp + 12)->Val->Val + 2 + (Fix) 1)->Val;
        GIa2 = ((rSp + 12)->Val->Val + 2 + (Fix) 2)->Val;
        GIa3 = ((rSp + 12)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_127);
        {aRet = (rLit[60] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_127() {    /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = ((rSp + 34)->Val->Val + 2 + (Fix) 17)->Val;
        GIa2 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_129);
        {aRet = ((Ptr) GLvirinit_115); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_129() {    /* call_virinit_128 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLvirinit_126); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_126() {    /* 116 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        rLit[55]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (rA1 != GInil)       goto l_115;
        GIa3 = rSp->Val;
        GIa2 = rLit[61];
        rA1 = rLit[62];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_115:
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLvirinit_124); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_125() {    /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        {register Ptr aux;
                aux = (rSp + 18)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLvirinit_130); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_130() {    /* 121 */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4;
        rLit = GYvirinit; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLvirinit_131); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        rSp->Val = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rA4;
        rA2 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        (--rSp)->Val = rA3;
        rA2 = rA2->Val;
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = rLit[55]->Val;
        rLit[55]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[63];
        (--rSp)->Val = rLit[50];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirinit_132);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirinit_133);
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        {register Ptr aux;
                aux = (rSp + 37)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[64] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_133() {    /* 126 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 16)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_135);
        {aRet = (GYvirinit[65] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_135() {    /* call_virinit_134 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirinit; rSp = GIsp;
        if (GIa1 != rLit[66])   goto l_127;
        GIa1 = rSp->Val;
        {aRet = ((Ptr) GLvirinit_136); goto lRet;}
l_127:
        (--rSp)->Val = ((Ptr) GLvirinit_137);
        {register Ptr aux;
                aux = (rSp + 16)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 16)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[67] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_137() {    /* 129 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLvirinit_138);
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 22)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 22)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 8;
        {aRet = (GYvirinit[68] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_138() {    /* 130 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_140);
        {aRet = (GYvirinit[69] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_140() {    /* call_virinit_139 */
   {    register Ptr aRet;
        GIa1 = (GIsp + 1)->Val;
        {aRet = ((Ptr) GLvirinit_136); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_136() {    /* 128 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        GIa3 = ((rSp + 36)->Val->Val + 2 + (Fix) 15)->Val;
        GIa2 = (rSp + 14)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_142);
        {aRet = ((Ptr) GLvirinit_115); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_142() {    /* call_virinit_141 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLvirinit_132); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_132() {    /* 125 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        rLit[55]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (rA1 != GInil)       goto l_124;
        GIa3 = (rSp + 2)->Val;
        GIa2 = rLit[70];
        rA1 = rLit[62];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_124:
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLvirinit_130); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_131() {    /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLvirinit_143); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_143() {    /* 131 */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4;
        rLit = GYvirinit; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLvirinit_144); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        rSp->Val = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA2 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        rA2 = rA2->Val;
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = rLit[55]->Val;
        rLit[55]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[71];
        (--rSp)->Val = rLit[50];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirinit_145);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = rA3;
        rA3 = rA2;
        rA2 = (rSp++)->Val;
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLvirinit_147);
        {aRet = (rLit[72] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_147() {    /* call_virinit_146 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = ((rSp + 34)->Val->Val + 2 + (Fix) 26)->Val;
        GIa2 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_149);
        {aRet = ((Ptr) GLvirinit_115); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_149() {    /* call_virinit_148 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLvirinit_145); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_145() {    /* 135 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        rLit[55]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (rA1 != GInil)       goto l_134;
        GIa3 = rSp->Val;
        GIa2 = rLit[73];
        rA1 = rLit[62];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_134:
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLvirinit_143); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_144() {    /* 132 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLvirinit_150); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_150() {    /* 136 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLvirinit_151); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = rLit[55]->Val;
        rLit[55]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[74];
        (--rSp)->Val = rLit[50];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirinit_152);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_154);
        {aRet = (rLit[75] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_154() {    /* call_virinit_153 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLvirinit_152); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_152() {    /* 140 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        rLit[55]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (rA1 != GInil)       goto l_139;
        GIa3 = rSp->Val;
        GIa2 = rLit[76];
        rA1 = rLit[62];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_139:
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLvirinit_150); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_151() {    /* 137 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLvirinit_155); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_155() {    /* 141 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLvirinit_156); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = rLit[55]->Val;
        rLit[55]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[77];
        (--rSp)->Val = rLit[50];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirinit_157);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_159);
        {aRet = (rLit[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_159() {    /* call_virinit_158 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLvirinit_157); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_157() {    /* 145 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        rLit[55]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (rA1 != GInil)       goto l_144;
        GIa3 = rSp->Val;
        GIa2 = rLit[79];
        rA1 = rLit[62];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_144:
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLvirinit_155); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_156() {    /* 142 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLvirinit_160); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_160() {    /* 146 */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rA4;
        rLit = GYvirinit; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLvirinit_161); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        rSp->Val = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA2 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        rA2 = rA2->Val;
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = rLit[55]->Val;
        rLit[55]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[80];
        (--rSp)->Val = rLit[50];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirinit_162);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirinit_163);
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        rA4 = (Ptr) 4;
        {aRet = (rLit[81] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_163() {    /* 151 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLvirinit_162); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_162() {    /* 150 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        rLit[55]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (rA1 != GInil)       goto l_149;
        GIa3 = rSp->Val;
        GIa2 = rLit[82];
        rA1 = rLit[62];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_149:
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLvirinit_160); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_161() {    /* 147 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLvirinit_164); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_164() {    /* 152 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLvirinit_165); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = rLit[55]->Val;
        rLit[55]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[83];
        (--rSp)->Val = rLit[50];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirinit_166);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_168);
        {aRet = (rLit[84] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_168() {    /* call_virinit_167 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLvirinit_166); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_166() {    /* 156 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        rLit[55]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (rA1 != GInil)       goto l_155;
        GIa3 = rSp->Val;
        GIa2 = rLit[85];
        rA1 = rLit[62];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_155:
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLvirinit_164); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_165() {    /* 153 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirinit; rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = rLit[55]->Val;
        rLit[55]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[86];
        (--rSp)->Val = rLit[50];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirinit_169);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa2 = (rSp + 31)->Val;
        GIa1 = (rSp + 32)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_171);
        {aRet = ((Ptr) GLvirinit_172); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_171() {    /* call_virinit_170 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLvirinit_169); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_169() {    /* 159 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        rLit[55]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (rA1 != GInil)       goto l_158;
        GIa3 = (rSp + 19)->Val;
        GIa2 = rLit[87];
        rA1 = rLit[62];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_158:
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = rLit[55]->Val;
        rLit[55]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[88];
        (--rSp)->Val = rLit[50];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirinit_173);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa2 = (rSp + 28)->Val;
        rA1 = (rSp + 32)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_175);
        {aRet = ((Ptr) GLvirinit_176); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_175() {    /* call_virinit_174 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLvirinit_173); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_173() {    /* 162 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        rLit[55]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (rA1 != GInil)       goto l_161;
        GIa3 = (rSp + 16)->Val;
        GIa2 = rLit[89];
        rA1 = rLit[62];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_161:
        (--rSp)->Val = ((Ptr) GLvirinit_177);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_177() {    /* 163 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirinit_178);
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[90] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_178() {    /* 164 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirinit_179);
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[91] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_179() {    /* 165 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLvirinit_180);
        {aRet = ((Ptr) GLvirinit_110); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_110() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirinit_181);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_181() {    /* 166 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_180() {    /* 109 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 1;
        rA4 = (rSp + 3)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        if (rA4->Val == GInil)  {aRet = ((Ptr) GLvirinit_182); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirinit_182);
        {register Ptr aux;
                aux = (rSp + 17)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (GYvirinit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_182() {    /* 168 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 16)->Val;
        rSp += (Fix) 17;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_172() {    /* #:display:recreate-windows */
   {    register Ptr aRet, rSp, rA2, rNil;
        rSp = GIsp; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        if (rA2 == rNil)        {aRet = ((Ptr) GLvirinit_183); goto lRet;}
        (--rSp)->Val = rA2->Val;
        (--rSp)->Val = rNil;
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 9)->Val;
        if (GIa4 == rNil)       {aRet = ((Ptr) GLvirinit_184); goto lRet;}
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_186);
        {aRet = (GYvirinit[92] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_186() {    /* call_virinit_185 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLvirinit_184); goto lRet;}
        rA1 = (rSp + 3)->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_188);
        {aRet = (GYvirinit[93] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_188() {    /* call_virinit_187 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLvirinit_172); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_184() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 7)->Val;
        rSp->Val = rA4;
        if (rA4 != GInil)       goto l_106;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[94];
        rA1 = rLit[95];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        rA4 = (rSp->Val->Val + 2 + (Fix) 10)->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
        rA2 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 7)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 7)->Val->Val + 2 + (Fix) 9)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 9)->Val->Val + 2 + (Fix) 11)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA3;
        rA1 = (rSp + 13)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_190);
        {aRet = (rLit[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_190() {    /* call_virinit_189 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLvirinit_191);
        GIa4 = (Ptr) 0;
        {aRet = (GYvirinit[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_191() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirinit_192);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirinit_193);
        {register Ptr aux;
                aux = (rSp + 18)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_193() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirinit_194);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[97] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_194() {    /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirinit_195);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[98] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_195() {    /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirinit_196);
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[99] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_196() {    /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirinit_197);
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_197() {    /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirinit_198);
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[101] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_198() {    /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirinit_199);
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[102] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_199() {    /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirinit_200);
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (GYvirinit[103] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_200() {    /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirinit_201);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[104] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_201() {    /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLvirinit_202);
        {aRet = ((Ptr) GLvirinit_192); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_192() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLvirinit_203);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_203() {    /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_202() {    /* 109 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        rSp += (Fix) 1;
        if ((rSp + 11)->Val == rNil)    {aRet = ((Ptr) GLvirinit_204); goto lRet;}
        GIa4 = ((rSp + 13)->Val->Val + 2 + (Fix) 7)->Val;
        (GIa4->Val + 2 + (Fix) 10)->Val = rNil;
        GIa1 = (rSp + 13)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_206);
        {aRet = (GYvirinit[105] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_206() {    /* call_virinit_205 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 11)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_208);
        {aRet = (GYvirinit[106] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_208() {    /* call_virinit_207 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = ((rSp + 13)->Val->Val + 2 + (Fix) 7)->Val;
        (GIa4->Val + 2 + (Fix) 10)->Val = (rSp + 11)->Val;
        {aRet = ((Ptr) GLvirinit_204); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_204() {    /* 121 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        rSp += (Fix) 12;
        rA2 = (rSp + 3)->Val;
        rA2 = (rA2 + 1)->Val;
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLvirinit_172); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLvirinit_183() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_176() {    /* #:display:recreate-menus */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        {aRet = ((Ptr) GLvirinit_209); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_209() {    /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLvirinit_210); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_211);
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYvirinit[107] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_211() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_213);
        {aRet = (GYvirinit[108] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_213() {    /* call_virinit_212 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLvirinit_214); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_214() {    /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLvirinit_215); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_216);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (GYvirinit[109] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_216() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_218);
        {aRet = (GYvirinit[108] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_218() {    /* call_virinit_217 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLvirinit_219); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_219() {    /* 107 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLvirinit_220); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_221);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 6;
        {aRet = (GYvirinit[110] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_221() {    /* 109 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLvirinit_219); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_220() {    /* 108 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLvirinit_214); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_215() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa3 = ((rSp + 3)->Val->Val + 2 + (Fix) 16)->Val;
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_223);
        {aRet = ((Ptr) GLvirinit_115); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_223() {    /* call_virinit_222 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLvirinit_209); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_210() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_115() {    /* #:display:exchange-and-subst */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        if (rA2 == GInil)       {aRet = ((Ptr) GLvirinit_224); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirinit_226);
        {aRet = (GYvirinit[106] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_226() {    /* call_virinit_225 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 2)->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, GIa2, GIbcons, GInil);
        rA1->Val = (rSp + 1)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_224() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_227() {    /* bitepilogue */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        rA1 = rNil;
        goto l_nlist_virinit_229;
l_nlist_virinit_228:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virinit_229:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virinit_228;}
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        {aRet = ((Ptr) GLvirinit_230); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirinit_231);
        (--rSp)->Val = rLit[24]->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_231() {    /* 103 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLvirinit_232); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_230() {    /* 101 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirinit;
        if (GIa1->Val != rLit[10])      {aRet = ((Ptr) GLvirinit_232); goto lRet;}
        GIsp->Val = rLit[23]->Val;
        {aRet = ((Ptr) GLvirinit_232); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_232() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLvirinit_233); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_233() {    /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLvirinit_234); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        if (rSp->Val != GInil)  goto l_109;
        GIa3 = rSp->Val;
        GIa2 = rLit[111];
        rA1 = rLit[112];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_236);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_236() {    /* call_virinit_235 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_112;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_111;
l_112:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[112];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_111:
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLvirinit_237); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirinit_238);
        (--rSp)->Val = rLit[112];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_238() {    /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_237);
        {aRet = ((Ptr) GLvirinit_97); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_237() {    /* 114 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLvirinit_233); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_234() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_239() {    /* #:display:bitepilogue */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[112];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_97() {     /* #:display:do-close */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        (rA1->Val + 2 + (Fix) 2)->Val = rNil;
        (rA1->Val + 2 + (Fix) 6)->Val = rNil;
        (rA1->Val + 2 + (Fix) 5)->Val = rNil;
        (rA1->Val + 2 + (Fix) 3)->Val = rNil;
        (rA1->Val + 2 + (Fix) 4)->Val = rNil;
        (rA1->Val + 2 + (Fix) 7)->Val = rNil;
        (rA1->Val + 2 + (Fix) 8)->Val = rNil;
        (rA1->Val + 2 + (Fix) 9)->Val = rNil;
        (rA1->Val + 2 + (Fix) 10)->Val = rNil;
        (rA1->Val + 2 + (Fix) 11)->Val = rNil;
        (rA1->Val + 2 + (Fix) 14)->Val = rNil;
        (rA1->Val + 2 + (Fix) 15)->Val = rNil;
        (rA1->Val + 2 + (Fix) 16)->Val = rNil;
        (rA1->Val + 2 + (Fix) 17)->Val = rNil;
        (rA1->Val + 2 + (Fix) 18)->Val = rNil;
        (rA1->Val + 2 + (Fix) 19)->Val = rNil;
        (rA1->Val + 2 + (Fix) 20)->Val = rNil;
        (rA1->Val + 2 + (Fix) 21)->Val = rNil;
        GIa2 = rLit[23]->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_241);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_241() {    /* call_virinit_240 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYvirinit; rSp = GIsp; rNil = GInil;
        rLit[23]->Val = GIa1;
        if (rSp->Val != rLit[24]->Val)  goto l_101;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rNil;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
l_101:
        GIa1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_242() {    /* bitmap-refresh */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[113];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_244);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_244() {    /* call_virinit_243 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[113];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_245);
        (--rSp)->Val = rLit[113];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_245() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_246() {    /* #:display:bitmap-refresh */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[113];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_247() {    /* bitmap-flush */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[114];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_249);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_249() {    /* call_virinit_248 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[114];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_250);
        (--rSp)->Val = rLit[114];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_250() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_251() {    /* #:display:bitmap-flush */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[114];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_252() {    /* bitmap-sync */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[115];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_254);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_254() {    /* call_virinit_253 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[115];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_255);
        (--rSp)->Val = rLit[115];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_255() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_256() {    /* #:display:bitmap-sync */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[115];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_257() {    /* standard-roman-font */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_259);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_259() {    /* call_virinit_258 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_260);
        (--rSp)->Val = rLit[38];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_260() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_261() {    /* #:display:standard-roman-font */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[38];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_262() {    /* standard-bold-font */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[40];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_264);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_264() {    /* call_virinit_263 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[40];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_265);
        (--rSp)->Val = rLit[40];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_265() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_266() {    /* #:display:standard-bold-font */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[40];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_267() {    /* large-roman-font */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[41];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_269);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_269() {    /* call_virinit_268 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[41];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_270);
        (--rSp)->Val = rLit[41];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_270() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_271() {    /* #:display:large-roman-font */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[41];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_272() {    /* small-roman-font */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[42];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_274);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_274() {    /* call_virinit_273 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[42];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_275);
        (--rSp)->Val = rLit[42];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_275() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_276() {    /* #:display:small-roman-font */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[42];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_277() {    /* standard-foreground-pattern */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[116];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_279);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_279() {    /* call_virinit_278 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[116];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_280);
        (--rSp)->Val = rLit[116];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_280() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_281() {    /* #:display:standard-foreground-pattern */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[116];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_282() {    /* standard-background-pattern */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[117];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_284);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_284() {    /* call_virinit_283 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[117];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_285);
        (--rSp)->Val = rLit[117];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_285() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_286() {    /* #:display:standard-background-pattern */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[117];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_287() {    /* standard-medium-gray-pattern */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[118];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_289);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_289() {    /* call_virinit_288 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[118];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_290);
        (--rSp)->Val = rLit[118];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_290() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_291() {    /* #:display:standard-medium-gray-pattern */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[118];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_292() {    /* standard-light-gray-pattern */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[119];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_294);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_294() {    /* call_virinit_293 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[119];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_295);
        (--rSp)->Val = rLit[119];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_295() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_296() {    /* #:display:standard-light-gray-pattern */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[119];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_297() {    /* standard-dark-gray-pattern */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[120];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_299);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_299() {    /* call_virinit_298 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[120];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_300);
        (--rSp)->Val = rLit[120];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_300() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_301() {    /* #:display:standard-dark-gray-pattern */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[120];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_302() {    /* standard-lelisp-cursor */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[121];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_304);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_304() {    /* call_virinit_303 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[121];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_305);
        (--rSp)->Val = rLit[121];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_305() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_306() {    /* #:display:standard-lelisp-cursor */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[121];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_307() {    /* standard-gc-cursor */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[122];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_309);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_309() {    /* call_virinit_308 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[122];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_310);
        (--rSp)->Val = rLit[122];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_310() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_311() {    /* #:display:standard-gc-cursor */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[122];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_312() {    /* standard-busy-cursor */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[123];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_314);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_314() {    /* call_virinit_313 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[123];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        (--rSp)->Val = ((Ptr) GLvirinit_315);
        (--rSp)->Val = rLit[123];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_315() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_316() {    /* #:display:standard-busy-cursor */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[123];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_317() {    /* bitxmax */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[124];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_319);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_319() {    /* call_virinit_318 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[124];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        rA1 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        rSp += (Fix) 1;
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_320() {    /* bitymax */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[125];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_322);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_322() {    /* call_virinit_321 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[125];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        rA1 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        rSp += (Fix) 1;
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_323() {    /* root-window */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rSp->Val != (Ptr) 1)        goto l_101;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        goto l_102;
l_101:
        rA4 = rLit[24]->Val;
l_102:
        (--rSp)->Val = rA4;
        if (rA4 != GInil)       goto l_104;
        GIa3 = rA4;
        GIa2 = rLit[111];
        rA1 = rLit[52];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_325);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_325() {    /* call_virinit_324 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_107;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_106;
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[52];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        rA1 = (rSp->Val->Val + 2 + (Fix) 10)->Val;
        rSp += (Fix) 1;
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_326() {    /* standard-foreground */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rLit[24]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[111];
        rA1 = rLit[53];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_328);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_328() {    /* call_virinit_327 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_105;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (GIa4 != rNil)       goto l_104;
l_105:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[53];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        rA1 = (rSp->Val->Val + 2 + (Fix) 13)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_329() {    /* standard-background */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rLit[24]->Val;
        if (rSp->Val != GInil)  goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[111];
        rA1 = rLit[54];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_331);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_331() {    /* call_virinit_330 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_105;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (GIa4 != rNil)       goto l_104;
l_105:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[54];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        rA1 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_332() {    /* #:display:bitmap-save */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirinit; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[112];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_333() {    /* #:display:bitmap-restore */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirinit; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[21];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_334() {    /* #:display:prin */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirinit_335);
        (--rSp)->Val = (Ptr) 35;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[126] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_335() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirinit_336);
        (--rSp)->Val = (Ptr) 60;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[126] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_336() {    /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLvirinit_337);
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYvirinit[127] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_337() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirinit_338);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[126] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_338() {    /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLvirinit_339);
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYvirinit[127] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_339() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirinit_340);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[126] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_340() {    /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLvirinit_341);
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYvirinit[127] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_341() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirinit_342);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[126] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_342() {    /* 108 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLvirinit_343);
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYvirinit[127] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_343() {    /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = (Ptr) 62;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirinit[126] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirinit_344() {    /* #:display:current-display */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 0)->Val;
        rLit[4]->Val = rA4;
        rA3 = (rA1->Val + 2 + (Fix) 1)->Val;
        rLit[14]->Val = rA3;
        (--rSp)->Val = ((Ptr) GLvirinit_345);
        (--rSp)->Val = rA3;
        (--rSp)->Val = rLit[128];
        rA4 = (Ptr) 2;
        {aRet = (rLit[129] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_345() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        GIa1->Val = rA4;
        (--rSp)->Val = ((Ptr) GLvirinit_346);
        (--rSp)->Val = rLit[14]->Val;
        (--rSp)->Val = rLit[130];
        rA4 = (Ptr) 2;
        {aRet = (rLit[129] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_346() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        rA1->Val = rA4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        rLit[131]->Val = rA4;
        GIa3 = (rSp->Val->Val + 2 + (Fix) 14)->Val;
        rLit[132]->Val = GIa3;
        GIa2 = (rSp->Val->Val + 2 + (Fix) 8)->Val;
        rLit[133]->Val = GIa2;
        rA1 = (rSp->Val->Val + 2 + (Fix) 11)->Val;
        rLit[134]->Val = rA1;
        rA4 = (rSp->Val->Val + 2 + (Fix) 9)->Val;
        rLit[135]->Val = rA4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 7)->Val;
        rLit[136]->Val = rA4;
        rA1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_347() {    /* display-store-selection */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rA1;
        rA2 = rLit[111];
        rA1 = rLit[137];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        rA2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_349);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirinit_349() {    /* call_virinit_348 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_105;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_104;
l_105:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[137];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        if (((rSp + 1)->Val >= GIbstrg) && ((rSp + 1)->Val < GIbsymb))  goto l_107;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[138];
        rA1 = rLit[137];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[139];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 3;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_350() {    /* display-get-selection */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rA1;
        GIa2 = rLit[111];
        rA1 = rLit[140];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_352);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_352() {    /* call_virinit_351 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_105;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_104;
l_105:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[140];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[141];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_353() {    /* #:display:store-selection */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        (GIa1->Val + 2 + (Fix) 23)->Val = rA2;
        GIa1 = rA2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_354() {    /* #:display:get-selection */
   {    register Ptr aRet;
        GIa1 = (GIa1->Val + 2 + (Fix) 23)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirinit_355() {    /* display-depth */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rA1;
        GIa2 = rLit[111];
        rA1 = rLit[142];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        GIa2 = rLit[18];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_357);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirinit_357() {    /* call_virinit_356 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_105;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_104;
l_105:
        GIa3 = rSp->Val;
        GIa2 = rLit[32];
        rA1 = rLit[142];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[142];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_358() {    /* #:display:display-depth */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[142];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_359() {    /* display-synchronize */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[143];
        rA2 = (Ptr) 1;
        {aRet = (rLit[144] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = rNil;
        goto l_nlist_virinit_361;
l_nlist_virinit_360:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virinit_361:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virinit_360;}
        (--rSp)->Val = rA1;
        if ((rSp + 1)->Val != rNil)     goto l_103;
        GIa3 = (rSp + 1)->Val;
        rA2 = rLit[111];
        rA1 = rLit[143];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA2 = rLit[18];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_363);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_363() {    /* call_virinit_362 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_106;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_105;
l_106:
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[32];
        rA1 = rLit[143];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if (rSp->Val == rNil)   goto l_107;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[145];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 3)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
l_107:
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[145];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_364() {    /* #:display:synchronize */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYvirinit; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[26];
        GIa1 = rLit[145];
        GIsp = rSp; GIa4 = rA4; GIa1 = llrt_call_error ();
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_365() {    /* default-window-type */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[146];
        rA2 = (Ptr) 1;
        {aRet = (rLit[144] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = rNil;
        goto l_nlist_virinit_367;
l_nlist_virinit_366:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virinit_367:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virinit_366;}
        (--rSp)->Val = rA1;
        if ((rSp + 1)->Val != rNil)     goto l_103;
        GIa3 = (rSp + 1)->Val;
        rA2 = rLit[111];
        rA1 = rLit[146];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA2 = rLit[18];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLvirinit_369);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_369() {    /* call_virinit_368 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYvirinit; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_106;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_105;
l_106:
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[32];
        rA1 = rLit[146];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if (rSp->Val == rNil)   goto l_107;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[146];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 3)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
l_107:
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[146];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirinit_370() {    /* #:display:default-window-type */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        GIa1 = GYvirinit[147];
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GDvirinit_371() {    /* trace inibitmap */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,13,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_372() {    /* trace bitprologue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,21,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_373() {    /* trace #:display:bitprologue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,150,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_374() {    /* trace bitmap-save */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,30,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_375() {    /* trace bitmap-restore */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,46,148,151);
  lRet:  return (aRet);}}

static Ptr GDvirinit_376() {    /* trace bitepilogue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,112,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_377() {    /* trace #:display:bitepilogue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,152,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_378() {    /* trace bitmap-refresh */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,113,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_379() {    /* trace #:display:bitmap-refresh */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,153,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_380() {    /* trace bitmap-flush */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,114,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_381() {    /* trace #:display:bitmap-flush */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,154,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_382() {    /* trace bitmap-sync */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,115,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_383() {    /* trace #:display:bitmap-sync */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,155,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_384() {    /* trace standard-roman-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,38,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_385() {    /* trace #:display:standard-roman-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,156,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_386() {    /* trace standard-bold-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,40,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_387() {    /* trace #:display:standard-bold-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,157,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_388() {    /* trace large-roman-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,41,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_389() {    /* trace #:display:large-roman-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,158,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_390() {    /* trace small-roman-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,42,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_391() {    /* trace #:display:small-roman-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,159,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_392() {    /* trace standard-foreground-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,116,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_393() {    /* trace #:display:standard-foreground-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,160,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_394() {    /* trace standard-background-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,117,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_395() {    /* trace #:display:standard-background-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,161,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_396() {    /* trace standard-medium-gray-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,118,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_397() {    /* trace #:display:standard-medium-gray-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,162,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_398() {    /* trace standard-light-gray-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,119,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_399() {    /* trace #:display:standard-light-gray-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,163,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_400() {    /* trace standard-dark-gray-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,120,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_401() {    /* trace #:display:standard-dark-gray-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,164,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_402() {    /* trace standard-lelisp-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,121,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_403() {    /* trace #:display:standard-lelisp-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,165,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_404() {    /* trace standard-gc-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,122,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_405() {    /* trace #:display:standard-gc-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,166,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_406() {    /* trace standard-busy-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,123,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_407() {    /* trace #:display:standard-busy-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,167,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_408() {    /* trace bitxmax */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,124,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_409() {    /* trace bitymax */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,125,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_410() {    /* trace root-window */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,52,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_411() {    /* trace standard-foreground */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,53,148,168);
  lRet:  return (aRet);}}

static Ptr GDvirinit_412() {    /* trace standard-background */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,54,148,168);
  lRet:  return (aRet);}}

static Ptr GDvirinit_413() {    /* trace #:display:bitmap-save */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,169,148,151);
  lRet:  return (aRet);}}

static Ptr GDvirinit_414() {    /* trace #:display:bitmap-restore */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,170,148,151);
  lRet:  return (aRet);}}

static Ptr GDvirinit_415() {    /* trace #:display:prin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,171,148,151);
  lRet:  return (aRet);}}

static Ptr GDvirinit_416() {    /* trace #:display:current-display */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,24,148,151);
  lRet:  return (aRet);}}

static Ptr GDvirinit_417() {    /* trace display-store-selection */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,137,148,172);
  lRet:  return (aRet);}}

static Ptr GDvirinit_418() {    /* trace display-get-selection */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,140,148,151);
  lRet:  return (aRet);}}

static Ptr GDvirinit_419() {    /* trace #:display:store-selection */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,173,148,172);
  lRet:  return (aRet);}}

static Ptr GDvirinit_420() {    /* trace #:display:get-selection */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,174,148,151);
  lRet:  return (aRet);}}

static Ptr GDvirinit_421() {    /* trace display-depth */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,142,148,151);
  lRet:  return (aRet);}}

static Ptr GDvirinit_422() {    /* trace #:display:display-depth */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,175,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_423() {    /* trace display-synchronize */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,143,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_424() {    /* trace #:display:synchronize */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,176,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_425() {    /* trace default-window-type */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,146,148,149);
  lRet:  return (aRet);}}

static Ptr GDvirinit_426() {    /* trace #:display:default-window-type */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirinit,177,148,149);
  lRet:  return (aRet);}}

