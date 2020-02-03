/* GELL 15.26: source file for the module: "abbrev" */
/*             translation done:           "Wed June 16 93 18:01:13 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "abbrev.h" 

static Ptr GLabbrev_1() {       /* defabbrev */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYabbrev; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[0];
        (--rSp)->Val = ((Ptr) GLabbrev_2);
        (--rSp)->Val = rLit[1];
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLabbrev_2() {       /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYabbrev; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLabbrev_3);
        (--rSp)->Val = rLit[1];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLabbrev_3() {       /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYabbrev[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLabbrev_4() {       /* put-abbrev */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rBsymb, rBcons;
        rLit = GYabbrev; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
l_101:
        if ((rSp->Val >= rBsymb) && (rSp->Val < rBcons))        goto l_103;
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
        rSp->Val = rA1;
        goto l_101;
l_103:
        if (((rSp + 1)->Val >= rBsymb) && ((rSp + 1)->Val < rBcons))    goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[3];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
        (rSp + 1)->Val = rA1;
        goto l_103;
l_104:
        rA2 = rLit[4]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, GInil);
        if ((long) rA1 < (long) rBcons) goto l_105;
        (rA1 + 1)->Val = (rSp + 1)->Val;
        {aRet = ((Ptr) GLabbrev_5); goto lRet;}
l_105:
        rA3 = rLit[4]->Val;
        rA2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLabbrev_7);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLabbrev_7() {       /* call_abbrev_6 */
   {    register Ptr aRet;
        GYabbrev[4]->Val = GIa1;
        {aRet = ((Ptr) GLabbrev_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLabbrev_5() {       /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLabbrev_8() {       /* rem-abbrev */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rBcons;
        rLit = GYabbrev; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBcons = GIbcons;
        (--rSp)->Val = rA1;
l_101:
        if ((rSp->Val >= GIbsymb) && (rSp->Val < rBcons))       goto l_102;
        GIa3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[6];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
        rSp->Val = rA1;
        goto l_101;
l_102:
        rA2 = rLit[4]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, GInil);
        rA2 = rLit[4]->Val;
        (--rSp)->Val = ((Ptr) GLabbrev_10);
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLabbrev_10() {      /* call_abbrev_9 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYabbrev[4]->Val = GIa1;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLabbrev_11() {      /* get-abbrev */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLabbrev_12); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLabbrev_12() {      /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp->Val < GIbsymb) || (rSp->Val >= GIbcons))      {aRet = ((Ptr) GLabbrev_13); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLabbrev_15);
        {aRet = (GYabbrev[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLabbrev_15() {      /* call_abbrev_14 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLabbrev_16); goto lRet;}
        {aRet = ((Ptr) GLabbrev_13); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLabbrev_13() {      /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYabbrev; rSp = GIsp; rA1 = GIa1;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[10];
        GIa1 = rA1; rA1 = llrt_call_error ();
        rSp->Val = rA1;
        {aRet = ((Ptr) GLabbrev_12); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLabbrev_16() {      /* 102 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = GYabbrev[4]->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        rA1 = llrt_call_cassq (rA1, GIa2, GIbcons, GInil);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLabbrev_17() {      /* abbrevp */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil, rBcons;
        rLit = GYabbrev; rSp = GIsp; rA1 = GIa1; rNil = GInil; rBcons = GIbcons;
        GIa2 = rLit[4]->Val;
        rA1 = llrt_call_assq (rA1, GIa2, rBcons, rNil);
        if ((long) rA1 < (long) rBcons) goto l_101;
        rA1 = rLit[11];
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLabbrev_18() {      /* has-an-abbrev */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = GYabbrev[4]->Val;
        rA1 = llrt_call_rassq (rA1, GIa2, GIbcons, GInil);
        rA1 = rA1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLabbrev_19() {      /* #:symbol:prin */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYabbrev; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rLit[12]->Val == GInil)     {aRet = ((Ptr) GLabbrev_20); goto lRet;}
        rA1 = (rA1 + 3)->Val;
        (--rSp)->Val = ((Ptr) GLabbrev_22);
        {aRet = (rLit[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLabbrev_22() {      /* call_abbrev_21 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYabbrev; rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLabbrev_20); goto lRet;}
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[14]->Val;
        rLit[14]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = rLit[17];
        (--rSp)->Val = ((Ptr) GLabbrev_24);
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLabbrev_24() {      /* call_abbrev_23 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYabbrev; rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        rLit[14]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        rA1 = rSp->Val;
        rA1 = (rA1 + 3)->Val;
        (--rSp)->Val = ((Ptr) GLabbrev_26);
        {aRet = (rLit[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLabbrev_26() {      /* call_abbrev_25 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLabbrev_28);
        {aRet = (GYabbrev[18] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLabbrev_28() {      /* call_abbrev_27 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYabbrev; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[14]->Val;
        rLit[14]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[19];
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = rLit[20];
        (--rSp)->Val = ((Ptr) GLabbrev_30);
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLabbrev_30() {      /* call_abbrev_29 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYabbrev; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[14]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[21]->Val;
        rLit[21]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[22];
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLabbrev_32);
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLabbrev_32() {      /* call_abbrev_31 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYabbrev[21]->Val = (rSp + 6)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLabbrev_20() {      /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (GYabbrev[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDabbrev_33() {      /* trace defabbrev */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYabbrev,23,24,25);
  lRet:  return (aRet);}}

static Ptr GDabbrev_34() {      /* trace put-abbrev */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYabbrev,0,24,26);
  lRet:  return (aRet);}}

static Ptr GDabbrev_35() {      /* trace rem-abbrev */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYabbrev,6,24,25);
  lRet:  return (aRet);}}

static Ptr GDabbrev_36() {      /* trace get-abbrev */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYabbrev,10,24,25);
  lRet:  return (aRet);}}

static Ptr GDabbrev_37() {      /* trace abbrevp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYabbrev,8,24,25);
  lRet:  return (aRet);}}

static Ptr GDabbrev_38() {      /* trace has-an-abbrev */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYabbrev,13,24,25);
  lRet:  return (aRet);}}

static Ptr GDabbrev_39() {      /* trace #:symbol:prin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYabbrev,27,24,25);
  lRet:  return (aRet);}}

