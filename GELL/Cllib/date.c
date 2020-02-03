/* GELL 15.26: source file for the module: "date" */
/*             translation done:           "Thu Jun  24 93 15:51:41 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "date.h" 

static Ptr GLdate_1() { /* week-day-number */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdate_3);
        {aRet = (GYdate[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_3() { /* call_date_2 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYdate; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[1];
        rA1 = rLit[2];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        GIa3 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        GIa2 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = (Ptr) 5;
        (--rSp)->Val = rA4;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLdate_5);
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_5() { /* call_date_4 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLdate_7);
        {aRet = (GYdate[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_7() { /* call_date_6 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        rA3 = (rSp++)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (rA4)));
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA3)));
        rSp->Val = rA4;
        GIa2 = (Ptr) 7;
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLdate_9);
        {aRet = (GYdate[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_9() { /* call_date_8 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        if (rA1 != (Ptr) 0)     {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        rA1 = (Ptr) 7;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdate_10() {        /* year-day-number */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdate_12);
        {aRet = (GYdate[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_12() {        /* call_date_11 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3;
        rLit = GYdate; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        if (rA1 != GInil)       goto l_102;
        rA3 = rSp->Val;
        rA2 = rLit[1];
        rA1 = rLit[4];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        GIa4 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        rA3 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        rA2 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa4;
        if ((Fix) (rA3) <= (Fix) 1)     {aRet = ((Ptr) GLdate_13); goto lRet;}
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) 1));
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rA3;
        {aRet = ((Ptr) GLdate_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLdate_14() {        /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdate_15);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYdate[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_15() {        /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLdate_16); goto lRet;}
        GIa2 = (rSp + 2)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdate_18);
        {aRet = (GYdate[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_18() {        /* call_date_17 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        (rSp + 3)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLdate_19);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        rA4 = (Ptr) 2;
        {aRet = (GYdate[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_19() {        /* 108 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLdate_14); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdate_16() {        /* 106 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLdate_13); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdate_13() {        /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_20() {        /* month-length */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYdate; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA2 = rLit[9]->Val;
        rA1 = llrt_call_cassq (rA1, rA2, GIbcons, GInil);
        (--rSp)->Val = rA1;
        if ((rSp + 1)->Val != (Ptr) 2)  {aRet = ((Ptr) GLdate_21); goto lRet;}
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLdate_23);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdate_23() {        /* call_date_22 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLdate_21); goto lRet;}
        GIa4 = (Ptr) 1;
        {aRet = ((Ptr) GLdate_24); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdate_21() {        /* 101 */
   {    register Ptr aRet;
        GIa4 = (Ptr) 0;
        {aRet = ((Ptr) GLdate_24); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdate_24() {        /* 102 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        rA3 = (rSp++)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (GIa4)));
        GIa1 = rA3;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLdate_25() {        /* leap-year-p */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (Ptr) 4;
        (--rSp)->Val = ((Ptr) GLdate_27);
        {aRet = (GYdate[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_27() {        /* call_date_26 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != (Ptr) 0)    {aRet = ((Ptr) GLdate_28); goto lRet;}
        GIa2 = (Ptr) 100;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLdate_30);
        {aRet = (GYdate[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_30() {        /* call_date_29 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != (Ptr) 0)    {aRet = ((Ptr) GLdate_31); goto lRet;}
        GIa2 = (Ptr) 400;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLdate_33);
        {aRet = (GYdate[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_33() {        /* call_date_32 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != (Ptr) 0)     goto l_105;
        rA1 = GYdate[11];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        rA1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdate_31() {        /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYdate[11];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_28() {        /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_34() {        /* leap-number */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA1;
        if ((Fix) (rA1) <= (Fix) 0)     goto l_101;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        rA4 = rA1;
        goto l_102;
l_101:
        rA4 = rA1;
l_102:
        (--rSp)->Val = rA4;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) / (Fix) 4));
        rA3 = rSp->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) / (Fix) 400));
        if ((Fix) ((rSp + 1)->Val) <= (Fix) 0)  goto l_103;
        rA2 = (Ptr) 1;
        goto l_104;
l_103:
        rA2 = (Ptr) 0;
l_104:
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (rA2)));
        rA1 = rSp->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) 100));
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) (rA1)));
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA3)));
        rA1 = rA4;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_35() {        /* #:date:make */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = ((Ptr) GLdate_36);
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        GIa4 = (Ptr) 8;
        {aRet = (GYdate[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_36() {        /* 101 */
   {    register Ptr aRet;
        (GIa1 + 1)->Val = GYdate[13];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdate_37() {        /* #:date:year */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYdate; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = (Ptr) 0;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_38() {        /* #:date:month */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYdate; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = (Ptr) 1;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_39() {        /* #:date:day */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYdate; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = (Ptr) 2;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_40() {        /* #:date:hour */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYdate; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = (Ptr) 3;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_41() {        /* #:date:minute */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYdate; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[19];
        (--rSp)->Val = (Ptr) 4;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_42() {        /* #:date:second */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYdate; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[20];
        (--rSp)->Val = (Ptr) 5;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_43() {        /* #:date:msecond */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYdate; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[21];
        (--rSp)->Val = (Ptr) 6;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_44() {        /* #:date:week-day */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYdate; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        (--rSp)->Val = rLit[22];
        (--rSp)->Val = (Ptr) 7;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 3));
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_45() {        /* create-date */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLdate_47);
        {aRet = (GYdate[13] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdate_47() {        /* call_date_46 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBfloat;
        rLit = GYdate; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBfloat = GIbfloat;
        (--rSp)->Val = rA1;
        (rA1 + 1)->Val = rLit[13];
        rA4 = (rA1->Val + 2 + (Fix) 0)->Val;
        if (rA4 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[23];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        if (rA4 >= rBfloat)     goto l_105;
        rA4 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        if ((Fix) (rA4) < (Fix) 1)      goto l_105;
        rA4 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        if ((Fix) (rA4) <= (Fix) 12)    goto l_104;
l_105:
        rA3 = rSp->Val;
        rA2 = rLit[24];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA4 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        if (rA4 >= rBfloat)     goto l_108;
        rA4 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        if ((Fix) (rA4) < (Fix) 1)      goto l_108;
        rA4 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        if ((Fix) (rA4) <= (Fix) 31)    goto l_107;
l_108:
        rA3 = rSp->Val;
        rA2 = rLit[25];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        rA4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        if (rA4 >= rBfloat)     goto l_111;
        rA4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        if ((Fix) (rA4) < (Fix) 0)      goto l_111;
        rA4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        if ((Fix) (rA4) <= (Fix) 23)    goto l_110;
l_111:
        rA3 = rSp->Val;
        rA2 = rLit[26];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_110:
        rA4 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        if (rA4 >= rBfloat)     goto l_114;
        rA4 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        if ((Fix) (rA4) < (Fix) 0)      goto l_114;
        rA4 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        if ((Fix) (rA4) <= (Fix) 59)    goto l_113;
l_114:
        rA3 = rSp->Val;
        rA2 = rLit[27];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_113:
        rA4 = (rSp->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 != rNil)        goto l_116;
        (rSp->Val->Val + 2 + (Fix) 5)->Val = (Ptr) 0;
l_116:
        rA4 = (rSp->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 >= rBfloat)     goto l_119;
        rA4 = (rSp->Val->Val + 2 + (Fix) 5)->Val;
        if ((Fix) (rA4) < (Fix) 0)      goto l_119;
        rA4 = (rSp->Val->Val + 2 + (Fix) 5)->Val;
        if ((Fix) (rA4) <= (Fix) 59)    goto l_118;
l_119:
        rA3 = rSp->Val;
        rA2 = rLit[28];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_118:
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        goto l_121;
        (rSp->Val->Val + 2 + (Fix) 6)->Val = (Ptr) 0;
l_121:
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 >= rBfloat)     goto l_124;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if ((Fix) (rA4) < (Fix) 0)      goto l_124;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if ((Fix) (rA4) <= (Fix) 999)   goto l_123;
l_124:
        rA3 = rSp->Val;
        rA2 = rLit[29];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_123:
        rA4 = (rSp->Val->Val + 2 + (Fix) 7)->Val;
        if (rA4 != rNil)        {aRet = ((Ptr) GLdate_48); goto lRet;}
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLdate_50);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_50() {        /* call_date_49 */
   {    register Ptr aRet;
        (GIsp->Val->Val + 2 + (Fix) 7)->Val = GIa1;
        {aRet = ((Ptr) GLdate_48); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdate_48() {        /* 126 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYdate; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 7)->Val;
        if (rA4 >= GIbfloat)    goto l_129;
        rA4 = (rSp->Val->Val + 2 + (Fix) 7)->Val;
        if ((Fix) (rA4) < (Fix) 1)      goto l_129;
        rA4 = (rSp->Val->Val + 2 + (Fix) 7)->Val;
        if ((Fix) (rA4) <= (Fix) 7)     goto l_128;
l_129:
        GIa3 = rSp->Val;
        GIa2 = rLit[30];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_128:
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_51() {        /* #:date:prin */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYdate; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rLit[31]->Val == rNil)      {aRet = ((Ptr) GLdate_52); goto lRet;}
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[31]->Val;
        rLit[31]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[32];
        (--rSp)->Val = rLit[33];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLdate_53);
        (--rSp)->Val = rLit[34];
        rA4 = (rA1->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[35];
        rA4 = (rA1->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[35];
        rA4 = (rA1->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[35];
        rA4 = (rA1->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[35];
        rA4 = (rA1->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[35];
        rA4 = (rA1->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[35];
        rA4 = (rA1->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[35];
        rA4 = (rA1->Val + 2 + (Fix) 7)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[36];
        rA4 = (Ptr) 17;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_53() {        /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYdate[31]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_52() {        /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLdate_55);
        {aRet = (GYdate[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_55() {        /* call_date_54 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYdate[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdate_56() {        /* short-string-date */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdate_58);
        {aRet = (GYdate[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_58() {        /* call_date_57 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdate; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[1];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        GIa2 = (Ptr) 100;
        (--rSp)->Val = ((Ptr) GLdate_60);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdate_60() {        /* call_date_59 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdate; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        GIa2 = rLit[39]->Val;
        rA1 = llrt_call_cassq (rA1, GIa2, GIbcons, GInil);
        (--rSp)->Val = ((Ptr) GLdate_62);
        {aRet = (rLit[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdate_62() {        /* call_date_61 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYdate; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        GIa3 = ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = GIa3;
        rA2 = ((rSp + 4)->Val->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA2;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA4;
        rA1 = ((rSp + 6)->Val->Val + 2 + (Fix) 7)->Val;
        rA2 = rLit[41]->Val;
        rA1 = llrt_call_cassq (rA1, rA2, GIbcons, GInil);
        (--rSp)->Val = ((Ptr) GLdate_64);
        {aRet = (rLit[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_64() {        /* call_date_63 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (Ptr) 32;
        GIa1 = (Ptr) 24;
        (--rSp)->Val = ((Ptr) GLdate_66);
        {aRet = (GYdate[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_66() {        /* call_date_65 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdate_67);
        GIa4 = (Ptr) 0;
        {aRet = (GYdate[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_67() {        /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdate; rSp = GIsp;
        if (GIa1 != rLit[44])   {aRet = ((Ptr) GLdate_68); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdate_69);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_69() {        /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdate_70);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLdate_72);
        {aRet = (GYdate[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_72() {        /* call_date_71 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (Ptr) 11;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 4;
        {aRet = (GYdate[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_70() {        /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdate_73);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 4;
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (GYdate[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_68() {        /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdate_74);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (GYdate[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_74() {        /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdate_75);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLdate_77);
        {aRet = (GYdate[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_77() {        /* call_date_76 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (Ptr) 6;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 4;
        {aRet = (GYdate[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_75() {        /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdate_73);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 7;
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (GYdate[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_73() {        /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdate_78);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLdate_80);
        {aRet = (GYdate[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_80() {        /* call_date_79 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (Ptr) 14;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 4;
        {aRet = (GYdate[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_78() {        /* 113 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdate; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdate_81);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 15;
        (--rSp)->Val = rLit[47];
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_81() {        /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdate_82);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLdate_84);
        {aRet = (GYdate[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_84() {        /* call_date_83 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (Ptr) 17;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 4;
        {aRet = (GYdate[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_82() {        /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdate_85);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLdate_87);
        {aRet = (GYdate[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_87() {        /* call_date_86 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (Ptr) 20;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 4;
        {aRet = (GYdate[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_85() {        /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdate_88);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLdate_90);
        {aRet = (GYdate[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_90() {        /* call_date_89 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (Ptr) 23;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 4;
        {aRet = (GYdate[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdate_88() {        /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdate_91() {        /* datep */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdate; rSp = GIsp; rA1 = GIa1;
        if ((rA1 < GIbvect) || (rA1 >= GIbstrg))        goto l_101;
        if ((rA1 + 1)->Val != rLit[13]) goto l_101;
        rA1 = rLit[11];
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GDdate_92() {        /* trace week-day-number */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,2,48,49);
  lRet:  return (aRet);}}

static Ptr GDdate_93() {        /* trace year-day-number */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,4,48,49);
  lRet:  return (aRet);}}

static Ptr GDdate_94() {        /* trace month-length */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,7,48,50);
  lRet:  return (aRet);}}

static Ptr GDdate_95() {        /* trace leap-year-p */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,10,48,49);
  lRet:  return (aRet);}}

static Ptr GDdate_96() {        /* trace leap-number */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,3,48,49);
  lRet:  return (aRet);}}

static Ptr GDdate_97() {        /* trace #:date:make */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,51,48,52);
  lRet:  return (aRet);}}

static Ptr GDdate_98() {        /* trace #:date:year */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,14,48,53);
  lRet:  return (aRet);}}

static Ptr GDdate_99() {        /* trace #:date:month */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,16,48,53);
  lRet:  return (aRet);}}

static Ptr GDdate_100() {       /* trace #:date:day */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,17,48,53);
  lRet:  return (aRet);}}

static Ptr GDdate_101() {       /* trace #:date:hour */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,18,48,53);
  lRet:  return (aRet);}}

static Ptr GDdate_102() {       /* trace #:date:minute */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,19,48,53);
  lRet:  return (aRet);}}

static Ptr GDdate_103() {       /* trace #:date:second */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,20,48,53);
  lRet:  return (aRet);}}

static Ptr GDdate_104() {       /* trace #:date:msecond */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,21,48,53);
  lRet:  return (aRet);}}

static Ptr GDdate_105() {       /* trace #:date:week-day */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,22,48,53);
  lRet:  return (aRet);}}

static Ptr GDdate_106() {       /* trace create-date */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,54,48,52);
  lRet:  return (aRet);}}

static Ptr GDdate_107() {       /* trace #:date:prin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,55,48,49);
  lRet:  return (aRet);}}

static Ptr GDdate_108() {       /* trace short-string-date */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,38,48,49);
  lRet:  return (aRet);}}

static Ptr GDdate_109() {       /* trace datep */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdate,0,48,49);
  lRet:  return (aRet);}}

