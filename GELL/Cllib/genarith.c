/* GELL 15.26: source file for the module: "genarith" */
/*             translation done:           "Wed June 16 93 18:00:49 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "genarith.h" 

static Ptr GLgenarith_1() {     /* #:genarith:+ */
   {    register Ptr aRet, rSp, rA2, rBfloat;
        rSp = GIsp; rA2 = GIa2; rBfloat = GIbfloat;
        (--rSp)->Val = rA2;
        if (GIa1 >= rBfloat)    {aRet = ((Ptr) GLgenarith_2); goto lRet;}
        if (rA2 >= rBfloat)     {aRet = ((Ptr) GLgenarith_2); goto lRet;}
        (--rSp)->Val = ((Ptr) GLgenarith_4);
        {aRet = (GYgenarith[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_4() {     /* call_genarith_3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_6);
        {aRet = (GYgenarith[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_6() {     /* call_genarith_5 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        GIsp = rSp; GIa4 = rA4; rA4 = llrt_fadd (rA4, GIa1);
        GIa1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLgenarith_2() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = GYgenarith[1];
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        GIa4 = (Ptr) 3;
        {aRet = ((Ptr) GLgenarith_7); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_8() {     /* #:genarith:- */
   {    register Ptr aRet, rSp, rA2, rBfloat;
        rSp = GIsp; rA2 = GIa2; rBfloat = GIbfloat;
        (--rSp)->Val = rA2;
        if (GIa1 >= rBfloat)    {aRet = ((Ptr) GLgenarith_9); goto lRet;}
        if (rA2 >= rBfloat)     {aRet = ((Ptr) GLgenarith_9); goto lRet;}
        (--rSp)->Val = ((Ptr) GLgenarith_11);
        {aRet = (GYgenarith[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_11() {    /* call_genarith_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_13);
        {aRet = (GYgenarith[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_13() {    /* call_genarith_12 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        GIsp = rSp; GIa4 = rA4; rA4 = llrt_fsub (rA4, GIa1);
        GIa1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLgenarith_9() {     /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = GYgenarith[2];
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        GIa4 = (Ptr) 3;
        {aRet = ((Ptr) GLgenarith_7); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_14() {    /* #:genarith:0- */
   {    register Ptr aRet;
        if (GIa1 >= GIbfloat)   {aRet = ((Ptr) GLgenarith_15); goto lRet;}
        (--GIsp)->Val = ((Ptr) GLgenarith_17);
        {aRet = (GYgenarith[0] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgenarith_17() {    /* call_genarith_16 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = GYgenarith[3];
        GIa4 = rA4; rA4 = llrt_fsub (rA4, GIa1);
        GIa1 = rA4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLgenarith_15() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GYgenarith[4];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = ((Ptr) GLgenarith_7); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_18() {    /* #:genarith:* */
   {    register Ptr aRet, rSp, rA2, rBfloat;
        rSp = GIsp; rA2 = GIa2; rBfloat = GIbfloat;
        (--rSp)->Val = rA2;
        if (GIa1 >= rBfloat)    {aRet = ((Ptr) GLgenarith_19); goto lRet;}
        if (rA2 >= rBfloat)     {aRet = ((Ptr) GLgenarith_19); goto lRet;}
        (--rSp)->Val = ((Ptr) GLgenarith_21);
        {aRet = (GYgenarith[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_21() {    /* call_genarith_20 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_23);
        {aRet = (GYgenarith[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_23() {    /* call_genarith_22 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        GIsp = rSp; GIa4 = rA4; rA4 = llrt_fmul (rA4, GIa1);
        GIa1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLgenarith_19() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = GYgenarith[5];
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        GIa4 = (Ptr) 3;
        {aRet = ((Ptr) GLgenarith_7); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_24() {    /* #:genarith:/ */
   {    register Ptr aRet, rSp, rA1, rA2, rBfloat;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
        (--rSp)->Val = rA2;
        if (rA1 >= rBfloat)     {aRet = ((Ptr) GLgenarith_25); goto lRet;}
        if (rA2 >= rBfloat)     {aRet = ((Ptr) GLgenarith_25); goto lRet;}
        if ((Ptr) 0 != rA2)     {aRet = ((Ptr) GLgenarith_26); goto lRet;}
        (--rSp)->Val = ((Ptr) GLgenarith_27);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA2;
        GIa4 = (Ptr) 2;
        {aRet = (GYgenarith[6] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_27() {    /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYgenarith; rSp = GIsp; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[7];
        rA1 = rLit[8];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLgenarith_26() {    /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLgenarith_29);
        {aRet = (GYgenarith[0] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgenarith_29() {    /* call_genarith_28 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_31);
        {aRet = (GYgenarith[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_31() {    /* call_genarith_30 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        GIsp = rSp; GIa4 = rA4; rA4 = llrt_fdiv (rA4, GIa1);
        GIa1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLgenarith_25() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = GYgenarith[8];
        (--rSp)->Val = GIa1;
        (--rSp)->Val = GIa2;
        GIa4 = (Ptr) 3;
        {aRet = ((Ptr) GLgenarith_7); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_32() {    /* #:genarith:1/ */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYgenarith; rSp = GIsp; rA1 = GIa1;
        if (rA1 >= GIbfloat)    {aRet = ((Ptr) GLgenarith_33); goto lRet;}
        if (rA1 != (Ptr) 0)     goto l_103;
        GIa3 = rA1;
        GIa2 = rLit[7];
        rA1 = rLit[9];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        (--rSp)->Val = ((Ptr) GLgenarith_35);
        {aRet = (rLit[0] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLgenarith_35() {    /* call_genarith_34 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = GYgenarith[10];
        GIa4 = rA4; rA4 = llrt_fdiv (rA4, GIa1);
        GIa1 = rA4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLgenarith_33() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = GYgenarith[9];
        (--rSp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = ((Ptr) GLgenarith_7); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_36() {    /* #:genarith:quomod */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLgenarith_37);
        (--rSp)->Val = rA1;
        rA1 = rA2;
        (--rSp)->Val = ((Ptr) GLgenarith_39);
        {aRet = (GYgenarith[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLgenarith_39() {    /* call_genarith_38 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYgenarith[8] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgenarith_37() {    /* 101 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLgenarith_41);
        {aRet = (GYgenarith[12] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgenarith_41() {    /* call_genarith_40 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLgenarith_42);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLgenarith_43);
        GIa1 = (rSp + 5)->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_45);
        {aRet = (GYgenarith[11] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_45() {    /* call_genarith_44 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYgenarith[5] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_43() {    /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYgenarith[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgenarith_42() {    /* 102 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgenarith; rSp = GIsp;
        rLit[13]->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLgenarith_46);
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_46() {    /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      goto l_104;
        (--rSp)->Val = ((Ptr) GXpopj3);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYgenarith[2] + 2)->Val; goto lRet;}
l_104:
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_7() {     /* #:genarith:error */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = rNil;
        goto l_nlist_genarith_48;
l_nlist_genarith_47:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_genarith_48:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_genarith_47;}
        (--rSp)->Val = rA1;
l_101:
        if (rSp->Val == rNil)   goto l_102;
        rA4 = rSp->Val;
        if (rA4->Val < GIbfloat)        goto l_105;
        if (llrt_floatp (rA4->Val) == 0) 
        goto l_103;
l_105:
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        goto l_101;
l_103:
        rA3 = rSp->Val;
        rA3 = rA3->Val;
        rA2 = GYgenarith[15];
        rA1 = (rSp + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
        goto l_101;
l_102:
        rA1 = rNil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLgenarith_49() {    /* floor */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLgenarith_51);
        {aRet = (GYgenarith[16] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_51() {    /* call_genarith_50 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYgenarith; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_101;
        GIa3 = rSp->Val;
        GIa2 = rLit[15];
        rA1 = rLit[12];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_53);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLgenarith_53() {    /* call_genarith_52 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLgenarith_54);
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYgenarith[18] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_54() {    /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      goto l_103;
        (--rSp)->Val = ((Ptr) GXpopj2);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYgenarith[2] + 2)->Val; goto lRet;}
l_103:
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_55() {    /* ceiling */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLgenarith_57);
        {aRet = (GYgenarith[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_57() {    /* call_genarith_56 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLgenarith_58);
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 3)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (GYgenarith[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_58() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      goto l_101;
        (--rSp)->Val = ((Ptr) GXpopj2);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 1;
        GIa4 = (Ptr) 2;
        {aRet = (GYgenarith[1] + 2)->Val; goto lRet;}
l_101:
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_59() {    /* round */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLgenarith_60);
        (--rSp)->Val = rA2;
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (GYgenarith[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_60() {    /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLgenarith_61); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_63);
        {aRet = (GYgenarith[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_63() {    /* call_genarith_62 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GIa1;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_65);
        {aRet = (GYgenarith[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_65() {    /* call_genarith_64 */
   {    register Ptr aRet;
        GIsp += (Fix) 2;
        {aRet = (GYgenarith[4] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgenarith_61() {    /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLgenarith_66);
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = (Ptr) 0;
        GIa4 = (Ptr) 2;
        {aRet = (GYgenarith[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_66() {    /* 106 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgenarith; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLgenarith_67); goto lRet;}
        (--rSp)->Val = ((Ptr) GLgenarith_68);
        (--rSp)->Val = rLit[13]->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_69);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[13]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_69() {    /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYgenarith[20] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgenarith_68() {    /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLgenarith_70); goto lRet;}
        (--rSp)->Val = ((Ptr) GXpopj2);
        (--rSp)->Val = (Ptr) ((UFix) 0xffff);
        GIa1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_72);
        {aRet = (GYgenarith[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_72() {    /* call_genarith_71 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 3)->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_74);
        {aRet = (GYgenarith[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_74() {    /* call_genarith_73 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 2;
        {aRet = (GYgenarith[2] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgenarith_70() {    /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_76);
        {aRet = (GYgenarith[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_76() {    /* call_genarith_75 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_78);
        {aRet = (GYgenarith[19] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_78() {    /* call_genarith_77 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLgenarith_80);
        {aRet = (GYgenarith[4] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgenarith_80() {    /* call_genarith_79 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgenarith; rSp = GIsp;
        rSp->Val = GIa1;
        GIa1 = rLit[13]->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_82);
        {aRet = (rLit[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_82() {    /* call_genarith_81 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYgenarith[13]->Val = GIa1;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_67() {    /* 104 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp + 1)->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_84);
        {aRet = (GYgenarith[21] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_84() {    /* call_genarith_83 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgenarith; rSp = GIsp;
        rSp->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLgenarith_85);
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[13]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[2] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_85() {    /* 114 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYgenarith; rSp = GIsp; rA1 = GIa1;
        (rSp + 1)->Val = rA1;
        if (rA1 == GInil)       {aRet = ((Ptr) GLgenarith_86); goto lRet;}
        (--rSp)->Val = ((Ptr) GLgenarith_87);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[13]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[14] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_87() {    /* 117 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLgenarith_88); goto lRet;}
        GIa1 = (rSp + 1)->Val;
        (--rSp)->Val = ((Ptr) GLgenarith_90);
        {aRet = (GYgenarith[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_90() {    /* call_genarith_89 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYgenarith; rSp = GIsp;
        rLit[13]->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLgenarith_91);
        (--rSp)->Val = (Ptr) 1;
        {register Ptr aux;
                aux = (rSp + 2)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_91() {    /* 118 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp->Val = GIa1;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_88() {    /* 115 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = rSp->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgenarith_86() {    /* 112 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDgenarith_92() {    /* trace #:genarith:+ */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgenarith,22,23,24);
  lRet:  return (aRet);}}

static Ptr GDgenarith_93() {    /* trace #:genarith:- */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgenarith,25,23,24);
  lRet:  return (aRet);}}

static Ptr GDgenarith_94() {    /* trace #:genarith:0- */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgenarith,26,23,27);
  lRet:  return (aRet);}}

static Ptr GDgenarith_95() {    /* trace #:genarith:* */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgenarith,28,23,24);
  lRet:  return (aRet);}}

static Ptr GDgenarith_96() {    /* trace #:genarith:/ */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgenarith,29,23,24);
  lRet:  return (aRet);}}

static Ptr GDgenarith_97() {    /* trace #:genarith:1/ */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgenarith,30,23,27);
  lRet:  return (aRet);}}

static Ptr GDgenarith_98() {    /* trace #:genarith:quomod */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgenarith,31,23,24);
  lRet:  return (aRet);}}

static Ptr GDgenarith_99() {    /* trace floor */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgenarith,12,23,27);
  lRet:  return (aRet);}}

static Ptr GDgenarith_100() {   /* trace ceiling */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgenarith,32,23,27);
  lRet:  return (aRet);}}

static Ptr GDgenarith_101() {   /* trace round */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYgenarith,19,23,24);
  lRet:  return (aRet);}}

