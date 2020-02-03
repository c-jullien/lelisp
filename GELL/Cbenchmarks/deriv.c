/* GELL 15.26: source file for the module: "deriv" */
/*             translation done:           "Wed June 16 93 18:18:26 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "deriv.h" 

static Ptr GLderiv_1() {        /* check-deriv */
   {    register Ptr aRet, *rLit;
        rLit = GYderiv;
        GIa2 = rLit[0];
        GIa1 = rLit[1];
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLderiv_2() {        /* meter-deriv */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYderiv; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLderiv_3);
        (--rSp)->Val = rLit[3];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_3() {        /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLderiv_5);
        {aRet = ((Ptr) GLderiv_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_5() {        /* call_deriv_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYderiv; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[5];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_7() {        /* test-deriv */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 1)    {aRet = ((Ptr) GLderiv_8); goto lRet;}
        {aRet = ((Ptr) GLderiv_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLderiv_9() {        /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLderiv_11);
        {aRet = ((Ptr) GLderiv_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_11() {       /* call_deriv_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLderiv_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_8() {        /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLderiv_9); goto lRet;}}
        rA1 = GYderiv[6];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLderiv_12() {       /* deriv-aux */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYderiv; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = ((Ptr) GLderiv_14);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_14() {       /* call_deriv_13 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYderiv[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_15() {       /* deriv */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYderiv; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((long) rA1 >= (long) GIbcons)       goto l_101;
        if (rA1 != rLit[10])    goto l_103;
        rA1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = (Ptr) 0;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rA1->Val != rLit[11])       {aRet = ((Ptr) GLderiv_16); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLderiv_17); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLderiv_17() {       /* 107 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLderiv_18); goto lRet;}
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLderiv_20);
        {aRet = (GYderiv[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLderiv_20() {       /* call_deriv_19 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rSp->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rSp->Val = rA1;
        {aRet = ((Ptr) GLderiv_17); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLderiv_18() {       /* 108 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        rA2 = rA1;
        rA1 = GYderiv[11];
        rSp += (Fix) 1;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLderiv_16() {       /* 105 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1->Val != GYderiv[12])    {aRet = ((Ptr) GLderiv_21); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLderiv_22); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_22() {       /* 111 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLderiv_23); goto lRet;}
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLderiv_25);
        {aRet = (GYderiv[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLderiv_25() {       /* call_deriv_24 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rSp->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rSp->Val = rA1;
        {aRet = ((Ptr) GLderiv_22); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLderiv_23() {       /* 112 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        rA2 = rA1;
        rA1 = GYderiv[12];
        rSp += (Fix) 1;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLderiv_21() {       /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYderiv; rSp = GIsp; rA1 = GIa1;
        if (rA1->Val != rLit[13])       {aRet = ((Ptr) GLderiv_26); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[13];
        (--rSp)->Val = rA1;
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLderiv_27); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_27() {       /* 116 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLderiv_28); goto lRet;}
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLderiv_30);
        {aRet = ((Ptr) GLderiv_12); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLderiv_30() {       /* call_deriv_29 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rSp->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rSp->Val = rA1;
        {aRet = ((Ptr) GLderiv_27); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLderiv_28() {       /* 117 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYderiv; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        rA2 = rA1;
        rA1 = rLit[11];
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLderiv_26() {       /* 113 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYderiv; rSp = GIsp; rA1 = GIa1;
        if (rA1->Val != rLit[7])        {aRet = ((Ptr) GLderiv_31); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = ((Ptr) GLderiv_32);
        (--rSp)->Val = rLit[7];
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLderiv_34);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLderiv_34() {       /* call_deriv_33 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = (rSp + 5)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 3;
        {aRet = (GYderiv[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLderiv_32() {       /* 121 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYderiv; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLderiv_35);
        (--rSp)->Val = rLit[7];
        rA4 = (rSp + 5)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLderiv_36);
        (--rSp)->Val = rLit[13];
        rA3 = (rSp + 8)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        (--rSp)->Val = rA3->Val;
        rA3 = (rSp + 9)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        (--rSp)->Val = rA3->Val;
        rA1 = (rSp + 10)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLderiv_38);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLderiv_38() {       /* call_deriv_37 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYderiv[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_36() {       /* 123 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYderiv[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_35() {       /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYderiv[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_31() {       /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYderiv[14];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_6() {        /* deriv-run */
   {    register Ptr aRet;
        GIa4 = (Ptr) 5000;
        {aRet = ((Ptr) GLderiv_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLderiv_40() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYderiv; rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa1 = rLit[15];
        (--rSp)->Val = ((Ptr) GLderiv_42);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_42() {       /* call_deriv_41 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        {aRet = ((Ptr) GLderiv_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLderiv_39() {       /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLderiv_40); goto lRet;}}
        GIa1 = GYderiv[6];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GDderiv_43() {       /* trace check-deriv */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYderiv,16,17,18);
  lRet:  return (aRet);}}

static Ptr GDderiv_44() {       /* trace meter-deriv */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYderiv,19,17,18);
  lRet:  return (aRet);}}

static Ptr GDderiv_45() {       /* trace test-deriv */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYderiv,20,17,21);
  lRet:  return (aRet);}}

static Ptr GDderiv_46() {       /* trace deriv */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYderiv,8,17,21);
  lRet:  return (aRet);}}

