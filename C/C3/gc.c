/* GELL 15.26: source file for the module: "gc" */
/*             translation done:           "Sat Oct   7 17 20:53:02 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "gc.h" 

static Ptr GLgc_1(void) {	/* startmodule */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXini_gc); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_gc(void) {	/* ini_gc */
   {	register Ptr aRet;
	{ llrt_inisymb ((Ptr) 2, (Ptr) "gc", ((Ptr) GXgcuser), (Ptr) &GMgcuser, (Ptr) GFgcuser);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "gcalarm", ((Ptr) GXgcalarm), (Ptr) &GMgcalarm, (Ptr) GFgcalarm);}
	{ llrt_inisymb ((Ptr) 15, (Ptr) "gc-before-alarm", ((Ptr) GXgcalarb), (Ptr) &GMgcalarb, (Ptr) GFgcalarb);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "gcinfo", ((Ptr) GXgcinfo), (Ptr) &GMgcinfo, (Ptr) GFgcinfo);}
	{ llrt_inicst ((Ptr) 4, (Ptr) "code", (Ptr) &GMsizecd);}
	{ llrt_inicst ((Ptr) 4, (Ptr) "heap", (Ptr) &GMsizehp);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "tconscl", ((Ptr) GXtconscl), (Ptr) &GMtconscl, (Ptr) GFtconscl);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "tconsmk", ((Ptr) GXtconsmk), (Ptr) &GMtconsmk, (Ptr) GFtconsmk);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "tcons", ((Ptr) GXtcons), (Ptr) &GMtcons, (Ptr) GFtcons);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "tconsp", ((Ptr) GXtconsp), (Ptr) &GMtconsp, (Ptr) GFtconsp);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "freecons", ((Ptr) GXfrcons), (Ptr) &GMfrcons, (Ptr) GFfrcons);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "freetree", ((Ptr) GXfrtree), (Ptr) &GMfrtree, (Ptr) GFfrtree);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "type-of", ((Ptr) GXgettype), (Ptr) &GMgettype, (Ptr) GFgettype);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "subtypep", ((Ptr) GXsubtypep), (Ptr) &GMsubtypep, (Ptr) GFsubtypep);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "typep", ((Ptr) GXtypep), (Ptr) &GMtypep, (Ptr) GFtypep);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "send", ((Ptr) GXllsend), (Ptr) &GMllsend, (Ptr) GFllsend);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "send-super", ((Ptr) GXsupsend), (Ptr) &GMsupsend, (Ptr) GFsupsend);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "csend", ((Ptr) GXcsend), (Ptr) &GMcsend, (Ptr) GFcsend);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "send2", ((Ptr) GXsendbi), (Ptr) &GMsendbi, (Ptr) GFsendbi);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "send-error", ((Ptr) GXsenderro), (Ptr) &GMsenderro, (Ptr) GFsenderro);}
	GIcpkgc = GMllsystem;
	{ llrt_inisymb ((Ptr) 12, (Ptr) "structaccess", ((Ptr) GXstrctacc), (Ptr) &GMstrctacc, (Ptr) GFstrctacc);}
	{ llrt_inicst ((Ptr) 11, (Ptr) "bignum-type", (Ptr) &GMbigtype);}
	{ llrt_inisymb ((Ptr) 12, (Ptr) "mapallvector", ((Ptr) GXsmpvect), (Ptr) &GMsmpvect, (Ptr) GFsmpvect);}
	{ llrt_inisymb ((Ptr) 12, (Ptr) "mapallstring", ((Ptr) GXsmpstrg), (Ptr) &GMsmpstrg, (Ptr) GFsmpstrg);}
	{ llrt_inicst ((Ptr) 13, (Ptr) "finalize-flag", (Ptr) &GMfnalzeff);}
	GIa1->Val = GInil;
	{ llrt_inisymb ((Ptr) 17, (Ptr) "finalize-function", ((Ptr) GXfnalzefn), (Ptr) &GMfnalzefn, (Ptr) GFfnalzefn);}
	GIcpkgc = GInil;
	GIngccons = (Ptr) 0;
	GIngcsymb = (Ptr) 0;
	GIngcstrg = (Ptr) 0;
	GIngcvect = (Ptr) 0;
	GIngcfloat = (Ptr) 0;
	GIngcnumb = (Ptr) 0;
	GIngcuser = (Ptr) 0;
	GIngch = (Ptr) 0;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXhgc(void) {	/* hgc */
   {	register Ptr aRet;
	GIngch = (Ptr) ((UFix) ((Fix) (GIngch) + (Fix) (1)));
	{aRet = ((Ptr) GLgc_2); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgccons(void) {	/* gccons */
   {	register Ptr aRet;
	GIngccons = (Ptr) ((UFix) ((Fix) (GIngccons) + (Fix) (1)));
	(--GIsp)->Val = ((Ptr) GLgc_3);
	{aRet = ((Ptr) GLgc_2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_3(void) {	/* ret_call_gcgo_1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if ((Fix) (GIfreelm) > (Fix) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	if ((Fix) (GIfreelu) >= (Fix) 400)	{ aRet = (rSp++)->Val; goto lRet;}
	{aRet = ((Ptr) GXerrfm); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXgcsymb(void) {	/* gcsymb */
   {	register Ptr aRet;
	GIngcsymb = (Ptr) ((UFix) ((Fix) (GIngcsymb) + (Fix) (1)));
	(--GIsp)->Val = ((Ptr) GLgc_4);
	{aRet = ((Ptr) GLgc_2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_4(void) {	/* ret_call_gcgo_2 */
   {	register Ptr aRet;
	if (GIfsymb != (Ptr) 0)	{ aRet = (GIsp++)->Val; goto lRet;}
	{aRet = ((Ptr) GXerrato); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgcstrg(void) {	/* gcstrg */
   {	register Ptr aRet;
	GIngcstrg = (Ptr) ((UFix) ((Fix) (GIngcstrg) + (Fix) (1)));
	(--GIsp)->Val = ((Ptr) GLgc_5);
	{aRet = ((Ptr) GLgc_2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_5(void) {	/* ret_call_gcgo_3 */
   {	register Ptr aRet;
	if (GIfstrg != GInil)	{ aRet = (GIsp++)->Val; goto lRet;}
	{aRet = ((Ptr) GXerrfr); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgcvect(void) {	/* gcvect */
   {	register Ptr aRet;
	GIngcvect = (Ptr) ((UFix) ((Fix) (GIngcvect) + (Fix) (1)));
	(--GIsp)->Val = ((Ptr) GLgc_6);
	{aRet = ((Ptr) GLgc_2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_6(void) {	/* ret_call_gcgo_4 */
   {	register Ptr aRet;
	if (GIfvect != GInil)	{ aRet = (GIsp++)->Val; goto lRet;}
	{aRet = ((Ptr) GXerrfv); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgcfloat(void) {	/* gcfloat */
   {	register Ptr aRet;
	GIngcfloat = (Ptr) ((UFix) ((Fix) (GIngcfloat) + (Fix) (1)));
	(--GIsp)->Val = ((Ptr) GLgc_7);
	{aRet = ((Ptr) GLgc_2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_7(void) {	/* ret_call_gcgo_5 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if ((Fix) (GIfreefm) > (Fix) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	if ((Fix) (GIfreefu) > (Fix) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	{aRet = ((Ptr) GXerrff); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXgcnumb(void) {	/* gcnumb */
   {	register Ptr aRet;
	GIngcnumb = (Ptr) ((UFix) ((Fix) (GIngcnumb) + (Fix) (1)));
	(--GIsp)->Val = ((Ptr) GLgc_8);
	{aRet = ((Ptr) GLgc_2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_8(void) {	/* ret_call_gcgo_6 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if ((Fix) (GIfreenm) > (Fix) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	if ((Fix) (GIfreenu) > (Fix) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	{aRet = ((Ptr) GXerrfn); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_2(void) {	/* gcgo */
   {	register Ptr aRet, rSp, rA4, rNil;
	rSp = GIsp; rA4 = GIa4; rNil = GInil;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = GIa3;
	(--rSp)->Val = rA4;
	(--rSp)->Val = GIllink;
	(--rSp)->Val = GIevalst;
	(--rSp)->Val = GIforme;
	(--rSp)->Val = GIfunct;
	(--rSp)->Val = GIsavea1;
	(--rSp)->Val = GIsavea2;
	(--rSp)->Val = GIsavea3;
	(--rSp)->Val = GIsavea4;
	(--rSp)->Val = GIerrname;
	(--rSp)->Val = GIintret;
	(--rSp)->Val = GIintllink;
	(--rSp)->Val = GIiexpld;
	(--rSp)->Val = GIimpli;
	(--rSp)->Val = GIringur;
	(--rSp)->Val = GIcurread;
	(--rSp)->Val = GIimpld;
	(--rSp)->Val = GIlexpld;
	rA4 = rSp;
	(--rSp)->Val = GIasymb;
	(--rSp)->Val = GItabch;
	(--rSp)->Val = GIcachch;
	(--rSp)->Val = GIbufat;
	(--rSp)->Val = GIcpkgc;
	(--rSp)->Val = GItabtypfn;
	(--rSp)->Val = GItabcodfn;
	(--rSp)->Val = GItabctyp;
	(--rSp)->Val = GItabccod;
	(--rSp)->Val = GIbufpn;
	(--rSp)->Val = GIbufstrg;
	(--rSp)->Val = GIcurprmpt;
	(--rSp)->Val = GItabchan;
	(--rSp)->Val = GIcntrlc;
	(--rSp)->Val = GIbufch;
	(--rSp)->Val = GIrubstrg;
	(--rSp)->Val = GIcstsyste;
	(--rSp)->Val = GIfzero;
	(--rSp)->Val = GIfltun;
	(--rSp)->Val = GIfltmun;
	(--rSp)->Val = GIfltimax;
	(--rSp)->Val = GIfltimin;
	(--rSp)->Val = rA4;
	GIiexpld = rNil;
	GIimpli = rNil;
	GIllink = rNil;
	GIa1 = GMgcalarb;
	GIa2 = rNil;
	(--rSp)->Val = ((Ptr) GLgc_9);
	{aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_9(void) {	/* ret_call_itsoft_7 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLgc_10);
	{aRet = ((Ptr) GLgc_11); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_10(void) {	/* ret_call_gcnoit_8 */
   {	register Ptr aRet;
	GIa1 = GMgcalarm;
	GIa2 = GInil;
	(--GIsp)->Val = ((Ptr) GLgc_12);
	{aRet = ((Ptr) GXitsoft); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_12(void) {	/* ret_call_itsoft_9 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	rA4 = (rSp++)->Val;
	rSp = rA4;
	GIlexpld = (rSp++)->Val;
	GIimpld = (rSp++)->Val;
	GIcurread = (rSp++)->Val;
	GIringur = (rSp++)->Val;
	GIimpli = (rSp++)->Val;
	GIiexpld = (rSp++)->Val;
	GIintllink = (rSp++)->Val;
	GIintret = (rSp++)->Val;
	GIerrname = (rSp++)->Val;
	GIsavea4 = (rSp++)->Val;
	GIsavea3 = (rSp++)->Val;
	GIsavea2 = (rSp++)->Val;
	GIsavea1 = (rSp++)->Val;
	GIfunct = (rSp++)->Val;
	GIforme = (rSp++)->Val;
	GIevalst = (rSp++)->Val;
	GIllink = (rSp++)->Val;
	rA4 = (rSp++)->Val;
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
l_gcpopj:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_11(void) {	/* gcnoit */
   {	register Ptr aRet;
	if (GIitstate == (Ptr) 0)	{aRet = ((Ptr) GLgc_13); goto lRet;}
	GIa3 = ((Ptr) GLgc_14);
	(--GIsp)->Val = ((Ptr) GLgc_15);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_15(void) {	/* ret_call_sysprot_10 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	GIitstate = (Ptr) 1;
	{aRet = GIa3; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_14(void) {	/* gcst00 */
   {	register Ptr aRet;
	GIitstate = (Ptr) 0;
	{aRet = ((Ptr) GLgc_13); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_13(void) {	/* gcst0 */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXgcstmrk); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgcstmrk(void) {	/* gcstmrk */
   {	register Ptr aRet;
	GIa4 = GIsp;
	GIa3 = GIbstack;
	{aRet = ((Ptr) GLgc_16); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_16(void) {	/* gcst1 */
   {	register Ptr aRet;
	GIa1 =  (GIa4++)->Val;
	(--GIsp)->Val = ((Ptr) GLgc_17);
	{aRet = ((Ptr) GLgc_18); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_17(void) {	/* ret_call_mark_11 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (rA4 != GIa3)	{aRet = ((Ptr) GLgc_16); goto lRet;}
	GIa1 = GIhashtab;
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) GIa1 - (TableElem) GIbnumb);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		GIbtbgc[aux] |= mask;}
	rA4 = (GIhashtab->Val + 1)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	{aRet = ((Ptr) GLgc_19); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLgc_19(void) {	/* gcat0 */
   {	register Ptr aRet;
	GIa4 = (GIhashtab->Val + 2 + (Fix) (GIa4))->Val;
	{aRet = ((Ptr) GLgc_20); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_21(void) {	/* gcat1 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	GIa3 = rA4;
	if (((rA4 + 7)->Val >= GIbstrg) && ((rA4 + 7)->Val < GIbsymb))	{aRet = ((Ptr) GLgc_22); goto lRet;}
	{aRet = ((Ptr) GLgc_23); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_23(void) {	/* gcat2 */
   {	register Ptr aRet;
	GIa4 = (GIa4 + 7)->Val;
	{aRet = ((Ptr) GLgc_22); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_22(void) {	/* gcat5 */
   {	register Ptr aRet;
	GIa1 = GIa4->Val;
	if (GIa1 == GMundef)	{aRet = ((Ptr) GLgc_24); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLgc_24);
	{aRet = ((Ptr) GLgc_18); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_24(void) {	/* gcatm1 */
   {	register Ptr aRet;
	GIa1 = (GIa4 + 1)->Val;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLgc_25); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLgc_25);
	{aRet = ((Ptr) GLgc_18); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_25(void) {	/* gcatm2 */
   {	register Ptr aRet;
	GIa1 = (GIa4 + 2)->Val;
	if (GIa1 == (Ptr) 0)	{aRet = ((Ptr) GLgc_26); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLgc_26);
	{aRet = ((Ptr) GLgc_18); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_26(void) {	/* gcatm3 */
   {	register Ptr aRet;
	GIa1 = (GIa4 + 3)->Val;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLgc_27); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLgc_27);
	{aRet = ((Ptr) GLgc_18); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_27(void) {	/* gcatm4 */
   {	register Ptr aRet;
	GIa1 = (GIa4 + 4)->Val;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLgc_28); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLgc_28);
	{aRet = ((Ptr) GLgc_18); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_28(void) {	/* gcatm5 */
   {	register Ptr aRet, rA1, rA4, rBstrg, rBsymb;
	rA1 = GIa1; rA4 = GIa4; rBstrg = GIbstrg; rBsymb = GIbsymb;
	rA1 = (rA4 + 5)->Val;
	if ((rA1 >= rBstrg) && (rA1 < rBsymb))	goto l_gcatm9;
	rA1 = (rA4 + 7)->Val;
	if ((rA1 >= rBstrg) && (rA1 < rBsymb))	goto l_gcatm9;
	rA1 = (rA1 + 5)->Val;
l_gcatm9:
	(--GIsp)->Val = ((Ptr) GLgc_29);
	{aRet = ((Ptr) GLgc_18); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLgc_29(void) {	/* ret_call_mark_17 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (rA4 != GIa3)	{aRet = ((Ptr) GLgc_23); goto lRet;}
l_gcat6:
	rA4 = (rA4 + 5)->Val;
	{aRet = ((Ptr) GLgc_20); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLgc_20(void) {	/* gcat8 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if ((rA4 >= GIbsymb) && (rA4 < GIbcons))	{aRet = ((Ptr) GLgc_21); goto lRet;}
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	{aRet = ((Ptr) GLgc_19); goto lRet;}}
	{aRet = ((Ptr) GLgc_30); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLgc_18(void) {	/* mark */
   {	register Ptr aRet, rSp, rA1, rBnumb, rBstrg;
	rSp = GIsp; rA1 = GIa1; rBnumb = GIbnumb; rBstrg = GIbstrg;
l_gcmark_gc_31:
	if ((rA1 < rBnumb) || (rA1 >= GIecons))	goto l_gcmark_gc_33;
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBnumb);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		if ((GIbtbgc[aux] & mask) != 0)	goto l_gcmark_gc_33;
		GIbtbgc[aux] |= mask;}
	if ((long) rA1 >= (long) GIbcons)	goto l_gcmark_gc_35;
	if ((rA1 >= GIbvect) && (rA1 < rBstrg))	{aRet = ((Ptr) GLgc_39); goto lRet;}
	if ((rA1 >= rBstrg) && (rA1 < GIbsymb))	goto l_gcmark_gc_34;
l_gcmark_gc_33:
	{aRet = (rSp++)->Val; goto lRet;}
l_gcmark_gc_34:
	rA1 = (rA1 + 1)->Val;
	goto l_gcmark_gc_31;
l_gcmark_gc_35:
	if (rSp < GIestack)	{aRet = ((Ptr) GXerrfsgc); goto lRet;}
	(--rSp)->Val = (rA1 + 1)->Val;
	rA1 = rA1->Val;
	(--rSp)->Val = ((Ptr) GLgc_40);
	goto l_gcmark_gc_31;
	{aRet = ((Ptr) GLgc_40); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLgc_40(void) {	/* gcmark_gc_32 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	{aRet = ((Ptr) GLgc_18); goto lRet;}
	{aRet = ((Ptr) GLgc_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_39(void) {	/* gcmark_gc_36 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = GIa3;
	GIa3 = (rA1->Val + 1)->Val;
	(--rSp)->Val = rA1;
	if (rSp < GIestack)	{aRet = ((Ptr) GXerrfsgc); goto lRet;}
	{aRet = ((Ptr) GLgc_41); goto lRet;}
	{aRet = ((Ptr) GLgc_42); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_42(void) {	/* gcmark_gc_37 */
   {	register Ptr aRet, rSp, rA3;
	rSp = GIsp; rA3 = GIa3;
	GIa1 = (rSp->Val->Val + 2 + (Fix) (rA3))->Val;
	(--rSp)->Val = rA3;
	(--rSp)->Val = ((Ptr) GLgc_44);
	{aRet = ((Ptr) GLgc_18); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_44(void) {	/* call_gc_43 */
   {	register Ptr aRet;
	GIa3 = (GIsp++)->Val;
	{aRet = ((Ptr) GLgc_41); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_41(void) {	/* gcmark_gc_38 */
   {	register Ptr aRet, rSp, rA1, rA3;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3;
	{register Fix aux;
		aux = (Fix) (rA3) - 1;
		rA3 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	{aRet = ((Ptr) GLgc_42); goto lRet;}}
	rA1 = (rSp++)->Val;
	rA3 = (rSp++)->Val;
	rA1 = (rA1 + 1)->Val;
	{aRet = ((Ptr) GLgc_18); goto lRet;}
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

static Ptr GLgc_30(void) {	/* gcfnlz */
   {	register Ptr aRet, rA2, rA3;
	rA2 = GIa2; rA3 = GIa3;
	rA2 = GMfnalzeff;
	rA2 = rA2->Val;
	if (rA2 == GInil)	{aRet = ((Ptr) GLgc_45); goto lRet;}
	rA2 = GMfnalzefn;
	{register UFix aux;
		aux = (UFix) ((rA2 + 6)->Val);
		rA3 = (Ptr) aux;}
	if (rA3 != (Ptr) 2)	{aRet = ((Ptr) GLgc_45); goto lRet;}
	rA3 = (rA2 + 2)->Val;
	GIa1 = GIbvect;
	{aRet = ((Ptr) GLgc_46); goto lRet;}
  lRet: GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLgc_46(void) {	/* gcfnlz2 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) GIbnumb);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		aux = GIbtbgc[aux] & mask;
		if (aux != 0)	{aRet = ((Ptr) GLgc_47); goto lRet;}}
	rA2 = rA1->Val;
	if (rA2 == GInil)	{aRet = ((Ptr) GLgc_47); goto lRet;}
	if ((rA2 >= GIbvect) && (rA2 < GIbstrg))	{aRet = ((Ptr) GLgc_47); goto lRet;}
	(--rSp)->Val = rA1;
	(--rSp)->Val = rA3;
	(--rSp)->Val = ((Ptr) GLgc_48);
	{aRet = rA3; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLgc_48(void) {	/* gcfnlz6 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa3 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	{aRet = ((Ptr) GLgc_47); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_47(void) {	/* gcfnlz8 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	rA1 += (Fix) (2);
	if (rA1 < GIbstrg)	{aRet = ((Ptr) GLgc_46); goto lRet;}
	{aRet = ((Ptr) GLgc_45); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLgc_45(void) {	/* gcompact */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
	rA3 = GIbheap;
	rA4 = GIbheap;
	goto l_hsweep8;
l_hsweep2:
	rA1 = rA3->Val;
	if ((rA1 >= rBstrg) && (rA1 < rBsymb))	goto l_hsweep4;
	if ((rA1 >= rBvect) && (rA1 < rBstrg))	goto l_hsweep5;
	if (llrt_floatp (rA1) != 0) 
	goto l_hsweep6;
	if ((rA1 >= rBsymb) && (rA1 < rBcons))	goto l_hsweep7;
	llrt_ttyout((Fix) 13, "* HEAP-OVNI *");
	llovni(GIbheap,GIcheap,GIeheap,GIoswheap);
	goto l_gcsweep;
l_hsweep4:
	GIoswheap = rA3;
	rA2 = (rA3 + 1)->Val;
	rA3 += 3 + (((Fix) (rA2)) / sizeof(Ptr));
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBnumb);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		aux = GIbtbgc[aux] & mask;
		if (aux == 0)	goto l_hsweep8;}
	if (GIoswheap != rA4)	goto l_hsweep41;
	rA4 = rA3;
	goto l_hsweep8;
l_hsweep41:
	{register Table src, dst, fin;
		src = (Table) GIoswheap;
		dst = (Table) rA4;
		fin = (Table) rA3;
		while (src != fin) *dst++ = *src++;}
	rA1->Val = rA4;
	rA4 += 3 + (((Fix) (rA2)) / sizeof(Ptr));
	goto l_hsweep8;
l_hsweep5:
	GIoswheap = rA3;
	rA2 = (rA3 + 1)->Val;
	rA3 = (rA3 + 2 + (Fix) (rA2));
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBnumb);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		aux = GIbtbgc[aux] & mask;
		if (aux == 0)	goto l_hsweep8;}
	if (GIoswheap != rA4)	goto l_hsweep51;
	rA4 = rA3;
	goto l_hsweep8;
l_hsweep51:
	{register Table src, dst, fin;
		src = (Table) GIoswheap;
		dst = (Table) rA4;
		fin = (Table) rA3;
		while (src != fin) *dst++ = *src++;}
	rA1->Val = rA4;
	rA4 = (rA4 + 2 + (Fix) (rA2));
	goto l_hsweep8;
l_hsweep6:
	GIoswheap = rA3;
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBnumb);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		aux = GIbtbgc[aux] & mask;
		if (aux == 0)	goto l_hsweep8;}
	if (GIoswheap != rA4)	goto l_hsweep61;
	rA4 = rA3;
	goto l_hsweep8;
l_hsweep61:
	{register Table src, dst, fin;
		src = (Table) GIoswheap;
		dst = (Table) rA4;
		fin = (Table) GIswheap;
		while (src != fin) *dst++ = *src++;}
	rA1->Val = rA4;
	goto l_hsweep8;
l_hsweep7:
	GIoswheap = rA3;
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBnumb);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		aux = GIbtbgc[aux] & mask;
		if (aux == 0)	goto l_hsweep8;}
	if (GIoswheap != rA4)	goto l_hsweep71;
	rA4 = rA3;
	goto l_hsweep8;
l_hsweep71:
	{register Table src, dst, fin;
		src = (Table) GIoswheap;
		dst = (Table) rA4;
		fin = (Table) rA3;
		while (src != fin) *dst++ = *src++;}
	rA1->Val = rA4;
l_hsweep8:
	if (rA3 < GIcheap)	goto l_hsweep2;
	GIcheap = rA4;
	goto l_gcsweep;
l_gcsweep:
	rA1 = (Ptr) 0;
	rA2 = (Ptr) 0;
	rA3 = (Ptr) 0;
	rA4 = GIcnumb;
	if ((rA4 < rBnumb) || (rA4 >= rBfloat))	goto l_gcswn4;
l_gcswn1:
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA4 - (TableElem) rBnumb);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		if (GIbtbgc[aux] & mask) {GIbtbgc[aux] &= ~mask;	goto l_gcswn3;}}
	rA4->Val = rA1;
	rA1 = rA4;
	{register int aux;
		aux = (int) ((Fix) (rA2) + 1);
		if (aux < 1024) {
			rA2 = (Ptr) ((UFix) aux);
		 } else {
			rA2 = (Ptr) 0;
			rA3 = (Ptr) ((UFix) ((Fix) (rA3) + 1));}}
l_gcswn3:
	rA4 += (Fix) (1);
	if (rA4 < rBfloat)	goto l_gcswn1;
l_gcswn4:
	GIfnumb = rA1;
	GIfreenu = rA2;
	GIfreenm = rA3;
	rA1 = (Ptr) 0;
	rA2 = (Ptr) 0;
	rA3 = (Ptr) 0;
	rA4 = rBfloat;
	if (llrt_floatp (rA4) == 0) 
	goto l_gcswf4;
l_gcswf1:
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA4 - (TableElem) rBnumb);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		if (GIbtbgc[aux] & mask) {GIbtbgc[aux] &= ~mask;	goto l_gcswf3;}}
	rA4->Val = rA1;
	rA1 = rA4;
	{register int aux;
		aux = (int) ((Fix) (rA2) + 1);
		if (aux < 1024) {
			rA2 = (Ptr) ((UFix) aux);
		 } else {
			rA2 = (Ptr) 0;
			rA3 = (Ptr) ((UFix) ((Fix) (rA3) + 1));}}
l_gcswf3:
	rA4 += (Fix) (2);
	if (rA4 < rBvect)	goto l_gcswf1;
l_gcswf4:
	GIffloat = rA1;
	GIfreefu = rA2;
	GIfreefm = rA3;
	rA1 = rNil;
	rA2 = (Ptr) 0;
	rA3 = (Ptr) 0;
	rA4 = rBvect;
l_gcswv1:
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA4 - (TableElem) rBnumb);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		if (GIbtbgc[aux] & mask) {GIbtbgc[aux] &= ~mask;	goto l_gcswv2;}}
	rA4->Val = rA1;
	rA1 = rA4;
	{register int aux;
		aux = (int) ((Fix) (rA2) + 1);
		if (aux < 1024) {
			rA2 = (Ptr) ((UFix) aux);
		 } else {
			rA2 = (Ptr) 0;
			rA3 = (Ptr) ((UFix) ((Fix) (rA3) + 1));}}
l_gcswv2:
	rA4 += (Fix) (2);
	if (rA4 < rBstrg)	goto l_gcswv1;
	GIfvect = rA1;
	GIfreevu = rA2;
	GIfreevm = rA3;
	rA1 = rNil;
	rA2 = (Ptr) 0;
	rA3 = (Ptr) 0;
	rA4 = rBstrg;
l_gcsws1:
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA4 - (TableElem) rBnumb);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		if (GIbtbgc[aux] & mask) {GIbtbgc[aux] &= ~mask;	goto l_gcsws2;}}
	rA4->Val = rA1;
	rA1 = rA4;
	{register int aux;
		aux = (int) ((Fix) (rA2) + 1);
		if (aux < 1024) {
			rA2 = (Ptr) ((UFix) aux);
		 } else {
			rA2 = (Ptr) 0;
			rA3 = (Ptr) ((UFix) ((Fix) (rA3) + 1));}}
l_gcsws2:
	rA4 += (Fix) (2);
	if (rA4 < rBsymb)	goto l_gcsws1;
	GIfstrg = rA1;
	GIfreesu = rA2;
	GIfreesm = rA3;
	rA2 = (Ptr) 0;
	rA3 = (Ptr) 0;
	rA1 = GIfsymb;
	goto l_gcswyc3;
l_gcswyc2:
	rA1 = (rA1 + 5)->Val;
	{register int aux;
		aux = (int) ((Fix) (rA2) + 1);
		if (aux < 1024) {
			rA2 = (Ptr) ((UFix) aux);
		 } else {
			rA2 = (Ptr) 0;
			rA3 = (Ptr) ((UFix) ((Fix) (rA3) + 1));}}
l_gcswyc3:
	if ((rA1 >= rBsymb) && (rA1 < rBcons))	goto l_gcswyc2;
	GIfreeyu = rA2;
	GIfreeym = rA3;
	rA1 = (GIhashtab->Val + 1)->Val;
	goto l_gcswy9;
l_gcswy2:
	rA2 = rA1;
	rA1 = (GIhashtab->Val + 2 + (Fix) (rA1))->Val;
	goto l_gcswy8;
l_gcswy3:
	rA3 = rA1;
	rA4 = rA1;
l_gcswy4:
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBnumb);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		if (GIbtbgc[aux] & mask) {GIbtbgc[aux] &= ~mask;	goto l_gcswy5;}}
	if ((rA1 < GIbvar) || (rA1 >= rBcons))	goto l_gcswy5;
	if (rA1->Val != GMundef)	goto l_gcswy5;
	if ((rA1 + 1)->Val != rNil)	goto l_gcswy5;
	if ((rA1 + 4)->Val != rNil)	goto l_gcswy5;
	(--rSp)->Val = rA2;
	{register UFix aux;
		aux = (UFix) ((rA1 + 6)->Val);
		rA2 = (Ptr) aux;}
	if (rA2 == (Ptr) 0)	goto l_gcswys;
	rA2 = (rSp++)->Val;
l_gcswy5:
	if (((rA1 + 7)->Val >= rBstrg) && ((rA1 + 7)->Val < rBsymb))	goto l_gcswy6;
l_gcswy50:
	rA4 = rA1;
	rA1 = (rA1 + 7)->Val;
	if (rA1 != rA3)	goto l_gcswy4;
l_gcswy6:
	rA2 = rA3;
	rA1 = (rA3 + 5)->Val;
l_gcswy8:
	if ((rA1 >= rBsymb) && (rA1 < rBcons))	goto l_gcswy3;
l_gcswy9:
	{register Fix aux;
		aux = (Fix) (rA1) - 1;
		rA1 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_gcswy2;}
	{aRet = ((Ptr) GXgcswcons); goto lRet;}
l_gcswys:
	rA2 = (rSp++)->Val;
	if (((rA1 + 7)->Val >= rBstrg) && ((rA1 + 7)->Val < rBsymb))	goto l_gcswys1;
	if (rA1 != rA3)	goto l_gcswys2;
	goto l_gcswys3;
l_gcswys1:
	rA4 = (rA1 + 5)->Val;
	if (rA2 < rBfloat)	goto l_gcswys12;
	(rA2 + 5)->Val = rA4;
	goto l_gcswys14;
l_gcswys12:
	(GIhashtab->Val + 2 + (Fix) (rA2))->Val = rA4;
l_gcswys14:
	(rA1 + 5)->Val = GIfsymb;
	GIfsymb = rA1;
	{register int aux;
		aux = (int) ((Fix) (GIfreeyu) + 1);
		if (aux < 1024) {
			GIfreeyu = (Ptr) ((UFix) aux);
		 } else {
			GIfreeyu = (Ptr) 0;
			GIfreeym = (Ptr) ((UFix) ((Fix) (GIfreeym) + 1));}}
	rA1 = rA4;
	goto l_gcswy8;
l_gcswys2:
	(rA4 + 7)->Val = (rA1 + 7)->Val;
	if (rA3 == (rA3 + 7)->Val)	goto l_gcswys20;
	(rA1 + 5)->Val = GIfsymb;
	GIfsymb = rA1;
	{register int aux;
		aux = (int) ((Fix) (GIfreeyu) + 1);
		if (aux < 1024) {
			GIfreeyu = (Ptr) ((UFix) aux);
		 } else {
			GIfreeyu = (Ptr) 0;
			GIfreeym = (Ptr) ((UFix) ((Fix) (GIfreeym) + 1));}}
	rA1 = rA4;
	goto l_gcswy50;
l_gcswys20:
	(rA3 + 7)->Val = (rA1 + 5)->Val;
	(rA1 + 5)->Val = GIfsymb;
	GIfsymb = rA1;
	{register int aux;
		aux = (int) ((Fix) (GIfreeyu) + 1);
		if (aux < 1024) {
			GIfreeyu = (Ptr) ((UFix) aux);
		 } else {
			GIfreeyu = (Ptr) 0;
			GIfreeym = (Ptr) ((UFix) ((Fix) (GIfreeym) + 1));}}
	goto l_gcswy6;
l_gcswys3:
	if (rA2 < rBfloat)	goto l_gcswys30;
	(rA2 + 5)->Val = (rA3 + 7)->Val;
	goto l_gcswys31;
l_gcswys30:
	(GIhashtab->Val + 2 + (Fix) (rA2))->Val = (rA3 + 7)->Val;
l_gcswys31:
	rA4 = rA3;
l_gcswys32:
	rA4 = (rA4 + 7)->Val;
	if ((rA4 + 7)->Val != rA3)	goto l_gcswys32;
	(rA4 + 7)->Val = (rA3 + 7)->Val;
	rA3 = (rA3 + 7)->Val;
	if (rA3 != (rA3 + 7)->Val)	goto l_gcswys33;
	(rA3 + 7)->Val = (rA3 + 5)->Val;
	(rA3 + 5)->Val = (rA1 + 5)->Val;
	goto l_gcswys34;
l_gcswys33:
	(rA3 + 5)->Val = (rA1 + 5)->Val;
l_gcswys34:
	(rA1 + 5)->Val = GIfsymb;
	GIfsymb = rA1;
	{register int aux;
		aux = (int) ((Fix) (GIfreeyu) + 1);
		if (aux < 1024) {
			GIfreeyu = (Ptr) ((UFix) aux);
		 } else {
			GIfreeyu = (Ptr) 0;
			GIfreeym = (Ptr) ((UFix) ((Fix) (GIfreeym) + 1));}}
	rA1 = rA3;
	goto l_gcswy3;
	{aRet = ((Ptr) GXgcswcons); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXgcswcons(void) {	/* gcswcons */
   {	register Ptr aRet, rA1, rA2, rA3, rA4, rNil;
	rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
	rA1 = rNil;
	rA2 = (Ptr) 0;
	rA3 = (Ptr) 0;
	rA4 = GIbcons;
	{ register int reg_count, i;
	  register TableElem  aux, reg_mask, reg_bask;
	  register Table regbtbgc, regbtbin;
	  register Ptr regecons;
	  reg_count = 0;
	  regbtbin = GIbtbin;
	 regecons = GIecons;
	  aux = (TableElem) ((TableElem) rA4 - (TableElem) GIbnumb);
	  aux >>= PTR2_SHIFT + ELEM_SHIFT;
	  regbtbgc = &GIbtbgc[aux];
	  do {
		reg_mask = 1;
		reg_bask = *regbtbgc;
		for (i=0; i<TABLE_ELEM_NB_OF_BIT; i++) {
			if (reg_bask & reg_mask) {
			} else {
				(rA4 + 1)->Val = rA1;
				rA4->Val = rNil;
				rA1 = rA4;
				reg_count++;
			}
			rA4 += 2;
			reg_mask <<= 1;
		}
		*regbtbin++ &= reg_bask;
		*regbtbgc++ = 0;
	} while (rA4 < regecons);
	rA3 = (Ptr) (reg_count >> 10);
	rA2 = (Ptr) (reg_count & 0x3FF);
	}
	GIfcons = rA1;
	GIfreelu = rA2;
	GIfreelm = rA3;
	goto l_gcswend;
l_gcswend:
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXgcuser(void) {	/* gc */
   {	register Ptr aRet, rSp, rA1, rA4;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
	if (rA4 == (Ptr) 1)	goto l_gcuser5;
	if (rA4 == (Ptr) 0)	goto l_gcuser4;
	rA1 = (Ptr) 1;
	GIa2 = GMgcuser;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_gcuser4:
	rA1 = GInil;
	(--rSp)->Val = rA1;
l_gcuser5:
	GIngcuser = (Ptr) ((UFix) ((Fix) (GIngcuser) + (Fix) (1)));
	(--rSp)->Val = ((Ptr) GLgc_58);
	{aRet = ((Ptr) GLgc_2); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLgc_58(void) {	/* ret_call_gcgo_18 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	rA1 = (rSp++)->Val;
	if (rA1 != GInil)	{aRet = ((Ptr) GLgc_59); goto lRet;}
	rA1 = GMt;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXgcalarb(void) {	/* gc-before-alarm */
   {	register Ptr aRet;
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgcalarm(void) {	/* gcalarm */
   {	register Ptr aRet;
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfnalzefn(void) {	/* finalize-function */
   {	register Ptr aRet;
	llrt_ttyout((Fix) 34, "Calling #:system:finalize-function");
	llrt_ttyout(2, "\n\r");
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgcinfo(void) {	/* gcinfo */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	if (rA4 == (Ptr) 0)	{aRet = ((Ptr) GLgc_59); goto lRet;}
	if (rA4 == (Ptr) 1)	{aRet = ((Ptr) GLgc_60); goto lRet;}
	GIa1 = (Ptr) 1;
	GIa2 = GMgcinfo;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_59(void) {	/* gcinfo0 */
   {	register Ptr aRet;
	GIa4 = GInil;
	{aRet = ((Ptr) GLgc_61); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_61(void) {	/* gcinfou */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GMgcuser;
	(--rSp)->Val = GIngccons;
	(--rSp)->Val = GIngcsymb;
	(--rSp)->Val = GIngcstrg;
	(--rSp)->Val = GIngcvect;
	(--rSp)->Val = GIngcfloat;
	(--rSp)->Val = GIngcnumb;
	(--rSp)->Val = GIngch;
	(--rSp)->Val = GIngcuser;
	(--rSp)->Val = GMllcons;
	GIa1 = GIfreelu;
	GIa2 = GIfreelm;
	(--rSp)->Val = ((Ptr) GLgc_62);
	{aRet = ((Ptr) GLgc_63); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_62(void) {	/* ret_call_gcinfz_19 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GMffsymbol;
	GIa1 = GIfreeyu;
	GIa2 = GIfreeym;
	(--rSp)->Val = ((Ptr) GLgc_64);
	{aRet = ((Ptr) GLgc_63); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_64(void) {	/* ret_call_gcinfz_20 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GMstring;
	GIa1 = GIfreesu;
	GIa2 = GIfreesm;
	(--rSp)->Val = ((Ptr) GLgc_65);
	{aRet = ((Ptr) GLgc_63); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_65(void) {	/* ret_call_gcinfz_21 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GMvector;
	GIa1 = GIfreevu;
	GIa2 = GIfreevm;
	(--rSp)->Val = ((Ptr) GLgc_66);
	{aRet = ((Ptr) GLgc_63); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_66(void) {	/* ret_call_gcinfz_22 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GMllfloat;
	GIa1 = GIfreefu;
	GIa2 = GIfreefm;
	(--rSp)->Val = ((Ptr) GLgc_67);
	{aRet = ((Ptr) GLgc_63); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_67(void) {	/* ret_call_gcinfz_23 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GMllfix;
	GIa1 = GIfreenu;
	GIa2 = GIfreenm;
	(--rSp)->Val = ((Ptr) GLgc_68);
	{aRet = ((Ptr) GLgc_63); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_68(void) {	/* ret_call_gcinfz_24 */
   {	register Ptr aRet, rSp, rA1, rA2, rA4, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rNil = GInil;
	(--rSp)->Val = rA1;
	(--rSp)->Val = GMsizehp;
	if (rA4 == rNil)	goto l_gcinfou2;
	rA2 = (Ptr) (((Adr) GIeheap - (Adr) GIbheap) >> 10);
	goto l_gcinfou3;
l_gcinfou2:
	rA2 = (Ptr) (((Adr) GIeheap - (Adr) GIcheap) >> 10);
l_gcinfou3:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA2 = llrt_cons (rA2, rA1);
	rA1 = rA2;
	(--rSp)->Val = rA1;
	(--rSp)->Val = GMsizecd;
	if (rA4 == rNil)	goto l_gcinfou4;
	rA2 = (Ptr) (((Adr) GIecode - (Adr) GIbcode) >> 10);
	goto l_gcinfou5;
l_gcinfou4:
	rA2 = (Ptr) (((Adr) GIecode - (Adr) GIccode) >> 10);
l_gcinfou5:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA2 = llrt_cons (rA2, rA1);
	rA1 = rA2;
	(--rSp)->Val = rA1;
	rA4 = (Ptr) 25;
	{aRet = ((Ptr) GXlist); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_60(void) {	/* gcinfo1 */
   {	register Ptr aRet, rSp, rA2, rA3, rA4, rBnumb, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
	rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBnumb = GIbnumb; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
	GIa1 = (rSp++)->Val;
	rA2 = (Ptr) 0;
	rA3 = (Ptr) 0;
	rA4 = rBnumb;
	if ((rA4 < rBnumb) || (rA4 >= rBfloat))	goto l_gcinfon9;
l_gcinfon1:
	{register int aux;
		aux = (int) ((Fix) (rA2) + 1);
		if (aux < 1024) {
			rA2 = (Ptr) ((UFix) aux);
		 } else {
			rA2 = (Ptr) 0;
			rA3 = (Ptr) ((UFix) ((Fix) (rA3) + 1));}}
	rA4 += (Fix) (1);
	if (rA4 < rBfloat)	goto l_gcinfon1;
l_gcinfon9:
	GIfreenu = rA2;
	GIfreenm = rA3;
	rA2 = (Ptr) 0;
	rA3 = (Ptr) 0;
	rA4 = rBfloat;
	if (llrt_floatp (rA4) == 0) 
	goto l_gcinfof9;
l_gcinfof1:
	{register int aux;
		aux = (int) ((Fix) (rA2) + 1);
		if (aux < 1024) {
			rA2 = (Ptr) ((UFix) aux);
		 } else {
			rA2 = (Ptr) 0;
			rA3 = (Ptr) ((UFix) ((Fix) (rA3) + 1));}}
	rA4 += (Fix) (2);
	if (rA4 < rBvect)	goto l_gcinfof1;
l_gcinfof9:
	GIfreefu = rA2;
	GIfreefm = rA3;
	rA2 = (Ptr) 0;
	rA3 = (Ptr) 0;
	rA4 = rBvect;
l_gcinfov1:
	{register int aux;
		aux = (int) ((Fix) (rA2) + 1);
		if (aux < 1024) {
			rA2 = (Ptr) ((UFix) aux);
		 } else {
			rA2 = (Ptr) 0;
			rA3 = (Ptr) ((UFix) ((Fix) (rA3) + 1));}}
	rA4 += (Fix) (2);
	if (rA4 < rBstrg)	goto l_gcinfov1;
	GIfreevu = rA2;
	GIfreevm = rA3;
	rA2 = (Ptr) 0;
	rA3 = (Ptr) 0;
	rA4 = rBstrg;
l_gcinfos1:
	{register int aux;
		aux = (int) ((Fix) (rA2) + 1);
		if (aux < 1024) {
			rA2 = (Ptr) ((UFix) aux);
		 } else {
			rA2 = (Ptr) 0;
			rA3 = (Ptr) ((UFix) ((Fix) (rA3) + 1));}}
	rA4 += (Fix) (2);
	if (rA4 < rBsymb)	goto l_gcinfos1;
	GIfreesu = rA2;
	GIfreesm = rA3;
	rA2 = (Ptr) 0;
	rA3 = (Ptr) 0;
	rA4 = rBsymb;
l_gcinfoy1:
	{register int aux;
		aux = (int) ((Fix) (rA2) + 1);
		if (aux < 1024) {
			rA2 = (Ptr) ((UFix) aux);
		 } else {
			rA2 = (Ptr) 0;
			rA3 = (Ptr) ((UFix) ((Fix) (rA3) + 1));}}
	rA4 += (Fix) (8);
	if (rA4 < rBcons)	goto l_gcinfoy1;
	GIfreeyu = rA2;
	GIfreeym = rA3;
	rA2 = (Ptr) 0;
	rA3 = (Ptr) 0;
	rA4 = rBcons;
l_gcinfol1:
	{register int aux;
		aux = (int) ((Fix) (rA2) + 1);
		if (aux < 1024) {
			rA2 = (Ptr) ((UFix) aux);
		 } else {
			rA2 = (Ptr) 0;
			rA3 = (Ptr) ((UFix) ((Fix) (rA3) + 1));}}
	rA4 += (Fix) (2);
	if (rA4 < GIecons)	goto l_gcinfol1;
	GIfreelu = rA2;
	GIfreelm = rA3;
	rA4 = (Ptr) 0;
	{aRet = ((Ptr) GLgc_61); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_63(void) {	/* gcinfz */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	if (rA2 == (Ptr) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	if ((Fix) (rA2) >= (Fix) 32)	goto l_gcinfz1;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) * (Fix) 1024));
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (rA2)));
	{ aRet = (rSp++)->Val; goto lRet;}
l_gcinfz1:
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA2 = llrt_cons (rA2, rA1);
	rA1 = rA2;
l_gcinfz9:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXtcons(void) {	/* tcons */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIa1 = rA1; rA1 = llrt_cons (rA1, GIa2);
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) GIbcons);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		GIbtbin[aux] |= mask;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXtconsmk(void) {	/* tconsmk */
   {	register Ptr aRet, rA1, rBcons;
	rA1 = GIa1; rBcons = GIbcons;
	if ((long) rA1 < (long) rBcons)	goto l_tcmker;
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBcons);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		GIbtbin[aux] |= mask;}
	{aRet = (GIsp++)->Val; goto lRet;}
l_tcmker:
	GIa2 = GMtconsmk;
	{aRet = ((Ptr) GXerrnla); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtconscl(void) {	/* tconscl */
   {	register Ptr aRet, rA1, rBcons;
	rA1 = GIa1; rBcons = GIbcons;
	if ((long) rA1 < (long) rBcons)	goto l_tccler;
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBcons);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		GIbtbin[aux] &= ~mask;}
	{aRet = (GIsp++)->Val; goto lRet;}
l_tccler:
	GIa2 = GMtconscl;
	{aRet = ((Ptr) GXerrnla); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtconsp(void) {	/* tconsp */
   {	register Ptr aRet, rSp, rA1, rBcons;
	rSp = GIsp; rA1 = GIa1; rBcons = GIbcons;
	if ((long) rA1 < (long) rBcons)	goto l_tconsp1;
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBcons);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		aux = GIbtbin[aux] & mask;
		if (aux != 0)	{ aRet = (rSp++)->Val; goto lRet;}}
l_tconsp1:
	rA1 = GInil;
l_tconsp2:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXfrcons(void) {	/* freecons */
   {	register Ptr aRet;
	if (GIitstate == (Ptr) 0)	{aRet = ((Ptr) GLgc_75); goto lRet;}
	GIa3 = ((Ptr) GLgc_76);
	(--GIsp)->Val = ((Ptr) GLgc_77);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_77(void) {	/* ret_call_sysprot_25 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	GIitstate = (Ptr) 1;
	{aRet = GIa3; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_76(void) {	/* frcs0 */
   {	register Ptr aRet;
	GIitstate = (Ptr) 0;
	{aRet = ((Ptr) GLgc_75); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_75(void) {	/* frcs1 */
   {	register Ptr aRet, rA1, rA2, rNil, rBcons;
	rA1 = GIa1; rA2 = GIa2; rNil = GInil; rBcons = GIbcons;
	rA2 = GIfcons;
	if ((long) rA1 < (long) rBcons)	goto l_frcser;
	rA1->Val = rNil;
	(rA1 + 1)->Val = rA2;
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBcons);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		GIbtbin[aux] &= ~mask;}
	GIfcons = rA1;
	rA2 = rNil;
	rA1 = rNil;
	{aRet = (GIsp++)->Val; goto lRet;}
l_frcser:
	rA2 = GMfrcons;
	{aRet = ((Ptr) GXerrnla); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXfrtree(void) {	/* freetree */
   {	register Ptr aRet;
	if (GIitstate == (Ptr) 0)	{aRet = ((Ptr) GLgc_78); goto lRet;}
	GIa3 = ((Ptr) GLgc_79);
	(--GIsp)->Val = ((Ptr) GLgc_80);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_80(void) {	/* ret_call_sysprot_26 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	GIitstate = (Ptr) 1;
	{aRet = GIa3; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_79(void) {	/* frtr0 */
   {	register Ptr aRet;
	GIitstate = (Ptr) 0;
	{aRet = ((Ptr) GLgc_78); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_78(void) {	/* frtr1 */
   {	register Ptr aRet;
	GIa4 = GIfcons;
	(--GIsp)->Val = ((Ptr) GLgc_81);
	{aRet = ((Ptr) GLgc_82); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_81(void) {	/* ret_call_frtr3_27 */
   {	register Ptr aRet, rNil;
	rNil = GInil;
	GIfcons = GIa4;
	GIa4 = rNil;
	GIa3 = rNil;
	GIa2 = rNil;
	GIa1 = rNil;
l_frtret:
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_83(void) {	/* frtr2 */
   {	register Ptr aRet;
	GIa1 = GIa3;
	{aRet = ((Ptr) GLgc_82); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_82(void) {	/* frtr3 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
	if ((long) rA1 < (long) rBcons)	{ aRet = (rSp++)->Val; goto lRet;}
l_frtr4:
	rA2 = rA1->Val;
	rA3 = (rA1 + 1)->Val;
	(rA1 + 1)->Val = rA4;
	rA1->Val = GInil;
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBcons);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		GIbtbin[aux] &= ~mask;}
	rA4 = rA1;
	if ((long) rA2 < (long) rBcons)	{aRet = ((Ptr) GLgc_83); goto lRet;}
	(--rSp)->Val = rA3;
	rA1 = rA2;
	(--rSp)->Val = ((Ptr) GLgc_84);
	goto l_frtr4;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_84(void) {	/* ret_call_frtr4_28 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	{aRet = ((Ptr) GLgc_82); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgettype(void) {	/* type-of */
   {	register Ptr aRet, rSp, rA1, rBfloat, rBstrg, rBsymb, rBcons;
	rSp = GIsp; rA1 = GIa1; rBfloat = GIbfloat; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
	if ((long) rA1 < (long) rBcons)	goto l_gettype0;
	{register TableElem aux, mask;
		aux = (TableElem) ((TableElem) rA1 - (TableElem) rBcons);
		aux >>= PTR2_SHIFT;
		mask = 1; mask <<= (aux & ELEM_MASK);
		aux >>= ELEM_SHIFT;
		aux = GIbtbin[aux] & mask;
		if (aux == 0)	goto l_gettype2;}
	rA1 = rA1->Val;
	if ((rA1 >= rBsymb) && (rA1 < rBcons))	{ aRet = (rSp++)->Val; goto lRet;}
	if (rA1 < rBfloat)	goto l_gettypfx;
	if ((long) rA1 < (long) rBcons)	{ aRet = (rSp++)->Val; goto lRet;}
	if ((rA1->Val < rBsymb) || (rA1->Val >= rBcons))	goto l_gettypfx;
l_gettyper:
	{aRet = (rSp++)->Val; goto lRet;}
l_gettype0:
	if ((rA1 >= GIbvect) && (rA1 < rBstrg))	goto l_gettype1;
	if (rA1 < rBfloat)	goto l_gettype6;
	if (llrt_floatp (rA1) != 0) 
	goto l_gettype5;
	if ((rA1 >= rBstrg) && (rA1 < rBsymb))	goto l_gettype1;
	if (rA1 == GInil)	goto l_gettype3;
	if ((rA1 >= rBsymb) && (rA1 < rBcons))	goto l_gettype4;
l_gettype6:
	rA1 = GMllfix;
	{aRet = (rSp++)->Val; goto lRet;}
l_gettype1:
	rA1 = (rA1 + 1)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_gettype2:
	rA1 = GMllcons;
	{aRet = (rSp++)->Val; goto lRet;}
l_gettype3:
	rA1 = GMllnull;
	{aRet = (rSp++)->Val; goto lRet;}
l_gettype4:
	rA1 = GMffsymbol;
	{aRet = (rSp++)->Val; goto lRet;}
l_gettype5:
	rA1 = GMllfloat;
	{aRet = (rSp++)->Val; goto lRet;}
l_gettypfx:
	rA1 = GMbigtype;
	rA1 = rA1->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXtypep(void) {	/* typep */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GXsubtypep);
	{aRet = ((Ptr) GXgettype); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXsubtypep(void) {	/* subtypep */
   {	register Ptr aRet, rSp, rA1, rA2, rBsymb, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBsymb = GIbsymb; rBcons = GIbcons;
	if ((rA1 < rBsymb) || (rA1 >= rBcons))	{aRet = ((Ptr) GLgc_85); goto lRet;}
	if ((rA2 < rBsymb) || (rA2 >= rBcons))	{aRet = ((Ptr) GLgc_86); goto lRet;}
	goto l_subtyp1;
l_subtyp0:
	rA1 = (rA1 + 3)->Val;
l_subtyp1:
	if (rA1 == rA2)	goto l_subtyp3;
	if ((long) rA1 >= (long) rBcons)	{aRet = ((Ptr) GLgc_87); goto lRet;}
	if ((rA1 < rBsymb) || (rA1 >= rBcons))	{ aRet = (rSp++)->Val; goto lRet;}
	if (rA1 != GInil)	goto l_subtyp0;
l_subtyp2:
	{aRet = (rSp++)->Val; goto lRet;}
l_subtyp3:
	rA1 = GMt;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLgc_88(void) {	/* subtyp4 */
   {	register Ptr aRet;
	GIa1 = (GIsp++)->Val;
	if ((long) GIa1 < (long) GIbcons)	{aRet = ((Ptr) GLgc_89); goto lRet;}
	{aRet = ((Ptr) GLgc_87); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_87(void) {	/* subtyp5 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = (rA1 + 1)->Val;
	rA1 = rA1->Val;
	(--rSp)->Val = ((Ptr) GLgc_90);
	{aRet = ((Ptr) GLgc_89); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLgc_90(void) {	/* ret_call_subtyp7_29 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLgc_88); goto lRet;}
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_91(void) {	/* subtyp6 */
   {	register Ptr aRet;
	GIa1 = (GIa1 + 3)->Val;
	{aRet = ((Ptr) GLgc_89); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_89(void) {	/* subtyp7 */
   {	register Ptr aRet, rSp, rA1, rBcons;
	rSp = GIsp; rA1 = GIa1; rBcons = GIbcons;
	if (rA1 == GIa2)	goto l_subtyp9;
	if ((long) rA1 >= (long) rBcons)	{aRet = ((Ptr) GLgc_87); goto lRet;}
	if ((rA1 < GIbsymb) || (rA1 >= rBcons))	{ aRet = (rSp++)->Val; goto lRet;}
	if (rA1 != GInil)	{aRet = ((Ptr) GLgc_91); goto lRet;}
l_subtyp8:
	{aRet = (rSp++)->Val; goto lRet;}
l_subtyp9:
	rA1 = GMt;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLgc_86(void) {	/* subtypr2 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLgc_85); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_85(void) {	/* subtypr1 */
   {	register Ptr aRet;
	GIa2 = GMsubtypep;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllsend(void) {	/* send */
   {	register Ptr aRet, rA1, rA4;
	rA1 = GIa1; rA4 = GIa4;
	if ((Fix) (rA4) <= (Fix) 1)	{aRet = ((Ptr) GLgc_92); goto lRet;}
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	rA1 = (GIsp + (Fix) (rA4))->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
	if ((rA1 < GIbvect) || (rA1 >= GIbstrg))	{aRet = ((Ptr) GLgc_93); goto lRet;}
	rA1 = (rA1 + 1)->Val;
	{aRet = ((Ptr) GLgc_94); goto lRet;}
  lRet: GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_94(void) {	/* send1 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	GIa2 = (rSp + (Fix) (rA4))->Val;
	GIa3 = GMvoid;
	(--rSp)->Val = rA4;
	(--rSp)->Val = ((Ptr) GLgc_95);
	{aRet = ((Ptr) GXgetfns); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_95(void) {	/* ret_call_getfns_30 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = (rSp++)->Val;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLgc_96); goto lRet;}
	(rSp + (Fix) (GIa4))->Val = ((Ptr) GXpopj0);
	{aRet = ((Ptr) GXffuncall); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_93(void) {	/* send2 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLgc_94);
	{aRet = ((Ptr) GXgettype); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_96(void) {	/* send3 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA3 = rA4;
	goto l_send5;
l_send4:
	rA2 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_send5:
	{register Fix aux;
		aux = (Fix) (rA3) - 1;
		rA3 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_send4;}
	(--rSp)->Val = rA1;
	rA4 = (Ptr) 2;
	rA1 = GMsenderro;
	{aRet = ((Ptr) GXffuncall); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_92(void) {	/* sender */
   {	register Ptr aRet;
	GIa1 = (Ptr) 2;
	GIa2 = GMllsend;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXsenderro(void) {	/* send-error */
   {	register Ptr aRet;
	 GIa1 = llrt_cons (GIa1, GIa2);
	GIa2 = GMllsend;
	{aRet = ((Ptr) GXerrudm); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXcsend(void) {	/* csend */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	if ((Fix) (rA4) <= (Fix) 2)	{aRet = ((Ptr) GLgc_97); goto lRet;}
	(--rSp)->Val = ((Ptr) GLgc_98);
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	GIa1 = (rSp + (Fix) (rA4))->Val;
	{aRet = ((Ptr) GXgettype); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_98(void) {	/* csend1 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	GIa2 = (rSp + (Fix) (rA4))->Val;
	GIa3 = GMvoid;
	(--rSp)->Val = rA4;
	(--rSp)->Val = ((Ptr) GLgc_99);
	{aRet = ((Ptr) GXgetfns); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_99(void) {	/* ret_call_getfns_32 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	rA4 = (rSp++)->Val;
	if (GIa1 == GInil)	goto l_csend3;
	(rSp + (Fix) (rA4))->Val = ((Ptr) GXpopj0);
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
	(rSp + (Fix) (rA4))->Val = ((Ptr) GXpopj0);
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	{aRet = ((Ptr) GXffuncall); goto lRet;}
l_csend3:
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 2));
	{aRet = ((Ptr) GXfuncall); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_97(void) {	/* csender */
   {	register Ptr aRet;
	GIa1 = (Ptr) 3;
	GIa2 = GMcsend;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXsupsend(void) {	/* send-super */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	if ((Fix) (rA4) <= (Fix) 2)	{aRet = ((Ptr) GLgc_100); goto lRet;}
	(--rSp)->Val = rA4;
	GIa2 = (rSp + (Fix) (rA4))->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
	GIa1 = (rSp + (Fix) (rA4))->Val;
	(--rSp)->Val = ((Ptr) GLgc_101);
	{aRet = ((Ptr) GXtypep); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_101(void) {	/* ret_call_typep_33 */
   {	register Ptr aRet, rSp, rA1, rA4;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
	if (rA1 == GInil)	{aRet = ((Ptr) GLgc_102); goto lRet;}
	rA4 = (rSp++)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	rA1 = (rSp + (Fix) (rA4))->Val;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	{aRet = ((Ptr) GLgc_103); goto lRet;}
	rA1 = (rA1 + 3)->Val;
	(rSp + (Fix) (rA4))->Val = ((Ptr) GXpopj0);
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	{aRet = ((Ptr) GLgc_94); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_100(void) {	/* supsenr1 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 3;
	GIa2 = GMsupsend;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_103(void) {	/* supsenr2 */
   {	register Ptr aRet;
	GIa2 = GMsupsend;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_102(void) {	/* supsenr3 */
   {	register Ptr aRet, rSp, rA1, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
	GIa2 = GMsupsend;
	rA4 = (rSp++)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	rA1 = (rSp + (Fix) (rA4))->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) 2));
	rA3 = (rSp + (Fix) (rA4))->Val;
	GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA3 = llrt_cons (rA3, GInil);
	GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rA3);
	{aRet = ((Ptr) GXerroob); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXsendbi(void) {	/* send2 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	if ((Fix) (rA4) <= (Fix) 2)	{aRet = ((Ptr) GLgc_104); goto lRet;}
	(--rSp)->Val = rA4;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	GIa1 = (rSp + (Fix) (rA4))->Val;
	(--rSp)->Val = ((Ptr) GLgc_105);
	{aRet = ((Ptr) GXgettype); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_105(void) {	/* ret_call_gettype_34 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa1;
	GIa1 = (rSp + (Fix) (GIa4))->Val;
	(--rSp)->Val = ((Ptr) GLgc_106);
	{aRet = ((Ptr) GXgettype); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_106(void) {	/* ret_call_gettype_35 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	GIa2 = GIa1;
	GIa1 = (rSp++)->Val;
	rA4 = (rSp++)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
	GIa3 = (rSp + (Fix) (rA4))->Val;
	(--rSp)->Val = rA4;
	(--rSp)->Val = ((Ptr) GLgc_107);
	{aRet = ((Ptr) GXgetbi); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_107(void) {	/* ret_call_getbi_36 */
   {	register Ptr aRet, rSp, rA1, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
	rA4 = (rSp++)->Val;
	if (rA1 == GInil)	goto l_sendbi3;
	(rSp + (Fix) (rA4))->Val = ((Ptr) GXpopj0);
	{aRet = ((Ptr) GXffuncall); goto lRet;}
l_sendbi2:
	rA3 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA3, rA1);
l_sendbi3:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_sendbi2;}
	GIa2 = GMsendbi;
	{aRet = ((Ptr) GXerrudm); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_104(void) {	/* sendbier */
   {	register Ptr aRet;
	GIa1 = (Ptr) 3;
	GIa2 = GMsendbi;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXstrctacc(void) {	/* structaccess */
   {	register Ptr aRet, rSp, rA1, rA2, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
	if (rA4 != (Ptr) 5)	{aRet = ((Ptr) GLgc_108); goto lRet;}
	rA1 = (rSp + (Fix) 2)->Val;
	if ((rA1 < GIbvect) || (rA1 >= GIbstrg))	{aRet = ((Ptr) GLgc_109); goto lRet;}
	rA2 = (rSp + (Fix) 4)->Val;
	if ((rA2 < GIbsymb) || (rA2 >= GIbcons))	{aRet = ((Ptr) GLgc_110); goto lRet;}
	rA2 = (rA2 + 3)->Val;
	(--rSp)->Val = rA1;
	(--rSp)->Val = rA4;
	(--rSp)->Val = ((Ptr) GLgc_111);
	{aRet = ((Ptr) GXtypep); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLgc_111(void) {	/* ret_call_typep_37 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA4 = (rSp++)->Val;
	rA2 = (rSp++)->Val;
	if (rA1 == GInil)	{aRet = ((Ptr) GLgc_112); goto lRet;}
	rA3 = (rSp + (Fix) 3)->Val;
	if ((Fix) (rA3) < (Fix) 0)	{aRet = ((Ptr) GLgc_113); goto lRet;}
	rA4 = (rA2->Val + 1)->Val;
	if ((Fix) (rA3) >= (Fix) (rA4))	{aRet = ((Ptr) GLgc_112); goto lRet;}
	rA4 = rSp->Val;
l_fieldn:
	if (rA4 == (Ptr) 1)	goto l_fieldget;
	if (rA4 == (Ptr) 2)	goto l_fieldset;
	rA1 = (Ptr) 1;
	rA2 = (rSp + (Fix) 4)->Val;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_fieldget:
	rA1 = (rA2->Val + 2 + (Fix) (rA3))->Val;
	rSp += (Fix) 5;
	{aRet = (rSp++)->Val; goto lRet;}
l_fieldset:
	rA1 = (rSp + (Fix) 1)->Val;
	(rA2->Val + 2 + (Fix) (rA3))->Val = rA1;
	rSp += (Fix) 5;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLgc_108(void) {	/* fieldr1 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 5;
	GIa2 = GMstrctacc;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_112(void) {	/* fieldr4 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLgc_109); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_109(void) {	/* fieldr2 */
   {	register Ptr aRet;
	GIa2 = (GIsp + (Fix) 4)->Val;
	{aRet = ((Ptr) GXerrstc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_110(void) {	/* fieldr3 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	GIa2 = (GIsp + (Fix) 4)->Val;
	{aRet = ((Ptr) GXerrnaa); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_113(void) {	/* fieldr5 */
   {	register Ptr aRet;
	GIa1 = GIa3;
	GIa2 = GMstrctacc;
	{aRet = ((Ptr) GXerroob); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXsmpvect(void) {	/* mapallvector */
   {	register Ptr aRet;
	GIa2 = GIbvect;
	{aRet = ((Ptr) GLgc_114); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_114(void) {	/* smpvect2 */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	if ((rA2->Val >= GIbvect) && (rA2->Val < GIbstrg))	{aRet = ((Ptr) GLgc_115); goto lRet;}
	if (rA2->Val == GInil)	{aRet = ((Ptr) GLgc_115); goto lRet;}
	(--rSp)->Val = rA2;
	(--rSp)->Val = rA1;
	(--rSp)->Val = ((Ptr) GLgc_116);
	(--rSp)->Val = rA1;
	(--rSp)->Val = rA2;
	GIa4 = (Ptr) 2;
	{aRet = ((Ptr) GXfuncall); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_116(void) {	/* smpvect3 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	{aRet = ((Ptr) GLgc_115); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_115(void) {	/* smpvect4 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	rA2 += (Fix) (2);
	if (rA2 < GIbstrg)	{aRet = ((Ptr) GLgc_114); goto lRet;}
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

extern Ptr GXsmpstrg(void) {	/* mapallstring */
   {	register Ptr aRet;
	GIa2 = GIbstrg;
	{aRet = ((Ptr) GLgc_117); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLgc_117(void) {	/* smpstrg2 */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	if ((rA2->Val >= GIbstrg) && (rA2->Val < GIbsymb))	{aRet = ((Ptr) GLgc_118); goto lRet;}
	if (rA2->Val == GInil)	{aRet = ((Ptr) GLgc_118); goto lRet;}
	(--rSp)->Val = rA2;
	(--rSp)->Val = rA1;
	(--rSp)->Val = ((Ptr) GLgc_119);
	(--rSp)->Val = rA1;
	(--rSp)->Val = rA2;
	GIa4 = (Ptr) 2;
	{aRet = ((Ptr) GXfuncall); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_119(void) {	/* smpstrg3 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	{aRet = ((Ptr) GLgc_118); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLgc_118(void) {	/* smpstrg4 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	rA2 += (Fix) (2);
	if (rA2 < GIbsymb)	{aRet = ((Ptr) GLgc_117); goto lRet;}
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GDgc_120() {	/* trace gc */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDgc_121() {	/* trace gc-before-alarm */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,3,1,4);
  lRet:  return (aRet);}}

static Ptr GDgc_122() {	/* trace gcalarm */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,5,1,4);
  lRet:  return (aRet);}}

static Ptr GDgc_123() {	/* trace finalize-function */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,6,1,7);
  lRet:  return (aRet);}}

static Ptr GDgc_124() {	/* trace gcinfo */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,8,1,2);
  lRet:  return (aRet);}}

static Ptr GDgc_125() {	/* trace tcons */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,9,1,10);
  lRet:  return (aRet);}}

static Ptr GDgc_126() {	/* trace tconsmk */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,11,1,7);
  lRet:  return (aRet);}}

static Ptr GDgc_127() {	/* trace tconscl */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,12,1,7);
  lRet:  return (aRet);}}

static Ptr GDgc_128() {	/* trace tconsp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,13,1,7);
  lRet:  return (aRet);}}

static Ptr GDgc_129() {	/* trace freecons */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,14,1,7);
  lRet:  return (aRet);}}

static Ptr GDgc_130() {	/* trace freetree */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,15,1,7);
  lRet:  return (aRet);}}

static Ptr GDgc_131() {	/* trace type-of */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,16,1,7);
  lRet:  return (aRet);}}

static Ptr GDgc_132() {	/* trace typep */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,17,1,10);
  lRet:  return (aRet);}}

static Ptr GDgc_133() {	/* trace subtypep */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,18,1,10);
  lRet:  return (aRet);}}

static Ptr GDgc_134() {	/* trace send */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,19,1,2);
  lRet:  return (aRet);}}

static Ptr GDgc_135() {	/* trace send-error */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,20,1,10);
  lRet:  return (aRet);}}

static Ptr GDgc_136() {	/* trace csend */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,21,1,2);
  lRet:  return (aRet);}}

static Ptr GDgc_137() {	/* trace send-super */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,22,1,2);
  lRet:  return (aRet);}}

static Ptr GDgc_138() {	/* trace send2 */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,23,1,2);
  lRet:  return (aRet);}}

static Ptr GDgc_139() {	/* trace structaccess */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,24,1,2);
  lRet:  return (aRet);}}

static Ptr GDgc_140() {	/* trace mapallvector */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,25,1,7);
  lRet:  return (aRet);}}

static Ptr GDgc_141() {	/* trace mapallstring */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYgc,26,1,7);
  lRet:  return (aRet);}}

