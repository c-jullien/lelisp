/* GELL 15.26: source file for the module: "trace" */
/*             translation done:           "Wed June 16 93 18:01:33 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "trace.h" 

static Ptr GLtrace_1() {        /* #:trace:output */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[0];
        (--rSp)->Val = rLit[1];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_2() {        /* #:trace:flat */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[3]->Val;
        rLit[3]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[4];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_4);
        {aRet = ((Ptr) GLtrace_5); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_4() {        /* call_trace_3 */
   {    register Ptr aRet, *rLit;
        rLit = GYtrace;
        GIa1 = rLit[3]->Val;
        (--GIsp)->Val = ((Ptr) GLtrace_7);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_7() {        /* call_trace_6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYtrace[3]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_5() {        /* #:trace:flat-aux */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
l_GLtrace_5:
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_101;
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if ((long) rA1 >= (long) GIbcons)       goto l_103;
        rA2 = rLit[3]->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[3]->Val = rA1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLtrace_9);
        goto l_GLtrace_5;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtrace_9() {        /* call_trace_8 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLtrace_5); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_10() {       /* trace */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLtrace_11); goto lRet;}
        (--rSp)->Val = rA1;
        {aRet = ((Ptr) GLtrace_12); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_12() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_104;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLtrace_12);
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_104:
        rSp += (Fix) 1;
        if (rLit[8]->Val == GInil)      {aRet = ((Ptr) GLtrace_13); goto lRet;}
        rA1 = rLit[9];
        (--rSp)->Val = ((Ptr) GLtrace_15);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_15() {       /* call_trace_14 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYtrace; rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLtrace_13); goto lRet;}
        if (rLit[11]->Val != rNil)      {aRet = ((Ptr) GLtrace_13); goto lRet;}
        if (rLit[12]->Val == rNil)      {aRet = ((Ptr) GLtrace_13); goto lRet;}
        (--rSp)->Val = ((Ptr) GLtrace_16);
        (--rSp)->Val = rLit[13];
        (--rSp)->Val = ((Ptr) GLtrace_17);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_17() {       /* 108 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) 2));
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLtrace_19);
        {aRet = (GYtrace[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_19() {       /* call_trace_18 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) * (Fix) 3));
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLtrace_20);
        GIa4 = (Ptr) 0;
        {aRet = (GYtrace[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_20() {       /* 109 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) 2));
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLtrace_21);
        GIa4 = (Ptr) 0;
        {aRet = (GYtrace[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_21() {       /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 8;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_16() {       /* 107 */
   {    register Ptr aRet;
        GYtrace[11]->Val = GIa1;
        {aRet = ((Ptr) GLtrace_13); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_13() {       /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_11() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYtrace[8]->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_22() {       /* untrace */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = rA1;
        if (rA4 != GInil)       goto l_101;
        rSp->Val = rLit[8]->Val;
        rA4 = rLit[8]->Val;
l_101:
        rLit[19]->Val = rA4;
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLtrace_23); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtrace_23() {       /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_103;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLtrace_23);
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
l_103:
        rSp += (Fix) 1;
        if (rLit[8]->Val != GInil)      {aRet = ((Ptr) GLtrace_24); goto lRet;}
        rA1 = rLit[9];
        (--rSp)->Val = ((Ptr) GLtrace_26);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_26() {       /* call_trace_25 */
   {    register Ptr aRet, *rLit, rNil;
        rLit = GYtrace; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLtrace_24); goto lRet;}
        if (rLit[11]->Val == rNil)      {aRet = ((Ptr) GLtrace_24); goto lRet;}
        GIa1 = rLit[11]->Val;
        (--GIsp)->Val = ((Ptr) GLtrace_28);
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_28() {       /* call_trace_27 */
   {    register Ptr aRet;
        GYtrace[11]->Val = GInil;
        {aRet = ((Ptr) GLtrace_24); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_24() {       /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_29() {       /* #:trace:untrace-one */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[22];
        (--rSp)->Val = ((Ptr) GLtrace_31);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_31() {       /* call_trace_30 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((long) rA1 >= (long) GIbcons)       goto l_101;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[24];
        rA1 = rLit[25];
        rSp += (Fix) 2;
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
l_101:
        GIa2 = rLit[27];
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_33);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_33() {       /* call_trace_32 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLtrace_34); goto lRet;}
        rA2 = rSp->Val;
        GIa3 = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_36);
        {aRet = (GYtrace[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLtrace_36() {       /* call_trace_35 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        GIa2 = rLit[27];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_37);
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_34() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        GIa2 = rLit[28];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_39);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_39() {       /* call_trace_38 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLtrace_40); goto lRet;}
        GIa2 = rLit[28];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_42);
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_42() {       /* call_trace_41 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        rA2 = rSp->Val;
        GIa3 = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_37);
        {aRet = (GYtrace[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLtrace_40() {       /* 105 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        rA2 = rSp->Val;
        GIa3 = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_37);
        {aRet = (GYtrace[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLtrace_37() {       /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        GIa2 = rLit[22];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_44);
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_44() {       /* call_trace_43 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        GIa2 = rLit[8]->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_46);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_46() {       /* call_trace_45 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYtrace[8]->Val = GIa1;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_47() {       /* default-specif */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        if (GIa1 != rLit[32])   {aRet = ((Ptr) GLtrace_48); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLtrace_49);
        (--rSp)->Val = rLit[33];
        (--rSp)->Val = ((Ptr) GLtrace_50);
        (--rSp)->Val = rLit[34];
        (--rSp)->Val = ((Ptr) GLtrace_51);
        (--rSp)->Val = rLit[35];
        (--rSp)->Val = rLit[36]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_51() {       /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[38];
        (--rSp)->Val = ((Ptr) GLtrace_52);
        (--rSp)->Val = rLit[39];
        (--rSp)->Val = rLit[40]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_52() {       /* 109 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLtrace_53); goto lRet;}
        GIa1 = GYtrace[42]->Val;
        (--GIsp)->Val = ((Ptr) GLtrace_55);
        {aRet = ((Ptr) GLtrace_2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_55() {       /* call_trace_54 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLtrace_56); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_56() {       /* 110 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYtrace; rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLtrace_57); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLtrace_58);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[43];
        rA4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtrace_58() {       /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLtrace_60);
        {aRet = (GYtrace[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_60() {       /* call_trace_59 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLtrace_56); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_57() {       /* 111 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        GIa4 = rA1;
        {aRet = ((Ptr) GLtrace_61); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_53() {       /* 107 */
   {    register Ptr aRet;
        GIa1 = GYtrace[42]->Val;
        (--GIsp)->Val = ((Ptr) GLtrace_63);
        {aRet = ((Ptr) GLtrace_2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_63() {       /* call_trace_62 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLtrace_64); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_64() {       /* 113 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLtrace_65); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLtrace_66);
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_68);
        {aRet = (GYtrace[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtrace_68() {       /* call_trace_67 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[46];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[43];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_66() {       /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLtrace_70);
        {aRet = (GYtrace[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_70() {       /* call_trace_69 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLtrace_64); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_65() {       /* 114 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        GIa4 = rA1;
        {aRet = ((Ptr) GLtrace_61); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_61() {       /* 108 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa4;
        GIa4 = (Ptr) 4;
        {aRet = (GYtrace[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_50() {       /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_49() {       /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_48() {       /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        if (GIa1 != rLit[47])   {aRet = ((Ptr) GLtrace_71); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLtrace_72);
        (--rSp)->Val = rLit[33];
        (--rSp)->Val = ((Ptr) GLtrace_73);
        (--rSp)->Val = rLit[34];
        (--rSp)->Val = ((Ptr) GLtrace_74);
        (--rSp)->Val = rLit[35];
        (--rSp)->Val = rLit[36]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_74() {       /* 120 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[48];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_73() {       /* 119 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_72() {       /* 118 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_71() {       /* 116 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rLit[49])    goto l_121;
        rA1 = rLit[50];
        {aRet = (rSp++)->Val; goto lRet;}
l_121:
        if (rA1 != rLit[51])    goto l_122;
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_122:
        if (rA1 != rLit[52])    goto l_123;
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_123:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_75() {       /* parse-specif */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GYtrace[53];
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLtrace_76); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_76() {       /* 101 */
   {    register Ptr aRet, rSp, rA1, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLtrace_77); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, GIa2, rBcons, rNil);
        if (rA1 != rNil)        {aRet = ((Ptr) GLtrace_78); goto lRet;}
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLtrace_80);
        {aRet = ((Ptr) GLtrace_47); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtrace_80() {       /* call_trace_79 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GIsp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = ((Ptr) GLtrace_78); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_78() {       /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLtrace_76); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_77() {       /* 102 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rSp += (Fix) 3;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_81() {       /* build-tracing-fval */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[42]->Val;
        (--rSp)->Val = ((Ptr) GLtrace_82);
        (--rSp)->Val = rLit[54];
        (--rSp)->Val = ((Ptr) GLtrace_83);
        (--rSp)->Val = rLit[55];
        (--rSp)->Val = rLit[56];
        (--rSp)->Val = ((Ptr) GLtrace_84);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = rLit[58];
        (--rSp)->Val = rLit[59];
        (--rSp)->Val = ((Ptr) GLtrace_85);
        (--rSp)->Val = rLit[60];
        GIa2 = rA1;
        rA1 = rLit[49];
        rA1 = llrt_call_cassq (rA1, GIa2, GIbcons, GInil);
        (--rSp)->Val = rA1->Val;
        rA1 = rLit[9];
        (--rSp)->Val = ((Ptr) GLtrace_87);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_87() {       /* call_trace_86 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYtrace; rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLtrace_88); goto lRet;}
        if (rLit[12]->Val == rNil)      {aRet = ((Ptr) GLtrace_88); goto lRet;}
        (--rSp)->Val = ((Ptr) GLtrace_89);
        (--rSp)->Val = rLit[61];
        (--rSp)->Val = ((Ptr) GLtrace_90);
        (--rSp)->Val = ((Ptr) GLtrace_91);
        (--rSp)->Val = rLit[62];
        (--rSp)->Val = rLit[11];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_91() {       /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_90() {       /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa2 = (rSp + 17)->Val;
        rA1 = rLit[32];
        rA1 = llrt_call_cassq (rA1, GIa2, GIbcons, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_89() {       /* 108 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLtrace_92); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_88() {       /* 106 */
   {    register Ptr aRet, *rLit, rA1, rA2;
        rLit = GYtrace; rA1 = GIa1; rA2 = GIa2;
        rA2 = (GIsp + 14)->Val;
        rA1 = rLit[32];
        rA1 = llrt_call_cassq (rA1, rA2, GIbcons, GInil);
        rA2 = rA1;
        rA1 = rLit[63];
        GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa4 = rA1;
        {aRet = ((Ptr) GLtrace_92); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtrace_92() {       /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = ((Ptr) GLtrace_93);
        (--rSp)->Val = rLit[60];
        rA2 = (rSp + 17)->Val;
        rA1 = rLit[51];
        rA1 = llrt_call_cassq (rA1, rA2, GIbcons, GInil);
        (--rSp)->Val = rA1->Val;
        (--rSp)->Val = ((Ptr) GLtrace_94);
        (--rSp)->Val = rLit[64];
        (--rSp)->Val = rLit[65];
        (--rSp)->Val = ((Ptr) GLtrace_95);
        (--rSp)->Val = rLit[66];
        (--rSp)->Val = rLit[67];
        (--rSp)->Val = ((Ptr) GLtrace_96);
        (--rSp)->Val = rLit[35];
        rA2 = rLit[68];
        rA1 = rLit[36]->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtrace_96() {       /* 114 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_95() {       /* 113 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_94() {       /* 112 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_93() {       /* 111 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_85() {       /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLtrace_97);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = ((Ptr) GLtrace_98);
        (--rSp)->Val = ((Ptr) GLtrace_99);
        (--rSp)->Val = rLit[69];
        (--rSp)->Val = ((Ptr) GLtrace_100);
        (--rSp)->Val = rLit[55];
        (--rSp)->Val = ((Ptr) GLtrace_101);
        (--rSp)->Val = rLit[70];
        rA2 = (rSp + 21)->Val;
        rA1 = rLit[49];
        rA1 = llrt_call_cassq (rA1, rA2, rBcons, rNil);
        (--rSp)->Val = rA1->Val;
        (--rSp)->Val = ((Ptr) GLtrace_102);
        (--rSp)->Val = rLit[71];
        (--rSp)->Val = rLit[72];
        rA2 = (rSp + 25)->Val;
        rA1 = rLit[52];
        rA1 = llrt_call_cassq (rA1, rA2, rBcons, rNil);
        (--rSp)->Val = rA1->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtrace_102() {      /* 120 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_101() {      /* 119 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtrace_103);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = rLit[73];
        (--rSp)->Val = ((Ptr) GLtrace_104);
        (--rSp)->Val = rLit[52];
        (--rSp)->Val = rLit[74]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_104() {      /* 122 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_103() {      /* 121 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtrace_105);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = rLit[75];
        (--rSp)->Val = ((Ptr) GLtrace_106);
        (--rSp)->Val = rLit[76];
        (--rSp)->Val = rLit[74]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_106() {      /* 124 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_105() {      /* 123 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_100() {      /* 118 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_99() {       /* 117 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_98() {       /* 116 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLtrace_107);
        (--rSp)->Val = rLit[60];
        GIa2 = (rSp + 17)->Val;
        rA1 = rLit[49];
        rA1 = llrt_call_cassq (rA1, GIa2, GIbcons, GInil);
        (--rSp)->Val = rA1->Val;
        rA1 = rLit[9];
        (--rSp)->Val = ((Ptr) GLtrace_109);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_109() {      /* call_trace_108 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYtrace; rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLtrace_110); goto lRet;}
        if (rLit[12]->Val == rNil)      {aRet = ((Ptr) GLtrace_110); goto lRet;}
        (--rSp)->Val = ((Ptr) GLtrace_111);
        (--rSp)->Val = rLit[61];
        (--rSp)->Val = ((Ptr) GLtrace_112);
        (--rSp)->Val = ((Ptr) GLtrace_113);
        (--rSp)->Val = rLit[62];
        (--rSp)->Val = rLit[11];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_113() {      /* 130 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_112() {      /* 129 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa2 = (rSp + 21)->Val;
        rA1 = rLit[47];
        rA1 = llrt_call_cassq (rA1, GIa2, GIbcons, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_111() {      /* 128 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLtrace_114); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_110() {      /* 126 */
   {    register Ptr aRet, *rLit, rA1, rA2;
        rLit = GYtrace; rA1 = GIa1; rA2 = GIa2;
        rA2 = (GIsp + 18)->Val;
        rA1 = rLit[47];
        rA1 = llrt_call_cassq (rA1, rA2, GIbcons, GInil);
        rA2 = rA1;
        rA1 = rLit[63];
        GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa4 = rA1;
        {aRet = ((Ptr) GLtrace_114); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtrace_114() {      /* 127 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa4;
        GIa4 = (Ptr) 3;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_107() {      /* 125 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[77];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_97() {       /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 5;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_84() {       /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtrace_115);
        (--rSp)->Val = rLit[76];
        (--rSp)->Val = rLit[74]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_115() {      /* 131 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_83() {       /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_82() {       /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_116() {      /* #:trace:trace-one */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rLit[36]->Val;
        rLit[36]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[78];
        (--rSp)->Val = ((Ptr) GLtrace_116);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        if ((long) rA1 < (long) rBcons) goto l_102;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rLit[36]->Val = rA1->Val;
l_102:
        rA2 = rLit[79]->Val;
        rA1 = rLit[36]->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_104;
        GIa3 = rLit[36]->Val;
        rA2 = rLit[80];
        rA1 = rLit[22];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_104:
        rA1 = rLit[36]->Val;
        (--rSp)->Val = ((Ptr) GLtrace_118);
        {aRet = (rLit[81] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtrace_118() {      /* call_trace_117 */
   {    register Ptr aRet, *rLit;
        rLit = GYtrace;
        if ((long) GIa1 < (long) GIbcons)       {aRet = ((Ptr) GLtrace_119); goto lRet;}
        GIa1 = rLit[36]->Val;
        (--GIsp)->Val = ((Ptr) GLtrace_121);
        {aRet = (rLit[81] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_121() {      /* call_trace_120 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYtrace; rA1 = GIa1;
        if (rLit[82] != rA1->Val)       {aRet = ((Ptr) GLtrace_119); goto lRet;}
        GIa3 = rLit[36]->Val;
        GIa2 = rLit[83];
        rA1 = rLit[22];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLtrace_119); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_119() {      /* 106 */
   {    register Ptr aRet, *rLit, rA1, rNil;
        rLit = GYtrace; rA1 = GIa1; rNil = GInil;
        GIa2 = rLit[8]->Val;
        rA1 = rLit[36]->Val;
        rA1 = llrt_call_memq (rA1, GIa2, GIbcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLtrace_122); goto lRet;}
        rA1 = rLit[36]->Val;
        (--GIsp)->Val = ((Ptr) GLtrace_122);
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_122() {      /* 108 */
   {    register Ptr aRet, *rLit;
        rLit = GYtrace;
        GIa2 = rLit[28];
        GIa1 = rLit[36]->Val;
        (--GIsp)->Val = ((Ptr) GLtrace_124);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_124() {      /* call_trace_123 */
   {    register Ptr aRet, *rLit;
        rLit = GYtrace;
        GIa4 = GIa1->Val;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLtrace_125); goto lRet;}
        GIa1 = rLit[36]->Val;
        (--GIsp)->Val = ((Ptr) GLtrace_127);
        {aRet = (rLit[84] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_127() {      /* call_trace_126 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLtrace_125); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_125() {      /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa2 = rLit[28];
        GIa1 = rLit[36]->Val;
        (--rSp)->Val = ((Ptr) GLtrace_129);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_129() {      /* call_trace_128 */
   {    register Ptr aRet, *rLit;
        rLit = GYtrace;
        GIa3 = (GIa1 + 1)->Val;
        if (GIa3 != GInil)      {aRet = ((Ptr) GLtrace_130); goto lRet;}
        GIa1 = rLit[36]->Val;
        (--GIsp)->Val = ((Ptr) GLtrace_132);
        {aRet = (rLit[81] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_132() {      /* call_trace_131 */
   {    register Ptr aRet;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLtrace_130); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_130() {      /* 110 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYtrace; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rLit[74]->Val;
        rLit[74]->Val = (rSp + 2)->Val;
        (--rSp)->Val = rLit[42]->Val;
        rLit[42]->Val = (rSp + 4)->Val;
        (--rSp)->Val = rLit[40]->Val;
        rLit[40]->Val = (rSp + 6)->Val;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[85];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa2 = rLit[28];
        GIa1 = rLit[36]->Val;
        (--rSp)->Val = ((Ptr) GLtrace_134);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_134() {      /* call_trace_133 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_112;
        rA2 = (rSp + 13)->Val;
        rA1 = rLit[86];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 13)->Val = rA1;
l_112:
        rA1 = rLit[40]->Val;
        if (rA1 == rLit[87])    goto l_115;
        if (rA1 == rLit[88])    goto l_115;
        if (rA1 == rLit[89])    goto l_115;
        if (rA1 != rLit[90])    goto l_114;
l_115:
        rA4 = (rSp + 9)->Val;
        rLit[42]->Val = rA4->Val;
        rA2 = (rA4 + 1)->Val;
        rA1 = rLit[63];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rLit[74]->Val = rA1;
        {aRet = ((Ptr) GLtrace_135); goto lRet;}
l_114:
        if (rA1 != rLit[91])    {aRet = ((Ptr) GLtrace_136); goto lRet;}
        rLit[42]->Val = rNil;
        (--rSp)->Val = ((Ptr) GLtrace_137);
        (--rSp)->Val = rLit[74];
        (--rSp)->Val = ((Ptr) GLtrace_138);
        (--rSp)->Val = rLit[35];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLtrace_138() {      /* 118 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[92];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_137() {      /* 117 */
   {    register Ptr aRet;
        GYtrace[74]->Val = GIa1;
        {aRet = ((Ptr) GLtrace_135); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_136() {      /* 116 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        if (GIa1 != rLit[93])   {aRet = ((Ptr) GLtrace_139); goto lRet;}
l_120:
        rLit[42]->Val = rLit[94];
        (--rSp)->Val = ((Ptr) GLtrace_140);
        (--rSp)->Val = rLit[74];
        (--rSp)->Val = ((Ptr) GLtrace_141);
        (--rSp)->Val = rLit[35];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_141() {      /* 122 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[95];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_140() {      /* 121 */
   {    register Ptr aRet;
        GYtrace[74]->Val = GIa1;
        {aRet = ((Ptr) GLtrace_135); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_139() {      /* 119 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        if (GIa1 != rLit[96])   {aRet = ((Ptr) GLtrace_142); goto lRet;}
        rLit[42]->Val = rLit[97];
        (--rSp)->Val = ((Ptr) GLtrace_143);
        (--rSp)->Val = rLit[74];
        (--rSp)->Val = ((Ptr) GLtrace_144);
        (--rSp)->Val = rLit[35];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_144() {      /* 125 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[98];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_143() {      /* 124 */
   {    register Ptr aRet;
        GYtrace[74]->Val = GIa1;
        {aRet = ((Ptr) GLtrace_135); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_142() {      /* 123 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        if (GIa1 != rLit[99])   {aRet = ((Ptr) GLtrace_145); goto lRet;}
        rLit[42]->Val = rLit[100];
        (--rSp)->Val = ((Ptr) GLtrace_146);
        (--rSp)->Val = rLit[74];
        (--rSp)->Val = ((Ptr) GLtrace_147);
        (--rSp)->Val = rLit[35];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_147() {      /* 128 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[101];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_146() {      /* 127 */
   {    register Ptr aRet;
        GYtrace[74]->Val = GIa1;
        {aRet = ((Ptr) GLtrace_135); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_145() {      /* 126 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        if (rA1 == rLit[102])   goto l_130;
        if (rA1 == rLit[103])   goto l_130;
        if (rA1 != rLit[104])   {aRet = ((Ptr) GLtrace_148); goto lRet;}
l_130:
        rLit[42]->Val = rLit[105];
        (--rSp)->Val = ((Ptr) GLtrace_149);
        (--rSp)->Val = rLit[74];
        (--rSp)->Val = ((Ptr) GLtrace_150);
        (--rSp)->Val = rLit[35];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_150() {      /* 132 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[106];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_149() {      /* 131 */
   {    register Ptr aRet;
        GYtrace[74]->Val = GIa1;
        {aRet = ((Ptr) GLtrace_135); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_148() {      /* 129 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        if (GIa1 != rLit[107])  {aRet = ((Ptr) GLtrace_135); goto lRet;}
        rLit[42]->Val = rLit[105];
        (--rSp)->Val = ((Ptr) GLtrace_151);
        (--rSp)->Val = rLit[108];
        (--rSp)->Val = ((Ptr) GLtrace_152);
        (--rSp)->Val = rLit[35];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_152() {      /* 135 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[109];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_151() {      /* 134 */
   {    register Ptr aRet;
        GYtrace[74]->Val = GIa1;
        {aRet = ((Ptr) GLtrace_135); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_135() {      /* 113 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYtrace; rSp = GIsp; rA4 = GIa4;
        if (rLit[40]->Val != GInil)     goto l_136;
        GIa3 = rLit[36]->Val;
        GIa2 = rLit[110];
        GIa1 = rLit[22];
        (--rSp)->Val = ((Ptr) GLtrace_153);
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
l_136:
        rA4 = rLit[40]->Val;
        if (rA4 == rLit[87])    {aRet = ((Ptr) GLtrace_154); goto lRet;}
        if (rA4 == rLit[88])    {aRet = ((Ptr) GLtrace_154); goto lRet;}
        if (rA4 == rLit[89])    {aRet = ((Ptr) GLtrace_154); goto lRet;}
        if (rA4 == rLit[90])    {aRet = ((Ptr) GLtrace_154); goto lRet;}
        if (rA4 == rLit[103])   {aRet = ((Ptr) GLtrace_154); goto lRet;}
        if (rA4 == rLit[104])   {aRet = ((Ptr) GLtrace_154); goto lRet;}
        if (rA4 == rLit[91])    {aRet = ((Ptr) GLtrace_154); goto lRet;}
        if (rA4 == rLit[93])    {aRet = ((Ptr) GLtrace_154); goto lRet;}
        if (rA4 == rLit[96])    {aRet = ((Ptr) GLtrace_154); goto lRet;}
        if (rA4 == rLit[99])    {aRet = ((Ptr) GLtrace_154); goto lRet;}
        if (rA4 == rLit[102])   {aRet = ((Ptr) GLtrace_154); goto lRet;}
        if (rA4 == rLit[107])   {aRet = ((Ptr) GLtrace_154); goto lRet;}
        (--rSp)->Val = ((Ptr) GLtrace_155);
        (--rSp)->Val = rLit[36]->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtrace_155() {      /* 140 */
   {    register Ptr aRet, *rLit;
        rLit = GYtrace;
        GIa3 = GIa1;
        GIa2 = rLit[111];
        GIa1 = rLit[22];
        (--GIsp)->Val = ((Ptr) GLtrace_153);
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_154() {      /* 138 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLtrace_156);
        GIa2 = (rSp + 10)->Val;
        rA1 = GIa4;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[22];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_156() {      /* 141 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        rA2 = (rSp + 13)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (rSp + 13)->Val = rA1;
        (--rSp)->Val = rLit[36]->Val;
        rA2 = rLit[112];
        rA1 = rLit[40]->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        rA2 = rA1->Val;
        if (rA2 != rNil)        goto l_142;
        rA2 = rLit[113];
        rA1 = rLit[40]->Val;
        rA1 = llrt_call_cassq (rA1, rA2, rBcons, rNil);
        rA2 = rA1;
l_142:
        (--rSp)->Val = rA2;
        rA1 = (rSp + 16)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_158);
        {aRet = ((Ptr) GLtrace_75); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtrace_158() {      /* call_trace_157 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLtrace_160);
        {aRet = ((Ptr) GLtrace_81); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_160() {      /* call_trace_159 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_162);
        {aRet = (GYtrace[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_162() {      /* call_trace_161 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        GIa2 = rLit[8]->Val;
        rA1 = rLit[36]->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[8]->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLtrace_163); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_163() {      /* 143 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYtrace; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLtrace_164); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        rSp->Val = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        GIa3 = rA4;
        GIa2 = rSp->Val;
        GIa1 = rLit[36]->Val;
        (--rSp)->Val = ((Ptr) GLtrace_166);
        {aRet = (rLit[114] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtrace_166() {      /* call_trace_165 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLtrace_163); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_164() {      /* 144 */
   {    register Ptr aRet;
        GIa1 = GInil;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLtrace_153); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_153() {      /* 137 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[40]->Val = (rSp + 6)->Val;
        rLit[42]->Val = (rSp + 7)->Val;
        rLit[74]->Val = (rSp + 8)->Val;
        rSp += (Fix) 15;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[36]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_167() {      /* step */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        rA1 = rA1->Val;
        (--rSp)->Val = rLit[115]->Val;
        rLit[115]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[116];
        (--rSp)->Val = ((Ptr) GLtrace_167);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa2 = rLit[117]->Val;
        rA1 = rLit[52];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[118];
        (--rSp)->Val = rLit[8]->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[117]->Val;
        rLit[117]->Val = rA1;
        (--rSp)->Val = rLit[119]->Val;
        rLit[119]->Val = (rSp + 2)->Val;
        (--rSp)->Val = rLit[8]->Val;
        rLit[8]->Val = (rSp + 4)->Val;
        (--rSp)->Val = rLit[120]->Val;
        rLit[120]->Val = (rSp + 6)->Val;
        (--rSp)->Val = rLit[121]->Val;
        rLit[121]->Val = (rSp + 8)->Val;
        (--rSp)->Val = rLit[122]->Val;
        rLit[122]->Val = (rSp + 10)->Val;
        (--rSp)->Val = (Ptr) 6;
        (--rSp)->Val = rLit[123];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_168);
        (--rSp)->Val = rLit[52];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_169);
        (--rSp)->Val = ((Ptr) GLtrace_170);
        (--rSp)->Val = rLit[124];
        (--rSp)->Val = rLit[115]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_170() {      /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[125] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_169() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLtrace_168); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_168() {      /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[122]->Val = (rSp + 6)->Val;
        rLit[121]->Val = (rSp + 7)->Val;
        rLit[120]->Val = (rSp + 8)->Val;
        rLit[8]->Val = (rSp + 9)->Val;
        rLit[119]->Val = (rSp + 10)->Val;
        rLit[117]->Val = (rSp + 11)->Val;
        rSp += (Fix) 17;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[115]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_171() {      /* #:step:nobind? */
   {    register Ptr aRet, rSp, rA1, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        if (rA1 == rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        rA4 = rSp->Val;
        if ((rA4->Val < GIbsymb) || (rA4->Val >= rBcons))       {aRet = ((Ptr) GLtrace_172); goto lRet;}
        rA1 = rA4->Val;
        (--rSp)->Val = ((Ptr) GLtrace_174);
        {aRet = (GYtrace[81] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtrace_174() {      /* call_trace_173 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if ((rA1 < GIbcons) || (rA1 >= GIecons)) rA1 = rNil;
        if (rA1 == rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLtrace_176);
        {aRet = (GYtrace[81] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_176() {      /* call_trace_175 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1->Val;
        rA1 = rLit[82];
        rSp += (Fix) 1;
        rA1 = (rA1 == GIa2) ? rLit[118] : GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_172() {      /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rA1 = GIa4->Val;
        if ((rA1 < GIbcons) || (rA1 >= GIecons)) rA1 = rNil;
        if (rA1 == rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        rA2 = rSp->Val;
        rA2 = rA2->Val;
        rA2 = rA2->Val;
        rA1 = rLit[5];
        rA1 = (rA1 == rA2) ? rLit[118] : rNil;
        if (rA1 == rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        rA2 = rSp->Val;
        rA2 = rA2->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        rA1 = rLit[82];
        rSp += (Fix) 1;
        rA1 = (rA1 == rA2) ? rLit[118] : rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtrace_177() {      /* #:step:stepeval */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = rLit[126]->Val;
        rLit[126]->Val = GIa2;
        (--rSp)->Val = rLit[127]->Val;
        rLit[127]->Val = GIa1;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[128];
        (--rSp)->Val = ((Ptr) GLtrace_177);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = rLit[122]->Val;
        (--rSp)->Val = ((Ptr) GLtrace_179);
        {aRet = (rLit[129] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_179() {      /* call_trace_178 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        GIa2 = rLit[119]->Val;
        rA1 = rLit[127]->Val;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rLit[119]->Val;
        rLit[119]->Val = rA1;
        (--rSp)->Val = rLit[122]->Val;
        rLit[122]->Val = (rSp + 2)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[130];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if ((long) rLit[127]->Val < (long) GIbcons)     goto l_101;
        rA4 = rLit[127]->Val;
        if (rA4->Val != rLit[54])       goto l_101;
        (--rSp)->Val = ((Ptr) GLtrace_180);
        (--rSp)->Val = rLit[127]->Val;
        (--rSp)->Val = rLit[126]->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[131] + 2)->Val; goto lRet;}
l_101:
        if (rLit[120]->Val != GInil)    goto l_104;
        (--rSp)->Val = ((Ptr) GLtrace_180);
        (--rSp)->Val = rLit[127]->Val;
        (--rSp)->Val = rLit[126]->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[132] + 2)->Val; goto lRet;}
l_104:
        rA1 = (Ptr) 46;
        (--rSp)->Val = ((Ptr) GLtrace_180);
        {aRet = ((Ptr) GLtrace_181); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtrace_180() {      /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[122]->Val = (rSp + 6)->Val;
        rLit[119]->Val = (rSp + 7)->Val;
        rSp += (Fix) 9;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[127]->Val = (rSp + 6)->Val;
        rLit[126]->Val = (rSp + 7)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_182() {      /* unstep */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = rLit[115]->Val;
        rLit[115]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[133];
        (--rSp)->Val = ((Ptr) GLtrace_182);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_184);
        {aRet = (rLit[134] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_184() {      /* call_trace_183 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYtrace[115]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_185() {      /* cstep */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        rA1 = rA1->Val;
        (--rSp)->Val = rLit[115]->Val;
        rLit[115]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[135];
        (--rSp)->Val = ((Ptr) GLtrace_185);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        rA1 = rLit[136];
        (--rSp)->Val = ((Ptr) GLtrace_187);
        {aRet = (rLit[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_187() {      /* call_trace_186 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYtrace[115]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_188() {      /* #:step:stepmargin */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLtrace_189);
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 20;
        GIa4 = (Ptr) 2;
        {aRet = (GYtrace[137] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_189() {      /* 105 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      goto l_103;
        GIa4 = GIsp->Val;
        {aRet = ((Ptr) GLtrace_190); goto lRet;}
l_103:
        GIa4 = (Ptr) 21;
        {aRet = ((Ptr) GLtrace_190); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_191() {      /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = ((Ptr) GLtrace_192);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[138] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_192() {      /* 106 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        {aRet = ((Ptr) GLtrace_190); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_190() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLtrace_191); goto lRet;}}
        GIa1 = GYtrace[118];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_181() {      /* #:step:steploop */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rLit[139]->Val == GInil)    goto l_102;
        rSp->Val = rLit[118];
l_102:
        rA1 = rSp->Val;
        if (rA1 != (Ptr) 46)    {aRet = ((Ptr) GLtrace_193); goto lRet;}
        (--rSp)->Val = ((Ptr) GLtrace_194);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[140] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_194() {      /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtrace_195);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_196);
        (--rSp)->Val = rLit[141]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[140] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_196() {      /* 108 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLtrace_197);
        GIa4 = (Ptr) 0;
        {aRet = (GYtrace[142] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_197() {      /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtrace_198);
        GIa4 = (Ptr) 0;
        {aRet = (GYtrace[143] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_198() {      /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtrace_199);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_200);
        (--rSp)->Val = (Ptr) 3;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[142] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_200() {      /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_201);
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[143] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_201() {      /* 114 */
   {    register Ptr aRet;
        GIa1 = GYtrace[122]->Val;
        (--GIsp)->Val = ((Ptr) GLtrace_203);
        {aRet = ((Ptr) GLtrace_188); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_203() {      /* call_trace_202 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_204);
        (--rSp)->Val = rLit[122]->Val;
        (--rSp)->Val = rLit[144];
        (--rSp)->Val = rLit[127]->Val;
        (--rSp)->Val = rLit[145];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[146] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_204() {      /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLtrace_205);
        {aRet = ((Ptr) GLtrace_199); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_199() {      /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtrace_206);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[143] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_206() {      /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_207);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[142] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_207() {      /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_205() {      /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLtrace_208);
        {aRet = ((Ptr) GLtrace_195); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_195() {      /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtrace_209);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[140] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_209() {      /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_208() {      /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLtrace_210);
        GIa4 = (Ptr) 0;
        {aRet = (GYtrace[147] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_210() {      /* 119 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtrace_211);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_212);
        (--rSp)->Val = rLit[148]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[147] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_212() {      /* 122 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLtrace_214);
        {aRet = (GYtrace[149] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_214() {      /* call_trace_213 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLtrace_216);
        {aRet = (GYtrace[150] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_216() {      /* call_trace_215 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = GIa1->Val;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa4;
        GIa3 = ((Ptr) GLtrace_217);
        {aRet = ((Ptr) GLtrace_211); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_211() {      /* 120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtrace_218);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[147] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_218() {      /* 123 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_217() {      /* 121 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLtrace_181); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_193() {      /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        if (GIa1 != (Ptr) 61)   {aRet = ((Ptr) GLtrace_219); goto lRet;}
        (--rSp)->Val = rLit[118];
        (--rSp)->Val = rLit[151]->Val;
        rLit[151]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[152];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_220);
        (--rSp)->Val = rLit[52];
        (--rSp)->Val = rLit[51];
        (--rSp)->Val = rLit[127]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_220() {      /* 125 */
   {    register Ptr aRet, *rLit;
        rLit = GYtrace;
        GIa2 = GIa1;
        GIa1 = rLit[153];
        (--GIsp)->Val = ((Ptr) GLtrace_222);
        {aRet = (rLit[154] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_222() {      /* call_trace_221 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYtrace[151]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        GIa1 = (Ptr) 46;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLtrace_181); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_219() {      /* 124 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        if (GIa1 != (Ptr) 60)   {aRet = ((Ptr) GLtrace_223); goto lRet;}
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[120]->Val;
        rLit[120]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[155];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_224);
        (--rSp)->Val = rLit[127]->Val;
        (--rSp)->Val = rLit[126]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[131] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_224() {      /* 127 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[120]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        rLit[121]->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtrace_225);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[140] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_225() {      /* 128 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtrace_226);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_227);
        (--rSp)->Val = rLit[141]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[140] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_227() {      /* 131 */
   {    register Ptr aRet;
        GIa1 = GYtrace[122]->Val;
        (--GIsp)->Val = ((Ptr) GLtrace_229);
        {aRet = ((Ptr) GLtrace_188); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_229() {      /* call_trace_228 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_230);
        (--rSp)->Val = rLit[122]->Val;
        (--rSp)->Val = rLit[156];
        (--rSp)->Val = rLit[121]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_230() {      /* 132 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj2);
        {aRet = ((Ptr) GLtrace_226); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_226() {      /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtrace_231);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[140] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_231() {      /* 133 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_223() {      /* 126 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        if (rA1 != (Ptr) 113)   goto l_134;
        rA1 = GInil;
        GIa2 = rLit[157];
        {aRet = (rLit[158] + 2)->Val; goto lRet;}
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_134:
        if (rA1 != (Ptr) 104)   {aRet = ((Ptr) GLtrace_232); goto lRet;}
        rA1 = rLit[119]->Val;
        (--rSp)->Val = ((Ptr) GLtrace_234);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_234() {      /* call_trace_233 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rLit[119]->Val;
        rLit[119]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[159];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_235);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[140] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_235() {      /* 136 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtrace_236);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_237);
        (--rSp)->Val = rLit[141]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[140] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_237() {      /* 140 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GYtrace[119]->Val == GInil) {aRet = ((Ptr) GLtrace_238); goto lRet;}
        GIa1 = (rSp + 11)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_240);
        {aRet = ((Ptr) GLtrace_188); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_240() {      /* call_trace_239 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_237);
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_242);
        {aRet = (GYtrace[129] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_242() {      /* call_trace_241 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (rSp + 12)->Val = rA1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[43];
        rA4 = rLit[119]->Val;
        rLit[119]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtrace_238() {      /* 141 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = GInil;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa4;
        GIa3 = ((Ptr) GLtrace_243);
        {aRet = ((Ptr) GLtrace_236); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_236() {      /* 137 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtrace_244);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[140] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_244() {      /* 143 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_243() {      /* 138 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIdlink = (rSp + 1)->Val;
        GYtrace[119]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        GIa1 = (Ptr) 46;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLtrace_181); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_232() {      /* 135 */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 63)   {aRet = ((Ptr) GLtrace_245); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLtrace_246);
        GIa4 = (Ptr) 0;
        {aRet = (GYtrace[140] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_246() {      /* 145 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtrace_247);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_248);
        (--rSp)->Val = rLit[141]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[140] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_248() {      /* 148 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_249);
        GIa1 = rLit[160];
        (--rSp)->Val = ((Ptr) GLtrace_251);
        {aRet = (rLit[161] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_251() {      /* call_trace_250 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[34] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_249() {      /* 149 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_252);
        GIa1 = rLit[162];
        (--rSp)->Val = ((Ptr) GLtrace_254);
        {aRet = (rLit[161] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_254() {      /* call_trace_253 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[34] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_252() {      /* 150 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_255);
        GIa1 = rLit[163];
        (--rSp)->Val = ((Ptr) GLtrace_257);
        {aRet = (rLit[161] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_257() {      /* call_trace_256 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[34] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_255() {      /* 151 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_258);
        GIa1 = rLit[164];
        (--rSp)->Val = ((Ptr) GLtrace_260);
        {aRet = (rLit[161] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_260() {      /* call_trace_259 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[34] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_258() {      /* 152 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_261);
        GIa1 = rLit[165];
        (--rSp)->Val = ((Ptr) GLtrace_263);
        {aRet = (rLit[161] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_263() {      /* call_trace_262 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[34] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_261() {      /* 153 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_264);
        GIa1 = rLit[166];
        (--rSp)->Val = ((Ptr) GLtrace_266);
        {aRet = (rLit[161] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_266() {      /* call_trace_265 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[34] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_264() {      /* 154 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_267);
        GIa1 = rLit[167];
        (--rSp)->Val = ((Ptr) GLtrace_269);
        {aRet = (rLit[161] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_269() {      /* call_trace_268 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[34] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_267() {      /* 155 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLtrace_270);
        {aRet = ((Ptr) GLtrace_247); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_247() {      /* 146 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtrace_271);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[140] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_271() {      /* 156 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_270() {      /* 147 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = (Ptr) 46;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLtrace_181); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_245() {      /* 144 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLtrace_272);
        GIa4 = (Ptr) 0;
        {aRet = (GYtrace[140] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_272() {      /* 158 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtrace_273);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_274);
        (--rSp)->Val = rLit[141]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[140] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_274() {      /* 161 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYtrace; rSp = GIsp; rA4 = GIa4;
        if ((long) rLit[127]->Val < (long) GIbcons)     {aRet = ((Ptr) GLtrace_275); goto lRet;}
        rA4 = rLit[127]->Val;
        if (rA4->Val != rLit[168])      {aRet = ((Ptr) GLtrace_275); goto lRet;}
        (--rSp)->Val = ((Ptr) GLtrace_276);
        (--rSp)->Val = rLit[169]->Val;
        (--rSp)->Val = rLit[170];
        rA4 = (Ptr) 2;
        {aRet = (rLit[171] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtrace_276() {      /* 166 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLtrace_278);
        {aRet = (GYtrace[81] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_278() {      /* call_trace_277 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtrace_279);
        GIa1 = rLit[170];
        (--rSp)->Val = ((Ptr) GLtrace_281);
        {aRet = (rLit[81] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_281() {      /* call_trace_280 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = rLit[172];
        (--rSp)->Val = ((Ptr) GLtrace_283);
        {aRet = (rLit[81] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_283() {      /* call_trace_282 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYtrace[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_279() {      /* 167 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLtrace_285);
        {aRet = (GYtrace[173] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_285() {      /* call_trace_284 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYtrace; rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLtrace_286); goto lRet;}
        (--rSp)->Val = ((Ptr) GLtrace_287);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[12]->Val;
        rLit[12]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[174];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = rLit[175];
        (--rSp)->Val = ((Ptr) GLtrace_289);
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_289() {      /* call_trace_288 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[120]->Val;
        rLit[120]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[176];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtrace_290);
        (--rSp)->Val = rLit[127]->Val;
        (--rSp)->Val = rLit[126]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[177] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_290() {      /* 170 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[120]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        GIdlink = (rSp + 1)->Val;
        rLit[12]->Val = (rSp + 6)->Val;
        rSp += (Fix) 9;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLtrace_291);
        {aRet = ((Ptr) GLtrace_287); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_287() {      /* 168 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        rA2 = rLit[8]->Val;
        rA1 = rLit[168];
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLtrace_292); goto lRet;}
        rA1 = rLit[178];
        (--rSp)->Val = ((Ptr) GLtrace_292);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtrace_292() {      /* 172 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_291() {      /* 169 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLtrace_293); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_286() {      /* 164 */
   {    register Ptr aRet;
        GIa1 = GYtrace[122]->Val;
        (--GIsp)->Val = ((Ptr) GLtrace_295);
        {aRet = ((Ptr) GLtrace_188); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_295() {      /* call_trace_294 */
   {    register Ptr aRet, *rLit;
        rLit = GYtrace;
        GIa3 = rLit[127]->Val;
        GIa2 = rLit[179];
        GIa1 = rLit[52];
        (--GIsp)->Val = ((Ptr) GLtrace_297);
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_297() {      /* call_trace_296 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_298);
        (--rSp)->Val = rLit[127]->Val;
        (--rSp)->Val = rLit[126]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[131] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_298() {      /* 173 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLtrace_293); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_275() {      /* 162 */
   {    register Ptr aRet;
        GIa1 = GYtrace[127]->Val;
        (--GIsp)->Val = ((Ptr) GLtrace_300);
        {aRet = ((Ptr) GLtrace_171); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_300() {      /* call_trace_299 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLtrace_301); goto lRet;}
        GIa1 = GYtrace[122]->Val;
        (--GIsp)->Val = ((Ptr) GLtrace_303);
        {aRet = ((Ptr) GLtrace_188); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_303() {      /* call_trace_302 */
   {    register Ptr aRet, *rLit;
        rLit = GYtrace;
        GIa3 = rLit[127]->Val;
        GIa2 = rLit[180];
        GIa1 = rLit[52];
        (--GIsp)->Val = ((Ptr) GLtrace_305);
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_305() {      /* call_trace_304 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_306);
        (--rSp)->Val = rLit[127]->Val;
        (--rSp)->Val = rLit[126]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[131] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_306() {      /* 176 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLtrace_293); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_301() {      /* 174 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_307);
        (--rSp)->Val = rLit[127]->Val;
        (--rSp)->Val = rLit[126]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[181] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_307() {      /* 177 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLtrace_293); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_293() {      /* 163 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        GYtrace[121]->Val = rA4;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = rA4;
        GIa3 = ((Ptr) GLtrace_308);
        {aRet = ((Ptr) GLtrace_273); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_273() {      /* 159 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtrace_309);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYtrace[140] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_309() {      /* 178 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_308() {      /* 160 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = GYtrace[122]->Val;
        (--rSp)->Val = ((Ptr) GLtrace_311);
        {aRet = ((Ptr) GLtrace_188); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_311() {      /* call_trace_310 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[122]->Val;
        (--rSp)->Val = rLit[156];
        (--rSp)->Val = rLit[121]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_312() {      /* stepend */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_313);
        (--rSp)->Val = rLit[52];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[182] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_313() {      /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLtrace_314); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_314() {      /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_103;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLtrace_314);
        {aRet = (rLit[183] + 2)->Val; goto lRet;}
l_103:
        rSp += (Fix) 1;
        rA1 = rLit[184];
        (--rSp)->Val = ((Ptr) GLtrace_316);
        {aRet = (rLit[185] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_316() {      /* call_trace_315 */
   {    register Ptr aRet;
        GIa1 = GYtrace[186];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_317() {      /* tracend */
   {    register Ptr aRet, *rLit;
        rLit = GYtrace;
        GIa1 = rLit[187];
        (--GIsp)->Val = ((Ptr) GLtrace_319);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_319() {      /* call_trace_318 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtrace; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtrace_320);
        (--rSp)->Val = rLit[22];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[182] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtrace_320() {      /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLtrace_321); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_321() {      /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtrace; rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_103;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLtrace_321);
        {aRet = (rLit[183] + 2)->Val; goto lRet;}
l_103:
        rSp += (Fix) 1;
        rA1 = rLit[188];
        (--rSp)->Val = ((Ptr) GLtrace_323);
        {aRet = (rLit[185] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtrace_323() {      /* call_trace_322 */
   {    register Ptr aRet;
        GIa1 = GYtrace[189];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_324() {      /* debugend */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLtrace_326);
        {aRet = (GYtrace[189] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_326() {      /* call_trace_325 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLtrace_328);
        {aRet = (GYtrace[186] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_328() {      /* call_trace_327 */
   {    register Ptr aRet, *rLit;
        rLit = GYtrace;
        GIa1 = rLit[190];
        (--GIsp)->Val = ((Ptr) GLtrace_330);
        {aRet = (rLit[191] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtrace_330() {      /* call_trace_329 */
   {    register Ptr aRet;
        GIa1 = GYtrace[192];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDtrace_331() {      /* trace #:trace:output */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtrace,33,193,194);
  lRet:  return (aRet);}}

static Ptr GDtrace_332() {      /* trace trace */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtrace,22,193,195);
  lRet:  return (aRet);}}

static Ptr GDtrace_333() {      /* trace untrace */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtrace,25,193,195);
  lRet:  return (aRet);}}

static Ptr GDtrace_334() {      /* trace #:trace:untrace-one */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtrace,20,193,194);
  lRet:  return (aRet);}}

static Ptr GDtrace_335() {      /* trace #:trace:trace-one */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtrace,7,193,194);
  lRet:  return (aRet);}}

static Ptr GDtrace_336() {      /* trace step */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtrace,52,193,195);
  lRet:  return (aRet);}}

static Ptr GDtrace_337() {      /* trace #:step:stepeval */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtrace,196,193,197);
  lRet:  return (aRet);}}

static Ptr GDtrace_338() {      /* trace unstep */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtrace,54,193,195);
  lRet:  return (aRet);}}

static Ptr GDtrace_339() {      /* trace cstep */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtrace,76,193,195);
  lRet:  return (aRet);}}

static Ptr GDtrace_340() {      /* trace stepend */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtrace,186,193,198);
  lRet:  return (aRet);}}

static Ptr GDtrace_341() {      /* trace tracend */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtrace,189,193,198);
  lRet:  return (aRet);}}

static Ptr GDtrace_342() {      /* trace debugend */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtrace,192,193,198);
  lRet:  return (aRet);}}

