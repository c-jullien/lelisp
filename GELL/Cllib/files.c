/* GELL 15.26: source file for the module: "files" */
/*             translation done:           "Wed June 16 93 18:00:33 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "files.h" 

static Ptr GLfiles_1() {        /* featurep */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        GIa2 = GYfiles[0]->Val;
        rA1 = llrt_call_memq (rA1, GIa2, GIbcons, rNil);
        if (rA1 == rNil)        goto l_101;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_2() {        /* add-feature */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLfiles_4);
        {aRet = (GYfiles[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_4() {        /* call_files_3 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYfiles; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_101;
        GIa2 = rLit[0]->Val;
        rA1 = rSp->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        rLit[0]->Val = rA1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_5() {        /* rem-feature */
   {    register Ptr aRet, *rLit;
        rLit = GYfiles;
        GIa2 = rLit[0]->Val;
        (--GIsp)->Val = ((Ptr) GLfiles_7);
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_7() {        /* call_files_6 */
   {    register Ptr aRet;
        GYfiles[0]->Val = GIa1;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_8() {        /* list-features */
   {    register Ptr aRet, *rLit;
        rLit = GYfiles;
        GIa1 = rLit[0]->Val;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_9() {        /* probepathf */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLfiles_11);
        {aRet = (GYfiles[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_11() {       /* call_files_10 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        rSp->Val = GIa1;
        (--rSp)->Val = rLit[5]->Val;
        GIa2 = rLit[6]->Val;
        (--rSp)->Val = ((Ptr) GLfiles_13);
        {aRet = ((Ptr) GLfiles_14); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_13() {       /* call_files_12 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLfiles_16);
        {aRet = (GYfiles[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_16() {       /* call_files_15 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        if (GIa1 != GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa2 = rSp->Val;
        GIa1 = rLit[5]->Val;
        rSp += (Fix) 1;
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_17() {       /* probepathm */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        (--rSp)->Val = rLit[5]->Val;
        (--rSp)->Val = ((Ptr) GLfiles_19);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_19() {       /* call_files_18 */
   {    register Ptr aRet;
        GIa2 = GYfiles[8]->Val;
        (--GIsp)->Val = ((Ptr) GLfiles_21);
        {aRet = ((Ptr) GLfiles_14); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_21() {       /* call_files_20 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        GIa1 = (GIsp++)->Val;
        {aRet = (GYfiles[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_22() {       /* probepatho */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        (--rSp)->Val = rLit[5]->Val;
        (--rSp)->Val = ((Ptr) GLfiles_24);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_24() {       /* call_files_23 */
   {    register Ptr aRet;
        GIa2 = GYfiles[9]->Val;
        (--GIsp)->Val = ((Ptr) GLfiles_26);
        {aRet = ((Ptr) GLfiles_14); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_26() {       /* call_files_25 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        GIa1 = (GIsp++)->Val;
        {aRet = (GYfiles[7] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_14() {       /* suffixe */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLfiles_27);
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYfiles[10] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_27() {       /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLfiles_29);
        {aRet = (GYfiles[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_29() {       /* call_files_28 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLfiles_31);
        {aRet = (GYfiles[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_31() {       /* call_files_30 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIa1)));
        GIa3 = (rSp++)->Val;
        if (GIa3 != rA4)        goto l_101;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GXpopj2);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (GYfiles[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLfiles_32() {       /* search-in-path */
   {    register Ptr aRet, rSp, rA1, rA2, rBsymb;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBsymb = GIbsymb;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLfiles_33); goto lRet;}
        if ((rA2 >= GIbstrg) && (rA2 < rBsymb)) goto l_105;
        if ((rA2 < rBsymb) || (rA2 >= GIbcons)) goto l_103;
l_105:
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLfiles_34); goto lRet;}
l_103:
        rA1 = rA2;
        (--rSp)->Val = ((Ptr) GLfiles_36);
        {aRet = (GYfiles[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_36() {       /* call_files_35 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYfiles; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_106;
        GIa2 = (rSp + 1)->Val;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLfiles_37); goto lRet;}
l_106:
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[14];
        rA1 = rLit[7];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_33() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_34() {       /* #:files:sip-string */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rBsymb, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLfiles_38); goto lRet;}
        if ((long) rA1 < (long) rBcons) goto l_103;
        rA4 = rA1->Val;
        goto l_104;
l_103:
        rA4 = rA1;
l_104:
        (--rSp)->Val = rA4;
        if ((rA4 >= GIbstrg) && (rA4 < rBsymb)) goto l_107;
        if ((rA4 < rBsymb) || (rA4 >= rBcons))  {aRet = ((Ptr) GLfiles_39); goto lRet;}
l_107:
        (--rSp)->Val = ((Ptr) GLfiles_40);
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA2;
        rA4 = (Ptr) 2;
        {aRet = (GYfiles[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLfiles_40() {       /* 108 */
   {    register Ptr aRet;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLfiles_41); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_39() {       /* 105 */
   {    register Ptr aRet;
        GIa1 = GIa4;
        (--GIsp)->Val = ((Ptr) GLfiles_43);
        {aRet = (GYfiles[13] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_43() {       /* call_files_42 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLfiles_44); goto lRet;}
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLfiles_46);
        {aRet = (GYfiles[15] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_46() {       /* call_files_45 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLfiles_48);
        {aRet = (GYfiles[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_48() {       /* call_files_47 */
   {    register Ptr aRet;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLfiles_41); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_44() {       /* 109 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYfiles; rA1 = GIa1;
        GIa3 = GIsp->Val;
        GIa2 = rLit[14];
        rA1 = rLit[7];
        GIa1 = rA1; rA1 = llrt_call_error ();
        GIa3 = rA1;
        {aRet = ((Ptr) GLfiles_41); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_41() {       /* 106 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        (--rSp)->Val = rA3;
        GIa1 = rA3;
        (--rSp)->Val = ((Ptr) GLfiles_50);
        {aRet = (GYfiles[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_50() {       /* call_files_49 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_111;
        rA1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_111:
        if ((long) (rSp + 2)->Val < (long) GIbcons)     goto l_113;
        rA1 = (rSp + 2)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLfiles_34); goto lRet;}
l_113:
        rA1 = rNil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_38() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_37() {       /* #:files:sip-path */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rBsymb, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLfiles_51); goto lRet;}
        if ((long) rA1 < (long) rBcons) goto l_103;
        rA4 = rA1->Val;
        goto l_104;
l_103:
        rA4 = rA1;
l_104:
        (--rSp)->Val = rA4;
        if ((rA4 >= GIbstrg) && (rA4 < rBsymb)) goto l_107;
        if ((rA4 < rBsymb) || (rA4 >= rBcons))  {aRet = ((Ptr) GLfiles_52); goto lRet;}
l_107:
        (--rSp)->Val = ((Ptr) GLfiles_53);
        (--rSp)->Val = rA4;
        rA1 = rA2;
        (--rSp)->Val = ((Ptr) GLfiles_55);
        {aRet = (GYfiles[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLfiles_55() {       /* call_files_54 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYfiles[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_53() {       /* 108 */
   {    register Ptr aRet;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLfiles_56); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_52() {       /* 105 */
   {    register Ptr aRet;
        GIa1 = GIa4;
        (--GIsp)->Val = ((Ptr) GLfiles_58);
        {aRet = (GYfiles[13] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_58() {       /* call_files_57 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLfiles_59); goto lRet;}
        GIa2 = (rSp + 2)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLfiles_61);
        {aRet = (GYfiles[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_61() {       /* call_files_60 */
   {    register Ptr aRet;
        GIa3 = GIa1;
        {aRet = ((Ptr) GLfiles_56); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_59() {       /* 109 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYfiles; rA1 = GIa1;
        GIa3 = GIsp->Val;
        GIa2 = rLit[14];
        rA1 = rLit[7];
        GIa1 = rA1; rA1 = llrt_call_error ();
        GIa3 = rA1;
        {aRet = ((Ptr) GLfiles_56); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_56() {       /* 106 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        (--rSp)->Val = rA3;
        GIa1 = rA3;
        (--rSp)->Val = ((Ptr) GLfiles_63);
        {aRet = (GYfiles[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_63() {       /* call_files_62 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_111;
        rA1 = rSp->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
l_111:
        if ((long) (rSp + 2)->Val < (long) GIbcons)     goto l_113;
        rA1 = (rSp + 2)->Val;
        GIa2 = (rSp + 3)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLfiles_37); goto lRet;}
l_113:
        rA1 = rNil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_51() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_64() {       /* load */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        GIa2 = GIa4->Val;
        {aRet = (GYfiles[19] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_65() {       /* loadfile */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLfiles_67);
        {aRet = (GYfiles[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_67() {       /* call_files_66 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYfiles; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_101;
        GIa3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[19];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = rLit[21]->Val;
        (--rSp)->Val = ((Ptr) GLfiles_68);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_68() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GInil;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[23]->Val;
        rLit[23]->Val = (rSp + 2)->Val;
        (--rSp)->Val = rLit[24]->Val;
        rLit[24]->Val = (rSp + 4)->Val;
        (--rSp)->Val = rLit[25]->Val;
        rLit[25]->Val = (rSp + 6)->Val;
        (--rSp)->Val = rLit[21]->Val;
        rLit[21]->Val = (rSp + 8)->Val;
        (--rSp)->Val = (Ptr) 4;
        (--rSp)->Val = rLit[26];
        (--rSp)->Val = rLit[27];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLfiles_69);
        GIa1 = (rSp + 16)->Val;
        (--rSp)->Val = ((Ptr) GLfiles_71);
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_71() {       /* call_files_70 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYfiles[22] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_69() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfiles_72);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLfiles_73);
        (--rSp)->Val = GYfiles[29];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        {aRet = ((Ptr) GLfiles_74); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_74() {       /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfiles_74);
        (--rSp)->Val = ((Ptr) GLfiles_76);
        {aRet = (GYfiles[30] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_76() {       /* call_files_75 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYfiles[31] + 2)->Val; goto lRet;}
l_109:
        GIa1 = GInil;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLfiles_73); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_73() {       /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLfiles_77);
        {aRet = ((Ptr) GLfiles_72); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_72() {       /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLfiles_78);
        GIa4 = (Ptr) 0;
        {aRet = (GYfiles[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_78() {       /* 111 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLfiles_79); goto lRet;}
        (--rSp)->Val = ((Ptr) GLfiles_79);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (GYfiles[32] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_79() {       /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLfiles_80);
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYfiles[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_80() {       /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_77() {       /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[21]->Val = (rSp + 6)->Val;
        rLit[25]->Val = (rSp + 7)->Val;
        rLit[24]->Val = (rSp + 8)->Val;
        rLit[23]->Val = (rSp + 9)->Val;
        rSp += (Fix) 15;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_81() {       /* libload */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        GIa2 = GIa4;
        {aRet = (GYfiles[33] + 2)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_82() {       /* libloadfile */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLfiles_84);
        {aRet = (GYfiles[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_84() {       /* call_files_83 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYfiles; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_101;
        GIa3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[33];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa2 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_85() {       /* loadobjectfile */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLfiles_87);
        {aRet = (GYfiles[35] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_87() {       /* call_files_86 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYfiles; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_101;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[20];
        rA1 = rLit[36];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = rLit[37]->Val;
        rLit[37]->Val = rLit[36];
        GIa2 = rLit[38];
        (--rSp)->Val = ((Ptr) GLfiles_89);
        {aRet = (rLit[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_89() {       /* call_files_88 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        if (rLit[37]->Val != rLit[36])  goto l_104;
        rLit[37]->Val = rSp->Val;
l_104:
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_90() {       /* autoload */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLfiles_91); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_91() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYfiles; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLfiles_92); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLfiles_93);
        (--rSp)->Val = rLit[39];
        (--rSp)->Val = ((Ptr) GLfiles_94);
        (--rSp)->Val = rLit[40];
        (--rSp)->Val = ((Ptr) GLfiles_95);
        (--rSp)->Val = rLit[41];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLfiles_95() {       /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[43];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_94() {       /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYfiles[42] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_93() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = rLit[45];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLfiles_97);
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_97() {       /* call_files_96 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        GIa3 = rLit[47];
        GIa2 = (rSp + 2)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLfiles_99);
        {aRet = (rLit[48] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_99() {       /* call_files_98 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLfiles_91); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_92() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_100() {      /* libautoload */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa4 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLfiles_101); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_101() {      /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYfiles; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLfiles_102); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLfiles_103);
        (--rSp)->Val = rLit[39];
        (--rSp)->Val = ((Ptr) GLfiles_104);
        (--rSp)->Val = rLit[40];
        (--rSp)->Val = ((Ptr) GLfiles_105);
        (--rSp)->Val = rLit[41];
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (rLit[42] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLfiles_105() {      /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[49];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_104() {      /* 104 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYfiles[42] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_103() {      /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        GIa3 = GIa1;
        GIa2 = rLit[45];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLfiles_107);
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_107() {      /* call_files_106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        GIa3 = rLit[47];
        GIa2 = (rSp + 2)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLfiles_109);
        {aRet = (rLit[48] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_109() {      /* call_files_108 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLfiles_101); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_102() {      /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_110() {      /* #:system:std-autoload */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        (--rSp)->Val = rLit[50]->Val;
        rLit[50]->Val = GIa3;
        (--rSp)->Val = rLit[39]->Val;
        rLit[39]->Val = GIa2;
        (--rSp)->Val = rLit[51]->Val;
        rLit[51]->Val = GIa1;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[52];
        (--rSp)->Val = ((Ptr) GLfiles_110);
        (--rSp)->Val = GIllink;
        GIllink = GInil;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLfiles_112);
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_112() {      /* call_files_111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = rLit[51]->Val;
        (--rSp)->Val = ((Ptr) GLfiles_114);
        {aRet = (rLit[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_114() {      /* call_files_113 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = rLit[47];
        GIa1 = rLit[51]->Val;
        (--rSp)->Val = ((Ptr) GLfiles_116);
        {aRet = (rLit[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_116() {      /* call_files_115 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYfiles; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rLit[56]->Val;
        rLit[56]->Val = rA1;
        (--rSp)->Val = rLit[57]->Val;
        rLit[57]->Val = (rSp + 2)->Val;
        (--rSp)->Val = rLit[58]->Val;
        rLit[58]->Val = (rSp + 4)->Val;
        (--rSp)->Val = (Ptr) 3;
        (--rSp)->Val = rLit[59];
        (--rSp)->Val = rLit[27];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        if (rA1 != GInil)       goto l_101;
        GIa3 = rLit[51]->Val;
        GIa2 = rLit[20];
        rA1 = rLit[47];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLfiles_117); goto lRet;}
l_101:
        (--rSp)->Val = rLit[38];
        (--rSp)->Val = rLit[60]->Val;
        rLit[60]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[61];
        (--rSp)->Val = rLit[27];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLfiles_118);
        (--rSp)->Val = rLit[62];
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind3);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLfiles_119);
        (--rSp)->Val = rLit[50]->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[38];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[63] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_119() {      /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIsp = rSp; GIa1 = llrt_cons (GIa1, GInil);
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLfiles_118); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_118() {      /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[60]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLfiles_120); goto lRet;}
        (--rSp)->Val = rLit[58]->Val;
        GIa1 = rLit[51]->Val;
        (--rSp)->Val = ((Ptr) GLfiles_122);
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_122() {      /* call_files_121 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        GIa4 = (rSp++)->Val;
        if (GIa4 == GIa1)       {aRet = ((Ptr) GLfiles_120); goto lRet;}
        GIa2 = rLit[47];
        GIa1 = rLit[51]->Val;
        (--rSp)->Val = ((Ptr) GLfiles_124);
        {aRet = (rLit[64] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfiles_124() {      /* call_files_123 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYfiles; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = ((Ptr) GLfiles_117);
        GIa2 = rLit[39]->Val;
        rA1 = rLit[51]->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 1;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfiles_120() {      /* 103 */
   {    register Ptr aRet, *rLit;
        rLit = GYfiles;
        GIa3 = rLit[58]->Val;
        GIa2 = rLit[57]->Val;
        GIa1 = rLit[51]->Val;
        (--GIsp)->Val = ((Ptr) GLfiles_126);
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_126() {      /* call_files_125 */
   {    register Ptr aRet, *rLit;
        rLit = GYfiles;
        GIa3 = rLit[51]->Val;
        GIa2 = rLit[65];
        GIa1 = rLit[47];
         GIa1 = llrt_call_error ();
        {aRet = ((Ptr) GLfiles_117); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfiles_117() {      /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYfiles; rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rLit[58]->Val = (rSp + 6)->Val;
        rLit[57]->Val = (rSp + 7)->Val;
        rLit[56]->Val = (rSp + 8)->Val;
        rSp += (Fix) 11;
        GIdlink = (rSp + 1)->Val;
        GIllink = (rSp + 2)->Val;
        rLit[51]->Val = (rSp + 6)->Val;
        rLit[39]->Val = (rSp + 7)->Val;
        rLit[50]->Val = (rSp + 8)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDfiles_127() {      /* trace featurep */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,1,66,67);
  lRet:  return (aRet);}}

static Ptr GDfiles_128() {      /* trace add-feature */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,68,66,67);
  lRet:  return (aRet);}}

static Ptr GDfiles_129() {      /* trace rem-feature */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,69,66,67);
  lRet:  return (aRet);}}

static Ptr GDfiles_130() {      /* trace list-features */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,70,66,71);
  lRet:  return (aRet);}}

static Ptr GDfiles_131() {      /* trace probepathf */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,34,66,67);
  lRet:  return (aRet);}}

static Ptr GDfiles_132() {      /* trace probepathm */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,72,66,67);
  lRet:  return (aRet);}}

static Ptr GDfiles_133() {      /* trace probepatho */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,35,66,67);
  lRet:  return (aRet);}}

static Ptr GDfiles_134() {      /* trace search-in-path */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,7,66,73);
  lRet:  return (aRet);}}

static Ptr GDfiles_135() {      /* trace load */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,74,66,75);
  lRet:  return (aRet);}}

static Ptr GDfiles_136() {      /* trace loadfile */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,19,66,73);
  lRet:  return (aRet);}}

static Ptr GDfiles_137() {      /* trace libload */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,76,66,75);
  lRet:  return (aRet);}}

static Ptr GDfiles_138() {      /* trace libloadfile */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,33,66,73);
  lRet:  return (aRet);}}

static Ptr GDfiles_139() {      /* trace loadobjectfile */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,36,66,67);
  lRet:  return (aRet);}}

static Ptr GDfiles_140() {      /* trace autoload */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,47,66,75);
  lRet:  return (aRet);}}

static Ptr GDfiles_141() {      /* trace libautoload */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,77,66,75);
  lRet:  return (aRet);}}

static Ptr GDfiles_142() {      /* trace #:system:std-autoload */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfiles,40,66,78);
  lRet:  return (aRet);}}

