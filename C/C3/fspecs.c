/* GELL 15.26: source file for the module: "fspecs" */
/*             translation done:           "Sat Oct   7 17 20:53:28 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "fspecs.h" 

static Ptr GLfspecs_1(void) {	/* startmodule */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXini_spec); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_spec(void) {	/* ini_spec */
   {	register Ptr aRet;
	{ llrt_inisymb ((Ptr) 8, (Ptr) "schedule", ((Ptr) GXschedule), (Ptr) &GMschedule, (Ptr) GFschedule);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "suspend", ((Ptr) GXsuspend), (Ptr) &GMsuspend, (Ptr) GFsuspend);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "resume", ((Ptr) GXresume), (Ptr) &GMresume, (Ptr) GFresume);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "tagbody", ((Ptr) GXtagbody), (Ptr) &GMtagbody, (Ptr) GFtagbody);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) "go", ((Ptr) GXgo), (Ptr) &GMgo, (Ptr) GFgo);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "block", ((Ptr) GXblock), (Ptr) &GMblock, (Ptr) GFblock);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "return", ((Ptr) GXllret), (Ptr) &GMllret, (Ptr) GFllret);}
	{ llrt_inisymb ((Ptr) 11, (Ptr) "return-from", ((Ptr) GXllretf), (Ptr) &GMllretf, (Ptr) GFllretf);}
	{ llrt_inicst ((Ptr) 4, (Ptr) "llcp", (Ptr) &GMkllcp);}
	GIcpkgc = GMkllcp;
	{ llrt_inisymb ((Ptr) 6, (Ptr) "cbind0", ((Ptr) GXcbind0), (Ptr) &GMcbind0, (Ptr) GFcbind0);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "cbind1", ((Ptr) GXcbind1), (Ptr) &GMcbind1, (Ptr) GFcbind1);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "cbind2", ((Ptr) GXcbind2), (Ptr) &GMcbind2, (Ptr) GFcbind2);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "cbind3", ((Ptr) GXcbind3), (Ptr) &GMcbind3, (Ptr) GFcbind3);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "cbindn", ((Ptr) GXcbindn), (Ptr) &GMcbindn, (Ptr) GFcbindn);}
	GIa1 = ((Ptr) GXunbind1);
	(--GIsp)->Val = ((Ptr) GLfspecs_2);
	{aRet = ((Ptr) GXloc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_2(void) {	/* ret_call_loc_1 */
   {	register Ptr aRet;
	GIa2 = GMcbindn;
	GIa2->Val = GIa1;
	{ llrt_inisymb ((Ptr) 6, (Ptr) "cbindl", ((Ptr) GXcbindl), (Ptr) &GMcbindl, (Ptr) GFcbindl);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "cbinds", ((Ptr) GXcbinds), (Ptr) &GMcbinds, (Ptr) GFcbinds);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "exit", ((Ptr) GXcexit), (Ptr) &GMcexit, (Ptr) GFcexit);}
	{ llrt_inisymb ((Ptr) 3, (Ptr) "tag", ((Ptr) GXctag), (Ptr) &GMctag, (Ptr) GFctag);}
	GIa1 = ((Ptr) GXunbind3);
	(--GIsp)->Val = ((Ptr) GLfspecs_3);
	{aRet = ((Ptr) GXloc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_3(void) {	/* ret_call_loc_2 */
   {	register Ptr aRet;
	GIa2 = GMctag;
	GIa2->Val = GIa1;
	{ llrt_inisymb ((Ptr) 4, (Ptr) "prot", ((Ptr) GXcprot), (Ptr) &GMcprot, (Ptr) GFcprot);}
	GIa1 = ((Ptr) GXunbind7);
	(--GIsp)->Val = ((Ptr) GLfspecs_4);
	{aRet = ((Ptr) GXloc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_4(void) {	/* ret_call_loc_3 */
   {	register Ptr aRet;
	GIa2 = GMcprot;
	GIa2->Val = GIa1;
	{ llrt_inisymb ((Ptr) 4, (Ptr) "lock", ((Ptr) GXcmplock), (Ptr) &GMcmplock, (Ptr) GFcmplock);}
	GIa1 = ((Ptr) GXunbind5);
	(--GIsp)->Val = ((Ptr) GLfspecs_5);
	{aRet = ((Ptr) GXloc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_5(void) {	/* ret_call_loc_4 */
   {	register Ptr aRet;
	GIa2 = GMcmplock;
	GIa2->Val = GIa1;
	{ llrt_inisymb ((Ptr) 8, (Ptr) "schedule", ((Ptr) GXcsched), (Ptr) &GMcsched, (Ptr) GFcsched);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "block", ((Ptr) GXcblock), (Ptr) &GMcblock, (Ptr) GFcblock);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "retfrom", ((Ptr) GXcretfr), (Ptr) &GMcretfr, (Ptr) GFcretfr);}
	{ llrt_inisymb ((Ptr) 2, (Ptr) "go", ((Ptr) GXcgo), (Ptr) &GMcgo, (Ptr) GFcgo);}
	{ llrt_inisymb ((Ptr) 7, (Ptr) "tagbody", ((Ptr) GXctagbody), (Ptr) &GMctagbody, (Ptr) GFctagbody);}
	{ llrt_inisymb ((Ptr) 8, (Ptr) "ffuncall", ((Ptr) GXcffuncall), (Ptr) &GMcffuncall, (Ptr) GFcffuncall);}
	{ llrt_inisymb ((Ptr) 15, (Ptr) "with-interrupts", ((Ptr) GXcwithit), (Ptr) &GMcwithit, (Ptr) GFcwithit);}
	{ llrt_inisymb ((Ptr) 18, (Ptr) "without-interrupts", ((Ptr) GXcwithnoit), (Ptr) &GMcwithnoit, (Ptr) GFcwithnoit);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "nlist", ((Ptr) GXllcpnlist), (Ptr) &GMllcpnlist, (Ptr) GFllcpnlist);}
	{ llrt_inisymb ((Ptr) 6, (Ptr) "errwna", ((Ptr) GXllcperwna), (Ptr) &GMllcperwna, (Ptr) GFllcperwna);}
	{ llrt_inicst ((Ptr) 5, (Ptr) "dlink", (Ptr) &GMddlink);}
	GIa1 = ((Ptr) &GIdlink);
	(--GIsp)->Val = ((Ptr) GLfspecs_6);
	{aRet = ((Ptr) GXloc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_6(void) {	/* ret_call_loc_5 */
   {	register Ptr aRet;
	GIa2 = GMddlink;
	GIa2->Val = GIa1;
	{ llrt_inicst ((Ptr) 5, (Ptr) "llink", (Ptr) &GMdllink);}
	GIa1 = ((Ptr) &GIllink);
	(--GIsp)->Val = ((Ptr) GLfspecs_7);
	{aRet = ((Ptr) GXloc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_7(void) {	/* ret_call_loc_6 */
   {	register Ptr aRet;
	GIa2 = GMdllink;
	GIa2->Val = GIa1;
	{ llrt_inicst ((Ptr) 7, (Ptr) "itcount", (Ptr) &GMditcnt);}
	GIa1 = ((Ptr) &GIitcount);
	(--GIsp)->Val = ((Ptr) GLfspecs_8);
	{aRet = ((Ptr) GXloc); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_8(void) {	/* ret_call_loc_7 */
   {	register Ptr aRet;
	GIa2 = GMditcnt;
	GIa2->Val = GIa1;
	GIcpkgc = GMllsystem;
	{ llrt_inicst ((Ptr) 1, (Ptr) "n", (Ptr) &GMnvar);}
	GIa2 = GIa1;
	 GIa2 = llrt_cons (GIa2, GInil);
	GIa1->Val = GMundef;
	(GIa1 + 4)->Val = GIa2;
	GIcpkgc = GInil;
	{ llrt_inisymb ((Ptr) 4, (Ptr) "fibd", ((Ptr) GXfibd), (Ptr) &GMfibd, (Ptr) GFfibd);}
	{ llrt_inisymb ((Ptr) 4, (Ptr) "fibl", ((Ptr) GXfibl), (Ptr) &GMfibl, (Ptr) GFfibl);}
	{ llrt_inisymb ((Ptr) 5, (Ptr) "fibml", ((Ptr) GXfibml), (Ptr) &GMfibml, (Ptr) GFfibml);}
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXschedule(void) {	/* schedule */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (rSp < GImstack)	{aRet = ((Ptr) GXerrfs); goto lRet;}
	(--rSp)->Val = GIa1->Val;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind8);
	GIdlink = rSp;
	GIerrname = GMschedule;
	{aRet = ((Ptr) GXevexpg); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXsuspend(void) {	/* suspend */
   {	register Ptr aRet;
	GIsavits = GIitstate;
	GIitstate = (Ptr) 0;
	GIa1 = GInil;
	{aRet = ((Ptr) GLfspecs_9); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_10(void) {	/* sus000 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	GIa2 = rA2; rA2 = llrt_cons (GIa4, rA2);
	GIa2 = rA2; GIa1 = llrt_cons (rA2, GIa1);
	{aRet = ((Ptr) GLfspecs_9); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLfspecs_9(void) {	/* sus00 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
	rA3 = GIdlink;
	rA2 = rNil;
	goto l_sus02;
l_sus01:
	rA4 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_cons (rA4, rA2);
l_sus02:
	rA4 = rSp;
	if (rA4 != rA3)	goto l_sus01;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
	rA2 = rNil;
	rA4 = (rSp++)->Val;
	GIdlink = (rSp++)->Val;
	if (rA4 == ((Ptr) GXunbind0))	{aRet = ((Ptr) GXerres); goto lRet;}
	if (rA4 == ((Ptr) GXunbind1))	goto l_susb1;
	if (rA4 == ((Ptr) GXunbind2))	{aRet = ((Ptr) GLfspecs_11); goto lRet;}
	if (rA4 == ((Ptr) GXunbind3))	{aRet = ((Ptr) GLfspecs_12); goto lRet;}
	if (rA4 == ((Ptr) GXunbind4))	{aRet = ((Ptr) GLfspecs_13); goto lRet;}
	if (rA4 == ((Ptr) GXunbind5))	{aRet = ((Ptr) GLfspecs_12); goto lRet;}
	if (rA4 == ((Ptr) GXunbind6))	{aRet = ((Ptr) GLfspecs_12); goto lRet;}
	if (rA4 == ((Ptr) GXunbind7))	{aRet = ((Ptr) GLfspecs_12); goto lRet;}
	if (rA4 == ((Ptr) GXunbind8))	{aRet = ((Ptr) GLfspecs_14); goto lRet;}
	if (rA4 == ((Ptr) GXunbind9))	{aRet = ((Ptr) GLfspecs_12); goto lRet;}
	if (rA4 == ((Ptr) GXunbind10))	{aRet = ((Ptr) GLfspecs_12); goto lRet;}
	llrt_ttyout((Fix) 13, " error SUSPN ");
	{aRet = ((Ptr) GXerres); goto lRet;}
l_susb1:
	rA2 = (rSp + 2)->Val;
	(--rSp)->Val = ((Ptr) GLfspecs_15);
	{aRet = ((Ptr) GLfspecs_16); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLfspecs_15(void) {	/* ret_call_sus100_8 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
	GIsavea1 = rA1;
	rA4 = (rSp + 3)->Val;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) 4));
	rA3 = (Ptr) 0;
	rA2 = GInil;
l_susb11:
	rA1 = (rSp + (Fix) (rA3))->Val;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_cons (rA1, rA2);
	rA3 = (Ptr) ((UFix) ((Fix) (rA3) + (Fix) (1)));
l_susb12:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux > 0) 	goto l_susb11;
		else rA4 = (Ptr) 0;}
	rA1 = GIsavea1;
	rA3 = ((Ptr) GLfspecs_17);
	(--rSp)->Val = GIdlink;
	{aRet = ((Ptr) GXunbinp1); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLfspecs_17(void) {	/* susb13 */
   {	register Ptr aRet;
	GIa4 = ((Ptr) GXunbind1);
	{aRet = ((Ptr) GLfspecs_10); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_16(void) {	/* sus100 */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
l_GLfspecs_16:
	if ((long) rA2 < (long) GIbcons)	{aRet = ((Ptr) GLfspecs_18); goto lRet;}
	(--rSp)->Val = rA2->Val;
	rA2 = (rA2 + 1)->Val;
	(--rSp)->Val = ((Ptr) GLfspecs_19);
	goto l_GLfspecs_16;
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLfspecs_19(void) {	/* ret_call_sus100_9 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = GIa2;
		GIa2 = aux;}
	(--rSp)->Val = ((Ptr) GLfspecs_20);
	{aRet = ((Ptr) GLfspecs_16); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfspecs_20(void) {	/* ret_call_sus100_10 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa3 = (rSp++)->Val;
	GIsp = rSp; GIa2 = llrt_cons (GIa2, GIa3);
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfspecs_18(void) {	/* sus101 */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	if (rA2 == GInil)	{ aRet = (rSp++)->Val; goto lRet;}
	rA2 = rA2->Val;
l_sus102:
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLfspecs_11(void) {	/* susb2 */
   {	register Ptr aRet, rSp, rA2, rA3, rA4;
	rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
l_GLfspecs_11:
	rA3 = (rSp++)->Val;
	if (rA3 == (Ptr) 0)	goto l_sus23;
	{register UFix aux;
		aux = (UFix) ((rA3 + 6)->Val);
		rA4 = (Ptr) aux;}
	GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_cons (rA4, rA2);
	rA4 = (rSp++)->Val;
	{register int aux1, aux2;
		aux1 = (int) ((rA3 + 6)->Val);
		aux1 = aux1 & HIGHTMASK;
		aux2 = (int) (rA4);
		aux1 = aux1 | aux2;
		(rA3 + 6)->Val = (Ptr) aux1;}
	GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_cons ((rA3 + 2)->Val, rA2);
	(rA3 + 2)->Val = (rSp++)->Val;
	GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_cons (rA3, rA2);
	goto l_GLfspecs_11;
l_sus23:
	rA4 = ((Ptr) GXunbind2);
	{aRet = ((Ptr) GLfspecs_10); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLfspecs_12(void) {	/* susb10 */
   {	register Ptr aRet;
	GIa2 = (GIsp++)->Val;
	{aRet = ((Ptr) GLfspecs_10); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_13(void) {	/* susb4 */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	GIa3 = (rSp++)->Val;
	rA2 = (rSp++)->Val;
	GIsp = rSp; GIa2 = rA2; rA2 = llrt_cons (GIa3, rA2);
	{aRet = ((Ptr) GLfspecs_10); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLfspecs_14(void) {	/* susb8 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	GIa3 = rSp->Val;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind8);
	GIdlink = rSp;
	GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
	GIa2 = rA1;
	rA1 = GIa3;
	GIitstate = GIsavits;
	{aRet = ((Ptr) GXapply); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXresume(void) {	/* resume */
   {	register Ptr aRet;
	GIsavits = GIitstate;
	GIitstate = (Ptr) 0;
	if (GIa1 == GInil)	{aRet = ((Ptr) GLfspecs_21); goto lRet;}
	{aRet = ((Ptr) GLfspecs_22); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_22(void) {	/* restes */
   {	register Ptr aRet, rA3;
	rA3 = GIa3;
	GIsp = GIdlink;
	rA3 = GIsp->Val;
	if (rA3 == ((Ptr) GXunbind8))	{aRet = ((Ptr) GLfspecs_23); goto lRet;}
	rA3 = ((Ptr) GLfspecs_22);
	{aRet = ((Ptr) GXunbinp); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLfspecs_24(void) {	/* res00 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
	rA2 = rA1->Val;
	rA1 = (rA1 + 1)->Val;
	rA3 = rA2->Val;
	rA2 = (rA2 + 1)->Val;
	if (((Ptr) GXunbind2) == rA3)	{aRet = ((Ptr) GLfspecs_25); goto lRet;}
	if (((Ptr) GXunbind4) == rA3)	{aRet = ((Ptr) GLfspecs_26); goto lRet;}
	if (((Ptr) GXunbind1) != rA3)	{aRet = ((Ptr) GLfspecs_27); goto lRet;}
l_res11:
	if (rA2 == GInil)	goto l_res12;
	(--rSp)->Val = rA2->Val;
	rA2 = (rA2 + 1)->Val;
	goto l_res11;
l_res12:
	GIllink = rSp->Val;
	rA2 = rA1->Val;
	(--rSp)->Val = (rA1 + 1)->Val;
	rA1 = (rSp + 3)->Val;
	(--rSp)->Val = ((Ptr) GLfspecs_28);
	{aRet = ((Ptr) GXdeset); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLfspecs_28(void) {	/* ret_call_deset_11 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind1);
	GIdlink = rSp;
	{aRet = ((Ptr) GLfspecs_23); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfspecs_25(void) {	/* res20 */
   {	register Ptr aRet, rSp, rA2, rA3, rA4;
	rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	(--rSp)->Val = (Ptr) 0;
l_res21:
	if (rA2 == GInil)	goto l_res22;
	rA3 = rA2->Val;
	rA2 = (rA2 + 1)->Val;
	(--rSp)->Val = (rA3 + 2)->Val;
	(rA3 + 2)->Val = rA2->Val;
	rA2 = (rA2 + 1)->Val;
	{register UFix aux;
		aux = (UFix) ((rA3 + 6)->Val);
		rA4 = (Ptr) aux;}
	(--rSp)->Val = rA4;
	rA4 = rA2->Val;
	{register int aux1, aux2;
		aux1 = (int) ((rA3 + 6)->Val);
		aux1 = aux1 & HIGHTMASK;
		aux2 = (int) (rA4);
		aux1 = aux1 | aux2;
		(rA3 + 6)->Val = (Ptr) aux1;}
	rA2 = (rA2 + 1)->Val;
	(--rSp)->Val = rA3;
	goto l_res21;
l_res22:
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind2);
	GIdlink = rSp;
	{aRet = ((Ptr) GLfspecs_23); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLfspecs_26(void) {	/* res40 */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	(--GIsp)->Val = (rA2 + 1)->Val;
	rA2 = rA2->Val;
	{aRet = ((Ptr) GLfspecs_27); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLfspecs_27(void) {	/* resn1 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	(--rSp)->Val = GIa2;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = GIa3;
	GIdlink = rSp;
	{aRet = ((Ptr) GLfspecs_23); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfspecs_23(void) {	/* resfin */
   {	register Ptr aRet, rSp, rA1, rA2, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
	rA2 = rA1->Val;
	rA1 = (rA1 + 1)->Val;
l_res14:
	if (rA2 == rNil)	goto l_res15;
	(--rSp)->Val = rA2->Val;
	rA2 = (rA2 + 1)->Val;
	goto l_res14;
l_res15:
	if ((rA1 + 1)->Val != rNil)	{aRet = ((Ptr) GLfspecs_24); goto lRet;}
	{aRet = ((Ptr) GLfspecs_21); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLfspecs_21(void) {	/* resso */
   {	register Ptr aRet, rNil;
	rNil = GInil;
	GIa2 = rNil;
	GIa3 = rNil;
	GIa4 = rNil;
	GIitstate = GIsavits;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtagbody(void) {	/* tagbody */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBcons;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
	if ((long) rA1 < (long) rBcons)	{aRet = ((Ptr) GLfspecs_29); goto lRet;}
	rA3 = rA1;
	rA4 = (Ptr) 0;
l_tagbdr2:
	rA2 = rA3->Val;
	rA3 = (rA3 + 1)->Val;
	if ((long) rA2 >= (long) rBcons)	goto l_tagbdr3;
	(--rSp)->Val = rA3;
	(--rSp)->Val = rA2;
	rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
l_tagbdr3:
	if ((long) rA3 >= (long) rBcons)	goto l_tagbdr2;
	(--rSp)->Val = rA4;
	rA2 = (Ptr) 0;
	GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA2 = llrt_cons (rA2, GInil);
	(--rSp)->Val = rA2;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind9);
	GIdlink = rSp;
	(rA2 + 1)->Val = GIdlink;
	GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; GIllink = llrt_cons (rA2, GIllink);
	rA2 = rA1;
	{aRet = ((Ptr) GLfspecs_30); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLfspecs_31(void) {	/* tagbd2 */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	GIa1 = rA2->Val;
	if ((long) GIa1 < (long) GIbcons)	{aRet = ((Ptr) GLfspecs_32); goto lRet;}
	(--rSp)->Val = rA2;
	(--rSp)->Val = ((Ptr) GLfspecs_33);
	if (GIevalst != GInil)	{aRet = ((Ptr) GXevalt); goto lRet;}
	{aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfspecs_33(void) {	/* ret_call_evala1_12 */
   {	register Ptr aRet;
	GIa2 = (GIsp++)->Val;
	{aRet = ((Ptr) GLfspecs_32); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_32(void) {	/* tagbd3 */
   {	register Ptr aRet;
	GIa2 = (GIa2 + 1)->Val;
	{aRet = ((Ptr) GLfspecs_30); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_30(void) {	/* tagbd4 */
   {	register Ptr aRet;
	if ((long) GIa2 >= (long) GIbcons)	{aRet = ((Ptr) GLfspecs_31); goto lRet;}
	{aRet = ((Ptr) GLfspecs_29); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_29(void) {	/* tagbdr */
   {	register Ptr aRet;
	GIa1 = GInil;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXgo(void) {	/* go */
   {	register Ptr aRet;
	GIa1 = GIa1->Val;
	{aRet = ((Ptr) GLfspecs_34); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_34(void) {	/* llgof1 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA4 = GIllink;
	goto l_llgof6;
l_llgof2:
	rA3 = rA4->Val;
	if (rA3->Val != (Ptr) 0)	goto l_llgof5;
	rA2 = (rA3 + 1)->Val;
	if (rA2 == GInil)	goto l_llgof5;
	(--rSp)->Val = rA4;
	(--rSp)->Val = rA2;
	rA2 += (Fix) 3;
	rA4 =  (rA2++)->Val;
	goto l_llgof4;
l_llgof3:
	rA3 = rA2->Val;
	if (rA3 == rA1)	goto l_llgof7;
	rA2 += (Fix) 2;
l_llgof4:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_llgof3;}
	rSp += (Fix) 1;
	rA4 = (rSp++)->Val;
l_llgof5:
	rA4 = (rA4 + 1)->Val;
l_llgof6:
	if ((long) rA4 >= (long) GIbcons)	goto l_llgof2;
	rA2 = GMgo;
	{aRet = ((Ptr) GXerrnab); goto lRet;}
l_llgof7:
	rA2 += (Fix) 1;
	rA2 = rA2->Val;
	rA1 = rSp->Val;
	{aRet = ((Ptr) GLfspecs_35); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLfspecs_35(void) {	/* llgof8 */
   {	register Ptr aRet, rA2, rA4;
	rA2 = GIa2; rA4 = GIa4;
	rA4 = GIdlink;
	GIsp = rA4;
	if (rA4 == GIa1)	goto l_llgof9;
	GIa3 = ((Ptr) GLfspecs_35);
	{aRet = ((Ptr) GXunbinp); goto lRet;}
l_llgof9:
	if ((rA2 >= GIbnumb) && (rA2 < GIecons))	{aRet = ((Ptr) GLfspecs_30); goto lRet;}
	{aRet = rA2; goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

extern Ptr GXblock(void) {	/* block */
   {	register Ptr aRet, rSp, rA2, rA3;
	rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
	rA2 = GIa1->Val;
	if ((rA2 < GIbsymb) || (rA2 >= GIbcons))	{aRet = ((Ptr) GLfspecs_36); goto lRet;}
	GIsp = rSp; GIa2 = rA2; GIa3 = rA3; rA2 = llrt_cons (rA2, GInil);
	rA3 = rA2;
	GIsp = rSp; GIa2 = rA2; GIa3 = rA3; rA2 = llrt_cons ((Ptr) 1, rA2);
	(--rSp)->Val = rA3;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind10);
	GIdlink = rSp;
	(rA3 + 1)->Val = GIdlink;
	GIsp = rSp; GIa2 = rA2; GIa3 = rA3; GIllink = llrt_cons (rA2, GIllink);
	GIerrname = GMblock;
	{aRet = ((Ptr) GXevexpg); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLfspecs_36(void) {	/* blckerr */
   {	register Ptr aRet;
	GIa1 = GIa2;
	GIa2 = GMblock;
	{aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllret(void) {	/* return */
   {	register Ptr aRet;
	GIa2 = GInil;
	(--GIsp)->Val = GIa2;
	GIerrname = GMllret;
	{aRet = ((Ptr) GLfspecs_37); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllretf(void) {	/* return-from */
   {	register Ptr aRet, rA1;
	rA1 = GIa1;
	(--GIsp)->Val = rA1->Val;
	rA1 = (rA1 + 1)->Val;
	GIerrname = GMllretf;
	{aRet = ((Ptr) GLfspecs_37); goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLfspecs_37(void) {	/* llretf1 */
   {	register Ptr aRet;
	(--GIsp)->Val = ((Ptr) GLfspecs_38);
	{aRet = ((Ptr) GXevprogn); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_38(void) {	/* ret_call_evprogn_13 */
   {	register Ptr aRet;
	GIa2 = (GIsp++)->Val;
	{aRet = ((Ptr) GLfspecs_39); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_39(void) {	/* llretg */
   {	register Ptr aRet, rA1, rA2, rA3, rA4;
	rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA4 = GIllink;
	goto l_llretf4;
l_llretf2:
	rA3 = rA4->Val;
	if (rA3->Val != (Ptr) 1)	goto l_llretf3;
	rA3 = (rA3 + 1)->Val;
	if (rA3->Val == rA2)	goto l_llretf6;
l_llretf3:
	rA4 = (rA4 + 1)->Val;
l_llretf4:
	if ((long) rA4 >= (long) GIbcons)	goto l_llretf2;
	rA1 = rA2;
	rA2 = GMllretf;
	{aRet = ((Ptr) GXerrnab); goto lRet;}
l_llretf6:
	if ((rA3 + 1)->Val != GInil)	goto l_llretr2;
	rA1 = rA2;
	rA2 = GMllretf;
	{aRet = ((Ptr) GXerrxia); goto lRet;}
l_llretr2:
	rA2 = (rA3 + 1)->Val;
	{aRet = ((Ptr) GLfspecs_40); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLfspecs_40(void) {	/* llretr3 */
   {	register Ptr aRet, rSp, rA3, rA4;
	rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
	rA4 = GIdlink;
	rSp = rA4;
	rA3 = rSp->Val;
	if (rA3 != ((Ptr) GXunbind10))	goto l_llretr4;
	if (GIa2 == rA4)	{ aRet = (rSp++)->Val; goto lRet;}
l_llretr4:
	rA3 = ((Ptr) GLfspecs_40);
	{aRet = ((Ptr) GXunbinp); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXcbind0(void) {	/* cbind0 */
   {	register Ptr aRet, rSp, rA4, rNil;
	rSp = GIsp; rA4 = GIa4; rNil = GInil;
	if (GIitcount != 0) {GIsp = rSp; llrt_ithard ();}
	if ((rSp + 1)->Val != ((Ptr) GXunbind1))	goto l_cbind0g;
	if ((rSp + 4)->Val != rA4)	goto l_cbind0g;
	GIllink = rNil;
	{aRet = (rSp++)->Val; goto lRet;}
l_cbind0g:
	if (rSp < GImstack)	{aRet = ((Ptr) GXerrfs); goto lRet;}
	GIa2 = (rSp++)->Val;
	(--rSp)->Val = (Ptr) 0;
	(--rSp)->Val = rNil;
	(--rSp)->Val = rA4;
	(--rSp)->Val = GIllink;
	GIllink = rNil;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind1);
	GIdlink = rSp;
	{aRet = GIa2; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcbind1(void) {	/* cbind1 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
	if (GIitcount != 0) {GIsp = rSp; GIa2 = rA2; GIa4 = rA4; llrt_ithard ();}
	if ((rSp + 1)->Val != ((Ptr) GXunbind1))	goto l_cbind1g;
	if ((rSp + 4)->Val != rA4)	goto l_cbind1g;
	rA2 = rA3->Val;
	rA2->Val = rA1;
	GIllink = rNil;
	{aRet = (rSp++)->Val; goto lRet;}
l_cbind1g:
	if (rSp < GImstack)	{aRet = ((Ptr) GXerrfs); goto lRet;}
	rA2 = rSp->Val;
	(--rSp)->Val = (Ptr) 1;
	(--rSp)->Val = rA3;
	(--rSp)->Val = rA4;
	rA4 = rA3->Val;
	(rSp + 3)->Val = rA4->Val;
	rA4->Val = rA1;
	(--rSp)->Val = GIllink;
	GIllink = rNil;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind1);
	GIdlink = rSp;
	{aRet = rA2; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXcbind2(void) {	/* cbind2 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
	if (GIitcount != 0) {GIsp = rSp; GIa3 = rA3; GIa4 = rA4; llrt_ithard ();}
	if ((rSp + 1)->Val != ((Ptr) GXunbind1))	goto l_cbind2g;
	if ((rSp + 4)->Val != rA4)	goto l_cbind2g;
	rA4 = rA3->Val;
	rA4->Val = rA1;
	rA4 = (rA3 + 1)->Val;
	rA3 = rA4->Val;
	rA3->Val = rA2;
	GIllink = rNil;
	{aRet = (rSp++)->Val; goto lRet;}
l_cbind2g:
	if (rSp < GImstack)	{aRet = ((Ptr) GXerrfs); goto lRet;}
	GIsavea2 = rSp->Val;
	rSp -= (Fix) 1;
	(--rSp)->Val = (Ptr) 2;
	(--rSp)->Val = rA3;
	(--rSp)->Val = rA4;
	rA4 = rA3->Val;
	(rSp + 4)->Val = rA4->Val;
	rA4->Val = rA1;
	rA4 = (rA3 + 1)->Val;
	rA4 = rA4->Val;
	(rSp + 3)->Val = rA4->Val;
	rA4->Val = rA2;
	(--rSp)->Val = GIllink;
	GIllink = rNil;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind1);
	GIdlink = rSp;
	{aRet = GIsavea2; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXcbind3(void) {	/* cbind3 */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
	if (GIitcount != 0) {GIsp = rSp; GIa3 = rA3; GIa4 = rA4; llrt_ithard ();}
	GIsavea3 = rA3;
	GIsavea2 = (rSp++)->Val;
	GIsavea4 = (rSp++)->Val;
	if (rSp->Val != ((Ptr) GXunbind1))	goto l_cbind3g;
	if ((rSp + 3)->Val != GIsavea4)	goto l_cbind3g;
	rA3 = rA4->Val;
	rA3->Val = rA1;
	rA4 = (rA4 + 1)->Val;
	rA3 = rA4->Val;
	rA3->Val = rA2;
	rA4 = (rA4 + 1)->Val;
	rA4 = rA4->Val;
	rA3 = GIsavea3;
	rA4->Val = rA3;
	GIllink = rNil;
	{aRet = GIsavea2; goto lRet;}
l_cbind3g:
	if (rSp < GImstack)	{aRet = ((Ptr) GXerrfs); goto lRet;}
	rSp -= (Fix) 3;
	GIsavea1 = rA4;
	rA3 = rA4->Val;
	(rSp + 2)->Val = rA3->Val;
	rA3->Val = rA1;
	rA4 = (rA4 + 1)->Val;
	rA3 = rA4->Val;
	(rSp + 1)->Val = rA3->Val;
	rA3->Val = rA2;
	rA4 = (rA4 + 1)->Val;
	rA4 = rA4->Val;
	rSp->Val = rA4->Val;
	rA3 = GIsavea3;
	rA4->Val = rA3;
	(--rSp)->Val = (Ptr) 3;
	(--rSp)->Val = GIsavea1;
	(--rSp)->Val = GIsavea4;
	(--rSp)->Val = GIllink;
	GIllink = rNil;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind1);
	GIdlink = rSp;
	{aRet = GIsavea2; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXcbindn(void) {	/* cbindn */
   {	register Ptr aRet;
	if (GIitcount != 0) { llrt_ithard ();}
	if (GIsp < GImstack)	{aRet = ((Ptr) GXerrfs); goto lRet;}
	GIintllink = GInil;
	{aRet = ((Ptr) GLfspecs_41); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfspecs_41(void) {	/* cbindnc */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	GIintret = (GIsp++)->Val;
l_cbindnn:
	GIsavea2 = GIa3;
	GIsavea4 = GIa4;
	GIsavea1 = rA2;
	GIerrname = rA2;
	{aRet = ((Ptr) GXevbndext); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXcbindl(void) {	/* cbindl */
   {	register Ptr aRet;
	if (GIitcount != 0) { llrt_ithard ();}
	if (GIsp < GImstack)	{aRet = ((Ptr) GXerrfs); goto lRet;}
	GIintllink = GIllink;
	{aRet = ((Ptr) GLfspecs_41); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXcbinds(void) {	/* cbinds */
   {	register Ptr aRet, rA2;
	rA2 = GIa2;
	if (GIitcount != 0) { llrt_ithard ();}
	GIintret = (GIsp++)->Val;
	GIintllink = GInil;
	GIsavea2 = GIa3;
	GIsavea1 = rA2;
	GIerrname = rA2;
	{aRet = ((Ptr) GXbndtrbex); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXctag(void) {	/* tag */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp++)->Val;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind3);
	GIdlink = rSp;
	{aRet = GIa2; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcprot(void) {	/* prot */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXcmplock(void) {	/* lock */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp++)->Val;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind5);
	GIdlink = rSp;
	{aRet = GIa2; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcsched(void) {	/* #:gell:schedule */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	if (rSp < GImstack)	{aRet = ((Ptr) GXerrfs); goto lRet;}
	GIa2 = (rSp++)->Val;
	(--rSp)->Val = GIa1;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind8);
	GIdlink = rSp;
	{aRet = GIa2; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcblock(void) {	/* #:gell:block */
   {	register Ptr aRet, rSp, rA1, rA2, rA3;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
	rA2 = rA1;
	rA1 = (rSp++)->Val;
	if ((rA2 < GIbsymb) || (rA2 >= GIbcons))	{aRet = ((Ptr) GLfspecs_36); goto lRet;}
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA2 = llrt_cons (rA2, GInil);
	rA3 = rA2;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA2 = llrt_cons ((Ptr) 1, rA2);
	(--rSp)->Val = rA3;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind10);
	GIdlink = rSp;
	(rA3 + 1)->Val = GIdlink;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIllink = llrt_cons (rA2, GIllink);
	{aRet = rA1; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXcexit(void) {	/* exit */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXfindtag); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXcretfr(void) {	/* retfrom */
   {	register Ptr aRet;
	{aRet = ((Ptr) GLfspecs_39); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXcgo(void) {	/* #:gell:go */
   {	register Ptr aRet;
	{aRet = ((Ptr) GLfspecs_34); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXctagbody(void) {	/* #:gell:tagbody */
   {	register Ptr aRet, rSp, rA2;
	rSp = GIsp; rA2 = GIa2;
	GIa1 = (rSp++)->Val;
	rA2 = (Ptr) 0;
	GIsp = rSp; GIa2 = rA2; rA2 = llrt_cons (rA2, GInil);
	(--rSp)->Val = rA2;
	(--rSp)->Val = GIdlink;
	(--rSp)->Val = ((Ptr) GXunbind9);
	GIdlink = rSp;
	(rA2 + 1)->Val = GIdlink;
	GIsp = rSp; GIa2 = rA2; GIllink = llrt_cons (rA2, GIllink);
	{aRet = GIa1; goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

extern Ptr GXcffuncall(void) {	/* ffuncall */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXffuncall); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXcwithit(void) {	/* with-interrupts */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	(--rSp)->Val = GIitstate;
	GIa3 = ((Ptr) GLfspecs_42);
	(--rSp)->Val = ((Ptr) GLfspecs_43);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfspecs_43(void) {	/* ret_call_sysprot_14 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIitstate = (rSp++)->Val;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfspecs_42(void) {	/* cwithit1 */
   {	register Ptr aRet;
	GIitstate = (Ptr) 1;
	{aRet = GIa1; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXcwithnoit(void) {	/* without-interrupts */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	(--rSp)->Val = GIitstate;
	GIa3 = ((Ptr) GLfspecs_44);
	(--rSp)->Val = ((Ptr) GLfspecs_45);
	{aRet = ((Ptr) GXsysprot); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfspecs_45(void) {	/* ret_call_sysprot_15 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa1 = (rSp++)->Val;
	GIitstate = (rSp++)->Val;
	{aRet = GIa3; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfspecs_44(void) {	/* cwithno1 */
   {	register Ptr aRet;
	GIitstate = (Ptr) 0;
	{aRet = GIa1; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXllcpnlist(void) {	/* nlist */
   {	register Ptr aRet, rSp, rA1, rA2, rA3, rA4;
	rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4;
	rA1 = GInil;
	if (rA4 != (Ptr) 0)	goto l_llcpnl1;
	{aRet = (rSp++)->Val; goto lRet;}
l_llcpnl1:
	rA3 = (rSp++)->Val;
	goto l_llcpnl3;
l_llcpnl2:
	rA2 = (rSp++)->Val;
	GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_llcpnl3:
	{register Fix aux;
		aux = (Fix) (rA4) - 1;
		rA4 = (Ptr) ((UFix) aux);
		if (aux >= 0) 	goto l_llcpnl2;}
	{aRet = rA3; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXllcperwna(void) {	/* errwna */
   {	register Ptr aRet;
	GIa3 = GIa1;
	GIa1 = GIa2;
	GIa2 = GIa3;
	{aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfibd(void) {	/* fibd */
   {	register Ptr aRet, rA3;
	rA3 = GIa3;
	rA3 = GMnvar;
	rA3 = (rA3 + 4)->Val;
	GIa4 = GMfibd;
	(--GIsp)->Val = ((Ptr) GLfspecs_46);
	{aRet = ((Ptr) GXcbind1); goto lRet;}
  lRet: GIa3 = rA3; return (aRet);}}

static Ptr GLfspecs_46(void) {	/* ret_call_cbind1_16 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	if (rA1 != (Ptr) 1)	goto l_fibd2;
	rA1 = (Ptr) 1;
	{aRet = (rSp++)->Val; goto lRet;}
l_fibd2:
	if (rA1 != (Ptr) 2)	goto l_fibd3;
	rA1 = (Ptr) 1;
	{aRet = (rSp++)->Val; goto lRet;}
l_fibd3:
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (1)));
	(--rSp)->Val = ((Ptr) GLfspecs_47);
	{aRet = ((Ptr) GXfibd); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfspecs_47(void) {	/* ret_call_fibd_17 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = rA1;
	rA1 = GMnvar;
	rA1 = rA1->Val;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 2));
	(--rSp)->Val = ((Ptr) GLfspecs_48);
	{aRet = ((Ptr) GXfibd); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfspecs_48(void) {	/* ret_call_fibd_18 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp++)->Val;
	GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) + (Fix) (GIa2)));
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXfibl(void) {	/* fibl */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
l_GXfibl:
	(--rSp)->Val = rA1;
	if (rA1 != (Ptr) 1)	goto l_fibl2;
	rA1 = (Ptr) 1;
	{rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
l_fibl2:
	if (rA1 != (Ptr) 2)	goto l_fibl3;
	rA1 = (Ptr) 1;
	{rSp += (Fix) 1; aRet = (rSp++)->Val; goto lRet;}
l_fibl3:
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (1)));
	(--rSp)->Val = ((Ptr) GLfspecs_49);
	goto l_GXfibl;
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfspecs_49(void) {	/* ret_call_fibl_19 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	(--rSp)->Val = rA1;
	rA1 = (rSp + (Fix) 1)->Val;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 2));
	(--rSp)->Val = ((Ptr) GLfspecs_50);
	{aRet = ((Ptr) GXfibl); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfspecs_50(void) {	/* ret_call_fibl_20 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp++)->Val;
	GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) + (Fix) (GIa2)));
l_fibl9:
	rSp += (Fix) 1;
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXfibml(void) {	/* fibml */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
l_GXfibml:
	if ((Fix) (rA1) <= (Fix) 2)	{aRet = ((Ptr) GLfspecs_51); goto lRet;}
	(--rSp)->Val = rA1;
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) (1)));
	(--rSp)->Val = ((Ptr) GLfspecs_52);
	goto l_GXfibml;
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfspecs_52(void) {	/* ret_call_fibml_21 */
   {	register Ptr aRet, rSp, rA1;
	rSp = GIsp; rA1 = GIa1;
	{register Ptr aux;
		aux = rSp->Val;
		rSp->Val = rA1;
		rA1 = aux;}
	rA1 = (Ptr) ((UFix) ((Fix) (rA1) - (Fix) 2));
	(--rSp)->Val = ((Ptr) GLfspecs_53);
	{aRet = ((Ptr) GXfibml); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfspecs_53(void) {	/* ret_call_fibml_22 */
   {	register Ptr aRet, rSp;
	rSp = GIsp;
	GIa2 = (rSp++)->Val;
	GIa1 = (Ptr) ((UFix) ((Fix) (GIa1) + (Fix) (GIa2)));
	{aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfspecs_51(void) {	/* fibmlr */
   {	register Ptr aRet;
	GIa1 = (Ptr) 1;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GDfspecs_54() {	/* trace schedule */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDfspecs_55() {	/* trace suspend */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,3,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_56() {	/* trace resume */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,5,1,6);
  lRet:  return (aRet);}}

static Ptr GDfspecs_57() {	/* trace tagbody */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,7,1,2);
  lRet:  return (aRet);}}

static Ptr GDfspecs_58() {	/* trace go */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,8,1,2);
  lRet:  return (aRet);}}

static Ptr GDfspecs_59() {	/* trace block */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,9,1,2);
  lRet:  return (aRet);}}

static Ptr GDfspecs_60() {	/* trace return */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,10,1,2);
  lRet:  return (aRet);}}

static Ptr GDfspecs_61() {	/* trace return-from */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,11,1,2);
  lRet:  return (aRet);}}

static Ptr GDfspecs_62() {	/* trace cbind0 */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,12,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_63() {	/* trace cbind1 */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,13,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_64() {	/* trace cbind2 */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,14,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_65() {	/* trace cbind3 */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,15,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_66() {	/* trace cbindn */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,16,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_67() {	/* trace cbindl */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,17,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_68() {	/* trace cbinds */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,18,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_69() {	/* trace tag */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,19,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_70() {	/* trace prot */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,20,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_71() {	/* trace lock */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,21,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_72() {	/* trace #:gell:schedule */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,22,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_73() {	/* trace #:gell:block */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,23,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_74() {	/* trace exit */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,24,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_75() {	/* trace retfrom */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,25,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_76() {	/* trace #:gell:go */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,26,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_77() {	/* trace #:gell:tagbody */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,27,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_78() {	/* trace ffuncall */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,28,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_79() {	/* trace with-interrupts */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,29,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_80() {	/* trace without-interrupts */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,30,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_81() {	/* trace nlist */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,31,1,4);
  lRet:  return (aRet);}}

static Ptr GDfspecs_82() {	/* trace errwna */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,32,1,33);
  lRet:  return (aRet);}}

static Ptr GDfspecs_83() {	/* trace fibd */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,34,1,6);
  lRet:  return (aRet);}}

static Ptr GDfspecs_84() {	/* trace fibl */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,35,1,6);
  lRet:  return (aRet);}}

static Ptr GDfspecs_85() {	/* trace fibml */
   {	register Ptr aRet;
	aRet = llrt_jmpd (GYfspecs,36,1,6);
  lRet:  return (aRet);}}

