/* GELL 15.26: source file for the module: "string" */
/*             translation done:           "Sat Oct   7 17 20:53:51 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "string.h" 

static Ptr GLstring_1(void) {	/* startmodule */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXini_str); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_str(void) {	/* ini_str */
   {	register Ptr aRet;
	{ llrt_inisymb ((Ptr) 6, (Ptr) "string", ((Ptr) GXstring), (Ptr) &GMstring, (Ptr) GFstring);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "plength", ((Ptr) GXplength), (Ptr) &GMplength, (Ptr) GFplength);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "slength", ((Ptr) GXslength), (Ptr) &GMslength, (Ptr) GFslength);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "slen", ((Ptr) GXslen), (Ptr) &GMslen, (Ptr) GFslen);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "sref", ((Ptr) GXsref), (Ptr) &GMsref, (Ptr) GFsref);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "sset", ((Ptr) GXsset), (Ptr) &GMsset, (Ptr) GFsset);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "typestring", ((Ptr) GXtypestrg), (Ptr) &GMtypestrg, (Ptr) GFtypestrg);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "exchstring", ((Ptr) GXexchstrg), (Ptr) &GMexchstrg, (Ptr) GFexchstrg);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "catenate", ((Ptr) GXcaten), (Ptr) &GMcaten, (Ptr) GFcaten);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "eqstring", ((Ptr) GXeqstring), (Ptr) &GMeqstring, (Ptr) GFeqstring);}
	{ llrt_inisymb ((Ptr) 15, (Ptr) "substring-equal", ((Ptr) GXsubsequal), (Ptr) &GMsubsequal, (Ptr) GFsubsequal);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "substring", ((Ptr) GXsubstring), (Ptr) &GMsubstring, (Ptr) GFsubstring);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "makestring", ((Ptr) GXmakestrg), (Ptr) &GMmakestrg, (Ptr) GFmakestrg);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "duplstring", ((Ptr) GXduplstrg), (Ptr) &GMduplstrg, (Ptr) GFduplstrg);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "bltstring", ((Ptr) GXbltstrg), (Ptr) &GMbltstrg, (Ptr) GFbltstrg);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "fillstring", ((Ptr) GXfillstrg), (Ptr) &GMfillstrg, (Ptr) GFfillstrg);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "scanstring", ((Ptr) GXscanstrg), (Ptr) &GMscanstrg, (Ptr) GFscanstrg);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "spanstring", ((Ptr) GXspanstrg), (Ptr) &GMspanstrg, (Ptr) GFspanstrg);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "chrpos", ((Ptr) GXchrpos), (Ptr) &GMchrpos, (Ptr) GFchrpos);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "chrnth", ((Ptr) GXchrnth), (Ptr) &GMchrnth, (Ptr) GFchrnth);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "chrset", ((Ptr) GXchrset), (Ptr) &GMchrset, (Ptr) GFchrset);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "index", ((Ptr) GXffindex), (Ptr) &GMffindex, (Ptr) GFffindex);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "hash", ((Ptr) GXhash), (Ptr) &GMhash, (Ptr) GFhash);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "symbol", ((Ptr) GXffsymbol), (Ptr) &GMffsymbol, (Ptr) GFffsymbol);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "pname", ((Ptr) GXfpnam), (Ptr) &GMfpnam, (Ptr) GFfpnam);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "concat", ((Ptr) GXconcat), (Ptr) &GMconcat, (Ptr) GFconcat);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "gensym", ((Ptr) GXgensym), (Ptr) &GMgensym, (Ptr) GFgensym);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "alphalessp", ((Ptr) GXalphales), (Ptr) &GMalphales, (Ptr) GFalphales);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "bltscreen", ((Ptr) GXbltscrn), (Ptr) &GMbltscrn, (Ptr) GFbltscrn);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "typevector", ((Ptr) GXtypevect), (Ptr) &GMtypevect, (Ptr) GFtypevect);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "exchvector", ((Ptr) GXexchvect), (Ptr) &GMexchvect, (Ptr) GFexchvect);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "makevector", ((Ptr) GXmakevect), (Ptr) &GMmakevect, (Ptr) GFmakevect);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "vlength", ((Ptr) GXvlength), (Ptr) &GMvlength, (Ptr) GFvlength);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "eqvector", ((Ptr) GXeqvector), (Ptr) &GMeqvector, (Ptr) GFeqvector);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "vref", ((Ptr) GXvref), (Ptr) &GMvref, (Ptr) GFvref);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "vset", ((Ptr) GXvset), (Ptr) &GMvset, (Ptr) GFvset);}
	{ llrt_inisymb ((Ptr) 9, (Ptr) "bltvector", ((Ptr) GXbltvect), (Ptr) &GMbltvect, (Ptr) GFbltvect);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "vector", ((Ptr) GXvector), (Ptr) &GMvector, (Ptr) GFvector);}
	{ llrt_inisymb ((Ptr) 10, (Ptr) "fillvector", ((Ptr) GXfillvect), (Ptr) &GMfillvect, (Ptr) GFfillvect);}
	{ llrt_inicst ((Ptr) 13, (Ptr) "gensym-string", (Ptr) &GMgenstrg);}
	(GIa1 + 3)->Val = GMllsystem;
	(--GIsp)->Val = GIa1;
	GIa1 = (Ptr) 1;
	GIa2 = (Ptr) 103;
	(--GIsp)->Val = ((Ptr) GLstring_2);
	{aRet = ((Ptr) GXmakestrg); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_2(void) {	/* ret_call_makestrg_1 */
   {	register Ptr aRet;
	GIa3 = (GIsp++)->Val;
	GIa3->Val = GIa1;
	{ llrt_inicst ((Ptr) 14, (Ptr) "gensym-counter", (Ptr) &GMgenscpt);}
	(GIa1 + 3)->Val = GMllsystem;
	GIa1->Val = (Ptr) 100;
	GIa1 = (Ptr) 1024;
	GIa2 = (Ptr) 0;
	(--GIsp)->Val = ((Ptr) GLstring_3);
	{aRet = ((Ptr) GXmakestrg); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_3(void) {	/* ret_call_makestrg_2 */
   {	register Ptr aRet;
	GIbufstrg = GIa1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXstrgallc(void) {	/* strgallc */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	if ((Fix) (rA2) >= (Fix) 0)	goto l_strgall0;
	rA2 = (Ptr) 0;
l_strgall0:
	GIa1 = GIfstrg;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLstring_4); goto lRet;}
	GIocheap = GIcheap;
	GIcheap += 3 + (((Fix) (rA2)) / sizeof(Ptr));
	if (GIeheap < GIcheap)	{aRet = ((Ptr) GLstring_5); goto lRet;}
	{aRet = ((Ptr) GLstring_6); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLstring_6(void) {	/* strgall2 */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIfstrg = rA1->Val;
	rA1->Val = GIocheap;
	(((Ptr) &GIocheap)->Val + 1)->Val = rA2;
	(((Ptr) &GIocheap)->Val)->Val = rA1;
	*((char *) (rA1->Val + 2) + (Fix) (rA2)) = (char) (Ptr) 0;
	(rA1 + 1)->Val = GMstring;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_4(void) {	/* strgall3 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GXstrgallc);
	{aRet = ((Ptr) GXgcstrg); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_5(void) {	/* strgall4 */
   {	register Ptr aRet;
	GIa1 = GInil;
	GIcheap = GIocheap;
	(--GIsp)->Val = ((Ptr) GLstring_7);
	{aRet = ((Ptr) GXhgc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_7(void) {	/* ret_call_hgc_4 */
   {	register Ptr aRet;
	GIa1 = GIfstrg;
	GIocheap = GIcheap;
	GIcheap += 3 + (((Fix) (GIa2)) / sizeof(Ptr));
	if (GIcheap < GIeheap)	{aRet = ((Ptr) GLstring_6); goto lRet;}
	GIcheap = GIocheap;
	GIa1 = GInil;
	{aRet = ((Ptr) GXerrfh); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgetnumi(void) {	/* getnumi */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (rA1 == (Ptr) ((UFix) 0x8000))	{aRet = ((Ptr) GLstring_8); goto lRet;}
	if ((Fix) (rA1) >= (Fix) 0)	{aRet = ((Ptr) GLstring_9); goto lRet;}
	GIa4 = (Ptr) 45;
	(--GIsp)->Val = ((Ptr) GLstring_10);
	{aRet = ((Ptr) GLstring_11); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_10(void) {	/* ret_call_getnumch_5 */
   {	register Ptr aRet;
	GIa1 = (Ptr) ((UFix) ((Fix) (0) - (Fix) (GIa1)));
	{aRet = ((Ptr) GLstring_9); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_9(void) {	/* getpos */
   {	register Ptr aRet, rSp, rA1, rA4;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
l_GLstring_9:
	rA4 = rA1;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) % (Fix) (GIobase)));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 48));
	if ((Fix) (rA4) <= (Fix) 57)	goto l_getpos2;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 7));
l_getpos2:
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) / (Fix) (GIobase)));
	if (rA1 == (Ptr) 0)	{aRet = ((Ptr) GLstring_11); goto lRet;}
	(--rSp)->Val = rA4;
	(--rSp)->Val = ((Ptr) GLstring_12);
	goto l_GLstring_9;
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLstring_12(void) {	/* ret_call_getpos_6 */
   {	register Ptr aRet;
	GIa4 = (GIsp++)->Val;
	{aRet = ((Ptr) GLstring_11); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_8(void) {	/* getmin */
   {	register Ptr aRet;
	GIa4 = (Ptr) 35;
	(--GIsp)->Val = ((Ptr) GLstring_13);
	{aRet = ((Ptr) GLstring_11); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_13(void) {	/* ret_call_getnumch_7 */
   {	register Ptr aRet;
	GIa4 = (Ptr) 36;
	(--GIsp)->Val = ((Ptr) GLstring_14);
	{aRet = ((Ptr) GLstring_11); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_14(void) {	/* ret_call_getnumch_8 */
   {	register Ptr aRet;
	GIa4 = (Ptr) 56;
	(--GIsp)->Val = ((Ptr) GLstring_15);
	{aRet = ((Ptr) GLstring_11); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_15(void) {	/* ret_call_getnumch_9 */
   {	register Ptr aRet;
	GIa4 = (Ptr) 48;
	(--GIsp)->Val = ((Ptr) GLstring_16);
	{aRet = ((Ptr) GLstring_11); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_16(void) {	/* ret_call_getnumch_10 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLstring_11);
	{aRet = ((Ptr) GLstring_11); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_11(void) {	/* getnumch */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	*((char *) (GIa3->Val + 2) + (Fix) (rA2)) = (char) GIa4;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLstring_17(void) {	/* badstr2 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLstring_18); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_18(void) {	/* badstr1 */
   {	register Ptr aRet;
	GIa2 = GIsavea4;
	{aRet = ((Ptr) GXerrnsa); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_19(void) {	/* badvec2 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLstring_20); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_20(void) {	/* badvec1 */
   {	register Ptr aRet;
	GIa2 = GIsavea4;
	{aRet = ((Ptr) GXerrvec); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_21(void) {	/* badnbar5 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 5;
	{aRet = ((Ptr) GLstring_22); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_23(void) {	/* badnbar3 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 3;
	{aRet = ((Ptr) GLstring_22); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_22(void) {	/* badnba31 */
   {	register Ptr aRet;
	GIa2 = GIsavea4;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_24(void) {	/* badnbar4 */
   {	register Ptr aRet;
	GIa1 = (Ptr) 4;
	{aRet = ((Ptr) GLstring_22); goto lRet;}
l_badoob1:
	GIa2 = GIsavea4;
	{aRet = ((Ptr) GXerroob); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_25(void) {	/* badfix2 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLstring_26); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_26(void) {	/* badfix1 */
   {	register Ptr aRet;
	GIa2 = GIsavea4;
	{aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_27(void) {	/* badfix3 */
   {	register Ptr aRet;
	GIa1 = GIa3;
	{aRet = ((Ptr) GLstring_26); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_28(void) {	/* badfix4 */
   {	register Ptr aRet;
	GIa1 = GIa4;
	{aRet = ((Ptr) GLstring_26); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_29(void) {	/* badind2 */
   {	register Ptr aRet;
	GIa1 = GIa2;
	{aRet = ((Ptr) GLstring_30); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_30(void) {	/* badind1 */
   {	register Ptr aRet;
	GIa2 = GIsavea4;
	{aRet = ((Ptr) GXerroob); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_31(void) {	/* badind3 */
   {	register Ptr aRet;
	GIa1 = GIa3;
	{aRet = ((Ptr) GLstring_30); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_32(void) {	/* badind4 */
   {	register Ptr aRet;
	GIa1 = GIa4;
	{aRet = ((Ptr) GLstring_30); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_33(void) {	/* mina1a2 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if ((Fix) (GIa2) > (Fix) (rA1))	goto l_mina1a2x;
	{aRet = (rSp++)->Val; goto lRet;}
l_mina1a2x:
	GIa2 = rA1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstring_34(void) {	/* mina1a3 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if ((Fix) (GIa3) > (Fix) (rA1))	goto l_mina1a3x;
	{aRet = (rSp++)->Val; goto lRet;}
l_mina1a3x:
	GIa3 = rA1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstring_35(void) {	/* mina1a4 */
   {	register Ptr aRet, rSp, rA1, rA3;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3;
	if ((Fix) (GIa4) > (Fix) (rA1))	goto l_mina1a4x;
	{aRet = (rSp++)->Val; goto lRet;}
l_mina1a4x:
	GIa4 = rA1;
	{aRet = (rSp++)->Val; goto lRet;}
l_mina3a1:
	if ((Fix) (rA1) > (Fix) (rA3))	goto l_mina3a1x;
	{aRet = (rSp++)->Val; goto lRet;}
l_mina3a1x:
	rA1 = rA3;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstring_36(void) {	/* mina3a4 */
   {	register Ptr aRet, rSp, rA3, rA4;
	rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
	if ((Fix) (rA4) > (Fix) (rA3))	goto l_mina3a4x;
	{aRet = (rSp++)->Val; goto lRet;}
l_mina3a4x:
	rA4 = rA3;
	{aRet = (rSp++)->Val; goto lRet;}
l_mina4a1:
	if ((Fix) (GIa1) > (Fix) (rA4))	goto l_mina4a1x;
	{aRet = (rSp++)->Val; goto lRet;}
l_mina4a1x:
	GIa1 = rA4;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLstring_37(void) {	/* mina4a3 */
   {	register Ptr aRet, rSp, rA4;
	rSp = GIsp; rA4 = GIa4;
	if ((Fix) (GIa3) > (Fix) (rA4))	goto l_mina4a3x;
	{aRet = (rSp++)->Val; goto lRet;}
l_mina4a3x:
	GIa3 = rA4;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstring_38(void) {	/* strfalse */
   {	register Ptr aRet;
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXstring(void) {	/* string */
   {	register Ptr aRet, rSp, rA1, rA2, rBstrg, rBsymb;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBstrg = GIbstrg; rBsymb = GIbsymb;
	if ((rA1 >= rBstrg) && (rA1 < rBsymb))	{ aRet = (rSp++)->Val; goto lRet;}
	if ((rA1 < rBsymb) || (rA1 >= GIbcons))	goto l_stringc;
	rA2 = (rA1 + 5)->Val;
	if ((rA2 >= rBstrg) && (rA2 < rBsymb))	goto l_stringr2;
	rA2 = (rA1 + 7)->Val;
	if ((rA2 >= rBstrg) && (rA2 < rBsymb))	goto l_stringr2;
	rA2 = (rA2 + 5)->Val;
l_stringr2:
	rA1 = rA2;
l_stringr:
	{aRet = (rSp++)->Val; goto lRet;}
l_stringc:
	GIsavea4 = GMstring;
	{aRet = ((Ptr) GLstring_39); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXstringa1(void) {	/* stringa1 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))	{aRet = ((Ptr) GLstring_39); goto lRet;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXstrgsymb(void) {	/* strgsymb */
   {	register Ptr aRet, rSp, rA1, rA2, rBstrg, rBsymb;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBstrg = GIbstrg; rBsymb = GIbsymb;
	(--rSp)->Val = rA2;
	rA2 = (rA1 + 5)->Val;
	if ((rA2 >= rBstrg) && (rA2 < rBsymb))	goto l_strgsyre;
	rA2 = (rA1 + 7)->Val;
	if ((rA2 >= rBstrg) && (rA2 < rBsymb))	goto l_strgsyre;
	rA2 = (rA2 + 5)->Val;
l_strgsyre:
	rA1 = rA2;
	rA2 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLstring_39(void) {	/* strgrest */
   {	register Ptr aRet, rSp, rA1, rA2, rA3;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
	if ((rA1 >= GIbsymb) && (rA1 < GIbcons))	{aRet = ((Ptr) GXstrgsymb); goto lRet;}
	if ((rA1 >= GIbvect) && (rA1 < GIbstrg))	{aRet = ((Ptr) GLstring_18); goto lRet;}
	(--rSp)->Val = rA2;
	(--rSp)->Val = rA3;
	rA3 = GIbufstrg;
	if (llrt_floatp (rA1) == 0) 
	goto l_strgnf;
	rA2 = llrt_cvftoa (rA1, rA3);
	{aRet = ((Ptr) GLstring_40); goto lRet;}
l_strgnf:
	rA2 = (Ptr) 0;
	(--rSp)->Val = GIa4;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLstring_41); goto lRet;}
	(--rSp)->Val = ((Ptr) GLstring_42);
	{aRet = ((Ptr) GXgetnumi); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLstring_41(void) {	/* strgnn */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if (rA1 == GInil)	{aRet = ((Ptr) GLstring_42); goto lRet;}
	if ((long) rA1 < (long) GIbcons)	{aRet = ((Ptr) GLstring_18); goto lRet;}
	GIa4 = rA1->Val;
	if (GIa4 >= GIbfloat)	{aRet = ((Ptr) GLstring_18); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLstring_43);
	{aRet = ((Ptr) GLstring_11); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_43(void) {	/* ret_call_getnumch_13 */
   {	register Ptr aRet;
	if ((Fix) (GIa2) >= (Fix) 1024)	{aRet = ((Ptr) GLstring_18); goto lRet;}
	GIa1 = (GIa1 + 1)->Val;
	{aRet = ((Ptr) GLstring_41); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_42(void) {	/* strgfol4 */
   {	register Ptr aRet;
	GIa4 = (GIsp++)->Val;
	{aRet = ((Ptr) GLstring_40); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_40(void) {	/* strgfol */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLstring_44);
	{aRet = ((Ptr) GXstrgallc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_44(void) {	/* ret_call_strgallc_14 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	{register char *r1, *r2; register int r3;
		r1 = (char *) (GIa3->Val + 2);
		r2 = (char *) (GIa1->Val + 2);
		r3 = (Fix) (GIa2);
	 while (r3--) *r2++ = *r1++;}
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXstringa2(void) {	/* stringa2 */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	if ((rA2 < GIbstrg) || (rA2 >= GIbsymb))	goto l_stra2c;
	{aRet = (rSp++)->Val; goto lRet;}
l_stra2c:
	(--rSp)->Val = GIa1;
	GIa1 = rA2;
	(--rSp)->Val = ((Ptr) GLstring_45);
	{aRet = ((Ptr) GLstring_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstring_45(void) {	/* ret_call_strgrest_15 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = GIa1;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstring_46(void) {	/* stringa3 */
   {	register Ptr aRet, rSp, rA3;
	rSp = GIsp; rA3 = GIa3;
	if ((rA3 < GIbstrg) || (rA3 >= GIbsymb))	goto l_stra3c;
	{aRet = (rSp++)->Val; goto lRet;}
l_stra3c:
	(--rSp)->Val = GIa1;
	GIa1 = rA3;
	(--rSp)->Val = ((Ptr) GLstring_47);
	{aRet = ((Ptr) GLstring_39); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstring_47(void) {	/* ret_call_strgrest_16 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa3 = GIa1;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXplength(void) {	/* plength */
   {	register Ptr aRet;
	GIsavea4 = GMplength;
	(--GIsp)->Val = ((Ptr) GLstring_48);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_48(void) {	/* ret_call_stringa1_17 */
   {	register Ptr aRet;
	GIa1 = (GIa1->Val + 1)->Val;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXslength(void) {	/* slength */
   {	register Ptr aRet;
	GIsavea4 = GMslength;
	(--GIsp)->Val = ((Ptr) GLstring_49);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_49(void) {	/* ret_call_stringa1_18 */
   {	register Ptr aRet;
	GIa1 = (GIa1->Val + 1)->Val;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXslen(void) {	/* slen */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIsavea4 = GMslen;
	if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))	{aRet = ((Ptr) GLstring_18); goto lRet;}
	rA1 = (rA1->Val + 1)->Val;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXcaten(void) {	/* catenate */
   {	register Ptr aRet;
	GIsavea4 = GMcaten;
	{aRet = ((Ptr) GLstring_50); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_50(void) {	/* caten0 */
   {	register Ptr aRet;
	GIa3 = GIa4;
	GIa2 = (Ptr) 0;
	{aRet = ((Ptr) GLstring_51); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_52(void) {	/* caten1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp + (Fix) (GIa4))->Val;
	(--rSp)->Val = ((Ptr) GLstring_53);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstring_53(void) {	/* ret_call_stringa1_19 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	(GIsp + (Fix) (GIa4))->Val = rA1;
	rA1 = (rA1->Val + 1)->Val;
	{register int aux;
		aux = (int) ((Fix) (GIa2) + (Fix) (rA1));
		GIa2 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	{aRet = ((Ptr) GLstring_54); goto lRet;}}
	{aRet = ((Ptr) GLstring_51); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLstring_51(void) {	/* caten2 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	{register Fix aux;
		aux = (Fix) (GIa4) - 1;
		GIa4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	{aRet = ((Ptr) GLstring_52); goto lRet;}}
	(--rSp)->Val = GIa3;
	(--rSp)->Val = ((Ptr) GLstring_55);
	{aRet = ((Ptr) GXstrgallc); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstring_55(void) {	/* ret_call_strgallc_20 */
   {	register Ptr aRet, rSp, rA2, rA3, rA4;
	rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA4 = (rSp++)->Val;
	goto l_caten4;
l_caten3:
	rA3 = (rSp++)->Val;
	GIsavea1 = (rA3->Val + 1)->Val;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) (GIsavea1)));
	{register char *r1, *r2; register int r3;
		r1 = (char *) (rA3->Val + 2);
		r2 = (char *) (GIa1->Val + 2);
		r3 = (Fix) (GIsavea1);
		if ((r1 == r2) && ((Fix) 0 < (Fix) (rA2))) {
			r1 += r3 + (Fix) 0;
			r2 += r3 + (Fix) (rA2);
			while (r3--) *--r2 = *--r1;
		 } else {
			r1 += (Fix) 0;
			r2 += (Fix) (rA2);
			while (r3--) *r2++ = *r1++;}}
l_caten4:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_caten3;}
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLstring_54(void) {	/* catenstl */
   {	register Ptr aRet;
	GIa1 = (Ptr) 32767;
	GIa2 = GMcaten;
	{aRet = ((Ptr) GXerrstl); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXsubsequal(void) {	/* substring-equal */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBfloat, rBstrg, rBsymb;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat; rBstrg = GIbstrg; rBsymb = GIbsymb;
	GIsavea4 = GMsubsequal;
	if (rA4 != (Ptr) 5)	{aRet = ((Ptr) GLstring_21); goto lRet;}
	rA1 = (rSp + 3)->Val;
	if ((rA1 < rBstrg) || (rA1 >= rBsymb))	{aRet = ((Ptr) GLstring_18); goto lRet;}
	rA2 = (rSp + 1)->Val;
	if ((rA2 < rBstrg) || (rA2 >= rBsymb))	{aRet = ((Ptr) GLstring_17); goto lRet;}
	rA3 = (rSp + 2)->Val;
	if (rA3 >= rBfloat)	{aRet = ((Ptr) GLstring_27); goto lRet;}
	if ((Fix) (rA3) < (Fix) 0)	{aRet = ((Ptr) GLstring_31); goto lRet;}
	rA4 = rSp->Val;
	if (rA4 >= rBfloat)	{aRet = ((Ptr) GLstring_28); goto lRet;}
	if ((Fix) (rA4) < (Fix) 0)	{aRet = ((Ptr) GLstring_32); goto lRet;}
	GIsavea1 = rA1;
	GIsavea2 = rA2;
	rA1 = (rSp + 4)->Val;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	if ((Fix) (rA1) < (Fix) 0)	{aRet = ((Ptr) GLstring_30); goto lRet;}
	rA2 = rA1;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA3)));
	GIsavea3 = (GIsavea1->Val + 1)->Val;
	if ((Fix) (rA2) > (Fix) (GIsavea3))	{aRet = ((Ptr) GLstring_30); goto lRet;}
	rA2 = rA1;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA4)));
	GIsavea3 = (GIsavea2->Val + 1)->Val;
	if ((Fix) (rA2) > (Fix) (GIsavea3))	{aRet = ((Ptr) GLstring_30); goto lRet;}
	rSp += (Fix) 5;
	{register char *r1, *r2; register int r3;
		r1 = (char *) (GIsavea1->Val + 2);
		r1 += (Fix) (rA3);
		r2 = (char *) (GIsavea2->Val + 2);
		r2 += (Fix) (rA4);
		r3 = (Fix) (rA1);
		if (r3 > 0) while (r3--) if (*r2++ != *r1++) goto hbteq_string_56;
			{ aRet = (rSp++)->Val; goto lRet;}}
	hbteq_string_56:
	rA1 = GInil;
l_subseqr:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXeqstring(void) {	/* eqstring */
   {	register Ptr aRet;
	GIsavea4 = GMeqstring;
	(--GIsp)->Val = ((Ptr) GLstring_57);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_57(void) {	/* ret_call_stringa1_21 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GXeqstrgi);
	{aRet = ((Ptr) GXstringa2); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXeqstrgi(void) {	/* eqstrgi */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	if (rA1 == rA2)	{ aRet = (rSp++)->Val; goto lRet;}
	rA3 = (rA1->Val + 1)->Val;
	rA4 = (rA2->Val + 1)->Val;
	if (rA3 != rA4)	goto l_sfalse;
	rA4 = (rA1 + 1)->Val;
	if ((rA4 < GIbsymb) || (rA4 >= GIbcons))	goto l_eqstrg2;
	if (rA4 != (rA2 + 1)->Val)	goto l_sfalse;
	{register char *r1, *r2; register int r3;
		r1 = (char *) (rA1->Val + 2);
		r2 = (char *) (rA2->Val + 2);
		r3 = (Fix) (rA3);
		if (r3 > 0) while (r3--) if (*r2++ != *r1++) goto hbteq_string_58;
			{ aRet = (rSp++)->Val; goto lRet;}}
	hbteq_string_58:
l_sfalse:
	rA1 = GInil;
l_sret:
	{aRet = (rSp++)->Val; goto lRet;}
l_eqstrg2:
	(--rSp)->Val = rA1;
	(--rSp)->Val = rA2;
	(--rSp)->Val = rA3;
	rA1 = rA4;
	rA2 = (rA2 + 1)->Val;
	(--rSp)->Val = ((Ptr) GLstring_59);
	{aRet = ((Ptr) GXequal); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLstring_59(void) {	/* ret_call_equal_23 */
   {	register Ptr aRet, rSp, rA1, rNil;
	rSp = GIsp; rA1 = GIa1; rNil = GInil;
	GIa4 = rA1;
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	if (GIa4 == rNil)	goto l_sfalse2;
	{register char *r1, *r2; register int r3;
		r1 = (char *) (rA1->Val + 2);
		r2 = (char *) (GIa2->Val + 2);
		r3 = (Fix) (GIa3);
		if (r3 > 0) while (r3--) if (*r2++ != *r1++) goto hbteq_string_60;
			{ aRet = (rSp++)->Val; goto lRet;}}
	hbteq_string_60:
l_sfalse2:
	rA1 = rNil;
l_sret2:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXsubstring(void) {	/* substring */
   {	register Ptr aRet, rSp, rA1, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA4 = GIa4; rBfloat = GIbfloat;
	GIsavea4 = GMsubstring;
	rA1 = (Ptr) 32767;
	if (rA4 == (Ptr) 2)	goto l_substr1;
	if (rA4 != (Ptr) 3)	{aRet = ((Ptr) GLstring_23); goto lRet;}
	rA1 = (rSp++)->Val;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
l_substr1:
	rA4 = (rSp++)->Val;
	if (rA4 >= rBfloat)	{aRet = ((Ptr) GLstring_28); goto lRet;}
	if ((Fix) (rA4) < (Fix) 0)	{aRet = ((Ptr) GLstring_32); goto lRet;}
	GIa3 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLstring_61);
	{aRet = ((Ptr) GLstring_46); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLstring_61(void) {	/* ret_call_stringa3_24 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	rA2 = (GIa3->Val + 1)->Val;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) (GIa4)));
l_substr2:
	(--GIsp)->Val = ((Ptr) GLstring_62);
	{aRet = ((Ptr) GLstring_33); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLstring_62(void) {	/* ret_call_mina1a2_25 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLstring_63);
	{aRet = ((Ptr) GXstrgallc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_63(void) {	/* ret_call_strgallc_26 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	{register char *r1, *r2; register int r3;
		r1 = (char *) (GIa3->Val + 2);
		r2 = (char *) (GIa1->Val + 2);
		r3 = (Fix) (GIa2);
		if ((r1 == r2) && ((Fix) (rA4) < (Fix) 0)) {
			r1 += r3 + (Fix) (rA4);
			r2 += r3 + (Fix) 0;
			while (r3--) *--r2 = *--r1;
		 } else {
			r1 += (Fix) (rA4);
			r2 += (Fix) 0;
			while (r3--) *r2++ = *r1++;}}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXmakestrg(void) {	/* makestring */
   {	register Ptr aRet, rSp, rA1, rA2, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBfloat = GIbfloat;
	GIsavea4 = GMmakestrg;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	if ((Fix) (rA1) >= (Fix) 0)	goto l_makstrg0;
	rA1 = (Ptr) 0;
l_makstrg0:
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLstring_25); goto lRet;}
	(--rSp)->Val = rA2;
	rA2 = rA1;
	(--rSp)->Val = ((Ptr) GLstring_64);
	{aRet = ((Ptr) GXstrgallc); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLstring_64(void) {	/* ret_call_strgallc_27 */
   {	register Ptr aRet, rSp, rA2, rA3;
	rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
	rA3 = (rSp++)->Val;
	goto l_makstrg2;
l_makstrg1:
	*((char *) (GIa1->Val + 2) + (Fix) (rA2)) = (char) rA3;
l_makstrg2:
	{register Fix aux;
		aux = (Fix) (rA2) - 1;
		rA2 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_makstrg1;}
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXduplstrg(void) {	/* duplstring */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIsavea4 = GMduplstrg;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	if ((Fix) (rA1) < (Fix) 0)	{aRet = ((Ptr) GLstring_65); goto lRet;}
	(--GIsp)->Val = ((Ptr) GLstring_66);
	{aRet = ((Ptr) GXstringa2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_66(void) {	/* ret_call_stringa2_28 */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIa3 = rA2;
	GIa4 = (rA2->Val + 1)->Val;
	rA2 = GIa4;
	{register int aux;
		aux = (int) ((Fix) (rA2) * (Fix) (rA1));
		rA2 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	{aRet = ((Ptr) GLstring_67); goto lRet;}}
	GIsavea1 = rA1;
	(--GIsp)->Val = ((Ptr) GLstring_68);
	{aRet = ((Ptr) GXstrgallc); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLstring_68(void) {	/* ret_call_strgallc_29 */
   {	register Ptr aRet, rSp, rA2, rA4;
	rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
	rA2 = (Ptr) 0;
	goto l_dupstrg2;
l_dupstrg1:
	{register char *r1, *r2; register int r3;
		r1 = (char *) (GIa3->Val + 2);
		r2 = (char *) (GIa1->Val + 2);
		r3 = (Fix) (rA4);
		if ((r1 == r2) && ((Fix) 0 < (Fix) (rA2))) {
			r1 += r3 + (Fix) 0;
			r2 += r3 + (Fix) (rA2);
			while (r3--) *--r2 = *--r1;
		 } else {
			r1 += (Fix) 0;
			r2 += (Fix) (rA2);
			while (r3--) *r2++ = *r1++;}}
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (rA4)));
l_dupstrg2:
	{register Fix aux;
		aux = (Fix) (GIsavea1) - 1;
		GIsavea1 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_dupstrg1;}
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLstring_65(void) {	/* dupserr */
   {	register Ptr aRet;
	GIa2 = GMduplstrg;
	{aRet = ((Ptr) GXerroob); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_67(void) {	/* dupsstl */
   {	register Ptr aRet;
	GIa2 = GMduplstrg;
	{aRet = ((Ptr) GXerrstl); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXbltstrg(void) {	/* bltstring */
   {	register Ptr aRet, rSp, rA2, rA3, rA4, rBfloat;
	rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
	GIsavea4 = GMbltstrg;
	if (rA4 == (Ptr) 5)	goto l_bltstrg0;
	rA3 = (Ptr) 32767;
	if (rA4 == (Ptr) 4)	goto l_bltstrg1;
	rA2 = (Ptr) 0;
	if (rA4 != (Ptr) 3)	{aRet = ((Ptr) GLstring_23); goto lRet;}
	goto l_bltstrg2;
l_bltstrg0:
	rA3 = (rSp++)->Val;
	if (rA3 >= rBfloat)	{aRet = ((Ptr) GLstring_27); goto lRet;}
l_bltstrg1:
	rA2 = (rSp++)->Val;
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLstring_25); goto lRet;}
	if ((Fix) (rA2) < (Fix) 0)	{aRet = ((Ptr) GLstring_29); goto lRet;}
l_bltstrg2:
	GIsavea2 = rA2;
	rA2 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLstring_69);
	{aRet = ((Ptr) GXstringa2); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLstring_69(void) {	/* ret_call_stringa2_30 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	rA1 = (rSp++)->Val;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	if ((Fix) (rA1) < (Fix) 0)	{aRet = ((Ptr) GLstring_30); goto lRet;}
	GIsavea1 = rA1;
	rA1 = rSp->Val;
	if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))	{aRet = ((Ptr) GLstring_18); goto lRet;}
	rA1 = (rA1->Val + 1)->Val;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (GIsavea1)));
l_bltstr3:
	(--rSp)->Val = ((Ptr) GLstring_70);
	{aRet = ((Ptr) GLstring_34); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstring_70(void) {	/* ret_call_mina1a3_31 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	rA4 = (GIa2->Val + 1)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIsavea2)));
l_bltstr4:
	(--GIsp)->Val = ((Ptr) GLstring_71);
	{aRet = ((Ptr) GLstring_37); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLstring_71(void) {	/* ret_call_mina4a3_32 */
   {	register Ptr aRet, rSp, rA3;
	rSp = GIsp; rA3 = GIa3;
	GIa1 = (rSp++)->Val;
	if ((Fix) (rA3) <= (Fix) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	{register char *r1, *r2; register int r3;
		r1 = (char *) (GIa2->Val + 2);
		r2 = (char *) (GIa1->Val + 2);
		r3 = (Fix) (rA3);
		if ((r1 == r2) && ((Fix) (GIsavea2) < (Fix) (GIsavea1))) {
			r1 += r3 + (Fix) (GIsavea2);
			r2 += r3 + (Fix) (GIsavea1);
			while (r3--) *--r2 = *--r1;
		 } else {
			r1 += (Fix) (GIsavea2);
			r2 += (Fix) (GIsavea1);
			while (r3--) *r2++ = *r1++;}}
l_bltstrg6:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXfillstrg(void) {	/* fillstring */
   {	register Ptr aRet, rSp, rA1, rA2, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBfloat = GIbfloat;
	GIsavea4 = GMfillstrg;
	rA1 = (Ptr) 32767;
	if (rA4 == (Ptr) 3)	goto l_fillstr0;
	if (rA4 != (Ptr) 4)	{aRet = ((Ptr) GLstring_24); goto lRet;}
	rA1 = (rSp++)->Val;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
l_fillstr0:
	GIa3 = (rSp++)->Val;
	if (GIa3 >= rBfloat)	{aRet = ((Ptr) GLstring_27); goto lRet;}
	rA2 = (rSp++)->Val;
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLstring_25); goto lRet;}
	if ((Fix) (rA2) < (Fix) 0)	{aRet = ((Ptr) GLstring_29); goto lRet;}
	rA4 = rA1;
	rA1 = rSp->Val;
	if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))	{aRet = ((Ptr) GLstring_18); goto lRet;}
	rA1 = (rA1->Val + 1)->Val;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (rA2)));
l_fillstr6:
	(--rSp)->Val = ((Ptr) GLstring_72);
	{aRet = ((Ptr) GLstring_35); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLstring_72(void) {	/* ret_call_mina1a4_33 */
   {	register Ptr aRet, rSp, rA1, rA2, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
	rA1 = (rSp++)->Val;
	goto l_fillstr8;
l_fillstr7:
	*((char *) (rA1->Val + 2) + (Fix) (rA2)) = (char) GIa3;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
l_fillstr8:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_fillstr7;}
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXscanstrg(void) {	/* scanstring */
   {	register Ptr aRet;
	GIsavea4 = GMscanstrg;
	{aRet = ((Ptr) GLstring_73); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_73(void) {	/* sanstrg1 */
   {	register Ptr aRet, rSp, rA3, rA4;
	rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
	rA3 = (Ptr) 0;
	if (rA4 == (Ptr) 2)	goto l_sanstrg2;
	if (rA4 != (Ptr) 3)	{aRet = ((Ptr) GLstring_23); goto lRet;}
	rA3 = (rSp++)->Val;
	if (rA3 >= GIbfloat)	{aRet = ((Ptr) GLstring_27); goto lRet;}
	if ((Fix) (rA3) < (Fix) 0)	{aRet = ((Ptr) GLstring_31); goto lRet;}
l_sanstrg2:
	GIa2 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLstring_74);
	{aRet = ((Ptr) GXstringa2); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLstring_74(void) {	/* ret_call_stringa2_34 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLstring_75);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstring_75(void) {	/* ret_call_stringa1_35 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA4 = (rA1->Val + 1)->Val;
	{register int aux;
		aux = (int) ((Fix) (rA4) - (Fix) (rA3));
		rA4 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_sanstrg4;}
	goto l_sanstrg4;
l_sanstrg3:
	(--rSp)->Val = rA1;
	(--rSp)->Val = rA3;
	(--rSp)->Val = rA4;
	rA4 = (Ptr) ((unsigned char) *(((char *) (rA1->Val + 2)) + (Fix) (rA3)));
	rA3 = (rA2->Val + 1)->Val;
	goto l_sanpos6;
l_sanpos5:
	rA1 = (Ptr) ((unsigned char) *(((char *) (rA2->Val + 2)) + (Fix) (rA3)));
	if (rA4 == rA1)	goto l_sanpos9;
l_sanpos6:
	{register Fix aux;
		aux = (Fix) (rA3) - 1;
		rA3 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_sanpos5;}
	if (GMscanstrg != GIsavea4)	goto l_sanstrg6;
	goto l_sanposf;
l_sanpos9:
	if (GMspanstrg != GIsavea4)	goto l_sanstrg6;
l_sanposf:
	rA4 = (rSp++)->Val;
	rA3 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (1)));
l_sanstrg4:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_sanstrg3;}
	{aRet = ((Ptr) GLstring_38); goto lRet;}
l_sanstrg6:
	rA4 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	rA4 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXspanstrg(void) {	/* spanstring */
   {	register Ptr aRet;
	GIsavea4 = GMspanstrg;
	{aRet = ((Ptr) GLstring_73); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXchrpos(void) {	/* chrpos */
   {	register Ptr aRet, rSp, rA3, rA4;
	rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
	GIsavea4 = GMchrpos;
	rA3 = (Ptr) 0;
	if (rA4 == (Ptr) 2)	goto l_chrpos1;
	if (rA4 != (Ptr) 3)	{aRet = ((Ptr) GLstring_23); goto lRet;}
	rA3 = (rSp++)->Val;
	if (rA3 >= GIbfloat)	{aRet = ((Ptr) GLstring_27); goto lRet;}
	if ((Fix) (rA3) < (Fix) 0)	{aRet = ((Ptr) GLstring_31); goto lRet;}
l_chrpos1:
	GIa2 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLstring_76);
	{aRet = ((Ptr) GXstringa2); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLstring_76(void) {	/* ret_call_stringa2_36 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA1 = (rSp++)->Val;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	rA1 = (Ptr) ((UFix) (rA1) & (UFix) 255);
	rA4 = (rA2->Val + 1)->Val;
	{register int aux;
		aux = (int) ((Fix) (rA4) - (Fix) (rA3));
		rA4 = (Ptr) ((UFix) aux);
	if ((aux > FIX_MAX) || (aux < FIX_MIN))	goto l_chrpos3;}
	goto l_chrpos3;
l_chrpos2:
	GIsavea1 = (Ptr) ((unsigned char) *(((char *) (rA2->Val + 2)) + (Fix) (rA3)));
	if (GIsavea1 == rA1)	goto l_chrpos5;
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (1)));
l_chrpos3:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_chrpos2;}
	rA1 = GInil;
	{aRet = (rSp++)->Val; goto lRet;}
l_chrpos5:
	rA1 = rA3;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXsref(void) {	/* sref */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIsavea4 = GMsref;
	if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))	{aRet = ((Ptr) GLstring_18); goto lRet;}
	if (rA2 >= GIbfloat)	{aRet = ((Ptr) GLstring_25); goto lRet;}
	if ((Fix) (rA2) < (Fix) 0)	{aRet = ((Ptr) GLstring_29); goto lRet;}
	GIa3 = (rA1->Val + 1)->Val;
	if ((Fix) (rA2) >= (Fix) (GIa3))	{aRet = ((Ptr) GLstring_29); goto lRet;}
	rA1 = (Ptr) ((unsigned char) *(((char *) (rA1->Val + 2)) + (Fix) (rA2)));
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXchrnth(void) {	/* chrnth */
   {	register Ptr aRet;
	GIsavea4 = GMchrnth;
	(--GIsp)->Val = ((Ptr) GLstring_77);
	{aRet = ((Ptr) GXstringa2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_77(void) {	/* ret_call_stringa2_37 */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	if ((Fix) (rA1) < (Fix) 0)	{aRet = ((Ptr) GLstring_38); goto lRet;}
	GIa3 = (rA2->Val + 1)->Val;
	if ((Fix) (rA1) >= (Fix) (GIa3))	{aRet = ((Ptr) GLstring_38); goto lRet;}
	rA1 = (Ptr) ((unsigned char) *(((char *) (rA2->Val + 2)) + (Fix) (rA1)));
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXsset(void) {	/* sset */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	GIsavea4 = GMsset;
	GIa4 = GIa1;
	GIa1 = rA2;
	rA2 = GIa4;
	if ((rA2 < GIbstrg) || (rA2 >= GIbsymb))	{aRet = ((Ptr) GLstring_17); goto lRet;}
	(--rSp)->Val = GIa3;
	(--rSp)->Val = ((Ptr) GLstring_78);
	{aRet = ((Ptr) GLstring_79); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLstring_78(void) {	/* ret_call_chrset5_38 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXchrset(void) {	/* chrset */
   {	register Ptr aRet;
	GIsavea4 = GMchrset;
	(--GIsp)->Val = ((Ptr) GLstring_79);
	{aRet = ((Ptr) GXstringa2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_79(void) {	/* chrset5 */
   {	register Ptr aRet, rA1, rA2, rA3, rBfloat;
	rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBfloat = GIbfloat;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	if ((Fix) (rA1) < (Fix) 0)	{aRet = ((Ptr) GLstring_30); goto lRet;}
	if (rA3 >= rBfloat)	{aRet = ((Ptr) GLstring_27); goto lRet;}
	GIa4 = (rA2->Val + 1)->Val;
	if ((Fix) (rA1) >= (Fix) (GIa4))	{aRet = ((Ptr) GLstring_30); goto lRet;}
	*((char *) (rA2->Val + 2) + (Fix) (rA1)) = (char) rA3;
	rA1 = rA3;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXtypestrg(void) {	/* typestring */
   {	register Ptr aRet, rSp, rA1, rA3, rA4, rBstrg, rBsymb, rBcons;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
	GIa2 = GMtypestrg;
	if (rA4 == (Ptr) 1)	goto l_typesg;
	if (rA4 == (Ptr) 2)	goto l_typess;
	rA1 = (Ptr) 1;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_typesg:
	rA1 = (rSp++)->Val;
	if ((rA1 < rBstrg) || (rA1 >= rBsymb))	{aRet = ((Ptr) GXerrnsa); goto lRet;}
l_typesg2:
	rA1 = (rA1 + 1)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_typess:
	rA1 = (rSp++)->Val;
	if ((rA1 >= rBsymb) && (rA1 < rBcons))	goto l_types2;
	if ((long) rA1 < (long) rBcons)	{aRet = ((Ptr) GXerrsym); goto lRet;}
l_types2:
	if (rA1 == GInil)	{aRet = ((Ptr) GXerrsym); goto lRet;}
	rA3 = (rSp++)->Val;
	if ((rA3 < rBstrg) || (rA3 >= rBsymb))	goto l_typeser1;
	(rA3 + 1)->Val = rA1;
	{aRet = (rSp++)->Val; goto lRet;}
l_typeser1:
	rA1 = rA3;
	{aRet = ((Ptr) GXerrnsa); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

extern Ptr GXexchstrg(void) {	/* exchstring */
   {	register Ptr aRet, rSp, rA1, rA2, rBstrg, rBsymb;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBstrg = GIbstrg; rBsymb = GIbsymb;
	GIsavea4 = GMexchstrg;
	if ((rA1 < rBstrg) || (rA1 >= rBsymb))	{aRet = ((Ptr) GLstring_18); goto lRet;}
	if ((rA2 < rBstrg) || (rA2 >= rBsymb))	{aRet = ((Ptr) GLstring_17); goto lRet;}
	(--rSp)->Val = (rA1 + 1)->Val;
	(--rSp)->Val = (rA2 + 1)->Val;
	GIocheap = rA1->Val;
	rA1->Val = rA2->Val;
	rA2->Val = GIocheap;
	(rA1->Val)->Val = rA1;
	(rA2->Val)->Val = rA2;
	(rA1 + 1)->Val = (rSp++)->Val;
	(rA2 + 1)->Val = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXffindex(void) {	/* index */
   {	register Ptr aRet, rSp, rA3, rA4;
	rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
	GIsavea4 = GMffindex;
	rA3 = (Ptr) 0;
	if (rA4 == (Ptr) 2)	goto l_ffindg3;
	if (rA4 != (Ptr) 3)	{aRet = ((Ptr) GLstring_23); goto lRet;}
	rA3 = (rSp++)->Val;
	if (rA3 >= GIbfloat)	{aRet = ((Ptr) GLstring_27); goto lRet;}
	if ((Fix) (rA3) < (Fix) 0)	{aRet = ((Ptr) GLstring_31); goto lRet;}
l_ffindg3:
	GIa2 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLstring_80);
	{aRet = ((Ptr) GXstringa2); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLstring_80(void) {	/* ret_call_stringa2_40 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLstring_81);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstring_81(void) {	/* ret_call_stringa1_41 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA4 = (rA2->Val + 1)->Val;
	GIsavea1 = (rA1->Val + 1)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIsavea1)));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rA3)));
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
	goto l_ffindex4;
l_ffindex3:
	{register char *r1, *r2; register int r3;
		r1 = (char *) (rA2->Val + 2);
		r1 += (Fix) (rA3);
		r2 = (char *) (rA1->Val + 2);
		r3 = (Fix) (GIsavea1);
		if (r3 > 0) while (r3--) if (*r2++ != *r1++) goto hbteq_string_82;
			goto l_ffindex6;}
	hbteq_string_82:
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (1)));
l_ffindex4:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_ffindex3;}
	rA1 = GInil;
	{aRet = (rSp++)->Val; goto lRet;}
l_ffindex6:
	rA1 = rA3;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXalphales(void) {	/* alphalessp */
   {	register Ptr aRet;
	GIsavea4 = GMalphales;
	(--GIsp)->Val = ((Ptr) GLstring_83);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_83(void) {	/* ret_call_stringa1_42 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLstring_84);
	{aRet = ((Ptr) GXstringa2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_84(void) {	/* ret_call_stringa2_43 */
   {	register Ptr aRet;
	GIa3 = (GIa1->Val + 1)->Val;
	GIa4 = (GIa2->Val + 1)->Val;
	(--GIsp)->Val = ((Ptr) GLstring_85);
	{aRet = ((Ptr) GLstring_36); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_85(void) {	/* ret_call_mina3a4_44 */
   {	register Ptr aRet, rSp, rA1, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4;
	rA3 = (Ptr) 0;
	goto l_alpha2;
l_alpha1:
	GIsavea1 = (Ptr) ((unsigned char) *(((char *) (rA1->Val + 2)) + (Fix) (rA3)));
	GIsavea2 = (Ptr) ((unsigned char) *(((char *) (GIa2->Val + 2)) + (Fix) (rA3)));
	if ((Fix) (GIsavea1) < (Fix) (GIsavea2))	goto l_strue;
	if (GIsavea1 != GIsavea2)	{aRet = ((Ptr) GLstring_38); goto lRet;}
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (1)));
l_alpha2:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_alpha1;}
	rA4 = (rA1->Val + 1)->Val;
	if (rA4 != rA3)	{aRet = ((Ptr) GLstring_38); goto lRet;}
l_strue:
	rA1 = GMt;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXffsymbol(void) {	/* symbol */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	if ((rA2 < GIbsymb) || (rA2 >= GIbcons))	goto l_ffsymb1;
	{aRet = ((Ptr) GXtrysympk); goto lRet;}
l_ffsymb1:
	GIsavea4 = GMffsymbol;
	(--GIsp)->Val = ((Ptr) GLstring_86);
	{aRet = ((Ptr) GXstringa2); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_86(void) {	/* ret_call_stringa2_45 */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	if ((rA1 < GIbsymb) || (rA1 >= GIbcons))	goto l_ffsymbr2;
	{aRet = ((Ptr) GXtrysymp); goto lRet;}
l_ffsymbr2:
	GIa2 = GMffsymbol;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXconcat(void) {	/* concat */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	GIsavea2 = (GIsp + (Fix) (rA4))->Val;
	(GIsp + (Fix) (rA4))->Val = ((Ptr) GLstring_87);
	GIsavea4 = GMconcat;
	{aRet = ((Ptr) GLstring_50); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_87(void) {	/* concat9 */
   {	register Ptr aRet;
	GIa2 = GIa1;
	GIa1 = GInil;
	(--GIsp)->Val = GIsavea2;
	{aRet = ((Ptr) GXtrysymp); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXhash(void) {	/* hash */
   {	register Ptr aRet;
	GIsavea4 = GMhash;
	(--GIsp)->Val = ((Ptr) GXhashint);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfpnam(void) {	/* pname */
   {	register Ptr aRet;
	GIsavea4 = GMfpnam;
	(--GIsp)->Val = ((Ptr) GLstring_88);
	{aRet = ((Ptr) GXstringa1); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_88(void) {	/* ret_call_stringa1_47 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA2 = (rA1->Val + 1)->Val;
	rA3 = rA1;
	rA1 = GInil;
	goto l_fpnam2;
l_fpnam1:
	rA4 = (Ptr) ((unsigned char) *(((char *) (rA3->Val + 2)) + (Fix) (rA2)));
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA4, rA1);
l_fpnam2:
	{register Fix aux;
		aux = (Fix) (rA2) - 1;
		rA2 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_fpnam1;}
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXgensym(void) {	/* gensym */
   {	register Ptr aRet, rSp, rA1, rA2;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
	rA1 = GMgenstrg;
	(--rSp)->Val = rA1->Val;
	rA2 = GMgenscpt;
	rA1 = rA2->Val;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) + (Fix) (1)));
l_gennerr:
	rA2->Val = rA1;
	(--rSp)->Val = rA1;
	GIa4 = (Ptr) 2;
	{aRet = ((Ptr) GXconcat); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXrdpscrn(void) {	/* rdpscrn */
   {	register Ptr aRet;
	GIsavea4 = GMtyrdspl;
	{aRet = ((Ptr) GLstring_89); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_90(void) {	/* rdpscrn1 */
   {	register Ptr aRet, rSp, rA3, rA4;
	rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
	{register char *r1, *r2; register int r3;
		r1 = (char *) (GIsavea1->Val + 2);
		r1 += (Fix) (rA3);
		r2 = (char *) (GIsavea2->Val + 2);
		r2 += (Fix) (rA3);
		r3 = (Fix) (GIdlx);
		if (r3 > 0) while (r3--) if (*r2++ != *r1++) goto hbteq_string_91;
			{aRet = ((Ptr) GLstring_92); goto lRet;}}
	hbteq_string_91:
	(--rSp)->Val = rA3;
	(--rSp)->Val = rA4;
	rA4 = GIdlx;
	GIoldid = rA3;
	GIoldid = (Ptr) ((UFix) ((Fix) (GIoldid) + (Fix) (rA4)));
	GIoldx = GIxr;
	GIoldx = (Ptr) ((UFix) ((Fix) (GIoldx) + (Fix) (rA4)));
	{aRet = ((Ptr) GLstring_93); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLstring_93(void) {	/* rdpscrn3 */
   {	register Ptr aRet, rA1, rA3;
	rA1 = GIa1; rA3 = GIa3;
	rA1 = (Ptr) ((unsigned char) *(((char *) (GIsavea1->Val + 2)) + (Fix) (rA3)));
	GIa2 = (Ptr) ((unsigned char) *(((char *) (GIsavea2->Val + 2)) + (Fix) (rA3)));
	*((char *) (GIsavea2->Val + 2) + (Fix) (rA3)) = (char) rA1;
	if (rA1 != GIa2)	{aRet = ((Ptr) GLstring_94); goto lRet;}
	{aRet = ((Ptr) GLstring_95); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLstring_95(void) {	/* rdpscrn4 */
   {	register Ptr aRet, rSp, rA3, rA4;
	rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (1)));
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	{aRet = ((Ptr) GLstring_93); goto lRet;}
		else rA4 = (Ptr) 0;}
	rA4 = (rSp++)->Val;
	rA3 = (rSp++)->Val;
	{aRet = ((Ptr) GLstring_92); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLstring_92(void) {	/* rdpscrn5 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	GIa3 = (Ptr) ((UFix) ((Fix) (GIa3) + (Fix) (GIwd)));
	GIyr = (Ptr) ((UFix) ((Fix) (GIyr) + (Fix) (1)));
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	{aRet = ((Ptr) GLstring_90); goto lRet;}
		else rA4 = (Ptr) 0;}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLstring_94(void) {	/* scrnaff */
   {	register Ptr aRet, rSp, rA3;
	rSp = GIsp; rA3 = GIa3;
	(--rSp)->Val = GIsavea1;
	(--rSp)->Val = GIsavea2;
	(--rSp)->Val = GIa4;
	(--rSp)->Val = rA3;
	if ((Fix) (GIa1) >= (Fix) 32)	goto l_scrnaff0;
	GIa1 = (Ptr) 46;
l_scrnaff0:
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) (GIoldid)));
	GIoldid = (Ptr) ((UFix) ((Fix) (GIoldid) + (Fix) (rA3)));
	GIoldx = (Ptr) ((UFix) ((Fix) (GIoldx) + (Fix) (rA3)));
	GIa4 = rA3;
	(--rSp)->Val = ((Ptr) GLstring_96);
	if (rA3 != (Ptr) 1)	{aRet = ((Ptr) GLstring_97); goto lRet;}
	{aRet = ((Ptr) GLstring_98); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLstring_98(void) {	/* scrnaff1 */
   {	register Ptr aRet;
	(--GIsp)->Val = GIa1;
	{aRet = ((Ptr) GXtyo); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_96(void) {	/* scrnaff3 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa3 = (rSp++)->Val;
	GIa4 = (rSp++)->Val;
	GIsavea2 = (rSp++)->Val;
	GIsavea1 = (rSp++)->Val;
	{aRet = ((Ptr) GLstring_95); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstring_97(void) {	/* scrnaff4 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
	rA2 = (rSp + 1)->Val;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) (1)));
	if (rA3 != (Ptr) 3)	goto l_scrnaff7;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) - (Fix) (1)));
	rA3 = (Ptr) ((unsigned char) *(((char *) (GIsavea1->Val + 2)) + (Fix) (rA2)));
	(--rSp)->Val = rA3;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
l_scrnaff6:
	rA3 = (Ptr) ((unsigned char) *(((char *) (GIsavea1->Val + 2)) + (Fix) (rA2)));
	(--rSp)->Val = rA3;
	{aRet = ((Ptr) GLstring_98); goto lRet;}
l_scrnaff7:
	if (rA3 == (Ptr) 2)	goto l_scrnaff6;
	(--rSp)->Val = rA1;
	rA1 = GIoldx;
	rA2 = GIyr;
	(--rSp)->Val = ((Ptr) GLstring_99);
	{aRet = ((Ptr) GXtycursor); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLstring_99(void) {	/* ret_call_tycursor_48 */
   {	register Ptr aRet;
	GIa4 = (Ptr) 1;
	{aRet = ((Ptr) GXtyo); goto lRet;}
	{aRet = ((Ptr) GLstring_100); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_100(void) {	/* clipscrn */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	rA4 = (Ptr) 0;
	if ((Fix) (rA1) < (Fix) 0)	goto l_clipscr3;
	rA3 = rA1;
l_clipscr1:
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLstring_25); goto lRet;}
	if ((Fix) (rA2) < (Fix) 0)	goto l_clipscr4;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (rA2)));
	{aRet = (rSp++)->Val; goto lRet;}
l_clipscr3:
	rA3 = (Ptr) 0;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (rA1)));
	goto l_clipscr1;
l_clipscr4:
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) - (Fix) (rA2)));
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLstring_101(void) {	/* mina1dlx */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if ((Fix) (GIdlx) > (Fix) (rA1))	goto l_minx1;
	{aRet = (rSp++)->Val; goto lRet;}
l_minx1:
	GIdlx = rA1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstring_102(void) {	/* mina1dly */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if ((Fix) (GIdly) > (Fix) (rA1))	goto l_miny1;
	{aRet = (rSp++)->Val; goto lRet;}
l_miny1:
	GIdly = rA1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXbltscrn(void) {	/* bltscreen */
   {	register Ptr aRet;
	GIsavea4 = GMbltscrn;
	{aRet = ((Ptr) GLstring_89); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_89(void) {	/* bltscrn0 */
   {	register Ptr aRet, rSp, rA1, rA2, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBfloat = GIbfloat;
	rA1 = (rSp++)->Val;
	if (rA4 == (Ptr) 12)	goto l_bltscrna;
	if (rA4 != (Ptr) 4)	{aRet = ((Ptr) GLstring_24); goto lRet;}
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	rA2 = (rSp++)->Val;
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLstring_25); goto lRet;}
	GIdlx = rA2;
	GIdly = rA1;
	GIws = rA2;
	GIwd = rA2;
	GIllid = (Ptr) 0;
	GIxr = (Ptr) 0;
	GIyr = (Ptr) 0;
	GIllis = (Ptr) 0;
	GIa3 = (Ptr) 0;
	rA4 = (Ptr) 0;
	{aRet = ((Ptr) GLstring_103); goto lRet;}
l_bltscrna:
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	GIdly = rA1;
	rA1 = (rSp++)->Val;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	GIdlx = rA1;
	GIys = (rSp++)->Val;
	rA2 = (rSp++)->Val;
	GIyr = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	(--rSp)->Val = ((Ptr) GLstring_104);
	{aRet = ((Ptr) GLstring_100); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLstring_104(void) {	/* ret_call_clipscrn_49 */
   {	register Ptr aRet, rA3;
	rA3 = GIa3;
	GIxr = rA3;
	GIllid = rA3;
	GIllis = GIa4;
	GIa2 = GIys;
	GIa1 = GIyr;
	(--GIsp)->Val = ((Ptr) GLstring_105);
	{aRet = ((Ptr) GLstring_100); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_105(void) {	/* ret_call_clipscrn_50 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIyr = GIa3;
	rA1 = (rSp++)->Val;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (GIa4)));
	(--rSp)->Val = ((Ptr) GLstring_106);
	{aRet = ((Ptr) GLstring_102); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstring_106(void) {	/* ret_call_mina1dly_51 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	rA1 = (rSp++)->Val;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	GIws = rA1;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (GIllis)));
	(--rSp)->Val = ((Ptr) GLstring_107);
	{aRet = ((Ptr) GLstring_101); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstring_107(void) {	/* ret_call_mina1dlx_52 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	rA1 = (rSp++)->Val;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (GIa3)));
	(--rSp)->Val = ((Ptr) GLstring_108);
	{aRet = ((Ptr) GLstring_102); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstring_108(void) {	/* ret_call_mina1dly_53 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	rA1 = (rSp++)->Val;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	GIwd = rA1;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (GIllid)));
	(--rSp)->Val = ((Ptr) GLstring_103);
	{aRet = ((Ptr) GLstring_101); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLstring_103(void) {	/* bltscrnb */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBstrg, rBsymb;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBstrg = GIbstrg; rBsymb = GIbsymb;
	GIsavea2 = (rSp++)->Val;
	if ((GIsavea2 < rBstrg) || (GIsavea2 >= rBsymb))	goto l_bltscrn8;
	GIsavea1 = (rSp++)->Val;
	if ((GIsavea1 < rBstrg) || (GIsavea1 >= rBsymb))	goto l_bltscrn9;
	if ((Fix) (GIdlx) <= (Fix) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	if ((Fix) (GIdly) <= (Fix) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) * (Fix) (GIws)));
	GIllis = (Ptr) ((UFix) ((Fix) (GIllis) + (Fix) (rA4)));
	rA4 = GIdly;
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) * (Fix) (GIwd)));
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (GIllid)));
	if (GMtyrdspl == GIsavea4)	{aRet = ((Ptr) GLstring_90); goto lRet;}
	rA1 = GIdlx;
	rA2 = GIllis;
l_bltscrn6:
	{register char *r1, *r2; register int r3;
		r1 = (char *) (GIsavea2->Val + 2);
		r2 = (char *) (GIsavea1->Val + 2);
		r3 = (Fix) (rA1);
		if ((r1 == r2) && ((Fix) (rA2) < (Fix) (rA3))) {
			r1 += r3 + (Fix) (rA2);
			r2 += r3 + (Fix) (rA3);
			while (r3--) *--r2 = *--r1;
		 } else {
			r1 += (Fix) (rA2);
			r2 += (Fix) (rA3);
			while (r3--) *r2++ = *r1++;}}
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (GIwd)));
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (GIws)));
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	goto l_bltscrn6;
		else rA4 = (Ptr) 0;}
l_bltscrn7:
	{aRet = (rSp++)->Val; goto lRet;}
l_bltscrn8:
	rA1 = GIsavea2;
	{aRet = ((Ptr) GLstring_18); goto lRet;}
l_bltscrn9:
	rA1 = GIsavea1;
	{aRet = ((Ptr) GLstring_18); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXtypevect(void) {	/* typevector */
   {	register Ptr aRet, rSp, rA1, rA3, rA4, rBvect, rBstrg, rBcons;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3; rA4 = GIa4; rBvect = GIbvect; rBstrg = GIbstrg; rBcons = GIbcons;
	GIa2 = GMtypevect;
	if (rA4 == (Ptr) 1)	goto l_typevg;
	if (rA4 == (Ptr) 2)	goto l_typevs;
	rA1 = (Ptr) 1;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
l_typevg:
	rA1 = (rSp++)->Val;
	if ((rA1 < rBvect) || (rA1 >= rBstrg))	{aRet = ((Ptr) GXerrvec); goto lRet;}
	rA1 = (rA1 + 1)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
l_typevs:
	rA1 = (rSp++)->Val;
	if ((rA1 >= GIbsymb) && (rA1 < rBcons))	goto l_typevs2;
	if ((long) rA1 < (long) rBcons)	{aRet = ((Ptr) GXerrsym); goto lRet;}
l_typevs2:
	if (rA1 == GInil)	{aRet = ((Ptr) GXerrsym); goto lRet;}
	rA3 = (rSp++)->Val;
	if ((rA3 < rBvect) || (rA3 >= rBstrg))	goto l_typever1;
	(rA3 + 1)->Val = rA1;
	{aRet = (rSp++)->Val; goto lRet;}
l_typever1:
	rA1 = rA3;
	{aRet = ((Ptr) GXerrvec); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa3 = rA3; return (aRet);}}

extern Ptr GXmakevect(void) {	/* makevector */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIsavea4 = GMmakevect;
	if (rA1 >= GIbfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	if ((Fix) (rA1) < (Fix) 0)	{aRet = ((Ptr) GLstring_30); goto lRet;}
	GIa3 = rA1;
	{aRet = ((Ptr) GLstring_109); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_109(void) {	/* makvect0 */
   {	register Ptr aRet;
	GIa1 = GIfvect;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLstring_110); goto lRet;}
	GIocheap = GIcheap;
	GIcheap = (GIcheap + 2 + (Fix) (GIa3));
	if (GIeheap < GIcheap)	{aRet = ((Ptr) GLstring_111); goto lRet;}
	{aRet = ((Ptr) GLstring_112); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_112(void) {	/* makvect2 */
   {	register Ptr aRet, rSp, rA1, rA3;
	rSp = GIsp; rA1 = GIa1; rA3 = GIa3;
	GIfvect = rA1->Val;
	rA1->Val = GIocheap;
	(((Ptr) &GIocheap)->Val + 1)->Val = rA3;
	(((Ptr) &GIocheap)->Val)->Val = rA1;
	goto l_vectfil4;
l_vectfil1:
	(rA1->Val + 2 + (Fix) (rA3))->Val = GIa2;
l_vectfil4:
	{register Fix aux;
		aux = (Fix) (rA3) - 1;
		rA3 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_vectfil1;}
	(rA1 + 1)->Val = GMvector;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLstring_110(void) {	/* makvect3 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLstring_109);
	{aRet = ((Ptr) GXgcvect); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_111(void) {	/* makvect4 */
   {	register Ptr aRet;
	GIa1 = GInil;
	GIcheap = GIocheap;
	(--GIsp)->Val = ((Ptr) GLstring_113);
	{aRet = ((Ptr) GXhgc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_113(void) {	/* ret_call_hgc_56 */
   {	register Ptr aRet;
	GIa1 = GIfvect;
	GIocheap = GIcheap;
	GIcheap = (GIcheap + 2 + (Fix) (GIa3));
	if (GIcheap < GIeheap)	{aRet = ((Ptr) GLstring_112); goto lRet;}
	GIa1 = GInil;
	GIcheap = GIocheap;
	{aRet = ((Ptr) GXerrfh); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXvlength(void) {	/* vlength */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	GIsavea4 = GMvlength;
	if ((rA1 < GIbvect) || (rA1 >= GIbstrg))	{aRet = ((Ptr) GLstring_20); goto lRet;}
	rA1 = (rA1->Val + 1)->Val;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXeqvector(void) {	/* eqvector */
   {	register Ptr aRet, rA1, rA2, rBvect, rBstrg;
	rA1 = GIa1; rA2 = GIa2; rBvect = GIbvect; rBstrg = GIbstrg;
	GIsavea4 = GMeqvector;
	if ((rA1 < rBvect) || (rA1 >= rBstrg))	{aRet = ((Ptr) GLstring_20); goto lRet;}
	if ((rA2 < rBvect) || (rA2 >= rBstrg))	{aRet = ((Ptr) GLstring_19); goto lRet;}
	{aRet = ((Ptr) GXeqvectri); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXeqvectri(void) {	/* eqvectri */
   {	register Ptr aRet, rA1, rA2, rA4;
	rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
	GIa3 = (rA1->Val + 1)->Val;
	rA4 = (rA2->Val + 1)->Val;
	if (GIa3 != rA4)	{aRet = ((Ptr) GLstring_38); goto lRet;}
	rA4 = (rA1 + 1)->Val;
	if ((rA4 < GIbsymb) || (rA4 >= GIbcons))	{aRet = ((Ptr) GLstring_114); goto lRet;}
	if (rA4 != (rA2 + 1)->Val)	{aRet = ((Ptr) GLstring_38); goto lRet;}
	{aRet = ((Ptr) GLstring_115); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLstring_116(void) {	/* eqvect4 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
	(--rSp)->Val = rA1;
	(--rSp)->Val = rA2;
	rA1 = (rA1->Val + 2 + (Fix) (rA3))->Val;
	rA2 = (rA2->Val + 2 + (Fix) (rA3))->Val;
	(--rSp)->Val = rA3;
	(--rSp)->Val = ((Ptr) GLstring_117);
	{aRet = ((Ptr) GXequal); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLstring_117(void) {	/* ret_call_equal_57 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa4 = GIa1;
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	GIa1 = (rSp++)->Val;
	if (GIa4 == GInil)	{aRet = ((Ptr) GLstring_38); goto lRet;}
	{aRet = ((Ptr) GLstring_115); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstring_115(void) {	/* eqvect5 */
   {	register Ptr aRet;
	{register Fix aux;
		aux = (Fix) (GIa3) - 1;
		GIa3 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	{aRet = ((Ptr) GLstring_116); goto lRet;}}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLstring_114(void) {	/* eqvect6 */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = rA2;
	(--rSp)->Val = GIa3;
	GIa1 = GIa4;
	rA2 = (rA2 + 1)->Val;
	(--rSp)->Val = ((Ptr) GLstring_118);
	{aRet = ((Ptr) GXequal); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLstring_118(void) {	/* ret_call_equal_58 */
   {	register Ptr aRet, rSp, rA1, rNil;
	rSp = GIsp; rA1 = GIa1; rNil = GInil;
	GIa4 = rA1;
	GIa3 = (rSp++)->Val;
	GIa2 = (rSp++)->Val;
	rA1 = (rSp++)->Val;
	if (GIa4 != rNil)	{aRet = ((Ptr) GLstring_115); goto lRet;}
	rA1 = rNil;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXvref(void) {	/* vref */
   {	register Ptr aRet, rA1, rA2;
	rA1 = GIa1; rA2 = GIa2;
	GIsavea4 = GMvref;
	if (rA2 >= GIbfloat)	{aRet = ((Ptr) GLstring_25); goto lRet;}
	if ((Fix) (rA2) < (Fix) 0)	{aRet = ((Ptr) GLstring_29); goto lRet;}
	if ((rA1 < GIbvect) || (rA1 >= GIbstrg))	{aRet = ((Ptr) GLstring_20); goto lRet;}
	GIa3 = (rA1->Val + 1)->Val;
	if ((Fix) (rA2) >= (Fix) (GIa3))	{aRet = ((Ptr) GLstring_29); goto lRet;}
	rA1 = (rA1->Val + 2 + (Fix) (rA2))->Val;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXvset(void) {	/* vset */
   {	register Ptr aRet, rA1, rA2, rA3;
	rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
	GIsavea4 = GMvset;
	if (rA2 >= GIbfloat)	{aRet = ((Ptr) GLstring_25); goto lRet;}
	if ((Fix) (rA2) < (Fix) 0)	{aRet = ((Ptr) GLstring_29); goto lRet;}
	if ((rA1 < GIbvect) || (rA1 >= GIbstrg))	{aRet = ((Ptr) GLstring_20); goto lRet;}
	GIa4 = (rA1->Val + 1)->Val;
	if ((Fix) (rA2) >= (Fix) (GIa4))	{aRet = ((Ptr) GLstring_29); goto lRet;}
	(rA1->Val + 2 + (Fix) (rA2))->Val = rA3;
	rA1 = rA3;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXbltvect(void) {	/* bltvector */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBfloat, rBvect, rBstrg;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg;
	GIsavea4 = GMbltvect;
	if (rA4 == (Ptr) 5)	goto l_bltvect0;
	rA3 = (Ptr) 32767;
	if (rA4 == (Ptr) 4)	goto l_bltvect1;
	rA2 = (Ptr) 0;
	if (rA4 != (Ptr) 3)	{aRet = ((Ptr) GLstring_23); goto lRet;}
	goto l_bltvect2;
l_bltvect0:
	rA3 = (rSp++)->Val;
	if (rA3 >= rBfloat)	{aRet = ((Ptr) GLstring_27); goto lRet;}
l_bltvect1:
	rA2 = (rSp++)->Val;
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLstring_25); goto lRet;}
	if ((Fix) (rA2) < (Fix) 0)	{aRet = ((Ptr) GLstring_29); goto lRet;}
l_bltvect2:
	GIsavea2 = rA2;
	rA2 = (rSp++)->Val;
	if ((rA2 < rBvect) || (rA2 >= rBstrg))	{aRet = ((Ptr) GLstring_19); goto lRet;}
	rA1 = (rSp++)->Val;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
	if ((Fix) (rA1) < (Fix) 0)	{aRet = ((Ptr) GLstring_30); goto lRet;}
	GIsavea1 = rA1;
	rA1 = rSp->Val;
	if ((rA1 < rBvect) || (rA1 >= rBstrg))	{aRet = ((Ptr) GLstring_20); goto lRet;}
	rA1 = (rA1->Val + 1)->Val;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (GIsavea1)));
	(--rSp)->Val = ((Ptr) GLstring_119);
	{aRet = ((Ptr) GLstring_34); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLstring_119(void) {	/* ret_call_mina1a3_59 */
   {	register Ptr aRet, rA4;
	rA4 = GIa4;
	rA4 = (GIa2->Val + 1)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (GIsavea2)));
	(--GIsp)->Val = ((Ptr) GLstring_120);
	{aRet = ((Ptr) GLstring_37); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLstring_120(void) {	/* ret_call_mina4a3_60 */
   {	register Ptr aRet, rSp, rA3;
	rSp = GIsp; rA3 = GIa3;
	GIa1 = (rSp++)->Val;
	if ((Fix) (rA3) <= (Fix) 0)	{ aRet = (rSp++)->Val; goto lRet;}
	{register Ptr r1, r2; register int r3;
		r1 = (GIa2->Val + 2);
		r2 = (GIa1->Val + 2);
		r3 = (Fix) (rA3);
		if ((r1 == r2) && ((Fix) (GIsavea2) < (Fix) (GIsavea1))) {
			r1 += r3 + (Fix) (GIsavea2);
			r2 += r3 + (Fix) (GIsavea1);
			while (r3--) (--r2)->Val = (--r1)->Val;
		 } else {
			r1 += (Fix) (GIsavea2);
			r2 += (Fix) (GIsavea1);
			while (r3--) (r2++)->Val = (r1++)->Val;}}
l_bltvect6:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXvector(void) {	/* vector */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = GIa4;
	(--rSp)->Val = GIa1;
	GIa2 = GInil;
	(--rSp)->Val = ((Ptr) GLstring_121);
	{aRet = ((Ptr) GXmakevect); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLstring_121(void) {	/* ret_call_makevect_61 */
   {	register Ptr aRet, rSp, rA2, rA4;
	rSp = GIsp; rA2 = GIa2; rA4 = GIa4;
	rA4 = (rSp++)->Val;
	goto l_vector2;
l_vector1:
	rA2 = (rSp++)->Val;
	(GIa1->Val + 2 + (Fix) (rA4))->Val = rA2;
l_vector2:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_vector1;}
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXexchvect(void) {	/* exchvector */
   {	register Ptr aRet, rSp, rA1, rA2, rBvect, rBstrg;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBvect = GIbvect; rBstrg = GIbstrg;
	GIsavea4 = GMexchvect;
	if ((rA1 < rBvect) || (rA1 >= rBstrg))	{aRet = ((Ptr) GLstring_20); goto lRet;}
	if ((rA2 < rBvect) || (rA2 >= rBstrg))	{aRet = ((Ptr) GLstring_19); goto lRet;}
	(--rSp)->Val = (rA1 + 1)->Val;
	(--rSp)->Val = (rA2 + 1)->Val;
	GIocheap = rA1->Val;
	rA1->Val = rA2->Val;
	rA2->Val = GIocheap;
	(rA1->Val)->Val = rA1;
	(rA2->Val)->Val = rA2;
	(rA1 + 1)->Val = (rSp++)->Val;
	(rA2 + 1)->Val = (rSp++)->Val;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXfillvect(void) {	/* fillvector */
   {	register Ptr aRet, rSp, rA1, rA2, rA4, rBfloat;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBfloat = GIbfloat;
	GIsavea4 = GMfillvect;
	rA1 = (Ptr) 32767;
	if (rA4 == (Ptr) 3)	goto l_fillvec0;
	if (rA4 != (Ptr) 4)	{aRet = ((Ptr) GLstring_24); goto lRet;}
	rA1 = (rSp++)->Val;
	if (rA1 >= rBfloat)	{aRet = ((Ptr) GLstring_26); goto lRet;}
l_fillvec0:
	GIa3 = (rSp++)->Val;
	rA2 = (rSp++)->Val;
	if (rA2 >= rBfloat)	{aRet = ((Ptr) GLstring_25); goto lRet;}
	if ((Fix) (rA2) < (Fix) 0)	{aRet = ((Ptr) GLstring_29); goto lRet;}
	rA4 = rA1;
	rA1 = rSp->Val;
	if ((rA1 < GIbvect) || (rA1 >= GIbstrg))	{aRet = ((Ptr) GLstring_20); goto lRet;}
	rA1 = (rA1->Val + 1)->Val;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (rA2)));
l_fillvec6:
	(--rSp)->Val = ((Ptr) GLstring_122);
	{aRet = ((Ptr) GLstring_35); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLstring_122(void) {	/* ret_call_mina1a4_62 */
   {	register Ptr aRet, rSp, rA1, rA2, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
	rA1 = (rSp++)->Val;
	goto l_fillvec8;
l_fillvec7:
	(rA1->Val + 2 + (Fix) (rA2))->Val = GIa3;
	rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
l_fillvec8:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_fillvec7;}
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GDstring_123() {	/* trace string */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDstring_124() {	/* trace plength */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,3,1,2);
  lRet:  return (aRet);}}

static Ptr GDstring_125() {	/* trace slength */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,4,1,2);
  lRet:  return (aRet);}}

static Ptr GDstring_126() {	/* trace slen */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,5,1,2);
  lRet:  return (aRet);}}

static Ptr GDstring_127() {	/* trace catenate */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,6,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_128() {	/* trace substring-equal */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,8,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_129() {	/* trace eqstring */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,9,1,10);
  lRet:  return (aRet);}}

static Ptr GDstring_130() {	/* trace substring */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,11,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_131() {	/* trace makestring */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,12,1,10);
  lRet:  return (aRet);}}

static Ptr GDstring_132() {	/* trace duplstring */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,13,1,10);
  lRet:  return (aRet);}}

static Ptr GDstring_133() {	/* trace bltstring */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,14,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_134() {	/* trace fillstring */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,15,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_135() {	/* trace scanstring */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,16,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_136() {	/* trace spanstring */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,17,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_137() {	/* trace chrpos */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,18,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_138() {	/* trace sref */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,19,1,10);
  lRet:  return (aRet);}}

static Ptr GDstring_139() {	/* trace chrnth */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,20,1,10);
  lRet:  return (aRet);}}

static Ptr GDstring_140() {	/* trace sset */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,21,1,22);
  lRet:  return (aRet);}}

static Ptr GDstring_141() {	/* trace chrset */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,23,1,22);
  lRet:  return (aRet);}}

static Ptr GDstring_142() {	/* trace typestring */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,24,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_143() {	/* trace exchstring */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,25,1,10);
  lRet:  return (aRet);}}

static Ptr GDstring_144() {	/* trace index */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,26,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_145() {	/* trace alphalessp */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,27,1,10);
  lRet:  return (aRet);}}

static Ptr GDstring_146() {	/* trace symbol */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,28,1,10);
  lRet:  return (aRet);}}

static Ptr GDstring_147() {	/* trace concat */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,29,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_148() {	/* trace hash */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,30,1,2);
  lRet:  return (aRet);}}

static Ptr GDstring_149() {	/* trace pname */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,31,1,2);
  lRet:  return (aRet);}}

static Ptr GDstring_150() {	/* trace gensym */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,32,1,33);
  lRet:  return (aRet);}}

static Ptr GDstring_151() {	/* trace bltscreen */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,34,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_152() {	/* trace typevector */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,35,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_153() {	/* trace makevector */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,36,1,10);
  lRet:  return (aRet);}}

static Ptr GDstring_154() {	/* trace vlength */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,37,1,2);
  lRet:  return (aRet);}}

static Ptr GDstring_155() {	/* trace eqvector */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,38,1,10);
  lRet:  return (aRet);}}

static Ptr GDstring_156() {	/* trace vref */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,39,1,10);
  lRet:  return (aRet);}}

static Ptr GDstring_157() {	/* trace vset */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,40,1,22);
  lRet:  return (aRet);}}

static Ptr GDstring_158() {	/* trace bltvector */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,41,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_159() {	/* trace vector */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,42,1,7);
  lRet:  return (aRet);}}

static Ptr GDstring_160() {	/* trace exchvector */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,43,1,10);
  lRet:  return (aRet);}}

static Ptr GDstring_161() {	/* trace fillvector */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYstring,44,1,7);
  lRet:  return (aRet);}}

