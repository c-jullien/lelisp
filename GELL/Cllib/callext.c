/* GELL 15.26: source file for the module: "callext" */
/*             translation done:           "Wed June 16 93 18:01:50 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "callext.h" 

static Ptr GLcallext_1() {      /* #:system:cached-getglobal */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa1;
        if (rLit[0]->Val != GInil)      {aRet = ((Ptr) GLcallext_2); goto lRet;}
        (--rSp)->Val = ((Ptr) GLcallext_4);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_4() {      /* call_callext_3 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = (GYcallext[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_2() {      /* 101 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (Ptr) 0;
        rA1 = (Ptr) 0;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_6);
        {aRet = (GYcallext[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_6() {      /* call_callext_5 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = rLit[3]->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rLit[3]->Val = rA1;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLcallext_7() {      /* getinlib */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        if (rLit[4]->Val == GInil)      {aRet = ((Ptr) GLcallext_8); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = ((Ptr) GLcallext_10);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_10() {     /* call_callext_9 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLcallext_11);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYcallext[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_11() {     /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLcallext_13);
        {aRet = (GYcallext[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_13() {     /* call_callext_12 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLcallext_14);
        (--rSp)->Val = GYcallext[6];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLcallext_15); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_15() {     /* 106 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLcallext_16); goto lRet;}
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLcallext_18);
        {aRet = ((Ptr) GLcallext_19); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_18() {     /* call_callext_17 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rSp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLcallext_15); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_16() {     /* 107 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYcallext[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_14() {     /* 105 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = (rSp + 5)->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLcallext_20); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_8() {      /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLcallext_22);
        {aRet = (GYcallext[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_22() {     /* call_callext_21 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[9];
        rA1 = rLit[10];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_23() {     /* defextern */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rNil, rBcons;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rLit[11]->Val;
        rLit[11]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = ((Ptr) GLcallext_23);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA1;
        if ((long) rA4 >= (long) rBcons)        goto l_103;
        if (rA4 != rNil)        goto l_101;
l_103:
        (rSp + 3)->Val = rNil;
        (rSp + 2)->Val = rA4;
        goto l_102;
l_101:
        (rSp + 2)->Val = rA3->Val;
        (rSp + 12)->Val = (rA3 + 1)->Val;
        if ((rA4 < GIbstrg) || (rA4 >= GIbsymb))        goto l_104;
        rA3 = (rA4->Val + 1)->Val;
        if (rA3 != (Ptr) 0)     goto l_104;
        rA3 = rNil;
        goto l_105;
l_104:
        rA3 = rA4;
l_105:
        (rSp + 3)->Val = rA3;
l_102:
        rA4 = (rSp + 12)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        if (rA4 != rNil)        goto l_106;
        rA4 = rLit[11]->Val;
l_106:
        (rSp + 4)->Val = rA4;
        rA3 = (rSp + 12)->Val;
        rA3 = rA3->Val;
        if (rA3 != rNil)        goto l_107;
        rA3 = rLit[13];
l_107:
        (rSp + 1)->Val = rA3;
        if ((long) rA3 < (long) rBcons) goto l_109;
        GIa2 = rLit[14];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_109:
        if ((rSp + 3)->Val == rNil)     {aRet = ((Ptr) GLcallext_24); goto lRet;}
        (--rSp)->Val = ((Ptr) GLcallext_25);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        rA3 = (rSp + 4)->Val;
        GIa2 = (rSp + 5)->Val;
        rA1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_27);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLcallext_27() {     /* call_callext_26 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = ((Ptr) GLcallext_28); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_24() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLcallext_25);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_30);
        {aRet = (GYcallext[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_30() {     /* call_callext_29 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (GYcallext[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_25() {     /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 5;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYcallext[11]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_31() {     /* buildextern */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYcallext; rSp = GIsp; rNil = GInil;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = rLit[17];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = rLit[11]->Val;
        rLit[11]->Val = (rSp + 4)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[19];
        (--rSp)->Val = ((Ptr) GLcallext_31);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLcallext_32);
        (--rSp)->Val = rLit[11]->Val;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = ((Ptr) GLcallext_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_32() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYcallext[11]->Val = (rSp + 6)->Val;
        rSp += (Fix) 11;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_28() {     /* buildlibextern */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj5);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = ((Ptr) GLcallext_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_33() {     /* #:callext:build */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (Ptr) 1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_35);
        {aRet = ((Ptr) GLcallext_36); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_35() {     /* call_callext_34 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        {aRet = ((Ptr) GLcallext_37); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_37() {     /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rBcons;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLcallext_38); goto lRet;}
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLcallext_38); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        rA3 = rSp->Val;
        rSp->Val = (rA3 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rA3->Val;
        rA1 = (rSp + 1)->Val;
        if (rA1 == rLit[20])    goto l_105;
        if (rA1 != rLit[21])    {aRet = ((Ptr) GLcallext_39); goto lRet;}
l_105:
        (--rSp)->Val = ((Ptr) GLcallext_40);
        (--rSp)->Val = rLit[22];
        (--rSp)->Val = ((Ptr) GLcallext_41);
        (--rSp)->Val = rLit[23];
        (--rSp)->Val = ((Ptr) GLcallext_42);
        (--rSp)->Val = rLit[24];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLcallext_42() {     /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLcallext_43);
        (--rSp)->Val = rLit[26];
        (--rSp)->Val = ((Ptr) GLcallext_44);
        (--rSp)->Val = rLit[27];
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_44() {     /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLcallext_45);
        (--rSp)->Val = rLit[24];
        (--rSp)->Val = ((Ptr) GLcallext_46);
        (--rSp)->Val = rLit[28];
        {register Ptr aux;
                aux = (rSp + 12)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_46() {     /* 112 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_45() {     /* 111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLcallext_47);
        (--rSp)->Val = rLit[24];
        (--rSp)->Val = ((Ptr) GLcallext_48);
        (--rSp)->Val = rLit[29];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_48() {     /* 114 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_47() {     /* 113 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_43() {     /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_41() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLcallext_49);
        (--rSp)->Val = rLit[30];
        (--rSp)->Val = ((Ptr) GLcallext_50);
        (--rSp)->Val = rLit[31];
        (--rSp)->Val = rLit[11]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_50() {     /* 116 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[32];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_49() {     /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_40() {     /* 106 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 6)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 6)->Val = rA1;
        {aRet = ((Ptr) GLcallext_51); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_39() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1;
        if (rA1 == rLit[13])    goto l_118;
        if (rA1 != rLit[33])    {aRet = ((Ptr) GLcallext_52); goto lRet;}
l_118:
        (--rSp)->Val = ((Ptr) GLcallext_53);
        (--rSp)->Val = rLit[22];
        (--rSp)->Val = ((Ptr) GLcallext_54);
        (--rSp)->Val = rLit[24];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_54() {     /* 120 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLcallext_55);
        (--rSp)->Val = rLit[30];
        (--rSp)->Val = ((Ptr) GLcallext_56);
        (--rSp)->Val = rLit[31];
        (--rSp)->Val = rLit[11]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_56() {     /* 122 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[34];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_55() {     /* 121 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_53() {     /* 119 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 6)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 6)->Val = rA1;
        {aRet = ((Ptr) GLcallext_51); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_52() {     /* 117 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1;
        if (rA1 == rLit[35])    goto l_124;
        if (rA1 != rLit[36])    {aRet = ((Ptr) GLcallext_57); goto lRet;}
l_124:
        (--rSp)->Val = ((Ptr) GLcallext_58);
        (--rSp)->Val = rLit[22];
        (--rSp)->Val = ((Ptr) GLcallext_59);
        (--rSp)->Val = rLit[37];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_59() {     /* 126 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLcallext_60);
        (--rSp)->Val = rLit[30];
        (--rSp)->Val = ((Ptr) GLcallext_61);
        (--rSp)->Val = rLit[31];
        (--rSp)->Val = rLit[11]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_61() {     /* 128 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[38];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_60() {     /* 127 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_58() {     /* 125 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 6)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 6)->Val = rA1;
        {aRet = ((Ptr) GLcallext_51); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_57() {     /* 123 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        if (GIa1 != rLit[1])    {aRet = ((Ptr) GLcallext_62); goto lRet;}
        (--rSp)->Val = ((Ptr) GLcallext_63);
        (--rSp)->Val = rLit[22];
        (--rSp)->Val = ((Ptr) GLcallext_64);
        (--rSp)->Val = rLit[39];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_64() {     /* 131 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLcallext_65);
        (--rSp)->Val = rLit[30];
        (--rSp)->Val = ((Ptr) GLcallext_66);
        (--rSp)->Val = rLit[31];
        (--rSp)->Val = rLit[11]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_66() {     /* 133 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[40];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_65() {     /* 132 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_63() {     /* 130 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 6)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 6)->Val = rA1;
        {aRet = ((Ptr) GLcallext_51); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_62() {     /* 129 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1;
        if (rA1 == rLit[6])     goto l_135;
        if (rA1 == rLit[41])    goto l_135;
        if (rA1 != rLit[42])    {aRet = ((Ptr) GLcallext_51); goto lRet;}
l_135:
        (--rSp)->Val = ((Ptr) GLcallext_67);
        (--rSp)->Val = rLit[22];
        (--rSp)->Val = ((Ptr) GLcallext_68);
        (--rSp)->Val = rLit[43];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_68() {     /* 137 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLcallext_69);
        (--rSp)->Val = rLit[30];
        (--rSp)->Val = ((Ptr) GLcallext_70);
        (--rSp)->Val = rLit[31];
        (--rSp)->Val = rLit[11]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_70() {     /* 139 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[44];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_69() {     /* 138 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_67() {     /* 136 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 6)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 6)->Val = rA1;
        {aRet = ((Ptr) GLcallext_51); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_51() {     /* 103 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLcallext_37); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_38() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rSp += (Fix) 2;
        rA1 = (rSp + 2)->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        (rSp + 2)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLcallext_71);
        if ((rSp + 6)->Val == GInil)    goto l_142;
        rA4 = rLit[45];
        goto l_143;
l_142:
        rA4 = rLit[46];
l_143:
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLcallext_72);
        (--rSp)->Val = rLit[47];
        rA1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_74);
        {aRet = (rLit[48] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLcallext_74() {     /* call_callext_73 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      goto l_145;
        GIa3 = (rSp + 10)->Val;
        {aRet = ((Ptr) GLcallext_75); goto lRet;}
l_145:
        GIa1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_77);
        {aRet = (GYcallext[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_77() {     /* call_callext_76 */
   {    register Ptr aRet;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLcallext_75); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_75() {     /* 146 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYcallext; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = ((Ptr) GLcallext_78);
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = ((Ptr) GLcallext_79);
        (--rSp)->Val = rLit[49];
        if ((rSp + 16)->Val == rNil)    {aRet = ((Ptr) GLcallext_80); goto lRet;}
        (--rSp)->Val = ((Ptr) GLcallext_81);
        (--rSp)->Val = rLit[10];
        GIa1 = (rSp + 20)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_83);
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_83() {     /* call_callext_82 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 19)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_85);
        {aRet = (GYcallext[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_85() {     /* call_callext_84 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 19)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_87);
        {aRet = (GYcallext[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_87() {     /* call_callext_86 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_81() {     /* 151 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLcallext_88); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_80() {     /* 149 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLcallext_89);
        (--rSp)->Val = rLit[16];
        GIa1 = (rSp + 20)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_91);
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_91() {     /* call_callext_90 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_89() {     /* 152 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLcallext_88); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_88() {     /* 150 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa4;
        GIa4 = (Ptr) 2;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_79() {     /* 148 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_78() {     /* 147 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 5;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_72() {     /* 144 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_93);
        {aRet = ((Ptr) GLcallext_94); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_93() {     /* call_callext_92 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLcallext_95); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_95() {     /* 153 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rBcons;
        rLit = GYcallext; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        if ((long) (rSp + 2)->Val < (long) rBcons)      {aRet = ((Ptr) GLcallext_96); goto lRet;}
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLcallext_96); goto lRet;}
        rA4 = (rSp + 2)->Val;
        (rSp + 2)->Val = (rA4 + 1)->Val;
        rA3 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA3 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rA3->Val;
        if ((rSp + 1)->Val == rLit[20]) goto l_157;
        if ((rSp + 1)->Val != rLit[21]) {aRet = ((Ptr) GLcallext_97); goto lRet;}
l_157:
        (--rSp)->Val = ((Ptr) GLcallext_98);
        (--rSp)->Val = ((Ptr) GLcallext_99);
        (--rSp)->Val = rLit[50];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLcallext_99() {     /* 159 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_101);
        {aRet = ((Ptr) GLcallext_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_101() {    /* call_callext_100 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_97() {     /* 155 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLcallext_98);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_103);
        {aRet = ((Ptr) GLcallext_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_103() {    /* call_callext_102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_98() {     /* 156 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLcallext_105);
        {aRet = (GYcallext[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_105() {    /* call_callext_104 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLcallext_95); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_96() {     /* 154 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 3;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 4;
        {aRet = (GYcallext[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_71() {     /* 141 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        if ((rSp + 3)->Val == rLit[20]) goto l_163;
        if ((rSp + 3)->Val != rLit[21]) {aRet = ((Ptr) GLcallext_106); goto lRet;}
l_163:
        (--rSp)->Val = ((Ptr) GLcallext_107);
        (--rSp)->Val = rLit[53];
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_107() {    /* 164 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLcallext_106); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_106() {    /* 162 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_109);
        {aRet = (GYcallext[48] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_109() {    /* call_callext_108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLcallext_110); goto lRet;}
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_112);
        {aRet = (GYcallext[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_112() {    /* call_callext_111 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLcallext_110); goto lRet;}
        GIa3 = (rSp + 7)->Val;
        GIa2 = rLit[55];
        rA1 = rLit[15];
        rSp += (Fix) 8;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_110() {    /* 165 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj8);
        (--rSp)->Val = rLit[56];
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa2 = (rSp + 5)->Val;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_114);
        {aRet = (rLit[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_114() {    /* call_callext_113 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYcallext[52] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_36() {     /* #:callext:build-parameter-list */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLcallext_115); goto lRet;}
        (--rSp)->Val = ((Ptr) GLcallext_116);
        (--rSp)->Val = rLit[58];
        (--rSp)->Val = rA2;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[59] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_116() {    /* 103 */
   {    register Ptr aRet, *rLit;
        rLit = GYcallext;
        GIa2 = GIa1;
        GIa1 = rLit[60];
        (--GIsp)->Val = ((Ptr) GLcallext_118);
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_118() {    /* call_callext_117 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA1 = (rSp + 1)->Val;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        GIa2 = rA4;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_120);
        {aRet = ((Ptr) GLcallext_36); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLcallext_120() {    /* call_callext_119 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_115() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_121() {    /* calllibextern */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rLit[4]->Val == GInil)      {aRet = ((Ptr) GLcallext_122); goto lRet;}
        rA4 = (rA1 + 1)->Val;
        GIa3 = (rA1 + 1)->Val;
        (--rSp)->Val = rA1->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = (GIa3 + 1)->Val;
        (--rSp)->Val = ((Ptr) GXpopj3);
        (--rSp)->Val = rLit[46];
        (--rSp)->Val = rLit[62];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLcallext_123);
        (--rSp)->Val = rLit[50];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLcallext_123() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 6;
        {aRet = (GYcallext[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_122() {    /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLcallext_125);
        {aRet = (GYcallext[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_125() {    /* call_callext_124 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYcallext; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[9];
        rA1 = rLit[45];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_19() {     /* #:callext:conv-ll-to-extern */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1;
        if (rA1 == rLit[20])    goto l_103;
        if (rA1 != rLit[21])    goto l_102;
l_103:
        rA1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rA1 != rLit[13])    goto l_104;
        rA1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        if (rA1 != rLit[35])    goto l_105;
        rA1 = (Ptr) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        if (rA1 != rLit[1])     goto l_106;
        rA1 = (Ptr) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_106:
        if (rA1 != rLit[6])     goto l_107;
        rA1 = (Ptr) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_107:
        if (rA1 != rLit[33])    goto l_108;
        rA1 = (Ptr) 5;
        {aRet = (rSp++)->Val; goto lRet;}
l_108:
        if (rA1 != rLit[36])    goto l_109;
        rA1 = (Ptr) 6;
        {aRet = (rSp++)->Val; goto lRet;}
l_109:
        if (rA1 != rLit[41])    goto l_110;
        rA1 = (Ptr) 7;
        {aRet = (rSp++)->Val; goto lRet;}
l_110:
        if (rA1 != rLit[42])    goto l_111;
        if (rLit[63] != rLit[63])       goto l_112;
        rA1 = (Ptr) 8;
        {aRet = (rSp++)->Val; goto lRet;}
l_112:
        GIa3 = rLit[64];
        GIa2 = rLit[65];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_111:
        if (rA1 != rLit[66])    goto l_114;
l_115:
        rA1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_114:
        GIa3 = rA1;
        GIa2 = rLit[67];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_94() {     /* #:callext:conv-extern-to-ll */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1;
        if (rA1 == rLit[20])    goto l_103;
        if (rA1 != rLit[21])    goto l_102;
l_103:
        rA1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rA1 != rLit[13])    goto l_104;
        rA1 = (Ptr) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_104:
        if (rA1 != rLit[35])    goto l_105;
        rA1 = (Ptr) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        if (rA1 != rLit[1])     goto l_106;
        rA1 = (Ptr) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_106:
        if (rA1 != rLit[66])    goto l_107;
l_108:
        rA1 = (Ptr) 0;
        {aRet = (rSp++)->Val; goto lRet;}
l_107:
        GIa3 = rA1;
        GIa2 = rLit[65];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_126() {    /* defextern-cache */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        rA1 = rSp->Val;
        if (rA1 != (Ptr) 0)     goto l_102;
        rA1 = rLit[0]->Val;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rA1 != (Ptr) 1)     {aRet = ((Ptr) GLcallext_127); goto lRet;}
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        if (rA4 != rNil)        {aRet = ((Ptr) GLcallext_128); goto lRet;}
        if (rLit[0]->Val == rNil)       {aRet = ((Ptr) GLcallext_128); goto lRet;}
        (--rSp)->Val = ((Ptr) GLcallext_129);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLcallext_131);
        {aRet = ((Ptr) GLcallext_132); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLcallext_131() {    /* call_callext_130 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLcallext_129); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_129() {    /* 106 */
   {    register Ptr aRet;
        GYcallext[0]->Val = GInil;
        GIa1 = (GIsp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_128() {    /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        GYcallext[0]->Val = rA4;
        GIa1 = rA4;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLcallext_127() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        GIa3 = (Ptr) 1;
        GIa2 = rLit[68];
        GIa1 = rLit[69];
        GIsp = rSp; GIa1 = llrt_call_error ();
l_101:
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_132() {    /* getglobal-flush-cache */
   {    register Ptr aRet, *rLit;
        rLit = GYcallext;
        if (rLit[3]->Val == GInil)      {aRet = ((Ptr) GLcallext_133); goto lRet;}
        GIa1 = rLit[70];
        (--GIsp)->Val = ((Ptr) GLcallext_135);
        {aRet = (rLit[71] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_135() {    /* call_callext_134 */
   {    register Ptr aRet, *rLit;
        rLit = GYcallext;
        GIa2 = rLit[3]->Val;
        (--GIsp)->Val = ((Ptr) GLcallext_137);
        {aRet = (rLit[72] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_137() {    /* call_callext_136 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GYcallext[3]->Val = rA1;
        (--rSp)->Val = ((Ptr) GLcallext_138);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLcallext_139); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_139() {    /* 105 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLcallext_140); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLcallext_142);
        {aRet = (GYcallext[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLcallext_142() {    /* call_callext_141 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLcallext_139); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_140() {    /* 106 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA1;
        GIa2 = rNil;
        (--rSp)->Val = ((Ptr) GLcallext_144);
        {aRet = ((Ptr) GLcallext_145); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_144() {    /* call_callext_143 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = rSp->Val;
        GIa1 = GYcallext[3]->Val;
        (--rSp)->Val = ((Ptr) GLcallext_147);
        {aRet = ((Ptr) GLcallext_148); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_147() {    /* call_callext_146 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYcallext; rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLcallext_149); goto lRet;}
        rA1 = rLit[73];
        (--rSp)->Val = ((Ptr) GLcallext_151);
        {aRet = (rLit[71] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_151() {    /* call_callext_150 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GYcallext[3]->Val;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLcallext_152); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_152() {    /* 109 */
   {    register Ptr aRet, rSp, rA1, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLcallext_153); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = rSp->Val;
        GIa2 = (rSp + 5)->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_memq (rA1, GIa2, rBcons, rNil);
        if (rA1 == rNil)        goto l_111;
        (--rSp)->Val = ((Ptr) GLcallext_154);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (GYcallext[25] + 2)->Val; goto lRet;}
l_111:
        rA1 = rNil;
        {aRet = ((Ptr) GLcallext_154); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLcallext_154() {    /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLcallext_156);
        {aRet = (GYcallext[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_156() {    /* call_callext_155 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLcallext_152); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_153() {    /* 110 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        GIa2 = rA1;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_158);
        {aRet = (GYcallext[72] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_158() {    /* call_callext_157 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLcallext_159); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_159() {    /* 114 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLcallext_160); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLcallext_162);
        {aRet = (GYcallext[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLcallext_162() {    /* call_callext_161 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (Ptr) ((unsigned char) *(((char *) (rA1->Val + 2)) + (Fix) 0));
        if (rA4 != (Ptr) 95)    {aRet = ((Ptr) GLcallext_163); goto lRet;}
        (--rSp)->Val = ((Ptr) GLcallext_163);
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        rA4 = (Ptr) 2;
        {aRet = (GYcallext[74] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLcallext_163() {    /* 117 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLcallext_159); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_160() {    /* 115 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rNil;
        GIa2 = rNil;
        (--rSp)->Val = ((Ptr) GLcallext_165);
        {aRet = ((Ptr) GLcallext_145); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_165() {    /* call_callext_164 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 1)->Val;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_167);
        {aRet = ((Ptr) GLcallext_148); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_167() {    /* call_callext_166 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLcallext_168); goto lRet;}
        (--rSp)->Val = rA1;
        {aRet = ((Ptr) GLcallext_169); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_169() {    /* 121 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLcallext_170); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa2 = rSp->Val;
        GIa1 = GInil;
        (--rSp)->Val = ((Ptr) GLcallext_172);
        {aRet = (GYcallext[61] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLcallext_172() {    /* call_callext_171 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLcallext_174);
        {aRet = (GYcallext[75] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_174() {    /* call_callext_173 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLcallext_169); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_170() {    /* 122 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYcallext; rSp = GIsp;
        rSp += (Fix) 1;
        GIa3 = rSp->Val;
        GIa2 = rLit[55];
        GIa1 = rLit[15];
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLcallext_175); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_168() {    /* 119 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = ((Ptr) GLcallext_175); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_175() {    /* 120 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = ((Ptr) GLcallext_176); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_149() {    /* 107 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = ((Ptr) GLcallext_176); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_176() {    /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj0);
        {aRet = ((Ptr) GLcallext_138); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_138() {    /* 103 */
   {    register Ptr aRet;
        GYcallext[3]->Val = GInil;
        GIa1 = (GIsp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_133() {    /* 101 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_148() {    /* #:callext:flush-cache */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLcallext_177); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_177() {    /* 101 */
   {    register Ptr aRet, rSp, rA1, rA3, rA4, rBcons;
        rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLcallext_178); goto lRet;}
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLcallext_178); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        rA3 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA3 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rA3->Val;
        if ((Ptr) 0 != rSp->Val)        goto l_103;
        rA1 = (rSp + 1)->Val;
        GIa2 = (rSp + 4)->Val;
        rA1 = rA1->Val;
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 4)->Val = rA1;
        {aRet = ((Ptr) GLcallext_179); goto lRet;}
l_103:
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLcallext_181);
        {aRet = (GYcallext[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLcallext_181() {    /* call_callext_180 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rBfloat;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBfloat = GIbfloat;
        rSp->Val = rA1;
        rA1 = (rSp + 1)->Val;
        if (rSp->Val >= rBfloat)        goto l_105;
        rA2 = (Ptr) 0;
        goto l_106;
l_105:
        rA2 = rSp->Val;
        rA2 = rA2->Val;
l_106:
        if (rSp->Val >= rBfloat)        goto l_107;
        rA3 = rSp->Val;
        goto l_108;
l_107:
        rA3 = rSp->Val;
        rA3 = (rA3 + 1)->Val;
l_108:
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLcallext_179);
        {aRet = (GYcallext[76] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLcallext_179() {    /* 104 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLcallext_177); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_178() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_182() {    /* cload */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYcallext; rSp = GIsp; rNil = GInil;
        if (rLit[77]->Val == rNil)      {aRet = ((Ptr) GLcallext_183); goto lRet;}
        if (rLit[78]->Val == rNil)      {aRet = ((Ptr) GLcallext_184); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLcallext_185);
        (--rSp)->Val = ((Ptr) GLcallext_187);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_187() {    /* call_callext_186 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = ((Ptr) GLcallext_188);
        GIa4 = (Ptr) 0;
        {aRet = (GYcallext[79] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_188() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLcallext_190);
        {aRet = (GYcallext[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_190() {    /* call_callext_189 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLcallext_191); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_185() {    /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYcallext[79] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_184() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLcallext_192);
        (--rSp)->Val = ((Ptr) GLcallext_194);
        {aRet = (GYcallext[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_194() {    /* call_callext_193 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLcallext_195);
        GIa4 = (Ptr) 0;
        {aRet = (GYcallext[79] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_195() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLcallext_197);
        {aRet = (GYcallext[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLcallext_197() {    /* call_callext_196 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLcallext_191); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_192() {    /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYcallext[79] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_183() {    /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLcallext_199);
        {aRet = (GYcallext[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_199() {    /* call_callext_198 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYcallext; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[9];
        rA1 = rLit[81];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLcallext_145() {    /* llmgetglo */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = ((Ptr) GIa1);      callg_arg2 = ((Ptr) GIa2);      callg_retv = ((long) llmgetglo(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_20() {     /* llgetinlib */
   {    register Ptr aRet;
        if (((GIsp + 3)->Val >= GIbstrg) && ((GIsp + 3)->Val < GIbsymb))        goto l_102;
        GIa3 = (GIsp + 3)->Val;
        GIa2 = GYcallext[82];
        GIa1 = GYcallext[83];
         GIa1 = llrt_call_error ();
l_102:
        if (((GIsp + 2)->Val >= GIbstrg) && ((GIsp + 2)->Val < GIbsymb))        goto l_104;
        GIa3 = (GIsp + 2)->Val;
        GIa2 = GYcallext[82];
        GIa1 = GYcallext[83];
         GIa1 = llrt_call_error ();
l_104:
        if (((GIsp + 1)->Val >= GIbvect) && ((GIsp + 1)->Val < GIbstrg))        goto l_106;
        GIa3 = (GIsp + 1)->Val;
        GIa2 = GYcallext[84];
        GIa1 = GYcallext[83];
         GIa1 = llrt_call_error ();
l_106:
        if (GIsp->Val < GIbfloat)       goto l_108;
        GIa3 = GIsp->Val;
        GIa2 = GYcallext[85];
        GIa1 = GYcallext[83];
         GIa1 = llrt_call_error ();
l_108:
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         callg_arg1 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg2 = ((Ptr) ((GIsp + 2)->Val->Val)+2);
         callg_arg3 = ((Ptr) ((GIsp + 1)->Val->Val)+2);
         callg_arg4 = ((Fix) GIsp->Val);
         callg_retv = ((Ptr) llgetinlib(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) callg_retv);
        }
l_109:
        GIsp += (Fix) 4;
        {aRet = (GYcallext[53] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLcallext_191() {    /* llcload */
   {    register Ptr aRet;
        if (((GIsp + 3)->Val >= GIbstrg) && ((GIsp + 3)->Val < GIbsymb))        goto l_102;
        GIa3 = (GIsp + 3)->Val;
        GIa2 = GYcallext[82];
        GIa1 = GYcallext[86];
         GIa1 = llrt_call_error ();
l_102:
        if ((GIsp + 2)->Val < GIbfloat) goto l_104;
        GIa3 = (GIsp + 2)->Val;
        GIa2 = GYcallext[85];
        GIa1 = GYcallext[86];
         GIa1 = llrt_call_error ();
l_104:
        if ((GIsp + 1)->Val < GIbfloat) goto l_106;
        if ((long) (GIsp + 1)->Val < (long) GIbcons)    goto l_107;
        GIa4 = (GIsp + 1)->Val;
        if (GIa4->Val >= GIbfloat)      goto l_107;
        if ((GIa4 + 1)->Val < GIbfloat) goto l_106;
l_107:
        GIa3 = (GIsp + 1)->Val;
        GIa2 = GYcallext[87];
        GIa1 = GYcallext[86];
         GIa1 = llrt_call_error ();
l_106:
        if (GIsp->Val < GIbfloat)       goto l_109;
        if ((long) GIsp->Val < (long) GIbcons)  goto l_110;
        GIa4 = GIsp->Val;
        if (GIa4->Val >= GIbfloat)      goto l_110;
        if ((GIa4 + 1)->Val < GIbfloat) goto l_109;
l_110:
        GIa3 = GIsp->Val;
        GIa2 = GYcallext[87];
        GIa1 = GYcallext[86];
         GIa1 = llrt_call_error ();
l_109:
        {Ptr callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         callg_arg1 = ((Ptr) ((GIsp + 3)->Val->Val)+2);
         callg_arg2 = ((Fix) (GIsp + 2)->Val);
         callg_arg3 = llrt_vag((GIsp + 1)->Val);
         callg_arg4 = llrt_vag(GIsp->Val);
         callg_retv = ((Ptr) llcload(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         GIa1 = ((Ptr) callg_retv);
        }
l_111:
        GIsp += (Fix) 4;
        {aRet = (GYcallext[53] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDcallext_200() {    /* trace #:system:cached-getglobal */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcallext,16,88,89);
  lRet:  return (aRet);}}

static Ptr GDcallext_201() {    /* trace getinlib */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcallext,10,88,90);
  lRet:  return (aRet);}}

static Ptr GDcallext_202() {    /* trace defextern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcallext,15,88,89);
  lRet:  return (aRet);}}

static Ptr GDcallext_203() {    /* trace buildextern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcallext,17,88,91);
  lRet:  return (aRet);}}

static Ptr GDcallext_204() {    /* trace calllibextern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcallext,45,88,89);
  lRet:  return (aRet);}}

static Ptr GDcallext_205() {    /* trace defextern-cache */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcallext,69,88,91);
  lRet:  return (aRet);}}

static Ptr GDcallext_206() {    /* trace cload */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYcallext,81,88,89);
  lRet:  return (aRet);}}

