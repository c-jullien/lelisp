/* GELL 15.26: source file for the module: "defs" */
/*             translation done:           "Wed June 16 93 18:00:40 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "defs.h" 

static Ptr GLdefs_1() { /* macroexpand */
   {    register Ptr aRet, *rLit, rSp, rA1, rBcons;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rBcons = GIbcons;
        (--rSp)->Val = rLit[0]->Val;
        rLit[0]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[1];
        (--rSp)->Val = ((Ptr) GLdefs_1);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if ((long) rA1 >= (long) rBcons)        goto l_101;
        {aRet = ((Ptr) GLdefs_2); goto lRet;}
l_101:
        if ((rA1->Val < GIbsymb) || (rA1->Val >= rBcons))       {aRet = ((Ptr) GLdefs_3); goto lRet;}
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdefs_5);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_5() { /* call_defs_4 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[3])     {aRet = ((Ptr) GLdefs_6); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_7);
        rA1 = rLit[0]->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdefs_9);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_9() { /* call_defs_8 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = rLit[5];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[0]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_7() { /* 107 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLdefs_2);
        {aRet = (GYdefs[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_6() { /* 105 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        rA1 = rLit[0]->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_11);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_11() {        /* call_defs_10 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[8])     {aRet = ((Ptr) GLdefs_12); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_13);
        rA1 = rLit[0]->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdefs_15);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_15() {        /* call_defs_14 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        GIa2 = rA1;
        rA1 = rLit[5];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        rA4 = rLit[0]->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_13() {        /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLdefs_2);
        {aRet = (GYdefs[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_12() {        /* 108 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        rA1 = rLit[0]->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_17);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_17() {        /* call_defs_16 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[9])     {aRet = ((Ptr) GLdefs_18); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_19);
        rA1 = rLit[0]->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdefs_21);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_21() {        /* call_defs_20 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYdefs; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_19() {        /* 113 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLdefs_2);
        {aRet = (GYdefs[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_18() {        /* 111 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        rA1 = rLit[0]->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_23);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_23() {        /* call_defs_22 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[11])    {aRet = ((Ptr) GLdefs_24); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_25);
        rA1 = rLit[0]->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdefs_27);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_27() {        /* call_defs_26 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYdefs; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = GIa1;
        rA4 = rLit[0]->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        rA4 = (Ptr) 4;
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_25() {        /* 116 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLdefs_2);
        {aRet = (GYdefs[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_24() {        /* 114 */
   {    register Ptr aRet, *rLit, rA4;
        rLit = GYdefs; rA4 = GIa4;
        rA4 = rLit[0]->Val;
        if (rA4->Val != rLit[12])       goto l_117;
        GIa1 = rA4;
        {aRet = ((Ptr) GLdefs_2); goto lRet;}
l_117:
        (--GIsp)->Val = GInil;
        {aRet = ((Ptr) GLdefs_28); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_28() {        /* 119 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        if ((long) rLit[0]->Val < (long) GIbcons)       {aRet = ((Ptr) GLdefs_29); goto lRet;}
        rA1 = rLit[0]->Val;
        rLit[0]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_31);
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_31() {        /* call_defs_30 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rSp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdefs_28); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_29() {        /* 120 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        GIa4 = rSp->Val;
        (GIa4 + 1)->Val = GYdefs[0]->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLdefs_2); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_3() { /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        {aRet = ((Ptr) GLdefs_32); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_32() {        /* 121 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        if ((long) rLit[0]->Val < (long) GIbcons)       {aRet = ((Ptr) GLdefs_33); goto lRet;}
        rA1 = rLit[0]->Val;
        rLit[0]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_35);
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_35() {        /* call_defs_34 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        GIa2 = rLit[13]->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[13]->Val = rA1;
        {aRet = ((Ptr) GLdefs_32); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_33() {        /* 122 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        rA1 = rLit[13]->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        GIa4 = rLit[13]->Val;
        (GIa4 + 1)->Val = rLit[0]->Val;
        GIdlink = (rSp + 1)->Val;
        rLit[13]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = ((Ptr) GLdefs_2); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_2() { /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[0]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_36() {        /* macroexpand1 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rLit[0]->Val;
        rLit[0]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = ((Ptr) GLdefs_36);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdefs_38);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_38() {        /* call_defs_37 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[3])     {aRet = ((Ptr) GLdefs_39); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_40);
        rA1 = rLit[0]->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdefs_42);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_42() {        /* call_defs_41 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = rLit[5];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[0]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_39() {        /* 101 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        rA1 = rLit[0]->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_44);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_44() {        /* call_defs_43 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[8])     {aRet = ((Ptr) GLdefs_45); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_40);
        rA1 = rLit[0]->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdefs_47);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_47() {        /* call_defs_46 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        GIa2 = rA1;
        rA1 = rLit[5];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        rA4 = rLit[0]->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_45() {        /* 104 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        rA1 = rLit[0]->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_49);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_49() {        /* call_defs_48 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[9])     {aRet = ((Ptr) GLdefs_50); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_40);
        rA1 = rLit[0]->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdefs_52);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_52() {        /* call_defs_51 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYdefs; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_50() {        /* 107 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        rA1 = rLit[0]->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_54);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_54() {        /* call_defs_53 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[11])    {aRet = ((Ptr) GLdefs_55); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_40);
        rA1 = rLit[0]->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdefs_57);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_57() {        /* call_defs_56 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYdefs; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = GIa1;
        rA4 = rLit[0]->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        rA4 = (Ptr) 4;
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_55() {        /* 110 */
   {    register Ptr aRet;
        GIa1 = GYdefs[0]->Val;
        {aRet = ((Ptr) GLdefs_40); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_40() {        /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[0]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_58() {        /* with */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        GIa4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = rA1;
        (--rSp)->Val = rLit[16]->Val;
        rLit[16]->Val = GIa4;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = ((Ptr) GLdefs_58);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = (Ptr) ((UFix) 0xffff);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLdefs_59); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_59() {        /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYdefs; rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLdefs_60); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLdefs_61);
        (--rSp)->Val = rLit[18];
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_63);
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_63() {        /* call_defs_62 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 5)->Val = rA1;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYdefs[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_61() {        /* 103 */
   {    register Ptr aRet, *rLit;
        rLit = GYdefs;
        GIa2 = GIa1;
        GIa1 = rLit[21];
        (--GIsp)->Val = ((Ptr) GLdefs_65);
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_65() {        /* call_defs_64 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdefs_59); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_60() {        /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 3;
        (--rSp)->Val = rLit[23]->Val;
        rLit[23]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[24];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLdefs_66);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = rLit[13]->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLdefs_67); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_67() {        /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rBcons;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLdefs_68); goto lRet;}
        if ((long) (rSp + 2)->Val < (long) rBcons)      {aRet = ((Ptr) GLdefs_68); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        rA3 = (rSp + 2)->Val;
        (rSp + 2)->Val = (rA3 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rA3->Val;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[23]->Val;
        rLit[23]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[26];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLdefs_69);
        (--rSp)->Val = rLit[23]->Val;
        rA1 = rLit[13]->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = ((Ptr) GLdefs_71);
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_71() {        /* call_defs_70 */
   {    register Ptr aRet, *rLit;
        rLit = GYdefs;
        GIa2 = rLit[13]->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_73);
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_73() {        /* call_defs_72 */
   {    register Ptr aRet, *rLit, rA1, rA4, rNil;
        rLit = GYdefs; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if ((rA1 < GIbcons) || (rA1 >= GIecons)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 != rNil)        goto l_108;
        GIa3 = rLit[13]->Val;
        GIa2 = rLit[29];
        rA1 = rLit[21];
        GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
        rA4 = rA1;
l_108:
        (--GIsp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_69() {        /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        rLit[23]->Val = (rSp + 6)->Val;
        rLit[13]->Val = (rSp + 7)->Val;
        rSp += (Fix) 10;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdefs_67); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_68() {        /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 3;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLdefs_74);
        (--rSp)->Val = rLit[31];
        (--rSp)->Val = ((Ptr) GLdefs_75);
        (--rSp)->Val = rLit[13]->Val;
        (--rSp)->Val = rLit[16]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_75() {        /* 110 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        rA1 = rLit[23]->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        (--rSp)->Val = rA1;
        rA1 = rLit[13]->Val;
        (--rSp)->Val = ((Ptr) GLdefs_77);
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_77() {        /* call_defs_76 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLdefs_78); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_78() {        /* 111 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rBcons;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        if ((long) (rSp + 2)->Val < (long) rBcons)      {aRet = ((Ptr) GLdefs_79); goto lRet;}
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLdefs_79); goto lRet;}
        rA4 = (rSp + 2)->Val;
        (rSp + 2)->Val = (rA4 + 1)->Val;
        rA3 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA3 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rA3->Val;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[23]->Val;
        rLit[23]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[35];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        rA1 = rLit[13]->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = ((Ptr) GLdefs_81);
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_81() {        /* call_defs_80 */
   {    register Ptr aRet, *rLit;
        rLit = GYdefs;
        GIa2 = rLit[13]->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_83);
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_83() {        /* call_defs_82 */
   {    register Ptr aRet, *rLit;
        rLit = GYdefs;
        GIa2 = rLit[23]->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_85);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_85() {        /* call_defs_84 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        rLit[23]->Val = (rSp + 6)->Val;
        rLit[13]->Val = (rSp + 7)->Val;
        rSp += (Fix) 10;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdefs_78); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_79() {        /* 112 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 3;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_74() {        /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_66() {        /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[23]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[16]->Val = (rSp + 6)->Val;
        rLit[13]->Val = (rSp + 7)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_86() {        /* #:system:def-check-all */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rBcons;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((long) (rA1 + 1)->Val >= (long) rBcons)     goto l_102;
        (--rSp)->Val = rA2;
        rA3 = (rA1 + 1)->Val;
        rA2 = rLit[38];
        rA1 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA3 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rA3->Val;
        if (((rSp + 1)->Val >= GIbvar) && ((rSp + 1)->Val < rBcons))    goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[39];
        rA1 = (rSp + 3)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        rA3 = GInil;
        rA2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLdefs_88);
        {aRet = ((Ptr) GLdefs_89); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_88() {        /* call_defs_87 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        if (rLit[40]->Val != GInil)     {aRet = ((Ptr) GLdefs_90); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_92);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_92() {        /* call_defs_91 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLdefs_90); goto lRet;}
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[41];
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_90);
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_90() {        /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        GIa2 = rLit[43]->Val;
        rA1 = (rSp + 1)->Val;
        rA1 = llrt_call_memq (rA1, GIa2, GIbcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLdefs_93); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_93);
        (--rSp)->Val = ((Ptr) GLdefs_94);
        (--rSp)->Val = rLit[44];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_94() {        /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYdefs[45] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_93() {        /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        if (rLit[46]->Val == GInil)     {aRet = ((Ptr) GLdefs_95); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_97);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_97() {        /* call_defs_96 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLdefs_95); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_99);
        {aRet = (GYdefs[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_99() {        /* call_defs_98 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        GIa3 = rLit[48];
        GIa2 = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_95);
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_95() {        /* 112 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYdefs; rSp = GIsp; rNil = GInil;
        if (rLit[50]->Val == rNil)      goto l_113;
        GIa3 = rLit[50];
        GIa2 = rLit[50]->Val;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
l_113:
        GIa1 = rNil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_89() {        /* #:system:def-check-larg */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = rLit[51]->Val;
        rLit[51]->Val = GIa3;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[52];
        (--rSp)->Val = ((Ptr) GLdefs_89);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLdefs_101);
        {aRet = ((Ptr) GLdefs_102); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_101() {       /* call_defs_100 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[51]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_102() {       /* #:system:def-check-larg-aux */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
l_GLdefs_102:
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_101;
        rA1 = rLit[53];
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if ((rA1 < GIbvar) || (rA1 >= rBcons))  goto l_103;
        rA2 = rLit[51]->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_105;
        GIa3 = rSp->Val;
        rA2 = rLit[54];
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        rA2 = rLit[51]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[51]->Val = rA1;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLdefs_103); goto lRet;}
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdefs_105);
        goto l_GLdefs_102;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdefs_105() {       /* call_defs_104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLdefs_106); goto lRet;}
        rA1 = rSp->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_108);
        {aRet = ((Ptr) GLdefs_102); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_108() {       /* call_defs_107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLdefs_106); goto lRet;}
        GIa1 = GYdefs[53];
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_106() {       /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_103() {       /* 107 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        GIa3 = rA1;
        GIa2 = GYdefs[54];
        rA1 = (rSp++)->Val;
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_109() {       /* #:system:resetfn */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYdefs; rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GInil;
        (--rSp)->Val = ((Ptr) GLdefs_110);
        (--rSp)->Val = rLit[55];
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rA2;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_110() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        if ((rSp + 1)->Val != rLit[56]) {aRet = ((Ptr) GLdefs_111); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_112);
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = ((Ptr) GLdefs_113);
        (--rSp)->Val = rLit[12];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_113() {       /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_112() {       /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rSp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdefs_111); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_111() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        if (rA4 == rLit[58])    goto l_108;
        if (rA4 == rLit[59])    goto l_108;
        if (rA4 == rLit[60])    goto l_108;
        if (rA4 != rLit[56])    goto l_107;
l_108:
        rA2 = rA1;
        rA1 = rLit[61];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
l_107:
        rA4 = (rSp + 1)->Val;
        if (rA4 == rLit[59])    goto l_111;
        if (rA4 != rLit[60])    goto l_110;
l_111:
        rA2 = rA1;
        rA1 = rLit[62];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
l_110:
        if ((rSp + 1)->Val != rLit[60]) goto l_113;
        rA2 = rA1;
        rA1 = rLit[63];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
l_113:
        if ((rSp + 1)->Val == rLit[56]) {aRet = ((Ptr) GLdefs_114); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_115);
        (--rSp)->Val = rLit[64];
        (--rSp)->Val = ((Ptr) GLdefs_116);
        (--rSp)->Val = rLit[12];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_116() {       /* 117 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[65];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_115() {       /* 116 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rSp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdefs_114); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_114() {       /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if ((rSp + 1)->Val == rLit[66]) {aRet = ((Ptr) GLdefs_117); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_118);
        (--rSp)->Val = rLit[64];
        (--rSp)->Val = ((Ptr) GLdefs_119);
        (--rSp)->Val = rLit[12];
        rA1 = (rSp + 5)->Val;
        if (rA1 != rLit[67])    goto l_123;
        rA4 = (Ptr) 0;
        goto l_122;
l_123:
        if (rA1 != rLit[58])    goto l_124;
        rA4 = (Ptr) 1;
        goto l_122;
l_124:
        if (rA1 != rLit[59])    goto l_125;
        rA4 = (Ptr) 2;
        goto l_122;
l_125:
        if (rA1 != rLit[60])    goto l_126;
        rA4 = (Ptr) 3;
        goto l_122;
l_126:
        if (rA1 != rLit[56])    goto l_127;
        rA4 = (Ptr) 2;
        goto l_122;
l_127:
        rA4 = GInil;
l_122:
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_119() {       /* 121 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[68];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_118() {       /* 120 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rSp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdefs_117); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_117() {       /* 119 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if ((rSp + 1)->Val != rLit[56]) goto l_128;
        rA2 = rA1;
        rA1 = rLit[69];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_129;
l_128:
        rA2 = rA1;
        rA1 = rLit[70];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
l_129:
        rA2 = rA1;
        rA1 = rLit[71];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj3);
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        (--rSp)->Val = rA1;
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[72] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdefs_120() {       /* resetfn */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_122);
        {aRet = (GYdefs[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_122() {       /* call_defs_121 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = rA1;
        if (rA4 == rLit[67])    goto l_103;
        if (rA4 == rLit[58])    goto l_103;
        if (rA4 == rLit[59])    goto l_103;
        if (rA4 == rLit[60])    goto l_103;
        if (rA4 == rLit[66])    goto l_103;
        if (rA4 != rLit[56])    {aRet = ((Ptr) GLdefs_123); goto lRet;}
l_103:
        rA1 = rLit[72];
        (--rSp)->Val = ((Ptr) GLdefs_125);
        {aRet = (rLit[73] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_125() {       /* call_defs_124 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil, rBcons;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if (rA1 == rNil)        {aRet = ((Ptr) GLdefs_123); goto lRet;}
        GIa2 = (rSp + 2)->Val;
        rA1 = rSp->Val;
        rA1 = (rA1 == GIa2) ? rLit[53] : rNil;
        if (rA1 != rNil)        {aRet = ((Ptr) GLdefs_126); goto lRet;}
        if (rLit[74] != (rSp + 2)->Val) {aRet = ((Ptr) GLdefs_127); goto lRet;}
        rA1 = rSp->Val;
        if (rA1 != rLit[67])    goto l_108;
        rA4 = (rSp + 3)->Val;
        if (rA4->Val == rNil)   goto l_109;
        rA4 = rNil;
        {aRet = ((Ptr) GLdefs_128); goto lRet;}
l_109:
        rA4 = rLit[53];
        {aRet = ((Ptr) GLdefs_128); goto lRet;}
l_108:
        if (rA1 != rLit[58])    goto l_111;
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLdefs_128); goto lRet;}
        rA4 = (rSp + 3)->Val;
        rA4 = rA4->Val;
        if ((rA4 + 1)->Val == rNil)     goto l_113;
        rA4 = rNil;
        {aRet = ((Ptr) GLdefs_128); goto lRet;}
l_113:
        rA4 = rLit[53];
        {aRet = ((Ptr) GLdefs_128); goto lRet;}
l_111:
        if (rA1 != rLit[59])    goto l_115;
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLdefs_128); goto lRet;}
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLdefs_128); goto lRet;}
        rA4 = (rSp + 3)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        if ((rA4 + 1)->Val == rNil)     goto l_117;
        rA4 = rNil;
        {aRet = ((Ptr) GLdefs_128); goto lRet;}
l_117:
        rA4 = rLit[53];
        {aRet = ((Ptr) GLdefs_128); goto lRet;}
l_115:
        if (rA1 != rLit[60])    goto l_119;
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLdefs_128); goto lRet;}
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLdefs_128); goto lRet;}
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLdefs_128); goto lRet;}
        rA4 = (rSp + 3)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        if ((rA4 + 1)->Val == rNil)     goto l_121;
        rA4 = rNil;
        {aRet = ((Ptr) GLdefs_128); goto lRet;}
l_121:
        rA4 = rLit[53];
        {aRet = ((Ptr) GLdefs_128); goto lRet;}
l_119:
        if (rA1 != rLit[66])    {aRet = ((Ptr) GLdefs_129); goto lRet;}
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdefs_131);
        {aRet = (rLit[75] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_131() {       /* call_defs_130 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa4 = rA1;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLdefs_128); goto lRet;}
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdefs_133);
        {aRet = (GYdefs[76] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_133() {       /* call_defs_132 */
   {    register Ptr aRet;
        GIa1 = (GIa1 + 1)->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_135);
        {aRet = (GYdefs[75] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_135() {       /* call_defs_134 */
   {    register Ptr aRet, rA1, rA4, rNil;
        rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        rA4 = rA1;
        if (rA4 != rNil)        {aRet = ((Ptr) GLdefs_128); goto lRet;}
        rA1 = (GIsp + 3)->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        GIa2 = (Ptr) 4;
        rA1 = ((Fix) (rA1) >= (Fix) (GIa2)) ? rA1 : rNil;
        rA4 = rA1;
        {aRet = ((Ptr) GLdefs_128); goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_129() {       /* 123 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLdefs_128); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_128() {       /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (GIa4 == GInil)      {aRet = ((Ptr) GLdefs_127); goto lRet;}
        rA2 = (rSp + 3)->Val;
        rA1 = rLit[5];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rA1;
        rA2 = rSp->Val;
        rA1 = rLit[77];
        (--rSp)->Val = ((Ptr) GLdefs_137);
        {aRet = ((Ptr) GLdefs_109); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdefs_137() {       /* call_defs_136 */
   {    register Ptr aRet, *rLit;
        rLit = GYdefs;
        GIa1 = rLit[77];
        (--GIsp)->Val = ((Ptr) GLdefs_139);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_139() {       /* call_defs_138 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = rLit[77];
        (--rSp)->Val = ((Ptr) GLdefs_141);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_141() {       /* call_defs_140 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_143);
        {aRet = (GYdefs[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_143() {       /* call_defs_142 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (rSp + 3)->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rLit[79];
        rA2 = rA1;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_126);
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdefs_127() {       /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rLit[80] != (rSp + 2)->Val) {aRet = ((Ptr) GLdefs_144); goto lRet;}
        if (rLit[56] != rSp->Val)       {aRet = ((Ptr) GLdefs_144); goto lRet;}
        rA2 = (rSp + 3)->Val;
        rA1 = rLit[81];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rA1;
        rA2 = rSp->Val;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_146);
        {aRet = ((Ptr) GLdefs_109); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdefs_146() {       /* call_defs_145 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (rSp + 3)->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        GIa3 = rLit[79];
        rA2 = rA1;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_126);
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdefs_144() {       /* 125 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        if (rLit[40]->Val != GInil)     {aRet = ((Ptr) GLdefs_147); goto lRet;}
        GIa2 = rLit[82];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_149);
        {aRet = (rLit[83] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_149() {       /* call_defs_148 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLdefs_147); goto lRet;}
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[84];
        GIa1 = rLit[79];
        (--rSp)->Val = ((Ptr) GLdefs_147);
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_147() {       /* 128 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_126);
        {aRet = (GYdefs[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_123() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_151);
        {aRet = (GYdefs[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_151() {       /* call_defs_150 */
   {    register Ptr aRet, *rLit;
        rLit = GYdefs;
        GIa1 = rLit[85];
        (--GIsp)->Val = ((Ptr) GLdefs_153);
        {aRet = (rLit[73] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_153() {       /* call_defs_152 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLdefs_126); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_155);
        {aRet = (GYdefs[86] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_155() {       /* call_defs_154 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLdefs_126); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_126);
        {aRet = (GYdefs[87] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_126() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_156() {       /* de */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[88];
        (--rSp)->Val = ((Ptr) GLdefs_156);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa2 = rLit[89];
        (--rSp)->Val = ((Ptr) GLdefs_158);
        {aRet = ((Ptr) GLdefs_86); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_158() {       /* call_defs_157 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        rA1 = rLit[13]->Val;
        GIa3 = (rA1 + 1)->Val;
        GIa2 = rLit[74];
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_160);
        {aRet = (rLit[79] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_160() {       /* call_defs_159 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[13]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_161() {       /* df */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[90];
        (--rSp)->Val = ((Ptr) GLdefs_161);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa2 = rLit[91];
        (--rSp)->Val = ((Ptr) GLdefs_163);
        {aRet = ((Ptr) GLdefs_86); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_163() {       /* call_defs_162 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        rA1 = rLit[13]->Val;
        GIa3 = (rA1 + 1)->Val;
        GIa2 = rLit[80];
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_165);
        {aRet = (rLit[79] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_165() {       /* call_defs_164 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[13]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_166() {       /* dm */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[92];
        (--rSp)->Val = ((Ptr) GLdefs_166);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa2 = rLit[93];
        (--rSp)->Val = ((Ptr) GLdefs_168);
        {aRet = ((Ptr) GLdefs_86); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_168() {       /* call_defs_167 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        rA1 = rLit[13]->Val;
        GIa3 = (rA1 + 1)->Val;
        GIa2 = rLit[3];
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_170);
        {aRet = (rLit[78] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_170() {       /* call_defs_169 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[13]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_171() {       /* dmd */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[94];
        (--rSp)->Val = ((Ptr) GLdefs_171);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa2 = rLit[95];
        (--rSp)->Val = ((Ptr) GLdefs_173);
        {aRet = ((Ptr) GLdefs_86); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_173() {       /* call_defs_172 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        rA1 = rLit[13]->Val;
        GIa3 = (rA1 + 1)->Val;
        GIa2 = rLit[8];
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_175);
        {aRet = (rLit[78] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_175() {       /* call_defs_174 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[13]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_176() {       /* defmacro */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[96];
        (--rSp)->Val = ((Ptr) GLdefs_176);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa2 = rLit[97];
        (--rSp)->Val = ((Ptr) GLdefs_178);
        {aRet = ((Ptr) GLdefs_86); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_178() {       /* call_defs_177 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        rA1 = rLit[13]->Val;
        GIa3 = (rA1 + 1)->Val;
        GIa2 = rLit[8];
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_180);
        {aRet = (rLit[78] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_180() {       /* call_defs_179 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[13]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_181() {       /* defun */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[98];
        (--rSp)->Val = ((Ptr) GLdefs_181);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa2 = rLit[99];
        (--rSp)->Val = ((Ptr) GLdefs_183);
        {aRet = ((Ptr) GLdefs_86); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_183() {       /* call_defs_182 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        rA1 = rLit[13]->Val;
        GIa3 = (rA1 + 1)->Val;
        GIa2 = rLit[74];
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_185);
        {aRet = (rLit[79] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_185() {       /* call_defs_184 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[13]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_186() {       /* ds */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[100];
        (--rSp)->Val = ((Ptr) GLdefs_186);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa2 = rLit[101];
        (--rSp)->Val = ((Ptr) GLdefs_188);
        {aRet = ((Ptr) GLdefs_86); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_188() {       /* call_defs_187 */
   {    register Ptr aRet, *rLit, rA1, rA2, rA3;
        rLit = GYdefs; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        rA1 = rLit[13]->Val;
        rA2 = (rA1 + 1)->Val;
        rA3 = (rA1 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        rA2 = rA2->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_190);
        {aRet = (rLit[78] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLdefs_190() {       /* call_defs_189 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[13]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_191() {       /* letn */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rLit[102]->Val;
        rLit[102]->Val = rA1;
        (--rSp)->Val = rLit[103]->Val;
        rLit[103]->Val = rA4;
        (--rSp)->Val = rLit[16]->Val;
        rLit[16]->Val = rA3;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[104];
        (--rSp)->Val = ((Ptr) GLdefs_191);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLdefs_192);
        (--rSp)->Val = rLit[105];
        (--rSp)->Val = ((Ptr) GLdefs_193);
        (--rSp)->Val = ((Ptr) GLdefs_194);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rNil;
l_104:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_105;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA2 = rSp->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_104;
l_105:
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[16]->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_194() {       /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_193() {       /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rBcons;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[102]->Val;
        (--rSp)->Val = rLit[103]->Val;
        (--rSp)->Val = GInil;
l_106:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_107;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        rA2 = rSp->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_106;
l_107:
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdefs_192() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[16]->Val = (rSp + 6)->Val;
        rLit[103]->Val = (rSp + 7)->Val;
        rLit[102]->Val = (rSp + 8)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_195() {       /* slet */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[16]->Val;
        rLit[16]->Val = rA4;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[106];
        (--rSp)->Val = ((Ptr) GLdefs_195);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rA1 != rNil)        goto l_101;
        (--rSp)->Val = ((Ptr) GLdefs_196);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
l_101:
        if ((rA1 + 1)->Val == rNil)     {aRet = ((Ptr) GLdefs_197); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_196);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = ((Ptr) GLdefs_198);
        (--rSp)->Val = rA1->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_198() {       /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYdefs; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_199);
        (--rSp)->Val = rLit[107];
        rA4 = (rSp + 12)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rLit[16]->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_199() {       /* 108 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_197() {       /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLdefs_196);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = ((Ptr) GLdefs_200);
        (--rSp)->Val = GIa1->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_200() {       /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[16]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_196() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[16]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_201() {       /* dynamic */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = rA1->Val;
        rA1 = rA1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_202() {       /* #:system:generate-for */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = ((Ptr) GLdefs_203);
        (--rSp)->Val = rLit[23]->Val;
        (--rSp)->Val = rLit[108]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_203() {       /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_204);
        if ((rSp + 4)->Val == GInil)    {aRet = ((Ptr) GLdefs_205); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_206);
        (--rSp)->Val = ((Ptr) GLdefs_207);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[109]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_207() {       /* 107 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_206() {       /* 106 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLdefs_208); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_205() {       /* 104 */
   {    register Ptr aRet;
        (GIsp + 4)->Val = GYdefs[109]->Val;
        GIa4 = GInil;
        {aRet = ((Ptr) GLdefs_208); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_208() {       /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa4;
        if ((rSp + 6)->Val == GInil)    {aRet = ((Ptr) GLdefs_209); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_210);
        (--rSp)->Val = ((Ptr) GLdefs_211);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[110]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_211() {       /* 111 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_210() {       /* 110 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLdefs_212); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_209() {       /* 108 */
   {    register Ptr aRet;
        (GIsp + 6)->Val = GYdefs[110]->Val;
        GIa4 = GInil;
        {aRet = ((Ptr) GLdefs_212); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_212() {       /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa4;
        GIa4 = (Ptr) 2;
        {aRet = (GYdefs[32] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_204() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLdefs_213);
        (--rSp)->Val = rLit[111];
        (--rSp)->Val = ((Ptr) GLdefs_214);
        (--rSp)->Val = ((Ptr) GLdefs_215);
        (--rSp)->Val = rLit[112];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[113];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_215() {       /* 114 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_216);
        (--rSp)->Val = rLit[114];
        (--rSp)->Val = ((Ptr) GLdefs_217);
        (--rSp)->Val = rLit[115];
        (--rSp)->Val = rLit[23]->Val;
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_217() {       /* 116 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_218);
        (--rSp)->Val = rLit[16]->Val;
        (--rSp)->Val = ((Ptr) GLdefs_219);
        (--rSp)->Val = ((Ptr) GLdefs_220);
        (--rSp)->Val = rLit[116];
        (--rSp)->Val = rLit[23]->Val;
        {register Ptr aux;
                aux = (rSp + 16)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_220() {       /* 119 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_219() {       /* 118 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYdefs[32] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_218() {       /* 117 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_216() {       /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_214() {       /* 113 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_221);
        (--rSp)->Val = ((Ptr) GLdefs_222);
        (--rSp)->Val = rLit[117];
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[118];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_222() {       /* 121 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_223);
        (--rSp)->Val = rLit[114];
        (--rSp)->Val = ((Ptr) GLdefs_224);
        (--rSp)->Val = rLit[119];
        (--rSp)->Val = rLit[23]->Val;
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_224() {       /* 123 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_225);
        (--rSp)->Val = rLit[16]->Val;
        (--rSp)->Val = ((Ptr) GLdefs_226);
        (--rSp)->Val = ((Ptr) GLdefs_227);
        (--rSp)->Val = rLit[116];
        (--rSp)->Val = rLit[23]->Val;
        {register Ptr aux;
                aux = (rSp + 17)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_227() {       /* 126 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_226() {       /* 125 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYdefs[32] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_225() {       /* 124 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_223() {       /* 122 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_221() {       /* 120 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[120];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_213() {       /* 112 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[121]->Val;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_228() {       /* for */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA3 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA2 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        (--rSp)->Val = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        (--rSp)->Val = rA4;
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rLit[23]->Val;
        rLit[23]->Val = rA1;
        (--rSp)->Val = rLit[108]->Val;
        rLit[108]->Val = rA3;
        (--rSp)->Val = rLit[109]->Val;
        rLit[109]->Val = rA2;
        (--rSp)->Val = rLit[16]->Val;
        rLit[16]->Val = (rSp + 4)->Val;
        (--rSp)->Val = rLit[121]->Val;
        rLit[121]->Val = rA4;
        (--rSp)->Val = rLit[110]->Val;
        rLit[110]->Val = (rSp + 7)->Val;
        (--rSp)->Val = rLit[110]->Val;
        rLit[110]->Val = rLit[110]->Val;
        (--rSp)->Val = (Ptr) 7;
        (--rSp)->Val = rLit[122];
        (--rSp)->Val = ((Ptr) GLdefs_228);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if ((rA1 >= GIbvar) && (rA1 < GIbcons)) goto l_102;
        rA3 = rA1;
        rA2 = rLit[123];
        rA1 = rLit[124];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        if (rLit[108]->Val == rNil)     goto l_105;
        if (rLit[109]->Val == rNil)     goto l_105;
        if (rLit[110]->Val != rNil)     {aRet = ((Ptr) GLdefs_229); goto lRet;}
l_105:
        (--rSp)->Val = ((Ptr) GLdefs_230);
        (--rSp)->Val = rLit[23]->Val;
        (--rSp)->Val = rLit[108]->Val;
        (--rSp)->Val = rLit[109]->Val;
        (--rSp)->Val = rLit[110]->Val;
        rA4 = (Ptr) 4;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_230() {       /* 106 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[29];
        rA1 = rLit[124];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLdefs_229); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_229() {       /* 104 */
   {    register Ptr aRet, *rLit;
        rLit = GYdefs;
        GIa1 = rLit[109]->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_232);
        {aRet = (rLit[125] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_232() {       /* call_defs_231 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLdefs_233); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_234);
        (--rSp)->Val = rLit[109]->Val;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[112] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_234() {       /* 111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        if (GIa1 == GInil)      goto l_109;
        GIa4 = rLit[115];
        {aRet = ((Ptr) GLdefs_235); goto lRet;}
l_109:
        (--rSp)->Val = ((Ptr) GLdefs_236);
        (--rSp)->Val = rLit[109]->Val;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[117] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_236() {       /* 114 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefs; rA1 = GIa1;
        if (rA1 == GInil)       goto l_112;
        GIa4 = rLit[119];
        {aRet = ((Ptr) GLdefs_235); goto lRet;}
l_112:
        GIa3 = (Ptr) 0;
        GIa2 = rLit[126];
        rA1 = rLit[124];
        GIa1 = rA1; rA1 = llrt_call_error ();
        GIa4 = rA1;
        {aRet = ((Ptr) GLdefs_235); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_235() {       /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa1 = rLit[110]->Val;
        (--rSp)->Val = ((Ptr) GLdefs_238);
        {aRet = (rLit[125] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_238() {       /* call_defs_237 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        if (GIa1 != GInil)      goto l_117;
        if ((rLit[110]->Val < GIbsymb) || (rLit[110]->Val >= GIbcons))  {aRet = ((Ptr) GLdefs_239); goto lRet;}
l_117:
        (--rSp)->Val = ((Ptr) GLdefs_240);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = ((Ptr) GLdefs_241);
        (--rSp)->Val = ((Ptr) GLdefs_242);
        (--rSp)->Val = rLit[23]->Val;
        (--rSp)->Val = rLit[108]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_242() {       /* 120 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_241() {       /* 119 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_243);
        (--rSp)->Val = rLit[114];
        (--rSp)->Val = ((Ptr) GLdefs_244);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[23]->Val;
        (--rSp)->Val = rLit[110]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_244() {       /* 122 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_245);
        (--rSp)->Val = rLit[16]->Val;
        (--rSp)->Val = ((Ptr) GLdefs_246);
        (--rSp)->Val = ((Ptr) GLdefs_247);
        (--rSp)->Val = rLit[116];
        (--rSp)->Val = rLit[23]->Val;
        (--rSp)->Val = rLit[109]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_247() {       /* 125 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_246() {       /* 124 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYdefs[32] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_245() {       /* 123 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_243() {       /* 121 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[121]->Val;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_239() {       /* 115 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = rLit[127];
        (--rSp)->Val = ((Ptr) GLdefs_248);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = ((Ptr) GLdefs_249);
        (--rSp)->Val = ((Ptr) GLdefs_250);
        (--rSp)->Val = rLit[23]->Val;
        (--rSp)->Val = rLit[108]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_250() {       /* 128 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_251);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[110]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_251() {       /* 129 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_249() {       /* 127 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_252);
        (--rSp)->Val = rLit[114];
        (--rSp)->Val = ((Ptr) GLdefs_253);
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[23]->Val;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_253() {       /* 131 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_254);
        (--rSp)->Val = rLit[16]->Val;
        (--rSp)->Val = ((Ptr) GLdefs_255);
        (--rSp)->Val = ((Ptr) GLdefs_256);
        (--rSp)->Val = rLit[116];
        (--rSp)->Val = rLit[23]->Val;
        (--rSp)->Val = rLit[109]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_256() {       /* 134 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_255() {       /* 133 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYdefs[32] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_254() {       /* 132 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_252() {       /* 130 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[121]->Val;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_248() {       /* 126 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLdefs_240); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_240() {       /* 116 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLdefs_257); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_233() {       /* 107 */
   {    register Ptr aRet, *rLit;
        rLit = GYdefs;
        GIa1 = rLit[110]->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_259);
        {aRet = (rLit[125] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_259() {       /* call_defs_258 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBsymb, rBcons;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBsymb = GIbsymb; rBcons = GIbcons;
        if (rA1 != rNil)        goto l_137;
        if ((rLit[110]->Val < rBsymb) || (rLit[110]->Val >= rBcons))    goto l_135;
l_137:
        if ((rLit[109]->Val < rBsymb) || (rLit[109]->Val >= rBcons))    goto l_138;
        rA2 = rNil;
        rA1 = rNil;
        (--rSp)->Val = ((Ptr) GLdefs_257);
        {aRet = ((Ptr) GLdefs_202); goto lRet;}
l_138:
        rA2 = rNil;
        rA1 = rLit[128];
        (--rSp)->Val = ((Ptr) GLdefs_257);
        {aRet = ((Ptr) GLdefs_202); goto lRet;}
l_135:
        if ((rLit[109]->Val < rBsymb) || (rLit[109]->Val >= rBcons))    goto l_140;
        rA2 = rLit[127];
        rA1 = rNil;
        (--rSp)->Val = ((Ptr) GLdefs_257);
        {aRet = ((Ptr) GLdefs_202); goto lRet;}
l_140:
        rA2 = rLit[127];
        rA1 = rLit[128];
        (--rSp)->Val = ((Ptr) GLdefs_257);
        {aRet = ((Ptr) GLdefs_202); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdefs_257() {       /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[110]->Val = (rSp + 6)->Val;
        rLit[110]->Val = (rSp + 7)->Val;
        rLit[121]->Val = (rSp + 8)->Val;
        rLit[16]->Val = (rSp + 9)->Val;
        rLit[109]->Val = (rSp + 10)->Val;
        rLit[108]->Val = (rSp + 11)->Val;
        rLit[23]->Val = (rSp + 12)->Val;
        rSp += (Fix) 15;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_260() {       /* #:system:generate-tagbody */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rLit[16]->Val;
        rLit[16]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[129];
        (--rSp)->Val = ((Ptr) GLdefs_260);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rA1 == rNil)        goto l_101;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[53];
l_105:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_106;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        if ((rA1 < rBcons) || (rA1 >= GIecons)) rA1 = rNil;
        rSp->Val = rA1;
        if (rA1 == rNil)        goto l_106;
        goto l_105;
l_106:
        rA4 = rSp->Val;
        rSp += (Fix) 2;
        if (rA4 == rNil)        goto l_103;
        rA1 = rLit[16]->Val;
        {aRet = ((Ptr) GLdefs_261); goto lRet;}
l_103:
        (--rSp)->Val = ((Ptr) GLdefs_261);
        rA2 = rLit[16]->Val;
        rA1 = rLit[130];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        {aRet = ((Ptr) GLdefs_261); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_261() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[16]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_262() {       /* #:system:generate-block */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = GIa2;
        (--rSp)->Val = rLit[16]->Val;
        rLit[16]->Val = GIa1;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[131];
        (--rSp)->Val = ((Ptr) GLdefs_262);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLdefs_263);
        (--rSp)->Val = rLit[132];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLdefs_265);
        {aRet = ((Ptr) GLdefs_266); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_265() {       /* call_defs_264 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLdefs_263); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_263() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYdefs; rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       goto l_101;
        (--rSp)->Val = ((Ptr) GLdefs_267);
        (--rSp)->Val = rLit[133];
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[13]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
l_101:
        GIa1 = rLit[13]->Val;
        {aRet = ((Ptr) GLdefs_267); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_267() {       /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[16]->Val = (rSp + 6)->Val;
        rLit[13]->Val = (rSp + 7)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_266() {       /* #:system:generate-block-aux */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rLit[16]->Val;
        rLit[16]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[134];
        (--rSp)->Val = ((Ptr) GLdefs_266);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if ((long) rA1 >= (long) GIbcons)       goto l_101;
        rA1 = rNil;
        {aRet = ((Ptr) GLdefs_268); goto lRet;}
l_101:
        rA4 = rA1->Val;
        if (rA4 == rLit[135])   goto l_105;
        if (rA4 != rLit[136])   goto l_103;
l_105:
        rA1 = rLit[53];
        GIa2 = rLit[132];
        {aRet = (rLit[137] + 2)->Val; goto lRet;}
l_103:
        (--rSp)->Val = rA1;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLdefs_269); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_269() {       /* 106 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLdefs_270); goto lRet;}
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLdefs_272);
        {aRet = ((Ptr) GLdefs_266); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_272() {       /* call_defs_271 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIsp->Val = rA1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLdefs_270); goto lRet;}
        {aRet = ((Ptr) GLdefs_269); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_270() {       /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLdefs_268); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_268() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[16]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_273() {       /* prog */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[138];
        (--rSp)->Val = ((Ptr) GLdefs_273);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = (rA1 + 1)->Val;
        if (rA1->Val == rNil)   {aRet = ((Ptr) GLdefs_274); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_275);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_277);
        {aRet = ((Ptr) GLdefs_260); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_277() {       /* call_defs_276 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_275() {       /* 103 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        {aRet = ((Ptr) GLdefs_278); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_274() {       /* 101 */
   {    register Ptr aRet;
        GIa1 = (GIa1 + 1)->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_280);
        {aRet = ((Ptr) GLdefs_260); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_280() {       /* call_defs_279 */
   {    register Ptr aRet, rA1, rA2;
        rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = GYdefs[33];
        GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = rA1;
        {aRet = ((Ptr) GLdefs_278); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdefs_278() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_282);
        {aRet = ((Ptr) GLdefs_262); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_282() {       /* call_defs_281 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[13]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_283() {       /* prog* */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rLit[13]->Val;
        rLit[13]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[139];
        (--rSp)->Val = ((Ptr) GLdefs_283);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = (rA1 + 1)->Val;
        if (rA1->Val == rNil)   {aRet = ((Ptr) GLdefs_284); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_285);
        (--rSp)->Val = rLit[140];
        (--rSp)->Val = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_287);
        {aRet = ((Ptr) GLdefs_260); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_287() {       /* call_defs_286 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_285() {       /* 103 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        {aRet = ((Ptr) GLdefs_288); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_284() {       /* 101 */
   {    register Ptr aRet;
        GIa1 = (GIa1 + 1)->Val;
        (--GIsp)->Val = ((Ptr) GLdefs_290);
        {aRet = ((Ptr) GLdefs_260); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_290() {       /* call_defs_289 */
   {    register Ptr aRet, rA1, rA2;
        rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = GYdefs[33];
        GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = rA1;
        {aRet = ((Ptr) GLdefs_288); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdefs_288() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_292);
        {aRet = ((Ptr) GLdefs_262); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_292() {       /* call_defs_291 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[13]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_293() {       /* do */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rNil;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        GIa2 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rLit[141]->Val;
        rLit[141]->Val = rA1;
        (--rSp)->Val = rLit[142]->Val;
        rLit[142]->Val = rA4;
        (--rSp)->Val = rLit[143]->Val;
        rLit[143]->Val = GIa2;
        (--rSp)->Val = rLit[16]->Val;
        rLit[16]->Val = rA3;
        (--rSp)->Val = (Ptr) 4;
        (--rSp)->Val = rLit[144];
        (--rSp)->Val = ((Ptr) GLdefs_293);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLdefs_294);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLdefs_295); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_295() {       /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLdefs_296); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLdefs_297);
        rA4 = (rSp + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_297() {       /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdefs_295); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_296() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLdefs_298);
        (--rSp)->Val = rLit[145];
        (--rSp)->Val = rLit[142]->Val;
        (--rSp)->Val = ((Ptr) GLdefs_299);
        rA1 = rLit[16]->Val;
        (--rSp)->Val = ((Ptr) GLdefs_301);
        {aRet = ((Ptr) GLdefs_260); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_301() {       /* call_defs_300 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GYdefs[141]->Val;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLdefs_302); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_302() {       /* 107 */
   {    register Ptr aRet, rSp, rA3, rA4, rBcons;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLdefs_303); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        rA4 = (rA4 + 1)->Val;
        if ((long) (rA4 + 1)->Val < (long) rBcons)      goto l_109;
        (--rSp)->Val = ((Ptr) GLdefs_304);
        rA3 = (rSp + 1)->Val;
        (--rSp)->Val = rA3->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        (--rSp)->Val = rA3->Val;
        rA4 = (Ptr) 2;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
l_109:
        GIa1 = GInil;
        {aRet = ((Ptr) GLdefs_304); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_304() {       /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLdefs_306);
        {aRet = (GYdefs[146] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_306() {       /* call_defs_305 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLdefs_302); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_303() {       /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rLit[0]->Val;
        rLit[0]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[147];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rA1 == GInil)       {aRet = ((Ptr) GLdefs_307); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_308);
        GIa2 = rA1;
        rA1 = rLit[148];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_308() {       /* 114 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLdefs_309); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_307() {       /* 112 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLdefs_309); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_309() {       /* 113 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[0]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        (--rSp)->Val = GIa4;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_299() {       /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_298() {       /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa2 = rLit[143]->Val;
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_294() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_311);
        {aRet = ((Ptr) GLdefs_262); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_311() {       /* call_defs_310 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[16]->Val = (rSp + 6)->Val;
        rLit[143]->Val = (rSp + 7)->Val;
        rLit[142]->Val = (rSp + 8)->Val;
        rLit[141]->Val = (rSp + 9)->Val;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_312() {       /* do* */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rNil;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        GIa2 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rLit[141]->Val;
        rLit[141]->Val = rA1;
        (--rSp)->Val = rLit[142]->Val;
        rLit[142]->Val = rA4;
        (--rSp)->Val = rLit[143]->Val;
        rLit[143]->Val = GIa2;
        (--rSp)->Val = rLit[16]->Val;
        rLit[16]->Val = rA3;
        (--rSp)->Val = (Ptr) 4;
        (--rSp)->Val = rLit[149];
        (--rSp)->Val = ((Ptr) GLdefs_312);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLdefs_313);
        (--rSp)->Val = rLit[140];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLdefs_314); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_314() {       /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLdefs_315); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLdefs_316);
        rA4 = (rSp + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_316() {       /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdefs_314); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_315() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLdefs_317);
        (--rSp)->Val = rLit[145];
        (--rSp)->Val = rLit[142]->Val;
        (--rSp)->Val = ((Ptr) GLdefs_318);
        rA1 = rLit[16]->Val;
        (--rSp)->Val = ((Ptr) GLdefs_320);
        {aRet = ((Ptr) GLdefs_260); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_320() {       /* call_defs_319 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GYdefs[141]->Val;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLdefs_321); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_321() {       /* 107 */
   {    register Ptr aRet, rSp, rA3, rA4, rBcons;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLdefs_322); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        rA4 = (rA4 + 1)->Val;
        if ((long) (rA4 + 1)->Val < (long) rBcons)      goto l_109;
        (--rSp)->Val = ((Ptr) GLdefs_323);
        rA3 = (rSp + 1)->Val;
        (--rSp)->Val = rA3->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        (--rSp)->Val = rA3->Val;
        rA4 = (Ptr) 2;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
l_109:
        GIa1 = GInil;
        {aRet = ((Ptr) GLdefs_323); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_323() {       /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLdefs_325);
        {aRet = (GYdefs[146] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_325() {       /* call_defs_324 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLdefs_321); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_322() {       /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rLit[0]->Val;
        rLit[0]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[150];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rA1 == GInil)       {aRet = ((Ptr) GLdefs_326); goto lRet;}
        (--rSp)->Val = ((Ptr) GLdefs_327);
        GIa2 = rA1;
        rA1 = rLit[151];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_327() {       /* 114 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLdefs_328); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_326() {       /* 112 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLdefs_328); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_328() {       /* 113 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[0]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        (--rSp)->Val = GIa4;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_318() {       /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_317() {       /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa2 = rLit[143]->Val;
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 4;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_313() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLdefs_330);
        {aRet = ((Ptr) GLdefs_262); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_330() {       /* call_defs_329 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[16]->Val = (rSp + 6)->Val;
        rLit[143]->Val = (rSp + 7)->Val;
        rLit[142]->Val = (rSp + 8)->Val;
        rLit[141]->Val = (rSp + 9)->Val;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_331() {       /* backtrack */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rNil;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rLit[102]->Val;
        rLit[102]->Val = rA1;
        (--rSp)->Val = rLit[141]->Val;
        rLit[141]->Val = rA4;
        (--rSp)->Val = rLit[16]->Val;
        rLit[16]->Val = rA3;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[152];
        (--rSp)->Val = ((Ptr) GLdefs_331);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if ((rA1 >= GIbsymb) && (rA1 < GIbcons))        goto l_102;
        rA3 = rA1;
        GIa2 = rLit[153];
        rA1 = rLit[154];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GLdefs_332);
        (--rSp)->Val = rLit[155];
        (--rSp)->Val = rLit[154];
        if (rLit[141]->Val != rNil)     {aRet = ((Ptr) GLdefs_333); goto lRet;}
        (--rSp)->Val = rLit[16]->Val;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLdefs_334); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_334() {       /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYdefs; rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLdefs_335); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLdefs_336);
        (--rSp)->Val = rLit[155];
        (--rSp)->Val = rLit[102]->Val;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[156];
        rA4 = (Ptr) 4;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_336() {       /* 108 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdefs_334); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_335() {       /* 107 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        GIa4 = rA1;
        {aRet = ((Ptr) GLdefs_337); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_333() {       /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_338);
        (--rSp)->Val = ((Ptr) GLdefs_339);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = ((Ptr) GLdefs_340);
        (--rSp)->Val = ((Ptr) GLdefs_341);
        (--rSp)->Val = rLit[157];
        GIa2 = rLit[141]->Val;
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_341() {       /* 112 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_340() {       /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GYdefs[16]->Val;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLdefs_342); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_342() {       /* 113 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYdefs; rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLdefs_343); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLdefs_344);
        (--rSp)->Val = ((Ptr) GLdefs_345);
        (--rSp)->Val = rLit[155];
        (--rSp)->Val = rLit[102]->Val;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[158];
        rA4 = (Ptr) 4;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_345() {       /* 116 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefs_346);
        (--rSp)->Val = rLit[159];
        (--rSp)->Val = rLit[141]->Val;
        (--rSp)->Val = rLit[160];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_346() {       /* 117 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_344() {       /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLdefs_348);
        {aRet = (GYdefs[146] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_348() {       /* call_defs_347 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLdefs_342); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_343() {       /* 114 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_339() {       /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_338() {       /* 109 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLdefs_337); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_337() {       /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa4;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[37] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_332() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[16]->Val = (rSp + 6)->Val;
        rLit[141]->Val = (rSp + 7)->Val;
        rLit[102]->Val = (rSp + 8)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_349() {       /* catch-all-but */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rLit[16]->Val;
        rLit[16]->Val = rA4;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[161];
        (--rSp)->Val = ((Ptr) GLdefs_349);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLdefs_350);
        (--rSp)->Val = rLit[162];
        (--rSp)->Val = ((Ptr) GLdefs_351);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[163];
        (--rSp)->Val = ((Ptr) GLdefs_352);
        (--rSp)->Val = rLit[111];
        (--rSp)->Val = rLit[164];
        (--rSp)->Val = ((Ptr) GLdefs_353);
        (--rSp)->Val = rLit[165];
        (--rSp)->Val = rLit[155];
        (--rSp)->Val = ((Ptr) GLdefs_354);
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_354() {       /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_353() {       /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1;
        GIa2 = rLit[166];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[167];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_352() {       /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_351() {       /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[16]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_350() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYdefs[16]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_355() {       /* closure */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[168]->Val;
        rLit[168]->Val = GIa2;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[169];
        (--rSp)->Val = ((Ptr) GLdefs_355);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLdefs_356); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_356() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYdefs; rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLdefs_357); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLdefs_358);
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = ((Ptr) GLdefs_359);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_359() {       /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_358() {       /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdefs_356); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_357() {       /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYdefs; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        rA4 = rLit[168]->Val;
        rA4 = (rA4 + 1)->Val;
        rA3 = rLit[168]->Val;
        rA3 = (rA3 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = (rA3 + 1)->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[16]->Val;
        rLit[16]->Val = (rSp + 2)->Val;
        (--rSp)->Val = rLit[141]->Val;
        rLit[141]->Val = (rSp + 4)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[170];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLdefs_360);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = rLit[141]->Val;
        (--rSp)->Val = ((Ptr) GLdefs_361);
        (--rSp)->Val = rLit[5];
        {register Ptr aux;
                aux = (rSp + 23)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLdefs_362);
        (--rSp)->Val = rLit[31];
        GIa2 = rLit[16]->Val;
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 17)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 28)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLdefs_363); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_363() {       /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rBcons;
        rLit = GYdefs; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        if ((long) (rSp + 2)->Val < (long) rBcons)      {aRet = ((Ptr) GLdefs_364); goto lRet;}
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLdefs_364); goto lRet;}
        rA4 = (rSp + 2)->Val;
        (rSp + 2)->Val = (rA4 + 1)->Val;
        rA3 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA3 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rA3->Val;
        (--rSp)->Val = rLit[23]->Val;
        rLit[23]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[171];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLdefs_365);
        (--rSp)->Val = rLit[172];
        (--rSp)->Val = ((Ptr) GLdefs_366);
        (--rSp)->Val = rLit[173];
        (--rSp)->Val = ((Ptr) GLdefs_367);
        (--rSp)->Val = rLit[12];
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdefs_367() {       /* 112 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_366() {       /* 111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[23]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefs_365() {       /* 110 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        GYdefs[23]->Val = (rSp + 6)->Val;
        rSp += (Fix) 9;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLdefs_363); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_364() {       /* 109 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 3;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_362() {       /* 107 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefs_361() {       /* 106 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 11)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefs[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefs_360() {       /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefs; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[141]->Val = (rSp + 6)->Val;
        rLit[16]->Val = (rSp + 7)->Val;
        rSp += (Fix) 11;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[168]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDdefs_368() {       /* trace macroexpand */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,7,174,175);
  lRet:  return (aRet);}}

static Ptr GDdefs_369() {       /* trace macroexpand1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,176,174,175);
  lRet:  return (aRet);}}

static Ptr GDdefs_370() {       /* trace with */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,21,174,175);
  lRet:  return (aRet);}}

static Ptr GDdefs_371() {       /* trace resetfn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,79,174,177);
  lRet:  return (aRet);}}

static Ptr GDdefs_372() {       /* trace de */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,89,174,178);
  lRet:  return (aRet);}}

static Ptr GDdefs_373() {       /* trace df */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,91,174,178);
  lRet:  return (aRet);}}

static Ptr GDdefs_374() {       /* trace dm */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,93,174,178);
  lRet:  return (aRet);}}

static Ptr GDdefs_375() {       /* trace dmd */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,95,174,178);
  lRet:  return (aRet);}}

static Ptr GDdefs_376() {       /* trace defmacro */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,97,174,178);
  lRet:  return (aRet);}}

static Ptr GDdefs_377() {       /* trace defun */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,99,174,178);
  lRet:  return (aRet);}}

static Ptr GDdefs_378() {       /* trace ds */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,101,174,178);
  lRet:  return (aRet);}}

static Ptr GDdefs_379() {       /* trace letn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,179,174,175);
  lRet:  return (aRet);}}

static Ptr GDdefs_380() {       /* trace slet */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,180,174,175);
  lRet:  return (aRet);}}

static Ptr GDdefs_381() {       /* trace dynamic */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,181,174,178);
  lRet:  return (aRet);}}

static Ptr GDdefs_382() {       /* trace for */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,124,174,175);
  lRet:  return (aRet);}}

static Ptr GDdefs_383() {       /* trace prog */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,182,174,175);
  lRet:  return (aRet);}}

static Ptr GDdefs_384() {       /* trace prog* */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,183,174,175);
  lRet:  return (aRet);}}

static Ptr GDdefs_385() {       /* trace do */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,184,174,175);
  lRet:  return (aRet);}}

static Ptr GDdefs_386() {       /* trace do* */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,185,174,175);
  lRet:  return (aRet);}}

static Ptr GDdefs_387() {       /* trace backtrack */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,154,174,175);
  lRet:  return (aRet);}}

static Ptr GDdefs_388() {       /* trace catch-all-but */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,186,174,175);
  lRet:  return (aRet);}}

static Ptr GDdefs_389() {       /* trace closure */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefs,187,174,188);
  lRet:  return (aRet);}}

