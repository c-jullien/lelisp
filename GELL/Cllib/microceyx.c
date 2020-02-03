/* GELL 15.26: source file for the module: "microceyx" */
/*             translation done:           "Wed June 16 93 18:01:14 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "microceyx.h" 

static Ptr GLmicroceyx_1() {    /* #:microceyx:check-record-or-tclass */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLmicroceyx_2); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_2() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (((rSp + 1)->Val < GIbsymb) || ((rSp + 1)->Val >= GIbcons))  {aRet = ((Ptr) GLmicroceyx_3); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_5);
        {aRet = (GYmicroceyx[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_5() {    /* call_microceyx_4 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLmicroceyx_6); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_8);
        {aRet = (GYmicroceyx[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_8() {    /* call_microceyx_7 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLmicroceyx_6); goto lRet;}
        GIa2 = rLit[2];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_10);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_10() {   /* call_microceyx_9 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLmicroceyx_6); goto lRet;}
        {aRet = ((Ptr) GLmicroceyx_3); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_3() {    /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = (rSp + 1)->Val;
        GIa2 = GYmicroceyx[4];
        rA1 = rSp->Val;
        GIa1 = rA1; rA1 = llrt_call_error ();
        (rSp + 1)->Val = rA1;
        {aRet = ((Ptr) GLmicroceyx_2); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_6() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_11() {   /* #:microceyx:check-tclass */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLmicroceyx_12); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_12() {   /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_14);
        {aRet = (GYmicroceyx[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_14() {   /* call_microceyx_13 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = (rSp + 1)->Val;
        GIa2 = GYmicroceyx[5];
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        (rSp + 1)->Val = rA1;
        {aRet = ((Ptr) GLmicroceyx_12); goto lRet;}
l_102:
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_15() {   /* #:microceyx:check-field */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLmicroceyx_16); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_16() {   /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (((rSp + 2)->Val < GIbsymb) || ((rSp + 2)->Val >= GIbcons))  {aRet = ((Ptr) GLmicroceyx_17); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmicroceyx_18);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_18() {   /* 104 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLmicroceyx_19); goto lRet;}
        {aRet = ((Ptr) GLmicroceyx_17); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_17() {   /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmicroceyx_20);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_20() {   /* 105 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = GYmicroceyx[8];
        rA1 = rSp->Val;
        GIa1 = rA1; rA1 = llrt_call_error ();
        (rSp + 2)->Val = rA1;
        {aRet = ((Ptr) GLmicroceyx_16); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_19() {   /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_21() {   /* deftclass */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLmicroceyx_22); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_22() {   /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (((rSp + 2)->Val < GIbsymb) || ((rSp + 2)->Val >= GIbcons))  {aRet = ((Ptr) GLmicroceyx_23); goto lRet;}
        rA4 = (rSp + 2)->Val;
        if ((rA4 + 3)->Val == GInil)    {aRet = ((Ptr) GLmicroceyx_24); goto lRet;}
        GIa1 = (rA4 + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_26);
        {aRet = (GYmicroceyx[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_26() {   /* call_microceyx_25 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLmicroceyx_24); goto lRet;}
        {aRet = ((Ptr) GLmicroceyx_23); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_23() {   /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1;
        GIa3 = (rSp + 2)->Val;
        GIa2 = rLit[5];
        rA1 = rLit[9];
        GIa1 = rA1; rA1 = llrt_call_error ();
        (rSp + 2)->Val = rA1;
        {aRet = ((Ptr) GLmicroceyx_22); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_24() {   /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        if ((rA4 + 3)->Val != GInil)    {aRet = ((Ptr) GLmicroceyx_27); goto lRet;}
        GIa2 = rA4;
        GIa1 = rLit[10];
        (--rSp)->Val = ((Ptr) GLmicroceyx_29);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_29() {   /* call_microceyx_28 */
   {    register Ptr aRet;
        (GIsp + 2)->Val = GIa1;
        {aRet = ((Ptr) GLmicroceyx_27); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_27() {   /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 2)->Val;
        GIa1 = GInil;
        (--rSp)->Val = ((Ptr) GLmicroceyx_31);
        {aRet = (GYmicroceyx[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_31() {   /* call_microceyx_30 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_33);
        {aRet = (GYmicroceyx[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_33() {   /* call_microceyx_32 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmicroceyx_34); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_36);
        {aRet = (GYmicroceyx[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_36() {   /* call_microceyx_35 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1;
        if (rA1 == (rSp + 2)->Val)      {aRet = ((Ptr) GLmicroceyx_34); goto lRet;}
        GIa3 = rSp->Val;
        GIa2 = rLit[14];
        rA1 = rLit[9];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLmicroceyx_34); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_34() {   /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = ((Ptr) GLmicroceyx_37);
        (--rSp)->Val = rLit[2];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_37() {   /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_38);
        (--rSp)->Val = rLit[17];
        GIa2 = (rSp + 7)->Val;
        GIa1 = GInil;
        (--rSp)->Val = ((Ptr) GLmicroceyx_40);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_40() {   /* call_microceyx_39 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_38() {   /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_41);
        (--rSp)->Val = rLit[18];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_41() {   /* 111 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_42() {   /* defrecord */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBsymb, rBcons;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBsymb = GIbsymb; rBcons = GIbcons;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA4;
l_101:
        if (((rSp + 1)->Val < GIbvar) || ((rSp + 1)->Val >= rBcons))    goto l_103;
        rA4 = (rSp + 1)->Val;
        if ((rA4 + 3)->Val == rNil)     goto l_102;
l_103:
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[19];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        (rSp + 1)->Val = rA1;
        goto l_101;
l_102:
        rA1 = rSp->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        if ((Fix) (rA1) <= (Fix) 16)    goto l_105;
        rA2 = rSp->Val;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rA3 = rA1;
        rA2 = rLit[21];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
l_106:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_107;
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
l_108:
        if ((rSp->Val >= rBsymb) && (rSp->Val < rBcons))        goto l_109;
        if ((long) rSp->Val < (long) rBcons)    goto l_110;
        rA4 = rSp->Val;
        if ((rA4->Val < rBsymb) || (rA4->Val >= rBcons))        goto l_110;
        if ((long) (rA4 + 1)->Val < (long) rBcons)      goto l_110;
        rA3 = (rA4 + 1)->Val;
        if ((rA3 + 1)->Val == rNil)     goto l_109;
l_110:
        rA3 = rSp->Val;
        rA2 = rLit[22];
        rA1 = rLit[20];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        rSp->Val = rA1;
        goto l_108;
l_109:
        rA1 = rSp->Val;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        if (rA1 != rNil)        goto l_111;
        rA2 = rLit[23];
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
l_111:
        rSp += (Fix) 1;
        rA2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_106;
l_107:
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        rSp->Val = rA1;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_44);
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_44() {   /* call_microceyx_43 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmicroceyx_45); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_47);
        {aRet = (GYmicroceyx[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_47() {   /* call_microceyx_46 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1;
        if (rA1 == (rSp + 1)->Val)      {aRet = ((Ptr) GLmicroceyx_45); goto lRet;}
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[24];
        rA1 = rLit[20];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLmicroceyx_45); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_45() {   /* 113 */
   {    register Ptr aRet, rSp, rA1, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        rA1 = rNil;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, rNil);
        (--rSp)->Val = rA1;
        rA4 = (rSp + 1)->Val;
        if ((rA4 + 1)->Val == rNil)     {aRet = ((Ptr) GLmicroceyx_48); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmicroceyx_49);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA4;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmicroceyx_50); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_49() {   /* 116 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmicroceyx_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_48() {   /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = GIa4;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_53);
        {aRet = ((Ptr) GLmicroceyx_54); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_53() {   /* call_microceyx_52 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmicroceyx_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_51() {   /* 115 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = ((Ptr) GLmicroceyx_55);
        (--rSp)->Val = rLit[18];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_55() {   /* 118 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[26];
        (--rSp)->Val = ((Ptr) GLmicroceyx_56);
        (--rSp)->Val = rLit[27];
        GIa2 = rLit[28];
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_58);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_58() {   /* call_microceyx_57 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_56() {   /* 119 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_59);
        rA4 = (rSp + 7)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_60);
        (--rSp)->Val = ((Ptr) GLmicroceyx_61);
        (--rSp)->Val = rLit[29];
        (--rSp)->Val = ((Ptr) GLmicroceyx_62);
        (--rSp)->Val = rLit[18];
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_62() {   /* 123 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_63);
        (--rSp)->Val = rLit[18];
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
l_125:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_126;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA2 = rSp->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_125;
l_126:
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 16)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
l_127:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_128;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        rA2 = rSp->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_127;
l_128:
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmicroceyx_63() {   /* 124 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[30];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_61() {   /* 122 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_64);
        (--rSp)->Val = rLit[17];
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_64() {   /* 129 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_60() {   /* 121 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[31] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_59() {   /* 120 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 5;
        {aRet = (GYmicroceyx[16] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_54() {   /* #:microceyx:make-single-field-access */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYmicroceyx; rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_65);
        (--rSp)->Val = GIa3;
        (--rSp)->Val = ((Ptr) GLmicroceyx_66);
        (--rSp)->Val = ((Ptr) GLmicroceyx_67);
        (--rSp)->Val = rLit[27];
        rA2 = rA2->Val;
        rA2 = rA2->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_69);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLmicroceyx_69() {   /* call_microceyx_68 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[32];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_67() {   /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = rLit[33];
        (--rSp)->Val = ((Ptr) GLmicroceyx_71);
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_71() {   /* call_microceyx_70 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYmicroceyx; rSp = GIsp; rA2 = GIa2;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmicroceyx_72); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmicroceyx_73);
        (--rSp)->Val = rLit[35];
        rA2 = (rSp + 7)->Val;
        rA2 = rA2->Val;
        rA2 = rA2->Val;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_75);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLmicroceyx_75() {   /* call_microceyx_74 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[36];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_73() {   /* 106 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmicroceyx_76); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_72() {   /* 104 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLmicroceyx_76); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_76() {   /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa4;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_66() {   /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[31] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_65() {   /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[37];
        rA4 = (rSp + 3)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_50() {   /* #:microceyx:make-field-access */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        if ((rA4 + 1)->Val != GInil)    {aRet = ((Ptr) GLmicroceyx_77); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmicroceyx_78);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa3 = (rSp + 3)->Val;
        GIa2 = rA4->Val;
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_80);
        {aRet = ((Ptr) GLmicroceyx_81); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_80() {   /* call_microceyx_79 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[31] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_78() {   /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp + 2)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_77() {   /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rLit[38];
        (--rSp)->Val = ((Ptr) GLmicroceyx_82);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA1 = GIa4;
        rA1 = llrt_call_length (rA1, GIbcons);
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) 2));
        GIa2 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_84);
        {aRet = (rLit[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_84() {   /* call_microceyx_83 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa2 = (rSp + 6)->Val;
        rA1 = GYmicroceyx[40];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmicroceyx_50); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_82() {   /* 105 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_85);
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA1 = (rSp + 7)->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) 2));
        GIa2 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_87);
        {aRet = (GYmicroceyx[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_87() {   /* call_microceyx_86 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa2 = (rSp + 7)->Val;
        rA1 = GYmicroceyx[42];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLmicroceyx_50); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_85() {   /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_81() {   /* #:microceyx:make-access */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYmicroceyx; rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_88);
        (--rSp)->Val = rLit[27];
        rA2 = rA2->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_90);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLmicroceyx_90() {   /* call_microceyx_89 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[43];
        (--rSp)->Val = ((Ptr) GLmicroceyx_91);
        (--rSp)->Val = rLit[44];
        (--rSp)->Val = rLit[45];
        (--rSp)->Val = ((Ptr) GLmicroceyx_92);
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[46];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_92() {   /* 103 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYmicroceyx; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = rLit[48];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--GIsp)->Val = ((Ptr) GLmicroceyx_94);
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_94() {   /* call_microceyx_93 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        GIa2 = rLit[50];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_95);
        (--rSp)->Val = ((Ptr) GLmicroceyx_96);
        (--rSp)->Val = rLit[48];
        rA4 = (rSp + 13)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rLit[51];
        rA4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_96() {   /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmicroceyx_98);
        {aRet = (GYmicroceyx[49] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_98() {   /* call_microceyx_97 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_99);
        (--rSp)->Val = ((Ptr) GLmicroceyx_100);
        (--rSp)->Val = rLit[52];
        rA4 = (rSp + 15)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_100() {  /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = (rSp + 14)->Val;
        if ((rA4 + 1)->Val == GInil)    {aRet = ((Ptr) GLmicroceyx_101); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmicroceyx_102);
        (--rSp)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rLit[54];
        rA4 = (Ptr) 2;
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_102() {  /* 110 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYmicroceyx; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = rLit[48];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--GIsp)->Val = ((Ptr) GLmicroceyx_104);
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_104() {  /* call_microceyx_103 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GYmicroceyx[55];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        GIa4 = rA1;
        {aRet = ((Ptr) GLmicroceyx_105); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_101() {  /* 108 */
   {    register Ptr aRet;
        GIa4 = GYmicroceyx[56];
        {aRet = ((Ptr) GLmicroceyx_105); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_105() {  /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = rLit[57];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_99() {   /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_95() {   /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_91() {   /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_88() {   /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = rLit[33];
        (--rSp)->Val = ((Ptr) GLmicroceyx_107);
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_107() {  /* call_microceyx_106 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYmicroceyx; rSp = GIsp; rA2 = GIa2;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmicroceyx_108); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmicroceyx_109);
        (--rSp)->Val = ((Ptr) GLmicroceyx_110);
        (--rSp)->Val = rLit[35];
        rA2 = (rSp + 5)->Val;
        rA2 = rA2->Val;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_112);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLmicroceyx_112() {  /* call_microceyx_111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[58];
        (--rSp)->Val = ((Ptr) GLmicroceyx_113);
        (--rSp)->Val = rLit[59];
        (--rSp)->Val = rLit[60];
        (--rSp)->Val = ((Ptr) GLmicroceyx_114);
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = ((Ptr) GLmicroceyx_115);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = ((Ptr) GLmicroceyx_116);
        {register Ptr aux;
                aux = (rSp + 16)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[61];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_116() {  /* 118 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYmicroceyx; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = rLit[48];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--GIsp)->Val = ((Ptr) GLmicroceyx_118);
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_118() {  /* call_microceyx_117 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_115() {  /* 117 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[62];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_114() {  /* 116 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = (rSp + 12)->Val;
        if ((rA4 + 1)->Val == GInil)    {aRet = ((Ptr) GLmicroceyx_119); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmicroceyx_120);
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = ((Ptr) GLmicroceyx_121);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = ((Ptr) GLmicroceyx_122);
        (--rSp)->Val = rLit[48];
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rLit[63];
        rA4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_122() {  /* 123 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmicroceyx_124);
        {aRet = (GYmicroceyx[49] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_124() {  /* call_microceyx_123 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_121() {  /* 122 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_125);
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = ((Ptr) GLmicroceyx_126);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = ((Ptr) GLmicroceyx_127);
        (--rSp)->Val = rLit[52];
        rA4 = (rSp + 21)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_127() {  /* 126 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_126() {  /* 125 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_128);
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = ((Ptr) GLmicroceyx_129);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = ((Ptr) GLmicroceyx_130);
        rA4 = (rSp + 23)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rLit[64];
        rA4 = (Ptr) 2;
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_130() {  /* 129 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYmicroceyx; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = rLit[48];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--GIsp)->Val = ((Ptr) GLmicroceyx_132);
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_132() {  /* call_microceyx_131 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_129() {  /* 128 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[65];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_128() {  /* 127 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[66];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_125() {  /* 124 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_120() {  /* 121 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmicroceyx_133); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_119() {  /* 119 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmicroceyx_134);
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = ((Ptr) GLmicroceyx_135);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = ((Ptr) GLmicroceyx_136);
        (--rSp)->Val = rLit[48];
        (--rSp)->Val = GIa4->Val;
        (--rSp)->Val = rLit[67];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_136() {  /* 132 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmicroceyx_138);
        {aRet = (GYmicroceyx[49] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_138() {  /* call_microceyx_137 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_135() {  /* 131 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_139);
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = ((Ptr) GLmicroceyx_140);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = ((Ptr) GLmicroceyx_141);
        (--rSp)->Val = rLit[52];
        rA4 = (rSp + 21)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_141() {  /* 135 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_140() {  /* 134 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[68];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_139() {  /* 133 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_134() {  /* 130 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmicroceyx_133); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_133() {  /* 120 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa4;
        GIa4 = (Ptr) 4;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_113() {  /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_110() {  /* 114 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_109() {  /* 113 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        {aRet = ((Ptr) GLmicroceyx_142); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_108() {  /* 111 */
   {    register Ptr aRet;
        GIa2 = GInil;
        {aRet = ((Ptr) GLmicroceyx_142); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_142() {  /* 112 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_143() {  /* tclass-namep */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbsymb) || (rA1 >= GIbcons))        {aRet = ((Ptr) GLmicroceyx_144); goto lRet;}
        GIa2 = rLit[10];
        (--rSp)->Val = ((Ptr) GLmicroceyx_146);
        {aRet = (rLit[69] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_146() {  /* call_microceyx_145 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmicroceyx_144); goto lRet;}
        GIa2 = rLit[2];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_148);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_148() {  /* call_microceyx_147 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmicroceyx_144); goto lRet;}
        GIa1 = GYmicroceyx[70];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_144() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_149() {  /* record-namep */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYmicroceyx; rA1 = GIa1;
        if ((rA1 < GIbsymb) || (rA1 >= GIbcons))        {aRet = ((Ptr) GLmicroceyx_150); goto lRet;}
        GIa2 = rLit[20];
        (--GIsp)->Val = ((Ptr) GLmicroceyx_152);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_152() {  /* call_microceyx_151 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmicroceyx_150); goto lRet;}
        GIa1 = GYmicroceyx[70];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_150() {  /* 101 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_153() {  /* field-list */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa2 = rA1;
        rA1 = GYmicroceyx[71];
        (--rSp)->Val = ((Ptr) GLmicroceyx_155);
        {aRet = ((Ptr) GLmicroceyx_1); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_155() {  /* call_microceyx_154 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_157);
        {aRet = (GYmicroceyx[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_157() {  /* call_microceyx_156 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLmicroceyx_158); goto lRet;}
        GIa2 = rLit[20];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_160);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_160() {  /* call_microceyx_159 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GIa1->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_158() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GInil;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmicroceyx_161); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_161() {  /* #:microceyx:tclass-field-list */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        if (rA1 != GInil)       goto l_101;
        rA1 = rA2;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rA1 != rLit[10])    goto l_103;
        rA1 = rA2;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        (--rSp)->Val = (rA1 + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_162);
        rA2 = rLit[2];
        (--rSp)->Val = ((Ptr) GLmicroceyx_164);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmicroceyx_164() {  /* call_microceyx_163 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (GIa1 + 1)->Val;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_162() {  /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmicroceyx_161); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_165() {  /* defmake */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rA4;
        rA3 = rA3->Val;
        (--rSp)->Val = rA3;
l_101:
        if (((rSp + 1)->Val >= GIbvar) && ((rSp + 1)->Val < GIbcons))   goto l_102;
        rA3 = (rSp + 1)->Val;
        GIa2 = rLit[72];
        rA1 = rLit[73];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        (rSp + 1)->Val = rA1;
        goto l_101;
l_102:
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = rLit[27];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLmicroceyx_166);
        (--rSp)->Val = rLit[74];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLmicroceyx_167); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_167() {  /* 105 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmicroceyx_168); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_169);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_169() {  /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_171);
        {aRet = (GYmicroceyx[75] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_171() {  /* call_microceyx_170 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLmicroceyx_167); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_168() {  /* 106 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (GYmicroceyx[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_166() {  /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_172() {  /* omakeq */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        GIa4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        GIa2 = rA1;
        rA1 = GYmicroceyx[74];
        (--rSp)->Val = ((Ptr) GLmicroceyx_174);
        {aRet = ((Ptr) GLmicroceyx_1); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_174() {  /* call_microceyx_173 */
   {    register Ptr aRet;
        (GIsp + 4)->Val = GIa1;
        {aRet = ((Ptr) GLmicroceyx_175); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_175() {  /* 101 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        if ((long) (rSp + 3)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmicroceyx_176); goto lRet;}
        rA3 = (rSp + 3)->Val;
        (rSp + 3)->Val = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        GIa2 = (rSp + 4)->Val;
        GIa1 = GYmicroceyx[74];
        (--rSp)->Val = ((Ptr) GLmicroceyx_178);
        {aRet = ((Ptr) GLmicroceyx_15); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLmicroceyx_178() {  /* call_microceyx_177 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (rSp + 1)->Val = rA1;
        if ((long) (rSp + 3)->Val >= (long) GIbcons)    goto l_104;
        if ((rSp + 3)->Val != GInil)    goto l_105;
        GIa2 = rLit[76];
        goto l_106;
l_105:
        GIa2 = rLit[77];
l_106:
        GIa3 = (rSp + 3)->Val;
        rA1 = rLit[74];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = (rSp + 3)->Val;
        rSp->Val = rA4->Val;
        (rSp + 3)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_179);
        (--rSp)->Val = ((Ptr) GLmicroceyx_180);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_180() {  /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmicroceyx; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[78];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_179() {  /* 107 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 2)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 2)->Val = rA1;
        {aRet = ((Ptr) GLmicroceyx_175); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_176() {  /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1;
        if ((rSp + 3)->Val == GInil)    goto l_110;
        GIa3 = (rSp + 3)->Val;
        GIa2 = rLit[77];
        rA1 = rLit[74];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_110:
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = rLit[79];
        (--rSp)->Val = ((Ptr) GLmicroceyx_181);
        (--rSp)->Val = ((Ptr) GLmicroceyx_182);
        (--rSp)->Val = rLit[78];
        (--rSp)->Val = ((Ptr) GLmicroceyx_183);
        GIa2 = rLit[28];
        rA1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_185);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_185() {  /* call_microceyx_184 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_183() {  /* 114 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_182() {  /* 113 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_181() {  /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_186);
        rA1 = (rSp + 6)->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[80];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_186() {  /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYmicroceyx[16] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_187() {  /* ogetq */
   {    register Ptr aRet, rSp, rA1, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rA4;
        rA3 = rA3->Val;
        (--rSp)->Val = rA3;
        GIa2 = rA1;
        rA1 = GYmicroceyx[81];
        (--rSp)->Val = ((Ptr) GLmicroceyx_189);
        {aRet = ((Ptr) GLmicroceyx_1); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_189() {  /* call_microceyx_188 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 2)->Val = rA1;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rA1;
        rA1 = GYmicroceyx[81];
        (--rSp)->Val = ((Ptr) GLmicroceyx_191);
        {aRet = ((Ptr) GLmicroceyx_15); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_191() {  /* call_microceyx_190 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = ((Ptr) GLmicroceyx_192);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_192() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_193() {  /* oputq */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rA4;
        rA2 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        (--rSp)->Val = rA3;
        rA2 = rA2->Val;
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA1 = GYmicroceyx[82];
        (--rSp)->Val = ((Ptr) GLmicroceyx_195);
        {aRet = ((Ptr) GLmicroceyx_1); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_195() {  /* call_microceyx_194 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 3)->Val = rA1;
        GIa3 = (rSp + 2)->Val;
        GIa2 = rA1;
        rA1 = GYmicroceyx[82];
        (--rSp)->Val = ((Ptr) GLmicroceyx_197);
        {aRet = ((Ptr) GLmicroceyx_15); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_197() {  /* call_microceyx_196 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 2)->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = ((Ptr) GLmicroceyx_198);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_198() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_199() {  /* omatchq */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        rA4 = rA4->Val;
        (--rSp)->Val = rA4;
        GIa2 = rA1;
        rA1 = GYmicroceyx[83];
        (--rSp)->Val = ((Ptr) GLmicroceyx_201);
        {aRet = ((Ptr) GLmicroceyx_11); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_201() {  /* call_microceyx_200 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[84];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLmicroceyx_202);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_202() {  /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_203() {  /* demethod */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        rA2 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA2;
        (--rSp)->Val = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        (--rSp)->Val = rA3;
l_101:
        if (((rSp + 4)->Val >= GIbsymb) && ((rSp + 4)->Val < GIbcons))  goto l_102;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[72];
        rA1 = rLit[85];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        (rSp + 4)->Val = rA1;
        goto l_101;
l_102:
        rA2 = (rSp + 4)->Val;
        rA2 = (rA2 + 3)->Val;
        rA1 = rLit[85];
        (--rSp)->Val = ((Ptr) GLmicroceyx_205);
        {aRet = ((Ptr) GLmicroceyx_1); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_205() {  /* call_microceyx_204 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_207);
        {aRet = (GYmicroceyx[86] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_207() {  /* call_microceyx_206 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 != rNil)        goto l_104;
        GIa3 = (rSp + 1)->Val;
        rA2 = rLit[87];
        rA1 = rLit[85];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = ((Ptr) GXpopj6);
        (--rSp)->Val = rLit[27];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA2 = (rSp + 6)->Val;
        rA1 = (rSp + 7)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (--rSp)->Val = rA1;
        if ((rSp + 5)->Val != rNil)     goto l_106;
        GIa4 = (rSp + 6)->Val;
        {aRet = ((Ptr) GLmicroceyx_208); goto lRet;}
l_106:
        (--rSp)->Val = ((Ptr) GLmicroceyx_209);
        (--rSp)->Val = ((Ptr) GLmicroceyx_210);
        (--rSp)->Val = rLit[79];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLmicroceyx_211); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmicroceyx_211() {  /* 110 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmicroceyx_212); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa3 = rSp->Val;
        GIa2 = (rSp + 10)->Val;
        GIa1 = GYmicroceyx[85];
        (--rSp)->Val = ((Ptr) GLmicroceyx_214);
        {aRet = ((Ptr) GLmicroceyx_15); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_214() {  /* call_microceyx_213 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_215);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_216);
        (--rSp)->Val = ((Ptr) GLmicroceyx_217);
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_217() {  /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 18)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_216() {  /* 113 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_215() {  /* 112 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLmicroceyx_211); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_212() {  /* 111 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYmicroceyx[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_210() {  /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_209() {  /* 108 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmicroceyx_208); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_208() {  /* 107 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa4;
        GIa4 = (Ptr) 4;
        {aRet = (GYmicroceyx[16] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_218() {  /* send-error */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmicroceyx_219);
        (--rSp)->Val = rLit[88];
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_219() {  /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 == GInil)       goto l_102;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[89] + 2)->Val; goto lRet;}
l_102:
        rA2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rA1;
        rA2 = rLit[90];
        rA1 = rLit[91];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmicroceyx_220() {  /* sendq */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[91];
        (--rSp)->Val = ((Ptr) GLmicroceyx_221);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_221() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYmicroceyx[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_222() {  /* sendf */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[92];
        (--rSp)->Val = rLit[93];
        (--rSp)->Val = ((Ptr) GLmicroceyx_223);
        (--rSp)->Val = rLit[91];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[94];
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_223() {  /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYmicroceyx[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmicroceyx_224() {  /* sendfq */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[95];
        (--rSp)->Val = ((Ptr) GLmicroceyx_225);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_225() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYmicroceyx[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_226() {  /* plink */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[96];
        rA2 = (Ptr) 1;
        {aRet = (rLit[97] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = rNil;
        goto l_nlist_microceyx_228;
l_nlist_microceyx_227:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_microceyx_228:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_microceyx_227;}
        if (rA1 != rNil)        {aRet = ((Ptr) GLmicroceyx_229); goto lRet;}
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmicroceyx_231);
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmicroceyx_231() {  /* call_microceyx_230 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_104;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (GYmicroceyx[13] + 2)->Val; goto lRet;}
l_104:
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmicroceyx_229() {  /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (GYmicroceyx[98] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmicroceyx_232() {  /* <=p */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmicroceyx; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[69];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GDmicroceyx_233() {  /* trace deftclass */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,9,99,100);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_234() {  /* trace defrecord */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,20,99,100);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_235() {  /* trace tclass-namep */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,0,99,100);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_236() {  /* trace record-namep */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,1,99,100);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_237() {  /* trace field-list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,71,99,100);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_238() {  /* trace defmake */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,73,99,100);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_239() {  /* trace omakeq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,74,99,100);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_240() {  /* trace ogetq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,81,99,100);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_241() {  /* trace oputq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,82,99,100);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_242() {  /* trace omatchq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,83,99,100);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_243() {  /* trace demethod */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,85,99,100);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_244() {  /* trace send-error */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,101,99,102);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_245() {  /* trace sendq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,103,99,100);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_246() {  /* trace sendf */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,95,99,100);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_247() {  /* trace sendfq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,104,99,100);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_248() {  /* trace plink */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,96,99,105);
  lRet:  return (aRet);}}

static Ptr GDmicroceyx_249() {  /* trace <=p */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmicroceyx,106,99,100);
  lRet:  return (aRet);}}

