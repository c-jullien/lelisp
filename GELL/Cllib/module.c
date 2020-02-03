/* GELL 15.26: source file for the module: "module" */
/*             translation done:           "Wed June 16 93 18:00:35 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "module.h" 

static Ptr GLmodule_1() {       /* readdefmodule */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodule_3);
        {aRet = (GYmodule[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_3() {       /* call_module_2 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_101;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[1];
        rA1 = rLit[2];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLmodule_4);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_4() {       /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodule_5);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodule_6);
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_8);
        {aRet = (GYmodule[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_8() {       /* call_module_7 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_6() {       /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rLit[5]->Val;
        GIa2 = rLit[6]->Val;
        rA1 = rLit[7];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[8];
        (--rSp)->Val = rLit[6]->Val;
        rLit[6]->Val = rA1;
        (--rSp)->Val = rLit[5]->Val;
        rLit[5]->Val = (rSp + 5)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        rLit[8]->Val = rNil;
        rLit[11]->Val = rLit[12];
        (--rSp)->Val = ((Ptr) GLmodule_9);
        (--rSp)->Val = rLit[13];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        {aRet = ((Ptr) GLmodule_10); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_10() {      /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[14]->Val;
        rLit[14]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodule_12);
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_12() {      /* call_module_11 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[14]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = rLit[14]->Val;
        rLit[14]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodule_14);
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_14() {      /* call_module_13 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        GIdlink = (rSp + 1)->Val;
        rLit[14]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rA2 = (rSp + 14)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 14)->Val = rA1;
        rA4 = rA1->Val;
        if (rA4->Val != rLit[18])       goto l_111;
        GIa3 = rA1->Val;
        rLit[5]->Val = (GIa3 + 1)->Val;
l_111:
        rA1 = rA1->Val;
        rA2 = rLit[19]->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLmodule_15); goto lRet;}
        if (rLit[11]->Val == rNil)      {aRet = ((Ptr) GLmodule_16); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodule_17);
        (--rSp)->Val = rLit[8]->Val;
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_17() {      /* 116 */
   {    register Ptr aRet;
        (GIsp + 13)->Val = GIa1;
        GYmodule[8]->Val = GInil;
        {aRet = ((Ptr) GLmodule_10); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_16() {      /* 114 */
   {    register Ptr aRet;
        (GIsp + 12)->Val = GYmodule[21];
        {aRet = ((Ptr) GLmodule_10); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_15() {      /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYmodule[11]->Val = GInil;
        {aRet = ((Ptr) GLmodule_10); goto lRet;}
l_109:
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLmodule_9); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_9() {       /* 107 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp + 9)->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        GIa3 = (rSp + 10)->Val;
        GIa2 = rA1;
        rA1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_19);
        {aRet = (GYmodule[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_19() {      /* call_module_18 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        (rSp + 10)->Val = rA1;
        GIdlink = (rSp + 1)->Val;
        rLit[5]->Val = (rSp + 6)->Val;
        rLit[6]->Val = (rSp + 7)->Val;
        rSp += (Fix) 12;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = rA1;
        GIa3 = ((Ptr) GXpopj3);
        {aRet = ((Ptr) GLmodule_5); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_5() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodule_20);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_20() {      /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_21() {      /* #:module:bol */
   {    register Ptr aRet, *rLit;
        rLit = GYmodule;
        GIa3 = GInil;
        GIa2 = rLit[23];
        GIa1 = rLit[7];
        (--GIsp)->Val = ((Ptr) GLmodule_23);
        {aRet = (rLit[24] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_23() {      /* call_module_22 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        if (rLit[11]->Val == GInil)     {aRet = ((Ptr) GLmodule_24); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodule_25);
        (--rSp)->Val = ((Ptr) GLmodule_26);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_26() {      /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLmodule_27);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodule[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_27() {      /* 105 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 2));
        (--GIsp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (GYmodule[27] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_25() {      /* 103 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYmodule; rA1 = GIa1;
        GIa2 = rLit[8]->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[8]->Val = rA1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_24() {      /* 101 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_28() {      /* getdefmodule */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        rA1 = llrt_call_cassq (rA1, rA2, GIbcons, GInil);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodule_29() {      /* setdefmodule */
   {    register Ptr aRet, rSp, rA1, rA2, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBcons = GIbcons;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, GInil);
        if ((long) rA1 < (long) rBcons) goto l_101;
        (rA1 + 1)->Val = (rSp + 2)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA2 = (rSp + 2)->Val;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = rA1;
        rA1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (GYmodule[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodule_30() {      /* printdefmodule */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        GIa1 = rA2;
        (--rSp)->Val = ((Ptr) GLmodule_32);
        {aRet = (GYmodule[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_32() {      /* call_module_31 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[8];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_34);
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_34() {      /* call_module_33 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (rSp + 2)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_36);
        {aRet = (GYmodule[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_36() {      /* call_module_35 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLmodule_37); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLmodule_38);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodule[31] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_38() {      /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_40);
        {aRet = (GYmodule[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_40() {      /* call_module_39 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_104;
        GIa3 = (rSp + 5)->Val;
        GIa2 = rLit[1];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLmodule_41); goto lRet;}
l_104:
        (--rSp)->Val = rNil;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[33]->Val;
        rLit[33]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[34]->Val;
        rLit[34]->Val = (rSp + 3)->Val;
        (--rSp)->Val = rLit[35]->Val;
        rLit[35]->Val = (rSp + 5)->Val;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[36];
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodule_42);
        (--rSp)->Val = rLit[37];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodule_44);
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_44() {      /* call_module_43 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 16)->Val = rA1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLmodule_42); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_42() {      /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        rLit[35]->Val = (rSp + 6)->Val;
        rLit[34]->Val = (rSp + 7)->Val;
        rLit[33]->Val = (rSp + 8)->Val;
        rSp += (Fix) 12;
        if (rA1 != GInil)       goto l_106;
        GIa3 = rSp->Val;
        GIa2 = rLit[39];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLmodule_41); goto lRet;}
l_106:
        (--rSp)->Val = ((Ptr) GLmodule_45);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_45() {      /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        if ((rSp + 2)->Val == GInil)    {aRet = ((Ptr) GLmodule_46); goto lRet;}
        (--rSp)->Val = rLit[19]->Val;
        (--rSp)->Val = rLit[12];
        {aRet = ((Ptr) GLmodule_47); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_47() {      /* 112 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodule_48); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa2 = rSp->Val;
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_50);
        {aRet = (GYmodule[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_50() {      /* call_module_49 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (rSp + 1)->Val;
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_52);
        {aRet = (GYmodule[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_52() {      /* call_module_51 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_54);
        {aRet = (GYmodule[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_54() {      /* call_module_53 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        rSp->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLmodule_48); goto lRet;}
        {aRet = ((Ptr) GLmodule_47); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_48() {      /* 113 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        rSp += (Fix) 2;
        if (rA4 == GInil)       {aRet = ((Ptr) GLmodule_46); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodule_55);
        rA4 = (Ptr) 0;
        {aRet = (GYmodule[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_55() {      /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodule_56);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodule[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_56() {      /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodule_57);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodule[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_57() {      /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodule_58);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodule_59);
        (--rSp)->Val = ((Ptr) GLmodule_60);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodule[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_60() {      /* 120 */
   {    register Ptr aRet;
        GIa1 = (GIa1->Val + 1)->Val;
        (--GIsp)->Val = ((Ptr) GLmodule_62);
        {aRet = (GYmodule[44] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_62() {      /* call_module_61 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[40] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_59() {      /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodule_63);
        (--rSp)->Val = (Ptr) 200;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_63() {      /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodule_64);
        (--rSp)->Val = (Ptr) 10000;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_64() {      /* 122 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[45]->Val;
        rLit[45]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[46];
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        {register Ptr aux;
                aux = (rSp + 16)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodule_65); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_65() {      /* 123 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodule; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_124;
        (--rSp)->Val = ((Ptr) GLmodule_65);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
l_124:
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLmodule_66);
        rA4 = (Ptr) 0;
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_66() {      /* 126 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodule_67);
        (--rSp)->Val = rLit[48]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_67() {      /* 127 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYmodule[19]->Val;
        GIa1 = (rSp + 18)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_69);
        {aRet = ((Ptr) GLmodule_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_69() {      /* call_module_68 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYmodule[45]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodule_71);
        {aRet = ((Ptr) GLmodule_58); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_58() {      /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodule_72);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_72() {      /* 128 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodule_73);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_73() {      /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodule_74);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_74() {      /* 130 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_71() {      /* 118 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLmodule_41); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_46() {      /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        GIa2 = rLit[21];
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_76);
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_76() {      /* call_module_75 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYmodule; rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLmodule_77); goto lRet;}
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[45]->Val;
        rLit[45]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[49];
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa2 = rLit[21];
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_79);
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_79() {      /* call_module_78 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLmodule_80); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_80() {      /* 133 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodule; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodule_81); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLmodule_82);
        (--rSp)->Val = rLit[50];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_82() {      /* 135 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodule_80); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_81() {      /* 134 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIdlink = (rSp + 1)->Val;
        GYmodule[45]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = ((Ptr) GLmodule_77); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_77() {      /* 132 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GInil;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_41);
        {aRet = ((Ptr) GLmodule_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_41() {      /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodule_83);
        (--rSp)->Val = ((Ptr) GLmodule_84);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodule[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_84() {      /* 137 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[51] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_83() {      /* 136 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodule_85);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_85() {      /* 138 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLmodule_37); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_37() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_70() {      /* #:module:print-rest-of-keys */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = rLit[45]->Val;
        rLit[45]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[52];
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLmodule_86); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_86() {      /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rNil, rBcons;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLmodule_87); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        rA3 = (rSp + 1)->Val;
        if (rA3 == rLit[8])     {aRet = ((Ptr) GLmodule_88); goto lRet;}
        if (rA3 == rLit[21])    {aRet = ((Ptr) GLmodule_88); goto lRet;}
        GIa2 = (rSp + 12)->Val;
        rA1 = rA3;
        rA1 = llrt_call_memq (rA1, GIa2, rBcons, rNil);
        if (rA1 != rNil)        {aRet = ((Ptr) GLmodule_88); goto lRet;}
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLmodule_89); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodule_90);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_90() {      /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodule_91);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_91() {      /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodule_92);
        (--rSp)->Val = (Ptr) 40;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_92() {      /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodule_93);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodule[55] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_93() {      /* 110 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodule; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        if (rA4 == rLit[56])    goto l_113;
        if (rA4 != rLit[57])    {aRet = ((Ptr) GLmodule_94); goto lRet;}
l_113:
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodule_95); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_95() {      /* 114 */
   {    register Ptr aRet, *rLit, rSp, rA4, rBcons;
        rLit = GYmodule; rSp = GIsp; rA4 = GIa4; rBcons = GIbcons;
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLmodule_96); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        if ((long) rSp->Val >= (long) rBcons)   goto l_116;
        (--rSp)->Val = ((Ptr) GLmodule_97);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
l_116:
        (--rSp)->Val = ((Ptr) GLmodule_98);
        (--rSp)->Val = (Ptr) 40;
        rA4 = (Ptr) 1;
        {aRet = (rLit[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_98() {      /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodule_99); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_99() {      /* 120 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodule; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_121;
        (--rSp)->Val = ((Ptr) GLmodule_99);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
l_121:
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLmodule_97);
        (--rSp)->Val = (Ptr) 41;
        rA4 = (Ptr) 1;
        {aRet = (rLit[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_97() {      /* 117 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodule_95); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_96() {      /* 115 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodule_100); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_94() {      /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLmodule_101); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_101() {     /* 124 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_125;
        (--rSp)->Val = ((Ptr) GLmodule_101);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (GYmodule[47] + 2)->Val; goto lRet;}
l_125:
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodule_100); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_100() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodule_102);
        (--rSp)->Val = (Ptr) 41;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_102() {     /* 127 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodule_88);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodule[55] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_89() {      /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodule_103);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_103() {     /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodule_88);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_88() {      /* 104 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLmodule_86); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_87() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        GIdlink = (rSp + 1)->Val;
        GYmodule[45]->Val = (rSp + 6)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_104() {     /* loadmodule */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[58];
        rA2 = (Ptr) 1;
        {aRet = (rLit[59] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = rNil;
        goto l_nlist_module_106;
l_nlist_module_105:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_module_106:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_module_105;}
        (--rSp)->Val = rA1;
        rA2 = rNil;
        rA1 = rNil;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLmodule_107);
        (--rSp)->Val = ((Ptr) GLmodule_108);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (rLit[60] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_108() {     /* 103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 4)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodule_109); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_107() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = rSp->Val;
        (--rSp)->Val = GIa4->Val;
        {aRet = ((Ptr) GLmodule_110); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_110() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodule; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodule_111); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa2 = rLit[61]->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodule_113);
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_113() {     /* call_module_112 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        rLit[61]->Val = GIa1;
        GIa2 = rLit[63]->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodule_115);
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_115() {     /* call_module_114 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1;
        rLit[63]->Val = rA1;
        GIa2 = rLit[61]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[61]->Val = rA1;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodule_110); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_111() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa4 = rSp->Val;
        (--rSp)->Val = (GIa4 + 1)->Val;
        {aRet = ((Ptr) GLmodule_116); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_116() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodule; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodule_117); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa2 = rLit[61]->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodule_119);
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_119() {     /* call_module_118 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        rLit[61]->Val = GIa1;
        GIa2 = rLit[63]->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodule_121);
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_121() {     /* call_module_120 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1;
        rLit[63]->Val = rA1;
        GIa2 = rA1;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[63]->Val = rA1;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLmodule_116); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_117() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_109() {     /* #:module:loadmodule-aux */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_123);
        {aRet = (GYmodule[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_123() {     /* call_module_122 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = GIa1;
        if ((rSp + 1)->Val == rNil)     goto l_102;
        rA4 = rNil;
        goto l_103;
l_102:
        rA4 = GYmodule[12];
l_103:
        if (rA4 == rNil)        {aRet = ((Ptr) GLmodule_124); goto lRet;}
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_126);
        {aRet = ((Ptr) GLmodule_127); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_126() {     /* call_module_125 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLmodule_124); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_124() {     /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if (rA4 == GInil)       goto l_104;
        rA2 = (rSp + 4)->Val;
        rA2 = rA2->Val;
        rA1 = (rSp + 5)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rA4 = (rSp + 4)->Val;
        rA4->Val = rA1;
        goto l_105;
l_104:
        rA2 = (rSp + 4)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = (rSp + 5)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rA4 = (rSp + 4)->Val;
        (rA4 + 1)->Val = rA1;
l_105:
        (--rSp)->Val = (rA4 + 1)->Val;
        rA2 = rLit[64];
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_129);
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_129() {     /* call_module_128 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLmodule_130); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_130() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLmodule_131); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA2 = (rSp + 7)->Val;
        rA2 = rA2->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        {aRet = ((Ptr) GLmodule_132); goto lRet;}
        rA2 = (rSp + 7)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        {aRet = ((Ptr) GLmodule_132); goto lRet;}
        if ((rSp + 6)->Val != rNil)     goto l_110;
        rA2 = rLit[61]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        {aRet = ((Ptr) GLmodule_132); goto lRet;}
l_110:
        if ((rSp + 6)->Val != rNil)     goto l_111;
        rA2 = rLit[63]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_111;
        (rSp + 2)->Val = rLit[12];
        {aRet = ((Ptr) GLmodule_132); goto lRet;}
l_111:
        (--rSp)->Val = ((Ptr) GLmodule_132);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLmodule_109); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_132() {     /* 109 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodule_130); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_131() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        rSp += (Fix) 1;
        if ((rSp + 1)->Val == GInil)    {aRet = ((Ptr) GLmodule_133); goto lRet;}
        GIa4 = (rSp + 5)->Val;
        if ((GIa4 + 1)->Val != rSp->Val)        {aRet = ((Ptr) GLmodule_134); goto lRet;}
        GIa1 = rLit[65];
        (--rSp)->Val = ((Ptr) GLmodule_136);
        {aRet = (rLit[66] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_136() {     /* call_module_135 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLmodule_133); goto lRet;}
        {aRet = ((Ptr) GLmodule_134); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_134() {     /* 116 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (rSp + 1)->Val = GInil;
        rA2 = (rSp + 5)->Val;
        rA2 = rA2->Val;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_138);
        {aRet = (GYmodule[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLmodule_138() {     /* call_module_137 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rSp + 5)->Val;
        rA4->Val = rA1;
        (--rSp)->Val = rA4;
        GIa2 = (rA4 + 1)->Val;
        rA1 = (rSp + 7)->Val;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GIa2);
        rA4 = (rSp++)->Val;
        (rA4 + 1)->Val = rA1;
        {aRet = ((Ptr) GLmodule_133); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_133() {     /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLmodule_139); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodule_140);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodule[67] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_140() {     /* 119 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodule; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodule_141);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = rLit[14]->Val;
        rLit[14]->Val = rLit[58];
        (--rSp)->Val = ((Ptr) GLmodule_142);
        rA4 = (rSp + 6)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rLit[12];
        rA4 = (Ptr) 3;
        {aRet = (rLit[68] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_142() {     /* 122 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1;
        if (rLit[14]->Val != rLit[58])  goto l_123;
        rLit[14]->Val = rSp->Val;
        rA1 = rSp->Val;
        goto l_124;
l_123:
        rA1 = GInil;
l_124:
        rSp += (Fix) 1;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = rA1;
        GIa3 = ((Ptr) GXpopj7);
        {aRet = ((Ptr) GLmodule_141); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_141() {     /* 120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodule_143);
        GIa4 = (Ptr) 0;
        {aRet = (GYmodule[67] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_143() {     /* 125 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp + 3)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rLit[69];
        rA2 = rA1;
        rA1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_145);
        {aRet = (rLit[70] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodule_145() {     /* call_module_144 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_139() {     /* 117 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        if (rLit[35]->Val == GInil)     {aRet = ((Ptr) GLmodule_146); goto lRet;}
        GIa3 = (rSp + 5)->Val;
        GIa2 = rLit[71];
        GIa1 = rLit[58];
        (--rSp)->Val = ((Ptr) GLmodule_146);
        {aRet = (rLit[72] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_146() {     /* 127 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        GIa2 = rLit[73];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_148);
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_148() {     /* call_module_147 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLmodule_149); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_149() {     /* 128 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodule; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodule_150); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa2 = rLit[12];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodule_152);
        {aRet = (rLit[74] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_152() {     /* call_module_151 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodule_149); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_150() {     /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_127() {     /* #:module:find-object-file */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GYmodule[75]->Val;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLmodule_153); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_153() {     /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLmodule_154); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        rSp->Val = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLmodule_155);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (GYmodule[68] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_155() {     /* 103 */
   {    register Ptr aRet, rSp, rA1, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_104;
        GIa2 = rA1;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GIa2);
        rA4 = rA1;
        goto l_105;
l_104:
        rA4 = rNil;
l_105:
        rSp += (Fix) 2;
        rSp->Val = rA4;
        if (rA4 != rNil)        {aRet = ((Ptr) GLmodule_154); goto lRet;}
        {aRet = ((Ptr) GLmodule_153); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_154() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_156() {     /* filegetdef */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodule_158);
        {aRet = (GYmodule[76] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_158() {     /* call_module_157 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_101;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[77];
        rA1 = rLit[78];
        rSp += (Fix) 3;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = ((Ptr) GLmodule_159);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_159() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodule_160);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLmodule_161);
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_163);
        {aRet = (GYmodule[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_163() {     /* call_module_162 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_161() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodule_164);
        (--rSp)->Val = GYmodule[13];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        {aRet = ((Ptr) GLmodule_165); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_165() {     /* 108 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLmodule_167);
        {aRet = (GYmodule[16] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_167() {     /* call_module_166 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (rSp + 9)->Val = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLmodule_165); goto lRet;}
        rA1 = rA1->Val;
        if (rA1 == rLit[79])    goto l_114;
        if (rA1 == rLit[80])    goto l_114;
        if (rA1 == rLit[81])    goto l_114;
        if (rA1 == rLit[82])    goto l_114;
        if (rA1 == rLit[83])    goto l_114;
        if (rA1 != rLit[84])    {aRet = ((Ptr) GLmodule_165); goto lRet;}
l_114:
        rA4 = (rSp + 9)->Val;
        rA4 = (rA4 + 1)->Val;
        if (rA4->Val != (rSp + 12)->Val)        {aRet = ((Ptr) GLmodule_165); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodule_168);
        (--rSp)->Val = ((Ptr) GLmodule_169);
        rA4 = (Ptr) 0;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_169() {     /* 118 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[51] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_168() {     /* 117 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (rSp + 8)->Val = (rSp + 9)->Val;
        GIa1 = (rSp + 9)->Val;
        GIa2 = rLit[13];
        {aRet = (rLit[85] + 2)->Val; goto lRet;}
l_109:
        GIa1 = GInil;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLmodule_164); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_164() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLmodule_170);
        {aRet = ((Ptr) GLmodule_160); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_160() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLmodule_171);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_171() {     /* 120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_170() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = rSp->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_172() {     /* autoloadmodule */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLmodule_173); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_173() {     /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodule_174); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodule_176);
        {aRet = (GYmodule[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_176() {     /* call_module_175 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[86];
        (--rSp)->Val = ((Ptr) GLmodule_178);
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_178() {     /* call_module_177 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLmodule_179); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_179() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA4, rBcons;
        rLit = GYmodule; rSp = GIsp; rA4 = GIa4; rBcons = GIbcons;
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLmodule_180); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        if ((rSp->Val < GIbsymb) || (rSp->Val >= rBcons))       {aRet = ((Ptr) GLmodule_181); goto lRet;}
        GIa2 = rLit[73];
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_183);
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_183() {     /* call_module_182 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = (rSp + 3)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodule_181);
        {aRet = ((Ptr) GLmodule_184); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_181() {     /* 106 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodule_179); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_180() {     /* 104 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLmodule_173); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_174() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_184() {     /* #:module:makeautoload */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLmodule_185); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_185() {     /* 101 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if ((rSp + 1)->Val != rNil)     {aRet = ((Ptr) GLmodule_186); goto lRet;}
        if ((rSp + 4)->Val == rNil)     {aRet = ((Ptr) GLmodule_186); goto lRet;}
        rA1 = (rSp + 4)->Val;
        (rSp + 4)->Val = (rA1 + 1)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLmodule_188);
        {aRet = ((Ptr) GLmodule_156); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_188() {     /* call_module_187 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLmodule_185); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_186() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1;
        if ((rSp + 1)->Val != GInil)    goto l_103;
        GIa3 = (rSp + 2)->Val;
        GIa2 = rLit[87];
        rA1 = rLit[88];
        rSp += (Fix) 5;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        if (rA1 == rLit[79])    goto l_107;
        if (rA1 != rLit[80])    {aRet = ((Ptr) GLmodule_189); goto lRet;}
l_107:
        (--rSp)->Val = ((Ptr) GLmodule_190);
        (--rSp)->Val = rLit[89];
        (--rSp)->Val = ((Ptr) GLmodule_191);
        (--rSp)->Val = rLit[90];
        (--rSp)->Val = ((Ptr) GLmodule_192);
        (--rSp)->Val = rLit[91];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[92] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLmodule_192() {     /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodule[92] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_191() {     /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodule_193);
        (--rSp)->Val = rLit[93];
        (--rSp)->Val = ((Ptr) GLmodule_194);
        (--rSp)->Val = rLit[91];
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[92] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_194() {     /* 112 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[94];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[95] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_193() {     /* 111 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYmodule[92] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_190() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 1)->Val = GIa1;
        rSp->Val = GYmodule[96];
        {aRet = ((Ptr) GLmodule_195); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_189() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        if (GIa1 != rLit[81])   {aRet = ((Ptr) GLmodule_196); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodule_197);
        (--rSp)->Val = rLit[89];
        (--rSp)->Val = ((Ptr) GLmodule_198);
        (--rSp)->Val = rLit[90];
        (--rSp)->Val = ((Ptr) GLmodule_199);
        (--rSp)->Val = rLit[91];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[92] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_199() {     /* 116 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodule[92] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_198() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodule_200);
        (--rSp)->Val = rLit[93];
        (--rSp)->Val = ((Ptr) GLmodule_201);
        (--rSp)->Val = rLit[91];
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[92] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_201() {     /* 118 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[97];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[95] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_200() {     /* 117 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYmodule[92] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_197() {     /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 1)->Val = GIa1;
        rSp->Val = GYmodule[98];
        {aRet = ((Ptr) GLmodule_195); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_196() {     /* 113 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1;
        if (rA1 == rLit[82])    goto l_120;
        if (rA1 != rLit[84])    {aRet = ((Ptr) GLmodule_202); goto lRet;}
l_120:
        (--rSp)->Val = ((Ptr) GLmodule_203);
        (--rSp)->Val = rLit[89];
        (--rSp)->Val = ((Ptr) GLmodule_204);
        (--rSp)->Val = rLit[90];
        (--rSp)->Val = ((Ptr) GLmodule_205);
        (--rSp)->Val = rLit[91];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[92] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_205() {     /* 123 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodule[92] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_204() {     /* 122 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodule_206);
        (--rSp)->Val = rLit[99];
        (--rSp)->Val = ((Ptr) GLmodule_207);
        (--rSp)->Val = rLit[91];
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[92] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_207() {     /* 125 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[100];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[95] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_206() {     /* 124 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYmodule[92] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_203() {     /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 1)->Val = GIa1;
        rSp->Val = GYmodule[101];
        {aRet = ((Ptr) GLmodule_195); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_202() {     /* 119 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        if (GIa1 != rLit[83])   {aRet = ((Ptr) GLmodule_208); goto lRet;}
        (--rSp)->Val = ((Ptr) GLmodule_209);
        (--rSp)->Val = rLit[89];
        (--rSp)->Val = ((Ptr) GLmodule_210);
        (--rSp)->Val = rLit[90];
        (--rSp)->Val = ((Ptr) GLmodule_211);
        (--rSp)->Val = rLit[91];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[92] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_211() {     /* 129 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYmodule[92] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_210() {     /* 128 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[102];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[95] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_209() {     /* 127 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 1)->Val = GIa1;
        rSp->Val = GYmodule[103];
        {aRet = ((Ptr) GLmodule_195); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_208() {     /* 126 */
   {    register Ptr aRet, *rLit;
        rLit = GYmodule;
        GIa3 = (GIsp + 1)->Val;
        GIa2 = rLit[104];
        GIa1 = rLit[88];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLmodule_195); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_195() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rSp->Val;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_213);
        {aRet = (GYmodule[105] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_213() {     /* call_module_212 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYmodule; rSp = GIsp; rA2 = GIa2;
        rA2 = (rSp + 3)->Val;
        if (rA2 != GInil)       goto l_131;
        rA2 = (rSp + 4)->Val;
l_131:
        GIa3 = rLit[88];
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 5;
        {aRet = (rLit[70] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLmodule_214() {     /* #:module:std-autoload */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLmodule_216);
        {aRet = (GYmodule[106] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_216() {     /* call_module_215 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYmodule; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[88];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_218);
        {aRet = (rLit[107] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_218() {     /* call_module_217 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLmodule_219); goto lRet;}
        (--rSp)->Val = rA1;
        {aRet = ((Ptr) GLmodule_220); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_220() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYmodule; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLmodule_221); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa2 = rLit[12];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLmodule_223);
        {aRet = (rLit[74] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLmodule_223() {     /* call_module_222 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodule_220); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_221() {     /* 104 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLmodule_224); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLmodule_219() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLmodule_224);
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYmodule[58] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_224() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLmodule_226);
        {aRet = (GYmodule[106] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLmodule_226() {     /* call_module_225 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYmodule; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 != (rSp + 2)->Val)      goto l_106;
        rA2 = rSp->Val;
        rA1 = (rSp + 3)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rA1;
        rA2 = rLit[87];
        rA1 = rLit[88];
        rSp += (Fix) 4;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_106:
        rA1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLmodule_227() {     /* autoloadp */
   {    register Ptr aRet, *rLit;
        rLit = GYmodule;
        GIa2 = rLit[88];
        {aRet = (rLit[107] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDmodule_228() {     /* trace readdefmodule */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmodule,2,108,109);
  lRet:  return (aRet);}}

static Ptr GDmodule_229() {     /* trace #:module:bol */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmodule,110,108,111);
  lRet:  return (aRet);}}

static Ptr GDmodule_230() {     /* trace getdefmodule */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmodule,29,108,112);
  lRet:  return (aRet);}}

static Ptr GDmodule_231() {     /* trace setdefmodule */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmodule,113,108,114);
  lRet:  return (aRet);}}

static Ptr GDmodule_232() {     /* trace printdefmodule */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmodule,32,108,112);
  lRet:  return (aRet);}}

static Ptr GDmodule_233() {     /* trace loadmodule */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmodule,58,108,115);
  lRet:  return (aRet);}}

static Ptr GDmodule_234() {     /* trace autoloadmodule */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmodule,116,108,117);
  lRet:  return (aRet);}}

static Ptr GDmodule_235() {     /* trace #:module:std-autoload */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmodule,90,108,109);
  lRet:  return (aRet);}}

static Ptr GDmodule_236() {     /* trace autoloadp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYmodule,118,108,109);
  lRet:  return (aRet);}}

