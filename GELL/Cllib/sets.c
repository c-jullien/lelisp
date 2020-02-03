/* GELL 15.26: source file for the module: "sets" */
/*             translation done:           "Wed June 16 93 18:02:31 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "sets.h" 

static Ptr GLsets_1() { /* adjoin */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) < (Fix) 2) goto l_103;
        if ((Fix) (rSp->Val) <= (Fix) 3)        goto l_102;
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[0];
        rA1 = rLit[1];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_3);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_3() { /* call_sets_2 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 != GInil)       goto l_105;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        rA2 = rLit[3];
        rA1 = rLit[1];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((Fix) (rSp->Val) <= (Fix) 2)        goto l_106;
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -2));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_4); goto lRet;}
l_106:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_5); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_5() { /* #:sets:adjoinq */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 == rNil)        goto l_101;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLsets_4() { /* #:sets:adjoin */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsets_7);
        {aRet = ((Ptr) GLsets_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_7() { /* call_sets_6 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_9() { /* union */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) < (Fix) 2) goto l_103;
        if ((Fix) (rSp->Val) <= (Fix) 3)        goto l_102;
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[0];
        rA1 = rLit[4];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_11);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_11() {        /* call_sets_10 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_105;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[3];
        rA1 = rLit[4];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_13);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_13() {        /* call_sets_12 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 != GInil)       goto l_107;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        rA2 = rLit[3];
        rA1 = rLit[4];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((Fix) (rSp->Val) <= (Fix) 2)        goto l_108;
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -2));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_14); goto lRet;}
l_108:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_15); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_15() {        /* #:sets:unionq */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLsets_16); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_16() {        /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLsets_17); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa2 = (rSp + 2)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLsets_19);
        {aRet = ((Ptr) GLsets_5); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_19() {        /* call_sets_18 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 2)->Val = GIa1;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLsets_16); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_17() {        /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_14() {        /* #:sets:union */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLsets_20); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_20() {        /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLsets_21); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLsets_23);
        {aRet = ((Ptr) GLsets_4); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_23() {        /* call_sets_22 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 2)->Val = GIa1;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLsets_20); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_21() {        /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_24() {        /* nunion */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) < (Fix) 2) goto l_103;
        if ((Fix) (rSp->Val) <= (Fix) 3)        goto l_102;
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[0];
        rA1 = rLit[5];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_26);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_26() {        /* call_sets_25 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_105;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[3];
        rA1 = rLit[5];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_28);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_28() {        /* call_sets_27 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 != GInil)       goto l_107;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        rA2 = rLit[3];
        rA1 = rLit[5];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((Fix) (rSp->Val) <= (Fix) 2)        goto l_108;
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -2));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_29); goto lRet;}
l_108:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_30); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_30() {        /* #:sets:nunionq */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_101;
        rA1 = GIa2;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLsets_32);
        {aRet = ((Ptr) GLsets_33); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_32() {        /* call_sets_31 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_29() {        /* #:sets:nunion */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_101;
        rA1 = GIa2;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLsets_35);
        {aRet = ((Ptr) GLsets_36); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_35() {        /* call_sets_34 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_33() {        /* #:sets:nunion2q */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((rA1 + 1)->Val == GInil)    {aRet = ((Ptr) GLsets_37); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsets_39);
        {aRet = (GYsets[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_39() {        /* call_sets_38 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        GIa1 = (GIsp++)->Val;
        {aRet = ((Ptr) GLsets_33); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsets_37() {        /* 101 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsets_41);
        {aRet = (GYsets[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_41() {        /* call_sets_40 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4 + 1)->Val = GIa1;
        GIa1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_36() {        /* #:sets:nunion2 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa3;
        if ((rA1 + 1)->Val == GInil)    {aRet = ((Ptr) GLsets_42); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsets_44);
        {aRet = ((Ptr) GLsets_45); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_44() {        /* call_sets_43 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 1)->Val;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLsets_36); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_42() {        /* 101 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsets_47);
        {aRet = ((Ptr) GLsets_45); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_47() {        /* call_sets_46 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4 + 1)->Val = GIa1;
        GIa1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_48() {        /* intersection */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) < (Fix) 2) goto l_103;
        if ((Fix) (rSp->Val) <= (Fix) 3)        goto l_102;
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[0];
        rA1 = rLit[7];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_50);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_50() {        /* call_sets_49 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_105;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[3];
        rA1 = rLit[7];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_52);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_52() {        /* call_sets_51 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 != GInil)       goto l_107;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        rA2 = rLit[3];
        rA1 = rLit[7];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((Fix) (rSp->Val) <= (Fix) 2)        goto l_108;
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -2));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_53); goto lRet;}
l_108:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_54); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_54() {        /* #:sets:intersectionq */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA1;
l_101:
        if ((long) rSp->Val < (long) rBcons)    goto l_102;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA2 = (rSp + 3)->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_104;
        rA2 = (rSp + 2)->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 2)->Val = rA1;
l_104:
        rSp += (Fix) 1;
        goto l_101;
l_102:
        rSp += (Fix) 1;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_53() {        /* #:sets:intersection */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GInil;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLsets_55); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_55() {        /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLsets_56); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa3 = (rSp + 4)->Val;
        GIa2 = (rSp + 3)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLsets_58);
        {aRet = ((Ptr) GLsets_8); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_58() {        /* call_sets_57 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_104;
        GIa2 = (rSp + 2)->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 2)->Val = rA1;
l_104:
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLsets_55); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_56() {        /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_59() {        /* nintersection */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) < (Fix) 2) goto l_103;
        if ((Fix) (rSp->Val) <= (Fix) 3)        goto l_102;
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[0];
        rA1 = rLit[8];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_61);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_61() {        /* call_sets_60 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_105;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[3];
        rA1 = rLit[8];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_63);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_63() {        /* call_sets_62 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 != GInil)       goto l_107;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        rA2 = rLit[3];
        rA1 = rLit[8];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((Fix) (rSp->Val) <= (Fix) 2)        goto l_108;
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -2));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_64); goto lRet;}
l_108:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_65); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_65() {        /* #:sets:nintersectionq */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
l_GLsets_65:
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 == rNil)        goto l_101;
        rA1 = rA1->Val;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 != rNil)        goto l_103;
        rA1 = rSp->Val;
        rA2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 2;
        goto l_GLsets_65;
l_103:
        rA2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLsets_66); goto lRet;}
l_101:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLsets_64() {        /* #:sets:nintersection */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLsets_67); goto lRet;}
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsets_69);
        {aRet = ((Ptr) GLsets_8); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_69() {        /* call_sets_68 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_103;
        rA1 = rSp->Val;
        GIa3 = (rSp + 2)->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLsets_64); goto lRet;}
l_103:
        GIa3 = (rSp + 2)->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLsets_70); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_67() {        /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_66() {        /* #:sets:nintersection2q */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
l_GLsets_66:
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((rA1 + 1)->Val == rNil)     {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 != rNil)        goto l_103;
        rA4 = rSp->Val;
        rA4 = (rA4 + 1)->Val;
        rA3 = rSp->Val;
        (rA3 + 1)->Val = (rA4 + 1)->Val;
        rA2 = (rSp + 1)->Val;
        rA1 = rA3;
        rSp += (Fix) 2;
        goto l_GLsets_66;
l_103:
        rA1 = rSp->Val;
        rA2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsets_72);
        goto l_GLsets_66;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_72() {        /* call_sets_71 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_70() {        /* #:sets:nintersection2 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if ((rA1 + 1)->Val == GInil)    {rSp += (Fix) 3; aRet = (rSp++)->Val; goto lRet;}
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsets_74);
        {aRet = ((Ptr) GLsets_8); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_74() {        /* call_sets_73 */
   {    register Ptr aRet, rSp, rA1, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        if (rA1 != GInil)       goto l_103;
        rA4 = rSp->Val;
        rA4 = (rA4 + 1)->Val;
        rA3 = rSp->Val;
        (rA3 + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLsets_70); goto lRet;}
l_103:
        rA1 = rSp->Val;
        rA3 = (rSp + 2)->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsets_76);
        {aRet = ((Ptr) GLsets_70); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_76() {        /* call_sets_75 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_77() {        /* set-difference */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) < (Fix) 2) goto l_103;
        if ((Fix) (rSp->Val) <= (Fix) 3)        goto l_102;
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[0];
        rA1 = rLit[9];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_79);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_79() {        /* call_sets_78 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_105;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[3];
        rA1 = rLit[9];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_81);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_81() {        /* call_sets_80 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 != GInil)       goto l_107;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        rA2 = rLit[3];
        rA1 = rLit[9];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((Fix) (rSp->Val) <= (Fix) 2)        goto l_108;
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -2));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_82); goto lRet;}
l_108:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_83); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_83() {        /* #:sets:set-differenceq */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA1;
l_101:
        if ((long) rSp->Val < (long) rBcons)    goto l_102;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA2 = (rSp + 3)->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        goto l_104;
        rA2 = (rSp + 2)->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 2)->Val = rA1;
l_104:
        rSp += (Fix) 1;
        goto l_101;
l_102:
        rSp += (Fix) 1;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_82() {        /* #:sets:set-difference */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GInil;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLsets_84); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_84() {        /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLsets_85); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa3 = (rSp + 4)->Val;
        GIa2 = (rSp + 3)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLsets_87);
        {aRet = ((Ptr) GLsets_8); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_87() {        /* call_sets_86 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_104;
        GIa2 = (rSp + 2)->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 2)->Val = rA1;
l_104:
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLsets_84); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_85() {        /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_88() {        /* nset-difference */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) < (Fix) 2) goto l_103;
        if ((Fix) (rSp->Val) <= (Fix) 3)        goto l_102;
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[0];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_90);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_90() {        /* call_sets_89 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_105;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[3];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_92);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_92() {        /* call_sets_91 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 != GInil)       goto l_107;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        rA2 = rLit[3];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((Fix) (rSp->Val) <= (Fix) 2)        goto l_108;
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -2));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_93); goto lRet;}
l_108:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_94); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_94() {        /* #:sets:nset-differenceq */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
l_GLsets_94:
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 == rNil)        goto l_101;
        rA1 = rA1->Val;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 == rNil)        goto l_103;
        rA1 = rSp->Val;
        rA2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 2;
        goto l_GLsets_94;
l_103:
        rA2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLsets_95); goto lRet;}
l_101:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLsets_93() {        /* #:sets:nset-difference */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLsets_96); goto lRet;}
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsets_98);
        {aRet = ((Ptr) GLsets_8); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_98() {        /* call_sets_97 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_103;
        rA1 = rSp->Val;
        GIa3 = (rSp + 2)->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLsets_93); goto lRet;}
l_103:
        GIa3 = (rSp + 2)->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLsets_99); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_96() {        /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_95() {        /* #:sets:nset-difference2q */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
l_GLsets_95:
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((rA1 + 1)->Val == rNil)     {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 == rNil)        goto l_103;
        rA4 = rSp->Val;
        rA4 = (rA4 + 1)->Val;
        rA3 = rSp->Val;
        (rA3 + 1)->Val = (rA4 + 1)->Val;
        rA2 = (rSp + 1)->Val;
        rA1 = rA3;
        rSp += (Fix) 2;
        goto l_GLsets_95;
l_103:
        rA1 = rSp->Val;
        rA2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsets_101);
        goto l_GLsets_95;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_101() {       /* call_sets_100 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_99() {        /* #:sets:nset-difference2 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if ((rA1 + 1)->Val == GInil)    {rSp += (Fix) 3; aRet = (rSp++)->Val; goto lRet;}
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsets_103);
        {aRet = ((Ptr) GLsets_8); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_103() {       /* call_sets_102 */
   {    register Ptr aRet, rSp, rA1, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        if (rA1 == GInil)       goto l_103;
        rA4 = rSp->Val;
        rA4 = (rA4 + 1)->Val;
        rA3 = rSp->Val;
        (rA3 + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA3;
        rA3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLsets_99); goto lRet;}
l_103:
        rA1 = rSp->Val;
        rA3 = (rSp + 2)->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsets_105);
        {aRet = ((Ptr) GLsets_99); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_105() {       /* call_sets_104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_106() {       /* set-exclusive-or */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) < (Fix) 2) goto l_103;
        if ((Fix) (rSp->Val) <= (Fix) 3)        goto l_102;
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[0];
        rA1 = rLit[11];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_108);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_108() {       /* call_sets_107 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_105;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[3];
        rA1 = rLit[11];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_110);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_110() {       /* call_sets_109 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 != GInil)       goto l_107;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        rA2 = rLit[3];
        rA1 = rLit[11];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((Fix) (rSp->Val) <= (Fix) 2)        goto l_108;
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -2));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_111); goto lRet;}
l_108:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_112); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_112() {       /* #:sets:set-exclusive-orq */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsets_114);
        {aRet = ((Ptr) GLsets_15); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_114() {       /* call_sets_113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (rSp + 2)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsets_116);
        {aRet = ((Ptr) GLsets_54); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_116() {       /* call_sets_115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLsets_83); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_111() {       /* #:sets:set-exclusive-or */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLsets_118);
        {aRet = ((Ptr) GLsets_14); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_118() {       /* call_sets_117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsets_120);
        {aRet = ((Ptr) GLsets_53); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_120() {       /* call_sets_119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 3)->Val;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLsets_82); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_121() {       /* nset-exclusive-or */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) < (Fix) 2) goto l_103;
        if ((Fix) (rSp->Val) <= (Fix) 3)        goto l_102;
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[0];
        rA1 = rLit[12];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_123);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_123() {       /* call_sets_122 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_105;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[3];
        rA1 = rLit[12];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_125);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_125() {       /* call_sets_124 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 != GInil)       goto l_107;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        rA2 = rLit[3];
        rA1 = rLit[12];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((Fix) (rSp->Val) <= (Fix) 2)        goto l_108;
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -2));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_126); goto lRet;}
l_108:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_127); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_127() {       /* #:sets:nset-exclusive-orq */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYsets; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLsets_129);
        {aRet = ((Ptr) GLsets_130); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_129() {       /* call_sets_128 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYsets[13]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_126() {       /* #:sets:nset-exclusive-or */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYsets; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLsets_132);
        {aRet = ((Ptr) GLsets_133); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_132() {       /* call_sets_131 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYsets[13]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_130() {       /* #:sets:nset-exclusive-or2q */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_101;
        rA1 = rA2;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsets_135);
        {aRet = ((Ptr) GLsets_136); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_135() {       /* call_sets_134 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        if (GYsets[13]->Val == GInil)   goto l_103;
        rA1 = rSp->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLsets_130); goto lRet;}
l_103:
        rA1 = rSp->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsets_138);
        {aRet = ((Ptr) GLsets_130); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_138() {       /* call_sets_137 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        (rA4 + 1)->Val = GIa1;
        GIa1 = rA4;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_133() {       /* #:sets:nset-exclusive-or2 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_101;
        rA1 = rA2;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsets_140);
        {aRet = ((Ptr) GLsets_141); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_140() {       /* call_sets_139 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        if (GYsets[13]->Val == GInil)   goto l_103;
        rA1 = rSp->Val;
        GIa3 = (rSp + 2)->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLsets_133); goto lRet;}
l_103:
        rA1 = rSp->Val;
        GIa3 = (rSp + 2)->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsets_143);
        {aRet = ((Ptr) GLsets_133); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_143() {       /* call_sets_142 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        (rA4 + 1)->Val = GIa1;
        GIa1 = rA4;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_136() {       /* #:sets:nset-removeq */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
l_GLsets_136:
        (--rSp)->Val = rA2;
        if ((long) rA2 >= (long) GIbcons)       goto l_101;
        rLit[13]->Val = GInil;
        rA1 = rA2;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rA1 != rA2->Val)    goto l_103;
        rLit[13]->Val = rA2;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        (--rSp)->Val = rA2;
        rA2 = (rA2 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsets_145);
        goto l_GLsets_136;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLsets_145() {       /* call_sets_144 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4 + 1)->Val = GIa1;
        GIa1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_141() {       /* #:sets:nset-remove */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((long) rA2 >= (long) GIbcons)       goto l_101;
        rLit[13]->Val = GInil;
        rA1 = rA2;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLsets_146);
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_146() {       /* 105 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 == GInil)       goto l_103;
        GYsets[13]->Val = (rSp + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA2 = (rSp + 1)->Val;
        GIa3 = (rSp + 2)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLsets_148);
        {aRet = ((Ptr) GLsets_141); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLsets_148() {       /* call_sets_147 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        (rA4 + 1)->Val = GIa1;
        GIa1 = rA4;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_149() {       /* subsetp */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) < (Fix) 2) goto l_103;
        if ((Fix) (rSp->Val) <= (Fix) 3)        goto l_102;
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[0];
        rA1 = rLit[18];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_151);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_151() {       /* call_sets_150 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_105;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[3];
        rA1 = rLit[18];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_153);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_153() {       /* call_sets_152 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 != GInil)       goto l_107;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        rA2 = rLit[3];
        rA1 = rLit[18];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((Fix) (rSp->Val) <= (Fix) 2)        goto l_108;
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -2));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_154); goto lRet;}
l_108:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_155); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_155() {       /* #:sets:subsetpq */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
l_GLsets_155:
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 == rNil)        goto l_102;
        rA1 = rNil;
        goto l_103;
l_102:
        rA1 = GYsets[19];
l_103:
        if (rA1 != rNil)        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 == rNil)        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        rA1 = rSp->Val;
        rA2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 2;
        goto l_GLsets_155;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLsets_154() {       /* #:sets:subsetp */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if (rA1 == rNil)        goto l_102;
        rA1 = rNil;
        goto l_103;
l_102:
        rA1 = GYsets[19];
l_103:
        if (rA1 != rNil)        {rSp += (Fix) 3; aRet = (rSp++)->Val; goto lRet;}
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLsets_157);
        {aRet = ((Ptr) GLsets_8); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_157() {       /* call_sets_156 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {rSp += (Fix) 3; aRet = (rSp++)->Val; goto lRet;}
        rA1 = rSp->Val;
        GIa3 = (rSp + 2)->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLsets_154); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_158() {       /* set-equal */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) < (Fix) 2) goto l_103;
        if ((Fix) (rSp->Val) <= (Fix) 3)        goto l_102;
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[0];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_160);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_160() {       /* call_sets_159 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_105;
        rA4 = rSp->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[3];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_162);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_162() {       /* call_sets_161 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 != GInil)       goto l_107;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        rA2 = rLit[3];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        if ((Fix) (rSp->Val) <= (Fix) 2)        goto l_108;
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -2));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_163); goto lRet;}
l_108:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_164); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_164() {       /* #:sets:set-equalq */
   {    register Ptr aRet, rSp, rA1, rBcons;
        rSp = GIsp; rA1 = GIa1; rBcons = GIbcons;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLsets_165);
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = rA1;
        rA1 = (rSp + 3)->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYsets[21] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_165() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLsets_167);
        {aRet = ((Ptr) GLsets_155); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_167() {       /* call_sets_166 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        GIa2 = rSp->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLsets_155); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_163() {       /* #:sets:set-equal */
   {    register Ptr aRet, rSp, rA1, rBcons;
        rSp = GIsp; rA1 = GIa1; rBcons = GIbcons;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLsets_168);
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = rA1;
        rA1 = (rSp + 3)->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYsets[21] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_168() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {rSp += (Fix) 3; aRet = (rSp++)->Val; goto lRet;}
        GIa3 = (rSp + 2)->Val;
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLsets_170);
        {aRet = ((Ptr) GLsets_154); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_170() {       /* call_sets_169 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {rSp += (Fix) 3; aRet = (rSp++)->Val; goto lRet;}
        GIa3 = (rSp + 2)->Val;
        GIa2 = rSp->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLsets_154); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_171() {       /* transitive-closure */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) < (Fix) 2) goto l_103;
        if ((Fix) (rSp->Val) <= (Fix) 3)        goto l_102;
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[0];
        rA1 = rLit[22];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLsets_173);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_173() {       /* call_sets_172 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 != GInil)       goto l_105;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        rA2 = rLit[3];
        rA1 = rLit[22];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        if ((Fix) (rSp->Val) <= (Fix) 2)        goto l_106;
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -2));
        GIa3 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_174); goto lRet;}
l_106:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) -1));
        rA2 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLsets_175); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_175() {       /* #:sets:transitive-closureq */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLsets_176); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_176() {       /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((rSp + 4)->Val == GInil)    {aRet = ((Ptr) GLsets_177); goto lRet;}
        rA4 = (rSp + 4)->Val;
        (rSp + 2)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLsets_178);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (GYsets[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_178() {       /* 103 */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        rSp->Val = rA1;
        rA4 = (rSp + 4)->Val;
        (rSp + 4)->Val = (rA4 + 1)->Val;
        rA2 = (rSp + 1)->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 1)->Val = rA1;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
l_104:
        if ((long) rSp->Val < (long) rBcons)    goto l_105;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA2 = (rSp + 3)->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        goto l_107;
        rA2 = (rSp + 6)->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        goto l_107;
        rA2 = (rSp + 6)->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 6)->Val = rA1;
l_107:
        rSp += (Fix) 1;
        goto l_104;
l_105:
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLsets_176); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_177() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_174() {       /* #:sets:transitive-closure */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLsets_179); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_179() {       /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((rSp + 4)->Val == GInil)    {aRet = ((Ptr) GLsets_180); goto lRet;}
        rA4 = (rSp + 4)->Val;
        (rSp + 2)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLsets_181);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (GYsets[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_181() {       /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        GIa4 = (rSp + 4)->Val;
        (rSp + 4)->Val = (GIa4 + 1)->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 1)->Val = rA1;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLsets_182); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_182() {       /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLsets_183); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa3 = (rSp + 7)->Val;
        GIa2 = (rSp + 3)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLsets_185);
        {aRet = ((Ptr) GLsets_8); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_185() {       /* call_sets_184 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLsets_186); goto lRet;}
        GIa3 = (rSp + 7)->Val;
        GIa2 = (rSp + 6)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLsets_188);
        {aRet = ((Ptr) GLsets_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_188() {       /* call_sets_187 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLsets_186); goto lRet;}
        GIa2 = (rSp + 6)->Val;
        rA1 = rSp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 6)->Val = rA1;
        {aRet = ((Ptr) GLsets_186); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLsets_186() {       /* 107 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLsets_182); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsets_183() {       /* 105 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLsets_179); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsets_180() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsets_8() { /* #:sets:member */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = GIa3;
        if (rA1 != rLit[23])    goto l_102;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rLit[24] + 2)->Val; goto lRet;}
l_102:
        if (rA1 != rLit[25])    goto l_103;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        rA1 = llrt_call_memq (rA1, GIa2, GIbcons, GInil);
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        GIa3 = rA1;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLsets_189); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_189() {       /* #:sets:member2 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((long) rA2 >= (long) GIbcons)       goto l_101;
        rA1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLsets_190);
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2->Val;
        GIa4 = (Ptr) 3;
        {aRet = (GYsets[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_190() {       /* 105 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 == GInil)       goto l_103;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA2 = (rSp + 1)->Val;
        GIa3 = (rSp + 2)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLsets_189); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLsets_45() {        /* #:sets:delete */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYsets; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = GIa3;
        if (rA1 != rLit[23])    goto l_102;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
l_102:
        if (rA1 != rLit[25])    goto l_103;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
l_103:
        GIa3 = rA1;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLsets_191); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_191() {       /* #:sets:delete2 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((long) rA2 >= (long) GIbcons)       goto l_101;
        rA1 = rA2;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLsets_192);
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2->Val;
        GIa4 = (Ptr) 3;
        {aRet = (GYsets[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_192() {       /* 105 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 == GInil)       goto l_103;
        rA2 = (rSp + 1)->Val;
        GIa3 = (rSp + 2)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLsets_191); goto lRet;}
l_103:
        rA2 = (rSp + 1)->Val;
        GIa3 = (rSp + 2)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLsets_194);
        {aRet = ((Ptr) GLsets_191); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLsets_194() {       /* call_sets_193 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        (rA4 + 1)->Val = GIa1;
        GIa1 = rA4;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_195() {       /* power-set */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
l_GLsets_195:
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_101;
        rA2 = rNil;
        rA1 = rNil;
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsets_197);
        goto l_GLsets_195;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLsets_197() {       /* call_sets_196 */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBcons = GIbcons;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GInil;
l_104:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_105;
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = (rSp + 5)->Val;
        rA2 = rSp->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rSp += (Fix) 1;
        rA2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_104;
l_105:
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (GYsets[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_198() {       /* cartesian-product */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
l_GLsets_198:
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 == rNil)        goto l_103;
        if (rA2 != rNil)        goto l_101;
l_103:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if ((rA1 + 1)->Val != rNil)     goto l_104;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rNil;
l_106:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_107;
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = (rSp + 3)->Val;
        rA2 = rSp->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rSp += (Fix) 1;
        rA2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_106;
l_107:
        rA1 = rSp->Val;
        rSp += (Fix) 4;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        (--rSp)->Val = ((Ptr) GXpopj2);
        rA2 = rNil;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rA2 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLsets_200);
        goto l_GLsets_198;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsets_200() {       /* call_sets_199 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = (rSp + 2)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLsets_202);
        {aRet = (GYsets[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsets_202() {       /* call_sets_201 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYsets[27] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDsets_203() {       /* trace adjoin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsets,1,29,30);
  lRet:  return (aRet);}}

static Ptr GDsets_204() {       /* trace union */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsets,4,29,30);
  lRet:  return (aRet);}}

static Ptr GDsets_205() {       /* trace nunion */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsets,5,29,30);
  lRet:  return (aRet);}}

static Ptr GDsets_206() {       /* trace intersection */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsets,7,29,30);
  lRet:  return (aRet);}}

static Ptr GDsets_207() {       /* trace nintersection */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsets,8,29,30);
  lRet:  return (aRet);}}

static Ptr GDsets_208() {       /* trace set-difference */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsets,9,29,30);
  lRet:  return (aRet);}}

static Ptr GDsets_209() {       /* trace nset-difference */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsets,10,29,30);
  lRet:  return (aRet);}}

static Ptr GDsets_210() {       /* trace set-exclusive-or */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsets,11,29,30);
  lRet:  return (aRet);}}

static Ptr GDsets_211() {       /* trace nset-exclusive-or */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsets,12,29,30);
  lRet:  return (aRet);}}

static Ptr GDsets_212() {       /* trace subsetp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsets,18,29,30);
  lRet:  return (aRet);}}

static Ptr GDsets_213() {       /* trace set-equal */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsets,20,29,30);
  lRet:  return (aRet);}}

static Ptr GDsets_214() {       /* trace transitive-closure */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsets,22,29,30);
  lRet:  return (aRet);}}

static Ptr GDsets_215() {       /* trace power-set */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsets,31,29,32);
  lRet:  return (aRet);}}

static Ptr GDsets_216() {       /* trace cartesian-product */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYsets,28,29,33);
  lRet:  return (aRet);}}

