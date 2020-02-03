/* GELL 15.26: source file for the module: "schedule" */
/*             translation done:           "Wed June 16 93 18:03:02 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "schedule.h" 

static Ptr GLschedule_1() {     /* clock */
   {    register Ptr aRet, *rLit;
        rLit = GYschedule;
        GIa1 = rLit[0];
        (--GIsp)->Val = ((Ptr) GLschedule_3);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_3() {     /* call_schedule_2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLschedule_4); goto lRet;}
        (--rSp)->Val = ((Ptr) GLschedule_4);
        (--rSp)->Val = (Ptr) 46;
        GIa4 = (Ptr) 1;
        {aRet = (GYschedule[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_4() {     /* 102 */
   {    register Ptr aRet;
        {aRet = (GYschedule[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_5() {     /* clockstart */
   {    register Ptr aRet;
        GIa1 = GYschedule[4];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_6() {     /* clockstop */
   {    register Ptr aRet;
        GIa1 = GYschedule[5];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_7() {     /* parallel */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        (--rSp)->Val = rLit[6]->Val;
        rLit[6]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = ((Ptr) GLschedule_7);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLschedule_8);
        (--rSp)->Val = ((Ptr) GLschedule_10);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_10() {    /* call_schedule_9 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLschedule_11);
        (--rSp)->Val = rLit[6]->Val;
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_11() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        (--rSp)->Val = rLit[10]->Val;
        rLit[10]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        {aRet = ((Ptr) GLschedule_12); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_12() {    /* 103 */
   {    register Ptr aRet;
        if (GYschedule[10]->Val == GInil)       {aRet = ((Ptr) GLschedule_13); goto lRet;}
        {aRet = ((Ptr) GLschedule_14); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_15() {    /* #:parallel:g106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLschedule_16);
        (--rSp)->Val = rLit[13];
        (--rSp)->Val = ((Ptr) GLschedule_18);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_18() {    /* call_schedule_17 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYschedule[15] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_16() {    /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYschedule; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLschedule_19);
        (--rSp)->Val = rLit[10]->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLschedule_19() {    /* 108 */
   {    register Ptr aRet;
        GYschedule[10]->Val = GIa1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_14() {    /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        GIa1 = rLit[17];
        (--rSp)->Val = ((Ptr) GLschedule_12);
        (--rSp)->Val = ((Ptr) GLschedule_21);
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_21() {    /* call_schedule_20 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYschedule; rSp = GIsp; rA4 = GIa4;
        rA4 = rLit[10]->Val;
        rLit[10]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rLit[19]->Val;
        rLit[19]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[20];
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = rLit[21]->Val;
        (--rSp)->Val = ((Ptr) GLschedule_23);
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLschedule_23() {    /* call_schedule_22 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLschedule_24);
        (--rSp)->Val = ((Ptr) GLschedule_26);
        {aRet = (GYschedule[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_26() {    /* call_schedule_25 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[19]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[24] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_24() {    /* 109 */
   {    register Ptr aRet, *rLit;
        rLit = GYschedule;
        GIa1 = rLit[25];
        (--GIsp)->Val = ((Ptr) GLschedule_28);
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_28() {    /* call_schedule_27 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYschedule[19]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_13() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        GIdlink = (rSp + 1)->Val;
        GYschedule[10]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_8() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYschedule[6]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_29() {    /* parallelvalues */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        (--rSp)->Val = rLit[6]->Val;
        rLit[6]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[26];
        (--rSp)->Val = ((Ptr) GLschedule_29);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLschedule_30);
        (--rSp)->Val = ((Ptr) GLschedule_32);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_32() {    /* call_schedule_31 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYschedule; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rLit[6]->Val;
        rA1 = rLit[6]->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        GIa2 = GInil;
        (--rSp)->Val = ((Ptr) GLschedule_34);
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLschedule_34() {    /* call_schedule_33 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = (Ptr) ((UFix) 0xffff);
        (--rSp)->Val = rLit[28]->Val;
        rLit[28]->Val = GIa1;
        (--rSp)->Val = rLit[29]->Val;
        rLit[29]->Val = (rSp + 2)->Val;
        (--rSp)->Val = rLit[30]->Val;
        rLit[30]->Val = (rSp + 4)->Val;
        (--rSp)->Val = rLit[10]->Val;
        rLit[10]->Val = (rSp + 6)->Val;
        (--rSp)->Val = (Ptr) 4;
        (--rSp)->Val = rLit[31];
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        {aRet = ((Ptr) GLschedule_35); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_35() {    /* 102 */
   {    register Ptr aRet, *rLit, rNil;
        rLit = GYschedule; rNil = GInil;
        if (rLit[10]->Val != rNil)      {aRet = ((Ptr) GLschedule_36); goto lRet;}
        if (rLit[30]->Val == rNil)      {aRet = ((Ptr) GLschedule_37); goto lRet;}
        {aRet = ((Ptr) GLschedule_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_38() {    /* #:parallelvalues:g107 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYschedule; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLschedule_39);
        (--rSp)->Val = rLit[30]->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLschedule_39() {    /* 107 */
   {    register Ptr aRet;
        GYschedule[30]->Val = GIa1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_36() {    /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        GIa1 = rLit[32];
        (--rSp)->Val = ((Ptr) GLschedule_35);
        (--rSp)->Val = ((Ptr) GLschedule_41);
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_41() {    /* call_schedule_40 */
   {    register Ptr aRet, *rLit;
        rLit = GYschedule;
        GIa1 = rLit[21]->Val;
        (--GIsp)->Val = ((Ptr) GLschedule_43);
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_43() {    /* call_schedule_42 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYschedule; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rLit[10]->Val != GInil)     goto l_108;
        rA1 = rLit[30]->Val;
        rLit[30]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLschedule_44);
        {aRet = (rLit[13] + 2)->Val; goto lRet;}
l_108:
        rA4 = rLit[10]->Val;
        rLit[10]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rLit[19]->Val;
        rLit[19]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[33];
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        rA1 = rLit[29]->Val;
        (--rSp)->Val = ((Ptr) GLschedule_46);
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLschedule_46() {    /* call_schedule_45 */
   {    register Ptr aRet, *rLit;
        rLit = GYschedule;
        rLit[29]->Val = GIa1;
        GIa2 = rLit[28]->Val;
        (--GIsp)->Val = ((Ptr) GLschedule_48);
        {aRet = (rLit[35] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_48() {    /* call_schedule_47 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLschedule_49);
        (--rSp)->Val = ((Ptr) GLschedule_51);
        {aRet = (GYschedule[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_51() {    /* call_schedule_50 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[19]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[24] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_49() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        GIa4->Val = GIa1;
        GIdlink = (rSp + 1)->Val;
        GYschedule[19]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = ((Ptr) GLschedule_44); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_44() {    /* 109 */
   {    register Ptr aRet, *rLit;
        rLit = GYschedule;
        GIa1 = rLit[25];
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_37() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        GIa1 = rLit[28]->Val;
        GIdlink = (rSp + 1)->Val;
        rLit[10]->Val = (rSp + 6)->Val;
        rLit[30]->Val = (rSp + 7)->Val;
        rLit[29]->Val = (rSp + 8)->Val;
        rLit[28]->Val = (rSp + 9)->Val;
        rSp += (Fix) 13;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_30() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYschedule[6]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_52() {    /* tryinparallel */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        (--rSp)->Val = rLit[6]->Val;
        rLit[6]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[36];
        (--rSp)->Val = ((Ptr) GLschedule_52);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLschedule_53);
        (--rSp)->Val = ((Ptr) GLschedule_55);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_55() {    /* call_schedule_54 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[6]->Val;
        (--rSp)->Val = rLit[10]->Val;
        rLit[10]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[30]->Val;
        rLit[30]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[37];
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLschedule_56);
        (--rSp)->Val = rLit[38];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        {aRet = ((Ptr) GLschedule_57); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_57() {    /* 103 */
   {    register Ptr aRet, *rLit, rNil;
        rLit = GYschedule; rNil = GInil;
        if (rLit[10]->Val != rNil)      {aRet = ((Ptr) GLschedule_58); goto lRet;}
        if (rLit[30]->Val == rNil)      {aRet = ((Ptr) GLschedule_59); goto lRet;}
        {aRet = ((Ptr) GLschedule_58); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_60() {    /* #:tryinparallel:g108 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYschedule; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLschedule_61);
        (--rSp)->Val = rLit[30]->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLschedule_61() {    /* 108 */
   {    register Ptr aRet;
        GYschedule[30]->Val = GIa1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_58() {    /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        GIa1 = rLit[39];
        (--rSp)->Val = ((Ptr) GLschedule_57);
        (--rSp)->Val = ((Ptr) GLschedule_63);
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_63() {    /* call_schedule_62 */
   {    register Ptr aRet, *rLit;
        rLit = GYschedule;
        GIa1 = rLit[21]->Val;
        (--GIsp)->Val = ((Ptr) GLschedule_65);
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_65() {    /* call_schedule_64 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYschedule; rSp = GIsp; rA4 = GIa4;
        rA4 = rLit[10]->Val;
        rLit[10]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rLit[19]->Val;
        rLit[19]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[40];
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rLit[19]->Val == GInil)     {aRet = ((Ptr) GLschedule_66); goto lRet;}
        (--rSp)->Val = ((Ptr) GLschedule_67);
        (--rSp)->Val = ((Ptr) GLschedule_69);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLschedule_69() {    /* call_schedule_68 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[19]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[24] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_67() {    /* 111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = rLit[25];
        (--rSp)->Val = ((Ptr) GLschedule_71);
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_71() {    /* call_schedule_70 */
   {    register Ptr aRet, *rLit;
        rLit = GYschedule;
        GIa1 = (GIsp++)->Val;
        GIa2 = rLit[38];
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLschedule_66() {    /* 110 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYschedule; rA1 = GIa1;
        rA1 = rLit[30]->Val;
        rLit[30]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLschedule_73);
        {aRet = (rLit[13] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLschedule_73() {    /* call_schedule_72 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYschedule[19]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_59() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLschedule_56); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_56() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[30]->Val = (rSp + 6)->Val;
        rLit[10]->Val = (rSp + 7)->Val;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_53() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYschedule[6]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_74() {    /* progn-no-suspend */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYschedule; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[42];
        (--rSp)->Val = rLit[13];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLschedule_75() {    /* letparallel */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYschedule; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[44];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rNil;
l_102:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_103;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA2 = rSp->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_102;
l_103:
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
l_104:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_105;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        rA2 = rSp->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_104;
l_105:
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        rA2 = rA1;
        rA1 = rLit[45];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GDschedule_76() {    /* trace clock */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYschedule,46,47,48);
  lRet:  return (aRet);}}

static Ptr GDschedule_77() {    /* trace clockstart */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYschedule,49,47,50);
  lRet:  return (aRet);}}

static Ptr GDschedule_78() {    /* trace clockstop */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYschedule,51,47,50);
  lRet:  return (aRet);}}

static Ptr GDschedule_79() {    /* trace parallel */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYschedule,52,47,53);
  lRet:  return (aRet);}}

static Ptr GDschedule_80() {    /* trace #:parallel:g106 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYschedule,17,47,50);
  lRet:  return (aRet);}}

static Ptr GDschedule_81() {    /* trace parallelvalues */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYschedule,45,47,53);
  lRet:  return (aRet);}}

static Ptr GDschedule_82() {    /* trace #:parallelvalues:g107 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYschedule,32,47,50);
  lRet:  return (aRet);}}

static Ptr GDschedule_83() {    /* trace tryinparallel */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYschedule,54,47,53);
  lRet:  return (aRet);}}

static Ptr GDschedule_84() {    /* trace #:tryinparallel:g108 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYschedule,39,47,50);
  lRet:  return (aRet);}}

static Ptr GDschedule_85() {    /* trace progn-no-suspend */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYschedule,55,47,50);
  lRet:  return (aRet);}}

static Ptr GDschedule_86() {    /* trace letparallel */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYschedule,56,47,50);
  lRet:  return (aRet);}}

