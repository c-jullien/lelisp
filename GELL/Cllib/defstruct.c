/* GELL 15.26: source file for the module: "defstruct" */
/*             translation done:           "Wed June 16 93 18:01:11 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "defstruct.h" 

static Ptr GLdefstruct_1() {    /* structurep */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYdefstruct; rA1 = GIa1;
        if ((rA1 < GIbvect) || (rA1 >= GIbstrg))        {aRet = ((Ptr) GLdefstruct_2); goto lRet;}
        GIa2 = rLit[0];
        rA1 = (rA1 + 1)->Val;
        (--GIsp)->Val = ((Ptr) GLdefstruct_4);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLdefstruct_4() {    /* call_defstruct_3 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLdefstruct_2); goto lRet;}
        GIa1 = GYdefstruct[2];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefstruct_2() {    /* 101 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefstruct_5() {    /* defstruct */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBsymb, rBcons;
        rLit = GYdefstruct; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBsymb = GIbsymb; rBcons = GIbcons;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA4;
        if ((rA1 >= GIbvar) && (rA1 < rBcons))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[3];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
l_103:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_104;
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        if ((rSp->Val < rBsymb) || (rSp->Val >= rBcons))        goto l_105;
        rA1 = rNil;
        goto l_106;
l_105:
        if ((long) rSp->Val < (long) rBcons)    goto l_109;
        rA4 = rSp->Val;
        if ((rA4->Val >= rBsymb) && (rA4->Val < rBcons))        goto l_107;
l_109:
        rA3 = rSp->Val;
        rA2 = rLit[4];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        goto l_106;
l_107:
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
l_106:
        rSp += (Fix) 1;
        rA2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_103;
l_104:
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
l_110:
        if ((long) (rSp + 1)->Val < (long) rBcons)      goto l_111;
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        if ((long) rSp->Val >= (long) rBcons)   goto l_112;
        rA1 = rSp->Val;
        goto l_113;
l_112:
        rA1 = rSp->Val;
        rA1 = rA1->Val;
l_113:
        rSp += (Fix) 1;
        rA2 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        rSp->Val = rA1;
        goto l_110;
l_111:
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, rBcons);
        rSp += (Fix) 2;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) ((UFix) 0xffff);
        (--rSp)->Val = rA1;
        rA2 = rA1;
        rA1 = (rSp + 3)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 4)->Val = rA1;
        {aRet = ((Ptr) GLdefstruct_6); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLdefstruct_6() {    /* 114 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYdefstruct; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        if ((rA4 + 3)->Val == GInil)    {aRet = ((Ptr) GLdefstruct_7); goto lRet;}
        GIa2 = rLit[0];
        GIa1 = (rA4 + 3)->Val;
        (--rSp)->Val = ((Ptr) GLdefstruct_9);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdefstruct_9() {    /* call_defstruct_8 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLdefstruct_7); goto lRet;}
        GIa4 = (rSp + 2)->Val;
        (rSp + 2)->Val = (GIa4 + 3)->Val;
        (--rSp)->Val = ((Ptr) GLdefstruct_10);
        GIa2 = rLit[0];
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLdefstruct_12);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_12() {   /* call_defstruct_11 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1->Val;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYdefstruct[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_10() {   /* 116 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        (rSp + 3)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefstruct_13);
        GIa2 = rLit[0];
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLdefstruct_15);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_15() {   /* call_defstruct_14 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (GIa1 + 1)->Val;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYdefstruct[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_13() {   /* 117 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLdefstruct_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefstruct_7() {    /* 115 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj6);
        (--rSp)->Val = rLit[6];
        (--rSp)->Val = ((Ptr) GLdefstruct_16);
        (--rSp)->Val = rLit[7];
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_16() {   /* 119 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = ((Ptr) GLdefstruct_17);
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = ((Ptr) GLdefstruct_18);
        (--rSp)->Val = rLit[7];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_18() {   /* 121 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefstruct_19);
        (--rSp)->Val = rLit[7];
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_19() {   /* 122 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[11];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_17() {   /* 120 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefstruct_20);
        (--rSp)->Val = rLit[13];
        GIa2 = rLit[14];
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLdefstruct_22);
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_22() {   /* call_defstruct_21 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefstruct; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GInil;
        (--rSp)->Val = ((Ptr) GLdefstruct_23);
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = ((Ptr) GLdefstruct_24);
        (--rSp)->Val = ((Ptr) GLdefstruct_25);
        (--rSp)->Val = rLit[17];
        GIa2 = (rSp + 17)->Val;
        rA1 = rLit[17];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefstruct_25() {   /* 126 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYdefstruct[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefstruct_24() {   /* 125 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefstruct_26);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = ((Ptr) GLdefstruct_27);
        (--rSp)->Val = rLit[7];
        {register Ptr aux;
                aux = (rSp + 22)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_27() {   /* 128 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefstruct[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefstruct_26() {   /* 127 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[19];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_23() {   /* 124 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYdefstruct[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefstruct_20() {   /* 123 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLdefstruct_28); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_28() {   /* 129 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLdefstruct_29); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLdefstruct_31);
        {aRet = (GYdefstruct[20] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLdefstruct_31() {   /* call_defstruct_30 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYdefstruct; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (rSp + 10)->Val = rA1;
        if (rLit[21]->Val != rNil)      goto l_133;
        rA2 = (rSp + 13)->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, rA2, GIbcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLdefstruct_32); goto lRet;}
l_133:
        rA2 = rSp->Val;
        rA1 = (rSp + 14)->Val;
        (--rSp)->Val = ((Ptr) GLdefstruct_34);
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLdefstruct_34() {   /* call_defstruct_33 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYdefstruct; rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        (--rSp)->Val = ((Ptr) GLdefstruct_35);
        (--rSp)->Val = ((Ptr) GLdefstruct_36);
        (--rSp)->Val = rLit[13];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[22];
        (--rSp)->Val = ((Ptr) GLdefstruct_37);
        (--rSp)->Val = rLit[23];
        (--rSp)->Val = ((Ptr) GLdefstruct_38);
        (--rSp)->Val = rLit[7];
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_38() {   /* 137 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 18)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[24];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_37() {   /* 136 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYdefstruct[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefstruct_36() {   /* 135 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefstruct_39);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = rLit[26];
        (--rSp)->Val = ((Ptr) GLdefstruct_40);
        (--rSp)->Val = rLit[27];
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_40() {   /* 139 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefstruct[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefstruct_39() {   /* 138 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefstruct_41);
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = rLit[28];
        (--rSp)->Val = ((Ptr) GLdefstruct_42);
        (--rSp)->Val = rLit[29];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[30];
        (--rSp)->Val = ((Ptr) GLdefstruct_43);
        (--rSp)->Val = rLit[31];
        (--rSp)->Val = rLit[32];
        (--rSp)->Val = ((Ptr) GLdefstruct_44);
        (--rSp)->Val = rLit[8];
        (--rSp)->Val = rLit[33];
        (--rSp)->Val = rLit[34];
        {register Ptr aux;
                aux = (rSp + 27)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 4;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_44() {   /* 143 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLdefstruct_45);
        (--rSp)->Val = rLit[8];
        (--rSp)->Val = rLit[35];
        (--rSp)->Val = rLit[34];
        {register Ptr aux;
                aux = (rSp + 28)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[36];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_45() {   /* 144 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYdefstruct[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefstruct_43() {   /* 142 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYdefstruct[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefstruct_42() {   /* 141 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefstruct[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefstruct_41() {   /* 140 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYdefstruct[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefstruct_32() {   /* 131 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = ((Ptr) GLdefstruct_35); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefstruct_35() {   /* 132 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLdefstruct_47);
        {aRet = (GYdefstruct[37] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_47() {   /* call_defstruct_46 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLdefstruct_28); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLdefstruct_29() {   /* 130 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 2;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 6;
        {aRet = (GYdefstruct[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLdefstruct_48() {   /* new */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[0];
        (--rSp)->Val = ((Ptr) GLdefstruct_50);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_50() {   /* call_defstruct_49 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLdefstruct_51); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopj1);
        GIa2 = rLit[14];
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLdefstruct_53);
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_53() {   /* call_defstruct_52 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 2;
        {aRet = (GYdefstruct[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLdefstruct_51() {   /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYdefstruct; rSp = GIsp;
        GIa3 = rSp->Val;
        GIa2 = rLit[39];
        GIa1 = rLit[40];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDdefstruct_54() {   /* trace structurep */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefstruct,41,42,43);
  lRet:  return (aRet);}}

static Ptr GDdefstruct_55() {   /* trace defstruct */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefstruct,0,42,43);
  lRet:  return (aRet);}}

static Ptr GDdefstruct_56() {   /* trace new */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYdefstruct,40,42,43);
  lRet:  return (aRet);}}

