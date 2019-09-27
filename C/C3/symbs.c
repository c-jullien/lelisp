/* GELL 15.26: source file for the module: "symbs" */
/*             translation done:           "Sat Oct   7 17 20:53:36 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "symbs.h" 

static Ptr GLsymbs_1(void) {	/* startmodule */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXini_sym); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_sym(void) {	/* ini_sym */
   {	register Ptr aRet;
	{ llrt_inisymb ((Ptr) 10, (Ptr) "makunbound", ((Ptr) GXmakunbound), (Ptr) &GMmakunbound, (Ptr) GFmakunbound);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "plist", ((Ptr) GXfplist), (Ptr) &GMfplist, (Ptr) GFfplist);}
	{ llrt_inisymb ((Ptr) 11, (Ptr) "packagecell", ((Ptr) GXpckgcell), (Ptr) &GMpckgcell, (Ptr) GFpckgcell);}
	{ llrt_inisymb ((Ptr) 14, (Ptr) "3d-root-symbol", ((Ptr) GXd3root), (Ptr) &GMd3root, (Ptr) GFd3root);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "objval", ((Ptr) GXobjval), (Ptr) &GMobjval, (Ptr) GFobjval);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "valfn", ((Ptr) GXvalfn), (Ptr) &GMvalfn, (Ptr) GFvalfn);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "typefn", ((Ptr) GXtypefn), (Ptr) &GMtypefn, (Ptr) GFtypefn);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "setfn", ((Ptr) GXsetfn), (Ptr) &GMsetfn, (Ptr) GFsetfn);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "remfn", ((Ptr) GXremfn), (Ptr) &GMremfn, (Ptr) GFremfn);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "findfn", ((Ptr) GXfindfn), (Ptr) &GMfindfn, (Ptr) GFfindfn);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "getfn1", ((Ptr) GXgetfn1), (Ptr) &GMgetfn1, (Ptr) GFgetfn1);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "getfn", ((Ptr) GXgetfn), (Ptr) &GMgetfn, (Ptr) GFgetfn);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "getsymb1", ((Ptr) GXgetsym1), (Ptr) &GMgetsym1, (Ptr) GFgetsym1);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "getsymb", ((Ptr) GXgetsymb), (Ptr) &GMgetsymb, (Ptr) GFgetsymb);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "getfn2", ((Ptr) GXgetbi), (Ptr) &GMgetbi, (Ptr) GFgetbi);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "synonym", ((Ptr) GXsynonym), (Ptr) &GMsynonym, (Ptr) GFsynonym);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "synonymq", ((Ptr) GXsynqnym), (Ptr) &GMsynqnym, (Ptr) GFsynqnym);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "remob", ((Ptr) GXremob), (Ptr) &GMremob, (Ptr) GFremob);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "get", ((Ptr) GXgetprop), (Ptr) &GMgetprop, (Ptr) GFgetprop);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "getprop", ((Ptr) GXgetprop), (Ptr) &GMgetprop, (Ptr) GFgetprop);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "getl", ((Ptr) GXgetl), (Ptr) &GMgetl, (Ptr) GFgetl);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "addprop", ((Ptr) GXaddprop), (Ptr) &GMaddprop, (Ptr) GFaddprop);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "putprop", ((Ptr) GXputprop), (Ptr) &GMputprop, (Ptr) GFputprop);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "defprop", ((Ptr) GXdefprop), (Ptr) &GMdefprop, (Ptr) GFdefprop);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "remprop", ((Ptr) GXremprop), (Ptr) &GMremprop, (Ptr) GFremprop);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "incr", ((Ptr) GXfincr), (Ptr) &GMfincr, (Ptr) GFfincr);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "decr", ((Ptr) GXfdecr), (Ptr) &GMfdecr, (Ptr) GFfdecr);}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_2(void) {	/* sybfalse */
   {	register Ptr aRet;
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXmakunbound(void) {	/* makunbound */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if ((rA1 < GIbvar) || (rA1 >= GIbcons))	goto l_makuerr;
	rA1->Val = GMundef;
	{aRet = (GIsp++)->Val; goto lRet;}
l_makuerr:
	GIa2 = GMmakunbound;
	{aRet = ((Ptr) GXerrnva); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfplist(void) {	/* plist */
   {	register Ptr aRet;
	GIa2 = GMfplist;
	GIa3 = ((Ptr) GLsymbs_3);
	(--GIsp)->Val = ((Ptr) GLsymbs_4);
	{aRet = ((Ptr) GLsymbs_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_4(void) {	/* ret_call_getset12_1 */
   {	register Ptr aRet;
	GIa1 = (GIa1 + 1)->Val;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_3(void) {	/* setplist */
   {	register Ptr aRet;
	(GIa3 + 1)->Val = GIa1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXpckgcell(void) {	/* packagecell */
   {	register Ptr aRet;
	GIa2 = GMpckgcell;
	GIa3 = ((Ptr) GLsymbs_6);
	(--GIsp)->Val = ((Ptr) GLsymbs_7);
	{aRet = ((Ptr) GLsymbs_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_7(void) {	/* ret_call_getset12_2 */
   {	register Ptr aRet;
	GIa1 = (GIa1 + 3)->Val;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_6(void) {	/* pckgset */
   {	register Ptr aRet;
	(GIa3 + 3)->Val = GIa1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXd3root(void) {	/* 3d-root-symbol */
   {	register Ptr aRet, rSp, rA1, rA4, rNil;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rNil = GInil;
	if (((rA1 + 7)->Val < GIbsymb) || ((rA1 + 7)->Val >= GIbcons))	goto l_d3rootn;
	rA4 = rA1;
l_d3roota:
	if ((rA1 + 3)->Val == rNil)	{ aRet = (rSp++)->Val; goto lRet;}
	rA1 = (rA1 + 7)->Val;
	if (rA1 != rA4)	goto l_d3roota;
l_d3rootn:
	rA1 = rNil;
l_d3rootr:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

extern Ptr GXobjval(void) {	/* objval */
   {	register Ptr aRet;
	GIa2 = GMobjval;
	GIa3 = ((Ptr) GLsymbs_8);
	(--GIsp)->Val = ((Ptr) GLsymbs_9);
	{aRet = ((Ptr) GLsymbs_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_9(void) {	/* ret_call_getset12_3 */
   {	register Ptr aRet;
	GIa1 = (GIa1 + 4)->Val;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_8(void) {	/* objvset */
   {	register Ptr aRet;
	(GIa3 + 4)->Val = GIa1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXvalfn(void) {	/* valfn */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	goto l_valferr;
	rA1 = (rA1 + 2)->Val;
	if ((rA1 >= GIbnumb) && (rA1 < GIecons))	{ aRet = (GIsp++)->Val; goto lRet;}
	{aRet = ((Ptr) GXloc); goto lRet;}
l_valferr:
	GIa2 = GMvalfn;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXtypefn(void) {	/* typefn */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	goto l_typefer1;
	{register UFix aux;
		aux = (UFix) ((rA1 + 6)->Val);
		rA1 = (Ptr) aux;}
	rA2 = GItabcodfn;
	rA3 = (rA2->Val + 1)->Val;
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) (1)));
l_typefn1:
	rA4 = (rA2->Val + 2 + (Fix) (rA3))->Val;
	if (rA4 == rA1)	goto l_typefn2;
	{register Fix aux;
		aux = (Fix) (rA3) - 1;
		rA3 = (Ptr) ((UFix) aux);
		if (aux > 0) 	goto l_typefn1;
		else rA3 = (Ptr) 0;}
l_typefn2:
	rA1 = (GItabtypfn->Val + 2 + (Fix) (rA3))->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_typefer1:
	rA2 = GMtypefn;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
l_typefer2:
	rA2 = GMtypefn;
	{aRet = ((Ptr) GXerroob); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXsetfn(void) {	/* setfn */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
	if ((rA1 < GIbvar) || (rA1 >= rBcons))	goto l_setfner2;
	if ((rA2 < GIbsymb) || (rA2 >= rBcons))	goto l_setfner1;
	(--rSp)->Val = rA3;
	rA4 = (GItabtypfn->Val + 1)->Val;
	goto l_setfn3;
l_setfner1:
	rA1 = rA2;
	rA2 = GMsetfn;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
l_setfner2:
	rA2 = GMsetfn;
	{aRet = ((Ptr) GXerrnva); goto lRet;}
l_setfner3:
	rA2 = GMsetfn;
	rA1 = rA3;
	{aRet = ((Ptr) GXerroob); goto lRet;}
l_setfn2:
	rA3 = (GItabtypfn->Val + 2 + (Fix) (rA4))->Val;
	if (rA3 == rA2)	goto l_setfn4;
l_setfn3:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_setfn2;}
	goto l_setfner3;
l_setfn4:
	rA4 = (GItabcodfn->Val + 2 + (Fix) (rA4))->Val;
	{register int aux1, aux2;
		aux1 = (int) ((rA1 + 6)->Val);
		aux1 = aux1 & HIGHTMASK;
		aux2 = (int) (rA4);
		aux1 = aux1 | aux2;
		(rA1 + 6)->Val = (Ptr) aux1;}
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	if ((long) rA1 < (long) rBcons)	goto l_setfn5;
	if (rA1->Val >= GIbfloat)	{aRet = ((Ptr) GLsymbs_10); goto lRet;}
l_setfn5:
	(--rSp)->Val = ((Ptr) GLsymbs_10);
	{aRet = ((Ptr) GXvag); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLsymbs_10(void) {	/* setfn6 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIa2 = rA1;
	rA1 = (rSp++)->Val;
	(rA1 + 2)->Val = GIa2;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXgetfn1(void) {	/* getfn1 */
   {	register Ptr aRet, rA1, rA2, rBsymb, rBcons;
	rA1 = GIa1; rA2 = GIa2; rBsymb = GIbsymb; rBcons = GIbcons;
	if ((rA1 < rBsymb) || (rA1 >= rBcons))	{aRet = ((Ptr) GLsymbs_11); goto lRet;}
	if ((rA2 < rBsymb) || (rA2 >= rBcons))	{aRet = ((Ptr) GLsymbs_12); goto lRet;}
	if ((rA2 + 3)->Val != GInil)	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
l_getfn1i:
	(--GIsp)->Val = ((Ptr) GLsymbs_13);
	{aRet = ((Ptr) GLsymbs_14); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_13(void) {	/* ret_call_getsym1i_5 */
   {	register Ptr aRet;
	{register UFix aux;
		aux = (UFix) ((GIa1 + 6)->Val);
		GIa2 = (Ptr) aux;}
	if (GIa2 == (Ptr) 0)	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_12(void) {	/* getfn1r1 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLsymbs_11); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_11(void) {	/* getfn1r2 */
   {	register Ptr aRet;
	GIa2 = GMgetfn1;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgetfn(void) {	/* getfn */
   {	register Ptr aRet, rSp, rA3, rA4;
	rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
	GIa2 = GMgetfn;
	rA3 = (Ptr) 0;
	if (rA4 == (Ptr) 2)	goto l_getfn2;
	if (rA4 == (Ptr) 3)	goto l_getfn3;
	GIa1 = (Ptr) 3;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_getfn3:
	rA3 = (rSp++)->Val;
	if ((rA3 < GIbsymb) || (rA3 >= GIbcons))	{aRet = ((Ptr) GLsymbs_15); goto lRet;}
l_getfn2:
	GIa2 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = ((Ptr) GXgetfns); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLsymbs_16(void) {	/* getfner1 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLsymbs_17); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_17(void) {	/* getfner2 */
   {	register Ptr aRet;
	GIa2 = GMgetfn;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_15(void) {	/* getfner3 */
   {	register Ptr aRet;
	GIa1 = GIa3;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgetfns(void) {	/* getfns */
   {	register Ptr aRet, rA1, rA2, rBsymb, rBcons;
	rA1 = GIa1; rA2 = GIa2; rBsymb = GIbsymb; rBcons = GIbcons;
	if ((rA2 < rBsymb) || (rA2 >= rBcons))	{aRet = ((Ptr) GLsymbs_16); goto lRet;}
	if ((rA1 >= rBsymb) && (rA1 < rBcons))	{aRet = ((Ptr) GLsymbs_18); goto lRet;}
	if ((long) rA1 < (long) rBcons)	{aRet = ((Ptr) GLsymbs_17); goto lRet;}
	GIa4 = rA1;
	if ((long) GIa4 >= (long) rBcons)	{aRet = ((Ptr) GLsymbs_19); goto lRet;}
	rA1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLsymbs_19(void) {	/* getfnm1 */
   {	register Ptr aRet, rSp, rA1, rA4;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
	rA1 = rA4->Val;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	{aRet = ((Ptr) GLsymbs_17); goto lRet;}
	(--rSp)->Val = (rA4 + 1)->Val;
	(--rSp)->Val = ((Ptr) GLsymbs_20);
	{aRet = ((Ptr) GLsymbs_18); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsymbs_20(void) {	/* ret_call_getfn5_6 */
   {	register Ptr aRet, rSp, rNil;
	rSp = GIsp; rNil = GInil;
	if (GIa1 == rNil)	goto l_getfnm2;
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
l_getfnm2:
	GIa4 = (rSp++)->Val;
	if ((long) GIa4 >= (long) GIbcons)	{aRet = ((Ptr) GLsymbs_19); goto lRet;}
	GIa1 = rNil;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsymbs_18(void) {	/* getfn5 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	if (((rA2 + 7)->Val >= GIbstrg) && ((rA2 + 7)->Val < GIbsymb))	{aRet = ((Ptr) GLsymbs_21); goto lRet;}
	if ((long) GIa1 < (long) GIbcons)	{aRet = ((Ptr) GLsymbs_22); goto lRet;}
	{aRet = ((Ptr) GLsymbs_23); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_23(void) {	/* getfn7 */
   {	register Ptr aRet, rSp, rA1, rA4;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
	rA4 = (rA1 + 1)->Val;
	rA1 = rA1->Val;
	if (rA4 == GInil)	{aRet = ((Ptr) GLsymbs_22); goto lRet;}
	(--rSp)->Val = rA4;
	(--rSp)->Val = ((Ptr) GLsymbs_24);
	{aRet = ((Ptr) GLsymbs_22); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsymbs_24(void) {	/* ret_call_getfn8_7 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIa4 = (rSp++)->Val;
	if (rA1 != GInil)	{ aRet = (rSp++)->Val; goto lRet;}
	rA1 = GIa4;
	if ((long) rA1 < (long) GIbcons)	{aRet = ((Ptr) GLsymbs_22); goto lRet;}
	{aRet = ((Ptr) GLsymbs_23); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsymbs_22(void) {	/* getfn80 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
l_GLsymbs_22:
	rA4 = rA2;
l_getfn81:
	if ((rA2 + 3)->Val == rA1)	goto l_getfn9;
	rA2 = (rA2 + 7)->Val;
	if (rA2 != rA4)	goto l_getfn81;
l_getfn82:
	if (rA1 == rNil)	goto l_getfn83;
	rA1 = (rA1 + 3)->Val;
	if (rA1 != rA3)	goto l_getfn84;
l_getfn83:
	rA1 = rNil;
	{aRet = (rSp++)->Val; goto lRet;}
l_getfn84:
	if ((long) rA1 < (long) GIbcons)	goto l_GLsymbs_22;
	{aRet = ((Ptr) GLsymbs_23); goto lRet;}
l_getfn9:
	(--rSp)->Val = rA3;
	{register UFix aux;
		aux = (UFix) ((rA2 + 6)->Val);
		rA3 = (Ptr) aux;}
	if (rA3 == (Ptr) 0)	goto l_getfn91;
	rA3 = (rSp++)->Val;
	rA1 = rA2;
	{aRet = (rSp++)->Val; goto lRet;}
l_getfn91:
	rA3 = (rSp++)->Val;
	goto l_getfn82;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLsymbs_21(void) {	/* getfnone */
   {	register Ptr aRet, rA2, rA4;
	rA2 = GIa2; rA4 = GIa4;
	{register UFix aux;
		aux = (UFix) ((rA2 + 6)->Val);
		rA4 = (Ptr) aux;}
	if (rA4 == (Ptr) 0)	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
	rA4 = (rA2 + 3)->Val;
	{aRet = ((Ptr) GLsymbs_25); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLsymbs_25(void) {	/* getfno1 */
   {	register Ptr aRet;
	if ((long) GIa1 < (long) GIbcons)	{aRet = ((Ptr) GLsymbs_26); goto lRet;}
	{aRet = ((Ptr) GLsymbs_27); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_27(void) {	/* getfno2 */
   {	register Ptr aRet, rSp, rA1, rA4;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
	rA4 = (rA1 + 1)->Val;
	rA1 = rA1->Val;
	if (rA4 == GInil)	{aRet = ((Ptr) GLsymbs_26); goto lRet;}
	(--rSp)->Val = rA4;
	rA4 = (GIa2 + 3)->Val;
	(--rSp)->Val = ((Ptr) GLsymbs_28);
	{aRet = ((Ptr) GLsymbs_26); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLsymbs_28(void) {	/* ret_call_getfno3_8 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	if (GIa1 != GInil)	{ aRet = (rSp++)->Val; goto lRet;}
	GIa1 = GIa4;
	{aRet = ((Ptr) GLsymbs_27); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsymbs_26(void) {	/* getfno3 */
   {	register Ptr aRet, rSp, rA1, rNil;
	rSp = GIsp; rA1 = GIa1; rNil = GInil;
	if (rA1 == GIa4)	goto l_getfno9;
	if (rA1 == rNil)	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
	rA1 = (rA1 + 3)->Val;
	if (rA1 != GIa3)	{aRet = ((Ptr) GLsymbs_25); goto lRet;}
l_getfnof:
	rA1 = rNil;
	{aRet = (rSp++)->Val; goto lRet;}
l_getfno9:
	rA1 = GIa2;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXgetbi(void) {	/* getfn2 */
   {	register Ptr aRet, rA1, rA2, rA3, rBsymb, rBcons;
	rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBsymb = GIbsymb; rBcons = GIbcons;
	if ((rA1 < rBsymb) || (rA1 >= rBcons))	{aRet = ((Ptr) GLsymbs_29); goto lRet;}
	if ((rA2 < rBsymb) || (rA2 >= rBcons))	{aRet = ((Ptr) GLsymbs_30); goto lRet;}
	if ((rA3 < rBsymb) || (rA3 >= rBcons))	{aRet = ((Ptr) GLsymbs_31); goto lRet;}
	if ((rA3 + 3)->Val != GInil)	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
	{aRet = ((Ptr) GLsymbs_32); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_32(void) {	/* getbi1 */
   {	register Ptr aRet;
	(--GIsp)->Val = GIa2;
	{aRet = ((Ptr) GLsymbs_33); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_33(void) {	/* getbi2 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = ((Ptr) GLsymbs_34);
	{aRet = ((Ptr) GLsymbs_35); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsymbs_34(void) {	/* ret_call_getbi1i_9 */
   {	register Ptr aRet, rSp, rA1, rA2, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
	if (rA1 != rNil)	{rSp += (Fix) 2; aRet = (rSp++)->Val; goto lRet;}
	rA1 = (rSp++)->Val;
	rA2 = (rA2 + 3)->Val;
	if (rA2 != rNil)	{aRet = ((Ptr) GLsymbs_33); goto lRet;}
	rA2 = (rSp++)->Val;
	rA1 = (rA1 + 3)->Val;
	if (rA1 != rNil)	{aRet = ((Ptr) GLsymbs_32); goto lRet;}
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLsymbs_31(void) {	/* getbier3 */
   {	register Ptr aRet;
	GIa1 = GIa3;
	{aRet = ((Ptr) GLsymbs_29); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_30(void) {	/* getbier2 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLsymbs_29); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_29(void) {	/* getbier1 */
   {	register Ptr aRet;
	GIa2 = GMgetbi;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_35(void) {	/* getbi1i */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
	rA4 = (rA3 + 3)->Val;
	if ((long) rA4 < (long) rBcons)	goto l_getbi1i1;
	if (rA4->Val != rA1)	goto l_getbi1i1;
	if ((rA4 + 1)->Val != rA2)	goto l_getbi1i1;
	{register UFix aux;
		aux = (UFix) ((rA3 + 6)->Val);
		rA4 = (Ptr) aux;}
	if (rA4 != (Ptr) 0)	goto l_getbi1i9;
l_getbi1i1:
	if (((rA3 + 7)->Val >= GIbstrg) && ((rA3 + 7)->Val < GIbsymb))	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
	(--rSp)->Val = rA3;
l_getbi1i2:
	rA3 = (rA3 + 7)->Val;
	rA4 = (rA3 + 3)->Val;
	if ((long) rA4 < (long) rBcons)	goto l_getbi1i3;
	if (rA4->Val != rA1)	goto l_getbi1i3;
	if ((rA4 + 1)->Val != rA2)	goto l_getbi1i3;
	{register UFix aux;
		aux = (UFix) ((rA3 + 6)->Val);
		rA4 = (Ptr) aux;}
	if (rA4 != (Ptr) 0)	goto l_getbi1i8;
l_getbi1i3:
	if (rA3 != rSp->Val)	goto l_getbi1i2;
	rSp += (Fix) 1;
	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
l_getbi1i8:
	rSp += (Fix) 1;
l_getbi1i9:
	rA1 = rA3;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXremfn(void) {	/* remfn */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	goto l_makunfner;
	(rA1 + 2)->Val = (Ptr) 0;
	{register int aux1, aux2;
		aux1 = (int) ((rA1 + 6)->Val);
		aux1 = aux1 & HIGHTMASK;
		aux2 = (int) 0;
		aux1 = aux1 | aux2;
		(rA1 + 6)->Val = (Ptr) aux1;}
	{aRet = (GIsp++)->Val; goto lRet;}
l_makunfner:
	GIa2 = GMremfn;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfindfn(void) {	/* findfn */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rBsymb;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBsymb = GIbsymb;
	rA2 = rA1;
	rA1 = (GIhashtab->Val + 1)->Val;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (1)));
l_findfn1:
	rA1 = (GIhashtab->Val + 2 + (Fix) (rA1))->Val;
	goto l_findfn8;
l_findfn2:
	rA3 = rA1;
	if (((rA1 + 7)->Val >= GIbstrg) && ((rA1 + 7)->Val < rBsymb))	goto l_findfn4;
l_findfn3:
	rA1 = (rA1 + 7)->Val;
l_findfn4:
	if ((rA1 + 2)->Val == rA2)	{ aRet = (rSp++)->Val; goto lRet;}
	if (rA1 != rA3)	goto l_findfn3;
	rA1 = (rA1 + 5)->Val;
l_findfn8:
	if ((rA1 >= rBsymb) && (rA1 < GIbcons))	goto l_findfn2;
	{register Fix aux;
		aux = (Fix) (rA1) - 1;
		rA1 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_findfn1;}
	rA1 = GInil;
l_findfn9:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXsynonym(void) {	/* synonym */
   {	register Ptr aRet, rA1, rA2, rBsymb, rBcons;
	rA1 = GIa1; rA2 = GIa2; rBsymb = GIbsymb; rBcons = GIbcons;
	if ((rA1 < rBsymb) || (rA1 >= rBcons))	goto l_synmerr2;
	if (rA1 == GInil)	goto l_synmerr2;
	if ((rA2 >= rBsymb) && (rA2 < rBcons))	{aRet = ((Ptr) GLsymbs_36); goto lRet;}
	rA1 = rA2;
l_synmerr2:
	rA2 = GMsynonym;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLsymbs_36(void) {	/* synom */
   {	register Ptr aRet, rSp, rA1, rA2, rA3;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
	{register UFix aux;
		aux = (UFix) ((rA2 + 6)->Val);
		rA3 = (Ptr) aux;}
	if (rA3 == (Ptr) 0)	goto l_synmerr3;
	{register int aux1, aux2;
		aux1 = (int) ((rA1 + 6)->Val);
		aux1 = aux1 & HIGHTMASK;
		aux2 = (int) (rA3);
		aux1 = aux1 | aux2;
		(rA1 + 6)->Val = (Ptr) aux1;}
	(rA1 + 2)->Val = (rA2 + 2)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_synmerr3:
	(--rSp)->Val = rA1;
	rA1 = rA2;
	rA2 = GMsynonym;
	(--rSp)->Val = ((Ptr) GLsymbs_37);
	{aRet = ((Ptr) GXerrudf); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLsymbs_37(void) {	/* ret_call_errudf_10 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	{aRet = ((Ptr) GXsynonym); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXsynqnym(void) {	/* synonymq */
   {	register Ptr aRet, rA1, rA2, rBsymb, rBcons;
	rA1 = GIa1; rA2 = GIa2; rBsymb = GIbsymb; rBcons = GIbcons;
	rA2 = (rA1 + 1)->Val;
	rA1 = rA1->Val;
	rA2 = rA2->Val;
	if ((rA1 < rBsymb) || (rA1 >= rBcons))	goto l_synmerq2;
	if (rA1 == GInil)	goto l_synmerq2;
	if ((rA2 < rBsymb) || (rA2 >= rBcons))	goto l_synmerq1;
	{aRet = ((Ptr) GLsymbs_36); goto lRet;}
l_synmerq1:
	rA1 = rA2;
l_synmerq2:
	rA2 = GMsynqnym;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXremob(void) {	/* remob */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if ((rA1 < GIbvar) || (rA1 >= GIbcons))	goto l_remoberr;
	{aRet = ((Ptr) GXistdsym); goto lRet;}
l_remoberr:
	GIa2 = GMremob;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgetsymb(void) {	/* getsymb */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBsymb, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBsymb = GIbsymb; rBcons = GIbcons;
	if (rA4 == (Ptr) 3)	goto l_getsymb0;
	if (rA4 == (Ptr) 2)	goto l_getsymb1;
	rA2 = GMgetsymb;
	rA1 = (Ptr) 3;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_getsymb0:
	rA3 = (rSp++)->Val;
	if ((rA3 >= rBsymb) && (rA3 < rBcons))	goto l_getsymb2;
	rA1 = rA3;
	rA2 = GMgetsymb;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
l_getsymb1:
	rA3 = (Ptr) 0;
l_getsymb2:
	rA2 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	goto l_getsymi;
l_getsymi:
	if ((rA2 < rBsymb) || (rA2 >= rBcons))	{aRet = ((Ptr) GLsymbs_38); goto lRet;}
	{aRet = ((Ptr) GLsymbs_39); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLsymbs_39(void) {	/* getsymi1 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if ((rA1 >= GIbsymb) && (rA1 < GIbcons))	goto l_getsymi3;
	rA1 = GInil;
	{aRet = (rSp++)->Val; goto lRet;}
l_getsymi3:
	if (rA1 == GIa3)	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
	(--rSp)->Val = rA1;
	(--rSp)->Val = ((Ptr) GLsymbs_40);
	{aRet = ((Ptr) GLsymbs_14); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsymbs_40(void) {	/* ret_call_getsym1i_11 */
   {	register Ptr aRet, rSp, rA1, rNil;
	rSp = GIsp; rA1 = GIa1; rNil = GInil;
	if (rA1 != rNil)	{rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
	rA1 = (rSp++)->Val;
	if (rA1 == rNil)	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
	rA1 = (rA1 + 3)->Val;
	{aRet = ((Ptr) GLsymbs_39); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsymbs_38(void) {	/* getsymer */
   {	register Ptr aRet;
	GIa1 = GMgetsymb;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgetsym1(void) {	/* getsymb1 */
   {	register Ptr aRet, rA1, rA2, rBsymb, rBcons;
	rA1 = GIa1; rA2 = GIa2; rBsymb = GIbsymb; rBcons = GIbcons;
	if ((rA1 < rBsymb) || (rA1 >= rBcons))	{aRet = ((Ptr) GLsymbs_41); goto lRet;}
	if ((rA2 < rBsymb) || (rA2 >= rBcons))	{aRet = ((Ptr) GLsymbs_42); goto lRet;}
	if ((rA2 + 3)->Val != GInil)	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
	{aRet = ((Ptr) GLsymbs_14); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_14(void) {	/* getsym1i */
   {	register Ptr aRet, rSp, rA1, rA2, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
	if ((rA2 + 3)->Val == rA1)	goto l_getsym12;
	if (((rA2 + 7)->Val >= GIbstrg) && ((rA2 + 7)->Val < GIbsymb))	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
	rA4 = rA2;
l_getsym11:
	rA2 = (rA2 + 7)->Val;
	if ((rA2 + 3)->Val == rA1)	goto l_getsym12;
	if (rA2 != rA4)	goto l_getsym11;
	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
l_getsym12:
	rA1 = rA2;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsymbs_42(void) {	/* getsy1r2 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLsymbs_41); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_41(void) {	/* getsy1r1 */
   {	register Ptr aRet;
	GIa2 = GMgetsym1;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_43(void) {	/* geti */
   {	register Ptr aRet, rSp, rA3, rA4, rNil, rBcons;
	rSp = GIsp; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
	rA4 = (GIa1 + 1)->Val;
	rA3 = rNil;
	goto l_geti3;
l_geti2:
	if (GIa2 == rA4->Val)	{ aRet = (rSp++)->Val; goto lRet;}
	rA4 = (rA4 + 1)->Val;
	if ((long) rA4 < (long) rBcons)	goto l_geti4;
	rA3 = rA4;
	rA4 = (rA4 + 1)->Val;
	if (GIitcount != 0) {GIsp = rSp; GIa3 = rA3; GIa4 = rA4; llrt_ithard ();}
l_geti3:
	if ((long) rA4 >= (long) rBcons)	goto l_geti2;
l_geti4:
	rA4 = rNil;
l_getiret:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXgetprop(void) {	/* get */
   {	register Ptr aRet, rSp, rA1, rA2, rA4, rNil, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
	if (rA1 == rNil)	goto l_getpr4;
	if ((rA1 < GIbsymb) || (rA1 >= rBcons))	goto l_geterr;
	rA4 = (rA1 + 1)->Val;
	if ((long) rA4 < (long) rBcons)	goto l_getpr4;
l_getpr2:
	if (rA2 == rA4->Val)	goto l_getpr5;
	rA4 = (rA4 + 1)->Val;
	if ((long) rA4 < (long) rBcons)	goto l_getpr4;
	rA4 = (rA4 + 1)->Val;
	if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; llrt_ithard ();}
	if ((long) rA4 >= (long) rBcons)	goto l_getpr2;
l_getpr4:
	rA1 = rNil;
	{aRet = (rSp++)->Val; goto lRet;}
l_getpr5:
	rA4 = (rA4 + 1)->Val;
	if ((long) rA4 < (long) rBcons)	goto l_getpr4;
	rA1 = rA4->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_geterr:
	rA2 = GMgetprop;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXgetl(void) {	/* getl */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
	if (rA1 == rNil)	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
	if ((rA1 < GIbsymb) || (rA1 >= rBcons))	goto l_getlerr;
	if (rA2 == rNil)	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
	if ((long) rA2 < (long) rBcons)	goto l_getlerr2;
	rA1 = (rA1 + 1)->Val;
	goto l_getl7;
l_getl1:
	rA3 = rA1->Val;
	(--rSp)->Val = rA2;
l_getl2:
	rA4 = rA2->Val;
	if (rA3 == rA4)	goto l_getl8;
	rA2 = (rA2 + 1)->Val;
	if ((long) rA2 >= (long) rBcons)	goto l_getl2;
	rA2 = (rSp++)->Val;
	rA1 = (rA1 + 1)->Val;
	if ((long) rA1 < (long) rBcons)	goto l_getl7;
	rA1 = (rA1 + 1)->Val;
l_getl7:
	if ((long) rA1 >= (long) rBcons)	goto l_getl1;
	{aRet = (rSp++)->Val; goto lRet;}
l_getl8:
	rA2 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_getlerr:
	rA2 = GMgetl;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
l_getlerr2:
	rA1 = rA2;
	rA2 = GMgetl;
	{aRet = ((Ptr) GXerrnla); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXaddprop(void) {	/* addprop */
   {	register Ptr aRet, rA1, rA2, rA4;
	rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	goto l_addpret;
	if (rA1 == GInil)	goto l_addpret;
	rA4 = (rA1 + 1)->Val;
	GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA4 = llrt_cons (rA2, rA4);
	GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA4 = llrt_cons (GIa3, rA4);
	(rA1 + 1)->Val = rA4;
	rA1 = rA2;
	{aRet = (GIsp++)->Val; goto lRet;}
l_addpret:
	rA2 = GMaddprop;
	{aRet = ((Ptr) GXerrnva); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXputprop(void) {	/* putprop */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	{aRet = ((Ptr) GLsymbs_44); goto lRet;}
	if (rA1 == GInil)	{aRet = ((Ptr) GLsymbs_44); goto lRet;}
	(--rSp)->Val = GIa2;
	GIa2 = GIa3;
	(--rSp)->Val = ((Ptr) GLsymbs_45);
	{aRet = ((Ptr) GLsymbs_43); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsymbs_45(void) {	/* ret_call_geti_12 */
   {	register Ptr aRet, rSp, rA2, rA4, rBcons;
	rSp = GIsp; rA2 = GIa2; rA4 = GIa4; rBcons = GIbcons;
	GIa3 = rA2;
	rA2 = (rSp++)->Val;
	if ((long) rA4 < (long) rBcons)	{aRet = ((Ptr) GXaddprop); goto lRet;}
	rA4 = (rA4 + 1)->Val;
	if ((long) rA4 < (long) rBcons)	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
	rA4->Val = rA2;
	GIa1 = rA2;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLsymbs_44(void) {	/* putperr */
   {	register Ptr aRet;
	GIa2 = GMputprop;
	{aRet = ((Ptr) GXerrnva); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXdefprop(void) {	/* defprop */
   {	register Ptr aRet, rA1, rA3, rA4, rBcons;
	rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
	if ((long) rA1 < (long) rBcons)	goto l_defperr;
	rA4 = (rA1 + 1)->Val;
	rA1 = rA1->Val;
	if ((long) rA4 < (long) rBcons)	goto l_defperr;
	GIa2 = rA4->Val;
	rA3 = (rA4 + 1)->Val;
	if ((long) rA3 < (long) rBcons)	goto l_defperr;
	rA3 = rA3->Val;
	{aRet = ((Ptr) GXputprop); goto lRet;}
l_defperr:
	GIa2 = GMdefprop;
	{aRet = ((Ptr) GXerrnva); goto lRet;}
  lRet: GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXremprop(void) {	/* remprop */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	{aRet = ((Ptr) GLsymbs_46); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLsymbs_47);
	{aRet = ((Ptr) GLsymbs_43); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_47(void) {	/* ret_call_geti_13 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
	if ((long) rA4 < (long) rBcons)	{aRet = ((Ptr) GLsymbs_2); goto lRet;}
	(--rSp)->Val = rA4;
	rA2 = (rA4 + 1)->Val;
	if ((long) rA2 < (long) rBcons)	goto l_rempr2;
	rA2 = (rA2 + 1)->Val;
l_rempr2:
	if ((long) rA3 < (long) rBcons)	goto l_rempr4;
	(rA3 + 1)->Val = rA2;
	rA1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_rempr4:
	(rA1 + 1)->Val = rA2;
	rA1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLsymbs_46(void) {	/* remperr */
   {	register Ptr aRet;
	GIa2 = GMremprop;
	{aRet = ((Ptr) GXerrnva); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLsymbs_5(void) {	/* getset12 */
   {	register Ptr aRet, rSp, rA1, rA3, rA4, rBsymb, rBcons;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rBsymb = GIbsymb; rBcons = GIbcons;
	if (rA4 == (Ptr) 1)	goto l_getseta;
	if (rA4 == (Ptr) 2)	goto l_getsetb;
	rA1 = (Ptr) 2;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_getseta:
	rA3 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	if ((rA1 < rBsymb) || (rA1 >= rBcons))	{aRet = ((Ptr) GXerrsym); goto lRet;}
	{aRet = rA3; goto lRet;}
l_getsetb:
	rA4 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA3;
		rA3 = aux;}
	if ((rA3 < rBsymb) || (rA3 >= rBcons))	goto l_getsetd;
	if (rA3 == GInil)	goto l_getsetd;
	{aRet = (rSp++)->Val; goto lRet;}
l_getsetd:
	rA1 = rA3;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXfincr(void) {	/* incr */
   {	register Ptr aRet, rSp, rA1, rNil;
	rSp = GIsp; rA1 = GIa1; rNil = GInil;
	(--rSp)->Val = rA1->Val;
	rA1 = (rA1 + 1)->Val;
	if (rA1 != rNil)	goto l_incr2;
	rA1 = (Ptr) 1;
	{aRet = ((Ptr) GLsymbs_48); goto lRet;}
l_incr2:
	(--rSp)->Val = ((Ptr) GLsymbs_48);
	rA1 = rA1->Val;
	if (GIevalst != rNil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsymbs_48(void) {	/* incr3 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIa2 = rA1;
	rA1 = rSp->Val;
	if ((rA1 < GIbvar) || (rA1 >= GIbcons))	{aRet = ((Ptr) GLsymbs_49); goto lRet;}
	rA1 = rA1->Val;
	GIa4 = (Ptr) 2;
	(--rSp)->Val = ((Ptr) GLsymbs_50);
	{aRet = ((Ptr) GXgaplus2i); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsymbs_50(void) {	/* ret_call_gaplus2i_15 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp++)->Val;
	GIa2->Val = GIa1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsymbs_49(void) {	/* increrr1 */
   {	register Ptr aRet;
	GIa2 = GMfincr;
	{aRet = ((Ptr) GXerrnva); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfdecr(void) {	/* decr */
   {	register Ptr aRet, rSp, rA1, rNil;
	rSp = GIsp; rA1 = GIa1; rNil = GInil;
	(--rSp)->Val = rA1->Val;
	rA1 = (rA1 + 1)->Val;
	if (rA1 != rNil)	goto l_decr2;
	rA1 = (Ptr) 1;
	{aRet = ((Ptr) GLsymbs_51); goto lRet;}
l_decr2:
	(--rSp)->Val = ((Ptr) GLsymbs_51);
	rA1 = rA1->Val;
	if (GIevalst != rNil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsymbs_51(void) {	/* decr3 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIa2 = rA1;
	rA1 = rSp->Val;
	if ((rA1 < GIbvar) || (rA1 >= GIbcons))	{aRet = ((Ptr) GLsymbs_52); goto lRet;}
	rA1 = rA1->Val;
	(--rSp)->Val = ((Ptr) GLsymbs_53);
	{aRet = ((Ptr) GXgadiff2i); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLsymbs_53(void) {	/* ret_call_gadiff2i_17 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp++)->Val;
	GIa2->Val = GIa1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLsymbs_52(void) {	/* decrerr1 */
   {	register Ptr aRet;
	GIa2 = GMfdecr;
	{aRet = ((Ptr) GXerrnva); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDsymbs_54() {	/* trace makunbound */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDsymbs_55() {	/* trace plist */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,3,1,4);
  lRet:  return (aRet);}}

static Ptr GDsymbs_56() {	/* trace packagecell */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,5,1,4);
  lRet:  return (aRet);}}

static Ptr GDsymbs_57() {	/* trace 3d-root-symbol */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,6,1,2);
  lRet:  return (aRet);}}

static Ptr GDsymbs_58() {	/* trace objval */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,7,1,4);
  lRet:  return (aRet);}}

static Ptr GDsymbs_59() {	/* trace valfn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,8,1,2);
  lRet:  return (aRet);}}

static Ptr GDsymbs_60() {	/* trace typefn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,9,1,2);
  lRet:  return (aRet);}}

static Ptr GDsymbs_61() {	/* trace setfn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,10,1,11);
  lRet:  return (aRet);}}

static Ptr GDsymbs_62() {	/* trace getfn1 */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,12,1,13);
  lRet:  return (aRet);}}

static Ptr GDsymbs_63() {	/* trace getfn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,14,1,4);
  lRet:  return (aRet);}}

static Ptr GDsymbs_64() {	/* trace getfn2 */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,15,1,11);
  lRet:  return (aRet);}}

static Ptr GDsymbs_65() {	/* trace remfn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,16,1,2);
  lRet:  return (aRet);}}

static Ptr GDsymbs_66() {	/* trace findfn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,17,1,2);
  lRet:  return (aRet);}}

static Ptr GDsymbs_67() {	/* trace synonym */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,18,1,13);
  lRet:  return (aRet);}}

static Ptr GDsymbs_68() {	/* trace synonymq */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,19,1,20);
  lRet:  return (aRet);}}

static Ptr GDsymbs_69() {	/* trace remob */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,21,1,2);
  lRet:  return (aRet);}}

static Ptr GDsymbs_70() {	/* trace getsymb */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,22,1,4);
  lRet:  return (aRet);}}

static Ptr GDsymbs_71() {	/* trace getsymb1 */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,23,1,13);
  lRet:  return (aRet);}}

static Ptr GDsymbs_72() {	/* trace get */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,24,1,13);
  lRet:  return (aRet);}}

static Ptr GDsymbs_73() {	/* trace getl */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,25,1,13);
  lRet:  return (aRet);}}

static Ptr GDsymbs_74() {	/* trace addprop */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,26,1,11);
  lRet:  return (aRet);}}

static Ptr GDsymbs_75() {	/* trace putprop */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,27,1,11);
  lRet:  return (aRet);}}

static Ptr GDsymbs_76() {	/* trace defprop */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,28,1,20);
  lRet:  return (aRet);}}

static Ptr GDsymbs_77() {	/* trace remprop */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,29,1,13);
  lRet:  return (aRet);}}

static Ptr GDsymbs_78() {	/* trace incr */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,30,1,20);
  lRet:  return (aRet);}}

static Ptr GDsymbs_79() {	/* trace decr */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYsymbs,31,1,20);
  lRet:  return (aRet);}}

