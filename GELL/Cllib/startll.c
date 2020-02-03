/* GELL 15.26: source file for the module: "startll" */
/*             translation done:           "Wed Jul  28 93 17:58:11 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "startll.h" 

static Ptr GLstartll_1() {      /* subversion */
   {    register Ptr aRet;
        GIa1 = (Ptr) 3;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_2() {      /* herald */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLstartll_3);
        GIa4 = (Ptr) 0;
        {aRet = (GYstartll[0] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_3() {      /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstartll_4);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstartll_5);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYstartll[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_5() {      /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLstartll_6);
        (--rSp)->Val = rLit[1];
        (--rSp)->Val = rLit[2];
        (--rSp)->Val = ((Ptr) GLstartll_8);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_8() {      /* call_startll_7 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[4];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_6() {      /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLstartll_9);
        {aRet = ((Ptr) GLstartll_4); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_4() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLstartll_10);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYstartll[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_10() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_9() {      /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_11() {     /* explodech */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLstartll_13);
        {aRet = (GYstartll[6] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_13() {     /* call_startll_12 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLstartll_14); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_14() {     /* 101 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLstartll_15); goto lRet;}
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLstartll_17);
        {aRet = (GYstartll[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstartll_17() {     /* call_startll_16 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rSp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLstartll_14); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLstartll_15() {     /* 102 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstartll_18() {     /* implodech */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLstartll_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_19() {     /* 101 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLstartll_20); goto lRet;}
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLstartll_22);
        {aRet = (GYstartll[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstartll_22() {     /* call_startll_21 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rSp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLstartll_19); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLstartll_20() {     /* 102 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        {aRet = (GYstartll[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstartll_23() {     /* lhoblist */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        (--rSp)->Val = rLit[10]->Val;
        rLit[10]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = ((Ptr) GLstartll_23);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        {aRet = ((Ptr) GLstartll_24); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_25() {     /* #:lhoblist:g104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[10]->Val;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_24() {     /* 101 */
   {    register Ptr aRet, *rLit;
        rLit = GYstartll;
        GIa1 = rLit[13];
        (--GIsp)->Val = ((Ptr) GLstartll_27);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_27() {     /* call_startll_26 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYstartll[10]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_28() {     /* #:llcp:nlist */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        rA3 = (rSp++)->Val;
        rA1 = GInil;
        goto l_4;
l_3:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_4:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_3;}
        {aRet = rA3; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLstartll_29() {     /* #:llcp:errwna */
   {    register Ptr aRet;
        GIa3 = GIa2;
        GIa2 = GYstartll[15];
         GIa1 = llrt_call_error ();
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_30() {     /* core-init-std */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        (--rSp)->Val = GIa1;
        if (rLit[16]->Val == GInil)     {aRet = ((Ptr) GLstartll_31); goto lRet;}
        (--rSp)->Val = ((Ptr) GLstartll_31);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_31() {     /* 102 */
   {    register Ptr aRet, *rLit;
        rLit = GYstartll;
        if (rLit[18]->Val == GInil)     {aRet = ((Ptr) GLstartll_32); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLstartll_32);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_32() {     /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLstartll_34);
        {aRet = (GYstartll[20] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_34() {     /* call_startll_33 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLstartll_35);
        GIa1 = rLit[21];
        (--rSp)->Val = ((Ptr) GLstartll_37);
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_37() {     /* call_startll_36 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[23];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[24] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_35() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstartll_39);
        {aRet = (GYstartll[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_39() {     /* call_startll_38 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLstartll_40); goto lRet;}
        GIa2 = rLit[26];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLstartll_40);
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_40() {     /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLstartll_41);
        (--rSp)->Val = rLit[28];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[29];
        (--rSp)->Val = rLit[30]->Val;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_41() {     /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLstartll_43);
        {aRet = (GYstartll[31] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_43() {     /* call_startll_42 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = (GYstartll[32] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_44() {     /* save-std */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYstartll; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 2)     goto l_101;
        rA1 = rLit[33];
        rA2 = (Ptr) 2;
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
        rA1 = GInil;
        goto l_nlist_startll_46;
l_nlist_startll_45:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_startll_46:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_startll_45;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLstartll_47);
        (--rSp)->Val = rLit[35];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLstartll_47() {     /* 102 */
   {    register Ptr aRet, *rLit;
        rLit = GYstartll;
        GIa1 = rLit[36];
        (--GIsp)->Val = ((Ptr) GLstartll_49);
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_49() {     /* call_startll_48 */
   {    register Ptr aRet, *rLit;
        rLit = GYstartll;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLstartll_50); goto lRet;}
        GIa1 = rLit[38];
        (--GIsp)->Val = ((Ptr) GLstartll_52);
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_52() {     /* call_startll_51 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        if (GIa1 == GInil)      goto l_105;
        (--rSp)->Val = ((Ptr) GLstartll_50);
        (--rSp)->Val = rLit[36];
        (--rSp)->Val = rLit[26];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[39] + 2)->Val; goto lRet;}
l_105:
        GIa1 = rLit[40];
        (--rSp)->Val = ((Ptr) GLstartll_50);
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_50() {     /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLstartll_54);
        {aRet = (GYstartll[36] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_54() {     /* call_startll_53 */
   {    register Ptr aRet, *rLit;
        rLit = GYstartll;
        rLit[30]->Val = GIa1;
        (--GIsp)->Val = ((Ptr) GLstartll_55);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_55() {     /* 108 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLstartll_56);
        GIa4 = (Ptr) 0;
        {aRet = (GYstartll[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_56() {     /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYstartll; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = rLit[44]->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[44]->Val = rA1;
        rLit[45]->Val = rLit[26];
        rLit[46]->Val = GInil;
        (--rSp)->Val = ((Ptr) GLstartll_57);
        (--rSp)->Val = rLit[47];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[48] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLstartll_57() {     /* 110 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYstartll; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA4 = rSp->Val;
        rA4 = rA4->Val;
        if (rA4 != rNil)        goto l_111;
        rA4 = rLit[49];
l_111:
        (--rSp)->Val = rA4;
        rA3 = (rSp + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        if (rA3 != rNil)        goto l_112;
        rA3 = rA4;
        if (rA3 != rNil)        goto l_112;
        rA3 = rLit[49];
l_112:
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLstartll_58);
        (--rSp)->Val = rLit[50]->Val;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[51]->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[24] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLstartll_58() {     /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLstartll_60);
        {aRet = (GYstartll[52] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_60() {     /* call_startll_59 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        if (GIa1 == GInil)      goto l_113;
        (--rSp)->Val = ((Ptr) GXpopj5);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
l_113:
        (--rSp)->Val = ((Ptr) GXpopj5);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_61() {     /* #:llcp:ext-not-resolved */
   {    register Ptr aRet, *rLit;
        rLit = GYstartll;
        GIa3 = GInil;
        GIa2 = rLit[54];
        GIa1 = rLit[55];
         GIa1 = llrt_call_error ();
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_62() {     /* defmacro-open */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYstartll; rSp = GIsp; rA1 = GIa1;
        GIa4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa4;
        GIa2 = rLit[56];
        (--rSp)->Val = ((Ptr) GLstartll_64);
        {aRet = (rLit[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstartll_64() {     /* call_startll_63 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        GIa3 = rSp->Val;
        GIa2 = rLit[58];
        (--rSp)->Val = ((Ptr) GLstartll_66);
        {aRet = (rLit[59] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_66() {     /* call_startll_65 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_67() {     /* make-macro-open */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[56];
        (--rSp)->Val = ((Ptr) GLstartll_69);
        {aRet = (rLit[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_69() {     /* call_startll_68 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[58];
        (--rSp)->Val = ((Ptr) GLstartll_71);
        {aRet = (rLit[59] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_71() {     /* call_startll_70 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_72() {     /* macro-openp */
   {    register Ptr aRet, *rLit;
        rLit = GYstartll;
        GIa2 = rLit[56];
        {aRet = (rLit[60] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_73() {     /* remove-macro-open */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[56];
        (--rSp)->Val = ((Ptr) GLstartll_75);
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_75() {     /* call_startll_74 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLstartll_76); goto lRet;}
        GIa2 = rLit[56];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLstartll_78);
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_78() {     /* call_startll_77 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = (GYstartll[62] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstartll_76() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_79() {     /* compiler */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA1 = GInil;
        goto l_nlist_startll_81;
l_nlist_startll_80:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_startll_81:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_startll_80;}
        (--rSp)->Val = ((Ptr) GLstartll_82);
        rA4 = (Ptr) 0;
        {aRet = (GYstartll[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLstartll_82() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstartll_83);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstartll_84);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYstartll[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_84() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLstartll_85);
        (--rSp)->Val = rLit[63];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_85() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj1);
        {aRet = ((Ptr) GLstartll_83); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_83() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLstartll_86);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYstartll[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_86() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_87() {     /* compile-all-in-core */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA1 = GInil;
        goto l_nlist_startll_89;
l_nlist_startll_88:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_startll_89:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_startll_88;}
        (--rSp)->Val = ((Ptr) GLstartll_90);
        rA4 = (Ptr) 0;
        {aRet = (GYstartll[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLstartll_90() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstartll_91);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstartll_92);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYstartll[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_92() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLstartll_93);
        (--rSp)->Val = rLit[64];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_93() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj1);
        {aRet = ((Ptr) GLstartll_91); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_91() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLstartll_94);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYstartll[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_94() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_95() {     /* loader */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA1 = GInil;
        goto l_nlist_startll_97;
l_nlist_startll_96:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_startll_97:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_startll_96;}
        (--rSp)->Val = ((Ptr) GLstartll_98);
        rA4 = (Ptr) 0;
        {aRet = (GYstartll[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLstartll_98() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstartll_99);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstartll_100);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYstartll[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_100() {    /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstartll; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLstartll_101);
        (--rSp)->Val = rLit[65];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_101() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj1);
        {aRet = ((Ptr) GLstartll_99); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_99() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLstartll_102);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYstartll[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstartll_102() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDstartll_103() {    /* trace subversion */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,66,67,68);
  lRet:  return (aRet);}}

static Ptr GDstartll_104() {    /* trace herald */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,20,67,68);
  lRet:  return (aRet);}}

static Ptr GDstartll_105() {    /* trace explodech */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,69,67,70);
  lRet:  return (aRet);}}

static Ptr GDstartll_106() {    /* trace implodech */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,71,67,70);
  lRet:  return (aRet);}}

static Ptr GDstartll_107() {    /* trace lhoblist */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,72,67,70);
  lRet:  return (aRet);}}

static Ptr GDstartll_108() {    /* trace #:lhoblist:g104 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,13,67,70);
  lRet:  return (aRet);}}

static Ptr GDstartll_109() {    /* trace #:llcp:nlist */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,73,67,68);
  lRet:  return (aRet);}}

static Ptr GDstartll_110() {    /* trace #:llcp:errwna */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,34,67,74);
  lRet:  return (aRet);}}

static Ptr GDstartll_111() {    /* trace core-init-std */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,49,67,70);
  lRet:  return (aRet);}}

static Ptr GDstartll_112() {    /* trace save-std */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,33,67,75);
  lRet:  return (aRet);}}

static Ptr GDstartll_113() {    /* trace #:llcp:ext-not-resolved */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,55,67,68);
  lRet:  return (aRet);}}

static Ptr GDstartll_114() {    /* trace defmacro-open */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,76,67,77);
  lRet:  return (aRet);}}

static Ptr GDstartll_115() {    /* trace make-macro-open */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,78,67,74);
  lRet:  return (aRet);}}

static Ptr GDstartll_116() {    /* trace macro-openp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,79,67,70);
  lRet:  return (aRet);}}

static Ptr GDstartll_117() {    /* trace remove-macro-open */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,80,67,70);
  lRet:  return (aRet);}}

static Ptr GDstartll_118() {    /* trace compiler */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,81,67,75);
  lRet:  return (aRet);}}

static Ptr GDstartll_119() {    /* trace compile-all-in-core */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,82,67,75);
  lRet:  return (aRet);}}

static Ptr GDstartll_120() {    /* trace loader */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstartll,83,67,75);
  lRet:  return (aRet);}}

