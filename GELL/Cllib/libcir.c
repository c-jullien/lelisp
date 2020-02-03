/* GELL 15.26: source file for the module: "libcir" */
/*             translation done:           "Wed June 16 93 18:01:44 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "libcir.h" 

static Ptr GLlibcir_1() {       /* cirprint */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibcir_3);
        {aRet = (GYlibcir[0] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_3() {       /* call_libcir_2 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GXpopj0);
        GIa4 = (Ptr) 0;
        {aRet = (GYlibcir[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_4() {       /* cirprinflush */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibcir_6);
        {aRet = (GYlibcir[0] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_6() {       /* call_libcir_5 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GXpopj0);
        GIa4 = (Ptr) 0;
        {aRet = (GYlibcir[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_7() {       /* cirprin */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYlibcir; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[3]->Val;
        rLit[3]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[4];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[6]->Val;
        rLit[6]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLlibcir_9);
        {aRet = ((Ptr) GLlibcir_10); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_9() {       /* call_libcir_8 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        GIdlink = (rSp + 1)->Val;
        rLit[6]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        rA1 = rLit[3]->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rLit[3]->Val = rA1;
        if (rA1 == rNil)        {aRet = ((Ptr) GLlibcir_11); goto lRet;}
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[6]->Val;
        rLit[6]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[8];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        rA1 = (rSp + 16)->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_13);
        {aRet = ((Ptr) GLlibcir_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_13() {      /* call_libcir_12 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYlibcir[6]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = ((Ptr) GLlibcir_15); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_11() {      /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibcir_15);
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYlibcir[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_15() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYlibcir[3]->Val = (rSp + 6)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_10() {      /* #:libcir:sweep */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLlibcir_16); goto lRet;}
        (--rSp)->Val = ((Ptr) GLlibcir_18);
        {aRet = ((Ptr) GLlibcir_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_18() {      /* call_libcir_17 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLlibcir_16); goto lRet;}
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_21);
        {aRet = ((Ptr) GLlibcir_10); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_21() {      /* call_libcir_20 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLlibcir_10); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_16() {      /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp->Val < GIbstrg) || (rSp->Val >= GIbsymb))      {aRet = ((Ptr) GLlibcir_22); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_24);
        {aRet = ((Ptr) GLlibcir_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_24() {      /* call_libcir_23 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLlibcir_22); goto lRet;}
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLlibcir_10); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_22() {      /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp->Val < GIbvect) || (rSp->Val >= GIbstrg))      {aRet = ((Ptr) GLlibcir_25); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_27);
        {aRet = ((Ptr) GLlibcir_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_27() {      /* call_libcir_26 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLlibcir_25); goto lRet;}
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (rSp->Val->Val + 1)->Val;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLlibcir_28); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_28() {      /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((Fix) ((rSp + 2)->Val) >= (Fix) (rSp->Val)) {aRet = ((Ptr) GLlibcir_29); goto lRet;}
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_31);
        {aRet = ((Ptr) GLlibcir_10); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_31() {      /* call_libcir_30 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 2)->Val = rA4;
        {aRet = ((Ptr) GLlibcir_28); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLlibcir_29() {      /* 108 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 3;
        rA4 = rSp->Val;
        if ((rA4 + 1)->Val == GYlibcir[10])     goto l_109;
        GIa1 = (rA4 + 1)->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLlibcir_10); goto lRet;}
l_109:
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibcir_25() {      /* 105 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (GYlibcir[11]->Val == rNil)  {aRet = ((Ptr) GLlibcir_32); goto lRet;}
        if ((rSp->Val < GIbsymb) || (rSp->Val >= GIbcons))      {aRet = ((Ptr) GLlibcir_32); goto lRet;}
        rA4 = rSp->Val;
        if ((rA4 + 3)->Val == rNil)     {aRet = ((Ptr) GLlibcir_32); goto lRet;}
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLlibcir_34);
        {aRet = ((Ptr) GLlibcir_19); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibcir_34() {      /* call_libcir_33 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLlibcir_32); goto lRet;}
        rA1 = rSp->Val;
        rA1 = (rA1 + 3)->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLlibcir_10); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_32() {      /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_19() {      /* #:libcir:unshared */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        rA2 = rLit[6]->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_102;
        rA2 = rLit[6]->Val;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[6]->Val = rA1;
l_102:
        if (rSp->Val == rNil)   goto l_104;
        rA2 = rLit[3]->Val;
        rA1 = (rSp + 1)->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        goto l_104;
        rA2 = rLit[3]->Val;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[3]->Val = rA1;
l_104:
        if (rSp->Val == rNil)   goto l_105;
        rA1 = rNil;
        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
l_105:
        rA1 = rLit[12];
l_106:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLlibcir_14() {      /* #:libcir:prin */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        rA2 = rLit[3]->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_101;
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = rA1;
        rA2 = rLit[6]->Val;
        rA1 = (rSp + 1)->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        GIa3 = rA1;
        rA2 = (rSp++)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLlibcir_35); goto lRet;}
l_101:
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLlibcir_36); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLlibcir_35() {      /* #:libcir:prin-sharp */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        if (GIa3 == GInil)      {aRet = ((Ptr) GLlibcir_37); goto lRet;}
        GIa1 = GIa2;
        (--rSp)->Val = ((Ptr) GLlibcir_39);
        {aRet = (GYlibcir[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_39() {      /* call_libcir_38 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 35;
        (--GIsp)->Val = ((Ptr) GLlibcir_41);
        {aRet = (GYlibcir[14] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_41() {      /* call_libcir_40 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = (Ptr) 35;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLlibcir_42); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_37() {      /* 101 */
   {    register Ptr aRet;
        GIa1 = GIa2;
        (--GIsp)->Val = ((Ptr) GLlibcir_44);
        {aRet = (GYlibcir[13] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_44() {      /* call_libcir_43 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 61;
        (--GIsp)->Val = ((Ptr) GLlibcir_46);
        {aRet = (GYlibcir[14] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_46() {      /* call_libcir_45 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = rA1;
        rA1 = (Ptr) 35;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--GIsp)->Val = ((Ptr) GLlibcir_48);
        {aRet = ((Ptr) GLlibcir_42); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_48() {      /* call_libcir_47 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1;
        GIa2 = rLit[6]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[6]->Val = rA1;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLlibcir_36); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_36() {      /* #:libcir:prin1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibcir_50);
        {aRet = (GYlibcir[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_50() {      /* call_libcir_49 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLlibcir_51); goto lRet;}
        GIa1 = GYlibcir[16];
        (--GIsp)->Val = ((Ptr) GLlibcir_53);
        {aRet = ((Ptr) GLlibcir_42); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_53() {      /* call_libcir_52 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_55);
        {aRet = ((Ptr) GLlibcir_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_55() {      /* call_libcir_54 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLlibcir_56); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_51() {      /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLlibcir_57); goto lRet;}
        (--rSp)->Val = ((Ptr) GLlibcir_58);
        (--rSp)->Val = (Ptr) 40;
        GIa4 = (Ptr) 1;
        {aRet = (GYlibcir[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_58() {      /* 105 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_60);
        {aRet = ((Ptr) GLlibcir_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_60() {      /* call_libcir_59 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLlibcir_56); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_57() {      /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibcir; rSp = GIsp;
        if ((rSp->Val < GIbvect) || (rSp->Val >= GIbstrg))      {aRet = ((Ptr) GLlibcir_61); goto lRet;}
        GIa4 = rSp->Val;
        if ((GIa4 + 1)->Val == rLit[10])        {aRet = ((Ptr) GLlibcir_62); goto lRet;}
        GIa1 = rLit[18];
        (--rSp)->Val = ((Ptr) GLlibcir_64);
        {aRet = ((Ptr) GLlibcir_42); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_64() {      /* call_libcir_63 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_66);
        {aRet = ((Ptr) GLlibcir_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_66() {      /* call_libcir_65 */
   {    register Ptr aRet;
        GIa1 = GYlibcir[19];
        (--GIsp)->Val = ((Ptr) GLlibcir_62);
        {aRet = ((Ptr) GLlibcir_42); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_62() {      /* 109 */
   {    register Ptr aRet;
        GIa1 = GYlibcir[20];
        (--GIsp)->Val = ((Ptr) GLlibcir_68);
        {aRet = ((Ptr) GLlibcir_42); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_68() {      /* call_libcir_67 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (rSp->Val->Val + 1)->Val;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLlibcir_69); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_69() {      /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((Fix) ((rSp + 2)->Val) >= (Fix) (rSp->Val)) {aRet = ((Ptr) GLlibcir_70); goto lRet;}
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        GIa1 = GIa4;
        (--rSp)->Val = ((Ptr) GLlibcir_72);
        {aRet = ((Ptr) GLlibcir_14); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_72() {      /* call_libcir_71 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibcir_73);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYlibcir[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_73() {      /* 112 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 2)->Val = rA4;
        {aRet = ((Ptr) GLlibcir_69); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLlibcir_70() {      /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 3;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = (Ptr) 93;
        GIa4 = (Ptr) 1;
        {aRet = (GYlibcir[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_61() {      /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibcir; rSp = GIsp;
        if ((rSp->Val < GIbstrg) || (rSp->Val >= GIbsymb))      {aRet = ((Ptr) GLlibcir_74); goto lRet;}
        GIa4 = rSp->Val;
        if ((GIa4 + 1)->Val == rLit[21])        {aRet = ((Ptr) GLlibcir_74); goto lRet;}
        GIa1 = rLit[22];
        (--rSp)->Val = ((Ptr) GLlibcir_76);
        {aRet = ((Ptr) GLlibcir_42); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_76() {      /* call_libcir_75 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_78);
        {aRet = ((Ptr) GLlibcir_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_78() {      /* call_libcir_77 */
   {    register Ptr aRet;
        GIa1 = GYlibcir[23];
        (--GIsp)->Val = ((Ptr) GLlibcir_80);
        {aRet = ((Ptr) GLlibcir_42); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_80() {      /* call_libcir_79 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibcir; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = ((Ptr) GLlibcir_81);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[24];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_81() {      /* 117 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYlibcir[9] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_74() {      /* 114 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYlibcir; rSp = GIsp; rNil = GInil;
        if (rLit[11]->Val == rNil)      {aRet = ((Ptr) GLlibcir_82); goto lRet;}
        if ((rSp->Val < GIbsymb) || (rSp->Val >= GIbcons))      {aRet = ((Ptr) GLlibcir_82); goto lRet;}
        GIa4 = rSp->Val;
        if ((GIa4 + 3)->Val == rNil)    {aRet = ((Ptr) GLlibcir_82); goto lRet;}
        GIa1 = rLit[26];
        (--rSp)->Val = ((Ptr) GLlibcir_84);
        {aRet = ((Ptr) GLlibcir_42); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_84() {      /* call_libcir_83 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 3)->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_86);
        {aRet = ((Ptr) GLlibcir_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_86() {      /* call_libcir_85 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibcir_87);
        (--rSp)->Val = (Ptr) 58;
        GIa4 = (Ptr) 1;
        {aRet = (GYlibcir[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_87() {      /* 120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        GIa2 = (rSp + 1)->Val;
        GIa1 = GInil;
        (--rSp)->Val = ((Ptr) GLlibcir_89);
        {aRet = (GYlibcir[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_89() {      /* call_libcir_88 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYlibcir[9] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_82() {      /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYlibcir[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_56() {      /* #:libcir:prin-cdr */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_101;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = (Ptr) 41;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
l_101:
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLlibcir_90); goto lRet;}
        (--rSp)->Val = ((Ptr) GLlibcir_92);
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_92() {      /* call_libcir_91 */
   {    register Ptr aRet, rA1, rNil;
        rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        {aRet = ((Ptr) GLlibcir_90); goto lRet;}
        GIa2 = GYlibcir[3]->Val;
        rA1 = GIsp->Val;
        rA1 = llrt_call_memq (rA1, GIa2, GIbcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLlibcir_93); goto lRet;}
        {aRet = ((Ptr) GLlibcir_90); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_90() {      /* 106 */
   {    register Ptr aRet;
        GIa1 = GYlibcir[28];
        (--GIsp)->Val = ((Ptr) GLlibcir_95);
        {aRet = ((Ptr) GLlibcir_42); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_95() {      /* call_libcir_94 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_97);
        {aRet = ((Ptr) GLlibcir_14); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_97() {      /* call_libcir_96 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = (Ptr) 41;
        GIa4 = (Ptr) 1;
        {aRet = (GYlibcir[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_93() {      /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibcir_98);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYlibcir[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_98() {      /* 108 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_100);
        {aRet = ((Ptr) GLlibcir_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_100() {     /* call_libcir_99 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLlibcir_56); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_42() {      /* #:libcir:prin-one */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLlibcir_101);
        GIa4 = (Ptr) 0;
        {aRet = (GYlibcir[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_101() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibcir_102);
        GIa4 = (Ptr) 0;
        {aRet = (GYlibcir[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_102() {     /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        GIa3 = (rSp++)->Val;
        if ((Fix) (GIa3) < (Fix) (rA4)) {aRet = ((Ptr) GLlibcir_103); goto lRet;}
        (--rSp)->Val = ((Ptr) GLlibcir_103);
        rA4 = (Ptr) 0;
        {aRet = (GYlibcir[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibcir_103() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLlibcir_104); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_104() {     /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_107;
        (--rSp)->Val = ((Ptr) GLlibcir_104);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (GYlibcir[17] + 2)->Val; goto lRet;}
l_107:
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibcir_105() {     /* #:libcir:double */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibcir; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibcir_106);
        (--rSp)->Val = rLit[32]->Val;
        (--rSp)->Val = rLit[32]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_106() {     /* 101 */
   {    register Ptr aRet;
        GIa2 = GInil;
        (--GIsp)->Val = ((Ptr) GLlibcir_108);
        {aRet = (GYlibcir[34] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_108() {     /* call_libcir_107 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLlibcir_109);
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rLit[3]->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rLit[32]->Val;
        GIa4 = (Ptr) 5;
        {aRet = (rLit[35] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_109() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibcir; rSp = GIsp;
        rLit[3]->Val = rSp->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_110);
        (--rSp)->Val = rLit[32]->Val;
        (--rSp)->Val = rLit[32]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_110() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYlibcir[32]->Val = GIa1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_111() {     /* #:libcir:replace */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        rA2 = rLit[6]->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLlibcir_112); goto lRet;}
        rA2 = rLit[6]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rLit[6]->Val = rA1;
        rA4 = rSp->Val;
        if (rA4->Val != rLit[36]->Val)  goto l_104;
        rA4->Val = rLit[37]->Val;
        {aRet = ((Ptr) GLlibcir_113); goto lRet;}
l_104:
        rA1 = rA4->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_113);
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLlibcir_113() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYlibcir; rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        if ((rA4 + 1)->Val != rLit[36]->Val)    goto l_106;
        (rA4 + 1)->Val = rLit[37]->Val;
        GIa1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_106:
        GIa1 = (rA4 + 1)->Val;
        rSp += (Fix) 1;
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibcir_112() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBstrg, rBsymb;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBstrg = GIbstrg; rBsymb = GIbsymb;
        if (rLit[11]->Val == rNil)      goto l_108;
        if ((rSp->Val < rBsymb) || (rSp->Val >= GIbcons))       goto l_108;
        rA4 = rSp->Val;
        if ((rA4 + 3)->Val == rNil)     goto l_108;
        rA2 = rLit[6]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rLit[6]->Val = rA1;
        rA4 = rSp->Val;
        if ((rA4 + 3)->Val != rLit[36]->Val)    goto l_110;
        (rA4 + 3)->Val = rLit[37]->Val;
        rA1 = rLit[37]->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_110:
        rA1 = (rA4 + 3)->Val;
        rSp += (Fix) 1;
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
l_108:
        if ((rSp->Val < rBstrg) || (rSp->Val >= rBsymb))        goto l_112;
        rA4 = rSp->Val;
        if ((rA4 + 1)->Val == rLit[21]) goto l_112;
        rA2 = rLit[6]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rLit[6]->Val = rA1;
        rA4 = rSp->Val;
        if ((rA4 + 1)->Val != rLit[36]->Val)    goto l_114;
        (rA4 + 1)->Val = rLit[37]->Val;
        rA1 = rLit[37]->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_114:
        rA1 = (rA4 + 1)->Val;
        rSp += (Fix) 1;
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
l_112:
        if ((rSp->Val < GIbvect) || (rSp->Val >= rBstrg))       {aRet = ((Ptr) GLlibcir_114); goto lRet;}
        rA2 = rLit[6]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rLit[6]->Val = rA1;
        rA4 = rSp->Val;
        if ((rA4 + 1)->Val == rLit[10]) {aRet = ((Ptr) GLlibcir_115); goto lRet;}
        if ((rA4 + 1)->Val != rLit[36]->Val)    goto l_120;
        (rA4 + 1)->Val = rLit[37]->Val;
        {aRet = ((Ptr) GLlibcir_115); goto lRet;}
l_120:
        rA1 = (rA4 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_115);
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLlibcir_115() {     /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp->Val->Val + 1)->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_117);
        {aRet = (GYlibcir[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_117() {     /* call_libcir_116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLlibcir_118); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_118() {     /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibcir_119);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYlibcir[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_119() {     /* 124 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibcir; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLlibcir_120); goto lRet;}
        GIa4 = ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        if (GIa4 != rLit[36]->Val)      goto l_125;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = rLit[37]->Val;
        {aRet = ((Ptr) GLlibcir_121); goto lRet;}
l_125:
        GIa1 = ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_121);
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_121() {     /* 126 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibcir_122);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibcir[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_122() {     /* 127 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLlibcir_118); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_120() {     /* 123 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_114() {     /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_123() {     /* cirnequal */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLlibcir_125);
        {aRet = (GYlibcir[41] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_125() {     /* call_libcir_124 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_101;
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = GYlibcir[12];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_126() {     /* cirequal */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYlibcir; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[42];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[43]->Val;
        rLit[43]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[44]->Val;
        rLit[44]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[45];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLlibcir_128);
        {aRet = ((Ptr) GLlibcir_129); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_128() {     /* call_libcir_127 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibcir; rSp = GIsp;
        GIa1 = rLit[12];
        GIdlink = (rSp + 1)->Val;
        rLit[44]->Val = (rSp + 6)->Val;
        rLit[43]->Val = (rSp + 7)->Val;
        rSp += (Fix) 10;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_129() {     /* #:libcir:equal */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA1 = (rA1 == rA2) ? rLit[12] : rNil;
        if (rA1 != rNil)        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        rA2 = rLit[44]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_102;
        rA2 = rLit[44]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = rA1;
        rA2 = rLit[43]->Val;
        rA1 = (rSp + 2)->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        rA1 = llrt_call_length (rA1, rBcons);
        GIa4 = (rSp++)->Val;
        if (GIa4 == rA1)        goto l_104;
        rA1 = rNil;
        rA2 = rLit[42];
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_131);
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLlibcir_131() {     /* call_libcir_130 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLlibcir_132); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_134);
        {aRet = (GYlibcir[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_134() {     /* call_libcir_133 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 != rNil)        goto l_109;
        rA1 = rNil;
        rA2 = rLit[42];
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
l_109:
        rA2 = rLit[44]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[44]->Val = rA1;
        rA2 = rLit[43]->Val;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[43]->Val = rA1;
        rA1 = rSp->Val;
        rA2 = (rSp + 1)->Val;
        rA2 = rA2->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_136);
        {aRet = ((Ptr) GLlibcir_129); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLlibcir_136() {     /* call_libcir_135 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA1 = rSp->Val;
        rA2 = (rSp + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLlibcir_129); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLlibcir_132() {     /* 106 */
   {    register Ptr aRet, rSp, rBcons;
        rSp = GIsp; rBcons = GIbcons;
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLlibcir_137); goto lRet;}
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLlibcir_138); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_140);
        {aRet = (GYlibcir[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_140() {     /* call_libcir_139 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLlibcir_141); goto lRet;}
        {aRet = ((Ptr) GLlibcir_138); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_138() {     /* 114 */
   {    register Ptr aRet, *rLit;
        rLit = GYlibcir;
        GIa1 = GInil;
        GIa2 = rLit[42];
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_141() {     /* 113 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rLit[44]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[44]->Val = rA1;
        rA2 = rLit[43]->Val;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[43]->Val = rA1;
        rA1 = rSp->Val;
        rA2 = (rSp + 1)->Val;
        rA2 = rA2->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_143);
        {aRet = ((Ptr) GLlibcir_129); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLlibcir_143() {     /* call_libcir_142 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA1 = rSp->Val;
        rA2 = (rSp + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLlibcir_129); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLlibcir_137() {     /* 110 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBvect, rBstrg;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBvect = GIbvect; rBstrg = GIbstrg;
        if ((rSp->Val < rBvect) || (rSp->Val >= rBstrg))        {aRet = ((Ptr) GLlibcir_144); goto lRet;}
        if (((rSp + 1)->Val < rBvect) || ((rSp + 1)->Val >= rBstrg))    goto l_119;
        rA4 = (rSp->Val->Val + 1)->Val;
        rA3 = ((rSp + 1)->Val->Val + 1)->Val;
        if (rA4 == rA3) goto l_118;
l_119:
        rA1 = rNil;
        rA2 = rLit[42];
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
l_118:
        rA4 = rSp->Val;
        rA3 = (rSp + 1)->Val;
        if ((rA4 + 1)->Val == (rA3 + 1)->Val)   goto l_121;
        rA1 = rNil;
        rA2 = rLit[42];
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
l_121:
        rA2 = rLit[44]->Val;
        rA1 = rA4;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rLit[44]->Val = rA1;
        rA2 = rLit[43]->Val;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rLit[43]->Val = rA1;
        rA1 = (rSp->Val->Val + 1)->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_146);
        {aRet = (rLit[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLlibcir_146() {     /* call_libcir_145 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLlibcir_147); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_147() {     /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibcir_148);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYlibcir[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_148() {     /* 124 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLlibcir_149); goto lRet;}
        GIa1 = ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        GIa2 = ((rSp + 3)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_151);
        {aRet = ((Ptr) GLlibcir_129); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_151() {     /* call_libcir_150 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibcir_152);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibcir[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_152() {     /* 125 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLlibcir_147); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_149() {     /* 123 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_144() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBsymb, rBcons;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBsymb = GIbsymb; rBcons = GIbcons;
        if (rLit[11]->Val == rNil)      goto l_126;
        if ((rSp->Val < rBsymb) || (rSp->Val >= rBcons))        goto l_126;
        rA4 = rSp->Val;
        if ((rA4 + 3)->Val == rNil)     goto l_126;
        if (((rSp + 1)->Val < rBsymb) || ((rSp + 1)->Val >= rBcons))    goto l_130;
        rA4 = (rSp + 1)->Val;
        if ((rA4 + 3)->Val != rNil)     goto l_129;
l_130:
        rA1 = rNil;
        rA2 = rLit[42];
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
l_129:
        rA2 = rLit[44]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rLit[44]->Val = rA1;
        rA2 = rLit[43]->Val;
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rLit[43]->Val = rA1;
        rA1 = rSp->Val;
        rA2 = (rSp + 1)->Val;
        rA2 = (rA2 + 3)->Val;
        rA1 = (rA1 + 3)->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLlibcir_129); goto lRet;}
l_126:
        rA2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_154);
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLlibcir_154() {     /* call_libcir_153 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_131;
        rA1 = rNil;
        GIa2 = rLit[42];
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_131:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_155() {     /* circopy */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYlibcir; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[48]->Val;
        rLit[48]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[6]->Val;
        rLit[6]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[49];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLlibcir_157);
        {aRet = ((Ptr) GLlibcir_158); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_157() {     /* call_libcir_156 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYlibcir; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[6]->Val = (rSp + 6)->Val;
        rLit[48]->Val = (rSp + 7)->Val;
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_158() {     /* #:libcir:copy */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        rA2 = rLit[6]->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLlibcir_159); goto lRet;}
        rA2 = rLit[6]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        rA1 = llrt_call_length (rA1, rBcons);
        rA2 = rLit[48]->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_161);
        {aRet = (rLit[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLlibcir_161() {     /* call_libcir_160 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GIa1->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_159() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_163);
        {aRet = (GYlibcir[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_163() {     /* call_libcir_162 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 == rNil)        {aRet = ((Ptr) GLlibcir_164); goto lRet;}
        rA2 = rLit[6]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[6]->Val = rA1;
        rA2 = rNil;
        rA1 = rNil;
        (--rSp)->Val = ((Ptr) GLlibcir_166);
        {aRet = (rLit[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLlibcir_166() {     /* call_libcir_165 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa2 = rLit[48]->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[48]->Val = rA1;
        rA1 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_168);
        {aRet = ((Ptr) GLlibcir_158); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_168() {     /* call_libcir_167 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = rSp->Val;
        rA4->Val = rA1;
        (--rSp)->Val = rA4;
        rA1 = (rSp + 2)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_170);
        {aRet = ((Ptr) GLlibcir_158); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLlibcir_170() {     /* call_libcir_169 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4 + 1)->Val = GIa1;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_164() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLlibcir_171); goto lRet;}
        rA2 = rLit[6]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[6]->Val = rA1;
        rA1 = rNil;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rNil);
        (--rSp)->Val = rA1;
        rA2 = rLit[48]->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[48]->Val = rA1;
        rA1 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_173);
        {aRet = ((Ptr) GLlibcir_158); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLlibcir_173() {     /* call_libcir_172 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = rSp->Val;
        rA4->Val = rA1;
        (--rSp)->Val = rA4;
        rA1 = (rSp + 2)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_175);
        {aRet = ((Ptr) GLlibcir_158); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLlibcir_175() {     /* call_libcir_174 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4 + 1)->Val = GIa1;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_171() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if ((rSp->Val < GIbvect) || (rSp->Val >= GIbstrg))      {aRet = ((Ptr) GLlibcir_176); goto lRet;}
        rA2 = rLit[6]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[6]->Val = rA1;
        rA1 = (rSp->Val->Val + 1)->Val;
        rA2 = GInil;
        (--rSp)->Val = ((Ptr) GLlibcir_178);
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLlibcir_178() {     /* call_libcir_177 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYlibcir; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa2 = rLit[48]->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[48]->Val = rA1;
        rA1 = ((rSp + 1)->Val->Val + 1)->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_180);
        {aRet = (rLit[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLlibcir_180() {     /* call_libcir_179 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLlibcir_181); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_181() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLlibcir_182);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYlibcir[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_182() {     /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLlibcir_183); goto lRet;}
        GIa1 = ((rSp + 3)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        (--rSp)->Val = ((Ptr) GLlibcir_185);
        {aRet = ((Ptr) GLlibcir_158); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_185() {     /* call_libcir_184 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLlibcir_186);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYlibcir[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLlibcir_186() {     /* 112 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLlibcir_181); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLlibcir_183() {     /* 110 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 2;
        rA4 = (rSp + 1)->Val;
        if ((rA4 + 1)->Val == GYlibcir[10])     goto l_114;
        GIa3 = rSp->Val;
        (GIa3 + 1)->Val = (rA4 + 1)->Val;
l_114:
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLlibcir_176() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (GYlibcir[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDlibcir_187() {     /* trace cirprint */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibcir,53,54,55);
  lRet:  return (aRet);}}

static Ptr GDlibcir_188() {     /* trace cirprinflush */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibcir,56,54,55);
  lRet:  return (aRet);}}

static Ptr GDlibcir_189() {     /* trace cirprin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibcir,0,54,55);
  lRet:  return (aRet);}}

static Ptr GDlibcir_190() {     /* trace #:libcir:double */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibcir,57,54,58);
  lRet:  return (aRet);}}

static Ptr GDlibcir_191() {     /* trace #:libcir:replace */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibcir,38,54,55);
  lRet:  return (aRet);}}

static Ptr GDlibcir_192() {     /* trace cirnequal */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibcir,59,54,60);
  lRet:  return (aRet);}}

static Ptr GDlibcir_193() {     /* trace cirequal */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibcir,41,54,60);
  lRet:  return (aRet);}}

static Ptr GDlibcir_194() {     /* trace circopy */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYlibcir,61,54,55);
  lRet:  return (aRet);}}

