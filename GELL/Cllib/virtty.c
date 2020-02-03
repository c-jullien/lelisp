/* GELL 15.26: source file for the module: "virtty" */
/*             translation done:           "Wed June 16 93 18:02:54 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "virtty.h" 

static Ptr GLvirtty_1() {       /* tyod */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = ((Ptr) GLvirtty_2);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[1];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_2() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_3() {       /* #:tty:tyod */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA1;
        if ((Fix) (rA2) > (Fix) 1)      goto l_103;
        if ((Fix) (rA1) <= (Fix) 9)     {aRet = ((Ptr) GLvirtty_4); goto lRet;}
l_103:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) 10));
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLvirtty_4);
        {aRet = (GYvirtty[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLvirtty_4() {       /* 102 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GXpopj1);
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) % (Fix) 10));
        rA3 = (Ptr) 48;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (rA4)));
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 1;
        {aRet = (GYvirtty[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLvirtty_5() {       /* to-tty */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYvirtty; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[3];
        (--rSp)->Val = ((Ptr) GLvirtty_6);
        (--rSp)->Val = rLit[2];
        (--rSp)->Val = rLit[0];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[6];
        rA4 = (Ptr) 4;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLvirtty_6() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYvirtty[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_7() {       /* get-tty */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirtty; rSp = GIsp; rA1 = GIa1;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[8];
        (--rSp)->Val = ((Ptr) GLvirtty_8);
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = rLit[0];
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[10];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirtty_8() {       /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYvirtty[11] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_9() {       /* tyerror */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = ((Ptr) GLvirtty_10);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_10() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_11() {      /* typrologue */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLvirtty_12);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[13];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_12() {      /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_13() {      /* tyepilogue */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLvirtty_14);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_14() {      /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_15() {      /* tycleol */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLvirtty_16);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_16() {      /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_17() {      /* tycleos */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLvirtty_18);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[16];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_18() {      /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_19() {      /* tybeep */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLvirtty_20);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_20() {      /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_21() {      /* tyinsch */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = ((Ptr) GLvirtty_22);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_22() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_23() {      /* tydelch */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLvirtty_24);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[19];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_24() {      /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_25() {      /* tyinscn */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = ((Ptr) GLvirtty_26);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[20];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_26() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_27() {      /* tydelcn */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = ((Ptr) GLvirtty_28);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[21];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_28() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_29() {      /* tyinsln */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLvirtty_30);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[22];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_30() {      /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_31() {      /* tydelln */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLvirtty_32);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[23];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_32() {      /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_33() {      /* tybs */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = ((Ptr) GLvirtty_34);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[24];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_34() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_35() {      /* tycr */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = ((Ptr) GLvirtty_36);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[25];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_36() {      /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_37() {      /* tyname */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_38);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[26];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_38() {      /* 101 */
   {    register Ptr aRet;
        GIa1 = GIa1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_39() {      /* tyxmax */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_40);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[27];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_40() {      /* 101 */
   {    register Ptr aRet;
        GIa1 = GIa1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_41() {      /* tyymax */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_42);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[28];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_42() {      /* 101 */
   {    register Ptr aRet;
        GIa1 = GIa1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_43() {      /* tyupkey */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_44);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[29];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_44() {      /* 101 */
   {    register Ptr aRet;
        GIa1 = GIa1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_45() {      /* tydownkey */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_46);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[30];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_46() {      /* 101 */
   {    register Ptr aRet;
        GIa1 = GIa1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_47() {      /* tyleftkey */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_48);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[31];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_48() {      /* 101 */
   {    register Ptr aRet;
        GIa1 = GIa1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_49() {      /* tyrightkey */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_50);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[32];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_50() {      /* 101 */
   {    register Ptr aRet;
        GIa1 = GIa1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_51() {      /* tyattrib */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirtty; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        rA1 = rNil;
        goto l_nlist_virtty_53;
l_nlist_virtty_52:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virtty_53:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virtty_52;}
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        {aRet = ((Ptr) GLvirtty_54); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirtty_55);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[33];
        (--rSp)->Val = rNil;
        rA4 = (Ptr) 3;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirtty_55() {      /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GIa1->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_54() {      /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_56);
        (--rSp)->Val = ((Ptr) GLvirtty_57);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[33];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_57() {      /* 105 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = (rSp + 2)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirtty_56() {      /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_58);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[33];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_58() {      /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        GIa1->Val = rA4->Val;
        GIa1 = rA4->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirtty_59() {      /* tyshowcursor */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYvirtty; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        rA1 = rNil;
        goto l_nlist_virtty_61;
l_nlist_virtty_60:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virtty_61:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virtty_60;}
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        {aRet = ((Ptr) GLvirtty_62); goto lRet;}
        (--rSp)->Val = ((Ptr) GLvirtty_63);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[34];
        (--rSp)->Val = rNil;
        rA4 = (Ptr) 3;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirtty_63() {      /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GIa1->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_62() {      /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_64);
        (--rSp)->Val = ((Ptr) GLvirtty_65);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[34];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_65() {      /* 105 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = (rSp + 2)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (GYvirtty[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirtty_64() {      /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_66);
        (--rSp)->Val = rLit[0]->Val;
        (--rSp)->Val = rLit[34];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_66() {      /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        GIa1->Val = rA4->Val;
        GIa1 = rA4->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirtty_67() {      /* #:tty:tyerror */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_68() {      /* #:tty:typrologue */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_69() {      /* #:tty:tyepilogue */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_70() {      /* #:tty:tycleol */
   {    register Ptr aRet, *rLit;
        rLit = GYvirtty;
        GIa1 = rLit[35];
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_71() {      /* #:tty:tycleos */
   {    register Ptr aRet, *rLit;
        rLit = GYvirtty;
        GIa1 = rLit[36];
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_72() {      /* #:tty:tybeep */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = (Ptr) 7;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirtty[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_73() {      /* #:tty:tyinsch */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_74);
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_74() {      /* 101 */
   {    register Ptr aRet;
        {aRet = (GYvirtty[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_75() {      /* #:tty:tyinscn */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_76);
        (--rSp)->Val = rLit[20];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_76() {      /* 101 */
   {    register Ptr aRet;
        {aRet = (GYvirtty[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_77() {      /* #:tty:tydelch */
   {    register Ptr aRet, *rLit;
        rLit = GYvirtty;
        GIa1 = rLit[37];
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_78() {      /* #:tty:tydelcn */
   {    register Ptr aRet;
        {aRet = (GYvirtty[19] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_79() {      /* #:tty:tyinsln */
   {    register Ptr aRet, *rLit;
        rLit = GYvirtty;
        GIa1 = rLit[38];
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_80() {      /* #:tty:tydelln */
   {    register Ptr aRet, *rLit;
        rLit = GYvirtty;
        GIa1 = rLit[39];
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_81() {      /* #:tty:tyattrib */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_82);
        (--rSp)->Val = rLit[33];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_82() {      /* 101 */
   {    register Ptr aRet;
        {aRet = (GYvirtty[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_83() {      /* #:tty:tybs */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = (Ptr) 8;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirtty[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_84() {      /* #:tty:tycr */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = (Ptr) 13;
        GIa4 = (Ptr) 1;
        {aRet = (GYvirtty[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_85() {      /* #:tty:tyshowcursor */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_86);
        (--rSp)->Val = rLit[34];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_86() {      /* 101 */
   {    register Ptr aRet;
        {aRet = (GYvirtty[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_87() {      /* tyco */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirtty; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 3)     goto l_101;
        rA1 = rLit[40];
        rA2 = (Ptr) 3;
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 3));
        rA1 = GInil;
        goto l_nlist_virtty_89;
l_nlist_virtty_88:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virtty_89:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virtty_88;}
        (--rSp)->Val = rA1;
        rA2 = (rSp + 2)->Val;
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirtty_91);
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirtty_91() {      /* call_virtty_90 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_92);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirtty[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_92() {      /* 103 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (rSp->Val == rNil)   goto l_104;
        (--rSp)->Val = ((Ptr) GLvirtty_92);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (GYvirtty[5] + 2)->Val; goto lRet;}
l_104:
        GIa1 = rNil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirtty_93() {      /* tycot */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirtty; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 3)     goto l_101;
        rA1 = rLit[43];
        rA2 = (Ptr) 3;
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 3));
        rA1 = GInil;
        goto l_nlist_virtty_95;
l_nlist_virtty_94:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virtty_95:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virtty_94;}
        (--rSp)->Val = rA1;
        rA2 = (rSp + 2)->Val;
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLvirtty_97);
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirtty_97() {      /* call_virtty_96 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_98);
        (--rSp)->Val = rLit[44];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_98() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_99);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYvirtty[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_99() {      /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYvirtty; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (rSp->Val == rNil)   goto l_105;
        (--rSp)->Val = ((Ptr) GLvirtty_99);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
l_105:
        (--rSp)->Val = ((Ptr) GXpopj4);
        (--rSp)->Val = rNil;
        rA4 = (Ptr) 1;
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLvirtty_100() {     /* initty */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYvirtty; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA1 = GInil;
        goto l_nlist_virtty_102;
l_nlist_virtty_101:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_virtty_102:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_virtty_101;}
        if ((long) rA1 < (long) GIbcons)        goto l_101;
        rA2 = rA1->Val;
        {aRet = ((Ptr) GLvirtty_103); goto lRet;}
l_101:
        rA1 = rLit[45];
        (--rSp)->Val = ((Ptr) GLvirtty_105);
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLvirtty_105() {     /* call_virtty_104 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        if (GIa2 != GInil)      {aRet = ((Ptr) GLvirtty_103); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLvirtty_107);
        {aRet = (GYvirtty[47] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_107() {     /* call_virtty_106 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        {aRet = ((Ptr) GLvirtty_103); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_103() {     /* 102 */
   {    register Ptr aRet;
        GIa1 = GInil;
        (--GIsp)->Val = ((Ptr) GLvirtty_109);
        {aRet = (GYvirtty[48] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_109() {     /* call_virtty_108 */
   {    register Ptr aRet, *rLit;
        rLit = GYvirtty;
        rLit[49]->Val = GIa1;
        if (rLit[0]->Val == GInil)      {aRet = ((Ptr) GLvirtty_110); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLvirtty_112);
        {aRet = (rLit[50] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_112() {     /* call_virtty_111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = rLit[0]->Val;
        (--rSp)->Val = ((Ptr) GLvirtty_114);
        {aRet = (rLit[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_114() {     /* call_virtty_113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLvirtty_116);
        {aRet = (GYvirtty[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_116() {     /* call_virtty_115 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLvirtty_117); goto lRet;}
        {aRet = ((Ptr) GLvirtty_110); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_110() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_118);
        (--rSp)->Val = rLit[52]->Val;
        (--rSp)->Val = rLit[49]->Val;
        (--rSp)->Val = rLit[53]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_118() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLvirtty_120);
        {aRet = (GYvirtty[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_120() {     /* call_virtty_119 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirtty; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_108;
        GIa2 = rLit[44];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLvirtty_121);
        {aRet = (rLit[56] + 2)->Val; goto lRet;}
l_108:
        (--rSp)->Val = rLit[44];
        (--rSp)->Val = rLit[57]->Val;
        rLit[57]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[58];
        (--rSp)->Val = rLit[59];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirtty_122);
        (--rSp)->Val = rLit[60];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        rA1 = rLit[61];
        (--rSp)->Val = ((Ptr) GLvirtty_124);
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirtty_124() {     /* call_virtty_123 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_125);
        (--rSp)->Val = rLit[63];
        (--rSp)->Val = rLit[49]->Val;
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_125() {     /* 112 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_126);
        (--rSp)->Val = rLit[64];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[65] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_126() {     /* 113 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLvirtty_127); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_127() {     /* 114 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirtty; rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_115;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLvirtty_127);
        {aRet = (rLit[66] + 2)->Val; goto lRet;}
l_115:
        rSp += (Fix) 1;
        GIa2 = rLit[44];
        rA1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLvirtty_129);
        {aRet = (rLit[56] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirtty_129() {     /* call_virtty_128 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLvirtty_122); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_122() {     /* 111 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYvirtty; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        GIdlink = (rSp + 1)->Val;
        rLit[57]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if ((rA1 < GIbcons) || (rA1 >= GIecons)) rA1 = rNil;
        if (rA1 != rNil)        {aRet = ((Ptr) GLvirtty_121); goto lRet;}
        (--rSp)->Val = rLit[44];
        (--rSp)->Val = rLit[57]->Val;
        rLit[57]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[67];
        (--rSp)->Val = rLit[59];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLvirtty_130);
        (--rSp)->Val = rLit[60];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        rA1 = rLit[68];
        (--rSp)->Val = ((Ptr) GLvirtty_132);
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirtty_132() {     /* call_virtty_131 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_133);
        (--rSp)->Val = rLit[69];
        (--rSp)->Val = rLit[49]->Val;
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_133() {     /* 117 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYvirtty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLvirtty_134);
        (--rSp)->Val = rLit[70];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[65] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_134() {     /* 118 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLvirtty_135); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLvirtty_135() {     /* 119 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYvirtty; rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_120;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLvirtty_135);
        {aRet = (rLit[66] + 2)->Val; goto lRet;}
l_120:
        rSp += (Fix) 1;
        GIa2 = rLit[44];
        rA1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLvirtty_137);
        {aRet = (rLit[56] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirtty_137() {     /* call_virtty_136 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLvirtty_130); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_130() {     /* 116 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIdlink = (rSp + 1)->Val;
        GYvirtty[57]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if ((rA1 < GIbcons) || (rA1 >= GIecons)) rA1 = GInil;
        {aRet = ((Ptr) GLvirtty_121); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLvirtty_121() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYvirtty[49]->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLvirtty_117() {     /* 104 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDvirtty_138() {     /* trace tyod */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,1,71,72);
  lRet:  return (aRet);}}

static Ptr GDvirtty_139() {     /* trace #:tty:tyod */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,4,71,72);
  lRet:  return (aRet);}}

static Ptr GDvirtty_140() {     /* trace to-tty */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,73,71,74);
  lRet:  return (aRet);}}

static Ptr GDvirtty_141() {     /* trace get-tty */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,75,71,74);
  lRet:  return (aRet);}}

static Ptr GDvirtty_142() {     /* trace tyerror */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,12,71,74);
  lRet:  return (aRet);}}

static Ptr GDvirtty_143() {     /* trace typrologue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,13,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_144() {     /* trace tyepilogue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,14,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_145() {     /* trace tycleol */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,15,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_146() {     /* trace tycleos */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,16,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_147() {     /* trace tybeep */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,17,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_148() {     /* trace tyinsch */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,18,71,74);
  lRet:  return (aRet);}}

static Ptr GDvirtty_149() {     /* trace tydelch */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,19,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_150() {     /* trace tyinscn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,20,71,74);
  lRet:  return (aRet);}}

static Ptr GDvirtty_151() {     /* trace tydelcn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,21,71,74);
  lRet:  return (aRet);}}

static Ptr GDvirtty_152() {     /* trace tyinsln */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,22,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_153() {     /* trace tydelln */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,23,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_154() {     /* trace tybs */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,24,71,74);
  lRet:  return (aRet);}}

static Ptr GDvirtty_155() {     /* trace tycr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,25,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_156() {     /* trace tyname */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,77,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_157() {     /* trace tyxmax */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,78,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_158() {     /* trace tyymax */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,79,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_159() {     /* trace tyupkey */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,80,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_160() {     /* trace tydownkey */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,81,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_161() {     /* trace tyleftkey */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,82,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_162() {     /* trace tyrightkey */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,83,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_163() {     /* trace tyattrib */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,33,71,84);
  lRet:  return (aRet);}}

static Ptr GDvirtty_164() {     /* trace tyshowcursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,34,71,84);
  lRet:  return (aRet);}}

static Ptr GDvirtty_165() {     /* trace #:tty:tyerror */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,85,71,74);
  lRet:  return (aRet);}}

static Ptr GDvirtty_166() {     /* trace #:tty:typrologue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,86,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_167() {     /* trace #:tty:tyepilogue */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,87,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_168() {     /* trace #:tty:tycleol */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,88,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_169() {     /* trace #:tty:tycleos */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,89,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_170() {     /* trace #:tty:tybeep */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,90,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_171() {     /* trace #:tty:tyinsch */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,91,71,74);
  lRet:  return (aRet);}}

static Ptr GDvirtty_172() {     /* trace #:tty:tyinscn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,92,71,74);
  lRet:  return (aRet);}}

static Ptr GDvirtty_173() {     /* trace #:tty:tydelch */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,93,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_174() {     /* trace #:tty:tydelcn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,94,71,74);
  lRet:  return (aRet);}}

static Ptr GDvirtty_175() {     /* trace #:tty:tyinsln */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,95,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_176() {     /* trace #:tty:tydelln */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,96,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_177() {     /* trace #:tty:tyattrib */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,97,71,74);
  lRet:  return (aRet);}}

static Ptr GDvirtty_178() {     /* trace #:tty:tybs */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,98,71,74);
  lRet:  return (aRet);}}

static Ptr GDvirtty_179() {     /* trace #:tty:tycr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,99,71,76);
  lRet:  return (aRet);}}

static Ptr GDvirtty_180() {     /* trace #:tty:tyshowcursor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,100,71,74);
  lRet:  return (aRet);}}

static Ptr GDvirtty_181() {     /* trace tyco */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,40,71,84);
  lRet:  return (aRet);}}

static Ptr GDvirtty_182() {     /* trace tycot */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,43,71,84);
  lRet:  return (aRet);}}

static Ptr GDvirtty_183() {     /* trace initty */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYvirtty,101,71,84);
  lRet:  return (aRet);}}

