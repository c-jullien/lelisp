/* GELL 15.26: source file for the module: "x11color" */
/*             translation done:           "Tue Aug  24 93 10:48:19 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "x11color.h" 

static Ptr GLx11color_1() {     /* #:display:x11:get-default */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        GIa2 = (rSp->Val->Val + 2 + (Fix) 49)->Val;
        GIa3 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_3);
        {aRet = (GYx11color[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11color_3() {     /* call_x11color_2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLx11color_4); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_4() {     /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp->Val->Val + 1)->Val;
        if ((Fix) (rA4) <= (Fix) 0)     {aRet = ((Ptr) GLx11color_5); goto lRet;}
        rA4 = (Ptr) ((unsigned char) *(((char *) (rSp->Val->Val + 2)) + (Fix) 0));
        if (rA4 != (Ptr) 32)    {aRet = ((Ptr) GLx11color_5); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11color_6);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        rA4 = (Ptr) 2;
        {aRet = (GYx11color[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11color_6() {     /* 103 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLx11color_4); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11color_5() {     /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp->Val->Val + 1)->Val;
        (rSp + 1)->Val = rA4;
        if ((Fix) (rA4) <= (Fix) 0)     {aRet = ((Ptr) GLx11color_7); goto lRet;}
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa3 = (Ptr) ((unsigned char) *(((char *) (rSp->Val->Val + 2)) + (Fix) (rA4)));
        if (GIa3 != (Ptr) 32)   {aRet = ((Ptr) GLx11color_7); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11color_8);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (GYx11color[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11color_8() {     /* 106 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLx11color_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11color_7() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_9() {     /* #:display:x11:all-but-once */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
l_GLx11color_9:
        if (rA1 == GInil)       {aRet = ((Ptr) GLx11color_10); goto lRet;}
        (--rSp)->Val = rA1->Val;
        (--rSp)->Val = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_12);
        goto l_GLx11color_9;
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11color_12() {    /* call_x11color_11 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_14);
        {aRet = (GYx11color[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_14() {    /* call_x11color_13 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        rA1 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11color_10() {    /* 101 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11color_15() {    /* #:display:x11:init-color */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11color; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[3];
        (--rSp)->Val = ((Ptr) GLx11color_17);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_17() {    /* call_x11color_16 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11color; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[5];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_19);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_19() {    /* call_x11color_18 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11color; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[6];
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_21);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_21() {    /* call_x11color_20 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11color; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[7];
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_23);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_23() {    /* call_x11color_22 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11color_25);
        {aRet = (GYx11color[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_25() {    /* call_x11color_24 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11color_27);
        {aRet = (GYx11color[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_27() {    /* call_x11color_26 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11color; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[9];
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_29);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_29() {    /* call_x11color_28 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11color; rSp = GIsp;
        if (GIa1 == GInil)      goto l_102;
        (rSp + 6)->Val = rLit[11];
l_102:
        GIa2 = rLit[9];
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_31);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_31() {    /* call_x11color_30 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11color; rSp = GIsp;
        if (GIa1 == GInil)      goto l_104;
        (rSp + 5)->Val = rLit[12];
l_104:
        GIa2 = rLit[13];
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_33);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_33() {    /* call_x11color_32 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11color; rSp = GIsp;
        if (GIa1 == GInil)      goto l_106;
        (rSp + 6)->Val = rLit[12];
        (rSp + 5)->Val = rLit[11];
l_106:
        ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val = (rSp + 6)->Val;
        ((rSp + 2)->Val->Val + 2 + (Fix) 5)->Val = (rSp + 7)->Val;
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = rLit[15]->Val;
        rLit[15]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11color_34);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa3 = (rSp + 18)->Val;
        GIa2 = (rSp + 14)->Val;
        GIa1 = (rSp + 19)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_36);
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_36() {    /* call_x11color_35 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLx11color_34); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_34() {    /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11color; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[15]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLx11color_37); goto lRet;}
        (rSp + 6)->Val = rLit[11];
        ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val = (rSp + 6)->Val;
        GIa3 = (rSp + 6)->Val;
        GIa2 = (rSp + 2)->Val;
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_37);
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_37() {    /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11color; rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 0)->Val = (rSp + 5)->Val;
        (rSp->Val->Val + 2 + (Fix) 5)->Val = (rSp + 7)->Val;
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = rLit[15]->Val;
        rLit[15]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[20];
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11color_38);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa3 = (rSp + 17)->Val;
        GIa2 = (rSp + 12)->Val;
        GIa1 = (rSp + 19)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_40);
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_40() {    /* call_x11color_39 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLx11color_38); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_38() {    /* 112 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11color; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[15]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLx11color_41); goto lRet;}
        (rSp + 5)->Val = rLit[12];
        (rSp->Val->Val + 2 + (Fix) 0)->Val = (rSp + 5)->Val;
        GIa3 = (rSp + 5)->Val;
        GIa2 = rSp->Val;
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_41);
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_41() {    /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 7)->Val->Val + 2 + (Fix) 13)->Val = (rSp + 2)->Val;
        ((rSp + 7)->Val->Val + 2 + (Fix) 12)->Val = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11color_42);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYx11color[21] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_42() {    /* 113 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        ((rSp + 7)->Val->Val + 2 + (Fix) 17)->Val = GIa1;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 6)->Val;
        rA3 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != rA3) goto l_114;
        rA4 = (Ptr) 1;
        {aRet = ((Ptr) GLx11color_43); goto lRet;}
l_114:
        GIa1 = ((rSp + 2)->Val->Val + 2 + (Fix) 6)->Val;
        GIa2 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        rA3 = (Ptr) 1;
        (--rSp)->Val = ((Ptr) GLx11color_45);
        {aRet = ((Ptr) GLx11color_46); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLx11color_45() {    /* call_x11color_44 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLx11color_43); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11color_43() {    /* 115 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11color; rSp = GIsp;
        (rSp + 1)->Val = GIa4;
        (--rSp)->Val = ((Ptr) GLx11color_47);
        GIa3 = ((rSp + 8)->Val->Val + 2 + (Fix) 17)->Val;
        (--rSp)->Val = GIa3;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[22];
        (--rSp)->Val = ((Ptr) GLx11color_49);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_49() {    /* call_x11color_48 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYx11color; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        if (rA2 == GInil)       goto l_118;
        GIa3 = rLit[24]->Val;
        {aRet = ((Ptr) GLx11color_50); goto lRet;}
l_118:
        (--rSp)->Val = rA1;
        rA2 = rLit[25];
        (--rSp)->Val = ((Ptr) GLx11color_52);
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11color_52() {    /* call_x11color_51 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYx11color; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        if (rA2 == rNil)        goto l_119;
        GIa3 = rNil;
        {aRet = ((Ptr) GLx11color_50); goto lRet;}
l_119:
        (--rSp)->Val = rA1;
        rA2 = rLit[27];
        (--rSp)->Val = ((Ptr) GLx11color_54);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11color_54() {    /* call_x11color_53 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYx11color; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        if (rA2 == GInil)       goto l_120;
        GIa3 = rLit[28]->Val;
        {aRet = ((Ptr) GLx11color_50); goto lRet;}
l_120:
        (--rSp)->Val = rA1;
        rA2 = rLit[29];
        (--rSp)->Val = ((Ptr) GLx11color_56);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11color_56() {    /* call_x11color_55 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYx11color; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        if (rA2 == GInil)       goto l_121;
        GIa3 = rLit[30]->Val;
        {aRet = ((Ptr) GLx11color_50); goto lRet;}
l_121:
        (--rSp)->Val = rA1;
        rA2 = rLit[31];
        (--rSp)->Val = ((Ptr) GLx11color_58);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11color_58() {    /* call_x11color_57 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYx11color; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1;
        rA1 = (rSp++)->Val;
        if (rA2 == GInil)       goto l_122;
        GIa3 = rLit[32]->Val;
        {aRet = ((Ptr) GLx11color_50); goto lRet;}
l_122:
        (--rSp)->Val = rA1;
        rA2 = rLit[33];
        (--rSp)->Val = ((Ptr) GLx11color_60);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLx11color_60() {    /* call_x11color_59 */
   {    register Ptr aRet, rNil;
        rNil = GInil;
        GIa2 = GIa1;
        GIa1 = (GIsp++)->Val;
        if (GIa2 == rNil)       goto l_123;
        GIa3 = GYx11color[34]->Val;
        {aRet = ((Ptr) GLx11color_50); goto lRet;}
l_123:
        GIa3 = rNil;
        {aRet = ((Ptr) GLx11color_50); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11color_50() {    /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLx11color_61); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_61() {    /* 124 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYx11color; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLx11color_62); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[35]->Val;
        rLit[35]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[36]->Val;
        rLit[36]->Val = (rSp + 3)->Val;
        (--rSp)->Val = rLit[15]->Val;
        rLit[15]->Val = (rSp + 5)->Val;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[37];
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11color_63);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLx11color_65);
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11color_65() {    /* call_x11color_64 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rA1->Val + 2 + (Fix) 5)->Val = (rSp + 28)->Val;
        (rA1->Val + 2 + (Fix) 0)->Val = (rSp + 16)->Val;
        GIa3 = (rSp + 16)->Val;
        GIa2 = rA1;
        rA1 = (rSp + 28)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_67);
        {aRet = (GYx11color[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11color_67() {    /* call_x11color_66 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLx11color_63); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_63() {    /* 126 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYx11color; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[15]->Val = (rSp + 6)->Val;
        rLit[36]->Val = (rSp + 7)->Val;
        rLit[35]->Val = (rSp + 8)->Val;
        rSp += (Fix) 13;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11color_69);
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_69() {    /* call_x11color_68 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLx11color_61); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11color_62() {    /* 125 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYx11color[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11color_47() {    /* 116 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLx11color_71);
        {aRet = ((Ptr) GLx11color_9); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLx11color_71() {    /* call_x11color_70 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        ((rSp + 7)->Val->Val + 2 + (Fix) 17)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLx11color_72);
        rA4 = ((rSp + 8)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (GYx11color[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11color_72() {    /* 127 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11color; rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 6)->Val;
        rA4 = (Ptr) ((UFix) (rA4) & (UFix) ((rSp + 1)->Val));
        if ((Ptr) 0 == rA4)     goto l_128;
        ((rSp + 7)->Val->Val + 2 + (Fix) 37)->Val = rLit[41];
        GIa1 = rLit[42];
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
l_128:
        ((rSp + 7)->Val->Val + 2 + (Fix) 37)->Val = rLit[43];
        GIa1 = rLit[44];
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11color_73() {    /* #:display:x11:make-color */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11color; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[45];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLx11color_74);
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[47]->Val;
        rA4 = (Ptr) 5;
        {aRet = (rLit[48] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11color_74() {    /* 102 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != (Ptr) ((UFix) 0xffff))       {aRet = ((Ptr) GLx11color_75); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11color_76);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYx11color[21] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_76() {    /* 105 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYx11color; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[49];
        rA1 = rLit[45];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLx11color_75); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLx11color_75() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj6);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GYx11color[47]->Val;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLx11color_77); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_78() {    /* #:display:x11:make-mutable-color */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYx11color; rSp = GIsp; rA4 = GIa4;
        if (rA4 == (Ptr) 5)     goto l_101;
        GIa1 = rLit[50];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
l_101:
        (rLit[47]->Val->Val + 2 + (Fix) 0)->Val = (rSp + 2)->Val;
        (rLit[47]->Val->Val + 2 + (Fix) 1)->Val = (rSp + 1)->Val;
        (rLit[47]->Val->Val + 2 + (Fix) 2)->Val = rSp->Val;
        (--rSp)->Val = ((Ptr) GLx11color_79);
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 4;
        {aRet = (rLit[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11color_79() {    /* 102 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != (Ptr) ((UFix) 0xffff))       {aRet = ((Ptr) GLx11color_80); goto lRet;}
        (--rSp)->Val = ((Ptr) GLx11color_81);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYx11color[21] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_81() {    /* 105 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYx11color; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[49];
        rA1 = rLit[50];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLx11color_80); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLx11color_80() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj6);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GYx11color[47]->Val;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLx11color_77); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_82() {    /* #:display:x11:make-named-color */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3;
        rLit = GYx11color; rSp = GIsp; rA1 = GIa1; rA3 = GIa3;
        (--rSp)->Val = rA3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA3;
        rA3 = rLit[47]->Val;
        GIa2 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_84);
        {aRet = (rLit[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

static Ptr GLx11color_84() {    /* call_x11color_83 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYx11color; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != (Ptr) ((UFix) 0xffff))       goto l_102;
        GIa3 = (rSp + 3)->Val;
        GIa2 = rLit[53];
        rA1 = rLit[19];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        if (rSp->Val != (Ptr) ((UFix) 0xfffe))  goto l_104;
        GIa3 = (rSp + 3)->Val;
        GIa2 = rLit[49];
        rA1 = rLit[19];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        (--rSp)->Val = ((Ptr) GXpopj4);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[47]->Val;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLx11color_77); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11color_77() {    /* #:display:x11:do-color */
   {    register Ptr aRet, rSp, rA1, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 17)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rNil;
l_102:
        if ((long) (rSp + 1)->Val < (long) GIbcons)     goto l_103;
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rSp->Val->Val + 2 + (Fix) 6)->Val;
        if (rA4 != (rSp + 4)->Val)      goto l_104;
        rA4 = rSp->Val;
        goto l_105;
l_104:
        rA4 = rNil;
l_105:
        rSp += (Fix) 1;
        rSp->Val = rA4;
        if (rA4 != rNil)        goto l_103;
        goto l_102;
l_103:
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        if (rA1 != rNil)        {rSp += (Fix) 4; aRet = (rSp++)->Val; goto lRet;}
        rA4 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val = rA4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val = rA4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val = rA4;
        ((rSp + 2)->Val->Val + 2 + (Fix) 6)->Val = (rSp + 1)->Val;
        rA1 = (rSp + 2)->Val;
l_101:
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLx11color_85() {    /* #:display:x11:kill-color */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa4 = (rA1->Val + 2 + (Fix) 48)->Val;
        if ((Fix) (GIa4) <= (Fix) 1)    goto l_101;
        rA1 = (rA1->Val + 2 + (Fix) 21)->Val;
        GIa2 = (GIa2->Val + 2 + (Fix) 6)->Val;
        {aRet = (GYx11color[54] + 2)->Val; goto lRet;}
l_101:
        rA1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLx11color_86() {    /* #:display:x11:red-component */
   {    register Ptr aRet, rSp, rA2, rA4;
        rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        rA4 = (GIa1->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA2->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = GIa3;
        rA4 = (rA2->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA2->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 6;
        {aRet = (GYx11color[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11color_87() {    /* #:display:x11:green-component */
   {    register Ptr aRet, rSp, rA2, rA4;
        rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        rA4 = (GIa1->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA2->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA2->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = GIa3;
        rA4 = (rA2->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 1;
        rA4 = (Ptr) 6;
        {aRet = (GYx11color[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11color_88() {    /* #:display:x11:blue-component */
   {    register Ptr aRet, rSp, rA2, rA4;
        rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj0);
        rA4 = (GIa1->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA2->Val + 2 + (Fix) 6)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA2->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA2->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = (Ptr) 2;
        rA4 = (Ptr) 6;
        {aRet = (GYx11color[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11color_46() {    /* #:display:x11:compute-mask */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
l_GLx11color_46:
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA1 = (Ptr) ((UFix) (rA1) & (UFix) (rA3));
        rA2 = (Ptr) ((UFix) (rA2) & (UFix) (rA3));
        if (rA1 == rA2) goto l_101;
        rA1 = rA3;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA3 = (Ptr) (UFix) ((UFix) (rA3) << 1);
        rA2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        goto l_GLx11color_46;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLx11color_89() {    /* #:display:x11:name-to-rgb */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4;
        rLit = GYx11color; rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLx11color_90);
        rA4 = (GIa1->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rLit[47]->Val;
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 4;
        {aRet = (rLit[56] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLx11color_90() {    /* 103 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != (Ptr) 0)     goto l_101;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLx11color_91() {    /* #:display:x11:get-rgb-values */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        GIa1 = (GIa1->Val + 2 + (Fix) 21)->Val;
        (--rSp)->Val = ((Ptr) GLx11color_93);
        {aRet = (GYx11color[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLx11color_93() {    /* call_x11color_92 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDx11color_94() {    /* trace #:display:x11:get-default */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11color,4,58,59);
  lRet:  return (aRet);}}

static Ptr GDx11color_95() {    /* trace #:display:x11:init-color */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11color,60,58,61);
  lRet:  return (aRet);}}

static Ptr GDx11color_96() {    /* trace #:display:x11:make-color */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11color,45,58,62);
  lRet:  return (aRet);}}

static Ptr GDx11color_97() {    /* trace #:display:x11:make-mutable-color */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11color,50,58,62);
  lRet:  return (aRet);}}

static Ptr GDx11color_98() {    /* trace #:display:x11:make-named-color */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11color,19,58,63);
  lRet:  return (aRet);}}

static Ptr GDx11color_99() {    /* trace #:display:x11:kill-color */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11color,64,58,59);
  lRet:  return (aRet);}}

static Ptr GDx11color_100() {   /* trace #:display:x11:red-component */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11color,65,58,63);
  lRet:  return (aRet);}}

static Ptr GDx11color_101() {   /* trace #:display:x11:green-component */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11color,66,58,63);
  lRet:  return (aRet);}}

static Ptr GDx11color_102() {   /* trace #:display:x11:blue-component */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11color,67,58,63);
  lRet:  return (aRet);}}

static Ptr GDx11color_103() {   /* trace #:display:x11:name-to-rgb */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11color,68,58,63);
  lRet:  return (aRet);}}

static Ptr GDx11color_104() {   /* trace #:display:x11:get-rgb-values */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYx11color,69,58,63);
  lRet:  return (aRet);}}

