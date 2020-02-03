/* GELL 15.26: source file for the module: "path" */
/*             translation done:           "Wed June 16 93 18:00:53 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "path.h" 

static Ptr GLpath_1() { /* #:pathname:make */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = ((Ptr) GLpath_2);
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        GIa4 = (Ptr) 6;
        {aRet = (GYpath[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_2() { /* 101 */
   {    register Ptr aRet;
        (GIa1 + 1)->Val = GYpath[1];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_3() { /* pathnamep */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_5);
        {aRet = (GYpath[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_5() { /* call_path_4 */
   {    register Ptr aRet, *rLit;
        rLit = GYpath;
        GIa2 = rLit[1];
        GIa1 = (GIa1 == GIa2) ? rLit[3] : GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_6() { /* namestring */
   {    register Ptr aRet, *rLit, rSp, rA1, rBsymb;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rBsymb = GIbsymb;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbstrg) || (rA1 >= rBsymb)) goto l_101;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if ((rA1 < rBsymb) || (rA1 >= GIbcons)) goto l_103;
        rSp += (Fix) 1;
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
l_103:
        (--rSp)->Val = ((Ptr) GLpath_8);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_8() { /* call_path_7 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_105;
        GIa3 = rSp->Val;
        GIa2 = rLit[6];
        rA1 = rLit[7];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLpath_9); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_9() { /* #:unix:namestring */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = ((Ptr) GLpath_11);
        {aRet = ((Ptr) GLpath_12); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_11() {        /* call_path_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLpath_14);
        {aRet = ((Ptr) GLpath_15); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_14() {        /* call_path_13 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_16() {        /* pathname-host */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_18);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_18() {        /* call_path_17 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_19); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_21);
        {aRet = (GYpath[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_21() {        /* call_path_20 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_19); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_19() {        /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_22() {        /* pathname-device */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_24);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_24() {        /* call_path_23 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_25); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_27);
        {aRet = (GYpath[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_27() {        /* call_path_26 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_25); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_25() {        /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_28() {        /* pathname-directory */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_30);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_30() {        /* call_path_29 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_31); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_33);
        {aRet = (GYpath[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_33() {        /* call_path_32 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_31); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_31() {        /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_34() {        /* pathname-name */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_36);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_36() {        /* call_path_35 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_37); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_39);
        {aRet = (GYpath[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_39() {        /* call_path_38 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_37); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_37() {        /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_40() {        /* pathname-type */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_42);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_42() {        /* call_path_41 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_43); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_45);
        {aRet = (GYpath[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_45() {        /* call_path_44 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_43); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_43() {        /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_46() {        /* pathname-version */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_48);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_48() {        /* call_path_47 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_49); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_51);
        {aRet = (GYpath[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_51() {        /* call_path_50 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_49); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_49() {        /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp->Val->Val + 2 + (Fix) 5)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_52() {        /* set-pathname-host */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_54);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_54() {        /* call_path_53 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val == rNil)     goto l_104;
        if (((rSp + 1)->Val >= GIbstrg) && ((rSp + 1)->Val < GIbsymb))  goto l_104;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        (rSp->Val->Val + 2 + (Fix) 0)->Val = (rSp + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_55() {        /* set-pathname-device */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_57);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_57() {        /* call_path_56 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[12];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val == rNil)     goto l_104;
        if (((rSp + 1)->Val >= GIbstrg) && ((rSp + 1)->Val < GIbsymb))  goto l_104;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[12];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        (rSp->Val->Val + 2 + (Fix) 1)->Val = (rSp + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_58() {        /* set-pathname-directory */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_60);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_60() {        /* call_path_59 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_62);
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_62() {        /* call_path_61 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[15];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_104:
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rNil;
l_105:
        if ((rSp + 1)->Val == rNil)     goto l_106;
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        rSp->Val = rA4->Val;
        if ((rSp->Val >= GIbstrg) && (rSp->Val < GIbsymb))      goto l_105;
        rA4 = rSp->Val;
        if (rA4 == rLit[16])    goto l_105;
        if (rA4 == rLit[17])    goto l_105;
        if (rA4 == rLit[18])    goto l_105;
        rA3 = rSp->Val;
        rA2 = rLit[6];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        goto l_105;
l_106:
        rSp += (Fix) 2;
        (rSp->Val->Val + 2 + (Fix) 2)->Val = (rSp + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_63() {        /* set-pathname-name */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_65);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_65() {        /* call_path_64 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[19];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val == rNil)     goto l_104;
        if (((rSp + 1)->Val >= GIbstrg) && ((rSp + 1)->Val < GIbsymb))  goto l_104;
        if ((rSp + 1)->Val == rLit[18]) goto l_104;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[20];
        rA1 = rLit[19];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        (rSp->Val->Val + 2 + (Fix) 3)->Val = (rSp + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_66() {        /* set-pathname-type */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_68);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_68() {        /* call_path_67 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[21];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val == rNil)     goto l_104;
        if (((rSp + 1)->Val >= GIbstrg) && ((rSp + 1)->Val < GIbsymb))  goto l_104;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[11];
        rA1 = rLit[21];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        (rSp->Val->Val + 2 + (Fix) 4)->Val = (rSp + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_69() {        /* set-pathname-version */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_71);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_71() {        /* call_path_70 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[22];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_73);
        {aRet = (rLit[23] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_73() {        /* call_path_72 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_104;
        if ((rSp + 1)->Val == rNil)     goto l_104;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[24];
        rA1 = rLit[22];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        (rSp->Val->Val + 2 + (Fix) 5)->Val = (rSp + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_74() {        /* copy-pathname */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = rLit[1];
        (--rSp)->Val = ((Ptr) GLpath_76);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_76() {        /* call_path_75 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
        (rA1->Val + 2 + (Fix) 0)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        (rA1->Val + 2 + (Fix) 1)->Val = rA4;
        (--rSp)->Val = rA1;
        rA1 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = ((Ptr) GLpath_78);
        {aRet = (GYpath[26] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_78() {        /* call_path_77 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 2)->Val = GIa1;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        (rSp->Val->Val + 2 + (Fix) 3)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 4)->Val;
        (rSp->Val->Val + 2 + (Fix) 4)->Val = rA4;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 5)->Val;
        (rSp->Val->Val + 2 + (Fix) 5)->Val = rA4;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_79() {        /* pathname */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_81);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_81() {        /* call_path_80 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if ((rSp->Val < GIbsymb) || (rSp->Val >= GIbcons))      {aRet = ((Ptr) GLpath_82); goto lRet;}
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_84);
        {aRet = (GYpath[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_84() {        /* call_path_83 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_82); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_82() {        /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if ((rSp->Val >= GIbstrg) && (rSp->Val < GIbsymb))      goto l_105;
        GIa3 = rSp->Val;
        GIa2 = rLit[6];
        rA1 = rLit[1];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        GIa2 = rLit[27];
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_86);
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_86() {        /* call_path_85 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_107;
        rA1 = rLit[1];
        rSp += (Fix) 1;
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
l_107:
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_87() {        /* #:unix:pathname */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = rLit[1];
        (--rSp)->Val = ((Ptr) GLpath_89);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_89() {        /* call_path_88 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_91);
        {aRet = (GYpath[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_91() {        /* call_path_90 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 1)->Val;
        if (rA4 != (Ptr) 0)     goto l_101;
        rA1 = (rSp + 7)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((unsigned char) *(((char *) (rA1->Val + 2)) + (Fix) 0));
        if (rA4 != (Ptr) 47)    {aRet = ((Ptr) GLpath_92); goto lRet;}
        rA4 = (rA1->Val + 1)->Val;
        if ((Fix) (rA4) <= (Fix) 1)     {aRet = ((Ptr) GLpath_93); goto lRet;}
        rA4 = (Ptr) ((unsigned char) *(((char *) (rA1->Val + 2)) + (Fix) 1));
        if (rA4 != (Ptr) 47)    {aRet = ((Ptr) GLpath_93); goto lRet;}
        if (rLit[30]->Val == rNil)      {aRet = ((Ptr) GLpath_93); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_95);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_95() {        /* call_path_94 */
   {    register Ptr aRet;
        if (GIa1 != GYpath[32]) {aRet = ((Ptr) GLpath_93); goto lRet;}
        (--GIsp)->Val = GInil;
        {aRet = ((Ptr) GLpath_96); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_96() {        /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (rSp->Val != GInil)  {aRet = ((Ptr) GLpath_97); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_98);
        (--rSp)->Val = (Ptr) 47;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 2;
        GIa4 = (Ptr) 3;
        {aRet = (GYpath[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_98() {        /* 109 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 3)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLpath_99);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 2;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 2));
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_99() {        /* 110 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (rSp + 7)->Val = GIa1;
        GIa2 = rLit[35]->Val;
        (--rSp)->Val = ((Ptr) GLpath_101);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_101() {       /* call_path_100 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLpath_102); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_103);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 3;
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_103() {       /* 113 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLpath_96); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_102() {       /* 111 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        GIa2 = rLit[37]->Val;
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLpath_105);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_105() {       /* call_path_104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLpath_106); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_107);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 2;
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_107() {       /* 116 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLpath_96); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_106() {       /* 114 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        GIa2 = rLit[38]->Val;
        GIa1 = (rSp + 7)->Val;
        (--rSp)->Val = ((Ptr) GLpath_109);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_109() {       /* call_path_108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      goto l_117;
        rSp->Val = GYpath[18];
        {aRet = ((Ptr) GLpath_96); goto lRet;}
l_117:
        rSp->Val = (rSp + 7)->Val;
        {aRet = ((Ptr) GLpath_96); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_97() {        /* 108 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLpath_110);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 5)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_110() {       /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 1)->Val = GIa1;
        GIa4 = (rSp->Val->Val + 1)->Val;
        if (GIa4 == (Ptr) 0)    {aRet = ((Ptr) GLpath_111); goto lRet;}
        GIa2 = rSp->Val;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLpath_111);
        {aRet = (GYpath[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_111() {       /* 121 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLpath_112); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_93() {        /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpath_113);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_113() {       /* 122 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_112); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_112() {       /* 106 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = GYpath[39];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (GIsp + 1)->Val = rA1;
        {aRet = ((Ptr) GLpath_114); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_92() {        /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpath_115);
        (--rSp)->Val = rLit[40];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_115() {       /* 125 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != (Ptr) 0)    {aRet = ((Ptr) GLpath_116); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_117);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 3;
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_117() {       /* 126 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        rA1 = GYpath[17];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (rSp + 1)->Val = rA1;
        {aRet = ((Ptr) GLpath_114); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_116() {       /* 123 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpath_118);
        (--rSp)->Val = rLit[42];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_118() {       /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != (Ptr) 0)    {aRet = ((Ptr) GLpath_119); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_120);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 2;
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_120() {       /* 130 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rSp->Val = rA1;
        rA1 = GYpath[16];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (rSp + 1)->Val = rA1;
        {aRet = ((Ptr) GLpath_114); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_119() {       /* 127 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpath_121);
        (--rSp)->Val = (Ptr) 47;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_121() {       /* 133 */
   {    register Ptr aRet, rA1, rNil;
        rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        {aRet = ((Ptr) GLpath_114); goto lRet;}
        rA1 = GYpath[16];
        GIa1 = rA1; rA1 = llrt_cons (rA1, rNil);
        (GIsp + 1)->Val = rA1;
        {aRet = ((Ptr) GLpath_114); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_114() {       /* 134 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpath_122);
        (--rSp)->Val = (Ptr) 47;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_122() {       /* 136 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 2)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLpath_123); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_124);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 3;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_124() {       /* 137 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (rSp + 6)->Val = GIa1;
        GIa2 = rLit[35]->Val;
        (--rSp)->Val = ((Ptr) GLpath_126);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_126() {       /* call_path_125 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 == GInil)       goto l_138;
        rA4 = (rSp + 1)->Val;
        if (rA4->Val == rLit[39])       {aRet = ((Ptr) GLpath_127); goto lRet;}
        rA2 = rA4;
        rA1 = rLit[17];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 1)->Val = rA1;
        {aRet = ((Ptr) GLpath_127); goto lRet;}
l_138:
        rA2 = rLit[37]->Val;
        rA1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLpath_129);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_129() {       /* call_path_128 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA1 == GInil)       goto l_142;
        rA4 = (rSp + 1)->Val;
        if (rA4->Val == rLit[39])       {aRet = ((Ptr) GLpath_127); goto lRet;}
        rA2 = rA4;
        rA1 = rLit[16];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 1)->Val = rA1;
        {aRet = ((Ptr) GLpath_127); goto lRet;}
l_142:
        rA2 = rLit[38]->Val;
        rA1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLpath_131);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_131() {       /* call_path_130 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 == GInil)       goto l_146;
        rA2 = (rSp + 1)->Val;
        rA1 = rLit[18];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (rSp + 1)->Val = rA1;
        {aRet = ((Ptr) GLpath_127); goto lRet;}
l_146:
        rA2 = rLit[43]->Val;
        rA1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLpath_133);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLpath_133() {       /* call_path_132 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLpath_127); goto lRet;}
        GIa2 = (rSp + 1)->Val;
        rA1 = (rSp + 6)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 1)->Val = rA1;
        {aRet = ((Ptr) GLpath_127); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_127() {       /* 139 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLpath_134);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_134() {       /* 149 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_114); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_123() {       /* 135 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        rA1 = (rSp + 1)->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        (rSp + 1)->Val = rA1;
        if (rA1->Val != rLit[39])       goto l_151;
        if ((rA1 + 1)->Val == rNil)     goto l_152;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        goto l_151;
l_152:
        rA1 = rLit[43]->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rNil);
        (rSp + 1)->Val = rA1;
l_151:
        ((rSp + 7)->Val->Val + 2 + (Fix) 2)->Val = (rSp + 1)->Val;
        GIa4 = (rSp->Val->Val + 1)->Val;
        if (GIa4 == (Ptr) 0)    {aRet = ((Ptr) GLpath_135); goto lRet;}
        rA2 = (rSp->Val->Val + 1)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) 1));
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_137);
        {aRet = ((Ptr) GLpath_138); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLpath_137() {       /* call_path_136 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_156;
        GIa2 = (rSp + 2)->Val;
        rA1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLpath_139);
        {aRet = ((Ptr) GLpath_140); goto lRet;}
l_156:
        (--rSp)->Val = ((Ptr) GLpath_141);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) 1));
        (--rSp)->Val = rA1;
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_141() {       /* 160 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (rSp + 8)->Val = GIa1;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        GIa2 = rA4;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLpath_143);
        {aRet = ((Ptr) GLpath_138); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_143() {       /* call_path_142 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (rSp + 1)->Val = rA1;
        if (rA1 == rNil)        {aRet = ((Ptr) GLpath_144); goto lRet;}
        rA1 = ((rSp + 8)->Val->Val + 1)->Val;
        GIa3 = rNil;
        GIa2 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLpath_146);
        {aRet = (GYpath[44] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_146() {       /* call_path_145 */
   {    register Ptr aRet, rSp, rA1, rA3, rA4;
        rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        if (rA1 >= GIbfloat)    {aRet = ((Ptr) GLpath_147); goto lRet;}
        ((rSp + 9)->Val->Val + 2 + (Fix) 5)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLpath_148);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (--rSp)->Val = rA4;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rA3 = (rSp + 3)->Val;
        rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) (rA4)));
        (--rSp)->Val = rA3;
        rA4 = (Ptr) 3;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_148() {       /* 163 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLpath_150);
        {aRet = ((Ptr) GLpath_151); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_150() {       /* call_path_149 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpath_152);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_152() {       /* 164 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLpath_139);
        {aRet = ((Ptr) GLpath_140); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_147() {       /* 161 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 8)->Val;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLpath_154);
        {aRet = ((Ptr) GLpath_151); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_154() {       /* call_path_153 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpath_155);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_155() {       /* 165 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLpath_139);
        {aRet = ((Ptr) GLpath_140); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_144() {       /* 158 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 8)->Val;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLpath_157);
        {aRet = ((Ptr) GLpath_151); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_157() {       /* call_path_156 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpath_158);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 3;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_158() {       /* 166 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp + 9)->Val;
        (--rSp)->Val = ((Ptr) GLpath_139);
        {aRet = ((Ptr) GLpath_140); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_139() {       /* 157 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLpath_135); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_135() {       /* 155 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 7)->Val;
        rSp += (Fix) 9;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_151() {       /* #:pathname:type* */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYpath; rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rA2;
        rA2 = rLit[38]->Val;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLpath_160);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLpath_160() {       /* call_path_159 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      goto l_101;
        rA4 = GYpath[18];
        goto l_102;
l_101:
        rA4 = (rSp + 1)->Val;
l_102:
        GIa3 = (rSp++)->Val;
        (GIa3->Val + 2 + (Fix) 4)->Val = rA4;
        GIa1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_140() {       /* #:pathname:name* */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYpath; rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rA2;
        rA2 = rLit[38]->Val;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLpath_162);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLpath_162() {       /* call_path_161 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      goto l_101;
        rA4 = GYpath[18];
        goto l_102;
l_101:
        rA4 = (rSp + 1)->Val;
l_102:
        GIa3 = (rSp++)->Val;
        (GIa3->Val + 2 + (Fix) 3)->Val = rA4;
        GIa1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_138() {       /* #:pathname:lastindex */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
l_GLpath_138:
        if ((Fix) (rA2) >= (Fix) 0)     goto l_101;
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((unsigned char) *(((char *) (rA1->Val + 2)) + (Fix) (rA2)));
        if (rA4 != (Ptr) 46)    goto l_103;
        rA1 = rA2;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) 1));
        goto l_GLpath_138;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_163() {       /* #:pathname:c-pathname */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_165);
        {aRet = (GYpath[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_165() {       /* call_path_164 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        rSp->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rA4;
        if (rA4 == rNil)        {aRet = ((Ptr) GLpath_166); goto lRet;}
        if ((rA4->Val < GIbstrg) || (rA4->Val >= GIbsymb))      {aRet = ((Ptr) GLpath_167); goto lRet;}
        rA1 = rLit[39];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, rNil);
        (rSp + 2)->Val = rA1;
        rA1 = rSp->Val;
        GIa2 = rLit[43]->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLpath_169);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_169() {       /* call_path_168 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLpath_167); goto lRet;}
        GIa4 = rSp->Val;
        rSp->Val = (GIa4 + 1)->Val;
        {aRet = ((Ptr) GLpath_167); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_167() {       /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
l_GLpath_167:
        if (rSp->Val == GInil)  goto l_108;
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (rSp + 1)->Val = rA4->Val;
        rA1 = (rSp + 1)->Val;
        if (rA1 != rLit[17])    goto l_110;
        rA4 = (rSp + 2)->Val;
        if (rA4->Val == rLit[39])       goto l_GLpath_167;
        rA2 = rA4;
        rA1 = rLit[17];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 2)->Val = rA1;
        goto l_GLpath_167;
l_110:
        if (rA1 != rLit[16])    goto l_113;
        goto l_GLpath_167;
l_113:
        rA2 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 2)->Val = rA1;
        goto l_GLpath_167;
l_108:
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLpath_171);
        {aRet = (rLit[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_171() {       /* call_path_170 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (rSp + 2)->Val = rA1;
        if (rA1->Val != rLit[39])       goto l_115;
        if ((rA1 + 1)->Val == rNil)     goto l_117;
        (rSp + 2)->Val = (rA1 + 1)->Val;
        {aRet = ((Ptr) GLpath_172); goto lRet;}
l_117:
        rA1 = rLit[43]->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, rNil);
        (rSp + 2)->Val = rA1;
        {aRet = ((Ptr) GLpath_172); goto lRet;}
l_115:
        if (rA1->Val == rLit[17])       {aRet = ((Ptr) GLpath_172); goto lRet;}
        rA1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLpath_174);
        {aRet = (rLit[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_174() {       /* call_path_173 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLpath_172); goto lRet;}
        GIa2 = (rSp + 2)->Val;
        rA1 = GYpath[16];
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 2)->Val = rA1;
        {aRet = ((Ptr) GLpath_172); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_172() {       /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 2)->Val;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLpath_166);
        {aRet = (GYpath[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_166() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_175() {       /* equal-pathname */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_177);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_177() {       /* call_path_176 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[48];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_179);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_179() {       /* call_path_178 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_104;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[9];
        rA1 = rLit[48];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_181);
        {aRet = (rLit[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_181() {       /* call_path_180 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_183);
        {aRet = (GYpath[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_183() {       /* call_path_182 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (rSp + 1)->Val = rA1;
        rA4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA3 = ((rSp + 1)->Val->Val + 2 + (Fix) 4)->Val;
        rA2 = (rA1->Val + 2 + (Fix) 3)->Val;
        rA4 = (rA1->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA4;
        if ((rSp + 1)->Val == rNil)     goto l_106;
        rA4 = ((rSp + 1)->Val->Val + 1)->Val;
        if (rA4 != (Ptr) 0)     goto l_106;
        ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val = rNil;
l_106:
        if (rA2 == rNil)        goto l_108;
        rA4 = (rA2->Val + 1)->Val;
        if (rA4 != (Ptr) 0)     goto l_108;
        (rA1->Val + 2 + (Fix) 3)->Val = rNil;
l_108:
        if (rA3 == rNil)        goto l_110;
        rA4 = (rA3->Val + 1)->Val;
        if (rA4 != (Ptr) 0)     goto l_110;
        ((rSp + 2)->Val->Val + 2 + (Fix) 4)->Val = rNil;
l_110:
        if (rSp->Val == rNil)   goto l_112;
        rA4 = (rSp->Val->Val + 1)->Val;
        if (rA4 != (Ptr) 0)     goto l_112;
        (rA1->Val + 2 + (Fix) 4)->Val = rNil;
l_112:
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLpath_185);
        {aRet = ((Ptr) GLpath_163); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_185() {       /* call_path_184 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLpath_187);
        {aRet = ((Ptr) GLpath_163); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_187() {       /* call_path_186 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 4;
        {aRet = (GYpath[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_188() {       /* user-homedir-pathname */
   {    register Ptr aRet;
        {aRet = ((Ptr) GLpath_189); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_190() {       /* control-file-pathname */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) < (Fix) 1) goto l_103;
        if ((Fix) (rSp->Val) <= (Fix) 2)        goto l_102;
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[49];
        rA1 = rLit[50];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_102:
        rA4 = rSp->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLpath_192);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_192() {       /* call_path_191 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        if ((rSp + 1)->Val != (Ptr) 2)  {aRet = ((Ptr) GLpath_193); goto lRet;}
        GIa4 = (rSp + 1)->Val;
        GIa1 = (rSp + (Fix) (GIa4))->Val;
        (--rSp)->Val = ((Ptr) GLpath_195);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_195() {       /* call_path_194 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rBsymb;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rBsymb = GIbsymb;
        if (rA1 == GInil)       goto l_106;
        rA4 = (rSp + 1)->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        {aRet = ((Ptr) GLpath_196); goto lRet;}
l_106:
        rA4 = (rSp + 1)->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        if ((rA4 >= GIbstrg) && (rA4 < rBsymb)) goto l_110;
        rA4 = (rSp + 1)->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
        if ((rA4 < rBsymb) || (rA4 >= GIbcons)) goto l_108;
l_110:
        rA4 = (rSp + 1)->Val;
        rA1 = (rSp + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLpath_196);
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_108:
        rA4 = (rSp + 1)->Val;
        GIa3 = (rSp + (Fix) (rA4))->Val;
        GIa2 = rLit[9];
        rA1 = rLit[50];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLpath_196); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_196() {       /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_198);
        {aRet = (GYpath[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_198() {       /* call_path_197 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLpath_200);
        {aRet = (GYpath[52] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_200() {       /* call_path_199 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLpath_201); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_193() {       /* 104 */
   {    register Ptr aRet;
        GIa4 = GInil;
        {aRet = ((Ptr) GLpath_201); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_201() {       /* 105 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA4;
        if (rA4 == rNil)        {aRet = ((Ptr) GLpath_202); goto lRet;}
        GIa2 = (rSp + 1)->Val;
        GIa1 = rNil;
        (--rSp)->Val = ((Ptr) GLpath_204);
        {aRet = (GYpath[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_204() {       /* call_path_203 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        GIa3 = rLit[50];
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_205);
        {aRet = (rLit[54] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_202() {       /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 1)->Val;
        GIa1 = GInil;
        (--rSp)->Val = ((Ptr) GLpath_207);
        {aRet = (GYpath[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_207() {       /* call_path_206 */
   {    register Ptr aRet, *rLit;
        rLit = GYpath;
        GIa2 = rLit[50];
        (--GIsp)->Val = ((Ptr) GLpath_209);
        {aRet = (rLit[55] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_209() {       /* call_path_208 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_205); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_205);
        {aRet = ((Ptr) GLpath_210); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_205() {       /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        GIa4 = (rSp++)->Val;
        rSp += (Fix) (GIa4);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_211() {       /* temporary-file-pathname */
   {    register Ptr aRet;
        {aRet = ((Ptr) GLpath_212); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_189() {       /* #:unix:user-homedir-pathname */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpath_213);
        GIa1 = rLit[56];
        (--rSp)->Val = ((Ptr) GLpath_215);
        {aRet = (rLit[57] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_215() {       /* call_path_214 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[58]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_213() {       /* 101 */
   {    register Ptr aRet;
        {aRet = (GYpath[29] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_210() {       /* #:unix:control-file-pathname */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_217);
        {aRet = (GYpath[51] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_217() {       /* call_path_216 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (GIa1->Val + 2 + (Fix) 4)->Val = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_212() {       /* #:unix:temporary-file-pathname */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpath_218);
        (--rSp)->Val = rLit[59];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_218() {       /* 101 */
   {    register Ptr aRet;
        {aRet = (GYpath[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_219() {       /* #:bsd:pathname-check */
   {    register Ptr aRet;
        GIa1 = GYpath[3];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_220() {       /* #:sys5:pathname-check */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLpath_221);
        rA4 = (rA1->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA1->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA1->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (GYpath[60] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_221() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GYpath[3];
        {aRet = ((Ptr) GLpath_222); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_222() {       /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLpath_223); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLpath_224); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_226);
        {aRet = (GYpath[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_226() {       /* call_path_225 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (rA1->Val + 1)->Val;
        GIa2 = (Ptr) 14;
        rA1 = ((Fix) (rA1) <= (Fix) (GIa2)) ? rA1 : GInil;
        GIa4 = rA1;
        {aRet = ((Ptr) GLpath_227); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_224() {       /* 104 */
   {    register Ptr aRet;
        GIa4 = GYpath[3];
        {aRet = ((Ptr) GLpath_227); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_227() {       /* 105 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 1;
        rSp->Val = rA4;
        if (rA4 == GInil)       {aRet = ((Ptr) GLpath_223); goto lRet;}
        {aRet = ((Ptr) GLpath_222); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_223() {       /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_228() {       /* #:aegis:pathname-check */
   {    register Ptr aRet;
        GIa1 = GYpath[3];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_229() {       /* #:vaxvms:pathname-check */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLpath_230);
        rA4 = (rA1->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA1->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = (rA1->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (GYpath[60] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_230() {       /* 101 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = rA1;
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        GIa2 = (Ptr) 8;
        rA1 = ((Fix) (rA1) <= (Fix) (GIa2)) ? rA1 : rNil;
        if (rA1 == rNil)        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GYpath[3];
        {aRet = ((Ptr) GLpath_231); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_231() {       /* 103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLpath_232); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLpath_233); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_235);
        {aRet = (GYpath[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_235() {       /* call_path_234 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        rA1 = (rA1->Val + 1)->Val;
        GIa2 = (Ptr) 32;
        rA1 = ((Fix) (rA1) <= (Fix) (GIa2)) ? rA1 : GInil;
        GIa4 = rA1;
        {aRet = ((Ptr) GLpath_236); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_233() {       /* 105 */
   {    register Ptr aRet;
        GIa4 = GYpath[3];
        {aRet = ((Ptr) GLpath_236); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_236() {       /* 106 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 1;
        rSp->Val = rA4;
        if (rA4 == GInil)       {aRet = ((Ptr) GLpath_232); goto lRet;}
        {aRet = ((Ptr) GLpath_231); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_232() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        if (GIa1 == GInil)      {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = GYpath[3];
        {aRet = ((Ptr) GLpath_237); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_237() {       /* 107 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpath; rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLpath_238); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLpath_239);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[61];
        rA4 = (Ptr) 2;
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_239() {       /* 111 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (GIa1 == rNil)       goto l_109;
        rA4 = rNil;
        goto l_110;
l_109:
        rA4 = GYpath[3];
l_110:
        rSp += (Fix) 1;
        rSp->Val = rA4;
        if (rA4 == rNil)        {aRet = ((Ptr) GLpath_238); goto lRet;}
        {aRet = ((Ptr) GLpath_237); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_238() {       /* 108 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        if (rA1 == rNil)        {rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 5)->Val;
        if (GIa4 == rNil)       goto l_112;
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 5)->Val;
        rSp += (Fix) 2;
        if ((rA1 < (Ptr) 0) || (rA1 >= GIbnumb)) rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_112:
        rA1 = GYpath[3];
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_240() {       /* #:dos:pathname-check */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil, rBstrg, rBsymb;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBstrg = GIbstrg; rBsymb = GIbsymb;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 3)->Val;
        if (rA4 == rNil)        goto l_102;
        rA1 = (rA1->Val + 2 + (Fix) 3)->Val;
        if ((rA1 < rBstrg) || (rA1 >= rBsymb)) rA1 = rNil;
        if (rA1 == rNil)        goto l_103;
        rA1 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        rA1 = (rA1->Val + 1)->Val;
        rA2 = (Ptr) 8;
        rA1 = ((Fix) (rA1) <= (Fix) (rA2)) ? rA1 : rNil;
        if (rA1 == rNil)        goto l_103;
        rA1 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        rA1 = (rA1->Val + 1)->Val;
        rA2 = (Ptr) 1;
        rA1 = ((Fix) (rA1) >= (Fix) (rA2)) ? rA1 : rNil;
        goto l_103;
l_102:
        rA1 = rLit[3];
l_103:
        if (rA1 == rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        rA4 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        if (rA4 == rNil)        goto l_105;
        rA1 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        if ((rA1 < rBstrg) || (rA1 >= rBsymb)) rA1 = rNil;
        if (rA1 == rNil)        goto l_106;
        rA1 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        rA1 = (rA1->Val + 1)->Val;
        rA2 = (Ptr) 3;
        rA1 = ((Fix) (rA1) <= (Fix) (rA2)) ? rA1 : rNil;
        goto l_106;
l_105:
        rA1 = rLit[3];
l_106:
        if (rA1 == rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        rA4 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[3];
        {aRet = ((Ptr) GLpath_241); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_241() {       /* 108 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLpath_242); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        if (rSp->Val == rNil)   {aRet = ((Ptr) GLpath_243); goto lRet;}
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLpath_245);
        {aRet = (GYpath[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_245() {       /* call_path_244 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        rA1 = (rA1->Val + 1)->Val;
        GIa2 = (Ptr) 12;
        rA1 = ((Fix) (rA1) <= (Fix) (GIa2)) ? rA1 : rNil;
        (rSp + 1)->Val = rA1;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLpath_246); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_247);
        (--rSp)->Val = rLit[37]->Val;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        rA4 = (Ptr) 3;
        {aRet = (rLit[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_247() {       /* 115 */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        rSp->Val = rA1;
        if (rA1 == rNil)        {aRet = ((Ptr) GLpath_248); goto lRet;}
        rA2 = (Ptr) 8;
        rA1 = ((Fix) (rA1) <= (Fix) (rA2)) ? rA1 : rNil;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLpath_246); goto lRet;}
        rA2 = (Ptr) 1;
        rA1 = rSp->Val;
        rA1 = ((Fix) (rA1) >= (Fix) (rA2)) ? rA1 : rNil;
        rA4 = rA1;
        if (rA4 == rNil)        {aRet = ((Ptr) GLpath_246); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_249);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 2;
        {aRet = (GYpath[63] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_249() {       /* 117 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa2 = (Ptr) 4;
        rA1 = ((Fix) (rA1) <= (Fix) (GIa2)) ? rA1 : GInil;
        GIa4 = rA1;
        {aRet = ((Ptr) GLpath_246); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_248() {       /* 113 */
   {    register Ptr aRet;
        GIa4 = GYpath[3];
        {aRet = ((Ptr) GLpath_246); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_246() {       /* 112 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = ((Ptr) GLpath_250); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_243() {       /* 110 */
   {    register Ptr aRet;
        GIa4 = GYpath[3];
        {aRet = ((Ptr) GLpath_250); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_250() {       /* 111 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 1;
        rSp->Val = rA4;
        if (rA4 == GInil)       {aRet = ((Ptr) GLpath_242); goto lRet;}
        {aRet = ((Ptr) GLpath_241); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_242() {       /* 109 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        if (GIa1 == GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_251);
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (GYpath[60] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_251() {       /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GYpath[3];
        {aRet = ((Ptr) GLpath_252); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_252() {       /* 119 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpath; rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLpath_253); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLpath_254);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[64];
        rA4 = (Ptr) 2;
        {aRet = (rLit[62] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_254() {       /* 123 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (GIa1 == rNil)       goto l_121;
        rA4 = rNil;
        goto l_122;
l_121:
        rA4 = GYpath[3];
l_122:
        rSp += (Fix) 1;
        rSp->Val = rA4;
        if (rA4 == rNil)        {aRet = ((Ptr) GLpath_253); goto lRet;}
        {aRet = ((Ptr) GLpath_252); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_253() {       /* 120 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
l_101:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_255() {       /* portable-pathname-p */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_256);
        GIa4 = (Ptr) 0;
        {aRet = (GYpath[65] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_256() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_257);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpath_258);
        (--rSp)->Val = rLit[3];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[65] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_258() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLpath_260);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_260() {       /* call_path_259 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 != rNil)        goto l_106;
        GIa3 = (rSp + 4)->Val;
        GIa2 = rLit[9];
        rA1 = rLit[66];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
l_106:
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 0)->Val;
        if (rA4 != rNil)        goto l_109;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val;
        if (rA4 != rNil)        goto l_109;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLpath_261); goto lRet;}
l_109:
        if (rLit[67]->Val == rNil)      {aRet = ((Ptr) GLpath_261); goto lRet;}
        GIa3 = (rSp + 4)->Val;
        GIa2 = rLit[68];
        rA1 = rLit[66];
        (--rSp)->Val = ((Ptr) GLpath_261);
        {aRet = (rLit[69] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_261() {       /* 108 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        rA1 = ((rSp + 4)->Val->Val + 2 + (Fix) 0)->Val;
        if (rA1 != rNil)        {aRet = ((Ptr) GLpath_262); goto lRet;}
        rA1 = ((rSp + 4)->Val->Val + 2 + (Fix) 1)->Val;
        if (rA1 != rNil)        {aRet = ((Ptr) GLpath_262); goto lRet;}
        rA1 = ((rSp + 4)->Val->Val + 2 + (Fix) 5)->Val;
        if (rA1 != rNil)        {aRet = ((Ptr) GLpath_262); goto lRet;}
        rA1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLpath_264);
        {aRet = ((Ptr) GLpath_229); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_264() {       /* call_path_263 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_114;
        rA1 = rLit[67]->Val;
        if (rA1 == rNil)        {aRet = ((Ptr) GLpath_265); goto lRet;}
        GIa3 = (rSp + 4)->Val;
        GIa2 = rLit[70];
        rA1 = rLit[66];
        (--rSp)->Val = ((Ptr) GLpath_265);
        {aRet = (rLit[69] + 2)->Val; goto lRet;}
l_114:
        rA1 = rNil;
        {aRet = ((Ptr) GLpath_265); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_265() {       /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_262); goto lRet;}
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLpath_267);
        {aRet = ((Ptr) GLpath_219); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_267() {       /* call_path_266 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_117;
        rA1 = rLit[67]->Val;
        if (rA1 == rNil)        {aRet = ((Ptr) GLpath_268); goto lRet;}
        GIa3 = (rSp + 4)->Val;
        GIa2 = rLit[71];
        rA1 = rLit[66];
        (--rSp)->Val = ((Ptr) GLpath_268);
        {aRet = (rLit[69] + 2)->Val; goto lRet;}
l_117:
        rA1 = rNil;
        {aRet = ((Ptr) GLpath_268); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_268() {       /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_262); goto lRet;}
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLpath_270);
        {aRet = ((Ptr) GLpath_220); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_270() {       /* call_path_269 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_120;
        rA1 = rLit[67]->Val;
        if (rA1 == rNil)        {aRet = ((Ptr) GLpath_271); goto lRet;}
        GIa3 = (rSp + 4)->Val;
        GIa2 = rLit[72];
        rA1 = rLit[66];
        (--rSp)->Val = ((Ptr) GLpath_271);
        {aRet = (rLit[69] + 2)->Val; goto lRet;}
l_120:
        rA1 = rNil;
        {aRet = ((Ptr) GLpath_271); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_271() {       /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_262); goto lRet;}
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLpath_273);
        {aRet = ((Ptr) GLpath_228); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_273() {       /* call_path_272 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_123;
        rA1 = rLit[67]->Val;
        if (rA1 == rNil)        {aRet = ((Ptr) GLpath_274); goto lRet;}
        GIa3 = (rSp + 4)->Val;
        GIa2 = rLit[73];
        rA1 = rLit[66];
        (--rSp)->Val = ((Ptr) GLpath_274);
        {aRet = (rLit[69] + 2)->Val; goto lRet;}
l_123:
        rA1 = rNil;
        {aRet = ((Ptr) GLpath_274); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_274() {       /* 124 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_262); goto lRet;}
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLpath_276);
        {aRet = ((Ptr) GLpath_240); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_276() {       /* call_path_275 */
   {    register Ptr aRet, *rLit, rSp, rA1, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 != rNil)        goto l_126;
        rA1 = rLit[67]->Val;
        if (rA1 == rNil)        {aRet = ((Ptr) GLpath_262); goto lRet;}
        GIa3 = (rSp + 4)->Val;
        GIa2 = rLit[74];
        rA1 = rLit[66];
        (--rSp)->Val = ((Ptr) GLpath_262);
        {aRet = (rLit[69] + 2)->Val; goto lRet;}
l_126:
        rA1 = rNil;
        {aRet = ((Ptr) GLpath_262); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_262() {       /* 112 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_110;
        rA1 = rNil;
        goto l_111;
l_110:
        rA1 = GYpath[3];
l_111:
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = rA1;
        GIa3 = ((Ptr) GXpopj2);
        {aRet = ((Ptr) GLpath_257); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_257() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLpath_277);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpath[65] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_277() {       /* 129 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_278() {       /* #:pathname:prin */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYpath; rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa1;
        if (rLit[75]->Val == rNil)      {aRet = ((Ptr) GLpath_279); goto lRet;}
        (--rSp)->Val = rNil;
        (--rSp)->Val = rLit[75]->Val;
        rLit[75]->Val = (rSp + 1)->Val;
        (--rSp)->Val = (Ptr) 1;
        (--rSp)->Val = rLit[76];
        (--rSp)->Val = rLit[77];
        (--rSp)->Val = GIllink;
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind1);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpath_280);
        (--rSp)->Val = rLit[78];
        (--rSp)->Val = rLit[1];
        (--rSp)->Val = rLit[79];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_280() {       /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        GYpath[75]->Val = (rSp + 6)->Val;
        rSp += (Fix) 8;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (rSp->Val->Val + 1)->Val;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLpath_281); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_281() {       /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((Fix) ((rSp + 2)->Val) >= (Fix) (rSp->Val)) {aRet = ((Ptr) GLpath_282); goto lRet;}
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        (--rSp)->Val = ((Ptr) GLpath_283);
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 1;
        {aRet = (GYpath[80] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_283() {       /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpath_284);
        (--rSp)->Val = (Ptr) 32;
        GIa4 = (Ptr) 1;
        {aRet = (GYpath[81] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_284() {       /* 107 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 2)->Val = rA4;
        {aRet = ((Ptr) GLpath_281); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLpath_282() {       /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 3;
        (--rSp)->Val = ((Ptr) GLpath_285);
        (--rSp)->Val = (Ptr) 93;
        GIa4 = (Ptr) 1;
        {aRet = (GYpath[81] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_279() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpath_285);
        (--rSp)->Val = ((Ptr) GLpath_286);
        (--rSp)->Val = rLit[82];
        (--rSp)->Val = ((Ptr) GLpath_288);
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_288() {       /* call_path_287 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rLit[83];
        GIa4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_286() {       /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYpath[80] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_285() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_289() {       /* make-pathname */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA1 = GInil;
        goto l_nlist_path_291;
l_nlist_path_290:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_path_291:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_path_290;}
        (--rSp)->Val = rA1;
        rA1 = rLit[1];
        (--rSp)->Val = ((Ptr) GLpath_293);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_293() {       /* call_path_292 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 1)->Val;
        rA4 = rA4->Val;
        if (rA4 != rNil)        goto l_101;
        rA4 = (rLit[84]->Val->Val + 2 + (Fix) 0)->Val;
l_101:
        (rA1->Val + 2 + (Fix) 0)->Val = rA4;
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        if (rA4 != rNil)        goto l_102;
        rA4 = (rLit[84]->Val->Val + 2 + (Fix) 1)->Val;
l_102:
        (rA1->Val + 2 + (Fix) 1)->Val = rA4;
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        if (rA4 != rNil)        goto l_103;
        rA4 = (rLit[84]->Val->Val + 2 + (Fix) 2)->Val;
l_103:
        (rA1->Val + 2 + (Fix) 2)->Val = rA4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 2)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        if (rSp->Val != rNil)   goto l_104;
        rA4 = (rLit[84]->Val->Val + 2 + (Fix) 3)->Val;
        goto l_105;
l_104:
        if (rSp->Val == rNil)   goto l_107;
        if ((rSp->Val >= GIbstrg) && (rSp->Val < GIbsymb))      goto l_107;
        if (rSp->Val == rLit[18])       goto l_107;
        rA3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[85];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_107:
        rA4 = rSp->Val;
l_105:
        rSp += (Fix) 1;
        rA3 = (rSp++)->Val;
        (rA3->Val + 2 + (Fix) 3)->Val = rA4;
        rA4 = (rSp + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = (rA4 + 1)->Val;
        rA4 = rA4->Val;
        if (rA4 != rNil)        goto l_108;
        rA4 = (rLit[84]->Val->Val + 2 + (Fix) 4)->Val;
l_108:
        (rSp->Val->Val + 2 + (Fix) 4)->Val = rA4;
        rA1 = (rSp + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        if ((rA1 < (Ptr) 0) || (rA1 >= GIbnumb)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 != rNil)        goto l_109;
        rA4 = (rLit[84]->Val->Val + 2 + (Fix) 5)->Val;
l_109:
        (rSp->Val->Val + 2 + (Fix) 5)->Val = rA4;
        rA1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_294() {       /* file-namestring */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_296);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_296() {       /* call_path_295 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[86];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLpath_15); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_297() {       /* directory-namestring */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_299);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_299() {       /* call_path_298 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[87];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLpath_12); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_300() {       /* host-namestring */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_302);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_302() {       /* call_path_301 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[88];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLpath_303); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_304() {       /* device-namestring */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_306);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_306() {       /* call_path_305 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[89];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLpath_307); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_303() {       /* #:unix:host-namestring */
   {    register Ptr aRet;
        GIa1 = GYpath[27];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_307() {       /* #:unix:device-namestring */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        rA1 = rLit[30]->Val;
        if (rA1 == GInil)       {aRet = ((Ptr) GLpath_308); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_310);
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_310() {       /* call_path_309 */
   {    register Ptr aRet, *rLit;
        rLit = GYpath;
        GIa2 = rLit[32];
        GIa1 = (GIa1 == GIa2) ? rLit[3] : GInil;
        {aRet = ((Ptr) GLpath_308); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_308() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        {aRet = ((Ptr) GLpath_311); goto lRet;}
        rA1 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        if (rA1 == rNil)        {aRet = ((Ptr) GLpath_311); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_311);
        (--rSp)->Val = rLit[90];
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_311() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        GIa1 = GYpath[27];
l_101:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_12() {        /* #:unix:directory-namestring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 2 + (Fix) 2)->Val;
        if (rA4 != rNil)        goto l_101;
        rA1 = rLit[27];
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (rA1->Val + 2 + (Fix) 2)->Val;
        rA1 = rA1->Val;
        if ((rA1 < GIbstrg) || (rA1 >= GIbsymb)) rA1 = rNil;
        (--rSp)->Val = rA1;
        if (rA1 == rNil)        goto l_103;
        rA4 = (rA1->Val + 1)->Val;
        if ((Fix) (rA4) <= (Fix) 0)     goto l_103;
        rA4 = rLit[58]->Val;
        goto l_104;
l_103:
        rA4 = rLit[27];
l_104:
        rSp->Val = rA4;
        GIa3 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = GIa3;
        {aRet = ((Ptr) GLpath_312); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_312() {       /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpath; rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLpath_313); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLpath_314);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        if (((rSp + 2)->Val < GIbstrg) || ((rSp + 2)->Val >= GIbsymb))  goto l_108;
        rA4 = (rSp + 2)->Val;
        goto l_109;
l_108:
        if ((rSp + 2)->Val != rLit[17]) goto l_110;
        rA4 = rLit[35]->Val;
        goto l_109;
l_110:
        if ((rSp + 2)->Val != rLit[18]) goto l_112;
        rA4 = rLit[38]->Val;
        goto l_109;
l_112:
        if ((rSp + 2)->Val != rLit[16]) goto l_114;
        rA4 = rLit[37]->Val;
        goto l_109;
l_114:
        rA4 = GInil;
l_109:
        (--rSp)->Val = rA4;
        (--rSp)->Val = rLit[58]->Val;
        rA4 = (Ptr) 3;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_314() {       /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 2)->Val = GIa1;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLpath_312); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_313() {       /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_15() {        /* #:unix:file-namestring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil, rBstrg, rBsymb;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil; rBstrg = GIbstrg; rBsymb = GIbsymb;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GXpopj1);
        rA1 = (rA1->Val + 2 + (Fix) 3)->Val;
        if ((rA1 < rBstrg) || (rA1 >= rBsymb)) rA1 = rNil;
        rA4 = rA1;
        if (rA4 != rNil)        goto l_102;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        if (rA4 != rNil)        goto l_103;
        rA4 = rLit[27];
        goto l_102;
l_103:
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        if (rA4 != rLit[18])    goto l_105;
        rA4 = rLit[38]->Val;
        goto l_102;
l_105:
        rA4 = rNil;
l_102:
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 4)->Val;
        if (rA4 == rNil)        goto l_107;
        rA4 = rLit[37]->Val;
        goto l_108;
l_107:
        rA4 = rNil;
l_108:
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 4)->Val;
        if ((rA4 < rBstrg) || (rA4 >= rBsymb))  goto l_109;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 4)->Val;
        goto l_110;
l_109:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 4)->Val;
        if (rA4 != rNil)        goto l_111;
        rA4 = rLit[27];
        goto l_110;
l_111:
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 4)->Val;
        if (rA4 != rLit[18])    goto l_113;
        rA4 = rLit[38]->Val;
        goto l_110;
l_113:
        rA4 = rNil;
l_110:
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 == rNil)        goto l_115;
        rA4 = rLit[37]->Val;
        goto l_116;
l_115:
        rA4 = rNil;
l_116:
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 5)->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 >= GIbfloat)    {aRet = ((Ptr) GLpath_315); goto lRet;}
        rA1 = ((rSp + 5)->Val->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = ((Ptr) GLpath_317);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_317() {       /* call_path_316 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLpath_318); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_315() {       /* 117 */
   {    register Ptr aRet, *rLit, rA4;
        rLit = GYpath; rA4 = GIa4;
        rA4 = ((GIsp + 5)->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 != rLit[18])    goto l_119;
        rA4 = rLit[38]->Val;
        {aRet = ((Ptr) GLpath_318); goto lRet;}
l_119:
        rA4 = rLit[27];
        {aRet = ((Ptr) GLpath_318); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLpath_318() {       /* 118 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa4;
        GIa4 = (Ptr) 5;
        {aRet = (GYpath[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_319() {       /* merge-pathnames */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_321);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_321() {       /* call_path_320 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[52];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_323);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_323() {       /* call_path_322 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_104;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[9];
        rA1 = rLit[52];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        rA1 = rLit[1];
        (--rSp)->Val = ((Ptr) GLpath_325);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_325() {       /* call_path_324 */
   {    register Ptr aRet, rSp, rA1, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        rA4 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        if (rA4 != rNil)        goto l_105;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
l_105:
        (rA1->Val + 2 + (Fix) 0)->Val = rA4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        if (rA4 != rNil)        goto l_106;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
l_106:
        (rA1->Val + 2 + (Fix) 1)->Val = rA4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        if (rA4 != rNil)        goto l_107;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
l_107:
        (rA1->Val + 2 + (Fix) 2)->Val = rA4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        if (rA4 != rNil)        goto l_108;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
l_108:
        (rA1->Val + 2 + (Fix) 3)->Val = rA4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        if (rA4 != rNil)        goto l_109;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 4)->Val;
l_109:
        (rA1->Val + 2 + (Fix) 4)->Val = rA4;
        rA4 = (rSp->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 != rNil)        goto l_110;
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 5)->Val;
l_110:
        (rA1->Val + 2 + (Fix) 5)->Val = rA4;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_326() {       /* combine-pathnames */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_328);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_328() {       /* call_path_327 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[91];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_330);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_330() {       /* call_path_329 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_104;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[9];
        rA1 = rLit[91];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        GIa4 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = GIa4;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_332);
        {aRet = ((Ptr) GLpath_163); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_332() {       /* call_path_331 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLpath_334);
        {aRet = ((Ptr) GLpath_163); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_334() {       /* call_path_333 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = GIa1;
        rA4 = (rSp + 4)->Val;
        if ((rA4->Val >= GIbsymb) && (rA4->Val < GIbcons))      goto l_105;
        (rSp + 2)->Val = rA4;
        {aRet = ((Ptr) GLpath_335); goto lRet;}
l_105:
        GIa1 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = ((Ptr) GLpath_337);
        {aRet = (GYpath[46] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_337() {       /* call_path_336 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        (rSp + 2)->Val = rA1;
l_107:
        rA4 = (rSp + 4)->Val;
        if (rA4->Val != rLit[17])       goto l_108;
        (rSp + 4)->Val = (rA4 + 1)->Val;
        rA1 = (rSp + 2)->Val;
        rA1 = rA1->Val;
        if (rA1 != rLit[17])    goto l_110;
        rA2 = (rSp + 2)->Val;
        rA1 = rLit[17];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 2)->Val = rA1;
        goto l_109;
l_110:
        if (rA1 != rLit[16])    goto l_111;
        rA2 = (rSp + 2)->Val;
        rA2 = (rA2 + 1)->Val;
        rA1 = rLit[17];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rA2);
        (rSp + 2)->Val = rA1;
        goto l_109;
l_111:
        rA4 = (rSp + 2)->Val;
        (rSp + 2)->Val = (rA4 + 1)->Val;
l_109:
        if ((rSp + 2)->Val != rNil)     goto l_107;
        rA1 = rLit[43]->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA1, rNil);
        (rSp + 2)->Val = rA1;
        goto l_107;
l_108:
        if (rA4->Val != rLit[16])       goto l_116;
        (rSp + 4)->Val = (rA4 + 1)->Val;
l_116:
        rA2 = (rSp + 4)->Val;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLpath_339);
        {aRet = (rLit[92] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_339() {       /* call_path_338 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        (rSp + 2)->Val = rA1;
        GIa2 = rLit[43]->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLpath_341);
        {aRet = (rLit[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_341() {       /* call_path_340 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLpath_335); goto lRet;}
        rA4 = (rSp + 2)->Val;
        if ((rA4 + 1)->Val == rNil)     {aRet = ((Ptr) GLpath_335); goto lRet;}
        rA4 = (rSp + 2)->Val;
        (rSp + 2)->Val = (rA4 + 1)->Val;
        {aRet = ((Ptr) GLpath_335); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLpath_335() {       /* 106 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        rA4 = (rSp->Val->Val + 2 + (Fix) 0)->Val;
        if (rA4 != rNil)        goto l_120;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val;
        (rSp->Val->Val + 2 + (Fix) 0)->Val = rA4;
l_120:
        rA4 = (rSp->Val->Val + 2 + (Fix) 1)->Val;
        if (rA4 != rNil)        goto l_122;
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 1)->Val;
        (rSp->Val->Val + 2 + (Fix) 1)->Val = rA4;
l_122:
        (rSp->Val->Val + 2 + (Fix) 2)->Val = (rSp + 2)->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 7;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_342() {       /* enough-namestring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[93];
        rA2 = (Ptr) 1;
        {aRet = (rLit[94] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = rNil;
        goto l_nlist_path_344;
l_nlist_path_343:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_path_344:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_path_343;}
        (--rSp)->Val = rA1;
        if (rA1 != rNil)        goto l_102;
        rSp->Val = rLit[84]->Val;
        {aRet = ((Ptr) GLpath_345); goto lRet;}
l_102:
        rSp->Val = rA1->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLpath_347);
        {aRet = (rLit[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_347() {       /* call_path_346 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_345); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_349);
        {aRet = (GYpath[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_349() {       /* call_path_348 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_345); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_345() {       /* 103 */
   {    register Ptr aRet, *rLit;
        rLit = GYpath;
        GIa1 = rLit[1];
        (--GIsp)->Val = ((Ptr) GLpath_351);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_351() {       /* call_path_350 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
        GIa2 = ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = ((Ptr) GLpath_353);
        {aRet = (GYpath[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_353() {       /* call_path_352 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      goto l_107;
        GIa4 = ((rSp + 2)->Val->Val + 2 + (Fix) 0)->Val;
        (rSp->Val->Val + 2 + (Fix) 0)->Val = GIa4;
l_107:
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 1)->Val;
        GIa2 = ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_355);
        {aRet = (GYpath[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_355() {       /* call_path_354 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      goto l_109;
        GIa4 = ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val;
        (rSp->Val->Val + 2 + (Fix) 1)->Val = GIa4;
l_109:
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        GIa2 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = ((Ptr) GLpath_357);
        {aRet = (GYpath[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_357() {       /* call_path_356 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      goto l_111;
        GIa4 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        (rSp->Val->Val + 2 + (Fix) 2)->Val = GIa4;
l_111:
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 3)->Val;
        GIa2 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = ((Ptr) GLpath_359);
        {aRet = (GYpath[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_359() {       /* call_path_358 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      goto l_113;
        GIa4 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        (rSp->Val->Val + 2 + (Fix) 3)->Val = GIa4;
l_113:
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 4)->Val;
        GIa2 = ((rSp + 2)->Val->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = ((Ptr) GLpath_361);
        {aRet = (GYpath[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_361() {       /* call_path_360 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      goto l_115;
        GIa4 = ((rSp + 2)->Val->Val + 2 + (Fix) 4)->Val;
        (rSp->Val->Val + 2 + (Fix) 4)->Val = GIa4;
l_115:
        GIa1 = ((rSp + 1)->Val->Val + 2 + (Fix) 5)->Val;
        GIa2 = ((rSp + 2)->Val->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = ((Ptr) GLpath_363);
        {aRet = (GYpath[28] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_363() {       /* call_path_362 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      goto l_117;
        GIa4 = ((rSp + 2)->Val->Val + 2 + (Fix) 5)->Val;
        (rSp->Val->Val + 2 + (Fix) 5)->Val = GIa4;
l_117:
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (GYpath[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_364() {       /* true-pathname */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))        {aRet = ((Ptr) GLpath_365); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_367);
        {aRet = (GYpath[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_367() {       /* call_path_366 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_365); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_365() {       /* 102 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_369);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_369() {       /* call_path_368 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_104;
        GIa3 = rSp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[95];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_104:
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLpath_370); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_370() {       /* #:unix:true-pathname */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = rLit[1];
        (--rSp)->Val = ((Ptr) GLpath_372);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_372() {       /* call_path_371 */
   {    register Ptr aRet, *rLit, rSp, rA3, rA4;
        rLit = GYpath; rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = GInil;
        (--rSp)->Val = GIa1;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        if (rA4->Val != rLit[16])       {aRet = ((Ptr) GLpath_373); goto lRet;}
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        rA4 = (rA4 + 1)->Val;
        if ((rA4->Val < GIbstrg) || (rA4->Val >= GIbsymb))      {aRet = ((Ptr) GLpath_373); goto lRet;}
        rA3 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA3 + 1)->Val;
        rA3 = (Ptr) ((unsigned char) *(((char *) (rA3->Val->Val + 2)) + (Fix) 0));
        if (rA3 != (Ptr) 36)    {aRet = ((Ptr) GLpath_373); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_374);
        rA3 = ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val;
        rA3 = (rA3 + 1)->Val;
        (--rSp)->Val = rA3->Val;
        (--rSp)->Val = (Ptr) 1;
        rA4 = (Ptr) 2;
        {aRet = (rLit[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_374() {       /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_376);
        {aRet = (GYpath[57] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_376() {       /* call_path_375 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLpath_373); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_378);
        {aRet = (GYpath[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_378() {       /* call_path_377 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (rSp + 1)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLpath_373); goto lRet;}
        rA4 = (Ptr) ((unsigned char) *(((char *) ((rSp + 1)->Val->Val + 2)) + (Fix) 0));
        if (rA4 == (Ptr) 47)    goto l_104;
        rA1 = (rSp + 1)->Val;
        {aRet = ((Ptr) GLpath_379); goto lRet;}
l_104:
        (--rSp)->Val = ((Ptr) GLpath_379);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        rA4 = (Ptr) 2;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_379() {       /* 105 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        (rSp->Val->Val + 2 + (Fix) 2)->Val = rA1;
        {aRet = ((Ptr) GLpath_380); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLpath_373() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        (rSp->Val->Val + 2 + (Fix) 2)->Val = GIa4;
        {aRet = ((Ptr) GLpath_380); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_380() {       /* 102 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        if ((rA4 < GIbstrg) || (rA4 >= GIbsymb))        {aRet = ((Ptr) GLpath_381); goto lRet;}
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        rA4 = (Ptr) ((unsigned char) *(((char *) (rA4->Val + 2)) + (Fix) 0));
        if (rA4 != (Ptr) 36)    {aRet = ((Ptr) GLpath_381); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_382);
        rA4 = ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = (Ptr) 1;
        rA4 = (Ptr) 2;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_382() {       /* 109 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_384);
        {aRet = (GYpath[57] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_384() {       /* call_path_383 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_386);
        {aRet = (GYpath[4] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_386() {       /* call_path_385 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLpath_381); goto lRet;}
        (rSp->Val->Val + 2 + (Fix) 3)->Val = (rSp + 1)->Val;
        {aRet = ((Ptr) GLpath_387); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_381() {       /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        (rSp->Val->Val + 2 + (Fix) 3)->Val = GIa4;
        {aRet = ((Ptr) GLpath_387); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_387() {       /* 108 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 4)->Val;
        (rSp->Val->Val + 2 + (Fix) 4)->Val = rA4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 5)->Val;
        (rSp->Val->Val + 2 + (Fix) 5)->Val = rA4;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_389);
        {aRet = ((Ptr) GLpath_9); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_389() {       /* call_path_388 */
   {    register Ptr aRet;
        GIsp += (Fix) 3;
        {aRet = (GYpath[29] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_390() {       /* current-directory */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA4;
        if ((Fix) (rSp->Val) <= (Fix) 1)        goto l_101;
        GIa3 = (Ptr) 0;
        GIa2 = rLit[49];
        rA1 = rLit[96];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
        {rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rSp->Val != (Ptr) 0)        goto l_103;
        rA4 = GInil;
        goto l_104;
l_103:
        rA4 = rSp->Val;
        rA4 = (rSp + (Fix) (rA4))->Val;
l_104:
        rA1 = rA4;
        (--rSp)->Val = ((Ptr) GXpopja4);
        {aRet = ((Ptr) GLpath_391); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_391() {       /* #:unix:current-directory */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       {aRet = ((Ptr) GLpath_392); goto lRet;}
        GIa2 = (Ptr) 32;
        rA1 = (Ptr) 1024;
        (--rSp)->Val = ((Ptr) GLpath_394);
        {aRet = (GYpath[97] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_394() {       /* call_path_393 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GIa1;
        GIa2 = (Ptr) 1024;
        (--rSp)->Val = ((Ptr) GLpath_396);
        {aRet = ((Ptr) GLpath_397); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_396() {       /* call_path_395 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (rSp + 1)->Val = rA1;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        rA4 = (Ptr) ((unsigned char) *(((char *) (rSp->Val->Val + 2)) + (Fix) (rA1)));
        if (rA4 == (Ptr) 47)    goto l_104;
        *((char *) (rSp->Val->Val + 2) + (Fix) ((rSp + 1)->Val)) = (char) (Ptr) 47;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 1)->Val = rA4;
l_104:
        (--rSp)->Val = ((Ptr) GXpopj3);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 3;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_392() {       /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_399);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_399() {       /* call_path_398 */
   {    register Ptr aRet, rSp, rA1, rNil, rBstrg, rBsymb;
        rSp = GIsp; rA1 = GIa1; rNil = GInil; rBstrg = GIbstrg; rBsymb = GIbsymb;
        if (rA1 != rNil)        goto l_108;
        if ((rSp->Val < rBstrg) || (rSp->Val >= rBsymb))        {aRet = ((Ptr) GLpath_400); goto lRet;}
l_108:
        rA1 = rSp->Val;
        if ((rA1 < rBstrg) || (rA1 >= rBsymb)) rA1 = rNil;
        GIa4 = rA1;
        if (GIa4 != rNil)       {aRet = ((Ptr) GLpath_401); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_402);
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_404);
        {aRet = (GYpath[89] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_404() {       /* call_path_403 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLpath_406);
        {aRet = (GYpath[87] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_406() {       /* call_path_405 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_402() {       /* 110 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLpath_401); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_401() {       /* 109 */
   {    register Ptr aRet;
        GIa1 = GIa4;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLpath_407); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_400() {       /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        GIa3 = rSp->Val;
        GIa2 = rLit[6];
        GIa1 = rLit[96];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_408() {       /* directoryp */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_410);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_410() {       /* call_path_409 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = ((Ptr) GLpath_411); goto lRet;}
l_101:
        if ((rSp->Val < GIbstrg) || (rSp->Val >= GIbsymb))      {aRet = ((Ptr) GLpath_412); goto lRet;}
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_414);
        {aRet = ((Ptr) GLpath_411); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_414() {       /* call_path_413 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       goto l_105;
        rSp += (Fix) 1;
        {aRet = (GYpath[7] + 2)->Val; goto lRet;}
l_105:
        GIa1 = rNil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_412() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        GIa3 = rSp->Val;
        GIa2 = rLit[6];
        GIa1 = rLit[98];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_411() {       /* #:unix:directoryp */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))        {aRet = ((Ptr) GLpath_415); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_416);
        (--rSp)->Val = (Ptr) 47;
        (--rSp)->Val = rA1;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 3;
        {aRet = (GYpath[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_416() {       /* 105 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_417); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_418);
        (--rSp)->Val = rLit[42];
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_418() {       /* 106 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_417); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_417() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_420);
        {aRet = (GYpath[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_420() {       /* call_path_419 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_421); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_415() {       /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_423);
        {aRet = (GYpath[47] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_423() {       /* call_path_422 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_421); goto lRet;}
        GIa2 = rLit[99];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_421);
        {aRet = (rLit[13] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_421() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_425);
        {aRet = (GYpath[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_425() {       /* call_path_424 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_427);
        {aRet = ((Ptr) GLpath_428); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_427() {       /* call_path_426 */
   {    register Ptr aRet, rSp, rA4, rNil;
        rSp = GIsp; rA4 = GIa4; rNil = GInil;
        if (GIa1 != (Ptr) 0)    {aRet = ((Ptr) GLpath_429); goto lRet;}
        rA4 = (rSp->Val->Val + 2 + (Fix) 3)->Val;
        if (rA4 != rNil)        goto l_113;
        rA4 = (rSp->Val->Val + 2 + (Fix) 4)->Val;
        if (rA4 != rNil)        goto l_113;
        rA4 = (rSp->Val->Val + 2 + (Fix) 5)->Val;
        if (rA4 == rNil)        {aRet = ((Ptr) GLpath_430); goto lRet;}
l_113:
        (--rSp)->Val = ((Ptr) GXpopj1);
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLpath_431);
        rA4 = ((rSp + 4)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLpath_432);
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLpath_434);
        {aRet = (GYpath[86] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_434() {       /* call_path_433 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYpath[100] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_432() {       /* 116 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[101] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_431() {       /* 115 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        GIa4 = (Ptr) 6;
        {aRet = (GYpath[85] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_430() {       /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_429() {       /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_435() {       /* file-in-pattern */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_437);
        {aRet = (GYpath[86] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_437() {       /* call_path_436 */
   {    register Ptr aRet, *rLit;
        rLit = GYpath;
        GIa2 = rLit[27];
        (--GIsp)->Val = ((Ptr) GLpath_439);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_439() {       /* call_path_438 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLpath_440); goto lRet;}
        GIa4 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = GIa4;
        rA1 = ((rSp + 1)->Val->Val + 2 + (Fix) 2)->Val;
        rA1 = llrt_call_length (rA1, GIbcons);
        (--rSp)->Val = rA1;
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_442);
        {aRet = (GYpath[102] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_442() {       /* call_path_441 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val = GIa1->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_444);
        {aRet = (GYpath[103] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_444() {       /* call_path_443 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp->Val = GIa1;
        GIa2 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_446);
        {aRet = (GYpath[104] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_446() {       /* call_path_445 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val = rA1;
        rSp += (Fix) 2;
        GIa4 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        if (GIa4 != rNil)       {aRet = ((Ptr) GLpath_440); goto lRet;}
        rA1 = GYpath[43]->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, rNil);
        (rSp->Val->Val + 2 + (Fix) 2)->Val = rA1;
        {aRet = ((Ptr) GLpath_440); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_440() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_447() {       /* expand-pathname */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))        {aRet = ((Ptr) GLpath_448); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_450);
        {aRet = (GYpath[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_450() {       /* call_path_449 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLpath_451); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_448() {       /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_453);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_453() {       /* call_path_452 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLpath_454); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_456);
        {aRet = (GYpath[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_456() {       /* call_path_455 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLpath_451); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_454() {       /* 103 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYpath; rA1 = GIa1;
        GIa3 = GIsp->Val;
        GIa2 = rLit[9];
        rA1 = rLit[105];
        GIa1 = rA1; rA1 = llrt_call_error ();
        GIa4 = rA1;
        {aRet = ((Ptr) GLpath_451); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_451() {       /* 102 */
   {    register Ptr aRet;
        GIa1 = GIa4;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLpath_457); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_458() {       /* map-expand-pathname */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        if ((rA2 < GIbstrg) || (rA2 >= GIbsymb))        {aRet = ((Ptr) GLpath_459); goto lRet;}
        GIa1 = rA2;
        (--rSp)->Val = ((Ptr) GLpath_461);
        {aRet = (GYpath[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_461() {       /* call_path_460 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLpath_462); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_459() {       /* 101 */
   {    register Ptr aRet;
        GIa1 = GIa2;
        (--GIsp)->Val = ((Ptr) GLpath_464);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_464() {       /* call_path_463 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLpath_465); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_467);
        {aRet = (GYpath[45] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_467() {       /* call_path_466 */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLpath_462); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_465() {       /* 103 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYpath; rA1 = GIa1;
        GIa3 = (GIsp + 1)->Val;
        GIa2 = rLit[9];
        rA1 = rLit[106];
        GIa1 = rA1; rA1 = llrt_call_error ();
        GIa4 = rA1;
        {aRet = ((Ptr) GLpath_462); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_462() {       /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa4;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = ((Ptr) GLpath_468); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_457() {       /* #:unix:wild */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_470);
        {aRet = (GYpath[98] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_470() {       /* call_path_469 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_101;
        GIa2 = rNil;
        rA1 = rSp->Val;
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_472);
        {aRet = ((Ptr) GLpath_435); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_472() {       /* call_path_471 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_474);
        {aRet = (GYpath[86] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_474() {       /* call_path_473 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_476);
        {aRet = ((Ptr) GLpath_477); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_476() {       /* call_path_475 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_479);
        {aRet = ((Ptr) GLpath_480); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_479() {       /* call_path_478 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GInil;
        {aRet = ((Ptr) GLpath_481); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_481() {       /* 103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLpath_482); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa3 = GInil;
        GIa2 = (rSp + 3)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_484);
        {aRet = ((Ptr) GLpath_485); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_484() {       /* call_path_483 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_487);
        {aRet = (GYpath[92] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_487() {       /* call_path_486 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_481); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_482() {       /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rSp += (Fix) 4;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_468() {       /* #:unix:map-wild */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        GIa1 = rA2;
        (--rSp)->Val = ((Ptr) GLpath_489);
        {aRet = (GYpath[98] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_489() {       /* call_path_488 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_101;
        GIa2 = rNil;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_491);
        {aRet = ((Ptr) GLpath_435); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_491() {       /* call_path_490 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 1)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_493);
        {aRet = (GYpath[86] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_493() {       /* call_path_492 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_495);
        {aRet = ((Ptr) GLpath_477); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_495() {       /* call_path_494 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLpath_497);
        {aRet = ((Ptr) GLpath_480); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_497() {       /* call_path_496 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        {aRet = ((Ptr) GLpath_498); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_498() {       /* 103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLpath_499); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        GIa3 = (rSp + 3)->Val;
        GIa2 = (rSp + 2)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_501);
        {aRet = ((Ptr) GLpath_485); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_501() {       /* call_path_500 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLpath_498); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_499() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_428() {       /* lldirectoryp */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (GIa1->Val)+2);
         callg_retv = ((long) lldirectoryp(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_397() {       /* llgetwd */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         callg_arg1 = ((Ptr) (GIa1->Val)+2);
         callg_arg2 = ((Fix) GIa2);
         callg_retv = ((long) llgetwd(callg_arg1,callg_arg2));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_502() {       /* llopendir */
   {    register Ptr aRet;
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (GIa1->Val)+2);
         callg_retv = ((Ptr) llopendir(callg_arg1));
         GIa1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (GYpath[107] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_503() {       /* llreaddir */
   {    register Ptr aRet;
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((Ptr) llreaddir(callg_arg1));
         GIa1 = Cstring_to_Lstring((char *) callg_retv);
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_504() {       /* llclosedir */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(GIa1);
         callg_retv = ((long) llclosedir(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_407() {       /* cchdir */
   {    register Ptr aRet;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (GIa1->Val)+2);
         callg_retv = ((long) cchdir(callg_arg1));
         GIa1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_480() {       /* #:c-wild:expand-tree */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_506);
        {aRet = (GYpath[47] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_506() {       /* call_path_505 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLpath_507); goto lRet;}
        rA1 = rLit[1];
        (--rSp)->Val = ((Ptr) GLpath_509);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_509() {       /* call_path_508 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        rA4 = (rSp + 1)->Val;
        if (rA4->Val != rLit[16])       {aRet = ((Ptr) GLpath_510); goto lRet;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLpath_511);
        (--rSp)->Val = rLit[16];
        rA4 = (Ptr) 1;
        {aRet = (rLit[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_511() {       /* 105 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 2)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_512);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (GYpath[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_512() {       /* 106 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        rA2 = (rSp + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLpath_513); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLpath_510() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        if (GIa4->Val != rLit[17])      {aRet = ((Ptr) GLpath_514); goto lRet;}
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_515);
        (--rSp)->Val = rLit[17];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_515() {       /* 109 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        (rA4->Val + 2 + (Fix) 2)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_516);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 1;
        {aRet = (GYpath[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_516() {       /* 110 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        rA2 = (rSp + 1)->Val;
        rA2 = (rA2 + 1)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLpath_513); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLpath_514() {       /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLpath_518);
        {aRet = (GYpath[108] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_518() {       /* call_path_517 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 0)->Val = GIa1;
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLpath_520);
        {aRet = (GYpath[109] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_520() {       /* call_path_519 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 1)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_521);
        (--rSp)->Val = rLit[39];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_521() {       /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 2)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_522);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpath[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_522() {       /* 112 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpath; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = (rSp + 2)->Val;
        if (rA4->Val == rLit[39])       {aRet = ((Ptr) GLpath_523); goto lRet;}
        GIa2 = rLit[27];
        GIa1 = rA4->Val;
        (--rSp)->Val = ((Ptr) GLpath_525);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_525() {       /* call_path_524 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLpath_526); goto lRet;}
        {aRet = ((Ptr) GLpath_523); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_523() {       /* 115 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        rA2 = (GIsp + 2)->Val;
        rA2 = (rA2 + 1)->Val;
        {aRet = ((Ptr) GLpath_527); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLpath_526() {       /* 113 */
   {    register Ptr aRet;
        GIa2 = (GIsp + 2)->Val;
        {aRet = ((Ptr) GLpath_527); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_527() {       /* 114 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLpath_513); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_507() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj2);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpath[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_513() {       /* #:c-wild:wild-tree */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        (--rSp)->Val = rA2;
        if (rA1 == rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        if (rA2 == rNil)        {rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = rNil;
        {aRet = ((Ptr) GLpath_528); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_528() {       /* 103 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((long) (rSp + 1)->Val < (long) GIbcons)     {aRet = ((Ptr) GLpath_529); goto lRet;}
        rA4 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = ((Ptr) GLpath_530);
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_532);
        {aRet = (GYpath[87] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_532() {       /* call_path_531 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = (rSp + 5)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = (Ptr) 2;
        {aRet = (GYpath[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_530() {       /* 107 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_534);
        {aRet = (GYpath[98] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_534() {       /* call_path_533 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLpath_535); goto lRet;}
        GIa1 = (rSp->Val->Val + 2 + (Fix) 2)->Val;
        rA2 = (rSp + 3)->Val;
        rA2 = rA2->Val;
        (--rSp)->Val = ((Ptr) GLpath_537);
        {aRet = (GYpath[110] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLpath_537() {       /* call_path_536 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 2)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_538);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpath[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_535() {       /* 105 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp + 3)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLpath_540);
        {aRet = ((Ptr) GLpath_477); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_540() {       /* call_path_539 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_538);
        {aRet = ((Ptr) GLpath_541); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_538() {       /* 106 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        rA2 = (rSp + 3)->Val;
        rA2 = (rA2 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLpath_543);
        {aRet = ((Ptr) GLpath_513); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLpath_543() {       /* call_path_542 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        GIa2 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_545);
        {aRet = (GYpath[92] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_545() {       /* call_path_544 */
   {    register Ptr aRet;
        GIsp->Val = GIa1;
        {aRet = ((Ptr) GLpath_528); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_529() {       /* 104 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = rSp->Val;
        rSp += (Fix) 3;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_541() {       /* #:c-wild:get-directories */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_547);
        {aRet = (GYpath[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_547() {       /* call_path_546 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_549);
        {aRet = ((Ptr) GLpath_502); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_549() {       /* call_path_548 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 >= GIbfloat)    goto l_101;
        if (rA1 != (Ptr) 0)     goto l_101;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[111];
        rA1 = rLit[105];
        rSp += (Fix) 3;
        {aRet = (rLit[69] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLpath_550);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        rA1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLpath_552);
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_552() {       /* call_path_551 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = GIa1;
        {aRet = ((Ptr) GLpath_553); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_553() {       /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 8)->Val;
        (--rSp)->Val = ((Ptr) GLpath_555);
        {aRet = ((Ptr) GLpath_503); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_555() {       /* call_path_554 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (rSp + 3)->Val = GIa1;
        GIa2 = rLit[27];
        (--rSp)->Val = ((Ptr) GLpath_557);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_557() {       /* call_path_556 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_558); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_559);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_559() {       /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 2)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_561);
        {aRet = (GYpath[98] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_561() {       /* call_path_560 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLpath_553); goto lRet;}
        GIa2 = rLit[112];
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLpath_563);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_563() {       /* call_path_562 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_553); goto lRet;}
        GIa2 = rLit[113];
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLpath_565);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_565() {       /* call_path_564 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_553); goto lRet;}
        GIa3 = (Ptr) 0;
        GIa2 = (rSp + 10)->Val;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLpath_567);
        {aRet = ((Ptr) GLpath_568); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_567() {       /* call_path_566 */
   {    register Ptr aRet, *rLit;
        rLit = GYpath;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLpath_553); goto lRet;}
        GIa1 = rLit[1];
        (--GIsp)->Val = ((Ptr) GLpath_570);
        {aRet = (rLit[25] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_570() {       /* call_path_569 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (rSp + 1)->Val = rA1;
        (--rSp)->Val = rA1;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 0)->Val;
        (rA1->Val + 2 + (Fix) 0)->Val = rA4;
        rA4 = ((rSp + 10)->Val->Val + 2 + (Fix) 1)->Val;
        (rA1->Val + 2 + (Fix) 1)->Val = rA4;
        (--rSp)->Val = rA1;
        rA1 = ((rSp + 11)->Val->Val + 2 + (Fix) 2)->Val;
        GIa2 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLpath_572);
        {aRet = (GYpath[110] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_572() {       /* call_path_571 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa4 = (rSp++)->Val;
        (GIa4->Val + 2 + (Fix) 2)->Val = rA1;
        rA1 = (rSp++)->Val;
        GIa2 = (rSp + 4)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 4)->Val = rA1;
        {aRet = ((Ptr) GLpath_553); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_558() {       /* 106 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp + 4)->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        rSp += (Fix) 5;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = rA1;
        GIa3 = ((Ptr) GXpopj3);
        {aRet = ((Ptr) GLpath_550); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_550() {       /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLpath_574);
        {aRet = ((Ptr) GLpath_504); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_574() {       /* call_path_573 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_485() {       /* #:c-wild:get-entries */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        GIa4 = (rA1->Val + 2 + (Fix) 2)->Val;
        if (GIa4 == rNil)       {aRet = ((Ptr) GLpath_575); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_577);
        {aRet = (GYpath[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_577() {       /* call_path_576 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp + 2)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_579);
        {aRet = ((Ptr) GLpath_502); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_579() {       /* call_path_578 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLpath_580); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_575() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        (rSp + 2)->Val = rLit[27];
        GIa1 = rLit[112];
        (--rSp)->Val = ((Ptr) GLpath_582);
        {aRet = ((Ptr) GLpath_502); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_582() {       /* call_path_581 */
   {    register Ptr aRet;
        (GIsp + 1)->Val = GIa1;
        {aRet = ((Ptr) GLpath_580); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_580() {       /* 102 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1;
        if (rA1 >= GIbfloat)    goto l_103;
        if (rA1 != (Ptr) 0)     goto l_103;
        GIa3 = (rSp + 3)->Val;
        GIa2 = rLit[111];
        rA1 = rLit[105];
        rSp += (Fix) 6;
        {aRet = (rLit[69] + 2)->Val; goto lRet;}
l_103:
        (--rSp)->Val = ((Ptr) GLpath_583);
        GIa4 = (Ptr) 0;
        {aRet = (rLit[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_583() {       /* 105 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        rSp->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_584);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = ((Ptr) GLpath_585);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpath[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_585() {       /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 6)->Val;
        (--rSp)->Val = ((Ptr) GLpath_587);
        {aRet = ((Ptr) GLpath_503); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_587() {       /* call_path_586 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYpath; rSp = GIsp;
        rSp->Val = GIa1;
        GIa2 = rLit[27];
        (--rSp)->Val = ((Ptr) GLpath_589);
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_589() {       /* call_path_588 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLpath_590); goto lRet;}
        GIa3 = (Ptr) 0;
        GIa2 = (rSp + 9)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_592);
        {aRet = ((Ptr) GLpath_568); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_592() {       /* call_path_591 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLpath_585); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_594);
        {aRet = (GYpath[114] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_594() {       /* call_path_593 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLpath_585); goto lRet;}
        if ((rSp + 10)->Val == rNil)    {aRet = ((Ptr) GLpath_595); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_596);
        GIa4 = (Ptr) 0;
        {aRet = (GYpath[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_596() {       /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_597);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLpath_598);
        {register Ptr aux;
                aux = (rSp + 10)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpath[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_598() {       /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpath_599);
        {register Ptr aux;
                aux = (rSp + 15)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLpath_600);
        {register Ptr aux;
                aux = (rSp + 14)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_600() {       /* 120 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_602);
        {aRet = (GYpath[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_602() {       /* call_path_601 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[115] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_599() {       /* 119 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLpath_603);
        {aRet = ((Ptr) GLpath_597); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_597() {       /* 116 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLpath_604);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpath[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_604() {       /* 121 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_603() {       /* 117 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLpath_585); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_595() {       /* 113 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLpath_605);
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[8] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_605() {       /* 122 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLpath_607);
        {aRet = (GYpath[1] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_607() {       /* call_path_606 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 1)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 1)->Val = rA1;
        {aRet = ((Ptr) GLpath_585); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_590() {       /* 110 */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if ((rSp + 10)->Val != rNil)    goto l_123;
        rA1 = (rSp + 1)->Val;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        goto l_124;
l_123:
        rA1 = rNil;
l_124:
        rSp += (Fix) 2;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = rA1;
        GIa3 = ((Ptr) GXpopj6);
        {aRet = ((Ptr) GLpath_584); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_584() {       /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLpath_608);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYpath[96] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_608() {       /* 125 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 4)->Val;
        (--rSp)->Val = ((Ptr) GLpath_610);
        {aRet = ((Ptr) GLpath_504); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_610() {       /* call_path_609 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_477() {       /* #:c-wild:match-compile */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))        {aRet = ((Ptr) GLpath_611); goto lRet;}
        GIa4 = (rA1->Val + 1)->Val;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = (Ptr) 0;
        (--rSp)->Val = GInil;
        (--rSp)->Val = GIa4;
        {aRet = ((Ptr) GLpath_612); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_612() {       /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpath; rSp = GIsp; rA4 = GIa4;
        if ((Fix) ((rSp + 3)->Val) >= (Fix) (rSp->Val)) {aRet = ((Ptr) GLpath_613); goto lRet;}
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rLit[116]->Val)));
        if ((Fix) ((rSp + 3)->Val) > (Fix) (rA4))       {aRet = ((Ptr) GLpath_614); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_615);
        (--rSp)->Val = rLit[116]->Val;
        (--rSp)->Val = rLit[38]->Val;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[117] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_615() {       /* 107 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLpath_614); goto lRet;}
        if ((rSp + 3)->Val == (rSp + 2)->Val)   {aRet = ((Ptr) GLpath_616); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_617);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) ((rSp + 5)->Val)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_617() {       /* 110 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 1)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 1)->Val = rA1;
        {aRet = ((Ptr) GLpath_616); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_616() {       /* 109 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        GIa2 = (rSp + 1)->Val;
        rA1 = rLit[18];
        GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 1)->Val = rA1;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rLit[116]->Val)));
        (rSp + 3)->Val = rA4;
        (rSp + 2)->Val = rA4;
        {aRet = ((Ptr) GLpath_612); goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_614() {       /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYpath; rSp = GIsp; rA4 = GIa4;
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rLit[118]->Val)));
        if ((Fix) ((rSp + 3)->Val) > (Fix) (rA4))       {aRet = ((Ptr) GLpath_618); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_619);
        (--rSp)->Val = rLit[118]->Val;
        (--rSp)->Val = rLit[119]->Val;
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 8)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (rLit[117] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_619() {       /* 113 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLpath_618); goto lRet;}
        if ((rSp + 3)->Val == (rSp + 2)->Val)   {aRet = ((Ptr) GLpath_620); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_621);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        rA4 = (rSp + 6)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) ((rSp + 5)->Val)));
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 3;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_621() {       /* 116 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 1)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 1)->Val = rA1;
        {aRet = ((Ptr) GLpath_620); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_620() {       /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        GIa2 = (rSp + 1)->Val;
        rA1 = rLit[120];
        GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 1)->Val = rA1;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rLit[118]->Val)));
        (rSp + 3)->Val = rA4;
        (rSp + 2)->Val = rA4;
        {aRet = ((Ptr) GLpath_612); goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_618() {       /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLpath_623);
        {aRet = (GYpath[121] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_623() {       /* call_path_622 */
   {    register Ptr aRet;
        (GIsp + 3)->Val = GIa1;
        {aRet = ((Ptr) GLpath_612); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_613() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((rSp + 3)->Val == (rSp + 2)->Val)   {aRet = ((Ptr) GLpath_624); goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_625);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYpath[34] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_625() {       /* 119 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp + 1)->Val;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
        (rSp + 1)->Val = rA1;
        {aRet = ((Ptr) GLpath_624); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLpath_624() {       /* 118 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 5;
        rA1 = llrt_call_nreverse (rA1, GIbcons);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLpath_611() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYpath[100] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_568() {       /* #:c-wild:match-step */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        rA4 = (rA1->Val + 1)->Val;
        (--rSp)->Val = rA2->Val;
        if ((rSp->Val < GIbstrg) || (rSp->Val >= GIbsymb))      {aRet = ((Ptr) GLpath_626); goto lRet;}
        rA4 = (rSp->Val->Val + 1)->Val;
        (--rSp)->Val = rA4;
        rA2 = (rA1->Val + 1)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) (rA3)));
        rA1 = rA4;
        rA1 = ((Fix) (rA1) <= (Fix) (rA2)) ? rA1 : rNil;
        if (rA1 == rNil)        {rSp += (Fix) 5; aRet = (rSp++)->Val; goto lRet;}
        (--rSp)->Val = ((Ptr) GLpath_627);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        rA4 = (Ptr) 5;
        {aRet = (GYpath[117] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_627() {       /* 104 */
   {    register Ptr aRet, rSp, rA2, rA4;
        rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
        if (GIa1 == GInil)      {rSp += (Fix) 5; aRet = (rSp++)->Val; goto lRet;}
        rA2 = (rSp + 3)->Val;
        rA4 = (rSp + 4)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rSp->Val)));
        GIa3 = rA4;
        rA2 = (rA2 + 1)->Val;
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 5;
        {aRet = ((Ptr) GLpath_568); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_626() {       /* 101 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil;
        rLit = GYpath; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rSp->Val != rNil)   goto l_105;
        rA2 = rA4;
        rA1 = rA3;
        rSp += (Fix) 4;
        rA1 = ((Fix) (rA1) == (Fix) (rA2)) ? rA1 : rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_105:
        if ((rSp->Val < GIbsymb) || (rSp->Val >= GIbcons))      goto l_107;
        rA1 = rSp->Val;
        if (rA1 != rLit[120])   goto l_110;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rA3)));
        rA2 = (Ptr) 1;
        rA1 = rA4;
        rA1 = ((Fix) (rA1) >= (Fix) (rA2)) ? rA1 : rNil;
        if (rA1 == rNil)        {rSp += (Fix) 4; aRet = (rSp++)->Val; goto lRet;}
        rA2 = (rSp + 2)->Val;
        rA4 = (rSp + 3)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        rA3 = rA4;
        rA2 = (rA2 + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLpath_568); goto lRet;}
l_110:
        if (rA1 != rLit[18])    goto l_112;
        if ((rA2 + 1)->Val == rNil)     goto l_114;
        rA1 = rNil;
        goto l_115;
l_114:
        rA1 = rLit[3];
l_115:
        if (rA1 != rNil)        {rSp += (Fix) 4; aRet = (rSp++)->Val; goto lRet;}
        rA2 = (rA2 + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLpath_628); goto lRet;}
l_112:
        rA3 = rA1;
        rA2 = rLit[122];
        rA1 = rLit[105];
        rSp += (Fix) 4;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_107:
        rA1 = rNil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_628() {       /* #:c-wild:match-sweep-string */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2->Val;
        (--rSp)->Val = GInil;
        (--rSp)->Val = ((Ptr) GLpath_629);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa3;
        GIa4 = (Ptr) 3;
        {aRet = (GYpath[41] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_629() {       /* 103 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rSp->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLpath_630); goto lRet;}
        rA2 = (rSp + 3)->Val;
        GIa4 = ((rSp + 1)->Val->Val + 1)->Val;
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (GIa4)));
        GIa3 = rA1;
        rA2 = (rA2 + 1)->Val;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLpath_632);
        {aRet = ((Ptr) GLpath_568); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLpath_632() {       /* call_path_631 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if (GIa1 != GInil)      {rSp += (Fix) 4; aRet = (rSp++)->Val; goto lRet;}
        rA4 = rSp->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        GIa3 = rA4;
        GIa2 = (rSp + 3)->Val;
        GIa1 = (rSp + 2)->Val;
        rSp += (Fix) 4;
        {aRet = ((Ptr) GLpath_628); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLpath_630() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_633() {       /* wildcard */
   {    register Ptr aRet;
        {aRet = (GYpath[105] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLpath_634() {       /* coerce-namestring */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLpath_636);
        {aRet = (GYpath[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_636() {       /* call_path_635 */
   {    register Ptr aRet, *rLit, rSp, rNil;
        rLit = GYpath; rSp = GIsp; rNil = GInil;
        if (GIa1 == rNil)       {aRet = ((Ptr) GLpath_637); goto lRet;}
        if (rLit[123]->Val == rNil)     {aRet = ((Ptr) GLpath_638); goto lRet;}
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLpath_638);
        {aRet = (rLit[66] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_638() {       /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (GYpath[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLpath_637() {       /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDpath_639() {       /* trace #:pathname:make */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,124,125,126);
  lRet:  return (aRet);}}

static Ptr GDpath_640() {       /* trace pathnamep */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,5,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_641() {       /* trace namestring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,7,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_642() {       /* trace pathname-host */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,108,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_643() {       /* trace pathname-device */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,109,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_644() {       /* trace pathname-directory */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,47,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_645() {       /* trace pathname-name */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,128,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_646() {       /* trace pathname-type */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,129,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_647() {       /* trace pathname-version */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,130,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_648() {       /* trace set-pathname-host */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,10,125,131);
  lRet:  return (aRet);}}

static Ptr GDpath_649() {       /* trace set-pathname-device */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,12,125,131);
  lRet:  return (aRet);}}

static Ptr GDpath_650() {       /* trace set-pathname-directory */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,13,125,131);
  lRet:  return (aRet);}}

static Ptr GDpath_651() {       /* trace set-pathname-name */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,19,125,131);
  lRet:  return (aRet);}}

static Ptr GDpath_652() {       /* trace set-pathname-type */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,21,125,131);
  lRet:  return (aRet);}}

static Ptr GDpath_653() {       /* trace set-pathname-version */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,22,125,131);
  lRet:  return (aRet);}}

static Ptr GDpath_654() {       /* trace copy-pathname */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,45,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_655() {       /* trace pathname */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,1,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_656() {       /* trace #:unix:pathname */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,29,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_657() {       /* trace equal-pathname */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,48,125,131);
  lRet:  return (aRet);}}

static Ptr GDpath_658() {       /* trace user-homedir-pathname */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,51,125,126);
  lRet:  return (aRet);}}

static Ptr GDpath_659() {       /* trace control-file-pathname */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,50,125,132);
  lRet:  return (aRet);}}

static Ptr GDpath_660() {       /* trace temporary-file-pathname */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,133,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_661() {       /* trace portable-pathname-p */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,66,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_662() {       /* trace #:pathname:prin */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,134,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_663() {       /* trace make-pathname */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,85,125,132);
  lRet:  return (aRet);}}

static Ptr GDpath_664() {       /* trace file-namestring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,86,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_665() {       /* trace directory-namestring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,87,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_666() {       /* trace host-namestring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,88,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_667() {       /* trace device-namestring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,89,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_668() {       /* trace merge-pathnames */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,52,125,131);
  lRet:  return (aRet);}}

static Ptr GDpath_669() {       /* trace combine-pathnames */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,91,125,131);
  lRet:  return (aRet);}}

static Ptr GDpath_670() {       /* trace enough-namestring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,93,125,132);
  lRet:  return (aRet);}}

static Ptr GDpath_671() {       /* trace true-pathname */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,95,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_672() {       /* trace current-directory */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,96,125,132);
  lRet:  return (aRet);}}

static Ptr GDpath_673() {       /* trace directoryp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,98,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_674() {       /* trace expand-pathname */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,105,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_675() {       /* trace map-expand-pathname */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,106,125,131);
  lRet:  return (aRet);}}

static Ptr GDpath_676() {       /* trace wildcard */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,135,125,127);
  lRet:  return (aRet);}}

static Ptr GDpath_677() {       /* trace coerce-namestring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYpath,136,125,127);
  lRet:  return (aRet);}}

