/* GELL 15.26: source file for the module: "initc" */
/*             translation done:           "Wed June 16 93 18:00:24 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "initc.h" 

static Ptr GLinitc_1() {        /* #:defC:c-name */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[0];
        GIa1 = rLit[1]->Val;
        (--rSp)->Val = ((Ptr) GLinitc_3);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_3() {        /* call_initc_2 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        if (GIa1 == GInil)      goto l_101;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[1]->Val;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_4() {        /* llrt_set_regular_fval */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         callg_arg1 = ((Ptr) GIa1);      callg_arg2 = llrt_vag(GIa2);
         callg_arg3 = ((Fix) GIsp->Val);
         callg_retv = ((long) llrt_set_regular_fval(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_5() {        /* llrt_set_lit_table */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         long callg_arg3;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Ptr) (GIsp->Val->Val)+2);
         callg_arg3 = ((Fix) (GIsp + 1)->Val);
         callg_retv = ((long) llrt_set_lit_table(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_6() {        /* llrt_check_timestamp */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa2;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = llrt_vag(GIa1);
         callg_arg2 = ((Ptr) (GIsp->Val->Val)+2);
         callg_retv = ((long) llrt_check_timestamp(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_7() {        /* llrt_set_trace_fval_p */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = ((Ptr) GIa1);      callg_arg2 = llrt_vag(GIa2);
         callg_arg3 = llrt_vag(GIsp->Val);
         callg_retv = ((long) llrt_set_trace_fval_p(callg_arg1,callg_arg2,callg_arg3));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        GIsp += (Fix) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_8() {        /* local_llrt_set_lit_table */
   {    register Ptr aRet;
        {aRet = ((Ptr) GLinitc_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_9() {        /* #:defC:gell-getglobal-special-cache */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[4]->Val;
        (--rSp)->Val = ((Ptr) GLinitc_11);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_11() {       /* call_initc_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLinitc_13);
        {aRet = (GYinitc[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_13() {       /* call_initc_12 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLinitc_15);
        {aRet = ((Ptr) GLinitc_1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_15() {       /* call_initc_14 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = (GYinitc[6] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_16() {       /* #:defC:internal-error */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLinitc_17);
        GIa4 = (Ptr) 0;
        {aRet = (GYinitc[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_17() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLinitc_18);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLinitc_19);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYinitc[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_19() {       /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLinitc_20);
        (--rSp)->Val = rLit[8];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[9];
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_20() {       /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        GIa1 = GInil;
        GIa2 = rLit[11];
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj3);
        {aRet = ((Ptr) GLinitc_18); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_18() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLinitc_21);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYinitc[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_21() {       /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_22() {       /* defcelaborate */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = rLit[13];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
l_101:
        if (((rSp + 3)->Val < GIbstrg) || ((rSp + 3)->Val >= GIbsymb))  goto l_102;
        rLit[15]->Val = (rSp + 3)->Val;
        {aRet = ((Ptr) GLinitc_23); goto lRet;}
l_102:
        GIa2 = (rSp + 3)->Val;
        GIa1 = rLit[16];
        (--rSp)->Val = ((Ptr) GLinitc_23);
        {aRet = ((Ptr) GLinitc_16); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_23() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        if (((rSp + 2)->Val < GIbstrg) || ((rSp + 2)->Val >= GIbsymb))  goto l_104;
        rLit[17]->Val = (rSp + 2)->Val;
        {aRet = ((Ptr) GLinitc_24); goto lRet;}
l_104:
        GIa2 = (rSp + 2)->Val;
        GIa1 = rLit[18];
        (--rSp)->Val = ((Ptr) GLinitc_24);
        {aRet = ((Ptr) GLinitc_16); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_24() {       /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp->Val >= GIbvect) && (rSp->Val < GIbstrg))      {aRet = ((Ptr) GLinitc_25); goto lRet;}
        GIa2 = rSp->Val;
        GIa1 = GYinitc[19];
        (--rSp)->Val = ((Ptr) GLinitc_25);
        {aRet = ((Ptr) GLinitc_16); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_25() {       /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLinitc_27);
        {aRet = ((Ptr) GLinitc_1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_27() {       /* call_initc_26 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLinitc_29);
        {aRet = ((Ptr) GLinitc_9); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_29() {       /* call_initc_28 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYinitc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA1;
        if (rA1 != (Ptr) 0)     goto l_108;
        rA2 = (rSp + 4)->Val;
        rA1 = rLit[20];
        (--rSp)->Val = ((Ptr) GLinitc_30);
        {aRet = ((Ptr) GLinitc_16); goto lRet;}
l_108:
        rA2 = rLit[21]->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[21]->Val = rA1;
        rLit[22]->Val = rSp->Val;
        {aRet = ((Ptr) GLinitc_30); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLinitc_30() {       /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa2 = (rSp + 2)->Val;
        GIa1 = GYinitc[22]->Val;
        (--rSp)->Val = ((Ptr) GLinitc_32);
        {aRet = ((Ptr) GLinitc_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_32() {       /* call_initc_31 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp->Val->Val + 1)->Val;
        GIa2 = rSp->Val;
        GIa1 = GYinitc[22]->Val;
        (--rSp)->Val = ((Ptr) GLinitc_34);
        {aRet = ((Ptr) GLinitc_5); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_34() {       /* call_initc_33 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYinitc; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLinitc_35);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[22]->Val;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = ((rSp + 4)->Val->Val + 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLinitc_35() {       /* 110 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYinitc; rSp = GIsp; rA1 = GIa1;
        GIa2 = rLit[24]->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[24]->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLinitc_36); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLinitc_36() {       /* 111 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_112;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLinitc_36);
        {aRet = ((Ptr) GLinitc_37); goto lRet;}
l_112:
        rA1 = GInil;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLinitc_37() {       /* #:defC:defcelaborate-check */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1->Val;
        (--rSp)->Val = (rA1 + 1)->Val;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLinitc_39);
        {aRet = (GYinitc[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLinitc_39() {       /* call_initc_38 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLinitc_40); goto lRet;}
        GIa2 = rLit[26];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLinitc_42);
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_42() {       /* call_initc_41 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        GIa2 = rLit[28];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLinitc_44);
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_44() {       /* call_initc_43 */
   {    register Ptr aRet, *rLit;
        rLit = GYinitc;
        if (rLit[29]->Val != GInil)     {aRet = ((Ptr) GLinitc_45); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLinitc_46);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_46() {       /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLinitc_47);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLinitc_48);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYinitc[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_48() {       /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLinitc_49);
        (--rSp)->Val = rLit[30];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[31];
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLinitc_51);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_51() {       /* call_initc_50 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[32];
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 6;
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_49() {       /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj3);
        {aRet = ((Ptr) GLinitc_47); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_47() {       /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLinitc_52);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYinitc[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_52() {       /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_45() {       /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_40() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_53() {       /* defcsetfn */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if ((rA1 >= GIbsymb) && (rA1 < GIbcons))        {aRet = ((Ptr) GLinitc_54); goto lRet;}
        GIa2 = rA1;
        rA1 = GYinitc[33];
        (--rSp)->Val = ((Ptr) GLinitc_54);
        {aRet = ((Ptr) GLinitc_16); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLinitc_54() {       /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        GIa2 = rLit[15]->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLinitc_56);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_56() {       /* call_initc_55 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLinitc_57); goto lRet;}
        GIa2 = (rSp + 1)->Val;
        GIa1 = GYinitc[34];
        (--rSp)->Val = ((Ptr) GLinitc_57);
        {aRet = ((Ptr) GLinitc_16); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_57() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 2)->Val;
        GIa2 = GYinitc[22]->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLinitc_4); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_58() {       /* initialize-elaborated-modules */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLinitc_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_59() {       /* 101 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLinitc_60); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA2 = rSp->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA3 = rSp->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        rA2 = rA2->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLinitc_62);
        {aRet = ((Ptr) GLinitc_8); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLinitc_62() {       /* call_initc_61 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLinitc_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_60() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_63() {       /* #:defC:resolved-symbol-p */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLinitc_65);
        {aRet = (GYinitc[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_65() {       /* call_initc_64 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYinitc; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = rA1;
        if (rA4 == rLit[35])    goto l_103;
        if (rA4 == rLit[36])    goto l_103;
        if (rA4 == rLit[37])    goto l_103;
        if (rA4 == rLit[38])    goto l_103;
        if (rA4 == rLit[39])    goto l_103;
        if (rA4 == rLit[40])    goto l_103;
        if (rA4 == rLit[41])    goto l_103;
        if (rA4 != rLit[42])    goto l_101;
l_103:
        rA1 = rLit[43];
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLinitc_66() {       /* defccheck */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYinitc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
l_101:
        if ((long) rSp->Val < (long) rBcons)    goto l_102;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA2 = rLit[44]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        goto l_104;
        rA2 = rLit[44]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rLit[44]->Val = rA1;
l_104:
        rSp += (Fix) 1;
        goto l_101;
l_102:
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLinitc_68);
        {aRet = ((Ptr) GLinitc_69); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLinitc_68() {       /* call_initc_67 */
   {    register Ptr aRet;
        GIa1 = GYinitc[45];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_70() {       /* check-for-unresolved-references */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[29]->Val;
        rLit[29]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[46];
        (--rSp)->Val = rLit[47];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLinitc_72);
        {aRet = ((Ptr) GLinitc_69); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_72() {       /* call_initc_71 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYinitc[29]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_69() {       /* #:defC:check-for-unresolved-references */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GYinitc[44]->Val;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLinitc_73); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_73() {       /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLinitc_74); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLinitc_76);
        {aRet = ((Ptr) GLinitc_63); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLinitc_76() {       /* call_initc_75 */
   {    register Ptr aRet, *rLit, rNil;
        rLit = GYinitc; rNil = GInil;
        if (GIa1 != rNil)       {aRet = ((Ptr) GLinitc_77); goto lRet;}
        if (rLit[29]->Val != rNil)      {aRet = ((Ptr) GLinitc_78); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLinitc_79);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_79() {       /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLinitc_80);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLinitc_81);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYinitc[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_81() {       /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLinitc_82);
        (--rSp)->Val = rLit[48];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[49];
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLinitc_84);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_84() {       /* call_initc_83 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYinitc[10] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_82() {       /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLinitc_85);
        {aRet = ((Ptr) GLinitc_80); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_80() {       /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLinitc_86);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYinitc[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_86() {       /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_85() {       /* 109 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLinitc_78); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_78() {       /* 106 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = GIsp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        {aRet = ((Ptr) GLinitc_87); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLinitc_77() {       /* 103 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = ((Ptr) GLinitc_87); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_87() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLinitc_89);
        {aRet = (GYinitc[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_89() {       /* call_initc_88 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLinitc_73); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_74() {       /* 102 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        GYinitc[44]->Val = rA1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLinitc_90() {       /* gell-clean-core-image */
   {    register Ptr aRet;
        {aRet = ((Ptr) GLinitc_91); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_92() {       /* #:gell-clean-core-image:g104 */
   {    register Ptr aRet, *rLit;
        rLit = GYinitc;
        GIa2 = rLit[26];
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_91() {       /* 101 */
   {    register Ptr aRet, *rLit;
        rLit = GYinitc;
        GIa1 = rLit[51];
        (--GIsp)->Val = ((Ptr) GLinitc_94);
        {aRet = (rLit[52] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_94() {       /* call_initc_93 */
   {    register Ptr aRet;
        GIa1 = GYinitc[53];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_95() {       /* gell-save-core */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLinitc_97);
        {aRet = (GYinitc[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_97() {       /* call_initc_96 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLinitc_98);
        GIa4 = (Ptr) 0;
        {aRet = (GYinitc[54] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_98() {       /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLinitc_99);
        GIa4 = (Ptr) 0;
        {aRet = (GYinitc[54] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_99() {       /* 102 */
   {    register Ptr aRet, *rLit;
        rLit = GYinitc;
        GIa1 = rLit[55];
        (--GIsp)->Val = ((Ptr) GLinitc_101);
        {aRet = (rLit[56] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_101() {      /* call_initc_100 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLinitc_102); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLinitc_104);
        {aRet = (GYinitc[55] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_104() {      /* call_initc_103 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLinitc_105); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_102() {      /* 103 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLinitc_105); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_105() {      /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        rLit[57]->Val = GIa4;
        (--rSp)->Val = rLit[24]->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLinitc_107);
        {aRet = (rLit[58] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_107() {      /* call_initc_106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      goto l_105;
        (--rSp)->Val = ((Ptr) GXpopj4);
        GIa4 = (Ptr) 0;
        {aRet = (GYinitc[59] + 2)->Val; goto lRet;}
l_105:
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLinitc_109);
        {aRet = ((Ptr) GLinitc_58); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_109() {      /* call_initc_108 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYinitc; rSp = GIsp; rNil = GInil;
        rLit[60]->Val = rNil;
        rLit[61]->Val = rNil;
        (--rSp)->Val = ((Ptr) GXpopj4);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_110() {      /* gell-save-std */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYinitc; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 2)     goto l_101;
        rA1 = rLit[63];
        rA2 = (Ptr) 2;
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
        rA1 = GInil;
        goto l_nlist_initc_112;
l_nlist_initc_111:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_initc_112:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_initc_111;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLinitc_114);
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLinitc_114() {      /* call_initc_113 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYinitc; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLinitc_115);
        (--rSp)->Val = rLit[64];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_115() {      /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLinitc_116);
        GIa4 = (Ptr) 0;
        {aRet = (GYinitc[54] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_116() {      /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLinitc_117);
        GIa4 = (Ptr) 0;
        {aRet = (GYinitc[54] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_117() {      /* 104 */
   {    register Ptr aRet, *rLit;
        rLit = GYinitc;
        GIa1 = rLit[55];
        (--GIsp)->Val = ((Ptr) GLinitc_119);
        {aRet = (rLit[56] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_119() {      /* call_initc_118 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLinitc_120); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLinitc_122);
        {aRet = (GYinitc[55] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_122() {      /* call_initc_121 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLinitc_123); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_120() {      /* 105 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLinitc_123); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_123() {      /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA2, rA3, rNil;
        rLit = GYinitc; rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rNil = GInil;
        rLit[57]->Val = GIa4;
        rA3 = rSp->Val;
        (--rSp)->Val = rA3->Val;
        rA2 = (rA3 + 1)->Val;
        rA2 = rA2->Val;
        if (rA2 != rNil)        goto l_107;
        rA2 = rSp->Val;
        if (rA2 != rNil)        goto l_107;
        rA2 = rLit[65];
l_107:
        (--rSp)->Val = rA2;
        (--rSp)->Val = rLit[24]->Val;
        (--rSp)->Val = ((Ptr) GLinitc_124);
        (--rSp)->Val = rLit[66]->Val;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[67]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLinitc_124() {      /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLinitc_126);
        {aRet = (GYinitc[58] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLinitc_126() {      /* call_initc_125 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYinitc; rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       goto l_108;
        if ((rSp + 2)->Val == rNil)     goto l_111;
        (--rSp)->Val = ((Ptr) GXpopj6);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
l_111:
        (--rSp)->Val = ((Ptr) GXpopj6);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[59] + 2)->Val; goto lRet;}
l_108:
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLinitc_128);
        {aRet = ((Ptr) GLinitc_58); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLinitc_128() {      /* call_initc_127 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYinitc; rSp = GIsp; rNil = GInil;
        rLit[60]->Val = rNil;
        rLit[61]->Val = rNil;
        (--rSp)->Val = ((Ptr) GXpopj6);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDinitc_129() {      /* trace llrt_set_trace_fval_p */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYinitc,68,69,70);
  lRet:  return (aRet);}}

static Ptr GDinitc_130() {      /* trace defcelaborate */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYinitc,13,69,71);
  lRet:  return (aRet);}}

static Ptr GDinitc_131() {      /* trace defcsetfn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYinitc,72,69,70);
  lRet:  return (aRet);}}

static Ptr GDinitc_132() {      /* trace defccheck */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYinitc,45,69,73);
  lRet:  return (aRet);}}

static Ptr GDinitc_133() {      /* trace check-for-unresolved-references */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYinitc,74,69,75);
  lRet:  return (aRet);}}

static Ptr GDinitc_134() {      /* trace gell-clean-core-image */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYinitc,53,69,75);
  lRet:  return (aRet);}}

static Ptr GDinitc_135() {      /* trace #:gell-clean-core-image:g104 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYinitc,51,69,73);
  lRet:  return (aRet);}}

static Ptr GDinitc_136() {      /* trace gell-save-core */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYinitc,76,69,70);
  lRet:  return (aRet);}}

static Ptr GDinitc_137() {      /* trace gell-save-std */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYinitc,63,69,71);
  lRet:  return (aRet);}}

