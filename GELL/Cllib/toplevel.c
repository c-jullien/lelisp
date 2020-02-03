/* GELL 15.26: source file for the module: "toplevel" */
/*             translation done:           "Wed June 16 93 18:00:30 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "toplevel.h" 

static Ptr GLtoplevel_1() {     /* catcherror */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYtoplevel; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rLit[0]->Val;
        rLit[0]->Val = rA1;
        (--rSp)->Val = rLit[1]->Val;
        rLit[1]->Val = rA4;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[2];
        (--rSp)->Val = ((Ptr) GLtoplevel_1);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtoplevel_2);
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtoplevel_2() {     /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rNil;
        rLit = GYtoplevel; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rLit[0]->Val;
        rLit[0]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[4];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rA1 == rNil)        goto l_102;
        rA4 = rLit[6]->Val;
        goto l_103;
l_102:
        rA4 = (Ptr) 0;
l_103:
        if (rA1 == rNil)        goto l_104;
        rA3 = rLit[7]->Val;
        goto l_105;
l_104:
        rA3 = rNil;
l_105:
        (--rSp)->Val = rLit[7]->Val;
        rLit[7]->Val = rA3;
        (--rSp)->Val = rLit[6]->Val;
        rLit[6]->Val = rA4;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[8];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtoplevel_3);
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        rA1 = rLit[1]->Val;
        (--rSp)->Val = ((Ptr) GLtoplevel_5);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLtoplevel_5() {     /* call_toplevel_4 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLtoplevel_3); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_3() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtoplevel; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[6]->Val = (rSp + 6)->Val;
        rLit[7]->Val = (rSp + 7)->Val;
        rSp += (Fix) 8;
        GIdlink = (rSp + 1)->Val;
        rLit[0]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[1]->Val = (rSp + 6)->Val;
        rLit[0]->Val = (rSp + 7)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_6() {     /* errset */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYtoplevel; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rLit[11]->Val;
        rLit[11]->Val = rA1;
        (--rSp)->Val = rLit[12]->Val;
        rLit[12]->Val = rA4;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[13];
        (--rSp)->Val = ((Ptr) GLtoplevel_6);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtoplevel_7);
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLtoplevel_7() {     /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtoplevel; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[12]->Val = (rSp + 6)->Val;
        rLit[11]->Val = (rSp + 7)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_8() {     /* err */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtoplevel; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rLit[1]->Val;
        rLit[1]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = ((Ptr) GLtoplevel_8);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtoplevel_9);
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_9() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYtoplevel[1]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_10() {    /* break */
   {    register Ptr aRet, *rLit;
        rLit = GYtoplevel;
        GIa1 = GInil;
        GIa2 = rLit[9];
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_11() {    /* syserror */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtoplevel; rSp = GIsp;
        (--rSp)->Val = rLit[20]->Val;
        rLit[20]->Val = GIa3;
        (--rSp)->Val = rLit[21]->Val;
        rLit[21]->Val = GIa2;
        (--rSp)->Val = rLit[22]->Val;
        rLit[22]->Val = GIa1;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[23];
        (--rSp)->Val = ((Ptr) GLtoplevel_11);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtoplevel_13);
        {aRet = (rLit[24] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_13() {    /* call_toplevel_12 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLtoplevel_15);
        {aRet = (GYtoplevel[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_15() {    /* call_toplevel_14 */
   {    register Ptr aRet, *rLit, rNil;
        rLit = GYtoplevel; rNil = GInil;
        if (rLit[0]->Val == rNil)       {aRet = ((Ptr) GLtoplevel_16); goto lRet;}
        if (rLit[7]->Val != rNil)       {aRet = ((Ptr) GLtoplevel_16); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLtoplevel_17);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_17() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtoplevel_18);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYtoplevel[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_18() {    /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtoplevel; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtoplevel_19);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        GIa3 = rLit[20]->Val;
        GIa2 = rLit[21]->Val;
        GIa1 = rLit[22]->Val;
        (--rSp)->Val = ((Ptr) GLtoplevel_21);
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_21() {    /* call_toplevel_20 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLtoplevel_22);
        {aRet = ((Ptr) GLtoplevel_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_19() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtoplevel_23);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYtoplevel[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_23() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_22() {    /* 106 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLtoplevel_16); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_16() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtoplevel; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtoplevel_24);
        (--rSp)->Val = rLit[28];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_24() {    /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtoplevel; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[22]->Val = (rSp + 6)->Val;
        rLit[21]->Val = (rSp + 7)->Val;
        rLit[20]->Val = (rSp + 8)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_25() {    /* toplevel */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtoplevel; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[30];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        rLit[0]->Val = rLit[31];
        rLit[32]->Val = rLit[33]->Val;
        (--rSp)->Val = ((Ptr) GLtoplevel_26);
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtoplevel_27);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtoplevel_29);
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_29() {    /* call_toplevel_28 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa2 = GInil;
        GIa3 = ((Ptr) GLtoplevel_30);
        {aRet = ((Ptr) GLtoplevel_27); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_27() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYtoplevel; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa3;
        if (rA2 >= GIbfloat)    goto l_105;
        rA2 = rNil;
l_105:
        rA1 = rA2;
        rA2 = (rSp + 2)->Val;
        if (rA1 != rNil)        goto l_107;
        rA1 = rA2;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rNil);
        goto l_108;
l_107:
        if (rA1 != rLit[9])     goto l_109;
        rA1 = rNil;
        goto l_108;
l_109:
        if (rA1 != rLit[30])    goto l_111;
        rA1 = rNil;
        rA2 = rLit[30];
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
l_111:
        GIa3 = rA1;
        rA2 = rLit[35];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_108:
        if (((rSp + 1)->Val >= GIbsymb) && ((rSp + 1)->Val < GIbcons))  {aRet = ((Ptr) GLtoplevel_30); goto lRet;}
        rA1 = (rSp + 2)->Val;
        rA2 = (rSp + 1)->Val;
        {aRet = rSp->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtoplevel_30() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 3;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLtoplevel_26); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_26() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYtoplevel; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rLit[33]->Val = rA1;
        if ((long) rA1 < (long) GIbcons)        goto l_113;
        rA4 = rA1->Val;
        goto l_114;
l_113:
        rA4 = GInil;
l_114:
        rLit[33]->Val = rA4;
        (--rSp)->Val = ((Ptr) GLtoplevel_31);
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtoplevel_32);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtoplevel_33);
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtoplevel_33() {    /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa2 = GInil;
        GIa3 = ((Ptr) GLtoplevel_34);
        {aRet = ((Ptr) GLtoplevel_32); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_32() {    /* 116 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYtoplevel; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa3;
        if (rA2 >= GIbfloat)    goto l_119;
        rA2 = rNil;
l_119:
        rA1 = rA2;
        rA2 = (rSp + 2)->Val;
        if (rA1 != rNil)        goto l_121;
        rA1 = rA2;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rNil);
        goto l_122;
l_121:
        if (rA1 != rLit[9])     goto l_123;
        rA1 = rNil;
        goto l_122;
l_123:
        if (rA1 != rLit[30])    goto l_125;
        rA1 = rNil;
        rA2 = rLit[30];
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
l_125:
        GIa3 = rA1;
        rA2 = rLit[35];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_122:
        if (((rSp + 1)->Val >= GIbsymb) && ((rSp + 1)->Val < GIbcons))  {aRet = ((Ptr) GLtoplevel_34); goto lRet;}
        rA1 = (rSp + 2)->Val;
        rA2 = (rSp + 1)->Val;
        {aRet = rSp->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtoplevel_34() {    /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 3;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLtoplevel_31); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_31() {    /* 115 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYtoplevel; rA1 = GIa1;
        rLit[37]->Val = rA1;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLtoplevel_35); goto lRet;}
        if (rLit[38]->Val == GInil)     {aRet = ((Ptr) GLtoplevel_35); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLtoplevel_37);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_37() {    /* call_toplevel_36 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtoplevel_38);
        (--rSp)->Val = (Ptr) 61;
        GIa4 = (Ptr) 1;
        {aRet = (GYtoplevel[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_38() {    /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtoplevel_39);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYtoplevel[39] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_39() {    /* 130 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYtoplevel; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLtoplevel_35);
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtoplevel_40);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtoplevel_41);
        rA4 = rLit[37]->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[40] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtoplevel_41() {    /* 134 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa2 = GInil;
        GIa3 = ((Ptr) GLtoplevel_42);
        {aRet = ((Ptr) GLtoplevel_40); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_40() {    /* 132 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYtoplevel; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa3;
        if (rA2 >= GIbfloat)    goto l_135;
        rA2 = rNil;
l_135:
        rA1 = rA2;
        rA2 = (rSp + 2)->Val;
        if (rA1 != rNil)        goto l_137;
        rA1 = rA2;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rNil);
        goto l_138;
l_137:
        if (rA1 != rLit[9])     goto l_139;
        rA1 = rNil;
        goto l_138;
l_139:
        if (rA1 != rLit[30])    goto l_141;
        rA1 = rNil;
        rA2 = rLit[30];
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
l_141:
        GIa3 = rA1;
        rA2 = rLit[35];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_138:
        if (((rSp + 1)->Val >= GIbsymb) && ((rSp + 1)->Val < GIbcons))  {aRet = ((Ptr) GLtoplevel_42); goto lRet;}
        rA1 = (rSp + 2)->Val;
        rA2 = (rSp + 1)->Val;
        {aRet = rSp->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLtoplevel_42() {    /* 133 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 3;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLtoplevel_35); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_35() {    /* 128 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYtoplevel; rSp = GIsp; rA4 = GIa4;
        rA4 = rLit[37]->Val;
        rLit[37]->Val = rA4->Val;
        GIa1 = rA4->Val;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtoplevel_43() {    /* printerror */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYtoplevel; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rLit[20]->Val;
        rLit[20]->Val = GIa3;
        (--rSp)->Val = rLit[21]->Val;
        rLit[21]->Val = rA2;
        (--rSp)->Val = rLit[22]->Val;
        rLit[22]->Val = rA1;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[41];
        (--rSp)->Val = ((Ptr) GLtoplevel_43);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtoplevel_44);
        (--rSp)->Val = rLit[42];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[43];
        if ((rA2 < GIbsymb) || (rA2 >= GIbcons))        {aRet = ((Ptr) GLtoplevel_45); goto lRet;}
        rA1 = rA2;
        (--rSp)->Val = ((Ptr) GLtoplevel_47);
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtoplevel_47() {    /* call_toplevel_46 */
   {    register Ptr aRet, *rLit;
        rLit = GYtoplevel;
        GIa4 = GIa1;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLtoplevel_48); goto lRet;}
        GIa1 = rLit[21]->Val;
        (--GIsp)->Val = ((Ptr) GLtoplevel_50);
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_50() {    /* call_toplevel_49 */
   {    register Ptr aRet, *rLit, rA4;
        rLit = GYtoplevel; rA4 = GIa4;
        if (GIa1 == GInil)      goto l_105;
        rA4 = rLit[21]->Val;
        rA4 = rA4->Val;
        {aRet = ((Ptr) GLtoplevel_48); goto lRet;}
l_105:
        rA4 = rLit[21]->Val;
        {aRet = ((Ptr) GLtoplevel_48); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLtoplevel_45() {    /* 102 */
   {    register Ptr aRet;
        GIa4 = GIa2;
        {aRet = ((Ptr) GLtoplevel_48); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_48() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtoplevel; rSp = GIsp;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = rLit[43];
        if (rLit[21]->Val != rLit[46])  {aRet = ((Ptr) GLtoplevel_51); goto lRet;}
        GIa1 = rLit[20]->Val;
        (--rSp)->Val = ((Ptr) GLtoplevel_53);
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_53() {    /* call_toplevel_52 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtoplevel; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLtoplevel_51); goto lRet;}
        (--rSp)->Val = ((Ptr) GLtoplevel_54);
        (--rSp)->Val = rLit[20]->Val;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[48] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_54() {    /* 111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtoplevel; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLtoplevel_55); goto lRet;}
        (--rSp)->Val = ((Ptr) GLtoplevel_56);
        (--rSp)->Val = rLit[20]->Val;
        (--rSp)->Val = (Ptr) 13;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[49] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtoplevel_56() {    /* 112 */
   {    register Ptr aRet, *rLit, rA1, rNil;
        rLit = GYtoplevel; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        {aRet = ((Ptr) GLtoplevel_55); goto lRet;}
        rA1 = rLit[20]->Val;
        if (rA1 != (Ptr) 1)     goto l_114;
        rA1 = rLit[50];
        goto l_113;
l_114:
        if (rA1 != (Ptr) 2)     goto l_115;
        rA1 = rLit[51];
        goto l_113;
l_115:
        if (rA1 != (Ptr) 3)     goto l_116;
        rA1 = rLit[52];
        goto l_113;
l_116:
        if (rA1 != (Ptr) 4)     goto l_117;
        rA1 = rLit[53];
        goto l_113;
l_117:
        if (rA1 != (Ptr) 5)     goto l_118;
        rA1 = rLit[54];
        goto l_113;
l_118:
        if (rA1 != (Ptr) 6)     goto l_119;
        rA1 = rLit[55];
        goto l_113;
l_119:
        if (rA1 != (Ptr) 7)     goto l_120;
        rA1 = rLit[56];
        goto l_113;
l_120:
        if (rA1 != (Ptr) 9)     goto l_121;
        rA1 = rLit[57];
        goto l_113;
l_121:
        if (rA1 != (Ptr) 10)    goto l_122;
        rA1 = rLit[58];
        goto l_113;
l_122:
        if (rA1 != (Ptr) 11)    goto l_123;
        rA1 = rLit[59];
        goto l_113;
l_123:
        if (rA1 != (Ptr) 12)    goto l_124;
        rA1 = rLit[60];
        goto l_113;
l_124:
        rA1 = rNil;
l_113:
        (--GIsp)->Val = ((Ptr) GLtoplevel_58);
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLtoplevel_58() {    /* call_toplevel_57 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLtoplevel_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_55() {    /* 109 */
   {    register Ptr aRet;
        GIa4 = GYtoplevel[20]->Val;
        {aRet = ((Ptr) GLtoplevel_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_51() {    /* 107 */
   {    register Ptr aRet, *rLit;
        rLit = GYtoplevel;
        if (rLit[62]->Val == GInil)     {aRet = ((Ptr) GLtoplevel_60); goto lRet;}
        if (rLit[21]->Val != rLit[63])  {aRet = ((Ptr) GLtoplevel_60); goto lRet;}
        GIa1 = rLit[20]->Val;
        (--GIsp)->Val = ((Ptr) GLtoplevel_62);
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_62() {    /* call_toplevel_61 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYtoplevel; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLtoplevel_60); goto lRet;}
        rA1 = rLit[20]->Val;
        if (rA1 != (Ptr) 4)     {aRet = ((Ptr) GLtoplevel_63); goto lRet;}
        rA1 = rLit[64];
        (--GIsp)->Val = ((Ptr) GLtoplevel_65);
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLtoplevel_65() {    /* call_toplevel_64 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLtoplevel_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_63() {    /* 128 */
   {    register Ptr aRet, *rLit;
        rLit = GYtoplevel;
        if (GIa1 != (Ptr) 8)    {aRet = ((Ptr) GLtoplevel_66); goto lRet;}
        GIa1 = rLit[65];
        (--GIsp)->Val = ((Ptr) GLtoplevel_68);
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_68() {    /* call_toplevel_67 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLtoplevel_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_66() {    /* 129 */
   {    register Ptr aRet, *rLit;
        rLit = GYtoplevel;
        if (GIa1 != (Ptr) 10)   {aRet = ((Ptr) GLtoplevel_69); goto lRet;}
        GIa1 = rLit[66];
        (--GIsp)->Val = ((Ptr) GLtoplevel_71);
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_71() {    /* call_toplevel_70 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLtoplevel_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_69() {    /* 130 */
   {    register Ptr aRet, *rLit;
        rLit = GYtoplevel;
        if (GIa1 != (Ptr) 11)   {aRet = ((Ptr) GLtoplevel_72); goto lRet;}
        GIa1 = rLit[67];
        (--GIsp)->Val = ((Ptr) GLtoplevel_74);
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_74() {    /* call_toplevel_73 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLtoplevel_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_72() {    /* 131 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLtoplevel_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_60() {    /* 125 */
   {    register Ptr aRet;
        GIa4 = GYtoplevel[20]->Val;
        {aRet = ((Ptr) GLtoplevel_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_59() {    /* 108 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa4;
        GIa4 = (Ptr) 6;
        {aRet = (GYtoplevel[40] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtoplevel_44() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtoplevel; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[22]->Val = (rSp + 6)->Val;
        rLit[21]->Val = (rSp + 7)->Val;
        rLit[20]->Val = (rSp + 8)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDtoplevel_75() {    /* trace catcherror */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtoplevel,14,68,69);
  lRet:  return (aRet);}}

static Ptr GDtoplevel_76() {    /* trace errset */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtoplevel,70,68,71);
  lRet:  return (aRet);}}

static Ptr GDtoplevel_77() {    /* trace err */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtoplevel,72,68,71);
  lRet:  return (aRet);}}

static Ptr GDtoplevel_78() {    /* trace break */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtoplevel,28,68,73);
  lRet:  return (aRet);}}

static Ptr GDtoplevel_79() {    /* trace syserror */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtoplevel,74,68,75);
  lRet:  return (aRet);}}

static Ptr GDtoplevel_80() {    /* trace toplevel */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtoplevel,36,68,73);
  lRet:  return (aRet);}}

static Ptr GDtoplevel_81() {    /* trace printerror */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtoplevel,27,68,75);
  lRet:  return (aRet);}}

