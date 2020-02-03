/* GELL 15.26: source file for the module: "stringio" */
/*             translation done:           "Wed June 16 93 18:02:47 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "stringio.h" 

static Ptr GLstringio_1() {     /* read-from-string */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        (--rSp)->Val = ((Ptr) GLstringio_2);
        GIa4 = (Ptr) 0;
        {aRet = (GYstringio[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_2() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstringio_3);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstringio_4);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYstringio[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_4() {     /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLstringio_5);
        GIa4 = (Ptr) 0;
        {aRet = (GYstringio[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstringio_5() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYstringio; rSp = GIsp; rA1 = GIa1;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[2]->Val;
        rLit[2]->Val = (rSp + 3)->Val;
        (--rSp)->Val = rLit[3]->Val;
        rLit[3]->Val = (rSp + 5)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[4];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstringio_6);
        (--rSp)->Val = rLit[6];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa2 = rLit[7]->Val;
        rA1 = rLit[8];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rLit[7]->Val;
        rLit[7]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[9];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstringio_8);
        {aRet = (rLit[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstringio_8() {     /* call_stringio_7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYstringio[7]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLstringio_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_6() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 9)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstringio_9);
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYstringio[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_9() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLstringio_10);
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 1;
        {aRet = (GYstringio[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_10() {    /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstringio; rSp = GIsp;
        GIa1 = (rSp + 9)->Val;
        GIdlink = (rSp + 1)->Val;
        rLit[3]->Val = (rSp + 6)->Val;
        rLit[2]->Val = (rSp + 7)->Val;
        rSp += (Fix) 12;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj2);
        {aRet = ((Ptr) GLstringio_3); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_3() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLstringio_11);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYstringio[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_11() {    /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_12() {    /* with-input-from-string */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYstringio; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = rLit[13];
        (--rSp)->Val = ((Ptr) GLstringio_13);
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = ((Ptr) GLstringio_14);
        (--rSp)->Val = rLit[3];
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLstringio_14() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYstringio; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rLit[16];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLstringio_15);
        (--rSp)->Val = rLit[17];
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = ((Ptr) GLstringio_16);
        (--rSp)->Val = rLit[19];
        (--rSp)->Val = rLit[6];
        (--rSp)->Val = ((Ptr) GLstringio_17);
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = rLit[20];
        rA2 = (rSp + 15)->Val;
        rA1 = rLit[21];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLstringio_17() {    /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYstringio[15] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstringio_16() {    /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYstringio[15] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstringio_15() {    /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstringio; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[22];
        GIa4 = (Ptr) 4;
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_13() {    /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYstringio[15] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstringio_18() {    /* #:stringio:in:bol */
   {    register Ptr aRet, *rLit;
        rLit = GYstringio;
        GIa1 = rLit[3]->Val;
        {aRet = (rLit[24] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstringio_19() {    /* #:stringio:in:syserror */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GYstringio[8];
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa3;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLstringio_20); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_21() {    /* #:stringio:bol */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstringio; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rLit[2]->Val;
        (--rSp)->Val = ((Ptr) GLstringio_23);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_23() {    /* call_stringio_22 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) ((rSp + 1)->Val)));
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLstringio_24);
        GIa4 = (Ptr) 0;
        {aRet = (GYstringio[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstringio_24() {    /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYstringio; rSp = GIsp; rA4 = GIa4;
        rA4 = (GIa1->Val + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
        (--rSp)->Val = rA4;
        if ((Fix) (rA4) <= (Fix) ((rSp + 1)->Val))      goto l_103;
        rSp->Val = (rSp + 1)->Val;
l_103:
        if (rLit[2]->Val != (rSp + 2)->Val)     {aRet = ((Ptr) GLstringio_25); goto lRet;}
        GIa1 = GInil;
        GIa2 = rLit[6];
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLstringio_25() {    /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (rSp->Val == (rSp + 4)->Val) {aRet = ((Ptr) GLstringio_26); goto lRet;}
        (--rSp)->Val = ((Ptr) GLstringio_27);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 7)->Val->Val + 2)) + (Fix) ((rSp + 5)->Val)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYstringio[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLstringio_27() {    /* 108 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 4)->Val = rA4;
        rA3 = (rSp + 3)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
        (rSp + 3)->Val = rA3;
        {aRet = ((Ptr) GLstringio_25); goto lRet;}
  lRet: GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLstringio_26() {    /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYstringio; rSp = GIsp; rA4 = GIa4;
        rA4 = rLit[2]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rSp->Val)));
        rLit[2]->Val = rA4;
        if ((rSp + 3)->Val != (rSp + 2)->Val)   {aRet = ((Ptr) GLstringio_28); goto lRet;}
        (--rSp)->Val = ((Ptr) GLstringio_29);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 13;
        rA4 = (Ptr) 2;
        {aRet = (rLit[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLstringio_29() {    /* 111 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLstringio_28);
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 1)->Val = rA4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 10;
        rA4 = (Ptr) 2;
        {aRet = (GYstringio[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLstringio_28() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj6);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYstringio[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_30() {    /* print-to-string */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstringio; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[3]->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLstringio_31);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_31() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstringio_32);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstringio_33);
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 1;
        {aRet = (GYstringio[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_33() {    /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstringio; rSp = GIsp;
        (--rSp)->Val = rLit[3]->Val;
        (--rSp)->Val = ((Ptr) GLstringio_34);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_34() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstringio_35);
        GIa4 = (Ptr) 0;
        {aRet = (GYstringio[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_35() {    /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYstringio; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[31]->Val;
        rLit[31]->Val = (rSp + 2)->Val;
        (--rSp)->Val = rLit[2]->Val;
        rLit[2]->Val = (rSp + 4)->Val;
        (--rSp)->Val = rLit[3]->Val;
        rLit[3]->Val = (rSp + 7)->Val;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[32];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstringio_36);
        rA4 = (rLit[3]->Val->Val + 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLstringio_36() {    /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYstringio; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLstringio_37);
        (--rSp)->Val = rLit[6];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa2 = rLit[7]->Val;
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rLit[7]->Val;
        rLit[7]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[34];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstringio_38);
        {register Ptr aux;
                aux = (rSp + 33)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (rLit[35] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstringio_38() {    /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYstringio[7]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLstringio_37); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_37() {    /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLstringio_39);
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYstringio[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_39() {    /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLstringio_40);
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYstringio[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_40() {    /* 112 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstringio; rSp = GIsp;
        GIa1 = rLit[31]->Val;
        GIdlink = (rSp + 1)->Val;
        rLit[3]->Val = (rSp + 6)->Val;
        rLit[2]->Val = (rSp + 7)->Val;
        rLit[31]->Val = (rSp + 8)->Val;
        rSp += (Fix) 14;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLstringio_41);
        {aRet = ((Ptr) GLstringio_32); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_32() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLstringio_42);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYstringio[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_42() {    /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_41() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYstringio[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_43() {    /* with-output-to-string */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYstringio; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        GIa3 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = rLit[12];
        (--rSp)->Val = rLit[37];
        (--rSp)->Val = ((Ptr) GLstringio_44);
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = ((Ptr) GLstringio_45);
        (--rSp)->Val = ((Ptr) GLstringio_46);
        (--rSp)->Val = rLit[3];
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLstringio_46() {    /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstringio; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstringio_47);
        (--rSp)->Val = rLit[2];
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_47() {    /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstringio; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[38];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_45() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYstringio; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[39];
        (--rSp)->Val = ((Ptr) GLstringio_48);
        (--rSp)->Val = rLit[19];
        (--rSp)->Val = rLit[6];
        (--rSp)->Val = ((Ptr) GLstringio_49);
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = rLit[40];
        GIa2 = (rSp + 13)->Val;
        rA1 = rLit[21];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstringio_49() {    /* 107 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYstringio[15] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstringio_48() {    /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstringio; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[41];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_44() {    /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 3;
        {aRet = (GYstringio[15] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstringio_50() {    /* #:stringio:out:eol */
   {    register Ptr aRet, *rLit;
        rLit = GYstringio;
        GIa1 = rLit[3]->Val;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstringio_51() {    /* #:stringio:out:flush */
   {    register Ptr aRet, *rLit;
        rLit = GYstringio;
        GIa1 = rLit[3]->Val;
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstringio_52() {    /* #:stringio:out:syserror */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GYstringio[33];
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa3;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLstringio_20); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_53() {    /* #:stringio:flush */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstringio_54);
        GIa4 = (Ptr) 0;
        {aRet = (GYstringio[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_54() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstringio_55);
        GIa4 = (Ptr) 0;
        {aRet = (GYstringio[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_55() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstringio_56);
        GIa4 = (Ptr) 0;
        {aRet = (GYstringio[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_56() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYstringio; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = ((rSp + 2)->Val->Val + 1)->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLstringio_57);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[2]->Val;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLstringio_57() {    /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rSp->Val)));
        (rSp + 2)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLstringio_58);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 32;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (GYstringio[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLstringio_58() {    /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4;
        rLit = GYstringio; rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = rLit[2]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 2)->Val)));
        rLit[2]->Val = rA4;
        if ((Fix) (rA4) <= (Fix) ((rSp + 1)->Val))      goto l_107;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) ((rSp + 1)->Val)));
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) (rA4)));
        rA4 = rLit[31]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA3)));
        rLit[31]->Val = rA4;
        GIa1 = rA4;
        GIa2 = rLit[6];
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
l_107:
        rA4 = rLit[31]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 2)->Val)));
        rLit[31]->Val = rA4;
        rLit[31]->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopj6);
        (--rSp)->Val = ((Ptr) GLstringio_59);
        rA4 = (Ptr) 0;
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLstringio_59() {    /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYstringio[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstringio_60() {    /* #:stringio:eol */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstringio_61);
        GIa4 = (Ptr) 0;
        {aRet = (GYstringio[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_61() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstringio_62);
        GIa4 = (Ptr) 0;
        {aRet = (GYstringio[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_62() {    /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLstringio_63);
        GIa4 = (Ptr) 0;
        {aRet = (GYstringio[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_63() {    /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYstringio; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = ((rSp + 2)->Val->Val + 1)->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLstringio_64);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[2]->Val;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLstringio_64() {    /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rSp->Val)));
        (rSp + 2)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLstringio_65);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 32;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = (GYstringio[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLstringio_65() {    /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4;
        rLit = GYstringio; rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = rLit[2]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 2)->Val)));
        rLit[2]->Val = rA4;
        if ((Fix) (rA4) <= (Fix) ((rSp + 1)->Val))      goto l_107;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) ((rSp + 1)->Val)));
        rA3 = (rSp + 2)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) (rA4)));
        rA4 = rLit[31]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA3)));
        rLit[31]->Val = rA4;
        GIa1 = rA4;
        GIa2 = rLit[6];
        {aRet = (rLit[27] + 2)->Val; goto lRet;}
l_107:
        rA4 = rLit[31]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) ((rSp + 2)->Val)));
        rLit[31]->Val = rA4;
        rLit[31]->Val = rA4;
        (--rSp)->Val = ((Ptr) GXpopj6);
        (--rSp)->Val = ((Ptr) GLstringio_66);
        rA4 = (Ptr) 0;
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLstringio_66() {    /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYstringio[30] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstringio_20() {    /* #:stringio:aux-error */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstringio; rSp = GIsp;
        GIa2 = rLit[7]->Val;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLstringio_68);
        {aRet = (rLit[48] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_68() {    /* call_stringio_67 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYstringio; rSp = GIsp;
        (--rSp)->Val = rLit[7]->Val;
        rLit[7]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[49];
        (--rSp)->Val = rLit[5];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLstringio_69);
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstringio_69() {    /* 101 */
   {    register Ptr aRet, *rLit;
        rLit = GYstringio;
        GIa2 = GIa1;
        GIa1 = rLit[50];
        (--GIsp)->Val = ((Ptr) GLstringio_71);
        {aRet = (rLit[51] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstringio_71() {    /* call_stringio_70 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYstringio[7]->Val = (rSp + 6)->Val;
        rSp += (Fix) 11;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDstringio_72() {    /* trace read-from-string */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstringio,52,53,54);
  lRet:  return (aRet);}}

static Ptr GDstringio_73() {    /* trace with-input-from-string */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstringio,55,53,54);
  lRet:  return (aRet);}}

static Ptr GDstringio_74() {    /* trace #:stringio:in:bol */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstringio,56,53,57);
  lRet:  return (aRet);}}

static Ptr GDstringio_75() {    /* trace #:stringio:in:syserror */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstringio,58,53,59);
  lRet:  return (aRet);}}

static Ptr GDstringio_76() {    /* trace #:stringio:bol */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstringio,24,53,54);
  lRet:  return (aRet);}}

static Ptr GDstringio_77() {    /* trace print-to-string */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstringio,60,53,54);
  lRet:  return (aRet);}}

static Ptr GDstringio_78() {    /* trace with-output-to-string */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstringio,61,53,54);
  lRet:  return (aRet);}}

static Ptr GDstringio_79() {    /* trace #:stringio:out:eol */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstringio,62,53,57);
  lRet:  return (aRet);}}

static Ptr GDstringio_80() {    /* trace #:stringio:out:flush */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstringio,63,53,57);
  lRet:  return (aRet);}}

static Ptr GDstringio_81() {    /* trace #:stringio:out:syserror */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstringio,64,53,59);
  lRet:  return (aRet);}}

static Ptr GDstringio_82() {    /* trace #:stringio:flush */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstringio,43,53,54);
  lRet:  return (aRet);}}

static Ptr GDstringio_83() {    /* trace #:stringio:eol */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYstringio,42,53,54);
  lRet:  return (aRet);}}

