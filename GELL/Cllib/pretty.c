/* GELL 15.26: source file for the module: "pretty" */
/*             translation done:           "Wed June 16 93 18:01:40 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "pretty.h" 

static Ptr GLpretty_1() {       /* #:pretty:p */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_2);
        (--rSp)->Val = ((Ptr) GLpretty_4);
        {aRet = (GYpretty[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_4() {       /* call_pretty_3 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpretty; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[1];
        (--rSp)->Val = GInil;
        GIa4 = (Ptr) 3;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_2() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil, rBcons;
        rLit = GYpretty; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if (rA1 == rNil)        goto l_102;
        if (rA1 == rLit[1])     goto l_102;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
l_102:
        if ((long) rSp->Val >= (long) rBcons)   goto l_105;
        (--rSp)->Val = ((Ptr) GXpopj1);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
l_105:
        rA4 = rSp->Val;
        if (rA4->Val != rLit[5])        {aRet = ((Ptr) GLpretty_5); goto lRet;}
        if ((long) (rA4 + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLpretty_5); goto lRet;}
        GIa3 = (rA4 + 1)->Val;
        if ((GIa3 + 1)->Val != rNil)    {aRet = ((Ptr) GLpretty_5); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpretty_6);
        (--rSp)->Val = (Ptr) 39;
        rA4 = (Ptr) 1;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_6() {       /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_7);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_7() {       /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_8);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_8() {       /* 112 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpretty; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_9);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpretty_10);
        (--rSp)->Val = rLit[9]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_10() {      /* 115 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpretty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpretty_11);
        (--rSp)->Val = rLit[10]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_11() {      /* 116 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLpretty_12);
        rA4 = (rSp + 6)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (GYpretty[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_12() {      /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj3);
        {aRet = ((Ptr) GLpretty_9); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_9() {       /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLpretty_13);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_13() {      /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpretty_14);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_14() {      /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_5() {       /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rBcons;
        rLit = GYpretty; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rBcons = GIbcons;
        rA4 = rSp->Val;
        if ((long) rA4->Val < (long) rBcons)    {aRet = ((Ptr) GLpretty_15); goto lRet;}
        GIa3 = rA4->Val;
        if (GIa3->Val != rLit[11])      {aRet = ((Ptr) GLpretty_15); goto lRet;}
        GIa2 = rA4->Val;
        if ((long) (GIa2 + 1)->Val < (long) rBcons)     {aRet = ((Ptr) GLpretty_15); goto lRet;}
        rA1 = rA4->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLpretty_17);
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_17() {      /* call_pretty_16 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLpretty_15); goto lRet;}
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpretty_19);
        {aRet = (GYpretty[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_19() {      /* call_pretty_18 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLpretty_15); goto lRet;}
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpretty_21);
        {aRet = (GYpretty[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_21() {      /* call_pretty_20 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLpretty_15); goto lRet;}
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLpretty_23);
        {aRet = (GYpretty[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_23() {      /* call_pretty_22 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((rA1 + 1)->Val != GInil)    {aRet = ((Ptr) GLpretty_15); goto lRet;}
        rA1 = rSp->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpretty_25);
        {aRet = (GYpretty[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_25() {      /* call_pretty_24 */
   {    register Ptr aRet, rSp, rA1, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if ((rA1 + 1)->Val != rNil)     {aRet = ((Ptr) GLpretty_15); goto lRet;}
        rA1 = rSp->Val;
        rA1 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        (--rSp)->Val = rA1;
        rA1 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = llrt_call_length (rA1, rBcons);
        rA4 = (rSp++)->Val;
        if (rA4 != rA1) {aRet = ((Ptr) GLpretty_15); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpretty_26);
        (--rSp)->Val = GYpretty[14];
        rA4 = (rSp + 2)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        GIa3 = (rSp + 2)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = (GIa3 + 1)->Val;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLpretty_27); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_27() {      /* 123 */
   {    register Ptr aRet, rSp, rA4, rBcons;
        rSp = GIsp; rA4 = GIa4; rBcons = GIbcons;
        if ((long) (rSp + 2)->Val < (long) rBcons)      {aRet = ((Ptr) GLpretty_28); goto lRet;}
        if ((long) (rSp + 1)->Val < (long) rBcons)      {aRet = ((Ptr) GLpretty_28); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpretty_29);
        rA4 = (rSp + 3)->Val;
        (rSp + 3)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (rSp + 3)->Val;
        (rSp + 3)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (GYpretty[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_29() {      /* 125 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rSp->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rSp->Val = rA1;
        {aRet = ((Ptr) GLpretty_27); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_28() {      /* 124 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA1 = rSp->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 3;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 3)->Val;
        rA4 = rA4->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        rA4 = (Ptr) 3;
        {aRet = (GYpretty[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_26() {      /* 122 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLpretty_1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_15() {      /* 120 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        if ((rA4->Val < GIbsymb) || (rA4->Val >= GIbcons))      {aRet = ((Ptr) GLpretty_30); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpretty_31);
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 1;
        {aRet = (GYpretty[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_31() {      /* 130 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = (Ptr) 3;
        rA1 = ((Fix) (rA1) != (Fix) (GIa2)) ? rA1 : GInil;
        {aRet = ((Ptr) GLpretty_32); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_30() {      /* 128 */
   {    register Ptr aRet;
        GIa1 = GYpretty[18];
        {aRet = ((Ptr) GLpretty_32); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_32() {      /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLpretty_33); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpretty_33);
        {aRet = ((Ptr) GLpretty_34); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_33() {      /* 127 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpretty; rSp = GIsp; rA4 = GIa4;
        if (GIa1 != GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        rA4 = rSp->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rLit[19]->Val;
        rLit[19]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[20]->Val;
        rLit[20]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[21];
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpretty_35);
        (--rSp)->Val = (Ptr) 40;
        rA4 = (Ptr) 1;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_35() {      /* 131 */
   {    register Ptr aRet;
        GIa1 = GYpretty[20]->Val;
        (--GIsp)->Val = ((Ptr) GLpretty_37);
        {aRet = ((Ptr) GLpretty_1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_37() {      /* call_pretty_36 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpretty; rSp = GIsp;
        if ((rLit[20]->Val < GIbsymb) || (rLit[20]->Val >= GIbcons))    goto l_133;
        (--rSp)->Val = ((Ptr) GLpretty_38);
        (--rSp)->Val = rLit[20]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
l_133:
        GIa1 = rLit[18];
        {aRet = ((Ptr) GLpretty_38); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_38() {      /* 134 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != (Ptr) 1)     goto l_136;
        (--rSp)->Val = ((Ptr) GLpretty_39);
        {aRet = ((Ptr) GLpretty_40); goto lRet;}
l_136:
        if (rA1 != (Ptr) 2)     {aRet = ((Ptr) GLpretty_41); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpretty_43);
        {aRet = ((Ptr) GLpretty_44); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_43() {      /* call_pretty_42 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_39);
        {aRet = ((Ptr) GLpretty_40); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_41() {      /* 137 */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 3)    {aRet = ((Ptr) GLpretty_45); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLpretty_47);
        {aRet = ((Ptr) GLpretty_44); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_47() {      /* call_pretty_46 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_49);
        {aRet = ((Ptr) GLpretty_44); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_49() {      /* call_pretty_48 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_39);
        {aRet = ((Ptr) GLpretty_40); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_45() {      /* 138 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != (Ptr) 4)     goto l_139;
        (--rSp)->Val = ((Ptr) GLpretty_39);
        {aRet = ((Ptr) GLpretty_50); goto lRet;}
l_139:
        if (rA1 != (Ptr) 5)     {aRet = ((Ptr) GLpretty_51); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpretty_53);
        {aRet = ((Ptr) GLpretty_44); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_53() {      /* call_pretty_52 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_39);
        {aRet = ((Ptr) GLpretty_50); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_51() {      /* 140 */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 6)    {aRet = ((Ptr) GLpretty_54); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLpretty_55);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_55() {      /* 142 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_56);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpretty_57);
        (--rSp)->Val = ((Ptr) GLpretty_58);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_58() {      /* 146 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 5));
        (--GIsp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_57() {      /* 147 */
   {    register Ptr aRet;
        if ((long) GYpretty[19]->Val < (long) GIbcons)  {aRet = ((Ptr) GLpretty_59); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLpretty_61);
        {aRet = ((Ptr) GLpretty_44); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_61() {      /* call_pretty_60 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_63);
        {aRet = ((Ptr) GLpretty_44); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_63() {      /* call_pretty_62 */
   {    register Ptr aRet, *rLit;
        rLit = GYpretty;
        if (rLit[19]->Val == GInil)     {aRet = ((Ptr) GLpretty_57); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLpretty_57);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_59() {      /* 148 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = GInil;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa4;
        GIa3 = ((Ptr) GLpretty_64);
        {aRet = ((Ptr) GLpretty_56); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_56() {      /* 143 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLpretty_65);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_65() {      /* 152 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_64() {      /* 144 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLpretty_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_54() {      /* 141 */
   {    register Ptr aRet;
        if (GIa1 != (Ptr) 7)    {aRet = ((Ptr) GLpretty_66); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLpretty_68);
        {aRet = ((Ptr) GLpretty_44); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_68() {      /* call_pretty_67 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_39);
        {aRet = ((Ptr) GLpretty_69); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_66() {      /* 153 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_39);
        {aRet = ((Ptr) GLpretty_40); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_39() {      /* 132 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_71);
        {aRet = ((Ptr) GLpretty_72); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_71() {      /* call_pretty_70 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpretty; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[20]->Val = (rSp + 6)->Val;
        rLit[19]->Val = (rSp + 7)->Val;
        rSp += (Fix) 10;
l_126:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_72() {      /* #:pretty:pdot */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpretty; rSp = GIsp;
        if (rLit[19]->Val == GInil)     {aRet = ((Ptr) GLpretty_73); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpretty_74);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_74() {      /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpretty_75);
        (--rSp)->Val = (Ptr) 46;
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_75() {      /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpretty_76);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_76() {      /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpretty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpretty_73);
        (--rSp)->Val = rLit[19]->Val;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_73() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = (Ptr) 41;
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_44() {      /* #:pretty:p1 */
   {    register Ptr aRet, *rLit;
        rLit = GYpretty;
        if ((long) rLit[19]->Val < (long) GIbcons)      {aRet = ((Ptr) GLpretty_77); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLpretty_78);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_78() {      /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_79);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpretty_80);
        GIa1 = GYpretty[20]->Val;
        (--rSp)->Val = ((Ptr) GLpretty_82);
        {aRet = ((Ptr) GLpretty_83); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_82() {      /* call_pretty_81 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_80() {      /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpretty_84);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_84() {      /* 107 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYpretty; rA1 = GIa1;
        rA1 = rLit[19]->Val;
        rLit[19]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLpretty_86);
        {aRet = ((Ptr) GLpretty_1); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_86() {      /* call_pretty_85 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GXpopj1);
        {aRet = ((Ptr) GLpretty_79); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_79() {      /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLpretty_87);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_87() {      /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_77() {      /* 101 */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_40() {      /* #:pretty:progn */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_88);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_88() {      /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_89);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpretty_90);
        GIa1 = GYpretty[20]->Val;
        (--rSp)->Val = ((Ptr) GLpretty_92);
        {aRet = ((Ptr) GLpretty_83); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_92() {      /* call_pretty_91 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_90() {      /* 105 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYpretty; rA1 = GIa1;
        if ((long) rLit[19]->Val < (long) GIbcons)      {aRet = ((Ptr) GLpretty_93); goto lRet;}
        rA1 = rLit[19]->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLpretty_95);
        {aRet = (rLit[24] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_95() {      /* call_pretty_94 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      goto l_107;
        (--rSp)->Val = ((Ptr) GLpretty_90);
        {aRet = ((Ptr) GLpretty_44); goto lRet;}
l_107:
        (--rSp)->Val = ((Ptr) GLpretty_96);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_96() {      /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_97);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_97() {      /* 112 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        if ((Fix) (rA4) >= (Fix) (GIa1))        {aRet = ((Ptr) GLpretty_98); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpretty_99);
        (--rSp)->Val = ((Ptr) GLpretty_100);
        rA4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_100() {     /* 114 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_98() {      /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_99);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[23] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_99() {      /* 110 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYpretty; rA1 = GIa1;
        rA1 = rLit[19]->Val;
        rLit[19]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLpretty_90);
        {aRet = ((Ptr) GLpretty_1); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_93() {      /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = GInil;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa4;
        GIa3 = ((Ptr) GXpopj1);
        {aRet = ((Ptr) GLpretty_89); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_89() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLpretty_101);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_101() {     /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_69() {      /* #:pretty:tagbody */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_102);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_102() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_103);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpretty_104);
        GIa1 = GYpretty[20]->Val;
        (--rSp)->Val = ((Ptr) GLpretty_106);
        {aRet = ((Ptr) GLpretty_83); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_106() {     /* call_pretty_105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_104() {     /* 105 */
   {    register Ptr aRet, *rLit, rA4, rBcons;
        rLit = GYpretty; rA4 = GIa4; rBcons = GIbcons;
        if ((long) rLit[19]->Val < (long) rBcons)       {aRet = ((Ptr) GLpretty_107); goto lRet;}
        rA4 = rLit[19]->Val;
        if ((long) rA4->Val >= (long) rBcons)   {aRet = ((Ptr) GLpretty_108); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLpretty_109);
        rA4 = (Ptr) 0;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_109() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_110);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpretty_111);
        (--rSp)->Val = ((Ptr) GLpretty_112);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_112() {     /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_113);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_113() {     /* 114 */
   {    register Ptr aRet;
        GIa2 = (Ptr) 7;
        (--GIsp)->Val = ((Ptr) GLpretty_115);
        {aRet = (GYpretty[26] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_115() {     /* call_pretty_114 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_111() {     /* 112 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_116);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[23] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_116() {     /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_118);
        {aRet = ((Ptr) GLpretty_44); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_118() {     /* call_pretty_117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLpretty_119);
        {aRet = ((Ptr) GLpretty_110); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_110() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLpretty_120);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_120() {     /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_119() {     /* 111 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLpretty_104); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_108() {     /* 107 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_121);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_121() {     /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_122);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_122() {     /* 120 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        if ((Fix) (rA4) >= (Fix) (GIa1))        {aRet = ((Ptr) GLpretty_123); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpretty_124);
        (--rSp)->Val = ((Ptr) GLpretty_125);
        rA4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_125() {     /* 122 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_123() {     /* 117 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_124);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[23] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_124() {     /* 118 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYpretty; rA1 = GIa1;
        rA1 = rLit[19]->Val;
        rLit[19]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLpretty_104);
        {aRet = ((Ptr) GLpretty_1); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_107() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = GInil;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa4;
        GIa3 = ((Ptr) GXpopj1);
        {aRet = ((Ptr) GLpretty_103); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_103() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLpretty_126);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_126() {     /* 124 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_50() {      /* #:pretty:cond */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_127);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_127() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_128);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpretty_129);
        (--rSp)->Val = ((Ptr) GLpretty_130);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_130() {     /* 105 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 3));
        (--GIsp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_129() {     /* 106 */
   {    register Ptr aRet, *rLit;
        rLit = GYpretty;
        if ((long) rLit[19]->Val < (long) GIbcons)      {aRet = ((Ptr) GLpretty_131); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLpretty_132);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_132() {     /* 108 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = GYpretty[19]->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLpretty_134);
        {aRet = ((Ptr) GLpretty_34); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_134() {     /* call_pretty_133 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpretty; rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      goto l_109;
        rA4 = rLit[19]->Val;
        rLit[19]->Val = (rA4 + 1)->Val;
        {aRet = ((Ptr) GLpretty_129); goto lRet;}
l_109:
        rA4 = rLit[19]->Val;
        rLit[19]->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = rLit[20]->Val;
        rLit[20]->Val = (rSp + 1)->Val;
        (--rSp)->Val = rLit[19]->Val;
        rLit[19]->Val = (rSp + 3)->Val;
        (--rSp)->Val = (Ptr) 2;
        (--rSp)->Val = rLit[27];
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpretty_135);
        (--rSp)->Val = (Ptr) 40;
        rA4 = (Ptr) 1;
        {aRet = (rLit[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_135() {     /* 111 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYpretty; rA1 = GIa1;
        if ((long) rLit[19]->Val < (long) GIbcons)      {aRet = ((Ptr) GLpretty_136); goto lRet;}
        rA1 = rLit[19]->Val;
        rLit[19]->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--GIsp)->Val = ((Ptr) GLpretty_136);
        {aRet = ((Ptr) GLpretty_1); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_136() {     /* 113 */
   {    register Ptr aRet;
        if (GYpretty[19]->Val == GInil) {aRet = ((Ptr) GLpretty_137); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLpretty_137);
        {aRet = ((Ptr) GLpretty_40); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_137() {     /* 115 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_139);
        {aRet = ((Ptr) GLpretty_72); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_139() {     /* call_pretty_138 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpretty; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[19]->Val = (rSp + 6)->Val;
        rLit[20]->Val = (rSp + 7)->Val;
        rSp += (Fix) 10;
        {aRet = ((Ptr) GLpretty_129); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_131() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = GInil;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa4;
        GIa3 = ((Ptr) GXpopj1);
        {aRet = ((Ptr) GLpretty_128); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_128() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLpretty_140);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_140() {     /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_83() {      /* #:pretty:lmargin */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_141);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_141() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpretty_143);
        {aRet = (GYpretty[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_143() {     /* call_pretty_142 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      goto l_102;
        rA4 = (Ptr) 1;
        {aRet = ((Ptr) GLpretty_144); goto lRet;}
l_102:
        if (((rSp + 1)->Val < GIbvect) || ((rSp + 1)->Val >= GIbstrg))  goto l_104;
        rA4 = (Ptr) 1;
        {aRet = ((Ptr) GLpretty_144); goto lRet;}
l_104:
        (--rSp)->Val = ((Ptr) GLpretty_145);
        rA4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_145() {     /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpretty; rSp = GIsp; rA4 = GIa4;
        rA4 = rLit[28]->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) / (Fix) 2));
        if ((Fix) (GIa1) >= (Fix) (rA4))        {aRet = ((Ptr) GLpretty_146); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpretty_148);
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_148() {     /* call_pretty_147 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((Fix) (GIa1) >= (Fix) 8)    {aRet = ((Ptr) GLpretty_149); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpretty_151);
        {aRet = (GYpretty[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_151() {     /* call_pretty_150 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 2));
        GIa4 = rA1;
        {aRet = ((Ptr) GLpretty_144); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_149() {     /* 109 */
   {    register Ptr aRet;
        GIa4 = (Ptr) 4;
        {aRet = ((Ptr) GLpretty_144); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_146() {     /* 106 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_152);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_152() {     /* 113 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpretty; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa3 = (Ptr) 4;
        GIa2 = (Ptr) 3;
        GIa1 = rLit[28]->Val;
        (--rSp)->Val = ((Ptr) GLpretty_154);
        {aRet = (rLit[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_154() {     /* call_pretty_153 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = (GIsp++)->Val;
        if ((Fix) (rA4) >= (Fix) (GIa1))        goto l_111;
        rA4 = (Ptr) 2;
        {aRet = ((Ptr) GLpretty_144); goto lRet;}
l_111:
        rA4 = (Ptr) 0;
        {aRet = ((Ptr) GLpretty_144); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_144() {     /* 103 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        rA3 = (rSp++)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (GIa4)));
        GIa1 = rA3;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLpretty_34() {      /* #:pretty:inlinep */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_155);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_155() {     /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpretty; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLpretty_156);
        (--rSp)->Val = rLit[31];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        GIa2 = rLit[32]->Val;
        rA1 = rLit[1];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rLit[32]->Val;
        rLit[32]->Val = rA1;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[33];
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpretty_157);
        {register Ptr aux;
                aux = (rSp + 13)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_157() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpretty; rSp = GIsp;
        GIa1 = rLit[18];
        GIdlink = (rSp + 1)->Val;
        rLit[32]->Val = (rSp + 6)->Val;
        rSp += (Fix) 7;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLpretty_156); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_156() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpretty; rSp = GIsp;
        if (GIa1 == GInil)      goto l_102;
        GIa1 = rLit[18];
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_102:
        (--rSp)->Val = ((Ptr) GLpretty_158);
        (--rSp)->Val = ((Ptr) GLpretty_159);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_159() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 3;
        {aRet = (GYpretty[35] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_158() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpretty_160);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_160() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_161() {     /* #:pretty:eol */
   {    register Ptr aRet, *rLit;
        rLit = GYpretty;
        GIa1 = GInil;
        GIa2 = rLit[31];
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_162() {     /* pprint */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_163);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_163() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_164);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpretty_165);
        (--rSp)->Val = ((Ptr) GLpretty_166);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_166() {     /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_165() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpretty; rSp = GIsp; rA4 = GIa4;
        rA4 = rLit[37]->Val;
        if (rA4 != GInil)       goto l_106;
        rA4 = rLit[18];
l_106:
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLpretty_167);
        rA4 = (Ptr) 0;
        {aRet = (rLit[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_167() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_168);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_168() {     /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpretty; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        (--rSp)->Val = rLit[18];
        (--rSp)->Val = GInil;
        (--rSp)->Val = rLit[28]->Val;
        rLit[28]->Val = rA4;
        (--rSp)->Val = rLit[39]->Val;
        rLit[39]->Val = (rSp + 3)->Val;
        (--rSp)->Val = rLit[37]->Val;
        rLit[37]->Val = (rSp + 5)->Val;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[40];
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = (rSp + 16)->Val;
        (--rSp)->Val = ((Ptr) GLpretty_170);
        {aRet = ((Ptr) GLpretty_1); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_170() {     /* call_pretty_169 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpretty; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[37]->Val = (rSp + 6)->Val;
        rLit[39]->Val = (rSp + 7)->Val;
        rLit[28]->Val = (rSp + 8)->Val;
        rSp += (Fix) 12;
        (--rSp)->Val = ((Ptr) GLpretty_171);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_171() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLpretty_172);
        {aRet = ((Ptr) GLpretty_164); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_164() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLpretty_173);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_173() {     /* 110 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_172() {     /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_174() {     /* pprin */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_175);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[38] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_175() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_176);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_176() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpretty; rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        (--rSp)->Val = rLit[28]->Val;
        rLit[28]->Val = rA4;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[41];
        (--rSp)->Val = rLit[11];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLpretty_178);
        {aRet = ((Ptr) GLpretty_1); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_178() {     /* call_pretty_177 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYpretty[28]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_179() {     /* pretty */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLpretty_180); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_180() {     /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil, rBcons;
        rLit = GYpretty; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        if ((long) rSp->Val < (long) rBcons)    {aRet = ((Ptr) GLpretty_181); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa2 = rLit[42]->Val;
        rA1 = rSp->Val;
        rA1 = llrt_call_memq (rA1, GIa2, rBcons, rNil);
        if (rA1 == rNil)        {aRet = ((Ptr) GLpretty_182); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpretty_183);
        rA4 = (Ptr) 0;
        {aRet = (rLit[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_183() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpretty; rSp = GIsp; rA1 = GIa1;
        if (rA1 == rLit[5])     goto l_108;
        if (rA1 != rLit[44])    goto l_107;
l_108:
        (--rSp)->Val = ((Ptr) GLpretty_184);
        (--rSp)->Val = rLit[45];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[46];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
l_107:
        if (rA1 == rLit[5])     goto l_111;
        if (rA1 != rLit[48])    {aRet = ((Ptr) GLpretty_184); goto lRet;}
l_111:
        (--rSp)->Val = ((Ptr) GLpretty_184);
        (--rSp)->Val = rLit[45];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[49];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_184() {     /* 105 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_185);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[23] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_185() {     /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYpretty[50];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpretty_187);
        {aRet = ((Ptr) GLpretty_188); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_187() {     /* call_pretty_186 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_189);
        {aRet = (GYpretty[51] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_182() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpretty; rSp = GIsp;
        GIa2 = rLit[52];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpretty_191);
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_191() {     /* call_pretty_190 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLpretty_192); goto lRet;}
        GIa2 = GYpretty[52];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpretty_194);
        {aRet = ((Ptr) GLpretty_188); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_194() {     /* call_pretty_193 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_189);
        {aRet = (GYpretty[51] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_192() {     /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpretty_196);
        {aRet = (GYpretty[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_196() {     /* call_pretty_195 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_189);
        {aRet = (GYpretty[51] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_189() {     /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpretty_197);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[23] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_197() {     /* 116 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLpretty_180); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_181() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_188() {     /* #:pretty:get-plist-def */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLpretty_199);
        {aRet = (GYpretty[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_199() {     /* call_pretty_198 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1->Val;
        GIa2 = (rSp + 3)->Val;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLpretty_201);
        {aRet = (GYpretty[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_201() {     /* call_pretty_200 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (GIa1 + 1)->Val;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 2;
        {aRet = (GYpretty[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_202() {     /* prettyf */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpretty_203);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[56] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_203() {     /* 101 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLpretty_204);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpretty_205);
        rA1 = (rSp + 5)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLpretty_207);
        {aRet = (GYpretty[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_207() {     /* call_pretty_206 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[56] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_205() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpretty; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLpretty_208);
        (--rSp)->Val = rLit[1];
        rA4 = (rSp + 6)->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        rA4 = (Ptr) 2;
        {aRet = (rLit[58] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpretty_208() {     /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpretty_209);
        (--rSp)->Val = ((Ptr) GLpretty_210);
        GIa4 = (Ptr) 0;
        {aRet = (GYpretty[56] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_210() {     /* 107 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[59] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_209() {     /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        GIa4 = GIa1->Val;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa4;
        GIa3 = ((Ptr) GXpopj2);
        {aRet = ((Ptr) GLpretty_204); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_204() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLpretty_211);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpretty[56] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_211() {     /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_212() {     /* prettyend */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpretty; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpretty_213);
        (--rSp)->Val = rLit[1];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[60] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpretty_213() {     /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLpretty_214); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_214() {     /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpretty; rSp = GIsp; rA1 = GIa1;
        if ((long) rSp->Val < (long) GIbcons)   goto l_103;
        rA1 = rSp->Val;
        rSp->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLpretty_214);
        {aRet = (rLit[61] + 2)->Val; goto lRet;}
l_103:
        rSp += (Fix) 1;
        rA1 = rLit[1];
        (--rSp)->Val = ((Ptr) GLpretty_216);
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpretty_216() {     /* call_pretty_215 */
   {    register Ptr aRet, *rLit;
        rLit = GYpretty;
        GIa1 = rLit[63];
        (--GIsp)->Val = ((Ptr) GLpretty_218);
        {aRet = (rLit[64] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpretty_218() {     /* call_pretty_217 */
   {    register Ptr aRet;
        GIa1 = GYpretty[65];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDpretty_219() {     /* trace #:pretty:eol */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpretty,66,67,68);
  lRet:  return (aRet);}}

static Ptr GDpretty_220() {     /* trace pprint */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpretty,51,67,69);
  lRet:  return (aRet);}}

static Ptr GDpretty_221() {     /* trace pprin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpretty,70,67,69);
  lRet:  return (aRet);}}

static Ptr GDpretty_222() {     /* trace pretty */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpretty,1,67,71);
  lRet:  return (aRet);}}

static Ptr GDpretty_223() {     /* trace prettyf */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpretty,72,67,71);
  lRet:  return (aRet);}}

static Ptr GDpretty_224() {     /* trace prettyend */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpretty,65,67,68);
  lRet:  return (aRet);}}

