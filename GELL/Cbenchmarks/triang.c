/* GELL 15.26: source file for the module: "triang" */
/*             translation done:           "Wed June 16 93 18:18:33 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "triang.h" 

static Ptr GLtriang_1() {       /* check-triang */
   {    register Ptr aRet, *rLit;
        rLit = GYtriang;
        GIa2 = GInil;
        GIa1 = rLit[0];
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtriang_2() {       /* meter-triang */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtriang; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtriang_3);
        (--rSp)->Val = rLit[2];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtriang_3() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (Ptr) 22;
        (--rSp)->Val = ((Ptr) GLtriang_5);
        {aRet = ((Ptr) GLtriang_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtriang_5() {       /* call_triang_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtriang; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[4];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtriang_7() {       /* test-triang */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLtriang_8); goto lRet;}
        rA1 = (Ptr) 22;
        {aRet = ((Ptr) GLtriang_6); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLtriang_9() {       /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = (Ptr) 22;
        (--rSp)->Val = ((Ptr) GLtriang_11);
        {aRet = ((Ptr) GLtriang_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtriang_11() {      /* call_triang_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLtriang_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtriang_8() {       /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLtriang_9); goto lRet;}}
        rA1 = GYtriang[5];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtriang_12() {      /* vector-to-list */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
l_101:
        if ((Fix) (rSp->Val) < (Fix) 0) goto l_102;
        rA1 = ((rSp + 2)->Val->Val + 2 + (Fix) (rSp->Val))->Val;
        rA2 = (rSp + 1)->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        (rSp + 1)->Val = rA1;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rSp->Val = rA4;
        goto l_101;
l_102:
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLtriang_13() {      /* triang-last-position */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = (Ptr) 1;
l_101:
        if (rSp->Val == (Ptr) 16)       goto l_102;
        rA4 = (GYtriang[6]->Val->Val + 2 + (Fix) (rSp->Val))->Val;
        if ((Ptr) 1 == rA4)     goto l_102;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rSp->Val = rA4;
        goto l_101;
l_102:
        if (rSp->Val != (Ptr) 16)       goto l_103;
        rA1 = (Ptr) 0;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtriang_14() {      /* triang-try */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        if (rA2 != (Ptr) 14)    {aRet = ((Ptr) GLtriang_15); goto lRet;}
        (--rSp)->Val = ((Ptr) GLtriang_17);
        {aRet = ((Ptr) GLtriang_13); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtriang_17() {      /* call_triang_16 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYtriang; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rA1;
        rA2 = rLit[7]->Val;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 != rNil)        goto l_104;
        rA2 = rLit[7]->Val;
        rA1 = rSp->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rLit[7]->Val = rA1;
l_104:
        rSp += (Fix) 1;
        rA1 = rLit[8]->Val;
        (--rSp)->Val = ((Ptr) GLtriang_19);
        {aRet = ((Ptr) GLtriang_12); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtriang_19() {      /* call_triang_18 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYtriang; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rLit[9]->Val;
        rA1 = (rA1 + 1)->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rLit[9]->Val = rA1;
        rA1 = rLit[5];
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtriang_15() {      /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYtriang; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rLit[10]->Val->Val + 2 + (Fix) (rA1))->Val;
        rA4 = (rLit[6]->Val->Val + 2 + (Fix) (rA4))->Val;
        if ((Ptr) 1 != rA4)     {aRet = ((Ptr) GLtriang_20); goto lRet;}
        rA4 = (rLit[11]->Val->Val + 2 + (Fix) (rA1))->Val;
        rA4 = (rLit[6]->Val->Val + 2 + (Fix) (rA4))->Val;
        if ((Ptr) 1 != rA4)     {aRet = ((Ptr) GLtriang_20); goto lRet;}
        rA4 = (rLit[12]->Val->Val + 2 + (Fix) (rA1))->Val;
        rA4 = (rLit[6]->Val->Val + 2 + (Fix) (rA4))->Val;
        if ((Ptr) 0 != rA4)     {aRet = ((Ptr) GLtriang_20); goto lRet;}
        (--rSp)->Val = rLit[6]->Val;
        rA4 = (rLit[10]->Val->Val + 2 + (Fix) (rA1))->Val;
        (--rSp)->Val = (Ptr) 0;
        ((rSp + 1)->Val->Val + 2 + (Fix) (rA4))->Val = rSp->Val;
        rSp += (Fix) 2;
        (--rSp)->Val = rLit[6]->Val;
        rA4 = (rLit[11]->Val->Val + 2 + (Fix) (rA1))->Val;
        (--rSp)->Val = (Ptr) 0;
        ((rSp + 1)->Val->Val + 2 + (Fix) (rA4))->Val = rSp->Val;
        rSp += (Fix) 2;
        (--rSp)->Val = rLit[6]->Val;
        rA4 = (rLit[12]->Val->Val + 2 + (Fix) (rA1))->Val;
        (--rSp)->Val = (Ptr) 1;
        ((rSp + 1)->Val->Val + 2 + (Fix) (rA4))->Val = rSp->Val;
        rSp += (Fix) 2;
        (--rSp)->Val = rLit[8]->Val;
        (rSp->Val->Val + 2 + (Fix) (GIa2))->Val = rA1;
        rSp += (Fix) 1;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLtriang_21); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtriang_21() {      /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp + 1)->Val == (Ptr) 36) {aRet = ((Ptr) GLtriang_22); goto lRet;}
        GIa2 = rSp->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLtriang_24);
        {aRet = ((Ptr) GLtriang_14); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtriang_24() {      /* call_triang_23 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLtriang_22); goto lRet;}
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 1)->Val = rA4;
        {aRet = ((Ptr) GLtriang_21); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLtriang_22() {      /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYtriang; rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 2;
        (--rSp)->Val = rLit[6]->Val;
        rA4 = (rLit[10]->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        (--rSp)->Val = (Ptr) 1;
        ((rSp + 1)->Val->Val + 2 + (Fix) (rA4))->Val = rSp->Val;
        rSp += (Fix) 2;
        (--rSp)->Val = rLit[6]->Val;
        rA4 = (rLit[11]->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        (--rSp)->Val = (Ptr) 1;
        ((rSp + 1)->Val->Val + 2 + (Fix) (rA4))->Val = rSp->Val;
        rSp += (Fix) 2;
        (--rSp)->Val = rLit[6]->Val;
        rA4 = (rLit[12]->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        (--rSp)->Val = (Ptr) 0;
        ((rSp + 1)->Val->Val + 2 + (Fix) (rA4))->Val = rSp->Val;
        rSp += (Fix) 2;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtriang_20() {      /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtriang_6() {       /* gogogo */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYtriang; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[7]->Val;
        rLit[7]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[9]->Val;
        rLit[9]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[13];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa2 = (Ptr) 1;
        (--rSp)->Val = ((Ptr) GLtriang_26);
        {aRet = ((Ptr) GLtriang_14); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtriang_26() {      /* call_triang_25 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtriang; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[9]->Val = (rSp + 6)->Val;
        rLit[7]->Val = (rSp + 7)->Val;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDtriang_27() {      /* trace check-triang */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtriang,15,16,17);
  lRet:  return (aRet);}}

static Ptr GDtriang_28() {      /* trace meter-triang */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtriang,18,16,17);
  lRet:  return (aRet);}}

static Ptr GDtriang_29() {      /* trace test-triang */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtriang,19,16,20);
  lRet:  return (aRet);}}

