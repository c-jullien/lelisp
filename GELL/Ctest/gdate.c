/* GELL 15.26: source file for the module: "gdate" */
/*             translation done:           "Thu Jun  24 93 15:12:17 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "gdate.h" 

static Ptr GLgdate_1() {        /* (type-of (date)) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        (--GIsp)->Val = (rLit[0] + 2)->Val;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_2() {        /* (#:date:day d 1) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[2]->Val;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_3() {        /* (#:date:month d 1) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[2]->Val;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_4() {        /* (#:date:year d 0) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[2]->Val;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_5() {        /* (week-day-number d) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = rLit[2]->Val;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_6() {        /* (#:date:year d 1990) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[2]->Val;
        (--rSp)->Val = (Ptr) 1990;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_7() {        /* (year-day-number d) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = rLit[2]->Val;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_8() {        /* (#:date:month d 2) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[2]->Val;
        (--rSp)->Val = (Ptr) 2;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_9() {        /* (#:date:month d 3) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[2]->Val;
        (--rSp)->Val = (Ptr) 3;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_10() {       /* (#:date:year d 1992) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[2]->Val;
        (--rSp)->Val = (Ptr) 1992;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_11() {       /* (null (datep d)) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = rLit[2]->Val;
        (--GIsp)->Val = ((Ptr) GLgdate_13);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_13() {       /* call_gdate_12 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_101;
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = GYgdate[9];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLgdate_14() {       /* (datep ()) */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GYgdate[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_15() {       /* (type-of (short-string-date d)) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = rLit[2]->Val;
        (--GIsp)->Val = (rLit[0] + 2)->Val;
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_16() {       /* (< 0 (week-day-number d) 8) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = (Ptr) 0;
        GIa1 = rLit[2]->Val;
        (--rSp)->Val = ((Ptr) GLgdate_18);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_18() {       /* call_gdate_17 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 8;
        GIa4 = (Ptr) 3;
        {aRet = (GYgdate[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_19() {       /* (leap-year-p 1986) */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1986;
        {aRet = (GYgdate[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_20() {       /* (leap-year-p 1988) */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1988;
        {aRet = (GYgdate[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_21() {       /* (leap-year-p 1989) */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1989;
        {aRet = (GYgdate[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_22() {       /* (leap-year-p 1900) */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1900;
        {aRet = (GYgdate[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_23() {       /* (leap-year-p 2000) */
   {    register Ptr aRet;
        GIa1 = (Ptr) 2000;
        {aRet = (GYgdate[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_24() {       /* (leap-number 0) */
   {    register Ptr aRet;
        GIa1 = (Ptr) 0;
        {aRet = (GYgdate[13] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_25() {       /* (leap-number 1) */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1;
        {aRet = (GYgdate[13] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_26() {       /* (leap-number 4) */
   {    register Ptr aRet;
        GIa1 = (Ptr) 4;
        {aRet = (GYgdate[13] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_27() {       /* (leap-number 5) */
   {    register Ptr aRet;
        GIa1 = (Ptr) 5;
        {aRet = (GYgdate[13] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_28() {       /* (sub (leap-number 2001) (leap-number 2000)) */
   {    register Ptr aRet;
        GIa1 = (Ptr) 2001;
        (--GIsp)->Val = ((Ptr) GLgdate_30);
        {aRet = (GYgdate[13] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_30() {       /* call_gdate_29 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 2000;
        (--rSp)->Val = ((Ptr) GLgdate_32);
        {aRet = (GYgdate[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_32() {       /* call_gdate_31 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        GIa1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLgdate_33() {       /* (sub (leap-number 1001) (leap-number 1000)) */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1001;
        (--GIsp)->Val = ((Ptr) GLgdate_35);
        {aRet = (GYgdate[13] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_35() {       /* call_gdate_34 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (Ptr) 1000;
        (--rSp)->Val = ((Ptr) GLgdate_37);
        {aRet = (GYgdate[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_37() {       /* call_gdate_36 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        GIa1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLgdate_38() {       /* (current-language 'french) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[14];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_39() {       /* (current-language 'english) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[16];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_40() {       /* (eqstring f (short-string-date d)) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = rLit[17]->Val;
        GIa1 = rLit[2]->Val;
        (--rSp)->Val = ((Ptr) GLgdate_42);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_42() {       /* call_gdate_41 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        GIa1 = (GIsp++)->Val;
        {aRet = (GYgdate[18] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_43() {       /* (progn (sleep 1) ()) */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1;
        (--GIsp)->Val = ((Ptr) GLgdate_45);
        {aRet = (GYgdate[19] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_45() {       /* call_gdate_44 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_46() {       /* (type-of (long-string-date d)) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = rLit[2]->Val;
        (--GIsp)->Val = (rLit[0] + 2)->Val;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_47() {       /* (eqdate d d) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa2 = rLit[2]->Val;
        GIa1 = rLit[2]->Val;
        {aRet = (rLit[21] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_48() {       /* (eqdate d (date)) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = rLit[2]->Val;
        (--rSp)->Val = ((Ptr) GLgdate_50);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_50() {       /* call_gdate_49 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        GIa1 = (GIsp++)->Val;
        {aRet = (GYgdate[21] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_51() {       /* (<date d (date)) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = rLit[2]->Val;
        (--rSp)->Val = ((Ptr) GLgdate_53);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_53() {       /* call_gdate_52 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        GIa1 = (GIsp++)->Val;
        {aRet = (GYgdate[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_54() {       /* (<=date d d) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa2 = rLit[2]->Val;
        GIa1 = rLit[2]->Val;
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_55() {       /* (>date d (date)) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = rLit[2]->Val;
        (--rSp)->Val = ((Ptr) GLgdate_57);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_57() {       /* call_gdate_56 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        GIa1 = (GIsp++)->Val;
        {aRet = (GYgdate[24] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_58() {       /* (>=date d (date)) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = rLit[2]->Val;
        (--rSp)->Val = ((Ptr) GLgdate_60);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_60() {       /* call_gdate_59 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        GIa1 = (GIsp++)->Val;
        {aRet = (GYgdate[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_61() {       /* (> 1. (- (number-to-date n) dd)) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[26];
        (--rSp)->Val = ((Ptr) GLgdate_62);
        GIa1 = rLit[27]->Val;
        (--rSp)->Val = ((Ptr) GLgdate_64);
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_64() {       /* call_gdate_63 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[29]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_62() {       /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYgdate[31] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_65() {       /* (date-to-number (number-to-date 0)) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = (Ptr) 0;
        (--GIsp)->Val = (rLit[32] + 2)->Val;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_66() {       /* (date-to-number (number-to-date 1)) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = (Ptr) 1;
        (--GIsp)->Val = (rLit[32] + 2)->Val;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_67() {       /* (date-to-number (number-to-date 31)) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = (Ptr) 31;
        (--GIsp)->Val = (rLit[32] + 2)->Val;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_68() {       /* (date-to-number (number-to-date 32)) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = (Ptr) 32;
        (--GIsp)->Val = (rLit[32] + 2)->Val;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_69() {       /* (date-to-number (number-to-date 365)) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = (Ptr) 365;
        (--GIsp)->Val = (rLit[32] + 2)->Val;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_70() {       /* (date-to-number (number-to-date 366)) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = (Ptr) 366;
        (--GIsp)->Val = (rLit[32] + 2)->Val;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_71() {       /* (date-to-number (number-to-date 12345)) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = (Ptr) 12345;
        (--GIsp)->Val = (rLit[32] + 2)->Val;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_72() {       /* (date-to-number (number-to-date 123456.)) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = rLit[33];
        (--GIsp)->Val = (rLit[32] + 2)->Val;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_73() {       /* (eqstring f (long-string-date d)) */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = rLit[17]->Val;
        GIa1 = rLit[2]->Val;
        (--rSp)->Val = ((Ptr) GLgdate_75);
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_75() {       /* call_gdate_74 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        GIa1 = (GIsp++)->Val;
        {aRet = (GYgdate[18] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_76() {       /* (progn (setq a (temporary-file-pathname testd1)) (with ((outchan (openo a))) (print Hello) (close (outchan))) (sleep 1) ()) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = rLit[34];
        (--GIsp)->Val = ((Ptr) GLgdate_78);
        {aRet = (rLit[35] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_78() {       /* call_gdate_77 */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        rLit[36]->Val = GIa1;
        (--GIsp)->Val = ((Ptr) GLgdate_79);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_79() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLgdate_80);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLgdate_81);
        GIa1 = rLit[36]->Val;
        (--rSp)->Val = ((Ptr) GLgdate_83);
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_83() {       /* call_gdate_82 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYgdate[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_81() {       /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLgdate_84);
        (--rSp)->Val = rLit[39];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_84() {       /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLgdate_85);
        (--rSp)->Val = ((Ptr) GLgdate_86);
        GIa4 = (Ptr) 0;
        {aRet = (GYgdate[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_86() {       /* 107 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYgdate[41] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_85() {       /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLgdate_87);
        {aRet = ((Ptr) GLgdate_80); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_80() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLgdate_88);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYgdate[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_88() {       /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_87() {       /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = (Ptr) 1;
        (--rSp)->Val = ((Ptr) GLgdate_90);
        {aRet = (GYgdate[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_90() {       /* call_gdate_89 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_91() {       /* (progn (setq b (temporary-file-pathname testd2)) (with ((outchan (openo b))) (print Hello) (close (outchan))) ()) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = rLit[42];
        (--GIsp)->Val = ((Ptr) GLgdate_93);
        {aRet = (rLit[35] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_93() {       /* call_gdate_92 */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        rLit[43]->Val = GIa1;
        (--GIsp)->Val = ((Ptr) GLgdate_94);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_94() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLgdate_95);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLgdate_96);
        GIa1 = rLit[43]->Val;
        (--rSp)->Val = ((Ptr) GLgdate_98);
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_98() {       /* call_gdate_97 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYgdate[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_96() {       /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLgdate_99);
        (--rSp)->Val = rLit[39];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_99() {       /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLgdate_100);
        (--rSp)->Val = ((Ptr) GLgdate_101);
        GIa4 = (Ptr) 0;
        {aRet = (GYgdate[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_101() {      /* 107 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYgdate[41] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_100() {      /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLgdate_102);
        {aRet = ((Ptr) GLgdate_95); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_95() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLgdate_103);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYgdate[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_103() {      /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_102() {      /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgdate_104() {      /* (<date d1 d2) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa2 = rLit[44]->Val;
        GIa1 = rLit[45]->Val;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_105() {      /* (deletefile a) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = rLit[36]->Val;
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_106() {      /* (deletefile b) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = rLit[43]->Val;
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_107() {      /* (date-of-file ()) */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GYgdate[47] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgdate_108() {      /* (date-of-file ipar007) */
   {    register Ptr aRet, *rLit;
        rLit = GYgdate;
        GIa1 = rLit[48];
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDgdate_109() {      /* trace (type-of (date)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,49,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_110() {      /* trace (#:date:day d 1) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,52,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_111() {      /* trace (#:date:month d 1) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,53,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_112() {      /* trace (#:date:year d 0) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,54,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_113() {      /* trace (week-day-number d) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,55,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_114() {      /* trace (#:date:year d 1990) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,56,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_115() {      /* trace (year-day-number d) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,57,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_116() {      /* trace (#:date:month d 2) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,58,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_117() {      /* trace (#:date:month d 3) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,59,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_118() {      /* trace (#:date:year d 1992) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,60,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_119() {      /* trace (null (datep d)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,61,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_120() {      /* trace (datep ()) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,62,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_121() {      /* trace (type-of (short-string-date d)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,63,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_122() {      /* trace (< 0 (week-day-number d) 8) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,64,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_123() {      /* trace (leap-year-p 1986) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,65,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_124() {      /* trace (leap-year-p 1988) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,66,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_125() {      /* trace (leap-year-p 1989) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,67,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_126() {      /* trace (leap-year-p 1900) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,68,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_127() {      /* trace (leap-year-p 2000) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,69,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_128() {      /* trace (leap-number 0) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,70,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_129() {      /* trace (leap-number 1) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,71,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_130() {      /* trace (leap-number 4) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,72,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_131() {      /* trace (leap-number 5) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,73,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_132() {      /* trace (sub (leap-number 2001) (leap-number 2000)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,74,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_133() {      /* trace (sub (leap-number 1001) (leap-number 1000)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,75,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_134() {      /* trace (current-language 'french) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,76,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_135() {      /* trace (current-language 'english) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,77,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_136() {      /* trace (eqstring f (short-string-date d)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,78,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_137() {      /* trace (progn (sleep 1) ()) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,79,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_138() {      /* trace (type-of (long-string-date d)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,80,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_139() {      /* trace (eqdate d d) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,81,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_140() {      /* trace (eqdate d (date)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,82,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_141() {      /* trace (<date d (date)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,83,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_142() {      /* trace (<=date d d) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,84,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_143() {      /* trace (>date d (date)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,85,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_144() {      /* trace (>=date d (date)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,86,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_145() {      /* trace (> 1. (- (number-to-date n) dd)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,87,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_146() {      /* trace (date-to-number (number-to-date 0)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,88,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_147() {      /* trace (date-to-number (number-to-date 1)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,89,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_148() {      /* trace (date-to-number (number-to-date 31)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,90,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_149() {      /* trace (date-to-number (number-to-date 32)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,91,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_150() {      /* trace (date-to-number (number-to-date 365)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,92,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_151() {      /* trace (date-to-number (number-to-date 366)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,93,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_152() {      /* trace (date-to-number (number-to-date 12345)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,94,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_153() {      /* trace (date-to-number (number-to-date 123456.)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,95,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_154() {      /* trace (eqstring f (long-string-date d)) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,96,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_155() {      /* trace (progn (setq a (temporary-file-pathname testd1)) (with ((outchan (openo a))) (print Hello) (close (outchan))) (sleep 1) ()) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,97,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_156() {      /* trace (progn (setq b (temporary-file-pathname testd2)) (with ((outchan (openo b))) (print Hello) (close (outchan))) ()) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,98,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_157() {      /* trace (<date d1 d2) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,99,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_158() {      /* trace (deletefile a) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,100,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_159() {      /* trace (deletefile b) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,101,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_160() {      /* trace (date-of-file ()) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,102,50,51);
  lRet:  return (aRet);}}

static Ptr GDgdate_161() {      /* trace (date-of-file ipar007) */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgdate,103,50,51);
  lRet:  return (aRet);}}

