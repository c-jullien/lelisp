/* GELL 15.26: source file for the module: "takr" */
/*             translation done:           "Wed June 16 93 18:18:09 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "takr.h" 

static Ptr GLtakr_1() { /* check-takr */
   {    register Ptr aRet, *rLit;
        rLit = GYtakr;
        GIa2 = (Ptr) 7;
        GIa1 = rLit[0];
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtakr_2() { /* meter-takr */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtakr; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtakr_3);
        (--rSp)->Val = rLit[2];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtakr_3() { /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (Ptr) 6;
        GIa2 = (Ptr) 12;
        GIa1 = (Ptr) 18;
        (--rSp)->Val = ((Ptr) GLtakr_5);
        {aRet = ((Ptr) GLtakr_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtakr_5() { /* call_takr_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtakr; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[4];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtakr_7() { /* test-takr */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLtakr_8); goto lRet;}
        GIa3 = (Ptr) 6;
        GIa2 = (Ptr) 12;
        rA1 = (Ptr) 18;
        {aRet = ((Ptr) GLtakr_6); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_9() { /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa3 = (Ptr) 6;
        GIa2 = (Ptr) 12;
        rA1 = (Ptr) 18;
        (--rSp)->Val = ((Ptr) GLtakr_11);
        {aRet = ((Ptr) GLtakr_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_11() {        /* call_takr_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLtakr_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtakr_8() { /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLtakr_9); goto lRet;}}
        rA1 = GYtakr[5];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_6() { /* takr */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_13);
        {aRet = ((Ptr) GLtakr_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_13() {        /* call_takr_12 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_16);
        {aRet = ((Ptr) GLtakr_17); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_16() {        /* call_takr_15 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_19);
        {aRet = ((Ptr) GLtakr_20); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_19() {        /* call_takr_18 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_21); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_21() {        /* tak1 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_23);
        {aRet = ((Ptr) GLtakr_24); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_23() {        /* call_takr_22 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_26);
        {aRet = ((Ptr) GLtakr_27); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_26() {        /* call_takr_25 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_29);
        {aRet = ((Ptr) GLtakr_30); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_29() {        /* call_takr_28 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_31); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_31() {        /* tak2 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_33);
        {aRet = ((Ptr) GLtakr_17); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_33() {        /* call_takr_32 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_35);
        {aRet = ((Ptr) GLtakr_36); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_35() {        /* call_takr_34 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_38);
        {aRet = ((Ptr) GLtakr_39); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_38() {        /* call_takr_37 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_40); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_40() {        /* tak3 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_42);
        {aRet = ((Ptr) GLtakr_43); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_42() {        /* call_takr_41 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_45);
        {aRet = ((Ptr) GLtakr_46); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_45() {        /* call_takr_44 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_48);
        {aRet = ((Ptr) GLtakr_49); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_48() {        /* call_takr_47 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_50); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_50() {        /* tak4 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_52);
        {aRet = ((Ptr) GLtakr_53); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_52() {        /* call_takr_51 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_55);
        {aRet = ((Ptr) GLtakr_56); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_55() {        /* call_takr_54 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_58);
        {aRet = ((Ptr) GLtakr_53); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_58() {        /* call_takr_57 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_59); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_59() {        /* tak5 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_61);
        {aRet = ((Ptr) GLtakr_27); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_61() {        /* call_takr_60 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_63);
        {aRet = ((Ptr) GLtakr_64); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_63() {        /* call_takr_62 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_66);
        {aRet = ((Ptr) GLtakr_31); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_66() {        /* call_takr_65 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_67); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_67() {        /* tak6 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_69);
        {aRet = ((Ptr) GLtakr_70); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_69() {        /* call_takr_68 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_72);
        {aRet = ((Ptr) GLtakr_73); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_72() {        /* call_takr_71 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_75);
        {aRet = ((Ptr) GLtakr_76); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_75() {        /* call_takr_74 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_77); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_77() {        /* tak7 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_79);
        {aRet = ((Ptr) GLtakr_80); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_79() {        /* call_takr_78 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_82);
        {aRet = ((Ptr) GLtakr_83); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_82() {        /* call_takr_81 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_85);
        {aRet = ((Ptr) GLtakr_86); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_85() {        /* call_takr_84 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_87); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_87() {        /* tak8 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_89);
        {aRet = ((Ptr) GLtakr_36); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_89() {        /* call_takr_88 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_91);
        {aRet = ((Ptr) GLtakr_92); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_91() {        /* call_takr_90 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_94);
        {aRet = ((Ptr) GLtakr_95); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_94() {        /* call_takr_93 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_96); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_96() {        /* tak9 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_98);
        {aRet = ((Ptr) GLtakr_99); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_98() {        /* call_takr_97 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_101);
        {aRet = ((Ptr) GLtakr_102); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_101() {       /* call_takr_100 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_104);
        {aRet = ((Ptr) GLtakr_99); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_104() {       /* call_takr_103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_102); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_102() {       /* tak10 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_106);
        {aRet = ((Ptr) GLtakr_77); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_106() {       /* call_takr_105 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_108);
        {aRet = ((Ptr) GLtakr_109); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_108() {       /* call_takr_107 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_111);
        {aRet = ((Ptr) GLtakr_112); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_111() {       /* call_takr_110 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_17); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_17() {        /* tak11 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_114);
        {aRet = ((Ptr) GLtakr_46); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_114() {       /* call_takr_113 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_116);
        {aRet = ((Ptr) GLtakr_117); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_116() {       /* call_takr_115 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_119);
        {aRet = ((Ptr) GLtakr_50); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_119() {       /* call_takr_118 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_120); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_120() {       /* tak12 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_122);
        {aRet = ((Ptr) GLtakr_123); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_122() {       /* call_takr_121 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_125);
        {aRet = ((Ptr) GLtakr_126); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_125() {       /* call_takr_124 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_128);
        {aRet = ((Ptr) GLtakr_109); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_128() {       /* call_takr_127 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_129); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_129() {       /* tak13 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_131);
        {aRet = ((Ptr) GLtakr_132); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_131() {       /* call_takr_130 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_134);
        {aRet = ((Ptr) GLtakr_135); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_134() {       /* call_takr_133 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_137);
        {aRet = ((Ptr) GLtakr_138); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_137() {       /* call_takr_136 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_139); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_139() {       /* tak14 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_141);
        {aRet = ((Ptr) GLtakr_56); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_141() {       /* call_takr_140 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_143);
        {aRet = ((Ptr) GLtakr_144); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_143() {       /* call_takr_142 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_146);
        {aRet = ((Ptr) GLtakr_56); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_146() {       /* call_takr_145 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_147); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_147() {       /* tak15 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_149);
        {aRet = ((Ptr) GLtakr_150); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_149() {       /* call_takr_148 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_152);
        {aRet = ((Ptr) GLtakr_153); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_152() {       /* call_takr_151 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_155);
        {aRet = ((Ptr) GLtakr_156); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_155() {       /* call_takr_154 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_157); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_157() {       /* tak16 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_159);
        {aRet = ((Ptr) GLtakr_160); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_159() {       /* call_takr_158 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_162);
        {aRet = ((Ptr) GLtakr_112); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_162() {       /* call_takr_161 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_164);
        {aRet = ((Ptr) GLtakr_165); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_164() {       /* call_takr_163 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_20); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_20() {        /* tak17 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_167);
        {aRet = ((Ptr) GLtakr_64); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_167() {       /* call_takr_166 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_169);
        {aRet = ((Ptr) GLtakr_170); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_169() {       /* call_takr_168 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_172);
        {aRet = ((Ptr) GLtakr_67); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_172() {       /* call_takr_171 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_132); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_132() {       /* tak18 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_174);
        {aRet = ((Ptr) GLtakr_40); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_174() {       /* call_takr_173 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_176);
        {aRet = ((Ptr) GLtakr_96); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_176() {       /* call_takr_175 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_178);
        {aRet = ((Ptr) GLtakr_179); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_178() {       /* call_takr_177 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_76); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_76() {        /* tak19 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_181);
        {aRet = ((Ptr) GLtakr_182); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_181() {       /* call_takr_180 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_184);
        {aRet = ((Ptr) GLtakr_185); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_184() {       /* call_takr_183 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_187);
        {aRet = ((Ptr) GLtakr_182); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_187() {       /* call_takr_186 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_185); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_185() {       /* tak20 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_189);
        {aRet = ((Ptr) GLtakr_73); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_189() {       /* call_takr_188 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_191);
        {aRet = ((Ptr) GLtakr_192); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_191() {       /* call_takr_190 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_194);
        {aRet = ((Ptr) GLtakr_195); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_194() {       /* call_takr_193 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_109); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_109() {       /* tak21 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_197);
        {aRet = ((Ptr) GLtakr_139); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_197() {       /* call_takr_196 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_199);
        {aRet = ((Ptr) GLtakr_200); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_199() {       /* call_takr_198 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_202);
        {aRet = ((Ptr) GLtakr_24); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_202() {       /* call_takr_201 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_27); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_27() {        /* tak22 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_204);
        {aRet = ((Ptr) GLtakr_39); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_204() {       /* call_takr_203 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_206);
        {aRet = ((Ptr) GLtakr_95); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_206() {       /* call_takr_205 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_208);
        {aRet = ((Ptr) GLtakr_209); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_208() {       /* call_takr_207 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_179); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_179() {       /* tak23 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_211);
        {aRet = ((Ptr) GLtakr_83); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_211() {       /* call_takr_210 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_213);
        {aRet = ((Ptr) GLtakr_214); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_213() {       /* call_takr_212 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_216);
        {aRet = ((Ptr) GLtakr_87); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_216() {       /* call_takr_215 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_217); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_217() {       /* tak24 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_219);
        {aRet = ((Ptr) GLtakr_220); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_219() {       /* call_takr_218 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_222);
        {aRet = ((Ptr) GLtakr_223); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_222() {       /* call_takr_221 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_225);
        {aRet = ((Ptr) GLtakr_220); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_225() {       /* call_takr_224 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_220); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_220() {       /* tak25 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_227);
        {aRet = ((Ptr) GLtakr_228); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_227() {       /* call_takr_226 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_230);
        {aRet = ((Ptr) GLtakr_231); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_230() {       /* call_takr_229 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_233);
        {aRet = ((Ptr) GLtakr_200); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_233() {       /* call_takr_232 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_234); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_234() {       /* tak26 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_236);
        {aRet = ((Ptr) GLtakr_92); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_236() {       /* call_takr_235 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_238);
        {aRet = ((Ptr) GLtakr_239); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_238() {       /* call_takr_237 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_241);
        {aRet = ((Ptr) GLtakr_70); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_241() {       /* call_takr_240 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_242); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_242() {       /* tak27 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_244);
        {aRet = ((Ptr) GLtakr_86); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_244() {       /* call_takr_243 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_246);
        {aRet = ((Ptr) GLtakr_87); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_246() {       /* call_takr_245 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_248);
        {aRet = ((Ptr) GLtakr_153); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_248() {       /* call_takr_247 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_249); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_249() {       /* tak28 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_251);
        {aRet = ((Ptr) GLtakr_252); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_251() {       /* call_takr_250 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_254);
        {aRet = ((Ptr) GLtakr_76); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_254() {       /* call_takr_253 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_256);
        {aRet = ((Ptr) GLtakr_257); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_256() {       /* call_takr_255 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_160); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_160() {       /* tak29 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_259);
        {aRet = ((Ptr) GLtakr_102); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_259() {       /* call_takr_258 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_261);
        {aRet = ((Ptr) GLtakr_262); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_261() {       /* call_takr_260 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_264);
        {aRet = ((Ptr) GLtakr_102); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_264() {       /* call_takr_263 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_262); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_262() {       /* tak30 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_266);
        {aRet = ((Ptr) GLtakr_267); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_266() {       /* call_takr_265 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_269);
        {aRet = ((Ptr) GLtakr_270); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_269() {       /* call_takr_268 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_272);
        {aRet = ((Ptr) GLtakr_242); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_272() {       /* call_takr_271 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_192); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_192() {       /* tak31 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_274);
        {aRet = ((Ptr) GLtakr_275); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_274() {       /* call_takr_273 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_277);
        {aRet = ((Ptr) GLtakr_278); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_277() {       /* call_takr_276 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_280);
        {aRet = ((Ptr) GLtakr_46); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_280() {       /* call_takr_279 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_117); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_117() {       /* tak32 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_282);
        {aRet = ((Ptr) GLtakr_109); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_282() {       /* call_takr_281 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_284);
        {aRet = ((Ptr) GLtakr_285); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_284() {       /* call_takr_283 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_287);
        {aRet = ((Ptr) GLtakr_288); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_287() {       /* call_takr_286 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_36); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_36() {        /* tak33 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_290);
        {aRet = ((Ptr) GLtakr_291); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_290() {       /* call_takr_289 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_293);
        {aRet = ((Ptr) GLtakr_24); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_293() {       /* call_takr_292 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_295);
        {aRet = ((Ptr) GLtakr_296); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_295() {       /* call_takr_294 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_30); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_30() {        /* tak34 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_298);
        {aRet = ((Ptr) GLtakr_299); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_298() {       /* call_takr_297 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_301);
        {aRet = ((Ptr) GLtakr_53); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_301() {       /* call_takr_300 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_303);
        {aRet = ((Ptr) GLtakr_299); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_303() {       /* call_takr_302 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_304); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_304() {       /* tak35 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_306);
        {aRet = ((Ptr) GLtakr_117); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_306() {       /* call_takr_305 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_308);
        {aRet = ((Ptr) GLtakr_80); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_308() {       /* call_takr_307 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_310);
        {aRet = ((Ptr) GLtakr_120); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_310() {       /* call_takr_309 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_86); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_86() {        /* tak36 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_312);
        {aRet = ((Ptr) GLtakr_313); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_312() {       /* call_takr_311 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_315);
        {aRet = ((Ptr) GLtakr_77); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_315() {       /* call_takr_314 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_317);
        {aRet = ((Ptr) GLtakr_160); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_317() {       /* call_takr_316 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_14() {        /* tak37 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_319);
        {aRet = ((Ptr) GLtakr_67); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_319() {       /* call_takr_318 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_321);
        {aRet = ((Ptr) GLtakr_132); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_321() {       /* call_takr_320 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_323);
        {aRet = ((Ptr) GLtakr_324); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_323() {       /* call_takr_322 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_138); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_138() {       /* tak38 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_326);
        {aRet = ((Ptr) GLtakr_126); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_326() {       /* call_takr_325 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_328);
        {aRet = ((Ptr) GLtakr_160); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_328() {       /* call_takr_327 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_330);
        {aRet = ((Ptr) GLtakr_285); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_330() {       /* call_takr_329 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_331); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_331() {       /* tak39 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_333);
        {aRet = ((Ptr) GLtakr_334); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_333() {       /* call_takr_332 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_336);
        {aRet = ((Ptr) GLtakr_182); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_336() {       /* call_takr_335 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_338);
        {aRet = ((Ptr) GLtakr_334); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_338() {       /* call_takr_337 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_182); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_182() {       /* tak40 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_340);
        {aRet = ((Ptr) GLtakr_20); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_340() {       /* call_takr_339 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_342);
        {aRet = ((Ptr) GLtakr_39); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_342() {       /* call_takr_341 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_344);
        {aRet = ((Ptr) GLtakr_239); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_344() {       /* call_takr_343 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_270); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_270() {       /* tak41 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_346);
        {aRet = ((Ptr) GLtakr_135); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_346() {       /* call_takr_345 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_348);
        {aRet = ((Ptr) GLtakr_228); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_348() {       /* call_takr_347 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_350);
        {aRet = ((Ptr) GLtakr_139); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_350() {       /* call_takr_349 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_200); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_200() {       /* tak42 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_352);
        {aRet = ((Ptr) GLtakr_209); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_352() {       /* call_takr_351 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_354);
        {aRet = ((Ptr) GLtakr_252); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_354() {       /* call_takr_353 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_356);
        {aRet = ((Ptr) GLtakr_192); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_356() {       /* call_takr_355 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_126); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_126() {       /* tak43 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_358);
        {aRet = ((Ptr) GLtakr_249); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_358() {       /* call_takr_357 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_360);
        {aRet = ((Ptr) GLtakr_275); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_360() {       /* call_takr_359 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_362);
        {aRet = ((Ptr) GLtakr_43); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_362() {       /* call_takr_361 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_46); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_46() {        /* tak44 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_364);
        {aRet = ((Ptr) GLtakr_144); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_364() {       /* call_takr_363 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_366);
        {aRet = ((Ptr) GLtakr_299); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_366() {       /* call_takr_365 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_368);
        {aRet = ((Ptr) GLtakr_144); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_368() {       /* call_takr_367 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_369); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_369() {       /* tak45 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_371);
        {aRet = ((Ptr) GLtakr_31); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_371() {       /* call_takr_370 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_373);
        {aRet = ((Ptr) GLtakr_67); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_373() {       /* call_takr_372 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_375);
        {aRet = ((Ptr) GLtakr_376); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_375() {       /* call_takr_374 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_324); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_324() {       /* tak46 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_378);
        {aRet = ((Ptr) GLtakr_331); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_378() {       /* call_takr_377 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_380);
        {aRet = ((Ptr) GLtakr_20); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_380() {       /* call_takr_379 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_382);
        {aRet = ((Ptr) GLtakr_92); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_382() {       /* call_takr_381 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_267); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_267() {       /* tak47 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_384);
        {aRet = ((Ptr) GLtakr_153); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_384() {       /* call_takr_383 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_386);
        {aRet = ((Ptr) GLtakr_249); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_386() {       /* call_takr_385 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_388);
        {aRet = ((Ptr) GLtakr_157); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_388() {       /* call_takr_387 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_43); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_43() {        /* tak48 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_390);
        {aRet = ((Ptr) GLtakr_129); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_390() {       /* call_takr_389 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_392);
        {aRet = ((Ptr) GLtakr_331); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_392() {       /* call_takr_391 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_394);
        {aRet = ((Ptr) GLtakr_36); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_394() {       /* call_takr_393 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_395); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_395() {       /* tak49 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_397);
        {aRet = ((Ptr) GLtakr_398); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_397() {       /* call_takr_396 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_400);
        {aRet = ((Ptr) GLtakr_398); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_400() {       /* call_takr_399 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_402);
        {aRet = ((Ptr) GLtakr_398); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_402() {       /* call_takr_401 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_398); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_398() {       /* tak50 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_404);
        {aRet = ((Ptr) GLtakr_112); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_404() {       /* call_takr_403 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_406);
        {aRet = ((Ptr) GLtakr_288); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_406() {       /* call_takr_405 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_408);
        {aRet = ((Ptr) GLtakr_409); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_408() {       /* call_takr_407 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_39); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_39() {        /* tak51 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_411);
        {aRet = ((Ptr) GLtakr_217); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_411() {       /* call_takr_410 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_413);
        {aRet = ((Ptr) GLtakr_156); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_413() {       /* call_takr_412 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_415);
        {aRet = ((Ptr) GLtakr_275); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_415() {       /* call_takr_414 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_278); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_278() {       /* tak52 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_417);
        {aRet = ((Ptr) GLtakr_288); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_417() {       /* call_takr_416 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_419);
        {aRet = ((Ptr) GLtakr_420); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_419() {       /* call_takr_418 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_422);
        {aRet = ((Ptr) GLtakr_21); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_422() {       /* call_takr_421 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_95); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_95() {        /* tak53 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_424);
        {aRet = ((Ptr) GLtakr_170); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_424() {       /* call_takr_423 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_426);
        {aRet = ((Ptr) GLtakr_427); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_426() {       /* call_takr_425 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_429);
        {aRet = ((Ptr) GLtakr_132); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_429() {       /* call_takr_428 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_135); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_135() {       /* tak54 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_431);
        {aRet = ((Ptr) GLtakr_304); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_431() {       /* call_takr_430 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_433);
        {aRet = ((Ptr) GLtakr_59); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_433() {       /* call_takr_432 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_435);
        {aRet = ((Ptr) GLtakr_304); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_435() {       /* call_takr_434 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_56); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_56() {        /* tak55 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_437);
        {aRet = ((Ptr) GLtakr_156); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_437() {       /* call_takr_436 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_439);
        {aRet = ((Ptr) GLtakr_157); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_439() {       /* call_takr_438 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_441);
        {aRet = ((Ptr) GLtakr_278); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_441() {       /* call_takr_440 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_442); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_442() {       /* tak56 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_444);
        {aRet = ((Ptr) GLtakr_96); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_444() {       /* call_takr_443 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_446);
        {aRet = ((Ptr) GLtakr_242); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_446() {       /* call_takr_445 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_448);
        {aRet = ((Ptr) GLtakr_313); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_448() {       /* call_takr_447 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_195); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_195() {       /* tak57 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_450);
        {aRet = ((Ptr) GLtakr_324); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_450() {       /* call_takr_449 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_452);
        {aRet = ((Ptr) GLtakr_138); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_452() {       /* call_takr_451 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_454);
        {aRet = ((Ptr) GLtakr_231); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_454() {       /* call_takr_453 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_291); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_291() {       /* tak58 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_456);
        {aRet = ((Ptr) GLtakr_420); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_456() {       /* call_takr_455 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_458);
        {aRet = ((Ptr) GLtakr_395); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_458() {       /* call_takr_457 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_460);
        {aRet = ((Ptr) GLtakr_40); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_460() {       /* call_takr_459 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_70); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_70() {        /* tak59 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_462);
        {aRet = ((Ptr) GLtakr_185); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_462() {       /* call_takr_461 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_464);
        {aRet = ((Ptr) GLtakr_465); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_464() {       /* call_takr_463 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_467);
        {aRet = ((Ptr) GLtakr_185); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_467() {       /* call_takr_466 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_465); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_465() {       /* tak60 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_469);
        {aRet = ((Ptr) GLtakr_195); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_469() {       /* call_takr_468 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_471);
        {aRet = ((Ptr) GLtakr_472); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_471() {       /* call_takr_470 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_474);
        {aRet = ((Ptr) GLtakr_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_474() {       /* call_takr_473 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_288); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_288() {       /* tak61 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_476);
        {aRet = ((Ptr) GLtakr_427); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_476() {       /* call_takr_475 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_478);
        {aRet = ((Ptr) GLtakr_376); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_478() {       /* call_takr_477 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_480);
        {aRet = ((Ptr) GLtakr_135); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_480() {       /* call_takr_479 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_228); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_228() {       /* tak62 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_482);
        {aRet = ((Ptr) GLtakr_192); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_482() {       /* call_takr_481 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_484);
        {aRet = ((Ptr) GLtakr_257); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_484() {       /* call_takr_483 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_486);
        {aRet = ((Ptr) GLtakr_472); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_486() {       /* call_takr_485 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_285); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_285() {       /* tak63 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_488);
        {aRet = ((Ptr) GLtakr_49); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_488() {       /* call_takr_487 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_490);
        {aRet = ((Ptr) GLtakr_50); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_490() {       /* call_takr_489 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_492);
        {aRet = ((Ptr) GLtakr_83); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_492() {       /* call_takr_491 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_214); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_214() {       /* tak64 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_494);
        {aRet = ((Ptr) GLtakr_59); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_494() {       /* call_takr_493 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_496);
        {aRet = ((Ptr) GLtakr_147); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_496() {       /* call_takr_495 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_498);
        {aRet = ((Ptr) GLtakr_59); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_498() {       /* call_takr_497 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_144); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_144() {       /* tak65 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_500);
        {aRet = ((Ptr) GLtakr_200); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_500() {       /* call_takr_499 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_502);
        {aRet = ((Ptr) GLtakr_234); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_502() {       /* call_takr_501 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_504);
        {aRet = ((Ptr) GLtakr_27); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_504() {       /* call_takr_503 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_64); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_64() {        /* tak66 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_506);
        {aRet = ((Ptr) GLtakr_507); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_506() {       /* call_takr_505 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_509);
        {aRet = ((Ptr) GLtakr_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_509() {       /* call_takr_508 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_511);
        {aRet = ((Ptr) GLtakr_331); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_511() {       /* call_takr_510 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_409); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_409() {       /* tak67 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_513);
        {aRet = ((Ptr) GLtakr_157); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_513() {       /* call_takr_512 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_515);
        {aRet = ((Ptr) GLtakr_43); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_515() {       /* call_takr_514 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_517);
        {aRet = ((Ptr) GLtakr_442); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_517() {       /* call_takr_516 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_49); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_49() {        /* tak68 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_519);
        {aRet = ((Ptr) GLtakr_95); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_519() {       /* call_takr_518 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_521);
        {aRet = ((Ptr) GLtakr_70); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_521() {       /* call_takr_520 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_523);
        {aRet = ((Ptr) GLtakr_252); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_523() {       /* call_takr_522 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_313); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_313() {       /* tak69 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_525);
        {aRet = ((Ptr) GLtakr_526); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_525() {       /* call_takr_524 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_528);
        {aRet = ((Ptr) GLtakr_99); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_528() {       /* call_takr_527 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_530);
        {aRet = ((Ptr) GLtakr_526); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_530() {       /* call_takr_529 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_99); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_99() {        /* tak70 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_532);
        {aRet = ((Ptr) GLtakr_242); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_532() {       /* call_takr_531 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_534);
        {aRet = ((Ptr) GLtakr_123); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_534() {       /* call_takr_533 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_536);
        {aRet = ((Ptr) GLtakr_77); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_536() {       /* call_takr_535 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_472); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_472() {       /* tak71 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_538);
        {aRet = ((Ptr) GLtakr_214); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_538() {       /* call_takr_537 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_540);
        {aRet = ((Ptr) GLtakr_150); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_540() {       /* call_takr_539 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_542);
        {aRet = ((Ptr) GLtakr_217); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_542() {       /* call_takr_541 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_156); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_156() {       /* tak72 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_544);
        {aRet = ((Ptr) GLtakr_21); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_544() {       /* call_takr_543 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_546);
        {aRet = ((Ptr) GLtakr_40); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_546() {       /* call_takr_545 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_548);
        {aRet = ((Ptr) GLtakr_270); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_548() {       /* call_takr_547 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_252); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_252() {       /* tak73 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_550);
        {aRet = ((Ptr) GLtakr_138); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_550() {       /* call_takr_549 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_552);
        {aRet = ((Ptr) GLtakr_139); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_552() {       /* call_takr_551 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_554);
        {aRet = ((Ptr) GLtakr_291); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_554() {       /* call_takr_553 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_24); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_24() {        /* tak74 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_556);
        {aRet = ((Ptr) GLtakr_223); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_556() {       /* call_takr_555 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_558);
        {aRet = ((Ptr) GLtakr_220); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_558() {       /* call_takr_557 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_560);
        {aRet = ((Ptr) GLtakr_223); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_560() {       /* call_takr_559 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_223); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_223() {       /* tak75 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_562);
        {aRet = ((Ptr) GLtakr_120); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_562() {       /* call_takr_561 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_564);
        {aRet = ((Ptr) GLtakr_86); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_564() {       /* call_takr_563 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_566);
        {aRet = ((Ptr) GLtakr_150); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_566() {       /* call_takr_565 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_153); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_153() {       /* tak76 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_568);
        {aRet = ((Ptr) GLtakr_395); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_568() {       /* call_takr_567 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_570);
        {aRet = ((Ptr) GLtakr_267); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_570() {       /* call_takr_569 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_572);
        {aRet = ((Ptr) GLtakr_96); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_572() {       /* call_takr_571 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_73); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_73() {        /* tak77 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_574);
        {aRet = ((Ptr) GLtakr_231); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_574() {       /* call_takr_573 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_576);
        {aRet = ((Ptr) GLtakr_291); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_576() {       /* call_takr_575 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_578);
        {aRet = ((Ptr) GLtakr_234); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_578() {       /* call_takr_577 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_296); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_296() {       /* tak78 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_580);
        {aRet = ((Ptr) GLtakr_179); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_580() {       /* call_takr_579 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_582);
        {aRet = ((Ptr) GLtakr_313); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_582() {       /* call_takr_581 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_584);
        {aRet = ((Ptr) GLtakr_126); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_584() {       /* call_takr_583 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_507); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_507() {       /* tak79 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_586);
        {aRet = ((Ptr) GLtakr_465); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_586() {       /* call_takr_585 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_588);
        {aRet = ((Ptr) GLtakr_334); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_588() {       /* call_takr_587 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_590);
        {aRet = ((Ptr) GLtakr_465); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_590() {       /* call_takr_589 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_334); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_334() {       /* tak80 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_592);
        {aRet = ((Ptr) GLtakr_239); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_592() {       /* call_takr_591 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_594);
        {aRet = ((Ptr) GLtakr_209); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_594() {       /* call_takr_593 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_596);
        {aRet = ((Ptr) GLtakr_73); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_596() {       /* call_takr_595 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_123); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_123() {       /* tak81 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_598);
        {aRet = ((Ptr) GLtakr_30); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_598() {       /* call_takr_597 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_600);
        {aRet = ((Ptr) GLtakr_31); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_600() {       /* call_takr_599 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_602);
        {aRet = ((Ptr) GLtakr_427); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_602() {       /* call_takr_601 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_376); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_376() {       /* tak82 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_604);
        {aRet = ((Ptr) GLtakr_472); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_604() {       /* call_takr_603 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_606);
        {aRet = ((Ptr) GLtakr_129); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_606() {       /* call_takr_605 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_608);
        {aRet = ((Ptr) GLtakr_17); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_608() {       /* call_takr_607 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_420); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_420() {       /* tak83 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_610);
        {aRet = ((Ptr) GLtakr_87); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_610() {       /* call_takr_609 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_612);
        {aRet = ((Ptr) GLtakr_217); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_612() {       /* call_takr_611 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_614);
        {aRet = ((Ptr) GLtakr_249); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_614() {       /* call_takr_613 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_275); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_275() {       /* tak84 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_616);
        {aRet = ((Ptr) GLtakr_369); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_616() {       /* call_takr_615 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_618);
        {aRet = ((Ptr) GLtakr_304); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_618() {       /* call_takr_617 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_620);
        {aRet = ((Ptr) GLtakr_369); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_620() {       /* call_takr_619 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_53); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_53() {        /* tak85 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_622);
        {aRet = ((Ptr) GLtakr_376); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_622() {       /* call_takr_621 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_624);
        {aRet = ((Ptr) GLtakr_324); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_624() {       /* call_takr_623 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_626);
        {aRet = ((Ptr) GLtakr_228); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_626() {       /* call_takr_625 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_231); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_231() {       /* tak86 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_628);
        {aRet = ((Ptr) GLtakr_76); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_628() {       /* call_takr_627 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_630);
        {aRet = ((Ptr) GLtakr_195); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_630() {       /* call_takr_629 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_632);
        {aRet = ((Ptr) GLtakr_507); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_632() {       /* call_takr_631 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_112); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_112() {       /* tak87 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_634);
        {aRet = ((Ptr) GLtakr_442); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_634() {       /* call_takr_633 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_636);
        {aRet = ((Ptr) GLtakr_49); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_636() {       /* call_takr_635 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_638);
        {aRet = ((Ptr) GLtakr_80); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_638() {       /* call_takr_637 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_83); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_83() {        /* tak88 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_640);
        {aRet = ((Ptr) GLtakr_257); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_640() {       /* call_takr_639 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_642);
        {aRet = ((Ptr) GLtakr_507); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_642() {       /* call_takr_641 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_644);
        {aRet = ((Ptr) GLtakr_129); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_644() {       /* call_takr_643 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_165); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_165() {       /* tak89 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_646);
        {aRet = ((Ptr) GLtakr_262); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_646() {       /* call_takr_645 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_648);
        {aRet = ((Ptr) GLtakr_526); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_648() {       /* call_takr_647 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_650);
        {aRet = ((Ptr) GLtakr_262); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_650() {       /* call_takr_649 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_526); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_526() {       /* tak90 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_652);
        {aRet = ((Ptr) GLtakr_409); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_652() {       /* call_takr_651 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_654);
        {aRet = ((Ptr) GLtakr_21); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_654() {       /* call_takr_653 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_656);
        {aRet = ((Ptr) GLtakr_267); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_656() {       /* call_takr_655 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_209); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_209() {       /* tak91 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_658);
        {aRet = ((Ptr) GLtakr_50); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_658() {       /* call_takr_657 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_660);
        {aRet = ((Ptr) GLtakr_120); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_660() {       /* call_takr_659 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_662);
        {aRet = ((Ptr) GLtakr_214); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_662() {       /* call_takr_661 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_150); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_150() {       /* tak92 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_664);
        {aRet = ((Ptr) GLtakr_270); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_664() {       /* call_takr_663 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_666);
        {aRet = ((Ptr) GLtakr_179); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_666() {       /* call_takr_665 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_668);
        {aRet = ((Ptr) GLtakr_123); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_668() {       /* call_takr_667 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_257); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_257() {       /* tak93 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_670);
        {aRet = ((Ptr) GLtakr_296); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_670() {       /* call_takr_669 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_672);
        {aRet = ((Ptr) GLtakr_30); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_672() {       /* call_takr_671 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_674);
        {aRet = ((Ptr) GLtakr_170); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_674() {       /* call_takr_673 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_427); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_427() {       /* tak94 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_676);
        {aRet = ((Ptr) GLtakr_147); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_676() {       /* call_takr_675 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_678);
        {aRet = ((Ptr) GLtakr_369); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_678() {       /* call_takr_677 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_680);
        {aRet = ((Ptr) GLtakr_147); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_680() {       /* call_takr_679 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_299); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_299() {       /* tak95 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_682);
        {aRet = ((Ptr) GLtakr_278); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_682() {       /* call_takr_681 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_684);
        {aRet = ((Ptr) GLtakr_442); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_684() {       /* call_takr_683 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_686);
        {aRet = ((Ptr) GLtakr_117); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_686() {       /* call_takr_685 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_80); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_80() {        /* tak96 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_688);
        {aRet = ((Ptr) GLtakr_165); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_688() {       /* call_takr_687 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_690);
        {aRet = ((Ptr) GLtakr_409); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_690() {       /* call_takr_689 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_692);
        {aRet = ((Ptr) GLtakr_395); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_692() {       /* call_takr_691 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_239); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_239() {       /* tak97 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_694);
        {aRet = ((Ptr) GLtakr_234); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_694() {       /* call_takr_693 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_696);
        {aRet = ((Ptr) GLtakr_296); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_696() {       /* call_takr_695 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_698);
        {aRet = ((Ptr) GLtakr_64); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_698() {       /* call_takr_697 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_170); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_170() {       /* tak98 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_700);
        {aRet = ((Ptr) GLtakr_285); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_700() {       /* call_takr_699 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_702);
        {aRet = ((Ptr) GLtakr_165); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_702() {       /* call_takr_701 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_704);
        {aRet = ((Ptr) GLtakr_420); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_704() {       /* call_takr_703 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_92); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_92() {        /* tak99 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) < (Fix) (rA1))  goto l_101;
        rA1 = rA3;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtakr_706);
        {aRet = ((Ptr) GLtakr_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtakr_706() {       /* call_takr_705 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 1)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_708);
        {aRet = ((Ptr) GLtakr_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_708() {       /* call_takr_707 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GLtakr_710);
        {aRet = ((Ptr) GLtakr_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtakr_710() {       /* call_takr_709 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLtakr_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GDtakr_711() {       /* trace check-takr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtakr,6,7,8);
  lRet:  return (aRet);}}

static Ptr GDtakr_712() {       /* trace meter-takr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtakr,9,7,8);
  lRet:  return (aRet);}}

static Ptr GDtakr_713() {       /* trace test-takr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtakr,10,7,11);
  lRet:  return (aRet);}}

