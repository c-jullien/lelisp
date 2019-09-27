/* GELL 15.26: source file for the module: "number" */
/*             translation done:           "Sat Oct   7 17 20:53:44 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "number.h" 

static Ptr GLnumber_1(void) {	/* startmodule */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXini_nbs); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_nbs(void) {	/* ini_nbs */
   {	register Ptr aRet;
	{ llrt_inicst ((Ptr) 8, (Ptr) "genarith", (Ptr) &GMsysgen);}
	GIa1->Val = GInil;
	(GIa1 + 3)->Val = GMsyspkgc;
	{ llrt_inisymb ((Ptr) 7, (Ptr) "numberp", ((Ptr) GXnumberp), (Ptr) &GMnumberp, (Ptr) GFnumberp);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "integerp", ((Ptr) GXintgerp), (Ptr) &GMintgerp, (Ptr) GFintgerp);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "rationalp", ((Ptr) GXrationalp), (Ptr) &GMrationalp, (Ptr) GFrationalp);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "float", ((Ptr) GXllfloat), (Ptr) &GMllfloat, (Ptr) GFllfloat);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "fix", ((Ptr) GXllfix), (Ptr) &GMllfix, (Ptr) GFllfix);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "truncate", ((Ptr) GXlltrunc), (Ptr) &GMlltrunc, (Ptr) GFlltrunc);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) "1+", ((Ptr) GXgaadd1), (Ptr) &GMgaadd1, (Ptr) GFgaadd1);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) "1-", ((Ptr) GXgasub1), (Ptr) &GMgasub1, (Ptr) GFgasub1);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "abs", ((Ptr) GXgaabs), (Ptr) &GMgaabs, (Ptr) GFgaabs);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "+", ((Ptr) GXgaplus), (Ptr) &GMgaplus, (Ptr) GFgaplus);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) "0-", ((Ptr) GXgadinv), (Ptr) &GMgadinv, (Ptr) GFgadinv);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "-", ((Ptr) GXgadiff), (Ptr) &GMgadiff, (Ptr) GFgadiff);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "*", ((Ptr) GXgatimes), (Ptr) &GMgatimes, (Ptr) GFgatimes);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) "1/", ((Ptr) GXgadrev), (Ptr) &GMgadrev, (Ptr) GFgadrev);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) "//", ((Ptr) GXgadiv), (Ptr) &GMgadiv, (Ptr) GFgadiv);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "/", ((Ptr) GXgadiv), (Ptr) &GMgadiv, (Ptr) GFgadiv);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "quo", ((Ptr) GXgaquomod), (Ptr) &GMgaquomod, (Ptr) GFgaquomod);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "quotient", ((Ptr) GXgaquomod), (Ptr) &GMgaquomod, (Ptr) GFgaquomod);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "quomod", ((Ptr) GXgaquomod), (Ptr) &GMgaquomod, (Ptr) GFgaquomod);}
	{ llrt_inicst ((Ptr) 2, (Ptr) "ex", (Ptr) &GMex);}
	{ llrt_inicst ((Ptr) 3, (Ptr) "mod", (Ptr) &GMexmod);}
	GIa1->Val = (Ptr) 0;
	(GIa1 + 3)->Val = GMex;
	{ llrt_inisymb ((Ptr) 6, (Ptr) "modulo", ((Ptr) GXgamod), (Ptr) &GMgamod, (Ptr) GFgamod);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "<?>", ((Ptr) GXgacomp), (Ptr) &GMgacomp, (Ptr) GFgacomp);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "=", ((Ptr) GXgaeqen), (Ptr) &GMgaeqen, (Ptr) GFgaeqen);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) "<>", ((Ptr) GXganeqn), (Ptr) &GMganeqn, (Ptr) GFganeqn);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) "/=", ((Ptr) GXganeqn), (Ptr) &GMganeqn, (Ptr) GFganeqn);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) ">=", ((Ptr) GXgage), (Ptr) &GMgage, (Ptr) GFgage);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) ">", ((Ptr) GXgagt), (Ptr) &GMgagt, (Ptr) GFgagt);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) "<=", ((Ptr) GXgale), (Ptr) &GMgale, (Ptr) GFgale);}
	{ llrt_inisymb ((Ptr) 1, (Ptr) "<", ((Ptr) GXgalt), (Ptr) &GMgalt, (Ptr) GFgalt);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "zerop", ((Ptr) GXzerop), (Ptr) &GMzerop, (Ptr) GFzerop);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "plusp", ((Ptr) GXplusp), (Ptr) &GMplusp, (Ptr) GFplusp);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "minusp", ((Ptr) GXminusp), (Ptr) &GMminusp, (Ptr) GFminusp);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "min", ((Ptr) GXmin), (Ptr) &GMmin, (Ptr) GFmin);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "max", ((Ptr) GXmax), (Ptr) &GMmax, (Ptr) GFmax);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "sin", ((Ptr) GXllsin), (Ptr) &GMllsin, (Ptr) GFllsin);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "cos", ((Ptr) GXllcos), (Ptr) &GMllcos, (Ptr) GFllcos);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "asin", ((Ptr) GXllasin), (Ptr) &GMllasin, (Ptr) GFllasin);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "acos", ((Ptr) GXllacos), (Ptr) &GMllacos, (Ptr) GFllacos);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "atan", ((Ptr) GXllatan), (Ptr) &GMllatan, (Ptr) GFllatan);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "exp", ((Ptr) GXllexp), (Ptr) &GMllexp, (Ptr) GFllexp);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "log", ((Ptr) GXlllog), (Ptr) &GMlllog, (Ptr) GFlllog);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "log10", ((Ptr) GXlllog10), (Ptr) &GMlllog10, (Ptr) GFlllog10);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "power", ((Ptr) GXllpower), (Ptr) &GMllpower, (Ptr) GFllpower);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "sqrt", ((Ptr) GXllsqrt), (Ptr) &GMllsqrt, (Ptr) GFllsqrt);}
	{ llrt_inisymb ((Ptr) 20, (Ptr) "most-positive-fixnum", ((Ptr) GXllfixmax), (Ptr) &GMllfixmax, (Ptr) GFllfixmax);}
	{ llrt_inisymb ((Ptr) 20, (Ptr) "most-negative-fixnum", ((Ptr) GXllfixmin), (Ptr) &GMllfixmin, (Ptr) GFllfixmin);}
	{ llrt_inisymb ((Ptr) 14, (Ptr) "minus-0-fixnum", ((Ptr) GXllminus0), (Ptr) &GMllminus0, (Ptr) GFllminus0);}
	GIa1 = (Ptr) ((UFix) 0xffff);
	GImoinsun = GIa1;
	GIa1 = (Ptr) 0;
	 GIa1 = llrt_float (GIa1);
	GIfzero = GIa1;
	GIa1 = (Ptr) 1;
	 GIa1 = llrt_float (GIa1);
	GIfltun = GIa1;
	GIa1 = (Ptr) ((UFix) 0xffff);
	 GIa1 = llrt_float (GIa1);
	GIfltmun = GIa1;
	GIa1 = (Ptr) 32767;
	 GIa1 = llrt_float (GIa1);
	GIfltimax = GIa1;
	GIa1 = (Ptr) ((UFix) 0x8001);
	 GIa1 = llrt_float (GIa1);
	GIfltimin = GIa1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_2(void) {	/* bangen */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = ((Ptr) GLnumber_3);
	{aRet = ((Ptr) GXgettype); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_3(void) {	/* ret_call_gettype_1 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = rA1;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	{aRet = ((Ptr) GLnumber_4); goto lRet;}
	GIa2 = GIa3;
	GIa3 = GInil;
	(--rSp)->Val = ((Ptr) GLnumber_5);
	{aRet = ((Ptr) GXgetfns); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_5(void) {	/* ret_call_getfns_2 */
   {	register Ptr aRet, rSp, rA1, rNil;
	rSp = GIsp; rA1 = GIa1; rNil = GInil;
	if (rA1 != rNil)	{aRet = ((Ptr) GLnumber_6); goto lRet;}
	GIa2 = rSp->Val;
	rA1 = GMsysgen;
	rA1 = rA1->Val;
	if (rA1 == rNil)	{aRet = ((Ptr) GLnumber_4); goto lRet;}
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	{aRet = ((Ptr) GLnumber_4); goto lRet;}
	(--rSp)->Val = ((Ptr) GLnumber_7);
	{aRet = ((Ptr) GXffsymbol); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLnumber_7(void) {	/* ret_call_ffsymbol_3 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp + (Fix) 1)->Val;
	GIa3 = GInil;
	(--rSp)->Val = ((Ptr) GLnumber_8);
	{aRet = ((Ptr) GXgetfns); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_8(void) {	/* ret_call_getfns_4 */
   {	register Ptr aRet;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLnumber_4); goto lRet;}
	{aRet = ((Ptr) GLnumber_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_6(void) {	/* bangencal */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	rSp += (Fix) 3;
	GIa4 = (rSp++)->Val;
	{aRet = ((Ptr) GXffuncall); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_4(void) {	/* bangerr */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXbangen1(void) {	/* bangen1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = (Ptr) 1;
	(--rSp)->Val = ((Ptr) GLnumber_9);
	{aRet = ((Ptr) GLnumber_2); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_9(void) {	/* ret_call_bangen_5 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = ((Ptr) GXerrgen); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_10(void) {	/* bangen2 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = (Ptr) 2;
	(--rSp)->Val = ((Ptr) GLnumber_11);
	{aRet = ((Ptr) GLnumber_2); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_11(void) {	/* ret_call_bangen_6 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIa4 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
	GIa3 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (GIa3, rA1);
	{aRet = ((Ptr) GXerrgen); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXnumberp(void) {	/* numberp */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if (rA1 < GIbfloat)	{ aRet = (rSp++)->Val; goto lRet;}
	if (llrt_floatp (rA1) != 0) 
	{ aRet = (rSp++)->Val; goto lRet;}
	GIa2 = GMnumberp;
	{aRet = ((Ptr) GLnumber_12); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_12(void) {	/* nbpgen */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = ((Ptr) GLnumber_13);
	{aRet = ((Ptr) GXgettype); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_13(void) {	/* ret_call_gettype_7 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	{aRet = ((Ptr) GLnumber_14); goto lRet;}
	GIa3 = GInil;
	(--GIsp)->Val = ((Ptr) GLnumber_15);
	{aRet = ((Ptr) GXgetfns); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_15(void) {	/* ret_call_getfns_8 */
   {	register Ptr aRet;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLnumber_14); goto lRet;}
	GIa4 = (Ptr) 1;
	{aRet = ((Ptr) GXffuncall); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_14(void) {	/* nbpn */
   {	register Ptr aRet;
	GIsp += (Fix) 1;
	{aRet = ((Ptr) GLnumber_16); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_16(void) {	/* nbpnil */
   {	register Ptr aRet;
	GIa1 = GInil;
l_nbpt:
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXintgerp(void) {	/* integerp */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (rA1 < GIbfloat)	{ aRet = (GIsp++)->Val; goto lRet;}
	if (llrt_floatp (rA1) != 0) 
	{aRet = ((Ptr) GLnumber_16); goto lRet;}
	GIa2 = GMintgerp;
	{aRet = ((Ptr) GLnumber_12); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXrationalp(void) {	/* rationalp */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (rA1 < GIbfloat)	{ aRet = (GIsp++)->Val; goto lRet;}
	if (llrt_floatp (rA1) != 0) 
	{aRet = ((Ptr) GLnumber_16); goto lRet;}
	GIa2 = GMrationalp;
	{aRet = ((Ptr) GLnumber_12); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllfloat(void) {	/* float */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if (rA1 >= GIbfloat)	goto l_llfloatf;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_float (rA1);
l_llfloatr:
	{aRet = (rSp++)->Val; goto lRet;}
l_llfloatf:
	if (llrt_floatp (rA1) != 0) 
	{ aRet = (rSp++)->Val; goto lRet;}
	GIa3 = GMllfloat;
	{aRet = ((Ptr) GXbangen1); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXlltrunc(void) {	/* truncate */
   {	register Ptr aRet;
	{aRet = ((Ptr) GLnumber_17); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_17(void) {	/* lltrunc1 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIa3 = GMlltrunc;
	if (rA1 < GIbfloat)	{ aRet = (rSp++)->Val; goto lRet;}
	if (llrt_floatp (rA1) == 0) 
	{aRet = ((Ptr) GXbangen1); goto lRet;}
	if (llrt_flt (rA1, GIfltimin) != 0) 	{aRet = ((Ptr) GXbangen1); goto lRet;}
	if (llrt_fgt (rA1, GIfltimax) != 0) 	{aRet = ((Ptr) GXbangen1); goto lRet;}
	rA1 = llrt_fix (rA1);
l_lltrcret:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXllfix(void) {	/* fix */
   {	register Ptr aRet;
	{aRet = ((Ptr) GLnumber_17); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgaadd1(void) {	/* 1+ */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	rA2 = rA1;
	if (rA1 >= GIbfloat)	goto l_gaadd2;
	{register int aux;
		aux = (int) ((Fix) (rA1) + (Fix) 1);
		rA1 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_gaadd3;}
	if (rA1 == (Ptr) ((UFix) 0x8000))	goto l_gaadd3;
	{aRet = (rSp++)->Val; goto lRet;}
l_gaadd2:
	if (llrt_floatp (rA1) == 0) 
	goto l_gaadd3;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_fadd (rA1, GIfltun);
	{aRet = (rSp++)->Val; goto lRet;}
l_gaadd3:
	rA1 = rA2;
	rA2 = (Ptr) 1;
	GIa3 = GMgaplus;
	{aRet = ((Ptr) GLnumber_10); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXgasub1(void) {	/* 1- */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	rA2 = rA1;
	if (rA1 >= GIbfloat)	goto l_gasub2;
	{register int aux;
		aux = (int) ((Fix) (rA1) - (Fix) 1);
		rA1 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_gasub3;}
	if (rA1 == (Ptr) ((UFix) 0x8000))	goto l_gasub3;
	{aRet = (rSp++)->Val; goto lRet;}
l_gasub2:
	if (llrt_floatp (rA1) == 0) 
	goto l_gasub3;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_fsub (rA1, GIfltun);
	{aRet = (rSp++)->Val; goto lRet;}
l_gasub3:
	rA1 = rA2;
	rA2 = (Ptr) 1;
	GIa3 = GMgadiff;
	{aRet = ((Ptr) GLnumber_10); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXgaabs(void) {	/* abs */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	rA2 = (Ptr) 0;
	if (rA1 >= GIbfloat)	goto l_gaabs2;
	if (rA1 == (Ptr) ((UFix) 0x8000))	goto l_gaabs3;
	if ((Fix) (rA1) >= (Fix) (rA2))	{ aRet = (rSp++)->Val; goto lRet;}
	{register int aux;
		aux = (int) ((Fix) (rA2) - (Fix) (rA1));
		rA2 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_gaabs3;}
	rA1 = rA2;
l_gaabsret:
	{aRet = (rSp++)->Val; goto lRet;}
l_gaabs2:
	if (llrt_floatp (rA1) == 0) 
	goto l_gaabs3;
	rA2 = GIfzero;
	if (llrt_fge (rA1, rA2) != 0) 	{ aRet = (rSp++)->Val; goto lRet;}
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA2 = llrt_fsub (rA2, rA1);
	rA1 = rA2;
	{aRet = (rSp++)->Val; goto lRet;}
l_gaabs3:
	GIa3 = GMgaabs;
	{aRet = ((Ptr) GXbangen1); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXgaplus(void) {	/* + */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (GIa4 != (Ptr) 2)	{aRet = ((Ptr) GLnumber_18); goto lRet;}
	GIa2 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = ((Ptr) GXgaplus2i); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXgaplus2i(void) {	/* gaplus2i */
   {	register Ptr aRet, rSp, rA1, rA2, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa3 = rA1;
	if (rA1 >= rBfloat)	goto l_gapplus0;
	if (rA2 >= rBfloat)	goto l_gapplus1;
	{register int aux;
		aux = (int) ((Fix) (rA1) + (Fix) (rA2));
		rA1 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_gapplus1;}
	if (rA1 == (Ptr) ((UFix) 0x8000))	goto l_gapplus1;
	{aRet = (rSp++)->Val; goto lRet;}
l_gapplus0:
	if (llrt_floatp (rA1) == 0) 
	goto l_gapplus1;
	if (llrt_floatp (rA2) == 0) 
	goto l_gapplus1;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_fadd (rA1, rA2);
	{aRet = (rSp++)->Val; goto lRet;}
l_gapplus1:
	(--rSp)->Val = GIa3;
	(--rSp)->Val = rA2;
	{aRet = ((Ptr) GLnumber_18); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLnumber_18(void) {	/* gapplus */
   {	register Ptr aRet, rSp, rA1, rA4;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
	if (rA4 == (Ptr) 0)	goto l_gaprt0;
	if (rA4 != (Ptr) 1)	goto l_gaplus0;
	rA1 = (rSp++)->Val;
	if (rA1 < GIbfloat)	{ aRet = (rSp++)->Val; goto lRet;}
	if (llrt_floatp (rA1) != 0) 
	{ aRet = (rSp++)->Val; goto lRet;}
	GIa2 = (Ptr) 0;
	GIa3 = GMgaplus;
	{aRet = ((Ptr) GLnumber_10); goto lRet;}
l_gaprt0:
	rA1 = rA4;
l_gaprret:
	{aRet = (rSp++)->Val; goto lRet;}
l_gaplus0:
	(--rSp)->Val = rA4;
	rA1 = (rSp + (Fix) (rA4))->Val;
	{aRet = ((Ptr) GLnumber_19); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLnumber_19(void) {	/* gaplus1 */
   {	register Ptr aRet, rSp, rA1, rA2, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBfloat = GIbfloat;
	if (rA1 < rBfloat)	goto l_gaplfx1;
	if (llrt_floatp (rA1) != 0) 
	goto l_gaplfl3;
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	goto l_gaplgn0;
		else rA4 = (Ptr) 0;}
l_gaplus2:
	rA4 = (rSp++)->Val;
	rSp += (Fix) (rA4);
	{aRet = (rSp++)->Val; goto lRet;}
l_gaplfx0:
	rA2 = (rSp + (Fix) (rA4))->Val;
	if (llrt_floatp (rA2) != 0) 
	goto l_gaplfl0;
	if (rA2 >= rBfloat)	goto l_gaplgn1;
	{register int aux;
		aux = (int) ((Fix) (rA2) + (Fix) (rA1));
		rA2 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_gaplgn0;}
	if (rA2 == (Ptr) ((UFix) 0x8000))	goto l_gaplgn0;
	rA1 = rA2;
l_gaplfx1:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	goto l_gaplfx0;
		else rA4 = (Ptr) 0;}
	{rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_gaplfl0:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_float (rA1);
	goto l_gaplfl2;
l_gaplfl1:
	rA2 = (rSp + (Fix) (rA4))->Val;
	if (llrt_floatp (rA2) != 0) 
	goto l_gaplfl2;
	if (rA2 >= rBfloat)	goto l_gaplgn1;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA2 = llrt_float (rA2);
l_gaplfl2:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA2 = llrt_fadd (rA2, rA1);
	rA1 = rA2;
l_gaplfl3:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	goto l_gaplfl1;
		else rA4 = (Ptr) 0;}
	{rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_gaplgn0:
	rA2 = (rSp + (Fix) (rA4))->Val;
l_gaplgn1:
	(--rSp)->Val = rA4;
	GIa3 = GMgaplus;
	(--rSp)->Val = ((Ptr) GLnumber_20);
	{aRet = ((Ptr) GLnumber_10); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLnumber_20(void) {	/* ret_call_bangen2_9 */
   {	register Ptr aRet;
	GIa4 = (GIsp++)->Val;
	{aRet = ((Ptr) GLnumber_19); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgatimes(void) {	/* * */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (GIa4 != (Ptr) 2)	{aRet = ((Ptr) GLnumber_21); goto lRet;}
	GIa2 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = ((Ptr) GXgatim2i); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXgatim2i(void) {	/* gatim2i */
   {	register Ptr aRet, rSp, rA1, rA2, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa3 = rA1;
	if (rA1 >= rBfloat)	goto l_gattimes0;
	if (rA2 >= rBfloat)	goto l_gattimes1;
	{register int aux;
		aux = (int) ((Fix) (rA1) * (Fix) (rA2));
		rA1 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_gattimes1;}
	if (rA1 == (Ptr) ((UFix) 0x8000))	goto l_gattimes1;
	{aRet = (rSp++)->Val; goto lRet;}
l_gattimes0:
	if (llrt_floatp (rA1) == 0) 
	goto l_gattimes1;
	if (llrt_floatp (rA2) == 0) 
	goto l_gattimes1;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_fmul (rA1, rA2);
	{aRet = (rSp++)->Val; goto lRet;}
l_gattimes1:
	(--rSp)->Val = GIa3;
	(--rSp)->Val = rA2;
	{aRet = ((Ptr) GLnumber_21); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLnumber_21(void) {	/* gattimes */
   {	register Ptr aRet, rSp, rA1, rA4;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
	if (rA4 == (Ptr) 0)	goto l_gatrt0;
	if (rA4 != (Ptr) 1)	goto l_gatime0;
	rA1 = (rSp++)->Val;
	if (rA1 < GIbfloat)	{ aRet = (rSp++)->Val; goto lRet;}
	if (llrt_floatp (rA1) != 0) 
	{ aRet = (rSp++)->Val; goto lRet;}
	GIa2 = (Ptr) 1;
	GIa3 = GMgatimes;
	{aRet = ((Ptr) GLnumber_10); goto lRet;}
l_gatrt0:
	rA1 = (Ptr) 1;
	{aRet = (rSp++)->Val; goto lRet;}
l_gatime0:
	(--rSp)->Val = rA4;
	rA1 = (rSp + (Fix) (rA4))->Val;
	{aRet = ((Ptr) GLnumber_22); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLnumber_22(void) {	/* gatime1 */
   {	register Ptr aRet, rSp, rA1, rA2, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBfloat = GIbfloat;
	if (rA1 < rBfloat)	goto l_gatifx1;
	if (llrt_floatp (rA1) != 0) 
	goto l_gatifl3;
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	goto l_gatign0;
		else rA4 = (Ptr) 0;}
l_gatime2:
	rA4 = (rSp++)->Val;
	rSp += (Fix) (rA4);
	{aRet = (rSp++)->Val; goto lRet;}
l_gatifx0:
	rA2 = (rSp + (Fix) (rA4))->Val;
	if (llrt_floatp (rA2) != 0) 
	goto l_gatifl0;
	if (rA2 >= rBfloat)	goto l_gatign1;
	{register int aux;
		aux = (int) ((Fix) (rA2) * (Fix) (rA1));
		rA2 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_gatign0;}
	if (rA2 == (Ptr) ((UFix) 0x8000))	goto l_gatign0;
	rA1 = rA2;
l_gatifx1:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	goto l_gatifx0;
		else rA4 = (Ptr) 0;}
	{rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_gatifl0:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_float (rA1);
	goto l_gatifl2;
l_gatifl1:
	rA2 = (rSp + (Fix) (rA4))->Val;
	if (llrt_floatp (rA2) != 0) 
	goto l_gatifl2;
	if (rA2 >= rBfloat)	goto l_gatign1;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA2 = llrt_float (rA2);
l_gatifl2:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA2 = llrt_fmul (rA2, rA1);
	rA1 = rA2;
l_gatifl3:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	goto l_gatifl1;
		else rA4 = (Ptr) 0;}
	{rA4 = (rSp++)->Val; rSp += (Fix) rA4; aRet = (rSp++)->Val; goto lRet;}
l_gatign0:
	rA2 = (rSp + (Fix) (rA4))->Val;
l_gatign1:
	(--rSp)->Val = rA4;
	GIa3 = GMgatimes;
	(--rSp)->Val = ((Ptr) GLnumber_23);
	{aRet = ((Ptr) GLnumber_10); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLnumber_23(void) {	/* ret_call_bangen2_10 */
   {	register Ptr aRet;
	GIa4 = (GIsp++)->Val;
	{aRet = ((Ptr) GLnumber_22); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgadinv(void) {	/* 0- */
   {	register Ptr aRet;
	GIa2 = GIa1;
	{aRet = ((Ptr) GLnumber_24); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgadiff(void) {	/* - */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	if (rA4 == (Ptr) 2)	{aRet = ((Ptr) GLnumber_25); goto lRet;}
	if (rA4 == (Ptr) 1)	goto l_gadiff1;
	if (rA4 != (Ptr) 0)	{aRet = ((Ptr) GLnumber_26); goto lRet;}
	GIa1 = rA4;
	{aRet = (rSp++)->Val; goto lRet;}
l_gadiff1:
	GIa2 = (rSp++)->Val;
	{aRet = ((Ptr) GLnumber_24); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_24(void) {	/* gadneg */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	rA1 = (Ptr) 0;
	if (rA2 < GIbfloat)	goto l_gadneg2;
	if (llrt_floatp (rA2) != 0) 
	goto l_gadneg3;
l_gadneg1:
	GIa3 = GMgadinv;
	rA1 = rA2;
	{aRet = ((Ptr) GXbangen1); goto lRet;}
l_gadneg2:
	{register int aux;
		aux = (int) ((Fix) (rA1) - (Fix) (rA2));
		rA1 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_gadneg1;}
	if (rA1 == (Ptr) ((UFix) 0x8000))	goto l_gadneg1;
	{aRet = (rSp++)->Val; goto lRet;}
l_gadneg3:
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_float (rA1);
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_fsub (rA1, rA2);
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLnumber_25(void) {	/* gadiff2 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	{aRet = ((Ptr) GLnumber_27); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_27(void) {	/* gadiffp */
   {	register Ptr aRet;
	GIa2 = GIa1;
	GIa1 = (GIsp++)->Val;
	{aRet = ((Ptr) GXgadiff2i); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgadiff2i(void) {	/* gadiff2i */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBfloat = GIbfloat;
	rA3 = rA1;
	if (rA1 < rBfloat)	goto l_gadiffp1;
	if (llrt_floatp (rA1) != 0) 
	goto l_gadiffp3;
l_gadiffp0:
	rA1 = rA3;
	rA3 = GMgadiff;
	{aRet = ((Ptr) GLnumber_10); goto lRet;}
l_gadiffp1:
	if (rA2 >= rBfloat)	goto l_gadiffp2;
	{register int aux;
		aux = (int) ((Fix) (rA1) - (Fix) (rA2));
		rA1 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_gadiffp0;}
	if (rA1 == (Ptr) ((UFix) 0x8000))	goto l_gadiffp0;
	{aRet = (rSp++)->Val; goto lRet;}
l_gadiffp2:
	if (llrt_floatp (rA2) == 0) 
	goto l_gadiffp0;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_float (rA1);
	goto l_gadiffp5;
l_gadiffp3:
	if (rA2 >= rBfloat)	goto l_gadiffp4;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA2 = llrt_float (rA2);
	goto l_gadiffp5;
l_gadiffp4:
	if (llrt_floatp (rA2) == 0) 
	goto l_gadiffp0;
l_gadiffp5:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_fsub (rA1, rA2);
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLnumber_26(void) {	/* gadiff3 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	GIa1 = (rSp + (Fix) (rA4))->Val;
	(rSp + (Fix) (rA4))->Val = ((Ptr) GLnumber_27);
	(--rSp)->Val = rA4;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
	{aRet = ((Ptr) GLnumber_19); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

extern Ptr GXgadrev(void) {	/* 1/ */
   {	register Ptr aRet;
	GIa2 = GIa1;
	{aRet = ((Ptr) GLnumber_28); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgadiv(void) {	/* // */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (rA4 == (Ptr) 2)	{aRet = ((Ptr) GLnumber_29); goto lRet;}
	if (rA4 == (Ptr) 1)	{aRet = ((Ptr) GLnumber_30); goto lRet;}
	if (rA4 != (Ptr) 0)	{aRet = ((Ptr) GLnumber_31); goto lRet;}
	{aRet = ((Ptr) GLnumber_32); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_32(void) {	/* garevret */
   {	register Ptr aRet;
	GIa1 = (Ptr) 1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_30(void) {	/* gadiv1 */
   {	register Ptr aRet;
	GIa2 = (GIsp++)->Val;
	{aRet = ((Ptr) GLnumber_28); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_28(void) {	/* garev */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	if (rA2 == (Ptr) 1)	{aRet = ((Ptr) GLnumber_32); goto lRet;}
	if (rA2 < GIbfloat)	goto l_garev1;
	if (llrt_floatp (rA2) != 0) 
	goto l_garev2;
l_garev1:
	GIa3 = GMgadrev;
	rA1 = rA2;
	{aRet = ((Ptr) GXbangen1); goto lRet;}
l_garev2:
	rA1 = (Ptr) 1;
	GIa1 = rA1; rA1 = llrt_float (rA1);
	GIa1 = rA1; rA1 = llrt_fdiv (rA1, rA2);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLnumber_29(void) {	/* gadiv2 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	{aRet = ((Ptr) GLnumber_33); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_33(void) {	/* gadivt */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBfloat = GIbfloat;
	rA2 = rA1;
	rA1 = (rSp++)->Val;
	rA3 = rA1;
	if (rA1 < rBfloat)	goto l_gadivt1;
	if (llrt_floatp (rA1) != 0) 
	goto l_gadivt3;
l_gadivt0:
	rA1 = rA3;
	rA3 = GMgadiv;
	{aRet = ((Ptr) GLnumber_10); goto lRet;}
l_gadivt1:
	if (rA2 >= rBfloat)	goto l_gadivt2;
	if (rA2 == (Ptr) 0)	goto l_gadivt0;
	if (rA1 != (Ptr) ((UFix) 0x8000))	goto l_gadivt11;
	if (rA2 == (Ptr) ((UFix) 0xffff))	goto l_gadivt0;
l_gadivt11:
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) % (Fix) (rA2)));
	if (rA1 != (Ptr) 0)	goto l_gadivt0;
	rA1 = rA3;
	{register int aux;
		aux = (int) ((Fix) (rA1) / (Fix) (rA2));
		rA1 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_gadivt0;}
	if (rA1 == (Ptr) ((UFix) 0x8000))	goto l_gadivt0;
	{aRet = (rSp++)->Val; goto lRet;}
l_gadivt2:
	if (llrt_floatp (rA2) == 0) 
	goto l_gadivt0;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_float (rA1);
	goto l_gadivt5;
l_gadivt3:
	if (rA2 >= rBfloat)	goto l_gadivt4;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA2 = llrt_float (rA2);
	goto l_gadivt5;
l_gadivt4:
	if (llrt_floatp (rA2) == 0) 
	goto l_gadivt0;
l_gadivt5:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_fdiv (rA1, rA2);
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLnumber_31(void) {	/* gadiv3 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	GIa1 = (rSp + (Fix) (rA4))->Val;
	(rSp + (Fix) (rA4))->Val = ((Ptr) GLnumber_33);
	(--rSp)->Val = rA4;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
	{aRet = ((Ptr) GLnumber_22); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

extern Ptr GXgaquomod(void) {	/* quo */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
	rA3 = GMgaquomod;
	if (llrt_floatp (rA1) != 0) 
	{aRet = ((Ptr) GLnumber_10); goto lRet;}
	if (llrt_floatp (rA2) != 0) 
	{aRet = ((Ptr) GLnumber_10); goto lRet;}
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLnumber_10); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLnumber_10); goto lRet;}
	if (rA2 == (Ptr) 0)	{aRet = ((Ptr) GLnumber_10); goto lRet;}
	if (rA1 != (Ptr) ((UFix) 0x8000))	goto l_gaquomod1;
	if (rA2 == (Ptr) ((UFix) 0xffff))	{aRet = ((Ptr) GLnumber_10); goto lRet;}
l_gaquomod1:
	rA3 = rA1;
	{register int aux;
		aux = (int) ((Fix) (rA1) / (Fix) (rA2));
		rA1 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_gaquomodg;}
	if (rA1 == (Ptr) ((UFix) 0x8000))	goto l_gaquomodg;
	rA4 = rA3;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) % (Fix) (rA2)));
	if ((Fix) (rA4) >= (Fix) 0)	goto l_gamodret;
	if ((Fix) (rA1) > (Fix) 0)	goto l_gaquomod3;
	if ((Fix) (rA1) < (Fix) 0)	goto l_gaquomod2;
	if ((Fix) (rA2) <= (Fix) 0)	goto l_gaquomod3;
l_gaquomod2:
	{register int aux;
		aux = (int) ((Fix) (rA1) - (Fix) (1));
		rA1 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_gaquomodg;}
	goto l_gaquoret;
l_gaquomod3:
	{register int aux;
		aux = (int) ((Fix) (rA1) + (Fix) (1));
		rA1 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_gaquomodg;}
l_gaquoret:
	if ((Fix) (rA2) >= (Fix) 0)	goto l_gamodr3;
	rA2 = (Ptr) ((UFix) ((Fix) (0) - (Fix) (rA2)));
l_gamodr3:
	{register int aux;
		aux = (int) ((Fix) (rA4) + (Fix) (rA2));
		rA4 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_gaquomodg;}
l_gamodret:
	rA2 = GMexmod;
	rA2->Val = rA4;
	{aRet = (rSp++)->Val; goto lRet;}
l_gaquomodg:
	rA1 = rA3;
	rA3 = GMgaquomod;
	{aRet = ((Ptr) GLnumber_10); goto lRet;}
l_gaquo2:
	if (llrt_floatp (rA2) != 0) 
	goto l_gaquo4;
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLnumber_10); goto lRet;}
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_float (rA2);
	goto l_gaquo4;
l_gaquo3:
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLnumber_10); goto lRet;}
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_float (rA1);
l_gaquo4:
	rA3 = rA1;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_fdiv (rA1, rA2);
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXgamod(void) {	/* modulo */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLnumber_34);
	{aRet = ((Ptr) GXgaquomod); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_34(void) {	/* ret_call_gaquomod_11 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	rA1 = GMexmod;
	rA1 = rA1->Val;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLnumber_35(void) {	/* gacom */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	if ((Fix) (rA4) >= (Fix) 2)	goto l_gacom0;
	GIa1 = (Ptr) 2;
	GIa2 = GIcpfnt;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_gacom0:
	(--rSp)->Val = rA4;
	GIa1 = (rSp + (Fix) (rA4))->Val;
	{aRet = ((Ptr) GLnumber_36); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_36(void) {	/* gacom1 */
   {	register Ptr aRet, rA1, rA4;
	rA1 = GIa1; rA4 = GIa4;
	if (rA1 < GIbfloat)	{aRet = ((Ptr) GLnumber_37); goto lRet;}
	if (llrt_floatp (rA1) != 0) 
	{aRet = ((Ptr) GLnumber_38); goto lRet;}
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	{aRet = ((Ptr) GLnumber_39); goto lRet;}
		else rA4 = (Ptr) 0;}
	{aRet = ((Ptr) GLnumber_40); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLnumber_40(void) {	/* gacom2 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	rA4 = (rSp++)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	rSp += (Fix) (rA4);
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLnumber_41(void) {	/* gacom3 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = GInil;
	GIa4 = (rSp++)->Val;
	rSp += (Fix) (GIa4);
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_42(void) {	/* gacomfx0 */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	rA2 = (GIsp + (Fix) (GIa4))->Val;
	if (llrt_floatp (rA2) != 0) 
	{aRet = ((Ptr) GLnumber_43); goto lRet;}
	if (rA2 >= GIbfloat)	{aRet = ((Ptr) GLnumber_44); goto lRet;}
	if (rA1 == rA2)	goto l_gacomfx2;
	if ((Fix) (rA1) > (Fix) (rA2))	goto l_gacomfx3;
	rA1 = (Ptr) 4;
	goto l_gacomfx4;
l_gacomfx2:
	rA1 = (Ptr) 2;
	goto l_gacomfx4;
l_gacomfx3:
	rA1 = (Ptr) 1;
l_gacomfx4:
	rA1 = (Ptr) ((UFix) (rA1) & (UFix) (GIa3));
	if (rA1 == (Ptr) 0)	{aRet = ((Ptr) GLnumber_41); goto lRet;}
	rA1 = rA2;
	{aRet = ((Ptr) GLnumber_37); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLnumber_37(void) {	/* gacomfx1 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	{aRet = ((Ptr) GLnumber_42); goto lRet;}
		else rA4 = (Ptr) 0;}
	{aRet = ((Ptr) GLnumber_40); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLnumber_43(void) {	/* gacomfl0 */
   {	register Ptr aRet;
	 GIa1 = llrt_float (GIa1);
	{aRet = ((Ptr) GLnumber_45); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_46(void) {	/* gacomfl1 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	rA2 = (GIsp + (Fix) (GIa4))->Val;
	if (llrt_floatp (rA2) != 0) 
	{aRet = ((Ptr) GLnumber_45); goto lRet;}
	if (rA2 >= GIbfloat)	{aRet = ((Ptr) GLnumber_44); goto lRet;}
	GIa2 = rA2; rA2 = llrt_float (rA2);
	{aRet = ((Ptr) GLnumber_45); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLnumber_45(void) {	/* gacomfl2 */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	if (llrt_feq (rA1, rA2) != 0) 	goto l_gacomfl4;
	if (llrt_fgt (rA1, rA2) != 0) 	goto l_gacomfl5;
	rA1 = (Ptr) 4;
	goto l_gacomfl6;
l_gacomfl4:
	rA1 = (Ptr) 2;
	goto l_gacomfl6;
l_gacomfl5:
	rA1 = (Ptr) 1;
l_gacomfl6:
	rA1 = (Ptr) ((UFix) (rA1) & (UFix) (GIa3));
	if (rA1 == (Ptr) 0)	{aRet = ((Ptr) GLnumber_41); goto lRet;}
	rA1 = rA2;
	{aRet = ((Ptr) GLnumber_38); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLnumber_38(void) {	/* gacomfl3 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	{aRet = ((Ptr) GLnumber_46); goto lRet;}
		else rA4 = (Ptr) 0;}
	{aRet = ((Ptr) GLnumber_40); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLnumber_39(void) {	/* gacomgn0 */
   {	register Ptr aRet;
	GIa2 = (GIsp + (Fix) (GIa4))->Val;
	{aRet = ((Ptr) GLnumber_44); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_44(void) {	/* gacomgn1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa4;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = GIa2;
	GIa3 = GMgacomp;
	(--rSp)->Val = ((Ptr) GLnumber_47);
	{aRet = ((Ptr) GLnumber_48); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_47(void) {	/* ret_call_bangensp2_12 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIa2 = (rSp++)->Val;
	GIa3 = (rSp++)->Val;
	GIa4 = (rSp++)->Val;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLnumber_41); goto lRet;}
	if (rA1 == (Ptr) 0)	goto l_gacomgn2;
	if (rA1 == (Ptr) 1)	goto l_gacomgn3;
	if (rA1 != GImoinsun)	{aRet = ((Ptr) GLnumber_41); goto lRet;}
	rA1 = (Ptr) 4;
	goto l_gacomgn4;
l_gacomgn2:
	rA1 = (Ptr) 2;
	goto l_gacomgn4;
l_gacomgn3:
	rA1 = (Ptr) 1;
l_gacomgn4:
	rA1 = (Ptr) ((UFix) (rA1) & (UFix) (GIa3));
	if (rA1 == (Ptr) 0)	{aRet = ((Ptr) GLnumber_41); goto lRet;}
	rA1 = GIa2;
	{aRet = ((Ptr) GLnumber_36); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLnumber_48(void) {	/* bangensp2 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = ((Ptr) GXpopj0);
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = (Ptr) 2;
	(--rSp)->Val = ((Ptr) GLnumber_49);
	{aRet = ((Ptr) GLnumber_2); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_49(void) {	/* ret_call_bangen_13 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp + (Fix) 2)->Val;
	GIa3 = GIcpfnt;
	(rSp + (Fix) 3)->Val = ((Ptr) GLnumber_50);
	(--rSp)->Val = ((Ptr) GLnumber_51);
	{aRet = ((Ptr) GLnumber_2); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_51(void) {	/* ret_call_bangen_14 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIa4 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
	GIa3 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (GIa3, rA1);
	{aRet = ((Ptr) GXerrgen); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLnumber_50(void) {	/* tworet */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	GIa3 = (rSp++)->Val;
	GIa4 = (rSp++)->Val;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLnumber_41); goto lRet;}
	GIa1 = GIa2;
	{aRet = ((Ptr) GLnumber_36); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXgacomp(void) {	/* <?> */
   {	register Ptr aRet, rSp, rA1, rA2, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa3 = GMgacomp;
	if (rA1 < rBfloat)	goto l_gacomp5;
	if (llrt_floatp (rA1) == 0) 
	{aRet = ((Ptr) GLnumber_10); goto lRet;}
	if (llrt_floatp (rA2) != 0) 
	goto l_gacomp1;
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLnumber_10); goto lRet;}
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA2 = llrt_float (rA2);
l_gacomp1:
	if (llrt_feq (rA1, rA2) != 0) 	goto l_gacomp3;
	if (llrt_fgt (rA1, rA2) != 0) 	goto l_gacomp4;
l_gacomp2:
	rA1 = GImoinsun;
	{aRet = (rSp++)->Val; goto lRet;}
l_gacomp3:
	rA1 = (Ptr) 0;
	{aRet = (rSp++)->Val; goto lRet;}
l_gacomp4:
	rA1 = (Ptr) 1;
	{aRet = (rSp++)->Val; goto lRet;}
l_gacomp5:
	if (rA2 < rBfloat)	goto l_gacomp6;
	if (llrt_floatp (rA2) == 0) 
	{aRet = ((Ptr) GLnumber_10); goto lRet;}
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_float (rA1);
	goto l_gacomp1;
l_gacomp6:
	if (rA1 == rA2)	goto l_gacomp3;
	if ((Fix) (rA1) > (Fix) (rA2))	goto l_gacomp4;
	goto l_gacomp2;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXzerop(void) {	/* zerop */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIcpfnt = GMzerop;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = (Ptr) 0;
	GIa4 = (Ptr) 2;
	GIa3 = (Ptr) 2;
	{aRet = ((Ptr) GLnumber_35); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXminusp(void) {	/* minusp */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIcpfnt = GMminusp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = (Ptr) 0;
	GIa4 = (Ptr) 2;
	GIa3 = (Ptr) 4;
	{aRet = ((Ptr) GLnumber_35); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXplusp(void) {	/* plusp */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIcpfnt = GMplusp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = (Ptr) 0;
	GIa4 = (Ptr) 2;
	GIa3 = (Ptr) 3;
	{aRet = ((Ptr) GLnumber_35); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXgaeqn(void) {	/* gaeqn */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = ((Ptr) GLnumber_52);
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIa2;
	GIcpfnt = GMgaeqen;
	GIa4 = (Ptr) 2;
	GIa3 = (Ptr) 2;
	{aRet = ((Ptr) GLnumber_35); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_52(void) {	/* gaeqnret */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa3 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXgaeqen(void) {	/* = */
   {	register Ptr aRet, rSp, rA1, rA2, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	if (GIa4 != (Ptr) 2)	goto l_gaeqen2;
	rA2 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	if (rA1 >= rBfloat)	goto l_gaeqen1;
	if (rA2 >= rBfloat)	goto l_gaeqen1;
	if (rA1 == rA2)	{ aRet = (rSp++)->Val; goto lRet;}
	rA1 = GInil;
l_gaeqqn0:
	{aRet = (rSp++)->Val; goto lRet;}
l_gaeqen1:
	(--rSp)->Val = rA1;
	(--rSp)->Val = rA2;
l_gaeqen2:
	GIcpfnt = GMgaeqen;
	GIa3 = (Ptr) 2;
	{aRet = ((Ptr) GLnumber_35); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXganeqn(void) {	/* <> */
   {	register Ptr aRet, rSp, rA1, rA2, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	if (rA1 >= rBfloat)	goto l_ganen1;
	if (rA2 >= rBfloat)	goto l_ganen1;
	if (rA1 != rA2)	{ aRet = (rSp++)->Val; goto lRet;}
	rA1 = GInil;
l_ganen0:
	{aRet = (rSp++)->Val; goto lRet;}
l_ganen1:
	(--rSp)->Val = rA1;
	(--rSp)->Val = rA2;
	GIcpfnt = GMganeqn;
	GIa3 = (Ptr) 5;
	GIa4 = (Ptr) 2;
	{aRet = ((Ptr) GLnumber_35); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXgagt(void) {	/* > */
   {	register Ptr aRet;
	GIcpfnt = GMgagt;
	GIa3 = (Ptr) 1;
	{aRet = ((Ptr) GLnumber_35); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgage(void) {	/* >= */
   {	register Ptr aRet;
	GIcpfnt = GMgage;
	GIa3 = (Ptr) 3;
	{aRet = ((Ptr) GLnumber_35); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgalt(void) {	/* < */
   {	register Ptr aRet;
	GIcpfnt = GMgalt;
	GIa3 = (Ptr) 4;
	{aRet = ((Ptr) GLnumber_35); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgale(void) {	/* <= */
   {	register Ptr aRet;
	GIcpfnt = GMgale;
	GIa3 = (Ptr) 6;
	{aRet = ((Ptr) GLnumber_35); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXmin(void) {	/* min */
   {	register Ptr aRet;
	if (GIa4 == (Ptr) 0)	{aRet = ((Ptr) GLnumber_53); goto lRet;}
	GIa1 = (GIsp++)->Val;
	{aRet = ((Ptr) GLnumber_54); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_55(void) {	/* min1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = rSp->Val;
	(--rSp)->Val = GIa4;
	(--rSp)->Val = ((Ptr) GLnumber_56);
	{aRet = ((Ptr) GLnumber_57); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_56(void) {	/* ret_call_mintwo_15 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	if (GIa1 != GInil)	goto l_min2;
	GIa1 = (rSp++)->Val;
	{aRet = ((Ptr) GLnumber_54); goto lRet;}
l_min2:
	rSp += (Fix) 1;
	{aRet = ((Ptr) GLnumber_54); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_54(void) {	/* min3 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	{aRet = ((Ptr) GLnumber_55); goto lRet;}
		else rA4 = (Ptr) 0;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLnumber_53(void) {	/* minerr */
   {	register Ptr aRet;
	GIa1 = (Ptr) 1;
	GIa2 = GMmin;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_57(void) {	/* mintwo */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIa2;
	GIa4 = (Ptr) 2;
	{aRet = ((Ptr) GXgalt); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXmax(void) {	/* max */
   {	register Ptr aRet;
	if (GIa4 == (Ptr) 0)	{aRet = ((Ptr) GLnumber_58); goto lRet;}
	GIa1 = (GIsp++)->Val;
	{aRet = ((Ptr) GLnumber_59); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_60(void) {	/* max1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = rSp->Val;
	(--rSp)->Val = GIa4;
	(--rSp)->Val = ((Ptr) GLnumber_61);
	{aRet = ((Ptr) GLnumber_62); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_61(void) {	/* ret_call_maxtwo_16 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	if (GIa1 != GInil)	goto l_max2;
	GIa1 = (rSp++)->Val;
	{aRet = ((Ptr) GLnumber_59); goto lRet;}
l_max2:
	rSp += (Fix) 1;
	{aRet = ((Ptr) GLnumber_59); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLnumber_59(void) {	/* max3 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	{aRet = ((Ptr) GLnumber_60); goto lRet;}
		else rA4 = (Ptr) 0;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLnumber_58(void) {	/* maxerr */
   {	register Ptr aRet;
	GIa1 = (Ptr) 1;
	GIa2 = GMmax;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLnumber_62(void) {	/* maxtwo */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIa2;
	GIa4 = (Ptr) 2;
	{aRet = ((Ptr) GXgagt); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXllsin(void) {	/* sin */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa3 = GMllsin;
	if (llrt_floatp (rA1) != 0) 
	goto l_sin2;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GXbangen1); goto lRet;}
	GIa1 = rA1; rA1 = llrt_float (rA1);
l_sin2:
	GIa1 = rA1; rA1 = llrt_sin(rA1);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllcos(void) {	/* cos */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa3 = GMllcos;
	if (llrt_floatp (rA1) != 0) 
	goto l_cos2;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GXbangen1); goto lRet;}
	GIa1 = rA1; rA1 = llrt_float (rA1);
l_cos2:
	GIa1 = rA1; rA1 = llrt_cos(rA1);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllasin(void) {	/* asin */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa3 = GMllasin;
	if (llrt_floatp (rA1) != 0) 
	goto l_asin2;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GXbangen1); goto lRet;}
	if ((Fix) (rA1) > (Fix) 1)	{aRet = ((Ptr) GXbangen1); goto lRet;}
	if ((Fix) (rA1) < (Fix) (GImoinsun))	{aRet = ((Ptr) GXbangen1); goto lRet;}
	GIa1 = rA1; rA1 = llrt_float (rA1);
	goto l_asin3;
l_asin2:
	if (llrt_fgt (rA1, GIfltun) != 0) 	{aRet = ((Ptr) GXbangen1); goto lRet;}
	if (llrt_flt (rA1, GIfltmun) != 0) 	{aRet = ((Ptr) GXbangen1); goto lRet;}
l_asin3:
	GIa1 = rA1; rA1 = llrt_asin(rA1);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllacos(void) {	/* acos */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa3 = GMllacos;
	if (llrt_floatp (rA1) != 0) 
	goto l_acos2;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GXbangen1); goto lRet;}
	if ((Fix) (rA1) > (Fix) 1)	{aRet = ((Ptr) GXbangen1); goto lRet;}
	if ((Fix) (rA1) < (Fix) (GImoinsun))	{aRet = ((Ptr) GXbangen1); goto lRet;}
	GIa1 = rA1; rA1 = llrt_float (rA1);
	goto l_acos3;
l_acos2:
	if (llrt_fgt (rA1, GIfltun) != 0) 	{aRet = ((Ptr) GXbangen1); goto lRet;}
	if (llrt_flt (rA1, GIfltmun) != 0) 	{aRet = ((Ptr) GXbangen1); goto lRet;}
l_acos3:
	GIa1 = rA1; rA1 = llrt_acos(rA1);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllatan(void) {	/* atan */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa3 = GMllatan;
	if (llrt_floatp (rA1) != 0) 
	goto l_atan2;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GXbangen1); goto lRet;}
	GIa1 = rA1; rA1 = llrt_float (rA1);
l_atan2:
	GIa1 = rA1; rA1 = llrt_atan(rA1);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllexp(void) {	/* exp */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa3 = GMllexp;
	if (llrt_floatp (rA1) != 0) 
	goto l_exp2;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GXbangen1); goto lRet;}
	GIa1 = rA1; rA1 = llrt_float (rA1);
l_exp2:
	GIa1 = rA1; rA1 = llrt_exp(rA1);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXlllog(void) {	/* log */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa3 = GMlllog;
	if (llrt_floatp (rA1) != 0) 
	goto l_log2;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GXbangen1); goto lRet;}
	if ((Fix) (rA1) <= (Fix) 0)	{aRet = ((Ptr) GXbangen1); goto lRet;}
	GIa1 = rA1; rA1 = llrt_float (rA1);
	goto l_log3;
l_log2:
	if (llrt_fle (rA1, GIfzero) != 0) 	{aRet = ((Ptr) GXbangen1); goto lRet;}
l_log3:
	GIa1 = rA1; rA1 = llrt_log(rA1);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXlllog10(void) {	/* log10 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa3 = GMlllog10;
	if (llrt_floatp (rA1) != 0) 
	goto l_log102;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GXbangen1); goto lRet;}
	if ((Fix) (rA1) <= (Fix) 0)	{aRet = ((Ptr) GXbangen1); goto lRet;}
	GIa1 = rA1; rA1 = llrt_float (rA1);
	goto l_log103;
l_log102:
	if (llrt_fle (rA1, GIfzero) != 0) 	{aRet = ((Ptr) GXbangen1); goto lRet;}
l_log103:
	GIa1 = rA1; rA1 = llrt_log10(rA1);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllpower(void) {	/* power */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa3 = GMllpower;
	if (llrt_floatp (rA1) != 0) 
	goto l_power2;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLnumber_10); goto lRet;}
	GIa1 = rA1; GIa2 = rA2; rA1 = llrt_float (rA1);
l_power2:
	if (llrt_floatp (rA2) != 0) 
	goto l_power3;
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLnumber_10); goto lRet;}
	GIa1 = rA1; GIa2 = rA2; rA2 = llrt_float (rA2);
l_power3:
	GIa1 = rA1; GIa2 = rA2; rA1 = llrt_pow(rA1, rA2);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXllsqrt(void) {	/* sqrt */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa3 = GMllsqrt;
	if (llrt_floatp (rA1) != 0) 
	goto l_sqrt2;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GXbangen1); goto lRet;}
	if ((Fix) (rA1) < (Fix) 0)	{aRet = ((Ptr) GXbangen1); goto lRet;}
	GIa1 = rA1; rA1 = llrt_float (rA1);
	goto l_sqrt3;
l_sqrt2:
	if (llrt_flt (rA1, GIfzero) != 0) 	{aRet = ((Ptr) GXbangen1); goto lRet;}
l_sqrt3:
	GIa1 = rA1; rA1 = llrt_sqrt(rA1);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllfixmax(void) {	/* most-positive-fixnum */
   {	register Ptr aRet;
	GIa1 = (Ptr) 32767;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllfixmin(void) {	/* most-negative-fixnum */
   {	register Ptr aRet;
	GIa1 = (Ptr) ((UFix) 0x8001);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllminus0(void) {	/* minus-0-fixnum */
   {	register Ptr aRet;
	GIa1 = (Ptr) ((UFix) 0x8000);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDnumber_63() {	/* trace numberp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_64() {	/* trace integerp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,3,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_65() {	/* trace rationalp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,4,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_66() {	/* trace float */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,5,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_67() {	/* trace truncate */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,6,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_68() {	/* trace fix */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,7,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_69() {	/* trace 1+ */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,8,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_70() {	/* trace 1- */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,9,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_71() {	/* trace abs */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,10,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_72() {	/* trace + */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,11,1,12);
  lRet:  return (aRet);}}

static Ptr GDnumber_73() {	/* trace * */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,13,1,12);
  lRet:  return (aRet);}}

static Ptr GDnumber_74() {	/* trace 0- */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,14,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_75() {	/* trace - */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,15,1,12);
  lRet:  return (aRet);}}

static Ptr GDnumber_76() {	/* trace 1/ */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,16,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_77() {	/* trace // */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,17,1,12);
  lRet:  return (aRet);}}

static Ptr GDnumber_78() {	/* trace quo */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,18,1,19);
  lRet:  return (aRet);}}

static Ptr GDnumber_79() {	/* trace modulo */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,20,1,19);
  lRet:  return (aRet);}}

static Ptr GDnumber_80() {	/* trace <?> */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,21,1,19);
  lRet:  return (aRet);}}

static Ptr GDnumber_81() {	/* trace zerop */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,22,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_82() {	/* trace minusp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,23,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_83() {	/* trace plusp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,24,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_84() {	/* trace = */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,25,1,12);
  lRet:  return (aRet);}}

static Ptr GDnumber_85() {	/* trace <> */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,26,1,19);
  lRet:  return (aRet);}}

static Ptr GDnumber_86() {	/* trace > */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,27,1,12);
  lRet:  return (aRet);}}

static Ptr GDnumber_87() {	/* trace >= */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,28,1,12);
  lRet:  return (aRet);}}

static Ptr GDnumber_88() {	/* trace < */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,29,1,12);
  lRet:  return (aRet);}}

static Ptr GDnumber_89() {	/* trace <= */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,30,1,12);
  lRet:  return (aRet);}}

static Ptr GDnumber_90() {	/* trace min */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,31,1,12);
  lRet:  return (aRet);}}

static Ptr GDnumber_91() {	/* trace max */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,32,1,12);
  lRet:  return (aRet);}}

static Ptr GDnumber_92() {	/* trace sin */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,33,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_93() {	/* trace cos */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,34,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_94() {	/* trace asin */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,35,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_95() {	/* trace acos */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,36,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_96() {	/* trace atan */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,37,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_97() {	/* trace exp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,38,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_98() {	/* trace log */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,39,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_99() {	/* trace log10 */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,40,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_100() {	/* trace power */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,41,1,19);
  lRet:  return (aRet);}}

static Ptr GDnumber_101() {	/* trace sqrt */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,42,1,2);
  lRet:  return (aRet);}}

static Ptr GDnumber_102() {	/* trace most-positive-fixnum */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,43,1,44);
  lRet:  return (aRet);}}

static Ptr GDnumber_103() {	/* trace most-negative-fixnum */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,45,1,44);
  lRet:  return (aRet);}}

static Ptr GDnumber_104() {	/* trace minus-0-fixnum */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYnumber,46,1,44);
  lRet:  return (aRet);}}

