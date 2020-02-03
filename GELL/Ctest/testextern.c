/* GELL 15.26: source file for the module: "testextern" */
/*             translation done:           "Mon June  7 93 16:17:18 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "testextern.h" 

static Ptr GLtestextern_1() {   /* _tlno */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {long callg_retv;
         callg_retv = ((long) tlno());
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_2() {   /* tlfix */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[1];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {long callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((long) tlfix(callg_arg1));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_3() {   /* tlfloat */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rA1) != 0) 
        goto l_102;
        rA3 = rA1;
        rA2 = rLit[2];
        rA1 = rLit[3];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {long callg_retv;
         double callg_arg1;
         callg_arg1 = Lfloat_to_Cfloat(rSp->Val);
         callg_retv = ((long) tlfloat(callg_arg1));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_4() {   /* tlfloat_ */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rA1) != 0) 
        goto l_102;
        rA3 = rA1;
        rA2 = rLit[2];
        rA1 = rLit[4];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {long callg_retv;
         double callg_arg1;
         callg_arg1 = Lfloat_to_Cfloat(rSp->Val);
         callg_retv = ((long) tlfloat_(callg_arg1));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_5() {   /* tlfloat_1 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rA1) != 0) 
        goto l_102;
        rA3 = rA1;
        rA2 = rLit[2];
        rA1 = rLit[5];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {long callg_retv;
         double callg_arg1;
         callg_arg1 = Lfloat_to_Cfloat(rSp->Val);
         callg_retv = ((long) tlfloat_1(callg_arg1));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_6() {   /* tlfloat_2 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rA1) != 0) 
        goto l_102;
        rA3 = rA1;
        rA2 = rLit[2];
        rA1 = rLit[6];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if (llrt_floatp ((rSp + 1)->Val) != 0) 
        goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[2];
        rA1 = rLit[6];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {long callg_retv;
         double callg_arg1;
         double callg_arg2;
         callg_arg1 = Lfloat_to_Cfloat(rSp->Val);
         callg_arg2 = Lfloat_to_Cfloat((rSp + 1)->Val);
         callg_retv = ((long) tlfloat_2(callg_arg1,callg_arg2));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_7() {   /* _trfix */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[7];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {long callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((long) trfix(&callg_arg1));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_8() {   /* _tlstring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[8];
        rA1 = rLit[9];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_retv = ((long) tlstring(callg_arg1));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_9() {   /* _tlstring3 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[8];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if (((rSp + 1)->Val >= rBstrg) && ((rSp + 1)->Val < rBsymb))    goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[8];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        if (((rSp + 2)->Val >= rBstrg) && ((rSp + 2)->Val < rBsymb))    goto l_106;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[8];
        rA1 = rLit[10];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_106:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_arg2 = ((Ptr) ((rSp + 1)->Val->Val)+2);
         callg_arg3 = ((Ptr) ((rSp + 2)->Val->Val)+2);
         callg_retv = ((long) tlstring3(callg_arg1,callg_arg2,callg_arg3));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_107:
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_10() {  /* tlvector */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBvect) && (rA1 < rBstrg))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[11];
        rA1 = rLit[12];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[12];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {long callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_arg2 = ((Fix) (rSp + 1)->Val);
         callg_retv = ((long) tlvector(callg_arg1,callg_arg2));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_11() {  /* trfloat */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rA1) != 0) 
        goto l_102;
        rA3 = rA1;
        rA2 = rLit[2];
        rA1 = rLit[13];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {double callg_retv;
         double callg_arg1;
         callg_arg1 = Lfloat_to_Cfloat(rSp->Val);
         callg_retv = ((double) trfloat(&callg_arg1));
         rA1 = Cfloat_to_Lfloat(callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_12() {  /* trfloat1 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rA1) != 0) 
        goto l_102;
        rA3 = rA1;
        rA2 = rLit[2];
        rA1 = rLit[14];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {double callg_retv;
         double callg_arg1;
         callg_arg1 = Lfloat_to_Cfloat(rSp->Val);
         callg_retv = ((double) trfloat1(&callg_arg1));
         rA1 = Cfloat_to_Lfloat(callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_13() {  /* ttabint */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if (((rSp + 1)->Val >= rBvect) && ((rSp + 1)->Val < rBstrg))    goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[11];
        rA1 = rLit[15];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {long callg_retv;
         long callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = ((Fix) rSp->Val);
         callg_arg2 = ((Ptr) ((rSp + 1)->Val->Val)+2);
         Lfixvector_to_Cfixvector ((rSp + 1)->Val);
         callg_retv = ((long) ttabint(callg_arg1,callg_arg2));
         Cfixvector_to_Lfixvector ((rSp + 1)->Val);
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_14() {  /* ttabintonly */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBvect) && (rA1 < rBstrg))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[11];
        rA1 = rLit[16];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         Lfixvector_to_Cfixvector (rSp->Val);
         callg_retv = ((long) ttabintonly(callg_arg1));
         Cfixvector_to_Lfixvector (rSp->Val);
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_15() {  /* ttabflt */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[17];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if (((rSp + 1)->Val >= rBvect) && ((rSp + 1)->Val < rBstrg))    goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[11];
        rA1 = rLit[17];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {long callg_retv;
         long callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = ((Fix) rSp->Val);
         callg_arg2 = ((Ptr) ((rSp + 1)->Val->Val)+2);
         Lfloatvector_to_Cfloatvector ((rSp + 1)->Val);
         callg_retv = ((long) ttabflt(callg_arg1,callg_arg2));
         Cfloatvector_to_Lfloatvector ((rSp + 1)->Val);
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_16() {  /* tflt_lispcall */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[18];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if (((rSp + 1)->Val >= rBvect) && ((rSp + 1)->Val < rBstrg))    goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[11];
        rA1 = rLit[18];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {long callg_retv;
         long callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = ((Fix) rSp->Val);
         callg_arg2 = ((Ptr) ((rSp + 1)->Val->Val)+2);
         Lfloatvector_to_Cfloatvector ((rSp + 1)->Val);
         callg_retv = ((long) tflt_lispcall(callg_arg1,callg_arg2));
         Cfloatvector_to_Lfloatvector ((rSp + 1)->Val);
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_17() {  /* tflt_getsym */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[19];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if (((rSp + 1)->Val >= rBvect) && ((rSp + 1)->Val < rBstrg))    goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[11];
        rA1 = rLit[19];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {long callg_retv;
         long callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = ((Fix) rSp->Val);
         callg_arg2 = ((Ptr) ((rSp + 1)->Val->Val)+2);
         Lfloatvector_to_Cfloatvector ((rSp + 1)->Val);
         callg_retv = ((long) tflt_getsym(callg_arg1,callg_arg2));
         Cfloatvector_to_Lfloatvector ((rSp + 1)->Val);
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_18() {  /* tlt */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) rA1);       callg_retv = ((long) tlt(callg_arg1));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_19() {  /* tlexternal */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        if ((long) rA1 < (long) rBcons) goto l_103;
        if (rA1->Val >= rBfloat)        goto l_103;
        if ((rA1 + 1)->Val < rBfloat)   goto l_102;
l_103:
        rA3 = rA1;
        rA2 = rLit[20];
        rA1 = rLit[21];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {long callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(rSp->Val);
         callg_retv = ((long) tlexternal(callg_arg1));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_104:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_20() {  /* tcfloat */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[22];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {double callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((double) tcfloat(callg_arg1));
         rA1 = Cfloat_to_Lfloat(callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_21() {  /* tcfloat2 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rA1) != 0) 
        goto l_102;
        rA3 = rA1;
        rA2 = rLit[2];
        rA1 = rLit[23];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if (llrt_floatp ((rSp + 1)->Val) != 0) 
        goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[2];
        rA1 = rLit[23];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {double callg_retv;
         double callg_arg1;
         double callg_arg2;
         callg_arg1 = Lfloat_to_Cfloat(rSp->Val);
         callg_arg2 = Lfloat_to_Cfloat((rSp + 1)->Val);
         callg_retv = ((double) tcfloat2(callg_arg1,callg_arg2));
         rA1 = Cfloat_to_Lfloat(callg_retv);
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_22() {  /* f_s_to_d */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {double callg_retv;
         callg_retv = ((double) f_s_to_d());
         rA1 = Cfloat_to_Lfloat(callg_retv);
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_23() {  /* tcstring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[24];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((Ptr) tcstring(callg_arg1));
         rA1 = Cstring_to_Lstring((char *) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_24() {  /* conv1_tcstring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[8];
        rA1 = rLit[25];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_retv = ((Ptr) conv1_tcstring(callg_arg1));
         rA1 = Cstring_to_Lstring((char *) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_25() {  /* conv2_tcstring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[8];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if (((rSp + 1)->Val >= rBstrg) && ((rSp + 1)->Val < rBsymb))    goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[8];
        rA1 = rLit[26];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_arg2 = ((Ptr) ((rSp + 1)->Val->Val)+2);
         callg_retv = ((Ptr) conv2_tcstring(callg_arg1,callg_arg2));
         rA1 = Cstring_to_Lstring((char *) callg_retv);
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_26() {  /* tct */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[27];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((Ptr) tct(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_27() {  /* tcexternal */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[28];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((Ptr) tcexternal(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_28() {  /* tlnadic */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        if (rA4 == (Ptr) 11)    goto l_101;
        rA1 = rLit[30];
        rA2 = (Ptr) 11;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 10)->Val < rBfloat)  goto l_103;
        rA3 = (rSp + 10)->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 9)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 9)->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 8)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 8)->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_107:
        if ((rSp + 7)->Val < rBfloat)   goto l_109;
        rA3 = (rSp + 7)->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_109:
        if ((rSp + 6)->Val < rBfloat)   goto l_111;
        rA3 = (rSp + 6)->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_111:
        if ((rSp + 5)->Val < rBfloat)   goto l_113;
        rA3 = (rSp + 5)->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_113:
        if ((rSp + 4)->Val < rBfloat)   goto l_115;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_115:
        if ((rSp + 3)->Val < rBfloat)   goto l_117;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_117:
        if ((rSp + 2)->Val < rBfloat)   goto l_119;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_119:
        if ((rSp + 1)->Val < rBfloat)   goto l_121;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_121:
        if (rSp->Val < rBfloat) goto l_123;
        rA3 = rSp->Val;
        rA2 = rLit[0];
        rA1 = rLit[30];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_123:
        {long callg_retv;
         long callg_arg1;
         long callg_arg2;
         long callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         long callg_arg8;
         long callg_arg9;
         long callg_arg10;
         long callg_arg11;
         callg_arg1 = ((Fix) (rSp + 10)->Val);
         callg_arg2 = ((Fix) (rSp + 9)->Val);
         callg_arg3 = ((Fix) (rSp + 8)->Val);
         callg_arg4 = ((Fix) (rSp + 7)->Val);
         callg_arg5 = ((Fix) (rSp + 6)->Val);
         callg_arg6 = ((Fix) (rSp + 5)->Val);
         callg_arg7 = ((Fix) (rSp + 4)->Val);
         callg_arg8 = ((Fix) (rSp + 3)->Val);
         callg_arg9 = ((Fix) (rSp + 2)->Val);
         callg_arg10 = ((Fix) (rSp + 1)->Val);
         callg_arg11 = ((Fix) rSp->Val);
         callg_retv = ((long) tlnadic(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10,callg_arg11));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_124:
        rSp += (Fix) 11;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_29() {  /* tnbmaxi */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        if (rA4 == (Ptr) 32)    goto l_101;
        rA1 = rLit[32];
        rA2 = (Ptr) 32;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 31)->Val < rBfloat)  goto l_103;
        rA3 = (rSp + 31)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 30)->Val < rBfloat)  goto l_105;
        rA3 = (rSp + 30)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 29)->Val < rBfloat)  goto l_107;
        rA3 = (rSp + 29)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_107:
        if ((rSp + 28)->Val < rBfloat)  goto l_109;
        rA3 = (rSp + 28)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_109:
        if ((rSp + 27)->Val < rBfloat)  goto l_111;
        rA3 = (rSp + 27)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_111:
        if ((rSp + 26)->Val < rBfloat)  goto l_113;
        rA3 = (rSp + 26)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_113:
        if ((rSp + 25)->Val < rBfloat)  goto l_115;
        rA3 = (rSp + 25)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_115:
        if ((rSp + 24)->Val < rBfloat)  goto l_117;
        rA3 = (rSp + 24)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_117:
        if ((rSp + 23)->Val < rBfloat)  goto l_119;
        rA3 = (rSp + 23)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_119:
        if ((rSp + 22)->Val < rBfloat)  goto l_121;
        rA3 = (rSp + 22)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_121:
        if ((rSp + 21)->Val < rBfloat)  goto l_123;
        rA3 = (rSp + 21)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_123:
        if ((rSp + 20)->Val < rBfloat)  goto l_125;
        rA3 = (rSp + 20)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_125:
        if ((rSp + 19)->Val < rBfloat)  goto l_127;
        rA3 = (rSp + 19)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_127:
        if ((rSp + 18)->Val < rBfloat)  goto l_129;
        rA3 = (rSp + 18)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_129:
        if ((rSp + 17)->Val < rBfloat)  goto l_131;
        rA3 = (rSp + 17)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_131:
        if ((rSp + 16)->Val < rBfloat)  goto l_133;
        rA3 = (rSp + 16)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_133:
        if ((rSp + 15)->Val < rBfloat)  goto l_135;
        rA3 = (rSp + 15)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_135:
        if ((rSp + 14)->Val < rBfloat)  goto l_137;
        rA3 = (rSp + 14)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_137:
        if ((rSp + 13)->Val < rBfloat)  goto l_139;
        rA3 = (rSp + 13)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_139:
        if ((rSp + 12)->Val < rBfloat)  goto l_141;
        rA3 = (rSp + 12)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_141:
        if ((rSp + 11)->Val < rBfloat)  goto l_143;
        rA3 = (rSp + 11)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_143:
        if ((rSp + 10)->Val < rBfloat)  goto l_145;
        rA3 = (rSp + 10)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_145:
        if ((rSp + 9)->Val < rBfloat)   goto l_147;
        rA3 = (rSp + 9)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_147:
        if ((rSp + 8)->Val < rBfloat)   goto l_149;
        rA3 = (rSp + 8)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_149:
        if ((rSp + 7)->Val < rBfloat)   goto l_151;
        rA3 = (rSp + 7)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_151:
        if ((rSp + 6)->Val < rBfloat)   goto l_153;
        rA3 = (rSp + 6)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_153:
        if ((rSp + 5)->Val < rBfloat)   goto l_155;
        rA3 = (rSp + 5)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_155:
        if ((rSp + 4)->Val < rBfloat)   goto l_157;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_157:
        if ((rSp + 3)->Val < rBfloat)   goto l_159;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_159:
        if ((rSp + 2)->Val < rBfloat)   goto l_161;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_161:
        if ((rSp + 1)->Val < rBfloat)   goto l_163;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_163:
        if (rSp->Val < rBfloat) goto l_165;
        rA3 = rSp->Val;
        rA2 = rLit[0];
        rA1 = rLit[32];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_165:
        {long callg_retv;
         long callg_arg1;
         long callg_arg2;
         long callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         long callg_arg8;
         long callg_arg9;
         long callg_arg10;
         long callg_arg11;
         long callg_arg12;
         long callg_arg13;
         long callg_arg14;
         long callg_arg15;
         long callg_arg16;
         long callg_arg17;
         long callg_arg18;
         long callg_arg19;
         long callg_arg20;
         long callg_arg21;
         long callg_arg22;
         long callg_arg23;
         long callg_arg24;
         long callg_arg25;
         long callg_arg26;
         long callg_arg27;
         long callg_arg28;
         long callg_arg29;
         long callg_arg30;
         long callg_arg31;
         long callg_arg32;
         callg_arg1 = ((Fix) (rSp + 31)->Val);
         callg_arg2 = ((Fix) (rSp + 30)->Val);
         callg_arg3 = ((Fix) (rSp + 29)->Val);
         callg_arg4 = ((Fix) (rSp + 28)->Val);
         callg_arg5 = ((Fix) (rSp + 27)->Val);
         callg_arg6 = ((Fix) (rSp + 26)->Val);
         callg_arg7 = ((Fix) (rSp + 25)->Val);
         callg_arg8 = ((Fix) (rSp + 24)->Val);
         callg_arg9 = ((Fix) (rSp + 23)->Val);
         callg_arg10 = ((Fix) (rSp + 22)->Val);
         callg_arg11 = ((Fix) (rSp + 21)->Val);
         callg_arg12 = ((Fix) (rSp + 20)->Val);
         callg_arg13 = ((Fix) (rSp + 19)->Val);
         callg_arg14 = ((Fix) (rSp + 18)->Val);
         callg_arg15 = ((Fix) (rSp + 17)->Val);
         callg_arg16 = ((Fix) (rSp + 16)->Val);
         callg_arg17 = ((Fix) (rSp + 15)->Val);
         callg_arg18 = ((Fix) (rSp + 14)->Val);
         callg_arg19 = ((Fix) (rSp + 13)->Val);
         callg_arg20 = ((Fix) (rSp + 12)->Val);
         callg_arg21 = ((Fix) (rSp + 11)->Val);
         callg_arg22 = ((Fix) (rSp + 10)->Val);
         callg_arg23 = ((Fix) (rSp + 9)->Val);
         callg_arg24 = ((Fix) (rSp + 8)->Val);
         callg_arg25 = ((Fix) (rSp + 7)->Val);
         callg_arg26 = ((Fix) (rSp + 6)->Val);
         callg_arg27 = ((Fix) (rSp + 5)->Val);
         callg_arg28 = ((Fix) (rSp + 4)->Val);
         callg_arg29 = ((Fix) (rSp + 3)->Val);
         callg_arg30 = ((Fix) (rSp + 2)->Val);
         callg_arg31 = ((Fix) (rSp + 1)->Val);
         callg_arg32 = ((Fix) rSp->Val);
         callg_retv = ((long) tnbmaxi(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10,callg_arg11,callg_arg12,callg_arg13,callg_arg14,callg_arg15,callg_arg16,callg_arg17,callg_arg18,callg_arg19,callg_arg20,callg_arg21,callg_arg22,callg_arg23,callg_arg24,callg_arg25,callg_arg26,callg_arg27,callg_arg28,callg_arg29,callg_arg30,callg_arg31,callg_arg32));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_166:
        rSp += (Fix) 32;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_30() {  /* tnbmaxf */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        if (rA4 == (Ptr) 32)    goto l_101;
        rA1 = rLit[33];
        rA2 = (Ptr) 32;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
l_101:
        if (llrt_floatp ((rSp + 31)->Val) != 0) 
        goto l_103;
        rA3 = (rSp + 31)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        if (llrt_floatp ((rSp + 30)->Val) != 0) 
        goto l_105;
        rA3 = (rSp + 30)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_105:
        if (llrt_floatp ((rSp + 29)->Val) != 0) 
        goto l_107;
        rA3 = (rSp + 29)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_107:
        if (llrt_floatp ((rSp + 28)->Val) != 0) 
        goto l_109;
        rA3 = (rSp + 28)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_109:
        if (llrt_floatp ((rSp + 27)->Val) != 0) 
        goto l_111;
        rA3 = (rSp + 27)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_111:
        if (llrt_floatp ((rSp + 26)->Val) != 0) 
        goto l_113;
        rA3 = (rSp + 26)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_113:
        if (llrt_floatp ((rSp + 25)->Val) != 0) 
        goto l_115;
        rA3 = (rSp + 25)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_115:
        if (llrt_floatp ((rSp + 24)->Val) != 0) 
        goto l_117;
        rA3 = (rSp + 24)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_117:
        if (llrt_floatp ((rSp + 23)->Val) != 0) 
        goto l_119;
        rA3 = (rSp + 23)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_119:
        if (llrt_floatp ((rSp + 22)->Val) != 0) 
        goto l_121;
        rA3 = (rSp + 22)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_121:
        if (llrt_floatp ((rSp + 21)->Val) != 0) 
        goto l_123;
        rA3 = (rSp + 21)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_123:
        if (llrt_floatp ((rSp + 20)->Val) != 0) 
        goto l_125;
        rA3 = (rSp + 20)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_125:
        if (llrt_floatp ((rSp + 19)->Val) != 0) 
        goto l_127;
        rA3 = (rSp + 19)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_127:
        if (llrt_floatp ((rSp + 18)->Val) != 0) 
        goto l_129;
        rA3 = (rSp + 18)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_129:
        if (llrt_floatp ((rSp + 17)->Val) != 0) 
        goto l_131;
        rA3 = (rSp + 17)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_131:
        if (llrt_floatp ((rSp + 16)->Val) != 0) 
        goto l_133;
        rA3 = (rSp + 16)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_133:
        if (llrt_floatp ((rSp + 15)->Val) != 0) 
        goto l_135;
        rA3 = (rSp + 15)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_135:
        if (llrt_floatp ((rSp + 14)->Val) != 0) 
        goto l_137;
        rA3 = (rSp + 14)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_137:
        if (llrt_floatp ((rSp + 13)->Val) != 0) 
        goto l_139;
        rA3 = (rSp + 13)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_139:
        if (llrt_floatp ((rSp + 12)->Val) != 0) 
        goto l_141;
        rA3 = (rSp + 12)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_141:
        if (llrt_floatp ((rSp + 11)->Val) != 0) 
        goto l_143;
        rA3 = (rSp + 11)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_143:
        if (llrt_floatp ((rSp + 10)->Val) != 0) 
        goto l_145;
        rA3 = (rSp + 10)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_145:
        if (llrt_floatp ((rSp + 9)->Val) != 0) 
        goto l_147;
        rA3 = (rSp + 9)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_147:
        if (llrt_floatp ((rSp + 8)->Val) != 0) 
        goto l_149;
        rA3 = (rSp + 8)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_149:
        if (llrt_floatp ((rSp + 7)->Val) != 0) 
        goto l_151;
        rA3 = (rSp + 7)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_151:
        if (llrt_floatp ((rSp + 6)->Val) != 0) 
        goto l_153;
        rA3 = (rSp + 6)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_153:
        if (llrt_floatp ((rSp + 5)->Val) != 0) 
        goto l_155;
        rA3 = (rSp + 5)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_155:
        if (llrt_floatp ((rSp + 4)->Val) != 0) 
        goto l_157;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_157:
        if (llrt_floatp ((rSp + 3)->Val) != 0) 
        goto l_159;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_159:
        if (llrt_floatp ((rSp + 2)->Val) != 0) 
        goto l_161;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_161:
        if (llrt_floatp ((rSp + 1)->Val) != 0) 
        goto l_163;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_163:
        if (llrt_floatp (rSp->Val) != 0) 
        goto l_165;
        rA3 = rSp->Val;
        rA2 = rLit[2];
        rA1 = rLit[33];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_165:
        {long callg_retv;
         double callg_arg1;
         double callg_arg2;
         double callg_arg3;
         double callg_arg4;
         double callg_arg5;
         double callg_arg6;
         double callg_arg7;
         double callg_arg8;
         double callg_arg9;
         double callg_arg10;
         double callg_arg11;
         double callg_arg12;
         double callg_arg13;
         double callg_arg14;
         double callg_arg15;
         double callg_arg16;
         double callg_arg17;
         double callg_arg18;
         double callg_arg19;
         double callg_arg20;
         double callg_arg21;
         double callg_arg22;
         double callg_arg23;
         double callg_arg24;
         double callg_arg25;
         double callg_arg26;
         double callg_arg27;
         double callg_arg28;
         double callg_arg29;
         double callg_arg30;
         double callg_arg31;
         double callg_arg32;
         callg_arg1 = Lfloat_to_Cfloat((rSp + 31)->Val);
         callg_arg2 = Lfloat_to_Cfloat((rSp + 30)->Val);
         callg_arg3 = Lfloat_to_Cfloat((rSp + 29)->Val);
         callg_arg4 = Lfloat_to_Cfloat((rSp + 28)->Val);
         callg_arg5 = Lfloat_to_Cfloat((rSp + 27)->Val);
         callg_arg6 = Lfloat_to_Cfloat((rSp + 26)->Val);
         callg_arg7 = Lfloat_to_Cfloat((rSp + 25)->Val);
         callg_arg8 = Lfloat_to_Cfloat((rSp + 24)->Val);
         callg_arg9 = Lfloat_to_Cfloat((rSp + 23)->Val);
         callg_arg10 = Lfloat_to_Cfloat((rSp + 22)->Val);
         callg_arg11 = Lfloat_to_Cfloat((rSp + 21)->Val);
         callg_arg12 = Lfloat_to_Cfloat((rSp + 20)->Val);
         callg_arg13 = Lfloat_to_Cfloat((rSp + 19)->Val);
         callg_arg14 = Lfloat_to_Cfloat((rSp + 18)->Val);
         callg_arg15 = Lfloat_to_Cfloat((rSp + 17)->Val);
         callg_arg16 = Lfloat_to_Cfloat((rSp + 16)->Val);
         callg_arg17 = Lfloat_to_Cfloat((rSp + 15)->Val);
         callg_arg18 = Lfloat_to_Cfloat((rSp + 14)->Val);
         callg_arg19 = Lfloat_to_Cfloat((rSp + 13)->Val);
         callg_arg20 = Lfloat_to_Cfloat((rSp + 12)->Val);
         callg_arg21 = Lfloat_to_Cfloat((rSp + 11)->Val);
         callg_arg22 = Lfloat_to_Cfloat((rSp + 10)->Val);
         callg_arg23 = Lfloat_to_Cfloat((rSp + 9)->Val);
         callg_arg24 = Lfloat_to_Cfloat((rSp + 8)->Val);
         callg_arg25 = Lfloat_to_Cfloat((rSp + 7)->Val);
         callg_arg26 = Lfloat_to_Cfloat((rSp + 6)->Val);
         callg_arg27 = Lfloat_to_Cfloat((rSp + 5)->Val);
         callg_arg28 = Lfloat_to_Cfloat((rSp + 4)->Val);
         callg_arg29 = Lfloat_to_Cfloat((rSp + 3)->Val);
         callg_arg30 = Lfloat_to_Cfloat((rSp + 2)->Val);
         callg_arg31 = Lfloat_to_Cfloat((rSp + 1)->Val);
         callg_arg32 = Lfloat_to_Cfloat(rSp->Val);
         callg_retv = ((long) tnbmaxf(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10,callg_arg11,callg_arg12,callg_arg13,callg_arg14,callg_arg15,callg_arg16,callg_arg17,callg_arg18,callg_arg19,callg_arg20,callg_arg21,callg_arg22,callg_arg23,callg_arg24,callg_arg25,callg_arg26,callg_arg27,callg_arg28,callg_arg29,callg_arg30,callg_arg31,callg_arg32));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_166:
        rSp += (Fix) 32;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_31() {  /* tnbmaxri */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        if (rA4 == (Ptr) 32)    goto l_101;
        rA1 = rLit[34];
        rA2 = (Ptr) 32;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 31)->Val < rBfloat)  goto l_103;
        rA3 = (rSp + 31)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 30)->Val < rBfloat)  goto l_105;
        rA3 = (rSp + 30)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 29)->Val < rBfloat)  goto l_107;
        rA3 = (rSp + 29)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_107:
        if ((rSp + 28)->Val < rBfloat)  goto l_109;
        rA3 = (rSp + 28)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_109:
        if ((rSp + 27)->Val < rBfloat)  goto l_111;
        rA3 = (rSp + 27)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_111:
        if ((rSp + 26)->Val < rBfloat)  goto l_113;
        rA3 = (rSp + 26)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_113:
        if ((rSp + 25)->Val < rBfloat)  goto l_115;
        rA3 = (rSp + 25)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_115:
        if ((rSp + 24)->Val < rBfloat)  goto l_117;
        rA3 = (rSp + 24)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_117:
        if ((rSp + 23)->Val < rBfloat)  goto l_119;
        rA3 = (rSp + 23)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_119:
        if ((rSp + 22)->Val < rBfloat)  goto l_121;
        rA3 = (rSp + 22)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_121:
        if ((rSp + 21)->Val < rBfloat)  goto l_123;
        rA3 = (rSp + 21)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_123:
        if ((rSp + 20)->Val < rBfloat)  goto l_125;
        rA3 = (rSp + 20)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_125:
        if ((rSp + 19)->Val < rBfloat)  goto l_127;
        rA3 = (rSp + 19)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_127:
        if ((rSp + 18)->Val < rBfloat)  goto l_129;
        rA3 = (rSp + 18)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_129:
        if ((rSp + 17)->Val < rBfloat)  goto l_131;
        rA3 = (rSp + 17)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_131:
        if ((rSp + 16)->Val < rBfloat)  goto l_133;
        rA3 = (rSp + 16)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_133:
        if ((rSp + 15)->Val < rBfloat)  goto l_135;
        rA3 = (rSp + 15)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_135:
        if ((rSp + 14)->Val < rBfloat)  goto l_137;
        rA3 = (rSp + 14)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_137:
        if ((rSp + 13)->Val < rBfloat)  goto l_139;
        rA3 = (rSp + 13)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_139:
        if ((rSp + 12)->Val < rBfloat)  goto l_141;
        rA3 = (rSp + 12)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_141:
        if ((rSp + 11)->Val < rBfloat)  goto l_143;
        rA3 = (rSp + 11)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_143:
        if ((rSp + 10)->Val < rBfloat)  goto l_145;
        rA3 = (rSp + 10)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_145:
        if ((rSp + 9)->Val < rBfloat)   goto l_147;
        rA3 = (rSp + 9)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_147:
        if ((rSp + 8)->Val < rBfloat)   goto l_149;
        rA3 = (rSp + 8)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_149:
        if ((rSp + 7)->Val < rBfloat)   goto l_151;
        rA3 = (rSp + 7)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_151:
        if ((rSp + 6)->Val < rBfloat)   goto l_153;
        rA3 = (rSp + 6)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_153:
        if ((rSp + 5)->Val < rBfloat)   goto l_155;
        rA3 = (rSp + 5)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_155:
        if ((rSp + 4)->Val < rBfloat)   goto l_157;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_157:
        if ((rSp + 3)->Val < rBfloat)   goto l_159;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_159:
        if ((rSp + 2)->Val < rBfloat)   goto l_161;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_161:
        if ((rSp + 1)->Val < rBfloat)   goto l_163;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_163:
        if (rSp->Val < rBfloat) goto l_165;
        rA3 = rSp->Val;
        rA2 = rLit[0];
        rA1 = rLit[34];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_165:
        {long callg_retv;
         long callg_arg1;
         long callg_arg2;
         long callg_arg3;
         long callg_arg4;
         long callg_arg5;
         long callg_arg6;
         long callg_arg7;
         long callg_arg8;
         long callg_arg9;
         long callg_arg10;
         long callg_arg11;
         long callg_arg12;
         long callg_arg13;
         long callg_arg14;
         long callg_arg15;
         long callg_arg16;
         long callg_arg17;
         long callg_arg18;
         long callg_arg19;
         long callg_arg20;
         long callg_arg21;
         long callg_arg22;
         long callg_arg23;
         long callg_arg24;
         long callg_arg25;
         long callg_arg26;
         long callg_arg27;
         long callg_arg28;
         long callg_arg29;
         long callg_arg30;
         long callg_arg31;
         long callg_arg32;
         callg_arg1 = ((Fix) (rSp + 31)->Val);
         callg_arg2 = ((Fix) (rSp + 30)->Val);
         callg_arg3 = ((Fix) (rSp + 29)->Val);
         callg_arg4 = ((Fix) (rSp + 28)->Val);
         callg_arg5 = ((Fix) (rSp + 27)->Val);
         callg_arg6 = ((Fix) (rSp + 26)->Val);
         callg_arg7 = ((Fix) (rSp + 25)->Val);
         callg_arg8 = ((Fix) (rSp + 24)->Val);
         callg_arg9 = ((Fix) (rSp + 23)->Val);
         callg_arg10 = ((Fix) (rSp + 22)->Val);
         callg_arg11 = ((Fix) (rSp + 21)->Val);
         callg_arg12 = ((Fix) (rSp + 20)->Val);
         callg_arg13 = ((Fix) (rSp + 19)->Val);
         callg_arg14 = ((Fix) (rSp + 18)->Val);
         callg_arg15 = ((Fix) (rSp + 17)->Val);
         callg_arg16 = ((Fix) (rSp + 16)->Val);
         callg_arg17 = ((Fix) (rSp + 15)->Val);
         callg_arg18 = ((Fix) (rSp + 14)->Val);
         callg_arg19 = ((Fix) (rSp + 13)->Val);
         callg_arg20 = ((Fix) (rSp + 12)->Val);
         callg_arg21 = ((Fix) (rSp + 11)->Val);
         callg_arg22 = ((Fix) (rSp + 10)->Val);
         callg_arg23 = ((Fix) (rSp + 9)->Val);
         callg_arg24 = ((Fix) (rSp + 8)->Val);
         callg_arg25 = ((Fix) (rSp + 7)->Val);
         callg_arg26 = ((Fix) (rSp + 6)->Val);
         callg_arg27 = ((Fix) (rSp + 5)->Val);
         callg_arg28 = ((Fix) (rSp + 4)->Val);
         callg_arg29 = ((Fix) (rSp + 3)->Val);
         callg_arg30 = ((Fix) (rSp + 2)->Val);
         callg_arg31 = ((Fix) (rSp + 1)->Val);
         callg_arg32 = ((Fix) rSp->Val);
         callg_retv = ((long) tnbmaxri(&callg_arg1,&callg_arg2,&callg_arg3,&callg_arg4,&callg_arg5,&callg_arg6,&callg_arg7,&callg_arg8,&callg_arg9,&callg_arg10,&callg_arg11,&callg_arg12,&callg_arg13,&callg_arg14,&callg_arg15,&callg_arg16,&callg_arg17,&callg_arg18,&callg_arg19,&callg_arg20,&callg_arg21,&callg_arg22,&callg_arg23,&callg_arg24,&callg_arg25,&callg_arg26,&callg_arg27,&callg_arg28,&callg_arg29,&callg_arg30,&callg_arg31,&callg_arg32));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_166:
        rSp += (Fix) 32;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_32() {  /* tnbmaxrf */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        if (rA4 == (Ptr) 32)    goto l_101;
        rA1 = rLit[35];
        rA2 = (Ptr) 32;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
l_101:
        if (llrt_floatp ((rSp + 31)->Val) != 0) 
        goto l_103;
        rA3 = (rSp + 31)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        if (llrt_floatp ((rSp + 30)->Val) != 0) 
        goto l_105;
        rA3 = (rSp + 30)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_105:
        if (llrt_floatp ((rSp + 29)->Val) != 0) 
        goto l_107;
        rA3 = (rSp + 29)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_107:
        if (llrt_floatp ((rSp + 28)->Val) != 0) 
        goto l_109;
        rA3 = (rSp + 28)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_109:
        if (llrt_floatp ((rSp + 27)->Val) != 0) 
        goto l_111;
        rA3 = (rSp + 27)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_111:
        if (llrt_floatp ((rSp + 26)->Val) != 0) 
        goto l_113;
        rA3 = (rSp + 26)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_113:
        if (llrt_floatp ((rSp + 25)->Val) != 0) 
        goto l_115;
        rA3 = (rSp + 25)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_115:
        if (llrt_floatp ((rSp + 24)->Val) != 0) 
        goto l_117;
        rA3 = (rSp + 24)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_117:
        if (llrt_floatp ((rSp + 23)->Val) != 0) 
        goto l_119;
        rA3 = (rSp + 23)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_119:
        if (llrt_floatp ((rSp + 22)->Val) != 0) 
        goto l_121;
        rA3 = (rSp + 22)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_121:
        if (llrt_floatp ((rSp + 21)->Val) != 0) 
        goto l_123;
        rA3 = (rSp + 21)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_123:
        if (llrt_floatp ((rSp + 20)->Val) != 0) 
        goto l_125;
        rA3 = (rSp + 20)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_125:
        if (llrt_floatp ((rSp + 19)->Val) != 0) 
        goto l_127;
        rA3 = (rSp + 19)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_127:
        if (llrt_floatp ((rSp + 18)->Val) != 0) 
        goto l_129;
        rA3 = (rSp + 18)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_129:
        if (llrt_floatp ((rSp + 17)->Val) != 0) 
        goto l_131;
        rA3 = (rSp + 17)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_131:
        if (llrt_floatp ((rSp + 16)->Val) != 0) 
        goto l_133;
        rA3 = (rSp + 16)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_133:
        if (llrt_floatp ((rSp + 15)->Val) != 0) 
        goto l_135;
        rA3 = (rSp + 15)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_135:
        if (llrt_floatp ((rSp + 14)->Val) != 0) 
        goto l_137;
        rA3 = (rSp + 14)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_137:
        if (llrt_floatp ((rSp + 13)->Val) != 0) 
        goto l_139;
        rA3 = (rSp + 13)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_139:
        if (llrt_floatp ((rSp + 12)->Val) != 0) 
        goto l_141;
        rA3 = (rSp + 12)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_141:
        if (llrt_floatp ((rSp + 11)->Val) != 0) 
        goto l_143;
        rA3 = (rSp + 11)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_143:
        if (llrt_floatp ((rSp + 10)->Val) != 0) 
        goto l_145;
        rA3 = (rSp + 10)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_145:
        if (llrt_floatp ((rSp + 9)->Val) != 0) 
        goto l_147;
        rA3 = (rSp + 9)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_147:
        if (llrt_floatp ((rSp + 8)->Val) != 0) 
        goto l_149;
        rA3 = (rSp + 8)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_149:
        if (llrt_floatp ((rSp + 7)->Val) != 0) 
        goto l_151;
        rA3 = (rSp + 7)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_151:
        if (llrt_floatp ((rSp + 6)->Val) != 0) 
        goto l_153;
        rA3 = (rSp + 6)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_153:
        if (llrt_floatp ((rSp + 5)->Val) != 0) 
        goto l_155;
        rA3 = (rSp + 5)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_155:
        if (llrt_floatp ((rSp + 4)->Val) != 0) 
        goto l_157;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_157:
        if (llrt_floatp ((rSp + 3)->Val) != 0) 
        goto l_159;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_159:
        if (llrt_floatp ((rSp + 2)->Val) != 0) 
        goto l_161;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_161:
        if (llrt_floatp ((rSp + 1)->Val) != 0) 
        goto l_163;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_163:
        if (llrt_floatp (rSp->Val) != 0) 
        goto l_165;
        rA3 = rSp->Val;
        rA2 = rLit[2];
        rA1 = rLit[35];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_165:
        {long callg_retv;
         double callg_arg1;
         double callg_arg2;
         double callg_arg3;
         double callg_arg4;
         double callg_arg5;
         double callg_arg6;
         double callg_arg7;
         double callg_arg8;
         double callg_arg9;
         double callg_arg10;
         double callg_arg11;
         double callg_arg12;
         double callg_arg13;
         double callg_arg14;
         double callg_arg15;
         double callg_arg16;
         double callg_arg17;
         double callg_arg18;
         double callg_arg19;
         double callg_arg20;
         double callg_arg21;
         double callg_arg22;
         double callg_arg23;
         double callg_arg24;
         double callg_arg25;
         double callg_arg26;
         double callg_arg27;
         double callg_arg28;
         double callg_arg29;
         double callg_arg30;
         double callg_arg31;
         double callg_arg32;
         callg_arg1 = Lfloat_to_Cfloat((rSp + 31)->Val);
         callg_arg2 = Lfloat_to_Cfloat((rSp + 30)->Val);
         callg_arg3 = Lfloat_to_Cfloat((rSp + 29)->Val);
         callg_arg4 = Lfloat_to_Cfloat((rSp + 28)->Val);
         callg_arg5 = Lfloat_to_Cfloat((rSp + 27)->Val);
         callg_arg6 = Lfloat_to_Cfloat((rSp + 26)->Val);
         callg_arg7 = Lfloat_to_Cfloat((rSp + 25)->Val);
         callg_arg8 = Lfloat_to_Cfloat((rSp + 24)->Val);
         callg_arg9 = Lfloat_to_Cfloat((rSp + 23)->Val);
         callg_arg10 = Lfloat_to_Cfloat((rSp + 22)->Val);
         callg_arg11 = Lfloat_to_Cfloat((rSp + 21)->Val);
         callg_arg12 = Lfloat_to_Cfloat((rSp + 20)->Val);
         callg_arg13 = Lfloat_to_Cfloat((rSp + 19)->Val);
         callg_arg14 = Lfloat_to_Cfloat((rSp + 18)->Val);
         callg_arg15 = Lfloat_to_Cfloat((rSp + 17)->Val);
         callg_arg16 = Lfloat_to_Cfloat((rSp + 16)->Val);
         callg_arg17 = Lfloat_to_Cfloat((rSp + 15)->Val);
         callg_arg18 = Lfloat_to_Cfloat((rSp + 14)->Val);
         callg_arg19 = Lfloat_to_Cfloat((rSp + 13)->Val);
         callg_arg20 = Lfloat_to_Cfloat((rSp + 12)->Val);
         callg_arg21 = Lfloat_to_Cfloat((rSp + 11)->Val);
         callg_arg22 = Lfloat_to_Cfloat((rSp + 10)->Val);
         callg_arg23 = Lfloat_to_Cfloat((rSp + 9)->Val);
         callg_arg24 = Lfloat_to_Cfloat((rSp + 8)->Val);
         callg_arg25 = Lfloat_to_Cfloat((rSp + 7)->Val);
         callg_arg26 = Lfloat_to_Cfloat((rSp + 6)->Val);
         callg_arg27 = Lfloat_to_Cfloat((rSp + 5)->Val);
         callg_arg28 = Lfloat_to_Cfloat((rSp + 4)->Val);
         callg_arg29 = Lfloat_to_Cfloat((rSp + 3)->Val);
         callg_arg30 = Lfloat_to_Cfloat((rSp + 2)->Val);
         callg_arg31 = Lfloat_to_Cfloat((rSp + 1)->Val);
         callg_arg32 = Lfloat_to_Cfloat(rSp->Val);
         callg_retv = ((long) tnbmaxrf(&callg_arg1,&callg_arg2,&callg_arg3,&callg_arg4,&callg_arg5,&callg_arg6,&callg_arg7,&callg_arg8,&callg_arg9,&callg_arg10,&callg_arg11,&callg_arg12,&callg_arg13,&callg_arg14,&callg_arg15,&callg_arg16,&callg_arg17,&callg_arg18,&callg_arg19,&callg_arg20,&callg_arg21,&callg_arg22,&callg_arg23,&callg_arg24,&callg_arg25,&callg_arg26,&callg_arg27,&callg_arg28,&callg_arg29,&callg_arg30,&callg_arg31,&callg_arg32));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_166:
        rSp += (Fix) 32;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_33() {  /* trfixrfloat */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if (llrt_floatp ((rSp + 1)->Val) != 0) 
        goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[2];
        rA1 = rLit[36];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {double callg_retv;
         long callg_arg1;
         double callg_arg2;
         callg_arg1 = ((Fix) rSp->Val);
         callg_arg2 = Lfloat_to_Cfloat((rSp + 1)->Val);
         callg_retv = ((double) trfixrfloat(&callg_arg1,&callg_arg2));
         rA1 = Cfloat_to_Lfloat(callg_retv);
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_34() {  /* ttabother */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        if (rA4 == (Ptr) 10)    goto l_101;
        rA1 = rLit[37];
        rA2 = (Ptr) 10;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 9)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 9)->Val;
        rA2 = rLit[0];
        rA1 = rLit[37];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 8)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 8)->Val;
        rA2 = rLit[0];
        rA1 = rLit[37];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_105:
        if (((rSp + 7)->Val >= rBvect) && ((rSp + 7)->Val < rBstrg))    goto l_107;
        rA3 = (rSp + 7)->Val;
        rA2 = rLit[11];
        rA1 = rLit[37];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_107:
        if (llrt_floatp ((rSp + 6)->Val) != 0) 
        goto l_109;
        rA3 = (rSp + 6)->Val;
        rA2 = rLit[2];
        rA1 = rLit[37];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_109:
        if (llrt_floatp ((rSp + 5)->Val) != 0) 
        goto l_111;
        rA3 = (rSp + 5)->Val;
        rA2 = rLit[2];
        rA1 = rLit[37];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_111:
        if ((rSp + 4)->Val < rBfloat)   goto l_113;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[0];
        rA1 = rLit[37];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_113:
        if (((rSp + 3)->Val >= rBvect) && ((rSp + 3)->Val < rBstrg))    goto l_115;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[11];
        rA1 = rLit[37];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_115:
        if (((rSp + 2)->Val >= rBvect) && ((rSp + 2)->Val < rBstrg))    goto l_117;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[11];
        rA1 = rLit[37];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_117:
        if ((rSp + 1)->Val < rBfloat)   goto l_119;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[37];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_119:
        if (rSp->Val < rBfloat) goto l_121;
        rA3 = rSp->Val;
        rA2 = rLit[0];
        rA1 = rLit[37];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_121:
        {long callg_retv;
         long callg_arg1;
         long callg_arg2;
         Ptr callg_arg3;
         double callg_arg4;
         double callg_arg5;
         long callg_arg6;
         Ptr callg_arg7;
         Ptr callg_arg8;
         long callg_arg9;
         long callg_arg10;
         callg_arg1 = ((Fix) (rSp + 9)->Val);
         callg_arg2 = ((Fix) (rSp + 8)->Val);
         callg_arg3 = ((Ptr) ((rSp + 7)->Val->Val)+2);
         callg_arg4 = Lfloat_to_Cfloat((rSp + 6)->Val);
         callg_arg5 = Lfloat_to_Cfloat((rSp + 5)->Val);
         callg_arg6 = ((Fix) (rSp + 4)->Val);
         callg_arg7 = ((Ptr) ((rSp + 3)->Val->Val)+2);
         callg_arg8 = ((Ptr) ((rSp + 2)->Val->Val)+2);
         callg_arg9 = ((Fix) (rSp + 1)->Val);
         callg_arg10 = ((Fix) rSp->Val);
         Lfixvector_to_Cfixvector ((rSp + 2)->Val);
         Lfixvector_to_Cfixvector ((rSp + 7)->Val);
         Lfloatvector_to_Cfloatvector ((rSp + 3)->Val);
         callg_retv = ((long) ttabother(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5,callg_arg6,callg_arg7,callg_arg8,callg_arg9,callg_arg10));
         Cfixvector_to_Lfixvector ((rSp + 2)->Val);
         Cfixvector_to_Lfixvector ((rSp + 7)->Val);
         Cfloatvector_to_Lfloatvector ((rSp + 3)->Val);
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_122:
        rSp += (Fix) 10;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_35() {  /* struct_un */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA3;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if (llrt_floatp ((rSp + 1)->Val) != 0) 
        goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[2];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        if (((rSp + 2)->Val >= rBstrg) && ((rSp + 2)->Val < rBsymb))    goto l_106;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[8];
        rA1 = rLit[38];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_106:
        {Ptr callg_retv;
         long callg_arg1;
         double callg_arg2;
         Ptr callg_arg3;
         callg_arg1 = ((Fix) rSp->Val);
         callg_arg2 = Lfloat_to_Cfloat((rSp + 1)->Val);
         callg_arg3 = ((Ptr) ((rSp + 2)->Val->Val)+2);
         callg_retv = ((Ptr) struct_un(callg_arg1,callg_arg2,callg_arg3));
         rA1 = ((Ptr) callg_retv);
        }
l_107:
        rSp += (Fix) 3;
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_36() {  /* tltout */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        if (rA4 == (Ptr) 5)     goto l_101;
        rA1 = rLit[39];
        rA2 = (Ptr) 5;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 4)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[0];
        rA1 = rLit[39];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        if (llrt_floatp ((rSp + 3)->Val) != 0) 
        goto l_105;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[2];
        rA1 = rLit[39];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_105:
        if (((rSp + 2)->Val >= rBstrg) && ((rSp + 2)->Val < rBsymb))    goto l_107;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[8];
        rA1 = rLit[39];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_107:
        if (((rSp + 1)->Val >= rBvect) && ((rSp + 1)->Val < rBstrg))    goto l_109;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[11];
        rA1 = rLit[39];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_109:
        if (rSp->Val < rBfloat) goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[0];
        rA1 = rLit[39];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_111:
        {long callg_retv;
         long callg_arg1;
         double callg_arg2;
         Ptr callg_arg3;
         Ptr callg_arg4;
         long callg_arg5;
         callg_arg1 = ((Fix) (rSp + 4)->Val);
         callg_arg2 = Lfloat_to_Cfloat((rSp + 3)->Val);
         callg_arg3 = ((Ptr) ((rSp + 2)->Val->Val)+2);
         callg_arg4 = ((Ptr) ((rSp + 1)->Val->Val)+2);
         callg_arg5 = ((Fix) rSp->Val);
         callg_retv = ((long) tltout(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_112:
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_37() {  /* tlmalloc */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[40];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((Ptr) tlmalloc(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_38() {  /* getsym */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[8];
        rA1 = rLit[41];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_retv = ((Ptr) getsym(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_39() {  /* cons_en_c */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = ((Ptr) rA1);       callg_arg2 = ((Ptr) rA2);       callg_retv = ((Ptr) cons_en_c(callg_arg1,callg_arg2));
         rA1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_40() {  /* vect_to_list */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBvect) && (rA1 < rBstrg))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[11];
        rA1 = rLit[42];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[42];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {Ptr callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_arg2 = ((Fix) (rSp + 1)->Val);
         callg_retv = ((Ptr) vect_to_list(callg_arg1,callg_arg2));
         rA1 = ((Ptr) callg_retv);
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_41() {  /* cfib */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[43];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {long callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((long) cfib(callg_arg1));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_42() {  /* init_fib */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {long callg_retv;
         callg_retv = ((long) init_fib());
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_43() {  /* tpafloat */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {Ptr callg_retv;
         callg_retv = ((Ptr) tpafloat());
         rA1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_44() {  /* tpamultifloat */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rA1) != 0) 
        goto l_102;
        rA3 = rA1;
        rA2 = rLit[2];
        rA1 = rLit[44];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         double callg_arg1;
         callg_arg1 = Lfloat_to_Cfloat(rSp->Val);
         callg_retv = ((Ptr) tpamultifloat(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_45() {  /* tlcstring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {Ptr callg_retv;
         callg_retv = ((Ptr) tlcstring());
         rA1 = Cstring_to_Lstring((char *) callg_retv);
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_46() {  /* tpastring */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {long callg_retv;
         callg_retv = ((long) tpastring());
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_47() {  /* tpamultistrg */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[8];
        rA1 = rLit[45];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_retv = ((Ptr) tpamultistrg(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_48() {  /* malloc_for_test */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[46];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((Ptr) malloc_for_test(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rLit[29] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_49() {  /* string_in_malloc */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        if ((long) rA1 < (long) rBcons) goto l_103;
        if (rA1->Val >= rBfloat)        goto l_103;
        if ((rA1 + 1)->Val < rBfloat)   goto l_102;
l_103:
        rA3 = rA1;
        rA2 = rLit[20];
        rA1 = rLit[47];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = llrt_vag(rSp->Val);
         callg_retv = ((Ptr) string_in_malloc(callg_arg1));
         rA1 = Cstring_to_Lstring((char *) callg_retv);
        }
l_104:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_50() {  /* crac */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[48];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {long callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((long) crac(callg_arg1));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_51() {  /* crac2 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[49];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {long callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((long) crac2(callg_arg1));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_52() {  /* croc */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[50];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {long callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((long) croc(callg_arg1));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_53() {  /* cric */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[51];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {long callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((long) cric(callg_arg1));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_54() {  /* c_i1 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBvect) && (rA1 < rBstrg))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[11];
        rA1 = rLit[52];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[52];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {long callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_arg2 = ((Fix) (rSp + 1)->Val);
         Lfixvector_to_Cfixvector (rSp->Val);
         callg_retv = ((long) c_i1(callg_arg1,callg_arg2));
         Cfixvector_to_Lfixvector (rSp->Val);
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_55() {  /* c_i2 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        if (rA4 == (Ptr) 5)     goto l_101;
        rA1 = rLit[53];
        rA2 = (Ptr) 5;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
l_101:
        if (((rSp + 4)->Val >= rBvect) && ((rSp + 4)->Val < rBstrg))    goto l_103;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[11];
        rA1 = rLit[53];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 1)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[53];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_105:
        if ((rSp->Val >= rBstrg) && (rSp->Val < rBsymb))        goto l_107;
        rA3 = rSp->Val;
        rA2 = rLit[8];
        rA1 = rLit[53];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_107:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         Ptr callg_arg5;
         callg_arg1 = ((Ptr) ((rSp + 4)->Val->Val)+2);
         callg_arg2 = ((Ptr) (rSp + 3)->Val);    callg_arg3 = ((Ptr) (rSp + 2)->Val);    callg_arg4 = ((Fix) (rSp + 1)->Val);
         callg_arg5 = ((Ptr) (rSp->Val->Val)+2);
         Lfixvector_to_Cfixvector ((rSp + 4)->Val);
         callg_retv = ((long) c_i2(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5));
         Cfixvector_to_Lfixvector ((rSp + 4)->Val);
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_108:
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_56() {  /* c_f1 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBvect) && (rA1 < rBstrg))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[11];
        rA1 = rLit[54];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if ((rSp + 1)->Val < rBfloat)   goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[54];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {long callg_retv;
         Ptr callg_arg1;
         long callg_arg2;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_arg2 = ((Fix) (rSp + 1)->Val);
         Lfloatvector_to_Cfloatvector (rSp->Val);
         callg_retv = ((long) c_f1(callg_arg1,callg_arg2));
         Cfloatvector_to_Lfloatvector (rSp->Val);
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_57() {  /* c_f2 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        if (rA4 == (Ptr) 5)     goto l_101;
        rA1 = rLit[55];
        rA2 = (Ptr) 5;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
l_101:
        if (((rSp + 4)->Val >= rBvect) && ((rSp + 4)->Val < rBstrg))    goto l_103;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[11];
        rA1 = rLit[55];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 1)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[55];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_105:
        if ((rSp->Val >= rBstrg) && (rSp->Val < rBsymb))        goto l_107;
        rA3 = rSp->Val;
        rA2 = rLit[8];
        rA1 = rLit[55];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_107:
        {long callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         Ptr callg_arg3;
         long callg_arg4;
         Ptr callg_arg5;
         callg_arg1 = ((Ptr) ((rSp + 4)->Val->Val)+2);
         callg_arg2 = ((Ptr) (rSp + 3)->Val);    callg_arg3 = ((Ptr) (rSp + 2)->Val);    callg_arg4 = ((Fix) (rSp + 1)->Val);
         callg_arg5 = ((Ptr) (rSp->Val->Val)+2);
         Lfloatvector_to_Cfloatvector ((rSp + 4)->Val);
         callg_retv = ((long) c_f2(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5));
         Cfloatvector_to_Lfloatvector ((rSp + 4)->Val);
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_108:
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_58() {  /* test_float_lispcall */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {Ptr callg_retv;
         callg_retv = ((Ptr) test_float_lispcall());
         rA1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_59() {  /* test_openi */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[8];
        rA1 = rLit[56];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_retv = ((Ptr) test_openi(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_60() {  /* test_openo */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[8];
        rA1 = rLit[57];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_retv = ((Ptr) test_openo(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_61() {  /* test_read_in_file */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {Ptr callg_retv;
         callg_retv = ((Ptr) test_read_in_file());
         rA1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_62() {  /* test_flush */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {Ptr callg_retv;
         callg_retv = ((Ptr) test_flush());
         rA1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_63() {  /* test_close */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[58];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((Ptr) test_close(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_64() {  /* test_deletefile */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[8];
        rA1 = rLit[59];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_retv = ((Ptr) test_deletefile(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_65() {  /* test_renamefile */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[8];
        rA1 = rLit[60];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if (((rSp + 1)->Val >= rBstrg) && ((rSp + 1)->Val < rBsymb))    goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[8];
        rA1 = rLit[60];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_arg2 = ((Ptr) ((rSp + 1)->Val->Val)+2);
         callg_retv = ((Ptr) test_renamefile(callg_arg1,callg_arg2));
         rA1 = ((Ptr) callg_retv);
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_66() {  /* test_copyfile */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[8];
        rA1 = rLit[61];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if (((rSp + 1)->Val >= rBstrg) && ((rSp + 1)->Val < rBsymb))    goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[8];
        rA1 = rLit[61];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {Ptr callg_retv;
         Ptr callg_arg1;
         Ptr callg_arg2;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_arg2 = ((Ptr) ((rSp + 1)->Val->Val)+2);
         callg_retv = ((Ptr) test_copyfile(callg_arg1,callg_arg2));
         rA1 = ((Ptr) callg_retv);
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_67() {  /* test_probefile */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[8];
        rA1 = rLit[62];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_retv = ((Ptr) test_probefile(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_68() {  /* test_runtime */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {Ptr callg_retv;
         callg_retv = ((Ptr) test_runtime());
         rA1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_69() {  /* test_sleep */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rA1) != 0) 
        goto l_102;
        rA3 = rA1;
        rA2 = rLit[2];
        rA1 = rLit[63];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         double callg_arg1;
         callg_arg1 = Lfloat_to_Cfloat(rSp->Val);
         callg_retv = ((Ptr) test_sleep(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_70() {  /* test_date */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {Ptr callg_retv;
         callg_retv = ((Ptr) test_date());
         rA1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_71() {  /* test_getenv */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[8];
        rA1 = rLit[64];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_retv = ((Ptr) test_getenv(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_72() {  /* test_float */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (rA1 < rBfloat)      goto l_102;
        rA3 = rA1;
        rA2 = rLit[0];
        rA1 = rLit[65];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         long callg_arg1;
         callg_arg1 = ((Fix) rSp->Val);
         callg_retv = ((Ptr) test_float(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_73() {  /* test_fix */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rA1) != 0) 
        goto l_102;
        rA3 = rA1;
        rA2 = rLit[2];
        rA1 = rLit[66];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         double callg_arg1;
         callg_arg1 = Lfloat_to_Cfloat(rSp->Val);
         callg_retv = ((Ptr) test_fix(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_74() {  /* test_string */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rA1) != 0) 
        goto l_102;
        rA3 = rA1;
        rA2 = rLit[2];
        rA1 = rLit[67];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         double callg_arg1;
         callg_arg1 = Lfloat_to_Cfloat(rSp->Val);
         callg_retv = ((Ptr) test_string(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_75() {  /* test_version */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {Ptr callg_retv;
         callg_retv = ((Ptr) test_version());
         rA1 = ((Ptr) callg_retv);
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_76() {  /* test_getglobal */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA1;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_102;
        rA3 = rA1;
        rA2 = rLit[8];
        rA1 = rLit[68];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        {Ptr callg_retv;
         Ptr callg_arg1;
         callg_arg1 = ((Ptr) (rSp->Val->Val)+2);
         callg_retv = ((Ptr) test_getglobal(callg_arg1));
         rA1 = ((Ptr) callg_retv);
        }
l_103:
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_77() {  /* test_fadd */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rA1) != 0) 
        goto l_102;
        rA3 = rA1;
        rA2 = rLit[2];
        rA1 = rLit[69];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if (llrt_floatp ((rSp + 1)->Val) != 0) 
        goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[2];
        rA1 = rLit[69];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {Ptr callg_retv;
         double callg_arg1;
         double callg_arg2;
         callg_arg1 = Lfloat_to_Cfloat(rSp->Val);
         callg_arg2 = Lfloat_to_Cfloat((rSp + 1)->Val);
         callg_retv = ((Ptr) test_fadd(callg_arg1,callg_arg2));
         rA1 = ((Ptr) callg_retv);
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_78() {  /* test_power */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        (--rSp)->Val = rA2;
        (--rSp)->Val = rA1;
        if (llrt_floatp (rA1) != 0) 
        goto l_102;
        rA3 = rA1;
        rA2 = rLit[2];
        rA1 = rLit[70];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_102:
        if (llrt_floatp ((rSp + 1)->Val) != 0) 
        goto l_104;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[2];
        rA1 = rLit[70];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_104:
        {Ptr callg_retv;
         double callg_arg1;
         double callg_arg2;
         callg_arg1 = Lfloat_to_Cfloat(rSp->Val);
         callg_arg2 = Lfloat_to_Cfloat((rSp + 1)->Val);
         callg_retv = ((Ptr) test_power(callg_arg1,callg_arg2));
         rA1 = ((Ptr) callg_retv);
        }
l_105:
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_79() {  /* cboucle */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {long callg_retv;
         callg_retv = ((long) cboucle());
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_80() {  /* do_not_kill1 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {long callg_retv;
         callg_retv = ((long) do_not_kill1());
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_81() {  /* c_kill1 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {long callg_retv;
         callg_retv = ((long) c_kill1());
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_82() {  /* c_kill2 */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        if (rA4 == (Ptr) 5)     goto l_101;
        rA1 = rLit[71];
        rA2 = (Ptr) 5;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
l_101:
        if ((rSp + 4)->Val < rBfloat)   goto l_103;
        rA3 = (rSp + 4)->Val;
        rA2 = rLit[0];
        rA1 = rLit[71];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        if ((rSp + 3)->Val < rBfloat)   goto l_105;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[0];
        rA1 = rLit[71];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 2)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[0];
        rA1 = rLit[71];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_107:
        if ((rSp + 1)->Val < rBfloat)   goto l_109;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[0];
        rA1 = rLit[71];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_109:
        if (rSp->Val < rBfloat) goto l_111;
        rA3 = rSp->Val;
        rA2 = rLit[0];
        rA1 = rLit[71];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_111:
        {long callg_retv;
         long callg_arg1;
         long callg_arg2;
         long callg_arg3;
         long callg_arg4;
         long callg_arg5;
         callg_arg1 = ((Fix) (rSp + 4)->Val);
         callg_arg2 = ((Fix) (rSp + 3)->Val);
         callg_arg3 = ((Fix) (rSp + 2)->Val);
         callg_arg4 = ((Fix) (rSp + 1)->Val);
         callg_arg5 = ((Fix) rSp->Val);
         callg_retv = ((long) c_kill2(callg_arg1,callg_arg2,callg_arg3,callg_arg4,callg_arg5));
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_112:
        rSp += (Fix) 5;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLtestextern_83() {  /* #:testgc:gcalarm */
   {    register Ptr aRet, *rLit;
        rLit = GYtestextern;
        rLit[72]->Val = rLit[73];
        GIa1 = rLit[73];
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestextern_84() {  /* fib */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        if (rA1 != (Ptr) 1)     goto l_101;
        rA1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_101:
        if (rA1 != (Ptr) 2)     goto l_103;
        rA1 = (Ptr) 1;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
l_103:
        rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 1));
        (--rSp)->Val = ((Ptr) GLtestextern_86);
        {aRet = (GYtestextern[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLtestextern_86() {  /* call_testextern_85 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        (--rSp)->Val = GIa1;
        rA4 = (rSp + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
        GIa1 = rA4;
        (--rSp)->Val = ((Ptr) GLtestextern_88);
        {aRet = (GYtestextern[43] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtestextern_88() {  /* call_testextern_87 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (GIa1)));
        GIa1 = rA4;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLtestextern_89() {  /* llcrac */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestextern_90() {  /* llcrac2 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtestextern; rSp = GIsp;
        (--rSp)->Val = GIa2;
        GIa2 = rLit[74];
        (--rSp)->Val = ((Ptr) GLtestextern_92);
        {aRet = (rLit[75] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_92() {  /* call_testextern_91 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtestextern; rSp = GIsp;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLtestextern_93); goto lRet;}
        GIa2 = rLit[76];
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLtestextern_95);
        {aRet = (rLit[75] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_95() {  /* call_testextern_94 */
   {    register Ptr aRet;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLtestextern_96); goto lRet;}
        {aRet = ((Ptr) GLtestextern_93); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestextern_93() {  /* 103 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtestextern; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GXpopj1);
        (--rSp)->Val = rLit[77];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_96() {  /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = GInil;
        rSp += (Fix) 1;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_97() {  /* llcroc */
   {    register Ptr aRet;
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestextern_98() {  /* llcric */
   {    register Ptr aRet;
        GIa2 = (Ptr) 97;
        GIa1 = (Ptr) 1;
        {aRet = (GYtestextern[79] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestextern_99() {  /* ll_f1 */
   {    register Ptr aRet;
        {aRet = (GYtestextern[54] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestextern_100() { /* ll_f2 */
   {    register Ptr aRet, *rLit, rSp, rA2;
        rLit = GYtestextern; rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rA2;
        rA2 = rLit[80];
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLtestextern_102);
        {aRet = (rLit[81] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLtestextern_102() { /* call_testextern_101 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLtestextern_103);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[82];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[55] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_103() { /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYtestextern[83]->Val = rSp->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_104() { /* ll_f3 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = GYtestextern[84]->Val;
        (rA4 + 1)->Val = GIa2;
        rA4->Val = GIa1;
        GIa1 = rA4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLtestextern_105() { /* ll_i1 */
   {    register Ptr aRet;
        {aRet = (GYtestextern[52] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestextern_106() { /* ll_i2 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rA2;
        rA2 = (Ptr) 0;
        GIa1 = (rSp++)->Val;
        (--rSp)->Val = ((Ptr) GLtestextern_108);
        {aRet = (GYtestextern[81] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLtestextern_108() { /* call_testextern_107 */
   {    register Ptr aRet, *rLit, rSp, rA1;
        rLit = GYtestextern; rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1;
        (--rSp)->Val = ((Ptr) GLtestextern_109);
        (--rSp)->Val = rA1;
        (--rSp)->Val = rA1;
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 6)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = rLit[82];
        GIa4 = (Ptr) 5;
        {aRet = (rLit[53] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_109() { /* 101 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GYtestextern[85]->Val = rSp->Val;
        GIa1 = rSp->Val;
        rSp += (Fix) 3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_110() { /* ll_i3 */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        rA4 = GYtestextern[84]->Val;
        (rA4 + 1)->Val = GIa2;
        rA4->Val = GIa1;
        GIa1 = rA4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLtestextern_111() { /* kill_or_not_kill1 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLtestextern_112);
        GIa4 = (Ptr) 0;
        {aRet = (GYtestextern[86] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestextern_112() { /* 101 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtestextern; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtestextern_113);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtestextern_114);
        GIa1 = rLit[87];
        (--rSp)->Val = ((Ptr) GLtestextern_116);
        {aRet = (rLit[88] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_116() { /* call_testextern_115 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtestextern[86] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestextern_114() { /* 104 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtestextern; rSp = GIsp;
        (--rSp)->Val = ((Ptr) GLtestextern_117);
        (--rSp)->Val = rLit[89];
        GIa4 = (Ptr) 1;
        {aRet = (rLit[78] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_117() { /* 105 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLtestextern_118);
        {aRet = ((Ptr) GLtestextern_113); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_113() { /* 102 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtestextern_119);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYtestextern[86] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_119() { /* 106 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_118() { /* 103 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) 1;
        (--rSp)->Val = ((Ptr) GLtestextern_120);
        GIa4 = (Ptr) 0;
        {aRet = (GYtestextern[90] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_120() { /* 107 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtestextern; rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLtestextern_121);
        (--rSp)->Val = GIdlink;
        (--rSp)->Val = ((Ptr) GXunbind7);
        GIdlink = rSp;
        (--rSp)->Val = ((Ptr) GLtestextern_122);
        GIa1 = rLit[87];
        (--rSp)->Val = ((Ptr) GLtestextern_124);
        {aRet = (rLit[91] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_124() { /* call_testextern_123 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 1;
        {aRet = (GYtestextern[90] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestextern_122() { /* 110 */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GLtestextern_126);
        {aRet = (GYtestextern[92] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestextern_126() { /* call_testextern_125 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIdlink = (rSp + 1)->Val;
        rSp += (Fix) 3;
        (--rSp)->Val = GIa1;
        GIa3 = ((Ptr) GLtestextern_127);
        {aRet = ((Ptr) GLtestextern_121); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_121() { /* 108 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLtestextern_128);
        {register Ptr aux;
                aux = (rSp + 4)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 1;
        {aRet = (GYtestextern[90] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_128() { /* 111 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_127() { /* 109 */
   {    register Ptr aRet, *rLit;
        rLit = GYtestextern;
        GIsp += (Fix) 1;
        GIa1 = rLit[87];
        {aRet = (rLit[93] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLtestextern_129() { /* ll_kill2 */
   {    register Ptr aRet, *rLit, rSp;
        rLit = GYtestextern; rSp = GIsp;
        if (GIa4 == (Ptr) 5)    goto l_101;
        GIa1 = rLit[94];
        GIa2 = (Ptr) 5;
        {aRet = (rLit[31] + 2)->Val; goto lRet;}
l_101:
        (--rSp)->Val = ((Ptr) GXpopj5);
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        {register Ptr aux;
                aux = (rSp + 5)->Val;
                (--rSp)->Val = aux;}
        (--rSp)->Val = ((Ptr) GLtestextern_130);
        (--rSp)->Val = (Ptr) 2;
        {register Ptr aux;
                aux = (rSp + 7)->Val;
                (--rSp)->Val = aux;}
        GIa4 = (Ptr) 2;
        {aRet = (rLit[95] + 2)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextern_130() { /* 103 */
   {    register Ptr aRet;
        (--GIsp)->Val = GIa1;
        GIa4 = (Ptr) 5;
        {aRet = (GYtestextern[71] + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDtestextern_131() { /* trace _tlno */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,96,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_132() { /* trace tlfix */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,1,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_133() { /* trace tlfloat */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,3,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_134() { /* trace tlfloat_ */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,4,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_135() { /* trace tlfloat_1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,5,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_136() { /* trace tlfloat_2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,6,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_137() { /* trace _trfix */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,7,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_138() { /* trace _tlstring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,9,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_139() { /* trace _tlstring3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,10,97,101);
  lRet:  return (aRet);}}

static Ptr GDtestextern_140() { /* trace tlvector */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,12,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_141() { /* trace trfloat */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,13,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_142() { /* trace trfloat1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,14,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_143() { /* trace ttabint */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,15,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_144() { /* trace ttabintonly */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,16,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_145() { /* trace ttabflt */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,17,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_146() { /* trace tflt_lispcall */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,18,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_147() { /* trace tflt_getsym */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,19,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_148() { /* trace tlt */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,102,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_149() { /* trace tlexternal */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,21,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_150() { /* trace tcfloat */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,22,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_151() { /* trace tcfloat2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,23,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_152() { /* trace f_s_to_d */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,103,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_153() { /* trace tcstring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,24,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_154() { /* trace conv1_tcstring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,25,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_155() { /* trace conv2_tcstring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,26,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_156() { /* trace tct */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,27,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_157() { /* trace tcexternal */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,28,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_158() { /* trace tlnadic */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,30,97,104);
  lRet:  return (aRet);}}

static Ptr GDtestextern_159() { /* trace tnbmaxi */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,32,97,104);
  lRet:  return (aRet);}}

static Ptr GDtestextern_160() { /* trace tnbmaxf */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,33,97,104);
  lRet:  return (aRet);}}

static Ptr GDtestextern_161() { /* trace tnbmaxri */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,34,97,104);
  lRet:  return (aRet);}}

static Ptr GDtestextern_162() { /* trace tnbmaxrf */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,35,97,104);
  lRet:  return (aRet);}}

static Ptr GDtestextern_163() { /* trace trfixrfloat */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,36,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_164() { /* trace ttabother */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,37,97,104);
  lRet:  return (aRet);}}

static Ptr GDtestextern_165() { /* trace struct_un */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,38,97,101);
  lRet:  return (aRet);}}

static Ptr GDtestextern_166() { /* trace tltout */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,39,97,104);
  lRet:  return (aRet);}}

static Ptr GDtestextern_167() { /* trace tlmalloc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,40,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_168() { /* trace getsym */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,41,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_169() { /* trace cons_en_c */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,105,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_170() { /* trace vect_to_list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,42,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_171() { /* trace cfib */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,43,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_172() { /* trace init_fib */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,106,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_173() { /* trace tpafloat */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,107,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_174() { /* trace tpamultifloat */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,44,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_175() { /* trace tlcstring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,108,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_176() { /* trace tpastring */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,109,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_177() { /* trace tpamultistrg */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,45,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_178() { /* trace malloc_for_test */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,46,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_179() { /* trace string_in_malloc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,47,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_180() { /* trace crac */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,48,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_181() { /* trace crac2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,49,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_182() { /* trace croc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,50,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_183() { /* trace cric */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,51,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_184() { /* trace c_i1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,52,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_185() { /* trace c_i2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,53,97,104);
  lRet:  return (aRet);}}

static Ptr GDtestextern_186() { /* trace c_f1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,54,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_187() { /* trace c_f2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,55,97,104);
  lRet:  return (aRet);}}

static Ptr GDtestextern_188() { /* trace test_float_lispcall */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,110,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_189() { /* trace test_openi */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,56,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_190() { /* trace test_openo */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,57,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_191() { /* trace test_read_in_file */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,111,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_192() { /* trace test_flush */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,112,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_193() { /* trace test_close */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,58,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_194() { /* trace test_deletefile */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,59,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_195() { /* trace test_renamefile */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,60,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_196() { /* trace test_copyfile */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,61,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_197() { /* trace test_probefile */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,62,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_198() { /* trace test_runtime */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,113,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_199() { /* trace test_sleep */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,63,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_200() { /* trace test_date */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,114,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_201() { /* trace test_getenv */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,64,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_202() { /* trace test_float */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,65,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_203() { /* trace test_fix */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,66,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_204() { /* trace test_string */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,67,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_205() { /* trace test_version */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,115,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_206() { /* trace test_getglobal */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,68,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_207() { /* trace test_fadd */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,69,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_208() { /* trace test_power */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,70,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_209() { /* trace cboucle */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,116,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_210() { /* trace do_not_kill1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,117,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_211() { /* trace c_kill1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,118,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_212() { /* trace c_kill2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,71,97,104);
  lRet:  return (aRet);}}

static Ptr GDtestextern_213() { /* trace #:testgc:gcalarm */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,119,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_214() { /* trace fib */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,120,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_215() { /* trace llcrac */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,121,97,99);
  lRet:  return (aRet);}}

static Ptr GDtestextern_216() { /* trace llcrac2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,122,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_217() { /* trace llcroc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,123,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_218() { /* trace llcric */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,124,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_219() { /* trace ll_f1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,125,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_220() { /* trace ll_f2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,83,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_221() { /* trace ll_f3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,126,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_222() { /* trace ll_i1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,127,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_223() { /* trace ll_i2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,85,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_224() { /* trace ll_i3 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,128,97,100);
  lRet:  return (aRet);}}

static Ptr GDtestextern_225() { /* trace kill_or_not_kill1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,129,97,98);
  lRet:  return (aRet);}}

static Ptr GDtestextern_226() { /* trace ll_kill2 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextern,94,97,104);
  lRet:  return (aRet);}}

