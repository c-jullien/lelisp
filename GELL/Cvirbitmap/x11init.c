/* GELL 15.26: source file for the module: "x11init" */
/*             translation done:           "Tue Aug  24 93 10:48:29 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "x11init.h" 

static Ptr GLx11init_1() {      /* current-application-name */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA1 = rSp->Val;
        if (rA1 != (Ptr) 0)     goto l_102;
        rA1 = rLit[0]->Val;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rA1 != (Ptr) 1)     goto l_103;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        if (rLit[0]->Val == rA4)        goto l_105;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        rLit[0]->Val = rA4;
l_105:
        rA1 = rLit[0]->Val;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[1];
        rA1 = rLit[2];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_101:
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_2() {      /* current-application-class */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA1 = rSp->Val;
        if (rA1 != (Ptr) 0)     goto l_102;
        rA1 = rLit[3]->Val;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_102:
        if (rA1 != (Ptr) 1)     goto l_103;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        if (rLit[3]->Val == rA4)        goto l_105;
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        rLit[3]->Val = rA4;
l_105:
        rA1 = rLit[3]->Val;
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[1];
        rA1 = rLit[4];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_101:
        rA4 = (rSp++)->Val;
        rSp += (Fix) (rA4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_3() {      /* #:display:x11:get-app-name */
   {    register Ptr aRet, *rLit;
        rLit = GYx11init;
        GIa1 = rLit[0]->Val;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_4() {      /* #:display:x11:get-app-class */
   {    register Ptr aRet, *rLit;
        rLit = GYx11init;
        GIa1 = rLit[3]->Val;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_5() {      /* #:display:x11:bitprologue */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11init_7);
        {aRet = (GYx11init[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_7() {      /* call_x11init_6 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        GIa2 = rLit[8];
        rA1 = (rA1 == GIa2) ? rLit[9] : rNil;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[10]->Val;
        rLit[10]->Val = (rSp + 2)->Val;
        (--rSp)->Val = rLit[11]->Val;
        rLit[11]->Val = (rSp + 4)->Val;
        (--rSp)->Val = rLit[12]->Val;
        rLit[12]->Val = (rSp + 6)->Val;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[13];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        rA4 = ((rSp + 13)->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rNil)        {aRet = ((Ptr) GLx11init_8); goto lRet;}
        if (rA1 == rNil)        {aRet = ((Ptr) GLx11init_9); goto lRet;}
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = rLit[16]->Val;
        rLit[16]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11init_10);
        (--rSp)->Val = rLit[18];
        rA4 = (Ptr) 1;
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_10() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYx11init[16]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = ((Ptr) GLx11init_9); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_9() {      /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11init; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        rA4 = ((rSp + 13)->Val->Val + 2 + (Fix) 2)->Val;
        if (rA4 != rNil)        {aRet = ((Ptr) GLx11init_11); goto lRet;}
        if ((rSp + 9)->Val == rNil)     {aRet = ((Ptr) GLx11init_12); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11init_13);
        (--rSp)->Val = rLit[20];
        (--rSp)->Val = rLit[21];
        (--rSp)->Val = rLit[22];
        rA4 = (Ptr) 3;
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_13() {     /* 110 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11init_14); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_12() {     /* 108 */
   {    register Ptr aRet, *rLit;
        rLit = GYx11init;
        GIa1 = rLit[24];
        (--GIsp)->Val = ((Ptr) GLx11init_16);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_16() {     /* call_x11init_15 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = GIa1;
        if (rA4 != GInil)       {aRet = ((Ptr) GLx11init_14); goto lRet;}
        rA4 = GYx11init[26]->Val;
        {aRet = ((Ptr) GLx11init_14); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_14() {     /* 109 */
   {    register Ptr aRet;
        ((GIsp + 13)->Val->Val + 2 + (Fix) 2)->Val = GIa4;
        {aRet = ((Ptr) GLx11init_11); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_11() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1;
        GIa4 = ((rSp + 13)->Val->Val + 2 + (Fix) 2)->Val;
        if (GIa4 != GInil)      goto l_113;
        GIa3 = rLit[24];
        GIa2 = rLit[27];
        rA1 = rLit[28];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_113:
        rA1 = (rSp + 13)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_18);
        {aRet = ((Ptr) GLx11init_19); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11init_18() {     /* call_x11init_17 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 0;
        GIa1 = (Ptr) 3;
        (--GIsp)->Val = ((Ptr) GLx11init_21);
        {aRet = (GYx11init[29] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_21() {     /* call_x11init_20 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11init_22);
        rA4 = ((rSp + 15)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYx11init[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_22() {     /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 15)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_24);
        {aRet = ((Ptr) GLx11init_25); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_24() {     /* call_x11init_23 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11init; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (rLit[31]->Val == rNil)      goto l_115;
        rA4 = (Ptr) 1;
        goto l_116;
l_115:
        rA4 = (Ptr) 0;
l_116:
        (--rSp)->Val = rA4;
        (--rSp)->Val = GIa1;
        if ((rSp + 13)->Val == rNil)    {aRet = ((Ptr) GLx11init_26); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11init_27);
        (--rSp)->Val = rLit[32];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLx11init_28);
        (--rSp)->Val = rLit[20];
        (--rSp)->Val = rLit[33];
        (--rSp)->Val = rLit[22];
        rA4 = (Ptr) 3;
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_28() {     /* 120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 6;
        {aRet = (GYx11init[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_27() {     /* 119 */
   {    register Ptr aRet;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLx11init_29); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_26() {     /* 117 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLx11init_30);
        (--rSp)->Val = rLit[32];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa4;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 5;
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_30() {     /* 121 */
   {    register Ptr aRet;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLx11init_29); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_29() {     /* 118 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        ((rSp + 17)->Val->Val + 2 + (Fix) 21)->Val = rA3;
        rA4 = ((rSp + 17)->Val->Val + 2 + (Fix) 21)->Val;
        if ((Ptr) 0 != rA4)     goto l_123;
        rA3 = (rSp + 17)->Val;
        rA2 = rLit[34];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_123:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val;
        rLit[12]->Val = rA4;
        rA3 = ((rSp + 3)->Val->Val + 2 + (Fix) 1)->Val;
        rLit[11]->Val = rA3;
        rA2 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        rLit[10]->Val = rA2;
        rSp += (Fix) 4;
        ((rSp + 13)->Val->Val + 2 + (Fix) 49)->Val = rLit[0]->Val;
        rA1 = ((rSp + 13)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_32);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_32() {     /* call_x11init_31 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        ((rSp + 13)->Val->Val + 2 + (Fix) 48)->Val = GIa1;
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = rLit[37]->Val;
        rLit[37]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[38];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11init_33);
        (--rSp)->Val = rLit[39];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11init_34);
        {register Ptr aux;
                aux = (rSp + 26)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[12]->Val;
        (--rSp)->Val = rLit[11]->Val;
        (--rSp)->Val = rLit[10]->Val;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLx11init_35); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_34() {     /* 125 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLx11init_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_33() {     /* 124 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[37]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = rLit[37]->Val;
        rLit[37]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[40];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11init_36);
        (--rSp)->Val = rLit[39];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa1 = (rSp + 25)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_38);
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_38() {     /* call_x11init_37 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLx11init_36); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_36() {     /* 126 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[37]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = rLit[37]->Val;
        rLit[37]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[42];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11init_39);
        (--rSp)->Val = rLit[39];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa1 = (rSp + 25)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_41);
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_41() {     /* call_x11init_40 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLx11init_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_39() {     /* 127 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[37]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = rLit[37]->Val;
        rLit[37]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[44];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11init_42);
        (--rSp)->Val = rLit[39];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa1 = (rSp + 25)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_44);
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_44() {     /* call_x11init_43 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLx11init_42); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_42() {     /* 128 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[37]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = rLit[37]->Val;
        rLit[37]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[46];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11init_45);
        (--rSp)->Val = rLit[39];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa1 = (rSp + 25)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_47);
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_47() {     /* call_x11init_46 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLx11init_45); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_45() {     /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYx11init[37]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        GIa1 = (rSp + 13)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_49);
        {aRet = ((Ptr) GLx11init_50); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_49() {     /* call_x11init_48 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = ((rSp + 13)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_52);
        {aRet = (GYx11init[48] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_52() {     /* call_x11init_51 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11init; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (GIa1 != (Ptr) 1)    goto l_130;
        rA4 = rLit[9];
        goto l_131;
l_130:
        rA4 = rNil;
l_131:
        ((rSp + 13)->Val->Val + 2 + (Fix) 45)->Val = rA4;
        if (rLit[49]->Val != rNil)      goto l_133;
        rLit[49]->Val = rLit[50];
l_133:
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = rLit[37]->Val;
        rLit[37]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[51];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11init_53);
        (--rSp)->Val = rLit[39];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa1 = (rSp + 25)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_55);
        {aRet = (rLit[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_55() {     /* call_x11init_54 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLx11init_53); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_53() {     /* 134 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYx11init[37]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        GIa1 = (rSp + 13)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_57);
        {aRet = ((Ptr) GLx11init_58); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_57() {     /* call_x11init_56 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 13)->Val->Val + 2 + (Fix) 29)->Val = GInil;
        GIa2 = (Ptr) 0;
        GIa1 = (Ptr) 20;
        (--rSp)->Val = ((Ptr) GLx11init_60);
        {aRet = (GYx11init[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_60() {     /* call_x11init_59 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11init; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        ((rSp + 13)->Val->Val + 2 + (Fix) 47)->Val = GIa1;
        rA4 = ((rSp + 13)->Val->Val + 2 + (Fix) 46)->Val;
        if (rA4 != rNil)        goto l_136;
        ((rSp + 13)->Val->Val + 2 + (Fix) 46)->Val = rLit[53];
l_136:
        rA4 = ((rSp + 13)->Val->Val + 2 + (Fix) 63)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLx11init_61); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11init_61);
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[9];
        rA4 = (Ptr) 2;
        {aRet = (rLit[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_61() {     /* 138 */
   {    register Ptr aRet;
        GIa1 = (GIsp + 13)->Val;
        {aRet = ((Ptr) GLx11init_62); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_8() {      /* 101 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = ((Ptr) GLx11init_62); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_62() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[12]->Val = (rSp + 6)->Val;
        rLit[11]->Val = (rSp + 7)->Val;
        rLit[10]->Val = (rSp + 8)->Val;
        rSp += (Fix) 14;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_63() {     /* #:display:x11:bitepilogue */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa4 = (rA1->Val + 2 + (Fix) 14)->Val;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLx11init_64); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_64() {     /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11init; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLx11init_65); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rSp->Val->Val + 2 + (Fix) 9)->Val;
        if (rA4 != rNil)        {aRet = ((Ptr) GLx11init_66); goto lRet;}
        rA4 = (rSp->Val->Val + 2 + (Fix) 12)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLx11init_66); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11init_66);
        (--rSp)->Val = rLit[55];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[56] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_66() {     /* 104 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLx11init_64); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_65() {     /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 1;
        rA4 = (rSp->Val->Val + 2 + (Fix) 35)->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA4;
        if (rA4 == GInil)       {aRet = ((Ptr) GLx11init_67); goto lRet;}
        {aRet = ((Ptr) GLx11init_68); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_68() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp->Val->Val + 1)->Val;
        if ((Fix) ((rSp + 1)->Val) >= (Fix) (GIa4))     {aRet = ((Ptr) GLx11init_67); goto lRet;}
        GIa1 = ((rSp + 2)->Val->Val + 2 + (Fix) 21)->Val;
        GIa2 = (rSp->Val->Val + 2 + (Fix) ((rSp + 1)->Val))->Val;
        (--rSp)->Val = ((Ptr) GLx11init_70);
        {aRet = (GYx11init[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_70() {     /* call_x11init_69 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 1)->Val = rA4;
        {aRet = ((Ptr) GLx11init_68); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_67() {     /* 107 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        rSp += (Fix) 2;
        (rSp->Val->Val + 2 + (Fix) 35)->Val = rNil;
        (rSp->Val->Val + 2 + (Fix) 64)->Val = rNil;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 15)->Val;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLx11init_71); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_71() {     /* 110 */
   {    register Ptr aRet, rSp, rA2, rA4;
        rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLx11init_72); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa1 = ((rSp + 2)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_74);
        {aRet = (GYx11init[58] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_74() {     /* call_x11init_73 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLx11init_71); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_72() {     /* 111 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYx11init; rSp = GIsp; rNil = GInil;
        rSp += (Fix) 1;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (GIa4 == rNil)       goto l_113;
        (rSp->Val->Val + 2 + (Fix) 36)->Val = rNil;
l_113:
        (rSp->Val->Val + 2 + (Fix) 34)->Val = rNil;
        (rSp->Val->Val + 2 + (Fix) 37)->Val = rNil;
        (rSp->Val->Val + 2 + (Fix) 29)->Val = rNil;
        (rSp->Val->Val + 2 + (Fix) 30)->Val = rNil;
        (rSp->Val->Val + 2 + (Fix) 32)->Val = rNil;
        (rSp->Val->Val + 2 + (Fix) 29)->Val = rNil;
        (--rSp)->Val = rLit[59]->Val;
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 27)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_76);
        {aRet = (rLit[60] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_76() {     /* call_x11init_75 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11init; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) (rA4) ^ (UFix) (GIa1));
        rLit[59]->Val = rA4;
        (rSp->Val->Val + 2 + (Fix) 27)->Val = (Ptr) 0;
        (rSp->Val->Val + 2 + (Fix) 28)->Val = GInil;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        rSp += (Fix) 1;
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_77() {     /* #:display:x11:bitmap-save */
   {    register Ptr aRet;
        {aRet = (GYx11init[62] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_78() {     /* #:display:x11:bitmap-restore */
   {    register Ptr aRet;
        {aRet = (GYx11init[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_79() {     /* #:display:x11:bitmap-refresh */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 8)->Val;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        rA2 = (rSp->Val->Val + 2 + (Fix) 35)->Val;
        if (rA4 == GInil)       goto l_101;
        rA3 = (rA4->Val + 2 + (Fix) 11)->Val;
        goto l_102;
l_101:
        rA3 = (Ptr) 0;
l_102:
        rA2 = (rA2->Val + 2 + (Fix) (rA3))->Val;
        rSp += (Fix) 1;
        {aRet = (GYx11init[63] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_80() {     /* #:display:x11:bitmap-flush */
   {    register Ptr aRet;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        {aRet = (GYx11init[64] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_81() {     /* #:display:x11:bitmap-sync */
   {    register Ptr aRet;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        {aRet = (GYx11init[65] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_82() {     /* #:display:x11:standard-roman-font */
   {    register Ptr aRet;
        GIa1 = (Ptr) 0;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_83() {     /* #:display:x11:standard-bold-font */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_84() {     /* #:display:x11:small-roman-font */
   {    register Ptr aRet;
        GIa1 = (Ptr) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_85() {     /* #:display:x11:large-roman-font */
   {    register Ptr aRet;
        GIa1 = (Ptr) 3;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_86() {     /* #:display:x11:standard-background-pattern */
   {    register Ptr aRet;
        GIa1 = (Ptr) 0;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_87() {     /* #:display:x11:standard-foreground-pattern */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_88() {     /* #:display:x11:standard-medium-gray-pattern */
   {    register Ptr aRet;
        GIa1 = (Ptr) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_89() {     /* #:display:x11:standard-light-gray-pattern */
   {    register Ptr aRet;
        GIa1 = (Ptr) 3;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_90() {     /* #:display:x11:standard-dark-gray-pattern */
   {    register Ptr aRet;
        GIa1 = (Ptr) 4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_91() {     /* #:display:x11:standard-lelisp-cursor */
   {    register Ptr aRet;
        GIa1 = (Ptr) 0;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_92() {     /* #:display:x11:standard-gc-cursor */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_93() {     /* #:display:x11:standard-busy-cursor */
   {    register Ptr aRet;
        GIa1 = (Ptr) 2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_19() {     /* #:display:x11:initialise */
   {    register Ptr aRet, *rLit;
        rLit = GYx11init;
        (GIa1->Val + 2 + (Fix) 32)->Val = rLit[66];
        GIa3 = rLit[67];
        GIa2 = rLit[68];
        GIa1 = GInil;
        {aRet = (rLit[69] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_94() {     /* #:display:x11:xerror */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11init_96);
        {aRet = (GYx11init[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_96() {     /* call_x11init_95 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        if (GIa1 != rLit[8])    {aRet = ((Ptr) GLx11init_97); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11init_98);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_98() {     /* 103 */
   {    register Ptr aRet, *rLit;
        rLit = GYx11init;
        GIa3 = GInil;
        GIa2 = GIa1;
        GIa1 = rLit[70];
        GIsp += (Fix) 2;
        {aRet = (rLit[71] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_97() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLx11init_99);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYx11init[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_99() {     /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = GInil;
        GIa2 = rA1;
        rA1 = GYx11init[70];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11init_100() {    /* #:display:x11:xioerror */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLx11init_101);
        GIa4 = (Ptr) 0;
        {aRet = (GYx11init[72] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_101() {    /* 101 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYx11init; rA1 = GIa1;
        rLit[73]->Val = rLit[74];
        rLit[75]->Val = GInil;
        GIa3 = rA1;
        GIa2 = rLit[76];
        rA1 = rLit[77];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLx11init_25() {     /* #:display:x11:event-mask */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[78]->Val;
        if (rSp->Val != GInil)  {aRet = ((Ptr) GLx11init_102); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11init_103);
        (--rSp)->Val = rLit[79];
        (--rSp)->Val = rLit[80];
        (--rSp)->Val = rLit[81];
        (--rSp)->Val = rLit[82];
        (--rSp)->Val = rLit[83];
        (--rSp)->Val = rLit[84];
        (--rSp)->Val = rLit[85];
        GIa4 = (Ptr) 7;
        {aRet = (rLit[86] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_103() {    /* 103 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLx11init_104); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_102() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        rA2 = rSp->Val;
        rA1 = rLit[87];
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLx11init_104); goto lRet;}
        rA2 = rSp->Val;
        rA1 = rLit[82];
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 != rNil)        {aRet = ((Ptr) GLx11init_104); goto lRet;}
        (--rSp)->Val = rLit[82];
        (--rSp)->Val = ((Ptr) GLx11init_105);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rNil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[88] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11init_105() {    /* 106 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        rSp->Val = rA1;
        rSp->Val = rA1;
        {aRet = ((Ptr) GLx11init_104); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_104() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil, rBcons;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
        rA2 = rSp->Val;
        rA1 = rLit[79];
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_108;
        ((rSp + 1)->Val->Val + 2 + (Fix) 56)->Val = rLit[9];
l_108:
        rA2 = rSp->Val;
        rA1 = rLit[83];
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_110;
        ((rSp + 1)->Val->Val + 2 + (Fix) 55)->Val = rLit[9];
l_110:
        rA2 = rSp->Val;
        rA1 = rLit[87];
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_112;
        ((rSp + 1)->Val->Val + 2 + (Fix) 54)->Val = rLit[9];
l_112:
        rA2 = rSp->Val;
        rA1 = rLit[82];
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_114;
        ((rSp + 1)->Val->Val + 2 + (Fix) 53)->Val = rLit[9];
l_114:
        ((rSp + 1)->Val->Val + 2 + (Fix) 58)->Val = rLit[9];
        ((rSp + 1)->Val->Val + 2 + (Fix) 57)->Val = rLit[9];
        ((rSp + 1)->Val->Val + 2 + (Fix) 61)->Val = rLit[9];
        ((rSp + 1)->Val->Val + 2 + (Fix) 60)->Val = rLit[9];
        rA2 = rSp->Val;
        rA1 = rLit[89];
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_116;
        ((rSp + 1)->Val->Val + 2 + (Fix) 59)->Val = rLit[9];
l_116:
        ((rSp + 1)->Val->Val + 2 + (Fix) 31)->Val = rSp->Val;
        rA2 = rLit[90];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11init_107);
        {aRet = (rLit[91] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11init_107() {    /* call_x11init_106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 40)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11init_108);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[92];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[93] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_108() {    /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 39)->Val = GIa1;
        ((rSp + 1)->Val->Val + 2 + (Fix) 41)->Val = rSp->Val;
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 39)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_110);
        {aRet = (GYx11init[94] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_110() {    /* call_x11init_109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 42)->Val = GIa1;
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 40)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_112);
        {aRet = (GYx11init[94] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_112() {    /* call_x11init_111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 43)->Val = GIa1;
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 41)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_114);
        {aRet = (GYx11init[94] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_114() {    /* call_x11init_113 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        ((rSp + 1)->Val->Val + 2 + (Fix) 44)->Val = rA1;
        (--rSp)->Val = (Ptr) 0;
l_118:
        if ((rSp + 1)->Val == GInil)    goto l_119;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        if (rA1 != rLit[79])    goto l_121;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 1);
        rSp->Val = rA4;
        goto l_118;
l_121:
        if (rA1 != rLit[83])    goto l_122;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 1);
        rSp->Val = rA4;
        goto l_118;
l_122:
        if (rA1 != rLit[80])    goto l_123;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 4);
        rSp->Val = rA4;
        goto l_118;
l_123:
        if (rA1 != rLit[81])    goto l_124;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 8);
        rSp->Val = rA4;
        goto l_118;
l_124:
        if (rA1 != rLit[84])    goto l_125;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 16);
        rSp->Val = rA4;
        goto l_118;
l_125:
        if (rA1 != rLit[85])    goto l_126;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 32);
        rSp->Val = rA4;
        goto l_118;
l_126:
        if (rA1 != rLit[82])    goto l_127;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 8192);
        rSp->Val = rA4;
        goto l_118;
l_127:
        if (rA1 != rLit[87])    goto l_118;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) 64);
        rSp->Val = rA4;
        goto l_118;
l_119:
        rA1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_35() {     /* #:display:x11:init-display */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (--rSp)->Val = rLit[59]->Val;
        ((rSp + 4)->Val->Val + 2 + (Fix) 27)->Val = (rSp + 1)->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_116);
        {aRet = (rLit[60] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_116() {    /* call_x11init_115 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11init; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) (GIa1));
        rLit[59]->Val = rA4;
        ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val = (rSp + 2)->Val;
        ((rSp + 3)->Val->Val + 2 + (Fix) 4)->Val = (rSp + 1)->Val;
        GIa1 = ((rSp + 3)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_118);
        {aRet = (rLit[95] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_118() {    /* call_x11init_117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = ((rSp + 4)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_120);
        {aRet = (GYx11init[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_120() {    /* call_x11init_119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_122);
        {aRet = (GYx11init[97] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_122() {    /* call_x11init_121 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLx11init_123);
        (--rSp)->Val = rLit[98];
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[99];
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[99];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 6;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_123() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1;
        ((rSp + 5)->Val->Val + 2 + (Fix) 38)->Val = rA1;
        if ((rSp + 1)->Val == (Ptr) 11) goto l_102;
        GIa3 = ((rSp + 5)->Val->Val + 2 + (Fix) 38)->Val;
        GIa2 = rLit[100];
        rA1 = rLit[28];
        rSp += (Fix) 6;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        rA1 = GInil;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11init_124() {    /* #:display:x11:init-font */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (rA1->Val + 2 + (Fix) 36)->Val = rLit[101];
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_126);
        {aRet = (rLit[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11init_126() {    /* call_x11init_125 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11init; rSp = GIsp; rA4 = GIa4;
        if (GIa1 != (Ptr) 2)    goto l_101;
        rA4 = rLit[102]->Val;
        goto l_102;
l_101:
        rA4 = rLit[103]->Val;
l_102:
        (--rSp)->Val = rA4;
        GIa3 = rA4->Val;
        GIa2 = rLit[104];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_128);
        {aRet = (rLit[105] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_128() {    /* call_x11init_127 */
   {    register Ptr aRet, *rLit, rSp, rA3;
        rLit = GYx11init; rSp = GIsp; rA3 = GIa3;
        rA3 = rSp->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        GIa2 = rLit[106];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_130);
        {aRet = (rLit[105] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLx11init_130() {    /* call_x11init_129 */
   {    register Ptr aRet, *rLit, rSp, rA3;
        rLit = GYx11init; rSp = GIsp; rA3 = GIa3;
        rA3 = rSp->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        GIa2 = rLit[107];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_132);
        {aRet = (rLit[105] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLx11init_132() {    /* call_x11init_131 */
   {    register Ptr aRet, *rLit, rSp, rA3;
        rLit = GYx11init; rSp = GIsp; rA3 = GIa3;
        rA3 = rSp->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        GIa2 = rLit[108];
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rLit[105] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLx11init_133() {    /* #:display:x11:add-a-font */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11init_135);
        {aRet = (GYx11init[109] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_135() {    /* call_x11init_134 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa4 = (rA1->Val + 1)->Val;
        if ((Ptr) 0 != GIa4)    goto l_102;
        rSp->Val = (rSp + 2)->Val;
l_102:
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = rLit[37]->Val;
        rLit[37]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[110];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11init_136);
        (--rSp)->Val = rLit[39];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa2 = (rSp + 12)->Val;
        rA1 = (rSp + 13)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_138);
        {aRet = (rLit[111] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11init_138() {    /* call_x11init_137 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLx11init_136); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_136() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        rLit[37]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (rA1 == GInil)       {aRet = ((Ptr) GLx11init_139); goto lRet;}
        GIa3 = ((rSp + 1)->Val->Val + 2 + (Fix) 18)->Val;
        GIa2 = rA1->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11init_141);
        {aRet = (rLit[112] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11init_141() {    /* call_x11init_140 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 1)->Val->Val + 2 + (Fix) 18)->Val = GIa1;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_139() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_142() {    /* #:display:x11:init-line-style */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1->Val + 2 + (Fix) 33)->Val;
        if (rA4 != GInil)       {aRet = ((Ptr) GLx11init_143); goto lRet;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLx11init_144);
        (--rSp)->Val = rLit[113];
        (--rSp)->Val = rLit[114];
        (--rSp)->Val = rLit[115];
        (--rSp)->Val = rLit[116];
        (--rSp)->Val = rLit[117];
        (--rSp)->Val = rLit[118];
        (--rSp)->Val = rLit[119];
        (--rSp)->Val = rLit[120];
        (--rSp)->Val = rLit[121];
        (--rSp)->Val = rLit[122];
        rA4 = (Ptr) 10;
        {aRet = (rLit[123] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_144() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 33)->Val = GIa1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_143() {    /* 101 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_145() {    /* #:display:x11:init-pattern */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (rA1->Val + 2 + (Fix) 34)->Val = rLit[124];
        (--rSp)->Val = ((Ptr) GLx11init_146);
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 16;
        (--rSp)->Val = (Ptr) 16;
        (--rSp)->Val = rLit[125];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[126] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_146() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLx11init_147);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 16;
        (--rSp)->Val = (Ptr) 16;
        (--rSp)->Val = rLit[127];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[126] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_147() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLx11init_148);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 16;
        (--rSp)->Val = (Ptr) 16;
        (--rSp)->Val = rLit[128];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[126] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_148() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLx11init_149);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 16;
        (--rSp)->Val = (Ptr) 16;
        (--rSp)->Val = rLit[129];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[126] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_149() {    /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 16;
        (--rSp)->Val = (Ptr) 16;
        (--rSp)->Val = rLit[130];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[126] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_150() {    /* #:display:x11:add-a-pattern */
   {    register Ptr aRet, *rLit;
        rLit = GYx11init;
        if (GIa4 == (Ptr) 4)    goto l_101;
        GIa1 = rLit[126];
        GIa2 = (Ptr) 4;
        {aRet = (rLit[131] + 2)->Val; goto lRet;}
l_101:
        (--GIsp)->Val = ((Ptr) GLx11init_152);
        {aRet = (rLit[132] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_152() {    /* call_x11init_151 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (rA1->Val + 2 + (Fix) 0)->Val = (rSp + 3)->Val;
        (rA1->Val + 2 + (Fix) 1)->Val = (rSp + 2)->Val;
        (rA1->Val + 2 + (Fix) 3)->Val = (rSp + 4)->Val;
        GIa2 = rA1;
        rA1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_154);
        {aRet = (GYx11init[133] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11init_154() {    /* call_x11init_153 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLx11init_155);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYx11init[134] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_155() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = rSp->Val;
        GIa1 = (rSp + 4)->Val;
        rSp += (Fix) 5;
        {aRet = (GYx11init[135] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_156() {    /* #:display:x11:init-cursor */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA1;
        GIa2 = (Ptr) 0;
        rA1 = (Ptr) 3;
        (--rSp)->Val = ((Ptr) GLx11init_158);
        {aRet = (GYx11init[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11init_158() {    /* call_x11init_157 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 35)->Val = GIa1;
        (rSp->Val->Val + 2 + (Fix) 64)->Val = GInil;
        GIa2 = rLit[136];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11init_160);
        {aRet = (rLit[109] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_160() {    /* call_x11init_159 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[137];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_162);
        {aRet = (rLit[109] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_162() {    /* call_x11init_161 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[138];
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_164);
        {aRet = (rLit[109] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_164() {    /* call_x11init_163 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[22];
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_166);
        {aRet = (rLit[139] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_166() {    /* call_x11init_165 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11init; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (GIa1 == rNil)       goto l_101;
        rA4 = rLit[140]->Val;
        rA4 = rA4->Val;
        {aRet = ((Ptr) GLx11init_167); goto lRet;}
l_101:
        GIa2 = (rSp + 2)->Val;
        GIa1 = rNil;
        (--rSp)->Val = ((Ptr) GLx11init_169);
        {aRet = (rLit[141] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_169() {    /* call_x11init_168 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11init_167); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_167() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (rSp + 2)->Val = GIa4;
        GIa2 = rLit[22];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_171);
        {aRet = (rLit[139] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_171() {    /* call_x11init_170 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11init; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (GIa1 == rNil)       goto l_103;
        rA4 = rLit[140]->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        {aRet = ((Ptr) GLx11init_172); goto lRet;}
l_103:
        GIa2 = (rSp + 1)->Val;
        GIa1 = rNil;
        (--rSp)->Val = ((Ptr) GLx11init_174);
        {aRet = (rLit[141] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_174() {    /* call_x11init_173 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11init_172); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_172() {    /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (rSp + 1)->Val = GIa4;
        GIa2 = rLit[22];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11init_176);
        {aRet = (rLit[139] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_176() {    /* call_x11init_175 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11init; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (GIa1 == rNil)       goto l_105;
        rA4 = rLit[140]->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        {aRet = ((Ptr) GLx11init_177); goto lRet;}
l_105:
        GIa2 = rSp->Val;
        GIa1 = rNil;
        (--rSp)->Val = ((Ptr) GLx11init_179);
        {aRet = (rLit[141] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_179() {    /* call_x11init_178 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11init_177); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_177() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp->Val = GIa4;
        GIa3 = ((rSp + 3)->Val->Val + 2 + (Fix) 35)->Val;
        (--rSp)->Val = GIa3;
        GIa1 = ((rSp + 4)->Val->Val + 2 + (Fix) 21)->Val;
        GIa2 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_181);
        {aRet = (GYx11init[142] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_181() {    /* call_x11init_180 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 0)->Val = GIa1;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 35)->Val;
        (--rSp)->Val = rA4;
        GIa1 = ((rSp + 4)->Val->Val + 2 + (Fix) 21)->Val;
        GIa2 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_183);
        {aRet = (GYx11init[142] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_183() {    /* call_x11init_182 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 1)->Val = GIa1;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 35)->Val;
        (--rSp)->Val = rA4;
        GIa1 = ((rSp + 4)->Val->Val + 2 + (Fix) 21)->Val;
        GIa2 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_185);
        {aRet = (GYx11init[142] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_185() {    /* call_x11init_184 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 2)->Val = GIa1;
        rSp += (Fix) 3;
        (rSp->Val->Val + 2 + (Fix) 20)->Val = rNil;
        GIa1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_186() {    /* #:display:x11:synchronize */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[54];
        rA2 = (Ptr) 1;
        {aRet = (rLit[131] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = rNil;
        goto l_nlist_x11init_188;
l_nlist_x11init_187:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_x11init_188:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_x11init_187;}
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_102;
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 63)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 21)->Val;
        rA4 = rSp->Val;
        if (rA4->Val == rNil)   goto l_104;
        rA2 = (Ptr) 1;
        goto l_105;
l_104:
        rA2 = (Ptr) 0;
l_105:
        (--rSp)->Val = ((Ptr) GLx11init_190);
        {aRet = (rLit[143] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_190() {    /* call_x11init_189 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        ((rSp + 1)->Val->Val + 2 + (Fix) 63)->Val = rA4->Val;
        GIa1 = rA4->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_58() {     /* #:display:x11:init-window */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11init_192);
        {aRet = (GYx11init[144] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_192() {    /* call_x11init_191 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11init_194);
        {aRet = (GYx11init[145] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_194() {    /* call_x11init_193 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11init; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GInil;
        ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val = (Ptr) 0;
        ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val = (Ptr) 0;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val = rA4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val = rA4;
        ((rSp + 1)->Val->Val + 2 + (Fix) 4)->Val = rLit[146];
        ((rSp + 1)->Val->Val + 2 + (Fix) 5)->Val = (Ptr) 0;
        ((rSp + 1)->Val->Val + 2 + (Fix) 6)->Val = (Ptr) 1;
        ((rSp + 1)->Val->Val + 2 + (Fix) 12)->Val = (rSp + 2)->Val;
        ((rSp + 1)->Val->Val + 2 + (Fix) 8)->Val = GIa1;
        ((rSp + 1)->Val->Val + 2 + (Fix) 15)->Val = rLit[147];
        ((rSp + 1)->Val->Val + 2 + (Fix) 17)->Val = rLit[148];
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 8)->Val;
        (--rSp)->Val = rA4;
        GIa1 = ((rSp + 3)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_196);
        {aRet = (rLit[149] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_196() {    /* call_x11init_195 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 0)->Val = GIa1;
        GIa2 = (rSp + 1)->Val;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_198);
        {aRet = (GYx11init[150] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_198() {    /* call_x11init_197 */
   {    register Ptr aRet, rSp, rA2, rA4;
        rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 7)->Val;
        rSp->Val = rA4;
        GIa1 = ((rSp + 2)->Val->Val + 2 + (Fix) 21)->Val;
        rA2 = (rA4->Val + 2 + (Fix) 12)->Val;
        rA2 = (rA2->Val + 2 + (Fix) 1)->Val;
        GIa3 = (Ptr) 1;
        (--rSp)->Val = ((Ptr) GLx11init_200);
        {aRet = (GYx11init[151] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_200() {    /* call_x11init_199 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        ((rSp + 2)->Val->Val + 2 + (Fix) 10)->Val = (rSp + 1)->Val;
        ((rSp + 2)->Val->Val + 2 + (Fix) 11)->Val = rSp->Val;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 13)->Val;
        (rSp->Val->Val + 2 + (Fix) 4)->Val = rA4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 12)->Val;
        (rSp->Val->Val + 2 + (Fix) 5)->Val = rA4;
        ((rSp + 2)->Val->Val + 2 + (Fix) 8)->Val = GInil;
        (--rSp)->Val = ((Ptr) GLx11init_201);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (GYx11init[86] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_201() {    /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        ((rSp + 2)->Val->Val + 2 + (Fix) 14)->Val = GIa1;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 11)->Val;
        ((rSp + 2)->Val->Val + 2 + (Fix) 9)->Val = rA4;
        GIa1 = rA4;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_202() {    /* #:display:x11:store-selection */
   {    register Ptr aRet;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        GIa3 = (GIa2->Val + 1)->Val;
        {aRet = (GYx11init[152] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_203() {    /* #:display:x11:get-selection */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11init_204);
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 1;
        {aRet = (GYx11init[123] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_204() {    /* 101 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = GIa1;
        GIa1 = ((rSp + 3)->Val->Val + 2 + (Fix) 21)->Val;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11init_206);
        {aRet = (GYx11init[153] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_206() {    /* call_x11init_205 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (rSp + 2)->Val = GIa1;
        rA4 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        (rSp + 1)->Val = rA4;
        if ((Fix) (rA4) <= (Fix) 0)     {aRet = ((Ptr) GLx11init_207); goto lRet;}
        GIa2 = (Ptr) 0;
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLx11init_209);
        {aRet = (GYx11init[154] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11init_209() {    /* call_x11init_208 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        GIa3 = (rSp + 2)->Val;
        GIa2 = rA1;
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLx11init_211);
        {aRet = (GYx11init[155] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11init_211() {    /* call_x11init_210 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_207() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_212() {    /* #:display:x11:display-depth */
   {    register Ptr aRet;
        GIa1 = (GIa1->Val + 2 + (Fix) 48)->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11init_50() {     /* #:display:x11:initialize-event-responses */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[156];
        GIa1 = (Ptr) 37;
        (--rSp)->Val = ((Ptr) GLx11init_214);
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_214() {    /* call_x11init_213 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYx11init; rSp = GIsp; rA1 = GIa1;
        (rA1->Val + 2 + (Fix) 2)->Val = rLit[157];
        (rA1->Val + 2 + (Fix) 36)->Val = rLit[158];
        (rA1->Val + 2 + (Fix) 4)->Val = rLit[159];
        (rA1->Val + 2 + (Fix) 5)->Val = rLit[160];
        (rA1->Val + 2 + (Fix) 6)->Val = rLit[161];
        (rA1->Val + 2 + (Fix) 7)->Val = rLit[162];
        (rA1->Val + 2 + (Fix) 8)->Val = rLit[163];
        (rA1->Val + 2 + (Fix) 9)->Val = rLit[164];
        (rA1->Val + 2 + (Fix) 10)->Val = rLit[164];
        (rA1->Val + 2 + (Fix) 12)->Val = rLit[165];
        (rA1->Val + 2 + (Fix) 13)->Val = rLit[165];
        (rA1->Val + 2 + (Fix) 17)->Val = rLit[166];
        (rA1->Val + 2 + (Fix) 22)->Val = rLit[167];
        (rA1->Val + 2 + (Fix) 18)->Val = rLit[168];
        (rA1->Val + 2 + (Fix) 19)->Val = rLit[169];
        (rA1->Val + 2 + (Fix) 33)->Val = rLit[170];
        (rA1->Val + 2 + (Fix) 15)->Val = rLit[171];
        (rA1->Val + 2 + (Fix) 21)->Val = rLit[172];
        (rSp->Val->Val + 2 + (Fix) 62)->Val = rA1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_215() {    /* #:display:x11:get-xdisplay */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11init; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[173];
        (--rSp)->Val = ((Ptr) GLx11init_217);
        {aRet = (rLit[174] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11init_217() {    /* call_x11init_216 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_101;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        if (GIa4 == rNil)       goto l_101;
        rA1 = (rSp->Val->Val + 2 + (Fix) 21)->Val;
        rSp += (Fix) 1;
        {aRet = (GYx11init[175] + 2)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GDx11init_218() {    /* trace current-application-name */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,2,176,177);
  lRet:  return (aRet);}}

static Ptr GDx11init_219() {    /* trace current-application-class */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,4,176,177);
  lRet:  return (aRet);}}

static Ptr GDx11init_220() {    /* trace #:display:x11:get-app-name */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,178,176,179);
  lRet:  return (aRet);}}

static Ptr GDx11init_221() {    /* trace #:display:x11:get-app-class */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,180,176,179);
  lRet:  return (aRet);}}

static Ptr GDx11init_222() {    /* trace #:display:x11:bitprologue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,28,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_223() {    /* trace #:display:x11:bitepilogue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,62,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_224() {    /* trace #:display:x11:bitmap-save */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,182,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_225() {    /* trace #:display:x11:bitmap-restore */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,183,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_226() {    /* trace #:display:x11:bitmap-refresh */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,184,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_227() {    /* trace #:display:x11:bitmap-flush */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,185,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_228() {    /* trace #:display:x11:bitmap-sync */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,186,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_229() {    /* trace #:display:x11:standard-roman-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,187,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_230() {    /* trace #:display:x11:standard-bold-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,188,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_231() {    /* trace #:display:x11:small-roman-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,189,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_232() {    /* trace #:display:x11:large-roman-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,190,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_233() {    /* trace #:display:x11:standard-background-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,191,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_234() {    /* trace #:display:x11:standard-foreground-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,192,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_235() {    /* trace #:display:x11:standard-medium-gray-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,193,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_236() {    /* trace #:display:x11:standard-light-gray-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,194,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_237() {    /* trace #:display:x11:standard-dark-gray-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,195,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_238() {    /* trace #:display:x11:standard-lelisp-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,196,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_239() {    /* trace #:display:x11:standard-gc-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,197,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_240() {    /* trace #:display:x11:standard-busy-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,198,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_241() {    /* trace #:display:x11:xerror */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,68,176,199);
  lRet:  return (aRet);}}

static Ptr GDx11init_242() {    /* trace #:display:x11:xioerror */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,67,176,179);
  lRet:  return (aRet);}}

static Ptr GDx11init_243() {    /* trace #:display:x11:init-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,45,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_244() {    /* trace #:display:x11:add-a-font */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,105,176,200);
  lRet:  return (aRet);}}

static Ptr GDx11init_245() {    /* trace #:display:x11:init-line-style */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,47,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_246() {    /* trace #:display:x11:init-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,52,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_247() {    /* trace #:display:x11:add-a-pattern */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,126,176,177);
  lRet:  return (aRet);}}

static Ptr GDx11init_248() {    /* trace #:display:x11:init-cursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,43,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_249() {    /* trace #:display:x11:synchronize */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,54,176,177);
  lRet:  return (aRet);}}

static Ptr GDx11init_250() {    /* trace #:display:x11:store-selection */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,201,176,199);
  lRet:  return (aRet);}}

static Ptr GDx11init_251() {    /* trace #:display:x11:get-selection */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,202,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_252() {    /* trace #:display:x11:display-depth */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,203,176,181);
  lRet:  return (aRet);}}

static Ptr GDx11init_253() {    /* trace #:display:x11:get-xdisplay */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11init,204,176,181);
  lRet:  return (aRet);}}

