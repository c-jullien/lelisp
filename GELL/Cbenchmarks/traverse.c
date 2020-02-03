/* GELL 15.26: source file for the module: "traverse" */
/*             translation done:           "Wed June 16 93 18:18:24 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "traverse.h" 

static Ptr GLtraverse_1() {     /* check-travinit */
   {    register Ptr aRet, *rLit;
        rLit = GYtraverse;
        GIa2 = GInil;
        GIa1 = rLit[0];
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtraverse_2() {     /* meter-travinit */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtraverse; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtraverse_3);
        (--rSp)->Val = rLit[2];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_3() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtraverse_5);
        {aRet = ((Ptr) GLtraverse_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_5() {     /* call_traverse_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtraverse; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[4];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_7() {     /* test-travinit */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 1)    {aRet = ((Ptr) GLtraverse_8); goto lRet;}
        {aRet = ((Ptr) GLtraverse_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtraverse_9() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtraverse_11);
        {aRet = ((Ptr) GLtraverse_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_11() {    /* call_traverse_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLtraverse_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_8() {     /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLtraverse_9); goto lRet;}}
        rA1 = GYtraverse[5];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtraverse_12() {    /* check-travrun */
   {    register Ptr aRet, *rLit;
        rLit = GYtraverse;
        GIa2 = rLit[5];
        GIa1 = rLit[6];
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtraverse_13() {    /* meter-travrun */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtraverse; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtraverse_14);
        (--rSp)->Val = rLit[7];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_14() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtraverse_16);
        {aRet = ((Ptr) GLtraverse_17); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_16() {    /* call_traverse_15 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtraverse; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[8];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_18() {    /* test-travrun */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 1)    {aRet = ((Ptr) GLtraverse_19); goto lRet;}
        {aRet = ((Ptr) GLtraverse_17); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtraverse_20() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtraverse_22);
        {aRet = ((Ptr) GLtraverse_17); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_22() {    /* call_traverse_21 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLtraverse_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_19() {    /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLtraverse_20); goto lRet;}}
        rA1 = GYtraverse[5];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtraverse_23() {    /* #:node:make */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = ((Ptr) GLtraverse_24);
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = ((Ptr) GLtraverse_26);
        {aRet = ((Ptr) GLtraverse_27); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_26() {    /* call_traverse_25 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        GIa4 = (Ptr) 10;
        {aRet = (GYtraverse[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_24() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (GIa1 + 1)->Val = GYtraverse[10];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_27() {    /* snb */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYtraverse; rSp = GIsp; rA4 = GIa4;
        rA4 = rLit[11]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[11]->Val = rA4;
        GIa1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtraverse_28() {    /* traverse-seed */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYtraverse[12]->Val = (Ptr) 21;
        GIa1 = (Ptr) 21;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_29() {    /* traverse-random */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYtraverse; rSp = GIsp; rA4 = GIa4;
        rA4 = rLit[12]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) * (Fix) 17));
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) % (Fix) 251));
        rLit[12]->Val = rA4;
        GIa1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtraverse_30() {    /* traverse-remove */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA2;
        rA4 = rA2->Val;
        if ((rA4 + 1)->Val != rA2->Val) goto l_101;
        rA1 = rA2->Val;
        (--rSp)->Val = rA1->Val;
        rA2->Val = GInil;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rA1 != (Ptr) 0)     goto l_103;
        rA1 = rA2->Val;
        (--rSp)->Val = rA1->Val;
        (--rSp)->Val = rA2->Val;
l_105:
        rA4 = rSp->Val;
        rA3 = (rSp + 2)->Val;
        if ((rA4 + 1)->Val == rA3->Val) goto l_106;
        rSp->Val = (rA4 + 1)->Val;
        goto l_105;
l_106:
        rA2 = rA3->Val;
        (rA4 + 1)->Val = (rA2 + 1)->Val;
        rA3->Val = rA4;
        rSp += (Fix) 1;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA3 = rA2->Val;
        (--rSp)->Val = rA2->Val;
        (--rSp)->Val = (rA3 + 1)->Val;
        (--rSp)->Val = rA1;
l_107:
        if (rSp->Val == (Ptr) 0)        goto l_108;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA3 = (rSp + 2)->Val;
        rA2 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA2 + 1)->Val;
        (rSp + 2)->Val = (rA3 + 1)->Val;
        rSp->Val = rA4;
        goto l_107;
l_108:
        rA1 = (rSp + 2)->Val;
        (rA1 + 1)->Val = (rSp + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLtraverse_31() {    /* traverse-select */
   {    register Ptr aRet, rSp, rA1, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = GIa2->Val;
        (--rSp)->Val = rA1;
l_101:
        if (rSp->Val == (Ptr) 0)        goto l_102;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA3 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA3 + 1)->Val;
        rSp->Val = rA4;
        goto l_101;
l_102:
        rA1 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLtraverse_32() {    /* traverse-add */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        if (rA2 != GInil)       {aRet = ((Ptr) GLtraverse_33); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = ((Ptr) GLtraverse_34);
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtraverse[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_34() {    /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rA1 + 1)->Val = rA1;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtraverse[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_33() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa2->Val != GInil) {aRet = ((Ptr) GLtraverse_35); goto lRet;}
        (--rSp)->Val = ((Ptr) GLtraverse_36);
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtraverse[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_36() {    /* 107 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (rA1 + 1)->Val = rA1;
        rA4 = rSp->Val;
        rA4->Val = rA1;
        rA1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtraverse_35() {    /* 105 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA2->Val;
        rA2 = rA2->Val;
        rA2 = (rA2 + 1)->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rA4 = (rSp++)->Val;
        (rA4 + 1)->Val = rA1;
        rA3 = (rSp++)->Val;
        rA3->Val = rA4;
        rA1 = rA3;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLtraverse_37() {    /* traverse-create-structure */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtraverse_38);
        (--rSp)->Val = ((Ptr) GLtraverse_40);
        {aRet = ((Ptr) GLtraverse_23); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_40() {    /* call_traverse_39 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtraverse[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_38() {    /* 101 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLtraverse_41); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtraverse_41() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (rSp->Val == (Ptr) 0)        {aRet = ((Ptr) GLtraverse_42); goto lRet;}
        (--rSp)->Val = ((Ptr) GLtraverse_44);
        {aRet = ((Ptr) GLtraverse_23); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_44() {    /* call_traverse_43 */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA2 = (rSp + 2)->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        (rSp + 2)->Val = rA1;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rSp->Val = rA4;
        {aRet = ((Ptr) GLtraverse_41); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLtraverse_42() {    /* 103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLtraverse_45);
        rA4 = (rSp + 2)->Val;
        (rA4 + 1)->Val = (rSp + 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYtraverse[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtraverse_45() {    /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 2)->Val = rA1;
        (--rSp)->Val = rA1;
        GIa2 = rA1;
        rA1 = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLtraverse_47);
        {aRet = ((Ptr) GLtraverse_30); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtraverse_47() {    /* call_traverse_46 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GInil;
        (--rSp)->Val = ((Ptr) GLtraverse_49);
        {aRet = ((Ptr) GLtraverse_32); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_49() {    /* call_traverse_48 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLtraverse_50); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_50() {    /* 105 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 3)->Val;
        if (rA4->Val == GInil)  {aRet = ((Ptr) GLtraverse_51); goto lRet;}
        (--rSp)->Val = ((Ptr) GLtraverse_53);
        {aRet = ((Ptr) GLtraverse_29); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtraverse_53() {    /* call_traverse_52 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) % (Fix) ((rSp + 7)->Val)));
        GIa2 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLtraverse_55);
        {aRet = ((Ptr) GLtraverse_30); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtraverse_55() {    /* call_traverse_54 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 2)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtraverse_57);
        {aRet = ((Ptr) GLtraverse_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_57() {    /* call_traverse_56 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) % (Fix) ((rSp + 7)->Val)));
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLtraverse_59);
        {aRet = ((Ptr) GLtraverse_31); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtraverse_59() {    /* call_traverse_58 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        GIa2 = rSp->Val;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLtraverse_61);
        {aRet = ((Ptr) GLtraverse_32); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtraverse_61() {    /* call_traverse_60 */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rA2 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        rA1 = (rSp + 2)->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val = rA1;
        rA2 = ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val;
        rA1 = (rSp + 1)->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val = rA1;
        {aRet = ((Ptr) GLtraverse_50); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtraverse_51() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = rSp->Val;
        GIa1 = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLtraverse_63);
        {aRet = ((Ptr) GLtraverse_31); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_63() {    /* call_traverse_62 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 7)->Val;
        rSp += (Fix) 8;
        {aRet = ((Ptr) GLtraverse_64); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_64() {    /* find-root */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa2;
l_101:
        if (rSp->Val == (Ptr) 0)        goto l_102;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
        if (rA4 == GInil)       goto l_102;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
        (rSp + 1)->Val = rA4->Val;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rSp->Val = rA4;
        goto l_101;
l_102:
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtraverse_65() {    /* travers */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYtraverse; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA2;
        rA4 = rLit[14]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rLit[14]->Val = rA4;
        rA3 = (rA1->Val + 2 + (Fix) 9)->Val;
        if (rA3 != rA2) goto l_101;
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (rA1->Val + 2 + (Fix) 9)->Val = rA2;
        rA3 = rLit[15]->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        rLit[15]->Val = rA3;
        rA4 = (rA1->Val + 2 + (Fix) 3)->Val;
        if (rA4 == rNil)        goto l_103;
        rA4 = rNil;
        goto l_104;
l_103:
        rA4 = rLit[5];
l_104:
        (rA1->Val + 2 + (Fix) 3)->Val = rA4;
        rA4 = (rA1->Val + 2 + (Fix) 4)->Val;
        if (rA4 == rNil)        goto l_105;
        rA4 = rNil;
        goto l_106;
l_105:
        rA4 = rLit[5];
l_106:
        (rA1->Val + 2 + (Fix) 4)->Val = rA4;
        rA4 = (rA1->Val + 2 + (Fix) 5)->Val;
        if (rA4 == rNil)        goto l_107;
        rA4 = rNil;
        goto l_108;
l_107:
        rA4 = rLit[5];
l_108:
        (rA1->Val + 2 + (Fix) 5)->Val = rA4;
        rA4 = (rA1->Val + 2 + (Fix) 6)->Val;
        if (rA4 == rNil)        goto l_109;
        rA4 = rNil;
        goto l_110;
l_109:
        rA4 = rLit[5];
l_110:
        (rA1->Val + 2 + (Fix) 6)->Val = rA4;
        rA4 = (rA1->Val + 2 + (Fix) 7)->Val;
        if (rA4 == rNil)        goto l_111;
        rA4 = rNil;
        goto l_112;
l_111:
        rA4 = rLit[5];
l_112:
        (rA1->Val + 2 + (Fix) 7)->Val = rA4;
        rA4 = (rA1->Val + 2 + (Fix) 8)->Val;
        if (rA4 == rNil)        goto l_113;
        rA4 = rNil;
        goto l_114;
l_113:
        rA4 = rLit[5];
l_114:
        (rA1->Val + 2 + (Fix) 8)->Val = rA4;
        rA4 = (rA1->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLtraverse_66); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLtraverse_66() {    /* 115 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLtraverse_67); goto lRet;}
        rA1 = rSp->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLtraverse_69);
        {aRet = ((Ptr) GLtraverse_65); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtraverse_69() {    /* call_traverse_68 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        {aRet = ((Ptr) GLtraverse_66); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLtraverse_67() {    /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_70() {    /* traverse */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYtraverse; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rLit[15]->Val;
        rLit[15]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rLit[18]->Val == rNil)      goto l_101;
        rA4 = rNil;
        goto l_102;
l_101:
        rA4 = rLit[5];
l_102:
        rLit[18]->Val = rA4;
        GIa2 = rA4;
        (--rSp)->Val = ((Ptr) GLtraverse_72);
        {aRet = ((Ptr) GLtraverse_65); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtraverse_72() {    /* call_traverse_71 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtraverse; rSp = GIsp;
        GIa1 = rLit[15]->Val;
        GIdlink = (rSp + 1)->Val;
        rLit[15]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_6() {     /* init-traverse */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (Ptr) 100;
        (--rSp)->Val = ((Ptr) GLtraverse_74);
        {aRet = ((Ptr) GLtraverse_37); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_74() {    /* call_traverse_73 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GYtraverse[19]->Val = rA1;
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtraverse_17() {    /* run-traverse */
   {    register Ptr aRet;
        GIa4 = (Ptr) 50;
        {aRet = ((Ptr) GLtraverse_75); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtraverse_76() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa1 = GYtraverse[19]->Val;
        (--rSp)->Val = ((Ptr) GLtraverse_78);
        {aRet = ((Ptr) GLtraverse_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_78() {    /* call_traverse_77 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYtraverse[19]->Val;
        (--rSp)->Val = ((Ptr) GLtraverse_80);
        {aRet = ((Ptr) GLtraverse_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_80() {    /* call_traverse_79 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYtraverse[19]->Val;
        (--rSp)->Val = ((Ptr) GLtraverse_82);
        {aRet = ((Ptr) GLtraverse_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_82() {    /* call_traverse_81 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYtraverse[19]->Val;
        (--rSp)->Val = ((Ptr) GLtraverse_84);
        {aRet = ((Ptr) GLtraverse_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_84() {    /* call_traverse_83 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYtraverse[19]->Val;
        (--rSp)->Val = ((Ptr) GLtraverse_86);
        {aRet = ((Ptr) GLtraverse_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_86() {    /* call_traverse_85 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        {aRet = ((Ptr) GLtraverse_75); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtraverse_75() {    /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLtraverse_76); goto lRet;}}
        GIa1 = GYtraverse[5];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GDtraverse_87() {    /* trace check-travinit */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtraverse,20,21,22);
  lRet:  return (aRet);}}

static Ptr GDtraverse_88() {    /* trace meter-travinit */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtraverse,23,21,22);
  lRet:  return (aRet);}}

static Ptr GDtraverse_89() {    /* trace test-travinit */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtraverse,24,21,25);
  lRet:  return (aRet);}}

static Ptr GDtraverse_90() {    /* trace check-travrun */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtraverse,26,21,22);
  lRet:  return (aRet);}}

static Ptr GDtraverse_91() {    /* trace meter-travrun */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtraverse,27,21,22);
  lRet:  return (aRet);}}

static Ptr GDtraverse_92() {    /* trace test-travrun */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtraverse,28,21,25);
  lRet:  return (aRet);}}

static Ptr GDtraverse_93() {    /* trace traverse-seed */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtraverse,29,21,22);
  lRet:  return (aRet);}}

