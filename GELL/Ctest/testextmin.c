/* GELL 15.26: source file for the module: "testextmin" */
/*             translation done:           "Fri June  4 93 19:21:16 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "testextmin.h" 

static Ptr GLtestextmin_1() {   /* _cmoinsun */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextmin; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        {long callg_retv;
         callg_retv = ((long) cmoinsun());
         rA1 = ((Ptr) ((UFix) callg_retv));
        }
l_101:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLtestextmin_2() {   /* ctest */
   {    register Ptr aRet, *rLit, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rLit = GYtestextmin; rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        if (rA4 == (Ptr) 4)     goto l_101;
        rA1 = rLit[0];
        rA2 = (Ptr) 4;
        {aRet = (rLit[1] + 2)->Val; goto lRet;}
l_101:
        if (((rSp + 3)->Val >= rBstrg) && ((rSp + 3)->Val < rBsymb))    goto l_103;
        rA3 = (rSp + 3)->Val;
        rA2 = rLit[2];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_103:
        if (llrt_floatp ((rSp + 2)->Val) != 0) 
        goto l_105;
        rA3 = (rSp + 2)->Val;
        rA2 = rLit[3];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_105:
        if ((rSp + 1)->Val < rBfloat)   goto l_107;
        rA3 = (rSp + 1)->Val;
        rA2 = rLit[4];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_107:
        if ((rSp->Val >= rBvect) && (rSp->Val < rBstrg))        goto l_109;
        rA3 = rSp->Val;
        rA2 = rLit[5];
        rA1 = rLit[0];
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_call_error ();
l_109:
        {double callg_retv;
         Ptr callg_arg1;
         double callg_arg2;
         long callg_arg3;
         Ptr callg_arg4;
         callg_arg1 = ((Ptr) ((rSp + 3)->Val->Val)+2);
         callg_arg2 = Lfloat_to_Cfloat((rSp + 2)->Val);
         callg_arg3 = ((Fix) (rSp + 1)->Val);
         callg_arg4 = ((Ptr) (rSp->Val->Val)+2);
         callg_retv = ((double) ctest(callg_arg1,callg_arg2,callg_arg3,callg_arg4));
         rA1 = Cfloat_to_Lfloat(callg_retv);
        }
l_110:
        rSp += (Fix) 4;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GDtestextmin_3() {   /* trace _cmoinsun */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextmin,6,7,8);
  lRet:  return (aRet);}}

static Ptr GDtestextmin_4() {   /* trace ctest */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYtestextmin,0,7,9);
  lRet:  return (aRet);}}

