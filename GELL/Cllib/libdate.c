/* GELL 15.26: source file for the module: "libdate" */
/*             translation done:           "Wed June 16 93 18:02:26 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "libdate.h" 

static Ptr GLlibdate_1() {      /* long-string-date */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibdate_3);
        {aRet = (GYlibdate[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_3() {      /* call_libdate_2 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        rA2 = rLit[1];
        rA1 = rLit[2];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        GIa4 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = GIa4;
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        rA2 = rLit[3]->Val;
        rA1 = llrt_call_cassq (rA1, rA2, GIbcons, rNil);
        (--rSp)->Val = ((Ptr) GLlibdate_5);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLlibdate_5() {      /* call_libdate_4 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        GIa3 = ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = GIa3;
        rA2 = ((rSp + 4)->Val->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA2;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA1 = ((rSp + 7)->Val->Val + 2 + (Fix) 7)->Val;
        rA2 = rLit[5]->Val;
        rA1 = llrt_call_cassq (rA1, rA2, GIbcons, GInil);
        (--rSp)->Val = ((Ptr) GLlibdate_7);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLlibdate_7() {      /* call_libdate_6 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (Ptr) 32;
        GIa1 = (Ptr) 48;
        (--rSp)->Val = ((Ptr) GLlibdate_9);
        {aRet = (GYlibdate[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_9() {      /* call_libdate_8 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLlibdate_10);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLlibdate_11);
        (--rSp)->Val = (Ptr) 3;
        rA1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_13);
        {aRet = (GYlibdate[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibdate_13() {     /* call_libdate_12 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) 3));
        (--GIsp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLlibdate_11() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (GYlibdate[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_10() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_14);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLlibdate_15);
        (--rSp)->Val = (Ptr) 12;
        GIa1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_17);
        {aRet = (GYlibdate[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_17() {     /* call_libdate_16 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_15() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (GYlibdate[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_14() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_18);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLlibdate_19);
        (--rSp)->Val = (Ptr) 16;
        GIa1 = (rSp + 11)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_21);
        {aRet = (GYlibdate[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_21() {     /* call_libdate_20 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) 3));
        (--GIsp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLlibdate_19() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (GYlibdate[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_18() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_22);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLlibdate_23);
        (--rSp)->Val = (Ptr) 27;
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_25);
        {aRet = (GYlibdate[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_25() {     /* call_libdate_24 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_23() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (GYlibdate[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_22() {     /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_26);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 30;
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_26() {     /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_27);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLlibdate_28);
        (--rSp)->Val = (Ptr) 32;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_30);
        {aRet = (GYlibdate[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_30() {     /* call_libdate_29 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_28() {     /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (GYlibdate[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_27() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_31);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLlibdate_32);
        (--rSp)->Val = (Ptr) 36;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_34);
        {aRet = (GYlibdate[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_34() {     /* call_libdate_33 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_32() {     /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (GYlibdate[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_31() {     /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_35);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLlibdate_36);
        (--rSp)->Val = (Ptr) 41;
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_38);
        {aRet = (GYlibdate[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_38() {     /* call_libdate_37 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_36() {     /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (GYlibdate[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_35() {     /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_39);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLlibdate_40);
        (--rSp)->Val = (Ptr) 46;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_42);
        {aRet = (GYlibdate[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_42() {     /* call_libdate_41 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_40() {     /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (GYlibdate[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_39() {     /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_43() {     /* eqdate */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibdate_45);
        {aRet = (GYlibdate[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_45() {     /* call_libdate_44 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_47);
        {aRet = (GYlibdate[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_47() {     /* call_libdate_46 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (GYlibdate[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_48() {     /* /=date */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibdate_50);
        {aRet = (GYlibdate[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_50() {     /* call_libdate_49 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_101;
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = GYlibdate[13];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibdate_51() {     /* <?date */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibdate_53);
        {aRet = (GYlibdate[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_53() {     /* call_libdate_52 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[1];
        rA1 = rLit[14];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_55);
        {aRet = (rLit[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibdate_55() {     /* call_libdate_54 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_104;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[1];
        rA1 = rLit[14];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = (Ptr) 0;
        {aRet = ((Ptr) GLlibdate_56); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibdate_56() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_57);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 6;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_57() {     /* 108 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLlibdate_58); goto lRet;}
        (--rSp)->Val = ((Ptr) GLlibdate_59);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        if (rA4 != rNil)        goto l_112;
        rA4 = (Ptr) 0;
l_112:
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        if (rA4 != rNil)        goto l_113;
        rA4 = (Ptr) 0;
l_113:
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYlibdate[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibdate_59() {     /* 111 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYlibdate; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (GIa1 == rNil)       goto l_109;
        GIa1 = rLit[13];
        GIa2 = rLit[15];
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
l_109:
        (--rSp)->Val = ((Ptr) GLlibdate_60);
        rA4 = ((rSp + 6)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        if (rA4 != rNil)        goto l_117;
        rA4 = (Ptr) 0;
l_117:
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        if (rA4 != rNil)        goto l_118;
        rA4 = (Ptr) 0;
l_118:
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibdate_60() {     /* 116 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYlibdate; rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       goto l_110;
        GIa1 = rNil;
        GIa2 = rLit[15];
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
l_110:
        (--rSp)->Val = ((Ptr) GLlibdate_61);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_61() {     /* 119 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLlibdate_56); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_58() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = (rSp + 6)->Val;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
l_105:
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_62() {     /* <date */
   {    register Ptr aRet;
        GIa3 = GInil;
        {aRet = ((Ptr) GLlibdate_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_63() {     /* <=date */
   {    register Ptr aRet;
        GIa3 = GYlibdate[13];
        {aRet = ((Ptr) GLlibdate_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_64() {     /* >date */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        GIa3 = GInil;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLlibdate_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_65() {     /* >=date */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        GIa3 = GYlibdate[13];
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLlibdate_51); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_66() {     /* date-to-number */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibdate_68);
        {aRet = (GYlibdate[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_68() {     /* call_libdate_67 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[1];
        rA1 = rLit[21];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        GIa3 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        GIa2 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_103;
        rA4 = (Ptr) 0;
l_103:
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj6);
        (--rSp)->Val = ((Ptr) GLlibdate_69);
        (--rSp)->Val = (Ptr) 365;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLlibdate_69() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_71);
        {aRet = (GYlibdate[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_71() {     /* call_libdate_70 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_73);
        {aRet = (GYlibdate[24] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_73() {     /* call_libdate_72 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibdate_74);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[25];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_74() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibdate_75);
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[26];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_75() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibdate_76);
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[27];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_76() {     /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibdate_77);
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[28];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_77() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) ((UFix) 0xffff);
        GIa4 = (Ptr) 8;
        {aRet = (GYlibdate[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_78() {     /* number-to-date */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (--rSp)->Val = rLit[29]->Val;
        rLit[29]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[30];
        (--rSp)->Val = ((Ptr) GLlibdate_78);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa2 = (Ptr) 0;
        GIa1 = (Ptr) 8;
        (--rSp)->Val = ((Ptr) GLlibdate_80);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_80() {     /* call_libdate_79 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rLit[32]->Val;
        rLit[32]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[33];
        (--rSp)->Val = rLit[34];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (rA1 + 1)->Val = rLit[32];
        (--rSp)->Val = ((Ptr) GLlibdate_81);
        (--rSp)->Val = rLit[29]->Val;
        (--rSp)->Val = rLit[35]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_81() {     /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibdate_83);
        {aRet = (GYlibdate[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_83() {     /* call_libdate_82 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (rLit[32]->Val->Val + 2 + (Fix) 0)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLlibdate_84);
        (--rSp)->Val = rLit[29]->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_85);
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 365;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_85() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_87);
        {aRet = (GYlibdate[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_87() {     /* call_libdate_86 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_84() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYlibdate[29]->Val = GIa1;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLlibdate_89);
        {aRet = ((Ptr) GLlibdate_90); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_89() {     /* call_libdate_88 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_91);
        (--rSp)->Val = rLit[29]->Val;
        (--rSp)->Val = rLit[38]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_91() {     /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibdate_93);
        {aRet = (GYlibdate[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_93() {     /* call_libdate_92 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibdate_95);
        {aRet = (GYlibdate[39] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_95() {     /* call_libdate_94 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (rLit[32]->Val->Val + 2 + (Fix) 1)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibdate_96);
        (--rSp)->Val = rLit[29]->Val;
        GIa1 = rLit[32]->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_98);
        {aRet = (rLit[24] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_98() {     /* call_libdate_97 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_96() {     /* 105 */
   {    register Ptr aRet, *rLit;
        rLit = GYlibdate;
        rLit[29]->Val = GIa1;
        (--GIsp)->Val = ((Ptr) GLlibdate_100);
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_100() {    /* call_libdate_99 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibdate_102);
        {aRet = (GYlibdate[39] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_102() {    /* call_libdate_101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1;
        (rLit[32]->Val->Val + 2 + (Fix) 2)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLlibdate_103);
        (--rSp)->Val = rLit[29]->Val;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_103() {    /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibdate_105);
        {aRet = (GYlibdate[39] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_105() {    /* call_libdate_104 */
   {    register Ptr aRet;
        GYlibdate[29]->Val = GIa1;
        (--GIsp)->Val = ((Ptr) GLlibdate_107);
        {aRet = ((Ptr) GLlibdate_108); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_107() {    /* call_libdate_106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (--rSp)->Val = rLit[32]->Val;
        GIa1 = rLit[32]->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_110);
        {aRet = (rLit[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_110() {    /* call_libdate_109 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYlibdate; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 7)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibdate_111);
        (--rSp)->Val = (Ptr) 24;
        (--rSp)->Val = rLit[29]->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibdate_111() {    /* 107 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibdate_113);
        {aRet = (GYlibdate[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_113() {    /* call_libdate_112 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1;
        (rLit[32]->Val->Val + 2 + (Fix) 3)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLlibdate_114);
        (--rSp)->Val = rLit[29]->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_115);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[25];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_115() {    /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_114() {    /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1;
        rLit[29]->Val = rA1;
        (--rSp)->Val = ((Ptr) GLlibdate_116);
        (--rSp)->Val = (Ptr) 1440;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_116() {    /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibdate_118);
        {aRet = (GYlibdate[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_118() {    /* call_libdate_117 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1;
        (rLit[32]->Val->Val + 2 + (Fix) 4)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLlibdate_119);
        (--rSp)->Val = rLit[29]->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_120);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[26];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_120() {    /* 112 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_119() {    /* 111 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1;
        rLit[29]->Val = rA1;
        (--rSp)->Val = ((Ptr) GLlibdate_121);
        (--rSp)->Val = rLit[41];
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_121() {    /* 113 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibdate_123);
        {aRet = (GYlibdate[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_123() {    /* call_libdate_122 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1;
        (rLit[32]->Val->Val + 2 + (Fix) 5)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLlibdate_124);
        (--rSp)->Val = rLit[29]->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_125);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[27];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_125() {    /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_124() {    /* 114 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1;
        rLit[29]->Val = rA1;
        (--rSp)->Val = ((Ptr) GLlibdate_126);
        (--rSp)->Val = rLit[42];
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_126() {    /* 116 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibdate_128);
        {aRet = (GYlibdate[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_128() {    /* call_libdate_127 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1;
        (rLit[32]->Val->Val + 2 + (Fix) 6)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLlibdate_129);
        (--rSp)->Val = rLit[29]->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_130);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[28];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_130() {    /* 118 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_129() {    /* 117 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        rLit[29]->Val = GIa1;
        GIa1 = rLit[32]->Val;
        GIdlink = (rSp + 1)->Val;
        rLit[32]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[29]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_90() {     /* adjust-year */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_131);
        (--rSp)->Val = rLit[29]->Val;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_131() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLlibdate_132); goto lRet;}
        (--rSp)->Val = rLit[32]->Val;
        GIa1 = (rLit[32]->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_134);
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_134() {    /* call_libdate_133 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 0)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibdate_135);
        (--rSp)->Val = rLit[29]->Val;
        GIa1 = (rLit[32]->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_137);
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_137() {    /* call_libdate_136 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        if (GIa1 == GInil)      goto l_105;
        rA4 = (Ptr) 366;
        goto l_106;
l_105:
        rA4 = (Ptr) 365;
l_106:
        (--GIsp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYlibdate[20] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLlibdate_135() {    /* 104 */
   {    register Ptr aRet;
        GYlibdate[29]->Val = GIa1;
        {aRet = ((Ptr) GLlibdate_90); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_132() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_138);
        (--rSp)->Val = rLit[29]->Val;
        (--rSp)->Val = (Ptr) 367;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_138() {    /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLlibdate_139); goto lRet;}
        (--rSp)->Val = ((Ptr) GLlibdate_140);
        (--rSp)->Val = rLit[29]->Val;
        (--rSp)->Val = (Ptr) 366;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_140() {    /* 111 */
   {    register Ptr aRet, *rLit;
        rLit = GYlibdate;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLlibdate_141); goto lRet;}
        GIa1 = (rLit[32]->Val->Val + 2 + (Fix) 0)->Val;
        (--GIsp)->Val = ((Ptr) GLlibdate_143);
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_143() {    /* call_libdate_142 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLlibdate_141); goto lRet;}
        {aRet = ((Ptr) GLlibdate_139); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_139() {    /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_144);
        (--rSp)->Val = rLit[29]->Val;
        GIa1 = (rLit[32]->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_146);
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_146() {    /* call_libdate_145 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        if (GIa1 == GInil)      goto l_113;
        rA4 = (Ptr) 366;
        goto l_114;
l_113:
        rA4 = (Ptr) 365;
l_114:
        (--GIsp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLlibdate_144() {    /* 112 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        rLit[29]->Val = GIa1;
        (--rSp)->Val = rLit[32]->Val;
        GIa1 = (rLit[32]->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_148);
        {aRet = (rLit[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_148() {    /* call_libdate_147 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        (GIa4->Val + 2 + (Fix) 0)->Val = GIa1;
        {aRet = ((Ptr) GLlibdate_90); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_141() {    /* 107 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_108() {    /* adjust-day */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_149);
        (--rSp)->Val = rLit[29]->Val;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_149() {    /* 103 */
   {    register Ptr aRet, *rLit;
        rLit = GYlibdate;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLlibdate_150); goto lRet;}
        GIa1 = rLit[29]->Val;
        (--GIsp)->Val = ((Ptr) GLlibdate_152);
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_152() {    /* call_libdate_151 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibdate_154);
        {aRet = (GYlibdate[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_154() {    /* call_libdate_153 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibdate_156);
        {aRet = (GYlibdate[39] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_156() {    /* call_libdate_155 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[32]->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_157);
        rA4 = (rLit[32]->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibdate_157() {    /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYlibdate; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 2)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibdate_158);
        (--rSp)->Val = rLit[29]->Val;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibdate_158() {    /* 105 */
   {    register Ptr aRet;
        GYlibdate[29]->Val = GIa1;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLlibdate_159); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_150() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_160);
        (--rSp)->Val = rLit[29]->Val;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_160() {    /* 108 */
   {    register Ptr aRet, *rLit;
        rLit = GYlibdate;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLlibdate_159); goto lRet;}
        GIa1 = rLit[29]->Val;
        (--GIsp)->Val = ((Ptr) GLlibdate_162);
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_162() {    /* call_libdate_161 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[32]->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_163);
        rA4 = (rLit[32]->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibdate_163() {    /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYlibdate; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 2)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibdate_164);
        (--rSp)->Val = rLit[29]->Val;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibdate_164() {    /* 110 */
   {    register Ptr aRet;
        GYlibdate[29]->Val = GIa1;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLlibdate_159); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_159() {    /* adjust-month */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYlibdate; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLlibdate_165);
        rA4 = (rLit[32]->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibdate_165() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLlibdate_166); goto lRet;}
        (--rSp)->Val = rLit[32]->Val;
        GIa1 = (rLit[32]->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_168);
        {aRet = ((Ptr) GLlibdate_169); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_168() {    /* call_libdate_167 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYlibdate; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 1)->Val = GIa1;
        (--rSp)->Val = rLit[32]->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_170);
        rA4 = (rLit[32]->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        GIa1 = (rLit[32]->Val->Val + 2 + (Fix) 1)->Val;
        GIa2 = (rLit[32]->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_172);
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibdate_172() {    /* call_libdate_171 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[20] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_170() {    /* 104 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        (GIa4->Val + 2 + (Fix) 2)->Val = GIa1;
        {aRet = ((Ptr) GLlibdate_159); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_166() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibdate_173);
        GIa4 = (rLit[32]->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = GIa4;
        GIa1 = (rLit[32]->Val->Val + 2 + (Fix) 1)->Val;
        GIa2 = (rLit[32]->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_175);
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_175() {    /* call_libdate_174 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[19] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_173() {    /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLlibdate_176); goto lRet;}
        (--rSp)->Val = rLit[32]->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_177);
        GIa4 = (rLit[32]->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = GIa4;
        GIa1 = (rLit[32]->Val->Val + 2 + (Fix) 1)->Val;
        GIa2 = (rLit[32]->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_179);
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_179() {    /* call_libdate_178 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibdate[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_177() {    /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibdate; rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 2)->Val = GIa1;
        (--rSp)->Val = rLit[32]->Val;
        GIa1 = (rLit[32]->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_181);
        {aRet = ((Ptr) GLlibdate_182); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_181() {    /* call_libdate_180 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        (GIa4->Val + 2 + (Fix) 1)->Val = GIa1;
        {aRet = ((Ptr) GLlibdate_159); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_176() {    /* 105 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_169() {    /* prev-month */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != (Ptr) 1)     goto l_101;
        rA1 = (Ptr) 12;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibdate_182() {    /* next-month */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != (Ptr) 12)    goto l_101;
        rA1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 1));
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibdate_183() {    /* getfdate */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = ((Ptr) (GIa1->Val)+2);
         callg_arg2 = ((Ptr) (GIa2->Val)+2);
         Lfixvector_to_Cfixvector (GIa1);
         callg_retv = ((long) getfdate(callg_arg1,callg_arg2));
         Cfixvector_to_Lfixvector (GIa1);
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibdate_184() {    /* date-of-file */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibdate_186);
        {aRet = (GYlibdate[48] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_186() {    /* call_libdate_185 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        if ((rSp->Val >= GIbstrg) && (rSp->Val < GIbsymb))      goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[49];
        rA1 = rLit[50];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_188);
        {aRet = (rLit[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibdate_188() {    /* call_libdate_187 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibdate; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_104;
        GIa3 = rSp->Val;
        GIa2 = rLit[52];
        rA1 = rLit[50];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = ((Ptr) GLlibdate_190);
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibdate_190() {    /* call_libdate_189 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA1;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_192);
        {aRet = (GYlibdate[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibdate_192() {    /* call_libdate_191 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLlibdate_194);
        {aRet = ((Ptr) GLlibdate_183); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibdate_194() {    /* call_libdate_193 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDlibdate_195() {    /* trace long-string-date */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibdate,2,55,56);
  lRet:  return (aRet);}}

static Ptr GDlibdate_196() {    /* trace eqdate */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibdate,12,55,57);
  lRet:  return (aRet);}}

static Ptr GDlibdate_197() {    /* trace /=date */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibdate,58,55,57);
  lRet:  return (aRet);}}

static Ptr GDlibdate_198() {    /* trace <date */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibdate,14,55,57);
  lRet:  return (aRet);}}

static Ptr GDlibdate_199() {    /* trace <=date */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibdate,59,55,57);
  lRet:  return (aRet);}}

static Ptr GDlibdate_200() {    /* trace >date */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibdate,60,55,57);
  lRet:  return (aRet);}}

static Ptr GDlibdate_201() {    /* trace >=date */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibdate,61,55,57);
  lRet:  return (aRet);}}

static Ptr GDlibdate_202() {    /* trace date-to-number */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibdate,21,55,56);
  lRet:  return (aRet);}}

static Ptr GDlibdate_203() {    /* trace number-to-date */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibdate,62,55,56);
  lRet:  return (aRet);}}

static Ptr GDlibdate_204() {    /* trace date-of-file */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibdate,50,55,56);
  lRet:  return (aRet);}}

