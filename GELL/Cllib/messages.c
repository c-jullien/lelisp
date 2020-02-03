/* GELL 15.26: source file for the module: "messages" */
/*             translation done:           "Wed June 16 93 18:00:27 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "messages.h" 

static Ptr GLmessages_1() {     /* record-language */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbsymb) || (rA1 >= rBcons)) goto l_101;
        rA2 = rLit[0]->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        goto l_103;
        rA2 = rLit[0]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[0]->Val = rA1;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa3 = rA1;
        rA2 = rLit[1];
        rA1 = rLit[2];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmessages_2() {     /* remove-language */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbsymb) || (rA1 >= rBcons)) {aRet = ((Ptr) GLmessages_3); goto lRet;}
        rA2 = rLit[0]->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        goto l_103;
        GIa3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[4];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rLit[5]->Val = rSp->Val;
        {aRet = ((Ptr) GLmessages_4); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmessages_5() {     /* #:remove-language:g105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmessages; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[5]->Val;
        (--rSp)->Val = ((Ptr) GLmessages_7);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_7() {     /* call_messages_6 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_106;
        GIa2 = rLit[5]->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
l_106:
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmessages_4() {     /* 105 */
   {    register Ptr aRet, *rLit;
        rLit = GYmessages;
        GIa1 = rLit[8];
        (--GIsp)->Val = ((Ptr) GLmessages_9);
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmessages_9() {     /* call_messages_8 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rA2 = rLit[10]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 != rNil)        {aRet = ((Ptr) GLmessages_10); goto lRet;}
        rA2 = rLit[0]->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmessages_12);
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmessages_12() {    /* call_messages_11 */
   {    register Ptr aRet;
        GYmessages[0]->Val = GIa1;
        {aRet = ((Ptr) GLmessages_10); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmessages_10() {    /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_3() {     /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[1];
        rA1 = rLit[4];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmessages_13() {    /* message-languages */
   {    register Ptr aRet, *rLit;
        rLit = GYmessages;
        GIa1 = rLit[0]->Val;
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmessages_14() {    /* get-all-messages */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbsymb) || (rA1 >= rBcons)) {aRet = ((Ptr) GLmessages_15); goto lRet;}
        rA2 = rLit[0]->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        goto l_103;
        GIa3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[13];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rLit[5]->Val = rSp->Val;
        {aRet = ((Ptr) GLmessages_16); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmessages_17() {    /* #:get-all-messages:g106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmessages; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[5]->Val;
        (--rSp)->Val = ((Ptr) GLmessages_19);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_19() {    /* call_messages_18 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       goto l_106;
        (--rSp)->Val = ((Ptr) GXpopj1);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmessages[14] + 2)->Val; goto lRet;}
l_106:
        GIa1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_16() {    /* 105 */
   {    register Ptr aRet, *rLit;
        rLit = GYmessages;
        GIa1 = rLit[15];
        GIsp += (Fix) 1;
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmessages_15() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[1];
        rA1 = rLit[13];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmessages_20() {    /* current-language */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA4;
        rA1 = rSp->Val;
        if (rA1 != (Ptr) 0)     goto l_102;
        rA1 = rLit[17]->Val;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLmessages_21); goto lRet;}
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        if ((rA4 < GIbsymb) || (rA4 >= rBcons)) {aRet = ((Ptr) GLmessages_22); goto lRet;}
        rA2 = rLit[0]->Val;
        rA1 = rA4;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLmessages_23); goto lRet;}
        rLit[17]->Val = rSp->Val;
        rA2 = rLit[18];
        rA1 = rSp->Val;
        rA1 = (rA1 == rA2) ? rLit[19] : rNil;
        if (rA1 == rNil)        goto l_108;
        rA4 = rNil;
        goto l_109;
l_108:
        rA4 = rLit[19];
l_109:
        rLit[20]->Val = rA4;
        (--rSp)->Val = rLit[21]->Val;
        {aRet = ((Ptr) GLmessages_24); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmessages_24() {    /* 110 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmessages; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmessages_25); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa2 = rLit[17]->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmessages_27);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmessages_27() {    /* call_messages_26 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = GIa1;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLmessages_28); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmessages_30);
        {aRet = (GYmessages[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_30() {    /* call_messages_29 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmessages_28); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmessages_28() {    /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = rSp->Val;
        GIa3->Val = GIa4;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmessages_24); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_25() {    /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = rSp->Val;
        {aRet = ((Ptr) GLmessages_31); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_23() {    /* 106 */
   {    register Ptr aRet, *rLit;
        rLit = GYmessages;
        GIa3 = GIsp->Val;
        GIa2 = rLit[3];
        GIa1 = rLit[23];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLmessages_31); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmessages_22() {    /* 104 */
   {    register Ptr aRet, *rLit;
        rLit = GYmessages;
        GIa3 = GIa4;
        GIa2 = rLit[1];
        GIa1 = rLit[23];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLmessages_31); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmessages_31() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        {GIa4 = (rSp++)->Val; rSp += (Fix) GIa4; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_21() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmessages; rSp = GIsp;
        GIa3 = (Ptr) 0;
        GIa2 = rLit[24];
        GIa1 = rLit[23];
        GIsp = rSp; GIa1 = llrt_call_error ();
l_101:
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_32() {    /* default-language */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA4;
        rA1 = rSp->Val;
        if (rA1 != (Ptr) 0)     goto l_102;
        rA1 = rLit[25]->Val;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rA1 != (Ptr) 1)     goto l_103;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = rA4;
        if ((rA4 < GIbsymb) || (rA4 >= rBcons)) goto l_104;
        rA2 = rLit[0]->Val;
        rA1 = rA4;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_106;
        rLit[25]->Val = rSp->Val;
        rA1 = rSp->Val;
        goto l_105;
l_106:
        rA3 = rSp->Val;
        rA2 = rLit[3];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        goto l_105;
l_104:
        rA3 = rA4;
        rA2 = rLit[1];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_105:
        rSp += (Fix) 1;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA3 = (Ptr) 0;
        rA2 = rLit[24];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_101:
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmessages_33() {    /* get-message */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbsymb) || (rA1 >= GIbcons))        {aRet = ((Ptr) GLmessages_34); goto lRet;}
        GIa2 = rLit[17]->Val;
        (--rSp)->Val = ((Ptr) GLmessages_36);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_36() {    /* call_messages_35 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmessages; rSp = GIsp;
        if (GIa1 != GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa2 = rLit[25]->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmessages_38);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_38() {    /* call_messages_37 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (GYmessages[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_34() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[27];
        rA1 = rLit[28];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmessages_39() {    /* get-message-p */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmessages_41);
        {aRet = (GYmessages[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_41() {    /* call_messages_40 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmessages; rSp = GIsp;
        if (GIa1 == GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa2 = rLit[17]->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmessages_43);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_43() {    /* call_messages_42 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmessages; rSp = GIsp;
        if (GIa1 != GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa2 = rLit[25]->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_44() {    /* put-message */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmessages; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rLit[30];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_45() {    /* #:messages:put-message */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBsymb, rBcons;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBsymb = GIbsymb; rBcons = GIbcons;
        if (GIa4 == (Ptr) 4)    goto l_101;
        rA1 = rLit[31];
        rA2 = (Ptr) 4;
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
l_101:
        if (((rSp + 3)->Val < GIbvar) || ((rSp + 3)->Val >= rBcons))    {aRet = ((Ptr) GLmessages_46); goto lRet;}
        if (((rSp + 2)->Val < rBsymb) || ((rSp + 2)->Val >= rBcons))    {aRet = ((Ptr) GLmessages_47); goto lRet;}
        rA2 = rLit[0]->Val;
        rA1 = (rSp + 2)->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLmessages_48); goto lRet;}
        if (((rSp + 1)->Val < GIbstrg) || ((rSp + 1)->Val >= rBsymb))   {aRet = ((Ptr) GLmessages_49); goto lRet;}
        GIa3 = (rSp + 2)->Val;
        rA2 = (rSp + 1)->Val;
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmessages_51);
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmessages_51() {    /* call_messages_50 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_49() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 1)->Val;
        GIa2 = GYmessages[34];
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_48() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 2)->Val;
        GIa2 = GYmessages[3];
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_47() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 2)->Val;
        GIa2 = GYmessages[1];
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_46() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 3)->Val;
        GIa2 = GYmessages[27];
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_52() {    /* remove-message */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbvar) || (rA1 >= rBcons))  {aRet = ((Ptr) GLmessages_53); goto lRet;}
        if ((rA2 < GIbsymb) || (rA2 >= rBcons)) {aRet = ((Ptr) GLmessages_54); goto lRet;}
        (--rSp)->Val = rA2;
        rA2 = rLit[0]->Val;
        rA1 = (rSp++)->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLmessages_55); goto lRet;}
        rA2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmessages_57);
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmessages_57() {    /* call_messages_56 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_55() {    /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmessages; rSp = GIsp;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[1];
        GIa1 = rLit[35];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_54() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmessages; rSp = GIsp;
        GIa3 = GIa2;
        GIa2 = rLit[3];
        GIa1 = rLit[35];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_53() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[27];
        rA1 = rLit[35];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmessages_58() {    /* defmessage */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmessages_59);
        (--rSp)->Val = GIa4;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLmessages_60); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmessages_60() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rBcons;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rBcons = GIbcons;
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLmessages_61); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLmessages_62); goto lRet;}
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLmessages_62); goto lRet;}
        rA1 = rSp->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        if (rA1 != (Ptr) 2)     {aRet = ((Ptr) GLmessages_62); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmessages_63);
        (--rSp)->Val = rLit[31];
        (--rSp)->Val = ((Ptr) GLmessages_64);
        (--rSp)->Val = rLit[36];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmessages_64() {    /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmessages; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmessages_65);
        (--rSp)->Val = rLit[36];
        rA4 = (rSp + 5)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmessages_65() {    /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmessages; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmessages_66);
        (--rSp)->Val = rLit[36];
        rA4 = (rSp + 6)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmessages_66() {    /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmessages; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[37];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_62() {    /* 104 */
   {    register Ptr aRet, *rLit;
        rLit = GYmessages;
        GIa3 = GIsp->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[40];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLmessages_63); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmessages_63() {    /* 105 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLmessages_60); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmessages_61() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmessages_67);
        (--rSp)->Val = ((Ptr) GLmessages_68);
        (--rSp)->Val = rLit[36];
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmessages_68() {    /* 111 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmessages[14] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmessages_67() {    /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmessages[41] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmessages_59() {    /* 101 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = GYmessages[42];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmessages_69() {    /* #:sharp:m */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmessages_71);
        {aRet = (GYmessages[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmessages_71() {    /* call_messages_70 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmessages; rSp = GIsp; rA1 = GIa1;
        if ((rA1 < GIbvar) || (rA1 >= GIbcons)) {aRet = ((Ptr) GLmessages_72); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmessages_73);
        (--rSp)->Val = rLit[28];
        (--rSp)->Val = ((Ptr) GLmessages_74);
        (--rSp)->Val = rLit[36];
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmessages_74() {    /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmessages[14] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmessages_73() {    /* 103 */
   {    register Ptr aRet;
         GIa1 = llrt_cons (GIa1, GInil);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmessages_72() {    /* 101 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYmessages; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[27];
        rA1 = rLit[44];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GDmessages_75() {    /* trace record-language */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,2,45,46);
  lRet:  return (aRet);}}

static Ptr GDmessages_76() {    /* trace remove-language */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,4,45,46);
  lRet:  return (aRet);}}

static Ptr GDmessages_77() {    /* trace #:remove-language:g105 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,8,45,46);
  lRet:  return (aRet);}}

static Ptr GDmessages_78() {    /* trace message-languages */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,47,45,48);
  lRet:  return (aRet);}}

static Ptr GDmessages_79() {    /* trace get-all-messages */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,13,45,46);
  lRet:  return (aRet);}}

static Ptr GDmessages_80() {    /* trace #:get-all-messages:g106 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,15,45,46);
  lRet:  return (aRet);}}

static Ptr GDmessages_81() {    /* trace current-language */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,23,45,49);
  lRet:  return (aRet);}}

static Ptr GDmessages_82() {    /* trace default-language */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,26,45,49);
  lRet:  return (aRet);}}

static Ptr GDmessages_83() {    /* trace get-message */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,28,45,46);
  lRet:  return (aRet);}}

static Ptr GDmessages_84() {    /* trace get-message-p */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,50,45,46);
  lRet:  return (aRet);}}

static Ptr GDmessages_85() {    /* trace put-message */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,30,45,51);
  lRet:  return (aRet);}}

static Ptr GDmessages_86() {    /* trace #:messages:put-message */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,31,45,49);
  lRet:  return (aRet);}}

static Ptr GDmessages_87() {    /* trace remove-message */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,35,45,52);
  lRet:  return (aRet);}}

static Ptr GDmessages_88() {    /* trace defmessage */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,40,45,46);
  lRet:  return (aRet);}}

static Ptr GDmessages_89() {    /* trace #:sharp:m */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmessages,53,45,48);
  lRet:  return (aRet);}}

