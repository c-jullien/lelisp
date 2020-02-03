/* GELL 15.26: source file for the module: "resetfn" */
/*             translation done:           "Wed June 16 93 18:02:59 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "resetfn.h" 

static Ptr GLresetfn_1() {      /* #:gell-resetfn:get-body */
   {    register Ptr aRet, *rLit;
        rLit = GYresetfn;
        GIa2 = rLit[0];
        GIa1 = rLit[1]->Val;
        (--GIsp)->Val = ((Ptr) GLresetfn_3);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLresetfn_3() {      /* call_resetfn_2 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYresetfn; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa3 = rLit[1]->Val;
        GIa2 = rLit[3];
        rA1 = rLit[4];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLresetfn_4() {      /* #:gell-resetfn:function-0 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLresetfn_6);
        {aRet = (GYresetfn[4] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLresetfn_6() {      /* call_resetfn_5 */
   {    register Ptr aRet;
        GIa4 = (Ptr) 0;
        {aRet = (GYresetfn[5] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLresetfn_7() {      /* #:gell-resetfn:function-1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLresetfn_9);
        {aRet = (GYresetfn[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_9() {      /* call_resetfn_8 */
   {    register Ptr aRet;
        GIa4 = (Ptr) 1;
        {aRet = (GYresetfn[5] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLresetfn_10() {     /* #:gell-resetfn:function-2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLresetfn_12);
        {aRet = (GYresetfn[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_12() {     /* call_resetfn_11 */
   {    register Ptr aRet;
        GIa4 = (Ptr) 2;
        {aRet = (GYresetfn[5] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLresetfn_13() {     /* #:gell-resetfn:function-3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = ((Ptr) GLresetfn_15);
        {aRet = (GYresetfn[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_15() {     /* call_resetfn_14 */
   {    register Ptr aRet;
        GIa4 = (Ptr) 3;
        {aRet = (GYresetfn[5] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLresetfn_16() {     /* #:gell-resetfn:function-n */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = ((Ptr) GLresetfn_18);
        {aRet = (GYresetfn[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_18() {     /* call_resetfn_17 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        {aRet = (GYresetfn[5] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLresetfn_19() {     /* #:gell-resetfn:function-f */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLresetfn_21);
        {aRet = (GYresetfn[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_21() {     /* call_resetfn_20 */
   {    register Ptr aRet, rSp, rA2, rA4;
        rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
        rA2 = (rSp++)->Val;
        rA4 = (Ptr) 0;
        goto l_102;
l_101:
        (--rSp)->Val = rA2->Val;
        rA2 = (rA2 + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
l_102:
        if ((long) rA2 >= (long) GIbcons)       goto l_101;
        {aRet = (GYresetfn[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLresetfn_22() {     /* #:gell-resetfn:resetfn */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYresetfn; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa3;
        GIa3 = rLit[0];
        GIa2 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLresetfn_24);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_24() {     /* call_resetfn_23 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYresetfn; rSp = GIsp;
        (--rSp)->Val = rLit[7]->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLresetfn_26);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_26() {     /* call_resetfn_25 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = (rSp++)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLresetfn_28);
        {aRet = ((Ptr) GLresetfn_29); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_28() {     /* call_resetfn_27 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYresetfn; rSp = GIsp;
        if (GIa1 != GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        GIa1 = rLit[10];
        rSp += (Fix) 1;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_29() {     /* #:gell-resetfn:resetfn-aux */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3;
        rLit = GYresetfn; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA2 == GInil)       {aRet = ((Ptr) GLresetfn_30); goto lRet;}
        (--rSp)->Val = ((Ptr) GLresetfn_31);
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = rA1;
        (rSp + 4)->Val = (rA2 + 1)->Val;
        (--rSp)->Val = rA2->Val;
        (--rSp)->Val = rA3;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_31() {     /* 105 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != (Ptr) 0)     goto l_103;
        GIa3 = (rSp + 2)->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLresetfn_29); goto lRet;}
l_103:
        rA1 = GYresetfn[14];
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLresetfn_30() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_32() {     /* resetfn */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLresetfn_34);
        {aRet = (GYresetfn[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_34() {     /* call_resetfn_33 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil, rBcons;
        rLit = GYresetfn; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        rA4 = rA1;
        if (rA4 == rLit[16])    goto l_103;
        if (rA4 == rLit[17])    goto l_103;
        if (rA4 == rLit[18])    goto l_103;
        if (rA4 == rLit[19])    goto l_103;
        if (rA4 == rLit[20])    goto l_103;
        if (rA4 != rLit[21])    {aRet = ((Ptr) GLresetfn_35); goto lRet;}
l_103:
        GIa2 = (rSp + 2)->Val;
        rA1 = (rA1 == GIa2) ? rLit[14] : rNil;
        if (rA1 != rNil)        {aRet = ((Ptr) GLresetfn_36); goto lRet;}
        if (rLit[22] != (rSp + 2)->Val) {aRet = ((Ptr) GLresetfn_37); goto lRet;}
        rA1 = rSp->Val;
        if (rA1 != rLit[16])    goto l_108;
        rA4 = (rSp + 3)->Val;
        if (rA4->Val == rNil)   goto l_109;
        rA4 = rNil;
        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
l_109:
        rA4 = rLit[14];
        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
l_108:
        if (rA1 != rLit[17])    goto l_111;
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
        rA4 = (rSp + 3)->Val;
        rA4 = rA4->Val;
        if ((rA4 + 1)->Val == rNil)     goto l_113;
        rA4 = rNil;
        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
l_113:
        rA4 = rLit[14];
        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
l_111:
        if (rA1 != rLit[18])    goto l_115;
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
        rA4 = (rSp + 3)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        if ((rA4 + 1)->Val == rNil)     goto l_117;
        rA4 = rNil;
        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
l_117:
        rA4 = rLit[14];
        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
l_115:
        if (rA1 != rLit[19])    goto l_119;
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
        rA4 = (rSp + 3)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        if ((rA4 + 1)->Val == rNil)     goto l_121;
        rA4 = rNil;
        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
l_121:
        rA4 = rLit[14];
        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
l_119:
        if (rA1 != rLit[20])    {aRet = ((Ptr) GLresetfn_39); goto lRet;}
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLresetfn_41);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLresetfn_41() {     /* call_resetfn_40 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa4 = rA1;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLresetfn_38); goto lRet;}
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLresetfn_43);
        {aRet = (GYresetfn[24] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLresetfn_43() {     /* call_resetfn_42 */
   {    register Ptr aRet;
        GIa1 = (GIa1 + 1)->Val;
        (--GIsp)->Val = ((Ptr) GLresetfn_45);
        {aRet = (GYresetfn[23] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLresetfn_45() {     /* call_resetfn_44 */
   {    register Ptr aRet, rA1, rA4, rNil;
        rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        rA4 = rA1;
        if (rA4 != rNil)        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
        rA1 = (GIsp + 3)->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        GIa2 = (Ptr) 4;
        rA1 = ((Fix) (rA1) >= (Fix) (GIa2)) ? rA1 : rNil;
        rA4 = rA1;
        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLresetfn_39() {     /* 123 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLresetfn_38); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLresetfn_38() {     /* 107 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (GIa4 == GInil)      {aRet = ((Ptr) GLresetfn_37); goto lRet;}
        rA2 = (rSp + 3)->Val;
        rA1 = GYresetfn[25];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rA1;
        rA2 = rSp->Val;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLresetfn_47);
        {aRet = ((Ptr) GLresetfn_22); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLresetfn_47() {     /* call_resetfn_46 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYresetfn; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (rSp + 3)->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rLit[10];
        rA2 = rA1;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLresetfn_36);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLresetfn_37() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYresetfn; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rLit[26] != (rSp + 2)->Val) {aRet = ((Ptr) GLresetfn_48); goto lRet;}
        if (rLit[21] != rSp->Val)       {aRet = ((Ptr) GLresetfn_48); goto lRet;}
        rA2 = (rSp + 3)->Val;
        rA1 = rLit[27];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rA1;
        rA2 = rSp->Val;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLresetfn_50);
        {aRet = ((Ptr) GLresetfn_22); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLresetfn_50() {     /* call_resetfn_49 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYresetfn; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (rSp + 3)->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rLit[10];
        rA2 = rA1;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLresetfn_36);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLresetfn_48() {     /* 125 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYresetfn; rSp = GIsp;
        if (rLit[28]->Val != GInil)     {aRet = ((Ptr) GLresetfn_51); goto lRet;}
        GIa2 = rLit[29];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLresetfn_53);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_53() {     /* call_resetfn_52 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYresetfn; rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLresetfn_51); goto lRet;}
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[30];
        GIa1 = rLit[10];
        (--rSp)->Val = ((Ptr) GLresetfn_36);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_51() {     /* 127 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLresetfn_36);
        {aRet = (GYresetfn[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_35() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLresetfn_55);
        {aRet = (GYresetfn[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_55() {     /* call_resetfn_54 */
   {    register Ptr aRet, *rLit;
        rLit = GYresetfn;
        GIa1 = rLit[32];
        (--GIsp)->Val = ((Ptr) GLresetfn_57);
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLresetfn_57() {     /* call_resetfn_56 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLresetfn_36); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLresetfn_59);
        {aRet = (GYresetfn[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_59() {     /* call_resetfn_58 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLresetfn_36); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLresetfn_36);
        {aRet = (GYresetfn[35] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLresetfn_36() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDresetfn_60() {     /* trace #:gell-resetfn:get-body */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYresetfn,4,1,36);
  lRet:  return (aRet);}}

static Ptr GDresetfn_61() {     /* trace #:gell-resetfn:function-0 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYresetfn,36,1,36);
  lRet:  return (aRet);}}

static Ptr GDresetfn_62() {     /* trace #:gell-resetfn:function-1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYresetfn,37,1,36);
  lRet:  return (aRet);}}

static Ptr GDresetfn_63() {     /* trace #:gell-resetfn:function-2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYresetfn,38,1,36);
  lRet:  return (aRet);}}

static Ptr GDresetfn_64() {     /* trace #:gell-resetfn:function-3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYresetfn,39,1,36);
  lRet:  return (aRet);}}

static Ptr GDresetfn_65() {     /* trace #:gell-resetfn:function-n */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYresetfn,40,1,36);
  lRet:  return (aRet);}}

static Ptr GDresetfn_66() {     /* trace #:gell-resetfn:function-f */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYresetfn,41,1,36);
  lRet:  return (aRet);}}

static Ptr GDresetfn_67() {     /* trace resetfn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYresetfn,10,1,39);
  lRet:  return (aRet);}}

