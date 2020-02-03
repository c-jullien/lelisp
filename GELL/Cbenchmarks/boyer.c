/* GELL 15.26: source file for the module: "boyer" */
/*             translation done:           "Wed June 16 93 18:18:19 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "boyer.h" 

static Ptr GLboyer_1() {        /* check-boyer */
   {    register Ptr aRet, *rLit;
        rLit = GYboyer;
        GIa2 = rLit[0];
        GIa1 = rLit[1];
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLboyer_2() {        /* meter-boyer */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYboyer; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLboyer_3);
        (--rSp)->Val = rLit[3];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLboyer_3() {        /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLboyer_5);
        {aRet = ((Ptr) GLboyer_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLboyer_5() {        /* call_boyer_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYboyer; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[5];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLboyer_7() {        /* test-boyer */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 1)    {aRet = ((Ptr) GLboyer_8); goto lRet;}
        {aRet = ((Ptr) GLboyer_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLboyer_9() {        /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLboyer_11);
        {aRet = ((Ptr) GLboyer_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLboyer_11() {       /* call_boyer_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLboyer_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLboyer_8() {        /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLboyer_9); goto lRet;}}
        rA1 = GYboyer[0];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLboyer_12() {       /* add-lemma */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rBcons;
        rLit = GYboyer; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rBcons = GIbcons;
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLboyer_13); goto lRet;}
        if (rA1->Val != rLit[6])        {aRet = ((Ptr) GLboyer_13); goto lRet;}
        rA4 = (rA1 + 1)->Val;
        if ((long) rA4->Val < (long) rBcons)    {aRet = ((Ptr) GLboyer_13); goto lRet;}
        rA4 = (rA1 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = rA1;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        GIa2 = rLit[7];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLboyer_15);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLboyer_15() {       /* call_boyer_14 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        GIa3 = rSp->Val;
        rA2 = rA1;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (GYboyer[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_13() {       /* 101 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = GInil;
        GIa2 = rA1;
        rA1 = GYboyer[10];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLboyer_16() {       /* add-lemma-lst */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_101;
        rA1 = GYboyer[0];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLboyer_18);
        {aRet = ((Ptr) GLboyer_12); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLboyer_18() {       /* call_boyer_17 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLboyer_16); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLboyer_19() {       /* apply-subst */
   {    register Ptr aRet, rSp, rA1, rA2, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        if ((long) rA2 >= (long) rBcons)        goto l_101;
        (--rSp)->Val = rA2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, rNil);
        GYboyer[11]->Val = rA1;
        if (rA1 == rNil)        goto l_103;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = rA2->Val;
        rA2 = (rA2 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLboyer_21);
        {aRet = ((Ptr) GLboyer_22); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_21() {       /* call_boyer_20 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 1;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_22() {       /* apply-subst-lst */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA2 != rNil)        goto l_101;
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA2 = rA2->Val;
        (--rSp)->Val = ((Ptr) GLboyer_24);
        {aRet = ((Ptr) GLboyer_19); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_24() {       /* call_boyer_23 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA1;
        rA2 = (rSp + 2)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLboyer_26);
        {aRet = ((Ptr) GLboyer_22); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_26() {       /* call_boyer_25 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 2;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_27() {       /* falsep */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYboyer; rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        rA2 = rLit[12];
        (--rSp)->Val = ((Ptr) GLboyer_29);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_29() {       /* call_boyer_28 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        GIa2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (GYboyer[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLboyer_30() {       /* one-way-unify */
   {    register Ptr aRet;
        GYboyer[14]->Val = GInil;
        {aRet = ((Ptr) GLboyer_31); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLboyer_31() {       /* one-way-unify1 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYboyer; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((long) rA2 >= (long) rBcons)        goto l_101;
        (--rSp)->Val = rA2;
        rA2 = rLit[14]->Val;
        rA1 = (rSp++)->Val;
        rA1 = llrt_call_assq (rA1, rA2, rBcons, rNil);
        rLit[11]->Val = rA1;
        if (rA1 == rNil)        goto l_103;
        rA2 = (rA1 + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
l_103:
        rA2 = rSp->Val;
        rA1 = (rSp + 1)->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rA2 = rLit[14]->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rLit[14]->Val = rA1;
        rA1 = rLit[0];
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if ((long) rA1 >= (long) rBcons)        goto l_105;
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        if (rA1->Val != rA2->Val)       goto l_107;
        rA2 = (rA2 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLboyer_32); goto lRet;}
l_107:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_32() {       /* one-way-unify1-lst */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_101;
        rA1 = GYboyer[0];
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA2 = rA2->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLboyer_34);
        {aRet = ((Ptr) GLboyer_31); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_34() {       /* call_boyer_33 */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 == rNil)        goto l_103;
        rA1 = rSp->Val;
        rA2 = (rSp + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLboyer_32); goto lRet;}
l_103:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_35() {       /* rewrite */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((long) rA1 >= (long) GIbcons)       goto l_101;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLboyer_37);
        {aRet = ((Ptr) GLboyer_38); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLboyer_37() {       /* call_boyer_36 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYboyer; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        (--rSp)->Val = rA1;
        rA1 = (rSp + 1)->Val;
        rA2 = rLit[7];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLboyer_40);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_40() {       /* call_boyer_39 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLboyer_41); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLboyer_38() {       /* rewrite-args */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_101;
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLboyer_43);
        {aRet = ((Ptr) GLboyer_35); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLboyer_43() {       /* call_boyer_42 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLboyer_45);
        {aRet = ((Ptr) GLboyer_38); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLboyer_45() {       /* call_boyer_44 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 1;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_41() {       /* rewrite-with-lemmas */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        if (rA2 != GInil)       goto l_101;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA2 = rA2->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        (--rSp)->Val = ((Ptr) GLboyer_47);
        {aRet = ((Ptr) GLboyer_30); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_47() {       /* call_boyer_46 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 == GInil)       {aRet = ((Ptr) GLboyer_48); goto lRet;}
        rA2 = (rSp + 1)->Val;
        rA2 = rA2->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        rA1 = GYboyer[14]->Val;
        (--rSp)->Val = ((Ptr) GLboyer_50);
        {aRet = ((Ptr) GLboyer_19); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_50() {       /* call_boyer_49 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLboyer_35); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLboyer_48() {       /* 103 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        rA2 = (rSp + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLboyer_41); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_51() {       /* boyer-setup */
   {    register Ptr aRet;
        GIa1 = GYboyer[15];
        {aRet = ((Ptr) GLboyer_16); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLboyer_52() {       /* tautologyp */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLboyer_54);
        {aRet = ((Ptr) GLboyer_55); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLboyer_54() {       /* call_boyer_53 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        rA1 = GYboyer[0];
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa2 = (rSp + 2)->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLboyer_57);
        {aRet = ((Ptr) GLboyer_27); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLboyer_57() {       /* call_boyer_56 */
   {    register Ptr aRet, rSp, rA1, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_103;
        rA1 = rNil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        if ((long) rSp->Val >= (long) GIbcons)  goto l_105;
        rA1 = rNil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        rA4 = rSp->Val;
        if (rA4->Val != GYboyer[16])    {aRet = ((Ptr) GLboyer_58); goto lRet;}
        rA1 = (rA4 + 1)->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLboyer_60);
        {aRet = ((Ptr) GLboyer_55); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLboyer_60() {       /* call_boyer_59 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 == GInil)       goto l_109;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        GIa3 = (rSp + 2)->Val;
        rA2 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLboyer_52); goto lRet;}
l_109:
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA2 = (rSp + 2)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLboyer_62);
        {aRet = ((Ptr) GLboyer_27); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_62() {       /* call_boyer_61 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rNil = GInil;
        if (rA1 == rNil)        goto l_111;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA3 = (rSp + 2)->Val;
        rA2 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLboyer_52); goto lRet;}
l_111:
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = rA1->Val;
        rA1 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA2 = (rSp + 2)->Val;
        rA1 = rA1->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rA3 = (rSp + 3)->Val;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLboyer_64);
        {aRet = ((Ptr) GLboyer_52); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLboyer_64() {       /* call_boyer_63 */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 == rNil)        {rSp += (Fix) 3; aRet = (rSp++)->Val; goto lRet;}
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = rA1->Val;
        rA1 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA2 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        GIa3 = rA1;
        rA2 = (rSp + 2)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLboyer_52); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_58() {       /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLboyer_65() {       /* tautp */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLboyer_67);
        {aRet = ((Ptr) GLboyer_35); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLboyer_67() {       /* call_boyer_66 */
   {    register Ptr aRet, rNil;
        rNil = GInil;
        GIa3 = rNil;
        GIa2 = rNil;
        {aRet = ((Ptr) GLboyer_52); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLboyer_6() {        /* boyer */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYboyer; rSp = GIsp;
        GIa2 = rLit[17];
        GIa1 = rLit[18];
        (--rSp)->Val = ((Ptr) GLboyer_65);
        {aRet = ((Ptr) GLboyer_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLboyer_55() {       /* truep */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYboyer; rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        rA2 = rLit[19];
        (--rSp)->Val = ((Ptr) GLboyer_69);
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLboyer_69() {       /* call_boyer_68 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        GIa2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (GYboyer[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GDboyer_70() {       /* trace check-boyer */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYboyer,20,21,22);
  lRet:  return (aRet);}}

static Ptr GDboyer_71() {       /* trace meter-boyer */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYboyer,23,21,22);
  lRet:  return (aRet);}}

static Ptr GDboyer_72() {       /* trace test-boyer */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYboyer,24,21,25);
  lRet:  return (aRet);}}

static Ptr GDboyer_73() {       /* trace boyer-setup */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYboyer,26,21,22);
  lRet:  return (aRet);}}

