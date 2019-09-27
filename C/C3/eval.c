/* GELL 15.26: source file for the module: "eval" */
/*             translation done:           "Sat Oct   7 17 20:53:23 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "eval.h" 

static Ptr GLeval_1(void) {	/* startmodule */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXini_eval); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_eval(void) {	/* ini_eval */
   {	register Ptr aRet;
	GIcpkgc = GMsyspkgc;
	{ llrt_inicst ((Ptr) 6, (Ptr) "itsoft", (Ptr) &GMsysits);}
	GIcpkgc = GInil;
	{ llrt_inisymb ((Ptr) 4, (Ptr) "eval", ((Ptr) GXeval), (Ptr) &GMeval, (Ptr) GFeval);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "eval-when", ((Ptr) GXevalwhen), (Ptr) &GMevalwhen, (Ptr) GFevalwhen);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "symeval", ((Ptr) GXsymeval), (Ptr) &GMsymeval, (Ptr) GFsymeval);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "arg", ((Ptr) GXllarg), (Ptr) &GMllarg, (Ptr) GFllarg);}
	{ llrt_inicst ((Ptr) 7, (Ptr) "&nobind", (Ptr) &GMnobind);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "traceval", ((Ptr) GXtraceval), (Ptr) &GMtraceval, (Ptr) GFtraceval);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "stepeval", ((Ptr) GXstepeval), (Ptr) &GMstepeval, (Ptr) GFstepeval);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "apply", ((Ptr) GXuapply), (Ptr) &GMuapply, (Ptr) GFuapply);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "funcall", ((Ptr) GXfuncall), (Ptr) &GMfuncall, (Ptr) GFfuncall);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "tag", ((Ptr) GXtag), (Ptr) &GMtag, (Ptr) GFtag);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "evtag", ((Ptr) GXevtag), (Ptr) &GMevtag, (Ptr) GFevtag);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "untilexit", ((Ptr) GXuntlxit), (Ptr) &GMuntlxit, (Ptr) GFuntlxit);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "exit", ((Ptr) GXffexit), (Ptr) &GMffexit, (Ptr) GFffexit);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "evexit", ((Ptr) GXevexit), (Ptr) &GMevexit, (Ptr) GFevexit);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "unwind", ((Ptr) GXunwind), (Ptr) &GMunwind, (Ptr) GFunwind);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "unexit", ((Ptr) GXunexit), (Ptr) &GMunexit, (Ptr) GFunexit);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "lock", ((Ptr) GXllock), (Ptr) &GMllock, (Ptr) GFllock);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "protect", ((Ptr) GXprotect), (Ptr) &GMprotect, (Ptr) GFprotect);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "let", ((Ptr) GXlet), (Ptr) &GMlet, (Ptr) GFlet);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "lets", ((Ptr) GXletseq), (Ptr) &GMletseq, (Ptr) GFletseq);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "letv", ((Ptr) GXletv), (Ptr) &GMletv, (Ptr) GFletv);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "letvq", ((Ptr) GXletvq), (Ptr) &GMletvq, (Ptr) GFletvq);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "flet", ((Ptr) GXflet), (Ptr) &GMflet, (Ptr) GFflet);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "function", ((Ptr) GXfunction), (Ptr) &GMfunction, (Ptr) GFfunction);}
	{ llrt_inicst ((Ptr) 9, (Ptr) "_closure_", (Ptr) &GMclosure);}
	{ llrt_inicst ((Ptr) 3, (Ptr) "-> ", (Ptr) &GMrarrow);}
	{ llrt_inicst ((Ptr) 3, (Ptr) "<- ", (Ptr) &GMlarrow);}
	GIevalst = GInil;
	GIllink = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXeval(void) {	/* eval */
   {	register Ptr aRet, rSp, rA1, rA2, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
	if (rA4 == (Ptr) 1)	goto l_evalu2;
	if (rA4 == (Ptr) 2)	goto l_evalu1;
	rA1 = (Ptr) 1;
	rA2 = GMeval;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_evalu1:
	rA2 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	(--rSp)->Val = GIllink;
	GIllink = rA2;
	goto l_evalu3;
l_evalu2:
	rA1 = (rSp++)->Val;
	(--rSp)->Val = GIllink;
	GIllink = GInil;
l_evalu3:
	GIa3 = ((Ptr) GXevala1);
	(--rSp)->Val = ((Ptr) GLeval_2);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLeval_2(void) {	/* ret_call_sysprot_1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIllink = (rSp++)->Val;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXevalc(void) {	/* evalc */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	rA1 = rA1->Val;
	(--GIsp)->Val = rA1;
	GIa4 = (Ptr) 1;
	{aRet = ((Ptr) GXeval); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXevalwhen(void) {	/* eval-when */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
	if ((long) rA1 < (long) rBcons)	goto l_evwhen3;
	rA4 = (rA1 + 1)->Val;
	rA1 = rA1->Val;
	rA3 = GMeval;
	goto l_evwhen2;
l_evwhen1:
	rA2 = rA1->Val;
	if (rA2 == rA3)	goto l_evwhen4;
	rA1 = (rA1 + 1)->Val;
l_evwhen2:
	if ((long) rA1 >= (long) rBcons)	goto l_evwhen1;
l_evwhen3:
	rA1 = GInil;
	{aRet = (rSp++)->Val; goto lRet;}
l_evwhen4:
	rA1 = rA4;
	GIerrname = GMevalwhen;
	if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; llrt_ithard ();}
	{aRet = ((Ptr) GXevprogn); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXsymeval(void) {	/* symeval */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	goto l_symeval1;
	rA2 = rA1;
	rA1 = rA1->Val;
	if (rA1 == GMundef)	goto l_symeval2;
	{aRet = (GIsp++)->Val; goto lRet;}
l_symeval1:
	rA2 = GMsymeval;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
l_symeval2:
	rA1 = rA2;
	rA2 = GMsymeval;
	{aRet = ((Ptr) GXerrudv); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXllarg(void) {	/* arg */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (rA4 == (Ptr) 0)	{aRet = ((Ptr) GLeval_3); goto lRet;}
	if (rA4 == (Ptr) 1)	goto l_llarg1;
	GIa1 = (Ptr) 1;
	GIa2 = GMllarg;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_llarg1:
	(--GIsp)->Val = ((Ptr) GLeval_4);
	{aRet = ((Ptr) GLeval_3); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_4(void) {	/* ret_call_llarget_2 */
   {	register Ptr aRet, rSp, rA1, rA4;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
	GIa2 = (rSp++)->Val;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (GIa2)));
	rA4 += (Fix) (rA1);
	rA1 = rA4->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_3(void) {	/* llarget */
   {	register Ptr aRet, rA1, rA4;
	rA1 = GIa1; rA4 = GIa4;
	rA4 = GIdlink;
	rA1 =  (rA4++)->Val;
	if (rA1 != ((Ptr) GXunbind1))	goto l_llarger;
	rA4 += (Fix) 3;
	rA1 =  (rA4++)->Val;
	if (rA1 != GMnobind)	goto l_llarger;
	rA1 = rA4->Val;
	{aRet = (GIsp++)->Val; goto lRet;}
l_llarger:
	GIa2 = GMllarg;
	rA1 = GInil;
	{aRet = ((Ptr) GXerrnab); goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

extern Ptr GXtraceval(void) {	/* traceval */
   {	register Ptr aRet, rSp, rA1, rA2, rA4, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
	if (rA4 == (Ptr) 1)	goto l_tracev1;
	if (rA4 == (Ptr) 2)	goto l_tracev2;
	rA1 = (Ptr) 1;
	rA2 = GMtraceval;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_tracev1:
	rA1 = (rSp++)->Val;
	rA2 = rNil;
	goto l_tracev3;
l_tracev2:
	rA2 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
l_tracev3:
	(--rSp)->Val = rNil;
	(--rSp)->Val = GIsavea4;
	(--rSp)->Val = GIsavea3;
	(--rSp)->Val = GIsavea2;
	(--rSp)->Val = GIsavea1;
	(--rSp)->Val = GIfunct;
	(--rSp)->Val = GIforme;
	(--rSp)->Val = GIevalst;
	GIevalst = GMt;
	(--rSp)->Val = GMstepeval;
	(--rSp)->Val = GIllink;
	GIllink = rA2;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind4);
	GIdlink = rSp;
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXstepeval(void) {	/* stepeval */
   {	register Ptr aRet, rSp, rA1, rA2, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
	if (rA4 == (Ptr) 1)	goto l_stepev1;
	if (rA4 == (Ptr) 2)	goto l_stepev2;
	rA1 = (Ptr) 1;
	rA2 = GMstepeval;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_stepev1:
	rA1 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLeval_5);
	(--rSp)->Val = rA1;
	(--rSp)->Val = GInil;
	goto l_stepev3;
l_stepev2:
	rA2 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLeval_5);
	(--rSp)->Val = rA1;
	(--rSp)->Val = rA2;
l_stepev3:
	rA1 = GMrarrow;
	(--rSp)->Val = ((Ptr) GLeval_6);
	{aRet = ((Ptr) GXprobj); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLeval_6(void) {	/* ret_call_probj_3 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp + 1)->Val;
	(--rSp)->Val = ((Ptr) GLeval_7);
	{aRet = ((Ptr) GXprobjt); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_7(void) {	/* ret_call_probjt_4 */
   {	register Ptr aRet;
	GIa4 = (Ptr) 2;
	{aRet = ((Ptr) GXtraceval); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_5(void) {	/* stepevr */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	GIa1 = GMlarrow;
	(--rSp)->Val = ((Ptr) GLeval_8);
	{aRet = ((Ptr) GXprobj); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_8(void) {	/* ret_call_probj_5 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = rSp->Val;
	(--rSp)->Val = ((Ptr) GLeval_9);
	{aRet = ((Ptr) GXprobjt); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_9(void) {	/* ret_call_probjt_6 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXevalt(void) {	/* evalt */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	rA2 = GIllink;
	GIa2 = rA2; rA2 = llrt_cons (rA2, GInil);
	GIa2 = rA2; rA2 = llrt_cons (GIa1, rA2);
	GIa1 = GMstepeval;
	(--GIsp)->Val = ((Ptr) GLeval_10);
	{aRet = ((Ptr) GXllitsoft); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLeval_10(void) {	/* ret_call_llitsoft_7 */
   {	register Ptr aRet;
	GIevalst = GMt;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXevalcar(void) {	/* evalcar */
   {	register Ptr aRet;
	GIa1 = GIa1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXevala1(void) {	/* evala1 */
   {	register Ptr aRet;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXevalan(void) {	/* evalan */
   {	register Ptr aRet, rSp, rA1, rA2, rBstrg, rBsymb, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
	if ((long) rA1 >= (long) rBcons)	goto l_evalis;
	if (rA1 >= GIbfloat)	goto l_evalat;
	{aRet = (rSp++)->Val; goto lRet;}
l_evalis:
	if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_ithard ();}
	if (rSp < GImstack)	{aRet = ((Ptr) GXerrfs); goto lRet;}
	GIforme = rA1;
	rA2 = rA1->Val;
	rA1 = (rA1 + 1)->Val;
	if ((rA2 < rBsymb) || (rA2 >= rBcons))	{aRet = ((Ptr) GLeval_11); goto lRet;}
	GIa3 = (rA2 + 2)->Val;
	{register UFix aux;
		aux = (UFix) ((rA2 + 6)->Val);
		GIa4 = (Ptr) aux;}
	{aRet = (Ptr) (brx_eval_12[(int) (GIa4)]); goto lRet;}
l_evalat:
	if ((rA1 < rBsymb) || (rA1 >= rBcons))	goto l_evothat;
	rA2 = rA1;
	rA1 = rA1->Val;
	if (rA1 == GMundef)	goto l_evalera8;
	{aRet = (rSp++)->Val; goto lRet;}
l_evalera8:
	rA1 = rA2;
	rA2 = GMeval;
	{aRet = ((Ptr) GXerrudv); goto lRet;}
l_evothat:
	if ((rA1 >= rBstrg) && (rA1 < rBsymb))	goto l_evextyp;
	if ((rA1 >= GIbvect) && (rA1 < rBstrg))	goto l_evextyp;
	{aRet = (rSp++)->Val; goto lRet;}
l_evextyp:
	(--rSp)->Val = rA1;
	rA1 = (rA1 + 1)->Val;
	if ((rA1 < rBsymb) || (rA1 >= rBcons))	{aRet = ((Ptr) GLeval_26); goto lRet;}
	rA2 = GMeval;
	GIa3 = GInil;
	(--rSp)->Val = ((Ptr) GLeval_27);
	{aRet = ((Ptr) GXgetfns); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLeval_27(void) {	/* ret_call_getfns_8 */
   {	register Ptr aRet;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLeval_26); goto lRet;}
	GIa4 = (Ptr) 1;
	{aRet = ((Ptr) GXffuncall); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_26(void) {	/* evextypr */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_14(void) {	/* eval0 */
   {	register Ptr aRet;
	if (GIa1 != GInil)	{aRet = ((Ptr) GLeval_28); goto lRet;}
	{aRet = GIa3; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_15(void) {	/* eval1 */
   {	register Ptr aRet, rA1, rNil;
	rA1 = GIa1; rNil = GInil;
	(--GIsp)->Val = GIa3;
	if ((long) rA1 < (long) GIbcons)	{aRet = ((Ptr) GLeval_29); goto lRet;}
	if ((rA1 + 1)->Val != rNil)	{aRet = ((Ptr) GLeval_30); goto lRet;}
	rA1 = rA1->Val;
	if (GIevalst != rNil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLeval_16(void) {	/* eval2 */
   {	register Ptr aRet, rSp, rA1, rA3, rNil, rBcons;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rNil = GInil; rBcons = GIbcons;
	(--rSp)->Val = rA3;
	if ((long) rA1 < (long) rBcons)	{aRet = ((Ptr) GLeval_31); goto lRet;}
	rA3 = (rA1 + 1)->Val;
	if ((long) rA3 < (long) rBcons)	{aRet = ((Ptr) GLeval_32); goto lRet;}
	(--rSp)->Val = rA3->Val;
	if ((rA3 + 1)->Val != rNil)	{aRet = ((Ptr) GLeval_33); goto lRet;}
	(--rSp)->Val = ((Ptr) GLeval_34);
	rA1 = rA1->Val;
	if (GIevalst != rNil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

static Ptr GLeval_34(void) {	/* ret_call_evalcar_9 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = GIa1;
		GIa1 = aux;}
	(--rSp)->Val = ((Ptr) GLeval_35);
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_35(void) {	/* ret_call_evala1_10 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = GIa1;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_17(void) {	/* eval3 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = GIa3;
	if ((long) rA1 < (long) GIbcons)	{aRet = ((Ptr) GLeval_36); goto lRet;}
	(--rSp)->Val = (rA1 + 1)->Val;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = ((Ptr) GLeval_37);
	rA1 = rA1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_37(void) {	/* ret_call_evalcar_11 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIa2 = (rSp++)->Val;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	if ((long) rA1 < (long) GIbcons)	{aRet = ((Ptr) GLeval_36); goto lRet;}
	(--rSp)->Val = (rA1 + 1)->Val;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = ((Ptr) GLeval_38);
	rA1 = rA1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_38(void) {	/* ret_call_evalcar_12 */
   {	register Ptr aRet, rSp, rA1, rNil;
	rSp = GIsp; rA1 = GIa1; rNil = GInil;
	GIa2 = (rSp++)->Val;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	if ((long) rA1 < (long) GIbcons)	{aRet = ((Ptr) GLeval_36); goto lRet;}
	if ((rA1 + 1)->Val != rNil)	{aRet = ((Ptr) GLeval_39); goto lRet;}
	(--rSp)->Val = ((Ptr) GLeval_40);
	rA1 = rA1->Val;
	if (GIevalst != rNil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_40(void) {	/* ret_call_evalcar_13 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa3 = GIa1;
	GIa2 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_18(void) {	/* evaln */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rNil, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rNil = GInil; rBcons = GIbcons;
	if ((long) rA1 >= (long) rBcons)	goto l_evalns0;
	if (rA1 != rNil)	{aRet = ((Ptr) GLeval_41); goto lRet;}
	GIa4 = (Ptr) 0;
	{aRet = rA3; goto lRet;}
l_evalns0:
	rA2 = (rA1 + 1)->Val;
	if ((long) rA2 >= (long) rBcons)	{aRet = ((Ptr) GLeval_42); goto lRet;}
	if (rA2 != rNil)	{aRet = ((Ptr) GLeval_43); goto lRet;}
	(--rSp)->Val = rA3;
	(--rSp)->Val = ((Ptr) GLeval_44);
	rA1 = rA1->Val;
	if (GIevalst != rNil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLeval_44(void) {	/* ret_call_evalcar_14 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	GIa4 = (Ptr) 1;
	{aRet = rA1; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLeval_42(void) {	/* evalns1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = ((Ptr) GLeval_45);
	GIa1 = GIa1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_45(void) {	/* ret_call_evalcar_15 */
   {	register Ptr aRet, rSp, rA1, rA2, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
	GIa3 = (rSp++)->Val;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	rA2 = (rA1 + 1)->Val;
	if ((long) rA2 >= (long) GIbcons)	{aRet = ((Ptr) GLeval_46); goto lRet;}
	if (rA2 != rNil)	{aRet = ((Ptr) GLeval_43); goto lRet;}
	(--rSp)->Val = GIa3;
	(--rSp)->Val = ((Ptr) GLeval_47);
	rA1 = rA1->Val;
	if (GIevalst != rNil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLeval_47(void) {	/* ret_call_evalcar_16 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	GIa4 = (Ptr) 2;
	{aRet = rA1; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLeval_46(void) {	/* evalnsn */
   {	register Ptr aRet;
	GIa4 = (Ptr) 1;
	{aRet = ((Ptr) GLeval_48); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_48(void) {	/* evaln1 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = (rA1 + 1)->Val;
	(--rSp)->Val = GIa4;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = ((Ptr) GLeval_49);
	rA1 = rA1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_49(void) {	/* ret_call_evalcar_17 */
   {	register Ptr aRet, rSp, rA1, rA4;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
	GIa3 = (rSp++)->Val;
	rA4 = (rSp++)->Val;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
	if ((long) rA1 >= (long) GIbcons)	{aRet = ((Ptr) GLeval_48); goto lRet;}
	if (rA1 != GInil)	{aRet = ((Ptr) GLeval_41); goto lRet;}
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_43(void) {	/* evbal2 */
   {	register Ptr aRet;
	(--GIsp)->Val = GIa2;
	{aRet = ((Ptr) GLeval_50); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_41(void) {	/* evbal */
   {	register Ptr aRet;
	(--GIsp)->Val = GIa1;
	{aRet = ((Ptr) GLeval_50); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_50(void) {	/* evbal1 */
   {	register Ptr aRet;
	GIa1 = GIa3;
	{aRet = ((Ptr) GXevbale); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXevbale(void) {	/* evbale */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLeval_51);
	{aRet = ((Ptr) GXfindfn); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_51(void) {	/* ret_call_findfn_18 */
   {	register Ptr aRet;
	GIa2 = GIa1;
	GIa1 = (GIsp++)->Val;
	{aRet = ((Ptr) GXerrbal); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_19(void) {	/* evalf */
   {	register Ptr aRet;
	{aRet = GIa3; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_24(void) {	/* evalm */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GXevala1);
	GIa1 = GIforme;
	{aRet = GIa3; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_25(void) {	/* evaldm */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	rA1 = GIforme;
	(--rSp)->Val = rA1;
	(--rSp)->Val = ((Ptr) GLeval_52);
	rA1 = (rA1 + 1)->Val;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_52(void) {	/* evaldmr */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = GIa1;
	GIa1 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLeval_53);
	{aRet = ((Ptr) GXdisplace); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_53(void) {	/* ret_call_displace_19 */
   {	register Ptr aRet;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_20(void) {	/* evexp */
   {	register Ptr aRet;
	GIa4 = (Ptr) 0;
	if ((long) GIa1 >= (long) GIbcons)	{aRet = ((Ptr) GLeval_54); goto lRet;}
	{aRet = ((Ptr) GLeval_55); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_54(void) {	/* evexp1 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = (rA1 + 1)->Val;
	(--rSp)->Val = GIa4;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = ((Ptr) GLeval_56);
	rA1 = rA1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_56(void) {	/* ret_call_evalcar_20 */
   {	register Ptr aRet, rSp, rA1, rA4;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
	GIa2 = (rSp++)->Val;
	GIa3 = (rSp++)->Val;
	rA4 = (rSp++)->Val;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
	if ((long) rA1 >= (long) GIbcons)	{aRet = ((Ptr) GLeval_54); goto lRet;}
	{aRet = ((Ptr) GLeval_55); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_55(void) {	/* evexp2 */
   {	register Ptr aRet, rNil;
	rNil = GInil;
	if (GIa1 != rNil)	{aRet = ((Ptr) GXerrbal); goto lRet;}
	GIerrname = GIa2;
	GIintllink = rNil;
	{aRet = ((Ptr) GLeval_57); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_57(void) {	/* evbnd */
   {	register Ptr aRet, rA3;
	rA3 = GIa3;
	GIintret = ((Ptr) GXevexpg);
	GIsavea4 = GIa4;
	GIsavea1 = rA3;
	rA3 = rA3->Val;
	GIsavea2 = rA3;
	if ((long) rA3 < (long) GIbcons)	{aRet = ((Ptr) GLeval_58); goto lRet;}
	{aRet = ((Ptr) GLeval_59); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLeval_59(void) {	/* evbnd2 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
l_GLeval_59:
	if (rA4 == (Ptr) 0)	{aRet = ((Ptr) GLeval_60); goto lRet;}
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	rA2 = rA3->Val;
	if ((long) rA2 >= (long) rBcons)	{aRet = ((Ptr) GLeval_61); goto lRet;}
	rA1 = rA2->Val;
	rA2->Val = (rSp + (Fix) (rA4))->Val;
	(rSp + (Fix) (rA4))->Val = rA1;
	rA3 = (rA3 + 1)->Val;
	if ((long) rA3 >= (long) rBcons)	goto l_GLeval_59;
	{aRet = ((Ptr) GLeval_58); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXevbndext(void) {	/* evbndext */
   {	register Ptr aRet;
	if ((long) GIa3 >= (long) GIbcons)	{aRet = ((Ptr) GLeval_59); goto lRet;}
	{aRet = ((Ptr) GLeval_58); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_58(void) {	/* evbnd6 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
	if (rA3 == rNil)	goto l_evbnd9;
	if (rA3 == GMnobind)	goto l_evbnd91;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	GIsavea4 = (Ptr) ((UFix) ((Fix) (GIsavea4) - (Fix) (rA4)));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
	rA1 = rNil;
	goto l_evbnd8;
l_evbnd7:
	rA2 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_evbnd8:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	goto l_evbnd7;
		else rA4 = (Ptr) 0;}
	(--rSp)->Val = rA3->Val;
	rA3->Val = rA1;
l_evbnd9:
	if (rA4 != (Ptr) 0)	{aRet = ((Ptr) GLeval_62); goto lRet;}
l_evbnd91:
	rA4 = GIsavea4;
l_evbnd92:
	rA1 = GIsavea1;
	rA2 = (rSp + (Fix) (rA4))->Val;
	if (rA2 != ((Ptr) GXunbind1))	{aRet = ((Ptr) GLeval_63); goto lRet;}
	rA3 = rA4;
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 3));
	rA2 = (rSp + (Fix) (rA3))->Val;
	if (rA2 != rA1)	{aRet = ((Ptr) GLeval_63); goto lRet;}
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
	rA2 = (rSp + (Fix) (rA3))->Val;
	if (rA2 == GMnobind)	{aRet = ((Ptr) GLeval_63); goto lRet;}
	rSp += (Fix) (rA4);
	{aRet = GIintret; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_63(void) {	/* evbnd94 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa4;
	(--rSp)->Val = GIsavea2;
	(--rSp)->Val = GIa1;
l_evexpn:
	(--rSp)->Val = GIllink;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind1);
	GIdlink = rSp;
	GIllink = GIintllink;
	{aRet = GIintret; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_62(void) {	/* evbnr1 */
   {	register Ptr aRet, rSp, rA1, rA4;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
	rA1 = GInil;
	GIsavea4 = (Ptr) ((UFix) ((Fix) (GIsavea4) - (Fix) (rA4)));
	rA1 = GIsavea4;
l_evbnr2:
	GIa3 = (rSp++)->Val;
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	goto l_evbnr2;
		else rA4 = (Ptr) 0;}
	rA4 = GIsavea4;
	{aRet = ((Ptr) GLeval_64); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_64(void) {	/* evbnr31 */
   {	register Ptr aRet;
	GIsavea1 = GIa1;
	GIa3 = GIsavea2;
	GIsavea3 = ((Ptr) GLeval_65);
	{aRet = ((Ptr) GXunbise); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_60(void) {	/* evbnr32 */
   {	register Ptr aRet;
	GIa4 = GIsavea4;
	{aRet = ((Ptr) GLeval_66); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_66(void) {	/* evbnr33 */
   {	register Ptr aRet;
	GIa1 = GIsavea2;
	(--GIsp)->Val = ((Ptr) GLeval_64);
	{aRet = ((Ptr) GXlllength); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_65(void) {	/* errbner */
   {	register Ptr aRet;
	GIa1 = GIsavea1;
	(--GIsp)->Val = ((Ptr) GXerrwna);
	{aRet = ((Ptr) GLeval_67); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXevbser(void) {	/* evbser */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
	rSp = GIrvbser;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA3 = llrt_cons (rA3, rNil);
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA3 = llrt_cons (rA2, rA3);
	GIsavea1 = rA3;
	GIsavea4 = (Ptr) ((UFix) ((Fix) (GIsavea4) - (Fix) (rA4)));
	rSp += (Fix) (rA4);
	rA2 = rNil;
	if ((long) rA1 < (long) rBcons)	goto l_evbser5;
l_evbser4:
	rA3 = (rA1 + 1)->Val;
	(rA1 + 1)->Val = rA2;
	rA2 = rA1;
	rA1 = rA3;
	if ((long) rA1 >= (long) rBcons)	goto l_evbser4;
l_evbser5:
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA2;
		rA2 = aux;}
	rA4 = GIsavea4;
	rA3 = GIsavea2;
	GIsavea3 = ((Ptr) GLeval_68);
	{aRet = ((Ptr) GXunbise); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_68(void) {	/* evbser9 */
   {	register Ptr aRet;
	GIa1 = GIsavea1;
	(--GIsp)->Val = ((Ptr) GXerrilb);
	{aRet = ((Ptr) GLeval_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_61(void) {	/* evbdst */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIsavea3 = GIa3;
	GIa3 = (rSp + (Fix) (GIa4))->Val;
	GIa1 = GInil;
	GIrvbser = rSp;
	(--rSp)->Val = ((Ptr) GLeval_69);
	{aRet = ((Ptr) GLeval_70); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_69(void) {	/* ret_call_evbdst1_24 */
   {	register Ptr aRet, rA1, rA2, rA3, rBcons;
	rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBcons = GIbcons;
	rA2 = GInil;
	if ((long) rA1 < (long) rBcons)	goto l_evbdst6;
l_evbdst4:
	rA3 = (rA1 + 1)->Val;
	(rA1 + 1)->Val = rA2;
	rA2 = rA1;
	rA1 = rA3;
	if ((long) rA1 >= (long) rBcons)	goto l_evbdst4;
	rA1 = rA2;
l_evbdst6:
	rA3 = GIsavea3;
	(GIsp + (Fix) (GIa4))->Val = rA1;
	rA3 = (rA3 + 1)->Val;
	if ((long) rA3 >= (long) rBcons)	{aRet = ((Ptr) GLeval_59); goto lRet;}
	{aRet = ((Ptr) GLeval_58); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLeval_70(void) {	/* evbdst1 */
   {	register Ptr aRet, rA2, rA3, rBcons;
	rA2 = GIa2; rA3 = GIa3; rBcons = GIbcons;
	if (rA3 == GInil)	goto l_evbdst11;
	if ((long) rA3 < (long) rBcons)	{aRet = ((Ptr) GXevbser); goto lRet;}
l_evbdst11:
	(--GIsp)->Val = (rA2 + 1)->Val;
	rA2 = rA2->Val;
	if ((long) rA2 >= (long) rBcons)	{aRet = ((Ptr) GLeval_71); goto lRet;}
	GIa2 = rA2; GIa1 = llrt_cons (rA2->Val, GIa1);
	rA2->Val = rA3->Val;
	{aRet = ((Ptr) GLeval_72); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLeval_72(void) {	/* evbdst2 */
   {	register Ptr aRet, rSp, rA2, rA3;
	rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
	rA3 = (rA3 + 1)->Val;
	rA2 = (rSp++)->Val;
	if ((long) rA2 >= (long) GIbcons)	{aRet = ((Ptr) GLeval_70); goto lRet;}
	if (rA2 == GInil)	{ aRet = (rSp++)->Val; goto lRet;}
	GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa1 = llrt_cons (rA2->Val, GIa1);
	rA2->Val = rA3;
l_evbdst3:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLeval_71(void) {	/* evbdst8 */
   {	register Ptr aRet, rSp, rA3;
	rSp = GIsp; rA3 = GIa3;
	(--rSp)->Val = rA3;
	rA3 = rA3->Val;
	(--rSp)->Val = ((Ptr) GLeval_73);
	{aRet = ((Ptr) GLeval_70); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLeval_73(void) {	/* ret_call_evbdst1_25 */
   {	register Ptr aRet;
	GIa3 = (GIsp++)->Val;
	{aRet = ((Ptr) GLeval_72); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXevexpg(void) {	/* evexpg */
   {	register Ptr aRet, rA1, rA2, rNil, rBcons;
	rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
	rA1 = (rA1 + 1)->Val;
	if ((long) rA1 < (long) rBcons)	{aRet = ((Ptr) GLeval_74); goto lRet;}
	rA2 = (rA1 + 1)->Val;
	if ((long) rA2 >= (long) rBcons)	{aRet = ((Ptr) GLeval_75); goto lRet;}
	if (rA2 != rNil)	{aRet = ((Ptr) GLeval_76); goto lRet;}
	rA1 = rA1->Val;
	if (GIevalst != rNil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXevprogn(void) {	/* evprogn */
   {	register Ptr aRet, rA1, rA2, rNil, rBcons;
	rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
	if ((long) rA1 < (long) rBcons)	{aRet = ((Ptr) GLeval_74); goto lRet;}
	rA2 = (rA1 + 1)->Val;
	if ((long) rA2 >= (long) rBcons)	{aRet = ((Ptr) GLeval_75); goto lRet;}
	if (rA2 != rNil)	{aRet = ((Ptr) GLeval_76); goto lRet;}
	rA1 = rA1->Val;
	if (GIevalst != rNil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLeval_75(void) {	/* evprogn2 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = rA1;
	(--rSp)->Val = ((Ptr) GXevprognr);
	rA1 = rA1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXevprognr(void) {	/* evprognr */
   {	register Ptr aRet, rA1, rA2, rNil;
	rA1 = GIa1; rA2 = GIa2; rNil = GInil;
	rA1 = (GIsp++)->Val;
	rA1 = (rA1 + 1)->Val;
	rA2 = (rA1 + 1)->Val;
	if ((long) rA2 >= (long) GIbcons)	{aRet = ((Ptr) GLeval_75); goto lRet;}
	if (rA2 != rNil)	{aRet = ((Ptr) GLeval_76); goto lRet;}
	rA1 = rA1->Val;
	if (GIevalst != rNil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLeval_76(void) {	/* evprogn5 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLeval_77); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_77(void) {	/* evprogn6 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GXerrbal);
	{aRet = ((Ptr) GLeval_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_74(void) {	/* evprogn7 */
   {	register Ptr aRet;
	if (GIa1 == GInil)	{ aRet = (GIsp++)->Val; goto lRet;}
	{aRet = ((Ptr) GLeval_77); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_22(void) {	/* evmac */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GXevala1);
	GIa1 = GIforme;
	{aRet = ((Ptr) GLeval_21); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_23(void) {	/* evdmac */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	rA1 = GIforme;
	(--rSp)->Val = rA1;
	(--rSp)->Val = ((Ptr) GLeval_52);
	rA1 = (rA1 + 1)->Val;
	{aRet = ((Ptr) GLeval_21); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_21(void) {	/* evfexp */
   {	register Ptr aRet;
	GIerrname = GIa2;
	{aRet = ((Ptr) GLeval_78); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_78(void) {	/* bndtrb */
   {	register Ptr aRet, rA3;
	rA3 = GIa3;
	GIintret = ((Ptr) GXevexpg);
	GIsavea1 = rA3;
	rA3 = rA3->Val;
	GIsavea2 = rA3;
	{aRet = ((Ptr) GXbndtrbex); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

extern Ptr GXbndtrbex(void) {	/* bndtrbex */
   {	register Ptr aRet;
	GIa4 = (Ptr) 0;
	{aRet = ((Ptr) GLeval_79); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_80(void) {	/* bndtrb1 */
   {	register Ptr aRet, rA1, rA2, rA3, rBcons;
	rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBcons = GIbcons;
	if ((long) rA1 < (long) rBcons)	{aRet = ((Ptr) GLeval_66); goto lRet;}
	GIa4 = (Ptr) ((UFix) ((Fix) (GIa4) + (Fix) (1)));
	rA2 = rA3->Val;
	if ((long) rA2 >= (long) rBcons)	{aRet = ((Ptr) GLeval_81); goto lRet;}
	(--GIsp)->Val = rA2->Val;
	rA2->Val = rA1->Val;
	rA1 = (rA1 + 1)->Val;
	rA3 = (rA3 + 1)->Val;
	{aRet = ((Ptr) GLeval_79); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLeval_79(void) {	/* bndtrb2 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
	if ((long) rA3 >= (long) rBcons)	{aRet = ((Ptr) GLeval_80); goto lRet;}
	if (rA3 == rNil)	goto l_bndtrb3;
	if (rA3 == GMnobind)	goto l_bndtrb5;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
	(--rSp)->Val = rA3->Val;
	rA3->Val = rA1;
	goto l_bndtrb6;
l_bndtrb3:
	if (rA1 == rNil)	goto l_bndtrb6;
	{aRet = ((Ptr) GLeval_66); goto lRet;}
l_bndtrb4:
	(--rSp)->Val = rA1->Val;
	rA1 = (rA1 + 1)->Val;
	if (rSp < GImstack)	{aRet = ((Ptr) GXerrfs); goto lRet;}
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
l_bndtrb5:
	if ((long) rA1 >= (long) rBcons)	goto l_bndtrb4;
	if (rA1 == rNil)	goto l_bndtrb6;
	(--rSp)->Val = ((Ptr) GXerrbal);
	{aRet = ((Ptr) GLeval_67); goto lRet;}
l_bndtrb6:
	rA1 = GIsavea1;
	rA2 = (rSp + (Fix) (rA4))->Val;
	if (rA2 != ((Ptr) GXunbind1))	{aRet = ((Ptr) GLeval_63); goto lRet;}
	rA3 = rA4;
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 3));
	rA2 = (rSp + (Fix) (rA3))->Val;
	if (rA2 != rA1)	{aRet = ((Ptr) GLeval_63); goto lRet;}
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) 1));
	rA2 = (rSp + (Fix) (rA3))->Val;
	if (rA2 == GMnobind)	{aRet = ((Ptr) GLeval_63); goto lRet;}
	rSp += (Fix) (rA4);
	{aRet = GIintret; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_81(void) {	/* bndtrb7 */
   {	register Ptr aRet, rSp, rA1, rNil;
	rSp = GIsp; rA1 = GIa1; rNil = GInil;
	(--rSp)->Val = rNil;
	GIrvbser = rSp;
	(--rSp)->Val = (rA1 + 1)->Val;
	(--rSp)->Val = (GIa3 + 1)->Val;
	GIa3 = rA1->Val;
	rA1 = rNil;
	GIsavea4 = GIa4;
	GIa4 = (Ptr) 0;
	(--rSp)->Val = ((Ptr) GLeval_82);
	{aRet = ((Ptr) GLeval_70); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_82(void) {	/* ret_call_evbdst1_28 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rNil, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rNil = GInil; rBcons = GIbcons;
	GIa4 = GIsavea4;
	rA2 = rNil;
	if ((long) rA1 < (long) rBcons)	goto l_bndtrb9;
l_bndtrb8:
	rA3 = (rA1 + 1)->Val;
	(rA1 + 1)->Val = rA2;
	rA2 = rA1;
	rA1 = rA3;
	if ((long) rA1 >= (long) rBcons)	goto l_bndtrb8;
l_bndtrbz:
	rA3 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	rSp += (Fix) 1;
	(--rSp)->Val = rA2;
	{aRet = ((Ptr) GLeval_79); goto lRet;}
l_bndtrb9:
	rA2 = rNil;
	goto l_bndtrbz;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLeval_11(void) {	/* evalfv */
   {	register Ptr aRet, rA2, rA3;
	rA2 = GIa2; rA3 = GIa3;
	if ((long) rA2 < (long) GIbcons)	{aRet = ((Ptr) GLeval_13); goto lRet;}
	rA3 = rA2->Val;
	if (rA3 == GMlambda)	goto l_evalll;
	if (rA3 == GMflambda)	{aRet = ((Ptr) GLeval_83); goto lRet;}
	if (rA3 == GMmlambda)	{aRet = ((Ptr) GLeval_84); goto lRet;}
	if (rA3 == GMclosure)	{aRet = ((Ptr) GLeval_85); goto lRet;}
	{aRet = ((Ptr) GLeval_13); goto lRet;}
l_evalll:
	rA3 = (rA2 + 1)->Val;
	GIerrname = GMlambda;
	(--GIsp)->Val = ((Ptr) GLeval_86);
	{aRet = ((Ptr) GLeval_87); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLeval_86(void) {	/* ret_call_verlpar_29 */
   {	register Ptr aRet;
	GIa2 = GMlambda;
	GIa4 = (Ptr) 0;
	{aRet = ((Ptr) GLeval_88); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_89(void) {	/* evalll1 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = (rA1 + 1)->Val;
	(--rSp)->Val = GIa4;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = ((Ptr) GLeval_90);
	rA1 = rA1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_90(void) {	/* ret_call_evalcar_30 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	GIa2 = (rSp++)->Val;
	GIa3 = (rSp++)->Val;
	rA4 = (rSp++)->Val;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = GIa1;
		GIa1 = aux;}
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
	{aRet = ((Ptr) GLeval_88); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_88(void) {	/* evalll2 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if ((long) rA1 >= (long) GIbcons)	{aRet = ((Ptr) GLeval_89); goto lRet;}
	if (rA1 != GInil)	{aRet = ((Ptr) GXerrbal); goto lRet;}
	GIerrname = GIa2;
	GIintllink = GIllink;
	{aRet = ((Ptr) GLeval_57); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_83(void) {	/* evallf */
   {	register Ptr aRet;
	GIa3 = (GIa2 + 1)->Val;
	GIerrname = GMflambda;
	GIintllink = GIllink;
	(--GIsp)->Val = ((Ptr) GLeval_78);
	{aRet = ((Ptr) GLeval_87); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_84(void) {	/* evallm */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = GIforme;
	GIa3 = (GIa2 + 1)->Val;
	(--rSp)->Val = ((Ptr) GXevala1);
	GIerrname = GMmlambda;
	GIintllink = GIllink;
	(--rSp)->Val = ((Ptr) GLeval_78);
	{aRet = ((Ptr) GLeval_87); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_85(void) {	/* evallc */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	rA2 = (rA2 + 1)->Val;
	GIa3 = (rA2 + 1)->Val;
	GIerrname = GMclosure;
	GIintllink = rA2->Val;
	{aRet = ((Ptr) GLeval_20); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLeval_13(void) {	/* udfer */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	rA4 = GIforme;
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA4 - (TableElem) GIbcons);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		aux = GIbtbin[aux] & mask;
		if (aux == 0)	{aRet = ((Ptr) GLeval_91); goto lRet;}}
	GIa1 = rA4;
	(--GIsp)->Val = ((Ptr) GLeval_92);
	{aRet = ((Ptr) GXgettype); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLeval_92(void) {	/* ret_call_gettype_33 */
   {	register Ptr aRet, rSp, rA1, rNil;
	rSp = GIsp; rA1 = GIa1; rNil = GInil;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	{aRet = ((Ptr) GLeval_91); goto lRet;}
	if (rA1 == rNil)	{aRet = ((Ptr) GLeval_91); goto lRet;}
	(--rSp)->Val = GIa2;
	GIa2 = GMeval;
	GIa3 = rNil;
	(--rSp)->Val = ((Ptr) GLeval_93);
	{aRet = ((Ptr) GXgetfns); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_93(void) {	/* ret_call_getfns_34 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp++)->Val;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLeval_91); goto lRet;}
	(--rSp)->Val = GIforme;
	GIa4 = (Ptr) 1;
	{aRet = ((Ptr) GXffuncall); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_91(void) {	/* udfer8 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	GIa1 = GIa2;
	GIa2 = GMeval;
	(--rSp)->Val = ((Ptr) GLeval_94);
	{aRet = ((Ptr) GXerrudf); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_94(void) {	/* ret_call_errudf_35 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa2 = rA1;
	rA1 = (GIsp++)->Val;
	GIa1 = rA1; rA1 = llrt_cons (GIa2, rA1);
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLeval_95(void) {	/* xwnaer0 */
   {	register Ptr aRet;
	GIa2 = GIa1;
	{aRet = ((Ptr) GLeval_96); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_28(void) {	/* wnaer0 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (rA1 == GInil)	{aRet = ((Ptr) GLeval_96); goto lRet;}
	if ((long) rA1 < (long) GIbcons)	{aRet = ((Ptr) GXerrbal); goto lRet;}
	{aRet = ((Ptr) GLeval_96); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_96(void) {	/* wnaer00 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 0;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_97(void) {	/* xwnaer1 */
   {	register Ptr aRet;
	GIa2 = GIa1;
	{aRet = ((Ptr) GLeval_98); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_30(void) {	/* wnaer1d */
   {	register Ptr aRet;
	GIa1 = (GIa1 + 1)->Val;
	{aRet = ((Ptr) GLeval_29); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_29(void) {	/* wnaer1 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (rA1 == GInil)	{aRet = ((Ptr) GLeval_98); goto lRet;}
	if ((long) rA1 < (long) GIbcons)	{aRet = ((Ptr) GXerrbal); goto lRet;}
	{aRet = ((Ptr) GLeval_98); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_98(void) {	/* wnaer10 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 1;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_99(void) {	/* xwnaer2 */
   {	register Ptr aRet;
	GIa2 = GIa1;
	{aRet = ((Ptr) GLeval_100); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_33(void) {	/* wnaer23d */
   {	register Ptr aRet;
	GIa3 = (GIa3 + 1)->Val;
	{aRet = ((Ptr) GLeval_32); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_32(void) {	/* wnaer23 */
   {	register Ptr aRet;
	GIa1 = GIa3;
	{aRet = ((Ptr) GLeval_31); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_31(void) {	/* wnaer2 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (rA1 == GInil)	{aRet = ((Ptr) GLeval_100); goto lRet;}
	if ((long) rA1 < (long) GIbcons)	{aRet = ((Ptr) GXerrbal); goto lRet;}
	{aRet = ((Ptr) GLeval_100); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_100(void) {	/* wnaer20 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 2;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_101(void) {	/* xwnaer3 */
   {	register Ptr aRet;
	GIa2 = GIa1;
	{aRet = ((Ptr) GLeval_102); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_39(void) {	/* wnaer3d */
   {	register Ptr aRet;
	GIa1 = (GIa1 + 1)->Val;
	{aRet = ((Ptr) GLeval_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_36(void) {	/* wnaer3 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (rA1 == GInil)	{aRet = ((Ptr) GLeval_102); goto lRet;}
	if ((long) rA1 < (long) GIbcons)	{aRet = ((Ptr) GXerrbal); goto lRet;}
	{aRet = ((Ptr) GLeval_102); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_102(void) {	/* wnaer30 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 3;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfuncall(void) {	/* funcall */
   {	register Ptr aRet;
	GIerrname = GMfuncall;
	if (GIa4 == (Ptr) 0)	{aRet = ((Ptr) GLeval_103); goto lRet;}
	{aRet = ((Ptr) GLeval_104); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_104(void) {	/* funcall0 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	GIa1 = (GIsp + (Fix) (rA4))->Val;
	(GIsp + (Fix) (rA4))->Val = ((Ptr) GXpopj0);
	{aRet = ((Ptr) GXffuncall); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

extern Ptr GXffuncall(void) {	/* ffuncall */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIintllink = GInil;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	{aRet = ((Ptr) GLeval_105); goto lRet;}
	{register UFix aux;
		aux = (UFix) ((rA1 + 6)->Val);
		GIa3 = (Ptr) aux;}
	{aRet = (Ptr) (brx_eval_106[(int) (GIa3)]); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_103(void) {	/* funcerwn */
   {	register Ptr aRet;
	GIa1 = GIa4;
	(--GIsp)->Val = ((Ptr) GXerrwna);
	{aRet = ((Ptr) GLeval_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_107(void) {	/* fncludf */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa4;
	(--rSp)->Val = ((Ptr) GLeval_119);
	{aRet = ((Ptr) GLeval_67); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_119(void) {	/* ret_call_ferrnam_37 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLeval_120);
	{aRet = ((Ptr) GXerrudf); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_120(void) {	/* ret_call_errudf_38 */
   {	register Ptr aRet;
	GIa4 = (GIsp++)->Val;
	{aRet = ((Ptr) GXffuncall); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_108(void) {	/* fncal0 */
   {	register Ptr aRet;
	if (GIa4 != (Ptr) 0)	{aRet = ((Ptr) GLeval_95); goto lRet;}
	{aRet = (GIa1 + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_109(void) {	/* fncal1 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (rA4 != (Ptr) 1)	{aRet = ((Ptr) GLeval_97); goto lRet;}
	rA4 = (GIa1 + 2)->Val;
	GIa1 = (GIsp++)->Val;
	{aRet = rA4; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLeval_110(void) {	/* fncal2 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	if (rA4 != (Ptr) 2)	{aRet = ((Ptr) GLeval_99); goto lRet;}
	GIa2 = (rSp++)->Val;
	rA4 = (GIa1 + 2)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = rA4; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_111(void) {	/* fncal3 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	if (rA4 != (Ptr) 3)	{aRet = ((Ptr) GLeval_101); goto lRet;}
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	rA4 = (GIa1 + 2)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = rA4; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_112(void) {	/* fncaln */
   {	register Ptr aRet;
	{aRet = (GIa1 + 2)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_113(void) {	/* fncalf */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA2 = (rA1 + 2)->Val;
	rA1 = GInil;
	goto l_fncalf2;
l_fncalf1:
	rA3 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA3, rA1);
l_fncalf2:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_fncalf1;}
	{aRet = rA2; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_117(void) {	/* fncalm */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA2 = (rA1 + 2)->Val;
	rA1 = GInil;
	goto l_fncalm2;
l_fncalm1:
	rA3 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA3, rA1);
l_fncalm2:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_fncalm1;}
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA3, rA1);
	(--rSp)->Val = ((Ptr) GXevala1);
	{aRet = rA2; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_118(void) {	/* fncaldm */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA2 = (rA1 + 2)->Val;
	rA1 = GInil;
	goto l_fncaldm2;
l_fncaldm1:
	rA3 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA3, rA1);
l_fncaldm2:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_fncaldm1;}
	(--rSp)->Val = rA1;
	(--rSp)->Val = ((Ptr) GLeval_52);
	{aRet = rA2; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_114(void) {	/* fncalex */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa3 = (rA1 + 2)->Val;
	GIerrname = rA1;
	{aRet = ((Ptr) GLeval_57); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_115(void) {	/* fncalmc */
   {	register Ptr aRet, rSp, rA1, rA2, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
	GIa3 = (rA1 + 2)->Val;
	GIerrname = rA1;
	rA1 = GInil;
	goto l_fncalmc2;
l_fncalmc1:
	rA2 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_fncalmc2:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_fncalmc1;}
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (GIerrname, rA1);
	(--rSp)->Val = ((Ptr) GXevala1);
	{aRet = ((Ptr) GLeval_78); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_116(void) {	/* fncalmd */
   {	register Ptr aRet, rSp, rA1, rA2, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
	GIa3 = (rA1 + 2)->Val;
	GIerrname = rA1;
	rA1 = GInil;
	goto l_fncalmd2;
l_fncalmd1:
	rA2 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_fncalmd2:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_fncalmd1;}
	(--rSp)->Val = rA1;
	(--rSp)->Val = ((Ptr) GLeval_52);
	{aRet = ((Ptr) GLeval_78); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_105(void) {	/* applys */
   {	register Ptr aRet, rA1, rA3;
	rA1 = GIa1; rA3 = GIa3;
	if ((long) rA1 < (long) GIbcons)	{aRet = ((Ptr) GLeval_107); goto lRet;}
	rA3 = rA1->Val;
	if (rA3 == GMlambda)	goto l_applyll;
	if (rA3 == GMflambda)	goto l_applylf;
	if (rA3 == GMclosure)	goto l_applylc;
	{aRet = ((Ptr) GLeval_107); goto lRet;}
l_applyll:
	GIerrname = GMlambda;
	goto l_applylf1;
l_applylf:
	GIerrname = GMflambda;
l_applylf1:
	rA3 = (rA1 + 1)->Val;
	(--GIsp)->Val = ((Ptr) GLeval_57);
	{aRet = ((Ptr) GLeval_87); goto lRet;}
l_applylc:
	GIerrname = GMclosure;
	rA1 = (rA1 + 1)->Val;
	GIintllink = rA1->Val;
	rA3 = (rA1 + 1)->Val;
	{aRet = ((Ptr) GLeval_57); goto lRet;}
  lRet: GIa1 = rA1; GIa3 = rA3; return (aRet);}}

extern Ptr GXuapply(void) {	/* apply */
   {	register Ptr aRet, rSp, rA1, rA2, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
	GIerrname = GMuapply;
	if ((Fix) (rA4) < (Fix) 2)	goto l_uapplyer;
	rA2 = (rSp++)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	goto l_uapply3;
l_uapply2:
	(--rSp)->Val = rA2->Val;
	if (rSp < GImstack)	{aRet = ((Ptr) GXerrfs); goto lRet;}
	rA2 = (rA2 + 1)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
l_uapply3:
	if ((long) rA2 >= (long) GIbcons)	goto l_uapply2;
	if (rA2 == GInil)	{aRet = ((Ptr) GLeval_104); goto lRet;}
	rA1 = rA2;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	rA2 = (rSp + (Fix) (rA4))->Val;
	{aRet = ((Ptr) GXerrbal); goto lRet;}
l_uapplyer:
	rA1 = (Ptr) 2;
	rA2 = GMuapply;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXapply(void) {	/* apply */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIa2;
	GIa4 = (Ptr) 2;
	{aRet = ((Ptr) GXuapply); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXunbinp(void) {	/* unbinp */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	rA4 = (GIsp++)->Val;
	if (rA4 == ((Ptr) GXunbind1))	{aRet = ((Ptr) GXunbinp1); goto lRet;}
	if (rA4 == ((Ptr) GXunbind2))	{aRet = ((Ptr) GLeval_121); goto lRet;}
	if (rA4 == ((Ptr) GXunbind3))	{aRet = ((Ptr) GLeval_122); goto lRet;}
	if (rA4 == ((Ptr) GXunbind4))	{aRet = ((Ptr) GLeval_123); goto lRet;}
	if (rA4 == ((Ptr) GXunbind5))	{aRet = ((Ptr) GLeval_124); goto lRet;}
	if (rA4 == ((Ptr) GXunbind6))	{aRet = ((Ptr) GLeval_125); goto lRet;}
	if (rA4 == ((Ptr) GXunbind7))	{aRet = ((Ptr) GLeval_126); goto lRet;}
	if (rA4 == ((Ptr) GXunbind8))	{aRet = ((Ptr) GLeval_127); goto lRet;}
	if (rA4 == ((Ptr) GXunbind9))	{aRet = ((Ptr) GLeval_128); goto lRet;}
	if (rA4 == ((Ptr) GXunbind10))	{aRet = ((Ptr) GLeval_129); goto lRet;}
	llrt_ttyout((Fix) 14, " error UNBINP ");
	{aRet = ((Ptr) GXunbind0); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

extern Ptr GXunbind0(void) {	/* unbind0 */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXerres); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXunbind1(void) {	/* unbind1 */
   {	register Ptr aRet;
	GIa3 = ((Ptr) GXpopj0);
	{aRet = ((Ptr) GXunbinp1); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXunbinp1(void) {	/* unbinp1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIsavea3 = GIa3;
	GIdlink = (rSp++)->Val;
	GIllink = (rSp++)->Val;
	rSp += (Fix) 1;
	GIa3 = (rSp++)->Val;
	GIa4 = (rSp++)->Val;
	{aRet = ((Ptr) GXunbise); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXunbise(void) {	/* unbise */
   {	register Ptr aRet, rSp, rA3, rA4, rBcons;
	rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
	if (rA4 != (Ptr) 1)	goto l_unbis19;
	if ((long) rA3 < (long) rBcons)	goto l_unbis14;
	if ((long) rA3->Val >= (long) rBcons)	goto l_unbis19;
	rA3 = rA3->Val;
	rA3->Val = (rSp++)->Val;
	{aRet = GIsavea3; goto lRet;}
l_unbis14:
	if (rA3 == GMnobind)	goto l_unbis15;
	rA3->Val = (rSp++)->Val;
	{aRet = GIsavea3; goto lRet;}
l_unbis15:
	rSp += (Fix) 1;
	{aRet = GIsavea3; goto lRet;}
l_unbis19:
	GIsavea4 = rA4;
	GIsavea2 = GIa2;
	{aRet = ((Ptr) GLeval_130); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLeval_131(void) {	/* unbid12 */
   {	register Ptr aRet, rA2, rA3, rA4;
	rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	if (rA4 == (Ptr) 0)	{aRet = ((Ptr) GLeval_132); goto lRet;}
	rA2 = rA3->Val;
	rA3 = (rA3 + 1)->Val;
	if ((long) rA2 >= (long) GIbcons)	{aRet = ((Ptr) GLeval_133); goto lRet;}
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	rA2->Val = (GIsp + (Fix) (rA4))->Val;
	{aRet = ((Ptr) GLeval_130); goto lRet;}
  lRet: GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_130(void) {	/* unbid15 */
   {	register Ptr aRet, rA3, rA4;
	rA3 = GIa3; rA4 = GIa4;
	if ((long) rA3 >= (long) GIbcons)	{aRet = ((Ptr) GLeval_131); goto lRet;}
	if (rA3 == GInil)	{aRet = ((Ptr) GLeval_132); goto lRet;}
	if (rA3 == GMnobind)	{aRet = ((Ptr) GLeval_132); goto lRet;}
	if (rA4 == (Ptr) 0)	{aRet = ((Ptr) GLeval_132); goto lRet;}
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	rA3->Val = (GIsp + (Fix) (rA4))->Val;
	{aRet = ((Ptr) GLeval_132); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLeval_132(void) {	/* unbid18 */
   {	register Ptr aRet;
	GIa2 = GIsavea2;
	GIsp += (Fix) (GIsavea4);
	{aRet = GIsavea3; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_133(void) {	/* unbid19 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa3;
	GIa3 = (rSp + (Fix) (GIa4))->Val;
	(--rSp)->Val = ((Ptr) GLeval_134);
	{aRet = ((Ptr) GLeval_135); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_134(void) {	/* ret_call_unbides1_40 */
   {	register Ptr aRet;
	GIa3 = (GIsp++)->Val;
	GIa4 = (Ptr) ((UFix) ((Fix) (GIa4) - (Fix) (1)));
	{aRet = ((Ptr) GLeval_130); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_136(void) {	/* unbides0 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLeval_137);
	{aRet = ((Ptr) GLeval_135); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_135(void) {	/* unbides1 */
   {	register Ptr aRet, rSp, rA2, rA3;
	rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
	if (rA3 == GInil)	{ aRet = (rSp++)->Val; goto lRet;}
	(--rSp)->Val = (rA2 + 1)->Val;
	rA2 = rA2->Val;
	if ((long) rA2 >= (long) GIbcons)	{aRet = ((Ptr) GLeval_136); goto lRet;}
	rA2->Val = rA3->Val;
	rA3 = (rA3 + 1)->Val;
	{aRet = ((Ptr) GLeval_137); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLeval_137(void) {	/* unbides2 */
   {	register Ptr aRet, rSp, rA2, rA3;
	rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
	rA2 = (rSp++)->Val;
	if ((long) rA2 >= (long) GIbcons)	{aRet = ((Ptr) GLeval_135); goto lRet;}
	if (rA2 == GInil)	{ aRet = (rSp++)->Val; goto lRet;}
	rA2->Val = rA3->Val;
	rA3 = (rA3 + 1)->Val;
l_unbides3:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXunbind2(void) {	/* unbind2 */
   {	register Ptr aRet;
	GIa3 = ((Ptr) GXpopj0);
	{aRet = ((Ptr) GLeval_121); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_121(void) {	/* unbinp2 */
   {	register Ptr aRet, rSp, rA3, rA4;
	rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
	GIdlink = (rSp++)->Val;
	GIsavea3 = rA3;
	goto l_unbdw7;
l_unbdw6:
	rA3 = (rSp++)->Val;
	{register int aux1, aux2;
		aux1 = (int) ((rA4 + 6)->Val);
		aux1 = aux1 & HIGHTMASK;
		aux2 = (int) (rA3);
		aux1 = aux1 | aux2;
		(rA4 + 6)->Val = (Ptr) aux1;}
	(rA4 + 2)->Val = (rSp++)->Val;
l_unbdw7:
	rA4 = (rSp++)->Val;
	if (rA4 != (Ptr) 0)	goto l_unbdw6;
	{aRet = GIsavea3; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXunbind3(void) {	/* unbind3 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIdlink = (rSp++)->Val;
	GIa4 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_122(void) {	/* unbinp3 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIdlink = (rSp++)->Val;
	GIa4 = (rSp++)->Val;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXunbind4(void) {	/* unbind4 */
   {	register Ptr aRet;
	GIa3 = ((Ptr) GXpopj0);
	{aRet = ((Ptr) GLeval_123); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_123(void) {	/* unbinp4 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIdlink = (rSp++)->Val;
	GIllink = (rSp++)->Val;
	rSp += (Fix) 1;
	GIevalst = (rSp++)->Val;
	GIforme = (rSp++)->Val;
	GIfunct = (rSp++)->Val;
	GIsavea1 = (rSp++)->Val;
	GIsavea2 = (rSp++)->Val;
	GIsavea3 = (rSp++)->Val;
	GIsavea4 = (rSp++)->Val;
	rSp += (Fix) 1;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXunbind5(void) {	/* unbind5 */
   {	register Ptr aRet;
	GIa3 = ((Ptr) GXpopj0);
	{aRet = ((Ptr) GLeval_124); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_124(void) {	/* unbinp5 */
   {	register Ptr aRet, rSp, rA1, rA2, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
	GIdlink = (rSp++)->Val;
	GIa4 = (rSp++)->Val;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = rA2;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rNil);
	rA2 = rNil;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA2, rA1);
	rA2 = rA1;
	rA1 = GIa4;
	(--rSp)->Val = ((Ptr) GLeval_138);
	{aRet = ((Ptr) GXapply); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLeval_138(void) {	/* ret_call_apply_41 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXunbind6(void) {	/* unbind6 */
   {	register Ptr aRet;
	GIa3 = ((Ptr) GXpopj0);
	{aRet = ((Ptr) GLeval_125); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_125(void) {	/* unbinp6 */
   {	register Ptr aRet, rSp, rA3;
	rSp = GIsp; rA3 = GIa3;
	GIdlink = (rSp++)->Val;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA3;
		rA3 = aux;}
	(--rSp)->Val = GIa2;
	(--rSp)->Val = GIa1;
	GIa1 = rA3;
	(--rSp)->Val = ((Ptr) GLeval_139);
	{aRet = ((Ptr) GXevprogn); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLeval_139(void) {	/* ret_call_evprogn_42 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXunbind7(void) {	/* unbind7 */
   {	register Ptr aRet;
	GIa3 = ((Ptr) GXpopj0);
	{aRet = ((Ptr) GLeval_126); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_126(void) {	/* unbinp7 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIdlink = (rSp++)->Val;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	{aRet = rA1; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXunbind8(void) {	/* unbind8 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIdlink = rSp->Val;
	rSp += (Fix) 2;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_127(void) {	/* unbinp8 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIdlink = rSp->Val;
	rSp += (Fix) 2;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXunbind9(void) {	/* unbind9 */
   {	register Ptr aRet;
	GIa3 = ((Ptr) GXpopj0);
	{aRet = ((Ptr) GLeval_128); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_128(void) {	/* unbinp9 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	GIdlink = rSp->Val;
	rA4 = GIllink;
	GIllink = (rA4 + 1)->Val;
	rA4 = rA4->Val;
	(rA4 + 1)->Val = GInil;
	rSp += (Fix) 2;
	rA4 = (rSp++)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA4)));
	rSp += (Fix) (rA4);
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

extern Ptr GXunbind10(void) {	/* unbind10 */
   {	register Ptr aRet;
	GIa3 = ((Ptr) GXpopj0);
	{aRet = ((Ptr) GLeval_129); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_129(void) {	/* unbinp10 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	GIdlink = rSp->Val;
	rA4 = GIllink;
	GIllink = (rA4 + 1)->Val;
	rA4 = rA4->Val;
	rA4 = (rA4 + 1)->Val;
	(rA4 + 1)->Val = GInil;
	rSp += (Fix) 2;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

extern Ptr GXlet(void) {	/* let */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
	(--rSp)->Val = (rA1 + 1)->Val;
	rA1 = rA1->Val;
	rA2 = rNil;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_cons (rA2, rNil);
	(--rSp)->Val = rA2;
	rA3 = rNil;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA3 = llrt_cons (rA3, rNil);
	(--rSp)->Val = rA3;
l_let2:
	if ((long) rA1 < (long) rBcons)	goto l_let8;
	rA4 = rA1->Val;
	(--rSp)->Val = (rA1 + 1)->Val;
	if ((long) rA4 >= (long) rBcons)	goto l_let3;
	rA1 = rA4;
	rA4 = rNil;
	goto l_let4;
l_let3:
	rA1 = rA4->Val;
	rA4 = (rA4 + 1)->Val;
l_let4:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rNil);
	(rA2 + 1)->Val = rA1;
	rA2 = rA1;
	if (rA4 == rNil)	goto l_let5;
	if ((long) rA4 < (long) rBcons)	goto l_letwla1;
	if ((rA4 + 1)->Val != rNil)	goto l_letwla1;
l_let5:
	rA1 = rA4->Val;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rNil);
	(rA3 + 1)->Val = rA1;
	rA3 = rA1;
	rA1 = (rSp++)->Val;
	goto l_let2;
l_let8:
	rA1 = (rSp++)->Val;
	rA1 = (rA1 + 1)->Val;
	rA2 = (rSp++)->Val;
	rA2 = (rA2 + 1)->Val;
	rA4 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_cons (rA2, rA4);
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_cons (GMlambda, rA2);
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
	{aRet = (rSp++)->Val; goto lRet;}
l_letwla1:
	rA1 = rA4;
l_letwla2:
	rA2 = GMlet;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXletseq(void) {	/* lets */
   {	register Ptr aRet;
	GIa1 = GMletseq;
	GIa2 = GMeval;
	{aRet = ((Ptr) GXerrudf); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXletv(void) {	/* letv */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = (rA1 + 1)->Val;
	(--rSp)->Val = ((Ptr) GLeval_140);
	rA1 = rA1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_140(void) {	/* ret_call_evalcar_43 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	(--rSp)->Val = (rA1 + 1)->Val;
	(--rSp)->Val = ((Ptr) GLeval_141);
	rA1 = rA1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_141(void) {	/* ret_call_evalcar_44 */
   {	register Ptr aRet;
	GIerrname = GMletv;
	{aRet = ((Ptr) GLeval_142); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_142(void) {	/* letvq2 */
   {	register Ptr aRet, rSp, rA3;
	rSp = GIsp; rA3 = GIa3;
	rA3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	GIsp = rSp; GIa3 = rA3; rA3 = llrt_cons (GIa2, rA3);
	GIintllink = GIllink;
	(--rSp)->Val = ((Ptr) GLeval_78);
	{aRet = ((Ptr) GLeval_87); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

extern Ptr GXletvq(void) {	/* letvq */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = rA1->Val;
	rA1 = (rA1 + 1)->Val;
	(--rSp)->Val = (rA1 + 1)->Val;
	(--rSp)->Val = ((Ptr) GLeval_143);
	rA1 = rA1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_143(void) {	/* ret_call_evalcar_46 */
   {	register Ptr aRet;
	GIerrname = GMletvq;
	{aRet = ((Ptr) GLeval_142); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXflet(void) {	/* flet */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
	if ((long) rA1 < (long) rBcons)	goto l_fleterr1;
	rA2 = rA1->Val;
	GIsavea1 = (rA1 + 1)->Val;
	(--rSp)->Val = (Ptr) 0;
	goto l_flet3;
l_flet2:
	rA1 = rA2->Val;
	if ((long) rA1 < (long) rBcons)	goto l_fleterr1;
	rA3 = rA1->Val;
	if ((rA3 < GIbvar) || (rA3 >= rBcons))	goto l_fleterr2;
	(--rSp)->Val = (rA3 + 2)->Val;
	(rA3 + 2)->Val = (rA1 + 1)->Val;
	{register UFix aux;
		aux = (UFix) ((rA3 + 6)->Val);
		rA4 = (Ptr) aux;}
	(--rSp)->Val = rA4;
	{register int aux1, aux2;
		aux1 = (int) ((rA3 + 6)->Val);
		aux1 = aux1 & HIGHTMASK;
		aux2 = (int) 7;
		aux1 = aux1 | aux2;
		(rA3 + 6)->Val = (Ptr) aux1;}
	(--rSp)->Val = rA3;
	rA2 = (rA2 + 1)->Val;
l_flet3:
	if ((long) rA2 >= (long) rBcons)	goto l_flet2;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind2);
	GIdlink = rSp;
	rA1 = GIsavea1;
	GIerrname = GMflet;
	{aRet = ((Ptr) GXevprogn); goto lRet;}
l_fleterr1:
	rA2 = GMflet;
	{aRet = ((Ptr) GXerrnla); goto lRet;}
l_fleterr2:
	rA1 = rA3;
	rA2 = GMflet;
	{aRet = ((Ptr) GXerrnva); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXtag(void) {	/* tag */
   {	register Ptr aRet;
	(--GIsp)->Val = GIa1->Val;
	{aRet = ((Ptr) GLeval_144); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_144(void) {	/* tag3 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind3);
	GIdlink = rSp;
	GIerrname = GMtag;
	{aRet = ((Ptr) GXevexpg); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXevtag(void) {	/* evtag */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = rA1;
	(--rSp)->Val = ((Ptr) GLeval_145);
	rA1 = rA1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_145(void) {	/* ret_call_evalcar_47 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	goto l_evtagerr;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	{aRet = ((Ptr) GLeval_144); goto lRet;}
l_evtagerr:
	GIa2 = (rSp++)->Val;
	GIa2 = GMevtag;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXevexit(void) {	/* evexit */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = (rA1 + 1)->Val;
	(--rSp)->Val = ((Ptr) GLeval_146);
	rA1 = rA1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_146(void) {	/* ret_call_evalcar_48 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = GIa1;
		GIa1 = aux;}
	GIerrname = GMevexit;
	{aRet = ((Ptr) GLeval_147); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXuntlxit(void) {	/* untilexit */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = rA1->Val;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind3);
	GIdlink = rSp;
	(--rSp)->Val = (rA1 + 1)->Val;
	{aRet = ((Ptr) GLeval_148); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_148(void) {	/* untlxit1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = rSp->Val;
	GIerrname = GMuntlxit;
	(--rSp)->Val = ((Ptr) GLeval_148);
	{aRet = ((Ptr) GXevprogn); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXffexit(void) {	/* exit */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	(--GIsp)->Val = rA1->Val;
	rA1 = (rA1 + 1)->Val;
	GIerrname = GMffexit;
	{aRet = ((Ptr) GLeval_147); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLeval_147(void) {	/* exit1 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLeval_149);
	{aRet = ((Ptr) GXevprogn); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_149(void) {	/* ret_call_evprogn_50 */
   {	register Ptr aRet;
	GIa2 = (GIsp++)->Val;
	{aRet = ((Ptr) GXfindtag); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfindtag(void) {	/* findtag */
   {	register Ptr aRet, rSp, rA2, rA3;
	rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
l_GXfindtag:
	rSp = GIdlink;
	rA3 = rSp->Val;
	if (rA3 == ((Ptr) GXunbind3))	goto l_evesc3;
	if (rA3 == ((Ptr) GXunbind5))	goto l_evesc4;
	rA3 = ((Ptr) GXfindtag);
	{aRet = ((Ptr) GXunbinp); goto lRet;}
l_evesc3:
	rSp += (Fix) 1;
	GIdlink = (rSp++)->Val;
	rA3 = (rSp++)->Val;
	if (rA2 != rA3)	goto l_GXfindtag;
	{aRet = (rSp++)->Val; goto lRet;}
l_evesc4:
	rSp += (Fix) 1;
	GIdlink = (rSp++)->Val;
	(--rSp)->Val = rA2;
	(--rSp)->Val = GIa1;
	GIa4 = (Ptr) 3;
	{aRet = ((Ptr) GXfuncall); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

extern Ptr GXunexit(void) {	/* unexit */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa2 = rA1->Val;
	rA1 = (rA1 + 1)->Val;
	{aRet = ((Ptr) GLeval_150); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLeval_150(void) {	/* uvesc1 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
l_GLeval_150:
	rSp = GIdlink;
	rA3 = rSp->Val;
	if (rA3 == ((Ptr) GXunbind3))	goto l_uvesc3;
	if (rA3 == ((Ptr) GXunbind5))	goto l_uvesc4;
	rA3 = ((Ptr) GLeval_150);
	{aRet = ((Ptr) GXunbinp); goto lRet;}
l_uvesc3:
	rSp += (Fix) 1;
	GIdlink = (rSp++)->Val;
	rA3 = (rSp++)->Val;
	if (rA2 != rA3)	goto l_GLeval_150;
	GIerrname = GMunexit;
	{aRet = ((Ptr) GXevprogn); goto lRet;}
l_uvesc4:
	rSp += (Fix) 1;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_cons (rA1, GInil);
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_cons (rA2, rA1);
	rA2 = rA1;
	GIdlink = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	{aRet = ((Ptr) GXapply); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXunwind(void) {	/* unwind */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = (rA1 + 1)->Val;
	(--rSp)->Val = ((Ptr) GLeval_151);
	rA1 = rA1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_151(void) {	/* ret_call_evalcar_51 */
   {	register Ptr aRet;
	GIa2 = (GIsp++)->Val;
	if (GIa1 < GIbfloat)	{aRet = ((Ptr) GLeval_152); goto lRet;}
	GIa2 = GMunwind;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_153(void) {	/* unwind3 */
   {	register Ptr aRet;
	GIsp = GIdlink;
	GIa3 = ((Ptr) GLeval_152);
	{aRet = ((Ptr) GXunbinp); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_152(void) {	/* unwind4 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	{register Fix aux;
		aux = (Fix) (rA1) - 1;
		rA1 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	{aRet = ((Ptr) GLeval_153); goto lRet;}}
	rA1 = GIa2;
	GIerrname = GMunwind;
	{aRet = ((Ptr) GXevprogn); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllitsoft(void) {	/* llitsoft */
   {	register Ptr aRet, rA3;
	rA3 = GIa3;
	rA3 = GMsysits;
	rA3 = rA3->Val;
	{aRet = ((Ptr) GLeval_154); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

extern Ptr GXllsupit(void) {	/* llsupit */
   {	register Ptr aRet, rA1, rA2, rA3, rA4, rBsymb, rBcons;
	rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBsymb = GIbsymb; rBcons = GIbcons;
	rA4 = GMsysits;
	rA4 = rA4->Val;
	goto l_llsupit1;
l_llsupit0:
	if ((rA4->Val < rBsymb) || (rA4->Val >= rBcons))	{aRet = ((Ptr) GLeval_155); goto lRet;}
	if (rA1 == rA4->Val)	goto l_llsupit3;
	rA4 = (rA4 + 1)->Val;
l_llsupit1:
	if ((long) rA4 >= (long) rBcons)	goto l_llsupit0;
	if ((rA4 < rBsymb) || (rA4 >= rBcons))	{aRet = ((Ptr) GLeval_155); goto lRet;}
l_llsupit2:
	if (rA1 == rA4)	goto l_llsupit4;
	if (rA4 == GInil)	{aRet = ((Ptr) GLeval_155); goto lRet;}
	rA4 = (rA4 + 3)->Val;
	goto l_llsupit2;
l_llsupit3:
	rA1 = rA2;
	rA2 = rA3;
	rA3 = (rA4 + 1)->Val;
	{aRet = ((Ptr) GLeval_154); goto lRet;}
l_llsupit4:
	rA1 = rA2;
	rA2 = rA3;
	rA3 = (rA4 + 3)->Val;
	{aRet = ((Ptr) GLeval_154); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLeval_154(void) {	/* llitsofi */
   {	register Ptr aRet, rSp, rA1, rA2, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
	(--rSp)->Val = rA2;
	(--rSp)->Val = GIsavea4;
	(--rSp)->Val = GIsavea3;
	(--rSp)->Val = GIsavea2;
	(--rSp)->Val = GIsavea1;
	(--rSp)->Val = GIfunct;
	(--rSp)->Val = GIforme;
	(--rSp)->Val = GIevalst;
	(--rSp)->Val = rA1;
	(--rSp)->Val = GIllink;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind4);
	GIdlink = rSp;
	GIllink = rNil;
	GIevalst = rNil;
	(--rSp)->Val = rA2;
	rA2 = rA1;
	rA1 = GIa3;
	(--rSp)->Val = ((Ptr) GLeval_156);
	{aRet = ((Ptr) GLeval_157); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLeval_156(void) {	/* ret_call_findits_52 */
   {	register Ptr aRet;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLeval_155); goto lRet;}
	GIa2 = (GIsp++)->Val;
	{aRet = ((Ptr) GXapply); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_155(void) {	/* llitster */
   {	register Ptr aRet;
	GIa1 = GIa2;
	GIa2 = GMitsoft;
	GIa3 = GMsysits;
	GIa3->Val = GInil;
	{aRet = ((Ptr) GXerrudf); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_158(void) {	/* findits0 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	{aRet = ((Ptr) GLeval_157); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_157(void) {	/* findits */
   {	register Ptr aRet, rSp, rA1, rBcons;
	rSp = GIsp; rA1 = GIa1; rBcons = GIbcons;
	if ((long) rA1 >= (long) rBcons)	{aRet = ((Ptr) GLeval_159); goto lRet;}
	if ((rA1 < GIbsymb) || (rA1 >= rBcons))	{aRet = ((Ptr) GLeval_155); goto lRet;}
	GIa3 = (Ptr) 0;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = ((Ptr) GLeval_160);
	{aRet = ((Ptr) GXgetfns); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_160(void) {	/* ret_call_getfns_53 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_159(void) {	/* findits1 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = (rA1 + 1)->Val;
	rA1 = rA1->Val;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	{aRet = ((Ptr) GLeval_155); goto lRet;}
	(--rSp)->Val = GIa2;
	(--rSp)->Val = ((Ptr) GLeval_161);
	{aRet = ((Ptr) GXgetfn1); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_161(void) {	/* ret_call_getfn1_54 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp++)->Val;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLeval_158); goto lRet;}
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXllock(void) {	/* lock */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = rA1;
	(--rSp)->Val = ((Ptr) GLeval_162);
	rA1 = rA1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_162(void) {	/* ret_call_evalcar_55 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = GIa1;
		GIa1 = aux;}
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind5);
	GIdlink = rSp;
	GIerrname = GMllock;
	{aRet = ((Ptr) GXevexpg); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXprotect(void) {	/* protect */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = (rA1 + 1)->Val;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind6);
	GIdlink = rSp;
	rA1 = rA1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXsysprot(void) {	/* sysprot */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind7);
	GIdlink = rSp;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXfunction(void) {	/* function */
   {	register Ptr aRet, rSp, rA1, rBcons;
	rSp = GIsp; rA1 = GIa1; rBcons = GIbcons;
	if ((long) rA1 < (long) rBcons)	{ aRet = (rSp++)->Val; goto lRet;}
	rA1 = rA1->Val;
	if ((long) rA1 < (long) rBcons)	{ aRet = (rSp++)->Val; goto lRet;}
	if (GIllink == GInil)	{ aRet = (rSp++)->Val; goto lRet;}
	if (rA1->Val != GMlambda)	{ aRet = (rSp++)->Val; goto lRet;}
	rA1 = (rA1 + 1)->Val;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (GIllink, rA1);
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (GMclosure, rA1);
l_funcret:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLeval_87(void) {	/* verlpar */
   {	register Ptr aRet, rSp, rA3;
	rSp = GIsp; rA3 = GIa3;
	if ((long) rA3 < (long) GIbcons)	{aRet = ((Ptr) GLeval_163); goto lRet;}
	(--rSp)->Val = rA3;
	rA3 = rA3->Val;
	(--rSp)->Val = ((Ptr) GLeval_164);
	{aRet = ((Ptr) GLeval_165); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLeval_164(void) {	/* ret_call_verlpar4_56 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa3 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLeval_166(void) {	/* verlpar3 */
   {	register Ptr aRet, rSp, rA3;
	rSp = GIsp; rA3 = GIa3;
	(--rSp)->Val = (rA3 + 1)->Val;
	rA3 = rA3->Val;
	(--rSp)->Val = ((Ptr) GLeval_167);
	{aRet = ((Ptr) GLeval_168); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLeval_167(void) {	/* ret_call_verlpar5_57 */
   {	register Ptr aRet;
	GIa3 = (GIsp++)->Val;
	{aRet = ((Ptr) GLeval_165); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_165(void) {	/* verlpar4 */
   {	register Ptr aRet;
	if (GIa3 == GInil)	{ aRet = (GIsp++)->Val; goto lRet;}
	{aRet = ((Ptr) GLeval_168); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_168(void) {	/* verlpar5 */
   {	register Ptr aRet, rA3, rBcons;
	rA3 = GIa3; rBcons = GIbcons;
	if ((long) rA3 >= (long) rBcons)	{aRet = ((Ptr) GLeval_166); goto lRet;}
	if ((rA3 >= GIbvar) && (rA3 < rBcons))	{ aRet = (GIsp++)->Val; goto lRet;}
	{aRet = ((Ptr) GLeval_163); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_163(void) {	/* vererr */
   {	register Ptr aRet;
	GIa1 = GIa3;
	(--GIsp)->Val = ((Ptr) GXerrbpa);
	{aRet = ((Ptr) GLeval_67); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLeval_67(void) {	/* ferrnam */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	rA2 = GIerrname;
	if (rA2 >= GIbfloat)	{ aRet = (rSp++)->Val; goto lRet;}
	(--rSp)->Val = GIa1;
	(--rSp)->Val = rA2;
	GIa1 = rA2;
	(--rSp)->Val = ((Ptr) GLeval_169);
	{aRet = ((Ptr) GXfindfn); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLeval_169(void) {	/* ret_call_findfn_59 */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	if (rA1 == GInil)	goto l_ferrnam1;
	rA2 = (rSp++)->Val;
	rA2 = rA1;
	rA1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_ferrnam1:
	rA2 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
l_ferrname:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GDeval_170() {	/* trace eval */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDeval_171() {	/* trace eval-when */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,3,1,4);
  lRet:  return (aRet);}}

static Ptr GDeval_172() {	/* trace symeval */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,5,1,6);
  lRet:  return (aRet);}}

static Ptr GDeval_173() {	/* trace arg */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,7,1,2);
  lRet:  return (aRet);}}

static Ptr GDeval_174() {	/* trace traceval */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,8,1,2);
  lRet:  return (aRet);}}

static Ptr GDeval_175() {	/* trace stepeval */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,9,1,2);
  lRet:  return (aRet);}}

static Ptr GDeval_176() {	/* trace funcall */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,10,1,2);
  lRet:  return (aRet);}}

static Ptr GDeval_177() {	/* trace apply */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,11,1,2);
  lRet:  return (aRet);}}

static Ptr GDeval_178() {	/* trace let */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,12,1,6);
  lRet:  return (aRet);}}

static Ptr GDeval_179() {	/* trace lets */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,13,1,4);
  lRet:  return (aRet);}}

static Ptr GDeval_180() {	/* trace letv */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,14,1,4);
  lRet:  return (aRet);}}

static Ptr GDeval_181() {	/* trace letvq */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,15,1,4);
  lRet:  return (aRet);}}

static Ptr GDeval_182() {	/* trace flet */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,16,1,4);
  lRet:  return (aRet);}}

static Ptr GDeval_183() {	/* trace tag */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,17,1,4);
  lRet:  return (aRet);}}

static Ptr GDeval_184() {	/* trace evtag */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,18,1,4);
  lRet:  return (aRet);}}

static Ptr GDeval_185() {	/* trace evexit */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,19,1,4);
  lRet:  return (aRet);}}

static Ptr GDeval_186() {	/* trace untilexit */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,20,1,4);
  lRet:  return (aRet);}}

static Ptr GDeval_187() {	/* trace exit */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,21,1,4);
  lRet:  return (aRet);}}

static Ptr GDeval_188() {	/* trace unexit */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,22,1,4);
  lRet:  return (aRet);}}

static Ptr GDeval_189() {	/* trace unwind */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,23,1,4);
  lRet:  return (aRet);}}

static Ptr GDeval_190() {	/* trace lock */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,24,1,4);
  lRet:  return (aRet);}}

static Ptr GDeval_191() {	/* trace protect */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,25,1,4);
  lRet:  return (aRet);}}

static Ptr GDeval_192() {	/* trace function */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYeval,26,1,4);
  lRet:  return (aRet);}}

