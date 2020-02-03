/* GELL 15.26: source file for the module: "browse" */
/*             translation done:           "Wed June 16 93 18:18:20 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "browse.h" 

static Ptr GLbrowse_1() {       /* check-browse */
   {    register Ptr aRet, *rLit;
        rLit = GYbrowse;
        GIa2 = GInil;
        GIa1 = rLit[0];
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLbrowse_2() {       /* meter-browse */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYbrowse; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLbrowse_3);
        (--rSp)->Val = rLit[2];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_3() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLbrowse_5);
        {aRet = ((Ptr) GLbrowse_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_5() {       /* call_browse_4 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYbrowse; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rLit[4];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_7() {       /* test-browse */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 1)    {aRet = ((Ptr) GLbrowse_8); goto lRet;}
        {aRet = ((Ptr) GLbrowse_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLbrowse_9() {       /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLbrowse_11);
        {aRet = ((Ptr) GLbrowse_6); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_11() {      /* call_browse_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLbrowse_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_8() {       /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLbrowse_9); goto lRet;}}
        rA1 = GYbrowse[5];
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLbrowse_12() {      /* browse-init */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYbrowse; rSp = GIsp;
        rLit[6]->Val = (Ptr) 21;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLbrowse_14);
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_14() {      /* call_browse_13 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA1;
l_101:
        rA4 = rSp->Val;
        if ((rA4 + 1)->Val == GInil)    goto l_102;
        rSp->Val = (rA4 + 1)->Val;
        goto l_101;
l_102:
        (rA4 + 1)->Val = (rSp + 1)->Val;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLbrowse_16);
        {aRet = (GYbrowse[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_16() {      /* call_browse_15 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GInil;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLbrowse_17); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_17() {      /* 103 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if ((rSp + 3)->Val == (Ptr) 0)  {aRet = ((Ptr) GLbrowse_18); goto lRet;}
        rA2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == GInil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        (rSp + 1)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLbrowse_19); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLbrowse_19() {      /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (rSp->Val == (Ptr) 0)        {aRet = ((Ptr) GLbrowse_20); goto lRet;}
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLbrowse_22);
        {aRet = (GYbrowse[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_22() {      /* call_browse_21 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GInil;
        GIa3 = rA1;
        GIa2 = rSp->Val;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLbrowse_24);
        {aRet = (GYbrowse[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLbrowse_24() {      /* call_browse_23 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 2;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rSp->Val = rA4;
        {aRet = ((Ptr) GLbrowse_19); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_20() {      /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYbrowse; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rSp += (Fix) 1;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[10];
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
l_107:
        if ((rSp + 2)->Val == (Ptr) 0)  goto l_108;
        rA1 = (rSp + 1)->Val;
        rA2 = rSp->Val;
        rA1 = rA1->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rSp->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA3 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA3 + 1)->Val;
        (rSp + 2)->Val = rA4;
        goto l_107;
l_108:
        rA4 = rSp->Val;
        rSp += (Fix) 3;
        rA3 = rSp->Val;
        rA2 = rA4;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLbrowse_26);
        {aRet = (rLit[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_26() {      /* call_browse_25 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 2;
        rA4 = (rSp + 7)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) ((rSp + 2)->Val)));
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLbrowse_27); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_27() {      /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (rSp->Val == (Ptr) 0)        {aRet = ((Ptr) GLbrowse_28); goto lRet;}
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLbrowse_30);
        {aRet = (GYbrowse[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_30() {      /* call_browse_29 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GInil;
        GIa3 = rA1;
        GIa2 = rSp->Val;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLbrowse_32);
        {aRet = (GYbrowse[9] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLbrowse_32() {      /* call_browse_31 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 2;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rSp->Val = rA4;
        {aRet = ((Ptr) GLbrowse_27); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_28() {      /* 110 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rSp += (Fix) 1;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        (--rSp)->Val = rA4;
        if ((rSp + 3)->Val != (Ptr) 0)  goto l_111;
        rA3 = (rSp + 8)->Val;
        goto l_112;
l_111:
        rA3 = (rSp + 3)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) 1));
l_112:
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLbrowse_34);
        {aRet = (GYbrowse[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_34() {      /* call_browse_33 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        (rSp + 2)->Val = GIa1;
        rA3 = (rSp++)->Val;
        (rSp + 3)->Val = rA3;
        rA4 = (rSp++)->Val;
        (rSp + 3)->Val = rA4;
        {aRet = ((Ptr) GLbrowse_17); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_18() {      /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_35() {      /* browse-random */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYbrowse; rSp = GIsp; rA4 = GIa4;
        rA4 = rLit[6]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) * (Fix) 17));
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) % (Fix) 251));
        rLit[6]->Val = rA4;
        GIa1 = rA4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_36() {      /* browse-randomize */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLbrowse_37); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_37() {      /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp + 1)->Val == GInil)    {aRet = ((Ptr) GLbrowse_38); goto lRet;}
        (--rSp)->Val = ((Ptr) GLbrowse_40);
        {aRet = ((Ptr) GLbrowse_35); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_40() {      /* call_browse_39 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA1;
        rA1 = (rSp + 2)->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) % (Fix) (rA1)));
        if (rA4 != (Ptr) 0)     goto l_103;
        rA1 = (rSp + 1)->Val;
        rA2 = rSp->Val;
        rA1 = rA1->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rSp->Val = rA1;
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        {aRet = ((Ptr) GLbrowse_37); goto lRet;}
l_103:
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA4;
l_105:
        if (rSp->Val == (Ptr) 1)        goto l_106;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA3 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA3 + 1)->Val;
        rSp->Val = rA4;
        goto l_105;
l_106:
        rA1 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA2 = (rSp + 2)->Val;
        rA1 = rA1->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        (rSp + 2)->Val = rA1;
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA3 = (rSp + 1)->Val;
        (rA3 + 1)->Val = (rA4 + 1)->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLbrowse_37); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_38() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_41() {      /* match */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYbrowse; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
l_GLbrowse_41:
        (--rSp)->Val = GIa3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_101;
        if (rA2 == rNil)        goto l_103;
        rA1 = rNil;
        {rSp += (Fix) 3; aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = rLit[5];
l_104:
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rA2 != rNil)        goto l_105;
        rA1 = rNil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        if (rA1->Val == rLit[11])       goto l_109;
        if (rA1->Val != rA2->Val)       goto l_107;
l_109:
        rA2 = (rA2 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 3;
        goto l_GLbrowse_41;
l_107:
        if (rA1->Val != rLit[12])       {aRet = ((Ptr) GLbrowse_42); goto lRet;}
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLbrowse_44);
        goto l_GLbrowse_41;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLbrowse_44() {      /* call_browse_43 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 != GInil)       {rSp += (Fix) 3; aRet = (rSp++)->Val; goto lRet;}
        rA1 = rSp->Val;
        rA2 = (rSp + 1)->Val;
        GIa3 = (rSp + 2)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLbrowse_46);
        {aRet = ((Ptr) GLbrowse_41); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLbrowse_46() {      /* call_browse_45 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 != GInil)       {rSp += (Fix) 3; aRet = (rSp++)->Val; goto lRet;}
        rA2 = (rSp + 1)->Val;
        GIa3 = (rSp + 2)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLbrowse_41); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLbrowse_42() {      /* 110 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1->Val >= (long) GIbcons)  {aRet = ((Ptr) GLbrowse_47); goto lRet;}
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLbrowse_49);
        {aRet = (GYbrowse[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLbrowse_49() {      /* call_browse_48 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (Ptr) ((unsigned char) *(((char *) (rA1->Val + 2)) + (Fix) 0));
        if (rA4 != (Ptr) 63)    {aRet = ((Ptr) GLbrowse_50); goto lRet;}
        rA1 = rSp->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLbrowse_52);
        {aRet = (GYbrowse[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_52() {      /* call_browse_51 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rNil = GInil;
        if (rA1 == rNil)        goto l_117;
        rA2 = rSp->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rA3 = (rSp + 2)->Val;
        rA2 = (rSp + 1)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLbrowse_41); goto lRet;}
l_117:
        rA1 = rSp->Val;
        (--rSp)->Val = (rA1 + 1)->Val;
        rA2 = (rSp + 2)->Val;
        (--rSp)->Val = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        rA1 = rA1->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rA2 = (rSp + 4)->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rA3 = rA1;
        rA2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLbrowse_41); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLbrowse_50() {      /* 115 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLbrowse_54);
        {aRet = (GYbrowse[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLbrowse_54() {      /* call_browse_53 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (Ptr) ((unsigned char) *(((char *) (rA1->Val + 2)) + (Fix) 0));
        if (rA4 != (Ptr) 42)    {aRet = ((Ptr) GLbrowse_55); goto lRet;}
        rA1 = rSp->Val;
        GIa2 = (rSp + 2)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLbrowse_57);
        {aRet = (GYbrowse[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_57() {      /* call_browse_56 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if (rA1 == GInil)       {aRet = ((Ptr) GLbrowse_58); goto lRet;}
        (--rSp)->Val = ((Ptr) GLbrowse_59);
        (--rSp)->Val = (rA1 + 1)->Val;
        rA4 = (rSp + 2)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        rA4 = (Ptr) 2;
        {aRet = (GYbrowse[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_59() {      /* 123 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp + 2)->Val;
        GIa2 = (rSp + 1)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLbrowse_41); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_58() {      /* 121 */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rA2 = (rSp + 1)->Val;
        rA1 = rNil;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        (--rSp)->Val = rNil;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        {aRet = ((Ptr) GLbrowse_60); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLbrowse_60() {      /* 124 */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rSp->Val == rNil)   {aRet = ((Ptr) GLbrowse_61); goto lRet;}
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = (rA1 + 1)->Val;
        rA2 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        rA2 = (rSp + 6)->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        GIa3 = rA1;
        rA2 = (rSp + 2)->Val;
        rA1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLbrowse_63);
        {aRet = ((Ptr) GLbrowse_41); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLbrowse_63() {      /* call_browse_62 */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 != rNil)        {aRet = ((Ptr) GLbrowse_61); goto lRet;}
        (--rSp)->Val = ((Ptr) GLbrowse_64);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA1 = (rSp + 3)->Val;
        rA2 = rNil;
        rA1 = rA1->Val;
        {register Ptr aux; aux = GIfcons;
                if (aux == rNil) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_gccons(); aux = GIfcons;}
                GIfcons = (aux + 1)->Val; aux->Val = rA1;
                (aux + 1)->Val = rA2; rA1 = aux;}
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYbrowse[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLbrowse_64() {      /* 126 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        rA4 = rSp->Val;
        rA3 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA3 + 1)->Val;
        rSp->Val = (rA4 + 1)->Val;
        (rSp + 2)->Val = GIa1;
        {aRet = ((Ptr) GLbrowse_60); goto lRet;}
  lRet: GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_61() {      /* 125 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rSp->Val != rNil)   goto l_127;
        rA1 = rNil;
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
l_127:
        rA1 = GYbrowse[5];
        rSp += (Fix) 6;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLbrowse_55() {      /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_47() {      /* 113 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if ((long) rA2->Val < (long) GIbcons)   {aRet = ((Ptr) GLbrowse_65); goto lRet;}
        rA2 = rA2->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLbrowse_67);
        {aRet = ((Ptr) GLbrowse_41); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLbrowse_67() {      /* call_browse_66 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA1 = rSp->Val;
        rA2 = (rSp + 1)->Val;
        GIa3 = (rSp + 2)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLbrowse_41); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLbrowse_65() {      /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_6() {       /* browse */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLbrowse_68);
        (--rSp)->Val = (Ptr) 100;
        (--rSp)->Val = (Ptr) 10;
        (--rSp)->Val = (Ptr) 4;
        (--rSp)->Val = GYbrowse[17];
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLbrowse_12); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_68() {      /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLbrowse_70);
        {aRet = ((Ptr) GLbrowse_36); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_70() {      /* call_browse_69 */
   {    register Ptr aRet;
        GIa2 = GYbrowse[18];
        {aRet = ((Ptr) GLbrowse_71); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLbrowse_71() {      /* investigate */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLbrowse_72); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_72() {      /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLbrowse_73); goto lRet;}
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLbrowse_74); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_74() {      /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYbrowse; rSp = GIsp; rA1 = GIa1;
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLbrowse_75); goto lRet;}
        rA1 = (rSp + 1)->Val;
        GIa2 = rLit[10];
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLbrowse_77);
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLbrowse_77() {      /* call_browse_76 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLbrowse_78); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbrowse_78() {      /* 105 */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rSp->Val == rNil)   {aRet = ((Ptr) GLbrowse_79); goto lRet;}
        rA1 = (rSp + 1)->Val;
        rA2 = rSp->Val;
        GIa3 = rNil;
        rA2 = rA2->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLbrowse_81);
        {aRet = ((Ptr) GLbrowse_41); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLbrowse_81() {      /* call_browse_80 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        {aRet = ((Ptr) GLbrowse_78); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_79() {      /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 1;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        {aRet = ((Ptr) GLbrowse_74); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_75() {      /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 1;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        {aRet = ((Ptr) GLbrowse_72); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLbrowse_73() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDbrowse_82() {      /* trace check-browse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYbrowse,20,21,22);
  lRet:  return (aRet);}}

static Ptr GDbrowse_83() {      /* trace meter-browse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYbrowse,23,21,22);
  lRet:  return (aRet);}}

static Ptr GDbrowse_84() {      /* trace test-browse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYbrowse,24,21,25);
  lRet:  return (aRet);}}

