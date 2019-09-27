/* GELL 15.26: source file for the module: "specnb" */
/*             translation done:           "Sat Oct   7 17 20:53:47 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "specnb.h" 

static Ptr GLspecnb_1(void) {	/* startmodule */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXini_snb); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_snb(void) {	/* ini_snb */
   {	register Ptr aRet;
	{ llrt_inisymb ((Ptr) 5, (Ptr) "scale", ((Ptr) GXscale), (Ptr) &GMscale, (Ptr) GFscale);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "lognot", ((Ptr) GXlognot), (Ptr) &GMlognot, (Ptr) GFlognot);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "logand", ((Ptr) GXlogand), (Ptr) &GMlogand, (Ptr) GFlogand);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "logor", ((Ptr) GXlogor), (Ptr) &GMlogor, (Ptr) GFlogor);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "logxor", ((Ptr) GXlogxor), (Ptr) &GMlogxor, (Ptr) GFlogxor);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "logshift", ((Ptr) GXlogshift), (Ptr) &GMlogshift, (Ptr) GFlogshift);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "2**", ((Ptr) GXdpn), (Ptr) &GMdpn, (Ptr) GFdpn);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "mask-field", ((Ptr) GXmskfield), (Ptr) &GMmskfield, (Ptr) GFmskfield);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "load-byte", ((Ptr) GXldbyte), (Ptr) &GMldbyte, (Ptr) GFldbyte);}
	{ llrt_inisymb ((Ptr) 12, (Ptr) "deposit-byte", ((Ptr) GXdpbyte), (Ptr) &GMdpbyte, (Ptr) GFdpbyte);}
	{ llrt_inisymb ((Ptr) 13, (Ptr) "deposit-field", ((Ptr) GXdpfield), (Ptr) &GMdpfield, (Ptr) GFdpfield);}
	{ llrt_inisymb ((Ptr) 14, (Ptr) "load-byte-test", ((Ptr) GXldbt), (Ptr) &GMldbt, (Ptr) GFldbt);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "oddp", ((Ptr) GXoddp), (Ptr) &GModdp, (Ptr) GFoddp);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "evenp", ((Ptr) GXevenp), (Ptr) &GMevenp, (Ptr) GFevenp);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "random", ((Ptr) GXllrandom), (Ptr) &GMllrandom, (Ptr) GFllrandom);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "srandom", ((Ptr) GXllsrandom), (Ptr) &GMllsrandom, (Ptr) GFllsrandom);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "floatp", ((Ptr) GXfloatp), (Ptr) &GMfloatp, (Ptr) GFfloatp);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "fixp", ((Ptr) GXfixp), (Ptr) &GMfixp, (Ptr) GFfixp);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "plus", ((Ptr) GXflplus), (Ptr) &GMflplus, (Ptr) GFflplus);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "difference", ((Ptr) GXfldiff), (Ptr) &GMfldiff, (Ptr) GFfldiff);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "differ", ((Ptr) GXfldiff), (Ptr) &GMfldiff, (Ptr) GFfldiff);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "times", ((Ptr) GXfltimes), (Ptr) &GMfltimes, (Ptr) GFfltimes);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "divide", ((Ptr) GXflquo), (Ptr) &GMflquo, (Ptr) GFflquo);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "add1", ((Ptr) GXlladd1), (Ptr) &GMlladd1, (Ptr) GFlladd1);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "sub1", ((Ptr) GXllsub1), (Ptr) &GMllsub1, (Ptr) GFllsub1);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "add", ((Ptr) GXlladd), (Ptr) &GMlladd, (Ptr) GFlladd);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "sub", ((Ptr) GXllsub), (Ptr) &GMllsub, (Ptr) GFllsub);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "mul", ((Ptr) GXllmul), (Ptr) &GMllmul, (Ptr) GFllmul);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "div", ((Ptr) GXll_div), (Ptr) &GMll_div, (Ptr) GFll_div);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "rem", ((Ptr) GXllrem), (Ptr) &GMllrem, (Ptr) GFllrem);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "eqn", ((Ptr) GXlleqn), (Ptr) &GMlleqn, (Ptr) GFlleqn);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "neqn", ((Ptr) GXllneqn), (Ptr) &GMllneqn, (Ptr) GFllneqn);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) "ge", ((Ptr) GXllge), (Ptr) &GMllge, (Ptr) GFllge);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) "gt", ((Ptr) GXllgt), (Ptr) &GMllgt, (Ptr) GFllgt);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) "le", ((Ptr) GXllle), (Ptr) &GMllle, (Ptr) GFllle);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) "lt", ((Ptr) GXlllt), (Ptr) &GMlllt, (Ptr) GFlllt);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "imin", ((Ptr) GXllimin), (Ptr) &GMllimin, (Ptr) GFllimin);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "imax", ((Ptr) GXllimax), (Ptr) &GMllimax, (Ptr) GFllimax);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "fadd", ((Ptr) GXllfadd), (Ptr) &GMllfadd, (Ptr) GFllfadd);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "fsub", ((Ptr) GXllfsub), (Ptr) &GMllfsub, (Ptr) GFllfsub);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "fmul", ((Ptr) GXllfmul), (Ptr) &GMllfmul, (Ptr) GFllfmul);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "fdiv", ((Ptr) GXllfdiv), (Ptr) &GMllfdiv, (Ptr) GFllfdiv);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "feqn", ((Ptr) GXllfeqn), (Ptr) &GMllfeqn, (Ptr) GFllfeqn);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "fneqn", ((Ptr) GXllfneqn), (Ptr) &GMllfneqn, (Ptr) GFllfneqn);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "fge", ((Ptr) GXllfge), (Ptr) &GMllfge, (Ptr) GFllfge);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "fgt", ((Ptr) GXllfgt), (Ptr) &GMllfgt, (Ptr) GFllfgt);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "fle", ((Ptr) GXllfle), (Ptr) &GMllfle, (Ptr) GFllfle);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "flt", ((Ptr) GXllflt), (Ptr) &GMllflt, (Ptr) GFllflt);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "fmin", ((Ptr) GXllfmin), (Ptr) &GMllfmin, (Ptr) GFllfmin);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "fmax", ((Ptr) GXllfmax), (Ptr) &GMllfmax, (Ptr) GFllfmax);}
	GIcpkgc = GMkllcp;
	{ llrt_inisymb ((Ptr) 8, (Ptr) "logshift", ((Ptr) GXclllsht), (Ptr) &GMclllsht, (Ptr) GFclllsht);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "mul", ((Ptr) GXcllmul), (Ptr) &GMcllmul, (Ptr) GFcllmul);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "div", ((Ptr) GXclldiv), (Ptr) &GMclldiv, (Ptr) GFclldiv);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "rem", ((Ptr) GXcllrem), (Ptr) &GMcllrem, (Ptr) GFcllrem);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "fadd", ((Ptr) GXcllfadd), (Ptr) &GMcllfadd, (Ptr) GFcllfadd);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "fsub", ((Ptr) GXcllfsub), (Ptr) &GMcllfsub, (Ptr) GFcllfsub);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "fmul", ((Ptr) GXcllfmul), (Ptr) &GMcllfmul, (Ptr) GFcllfmul);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "fdiv", ((Ptr) GXcllfdiv), (Ptr) &GMcllfdiv, (Ptr) GFcllfdiv);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "feqn", ((Ptr) GXcllfeqn), (Ptr) &GMcllfeqn, (Ptr) GFcllfeqn);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "fneqn", ((Ptr) GXcllfneqn), (Ptr) &GMcllfneqn, (Ptr) GFcllfneqn);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "fge", ((Ptr) GXcllfge), (Ptr) &GMcllfge, (Ptr) GFcllfge);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "fgt", ((Ptr) GXcllfgt), (Ptr) &GMcllfgt, (Ptr) GFcllfgt);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "fle", ((Ptr) GXcllfle), (Ptr) &GMcllfle, (Ptr) GFcllfle);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "flt", ((Ptr) GXcllflt), (Ptr) &GMcllflt, (Ptr) GFcllflt);}
	GIcpkgc = GInil;
	{ llrt_inicst ((Ptr) 6, (Ptr) "regret", (Ptr) &GMexcarry);}
	GIa1->Val = (Ptr) 0;
	(GIa1 + 3)->Val = GMex;
	{ llrt_inisymb ((Ptr) 3, (Ptr) "ex+", ((Ptr) GXexadd), (Ptr) &GMexadd, (Ptr) GFexadd);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "ex1+", ((Ptr) GXexincr), (Ptr) &GMexincr, (Ptr) GFexincr);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "ex-", ((Ptr) GXexinv), (Ptr) &GMexinv, (Ptr) GFexinv);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "ex*", ((Ptr) GXexmul), (Ptr) &GMexmul, (Ptr) GFexmul);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "ex/", ((Ptr) GXexdiv), (Ptr) &GMexdiv, (Ptr) GFexdiv);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "ex?", ((Ptr) GXexcomp), (Ptr) &GMexcomp, (Ptr) GFexcomp);}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLspecnb_2(void) {	/* nfalse */
   {	register Ptr aRet;
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLspecnb_3(void) {	/* rzero */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (Ptr) 0;
	{aRet = (rSp++)->Val; goto lRet;}
l_rone:
	GIa1 = (Ptr) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLspecnb_4(void) {	/* banfix3 */
   {	register Ptr aRet;
	GIa2 = GIa3;
	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLspecnb_5(void) {	/* banfix2 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLspecnb_6(void) {	/* banfix1 */
   {	register Ptr aRet;
	GIa2 = GIa4;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLspecnb_7(void) {	/* banflt2 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLspecnb_8); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLspecnb_8(void) {	/* banflt1 */
   {	register Ptr aRet;
	GIa2 = GIa4;
	{aRet = ((Ptr) GXerrnfa); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLspecnb_9(void) {	/* banmix2 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLspecnb_10); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLspecnb_10(void) {	/* banmix1 */
   {	register Ptr aRet;
	GIa2 = GIa4;
	{aRet = ((Ptr) GXerrnna); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLspecnb_11(void) {	/* ban0dv */
   {	register Ptr aRet;
	GIa2 = GIa4;
	GIa1 = (Ptr) 0;
	{aRet = ((Ptr) GXerr0dv); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLspecnb_12(void) {	/* banwna */
   {	register Ptr aRet;
	GIa1 = GIa3;
	GIa2 = GIa4;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXoddp(void) {	/* oddp */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIa4 = GModdp;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	rA2 = rA1;
	rA2 = (Ptr) ((UFix) (rA2) & (UFix) 1);
	if (rA2 == (Ptr) 0)	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

extern Ptr GXevenp(void) {	/* evenp */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIa4 = GMevenp;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	rA2 = rA1;
	rA2 = (Ptr) ((UFix) (rA2) & (UFix) 1);
	if (rA2 != (Ptr) 0)	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

extern Ptr GXlleqn(void) {	/* eqn */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMlleqn;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if (rA1 != rA2)	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllneqn(void) {	/* neqn */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMllneqn;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if (rA1 == rA2)	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllgt(void) {	/* gt */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMllgt;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if ((Fix) (rA1) <= (Fix) (rA2))	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllge(void) {	/* ge */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMllge;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if ((Fix) (rA1) < (Fix) (rA2))	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXlllt(void) {	/* lt */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMlllt;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if ((Fix) (rA1) >= (Fix) (rA2))	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllle(void) {	/* le */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMllle;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if ((Fix) (rA1) > (Fix) (rA2))	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllimin(void) {	/* imin */
   {	register Ptr aRet, rSp, rA1, rA2, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMllimin;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if ((Fix) (rA1) <= (Fix) (rA2))	{ aRet = (rSp++)->Val; goto lRet;}
	rA1 = rA2;
l_lliminr:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXllimax(void) {	/* imax */
   {	register Ptr aRet, rSp, rA1, rA2, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMllimax;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if ((Fix) (rA1) > (Fix) (rA2))	{ aRet = (rSp++)->Val; goto lRet;}
	rA1 = rA2;
l_llimaxr:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXlladd1(void) {	/* add1 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa4 = GMlladd1;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (1)));
l_lla1ret:
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllsub1(void) {	/* sub1 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa4 = GMllsub1;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (1)));
l_lls1ret:
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXlladd(void) {	/* add */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMlladd;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA2)));
l_lladdret:
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllsub(void) {	/* sub */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMllsub;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (rA2)));
l_llsubret:
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllmul(void) {	/* mul */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMllmul;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) * (Fix) (rA2)));
l_llmulret:
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXll_div(void) {	/* div */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMll_div;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if (rA2 == (Ptr) 0)	{aRet = ((Ptr) GLspecnb_11); goto lRet;}
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) (rA2)));
l_lldivret:
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllrem(void) {	/* rem */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMllrem;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if (rA2 == (Ptr) 0)	{aRet = ((Ptr) GLspecnb_11); goto lRet;}
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) % (Fix) (rA2)));
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXscale(void) {	/* scale */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
	rA4 = GMscale;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if (rA3 >= rBfloat)	{aRet = ((Ptr) GLspecnb_4); goto lRet;}
	if (rA3 == (Ptr) 0)	{aRet = ((Ptr) GLspecnb_11); goto lRet;}
	rA4 = (Ptr) 0;
	if ((Fix) (rA1) >= (Fix) 0)	goto l_scale1;
	rA1 = (Ptr) ((UFix) ((Fix) (0) - (Fix) (rA1)));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
l_scale1:
	if ((Fix) (rA2) >= (Fix) 0)	goto l_scale2;
	rA2 = (Ptr) ((UFix) ((Fix) (0) - (Fix) (rA2)));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
l_scale2:
	if ((Fix) (rA3) >= (Fix) 0)	goto l_scale3;
	rA3 = (Ptr) ((UFix) ((Fix) (0) - (Fix) (rA3)));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
l_scale3:
	{register Adr aux;
		aux = (Adr) rA1 * (Adr) rA2 + (Adr) (Ptr) 0 + (Adr) (Ptr) 0;
		rA1 = (Ptr) (aux >> HIGHTSHIFT);
		rA2 = (Ptr) (aux & LOWMASK);}
	{register Adr aux;
		aux = (Adr) rA1;
		aux = (aux << HIGHTSHIFT) | ((Adr)rA2);
		rA2 = (Ptr) (aux % ((Adr) rA3));
		aux = aux / ((Adr) rA3);
		rA1 = (Ptr) ((UFix) aux);}
	if (rA4 == (Ptr) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	if (rA4 == (Ptr) 2)	{ aRet = (rSp++)->Val; goto lRet;}
	rA1 = (Ptr) ((UFix) ((Fix) (0) - (Fix) (rA1)));
l_scale4:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXllsrandom(void) {	/* srandom */
   {	register Ptr aRet, rSp, rA1, rA3;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3;
	rA3 = GIa4;
	GIa4 = GMllsrandom;
	if (rA3 == (Ptr) 0)	goto l_srand1;
	if (rA3 == (Ptr) 1)	goto l_srand0;
	{aRet = ((Ptr) GLspecnb_12); goto lRet;}
l_srand0:
	rA1 = (rSp++)->Val;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) % (Fix) 31213));
	GIrandseed = rA1;
l_srand1:
	rA1 = GIrandseed;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

extern Ptr GXllrandom(void) {	/* random */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
	rA4 = GMllrandom;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if (rA1 == rA2)	{ aRet = (rSp++)->Val; goto lRet;}
	if ((Fix) (rA1) < (Fix) (rA2))	goto l_random2;
	rA3 = rA1;
	rA1 = rA2;
	rA2 = rA3;
l_random2:
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) (rA1)));
l_random3:
	rA3 = GIrandseed;
	{register Adr aux;
		aux = (Adr) rA3 * (Adr) (Ptr) 92 + (Adr) (Ptr) 2731 + (Adr) (Ptr) 0;
		rA3 = (Ptr) (aux >> HIGHTSHIFT);
		rA4 = (Ptr) (aux & LOWMASK);}
	{register Adr aux;
		aux = (Adr) rA3;
		aux = (aux << HIGHTSHIFT) | ((Adr)rA4);
		rA4 = (Ptr) (aux % ((Adr) (Ptr) 31213));
		aux = aux / ((Adr) (Ptr) 31213);
		rA3 = (Ptr) ((UFix) aux);}
	GIrandseed = rA4;
	{register Adr aux;
		aux = (Adr) rA4 * (Adr) rA2 + (Adr) (Ptr) 0 + (Adr) (Ptr) 0;
		rA3 = (Ptr) (aux >> HIGHTSHIFT);
		rA4 = (Ptr) (aux & LOWMASK);}
	{register Adr aux;
		aux = (Adr) rA3;
		aux = (aux << HIGHTSHIFT) | ((Adr)rA4);
		rA4 = (Ptr) (aux % ((Adr) (Ptr) 31213));
		aux = aux / ((Adr) (Ptr) 31213);
		rA3 = (Ptr) ((UFix) aux);}
	if ((Fix) (rA3) > (Fix) (rA2))	goto l_random3;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA3)));
l_random1:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXlognot(void) {	/* lognot */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa4 = GMlognot;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	rA1 = (Ptr) ((UFix) (rA1) ^ (UFix) -1);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXlogand(void) {	/* logand */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMlogand;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	rA1 = (Ptr) ((UFix) (rA1) & (UFix) (rA2));
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXlogor(void) {	/* logor */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMlogor;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	rA1 = (Ptr) ((UFix) (rA1) | (UFix) (rA2));
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXlogxor(void) {	/* logxor */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMlogxor;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	rA1 = (Ptr) ((UFix) (rA1) ^ (UFix) (rA2));
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXlogshift(void) {	/* logshift */
   {	register Ptr aRet, rA1, rA2, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIa4 = GMlogshift;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	{register Fix aux;
		aux = (Fix) (rA2);
		if (aux >= 0)aux = (UFix) (rA1) << aux;
		else        aux = (UFix) (rA1) >> -aux;
		rA1 = (Ptr) ((UFix) aux);}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXdpn(void) {	/* 2** */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa4 = GMdpn;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	GIa2 = rA1;
	rA1 = (Ptr) 1;
	{register Fix aux;
		aux = (Fix) (GIa2);
		if (aux >= 0)aux = (UFix) (rA1) << aux;
		else        aux = (UFix) (rA1) >> -aux;
		rA1 = (Ptr) ((UFix) aux);}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXmskfield(void) {	/* mask-field */
   {	register Ptr aRet;
	GIa4 = GMmskfield;
	{aRet = ((Ptr) GLspecnb_13); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLspecnb_13(void) {	/* mskf0 */
   {	register Ptr aRet, rA1, rA2, rA3, rA4, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if (rA3 >= rBfloat)	{aRet = ((Ptr) GLspecnb_4); goto lRet;}
	rA4 = (Ptr) 1;
	{register Fix aux;
		aux = (Fix) (rA3);
		if (aux >= 0)aux = (UFix) (rA4) << aux;
		else        aux = (UFix) (rA4) >> -aux;
		rA4 = (Ptr) ((UFix) aux);}
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
l_mskf1:
	{register Fix aux;
		aux = (Fix) (rA2);
		if (aux >= 0)aux = (UFix) (rA4) << aux;
		else        aux = (UFix) (rA4) >> -aux;
		rA4 = (Ptr) ((UFix) aux);}
	rA1 = (Ptr) ((UFix) (rA1) & (UFix) (rA4));
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

extern Ptr GXldbyte(void) {	/* load-byte */
   {	register Ptr aRet, rA1, rA2, rA3, rA4, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
	rA4 = GMldbyte;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if (rA3 >= rBfloat)	{aRet = ((Ptr) GLspecnb_4); goto lRet;}
	rA4 = (Ptr) 1;
	{register Fix aux;
		aux = (Fix) (rA3);
		if (aux >= 0)aux = (UFix) (rA4) << aux;
		else        aux = (UFix) (rA4) >> -aux;
		rA4 = (Ptr) ((UFix) aux);}
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
l_ldby1:
	rA2 = (Ptr) ((UFix) ((Fix) (0) - (Fix) (rA2)));
	{register Fix aux;
		aux = (Fix) (rA2);
		if (aux >= 0)aux = (UFix) (rA1) << aux;
		else        aux = (UFix) (rA1) >> -aux;
		rA1 = (Ptr) ((UFix) aux);}
	rA1 = (Ptr) ((UFix) (rA1) & (UFix) (rA4));
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXldbt(void) {	/* load-byte-test */
   {	register Ptr aRet, rA1, rA2, rA3, rA4, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
	rA4 = GMldbt;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_5); goto lRet;}
	if (rA3 >= rBfloat)	{aRet = ((Ptr) GLspecnb_4); goto lRet;}
	rA4 = (Ptr) 1;
	{register Fix aux;
		aux = (Fix) (rA3);
		if (aux >= 0)aux = (UFix) (rA4) << aux;
		else        aux = (UFix) (rA4) >> -aux;
		rA4 = (Ptr) ((UFix) aux);}
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
l_ldbt1:
	rA2 = (Ptr) ((UFix) ((Fix) (0) - (Fix) (rA2)));
	{register Fix aux;
		aux = (Fix) (rA2);
		if (aux >= 0)aux = (UFix) (rA1) << aux;
		else        aux = (UFix) (rA1) >> -aux;
		rA1 = (Ptr) ((UFix) aux);}
	rA1 = (Ptr) ((UFix) (rA1) & (UFix) (rA4));
	if (rA1 == (Ptr) 0)	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXdpbyte(void) {	/* deposit-byte */
   {	register Ptr aRet;
	GIa3 = GIa4;
	GIa4 = GMdpbyte;
	{aRet = ((Ptr) GLspecnb_14); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXdpfield(void) {	/* deposit-field */
   {	register Ptr aRet;
	GIa3 = GIa4;
	GIa4 = GMdpfield;
	{aRet = ((Ptr) GLspecnb_14); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLspecnb_14(void) {	/* dpfi0 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if (GIa3 != (Ptr) 4)	{aRet = ((Ptr) GLspecnb_12); goto lRet;}
	rA1 = (rSp + (Fix) 3)->Val;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLspecnb_6); goto lRet;}
	rA1 = (rSp++)->Val;
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	if (GIa4 == GMdpfield)	goto l_dpfi1;
	{register Fix aux;
		aux = (Fix) (GIa2);
		if (aux >= 0)aux = (UFix) (rA1) << aux;
		else        aux = (UFix) (rA1) >> -aux;
		rA1 = (Ptr) ((UFix) aux);}
l_dpfi1:
	(--rSp)->Val = ((Ptr) GLspecnb_15);
	{aRet = ((Ptr) GLspecnb_13); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLspecnb_15(void) {	/* ret_call_mskf0_1 */
   {	register Ptr aRet, rSp, rA2, rA4;
	rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
	rA2 = (rSp++)->Val;
	rA4 = (Ptr) ((UFix) (rA4) ^ (UFix) -1);
	rA2 = (Ptr) ((UFix) (rA2) & (UFix) (rA4));
	GIa1 = (Ptr) ((UFix) (GIa1) | (UFix) (rA2));
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXllfeqn(void) {	/* feqn */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIa4 = GMllfeqn;
	if (llrt_floatp (rA1) == 0) 
	{aRet = ((Ptr) GLspecnb_8); goto lRet;}
	if (llrt_floatp (rA2) == 0) 
	{aRet = ((Ptr) GLspecnb_7); goto lRet;}
	if (llrt_fne (rA1, rA2) != 0) 	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllfneqn(void) {	/* fneqn */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIa4 = GMllfneqn;
	if (llrt_floatp (rA1) == 0) 
	{aRet = ((Ptr) GLspecnb_8); goto lRet;}
	if (llrt_floatp (rA2) == 0) 
	{aRet = ((Ptr) GLspecnb_7); goto lRet;}
	if (llrt_feq (rA1, rA2) != 0) 	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllfgt(void) {	/* fgt */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIa4 = GMllfgt;
	if (llrt_floatp (rA1) == 0) 
	{aRet = ((Ptr) GLspecnb_8); goto lRet;}
	if (llrt_floatp (rA2) == 0) 
	{aRet = ((Ptr) GLspecnb_7); goto lRet;}
	if (llrt_fle (rA1, rA2) != 0) 	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllfge(void) {	/* fge */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIa4 = GMllfge;
	if (llrt_floatp (rA1) == 0) 
	{aRet = ((Ptr) GLspecnb_8); goto lRet;}
	if (llrt_floatp (rA2) == 0) 
	{aRet = ((Ptr) GLspecnb_7); goto lRet;}
	if (llrt_flt (rA1, rA2) != 0) 	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllflt(void) {	/* flt */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIa4 = GMllflt;
	if (llrt_floatp (rA1) == 0) 
	{aRet = ((Ptr) GLspecnb_8); goto lRet;}
	if (llrt_floatp (rA2) == 0) 
	{aRet = ((Ptr) GLspecnb_7); goto lRet;}
	if (llrt_fge (rA1, rA2) != 0) 	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllfle(void) {	/* fle */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIa4 = GMllfle;
	if (llrt_floatp (rA1) == 0) 
	{aRet = ((Ptr) GLspecnb_8); goto lRet;}
	if (llrt_floatp (rA2) == 0) 
	{aRet = ((Ptr) GLspecnb_7); goto lRet;}
	if (llrt_fgt (rA1, rA2) != 0) 	{aRet = ((Ptr) GLspecnb_2); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllfmin(void) {	/* fmin */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	GIa4 = GMllfmin;
	if (llrt_floatp (rA1) == 0) 
	{aRet = ((Ptr) GLspecnb_8); goto lRet;}
	if (llrt_floatp (rA2) == 0) 
	{aRet = ((Ptr) GLspecnb_7); goto lRet;}
	if (llrt_fle (rA1, rA2) != 0) 	{ aRet = (rSp++)->Val; goto lRet;}
	rA1 = rA2;
l_llfminr:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXllfmax(void) {	/* fmax */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	GIa4 = GMllfmax;
	if (llrt_floatp (rA1) == 0) 
	{aRet = ((Ptr) GLspecnb_8); goto lRet;}
	if (llrt_floatp (rA2) == 0) 
	{aRet = ((Ptr) GLspecnb_7); goto lRet;}
	if (llrt_fgt (rA1, rA2) != 0) 	{ aRet = (rSp++)->Val; goto lRet;}
	rA1 = rA2;
l_llfmaxr:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXllfadd(void) {	/* fadd */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIa4 = GMllfadd;
	if (llrt_floatp (rA1) == 0) 
	{aRet = ((Ptr) GLspecnb_8); goto lRet;}
	if (llrt_floatp (rA2) == 0) 
	{aRet = ((Ptr) GLspecnb_7); goto lRet;}
	GIa1 = rA1; rA1 = llrt_fadd (rA1, rA2);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllfsub(void) {	/* fsub */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIa4 = GMllfsub;
	if (llrt_floatp (rA1) == 0) 
	{aRet = ((Ptr) GLspecnb_8); goto lRet;}
	if (llrt_floatp (rA2) == 0) 
	{aRet = ((Ptr) GLspecnb_7); goto lRet;}
	GIa1 = rA1; rA1 = llrt_fsub (rA1, rA2);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllfmul(void) {	/* fmul */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIa4 = GMllfmul;
	if (llrt_floatp (rA1) == 0) 
	{aRet = ((Ptr) GLspecnb_8); goto lRet;}
	if (llrt_floatp (rA2) == 0) 
	{aRet = ((Ptr) GLspecnb_7); goto lRet;}
	GIa1 = rA1; rA1 = llrt_fmul (rA1, rA2);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXllfdiv(void) {	/* fdiv */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIa4 = GMllfdiv;
	if (llrt_floatp (rA1) == 0) 
	{aRet = ((Ptr) GLspecnb_8); goto lRet;}
	if (llrt_floatp (rA2) == 0) 
	{aRet = ((Ptr) GLspecnb_7); goto lRet;}
	if (llrt_feq (rA2, GIfzero) != 0) 	{aRet = ((Ptr) GLspecnb_11); goto lRet;}
	GIa1 = rA1; rA1 = llrt_fdiv (rA1, rA2);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXclllsht(void) {	/* #:gell:logshift */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	{register Fix aux;
		aux = (Fix) (rSp->Val);
		if (aux >= 0)aux = (UFix) ((rSp + 2)->Val) << aux;
		else        aux = (UFix) ((rSp + 2)->Val) >> -aux;
		(rSp + 2)->Val = (Ptr) ((UFix) aux);}
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcllmul(void) {	/* #:gell:mul */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(rSp + 2)->Val = (Ptr) ((UFix) ((Fix) ((rSp + 2)->Val) * (Fix) (rSp->Val)));
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXclldiv(void) {	/* #:gell:div */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(rSp + 2)->Val = (Ptr) ((UFix) ((Fix) ((rSp + 2)->Val) / (Fix) (rSp->Val)));
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcllrem(void) {	/* #:gell:rem */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(rSp + 2)->Val = (Ptr) ((UFix) ((Fix) ((rSp + 2)->Val) % (Fix) (rSp->Val)));
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcllfadd(void) {	/* #:gell:fadd */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIsp = rSp; (rSp + 2)->Val = llrt_fadd ((rSp + 2)->Val, rSp->Val);
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcllfsub(void) {	/* #:gell:fsub */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIsp = rSp; (rSp + 2)->Val = llrt_fsub ((rSp + 2)->Val, rSp->Val);
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcllfmul(void) {	/* #:gell:fmul */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIsp = rSp; (rSp + 2)->Val = llrt_fmul ((rSp + 2)->Val, rSp->Val);
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcllfdiv(void) {	/* #:gell:fdiv */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIsp = rSp; (rSp + 2)->Val = llrt_fdiv ((rSp + 2)->Val, rSp->Val);
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLspecnb_16(void) {	/* cllret1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(rSp + 2)->Val = (Ptr) 1;
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcllfeqn(void) {	/* #:gell:feqn */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (llrt_feq (rSp->Val, (rSp + 2)->Val) != 0) 	{aRet = ((Ptr) GLspecnb_16); goto lRet;}
	(rSp + 2)->Val = (Ptr) 0;
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcllfneqn(void) {	/* #:gell:fneqn */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (llrt_fne (rSp->Val, (rSp + 2)->Val) != 0) 	{aRet = ((Ptr) GLspecnb_16); goto lRet;}
	(rSp + 2)->Val = (Ptr) 0;
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcllfgt(void) {	/* #:gell:fgt */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (llrt_fgt (rSp->Val, (rSp + 2)->Val) != 0) 	{aRet = ((Ptr) GLspecnb_16); goto lRet;}
	(rSp + 2)->Val = (Ptr) 0;
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcllfge(void) {	/* #:gell:fge */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (llrt_fge (rSp->Val, (rSp + 2)->Val) != 0) 	{aRet = ((Ptr) GLspecnb_16); goto lRet;}
	(rSp + 2)->Val = (Ptr) 0;
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcllflt(void) {	/* #:gell:flt */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (llrt_flt (rSp->Val, (rSp + 2)->Val) != 0) 	{aRet = ((Ptr) GLspecnb_16); goto lRet;}
	(rSp + 2)->Val = (Ptr) 0;
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcllfle(void) {	/* #:gell:fle */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (llrt_fle (rSp->Val, (rSp + 2)->Val) != 0) 	{aRet = ((Ptr) GLspecnb_16); goto lRet;}
	(rSp + 2)->Val = (Ptr) 0;
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXfloatp(void) {	/* floatp */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (llrt_floatp (GIa1) != 0) 
	{ aRet = (rSp++)->Val; goto lRet;}
	GIa1 = GInil;
l_floatp2:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXfixp(void) {	/* fixp */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (GIa1 < GIbfloat)	{ aRet = (rSp++)->Val; goto lRet;}
	GIa1 = GInil;
l_fixp2:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXflplus(void) {	/* plus */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
	rA1 = (Ptr) 0;
	goto l_fplus2;
l_fplus1:
	rA2 = (rSp++)->Val;
	if (llrt_floatp (rA2) != 0) 
	goto l_fplus5;
	if (rA2 >= rBfloat)	goto l_fpluser1;
	rA3 = rA1;
	{register int aux;
		aux = (int) ((Fix) (rA1) + (Fix) (rA2));
		rA1 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_fplus4;}
l_fplus2:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_fplus1;}
	{aRet = (rSp++)->Val; goto lRet;}
l_fplus4:
	rA1 = rA3;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_float (rA1);
	goto l_fplus7;
l_fplus5:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_float (rA1);
	goto l_fplus8;
l_fplus6:
	rA2 = (rSp++)->Val;
l_fplus7:
	if (llrt_floatp (rA2) != 0) 
	goto l_fplus8;
	if (rA2 >= rBfloat)	goto l_fpluser1;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_float (rA2);
l_fplus8:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_fadd (rA1, rA2);
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_fplus6;}
l_fplus9:
	{aRet = (rSp++)->Val; goto lRet;}
l_fpluser1:
	rA1 = rA2;
l_fpluser2:
	rA2 = GMflplus;
	{aRet = ((Ptr) GXerrnna); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXfldiff(void) {	/* difference */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
	if (rA4 == (Ptr) 0)	{aRet = ((Ptr) GLspecnb_3); goto lRet;}
	if (rA4 != (Ptr) 1)	goto l_fdif1;
	rA1 = (Ptr) 0;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	(--rSp)->Val = rA1;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
l_fdif1:
	rA2 = (Ptr) 0;
	goto l_fdif3;
l_fdif2:
	rA1 = (rSp++)->Val;
	if (llrt_floatp (rA1) != 0) 
	goto l_fdif5;
	if (rA1 >= rBfloat)	goto l_fdiferr2;
	rA3 = rA2;
	{register int aux;
		aux = (int) ((Fix) (rA2) + (Fix) (rA1));
		rA2 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_fdif4;}
l_fdif3:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	goto l_fdif2;
		else rA4 = (Ptr) 0;}
	rA1 = (rSp++)->Val;
	if (llrt_floatp (rA1) != 0) 
	goto l_fdif10;
	if (rA1 >= rBfloat)	goto l_fdiferr2;
	rA3 = rA1;
	{register int aux;
		aux = (int) ((Fix) (rA1) - (Fix) (rA2));
		rA1 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_fdif91;}
	{aRet = (rSp++)->Val; goto lRet;}
l_fdif4:
	rA2 = rA3;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_float (rA1);
l_fdif5:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_float (rA2);
	goto l_fdif7;
l_fdif6:
	rA1 = (rSp++)->Val;
	if (llrt_floatp (rA1) != 0) 
	goto l_fdif7;
	if (rA1 >= rBfloat)	goto l_fdiferr2;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_float (rA1);
l_fdif7:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_fadd (rA2, rA1);
l_fdif8:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	goto l_fdif6;
		else rA4 = (Ptr) 0;}
	rA1 = (rSp++)->Val;
	if (llrt_floatp (rA1) != 0) 
	goto l_fdif9;
	if (rA1 >= rBfloat)	goto l_fdiferr2;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_float (rA1);
l_fdif9:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_fsub (rA1, rA2);
	{aRet = (rSp++)->Val; goto lRet;}
l_fdif91:
	rA1 = rA3;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_float (rA1);
l_fdif10:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_float (rA2);
	goto l_fdif9;
l_fdiferr1:
	rA1 = rA2;
l_fdiferr2:
	rA2 = GMfldiff;
	{aRet = ((Ptr) GXerrnna); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXfltimes(void) {	/* times */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
	rA1 = (Ptr) 1;
	goto l_ftime2;
l_ftime1:
	rA2 = (rSp++)->Val;
	if (llrt_floatp (rA2) != 0) 
	goto l_ftime5;
	if (rA2 >= rBfloat)	goto l_ftimerr1;
	rA3 = rA1;
	{register int aux;
		aux = (int) ((Fix) (rA1) * (Fix) (rA2));
		rA1 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_ftime4;}
l_ftime2:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_ftime1;}
	{aRet = (rSp++)->Val; goto lRet;}
l_ftime4:
	rA1 = rA3;
l_ftime5:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_float (rA1);
	goto l_ftime7;
l_ftime6:
	rA2 = (rSp++)->Val;
l_ftime7:
	if (llrt_floatp (rA2) != 0) 
	goto l_ftime8;
	if (rA2 >= rBfloat)	goto l_ftimerr1;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_float (rA2);
l_ftime8:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_fmul (rA1, rA2);
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_ftime6;}
	{aRet = (rSp++)->Val; goto lRet;}
l_ftimerr1:
	rA1 = rA2;
l_ftimerr2:
	rA2 = GMfltimes;
	{aRet = ((Ptr) GXerrnna); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXflquo(void) {	/* divide */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBfloat = GIbfloat;
	GIa4 = GMflquo;
	if (llrt_floatp (rA1) != 0) 
	goto l_fquo2;
	if (llrt_floatp (rA2) != 0) 
	goto l_fquo3;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_10); goto lRet;}
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_9); goto lRet;}
	if (rA2 == (Ptr) 0)	goto l_fquoovf;
	rA3 = rA1;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) % (Fix) (rA2)));
	if (rA1 != (Ptr) 0)	goto l_fquo1;
	rA1 = rA3;
	{register int aux;
		aux = (int) ((Fix) (rA1) / (Fix) (rA2));
		rA1 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_fquoovf;}
	{aRet = (rSp++)->Val; goto lRet;}
l_fquo1:
	rA1 = rA3;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA2 = llrt_float (rA2);
	goto l_fquo3;
l_fquo2:
	if (llrt_floatp (rA2) != 0) 
	goto l_fquo4;
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLspecnb_9); goto lRet;}
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA2 = llrt_float (rA2);
	goto l_fquo4;
l_fquo3:
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLspecnb_10); goto lRet;}
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_float (rA1);
l_fquo4:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_fdiv (rA1, rA2);
	{aRet = (rSp++)->Val; goto lRet;}
l_fquoovf:
	rA1 = (Ptr) 0;
	rA2 = GMflquo;
	{aRet = ((Ptr) GXerr0dv); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXexadd(void) {	/* ex+ */
   {	register Ptr aRet, rA3;
	rA3 = GIa3;
	rA3 = GMexcarry;
	{register Adr aux;
		aux = (Adr) GIa1 + (Adr) GIa2 + (Adr) rA3->Val;
		rA3->Val = (Ptr) (aux >> HIGHTSHIFT);
		GIa1 = (Ptr) (aux & LOWMASK);}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

extern Ptr GXexincr(void) {	/* ex1+ */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	rA2 = GMexcarry;
	{register Adr aux;
		aux = (Adr) GIa1 + (Adr) (Ptr) 1 + (Adr) rA2->Val;
		rA2->Val = (Ptr) (aux >> HIGHTSHIFT);
		GIa1 = (Ptr) (aux & LOWMASK);}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

extern Ptr GXexinv(void) {	/* ex- */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	rA1 = (Ptr) ((UFix) ((Fix) (0) - (Fix) (rA1)));
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (1)));
l_exinvret:
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXexmul(void) {	/* ex* */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	rA4 = GMexcarry;
	{register Adr aux;
		aux = (Adr) GIa1 * (Adr) GIa2 + (Adr) GIa3 + (Adr) rA4->Val;
		rA4->Val = (Ptr) (aux >> HIGHTSHIFT);
		GIa1 = (Ptr) (aux & LOWMASK);}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

extern Ptr GXexdiv(void) {	/* ex/ */
   {	register Ptr aRet, rA2, rA3;
	rA2 = GIa2; rA3 = GIa3;
	rA3 = GMexcarry;
	{register Adr aux;
		aux = (Adr) rA3->Val;
		aux = (aux << HIGHTSHIFT) | ((Adr)GIa1);
		rA3->Val = (Ptr) (aux % ((Adr) rA2));
		aux = aux / ((Adr) rA2);
		GIa1 = (Ptr) ((UFix) aux);}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

extern Ptr GXexcomp(void) {	/* ex? */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	if (((UFix) rA1) < ((UFix) rA2))	goto l_excomp1;
	else if (((UFix) rA1) > ((UFix) rA2))	goto l_excomp3;
	else	goto l_excomp2;
l_excomp1:
	rA1 = (Ptr) ((UFix) 0xffff);
	{aRet = (rSp++)->Val; goto lRet;}
l_excomp2:
	rA1 = (Ptr) 0;
	{aRet = (rSp++)->Val; goto lRet;}
l_excomp3:
	rA1 = (Ptr) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GDspecnb_17() {	/* trace oddp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDspecnb_18() {	/* trace evenp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,3,1,2);
  lRet:  return (aRet);}}

static Ptr GDspecnb_19() {	/* trace eqn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,4,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_20() {	/* trace neqn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,6,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_21() {	/* trace gt */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,7,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_22() {	/* trace ge */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,8,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_23() {	/* trace lt */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,9,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_24() {	/* trace le */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,10,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_25() {	/* trace imin */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,11,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_26() {	/* trace imax */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,12,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_27() {	/* trace add1 */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,13,1,2);
  lRet:  return (aRet);}}

static Ptr GDspecnb_28() {	/* trace sub1 */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,14,1,2);
  lRet:  return (aRet);}}

static Ptr GDspecnb_29() {	/* trace add */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,15,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_30() {	/* trace sub */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,16,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_31() {	/* trace mul */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,17,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_32() {	/* trace div */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,18,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_33() {	/* trace rem */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,19,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_34() {	/* trace scale */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,20,1,21);
  lRet:  return (aRet);}}

static Ptr GDspecnb_35() {	/* trace srandom */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,22,1,23);
  lRet:  return (aRet);}}

static Ptr GDspecnb_36() {	/* trace random */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,24,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_37() {	/* trace lognot */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,25,1,2);
  lRet:  return (aRet);}}

static Ptr GDspecnb_38() {	/* trace logand */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,26,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_39() {	/* trace logor */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,27,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_40() {	/* trace logxor */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,28,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_41() {	/* trace logshift */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,29,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_42() {	/* trace 2** */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,30,1,2);
  lRet:  return (aRet);}}

static Ptr GDspecnb_43() {	/* trace mask-field */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,31,1,21);
  lRet:  return (aRet);}}

static Ptr GDspecnb_44() {	/* trace load-byte */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,32,1,21);
  lRet:  return (aRet);}}

static Ptr GDspecnb_45() {	/* trace load-byte-test */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,33,1,21);
  lRet:  return (aRet);}}

static Ptr GDspecnb_46() {	/* trace deposit-byte */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,34,1,23);
  lRet:  return (aRet);}}

static Ptr GDspecnb_47() {	/* trace deposit-field */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,35,1,23);
  lRet:  return (aRet);}}

static Ptr GDspecnb_48() {	/* trace feqn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,36,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_49() {	/* trace fneqn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,37,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_50() {	/* trace fgt */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,38,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_51() {	/* trace fge */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,39,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_52() {	/* trace flt */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,40,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_53() {	/* trace fle */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,41,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_54() {	/* trace fmin */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,42,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_55() {	/* trace fmax */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,43,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_56() {	/* trace fadd */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,44,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_57() {	/* trace fsub */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,45,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_58() {	/* trace fmul */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,46,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_59() {	/* trace fdiv */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,47,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_60() {	/* trace #:gell:logshift */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,48,1,49);
  lRet:  return (aRet);}}

static Ptr GDspecnb_61() {	/* trace #:gell:mul */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,50,1,49);
  lRet:  return (aRet);}}

static Ptr GDspecnb_62() {	/* trace #:gell:div */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,51,1,49);
  lRet:  return (aRet);}}

static Ptr GDspecnb_63() {	/* trace #:gell:rem */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,52,1,49);
  lRet:  return (aRet);}}

static Ptr GDspecnb_64() {	/* trace #:gell:fadd */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,53,1,49);
  lRet:  return (aRet);}}

static Ptr GDspecnb_65() {	/* trace #:gell:fsub */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,54,1,49);
  lRet:  return (aRet);}}

static Ptr GDspecnb_66() {	/* trace #:gell:fmul */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,55,1,49);
  lRet:  return (aRet);}}

static Ptr GDspecnb_67() {	/* trace #:gell:fdiv */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,56,1,49);
  lRet:  return (aRet);}}

static Ptr GDspecnb_68() {	/* trace #:gell:feqn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,57,1,49);
  lRet:  return (aRet);}}

static Ptr GDspecnb_69() {	/* trace #:gell:fneqn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,58,1,49);
  lRet:  return (aRet);}}

static Ptr GDspecnb_70() {	/* trace #:gell:fgt */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,59,1,49);
  lRet:  return (aRet);}}

static Ptr GDspecnb_71() {	/* trace #:gell:fge */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,60,1,49);
  lRet:  return (aRet);}}

static Ptr GDspecnb_72() {	/* trace #:gell:flt */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,61,1,49);
  lRet:  return (aRet);}}

static Ptr GDspecnb_73() {	/* trace #:gell:fle */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,62,1,49);
  lRet:  return (aRet);}}

static Ptr GDspecnb_74() {	/* trace floatp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,63,1,2);
  lRet:  return (aRet);}}

static Ptr GDspecnb_75() {	/* trace fixp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,64,1,2);
  lRet:  return (aRet);}}

static Ptr GDspecnb_76() {	/* trace plus */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,65,1,23);
  lRet:  return (aRet);}}

static Ptr GDspecnb_77() {	/* trace difference */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,66,1,23);
  lRet:  return (aRet);}}

static Ptr GDspecnb_78() {	/* trace times */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,67,1,23);
  lRet:  return (aRet);}}

static Ptr GDspecnb_79() {	/* trace divide */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,68,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_80() {	/* trace ex+ */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,69,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_81() {	/* trace ex1+ */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,70,1,2);
  lRet:  return (aRet);}}

static Ptr GDspecnb_82() {	/* trace ex- */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,71,1,2);
  lRet:  return (aRet);}}

static Ptr GDspecnb_83() {	/* trace ex* */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,72,1,21);
  lRet:  return (aRet);}}

static Ptr GDspecnb_84() {	/* trace ex/ */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,73,1,5);
  lRet:  return (aRet);}}

static Ptr GDspecnb_85() {	/* trace ex? */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYspecnb,74,1,5);
  lRet:  return (aRet);}}

