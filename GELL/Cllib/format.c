/* GELL 15.26: source file for the module: "format" */
/*             translation done:           "Wed June 16 93 18:01:57 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "format.h" 

static Ptr GLformat_1() {       /* prinf */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[0];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = GInil;
        goto l_nlist_format_3;
l_nlist_format_2:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_format_3:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_format_2;}
        (--rSp)->Val = rA1;
        if (((rSp + 1)->Val >= GIbstrg) && ((rSp + 1)->Val < GIbsymb))  goto l_103;
        GIa3 = (rSp + 1)->Val;
        rA2 = rLit[2];
        rA1 = rLit[3];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLformat_5);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_5() {       /* call_format_4 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GInil;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLformat_7);
        {aRet = ((Ptr) GLformat_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_7() {       /* call_format_6 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLformat_9); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_9() {       /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_105;
        (--rSp)->Val = ((Ptr) GLformat_9);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (GYformat[5] + 2)->Val; goto lRet;}
l_105:
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_10() {      /* format */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((Fix) (rA4) >= (Fix) 2)     goto l_101;
        rA1 = rLit[2];
        rA2 = (Ptr) 2;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
        rA1 = GInil;
        goto l_nlist_format_12;
l_nlist_format_11:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_format_12:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_format_11;}
        (--rSp)->Val = rA1;
        if (((rSp + 1)->Val >= GIbstrg) && ((rSp + 1)->Val < GIbsymb))  goto l_103;
        GIa3 = (rSp + 1)->Val;
        rA2 = rLit[2];
        rA1 = rLit[3];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
l_103:
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLformat_14);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_14() {      /* call_format_13 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GInil;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLformat_16);
        {aRet = ((Ptr) GLformat_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_16() {      /* call_format_15 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYformat; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa1;
        if ((rSp + 3)->Val != rNil)     goto l_104;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_17); goto lRet;}
l_104:
        if ((rSp + 3)->Val < GIbfloat)  goto l_108;
        if ((rSp + 3)->Val != rLit[6])  {aRet = ((Ptr) GLformat_18); goto lRet;}
l_108:
        if ((rSp + 3)->Val != rLit[6])  goto l_110;
        (rSp + 3)->Val = rNil;
l_110:
        (--rSp)->Val = ((Ptr) GLformat_19);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_19() {      /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_20);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_21);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_21() {      /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLformat_22); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_22() {      /* 115 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   goto l_116;
        (--rSp)->Val = ((Ptr) GLformat_22);
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (GYformat[5] + 2)->Val; goto lRet;}
l_116:
        rSp += (Fix) 1;
        rA4 = GInil;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = rA4;
        GIa3 = ((Ptr) GXpopj5);
        {aRet = ((Ptr) GLformat_20); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_20() {      /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLformat_23);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_23() {      /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_18() {      /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIa3 = (rSp + 3)->Val;
        GIa2 = rLit[2];
        GIa1 = rLit[3];
        rSp += (Fix) 4;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_8() {       /* #:format:format */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYformat; rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rLit[8]->Val;
        rLit[8]->Val = GIa3;
        (--rSp)->Val = rLit[9]->Val;
        rLit[9]->Val = rA2;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[10];
        (--rSp)->Val = ((Ptr) GLformat_8);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = rLit[11]->Val;
        rLit[11]->Val = rA2;
        (--rSp)->Val = rLit[12]->Val;
        rLit[12]->Val = GIa1;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[13];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_24);
        (--rSp)->Val = rLit[2];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_25);
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_27);
        {aRet = ((Ptr) GLformat_28); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_27() {      /* call_format_26 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_25); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_25() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_24); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_24() {      /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[12]->Val = (rSp + 6)->Val;
        rLit[11]->Val = (rSp + 7)->Val;
        rSp += (Fix) 8;
        GIa1 = rLit[8]->Val;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[9]->Val = (rSp + 6)->Val;
        rLit[8]->Val = (rSp + 7)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_28() {      /* #:format:format1 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYformat; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        rA4 = rLit[12]->Val;
        rLit[12]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        if (rSp->Val != rNil)   goto l_101;
        GIa1 = rNil;
        GIa2 = rLit[2];
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_101:
        if (rSp->Val != (Ptr) 126)      {aRet = ((Ptr) GLformat_29); goto lRet;}
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[17]->Val;
        rLit[17]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[18]->Val;
        rLit[18]->Val = (rSp + 3)->Val;
        (--rSp)->Val = rLit[19]->Val;
        rLit[19]->Val = (rSp + 5)->Val;
        (--rSp)->Val = rLit[20]->Val;
        rLit[20]->Val = (rSp + 7)->Val;
        (--rSp)->Val = rLit[21]->Val;
        rLit[21]->Val = (rSp + 9)->Val;
        (--rSp)->Val = rLit[22]->Val;
        rLit[22]->Val = (rSp + 11)->Val;
        (--rSp)->Val = rLit[23]->Val;
        rLit[23]->Val = (rSp + 13)->Val;
        (--rSp)->Val = rLit[24]->Val;
        rLit[24]->Val = (rSp + 15)->Val;
        (--rSp)->Val = rLit[25]->Val;
        rLit[25]->Val = (rSp + 17)->Val;
        (--rSp)->Val = rLit[26]->Val;
        rLit[26]->Val = (rSp + 19)->Val;
        (--rSp)->Val = (Ptr) 10;
        (--rSp)->Val = rLit[27];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_31);
        {aRet = ((Ptr) GLformat_32); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_31() {      /* call_format_30 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[26]->Val = (rSp + 6)->Val;
        rLit[25]->Val = (rSp + 7)->Val;
        rLit[24]->Val = (rSp + 8)->Val;
        rLit[23]->Val = (rSp + 9)->Val;
        rLit[22]->Val = (rSp + 10)->Val;
        rLit[21]->Val = (rSp + 11)->Val;
        rLit[20]->Val = (rSp + 12)->Val;
        rLit[19]->Val = (rSp + 13)->Val;
        rLit[18]->Val = (rSp + 14)->Val;
        rLit[17]->Val = (rSp + 15)->Val;
        rSp += (Fix) 26;
        {aRet = ((Ptr) GLformat_33); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_29() {      /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLformat_34);
        (--rSp)->Val = rLit[8]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_34() {      /* 105 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        GYformat[8]->Val = GIa1;
        {aRet = ((Ptr) GLformat_33); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_33() {      /* 102 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLformat_28); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_32() {      /* #:format:tilde-decode */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = rLit[12]->Val;
        rLit[12]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = rSp->Val;
        if (rA1 == (Ptr) 48)    goto l_103;
        if (rA1 == (Ptr) 49)    goto l_103;
        if (rA1 == (Ptr) 50)    goto l_103;
        if (rA1 == (Ptr) 51)    goto l_103;
        if (rA1 == (Ptr) 52)    goto l_103;
        if (rA1 == (Ptr) 53)    goto l_103;
        if (rA1 == (Ptr) 54)    goto l_103;
        if (rA1 == (Ptr) 55)    goto l_103;
        if (rA1 == (Ptr) 56)    goto l_103;
        if (rA1 == (Ptr) 57)    goto l_103;
        if (rA1 == (Ptr) 45)    goto l_103;
        if (rA1 != (Ptr) 43)    {aRet = ((Ptr) GLformat_35); goto lRet;}
l_103:
        (--rSp)->Val = ((Ptr) GLformat_36);
        (--rSp)->Val = rLit[29];
        (--rSp)->Val = rLit[17]->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_36() {      /* 104 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa2 = GIa1;
        GIa1 = rLit[2];
        (--GIsp)->Val = ((Ptr) GLformat_38);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_38() {      /* call_format_37 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_39);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_39() {      /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_41);
        {aRet = ((Ptr) GLformat_42); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_41() {      /* call_format_40 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        GIa4->Val = GIa1;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_32); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_35() {      /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 != (Ptr) 39)   {aRet = ((Ptr) GLformat_43); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_44);
        (--rSp)->Val = rLit[29];
        (--rSp)->Val = rLit[17]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_44() {      /* 107 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa2 = GIa1;
        GIa1 = rLit[2];
        (--GIsp)->Val = ((Ptr) GLformat_46);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_46() {      /* call_format_45 */
   {    register Ptr aRet, *rLit, rA4;
        rLit = GYformat; rA4 = GIa4;
        rA4 = rLit[12]->Val;
        rLit[12]->Val = (rA4 + 1)->Val;
        GIa1->Val = rA4->Val;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLformat_32); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLformat_43() {      /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        if (rA1 == (Ptr) 118)   goto l_109;
        if (rA1 != (Ptr) 86)    {aRet = ((Ptr) GLformat_47); goto lRet;}
l_109:
        (--rSp)->Val = ((Ptr) GLformat_48);
        (--rSp)->Val = rLit[29];
        (--rSp)->Val = rLit[17]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_48() {      /* 110 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa2 = GIa1;
        GIa1 = rLit[2];
        (--GIsp)->Val = ((Ptr) GLformat_50);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_50() {      /* call_format_49 */
   {    register Ptr aRet, *rLit, rA4;
        rLit = GYformat; rA4 = GIa4;
        rA4 = rLit[11]->Val;
        rLit[11]->Val = (rA4 + 1)->Val;
        GIa1->Val = rA4->Val;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLformat_32); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLformat_47() {      /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 != (Ptr) 35)   {aRet = ((Ptr) GLformat_51); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_52);
        (--rSp)->Val = rLit[29];
        (--rSp)->Val = rLit[17]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_52() {      /* 112 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa2 = GIa1;
        GIa1 = rLit[2];
        (--GIsp)->Val = ((Ptr) GLformat_54);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_54() {      /* call_format_53 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = GYformat[11]->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        GIa4 = (rSp++)->Val;
        GIa4->Val = rA1;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_32); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_51() {      /* 111 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        if (GIa1 != (Ptr) 44)   {aRet = ((Ptr) GLformat_55); goto lRet;}
        GIa1 = rLit[17]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_57);
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_57() {      /* call_format_56 */
   {    register Ptr aRet;
        GYformat[17]->Val = GIa1;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLformat_32); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_55() {      /* 113 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        if (rA1 != (Ptr) 64)    goto l_114;
        rLit[19]->Val = rLit[6];
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_32); goto lRet;}
l_114:
        if (rA1 != (Ptr) 58)    goto l_115;
        rLit[18]->Val = rLit[6];
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_32); goto lRet;}
l_115:
        if (rA1 != (Ptr) 65)    goto l_116;
        rA1 = rLit[11]->Val;
        rLit[11]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_58); goto lRet;}
l_116:
        if (rA1 != (Ptr) 83)    goto l_117;
        rA1 = rLit[11]->Val;
        rLit[11]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_59); goto lRet;}
l_117:
        if (rA1 != (Ptr) 68)    goto l_118;
        rA1 = rLit[11]->Val;
        rLit[11]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_60); goto lRet;}
l_118:
        if (rA1 != (Ptr) 66)    goto l_119;
        rA1 = rLit[11]->Val;
        rLit[11]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_61); goto lRet;}
l_119:
        if (rA1 != (Ptr) 79)    goto l_120;
        rA1 = rLit[11]->Val;
        rLit[11]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_62); goto lRet;}
l_120:
        if (rA1 != (Ptr) 88)    goto l_121;
        rA1 = rLit[11]->Val;
        rLit[11]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_63); goto lRet;}
l_121:
        if (rA1 != (Ptr) 82)    goto l_122;
        rA1 = rLit[11]->Val;
        rLit[11]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_64); goto lRet;}
l_122:
        if (rA1 != (Ptr) 80)    goto l_123;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_65); goto lRet;}
l_123:
        if (rA1 != (Ptr) 67)    goto l_124;
        rA1 = rLit[11]->Val;
        rLit[11]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_66); goto lRet;}
l_124:
        if (rA1 != (Ptr) 69)    goto l_125;
        rA1 = rLit[11]->Val;
        rLit[11]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_67); goto lRet;}
l_125:
        if (rA1 != (Ptr) 70)    goto l_126;
        rA1 = rLit[11]->Val;
        rLit[11]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_68); goto lRet;}
l_126:
        if (rA1 != (Ptr) 71)    goto l_127;
        rA1 = rLit[11]->Val;
        rLit[11]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_69); goto lRet;}
l_127:
        if (rA1 != (Ptr) 37)    goto l_128;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_70); goto lRet;}
l_128:
        if (rA1 != (Ptr) 10)    goto l_129;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_71); goto lRet;}
l_129:
        if (rA1 != (Ptr) 126)   goto l_130;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_72); goto lRet;}
l_130:
        if (rA1 != (Ptr) 84)    goto l_131;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_73); goto lRet;}
l_131:
        if (rA1 != (Ptr) 42)    goto l_132;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_74); goto lRet;}
l_132:
        if (rA1 != (Ptr) 63)    goto l_133;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_75); goto lRet;}
l_133:
        if (rA1 != (Ptr) 91)    goto l_134;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_76); goto lRet;}
l_134:
        if (rA1 != (Ptr) 123)   goto l_135;
        rA1 = GInil;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_77); goto lRet;}
l_135:
        if (rA1 != (Ptr) 94)    goto l_136;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_78); goto lRet;}
l_136:
        if (rA1 != (Ptr) 93)    goto l_137;
        rA3 = rLit[34];
        rA2 = rLit[35];
        rA1 = rLit[3];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_137:
        if (rA1 != (Ptr) 59)    goto l_138;
        rA3 = rLit[36];
        rA2 = rLit[35];
        rA1 = rLit[3];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_138:
        if (rA1 != (Ptr) 125)   goto l_139;
        rA3 = rLit[37];
        rA2 = rLit[35];
        rA1 = rLit[3];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_139:
        if (rA1 != (Ptr) 41)    goto l_140;
        rA3 = rLit[38];
        rA2 = rLit[35];
        rA1 = rLit[3];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_140:
        if (rA1 != (Ptr) 62)    goto l_141;
        rA3 = rLit[39];
        rA2 = rLit[35];
        rA1 = rLit[3];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_141:
        (--rSp)->Val = ((Ptr) GLformat_79);
        (--rSp)->Val = (Ptr) 126;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLformat_79() {      /* 143 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_81);
        {aRet = (GYformat[40] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_81() {      /* call_format_80 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[2];
        rA1 = rLit[3];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_82() {      /* #:format:pad */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp + 3)->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLformat_83);
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_83() {      /* 103 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       goto l_101;
        GIa1 = (rSp + 4)->Val;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if ((rSp + 2)->Val == rNil)     {aRet = ((Ptr) GLformat_84); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopj5);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLformat_85);
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_85() {      /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLformat_87);
        {aRet = (GYformat[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_87() {      /* call_format_86 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_84() {      /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj5);
        (--rSp)->Val = ((Ptr) GLformat_88);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_88() {      /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLformat_90);
        {aRet = (GYformat[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_90() {      /* call_format_89 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_91() {      /* #:format:pad-4 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYformat; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = rLit[44]->Val;
        rLit[44]->Val = (rSp + 2)->Val;
        (--rSp)->Val = rLit[45]->Val;
        rLit[45]->Val = (rSp + 4)->Val;
        (--rSp)->Val = rLit[46]->Val;
        rLit[46]->Val = (rSp + 6)->Val;
        (--rSp)->Val = rLit[47]->Val;
        rLit[47]->Val = (rSp + 8)->Val;
        (--rSp)->Val = rLit[48]->Val;
        rLit[48]->Val = (rSp + 10)->Val;
        (--rSp)->Val = (Ptr) 5;
        (--rSp)->Val = rLit[49];
        (--rSp)->Val = ((Ptr) GLformat_91);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rLit[46]->Val == rNil)      {aRet = ((Ptr) GLformat_92); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_93);
        (--rSp)->Val = rLit[48]->Val;
        GIa2 = rLit[45]->Val;
        GIa1 = (rSp + 13)->Val;
        (--rSp)->Val = ((Ptr) GLformat_95);
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_95() {      /* call_format_94 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_93() {      /* 103 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_96); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_92() {      /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_97);
        GIa2 = rLit[45]->Val;
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLformat_99);
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_99() {      /* call_format_98 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[48]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_97() {      /* 104 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_96); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_96() {      /* 102 */
   {    register Ptr aRet, rA1, rA4;
        rA1 = GIa1; rA4 = GIa4;
        GYformat[48]->Val = rA4;
        rA1 = rA4;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--GIsp)->Val = ((Ptr) GLformat_101);
        {aRet = ((Ptr) GLformat_102); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLformat_101() {     /* call_format_100 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[48]->Val = (rSp + 6)->Val;
        rLit[47]->Val = (rSp + 7)->Val;
        rLit[46]->Val = (rSp + 8)->Val;
        rLit[45]->Val = (rSp + 9)->Val;
        rLit[44]->Val = (rSp + 10)->Val;
        rSp += (Fix) 17;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_102() {     /* #:format:pad-4-loop */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_103);
        (--rSp)->Val = rLit[47]->Val;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_103() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_101;
        rA1 = rLit[48]->Val;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rLit[46]->Val == rNil)      {aRet = ((Ptr) GLformat_104); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_105);
        (--rSp)->Val = rLit[48]->Val;
        GIa2 = rLit[45]->Val;
        rA1 = rLit[44]->Val;
        (--rSp)->Val = ((Ptr) GLformat_107);
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_107() {     /* call_format_106 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_105() {     /* 106 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_108); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_104() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_109);
        GIa2 = rLit[45]->Val;
        GIa1 = rLit[44]->Val;
        (--rSp)->Val = ((Ptr) GLformat_111);
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_111() {     /* call_format_110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[48]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_109() {     /* 107 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_108); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_108() {     /* 105 */
   {    register Ptr aRet, rA1, rA4;
        rA1 = GIa1; rA4 = GIa4;
        GYformat[48]->Val = rA4;
        rA1 = rA4;
        rA1 = llrt_call_length (rA1, GIbcons);
        {aRet = ((Ptr) GLformat_102); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLformat_112() {     /* #:format:format-pad */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = ((Ptr) GLformat_113);
        (--rSp)->Val = rLit[8]->Val;
        if (rA2 != rNil)        goto l_102;
        rA4 = rA1;
        {aRet = ((Ptr) GLformat_114); goto lRet;}
l_102:
        (--rSp)->Val = ((Ptr) GLformat_115);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rLit[19]->Val;
        if (rA3 == rNil)        goto l_105;
        rA4 = rA3;
        goto l_106;
l_105:
        rA4 = (Ptr) 32;
l_106:
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 4;
        {aRet = ((Ptr) GLformat_82); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_115() {     /* 104 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_114); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_114() {     /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa4;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_113() {     /* 101 */
   {    register Ptr aRet;
        GYformat[8]->Val = GIa1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_58() {      /* #:format:format-ascii */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYformat; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[51]->Val;
        rLit[51]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[52];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rLit[24]->Val != rNil)      goto l_103;
        if (rLit[23]->Val == rNil)      {aRet = ((Ptr) GLformat_116); goto lRet;}
l_103:
        (--rSp)->Val = ((Ptr) GLformat_117);
        (--rSp)->Val = rLit[8]->Val;
        (--rSp)->Val = ((Ptr) GLformat_118);
        (--rSp)->Val = ((Ptr) GLformat_120);
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_120() {     /* call_format_119 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYformat; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = GIa1;
        if (rLit[26]->Val == rNil)      goto l_106;
        rA4 = rLit[26]->Val;
        goto l_107;
l_106:
        rA4 = (Ptr) 0;
l_107:
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[19]->Val;
        if (rLit[23]->Val == rNil)      goto l_108;
        rA4 = rLit[23]->Val;
        goto l_109;
l_108:
        rA4 = (Ptr) 32;
l_109:
        (--rSp)->Val = rA4;
        if (rLit[25]->Val == rNil)      goto l_110;
        rA4 = rLit[25]->Val;
        goto l_111;
l_110:
        rA4 = (Ptr) 1;
l_111:
        (--rSp)->Val = rA4;
        if (rLit[24]->Val == rNil)      goto l_112;
        rA4 = rLit[24]->Val;
        goto l_113;
l_112:
        rA4 = (Ptr) 0;
l_113:
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 6;
        {aRet = ((Ptr) GLformat_91); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_118() {     /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_117() {     /* 104 */
   {    register Ptr aRet;
        GYformat[8]->Val = GIa1;
        {aRet = ((Ptr) GLformat_121); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_116() {     /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_123);
        {aRet = (GYformat[53] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_123() {     /* call_format_122 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa3 = rLit[25]->Val;
        GIa2 = rLit[26]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_121);
        {aRet = ((Ptr) GLformat_112); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_121() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[51]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_59() {      /* #:format:format-sexpr */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYformat; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = rLit[6];
        (--rSp)->Val = rLit[51]->Val;
        rLit[51]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[54];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rLit[24]->Val != rNil)      goto l_103;
        if (rLit[23]->Val == rNil)      {aRet = ((Ptr) GLformat_124); goto lRet;}
l_103:
        (--rSp)->Val = ((Ptr) GLformat_125);
        (--rSp)->Val = rLit[8]->Val;
        (--rSp)->Val = ((Ptr) GLformat_126);
        (--rSp)->Val = ((Ptr) GLformat_128);
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_128() {     /* call_format_127 */
   {    register Ptr aRet, *rLit, rSp, rA4, rNil;
        rLit = GYformat; rSp = GIsp; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = GIa1;
        if (rLit[26]->Val == rNil)      goto l_106;
        rA4 = rLit[26]->Val;
        goto l_107;
l_106:
        rA4 = (Ptr) 0;
l_107:
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[19]->Val;
        if (rLit[23]->Val == rNil)      goto l_108;
        rA4 = rLit[23]->Val;
        goto l_109;
l_108:
        rA4 = (Ptr) 32;
l_109:
        (--rSp)->Val = rA4;
        if (rLit[25]->Val == rNil)      goto l_110;
        rA4 = rLit[25]->Val;
        goto l_111;
l_110:
        rA4 = (Ptr) 1;
l_111:
        (--rSp)->Val = rA4;
        if (rLit[24]->Val == rNil)      goto l_112;
        rA4 = rLit[24]->Val;
        goto l_113;
l_112:
        rA4 = (Ptr) 0;
l_113:
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 6;
        {aRet = ((Ptr) GLformat_91); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_126() {     /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_125() {     /* 104 */
   {    register Ptr aRet;
        GYformat[8]->Val = GIa1;
        {aRet = ((Ptr) GLformat_129); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_124() {     /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_131);
        {aRet = (GYformat[53] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_131() {     /* call_format_130 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa3 = rLit[25]->Val;
        GIa2 = rLit[26]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_129);
        {aRet = ((Ptr) GLformat_112); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_129() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[51]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_60() {      /* #:format:format-decimal */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_132);
        GIa4 = (Ptr) 0;
        {aRet = (GYformat[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_132() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_133);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_134);
        (--rSp)->Val = (Ptr) 10;
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_134() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[51]->Val;
        rLit[51]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[56];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLformat_136);
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_136() {     /* call_format_135 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa3 = rLit[25]->Val;
        GIa2 = rLit[26]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_138);
        {aRet = ((Ptr) GLformat_112); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_138() {     /* call_format_137 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[51]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj2);
        {aRet = ((Ptr) GLformat_133); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_133() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLformat_139);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_139() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_61() {      /* #:format:format-binary */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_140);
        GIa4 = (Ptr) 0;
        {aRet = (GYformat[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_140() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_141);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_142);
        (--rSp)->Val = (Ptr) 2;
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_142() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[51]->Val;
        rLit[51]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[57];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLformat_144);
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_144() {     /* call_format_143 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa3 = rLit[25]->Val;
        GIa2 = rLit[26]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_146);
        {aRet = ((Ptr) GLformat_112); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_146() {     /* call_format_145 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[51]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj2);
        {aRet = ((Ptr) GLformat_141); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_141() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLformat_147);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_147() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_62() {      /* #:format:format-octal */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_148);
        GIa4 = (Ptr) 0;
        {aRet = (GYformat[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_148() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_149);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_150);
        (--rSp)->Val = (Ptr) 8;
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_150() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[51]->Val;
        rLit[51]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[58];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLformat_152);
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_152() {     /* call_format_151 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa3 = rLit[25]->Val;
        GIa2 = rLit[26]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_154);
        {aRet = ((Ptr) GLformat_112); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_154() {     /* call_format_153 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[51]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj2);
        {aRet = ((Ptr) GLformat_149); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_149() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLformat_155);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_155() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_63() {      /* #:format:format-hexa */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_156);
        GIa4 = (Ptr) 0;
        {aRet = (GYformat[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_156() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_157);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_158);
        (--rSp)->Val = (Ptr) 16;
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_158() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[51]->Val;
        rLit[51]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[59];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLformat_160);
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_160() {     /* call_format_159 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa3 = rLit[25]->Val;
        GIa2 = rLit[26]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_162);
        {aRet = ((Ptr) GLformat_112); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_162() {     /* call_format_161 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[51]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj2);
        {aRet = ((Ptr) GLformat_157); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_157() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLformat_163);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_163() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_64() {      /* #:format:format-radix */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GIa1;
        if (rLit[26]->Val < GIbfloat)   {aRet = ((Ptr) GLformat_164); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_165);
        (--rSp)->Val = rLit[60];
        (--rSp)->Val = rLit[26]->Val;
        (--rSp)->Val = rLit[61];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_165() {     /* 103 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYformat; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[63];
        rA1 = rLit[3];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLformat_164); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLformat_164() {     /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_166);
        GIa4 = (Ptr) 0;
        {aRet = (GYformat[55] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_166() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_167);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_168);
        (--rSp)->Val = rLit[26]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_168() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[51]->Val;
        rLit[51]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[64];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = (rSp + 12)->Val;
        (--rSp)->Val = ((Ptr) GLformat_170);
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_170() {     /* call_format_169 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa3 = rLit[24]->Val;
        GIa2 = rLit[25]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_172);
        {aRet = ((Ptr) GLformat_112); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_172() {     /* call_format_171 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[51]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj2);
        {aRet = ((Ptr) GLformat_167); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_167() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLformat_173);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_173() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_65() {      /* #:format:format-plural */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rBcons;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rBcons = GIbcons;
        if (rLit[18]->Val != GInil)     goto l_101;
        rA4 = rLit[11]->Val;
        rLit[11]->Val = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        {aRet = ((Ptr) GLformat_174); goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLformat_175);
        rA1 = rLit[9]->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = rA1;
        rA1 = rLit[11]->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        rA4 = (Ptr) 3;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_175() {     /* 103 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa2 = rLit[9]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_177);
        {aRet = (rLit[65] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_177() {     /* call_format_176 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_174); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_174() {     /* 102 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        if (GIa4 != (Ptr) 1)    {aRet = ((Ptr) GLformat_178); goto lRet;}
        if (rLit[19]->Val == GInil)     {aRet = ((Ptr) GLformat_179); goto lRet;}
        GIa2 = (Ptr) 121;
        GIa1 = rLit[8]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_181);
        {aRet = (rLit[66] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_181() {     /* call_format_180 */
   {    register Ptr aRet;
        GYformat[8]->Val = GIa1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_179() {     /* 106 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_178() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_182);
        (--rSp)->Val = rLit[8]->Val;
        if (rLit[19]->Val == GInil)     {aRet = ((Ptr) GLformat_183); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_184);
        (--rSp)->Val = (Ptr) 105;
        (--rSp)->Val = (Ptr) 101;
        (--rSp)->Val = (Ptr) 115;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_184() {     /* 111 */
   {    register Ptr aRet;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLformat_185); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_183() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_186);
        (--rSp)->Val = (Ptr) 115;
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_186() {     /* 112 */
   {    register Ptr aRet;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLformat_185); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_185() {     /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa3;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_182() {     /* 108 */
   {    register Ptr aRet;
        GYformat[8]->Val = GIa1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_66() {      /* #:format:format-char */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_188);
        {aRet = (GYformat[67] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_188() {     /* call_format_187 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[68];
        rA1 = rLit[3];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        if (rLit[19]->Val == rNil)      goto l_103;
        if (rLit[18]->Val == rNil)      goto l_103;
        GIa3 = rLit[69];
        GIa2 = rLit[63];
        rA1 = rLit[3];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        if (rLit[19]->Val == rNil)      {aRet = ((Ptr) GLformat_189); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_190);
        (--rSp)->Val = rLit[8]->Val;
        (--rSp)->Val = ((Ptr) GLformat_191);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 127;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[70] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_191() {     /* 110 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYformat; rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLformat_192); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_193);
        (--rSp)->Val = rLit[71];
        (--rSp)->Val = rNil;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[72] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_193() {     /* 111 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_194); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_192() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_195);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[73] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_195() {     /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_196); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_197);
        (--rSp)->Val = (Ptr) 35;
        (--rSp)->Val = (Ptr) 47;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYformat[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_197() {     /* 115 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_194); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_196() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_198);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[70] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_198() {     /* 118 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYformat; rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLformat_199); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_200);
        (--rSp)->Val = rLit[74];
        (--rSp)->Val = rNil;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[72] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_200() {     /* 119 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_194); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_199() {     /* 116 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLformat_201);
        (--rSp)->Val = (Ptr) 35;
        (--rSp)->Val = (Ptr) 94;
        rA4 = (Ptr) 64;
        rA4 = (Ptr) ((UFix) (rA4) | (UFix) ((rSp + 5)->Val));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (GYformat[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_201() {     /* 120 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_194); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_194() {     /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa4;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_190() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYformat[8]->Val = GIa1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_189() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rLit[18]->Val == rNil)      {aRet = ((Ptr) GLformat_202); goto lRet;}
        GIa2 = rLit[75]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_cassq (rA1, GIa2, GIbcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLformat_203); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_204);
        (--rSp)->Val = rLit[8]->Val;
        (--rSp)->Val = ((Ptr) GLformat_206);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_206() {     /* call_format_205 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_204() {     /* 125 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_207); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_203() {     /* 123 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIa2 = rSp->Val;
        GIa1 = rLit[8]->Val;
        (--rSp)->Val = ((Ptr) GLformat_209);
        {aRet = (rLit[66] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_209() {     /* call_format_208 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_207); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_207() {     /* 124 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        GYformat[8]->Val = rA4;
        GIa1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_202() {     /* 121 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIa2 = rSp->Val;
        GIa1 = rLit[8]->Val;
        (--rSp)->Val = ((Ptr) GLformat_211);
        {aRet = (rLit[66] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_211() {     /* call_format_210 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYformat[8]->Val = GIa1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_212() {     /* #:format:float-pad */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        rA1 = rSp->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLformat_213);
        (--rSp)->Val = rLit[8]->Val;
        if ((rSp + 6)->Val != rNil)     goto l_102;
        GIa4 = (rSp + 3)->Val;
        {aRet = ((Ptr) GLformat_214); goto lRet;}
l_102:
        if ((rSp + 5)->Val == rNil)     {aRet = ((Ptr) GLformat_215); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_216);
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[76] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_216() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_215); goto lRet;}
        GIa2 = (rSp + 5)->Val;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLformat_218);
        {aRet = (GYformat[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_218() {     /* call_format_217 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_214); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_215() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_219);
        (--rSp)->Val = ((Ptr) GLformat_220);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_220() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp + 5)->Val == GInil)    goto l_109;
        GIa2 = (rSp + 5)->Val;
        goto l_110;
l_109:
        GIa2 = (Ptr) 32;
l_110:
        (--rSp)->Val = ((Ptr) GLformat_222);
        {aRet = (GYformat[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_222() {     /* call_format_221 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_219() {     /* 107 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_214); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_214() {     /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa4;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_213() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYformat[8]->Val = GIa1;
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_223() {     /* #:format:float-digits */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[12]->Val;
        (--rSp)->Val = ((Ptr) GLformat_224);
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[77]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_224() {     /* 101 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        GIa1 = (Ptr) 10;
        (--GIsp)->Val = ((Ptr) GLformat_226);
        {aRet = (GYformat[78] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_226() {     /* call_format_225 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        GIsp = rSp; GIa4 = rA4; rA4 = llrt_fmul (rA4, GIa1);
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLformat_227);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (GYformat[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_227() {     /* 102 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        GIa1 = (Ptr) 10;
        (--GIsp)->Val = ((Ptr) GLformat_229);
        {aRet = (GYformat[78] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_229() {     /* call_format_228 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4;
        rLit = GYformat; rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = rLit[79];
        GIsp = rSp; GIa3 = rA3; GIa4 = rA4; rA4 = llrt_fmul (rA4, GIa1);
        rA3 = rSp->Val;
        GIsp = rSp; GIa3 = rA3; GIa4 = rA4; rA3 = llrt_fadd (rA3, rA4);
        (--rSp)->Val = rA3;
        (--rSp)->Val = GInil;
        (--rSp)->Val = ((Ptr) GLformat_230);
        GIa1 = rA3;
        (--rSp)->Val = ((Ptr) GLformat_232);
        {aRet = (rLit[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_232() {     /* call_format_231 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLformat_234);
        {aRet = (GYformat[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_234() {     /* call_format_233 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[73] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_230() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_235); goto lRet;}
        (rSp + 1)->Val = (rSp + 2)->Val;
        {aRet = ((Ptr) GLformat_235); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_235() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_236);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[73] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_236() {     /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_237); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_238);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[81];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[82] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_238() {     /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_240);
        {aRet = (GYformat[80] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_240() {     /* call_format_239 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_241);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLformat_243);
        {aRet = (GYformat[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_243() {     /* call_format_242 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_245);
        {aRet = ((Ptr) GLformat_246); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_245() {     /* call_format_244 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_241() {     /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (rSp + 1)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_247);
        (--rSp)->Val = ((Ptr) GLformat_248);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[81];
        GIa4 = (Ptr) 2;
        {aRet = (rLit[82] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_248() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_247() {     /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 2)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_249);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 4;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_249() {     /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 4)->Val = GIa1;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_235); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_237() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_246() {     /* #:format:next-digits */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = ((Ptr) GLformat_250);
        (--rSp)->Val = (Ptr) 4;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_250() {     /* 102 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 48;
        (--GIsp)->Val = ((Ptr) GLformat_252);
        {aRet = (GYformat[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_252() {     /* call_format_251 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_68() {      /* #:format:format-f-float */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = rLit[83]->Val;
        rLit[83]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[84];
        (--rSp)->Val = ((Ptr) GLformat_68);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_254);
        {aRet = (rLit[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_254() {     /* call_format_253 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLformat_255); goto lRet;}
        (--rSp)->Val = rLit[26]->Val;
        (--rSp)->Val = rLit[22]->Val;
        (--rSp)->Val = rLit[25]->Val;
        rLit[25]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[26]->Val;
        rLit[26]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[86];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = rLit[83]->Val;
        (--rSp)->Val = ((Ptr) GLformat_257);
        {aRet = ((Ptr) GLformat_60); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_257() {     /* call_format_256 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[26]->Val = (rSp + 6)->Val;
        rLit[25]->Val = (rSp + 7)->Val;
        rSp += (Fix) 10;
        {aRet = ((Ptr) GLformat_258); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_255() {     /* 101 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        if (llrt_floatp (rLit[83]->Val) != 0) 
        {aRet = ((Ptr) GLformat_259); goto lRet;}
        GIa1 = rLit[83]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_261);
        {aRet = (rLit[87] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_261() {     /* call_format_260 */
   {    register Ptr aRet;
        GYformat[83]->Val = GIa1;
        {aRet = ((Ptr) GLformat_259); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_259() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (rLit[24]->Val == GInil)     {aRet = ((Ptr) GLformat_262); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_263);
        (--rSp)->Val = rLit[83]->Val;
        GIa2 = rLit[24]->Val;
        GIa1 = (Ptr) 10;
        (--rSp)->Val = ((Ptr) GLformat_265);
        {aRet = (rLit[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_265() {     /* call_format_264 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[82] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_263() {     /* 107 */
   {    register Ptr aRet;
        GYformat[83]->Val = GIa1;
        {aRet = ((Ptr) GLformat_262); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_262() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_258);
        (--rSp)->Val = rLit[26]->Val;
        (--rSp)->Val = rLit[23]->Val;
        (--rSp)->Val = rLit[22]->Val;
        (--rSp)->Val = ((Ptr) GLformat_266);
        (--rSp)->Val = rLit[83]->Val;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[76] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_266() {     /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_267); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_268);
        (--rSp)->Val = (Ptr) 45;
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_268() {     /* 112 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_269); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_267() {     /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (rLit[19]->Val == GInil)     {aRet = ((Ptr) GLformat_270); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_271);
        (--rSp)->Val = (Ptr) 43;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_271() {     /* 115 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_269); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_270() {     /* 113 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLformat_269); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_269() {     /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa1 = rLit[83]->Val;
        (--rSp)->Val = ((Ptr) GLformat_273);
        {aRet = (rLit[88] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_273() {     /* call_format_272 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rLit[12]->Val;
        rLit[12]->Val = rA1;
        (--rSp)->Val = rLit[89]->Val;
        rLit[89]->Val = (rSp + 2)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[90];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rLit[26]->Val != rNil)      goto l_118;
        if (rLit[25]->Val == rNil)      {aRet = ((Ptr) GLformat_274); goto lRet;}
l_118:
        (--rSp)->Val = ((Ptr) GLformat_275);
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[70] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_275() {     /* 121 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        if (GIa1 == GInil)      goto l_119;
        GIa4 = (Ptr) 0;
        {aRet = ((Ptr) GLformat_276); goto lRet;}
l_119:
        GIa1 = rLit[12]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_278);
        {aRet = (rLit[91] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_278() {     /* call_format_277 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_280);
        {aRet = (GYformat[80] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_280() {     /* call_format_279 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_276); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_276() {     /* 120 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYformat; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rLit[77]->Val;
        rLit[77]->Val = rA4;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[92];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        rA3 = rLit[26]->Val;
        if (rA3 != rNil)        goto l_122;
        rA3 = (Ptr) 100;
l_122:
        (--rSp)->Val = rLit[26]->Val;
        rLit[26]->Val = rA3;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[93];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa2 = rLit[25]->Val;
        if (GIa2 != rNil)       {aRet = ((Ptr) GLformat_281); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_282);
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLformat_283);
        (--rSp)->Val = rA3;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = ((Ptr) GLformat_284);
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 2;
        {aRet = (rLit[94] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_284() {     /* 126 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GIa1;
        if (rLit[19]->Val != GInil)     {aRet = ((Ptr) GLformat_285); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_286);
        (--rSp)->Val = rLit[83]->Val;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[76] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_286() {     /* 130 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_287); goto lRet;}
        {aRet = ((Ptr) GLformat_285); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_285() {     /* 129 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 1;
        {aRet = ((Ptr) GLformat_288); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_287() {     /* 127 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 0;
        {aRet = ((Ptr) GLformat_288); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_288() {     /* 128 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 4;
        {aRet = (GYformat[42] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_283() {     /* 125 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[94] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_282() {     /* 124 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        {aRet = ((Ptr) GLformat_281); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_281() {     /* 123 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYformat; rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rLit[25]->Val;
        rLit[25]->Val = rA2;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[95];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_289);
        (--rSp)->Val = rA2;
        (--rSp)->Val = rLit[77]->Val;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_289() {     /* 131 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_291);
        {aRet = ((Ptr) GLformat_223); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_291() {     /* call_format_290 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = rLit[97]->Val;
        rLit[97]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[98];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_293);
        {aRet = ((Ptr) GLformat_294); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_293() {     /* call_format_292 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIa4 = rLit[89]->Val;
        GIdlink = (rSp + 1)->Val;
        rLit[97]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        GIdlink = (rSp + 1)->Val;
        rLit[25]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        GIdlink = (rSp + 1)->Val;
        rLit[26]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        GIdlink = (rSp + 1)->Val;
        rLit[77]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = ((Ptr) GLformat_295); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_274() {     /* 116 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_297);
        {aRet = (GYformat[53] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_297() {     /* call_format_296 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_295); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_295() {     /* 117 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[89]->Val = (rSp + 6)->Val;
        rLit[12]->Val = (rSp + 7)->Val;
        rSp += (Fix) 9;
        (--rSp)->Val = GIa4;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLformat_212); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_258() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYformat[83]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_294() {     /* #:format:float-f */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_298);
        (--rSp)->Val = rLit[77]->Val;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[76] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_298() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_299); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_300);
        (--rSp)->Val = ((Ptr) GLformat_301);
        (--rSp)->Val = (Ptr) ((UFix) 0xffff);
        (--rSp)->Val = rLit[77]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_301() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[25]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[99] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_300() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_302);
        (--rSp)->Val = ((Ptr) GLformat_303);
        (--rSp)->Val = rLit[26]->Val;
        (--rSp)->Val = rLit[25]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_303() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[70] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_302() {     /* 109 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYformat; rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLformat_304); goto lRet;}
        if (rLit[19]->Val != rNil)      {aRet = ((Ptr) GLformat_304); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_305);
        (--rSp)->Val = rLit[83]->Val;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_305() {     /* 111 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLformat_306); goto lRet;}
        {aRet = ((Ptr) GLformat_304); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_304() {     /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = (Ptr) 48;
        (--rSp)->Val = ((Ptr) GLformat_307);
        (--rSp)->Val = rLit[89]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_307() {     /* 112 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        GYformat[89]->Val = GIa1;
        {aRet = ((Ptr) GLformat_306); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_306() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = (Ptr) 46;
        (--rSp)->Val = ((Ptr) GLformat_308);
        (--rSp)->Val = rLit[89]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_308() {     /* 113 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        rSp += (Fix) 1;
        rLit[89]->Val = GIa1;
        GIa1 = rLit[12]->Val;
        (--rSp)->Val = ((Ptr) GLformat_310);
        {aRet = (rLit[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_310() {     /* call_format_309 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_311); goto lRet;}
        GIa4 = GIsp->Val;
        {aRet = ((Ptr) GLformat_312); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_313() {     /* 116 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = (Ptr) 48;
        (--rSp)->Val = ((Ptr) GLformat_314);
        (--rSp)->Val = rLit[89]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_314() {     /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GYformat[89]->Val = GIa1;
        GIa4 = (rSp++)->Val;
        {aRet = ((Ptr) GLformat_312); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_312() {     /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLformat_313); goto lRet;}}
        GIa1 = GYformat[6];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_311() {     /* 114 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIa2 = rLit[25]->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLformat_316);
        {aRet = (rLit[101] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_316() {     /* call_format_315 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_317); goto lRet;}
        GIa4 = GIsp->Val;
        {aRet = ((Ptr) GLformat_318); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_319() {     /* 121 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = (Ptr) 48;
        (--rSp)->Val = ((Ptr) GLformat_320);
        (--rSp)->Val = rLit[89]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_320() {     /* 123 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GYformat[89]->Val = GIa1;
        GIa4 = (rSp++)->Val;
        {aRet = ((Ptr) GLformat_318); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_318() {     /* 122 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYformat; rSp = GIsp; rA4 = GIa4;
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLformat_319); goto lRet;}}
        (--rSp)->Val = ((Ptr) GLformat_321);
        (--rSp)->Val = rLit[25]->Val;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_322() {     /* 124 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = rLit[97]->Val;
        rLit[97]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLformat_323);
        (--rSp)->Val = rLit[89]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_323() {     /* 127 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GYformat[89]->Val = GIa1;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLformat_321); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_321() {     /* 125 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLformat_322); goto lRet;}}
        rA1 = GYformat[6];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_317() {     /* 119 */
   {    register Ptr aRet;
        GIa4 = GIsp->Val;
        {aRet = ((Ptr) GLformat_324); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_325() {     /* 128 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = (Ptr) 48;
        (--rSp)->Val = ((Ptr) GLformat_326);
        (--rSp)->Val = rLit[89]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_326() {     /* 130 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GYformat[89]->Val = GIa1;
        GIa4 = (rSp++)->Val;
        {aRet = ((Ptr) GLformat_324); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_324() {     /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLformat_325); goto lRet;}}
        GIa1 = GYformat[6];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_299() {     /* 101 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa1 = rLit[77]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_327);
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_328() {     /* 131 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = rLit[97]->Val;
        rLit[97]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLformat_329);
        (--rSp)->Val = rLit[89]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_329() {     /* 133 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GYformat[89]->Val = GIa1;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLformat_327); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_327() {     /* 132 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLformat_328); goto lRet;}}
        (--rSp)->Val = (Ptr) 46;
        (--rSp)->Val = ((Ptr) GLformat_330);
        (--rSp)->Val = rLit[89]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_330() {     /* 134 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIsp += (Fix) 1;
        rLit[89]->Val = GIa1;
        GIa4 = rLit[25]->Val;
        {aRet = ((Ptr) GLformat_331); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_332() {     /* 135 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rLit[97]->Val;
        rLit[97]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLformat_333);
        (--rSp)->Val = rLit[89]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_333() {     /* 137 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GYformat[89]->Val = GIa1;
        GIa4 = (rSp++)->Val;
        {aRet = ((Ptr) GLformat_331); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_331() {     /* 136 */
   {    register Ptr aRet;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLformat_332); goto lRet;}}
        GIa1 = GYformat[6];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_67() {      /* #:format:format-e-float */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_335);
        {aRet = (GYformat[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_335() {     /* call_format_334 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLformat_336); goto lRet;}
        (--rSp)->Val = rLit[26]->Val;
        (--rSp)->Val = rLit[21]->Val;
        (--rSp)->Val = rLit[25]->Val;
        rLit[25]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[26]->Val;
        rLit[26]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[102];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLformat_338);
        {aRet = ((Ptr) GLformat_60); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_338() {     /* call_format_337 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[26]->Val = (rSp + 6)->Val;
        rLit[25]->Val = (rSp + 7)->Val;
        rSp += (Fix) 11;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_336() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (llrt_floatp (rSp->Val) != 0) 
        {aRet = ((Ptr) GLformat_339); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLformat_341);
        {aRet = (GYformat[87] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_341() {     /* call_format_340 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLformat_339); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_339() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (rLit[23]->Val != GInil)     goto l_106;
        rLit[23]->Val = (Ptr) 1;
l_106:
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[26]->Val;
        (--rSp)->Val = rLit[22]->Val;
        (--rSp)->Val = rLit[21]->Val;
        (--rSp)->Val = ((Ptr) GLformat_342);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[76] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_342() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_343); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_344);
        (--rSp)->Val = (Ptr) 45;
        GIa4 = (Ptr) 1;
        {aRet = (GYformat[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_344() {     /* 111 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_345); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_343() {     /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (rLit[19]->Val == GInil)     {aRet = ((Ptr) GLformat_346); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_347);
        (--rSp)->Val = (Ptr) 43;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_347() {     /* 114 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_345); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_346() {     /* 112 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLformat_345); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_345() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa4;
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLformat_349);
        {aRet = (GYformat[88] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_349() {     /* call_format_348 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rLit[12]->Val;
        rLit[12]->Val = rA1;
        (--rSp)->Val = rLit[89]->Val;
        rLit[89]->Val = (rSp + 2)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[103];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rLit[26]->Val != rNil)      goto l_117;
        if (rLit[25]->Val != rNil)      goto l_117;
        if (rLit[24]->Val == rNil)      {aRet = ((Ptr) GLformat_350); goto lRet;}
l_117:
        (--rSp)->Val = ((Ptr) GLformat_351);
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[70] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_351() {     /* 120 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        if (GIa1 == GInil)      goto l_118;
        GIa4 = (Ptr) 0;
        {aRet = ((Ptr) GLformat_352); goto lRet;}
l_118:
        GIa1 = rLit[12]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_354);
        {aRet = (rLit[91] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_354() {     /* call_format_353 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_356);
        {aRet = (GYformat[104] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_356() {     /* call_format_355 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_352); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_352() {     /* 119 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4, rNil;
        rLit = GYformat; rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA3 = rLit[26]->Val;
        if (rA3 != rNil)        goto l_121;
        rA3 = (Ptr) 100;
l_121:
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[26]->Val;
        rLit[26]->Val = rA3;
        (--rSp)->Val = rLit[77]->Val;
        rLit[77]->Val = rA4;
        (--rSp)->Val = rLit[105]->Val;
        rLit[105]->Val = (rSp + 4)->Val;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[106];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_357);
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[23]->Val;
        (--rSp)->Val = (Ptr) ((UFix) 0xffff);
        rA4 = (Ptr) 3;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_357() {     /* 122 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_359);
        {aRet = ((Ptr) GLformat_360); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_359() {     /* call_format_358 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        rA1 = rLit[105]->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        (rSp + 9)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLformat_361);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[26]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[70] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_361() {     /* 125 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_123;
        GIa4 = rLit[105]->Val;
        {aRet = ((Ptr) GLformat_362); goto lRet;}
l_123:
        (--rSp)->Val = ((Ptr) GLformat_363);
        (--rSp)->Val = rLit[26]->Val;
        {register Ptr aux;
                aux = (rSp + 11)->Val;
                (--rSp)->Val = aux;}
        rA1 = rLit[89]->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_363() {     /* 126 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_365);
        {aRet = ((Ptr) GLformat_366); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_365() {     /* call_format_364 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_367);
        (--rSp)->Val = rLit[89]->Val;
        (--rSp)->Val = rLit[105]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_367() {     /* 127 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_362); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_362() {     /* 124 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[105]->Val = (rSp + 6)->Val;
        rLit[77]->Val = (rSp + 7)->Val;
        rLit[26]->Val = (rSp + 8)->Val;
        rSp += (Fix) 11;
        {aRet = ((Ptr) GLformat_368); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_350() {     /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_370);
        {aRet = (GYformat[53] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_370() {     /* call_format_369 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_368); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_368() {     /* 116 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[89]->Val = (rSp + 6)->Val;
        rLit[12]->Val = (rSp + 7)->Val;
        rSp += (Fix) 9;
        (--rSp)->Val = GIa4;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLformat_212); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_360() {     /* #:format:float-exp */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA1;
        rA4 = rLit[20]->Val;
        if (rA4 != rNil)        goto l_101;
        rA4 = (Ptr) 101;
l_101:
        (--rSp)->Val = ((Ptr) GLformat_371);
        (--rSp)->Val = rLit[105]->Val;
        rA1 = rA4;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, rNil);
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_371() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        rLit[105]->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_372);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_372() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_103;
        rA4 = (Ptr) 43;
        goto l_104;
l_103:
        rA4 = (Ptr) 45;
l_104:
        (--rSp)->Val = ((Ptr) GLformat_373);
        (--rSp)->Val = rLit[105]->Val;
        rA1 = rA4;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, rNil);
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_373() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        rLit[105]->Val = GIa1;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLformat_375);
        {aRet = (rLit[88] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_375() {     /* call_format_374 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_377);
        {aRet = (GYformat[4] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_377() {     /* call_format_376 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = rA1;
        if (rLit[22]->Val == rNil)      {aRet = ((Ptr) GLformat_378); goto lRet;}
        if (rLit[24]->Val == rNil)      {aRet = ((Ptr) GLformat_378); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_379);
        (--rSp)->Val = rLit[24]->Val;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[76] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_379() {     /* 109 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_378); goto lRet;}
        GIa2 = rLit[22]->Val;
        GIa1 = rLit[26]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_381);
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_381() {     /* call_format_380 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYformat[105]->Val = GIa1;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_378() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_382);
        (--rSp)->Val = rLit[105]->Val;
        if (rLit[24]->Val == GInil)     {aRet = ((Ptr) GLformat_383); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_384);
        (--rSp)->Val = rLit[24]->Val;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_384() {     /* 113 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 48;
        (--GIsp)->Val = ((Ptr) GLformat_386);
        {aRet = (GYformat[43] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_386() {     /* call_format_385 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_387); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_383() {     /* 111 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLformat_387); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_387() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa4;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_382() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYformat[105]->Val = GIa1;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_366() {     /* #:format:float-e */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rLit[107]->Val;
        rLit[107]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[108];
        (--rSp)->Val = ((Ptr) GLformat_366);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rLit[25]->Val != rNil)      {aRet = ((Ptr) GLformat_388); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_389);
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 2;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_389() {     /* 103 */
   {    register Ptr aRet;
        GYformat[25]->Val = GIa1;
        {aRet = ((Ptr) GLformat_388); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_388() {     /* 102 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa1 = rLit[23]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_391);
        {aRet = (rLit[100] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_391() {     /* call_format_390 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_392); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_393);
        (--rSp)->Val = rLit[25]->Val;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[94] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_393() {     /* 106 */
   {    register Ptr aRet;
        GYformat[25]->Val = GIa1;
        (--GIsp)->Val = ((Ptr) GLformat_395);
        {aRet = ((Ptr) GLformat_223); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_395() {     /* call_format_394 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = rLit[97]->Val;
        rLit[97]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[109];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa3 = rLit[25]->Val;
        GIa2 = (Ptr) 0;
        GIa1 = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLformat_397);
        {aRet = ((Ptr) GLformat_398); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_397() {     /* call_format_396 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[97]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = ((Ptr) GLformat_399); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_392() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_400);
        (--rSp)->Val = rLit[23]->Val;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[73] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_400() {     /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_401); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_402);
        (--rSp)->Val = rLit[25]->Val;
        GIa1 = rLit[23]->Val;
        (--rSp)->Val = ((Ptr) GLformat_404);
        {aRet = (rLit[110] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_404() {     /* call_format_403 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[94] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_402() {     /* 110 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        rLit[25]->Val = GIa1;
        (--GIsp)->Val = ((Ptr) GLformat_406);
        {aRet = (rLit[33] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_406() {     /* call_format_405 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_408);
        {aRet = ((Ptr) GLformat_223); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_408() {     /* call_format_407 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = rLit[97]->Val;
        rLit[97]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[111];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = rLit[23]->Val;
        (--rSp)->Val = ((Ptr) GLformat_409);
        (--rSp)->Val = rLit[25]->Val;
        (--rSp)->Val = (Ptr) ((UFix) 0xffff);
        (--rSp)->Val = rLit[23]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_409() {     /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = (Ptr) 0;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLformat_411);
        {aRet = ((Ptr) GLformat_398); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_411() {     /* call_format_410 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[97]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = ((Ptr) GLformat_399); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_401() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_412);
        (--rSp)->Val = rLit[25]->Val;
        (--rSp)->Val = ((Ptr) GLformat_413);
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[23]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_413() {     /* 113 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[94] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_412() {     /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        rLit[25]->Val = rA1;
        (--rSp)->Val = ((Ptr) GLformat_414);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[23]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_414() {     /* 114 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_416);
        {aRet = ((Ptr) GLformat_223); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_416() {     /* call_format_415 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = rLit[97]->Val;
        rLit[97]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[112];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = rLit[23]->Val;
        (--rSp)->Val = ((Ptr) GLformat_418);
        {aRet = (rLit[88] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_418() {     /* call_format_417 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_419);
        (--rSp)->Val = rLit[25]->Val;
        (--rSp)->Val = rLit[23]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_419() {     /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = (rSp++)->Val;
        GIa1 = (Ptr) 0;
        (--rSp)->Val = ((Ptr) GLformat_421);
        {aRet = ((Ptr) GLformat_398); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_421() {     /* call_format_420 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[97]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = ((Ptr) GLformat_399); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_399() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYformat[107]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_398() {     /* #:format:float-e-1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLformat_422); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_423() {     /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = rLit[97]->Val;
        rLit[97]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLformat_424);
        (--rSp)->Val = rLit[89]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_424() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GYformat[89]->Val = GIa1;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLformat_422); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_422() {     /* 102 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLformat_423); goto lRet;}}
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLformat_426);
        {aRet = (GYformat[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_426() {     /* call_format_425 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_427); goto lRet;}
        (--rSp)->Val = rLit[107]->Val;
        (--rSp)->Val = ((Ptr) GLformat_428);
        (--rSp)->Val = (Ptr) 1;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (rLit[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_428() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLformat_430);
        {aRet = (GYformat[101] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_430() {     /* call_format_429 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        {aRet = ((Ptr) GLformat_427); goto lRet;}
        (--rSp)->Val = (Ptr) 48;
        (--rSp)->Val = ((Ptr) GLformat_431);
        (--rSp)->Val = rLit[89]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, rNil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_431() {     /* 107 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        GYformat[89]->Val = GIa1;
        {aRet = ((Ptr) GLformat_427); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_427() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = (Ptr) 46;
        (--rSp)->Val = ((Ptr) GLformat_432);
        (--rSp)->Val = rLit[89]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_432() {     /* 108 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        rSp += (Fix) 1;
        rLit[89]->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_433);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[73] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_433() {     /* 111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_434); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_435);
        (--rSp)->Val = rLit[89]->Val;
        GIa2 = (Ptr) 48;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLformat_437);
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_437() {     /* call_format_436 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_435() {     /* 112 */
   {    register Ptr aRet;
        GYformat[89]->Val = GIa1;
        {aRet = ((Ptr) GLformat_434); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_434() {     /* 110 */
   {    register Ptr aRet;
        GIa4 = (GIsp + 2)->Val;
        {aRet = ((Ptr) GLformat_438); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_439() {     /* 113 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        rA4 = rLit[97]->Val;
        rLit[97]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLformat_440);
        (--rSp)->Val = rLit[89]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_440() {     /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GYformat[89]->Val = GIa1;
        GIa4 = (rSp++)->Val;
        {aRet = ((Ptr) GLformat_438); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_438() {     /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLformat_439); goto lRet;}}
        GIa1 = GYformat[6];
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_69() {      /* #:format:format-g-float */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_442);
        {aRet = (GYformat[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_442() {     /* call_format_441 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLformat_443); goto lRet;}
        (--rSp)->Val = rLit[26]->Val;
        (--rSp)->Val = rLit[21]->Val;
        (--rSp)->Val = rLit[25]->Val;
        rLit[25]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[26]->Val;
        rLit[26]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[113];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = (rSp + 10)->Val;
        (--rSp)->Val = ((Ptr) GLformat_445);
        {aRet = ((Ptr) GLformat_60); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_445() {     /* call_format_444 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[26]->Val = (rSp + 6)->Val;
        rLit[25]->Val = (rSp + 7)->Val;
        rSp += (Fix) 11;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_443() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (llrt_floatp (rSp->Val) != 0) 
        {aRet = ((Ptr) GLformat_446); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLformat_448);
        {aRet = (GYformat[87] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_448() {     /* call_format_447 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLformat_446); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_446() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLformat_450);
        {aRet = (GYformat[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_450() {     /* call_format_449 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      goto l_105;
        GIa4 = (Ptr) 0;
        {aRet = ((Ptr) GLformat_451); goto lRet;}
l_105:
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLformat_453);
        {aRet = (GYformat[88] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_453() {     /* call_format_452 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_455);
        {aRet = (GYformat[91] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_455() {     /* call_format_454 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_457);
        {aRet = (GYformat[104] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_457() {     /* call_format_456 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLformat_459);
        {aRet = (GYformat[33] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_459() {     /* call_format_458 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_451); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_451() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GIa4;
        if (rLit[24]->Val != GInil)     goto l_107;
        GIa3 = (Ptr) 4;
        {aRet = ((Ptr) GLformat_460); goto lRet;}
l_107:
        (--rSp)->Val = ((Ptr) GLformat_461);
        (--rSp)->Val = rLit[24]->Val;
        (--rSp)->Val = (Ptr) 2;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_461() {     /* 109 */
   {    register Ptr aRet;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLformat_460); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_460() {     /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA3;
        rLit = GYformat; rSp = GIsp; rA3 = GIa3;
        (--rSp)->Val = rA3;
        if (rLit[26]->Val != GInil)     goto l_110;
        GIa4 = (Ptr) 0;
        {aRet = ((Ptr) GLformat_462); goto lRet;}
l_110:
        (--rSp)->Val = ((Ptr) GLformat_463);
        (--rSp)->Val = rLit[26]->Val;
        (--rSp)->Val = rA3;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_463() {     /* 112 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_462); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_462() {     /* 111 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLformat_464);
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 2;
        rA4 = (Ptr) 2;
        {aRet = (GYformat[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_464() {     /* 113 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (rLit[25]->Val == GInil)     goto l_114;
        GIa4 = rLit[25]->Val;
        {aRet = ((Ptr) GLformat_465); goto lRet;}
l_114:
        (--rSp)->Val = ((Ptr) GLformat_466);
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_467);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 7;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[99] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_467() {     /* 117 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[94] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_466() {     /* 116 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLformat_465); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_465() {     /* 115 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLformat_468);
        (--rSp)->Val = rA4;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (GYformat[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_468() {     /* 118 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLformat_469);
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[76] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_469() {     /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLformat_470); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_471);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[73] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_471() {     /* 123 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_472); goto lRet;}
        {aRet = ((Ptr) GLformat_470); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_470() {     /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 5)->Val;
        rSp += (Fix) 6;
        {aRet = ((Ptr) GLformat_67); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_472() {     /* 119 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[22]->Val;
        (--rSp)->Val = rLit[21]->Val;
        (--rSp)->Val = rLit[22]->Val;
        rLit[22]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[23]->Val;
        rLit[23]->Val = (rSp + 3)->Val;
        (--rSp)->Val = rLit[24]->Val;
        rLit[24]->Val = (rSp + 5)->Val;
        (--rSp)->Val = rLit[25]->Val;
        rLit[25]->Val = (rSp + 7)->Val;
        (--rSp)->Val = rLit[26]->Val;
        rLit[26]->Val = (rSp + 9)->Val;
        (--rSp)->Val = (Ptr) 5;
        (--rSp)->Val = rLit[114];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = (rSp + 21)->Val;
        (--rSp)->Val = ((Ptr) GLformat_474);
        {aRet = ((Ptr) GLformat_68); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_474() {     /* call_format_473 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[26]->Val = (rSp + 6)->Val;
        rLit[25]->Val = (rSp + 7)->Val;
        rLit[24]->Val = (rSp + 8)->Val;
        rLit[23]->Val = (rSp + 9)->Val;
        rLit[22]->Val = (rSp + 10)->Val;
        rSp += (Fix) 16;
        (--rSp)->Val = ((Ptr) GLformat_475);
        (--rSp)->Val = rLit[8]->Val;
        GIa2 = (Ptr) 32;
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLformat_477);
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_477() {     /* call_format_476 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_475() {     /* 124 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYformat[8]->Val = GIa1;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_70() {      /* #:format:format-nl */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (rLit[26]->Val != GInil)     goto l_102;
        rLit[26]->Val = (Ptr) 1;
l_102:
        (--rSp)->Val = ((Ptr) GLformat_478);
        (--rSp)->Val = rLit[8]->Val;
        GIa2 = (Ptr) 13;
        GIa1 = rLit[26]->Val;
        (--rSp)->Val = ((Ptr) GLformat_480);
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_480() {     /* call_format_479 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = (Ptr) 10;
        GIa1 = rLit[26]->Val;
        (--rSp)->Val = ((Ptr) GLformat_482);
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_482() {     /* call_format_481 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLformat_483); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_483() {     /* 104 */
   {    register Ptr aRet, rSp, rA4, rBcons;
        rSp = GIsp; rA4 = GIa4; rBcons = GIbcons;
        if ((long) (rSp + 2)->Val < (long) rBcons)      {aRet = ((Ptr) GLformat_484); goto lRet;}
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLformat_484); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_485);
        rA4 = (rSp + 3)->Val;
        (rSp + 3)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rSp + 3)->Val;
        (rSp + 3)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (GYformat[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_485() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLformat_487);
        {aRet = (GYformat[115] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_487() {     /* call_format_486 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLformat_483); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_484() {     /* 105 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 3;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_478() {     /* 103 */
   {    register Ptr aRet;
        GYformat[8]->Val = GIa1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_71() {      /* #:format:format-eol */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rLit[19]->Val == rNil)      goto l_101;
        if (rLit[18]->Val == rNil)      goto l_101;
        GIa3 = rLit[116];
        GIa2 = rLit[63];
        rA1 = rLit[3];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rLit[19]->Val == rNil)      {aRet = ((Ptr) GLformat_488); goto lRet;}
        GIa2 = (Ptr) 10;
        rA1 = rLit[8]->Val;
        (--rSp)->Val = ((Ptr) GLformat_490);
        {aRet = (rLit[66] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_490() {     /* call_format_489 */
   {    register Ptr aRet;
        GYformat[8]->Val = GIa1;
        {aRet = ((Ptr) GLformat_491); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_491() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYformat; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLformat_492);
        rA4 = rLit[12]->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[117] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_492() {     /* 107 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        if (GIa1 != rLit[118])  goto l_106;
        GIa4 = rLit[12]->Val;
        rLit[12]->Val = (GIa4 + 1)->Val;
        {aRet = ((Ptr) GLformat_491); goto lRet;}
l_106:
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_488() {     /* 103 */
   {    register Ptr aRet;
        GIa1 = GYformat[18]->Val;
        if (GIa1 != GInil)      { aRet = (GIsp++)->Val; goto lRet;}
        {aRet = ((Ptr) GLformat_493); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_493() {     /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYformat; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLformat_494);
        rA4 = rLit[12]->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (rLit[117] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_494() {     /* 111 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        if (GIa1 != rLit[118])  goto l_110;
        GIa4 = rLit[12]->Val;
        rLit[12]->Val = (GIa4 + 1)->Val;
        {aRet = ((Ptr) GLformat_493); goto lRet;}
l_110:
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_72() {      /* #:format:format-tilde */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (rLit[26]->Val != GInil)     goto l_102;
        rLit[26]->Val = (Ptr) 1;
l_102:
        (--rSp)->Val = ((Ptr) GLformat_495);
        (--rSp)->Val = rLit[8]->Val;
        GIa2 = (Ptr) 126;
        GIa1 = rLit[26]->Val;
        (--rSp)->Val = ((Ptr) GLformat_497);
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_497() {     /* call_format_496 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_495() {     /* 103 */
   {    register Ptr aRet;
        GYformat[8]->Val = GIa1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_73() {      /* #:format:format-tab */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBcons;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        (--rSp)->Val = rLit[8]->Val;
l_101:
        rA2 = rSp->Val;
        rA1 = (Ptr) 10;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        if (rA1 == rNil)        goto l_102;
        rA2 = rSp->Val;
        rA1 = (Ptr) 10;
        rA1 = llrt_call_memq (rA1, rA2, rBcons, rNil);
        rSp->Val = (rA1 + 1)->Val;
        goto l_101;
l_102:
        rA1 = rSp->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        rSp->Val = rA1;
        if (rLit[26]->Val != rNil)      goto l_104;
        rLit[26]->Val = (Ptr) 1;
l_104:
        if (rLit[25]->Val != rNil)      goto l_106;
        rLit[25]->Val = (Ptr) 1;
l_106:
        if (rLit[19]->Val == rNil)      goto l_107;
        rA4 = (Ptr) 0;
        goto l_108;
l_107:
        rA4 = rLit[26]->Val;
l_108:
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if (rLit[19]->Val == rNil)      {aRet = ((Ptr) GLformat_498); goto lRet;}
        (rSp + 2)->Val = rLit[26]->Val;
        (--rSp)->Val = ((Ptr) GLformat_499);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[26]->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_499() {     /* 111 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLformat_500); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_498() {     /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_501);
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[26]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[76] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_501() {     /* 114 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_502); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_503);
        (--rSp)->Val = rLit[26]->Val;
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_503() {     /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 2)->Val = GIa1;
        (rSp + 1)->Val = GYformat[26]->Val;
        {aRet = ((Ptr) GLformat_500); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_502() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 2)->Val = (Ptr) 0;
        (rSp + 1)->Val = (rSp + 3)->Val;
        {aRet = ((Ptr) GLformat_500); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_500() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_504);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_504() {     /* 116 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa2 = rLit[25]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_506);
        {aRet = (rLit[119] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_506() {     /* call_format_505 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_508);
        {aRet = (GYformat[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_508() {     /* call_format_507 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLformat_509); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_510);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLformat_511);
        (--rSp)->Val = rLit[25]->Val;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_511() {     /* 120 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[96] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_510() {     /* 119 */
   {    register Ptr aRet;
        (GIsp + 3)->Val = GIa1;
        {aRet = ((Ptr) GLformat_509); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_509() {     /* 118 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLformat_512);
        (--rSp)->Val = rLit[8]->Val;
        GIa2 = (Ptr) 32;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLformat_514);
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_514() {     /* call_format_513 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_512() {     /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYformat[8]->Val = GIa1;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_74() {      /* #:format:format-ignore */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rLit[26]->Val != rNil)      goto l_102;
        if (rLit[19]->Val == rNil)      goto l_103;
        rA4 = (Ptr) 0;
        goto l_104;
l_103:
        rA4 = (Ptr) 1;
l_104:
        rLit[26]->Val = rA4;
l_102:
        if (rLit[19]->Val == rNil)      goto l_105;
        if (rLit[18]->Val == rNil)      goto l_105;
        GIa3 = rLit[120];
        GIa2 = rLit[63];
        rA1 = rLit[3];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        if (rLit[19]->Val == rNil)      {aRet = ((Ptr) GLformat_515); goto lRet;}
        GIa2 = rLit[9]->Val;
        rA1 = rLit[26]->Val;
        (--rSp)->Val = ((Ptr) GLformat_517);
        {aRet = (rLit[121] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_517() {     /* call_format_516 */
   {    register Ptr aRet;
        GYformat[11]->Val = GIa1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_515() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1, rBcons;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rBcons = GIbcons;
        if (rLit[18]->Val == GInil)     {aRet = ((Ptr) GLformat_518); goto lRet;}
        rA1 = rLit[9]->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = rA1;
        rA1 = rLit[11]->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = ((Ptr) GLformat_519);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[26]->Val;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_519() {     /* 111 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa2 = rLit[9]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_521);
        {aRet = (rLit[121] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_521() {     /* call_format_520 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYformat[11]->Val = GIa1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_518() {     /* 109 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa2 = rLit[11]->Val;
        GIa1 = rLit[26]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_523);
        {aRet = (rLit[121] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_523() {     /* call_format_522 */
   {    register Ptr aRet;
        GYformat[11]->Val = GIa1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_75() {      /* #:format:format-indirect */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYformat; rSp = GIsp; rA4 = GIa4;
        rA4 = rLit[11]->Val;
        rLit[11]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLformat_525);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_525() {     /* call_format_524 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rLit[122]->Val;
        rLit[122]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[123];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (((rSp + 7)->Val >= GIbstrg) && ((rSp + 7)->Val < GIbsymb))  goto l_102;
        GIa3 = (rSp + 7)->Val;
        GIa2 = rLit[124];
        rA1 = rLit[3];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = ((Ptr) GLformat_526);
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        if (rLit[19]->Val == GInil)     goto l_104;
        (--rSp)->Val = ((Ptr) GLformat_527);
        {aRet = ((Ptr) GLformat_528); goto lRet;}
l_104:
        rA1 = rLit[11]->Val;
        rLit[11]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLformat_527);
        {aRet = ((Ptr) GLformat_529); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_527() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_526); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_526() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[122]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_528() {     /* #:format:format-ind-at */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rLit[122]->Val;
        (--rSp)->Val = rLit[12]->Val;
        rLit[12]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[125];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLformat_531);
        {aRet = ((Ptr) GLformat_532); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_531() {     /* call_format_530 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[12]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_532() {     /* #:format:format-ind-at1 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        if (rA1 == rNil)        goto l_102;
        rA1 = rNil;
        goto l_103;
l_102:
        rA1 = rLit[6];
l_103:
        if (rA1 != rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        if (rSp->Val != (Ptr) 126)      {aRet = ((Ptr) GLformat_533); goto lRet;}
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[17]->Val;
        rLit[17]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[18]->Val;
        rLit[18]->Val = (rSp + 3)->Val;
        (--rSp)->Val = rLit[19]->Val;
        rLit[19]->Val = (rSp + 5)->Val;
        (--rSp)->Val = rLit[20]->Val;
        rLit[20]->Val = (rSp + 7)->Val;
        (--rSp)->Val = rLit[21]->Val;
        rLit[21]->Val = (rSp + 9)->Val;
        (--rSp)->Val = rLit[22]->Val;
        rLit[22]->Val = (rSp + 11)->Val;
        (--rSp)->Val = rLit[23]->Val;
        rLit[23]->Val = (rSp + 13)->Val;
        (--rSp)->Val = rLit[24]->Val;
        rLit[24]->Val = (rSp + 15)->Val;
        (--rSp)->Val = rLit[25]->Val;
        rLit[25]->Val = (rSp + 17)->Val;
        (--rSp)->Val = rLit[26]->Val;
        rLit[26]->Val = (rSp + 19)->Val;
        (--rSp)->Val = (Ptr) 10;
        (--rSp)->Val = rLit[126];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_535);
        {aRet = ((Ptr) GLformat_32); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_535() {     /* call_format_534 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYformat; rA1 = GIa1;
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLformat_537);
        {aRet = ((Ptr) GLformat_532); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLformat_537() {     /* call_format_536 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[26]->Val = (rSp + 6)->Val;
        rLit[25]->Val = (rSp + 7)->Val;
        rLit[24]->Val = (rSp + 8)->Val;
        rLit[23]->Val = (rSp + 9)->Val;
        rLit[22]->Val = (rSp + 10)->Val;
        rLit[21]->Val = (rSp + 11)->Val;
        rLit[20]->Val = (rSp + 12)->Val;
        rLit[19]->Val = (rSp + 13)->Val;
        rLit[18]->Val = (rSp + 14)->Val;
        rLit[17]->Val = (rSp + 15)->Val;
        rSp += (Fix) 27;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_533() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLformat_538);
        (--rSp)->Val = rLit[8]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_538() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        rSp += (Fix) 1;
        rLit[8]->Val = rA1;
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLformat_532); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_529() {     /* #:format:format-ind-list */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = rLit[9]->Val;
        rLit[9]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[127];
        (--rSp)->Val = ((Ptr) GLformat_529);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_540);
        {aRet = (rLit[128] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_540() {     /* call_format_539 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rLit[9]->Val;
        GIa2 = rLit[129];
        rA1 = rLit[3];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        (--rSp)->Val = rLit[122]->Val;
        (--rSp)->Val = rLit[9]->Val;
        (--rSp)->Val = rLit[11]->Val;
        rLit[11]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[12]->Val;
        rLit[12]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[130];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_541);
        (--rSp)->Val = rLit[2];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_542);
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_544);
        {aRet = ((Ptr) GLformat_28); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_544() {     /* call_format_543 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_542); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_542() {     /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_541); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_541() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[12]->Val = (rSp + 6)->Val;
        rLit[11]->Val = (rSp + 7)->Val;
        rSp += (Fix) 10;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[9]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_76() {      /* #:format:format-cond */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rLit[19]->Val == rNil)      goto l_101;
        if (rLit[18]->Val == rNil)      goto l_101;
        GIa3 = rLit[131];
        GIa2 = rLit[63];
        rA1 = rLit[3];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rLit[19]->Val == rNil)      {aRet = ((Ptr) GLformat_545); goto lRet;}
        GIa4 = rLit[11]->Val;
        rLit[26]->Val = GIa4->Val;
        if (rLit[26]->Val != rNil)      {aRet = ((Ptr) GLformat_546); goto lRet;}
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        GIa3 = rNil;
        GIa2 = (Ptr) 0;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLformat_548);
        {aRet = ((Ptr) GLformat_549); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_548() {     /* call_format_547 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYformat; rA1 = GIa1;
        rA1 = rLit[11]->Val;
        rLit[11]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLformat_546() {     /* 105 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYformat; rA1 = GIa1;
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        GIa3 = GInil;
        GIa2 = (Ptr) 0;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLformat_551);
        {aRet = ((Ptr) GLformat_549); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLformat_551() {     /* call_format_550 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = rLit[12]->Val;
        rLit[12]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[132];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_552);
        (--rSp)->Val = rLit[2];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_554);
        {aRet = ((Ptr) GLformat_28); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_554() {     /* call_format_553 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_552); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_552() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[12]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_545() {     /* 103 */
   {    register Ptr aRet, *rLit, rA1, rA4, rNil;
        rLit = GYformat; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rLit[18]->Val == rNil)      {aRet = ((Ptr) GLformat_555); goto lRet;}
        rA4 = rLit[11]->Val;
        rLit[26]->Val = rA4->Val;
        rLit[11]->Val = (rA4 + 1)->Val;
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        if (rLit[26]->Val == rNil)      goto l_110;
        GIa2 = (Ptr) 1;
        goto l_111;
l_110:
        GIa2 = (Ptr) 0;
l_111:
        GIa3 = rNil;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLformat_557);
        {aRet = ((Ptr) GLformat_549); goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_557() {     /* call_format_556 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = rLit[12]->Val;
        rLit[12]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[133];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_558);
        (--rSp)->Val = rLit[2];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_560);
        {aRet = ((Ptr) GLformat_28); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_560() {     /* call_format_559 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_558); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_558() {     /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[12]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_555() {     /* 108 */
   {    register Ptr aRet, *rLit, rA1, rA4, rNil;
        rLit = GYformat; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rLit[26]->Val != rNil)      goto l_114;
        rA4 = rLit[11]->Val;
        rLit[26]->Val = rA4->Val;
        rLit[11]->Val = (rA4 + 1)->Val;
l_114:
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        GIa3 = rNil;
        GIa2 = rLit[26]->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLformat_562);
        {aRet = ((Ptr) GLformat_549); goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_562() {     /* call_format_561 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = rLit[12]->Val;
        rLit[12]->Val = GIa1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[134];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_563);
        (--rSp)->Val = rLit[2];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_565);
        {aRet = ((Ptr) GLformat_28); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_565() {     /* call_format_564 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_563); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_563() {     /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[12]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_549() {     /* #:format:search-cond */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rLit[135];
        GIa2 = rLit[63];
        rA1 = rLit[3];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLformat_567);
        {aRet = (rLit[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_567() {     /* call_format_566 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        {aRet = ((Ptr) GLformat_568); goto lRet;}
        rA1 = rSp->Val;
        if (rA1 != (Ptr) 126)   {aRet = ((Ptr) GLformat_569); goto lRet;}
        rA4 = rLit[12]->Val;
        rLit[12]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA1 = rSp->Val;
        if (rA1 != rLit[136])   goto l_108;
        GIa3 = rLit[12]->Val;
        GIa2 = rLit[137];
        rA1 = rLit[3];
        rSp += (Fix) 4;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_108:
        if (rA1 != (Ptr) 93)    goto l_109;
        rA1 = (rSp + 3)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_109:
        if (rA1 != (Ptr) 59)    {aRet = ((Ptr) GLformat_570); goto lRet;}
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        GIa3 = rNil;
        GIa2 = (Ptr) ((UFix) 0xffff);
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLformat_572);
        {aRet = ((Ptr) GLformat_549); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_572() {     /* call_format_571 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_570() {     /* 110 */
   {    register Ptr aRet, *rLit, rA4;
        rLit = GYformat; rA4 = GIa4;
        if (GIa1 != (Ptr) 58)   {aRet = ((Ptr) GLformat_573); goto lRet;}
        rA4 = rLit[12]->Val;
        if (rA4->Val != (Ptr) 59)       {aRet = ((Ptr) GLformat_574); goto lRet;}
        rLit[12]->Val = (rA4 + 1)->Val;
        GIa3 = GInil;
        GIa2 = (Ptr) ((UFix) 0xffff);
        GIa1 = rA4->Val;
        (--GIsp)->Val = ((Ptr) GLformat_576);
        {aRet = ((Ptr) GLformat_549); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLformat_576() {     /* call_format_575 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_574() {     /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYformat; rSp = GIsp; rA4 = GIa4;
        rLit[12]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLformat_577);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLformat_578);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GIa1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_578() {     /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_577() {     /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = (rSp + 3)->Val;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_549); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_573() {     /* 111 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        (--rSp)->Val = rA1->Val;
        (--rSp)->Val = ((Ptr) GLformat_579);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLformat_580);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_580() {     /* 118 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_579() {     /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = (rSp + 3)->Val;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_549); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_569() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        (--rSp)->Val = rA1->Val;
        GIa2 = (rSp + 1)->Val;
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLformat_582);
        {aRet = (rLit[66] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_582() {     /* call_format_581 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = (rSp + 2)->Val;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLformat_549); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_568() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rSp->Val == (Ptr) 126)      goto l_120;
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        GIa3 = rNil;
        GIa2 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLformat_549); goto lRet;}
l_120:
        rA4 = rLit[12]->Val;
        rSp->Val = rA4->Val;
        rLit[12]->Val = (rA4 + 1)->Val;
        rA1 = rSp->Val;
        if (rA1 != rLit[136])   goto l_123;
        GIa3 = rLit[135];
        GIa2 = rLit[63];
        rA1 = rLit[3];
        rSp += (Fix) 3;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_123:
        if (rA1 != (Ptr) 93)    goto l_124;
        rA1 = rNil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_124:
        if (rA1 != (Ptr) 59)    {aRet = ((Ptr) GLformat_583); goto lRet;}
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        (--rSp)->Val = rA1->Val;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLformat_585);
        {aRet = (rLit[110] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_585() {     /* call_format_584 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GInil;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLformat_549); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_583() {     /* 125 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if (rA1 != (Ptr) 58)    goto l_126;
        rA4 = rLit[12]->Val;
        rSp->Val = rA4->Val;
        rLit[12]->Val = (rA4 + 1)->Val;
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        if (rSp->Val != (Ptr) 59)       goto l_127;
        rA2 = (Ptr) 0;
        goto l_128;
l_127:
        rA2 = (rSp + 1)->Val;
l_128:
        GIa3 = rNil;
        rA1 = rA1->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLformat_549); goto lRet;}
l_126:
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        GIa3 = rNil;
        rA2 = (rSp + 1)->Val;
        rA1 = rA1->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLformat_549); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_77() {      /* #:format:format-iter */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rLit[138]->Val;
        rLit[138]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[139];
        (--rSp)->Val = ((Ptr) GLformat_77);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rLit[26]->Val == rNil)      goto l_101;
        rA4 = rLit[26]->Val;
        goto l_102;
l_101:
        rA4 = (Ptr) ((UFix) 0xffff);
l_102:
        (--rSp)->Val = rA4;
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        GIa3 = rNil;
        GIa2 = rNil;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLformat_587);
        {aRet = ((Ptr) GLformat_588); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_587() {     /* call_format_586 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYformat; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[122]->Val;
        rLit[122]->Val = GIa1;
        (--rSp)->Val = rLit[12]->Val;
        rLit[12]->Val = (rSp + 2)->Val;
        (--rSp)->Val = rLit[140]->Val;
        rLit[140]->Val = (rSp + 4)->Val;
        (--rSp)->Val = rLit[141]->Val;
        rLit[141]->Val = (rSp + 6)->Val;
        (--rSp)->Val = (Ptr) 4;
        (--rSp)->Val = rLit[142];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = rLit[141]->Val;
        (--rSp)->Val = ((Ptr) GLformat_590);
        {aRet = (rLit[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_590() {     /* call_format_589 */
   {    register Ptr aRet, *rLit, rA1, rA4, rNil;
        rLit = GYformat; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        {aRet = ((Ptr) GLformat_591); goto lRet;}
        if (rLit[122]->Val != rNil)     {aRet = ((Ptr) GLformat_592); goto lRet;}
        rA4 = rLit[11]->Val;
        rLit[11]->Val = (rA4 + 1)->Val;
        rLit[122]->Val = rA4->Val;
        if ((rLit[122]->Val >= GIbstrg) && (rLit[122]->Val < GIbsymb))  goto l_108;
        GIa3 = rLit[122]->Val;
        GIa2 = rLit[124];
        rA1 = rLit[3];
        GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_108:
        rA1 = rLit[122]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_594);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_594() {     /* call_format_593 */
   {    register Ptr aRet;
        GYformat[122]->Val = GIa1;
        {aRet = ((Ptr) GLformat_592); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_592() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYformat; rSp = GIsp; rNil = GInil;
        rLit[140]->Val = rLit[141]->Val;
        rLit[12]->Val = rLit[122]->Val;
        if (rLit[19]->Val == rNil)      {aRet = ((Ptr) GLformat_595); goto lRet;}
        if (rLit[18]->Val == rNil)      {aRet = ((Ptr) GLformat_595); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_596);
        (--rSp)->Val = rLit[143];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa1 = rLit[11]->Val;
        (--rSp)->Val = ((Ptr) GLformat_598);
        {aRet = ((Ptr) GLformat_599); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_598() {     /* call_format_597 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_596); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_595() {     /* 109 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (rLit[19]->Val == GInil)     {aRet = ((Ptr) GLformat_600); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_596);
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_602);
        {aRet = ((Ptr) GLformat_603); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_602() {     /* call_format_601 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_596); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_600() {     /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        if (rLit[18]->Val == GInil)     {aRet = ((Ptr) GLformat_604); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_596);
        (--rSp)->Val = rLit[143];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        rA1 = rLit[11]->Val;
        rLit[11]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLformat_606);
        {aRet = ((Ptr) GLformat_599); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_606() {     /* call_format_605 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_596); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_604() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYformat; rSp = GIsp; rA4 = GIa4;
        rA4 = rLit[11]->Val;
        rLit[11]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rLit[11]->Val;
        rLit[11]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[9]->Val;
        rLit[9]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[144];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_607);
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_609);
        {aRet = ((Ptr) GLformat_603); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_609() {     /* call_format_608 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_607); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_607() {     /* 118 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[9]->Val = (rSp + 6)->Val;
        rLit[11]->Val = (rSp + 7)->Val;
        rSp += (Fix) 10;
        {aRet = ((Ptr) GLformat_596); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_591() {     /* 103 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = ((Ptr) GLformat_596); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_596() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[141]->Val = (rSp + 6)->Val;
        rLit[140]->Val = (rSp + 7)->Val;
        rLit[12]->Val = (rSp + 8)->Val;
        rLit[122]->Val = (rSp + 9)->Val;
        rSp += (Fix) 13;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[138]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_588() {     /* #:format:search-iter */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_101;
        GIa3 = rLit[145];
        rA2 = rLit[63];
        rA1 = rLit[3];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rA1 != (Ptr) 126)   {aRet = ((Ptr) GLformat_610); goto lRet;}
        rA4 = rLit[12]->Val;
        (rSp + 1)->Val = rA4->Val;
        rLit[12]->Val = (rA4 + 1)->Val;
        if ((rSp + 1)->Val != (Ptr) 125)        goto l_105;
        rA1 = rA2;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        if ((rSp + 1)->Val != (Ptr) 58) goto l_107;
        rA4 = rLit[12]->Val;
        if (rA4->Val != (Ptr) 125)      goto l_107;
        rLit[138]->Val = rLit[6];
        rA4 = rLit[12]->Val;
        rLit[12]->Val = (rA4 + 1)->Val;
        rA1 = rA2;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_107:
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        (--rSp)->Val = rA1->Val;
        (--rSp)->Val = ((Ptr) GLformat_611);
        (--rSp)->Val = rA2;
        (--rSp)->Val = ((Ptr) GLformat_612);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLformat_612() {     /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[28] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_611() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GInil;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLformat_588); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_610() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        (--rSp)->Val = rA1->Val;
        (--rSp)->Val = GIa2;
        GIa2 = (rSp + 2)->Val;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLformat_614);
        {aRet = (rLit[66] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_614() {     /* call_format_613 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = GInil;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLformat_588); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_603() {     /* #:format:iter */
   {    register Ptr aRet, *rLit, rA1, rNil;
        rLit = GYformat; rA1 = GIa1; rNil = GInil;
        if (rLit[122]->Val != rNil)     goto l_102;
        rA1 = rNil;
        GIa2 = rLit[15];
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_102:
        if (rLit[11]->Val != rNil)      goto l_104;
        if (rLit[138]->Val != rNil)     goto l_104;
        rA1 = rNil;
        GIa2 = rLit[15];
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_104:
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        {aRet = ((Ptr) GLformat_615); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLformat_615() {     /* #:format:iter-loop */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = rLit[141]->Val;
        (--rSp)->Val = ((Ptr) GLformat_617);
        {aRet = (rLit[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_617() {     /* call_format_616 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_101;
        rA1 = rNil;
        GIa2 = rLit[15];
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_101:
        if (rSp->Val != rNil)   {aRet = ((Ptr) GLformat_618); goto lRet;}
        if (rLit[11]->Val != rNil)      goto l_106;
        rA1 = rNil;
        GIa2 = rLit[15];
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_106:
        rA1 = rLit[141]->Val;
        (--rSp)->Val = ((Ptr) GLformat_620);
        {aRet = (rLit[110] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_620() {     /* call_format_619 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYformat; rA1 = GIa1;
        rLit[141]->Val = rA1;
        rLit[12]->Val = rLit[122]->Val;
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLformat_621);
        {aRet = ((Ptr) GLformat_615); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLformat_618() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYformat; rSp = GIsp; rNil = GInil;
        if (rSp->Val != (Ptr) 126)      {aRet = ((Ptr) GLformat_622); goto lRet;}
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[17]->Val;
        rLit[17]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[18]->Val;
        rLit[18]->Val = (rSp + 3)->Val;
        (--rSp)->Val = rLit[19]->Val;
        rLit[19]->Val = (rSp + 5)->Val;
        (--rSp)->Val = rLit[20]->Val;
        rLit[20]->Val = (rSp + 7)->Val;
        (--rSp)->Val = rLit[21]->Val;
        rLit[21]->Val = (rSp + 9)->Val;
        (--rSp)->Val = rLit[22]->Val;
        rLit[22]->Val = (rSp + 11)->Val;
        (--rSp)->Val = rLit[23]->Val;
        rLit[23]->Val = (rSp + 13)->Val;
        (--rSp)->Val = rLit[24]->Val;
        rLit[24]->Val = (rSp + 15)->Val;
        (--rSp)->Val = rLit[25]->Val;
        rLit[25]->Val = (rSp + 17)->Val;
        (--rSp)->Val = rLit[26]->Val;
        rLit[26]->Val = (rSp + 19)->Val;
        (--rSp)->Val = (Ptr) 10;
        (--rSp)->Val = rLit[146];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_624);
        {aRet = ((Ptr) GLformat_32); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_624() {     /* call_format_623 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[26]->Val = (rSp + 6)->Val;
        rLit[25]->Val = (rSp + 7)->Val;
        rLit[24]->Val = (rSp + 8)->Val;
        rLit[23]->Val = (rSp + 9)->Val;
        rLit[22]->Val = (rSp + 10)->Val;
        rLit[21]->Val = (rSp + 11)->Val;
        rLit[20]->Val = (rSp + 12)->Val;
        rLit[19]->Val = (rSp + 13)->Val;
        rLit[18]->Val = (rSp + 14)->Val;
        rLit[17]->Val = (rSp + 15)->Val;
        rSp += (Fix) 26;
        {aRet = ((Ptr) GLformat_621); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_622() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLformat_625);
        (--rSp)->Val = rLit[8]->Val;
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_625() {     /* 109 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        GYformat[8]->Val = GIa1;
        {aRet = ((Ptr) GLformat_621); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_621() {     /* 102 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYformat; rA1 = GIa1;
        rA1 = rLit[12]->Val;
        rLit[12]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLformat_615); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLformat_599() {     /* #:format:iter-colon */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYformat; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rLit[147]->Val;
        rLit[147]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[148];
        (--rSp)->Val = ((Ptr) GLformat_599);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rLit[122]->Val != rNil)     goto l_102;
        rA1 = rNil;
        GIa2 = rLit[143];
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_102:
        rA1 = rLit[147]->Val;
        rLit[147]->Val = (rA1 + 1)->Val;
        GIa2 = rA1->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLformat_627);
        {aRet = ((Ptr) GLformat_628); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_627() {     /* call_format_626 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        GYformat[147]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_628() {     /* #:format:iter-colon-loop */
   {    register Ptr aRet, *rLit, rSp, rA2, rNil;
        rLit = GYformat; rSp = GIsp; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rLit[11]->Val;
        rLit[11]->Val = rA2;
        (--rSp)->Val = rLit[9]->Val;
        rLit[9]->Val = GIa1;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[149];
        (--rSp)->Val = ((Ptr) GLformat_628);
        (--rSp)->Val = GIllink;
        GIllink = rNil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rA2 != rNil)        {aRet = ((Ptr) GLformat_629); goto lRet;}
        if (rLit[147]->Val != rNil)     {aRet = ((Ptr) GLformat_629); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_630);
        (--rSp)->Val = rLit[141]->Val;
        (--rSp)->Val = rLit[140]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[70] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_630() {     /* 104 */
   {    register Ptr aRet, *rLit, rNil;
        rLit = GYformat; rNil = GInil;
        if (GIa1 == rNil)       goto l_103;
        if (rLit[138]->Val != rNil)     {aRet = ((Ptr) GLformat_629); goto lRet;}
l_103:
        GIa1 = rNil;
        GIa2 = rLit[143];
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_629() {     /* 102 */
   {    register Ptr aRet, *rLit;
        rLit = GYformat;
        GIa1 = rLit[141]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_632);
        {aRet = (rLit[100] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_632() {     /* call_format_631 */
   {    register Ptr aRet, *rLit, rA1, rNil;
        rLit = GYformat; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_106;
        rA1 = rNil;
        GIa2 = rLit[143];
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_106:
        rA1 = rLit[141]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_634);
        {aRet = (rLit[110] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLformat_634() {     /* call_format_633 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        rLit[141]->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLformat_635);
        (--rSp)->Val = rLit[15];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_636);
        (--rSp)->Val = rLit[2];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = rLit[122]->Val;
        (--rSp)->Val = rLit[12]->Val;
        rLit[12]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[150];
        (--rSp)->Val = rLit[14];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLformat_638);
        {aRet = ((Ptr) GLformat_28); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_638() {     /* call_format_637 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYformat[12]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_636); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_636() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLformat_635); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_635() {     /* 107 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYformat; rA1 = GIa1;
        rA1 = rLit[147]->Val;
        rLit[147]->Val = (rA1 + 1)->Val;
        GIa2 = rA1->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLformat_640);
        {aRet = ((Ptr) GLformat_628); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLformat_640() {     /* call_format_639 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[9]->Val = (rSp + 6)->Val;
        rLit[11]->Val = (rSp + 7)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_78() {      /* #:format:format-hat */
   {    register Ptr aRet, *rLit, rA1, rNil;
        rLit = GYformat; rA1 = GIa1; rNil = GInil;
        if (rLit[26]->Val != rNil)      goto l_102;
        rA1 = rLit[11]->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        rLit[26]->Val = rA1;
l_102:
        if (rLit[25]->Val != rNil)      {aRet = ((Ptr) GLformat_641); goto lRet;}
        if (rLit[24]->Val != rNil)      {aRet = ((Ptr) GLformat_641); goto lRet;}
        rA1 = rLit[26]->Val;
        (--GIsp)->Val = ((Ptr) GLformat_643);
        {aRet = (rLit[100] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLformat_643() {     /* call_format_642 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLformat_644); goto lRet;}
        {aRet = ((Ptr) GLformat_641); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_641() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYformat; rSp = GIsp; rNil = GInil;
        if (rLit[25]->Val == rNil)      {aRet = ((Ptr) GLformat_645); goto lRet;}
        if (rLit[24]->Val != rNil)      {aRet = ((Ptr) GLformat_645); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_646);
        (--rSp)->Val = rLit[26]->Val;
        (--rSp)->Val = rLit[25]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[70] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_646() {     /* 108 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLformat_644); goto lRet;}
        {aRet = ((Ptr) GLformat_645); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_645() {     /* 107 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYformat; rSp = GIsp; rNil = GInil;
        if (rLit[25]->Val == rNil)      {aRet = ((Ptr) GLformat_647); goto lRet;}
        if (rLit[24]->Val == rNil)      {aRet = ((Ptr) GLformat_647); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_648);
        (--rSp)->Val = rLit[26]->Val;
        (--rSp)->Val = rLit[25]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_648() {     /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLformat_644); goto lRet;}
        (--rSp)->Val = ((Ptr) GLformat_649);
        (--rSp)->Val = rLit[25]->Val;
        (--rSp)->Val = rLit[24]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[50] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_649() {     /* 111 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_647); goto lRet;}
        {aRet = ((Ptr) GLformat_644); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_644() {     /* 105 */
   {    register Ptr aRet, *rLit, rNil;
        rLit = GYformat; rNil = GInil;
        if (rLit[18]->Val == rNil)      goto l_112;
        GIa1 = rNil;
        GIa2 = rLit[143];
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
l_112:
        GIa1 = rNil;
        GIa2 = rLit[15];
        {aRet = (rLit[16] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_647() {     /* 103 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_42() {      /* #:format:read-n */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = rLit[12]->Val;
        (--rSp)->Val = GIa4->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLformat_651);
        {aRet = (rLit[151] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_651() {     /* call_format_650 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYformat; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_652); goto lRet;}
        GIa4 = rLit[12]->Val;
        rLit[12]->Val = (GIa4 + 1)->Val;
        GIa2 = rSp->Val;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLformat_654);
        {aRet = (rLit[66] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_654() {     /* call_format_653 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLformat_42); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLformat_652() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (GYformat[152] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_17() {      /* #:format:string */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = rA1;
        GIa2 = (Ptr) 32;
        (--rSp)->Val = ((Ptr) GLformat_656);
        {aRet = (GYformat[153] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_656() {     /* call_format_655 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = (rSp + 2)->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        (--rSp)->Val = rA1;
        {aRet = ((Ptr) GLformat_657); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLformat_657() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLformat_658);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (GYformat[73] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_658() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLformat_659); goto lRet;}
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLformat_661);
        {aRet = (GYformat[110] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLformat_661() {     /* call_format_660 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        (rSp + 2)->Val = GIa1;
        rA3 = rSp->Val;
        rSp->Val = (rA3 + 1)->Val;
        rA3 = rA3->Val;
        GIa2 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLformat_657);
        {aRet = (GYformat[154] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLformat_659() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDformat_662() {     /* trace prinf */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYformat,0,155,156);
  lRet:  return (aRet);}}

static Ptr GDformat_663() {     /* trace format */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYformat,2,155,156);
  lRet:  return (aRet);}}

