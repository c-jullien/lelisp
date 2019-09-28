/* GELL 15.26: source file for the module: "bllsht" */
/*             translation done:           "Sat Oct   7 17 20:53:57 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "bllsht.h" 

static Ptr GLbllsht_1(void) {	/* startmodule */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXini_bll); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_bll(void) {	/* ini_bll */
   {	register Ptr aRet;
	{ llrt_inisymb ((Ptr) 3, (Ptr) "loc", ((Ptr) GXloc), (Ptr) &GMloc, (Ptr) GFloc);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "locint", ((Ptr) GXlocint), (Ptr) &GMlocint, (Ptr) GFlocint);}
	(GIa1 + 3)->Val = GMllsystem;
	{ llrt_inisymb ((Ptr) 3, (Ptr) "vag", ((Ptr) GXvag), (Ptr) &GMvag, (Ptr) GFvag);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "memory", ((Ptr) GXmemory), (Ptr) &GMmemory, (Ptr) GFmemory);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "bltmemory", ((Ptr) GXbltmemory), (Ptr) &GMbltmemory, (Ptr) GFbltmemory);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "addadr", ((Ptr) GXaddadr), (Ptr) &GMaddadr, (Ptr) GFaddadr);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "incradr", ((Ptr) GXincradr), (Ptr) &GMincradr, (Ptr) GFincradr);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "subadr", ((Ptr) GXsubadr), (Ptr) &GMsubadr, (Ptr) GFsubadr);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "gtadr", ((Ptr) GXgtadr), (Ptr) &GMgtadr, (Ptr) GFgtadr);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "ccode", ((Ptr) GXaccode), (Ptr) &GMaccode, (Ptr) GFaccode);}
	(GIa1 + 3)->Val = GMllsystem;
	{ llrt_inisymb ((Ptr) 5, (Ptr) "ecode", ((Ptr) GXaecode), (Ptr) &GMaecode, (Ptr) GFaecode);}
	(GIa1 + 3)->Val = GMllsystem;
	{ llrt_inisymb ((Ptr) 10, (Ptr) "precompile", ((Ptr) GXprecomp), (Ptr) &GMprecomp, (Ptr) GFprecomp);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "call", ((Ptr) GXllcall), (Ptr) &GMllcall, (Ptr) GFllcall);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "calln", ((Ptr) GXllcaln), (Ptr) &GMllcaln, (Ptr) GFllcaln);}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXloc(void) {	/* loc */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	rA2 = (Ptr) ((Adr) rA1 >> HIGHTSHIFT);
	rA1 = (Ptr) ((Adr) rA1 & LOWMASK);
	if (rA2 == (Ptr) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA2, rA1);
l_loc9:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXlocint(void) {	/* locint */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa2 = (Ptr) ((Adr) rA1 >> HIGHTSHIFT);
	rA1 = (Ptr) ((Adr) rA1 & LOWMASK);
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (GIa2)));
	rA1 = (Ptr) ((UFix) (rA1) & (UFix) 32767);
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXvag(void) {	/* vag */
   {	register Ptr aRet;
	GIa2 = GMvag;
	{aRet = ((Ptr) GXvaga1); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXvaga1(void) {	/* vaga1 */
   {	register Ptr aRet, rSp, rA1, rBfloat;
	rSp = GIsp; rA1 = GIa1; rBfloat = GIbfloat;
	if ((long) rA1 < (long) GIbcons)	goto l_vagc;
	if (rA1->Val >= rBfloat)	{aRet = ((Ptr) GXerrnda); goto lRet;}
	if ((rA1 + 1)->Val >= rBfloat)	{aRet = ((Ptr) GXerrnda); goto lRet;}
	GIa2 = rA1->Val;
	rA1 = (rA1 + 1)->Val;
	{register Ptr aux;
		 aux = (Ptr) (((Adr) GIa2 << HIGHTSHIFT) + (Adr) rA1);
		 aux = (Ptr) ((long) aux | LLADRBIAS);
		rA1 = aux;}
l_vagret:
	{aRet = (rSp++)->Val; goto lRet;}
l_vagc:
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GXerrnda); goto lRet;}
	if ((rA1 < GIbnumb) || (rA1 >= rBfloat))	{ aRet = (rSp++)->Val; goto lRet;}
	rA1 = rA1->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLbllsht_2(void) {	/* vagerr3 */
   {	register Ptr aRet;
	GIa1 = GIa3;
	{aRet = ((Ptr) GXerrnda); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLbllsht_3(void) {	/* vaga3 */
   {	register Ptr aRet, rSp, rA3, rBfloat;
	rSp = GIsp; rA3 = GIa3; rBfloat = GIbfloat;
	if ((long) rA3 < (long) GIbcons)	goto l_vaga3c;
	if (rA3->Val >= rBfloat)	{aRet = ((Ptr) GLbllsht_2); goto lRet;}
	if ((rA3 + 1)->Val >= rBfloat)	{aRet = ((Ptr) GLbllsht_2); goto lRet;}
	GIa2 = rA3->Val;
	rA3 = (rA3 + 1)->Val;
	{register Ptr aux;
		 aux = (Ptr) (((Adr) GIa2 << HIGHTSHIFT) + (Adr) rA3);
		 aux = (Ptr) ((long) aux | LLADRBIAS);
		rA3 = aux;}
l_vaga3ret:
	{aRet = (rSp++)->Val; goto lRet;}
l_vaga3c:
	if (rA3 >= rBfloat)	{aRet = ((Ptr) GLbllsht_2); goto lRet;}
	if ((rA3 < GIbnumb) || (rA3 >= rBfloat))	{ aRet = (rSp++)->Val; goto lRet;}
	rA3 = rA3->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

extern Ptr GXaddadr(void) {	/* addadr */
   {	register Ptr aRet;
	GIadrtmp = GMaddadr;
	(--GIsp)->Val = ((Ptr) GLbllsht_4);
	{aRet = ((Ptr) GLbllsht_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLbllsht_4(void) {	/* ret_call_adrverif_1 */
   {	register Ptr aRet;
	{register int aux0, aux1, aux2;
		aux0 = (int) ((UFix) GIa3); aux1 = aux0 << HIGHTSHIFT;
		aux0 = (int) ((UFix) GIa1); aux1 = aux0 + aux1;
		aux0 = (int) ((UFix) GIa4); aux2 = aux0 << HIGHTSHIFT;
		aux0 = (int) ((UFix) GIa2); aux2 = aux0 + aux2;
		aux1 = aux1 + aux2;
		aux0 = (aux1 >> HIGHTSHIFT) & LOWMASK; GIa3 = (Ptr) aux0;
		aux0 = aux1 & LOWMASK; GIa1 = (Ptr) aux0;}
	{aRet = ((Ptr) GLbllsht_6); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXincradr(void) {	/* incradr */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	GIadrtmp = GMincradr;
	(--rSp)->Val = ((Ptr) GLbllsht_7);
	{aRet = ((Ptr) GLbllsht_5); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbllsht_7(void) {	/* ret_call_adrverif_2 */
   {	register Ptr aRet, rSp, rA1, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
	{register int aux0, aux1, aux2;
		aux0 = (int) ((UFix) rA3); aux1 = aux0 << HIGHTSHIFT;
		aux0 = (int) ((UFix) rA1); aux1 = aux0 + aux1;
		aux0 = (int) ((UFix) rA4); aux2 = aux0 << HIGHTSHIFT;
		aux0 = (int) ((UFix) GIa2); aux2 = aux0 + aux2;
		aux1 = aux1 + aux2;
		aux0 = (aux1 >> HIGHTSHIFT) & LOWMASK; rA3 = (Ptr) aux0;
		aux0 = aux1 & LOWMASK; rA1 = (Ptr) aux0;}
	rA4 = (rSp++)->Val;
	if (rA3 != (Ptr) 0)	goto l_incadr2;
	if ((Fix) (rA1) >= (Fix) 0)	{ aRet = (rSp++)->Val; goto lRet;}
l_incadr2:
	if (rA3 == (Ptr) ((UFix) 0xffff))	{ aRet = (rSp++)->Val; goto lRet;}
	if ((long) rA4 < (long) GIbcons)	goto l_incadr1;
	rA4->Val = rA3;
	(rA4 + 1)->Val = rA1;
	rA1 = rA4;
	{aRet = (rSp++)->Val; goto lRet;}
l_incadr1:
	GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA3, rA1);
l_incadr3:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXsubadr(void) {	/* subadr */
   {	register Ptr aRet;
	GIadrtmp = GMsubadr;
	(--GIsp)->Val = ((Ptr) GLbllsht_8);
	{aRet = ((Ptr) GLbllsht_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLbllsht_8(void) {	/* ret_call_adrverif_3 */
   {	register Ptr aRet;
	{register int aux0, aux1, aux2;
		aux0 = (int) ((UFix) GIa3); aux1 = aux0 << HIGHTSHIFT;
		aux0 = (int) ((UFix) GIa1); aux1 = aux0 + aux1;
		aux0 = (int) ((UFix) GIa4); aux2 = aux0 << HIGHTSHIFT;
		aux0 = (int) ((UFix) GIa2); aux2 = aux0 + aux2;
		aux1 = aux1 - aux2;
		aux0 = (aux1 >> HIGHTSHIFT) & LOWMASK; GIa3 = (Ptr) aux0;
		aux0 = aux1 & LOWMASK; GIa1 = (Ptr) aux0;}
	{aRet = ((Ptr) GLbllsht_6); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgtadr(void) {	/* gtadr */
   {	register Ptr aRet;
	GIadrtmp = GMgtadr;
	(--GIsp)->Val = ((Ptr) GLbllsht_9);
	{aRet = ((Ptr) GLbllsht_5); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLbllsht_9(void) {	/* ret_call_adrverif_4 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	if (((UFix) rA3) < ((UFix) rA4))	goto l_gtadr0;
	else if (((UFix) rA3) > ((UFix) rA4))	goto l_gtadr2;
	else	goto l_gtadr1;
l_gtadr1:
	if (((UFix) rA1) < ((UFix) rA2))	goto l_gtadr0;
	else if (((UFix) rA1) > ((UFix) rA2))	goto l_gtadr2;
	else	goto l_gtadr0;
l_gtadr2:
	rA1 = GMt;
	{aRet = (rSp++)->Val; goto lRet;}
l_gtadr0:
	rA1 = GInil;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLbllsht_5(void) {	/* adrverif */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBfloat, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat; rBcons = GIbcons;
	if ((long) rA1 >= (long) rBcons)	goto l_adrver1;
	if (rA1 >= rBfloat)	goto l_adrerr1;
	rA3 = (Ptr) 0;
	if ((Fix) (rA1) >= (Fix) 0)	goto l_adrver4;
	rA3 = (Ptr) ((UFix) 0xffff);
l_adrver4:
	if ((long) rA2 >= (long) rBcons)	goto l_adrver2;
	if (rA2 >= rBfloat)	goto l_adrerr2;
	rA4 = (Ptr) 0;
	if ((Fix) (rA2) >= (Fix) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	rA4 = (Ptr) ((UFix) 0xffff);
l_adrver5:
	{aRet = (rSp++)->Val; goto lRet;}
l_adrver2:
	rA4 = rA2->Val;
	if (rA4 >= rBfloat)	goto l_adrerr2;
	if ((rA2 + 1)->Val >= rBfloat)	goto l_adrerr2;
	rA2 = (rA2 + 1)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_adrver1:
	if ((long) rA2 >= (long) rBcons)	goto l_adrver3;
	if (rA2 >= rBfloat)	goto l_adrerr2;
	rA3 = rA1->Val;
	if (rA3 >= rBfloat)	goto l_adrerr1;
	rA4 = (Ptr) 0;
	if ((Fix) (rA2) >= (Fix) 0)	goto l_adrver6;
	rA4 = (Ptr) ((UFix) 0xffff);
l_adrver6:
	if ((rA1 + 1)->Val >= rBfloat)	goto l_adrerr1;
	rA1 = (rA1 + 1)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_adrver3:
	rA3 = rA1->Val;
	if (rA3 >= rBfloat)	goto l_adrerr1;
	rA4 = rA2->Val;
	if (rA4 >= rBfloat)	goto l_adrerr2;
	if ((rA1 + 1)->Val >= rBfloat)	goto l_adrerr1;
	rA1 = (rA1 + 1)->Val;
	if ((rA2 + 1)->Val >= rBfloat)	goto l_adrerr2;
	rA2 = (rA2 + 1)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_adrerr2:
	rA1 = rA2;
l_adrerr1:
	rA2 = GIadrtmp;
	{aRet = ((Ptr) GXerrnda); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLbllsht_6(void) {	/* adrcreat */
   {	register Ptr aRet, rSp, rA1, rA3;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3;
	if (rA3 != (Ptr) 0)	goto l_adrcrea1;
	if ((Fix) (rA1) < (Fix) 0)	goto l_adrcrea2;
	{aRet = (rSp++)->Val; goto lRet;}
l_adrcrea1:
	if (rA3 != (Ptr) ((UFix) 0xffff))	goto l_adrcrea2;
	if ((Fix) (rA1) < (Fix) 0)	{ aRet = (rSp++)->Val; goto lRet;}
l_adrcrea2:
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA3, rA1);
l_adrcrear:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXaccode(void) {	/* ccode */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	GIa2 = GMaccode;
	if (rA4 == (Ptr) 0)	{aRet = ((Ptr) GLbllsht_10); goto lRet;}
	if (rA4 == (Ptr) 1)	goto l_accodes;
	GIa1 = (Ptr) 1;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_accodes:
	GIa1 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLbllsht_11);
	{aRet = ((Ptr) GXvaga1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbllsht_11(void) {	/* ret_call_vaga1_5 */
   {	register Ptr aRet;
	GIccode = GIa1;
	{aRet = ((Ptr) GLbllsht_10); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLbllsht_10(void) {	/* accodeg */
   {	register Ptr aRet;
	GIa1 = GIccode;
	{aRet = ((Ptr) GXloc); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXaecode(void) {	/* ecode */
   {	register Ptr aRet;
	GIa1 = GIecode;
	{aRet = ((Ptr) GXloc); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXmemory(void) {	/* memory */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = GMmemory;
	if (GIa4 != (Ptr) 2)	{aRet = ((Ptr) GLbllsht_12); goto lRet;}
	GIa1 = (rSp++)->Val;
	GIa3 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLbllsht_13);
	{aRet = ((Ptr) GLbllsht_3); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbllsht_13(void) {	/* ret_call_vaga3_6 */
   {	register Ptr aRet;
	{register Fix *adr;
		adr = (Fix *) GIa3;
		*adr = (Fix) (GIa1);}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLbllsht_12(void) {	/* memor2 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (GIa4 != (Ptr) 1)	{aRet = ((Ptr) GLbllsht_14); goto lRet;}
	GIa1 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLbllsht_15);
	{aRet = ((Ptr) GXvaga1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbllsht_15(void) {	/* ret_call_vaga1_7 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	{register Fix *adr;
		adr = (Fix *) rA1;
		rA1 = (Ptr) ((Fix) *adr);}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLbllsht_14(void) {	/* memor3 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 2;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXbltmemory(void) {	/* bltmemory */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa2;
	GIa2 = GMbltmemory;
	(--rSp)->Val = ((Ptr) GLbllsht_16);
	{aRet = ((Ptr) GXvaga1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbllsht_16(void) {	/* ret_call_vaga1_8 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLbllsht_17);
	{aRet = ((Ptr) GLbllsht_3); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLbllsht_17(void) {	/* ret_call_vaga3_9 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = GIa1;
	GIa1 = rSp->Val;
	(--rSp)->Val = ((Ptr) GLbllsht_18);
	{aRet = ((Ptr) GXvaga1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbllsht_18(void) {	/* ret_call_vaga1_10 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = GIa4;
	{register Fix *src, *end, *dst;
		src = (Fix *) GIa2;
		end = (Fix *) GIa1;
		dst = (Fix *) GIa3;
		while (src < end) *dst++ = *src++;}
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXprecomp(void) {	/* precompile */
   {	register Ptr aRet;
	GIa1 = GIa1->Val;
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllcall(void) {	/* call */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (GIa4 != (Ptr) 4)	{aRet = ((Ptr) GLbllsht_19); goto lRet;}
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	GIa4 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = ((Ptr) GLbllsht_20);
	{aRet = ((Ptr) GXvaga1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLbllsht_20(void) {	/* ret_call_vaga1_11 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	GIa2 = rA1;
	rA1 = GIa4;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLbllsht_19(void) {	/* callerr1 */
   {	register Ptr aRet;
	GIa2 = GMllcall;
	GIa1 = (Ptr) 4;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllcaln(void) {	/* calln */
   {	register Ptr aRet;
	GIa3 = GIa2;
	GIa2 = GMllcaln;
	(--GIsp)->Val = ((Ptr) GLbllsht_21);
	{aRet = ((Ptr) GXvaga1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLbllsht_21(void) {	/* ret_call_vaga1_12 */
   {	register Ptr aRet, rSp, rA3, rA4;
	rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
	rA4 = (Ptr) 0;
	goto l_calln3;
l_calln2:
	(--rSp)->Val = rA3->Val;
	if (rSp < GImstack)	{aRet = ((Ptr) GXerrfs); goto lRet;}
	rA3 = (rA3 + 1)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
l_calln3:
	if ((long) rA3 >= (long) GIbcons)	goto l_calln2;
	{aRet = GIa1; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXepur(void) {	/* epur */
   {	register Ptr aRet;
  lRet:  return (aRet);}}

static Ptr GDbllsht_22() {	/* trace loc */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYbllsht,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDbllsht_23() {	/* trace locint */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYbllsht,3,1,2);
  lRet:  return (aRet);}}

static Ptr GDbllsht_24() {	/* trace vag */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYbllsht,4,1,2);
  lRet:  return (aRet);}}

static Ptr GDbllsht_25() {	/* trace addadr */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYbllsht,5,1,6);
  lRet:  return (aRet);}}

static Ptr GDbllsht_26() {	/* trace incradr */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYbllsht,7,1,6);
  lRet:  return (aRet);}}

static Ptr GDbllsht_27() {	/* trace subadr */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYbllsht,8,1,6);
  lRet:  return (aRet);}}

static Ptr GDbllsht_28() {	/* trace gtadr */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYbllsht,9,1,6);
  lRet:  return (aRet);}}

static Ptr GDbllsht_29() {	/* trace ccode */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYbllsht,10,1,11);
  lRet:  return (aRet);}}

static Ptr GDbllsht_30() {	/* trace ecode */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYbllsht,12,1,13);
  lRet:  return (aRet);}}

static Ptr GDbllsht_31() {	/* trace memory */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYbllsht,14,1,11);
  lRet:  return (aRet);}}

static Ptr GDbllsht_32() {	/* trace bltmemory */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYbllsht,15,1,16);
  lRet:  return (aRet);}}

static Ptr GDbllsht_33() {	/* trace precompile */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYbllsht,17,1,18);
  lRet:  return (aRet);}}

static Ptr GDbllsht_34() {	/* trace call */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYbllsht,19,1,11);
  lRet:  return (aRet);}}

static Ptr GDbllsht_35() {	/* trace calln */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYbllsht,20,1,6);
  lRet:  return (aRet);}}

