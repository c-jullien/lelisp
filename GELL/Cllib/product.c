/* GELL 15.26: source file for the module: "product" */
/*             translation done:           "Wed June 16 93 18:03:04 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "product.h" 

static Ptr GLproduct_1() {      /* product-build-info */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA4, rNil;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
        if ((Fix) (rA4) >= (Fix) 1)     goto l_101;
        rA1 = rLit[0];
        rA2 = (Ptr) 1;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 1));
        rA1 = rNil;
        goto l_nlist_product_3;
l_nlist_product_2:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_nlist_product_3:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nlist_product_2;}
        (--rSp)->Val = rA1;
        if (rLit[2]->Val != rNil)       {aRet = ((Ptr) GLproduct_4); goto lRet;}
        (--rSp)->Val = ((Ptr) GLproduct_5);
        rA4 = (Ptr) 0;
        {aRet = (rLit[3] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLproduct_5() {      /* 104 */
   {    register Ptr aRet;
        GYproduct[2]->Val = GIa1;
        {aRet = ((Ptr) GLproduct_4); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLproduct_4() {      /* 103 */
   {    register Ptr aRet, rSp, rNil;
        rSp = GIsp; rNil = GInil;
        (--rSp)->Val = ((Ptr) GLproduct_6);
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        (--rSp)->Val = rNil;
        GIa4 = (Ptr) 6;
        {aRet = (GYproduct[4] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_6() {      /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        (rA1 + 1)->Val = rLit[5];
        (--rSp)->Val = rA1;
        if (((rSp + 2)->Val >= GIbsymb) && ((rSp + 2)->Val < GIbcons))  goto l_107;
        GIa3 = (rSp + 2)->Val;
        GIa2 = rLit[6];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_107:
        GIa3 = rSp->Val;
        GIa2 = rLit[2]->Val;
        rA1 = (rSp + 2)->Val;
        (--rSp)->Val = ((Ptr) GLproduct_8);
        {aRet = (rLit[7] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_8() {      /* call_product_7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (rSp->Val->Val + 2 + (Fix) 0)->Val = (rSp + 2)->Val;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        {aRet = ((Ptr) GLproduct_9); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_9() {      /* 108 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA3, rA4;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
        if (rSp->Val == GInil)  {aRet = ((Ptr) GLproduct_10); goto lRet;}
        rA4 = rSp->Val;
        rA3 = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = rA3->Val;
        rA1 = (rSp + 1)->Val;
        if (rA1 != rLit[8])     goto l_111;
        ((rSp + 3)->Val->Val + 2 + (Fix) 0)->Val = rSp->Val;
        {aRet = ((Ptr) GLproduct_11); goto lRet;}
l_111:
        if (rA1 != rLit[9])     goto l_112;
        if (rSp->Val < GIbfloat)        goto l_114;
        rA3 = rSp->Val;
        GIa2 = rLit[10];
        rA1 = rLit[8];
        GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_call_error ();
l_114:
        ((rSp + 3)->Val->Val + 2 + (Fix) 1)->Val = rSp->Val;
        {aRet = ((Ptr) GLproduct_11); goto lRet;}
l_112:
        if (rA1 != rLit[11])    {aRet = ((Ptr) GLproduct_12); goto lRet;}
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLproduct_14);
        {aRet = (rLit[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLproduct_14() {     /* call_product_13 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_117;
        GIa3 = rSp->Val;
        GIa2 = rLit[13];
        rA1 = rLit[8];
        GIa1 = rA1; rA1 = llrt_call_error ();
l_117:
        ((rSp + 3)->Val->Val + 2 + (Fix) 2)->Val = rSp->Val;
        {aRet = ((Ptr) GLproduct_11); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_12() {     /* 115 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        if (rA1 != rLit[14])    goto l_118;
        ((rSp + 3)->Val->Val + 2 + (Fix) 3)->Val = rSp->Val;
        {aRet = ((Ptr) GLproduct_11); goto lRet;}
l_118:
        if (rA1 != rLit[15])    goto l_119;
        ((rSp + 3)->Val->Val + 2 + (Fix) 4)->Val = rSp->Val;
        {aRet = ((Ptr) GLproduct_11); goto lRet;}
l_119:
        if (rA1 != rLit[16])    {aRet = ((Ptr) GLproduct_15); goto lRet;}
        if ((rSp->Val >= GIbstrg) && (rSp->Val < GIbsymb))      {aRet = ((Ptr) GLproduct_16); goto lRet;}
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLproduct_18);
        {aRet = (rLit[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_18() {     /* call_product_17 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_123;
        {register Ptr aux;
                aux = rSp->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[18];
l_124:
        if ((long) (rSp + 1)->Val < (long) GIbcons)     goto l_125;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        if ((rA1 < GIbstrg) || (rA1 >= GIbsymb)) rA1 = rNil;
        rSp->Val = rA1;
        if (rA1 == rNil)        goto l_125;
        goto l_124;
l_125:
        rA4 = rSp->Val;
        rSp += (Fix) 2;
        if (rA4 != rNil)        {aRet = ((Ptr) GLproduct_16); goto lRet;}
l_123:
        GIa3 = rSp->Val;
        GIa2 = rLit[19];
        rA1 = rLit[8];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLproduct_16); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLproduct_16() {     /* 122 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        ((rSp + 3)->Val->Val + 2 + (Fix) 5)->Val = rSp->Val;
        {aRet = ((Ptr) GLproduct_11); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLproduct_15() {     /* 120 */
   {    register Ptr aRet, *rLit, rA1;
        rLit = GYproduct; rA1 = GIa1;
        GIa3 = rA1;
        GIa2 = rLit[13];
        rA1 = rLit[0];
        GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLproduct_11); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_11() {     /* 110 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rSp += (Fix) 2;
        rA4 = rSp->Val;
        rA4 = (rA4 + 1)->Val;
        rSp->Val = (rA4 + 1)->Val;
        {aRet = ((Ptr) GLproduct_9); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLproduct_10() {     /* 109 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 2;
        GIa1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_19() {     /* #:product:gethash */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        if (GIa2 != GInil)      goto l_101;
        GIa3 = rA1;
        GIa2 = rLit[20];
        rA1 = rLit[21];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GXpopj0);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rLit[2]->Val;
        GIa4 = (Ptr) 2;
        {aRet = (rLit[22] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_20() {     /* product-id */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = GYproduct[2]->Val;
        (--rSp)->Val = ((Ptr) GLproduct_22);
        {aRet = ((Ptr) GLproduct_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_22() {     /* call_product_21 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        rA1 = (rA1->Val + 2 + (Fix) 1)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[23];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_23() {     /* set-product-id */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA2 < GIbfloat)     goto l_102;
        GIa3 = rA2;
        rA2 = rLit[10];
        rA1 = rLit[24];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_call_error ();
l_102:
        rA2 = rLit[2]->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLproduct_25);
        {aRet = ((Ptr) GLproduct_19); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLproduct_25() {     /* call_product_24 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_103;
        (rA1->Val + 2 + (Fix) 1)->Val = (rSp + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[24];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_26() {     /* product-date */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = GYproduct[2]->Val;
        (--rSp)->Val = ((Ptr) GLproduct_28);
        {aRet = ((Ptr) GLproduct_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_28() {     /* call_product_27 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        rA1 = (rA1->Val + 2 + (Fix) 2)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[25];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_29() {     /* set-product-date */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        GIa1 = rA2;
        (--rSp)->Val = ((Ptr) GLproduct_31);
        {aRet = (GYproduct[12] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_31() {     /* call_product_30 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        if (rA1 != GInil)       goto l_102;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[13];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
l_102:
        GIa2 = rLit[2]->Val;
        rA1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLproduct_33);
        {aRet = ((Ptr) GLproduct_19); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_33() {     /* call_product_32 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_103;
        (rA1->Val + 2 + (Fix) 2)->Val = (rSp + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        GIa3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[26];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_34() {     /* product-version */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = GYproduct[2]->Val;
        (--rSp)->Val = ((Ptr) GLproduct_36);
        {aRet = ((Ptr) GLproduct_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_36() {     /* call_product_35 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        rA1 = (rA1->Val + 2 + (Fix) 3)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[27];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_37() {     /* set-product-version */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = GYproduct[2]->Val;
        (--rSp)->Val = ((Ptr) GLproduct_39);
        {aRet = ((Ptr) GLproduct_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_39() {     /* call_product_38 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        (rA1->Val + 2 + (Fix) 3)->Val = (rSp + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[28];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_40() {     /* product-subversion */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = GYproduct[2]->Val;
        (--rSp)->Val = ((Ptr) GLproduct_42);
        {aRet = ((Ptr) GLproduct_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_42() {     /* call_product_41 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        rA1 = (rA1->Val + 2 + (Fix) 4)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[29];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_43() {     /* set-product-subversion */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa1;
        GIa2 = GYproduct[2]->Val;
        (--rSp)->Val = ((Ptr) GLproduct_45);
        {aRet = ((Ptr) GLproduct_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_45() {     /* call_product_44 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        (rA1->Val + 2 + (Fix) 4)->Val = (rSp + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[30];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_46() {     /* product-comment */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = GYproduct[2]->Val;
        (--rSp)->Val = ((Ptr) GLproduct_48);
        {aRet = ((Ptr) GLproduct_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_48() {     /* call_product_47 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_101;
        rA1 = (rA1->Val + 2 + (Fix) 5)->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        GIa3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[31];
        rSp += (Fix) 1;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_49() {     /* set-product-comment */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        if ((rA2 >= GIbstrg) && (rA2 < GIbsymb))        {aRet = ((Ptr) GLproduct_50); goto lRet;}
        GIa1 = rA2;
        (--rSp)->Val = ((Ptr) GLproduct_52);
        {aRet = (GYproduct[17] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_52() {     /* call_product_51 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4, rNil;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
        if (rA1 == rNil)        goto l_103;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[18];
l_104:
        if ((long) (rSp + 1)->Val < (long) GIbcons)     goto l_105;
        rA1 = (rSp + 1)->Val;
        (rSp + 1)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        if ((rA1 < GIbstrg) || (rA1 >= GIbsymb)) rA1 = rNil;
        rSp->Val = rA1;
        if (rA1 == rNil)        goto l_105;
        goto l_104;
l_105:
        rA4 = rSp->Val;
        rSp += (Fix) 2;
        if (rA4 != rNil)        {aRet = ((Ptr) GLproduct_50); goto lRet;}
l_103:
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[19];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = ((Ptr) GLproduct_50); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLproduct_50() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = GYproduct[2]->Val;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLproduct_54);
        {aRet = ((Ptr) GLproduct_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_54() {     /* call_product_53 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_106;
        (rA1->Val + 2 + (Fix) 5)->Val = (rSp + 1)->Val;
        rA1 = (rSp + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
l_106:
        GIa3 = rSp->Val;
        GIa2 = rLit[20];
        rA1 = rLit[32];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLproduct_55() {     /* product-all-names */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GInil;
        (--rSp)->Val = (Ptr) 0;
        rA4 = (GYproduct[2]->Val->Val + 2 + (Fix) 1)->Val;
        (--rSp)->Val = rA4;
        GIa3 = (rA4->Val + 1)->Val;
        (--rSp)->Val = GIa3;
        {aRet = ((Ptr) GLproduct_56); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLproduct_56() {     /* 101 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        if ((Fix) ((rSp + 2)->Val) >= (Fix) (rSp->Val)) {aRet = ((Ptr) GLproduct_57); goto lRet;}
        rA4 = ((rSp + 1)->Val->Val + 2 + (Fix) ((rSp + 2)->Val))->Val;
        if ((long) rA4 < (long) GIbcons)        {aRet = ((Ptr) GLproduct_58); goto lRet;}
        (--rSp)->Val = rA4;
        {aRet = ((Ptr) GLproduct_59); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLproduct_59() {     /* 105 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        if ((long) rSp->Val < (long) GIbcons)   {aRet = ((Ptr) GLproduct_60); goto lRet;}
        rA4 = rSp->Val;
        rSp->Val = (rA4 + 1)->Val;
        (--rSp)->Val = rA4->Val;
        rA4 = rSp->Val;
        (--rSp)->Val = rA4->Val;
        (--rSp)->Val = (rA4 + 1)->Val;
        {register Ptr aux;
                aux = (rSp + 1)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLproduct_61);
        {register Ptr aux;
                aux = (rSp + 9)->Val;
                (--rSp)->Val = aux;}
        rA1 = (rSp + 2)->Val;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = (GYproduct[33] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLproduct_61() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        (rSp + 7)->Val = GIa1;
        rSp += (Fix) 3;
        {aRet = ((Ptr) GLproduct_59); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_60() {     /* 106 */
   {    register Ptr aRet;
        GIsp += (Fix) 1;
        {aRet = ((Ptr) GLproduct_58); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLproduct_58() {     /* 104 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp + 2)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 1));
        (rSp + 2)->Val = rA4;
        {aRet = ((Ptr) GLproduct_56); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLproduct_57() {     /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 3;
        GIa1 = rSp->Val;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_62() {     /* product-print */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = GYproduct[2]->Val;
        (--rSp)->Val = ((Ptr) GLproduct_64);
        {aRet = ((Ptr) GLproduct_19); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLproduct_64() {     /* call_product_63 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA4;
        rLit = GYproduct; rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        (--rSp)->Val = rA1;
        if (rA1 != GInil)       goto l_101;
        GIa3 = (rSp + 1)->Val;
        GIa2 = rLit[20];
        rA1 = rLit[34];
        rSp += (Fix) 2;
        GIsp = rSp; GIa1 = rA1; GIa4 = rA4; rA1 = llrt_call_error ();
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GLproduct_65);
        (--rSp)->Val = rLit[35];
        rA4 = (rA1->Val + 2 + (Fix) 0)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLproduct_65() {     /* 103 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYproduct; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLproduct_66);
        (--rSp)->Val = rLit[37];
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 2)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLproduct_66() {     /* 104 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYproduct; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLproduct_67);
        (--rSp)->Val = rLit[38];
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 3)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLproduct_67() {     /* 105 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYproduct; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLproduct_68);
        (--rSp)->Val = rLit[39];
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 4)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLproduct_68() {     /* 106 */
   {    register Ptr aRet, *rLit, rSp, rA4;
        rLit = GYproduct; rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = ((Ptr) GLproduct_69);
        (--rSp)->Val = rLit[40];
        rA4 = ((rSp + 2)->Val->Val + 2 + (Fix) 5)->Val;
        (--rSp)->Val = rA4;
        rA4 = (Ptr) 2;
        {aRet = (rLit[36] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLproduct_69() {     /* 107 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GYproduct[18];
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GDproduct_70() {     /* trace product-build-info */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYproduct,0,41,42);
  lRet:  return (aRet);}}

static Ptr GDproduct_71() {     /* trace product-id */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYproduct,23,41,43);
  lRet:  return (aRet);}}

static Ptr GDproduct_72() {     /* trace set-product-id */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYproduct,24,41,44);
  lRet:  return (aRet);}}

static Ptr GDproduct_73() {     /* trace product-date */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYproduct,25,41,43);
  lRet:  return (aRet);}}

static Ptr GDproduct_74() {     /* trace set-product-date */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYproduct,26,41,44);
  lRet:  return (aRet);}}

static Ptr GDproduct_75() {     /* trace product-version */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYproduct,27,41,43);
  lRet:  return (aRet);}}

static Ptr GDproduct_76() {     /* trace set-product-version */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYproduct,28,41,44);
  lRet:  return (aRet);}}

static Ptr GDproduct_77() {     /* trace product-subversion */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYproduct,29,41,43);
  lRet:  return (aRet);}}

static Ptr GDproduct_78() {     /* trace set-product-subversion */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYproduct,30,41,44);
  lRet:  return (aRet);}}

static Ptr GDproduct_79() {     /* trace product-comment */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYproduct,31,41,43);
  lRet:  return (aRet);}}

static Ptr GDproduct_80() {     /* trace set-product-comment */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYproduct,32,41,44);
  lRet:  return (aRet);}}

static Ptr GDproduct_81() {     /* trace product-all-names */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYproduct,45,41,46);
  lRet:  return (aRet);}}

static Ptr GDproduct_82() {     /* trace product-print */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYproduct,34,41,43);
  lRet:  return (aRet);}}

